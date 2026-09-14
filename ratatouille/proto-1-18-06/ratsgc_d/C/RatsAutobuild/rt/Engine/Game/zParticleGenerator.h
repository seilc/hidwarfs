/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zParticleGenerator.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80227210 -> 0x80227248
*/
// Range: 0x80227210 -> 0x80227214
void zParticleSystem::scene_enter() {}

// Range: 0x80227214 -> 0x80227218
void zParticleSystem::scene_exit() {}

// Range: 0x80227218 -> 0x8022721C
void zParticleSystem::destroy_generator() {}

// Range: 0x8022721C -> 0x80227220
void zParticleSystem::add_tweaks() {}

// Range: 0x80227220 -> 0x80227224
void zParticleSystem::setup() {}

// Range: 0x80227224 -> 0x80227228
void zParticleSystem::update() {}

// Range: 0x80227228 -> 0x8022722C
void zParticleSystem::pre_render() {}

// Range: 0x8022722C -> 0x80227230
void zParticleSystem::debug_render() {}

// Range: 0x80227230 -> 0x80227234
void zParticleSystem::render() {}

// Range: 0x80227234 -> 0x80227238
void zParticleGenerator::asset_tweaked() {}

// Range: 0x80227238 -> 0x80227248
struct relative_ordering * zParticleSystem::get_ordering(int & size /* r4 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zParticleGenerator.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8022C8C8 -> 0x8022C8E4
*/
// Range: 0x8022C8C8 -> 0x8022C8E4
// this: r3
zParticleSystem::zParticleSystem(int type /* r4 */, int need /* r5 */, const char * name /* r6 */) {
    // References
    // -> struct [anonymous] zParticleSystem::__vtable;
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zParticleGenerator.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8022FD84 -> 0x8023012C
*/
// Range: 0x8022FD84 -> 0x8022FEBC
// this: r29
static void zParticleSystem::update_generators(float dt /* f31 */) {
    // Local variables
    struct zParticleGeneratorWaterfall * * it; // r30
    struct zParticleGeneratorWaterfall * * end_it; // r26
    struct zParticleGeneratorWaterfall & gen; // r31
    unsigned char cullUpdate; // r28
    int isRunning; // r27
}

// Range: 0x8022FEBC -> 0x8022FFF4
// this: r29
static void zParticleSystem::update_generators(float dt /* f31 */) {
    // Local variables
    struct zParticleGeneratorWaterfallMist * * it; // r30
    struct zParticleGeneratorWaterfallMist * * end_it; // r26
    struct zParticleGeneratorWaterfallMist & gen; // r31
    unsigned char cullUpdate; // r28
    int isRunning; // r27
}

// Range: 0x8022FFF4 -> 0x8023012C
// this: r29
static void zParticleSystem::update_generators(float dt /* f31 */) {
    // Local variables
    struct zParticleGeneratorWaterfallSplash * * it; // r30
    struct zParticleGeneratorWaterfallSplash * * end_it; // r26
    struct zParticleGeneratorWaterfallSplash & gen; // r31
    unsigned char cullUpdate; // r28
    int isRunning; // r27
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zParticleGenerator.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80276328 -> 0x80276460
*/
// Range: 0x80276328 -> 0x80276460
// this: r29
static void zParticleSystem::update_generators(float dt /* f31 */) {
    // Local variables
    struct zParticleGeneratorSnow * * it; // r30
    struct zParticleGeneratorSnow * * end_it; // r26
    struct zParticleGeneratorSnow & gen; // r31
    unsigned char cullUpdate; // r28
    int isRunning; // r27
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zParticleGenerator.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80277988 -> 0x80277AC0
*/
// Range: 0x80277988 -> 0x80277AC0
// this: r29
static void zParticleSystem::update_generators(float dt /* f31 */) {
    // Local variables
    struct zParticleGeneratorRain * * it; // r30
    struct zParticleGeneratorRain * * end_it; // r26
    struct zParticleGeneratorRain & gen; // r31
    unsigned char cullUpdate; // r28
    int isRunning; // r27
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zParticleGenerator.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80282924 -> 0x80282A5C
*/
// Range: 0x80282924 -> 0x80282A5C
// this: r29
static void zParticleSystem::update_generators(float dt /* f31 */) {
    // Local variables
    struct zParticleGeneratorEarthDust * * it; // r30
    struct zParticleGeneratorEarthDust * * end_it; // r26
    struct zParticleGeneratorEarthDust & gen; // r31
    unsigned char cullUpdate; // r28
    int isRunning; // r27
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zParticleGenerator.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80286A60 -> 0x80286B98
*/
// Range: 0x80286A60 -> 0x80286B98
// this: r29
static void zParticleSystem::update_generators(float dt /* f31 */) {
    // Local variables
    struct zParticleGeneratorPop * * it; // r30
    struct zParticleGeneratorPop * * end_it; // r26
    struct zParticleGeneratorPop & gen; // r31
    unsigned char cullUpdate; // r28
    int isRunning; // r27
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zParticleGenerator.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802891B4 -> 0x802892EC
*/
// Range: 0x802891B4 -> 0x802892EC
// this: r29
static void zParticleSystem::update_generators(float dt /* f31 */) {
    // Local variables
    struct zParticleGeneratorBurrowKickup * * it; // r30
    struct zParticleGeneratorBurrowKickup * * end_it; // r26
    struct zParticleGeneratorBurrowKickup & gen; // r31
    unsigned char cullUpdate; // r28
    int isRunning; // r27
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zParticleGenerator.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802E4E80 -> 0x802E4FB8
*/
// Range: 0x802E4E80 -> 0x802E4FB8
// this: r29
static void zParticleSystem::update_generators(float dt /* f31 */) {
    // Local variables
    struct zParticleGeneratorPuffer * * it; // r30
    struct zParticleGeneratorPuffer * * end_it; // r26
    struct zParticleGeneratorPuffer & gen; // r31
    unsigned char cullUpdate; // r28
    int isRunning; // r27
}


