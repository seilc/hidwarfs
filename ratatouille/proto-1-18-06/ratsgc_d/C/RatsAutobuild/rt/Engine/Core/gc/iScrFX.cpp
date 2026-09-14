/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\gc\iScrFX.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80125B4C -> 0x80126B04
*/
// Range: 0x80125B4C -> 0x80125B50
void iScrFxInit() {}

// total size: 0x4
struct xColor_tag {
    // Members
    union { // inferred
        struct { // inferred
            unsigned char r; // offset 0x0, size 0x1
            unsigned char g; // offset 0x1, size 0x1
            unsigned char b; // offset 0x2, size 0x1
            unsigned char a; // offset 0x3, size 0x1
        };
        struct RwRGBA rgba; // offset 0x0, size 0x4
    };
};
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
// Range: 0x80125B50 -> 0x80125B78
void iScrFxBegin() {}

// Range: 0x80125B78 -> 0x80125B7C
void iScrFxEnd() {}

static unsigned int sMotionBlurEnabled; // size: 0x4, address: 0x80D69D40
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
static struct _iMotionBlurData sMBD; // size: 0x7C, address: 0x80517300
// Range: 0x80125B7C -> 0x80125B84
void iCameraMotionBlurActivate(unsigned int activate /* r3 */) {
    // References
    // -> static unsigned int sMotionBlurEnabled;
}

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
// Range: 0x80125B84 -> 0x80125C8C
void iScrFxCameraCreated(struct RwCamera * pCamera /* r1+0x8 */) {
    // Local variables
    unsigned int i; // r31
    unsigned int v; // r30

    // References
    // -> static struct _iMotionBlurData sMBD;
}

// Range: 0x80125C8C -> 0x80125CDC
void iScrFxCameraEndScene(struct RwCamera * pCamera /* r1+0x8 */) {
    // References
    // -> static struct _iMotionBlurData sMBD;
    // -> static unsigned int sMotionBlurEnabled;
}

// total size: 0x10
struct RwRect {
    // Members
    int x; // offset 0x0, size 0x4
    int y; // offset 0x4, size 0x4
    int w; // offset 0x8, size 0x4
    int h; // offset 0xC, size 0x4
};
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
// Range: 0x80125CDC -> 0x80125E54
static void iCameraOverlayRender(struct RwRaster * ras /* r1+0x8 */, struct RwRGBA & col /* r30 */) {
    // Local variables
    unsigned int i; // r31
    struct RwRect rect; // r1+0x14
    enum RwBlendFunction oldSrcBlend; // r1+0x10
    enum RwBlendFunction oldDestBlend; // r1+0xC

    // References
    // -> static struct _iMotionBlurData sMBD;
}

// Range: 0x80125E54 -> 0x80125E5C
int iScrFxMotionBlurOpen(struct RwCamera * camera /* r3 */) {}

// Range: 0x80125E5C -> 0x80125EB8
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
// Range: 0x80125EB8 -> 0x80125F64
void iScrFxMotionBlurRender(struct RwCamera * camera /* r1+0x8 */, unsigned int alpha /* r1+0xC */) {
    // Local variables
    struct RwRGBA color; // r1+0x14

    // References
    // -> static struct _iMotionBlurData sMBD;
}

unsigned int FLARE_SIZE; // size: 0x4, address: 0x80D61CF0
// Range: 0x80125F64 -> 0x801261C8
static void RenderRect(struct RwRect * srcRect /* r31 */) {
    // Local variables
    struct rwGameCube2DVertex verts[5]; // r1+0x18
    unsigned short indices[8]; // r1+0x8
}

// Range: 0x801261C8 -> 0x80126464
static void RenderRect(struct RwRect * srcRect /* r31 */, float cameraZ /* f29 */) {
    // Local variables
    struct rwGameCube2DVertex verts[4]; // r1+0x10
    unsigned short indices[4]; // r1+0x8
    struct RwCamera * camera; // r30
    float recipCamZ; // f30
    float screenZ; // f31
}

int gxLensFlareDebug; // size: 0x4, address: 0x80D6976C
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
// Range: 0x80126464 -> 0x801269A4
static int DetermineFlareOcclusion(struct RwCamera * camera /* r28 */, struct RwFrame * frame /* r1+0x8 */) {
    // Local variables
    struct RwRect srcRect; // r1+0x44
    int size; // r27
    struct RwVideoMode vidInfo; // r1+0x54
    struct RwV3d FlarePositionPixel; // r1+0x38
    struct RwMatrixTag invMtx; // r1+0xAC
    struct RwMatrixTag tmp; // r1+0x6C
    struct RwV3d FlarePosition; // r1+0x2C
    int calcEdgeFactor; // r29
    int edgeFactor; // r23
    int area; // r30
    struct RwMatrixTag * matrix; // r22
    const struct RwV2d * vw; // r31
    unsigned long top_pixels_in; // r1+0x28
    unsigned long top_pixels_out; // r1+0x24
    unsigned long bot_pixels_in; // r1+0x20
    unsigned long bot_pixels_out; // r1+0x1C
    unsigned long clr_pixels_in; // r1+0x18
    unsigned long copy_clks; // r1+0x14
    enum RwBlendFunction oldSrcBlend; // r1+0x10
    enum RwBlendFunction oldDestBlend; // r1+0xC
    unsigned int token; // r21
    int result; // r26

    // References
    // -> int gxLensFlareDebug;
    // -> unsigned int FLARE_SIZE;
}

// Range: 0x801269A4 -> 0x801269A8
void iScrFxLensFlare_Reset() {}

static char __FUNCTION__[23]; // size: 0x17, address: 0x8051737C
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
struct RwTexture * gxFlareTexture; // size: 0x4, address: 0x80D6975C
struct RwFrame * gxFlareFrame; // size: 0x4, address: 0x80D69760
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
// Range: 0x801269A8 -> 0x80126B04
void iScrFxLensFlare_Render(struct RwCamera * camera /* r31 */, struct iScrFxLensFlare * flare /* r29 */, void (* renderCB)(struct RwRaster *, struct RwFrame *, unsigned char, void *) /* r1+0x8 */) {
    // Local variables
    struct RwFrame * frame; // r30
    int result; // r28

    // References
    // -> struct RwTexture * gxFlareTexture;
    // -> struct RwFrame * gxFlareFrame;
    // -> static char __FUNCTION__[23];
}


