#ifndef CTRPLUGINFRAMEWORK_OSD_HPP
#define CTRPLUGINFRAMEWORK_OSD_HPP

#include <Headers.h>

namespace CTRPluginFramework {
    using GSPFormat = GSPGPU_FramebufferFormat;

    // Set by the plugin's "Show ON/OFF notifications" checkbox; read by the menu's entry-toggle
    // handler (PluginMenuHome::_TriggerEntry) to decide whether to pop a toast the INSTANT a
    // built-in cheat is toggled. Firing there (not from the cheat's per-frame GameFunc) makes the
    // toast appear as soon as the menu closes instead of seconds later.
    extern bool g_entryToggleNotif;

    // Set by the plugin's "Transparent Notifications" checkbox (Screen Overlays); read by OSDImpl's toast
    // draw loop to pick the no-background DrawString overload (glyph pixels only) instead of the solid-box
    // one. Default false = the classic black-background toast.
    extern bool g_notifTransparentBg;

    // The user's configured "Card stat HIGHER/LOWER" key (Tools > Hotkeys). Mirrors
    // Preferences::CardStatHotkeys (which persists it in Data.bin) so PLUGIN code — which cannot
    // include the impl-only Preferences.hpp — can read it. Used ONLY by the Party Summary card
    // view (PKHeX.cpp ViewPartyInfo) to flip between revealing the party's highest vs lowest value
    // of the selected stat. Default L.
    extern u32 g_cardStatHotkey;

    // The user's PokeMart "PAY/FREE" choice (0 = FREE, add at no cost; 1 = PAY, items cost Money).
    // Persisted in Data.bin (header.reserved[4]) so it survives game sessions, and mirrored here so
    // PLUGIN code — which cannot include the impl-only Preferences.hpp — can both read it every frame
    // (Codes.cpp BagHub) and change it. The plugin MUST flip it through SetBagPayMode() (not a raw
    // assignment) so Preferences is marked dirty and the new value is written on menu close. Default 0.
    extern u32 g_bagPayMode;
    void SetBagPayMode(u32 mode);

    // The Fun Stuff mini-games "FREE/PAID" choice (0 = FREE: you still get items/mons/spawns, but your money
    // never changes; 1 = PAID: real Pokedollars are at stake — entry fees deducted, payouts credited). Persisted
    // in Data.bin (header.reserved[5]) and mirrored here exactly like g_bagPayMode so PLUGIN code (PKHeX.cpp
    // FunHub) can read it every frame and flip it through SetFunPayMode() (which marks Preferences dirty).
    // Default 0 (FREE).
    extern u32 g_funPayMode;
    void SetFunPayMode(u32 mode);

    // Fun Stuff "Higher or Lower" best (longest) streak. Persisted in Data.bin (header.reserved[6]) and mirrored
    // here like the toggles so PLUGIN code (PKHeX.cpp FunHighLow) can read the saved record on entry and update it
    // through SetHiLoBest() when a new record is set. Default 0.
    extern u32 g_hiLoBest;
    void SetHiLoBest(u32 value);

    // Trainer Card gym badges: bit i (0..7) = badge i+1 owned. Set manually by the player — there is no known
    // RAM address for the real in-game badge flags. Persisted in Data.bin (header.reserved[7]) and mirrored here
    // exactly like g_hiLoBest so PLUGIN code (PKHeX.cpp TrainerCard) can read it every frame and flip a bit
    // through SetTrainerBadges(). Default 0 (no badges).
    extern u32 g_trainerBadges;
    void SetTrainerBadges(u32 value);

    // Trainer Card color preview: an index into the plugin's full Theme list (see ThemeColorsAt/ThemeCount in
    // PKHeX.hpp), cycled with Start. PREVIEW ONLY — does not change the plugin's actually-applied theme (that
    // stays whatever Tools > Themes has set). Persisted in Data.bin (header.reserved[8]). Default 0.
    extern u32 g_trainerCardTemplate;
    void SetTrainerCardTemplate(u32 value);

    // Level Cap (nuzlocke) adjustable offset: the cap = next gym leader's ace level + offset. Stored BIASED by +8
    // (so 8 == offset 0, range 0..16 == offset -8..+8) to keep it unsigned in Data.bin (header.reserved[9]).
    // Mirrored here like g_bagPayMode so PLUGIN code (Codes.cpp LevelCapTool / HudCallback) can read it every frame
    // and change it through SetLevelCapOffset() (which marks Preferences dirty). Default 8 (offset 0).
    extern u32 g_levelCapOffset;
    void SetLevelCapOffset(u32 value);

    // Level Cap mode: 0 = Warn (only flag over-cap mons, incl. the live HUD line), 1 = Enforce (Warn + allow the
    // "Enforce now" clamp), 2 = Off (feature idle, HUD line hidden). Persisted in Data.bin (header.reserved[10])
    // and mirrored here like the toggles so PLUGIN code can read/flip it through SetLevelCapMode(). Default 0 (Warn).
    extern u32 g_levelCapMode;
    void SetLevelCapMode(u32 value);

