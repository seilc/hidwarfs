/*
    Compile unit: C:\TestBuild\in\Core\p2\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
static unsigned int sMotionBlurEnabled; // size: 0x4, address: 0x60891C
static class _iMotionBlurData sMBD; // size: 0x130, address: 0x61EB60
unsigned int FLARE_SIZE; // size: 0x4, address: 0x60774C
static signed int RenderLightPos; // size: 0x4, address: 0x0
unsigned int inv_raster; // size: 0x4, address: 0x0
class RwTexture * gxFlareTexture; // size: 0x4, address: 0x608B10
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x6B2890
__int128 * _rwDMAGateSlot; // size: 0x4, address: 0x6092B0
class RwFrame * gxFlareFrame; // size: 0x4, address: 0x608B20
class xColor_tag g_BLACK; // size: 0x4, address: 0x5E7208
__int128 * _rwDMAPktPtr; // size: 0x4, address: 0x6092A8
signed long skyAlpha_1; // size: 0x4, address: 0x607E80
signed long skyClamp_1; // size: 0x4, address: 0x607E70
// total size: 0x34
class RwRaster {
    // Members
public:
    class RwRaster * parent; // offset 0x0, size 0x4
    unsigned char * cpPixels; // offset 0x4, size 0x4
    unsigned char * palette; // offset 0x8, size 0x4
    signed int width; // offset 0xC, size 0x4
    signed int height; // offset 0x10, size 0x4
    signed int depth; // offset 0x14, size 0x4
    signed int stride; // offset 0x18, size 0x4
    signed short nOffsetX; // offset 0x1C, size 0x2
    signed short nOffsetY; // offset 0x1E, size 0x2
    unsigned char cType; // offset 0x20, size 0x1
    unsigned char cFlags; // offset 0x21, size 0x1
    unsigned char privateFlags; // offset 0x22, size 0x1
    unsigned char cFormat; // offset 0x23, size 0x1
    unsigned char * originalPixels; // offset 0x24, size 0x4
    signed int originalWidth; // offset 0x28, size 0x4
    signed int originalHeight; // offset 0x2C, size 0x4
    signed int originalStride; // offset 0x30, size 0x4
};
// total size: 0x14
class RwFrustumPlane {
    // Members
public:
    class RwPlane plane; // offset 0x0, size 0x10
    unsigned char closestX; // offset 0x10, size 0x1
    unsigned char closestY; // offset 0x11, size 0x1
    unsigned char closestZ; // offset 0x12, size 0x1
    unsigned char pad; // offset 0x13, size 0x1
};
// total size: 0x8
class RwV2d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x18
class RwBBox {
    // Members
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
};
// total size: 0x190
class RwCamera {
    // Members
public:
    class RwObjectHasFrame object; // offset 0x0, size 0x14
    enum RwCameraProjection projectionType; // offset 0x14, size 0x4
    class RwCamera * (* beginUpdate)(class RwCamera *); // offset 0x18, size 0x4
    class RwCamera * (* endUpdate)(class RwCamera *); // offset 0x1C, size 0x4
    class RwMatrixTag viewMatrix; // offset 0x20, size 0x40
    class RwRaster * frameBuffer; // offset 0x60, size 0x4
    class RwRaster * zBuffer; // offset 0x64, size 0x4
    class RwV2d viewWindow; // offset 0x68, size 0x8
    class RwV2d recipViewWindow; // offset 0x70, size 0x8
    class RwV2d viewOffset; // offset 0x78, size 0x8
    float nearPlane; // offset 0x80, size 0x4
    float farPlane; // offset 0x84, size 0x4
    float fogPlane; // offset 0x88, size 0x4
    float zScale; // offset 0x8C, size 0x4
    float zShift; // offset 0x90, size 0x4
    class RwFrustumPlane frustumPlanes[6]; // offset 0x94, size 0x78
    class RwBBox frustumBoundBox; // offset 0x10C, size 0x18
    class RwV3d frustumCorners[8]; // offset 0x124, size 0x60
};
// total size: 0x30
class iScrFxLensFlare {
    // Members
public:
    class xVec3 pos; // offset 0x0, size 0xC
    float dist2; // offset 0xC, size 0x4
    class xVec3 at; // offset 0x10, size 0xC
    void * source; // offset 0x1C, size 0x4
    float intensity; // offset 0x20, size 0x4
    float attenuatedIntensity; // offset 0x24, size 0x4
    unsigned int flags; // offset 0x28, size 0x4
    unsigned int padding; // offset 0x2C, size 0x4
};
// total size: 0x10
class RwPlane {
    // Members
public:
    class RwV3d normal; // offset 0x0, size 0xC
    float distance; // offset 0xC, size 0x4
};
// total size: 0x4
class xColor_tag {
    // Members
public:
    union { // inferred
        struct { // inferred
            unsigned char r; // offset 0x0, size 0x1
            unsigned char g; // offset 0x1, size 0x1
            unsigned char b; // offset 0x2, size 0x1
            unsigned char a; // offset 0x3, size 0x1
        };
        class RwRGBA rgba; // offset 0x0, size 0x4
    };
};
// total size: 0x40
class RwSky2DVertex {
    // Members
public:
    class RwSky2DVertexAlignmentOverlay u; // offset 0x0, size 0x40
};
// total size: 0xC
class xVec3 {
    // Members
public:
    union { // inferred
        class RwV3d m_RwV3d; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
        float a[3]; // offset 0x0, size 0xC
    };
};
// total size: 0xB0
class RwFrame {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink inDirtyListLink; // offset 0x8, size 0x8
    class RwMatrixTag modelling; // offset 0x10, size 0x40
    class RwMatrixTag ltm; // offset 0x50, size 0x40
    class RwLinkList objectList; // offset 0x90, size 0x8
    class RwFrame * child; // offset 0x98, size 0x4
    class RwFrame * next; // offset 0x9C, size 0x4
    class RwFrame * root; // offset 0xA0, size 0x4
};
// total size: 0x4
class RwRGBA {
    // Members
public:
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// total size: 0x10
class RwRect {
    // Members
public:
    signed int x; // offset 0x0, size 0x4
    signed int y; // offset 0x4, size 0x4
    signed int w; // offset 0x8, size 0x4
    signed int h; // offset 0xC, size 0x4
};
// total size: 0x40
class RwMatrixTag {
    // Members
public:
    class RwV3d right; // offset 0x0, size 0xC
    unsigned int flags; // offset 0xC, size 0x4
    class RwV3d up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class RwV3d at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
    class RwV3d pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
enum RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x58
class RwTexture {
    // Members
public:
    class RwRaster * raster; // offset 0x0, size 0x4
    class RwTexDictionary * dict; // offset 0x4, size 0x4
    class RwLLLink lInDictionary; // offset 0x8, size 0x8
    char name[32]; // offset 0x10, size 0x20
    char mask[32]; // offset 0x30, size 0x20
    unsigned int filterAddressing; // offset 0x50, size 0x4
    signed int refCount; // offset 0x54, size 0x4
};
// total size: 0x14
class RwObjectHasFrame {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x130
class _iMotionBlurData {
    // Members
public:
    signed int motionBlurAlpha; // offset 0x0, size 0x4
    class RwRaster * motionBlurFrontBuffer; // offset 0x4, size 0x4
    class RwSky2DVertex vertex[4]; // offset 0x10, size 0x100
    unsigned short index[6]; // offset 0x110, size 0xC
    unsigned int w; // offset 0x11C, size 0x4
    unsigned int h; // offset 0x120, size 0x4
};
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x40
class RwSky2DVertexAlignmentOverlay {
    // Members
public:
    union { // inferred
        class RwSky2DVertexFields els; // offset 0x0, size 0x40
        __int128 qWords[4]; // offset 0x0, size 0x40
    };
};
// total size: 0x18
class RwTexDictionary {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0x14
class xFXFastRaster {
    // Members
public:
    class RwRaster * src; // offset 0x0, size 0x4
    class RwRaster * dst; // offset 0x4, size 0x4
    unsigned int fbmsk; // offset 0x8, size 0x4
    unsigned int test; // offset 0xC, size 0x4
    unsigned int old_alpha_1; // offset 0x10, size 0x4
};
// total size: 0x40
class RwSky2DVertexFields {
    // Members
public:
    class RwV3d scrVertex; // offset 0x0, size 0xC
    float camVertex_z; // offset 0xC, size 0x4
    float u; // offset 0x10, size 0x4
    float v; // offset 0x14, size 0x4
    float recipZ; // offset 0x18, size 0x4
    float pad1; // offset 0x1C, size 0x4
    class RwRGBAReal color; // offset 0x20, size 0x10
    class RwV3d objNormal; // offset 0x30, size 0xC
    float pad2; // offset 0x3C, size 0x4
};
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0x18
class RwVideoMode {
    // Members
public:
    signed int width; // offset 0x0, size 0x4
    signed int height; // offset 0x4, size 0x4
    signed int depth; // offset 0x8, size 0x4
    enum RwVideoModeFlag flags; // offset 0xC, size 0x4
    signed int refRate; // offset 0x10, size 0x4
    signed int format; // offset 0x14, size 0x4
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
// total size: 0x10
class RwRGBAReal {
    // Members
public:
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
};
// total size: 0x8
class RwObject {
    // Members
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\Core\p2\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016AEF0 -> 0x0016B040
*/
// Range: 0x16AEF0 -> 0x16B040
void iScrFxLensFlare_Render(class RwCamera * camera /* r20 */, class iScrFxLensFlare * flare /* r19 */, void (* renderCB)(class RwRaster *, class RwFrame *, unsigned char, void *) /* r21 */) {
    /* anonymous block */ {
        // Range: 0x16AEF0 -> 0x16B040
        signed int result; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016B040 -> 0x0016B048
*/
// Range: 0x16B040 -> 0x16B048
void iScrFxLensFlare_Reset() {
    /* anonymous block */ {
        // Range: 0x16B040 -> 0x16B048
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016B050 -> 0x0016B49C
*/
// Range: 0x16B050 -> 0x16B49C
static signed int DetermineFlareOcclusion(class RwCamera * camera /* r16 */, class RwTexture * flareTexture /* r30 */, class RwFrame * frame /* r18 */) {
    /* anonymous block */ {
        // Range: 0x16B050 -> 0x16B49C
        class RwRect srcRect; // r29+0x160
        class RwRect dstRect; // r29+0x150
        signed int size; // r16
        class RwVideoMode vidInfo; // r29+0x130
        class RwMatrixTag invMtx; // r29+0xF0
        class RwMatrixTag tmp; // r29+0xB0
        signed int calcEdgeFactor; // r21
        signed int edgeFactor; // r23
        signed int area; // r5
        class RwMatrixTag * matrix; // r2
        class RwV2d * vw; // r20
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016B4A0 -> 0x0016B620
*/
// Range: 0x16B4A0 -> 0x16B620
static void AlphaSprite(class RwRect * rect /* r17 */, unsigned char alpha /* r18 */, float z /* r20 */, unsigned int ztest /* r16 */) {
    /* anonymous block */ {
        // Range: 0x16B4A0 -> 0x16B620
        class xFXFastRaster fr; // r29+0x50
        class xColor_tag color; // r29+0x6C
        unsigned long tmp; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016B620 -> 0x0016B88C
*/
// Range: 0x16B620 -> 0x16B88C
static signed int BlitAlphaToClut(class RwRaster * src /* r16 */, class RwRaster * dst /* r17 */) {
    /* anonymous block */ {
        // Range: 0x16B620 -> 0x16B88C
        unsigned int msb; // r29+0x3C
        unsigned int lsb; // r29+0x38
        unsigned int offset; // r2
        unsigned int x; // r2
        unsigned int y; // r2
        unsigned int cbp; // r2
        unsigned long tmp; // r3
        unsigned long tmp1; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016B890 -> 0x0016BC14
*/
// Range: 0x16B890 -> 0x16BC14
static signed int BlitScaledAlphaRasterToRaster(class RwRaster * srcRaster /* r19 */, class RwRect * srcRect /* r17 */, class RwRaster * dstRaster /* r18 */, class RwRect * dstRect /* r16 */) {
    /* anonymous block */ {
        // Range: 0x16B890 -> 0x16BC14
        unsigned long tmp; // r3
        unsigned long tmp1; // r2
        unsigned int msb; // r29+0x5C
        unsigned int lsb; // r29+0x58
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016BC20 -> 0x0016BC58
*/
// Range: 0x16BC20 -> 0x16BC58
signed int iScrFxCameraDestroyed() {
    /* anonymous block */ {
        // Range: 0x16BC20 -> 0x16BC58
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016BC60 -> 0x0016BD58
*/
// Range: 0x16BC60 -> 0x16BD58
signed int iScrFxMotionBlurOpen(class RwCamera * camera /* r16 */) {
    /* anonymous block */ {
        // Range: 0x16BC60 -> 0x16BD58
        class RwRect rect; // r29+0x20
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016BD60 -> 0x0016C230
*/
// Range: 0x16BD60 -> 0x16C230
static void iCameraOverlayRender(class RwRaster * ras /* r17 */, class RwRGBA col /* r29+0x3C */) {
    /* anonymous block */ {
        // Range: 0x16BD60 -> 0x16C230
        class RwRect rect; // r29+0x40
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016C230 -> 0x0016C398
*/
// Range: 0x16C230 -> 0x16C398
static void iScrFxMotionBlurCreateImmediateModeData(class RwCamera * camera /* r2 */, class RwRect * rect /* r2 */) {
    /* anonymous block */ {
        // Range: 0x16C230 -> 0x16C398
        float w; // r9
        float h; // r8
        float xSize; // r29
        float U; // r29
        float V; // r29
        float u; // r29
        class RwSky2DVertex * ver; // r2
        float nearz; // r29
        float oocameraNearClipPlane; // r29
        float ustep; // r29
        float vstep; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016C3A0 -> 0x0016C3F8
*/
// Range: 0x16C3A0 -> 0x16C3F8
void iScrFxCameraEndScene(class RwCamera * pCamera /* r2 */) {
    /* anonymous block */ {
        // Range: 0x16C3A0 -> 0x16C3F8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016C400 -> 0x0016C454
*/
// Range: 0x16C400 -> 0x16C454
void iScrFxCameraCreated(class RwCamera * pCamera /* r2 */) {
    /* anonymous block */ {
        // Range: 0x16C400 -> 0x16C454
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016C460 -> 0x0016C4DC
*/
// Range: 0x16C460 -> 0x16C4DC
void iCameraSetBlurriness(float amount /* r29 */) {
    /* anonymous block */ {
        // Range: 0x16C460 -> 0x16C4DC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016C4E0 -> 0x0016C940
*/
// Range: 0x16C4E0 -> 0x16C940
void iScrFxDrawBox(float x1 /* r29+0x30 */, float y1 /* r29+0x30 */, float x2 /* r29+0x30 */, float y2 /* r29+0x30 */, unsigned char red /* r2 */, unsigned char green /* r2 */, unsigned char blue /* r2 */, unsigned char alpha /* r2 */, unsigned char clear_z_to_far /* r2 */) {
    /* anonymous block */ {
        // Range: 0x16C4E0 -> 0x16C940
        float farz; // r29+0x30
        signed int old_z_write; // r29+0x2C
        unsigned short indices[4]; // @ 0x00607740
        class RwSky2DVertex v[4]; // @ 0x0061EA60
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016C940 -> 0x0016C9D4
*/
// Range: 0x16C940 -> 0x16C9D4
void iScrFxEnd() {
    /* anonymous block */ {
        // Range: 0x16C940 -> 0x16C9D4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016C9E0 -> 0x0016CA94
*/
// Range: 0x16C9E0 -> 0x16CA94
void iScrFxBegin() {
    /* anonymous block */ {
        // Range: 0x16C9E0 -> 0x16CA94
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016CAA0 -> 0x0016CAA8
*/
// Range: 0x16CAA0 -> 0x16CAA8
void iScrFxInit() {
    /* anonymous block */ {
        // Range: 0x16CAA0 -> 0x16CAA8
    }
}


