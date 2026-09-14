/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zParticleGenerator.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C8D04 -> 0x801C8D3C
*/
// Range: 0x801C8D04 -> 0x801C8D08
void zParticleSystem::scene_enter() {}

// Range: 0x801C8D08 -> 0x801C8D0C
void zParticleSystem::scene_exit() {}

// Range: 0x801C8D0C -> 0x801C8D10
void zParticleSystem::destroy_generator() {}

// Range: 0x801C8D10 -> 0x801C8D14
void zParticleSystem::add_tweaks() {}

// Range: 0x801C8D14 -> 0x801C8D18
void zParticleSystem::setup() {}

// Range: 0x801C8D18 -> 0x801C8D1C
void zParticleSystem::update() {}

// Range: 0x801C8D1C -> 0x801C8D20
void zParticleSystem::pre_render() {}

// Range: 0x801C8D20 -> 0x801C8D24
void zParticleSystem::debug_render() {}

// Range: 0x801C8D24 -> 0x801C8D28
void zParticleSystem::render() {}

// Range: 0x801C8D28 -> 0x801C8D2C
void zParticleGenerator::asset_tweaked() {}

// Range: 0x801C8D2C -> 0x801C8D3C
struct relative_ordering * zParticleSystem::get_ordering(int & size /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zParticleGenerator.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801CD664 -> 0x801CD680
*/
// Range: 0x801CD664 -> 0x801CD680
// this: r0
zParticleSystem::zParticleSystem(int type /* r0 */, int need /* r0 */, const char * name /* r0 */) {
    // References
    // -> struct [anonymous] zParticleSystem::__vtable;
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zParticleGenerator.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801D07BC -> 0x801D0B70
*/
// Range: 0x801D07BC -> 0x801D08F8
// this: r0
static void zParticleSystem::update_generators(float dt /* f31 */) {
    // Local variables
    struct zParticleGeneratorWaterfall * * it; // r31
    struct zParticleGeneratorWaterfall * * end_it; // r30
    struct zParticleGeneratorWaterfall & gen; // r29
    unsigned char cullUpdate; // r0
    int isRunning; // r4
}

// Range: 0x801D08F8 -> 0x801D0A34
// this: r0
static void zParticleSystem::update_generators(float dt /* f31 */) {
    // Local variables
    struct zParticleGeneratorWaterfallMist * * it; // r31
    struct zParticleGeneratorWaterfallMist * * end_it; // r30
    struct zParticleGeneratorWaterfallMist & gen; // r29
    unsigned char cullUpdate; // r0
    int isRunning; // r4
}

// Range: 0x801D0A34 -> 0x801D0B70
// this: r0
static void zParticleSystem::update_generators(float dt /* f31 */) {
    // Local variables
    struct zParticleGeneratorWaterfallSplash * * it; // r31
    struct zParticleGeneratorWaterfallSplash * * end_it; // r30
    struct zParticleGeneratorWaterfallSplash & gen; // r29
    unsigned char cullUpdate; // r0
    int isRunning; // r4
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zParticleGenerator.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020DC0C -> 0x8020DD48
*/
// Range: 0x8020DC0C -> 0x8020DD48
// this: r0
static void zParticleSystem::update_generators(float dt /* f31 */) {
    // Local variables
    struct zParticleGeneratorSnow * * it; // r31
    struct zParticleGeneratorSnow * * end_it; // r30
    struct zParticleGeneratorSnow & gen; // r29
    unsigned char cullUpdate; // r0
    int isRunning; // r4
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zParticleGenerator.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020F024 -> 0x8020F160
*/
// Range: 0x8020F024 -> 0x8020F160
// this: r0
static void zParticleSystem::update_generators(float dt /* f31 */) {
    // Local variables
    struct zParticleGeneratorRain * * it; // r31
    struct zParticleGeneratorRain * * end_it; // r30
    struct zParticleGeneratorRain & gen; // r29
    unsigned char cullUpdate; // r0
    int isRunning; // r4
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zParticleGenerator.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802193B4 -> 0x802194F0
*/
// Range: 0x802193B4 -> 0x802194F0
// this: r0
static void zParticleSystem::update_generators(float dt /* f31 */) {
    // Local variables
    struct zParticleGeneratorEarthDust * * it; // r31
    struct zParticleGeneratorEarthDust * * end_it; // r30
    struct zParticleGeneratorEarthDust & gen; // r29
    unsigned char cullUpdate; // r0
    int isRunning; // r4
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zParticleGenerator.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8021CEF8 -> 0x8021D034
*/
// Range: 0x8021CEF8 -> 0x8021D034
// this: r0
static void zParticleSystem::update_generators(float dt /* f31 */) {
    // Local variables
    struct zParticleGeneratorPop * * it; // r31
    struct zParticleGeneratorPop * * end_it; // r30
    struct zParticleGeneratorPop & gen; // r29
    unsigned char cullUpdate; // r0
    int isRunning; // r4
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zParticleGenerator.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8021F2F0 -> 0x8021F42C
*/
// Range: 0x8021F2F0 -> 0x8021F42C
// this: r0
static void zParticleSystem::update_generators(float dt /* f31 */) {
    // Local variables
    struct zParticleGeneratorBurrowKickup * * it; // r31
    struct zParticleGeneratorBurrowKickup * * end_it; // r30
    struct zParticleGeneratorBurrowKickup & gen; // r29
    unsigned char cullUpdate; // r0
    int isRunning; // r4
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zParticleGenerator.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80270574 -> 0x802706B0
*/
// Range: 0x80270574 -> 0x802706B0
// this: r0
static void zParticleSystem::update_generators(float dt /* f31 */) {
    // Local variables
    struct zParticleGeneratorPuffer * * it; // r31
    struct zParticleGeneratorPuffer * * end_it; // r30
    struct zParticleGeneratorPuffer & gen; // r29
    unsigned char cullUpdate; // r0
    int isRunning; // r4
}


