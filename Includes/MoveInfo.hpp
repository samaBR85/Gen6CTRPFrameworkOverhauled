#pragma once

// Gen 6 (ORAS) base power & accuracy per move (index = moveID - 1), columns {power, accuracy}.
// Source: Pokemon Showdown current data/moves + cumulative gen8/gen7/gen6 mod overrides (ORAS values,
// reverting Gen 7+ rebalances). 0 = "-" (status/variable-power, or never-miss/no-accuracy-check).
// Parallels movesList[621] in Helpers.hpp (same ID order). Generated table.

namespace CTRPluginFramework {
    static const u8 gMoveInfo[621][2] = {
        {  40, 100 }, // 1 Pound
        {  50, 100 }, // 2 Karate Chop
        {  15,  85 }, // 3 Double Slap
        {  18,  85 }, // 4 Comet Punch
        {  80,  85 }, // 5 Mega Punch
        {  40, 100 }, // 6 Pay Day
        {  75, 100 }, // 7 Fire Punch
        {  75, 100 }, // 8 Ice Punch
        {  75, 100 }, // 9 Thunder Punch
        {  40, 100 }, // 10 Scratch
        {  55, 100 }, // 11 Vise Grip
        {   0,  30 }, // 12 Guillotine
        {  80, 100 }, // 13 Razor Wind
        {   0,   0 }, // 14 Swords Dance
        {  50,  95 }, // 15 Cut
        {  40, 100 }, // 16 Gust
        {  60, 100 }, // 17 Wing Attack
        {   0,   0 }, // 18 Whirlwind
        {  90,  95 }, // 19 Fly
        {  15,  85 }, // 20 Bind
        {  80,  75 }, // 21 Slam
        {  45, 100 }, // 22 Vine Whip
        {  65, 100 }, // 23 Stomp
        {  30, 100 }, // 24 Double Kick
        { 120,  75 }, // 25 Mega Kick
        { 100,  95 }, // 26 Jump Kick
        {  60,  85 }, // 27 Rolling Kick
        {   0, 100 }, // 28 Sand Attack
        {  70, 100 }, // 29 Headbutt
        {  65, 100 }, // 30 Horn Attack
        {  15,  85 }, // 31 Fury Attack
        {   0,  30 }, // 32 Horn Drill
        {  50, 100 }, // 33 Tackle
        {  85, 100 }, // 34 Body Slam
        {  15,  90 }, // 35 Wrap
        {  90,  85 }, // 36 Take Down
        { 120, 100 }, // 37 Thrash
        { 120, 100 }, // 38 Double-Edge
        {   0, 100 }, // 39 Tail Whip
        {  15, 100 }, // 40 Poison Sting
        {  25, 100 }, // 41 Twineedle
        {  25,  95 }, // 42 Pin Missile
        {   0, 100 }, // 43 Leer
        {  60, 100 }, // 44 Bite
        {   0, 100 }, // 45 Growl
        {   0,   0 }, // 46 Roar
        {   0,  55 }, // 47 Sing
        {   0,  55 }, // 48 Supersonic
        {   0,  90 }, // 49 Sonic Boom
        {   0, 100 }, // 50 Disable
        {  40, 100 }, // 51 Acid
        {  40, 100 }, // 52 Ember
        {  90, 100 }, // 53 Flamethrower
        {   0,   0 }, // 54 Mist
        {  40, 100 }, // 55 Water Gun
        { 110,  80 }, // 56 Hydro Pump
        {  90, 100 }, // 57 Surf
        {  90, 100 }, // 58 Ice Beam
        { 110,  70 }, // 59 Blizzard
        {  65, 100 }, // 60 Psybeam
        {  65, 100 }, // 61 Bubble Beam
        {  65, 100 }, // 62 Aurora Beam
        { 150,  90 }, // 63 Hyper Beam
        {  35, 100 }, // 64 Peck
        {  80, 100 }, // 65 Drill Peck
        {  80,  80 }, // 66 Submission
        {   0, 100 }, // 67 Low Kick
        {   0, 100 }, // 68 Counter
        {   0, 100 }, // 69 Seismic Toss
        {  80, 100 }, // 70 Strength
        {  20, 100 }, // 71 Absorb
        {  40, 100 }, // 72 Mega Drain
        {   0,  90 }, // 73 Leech Seed
        {   0,   0 }, // 74 Growth
        {  55,  95 }, // 75 Razor Leaf
        { 120, 100 }, // 76 Solar Beam
        {   0,  75 }, // 77 Poison Powder
        {   0,  75 }, // 78 Stun Spore
        {   0,  75 }, // 79 Sleep Powder
        { 120, 100 }, // 80 Petal Dance
        {   0,  95 }, // 81 String Shot
        {   0, 100 }, // 82 Dragon Rage
        {  35,  85 }, // 83 Fire Spin
        {  40, 100 }, // 84 Thunder Shock
        {  90, 100 }, // 85 Thunderbolt
        {   0, 100 }, // 86 Thunder Wave
        { 110,  70 }, // 87 Thunder
        {  50,  90 }, // 88 Rock Throw
        { 100, 100 }, // 89 Earthquake
        {   0,  30 }, // 90 Fissure
        {  80, 100 }, // 91 Dig
        {   0,  90 }, // 92 Toxic
        {  50, 100 }, // 93 Confusion
        {  90, 100 }, // 94 Psychic
        {   0,  60 }, // 95 Hypnosis
        {   0,   0 }, // 96 Meditate
        {   0,   0 }, // 97 Agility
        {  40, 100 }, // 98 Quick Attack
        {  20, 100 }, // 99 Rage
        {   0,   0 }, // 100 Teleport
        {   0, 100 }, // 101 Night Shade
        {   0,   0 }, // 102 Mimic
        {   0,  85 }, // 103 Screech
        {   0,   0 }, // 104 Double Team
        {   0,   0 }, // 105 Recover
        {   0,   0 }, // 106 Harden
        {   0,   0 }, // 107 Minimize
        {   0, 100 }, // 108 Smokescreen
        {   0, 100 }, // 109 Confuse Ray
        {   0,   0 }, // 110 Withdraw
        {   0,   0 }, // 111 Defense Curl
        {   0,   0 }, // 112 Barrier
        {   0,   0 }, // 113 Light Screen
        {   0,   0 }, // 114 Haze
        {   0,   0 }, // 115 Reflect
        {   0,   0 }, // 116 Focus Energy
        {   0,   0 }, // 117 Bide
        {   0,   0 }, // 118 Metronome
        {   0,   0 }, // 119 Mirror Move
        { 200, 100 }, // 120 Self-Destruct
        { 100,  75 }, // 121 Egg Bomb
        {  30, 100 }, // 122 Lick
        {  30,  70 }, // 123 Smog
        {  65, 100 }, // 124 Sludge
        {  65,  85 }, // 125 Bone Club
        { 110,  85 }, // 126 Fire Blast
        {  80, 100 }, // 127 Waterfall
        {  35,  85 }, // 128 Clamp
        {  60,   0 }, // 129 Swift
        { 130, 100 }, // 130 Skull Bash
        {  20, 100 }, // 131 Spike Cannon
        {  10, 100 }, // 132 Constrict
        {   0,   0 }, // 133 Amnesia
        {   0,  80 }, // 134 Kinesis
        {   0,   0 }, // 135 Soft-Boiled
        { 130,  90 }, // 136 High Jump Kick
        {   0, 100 }, // 137 Glare
        { 100, 100 }, // 138 Dream Eater
        {   0,  90 }, // 139 Poison Gas
        {  15,  85 }, // 140 Barrage
        {  20, 100 }, // 141 Leech Life
        {   0,  75 }, // 142 Lovely Kiss
        { 140,  90 }, // 143 Sky Attack
        {   0,   0 }, // 144 Transform
        {  40, 100 }, // 145 Bubble
        {  70, 100 }, // 146 Dizzy Punch
        {   0, 100 }, // 147 Spore
        {   0, 100 }, // 148 Flash
        {   0, 100 }, // 149 Psywave
        {   0,   0 }, // 150 Splash
        {   0,   0 }, // 151 Acid Armor
        { 100,  90 }, // 152 Crabhammer
        { 250, 100 }, // 153 Explosion
        {  18,  80 }, // 154 Fury Swipes
        {  50,  90 }, // 155 Bonemerang
        {   0,   0 }, // 156 Rest
        {  75,  90 }, // 157 Rock Slide
        {  80,  90 }, // 158 Hyper Fang
        {   0,   0 }, // 159 Sharpen
        {   0,   0 }, // 160 Conversion
        {  80, 100 }, // 161 Tri Attack
        {   0,  90 }, // 162 Super Fang
        {  70, 100 }, // 163 Slash
        {   0,   0 }, // 164 Substitute
        {  50,   0 }, // 165 Struggle
        {   0,   0 }, // 166 Sketch
        {  10,  90 }, // 167 Triple Kick
        {  60, 100 }, // 168 Thief
        {   0,   0 }, // 169 Spider Web
        {   0,   0 }, // 170 Mind Reader
        {   0, 100 }, // 171 Nightmare
        {  60, 100 }, // 172 Flame Wheel
        {  50, 100 }, // 173 Snore
        {   0,   0 }, // 174 Curse
        {   0, 100 }, // 175 Flail
        {   0,   0 }, // 176 Conversion 2
        { 100,  95 }, // 177 Aeroblast
        {   0, 100 }, // 178 Cotton Spore
        {   0, 100 }, // 179 Reversal
        {   0, 100 }, // 180 Spite
        {  40, 100 }, // 181 Powder Snow
        {   0,   0 }, // 182 Protect
        {  40, 100 }, // 183 Mach Punch
        {   0, 100 }, // 184 Scary Face
        {  60,   0 }, // 185 Feint Attack
        {   0,  75 }, // 186 Sweet Kiss
        {   0,   0 }, // 187 Belly Drum
        {  90, 100 }, // 188 Sludge Bomb
        {  20, 100 }, // 189 Mud-Slap
        {  65,  85 }, // 190 Octazooka
        {   0,   0 }, // 191 Spikes
        { 120,  50 }, // 192 Zap Cannon
        {   0,   0 }, // 193 Foresight
        {   0,   0 }, // 194 Destiny Bond
        {   0,   0 }, // 195 Perish Song
        {  55,  95 }, // 196 Icy Wind
        {   0,   0 }, // 197 Detect
        {  25,  90 }, // 198 Bone Rush
        {   0,   0 }, // 199 Lock-On
        { 120, 100 }, // 200 Outrage
        {   0,   0 }, // 201 Sandstorm
        {  75, 100 }, // 202 Giga Drain
        {   0,   0 }, // 203 Endure
        {   0, 100 }, // 204 Charm
        {  30,  90 }, // 205 Rollout
        {  40, 100 }, // 206 False Swipe
        {   0,  90 }, // 207 Swagger
        {   0,   0 }, // 208 Milk Drink
        {  65, 100 }, // 209 Spark
        {  40,  95 }, // 210 Fury Cutter
        {  70,  90 }, // 211 Steel Wing
        {   0,   0 }, // 212 Mean Look
        {   0, 100 }, // 213 Attract
        {   0,   0 }, // 214 Sleep Talk
        {   0,   0 }, // 215 Heal Bell
        {   0, 100 }, // 216 Return
        {   0,  90 }, // 217 Present
        {   0, 100 }, // 218 Frustration
        {   0,   0 }, // 219 Safeguard
        {   0,   0 }, // 220 Pain Split
        { 100,  95 }, // 221 Sacred Fire
        {   0, 100 }, // 222 Magnitude
        { 100,  50 }, // 223 Dynamic Punch
        { 120,  85 }, // 224 Megahorn
        {  60, 100 }, // 225 Dragon Breath
        {   0,   0 }, // 226 Baton Pass
        {   0, 100 }, // 227 Encore
        {  40, 100 }, // 228 Pursuit
        {  20, 100 }, // 229 Rapid Spin
        {   0, 100 }, // 230 Sweet Scent
        { 100,  75 }, // 231 Iron Tail
        {  50,  95 }, // 232 Metal Claw
        {  70,   0 }, // 233 Vital Throw
        {   0,   0 }, // 234 Morning Sun
        {   0,   0 }, // 235 Synthesis
        {   0,   0 }, // 236 Moonlight
        {  60, 100 }, // 237 Hidden Power
        { 100,  80 }, // 238 Cross Chop
        {  40, 100 }, // 239 Twister
        {   0,   0 }, // 240 Rain Dance
        {   0,   0 }, // 241 Sunny Day
        {  80, 100 }, // 242 Crunch
        {   0, 100 }, // 243 Mirror Coat
        {   0,   0 }, // 244 Psych Up
        {  80, 100 }, // 245 Extreme Speed
        {  60, 100 }, // 246 Ancient Power
        {  80, 100 }, // 247 Shadow Ball
        { 120, 100 }, // 248 Future Sight
        {  40, 100 }, // 249 Rock Smash
        {  35,  85 }, // 250 Whirlpool
        {   0, 100 }, // 251 Beat Up
        {  40, 100 }, // 252 Fake Out
        {  90, 100 }, // 253 Uproar
        {   0,   0 }, // 254 Stockpile
        {   0, 100 }, // 255 Spit Up
        {   0,   0 }, // 256 Swallow
        {  95,  90 }, // 257 Heat Wave
        {   0,   0 }, // 258 Hail
        {   0, 100 }, // 259 Torment
        {   0, 100 }, // 260 Flatter
        {   0,  85 }, // 261 Will-O-Wisp
        {   0, 100 }, // 262 Memento
        {  70, 100 }, // 263 Facade
        { 150, 100 }, // 264 Focus Punch
        {  70, 100 }, // 265 Smelling Salts
        {   0,   0 }, // 266 Follow Me
        {   0,   0 }, // 267 Nature Power
        {   0,   0 }, // 268 Charge
        {   0, 100 }, // 269 Taunt
        {   0,   0 }, // 270 Helping Hand
        {   0, 100 }, // 271 Trick
        {   0,   0 }, // 272 Role Play
        {   0,   0 }, // 273 Wish
        {   0,   0 }, // 274 Assist
        {   0,   0 }, // 275 Ingrain
        { 120, 100 }, // 276 Superpower
        {   0,   0 }, // 277 Magic Coat
        {   0,   0 }, // 278 Recycle
        {  60, 100 }, // 279 Revenge
        {  75, 100 }, // 280 Brick Break
        {   0,   0 }, // 281 Yawn
        {  65, 100 }, // 282 Knock Off
        {   0, 100 }, // 283 Endeavor
        { 150, 100 }, // 284 Eruption
        {   0,   0 }, // 285 Skill Swap
        {   0,   0 }, // 286 Imprison
        {   0,   0 }, // 287 Refresh
        {   0,   0 }, // 288 Grudge
        {   0,   0 }, // 289 Snatch
        {  70, 100 }, // 290 Secret Power
        {  80, 100 }, // 291 Dive
        {  15, 100 }, // 292 Arm Thrust
        {   0,   0 }, // 293 Camouflage
        {   0,   0 }, // 294 Tail Glow
        {  70, 100 }, // 295 Luster Purge
        {  70, 100 }, // 296 Mist Ball
        {   0, 100 }, // 297 Feather Dance
        {   0, 100 }, // 298 Teeter Dance
        {  85,  90 }, // 299 Blaze Kick
        {   0,   0 }, // 300 Mud Sport
        {  30,  90 }, // 301 Ice Ball
        {  60, 100 }, // 302 Needle Arm
        {   0,   0 }, // 303 Slack Off
        {  90, 100 }, // 304 Hyper Voice
        {  50, 100 }, // 305 Poison Fang
        {  75,  95 }, // 306 Crush Claw
        { 150,  90 }, // 307 Blast Burn
        { 150,  90 }, // 308 Hydro Cannon
        {  90,  90 }, // 309 Meteor Mash
        {  30, 100 }, // 310 Astonish
        {  50, 100 }, // 311 Weather Ball
        {   0,   0 }, // 312 Aromatherapy
        {   0, 100 }, // 313 Fake Tears
        {  60,  95 }, // 314 Air Cutter
        { 130,  90 }, // 315 Overheat
        {   0,   0 }, // 316 Odor Sleuth
        {  60,  95 }, // 317 Rock Tomb
        {  60, 100 }, // 318 Silver Wind
        {   0,  85 }, // 319 Metal Sound
        {   0,  55 }, // 320 Grass Whistle
        {   0, 100 }, // 321 Tickle
        {   0,   0 }, // 322 Cosmic Power
        { 150, 100 }, // 323 Water Spout
        {  75, 100 }, // 324 Signal Beam
        {  60,   0 }, // 325 Shadow Punch
        {  80, 100 }, // 326 Extrasensory
        {  85,  90 }, // 327 Sky Uppercut
        {  35,  85 }, // 328 Sand Tomb
        {   0,  30 }, // 329 Sheer Cold
        {  90,  85 }, // 330 Muddy Water
        {  25, 100 }, // 331 Bullet Seed
        {  60,   0 }, // 332 Aerial Ace
        {  25, 100 }, // 333 Icicle Spear
        {   0,   0 }, // 334 Iron Defense
        {   0,   0 }, // 335 Block
        {   0,   0 }, // 336 Howl
        {  80, 100 }, // 337 Dragon Claw
        { 150,  90 }, // 338 Frenzy Plant
        {   0,   0 }, // 339 Bulk Up
        {  85,  85 }, // 340 Bounce
        {  55,  95 }, // 341 Mud Shot
        {  50, 100 }, // 342 Poison Tail
        {  60, 100 }, // 343 Covet
        { 120, 100 }, // 344 Volt Tackle
        {  60,   0 }, // 345 Magical Leaf
        {   0,   0 }, // 346 Water Sport
        {   0,   0 }, // 347 Calm Mind
        {  90, 100 }, // 348 Leaf Blade
        {   0,   0 }, // 349 Dragon Dance
        {  25,  90 }, // 350 Rock Blast
        {  60,   0 }, // 351 Shock Wave
        {  60, 100 }, // 352 Water Pulse
        { 140, 100 }, // 353 Doom Desire
        { 140,  90 }, // 354 Psycho Boost
        {   0,   0 }, // 355 Roost
        {   0,   0 }, // 356 Gravity
        {   0,   0 }, // 357 Miracle Eye
        {  70, 100 }, // 358 Wake-Up Slap
        { 100,  90 }, // 359 Hammer Arm
        {   0, 100 }, // 360 Gyro Ball
        {   0,   0 }, // 361 Healing Wish
        {  65, 100 }, // 362 Brine
        {   0, 100 }, // 363 Natural Gift
        {  30, 100 }, // 364 Feint
        {  60, 100 }, // 365 Pluck
        {   0,   0 }, // 366 Tailwind
        {   0,   0 }, // 367 Acupressure
        {   0, 100 }, // 368 Metal Burst
        {  70, 100 }, // 369 U-turn
        { 120, 100 }, // 370 Close Combat
        {  50, 100 }, // 371 Payback
        {  60, 100 }, // 372 Assurance
        {   0, 100 }, // 373 Embargo
        {   0, 100 }, // 374 Fling
        {   0, 100 }, // 375 Psycho Shift
        {   0,   0 }, // 376 Trump Card
        {   0, 100 }, // 377 Heal Block
        {   0, 100 }, // 378 Wring Out
        {   0,   0 }, // 379 Power Trick
        {   0, 100 }, // 380 Gastro Acid
        {   0,   0 }, // 381 Lucky Chant
        {   0,   0 }, // 382 Me First
        {   0,   0 }, // 383 Copycat
        {   0,   0 }, // 384 Power Swap
        {   0,   0 }, // 385 Guard Swap
        {   0, 100 }, // 386 Punishment
        { 140, 100 }, // 387 Last Resort
        {   0, 100 }, // 388 Worry Seed
        {  80, 100 }, // 389 Sucker Punch
        {   0,   0 }, // 390 Toxic Spikes
        {   0,   0 }, // 391 Heart Swap
        {   0,   0 }, // 392 Aqua Ring
        {   0,   0 }, // 393 Magnet Rise
        { 120, 100 }, // 394 Flare Blitz
        {  60, 100 }, // 395 Force Palm
        {  80,   0 }, // 396 Aura Sphere
        {   0,   0 }, // 397 Rock Polish
        {  80, 100 }, // 398 Poison Jab
        {  80, 100 }, // 399 Dark Pulse
        {  70, 100 }, // 400 Night Slash
        {  90,  90 }, // 401 Aqua Tail
        {  80, 100 }, // 402 Seed Bomb
        {  75,  95 }, // 403 Air Slash
        {  80, 100 }, // 404 X-Scissor
        {  90, 100 }, // 405 Bug Buzz
        {  85, 100 }, // 406 Dragon Pulse
        { 100,  75 }, // 407 Dragon Rush
        {  80, 100 }, // 408 Power Gem
        {  75, 100 }, // 409 Drain Punch
        {  40, 100 }, // 410 Vacuum Wave
        { 120,  70 }, // 411 Focus Blast
        {  90, 100 }, // 412 Energy Ball
        { 120, 100 }, // 413 Brave Bird
        {  90, 100 }, // 414 Earth Power
        {   0, 100 }, // 415 Switcheroo
        { 150,  90 }, // 416 Giga Impact
        {   0,   0 }, // 417 Nasty Plot
        {  40, 100 }, // 418 Bullet Punch
        {  60, 100 }, // 419 Avalanche
        {  40, 100 }, // 420 Ice Shard
        {  70, 100 }, // 421 Shadow Claw
        {  65,  95 }, // 422 Thunder Fang
        {  65,  95 }, // 423 Ice Fang
        {  65,  95 }, // 424 Fire Fang
        {  40, 100 }, // 425 Shadow Sneak
        {  65,  85 }, // 426 Mud Bomb
        {  70, 100 }, // 427 Psycho Cut
        {  80,  90 }, // 428 Zen Headbutt
        {  65,  85 }, // 429 Mirror Shot
        {  80, 100 }, // 430 Flash Cannon
        {  90,  85 }, // 431 Rock Climb
        {   0,   0 }, // 432 Defog
        {   0,   0 }, // 433 Trick Room
        { 130,  90 }, // 434 Draco Meteor
        {  80, 100 }, // 435 Discharge
        {  80, 100 }, // 436 Lava Plume
        { 130,  90 }, // 437 Leaf Storm
        { 120,  85 }, // 438 Power Whip
        { 150,  90 }, // 439 Rock Wrecker
        {  70, 100 }, // 440 Cross Poison
        { 120,  80 }, // 441 Gunk Shot
        {  80, 100 }, // 442 Iron Head
        {  60,   0 }, // 443 Magnet Bomb
        { 100,  80 }, // 444 Stone Edge
        {   0, 100 }, // 445 Captivate
        {   0,   0 }, // 446 Stealth Rock
        {   0, 100 }, // 447 Grass Knot
        {  65, 100 }, // 448 Chatter
        { 100, 100 }, // 449 Judgment
        {  60, 100 }, // 450 Bug Bite
        {  50,  90 }, // 451 Charge Beam
        { 120, 100 }, // 452 Wood Hammer
        {  40, 100 }, // 453 Aqua Jet
        {  90, 100 }, // 454 Attack Order
        {   0,   0 }, // 455 Defend Order
        {   0,   0 }, // 456 Heal Order
        { 150,  80 }, // 457 Head Smash
        {  35,  90 }, // 458 Double Hit
        { 150,  90 }, // 459 Roar of Time
        { 100,  95 }, // 460 Spacial Rend
        {   0,   0 }, // 461 Lunar Dance
        {   0, 100 }, // 462 Crush Grip
        { 100,  75 }, // 463 Magma Storm
        {   0,  80 }, // 464 Dark Void
        { 120,  85 }, // 465 Seed Flare
        {  60, 100 }, // 466 Ominous Wind
        { 120, 100 }, // 467 Shadow Force
        {   0,   0 }, // 468 Hone Claws
        {   0,   0 }, // 469 Wide Guard
        {   0,   0 }, // 470 Guard Split
        {   0,   0 }, // 471 Power Split
        {   0,   0 }, // 472 Wonder Room
        {  80, 100 }, // 473 Psyshock
        {  65, 100 }, // 474 Venoshock
        {   0,   0 }, // 475 Autotomize
        {   0,   0 }, // 476 Rage Powder
        {   0,   0 }, // 477 Telekinesis
        {   0,   0 }, // 478 Magic Room
        {  50, 100 }, // 479 Smack Down
        {  60, 100 }, // 480 Storm Throw
        {  70, 100 }, // 481 Flame Burst
        {  95, 100 }, // 482 Sludge Wave
        {   0,   0 }, // 483 Quiver Dance
        {   0, 100 }, // 484 Heavy Slam
        { 120, 100 }, // 485 Synchronoise
        {   0, 100 }, // 486 Electro Ball
        {   0, 100 }, // 487 Soak
        {  50, 100 }, // 488 Flame Charge
        {   0,   0 }, // 489 Coil
        {  65, 100 }, // 490 Low Sweep
        {  40, 100 }, // 491 Acid Spray
        {  95, 100 }, // 492 Foul Play
        {   0, 100 }, // 493 Simple Beam
        {   0, 100 }, // 494 Entrainment
        {   0,   0 }, // 495 After You
        {  60, 100 }, // 496 Round
        {  40, 100 }, // 497 Echoed Voice
        {  70, 100 }, // 498 Chip Away
        {  50,   0 }, // 499 Clear Smog
        {  20, 100 }, // 500 Stored Power
        {   0,   0 }, // 501 Quick Guard
        {   0,   0 }, // 502 Ally Switch
        {  80, 100 }, // 503 Scald
        {   0,   0 }, // 504 Shell Smash
        {   0,   0 }, // 505 Heal Pulse
        {  65, 100 }, // 506 Hex
        {  60, 100 }, // 507 Sky Drop
        {   0,   0 }, // 508 Shift Gear
        {  60,  90 }, // 509 Circle Throw
        {  60, 100 }, // 510 Incinerate
        {   0, 100 }, // 511 Quash
        {  55, 100 }, // 512 Acrobatics
        {   0,   0 }, // 513 Reflect Type
        {  70, 100 }, // 514 Retaliate
        {   0, 100 }, // 515 Final Gambit
        {   0,   0 }, // 516 Bestow
        { 100,  50 }, // 517 Inferno
        {  80, 100 }, // 518 Water Pledge
        {  80, 100 }, // 519 Fire Pledge
        {  80, 100 }, // 520 Grass Pledge
        {  70, 100 }, // 521 Volt Switch
        {  50, 100 }, // 522 Struggle Bug
        {  60, 100 }, // 523 Bulldoze
        {  60,  90 }, // 524 Frost Breath
        {  60,  90 }, // 525 Dragon Tail
        {   0,   0 }, // 526 Work Up
        {  55,  95 }, // 527 Electroweb
        {  90, 100 }, // 528 Wild Charge
        {  80,  95 }, // 529 Drill Run
        {  40,  90 }, // 530 Dual Chop
        {  60, 100 }, // 531 Heart Stamp
        {  75, 100 }, // 532 Horn Leech
        {  90, 100 }, // 533 Sacred Sword
        {  75,  95 }, // 534 Razor Shell
        {   0, 100 }, // 535 Heat Crash
        {  65,  90 }, // 536 Leaf Tornado
        {  65, 100 }, // 537 Steamroller
        {   0,   0 }, // 538 Cotton Guard
        {  85,  95 }, // 539 Night Daze
        { 100, 100 }, // 540 Psystrike
        {  25,  85 }, // 541 Tail Slap
        { 110,  70 }, // 542 Hurricane
        { 120, 100 }, // 543 Head Charge
        {  50,  85 }, // 544 Gear Grind
        { 100, 100 }, // 545 Searing Shot
        { 120, 100 }, // 546 Techno Blast
        {  75, 100 }, // 547 Relic Song
        {  85, 100 }, // 548 Secret Sword
        {  65,  95 }, // 549 Glaciate
        { 130,  85 }, // 550 Bolt Strike
        { 130,  85 }, // 551 Blue Flare
        {  80, 100 }, // 552 Fiery Dance
        { 140,  90 }, // 553 Freeze Shock
        { 140,  90 }, // 554 Ice Burn
        {  55,  95 }, // 555 Snarl
        {  85,  90 }, // 556 Icicle Crash
        { 180,  95 }, // 557 V-create
        { 100, 100 }, // 558 Fusion Flare
        { 100, 100 }, // 559 Fusion Bolt
        {  80,  95 }, // 560 Flying Press
        {   0,   0 }, // 561 Mat Block
        { 120,  90 }, // 562 Belch
        {   0,   0 }, // 563 Rototiller
        {   0,   0 }, // 564 Sticky Web
        {  30, 100 }, // 565 Fell Stinger
        {  90, 100 }, // 566 Phantom Force
        {   0, 100 }, // 567 Trick-or-Treat
        {   0, 100 }, // 568 Noble Roar
        {   0,   0 }, // 569 Ion Deluge
        {  50, 100 }, // 570 Parabolic Charge
        {   0, 100 }, // 571 Forest's Curse
        {  90, 100 }, // 572 Petal Blizzard
        {  70, 100 }, // 573 Freeze-Dry
        {  40,   0 }, // 574 Disarming Voice
        {   0, 100 }, // 575 Parting Shot
        {   0,   0 }, // 576 Topsy-Turvy
        {  50, 100 }, // 577 Draining Kiss
        {   0,   0 }, // 578 Crafty Shield
        {   0,   0 }, // 579 Flower Shield
        {   0,   0 }, // 580 Grassy Terrain
        {   0,   0 }, // 581 Misty Terrain
        {   0,   0 }, // 582 Electrify
        {  90,  90 }, // 583 Play Rough
        {  40, 100 }, // 584 Fairy Wind
        {  95, 100 }, // 585 Moonblast
        { 140, 100 }, // 586 Boomburst
        {   0,   0 }, // 587 Fairy Lock
        {   0,   0 }, // 588 King's Shield
        {   0,   0 }, // 589 Play Nice
        {   0,   0 }, // 590 Confide
        { 100,  95 }, // 591 Diamond Storm
        { 110,  95 }, // 592 Steam Eruption
        {  80,   0 }, // 593 Hyperspace Hole
        {  15, 100 }, // 594 Water Shuriken
        {  65, 100 }, // 595 Mystical Fire
        {   0,   0 }, // 596 Spiky Shield
        {   0,   0 }, // 597 Aromatic Mist
        {   0, 100 }, // 598 Eerie Impulse
        {   0, 100 }, // 599 Venom Drench
        {   0, 100 }, // 600 Powder
        {   0,   0 }, // 601 Geomancy
        {   0,   0 }, // 602 Magnetic Flux
        {   0,   0 }, // 603 Happy Hour
        {   0,   0 }, // 604 Electric Terrain
        {  80, 100 }, // 605 Dazzling Gleam
        {   0,   0 }, // 606 Celebrate
        {   0,   0 }, // 607 Hold Hands
        {   0, 100 }, // 608 Baby-Doll Eyes
        {  20, 100 }, // 609 Nuzzle
        {  40, 100 }, // 610 Hold Back
        {  20, 100 }, // 611 Infestation
        {  40, 100 }, // 612 Power-Up Punch
        {  80, 100 }, // 613 Oblivion Wing
        {  90, 100 }, // 614 Thousand Arrows
        {  90, 100 }, // 615 Thousand Waves
        {  90, 100 }, // 616 Land's Wrath
        { 140,  90 }, // 617 Light of Ruin
        { 110,  85 }, // 618 Origin Pulse
        { 120,  85 }, // 619 Precipice Blades
        { 120, 100 }, // 620 Dragon Ascent
        { 100,   0 }, // 621 Hyperspace Fury
    };
}
