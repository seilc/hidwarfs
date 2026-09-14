/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zRenderState.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800CEE5C -> 0x800CF72C
*/
enum _SDRenderState {
    eRenderStateUnknown = 0,
    eRenderStateDefault = 1,
    eRenderStateOpaqueModels = 2,
    eRenderStateAlphaModels = 3,
    eRenderStateBubble = 4,
    eRenderStateProjectile = 5,
    eRenderStateFont = 6,
    eRenderStateHUD = 7,
    eRenderStateParticles = 8,
    eRenderStateLightning = 9,
    eRenderStateSkidMark = 10,
    eRenderStateStreak = 11,
    eRenderStateTide = 12,
    eRenderStateSkyDomeBack = 13,
    eRenderStateSkyDomeFlat = 14,
    eRenderStateSkyDome3D = 15,
    eRenderStateEnvironment = 16,
    eRenderStateFill = 17,
    eRenderStateGlare = 18,
    eRenderStateFireCards = 19,
    eRenderStateSplashCones = 20,
    eRenderStateWater = 21,
    eRenderStateGrass = 22,
    eRenderStateWaterSkyDome = 23,
    eRenderStateLaserBeam = 24,
    eRenderStateSpotlight = 25,
    eRenderStateLightVolume = 26,
    eRenderStateRibbon = 27,
    eRenderStateScanLaser = 28,
    eRenderStateHDRBeginRender = 29,
    eRenderStateBlurAlpha = 30,
    eRenderStateZParPTank = 31,
    eRenderStateXPTankPool = 32,
    eRenderStateUI = 33,
    eRenderStateForceField = 34,
    eRenderStateFrozone = 35,
    eRenderStateSmashRing = 36,
    eRenderStateLaserBolt = 37,
    eRenderStatePatStunRings = 38,
    eRenderStateDecal = 39,
    eRenderStateUberLaser = 40,
    eRenderStateGCWaterBumpGen = 41,
    eRenderStateScrFX = 42,
    eRenderStateIncrediSlam = 43,
    eRenderStateWaterHose = 44,
    eRenderStatePlayerIdentifier = 45,
    eRenderStateFrostBlast = 46,
    eRenderStateBlastRing = 47,
    eRenderStateFreezingNPCs = 48,
    eRenderStateBlurCards = 49,
    eRenderStateAlphaModelsExplicit = 50,
    eRenderStateBossBrain = 51,
    eRenderStatePlayerEffects = 52,
    eRenderStateTotal = -1,
};
static enum _SDRenderState sRS; // size: 0x4, address: 0x803C2190
static unsigned int sRSBits; // size: 0x4, address: 0x803BE220
// Range: 0x800CEE5C -> 0x800CEE70
void zRenderStateInit() {
    // References
    // -> static unsigned int sRSBits;
    // -> static enum _SDRenderState sRS;
}

// Range: 0x800CEE70 -> 0x800CEE78
enum _SDRenderState zRenderStateCurrent() {
    // References
    // -> static enum _SDRenderState sRS;
}

void * RwEngineInstance; // size: 0x4, address: 0x803C4584
// Range: 0x800CEE78 -> 0x800CEF4C
void zRenderStateBegin() {
    // References
    // -> void * RwEngineInstance;
    // -> static unsigned int sRSBits;
    // -> static enum _SDRenderState sRS;
}

// Range: 0x800CEF4C -> 0x800CF71C
void zRenderState(enum _SDRenderState next /* r0 */) {
    // Local variables
    unsigned int customBits; // r31
    unsigned int diffBits; // r30

    // References
    // -> static unsigned int sRSBits;
    // -> void * RwEngineInstance;
    // -> static enum _SDRenderState sRS;
}

// Range: 0x800CF71C -> 0x800CF72C
void zRenderStateSetDirty(unsigned int bits /* r0 */) {
    // References
    // -> static unsigned int sRSBits;
}


