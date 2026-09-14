/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zRenderState.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801556A4 -> 0x80155E74
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
static enum _SDRenderState sRS; // size: 0x4, address: 0x80C08388
static unsigned int sRSBits; // size: 0x4, address: 0x80C01208
// Range: 0x801556A4 -> 0x801556B8
void zRenderStateInit() {
    // References
    // -> static unsigned int sRSBits;
    // -> static enum _SDRenderState sRS;
}

// Range: 0x801556B8 -> 0x801556C0
enum _SDRenderState zRenderStateCurrent() {
    // References
    // -> static enum _SDRenderState sRS;
}

// Range: 0x801556C0 -> 0x8015574C
void zRenderStateBegin() {
    // References
    // -> static unsigned int sRSBits;
    // -> static enum _SDRenderState sRS;
}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80C0120C
// Range: 0x8015574C -> 0x80155E64
void zRenderState(enum _SDRenderState next /* r0 */) {
    // Local variables
    unsigned int customBits; // r31
    unsigned int diffBits; // r30

    // References
    // -> static unsigned int sRSBits;
    // -> static char __FUNCTION__[13];
    // -> static enum _SDRenderState sRS;
}

// Range: 0x80155E64 -> 0x80155E74
void zRenderStateSetDirty(unsigned int bits /* r0 */) {
    // References
    // -> static unsigned int sRSBits;
}


