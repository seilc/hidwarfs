/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zCameraTweak.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8023C8A0 -> 0x8023D318
*/
static int sCamTweakCount; // size: 0x4, address: 0x80C090B0
// total size: 0x1C
struct zCamTweak {
    // Members
    unsigned int owner; // offset 0x0, size 0x4
    float priority; // offset 0x4, size 0x4
    float time; // offset 0x8, size 0x4
    float pitch; // offset 0xC, size 0x4
    float distMult; // offset 0x10, size 0x4
    float pivotHeight; // offset 0x14, size 0x4
    float FOV; // offset 0x18, size 0x4
};
static struct zCamTweak sCamTweakList[8]; // size: 0xE0, address: 0x80BCB240
static float sCamTweakLerp; // size: 0x4, address: 0x80C090B4
static float sCamTweakTime; // size: 0x4, address: 0x80C090B8
static float sCamTweakPitch[2]; // size: 0x8, address: 0x80C090BC
static float sCamTweakDistMult[2]; // size: 0x8, address: 0x80C090C4
static float sCamTweakPivotHeight[2]; // size: 0x8, address: 0x80C090CC
static float sCamTweakFOV[2]; // size: 0x8, address: 0x80C090D4
static float sCamTweakPitchCur; // size: 0x4, address: 0x80C090DC
static float sCamTweakDistMultCur; // size: 0x4, address: 0x80C090E0
static float sCamTweakPivotHeightCur; // size: 0x4, address: 0x80C090E4
static float sCamTweakFOVCur; // size: 0x4, address: 0x80C090E8
// Range: 0x8023C8A0 -> 0x8023C8C0
void zCameraTweakGlobal_Init() {}

static char __FUNCTION__[23]; // size: 0x17, address: 0x80C049C8
// Range: 0x8023C8C0 -> 0x8023CB84
void zCameraTweakGlobal_Add(unsigned int owner /* r30 */, float priority /* f26 */, float time /* f27 */, float pitch /* f28 */, float distMult /* f29 */, float pivotHeight /* f30 */, float fov /* f31 */) {
    // Local variables
    int i; // r0
    int j; // r26

    // References
    // -> static struct zCamTweak sCamTweakList[8];
    // -> static float sCamTweakFOV[2];
    // -> static float sCamTweakPivotHeight[2];
    // -> static float sCamTweakDistMult[2];
    // -> static float sCamTweakPitch[2];
    // -> static float sCamTweakTime;
    // -> static float sCamTweakLerp;
    // -> static int sCamTweakCount;
    // -> static char __FUNCTION__[23];
}

// Range: 0x8023CBC0 -> 0x8023CD48
void zCameraTweakGlobal_Remove(unsigned int owner /* r0 */) {
    // Local variables
    int i; // r30
    int j; // r29

    // References
    // -> static int sCamTweakCount;
    // -> static struct zCamTweak sCamTweakList[8];
    // -> static float sCamTweakFOV[2];
    // -> static float sCamTweakPivotHeight[2];
    // -> static float sCamTweakDistMult[2];
    // -> static float sCamTweakPitch[2];
    // -> static float sCamTweakTime;
    // -> static float sCamTweakLerp;
}

// Range: 0x8023CD48 -> 0x8023CDC4
void zCameraTweakGlobal_Reset() {
    // References
    // -> static float sCamTweakFOVCur;
    // -> static float sCamTweakPivotHeightCur;
    // -> static float sCamTweakDistMultCur;
    // -> static float sCamTweakPitchCur;
    // -> static float sCamTweakLerp;
    // -> static float sCamTweakTime;
    // -> static float sCamTweakDistMult[2];
    // -> static float sCamTweakPitch[2];
    // -> static int sCamTweakCount;
}

