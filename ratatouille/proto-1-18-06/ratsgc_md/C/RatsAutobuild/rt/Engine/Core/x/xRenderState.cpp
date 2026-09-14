/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xRenderState.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8005A5CC -> 0x8005A948
*/
// Range: 0x8005A5CC -> 0x8005A5D0
void xRenderSceneEnter() {}

// Range: 0x8005A5D0 -> 0x8005A5D4
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
void * RwEngineInstance; // size: 0x4, address: 0x803C4584
float old_near_plane; // size: 0x4, address: 0x803BD888
float old_far_plane; // size: 0x4, address: 0x803BD88C
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
// Range: 0x8005A5D4 -> 0x8005A660
void xRenderStateSetZBias(float bias /* f31 */) {
    // Local variables
    struct RwCamera * cam; // r31

    // References
    // -> float old_far_plane;
    // -> float old_near_plane;
    // -> void * RwEngineInstance;
}

// Range: 0x8005A660 -> 0x8005A6C8
void xRenderStateResetZBias() {
    // Local variables
    struct RwCamera * cam; // r31

    // References
    // -> float old_far_plane;
    // -> float old_near_plane;
    // -> void * RwEngineInstance;
}

static void * old_alpha_discard_value_gc; // size: 0x4, address: 0x803C12C8
// Range: 0x8005A6C8 -> 0x8005A764
void xRenderStateSetAlphaDiscard(int value /* r31 */) {
    // References
    // -> static void * old_alpha_discard_value_gc;
    // -> void * RwEngineInstance;
}

// Range: 0x8005A764 -> 0x8005A788
void xRenderStateResetAlphaDiscard() {}

// Range: 0x8005A788 -> 0x8005A78C
void xRenderFixUntexturedBegin() {}

// Range: 0x8005A78C -> 0x8005A790
void xRenderFixUntexturedEnd() {}

// Range: 0x8005A790 -> 0x8005A794
void xRenderFixIMBegin() {}

// Range: 0x8005A794 -> 0x8005A798
void xRenderFixIMEnd() {}

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
// Range: 0x8005A798 -> 0x8005A7F4
void xRenderStateBlendModesSet(enum RwBlendFunction srcBlend /* r0 */, enum RwBlendFunction destBlend /* r31 */) {
    // References
    // -> void * RwEngineInstance;
}

// Range: 0x8005A7F4 -> 0x8005A850
void xRenderStateZModesSet(int ZWrite /* r0 */, int ZTest /* r31 */) {
    // References
    // -> void * RwEngineInstance;
}

// Range: 0x8005A850 -> 0x8005A8E0
void xRenderStateBlendAndZModesSet(enum RwBlendFunction srcBlend /* r3 */, enum RwBlendFunction destBlend /* r29 */, int ZWrite /* r30 */, int ZTest /* r31 */) {
    // References
    // -> void * RwEngineInstance;
}

// Range: 0x8005A8E0 -> 0x8005A948
void xRenderStateBlendModesGet(enum RwBlendFunction * srcBlend /* r3 */, enum RwBlendFunction * destBlend /* r31 */) {
    // References
    // -> void * RwEngineInstance;
}


