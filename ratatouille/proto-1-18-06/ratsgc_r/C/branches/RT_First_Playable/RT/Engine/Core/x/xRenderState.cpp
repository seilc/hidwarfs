/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xRenderState.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800A3F50 -> 0x800A4AA4
*/
// Range: 0x800A3F50 -> 0x800A3F54
void xRenderSceneEnter() {}

// Range: 0x800A3F54 -> 0x800A3F58
void xRenderSceneExit() {}

// total size: 0x34
struct RwRaster {
    // Members
    struct RwRaster * parent; // offset 0x0, size 0x4
    unsigned char * cpPixels; // offset 0x4, size 0x4
    unsigned char * palette; // offset 0x8, size 0x4
    int width; // offset 0xC, size 0x4
    int height; // offset 0x10, size 0x4
    int depth; // offset 0x14, size 0x4
    int stride; // offset 0x18, size 0x4
    signed short nOffsetX; // offset 0x1C, size 0x2
    signed short nOffsetY; // offset 0x1E, size 0x2
    unsigned char cType; // offset 0x20, size 0x1
    unsigned char cFlags; // offset 0x21, size 0x1
    unsigned char privateFlags; // offset 0x22, size 0x1
    unsigned char cFormat; // offset 0x23, size 0x1
    unsigned char * originalPixels; // offset 0x24, size 0x4
    int originalWidth; // offset 0x28, size 0x4
    int originalHeight; // offset 0x2C, size 0x4
    int originalStride; // offset 0x30, size 0x4
};
// total size: 0x8
struct RwObject {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};
// total size: 0x8
struct RwLLLink {
    // Members
    struct RwLLLink * next; // offset 0x0, size 0x4
    struct RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x8
struct RwLinkList {
    // Members
    struct RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0x18
struct RwTexDictionary {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLinkList texturesInDict; // offset 0x8, size 0x8
    struct RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0x58
struct RwTexture {
    // Members
    struct RwRaster * raster; // offset 0x0, size 0x4
    struct RwTexDictionary * dict; // offset 0x4, size 0x4
    struct RwLLLink lInDictionary; // offset 0x8, size 0x8
    char name[32]; // offset 0x10, size 0x20
    char mask[32]; // offset 0x30, size 0x20
    unsigned int filterAddressing; // offset 0x50, size 0x4
    int refCount; // offset 0x54, size 0x4
};
void * RwEngineInstance; // size: 0x4, address: 0x80C09F34
float old_near_plane; // size: 0x4, address: 0x80BFDF60
float old_far_plane; // size: 0x4, address: 0x80BFDF64
static float bias_scale; // size: 0x4, address: 0x80C07610
static signed char init; // size: 0x1, address: 0x80C07614
static char __FUNCTION__[21]; // size: 0x15, address: 0x80BFDF68
// total size: 0x14
struct RwObjectHasFrame {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLLLink lFrame; // offset 0x8, size 0x8
    struct RwObjectHasFrame * (* sync)(struct RwObjectHasFrame *); // offset 0x10, size 0x4
};
enum RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
struct RwV3d {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x40
struct RwMatrixTag {
    // Members
    struct RwV3d right; // offset 0x0, size 0xC
    unsigned int flags; // offset 0xC, size 0x4
    struct RwV3d up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    struct RwV3d at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
    struct RwV3d pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x8
struct RwV2d {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x10
struct RwPlane {
    // Members
    struct RwV3d normal; // offset 0x0, size 0xC
    float distance; // offset 0xC, size 0x4
};
// total size: 0x14
struct RwFrustumPlane {
    // Members
    struct RwPlane plane; // offset 0x0, size 0x10
    unsigned char closestX; // offset 0x10, size 0x1
    unsigned char closestY; // offset 0x11, size 0x1
    unsigned char closestZ; // offset 0x12, size 0x1
    unsigned char pad; // offset 0x13, size 0x1
};
// total size: 0x18
struct RwBBox {
    // Members
    struct RwV3d sup; // offset 0x0, size 0xC
    struct RwV3d inf; // offset 0xC, size 0xC
};
// total size: 0x184
struct RwCamera {
    // Members
    struct RwObjectHasFrame object; // offset 0x0, size 0x14
    enum RwCameraProjection projectionType; // offset 0x14, size 0x4
    struct RwCamera * (* beginUpdate)(struct RwCamera *); // offset 0x18, size 0x4
    struct RwCamera * (* endUpdate)(struct RwCamera *); // offset 0x1C, size 0x4
    struct RwMatrixTag viewMatrix; // offset 0x20, size 0x40
    struct RwRaster * frameBuffer; // offset 0x60, size 0x4
    struct RwRaster * zBuffer; // offset 0x64, size 0x4
    struct RwV2d viewWindow; // offset 0x68, size 0x8
    struct RwV2d recipViewWindow; // offset 0x70, size 0x8
    struct RwV2d viewOffset; // offset 0x78, size 0x8
    float nearPlane; // offset 0x80, size 0x4
    float farPlane; // offset 0x84, size 0x4
    float fogPlane; // offset 0x88, size 0x4
    float zScale; // offset 0x8C, size 0x4
    float zShift; // offset 0x90, size 0x4
    struct RwFrustumPlane frustumPlanes[6]; // offset 0x94, size 0x78
    struct RwBBox frustumBoundBox; // offset 0x10C, size 0x18
    struct RwV3d frustumCorners[8]; // offset 0x124, size 0x60
};
// Range: 0x800A3F58 -> 0x800A40B0
void xRenderStateSetZBias(float bias /* f31 */) {
    // Local variables
    struct RwCamera * cam; // r31

    // References
    // -> float old_far_plane;
    // -> float old_near_plane;
    // -> static float bias_scale;
    // -> static signed char init;
    // -> static char __FUNCTION__[21];
    // -> void * RwEngineInstance;
}

static char __FUNCTION__[23]; // size: 0x17, address: 0x80BFDF80
// Range: 0x800A40B0 -> 0x800A41C4
void xRenderStateResetZBias() {
    // Local variables
    struct RwCamera * cam; // r31

    // References
    // -> float old_far_plane;
    // -> float old_near_plane;
    // -> static char __FUNCTION__[23];
    // -> void * RwEngineInstance;
}

static void * old_alpha_discard_value_gc; // size: 0x4, address: 0x80C07618
// Range: 0x800A41C4 -> 0x800A4254
void xRenderStateSetAlphaDiscard(int value /* r31 */) {
    // References
    // -> static void * old_alpha_discard_value_gc;
}

// Range: 0x800A4254 -> 0x800A4278
void xRenderStateResetAlphaDiscard() {}

// Range: 0x800A4278 -> 0x800A427C
void xRenderFixUntexturedBegin() {}

// Range: 0x800A427C -> 0x800A4280
void xRenderFixUntexturedEnd() {}

// Range: 0x800A4280 -> 0x800A4284
void xRenderFixIMBegin() {}

// Range: 0x800A4284 -> 0x800A4288
void xRenderFixIMEnd() {}

static char __FUNCTION__[28]; // size: 0x1C, address: 0x8042BC28
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
// Range: 0x800A4288 -> 0x800A4340
int xRenderStateCheckBlendModes(enum RwBlendFunction desiredSrcBlend /* r30 */, enum RwBlendFunction desiredDestBlend /* r31 */) {
    // Local variables
    enum RwBlendFunction currentSrcBlend; // r1+0xC
    enum RwBlendFunction currentDestBlend; // r1+0x8

    // References
    // -> static char __FUNCTION__[28];
}

static int shhhh; // size: 0x4, address: 0x80C0761C
static signed char init; // size: 0x1, address: 0x80C07620
static char __FUNCTION__[23]; // size: 0x17, address: 0x80BFDF98
enum RwRenderState {
    rwRENDERSTATENARENDERSTATE = 0,
    rwRENDERSTATETEXTURERASTER = 1,
    rwRENDERSTATETEXTUREADDRESS = 2,
    rwRENDERSTATETEXTUREADDRESSU = 3,
    rwRENDERSTATETEXTUREADDRESSV = 4,
    rwRENDERSTATETEXTUREPERSPECTIVE = 5,
    rwRENDERSTATEZTESTENABLE = 6,
    rwRENDERSTATESHADEMODE = 7,
    rwRENDERSTATEZWRITEENABLE = 8,
    rwRENDERSTATETEXTUREFILTER = 9,
    rwRENDERSTATESRCBLEND = 10,
    rwRENDERSTATEDESTBLEND = 11,
    rwRENDERSTATEVERTEXALPHAENABLE = 12,
    rwRENDERSTATEBORDERCOLOR = 13,
    rwRENDERSTATEFOGENABLE = 14,
    rwRENDERSTATEFOGCOLOR = 15,
    rwRENDERSTATEFOGTYPE = 16,
    rwRENDERSTATEFOGDENSITY = 17,
    rwRENDERSTATECULLMODE = 20,
    rwRENDERSTATESTENCILENABLE = 21,
    rwRENDERSTATESTENCILFAIL = 22,
    rwRENDERSTATESTENCILZFAIL = 23,
    rwRENDERSTATESTENCILPASS = 24,
    rwRENDERSTATESTENCILFUNCTION = 25,
    rwRENDERSTATESTENCILFUNCTIONREF = 26,
    rwRENDERSTATESTENCILFUNCTIONMASK = 27,
    rwRENDERSTATESTENCILFUNCTIONWRITEMASK = 28,
    rwRENDERSTATEALPHATESTFUNCTION = 29,
    rwRENDERSTATEALPHATESTFUNCTIONREF = 30,
    rwRENDERSTATEFORCEENUMSIZEINT = 2147483647,
};
// Range: 0x800A4340 -> 0x800A4490
int xRenderStateCheckState(enum RwRenderState state /* r30 */, void * desiredValue /* r31 */) {
    // Local variables
    unsigned int curValue; // r1+0x8

    // References
    // -> static char __FUNCTION__[23];
    // -> static int shhhh;
    // -> static signed char init;
    // -> void * RwEngineInstance;
}

static char __FUNCTION__[24]; // size: 0x18, address: 0x80BFDFB0
// Range: 0x800A4490 -> 0x800A4520
void RwRenderStateSetWrapper(enum RwRenderState state /* r0 */, void * value /* r0 */) {
    // References
    // -> void * RwEngineInstance;
    // -> static char __FUNCTION__[24];
}

static char __FUNCTION__[24]; // size: 0x18, address: 0x80BFDFC8
// Range: 0x800A4520 -> 0x800A45A8
int RwRenderStateGetWrapper(enum RwRenderState state /* r0 */, void * value /* r0 */) {
    // Local variables
    int ret; // r0

    // References
    // -> void * RwEngineInstance;
    // -> static char __FUNCTION__[24];
}

static char __FUNCTION__[26]; // size: 0x1A, address: 0x8042BC44
// Range: 0x800A45A8 -> 0x800A46AC
void xRenderStateBlendModesSet(enum RwBlendFunction srcBlend /* r30 */, enum RwBlendFunction destBlend /* r31 */) {
    // Local variables
    int ret; // r0

    // References
    // -> static char __FUNCTION__[26];
    // -> void * RwEngineInstance;
}

static char __FUNCTION__[22]; // size: 0x16, address: 0x80BFDFE0
// Range: 0x800A46AC -> 0x800A47A8
void xRenderStateZModesSet(int ZWrite /* r30 */, int ZTest /* r31 */) {
    // Local variables
    int ret; // r0

    // References
    // -> static char __FUNCTION__[22];
    // -> void * RwEngineInstance;
}

static char __FUNCTION__[30]; // size: 0x1E, address: 0x8042BC60
// Range: 0x800A47A8 -> 0x800A4994
void xRenderStateBlendAndZModesSet(enum RwBlendFunction srcBlend /* r28 */, enum RwBlendFunction destBlend /* r29 */, int ZWrite /* r30 */, int ZTest /* r31 */) {
    // Local variables
    int ret; // r0

    // References
    // -> static char __FUNCTION__[30];
    // -> void * RwEngineInstance;
}

static char __FUNCTION__[26]; // size: 0x1A, address: 0x8042BC80
// Range: 0x800A4994 -> 0x800A4AA4
void xRenderStateBlendModesGet(enum RwBlendFunction * srcBlend /* r30 */, enum RwBlendFunction * destBlend /* r31 */) {
    // Local variables
    int ret; // r0

    // References
    // -> static char __FUNCTION__[26];
    // -> void * RwEngineInstance;
}