// Range: 0x8023CDC4 -> 0x8023CE84
void zCameraTweakGlobal_Update(float dt /* f0 */) {
    // References
    // -> static float sCamTweakDistMultCur;
    // -> static float sCamTweakFOV[2];
    // -> static float sCamTweakFOVCur;
    // -> static float sCamTweakPivotHeight[2];
    // -> static float sCamTweakPivotHeightCur;
    // -> static float sCamTweakDistMult[2];
    // -> static float sCamTweakPitch[2];
    // -> static float sCamTweakLerp;
    // -> static float sCamTweakPitchCur;
    // -> static float sCamTweakTime;
}

// Range: 0x8023CE84 -> 0x8023CE8C
float zCameraTweakGlobal_GetPitch() {
    // References
    // -> static float sCamTweakPitchCur;
}

// Range: 0x8023CE8C -> 0x8023CE94
float zCameraTweakGlobal_GetPivotHeight() {
    // References
    // -> static float sCamTweakPivotHeightCur;
}

// Range: 0x8023CE94 -> 0x8023CE9C
float zCameraTweakGlobal_GetFOV() {
    // References
    // -> static float sCamTweakFOVCur;
}

static char __FUNCTION__[18]; // size: 0x12, address: 0x80C049E0
// total size: 0x20
struct xLinkAsset {
    // Members
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
// total size: 0x10
struct xBase {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    const struct xLinkAsset * link; // offset 0x8, size 0x4
    void (* eventFunc)(struct xBase *, struct xBase *, unsigned int, float *, struct xBase *, unsigned int); // offset 0xC, size 0x4
};
// total size: 0x8
struct xBaseAsset {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x10
struct xDynAsset : public xBaseAsset {
    // Members
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
// Range: 0x8023CE9C -> 0x8023D020
void zCameraTweak_Init(struct xBase & data /* r30 */, struct xDynAsset & asset /* r31 */, unsigned long asset_size /* r28 */) {
    // Local variables
    unsigned long expected_asset_size; // r29

    // References
    // -> static char __FUNCTION__[18];
}

static char __FUNCTION__[18]; // size: 0x12, address: 0x80C049F4
// total size: 0x28
struct CameraTweak_asset : public xDynAsset {
    // Members
    int priority; // offset 0x10, size 0x4
    float time; // offset 0x14, size 0x4
    float pitch_adjust; // offset 0x18, size 0x4
    float dist_adjust; // offset 0x1C, size 0x4
    float pivot_height_adjust; // offset 0x20, size 0x4
    float fov_adjust; // offset 0x24, size 0x4
};
// total size: 0x14
struct zCameraTweak : public xBase {
    // Members
    struct CameraTweak_asset * casset; // offset 0x10, size 0x4
};
// Range: 0x8023D020 -> 0x8023D170
void zCameraTweak_Init(struct zCameraTweak * tweak /* r31 */, struct CameraTweak_asset * asset /* r30 */) {
    // References
    // -> static char __FUNCTION__[18];
}

// total size: 0x0
struct xSerial {};
// Range: 0x8023D170 -> 0x8023D190
void zCameraTweak_Save(struct zCameraTweak * tweak /* r0 */, struct xSerial * s /* r0 */) {}

// Range: 0x8023D190 -> 0x8023D1B0
void zCameraTweak_Load(struct zCameraTweak * tweak /* r0 */, struct xSerial * s /* r0 */) {}

static char __FUNCTION__[21]; // size: 0x15, address: 0x80C04A08
// total size: 0x10
struct rest_config {
    // Members
    float dist; // offset 0x0, size 0x4
    float input_center_phi; // offset 0x4, size 0x4
    float yaw_offset; // offset 0x8, size 0x4
    float pitch_offset; // offset 0xC, size 0x4
};
// Range: 0x8023D1B0 -> 0x8023D318
void zCameraTweak_EventCB(struct xBase * to /* r30 */, unsigned int toEvent /* r31 */) {
    // Local variables
    struct zCameraTweak * tweak; // r0
    struct rest_config tempCfg; // r1+0x8

    // References
    // -> static char __FUNCTION__[21];
}


