/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zRenderState.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8019FB5C -> 0x801A0688
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
static enum _SDRenderState sRS; // size: 0x4, address: 0x80D6A730
static unsigned int sRSBits; // size: 0x4, address: 0x80D63560
enum RwBlendFunction {
    rwBLENDNABLEND = 0,
    rwBLENDZERO = 1,
    rwBLENDONE = 2,
    rwBLENDSRCCOLOR = 3,
    rwBLENDINVSRCCOLOR = 4,
    rwBLENDSRCALPHA = 5,
    rwBLENDINVSRCALPHA = 6,
    rwBLENDDESTALPHA = 7,
    rwBLENDINVDESTALPHA = 8,
    rwBLENDDESTCOLOR = 9,
    rwBLENDINVDESTCOLOR = 10,
    rwBLENDSRCALPHASAT = 11,
    rwBLENDFUNCTIONFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x28
struct state_list {
    // Members
    int texturefilter; // offset 0x0, size 0x4
    int textureaddress; // offset 0x4, size 0x4
    int fogenable; // offset 0x8, size 0x4
    int vertexalphaenable; // offset 0xC, size 0x4
    int cullmode; // offset 0x10, size 0x4
    enum RwBlendFunction srcblend; // offset 0x14, size 0x4
    enum RwBlendFunction destblend; // offset 0x18, size 0x4
    int shademode; // offset 0x1C, size 0x4
    int zwriteenable; // offset 0x20, size 0x4
    int ztestenable; // offset 0x24, size 0x4
};
static struct state_list old_states; // size: 0x28, address: 0x80D01508
// Range: 0x8019FB5C -> 0x8019FBF0
static void store_states(struct state_list & s /* r31 */) {}

// Range: 0x8019FBF0 -> 0x8019FC18
static void debug_store_states() {
    // References
    // -> static struct state_list old_states;
}

static char __FUNCTION__[20]; // size: 0x14, address: 0x80D63564
// Range: 0x8019FC18 -> 0x8019FDE8
static void debug_verify_states() {
    // Local variables
    struct state_list states; // r1+0x8

    // References
    // -> static char __FUNCTION__[20];
    // -> static struct state_list old_states;
}

// Range: 0x8019FDE8 -> 0x8019FDFC
void zRenderStateInit() {
    // References
    // -> static unsigned int sRSBits;
    // -> static enum _SDRenderState sRS;
}

// Range: 0x8019FDFC -> 0x8019FE04
enum _SDRenderState zRenderStateCurrent() {
    // References
    // -> static enum _SDRenderState sRS;
}

// Range: 0x8019FE04 -> 0x8019FE90
void zRenderStateBegin() {
    // References
    // -> static unsigned int sRSBits;
    // -> static enum _SDRenderState sRS;
}

static unsigned char enable_verify; // size: 0x1, address: 0x80D6A734
static signed char init; // size: 0x1, address: 0x80D6A735
static int recur_depth; // size: 0x4, address: 0x80D6A738
static signed char init; // size: 0x1, address: 0x80D6A73C
static char __FUNCTION__[13]; // size: 0xD, address: 0x80D63578
// Range: 0x8019FE90 -> 0x801A0678
void zRenderState(enum _SDRenderState next /* r25 */) {
    // Local variables
    unsigned int customBits; // r31
    unsigned int diffBits; // r30

    // References
    // -> static unsigned int sRSBits;
    // -> static char __FUNCTION__[13];
    // -> static enum _SDRenderState sRS;
    // -> static int recur_depth;
    // -> static unsigned char enable_verify;
    // -> static signed char init;
    // -> static signed char init;
}

// Range: 0x801A0678 -> 0x801A0688
void zRenderStateSetDirty(unsigned int bits /* r3 */) {
    // References
    // -> static unsigned int sRSBits;
}


