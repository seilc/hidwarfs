/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zCameraTweak.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A9FE8 -> 0x802AACC4
*/
static int sCamTweakCount; // size: 0x4, address: 0x80D6B4A8
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
static struct zCamTweak sCamTweakList[8]; // size: 0xE0, address: 0x80D2CD50
static float sCamTweakLerp; // size: 0x4, address: 0x80D6B4AC
static float sCamTweakTime; // size: 0x4, address: 0x80D6B4B0
static float sCamTweakPitch[2]; // size: 0x8, address: 0x80D6B4B4
static float sCamTweakDistMult[2]; // size: 0x8, address: 0x80D6B4BC
static float sCamTweakPivotHeight[2]; // size: 0x8, address: 0x80D6B4C4
static float sCamTweakFOV[2]; // size: 0x8, address: 0x80D6B4CC
static float sCamTweakPitchCur; // size: 0x4, address: 0x80D6B4D4
static float sCamTweakDistMultCur; // size: 0x4, address: 0x80D6B4D8
static float sCamTweakPivotHeightCur; // size: 0x4, address: 0x80D6B4DC
static float sCamTweakFOVCur; // size: 0x4, address: 0x80D6B4E0
// Range: 0x802A9FE8 -> 0x802AA008
void zCameraTweakGlobal_Init() {}

static char __FUNCTION__[23]; // size: 0x17, address: 0x80526798
// Range: 0x802AA008 -> 0x802AA3B4
void zCameraTweakGlobal_Add(unsigned int owner /* r29 */, float priority /* f28 */, float time /* f29 */, float pitch /* r1+0x8 */, float distMult /* f30 */, float pivotHeight /* r1+0xC */, float fov /* r1+0x10 */) {
    // Local variables
    int i; // r31
    int j; // r30

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

// Range: 0x802AA3F0 -> 0x802AA5F0
void zCameraTweakGlobal_Remove(unsigned int owner /* r1+0x8 */) {
    // Local variables
    int i; // r31
    int j; // r30

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

// Range: 0x802AA5F0 -> 0x802AA678
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

// Range: 0x802AA678 -> 0x802AA77C
void zCameraTweakGlobal_Update(float dt /* r1+0x8 */) {
    // References
    // -> static float sCamTweakDistMultCur;
    // -> static float sCamTweakLerp;
    // -> static float sCamTweakFOV[2];
    // -> static float sCamTweakFOVCur;
    // -> static float sCamTweakPivotHeight[2];
    // -> static float sCamTweakPivotHeightCur;
    // -> static float sCamTweakDistMult[2];
    // -> static float sCamTweakPitch[2];
    // -> static float sCamTweakPitchCur;
    // -> static float sCamTweakTime;
}

// Range: 0x802AA77C -> 0x802AA784
float zCameraTweakGlobal_GetPitch() {
    // References
    // -> static float sCamTweakPitchCur;
}

// Range: 0x802AA784 -> 0x802AA78C
float zCameraTweakGlobal_GetPivotHeight() {
    // References
    // -> static float sCamTweakPivotHeightCur;
}

// Range: 0x802AA78C -> 0x802AA794
float zCameraTweakGlobal_GetFOV() {
    // References
    // -> static float sCamTweakFOVCur;
}

static char __FUNCTION__[18]; // size: 0x12, address: 0x80D662B8
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
// Range: 0x802AA794 -> 0x802AA940
void zCameraTweak_Init(struct xBase & data /* r1+0x8 */, struct xDynAsset & asset /* r31 */, unsigned long asset_size /* r29 */) {
    // Local variables
    unsigned long expected_asset_size; // r30

    // References
    // -> static char __FUNCTION__[18];
}

static char __FUNCTION__[18]; // size: 0x12, address: 0x80D662CA
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
// Range: 0x802AA940 -> 0x802AAACC
void zCameraTweak_Init(struct zCameraTweak * tweak /* r31 */, struct CameraTweak_asset * asset /* r29 */) {
    // Local variables
    struct CameraTweak_asset * casset; // r30

    // References
    // -> static char __FUNCTION__[18];
}

// total size: 0x0
struct xSerial {};
// Range: 0x802AAACC -> 0x802AAAFC
void zCameraTweak_Save(struct zCameraTweak * tweak /* r1+0x8 */, struct xSerial * s /* r1+0xC */) {}

// Range: 0x802AAAFC -> 0x802AAB2C
void zCameraTweak_Load(struct zCameraTweak * tweak /* r1+0x8 */, struct xSerial * s /* r1+0xC */) {}

static char __FUNCTION__[21]; // size: 0x15, address: 0x805267AF
// total size: 0x10
struct rest_config {
    // Members
    float dist; // offset 0x0, size 0x4
    float input_center_phi; // offset 0x4, size 0x4
    float yaw_offset; // offset 0x8, size 0x4
    float pitch_offset; // offset 0xC, size 0x4
};
// Range: 0x802AAB2C -> 0x802AACC4
void zCameraTweak_EventCB(struct xBase * to /* r30 */, unsigned int toEvent /* r1+0x8 */) {
    // Local variables
    struct zCameraTweak * tweak; // r31
    struct rest_config tempCfg; // r1+0xC

    // References
    // -> static char __FUNCTION__[21];
}


