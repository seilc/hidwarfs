/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\gc\iDebug.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801096A8 -> 0x80109E50
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
static struct RwRaster * mCharset; // size: 0x4, address: 0x80D69A48
// total size: 0x4
struct RwRGBA {
    // Members
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
static struct RwRGBA mForegroundColor; // size: 0x4, address: 0x80D61610
static struct RwRGBA mBackgroundColor; // size: 0x4, address: 0x80D61614
// total size: 0x2C8
struct OSContext {
    // Members
    unsigned long gpr[32]; // offset 0x0, size 0x80
    unsigned long cr; // offset 0x80, size 0x4
    unsigned long lr; // offset 0x84, size 0x4
    unsigned long ctr; // offset 0x88, size 0x4
    unsigned long xer; // offset 0x8C, size 0x4
    double fpr[32]; // offset 0x90, size 0x100
    unsigned long fpscr_pad; // offset 0x190, size 0x4
    unsigned long fpscr; // offset 0x194, size 0x4
    unsigned long srr0; // offset 0x198, size 0x4
    unsigned long srr1; // offset 0x19C, size 0x4
    unsigned short mode; // offset 0x1A0, size 0x2
    unsigned short state; // offset 0x1A2, size 0x2
    unsigned long gqr[8]; // offset 0x1A4, size 0x20
    unsigned long psf_pad; // offset 0x1C4, size 0x4
    double psf[32]; // offset 0x1C8, size 0x100
};
static char __FUNCTION__[11]; // size: 0xB, address: 0x80D61618
void (* old_dsc)(unsigned short); // size: 0x4, address: 0x80D69D74
// Range: 0x801096A8 -> 0x80109768
void iDebugInit() {
    // References
    // -> void (* old_dsc)(unsigned short);
    // -> static struct RwRaster * mCharset;
    // -> static struct RwRGBA mBackgroundColor;
    // -> static struct RwRGBA mForegroundColor;
    // -> static char __FUNCTION__[11];
}

// Range: 0x80109768 -> 0x8010976C
void iDebugUpdate() {}

// Range: 0x8010976C -> 0x80109770
void iDebugWriteProfile() {}

// Range: 0x80109770 -> 0x80109790
void iDebugVSync() {}

// Range: 0x80109790 -> 0x80109794
void iDebugStackTrace() {}

// Range: 0x80109794 -> 0x801097C0
void iDebugIDEOutput(char * buf /* r1+0x8 */) {}

static char __FUNCTION__[7]; // size: 0x7, address: 0x80D61623
// Range: 0x801097C0 -> 0x80109888
static void SWAP16(int n /* r28 */, void * vaddr /* r29 */) {
    // Local variables
    unsigned char * addr; // r31
    unsigned char tmp; // r30

    // References
    // -> static char __FUNCTION__[7];
}

static char __FUNCTION__[7]; // size: 0x7, address: 0x80D6162A
// Range: 0x80109888 -> 0x80109960
static void SWAP32(int n /* r28 */, void * vaddr /* r29 */) {
    // Local variables
    unsigned char * addr; // r31
    unsigned char tmp; // r30

    // References
    // -> static char __FUNCTION__[7];
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80D61631
unsigned int FB_YRES; // size: 0x4, address: 0x80D63018
unsigned int FB_XRES; // size: 0x4, address: 0x80D63014
enum xScreenDump {
    exSD_NONE = 0,
    exSD_NATIVE = 1,
    exSD_MASSIVE = 2,
    exSD_MASSIVE_RESET = 3,
};
enum xScreenDump gScreenDump; // size: 0x4, address: 0x80D68D6C
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
// total size: 0x20
struct DVDDiskID {
    // Members
    char gameName[4]; // offset 0x0, size 0x4
    char company[2]; // offset 0x4, size 0x2
    unsigned char diskNumber; // offset 0x6, size 0x1
    unsigned char gameVersion; // offset 0x7, size 0x1
    unsigned char streaming; // offset 0x8, size 0x1
    unsigned char streamingBufSize; // offset 0x9, size 0x1
    unsigned char padding[22]; // offset 0xA, size 0x16
};
// total size: 0x30
struct DVDCommandBlock {
    // Members
    struct DVDCommandBlock * next; // offset 0x0, size 0x4
    struct DVDCommandBlock * prev; // offset 0x4, size 0x4
    unsigned long command; // offset 0x8, size 0x4
    long state; // offset 0xC, size 0x4
    unsigned long offset; // offset 0x10, size 0x4
    unsigned long length; // offset 0x14, size 0x4
    void * addr; // offset 0x18, size 0x4
    unsigned long currTransferSize; // offset 0x1C, size 0x4
    unsigned long transferredSize; // offset 0x20, size 0x4
    struct DVDDiskID * id; // offset 0x24, size 0x4
    void (* callback)(long, struct DVDCommandBlock *); // offset 0x28, size 0x4
    void * userData; // offset 0x2C, size 0x4
};
// total size: 0x3C
struct DVDFileInfo {
    // Members
    struct DVDCommandBlock cb; // offset 0x0, size 0x30
    unsigned long startAddr; // offset 0x30, size 0x4
    unsigned long length; // offset 0x34, size 0x4
    void (* callback)(long, struct DVDFileInfo *); // offset 0x38, size 0x4
};
// total size: 0xF0
struct tag_iFile {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    char path[128]; // offset 0x4, size 0x80
    int fd; // offset 0x84, size 0x4
    struct DVDFileInfo file; // offset 0x88, size 0x3C
    void (* cb)(struct tag_xFile *); // offset 0xC4, size 0x4
    int akey; // offset 0xC8, size 0x4
    int buffer[8]; // offset 0xCC, size 0x20
    int real_pos; // offset 0xEC, size 0x4
};
// total size: 0x114
struct tag_xFile {
    // Members
    char relname[32]; // offset 0x0, size 0x20
    struct tag_iFile ps; // offset 0x20, size 0xF0
    void * user_data; // offset 0x110, size 0x4
};
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
// total size: 0x50
struct zUIAsset : public xDynAsset {
    // Members
    float x; // offset 0x10, size 0x4
    float y; // offset 0x14, size 0x4
    float z; // offset 0x18, size 0x4
    float width; // offset 0x1C, size 0x4
    float height; // offset 0x20, size 0x4
    int flags; // offset 0x24, size 0x4
    unsigned int color; // offset 0x28, size 0x4
    unsigned int selectedMotion; // offset 0x2C, size 0x4
    unsigned int unselectedMotion; // offset 0x30, size 0x4
    unsigned char brightness; // offset 0x34, size 0x1
    unsigned char pad[3]; // offset 0x35, size 0x3
    unsigned int autoMenuUp; // offset 0x38, size 0x4
    unsigned int autoMenuDown; // offset 0x3C, size 0x4
    unsigned int autoMenuLeft; // offset 0x40, size 0x4
    unsigned int autoMenuRight; // offset 0x44, size 0x4
    unsigned int custom; // offset 0x48, size 0x4
    unsigned int customWidget; // offset 0x4C, size 0x4
};
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
// total size: 0x18
struct State {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float width; // offset 0x8, size 0x4
    float height; // offset 0xC, size 0x4
    struct xColor_tag color; // offset 0x10, size 0x4
    unsigned char brightness; // offset 0x14, size 0x1
    unsigned char pad[3]; // offset 0x15, size 0x3
};
// total size: 0x0
struct zUIMotionAsset {};
// total size: 0x34
struct zUIMotionFrame {
    // Members
    float offsetX; // offset 0x0, size 0x4
    float offsetY; // offset 0x4, size 0x4
    float scaleX; // offset 0x8, size 0x4
    float scaleY; // offset 0xC, size 0x4
    float centerScaleX; // offset 0x10, size 0x4
    float centerScaleY; // offset 0x14, size 0x4
    float textScaleX; // offset 0x18, size 0x4
    float textScaleY; // offset 0x1C, size 0x4
    float rotation; // offset 0x20, size 0x4
    float offsetU; // offset 0x24, size 0x4
    float offsetV; // offset 0x28, size 0x4
    struct xColor_tag color; // offset 0x2C, size 0x4
    unsigned char brightness; // offset 0x30, size 0x1
};
// total size: 0x8
class zUICustom {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    class zUI * ui; // offset 0x4, size 0x4
};
// total size: 0x74
class zUI : public xBase {
    // Static members
    static unsigned char bAllowSelectInput; // size: 0x1
    static unsigned char bAllowInput; // size: 0x1

    // Members
public:
    const struct zUIAsset * asset; // offset 0x10, size 0x4
    struct State current; // offset 0x14, size 0x18
    struct State startMovement; // offset 0x2C, size 0x18
    float z; // offset 0x44, size 0x4
    struct zUIMotionAsset * selectedMotion; // offset 0x48, size 0x4
    struct zUIMotionAsset * unselectedMotion; // offset 0x4C, size 0x4
    class zUICustom * custom; // offset 0x50, size 0x4
    int padport; // offset 0x54, size 0x4
    unsigned char visible; // offset 0x58, size 0x1
    unsigned char focus; // offset 0x59, size 0x1
    unsigned char lastFocus; // offset 0x5A, size 0x1
    unsigned char selected; // offset 0x5B, size 0x1
    unsigned char brighten; // offset 0x5C, size 0x1
    unsigned char hdrPass; // offset 0x5D, size 0x1
    unsigned char locked; // offset 0x5E, size 0x1
    unsigned char forcepreupdate; // offset 0x5F, size 0x1
    unsigned char forcehdr; // offset 0x60, size 0x1
    unsigned char restoreFocus; // offset 0x61, size 0x1
    void * __vptr$; // offset 0x64, size 0x4
private:
    struct zUIMotionAsset * motion; // offset 0x68, size 0x4
    float motionTime; // offset 0x6C, size 0x4
    unsigned char motionFiredEvent; // offset 0x70, size 0x1
    unsigned char motionLoop; // offset 0x71, size 0x1
};
// total size: 0xC
struct ImageState {
    // Members
    float rotation; // offset 0x0, size 0x4
    float offsetU; // offset 0x4, size 0x4
    float offsetV; // offset 0x8, size 0x4
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
// total size: 0x28
struct PKRAssetType {
    // Members
    unsigned int typetag; // offset 0x0, size 0x4
    unsigned int tflags; // offset 0x4, size 0x4
    int typalign; // offset 0x8, size 0x4
    void * (* readXForm)(void *, unsigned int, void *, unsigned int, unsigned int *); // offset 0xC, size 0x4
    void * (* writeXForm)(void *, unsigned int, void *, void *, unsigned int, unsigned int *); // offset 0x10, size 0x4
    int (* assetLoaded)(void *, unsigned int, void *, int); // offset 0x14, size 0x4
    void * (* makeData)(void *, unsigned int, void *, int *, int *); // offset 0x18, size 0x4
    void (* cleanup)(void *, unsigned int, void *); // offset 0x1C, size 0x4
    void (* assetUnloaded)(void *, unsigned int); // offset 0x20, size 0x4
    void (* writePeek)(void *, unsigned int, void *, char *); // offset 0x24, size 0x4
};
// total size: 0x20
struct PKRAssetTOCInfo {
    // Members
    unsigned int aid; // offset 0x0, size 0x4
    struct PKRAssetType * typeref; // offset 0x4, size 0x4
    unsigned int sector; // offset 0x8, size 0x4
    unsigned int plus_offset; // offset 0xC, size 0x4
    unsigned int size; // offset 0x10, size 0x4
    void * mempos; // offset 0x14, size 0x4
    const char * assetname; // offset 0x18, size 0x4
    const char * filename; // offset 0x1C, size 0x4
};
// total size: 0x0
struct MOVIE {};
// total size: 0x38
struct xInternalMovieNode {
    // Members
    unsigned int hash_id; // offset 0x0, size 0x4
    struct PKRAssetTOCInfo info; // offset 0x4, size 0x20
    struct MOVIE * pMovie; // offset 0x24, size 0x4
    struct RwTexture * pTexture; // offset 0x28, size 0x4
    unsigned char used; // offset 0x2C, size 0x1
    unsigned char m_looping; // offset 0x2D, size 0x1
    unsigned short m_freezeframed; // offset 0x2E, size 0x2
    unsigned int m_startframe; // offset 0x30, size 0x4
    unsigned int m_endframe; // offset 0x34, size 0x4
};
// total size: 0x2C
struct xInternalTextureNode {
    // Members
    struct PKRAssetTOCInfo info; // offset 0x0, size 0x20
    union { // inferred
        void * pAssetMemory; // offset 0x20, size 0x4
        struct RwTexture * pTexture; // offset 0x20, size 0x4
    };
    unsigned short LRU; // offset 0x24, size 0x2
    unsigned char refCount; // offset 0x26, size 0x1
    signed char state; // offset 0x27, size 0x1
    unsigned char used; // offset 0x28, size 0x1
};
// total size: 0x10
class xTextureHandle {
    // Members
    struct RwTexture * m_pTexture; // offset 0x0, size 0x4
    struct xInternalMovieNode * m_pMovie; // offset 0x4, size 0x4
    struct xInternalTextureNode * m_pNode; // offset 0x8, size 0x4
    struct xInternalTextureNode * m_pPrevNode; // offset 0xC, size 0x4
};
// total size: 0x90
struct zUIImageAsset : public zUIAsset {
    // Members
    unsigned int image; // offset 0x50, size 0x4
    float u1; // offset 0x54, size 0x4
    float v1; // offset 0x58, size 0x4
    float u2; // offset 0x5C, size 0x4
    float v2; // offset 0x60, size 0x4
    float u3; // offset 0x64, size 0x4
    float v3; // offset 0x68, size 0x4
    float u4; // offset 0x6C, size 0x4
    float v4; // offset 0x70, size 0x4
    float rotation; // offset 0x74, size 0x4
    unsigned short iflags; // offset 0x78, size 0x2
    unsigned char addressModeU; // offset 0x7A, size 0x1
    unsigned char addressModeV; // offset 0x7B, size 0x1
    struct xColor_tag color1; // offset 0x7C, size 0x4
    struct xColor_tag color2; // offset 0x80, size 0x4
    struct xColor_tag color3; // offset 0x84, size 0x4
    struct xColor_tag color4; // offset 0x88, size 0x4
    unsigned char forceAlphaWrite; // offset 0x8C, size 0x1
    unsigned char pad[3]; // offset 0x8D, size 0x3
};
// total size: 0xA0
class zUIImage : public zUI {
    // Members
public:
    struct ImageState currentImage; // offset 0x74, size 0xC
    struct ImageState startMovementImage; // offset 0x80, size 0xC
private:
    class xTextureHandle texture; // offset 0x8C, size 0x10
    unsigned int currentID; // offset 0x9C, size 0x4
};
// total size: 0xC
struct tagBITMAPFILEHEADER {
    // Members
    int bfSize; // offset 0x0, size 0x4
    signed short bfReserved1; // offset 0x4, size 0x2
    signed short bfReserved2; // offset 0x6, size 0x2
    int bfOffBits; // offset 0x8, size 0x4
};
// total size: 0x28
struct tagBITMAPINFOHEADER {
    // Members
    int biSize; // offset 0x0, size 0x4
    int biWidth; // offset 0x4, size 0x4
    int biHeight; // offset 0x8, size 0x4
    signed short biPlanes; // offset 0xC, size 0x2
    signed short biBitCount; // offset 0xE, size 0x2
    int biCompression; // offset 0x10, size 0x4
    int biSizeImage; // offset 0x14, size 0x4
    int biXPelsPerMeter; // offset 0x18, size 0x4
    int biYPelsPerMeter; // offset 0x1C, size 0x4
    int biClrUsed; // offset 0x20, size 0x4
    int biClrImportant; // offset 0x24, size 0x4
};
// total size: 0x38
struct BmpMegaHeader {
    // Members
    char prepad[2]; // offset 0x0, size 0x2
    char bfType[2]; // offset 0x2, size 0x2
    struct tagBITMAPFILEHEADER bmFile; // offset 0x4, size 0xC
    struct tagBITMAPINFOHEADER bmInfo; // offset 0x10, size 0x28
};
// Range: 0x80109960 -> 0x80109D50
void iDebugScreenDump(struct RwCamera * camera /* r1+0x8 */) {
    // Local variables
    struct RwRaster * camRas; // r26
    int width; // r1+0x18
    int height; // r1+0x14
    int depth; // r1+0x10
    struct tag_xFile file; // r1+0x94
    class zUIImage * picImage; // r20
    unsigned int size; // r19
    unsigned int n; // r25
    unsigned int x; // r30
    unsigned int y; // r29
    char fname[64]; // r1+0x54
    unsigned char * bp; // r31
    unsigned char * buf; // r28
    long long t0; // r23
    long long t1; // r21
    struct BmpMegaHeader mhdr; // r1+0x1C
    unsigned int bufsize; // r27
    unsigned long pixval; // r1+0xC

    // References
    // -> enum xScreenDump gScreenDump;
    // -> unsigned int FB_YRES;
    // -> static char __FUNCTION__[17];
    // -> unsigned int FB_XRES;
}

// Range: 0x80109D50 -> 0x80109E50
void iDebugDumpEFB(char * name /* r1+0x8 */) {
    // Local variables
    char filename[32]; // r1+0x10
    struct tag_xFile file; // r1+0x30
    unsigned char buf[4096]; // r1+0x144
    unsigned short x; // r30
    unsigned short y; // r29
    unsigned char * bp; // r31
    unsigned long pixval; // r1+0xC
}


