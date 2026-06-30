#ifndef RNG_HPP
#define RNG_HPP

// Gen 6 RNG reimplementations for the live HUD "RNG Tracking" fields.
// Header-only, plugin-only (no Library dependency). Relies on the includer (Codes.cpp) for u32.
// Source of truth for the algorithms: zaksabeast/PokeReader, reader_core/src/rng/{mt.rs,tiny_mt.rs}.

namespace CTRPluginFramework {

    // Mersenne Twister (MT19937), Gen 6 variant. IMPORTANT: the game stores the *untempered* state words in
    // RAM (it never tempers before use), so next()/current() return mt[index] RAW. A local MT seeded with the
    // game's initial seed therefore reproduces exactly the live reads at (mt_start + index*4), which lets us
    // count the ABSOLUTE advance (the "frame") by stepping this local MT forward until it matches the live word.
    struct Mt19937 {
        u32 mt[624];
        int index;

        void init(u32 seed) {
            mt[0] = seed;
            u32 s = seed;
            for (int i = 1; i < 624; ++i) {
                s = (s ^ (s >> 30)) * 0x6C078965u + (u32)i;   // standard MT19937 init multiplier
                mt[i] = s;
            }
            index = 0;
        }

        void twist() {
            for (int i = 0; i < 227; ++i) {
                u32 y  = (mt[i] & 0x80000000u) | (mt[i + 1] & 0x7FFFFFFFu);
                u32 y1 = y >> 1;
                if (y & 1u) y1 ^= 0x9908B0DFu;
                mt[i] = y1 ^ mt[i + 397];
            }
            for (int i = 227; i < 623; ++i) {
                u32 y  = (mt[i] & 0x80000000u) | (mt[i + 1] & 0x7FFFFFFFu);
                u32 y1 = y >> 1;
                if (y & 1u) y1 ^= 0x9908B0DFu;
                mt[i] = y1 ^ mt[i - 227];
            }
            {
                u32 y  = (mt[623] & 0x80000000u) | (mt[0] & 0x7FFFFFFFu);
                u32 y1 = y >> 1;
                if (y & 1u) y1 ^= 0x9908B0DFu;
                mt[623] = y1 ^ mt[396];
            }
            index = 0;
        }

        // Advance one step and return the new current state (untempered) - matches PokeReader's MT::next().
        u32 next() {
            index++;
            if (index == 624) twist();
            return mt[index];
        }

        u32 current() const { return mt[index]; }
    };

    // TinyMT (Tiny Mersenne Twister), Gen 6 variant. next() is a pure function of the 4-word state, so a
    // snapshot of the live state (read straight from RAM) can be advanced locally to count RELATIVE advances
    // without needing the TinyMT seed (which would require a register-capturing code hook - out of scope here).
    struct TinyMt {
        u32 s[4];

        void next() {
            u32 y = s[3];
            u32 x = (s[0] & 0x7FFFFFFFu) ^ s[1] ^ s[2];
            x ^= x << 1;
            y ^= (y >> 1) ^ x;
            s[0] = s[1];
            s[1] = s[2] ^ ((y & 1u) * 0x8F7011EEu);
            s[2] = x ^ (y << 10) ^ ((y & 1u) * 0xFC78FF1Fu);
            s[3] = y;
        }

        bool equals(const u32 o[4]) const {
            return s[0] == o[0] && s[1] == o[1] && s[2] == o[2] && s[3] == o[3];
        }

        void copyFrom(const u32 o[4]) { s[0] = o[0]; s[1] = o[1]; s[2] = o[2]; s[3] = o[3]; }
    };

}

#endif // RNG_HPP
