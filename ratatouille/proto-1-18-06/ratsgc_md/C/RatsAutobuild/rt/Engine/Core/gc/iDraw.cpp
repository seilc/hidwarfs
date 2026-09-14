/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\gc\iDraw.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8007B26C -> 0x8007B4D8
*/
// total size: 0x10
struct basic_rect {
    // Static members
    static struct basic_rect m_Null; // size: 0x10
    static struct basic_rect m_Unit; // size: 0x10

    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
unsigned int lastSetFBMSK; // size: 0x4, address: 0x803C1620
// Range: 0x8007B26C -> 0x8007B2F8
void iDrawSetFBMSK(unsigned int abgr /* r30 */, unsigned int setMask /* r31 */) {
    // Local variables
    unsigned char alpha; // r0

    // References
    // -> unsigned int lastSetFBMSK;
}

unsigned int FB_XRES; // size: 0x4, address: 0x803BE15C
unsigned int FB_YRES; // size: 0x4, address: 0x803BE160
enum VITVMode {
    VI_TVMODE_NTSC_INT = 0,
    VI_TVMODE_NTSC_DS = 1,
    VI_TVMODE_NTSC_PROG = 2,
    VI_TVMODE_PAL_INT = 4,
    VI_TVMODE_PAL_DS = 5,
    VI_TVMODE_EURGB60_INT = 20,
    VI_TVMODE_EURGB60_DS = 21,
    VI_TVMODE_MPAL_INT = 8,
    VI_TVMODE_MPAL_DS = 9,
    VI_TVMODE_DEBUG_INT = 12,
    VI_TVMODE_DEBUG_PAL_INT = 16,
    VI_TVMODE_DEBUG_PAL_DS = 17,
};
enum VIXFBMode {
    VI_XFBMODE_SF = 0,
    VI_XFBMODE_DF = 1,
};
// total size: 0x3C
struct _GXRenderModeObj {
    // Members
    enum VITVMode viTVmode; // offset 0x0, size 0x4
    unsigned short fbWidth; // offset 0x4, size 0x2
    unsigned short efbHeight; // offset 0x6, size 0x2
    unsigned short xfbHeight; // offset 0x8, size 0x2
    unsigned short viXOrigin; // offset 0xA, size 0x2
    unsigned short viYOrigin; // offset 0xC, size 0x2
    unsigned short viWidth; // offset 0xE, size 0x2
    unsigned short viHeight; // offset 0x10, size 0x2
    enum VIXFBMode xFBmode; // offset 0x14, size 0x4
    unsigned char field_rendering; // offset 0x18, size 0x1
    unsigned char aa; // offset 0x19, size 0x1
    unsigned char sample_pattern[12][2]; // offset 0x1A, size 0x18
    unsigned char vfilter[7]; // offset 0x32, size 0x7
};
struct _GXRenderModeObj * _RwDlRenderMode; // size: 0x4, address: 0x803C461C
// Range: 0x8007B2F8 -> 0x8007B420
void iDrawSetDisplayOffset(float x /* f30 */, float y /* f31 */) {
    // Local variables
    float nPosX; // f4
    float nPosY; // f3

    // References
    // -> struct _GXRenderModeObj * _RwDlRenderMode;
    // -> unsigned int FB_YRES;
    // -> unsigned int FB_XRES;
}

enum _tagGameVidMode {
    eGameVidModeNTSC = 0,
    eGameVidModePAL = 1,
};
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
// total size: 0x24
struct RxObjSpace3DVertex {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float nx; // offset 0xC, size 0x4
    float ny; // offset 0x10, size 0x4
    float nz; // offset 0x14, size 0x4
    unsigned char r; // offset 0x18, size 0x1
    unsigned char g; // offset 0x19, size 0x1
    unsigned char b; // offset 0x1A, size 0x1
    unsigned char a; // offset 0x1B, size 0x1
    float u; // offset 0x1C, size 0x4
    float v; // offset 0x20, size 0x4
};
// total size: 0xC
struct RwV3d {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
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
// Range: 0x8007B420 -> 0x8007B424
void iDrawBegin() {}

// Range: 0x8007B424 -> 0x8007B428
void iDrawEnd() {}

// total size: 0xC
struct GCmemXFB {
    // Members
    unsigned char * base; // offset 0x0, size 0x4
    unsigned char * addr; // offset 0x4, size 0x4
    unsigned char * max; // offset 0x8, size 0x4
};
static struct GCmemXFB xfb; // size: 0xC, address: 0x803C1624
static void * xfbDisp; // size: 0x4, address: 0x803C1630
static void * xfbCopy; // size: 0x4, address: 0x803C1634
// Range: 0x8007B428 -> 0x8007B450
void iXFBinit() {
    // References
    // -> static void * xfbCopy;
    // -> static void * xfbDisp;
}

// Range: 0x8007B450 -> 0x8007B4A4
void iXFBreset() {
    // References
    // -> static struct GCmemXFB xfb;
    // -> unsigned int FB_YRES;
    // -> unsigned int FB_XRES;
    // -> static void * xfbCopy;
}

// Range: 0x8007B4A4 -> 0x8007B4D8
void * iXFBalloc(unsigned int size /* r4 */) {
    // References
    // -> static struct GCmemXFB xfb;
}


