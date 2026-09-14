/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\gc\iScrFX.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80088470 -> 0x80088E48
*/
// Range: 0x80088470 -> 0x80088474
void iScrFxInit() {}

enum RwVideoModeFlag {
    rwVIDEOMODEEXCLUSIVE = 1,
    rwVIDEOMODEINTERLACE = 2,
    rwVIDEOMODEFFINTERLACE = 4,
    rwVIDEOMODE_PS2_FSAASHRINKBLIT = 256,
    rwVIDEOMODE_PS2_FSAAREADCIRCUIT = 512,
    rwVIDEOMODE_XBOX_WIDESCREEN = 256,
    rwVIDEOMODE_XBOX_PROGRESSIVE = 512,
    rwVIDEOMODE_XBOX_FIELD = 1024,
    rwVIDEOMODE_XBOX_10X11PIXELASPECT = 2048,
    rwVIDEOMODEFLAGFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x18
struct RwVideoMode {
    // Members
    int width; // offset 0x0, size 0x4
    int height; // offset 0x4, size 0x4
    int depth; // offset 0x8, size 0x4
    enum RwVideoModeFlag flags; // offset 0xC, size 0x4
    int refRate; // offset 0x10, size 0x4
    int format; // offset 0x14, size 0x4
};
void * RwEngineInstance; // size: 0x4, address: 0x803C4584
// Range: 0x80088474 -> 0x800884A8
void iScrFxBegin() {
    // References
    // -> void * RwEngineInstance;
}

// Range: 0x800884A8 -> 0x800884AC
void iScrFxEnd() {}

static unsigned int sMotionBlurEnabled; // size: 0x4, address: 0x803C17B0
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
// total size: 0x18
struct rwGameCube2DVertex {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    unsigned char r; // offset 0xC, size 0x1
    unsigned char g; // offset 0xD, size 0x1
    unsigned char b; // offset 0xE, size 0x1
    unsigned char a; // offset 0xF, size 0x1
    float u; // offset 0x10, size 0x4
    float v; // offset 0x14, size 0x4
};
// total size: 0x7C
struct _iMotionBlurData {
    // Members
    int motionBlurAlpha; // offset 0x0, size 0x4
    struct RwRaster * motionBlurFrontBuffer; // offset 0x4, size 0x4
    struct rwGameCube2DVertex vertex[4]; // offset 0x8, size 0x60
    unsigned short index[6]; // offset 0x68, size 0xC
    unsigned int w; // offset 0x74, size 0x4
    unsigned int h; // offset 0x78, size 0x4
};
static struct _iMotionBlurData sMBD; // size: 0x7C, address: 0x802D3EF0
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
// Range: 0x800884AC -> 0x8008850C
void iScrFxCameraCreated(struct RwCamera * pCamera /* r0 */) {
    // Local variables
    unsigned int i; // r0
    unsigned int v; // r7

    // References
    // -> static struct _iMotionBlurData sMBD;
}

// Range: 0x8008850C -> 0x8008854C
void iScrFxCameraEndScene(struct RwCamera * pCamera /* r0 */) {
    // References
    // -> static struct _iMotionBlurData sMBD;
    // -> static unsigned int sMotionBlurEnabled;
}

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
// Range: 0x8008854C -> 0x800886BC
static void iCameraOverlayRender(struct RwRaster * ras /* r31 */, struct RwRGBA & col /* r0 */) {
    // Local variables
    unsigned int i; // r0
    enum RwBlendFunction oldSrcBlend; // r1+0xC
    enum RwBlendFunction oldDestBlend; // r1+0x8

    // References
    // -> void * RwEngineInstance;
    // -> static struct _iMotionBlurData sMBD;
}

// Range: 0x800886BC -> 0x800886C4
int iScrFxMotionBlurOpen() {}

// Range: 0x800886C4 -> 0x80088714
int iScrFxCameraDestroyed() {
    // References
    // -> static struct _iMotionBlurData sMBD;
}

// total size: 0x4
struct RwRGBA {
    // Members
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// Range: 0x80088714 -> 0x80088764
void iScrFxMotionBlurRender(struct RwCamera * camera /* r0 */, unsigned int alpha /* r0 */) {
    // Local variables
    struct RwRGBA color; // r1+0xC

    // References
    // -> static struct _iMotionBlurData sMBD;
}

unsigned int FLARE_SIZE; // size: 0x4, address: 0x803BDBB8
// Range: 0x80088764 -> 0x80088924
static void RenderRect(struct RwRect * srcRect /* r0 */, float cameraZ /* f0 */) {
    // Local variables
    struct rwGameCube2DVertex verts[4]; // r1+0x10
    unsigned short indices[4]; // r1+0x8
    struct RwCamera * camera; // r4
    float recipCamZ; // f2
    float screenZ; // f4

    // References
    // -> void * RwEngineInstance;
}

unsigned short _RwDlTokenCurrent; // size: 0x2, address: 0x803C0BF8
// total size: 0x8
struct RwLinkList {
    // Members
    struct RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0xA4
struct RwFrame {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLLLink inDirtyListLink; // offset 0x8, size 0x8
    struct RwMatrixTag modelling; // offset 0x10, size 0x40
    struct RwMatrixTag ltm; // offset 0x50, size 0x40
    struct RwLinkList objectList; // offset 0x90, size 0x8
    struct RwFrame * child; // offset 0x98, size 0x4
    struct RwFrame * next; // offset 0x9C, size 0x4
    struct RwFrame * root; // offset 0xA0, size 0x4
};
// total size: 0x10
struct RwRect {
    // Members
    int x; // offset 0x0, size 0x4
    int y; // offset 0x4, size 0x4
    int w; // offset 0x8, size 0x4
    int h; // offset 0xC, size 0x4
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
// total size: 0xC
struct RwV3d {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// Range: 0x80088924 -> 0x80088D68
static int DetermineFlareOcclusion(struct RwCamera * camera /* r29 */, struct RwFrame * frame /* r30 */) {
    // Local variables
    struct RwRect srcRect; // r1+0x34
    int size; // r31
    struct RwVideoMode vidInfo; // r1+0x44
    struct RwMatrixTag invMtx; // r1+0x9C
    struct RwMatrixTag tmp; // r1+0x5C
    struct RwV3d FlarePosition; // r1+0x28
    int area; // r30
    struct RwMatrixTag * matrix; // r4
    const struct RwV2d * vw; // r0
    unsigned long top_pixels_in; // r1+0x24
    unsigned long top_pixels_out; // r1+0x20
    unsigned long bot_pixels_in; // r1+0x1C
    unsigned long bot_pixels_out; // r1+0x18
    unsigned long clr_pixels_in; // r1+0x14
    unsigned long copy_clks; // r1+0x10
    enum RwBlendFunction oldSrcBlend; // r1+0xC
    enum RwBlendFunction oldDestBlend; // r1+0x8
    unsigned int token; // r31
    int result; // r0

    // References
    // -> unsigned short _RwDlTokenCurrent;
    // -> void * RwEngineInstance;
    // -> unsigned int FLARE_SIZE;
}

// Range: 0x80088D68 -> 0x80088D6C
void iScrFxLensFlare_Reset() {}

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
struct RwTexture * gxFlareTexture; // size: 0x4, address: 0x803C13F4
struct RwFrame * gxFlareFrame; // size: 0x4, address: 0x803C13F8
// total size: 0xC
struct xVec3 {
    // Static members
    static struct xVec3 m_NegDoubleVec; // size: 0xC
    static struct xVec3 m_DoubleVec; // size: 0xC
    static struct xVec3 m_NegHalfVec; // size: 0xC
    static struct xVec3 m_HalfVec; // size: 0xC
    static struct xVec3 m_UnitAxisZ; // size: 0xC
    static struct xVec3 m_UnitAxisY; // size: 0xC
    static struct xVec3 m_UnitAxisX; // size: 0xC
    static struct xVec3 m_NegOnes; // size: 0xC
    static struct xVec3 m_Ones; // size: 0xC
    static struct xVec3 m_Null; // size: 0xC

    // Members
    union { // inferred
        struct RwV3d m_RwV3d; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
        float a[3]; // offset 0x0, size 0xC
    };
};
// total size: 0x30
struct iScrFxLensFlare {
    // Members
    struct xVec3 pos; // offset 0x0, size 0xC
    float dist2; // offset 0xC, size 0x4
    struct xVec3 at; // offset 0x10, size 0xC
    void * source; // offset 0x1C, size 0x4
    float intensity; // offset 0x20, size 0x4
    float attenuatedIntensity; // offset 0x24, size 0x4
    unsigned int flags; // offset 0x28, size 0x4
    unsigned int padding; // offset 0x2C, size 0x4
};
// Range: 0x80088D6C -> 0x80088E48
void iScrFxLensFlare_Render(struct RwCamera * camera /* r27 */, struct iScrFxLensFlare * flare /* r28 */, void (* renderCB)(struct RwRaster *, struct RwFrame *, unsigned char, void *) /* r29 */) {
    // Local variables
    struct RwFrame * frame; // r30
    int result; // r0

    // References
    // -> struct RwTexture * gxFlareTexture;
    // -> struct RwFrame * gxFlareFrame;
}


