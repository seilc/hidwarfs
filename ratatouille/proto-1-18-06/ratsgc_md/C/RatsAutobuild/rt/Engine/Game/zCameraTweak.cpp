/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zCameraTweak.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801687B4 -> 0x80168F30
*/
static int sCamTweakCount; // size: 0x4, address: 0x803C31F0
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
static struct zCamTweak sCamTweakList[8]; // size: 0xE0, address: 0x8038FF60
static float sCamTweakLerp; // size: 0x4, address: 0x803C31F4
static float sCamTweakTime; // size: 0x4, address: 0x803C31F8
static float sCamTweakPitch[2]; // size: 0x8, address: 0x803C31FC
static float sCamTweakDistMult[2]; // size: 0x8, address: 0x803C3204
static float sCamTweakPivotHeight[2]; // size: 0x8, address: 0x803C320C
static float sCamTweakFOV[2]; // size: 0x8, address: 0x803C3214
static float sCamTweakPitchCur; // size: 0x4, address: 0x803C321C
static float sCamTweakDistMultCur; // size: 0x4, address: 0x803C3220
static float sCamTweakPivotHeightCur; // size: 0x4, address: 0x803C3224
static float sCamTweakFOVCur; // size: 0x4, address: 0x803C3228
// Range: 0x801687B4 -> 0x801687D4
void zCameraTweakGlobal_Init() {}

// Range: 0x801687D4 -> 0x80168A54
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
}

// Range: 0x80168A90 -> 0x80168C08
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

// Range: 0x80168C08 -> 0x80168C84
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

// Range: 0x80168C84 -> 0x80168D44
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

// Range: 0x80168D44 -> 0x80168D4C
float zCameraTweakGlobal_GetPitch() {
    // References
    // -> static float sCamTweakPitchCur;
}

// Range: 0x80168D4C -> 0x80168D54
float zCameraTweakGlobal_GetPivotHeight() {
    // References
    // -> static float sCamTweakPivotHeightCur;
}

// Range: 0x80168D54 -> 0x80168D5C
float zCameraTweakGlobal_GetFOV() {
    // References
    // -> static float sCamTweakFOVCur;
}

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
// Range: 0x80168D5C -> 0x80168D7C
void zCameraTweak_Init(struct xBase & data /* r0 */, struct xDynAsset & asset /* r0 */) {}

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
// Range: 0x80168D7C -> 0x80168DDC
void zCameraTweak_Init(struct zCameraTweak * tweak /* r30 */, struct CameraTweak_asset * asset /* r31 */) {}

// total size: 0x0
struct xSerial {};
// Range: 0x80168DDC -> 0x80168DFC
void zCameraTweak_Save(struct zCameraTweak * tweak /* r0 */, struct xSerial * s /* r0 */) {}

// Range: 0x80168DFC -> 0x80168E1C
void zCameraTweak_Load(struct zCameraTweak * tweak /* r0 */, struct xSerial * s /* r0 */) {}

// total size: 0x10
struct rest_config {
    // Members
    float dist; // offset 0x0, size 0x4
    float input_center_phi; // offset 0x4, size 0x4
    float yaw_offset; // offset 0x8, size 0x4
    float pitch_offset; // offset 0xC, size 0x4
};
// Range: 0x80168E1C -> 0x80168F30
void zCameraTweak_EventCB(struct xBase * to /* r4 */, unsigned int toEvent /* r0 */) {
    // Local variables
    struct zCameraTweak * tweak; // r31
    struct rest_config tempCfg; // r1+0x8
}


