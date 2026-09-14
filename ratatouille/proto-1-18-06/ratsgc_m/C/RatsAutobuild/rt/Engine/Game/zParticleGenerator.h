/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zParticleGenerator.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8011B840 -> 0x8011B86C
*/
// Range: 0x8011B840 -> 0x8011B844
void zParticleSystem::scene_enter() {}

// Range: 0x8011B844 -> 0x8011B848
void zParticleSystem::scene_exit() {}

// Range: 0x8011B848 -> 0x8011B84C
void zParticleSystem::destroy_generator() {}

// Range: 0x8011B84C -> 0x8011B850
void zParticleSystem::setup() {}

// Range: 0x8011B850 -> 0x8011B854
void zParticleSystem::update() {}

// Range: 0x8011B854 -> 0x8011B858
void zParticleSystem::pre_render() {}

// Range: 0x8011B858 -> 0x8011B85C
void zParticleSystem::render() {}

// Range: 0x8011B85C -> 0x8011B86C
struct relative_ordering * zParticleSystem::get_ordering(int & size /* r0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zParticleGenerator.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8011E110 -> 0x8011E124
*/
// Range: 0x8011E110 -> 0x8011E124
// this: r0
zParticleSystem::zParticleSystem(int type /* r0 */, int need /* r0 */) {
    // References
    // -> struct [anonymous] zParticleSystem::__vtable;
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zParticleGenerator.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80120158 -> 0x801204DC
*/
// Range: 0x80120158 -> 0x80120284
// this: r0
static void zParticleSystem::update_generators(float dt /* f31 */) {
    // Local variables
    struct zParticleGeneratorWaterfall * * it; // r31
    struct zParticleGeneratorWaterfall * * end_it; // r30
    struct zParticleGeneratorWaterfall & gen; // r29
    unsigned char cullUpdate; // r0
    int isRunning; // r4
}

// Range: 0x80120284 -> 0x801203B0
// this: r0
static void zParticleSystem::update_generators(float dt /* f31 */) {
    // Local variables
    struct zParticleGeneratorWaterfallMist * * it; // r31
    struct zParticleGeneratorWaterfallMist * * end_it; // r30
    struct zParticleGeneratorWaterfallMist & gen; // r29
    unsigned char cullUpdate; // r0
    int isRunning; // r4
}

// Range: 0x801203B0 -> 0x801204DC
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
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zParticleGenerator.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8014863C -> 0x80148768
*/
// Range: 0x8014863C -> 0x80148768
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
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zParticleGenerator.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80149570 -> 0x8014969C
*/
// Range: 0x80149570 -> 0x8014969C
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
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zParticleGenerator.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8014FA90 -> 0x8014FBBC
*/
// Range: 0x8014FA90 -> 0x8014FBBC
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
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zParticleGenerator.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80151B94 -> 0x80151CC0
*/
// Range: 0x80151B94 -> 0x80151CC0
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
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zParticleGenerator.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801531E4 -> 0x80153310
*/
// Range: 0x801531E4 -> 0x80153310
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
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zParticleGenerator.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018BCD4 -> 0x8018BE00
*/
// Range: 0x8018BCD4 -> 0x8018BE00
// this: r0
static void zParticleSystem::update_generators(float dt /* f31 */) {
    // Local variables
    struct zParticleGeneratorPuffer * * it; // r31
    struct zParticleGeneratorPuffer * * end_it; // r30
    struct zParticleGeneratorPuffer & gen; // r29
    unsigned char cullUpdate; // r0
    int isRunning; // r4
}