    // Display Enemy Stats: bitmask of which of the 16 per-field toggles (Slot, Species, Gender, ...) are ON.
    // The framework's own generic checkbox persistence is additive-only (it can re-enable a saved-ON entry but
    // never disables one), so a menu that force-enables its toggles at construction (for a "shows everything by
    // default" first run) can never have any of them turn back OFF again. Persisted in Data.bin (header.reserved[11])
    // and mirrored here like g_levelCapMode; 0 = unset (fresh install - CreateEnemyStatsMenu() then defaults to
    // all-ON, same as today) so it's applied once gameplay frames start (Preferences::LoadSettings() has run by
    // then), not at menu-construction time. Changed via SetEnemyStatsMask() (marks Preferences dirty).
    extern u32 g_enemyStatsMask;
    void SetEnemyStatsMask(u32 value);

    // The MenuEntry* of that very "Show ON/OFF notifications" checkbox (stored as void* to avoid a
    // Menu header dependency). _TriggerEntry uses it to (a) update g_entryToggleNotif the instant
    // the checkbox is toggled and (b) give the checkbox a single "Notifications: ON/OFF" toast
    // instead of the generic "<name>: ON/OFF" — avoiding a double toast.
    extern void *g_entryToggleNotifSrc;

    class Screen {
        public:
            bool IsTop;
            bool Is3DEnabled;
            u32 LeftFramebuffer;
            u32 RightFramebuffer;
            u32 Stride;
            u32 BytesPerPixel;
            GSPFormat Format;

            /**
             * \brief Get a pointer to the screen's framebuffer
             * \param posX The position on the screen to point to
             * \param posY The position on the screen to point to
             * \param useRightFb If the function must return a pointer to the right framebuffer
             * \return A pointer to the screen's framebuffer at the desired position
             */
            u8 *GetFramebuffer(u32 posX, u32 posY, bool useRightFb = false) const;

            /**
             * \brief Draw a string using Linux's font
             * \param str The string to draw
             * \param posX The position on screen to draw the string to
             * \param posY The position on screen to draw the string to
             * \param foreground The color of the characters
             * \param background The color of the background
             * \return posY + 10 (line feed)
             */
            u32 Draw(const string &str, u32 posX, u32 posY, const Color &foreground = Color::White, const Color &background = Color::Black) const;

            /**
             * \brief Draw a string using system font (support utf8 strings with special chars & unicode)
             * \param str The string to draw
             * \param posX The position on screen to draw the string to
             * \param posY The position on screen to draw the string to
             * \param foreground The color of the characters
             * \return posY + 16 (line feed)
             */
            u32 DrawSysfont(const string &str, u32 posX, u32 posY, const Color &foreground = Color::White) const;

            /**
             * \brief Draw a rectangle
             * \param posX The position on screen to draw the rectangle
             * \param posY The position on screen to draw the rectangle
             * \param width The width of the rectangle
             * \param height The height of the rectangle
             * \param color The color of the rectangle
             * \param filled If the rectangle is filled or if the function should only draw the border
             */
            void DrawRect(u32 posX, u32 posY, u32 width, u32 height, const Color &color, bool filled = true) const;

            /**
             * \brief Change the color of a pixel at the desired X, Y position
             * \param posX The X position of the pixel to change
             * \param posY The Y position of the pixel to change
             * \param color The new color of the pixel
             */
            void DrawPixel(u32 posX, u32 posY, const Color &color) const;

            /**
             * \brief Get the current color of a pixel at X, Y position
             * \param posX The X position of the pixel to read
             * \param posY The Y position of the pixel to read
             * \param pixel The output color of the pixel
             * \param fromRightFb If the pixel must be read from the right framebuffer
             */
            void ReadPixel(u32 posX, u32 posY, Color &pixel, bool fromRightFb = false) const;

            /**
             * \brief Fades the screen to white the specified amount.
             * \param fadeAmount Amount to fade, range [0, 1]
             */
            void Fade(const float fadeAmount);

        private:
            friend class OSDImpl;
            Screen() {};
        };

        using OSDCallback = bool(*)(const Screen &);

        class OSD {
            public:
            /**
             * \brief Send a notification on the top screen, a notification duration is 5 seconds. A maximum of 50 notifications can be queued
             * \param str Text of the notification
             * \param foreground The color of the text (Default: blank)
             * \param background The color of the background (Default: black)
             * \return 0 if success, -1 if the notification couldn't be added
             */
            static int Notify(const string &str, const Color &foreground = Color::White, const Color &background = Color::Black);

            /**
             * \brief Add a callback to the OSD system which will be called at each game's frame
             * \param cb The callback to add
             */
            static void Run(OSDCallback cb);

            /**
             * \brief Remove a callback from the OSD system
             * \param cb The callback to remove
             */
            static void Stop(OSDCallback cb);

            /**
             * \brief Returns the width in pixels of the specified string
             * \param sysfont Which font will be used to compute the width
             * \param text
             * \return The width in pixels
             */
            static float GetTextWidth(bool sysfont, const string &text);

            static const Screen &GetTopScreen(void);
            static const Screen &GetBottomScreen(void);
            static void SwapBuffers(void);

            static void Lock(void);
            static bool TryLock(void);
            static void Unlock(void);
    };
}

#endif