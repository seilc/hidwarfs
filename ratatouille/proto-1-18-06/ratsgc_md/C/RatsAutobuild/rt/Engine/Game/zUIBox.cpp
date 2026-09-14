/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zUIBox.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800E5478 -> 0x800E6364
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
// total size: 0x18
struct PKRAssetTOCInfo {
    // Members
    unsigned int aid; // offset 0x0, size 0x4
    struct PKRAssetType * typeref; // offset 0x4, size 0x4
    unsigned int sector; // offset 0x8, size 0x4
    unsigned int plus_offset; // offset 0xC, size 0x4
    unsigned int size; // offset 0x10, size 0x4
    void * mempos; // offset 0x14, size 0x4
};
// total size: 0x0
struct MOVIE {};
// total size: 0x30
struct xInternalMovieNode {
    // Members
    unsigned int hash_id; // offset 0x0, size 0x4
    struct PKRAssetTOCInfo info; // offset 0x4, size 0x18
    struct MOVIE * pMovie; // offset 0x1C, size 0x4
    struct RwTexture * pTexture; // offset 0x20, size 0x4
    unsigned char used; // offset 0x24, size 0x1
    unsigned char m_looping; // offset 0x25, size 0x1
    unsigned short m_freezeframed; // offset 0x26, size 0x2
    unsigned int m_startframe; // offset 0x28, size 0x4
    unsigned int m_endframe; // offset 0x2C, size 0x4
};
// total size: 0x24
struct xInternalTextureNode {
    // Members
    struct PKRAssetTOCInfo info; // offset 0x0, size 0x18
    union { // inferred
        void * pAssetMemory; // offset 0x18, size 0x4
        struct RwTexture * pTexture; // offset 0x18, size 0x4
    };
    unsigned short LRU; // offset 0x1C, size 0x2
    unsigned char refCount; // offset 0x1E, size 0x1
    signed char state; // offset 0x1F, size 0x1
    unsigned char used; // offset 0x20, size 0x1
};
// total size: 0x10
class xTextureHandle {
    // Members
    struct RwTexture * m_pTexture; // offset 0x0, size 0x4
    struct xInternalMovieNode * m_pMovie; // offset 0x4, size 0x4
    struct xInternalTextureNode * m_pNode; // offset 0x8, size 0x4
    struct xInternalTextureNode * m_pPrevNode; // offset 0xC, size 0x4
};
// total size: 0x108
class zUIBox : public zUI {
    // Functions
    void DoInit();

    void DoReset();

    void DoResetMotion();

    void DoHandleEvent(struct xBase * from, unsigned int toEvent, const float * toParam, struct xBase * toParamWidget, unsigned int toParamWidgetID);

    void DoApplyMotionFrame(const struct zUIMotionFrame * frame);

    void DoRender() const;

    void RenderPart(int p, float x1, float y1, float x2, float y2, float uScale, float vScale, float rotation, float xPivot, float yPivot) const;

    void RefreshTextures();

    // Members
    class xTextureHandle textures[9]; // offset 0x74, size 0x90
    float curRotation; // offset 0x104, size 0x4
};
// Range: 0x800E5478 -> 0x800E54C8
// this: r31
void zUIBox::DoInit() {}

// total size: 0x30
struct Part {
    // Members
    unsigned int image; // offset 0x0, size 0x4
    struct xColor_tag color; // offset 0x4, size 0x4
    float u1; // offset 0x8, size 0x4
    float v1; // offset 0xC, size 0x4
    float u2; // offset 0x10, size 0x4
    float v2; // offset 0x14, size 0x4
    float u3; // offset 0x18, size 0x4
    float v3; // offset 0x1C, size 0x4
    float u4; // offset 0x20, size 0x4
    float v4; // offset 0x24, size 0x4
    int rotation; // offset 0x28, size 0x4
    unsigned char enabled; // offset 0x2C, size 0x1
    unsigned char pad[3]; // offset 0x2D, size 0x3
};
// total size: 0x220
struct zUIBoxAsset : public zUIAsset {
    // Members
    struct Part parts[9]; // offset 0x50, size 0x1B0
    float borderWidth; // offset 0x200, size 0x4
    float borderHeight; // offset 0x204, size 0x4
    float widthPerUV; // offset 0x208, size 0x4
    float heightPerUV; // offset 0x20C, size 0x4
    float centerWidthPerUV; // offset 0x210, size 0x4
    float centerHeightPerUV; // offset 0x214, size 0x4
    unsigned char scaleHSide; // offset 0x218, size 0x1
    unsigned char scaleVSide; // offset 0x219, size 0x1
    unsigned char scaleCenter; // offset 0x21A, size 0x1
    unsigned char stretchUVsOnMotionScale; // offset 0x21B, size 0x1
    unsigned char forceAlphaWrite; // offset 0x21C, size 0x1
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
struct RwRGBA {
    // Members
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
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
// Range: 0x800E54C8 -> 0x800E54FC
// this: r31
void zUIBox::DoReset() {}

// Range: 0x800E54FC -> 0x800E5530
// this: r31
void zUIBox::DoResetMotion() {}

// Range: 0x800E5530 -> 0x800E5658
// this: r27
void zUIBox::DoHandleEvent(struct xBase * from /* r0 */, unsigned int toEvent /* r0 */, const float * toParam /* r0 */, struct xBase * toParamWidget /* r7 */, unsigned int toParamWidgetID /* r28 */) {
    // Local variables
    struct RwTexture * pTexture; // r30
    int which; // r3
    int i; // r29
}

// Range: 0x800E5658 -> 0x800E5690
// this: r30
void zUIBox::DoApplyMotionFrame(const struct zUIMotionFrame * frame /* r31 */) {}

void * RwEngineInstance; // size: 0x4, address: 0x803C4584
// Range: 0x800E5690 -> 0x800E5AC8
// this: r30
void zUIBox::DoRender() const {
    // Local variables
    const struct zUIBoxAsset * asset; // r0
    float x1; // f31
    float y1; // f30
    float x2; // f29
    float y2; // f28
    float curBorderWidth; // f3
    float curBorderHeight; // f1
    float x1i; // f27
    float y1i; // f26
    float x2i; // f25
    float y2i; // f24
    float xCenter; // f23
    float yCenter; // f22
    float yScale; // f31
    float xScale; // f29

    // References
    // -> void * RwEngineInstance;
}

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
static struct rwGameCube2DVertex vertex[4]; // size: 0x60, address: 0x80374BB0
unsigned int FB_XRES; // size: 0x4, address: 0x803BE15C
unsigned int FB_YRES; // size: 0x4, address: 0x803BE160
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
// Range: 0x800E5AC8 -> 0x800E6228
// this: r29
void zUIBox::RenderPart(int p /* r30 */, float x1 /* f28 */, float y1 /* f27 */, float x2 /* f26 */, float y2 /* f25 */, float uScale /* f30 */, float vScale /* f31 */, float rotation /* f24 */, float xPivot /* f23 */, float yPivot /* f22 */) const {
    // Local variables
    const struct Part & part; // r31
    float ulx; // f11
    float uly; // f12
    float urx; // f3
    float ury; // f4
    float llx; // f5
    float lly; // f6
    float lrx; // f7
    float lry; // f8
    float sinA; // f0
    float cosA; // f0
    float tempScale; // f0
    struct RwTexture * pTexture; // r0
    float z; // f0
    unsigned short indexes[4]; // r1+0x10
    const struct zUIBoxAsset * asset; // r0
    unsigned int enableMask; // r30
    enum RwBlendFunction srcblend; // r1+0xC
    enum RwBlendFunction dstblend; // r1+0x8

    // References
    // -> static struct rwGameCube2DVertex vertex[4];
    // -> void * RwEngineInstance;
    // -> unsigned int FB_YRES;
    // -> unsigned int FB_XRES;
}

// Range: 0x800E6228 -> 0x800E6288
// this: r29
void zUIBox::RefreshTextures() {
    // Local variables
    int i; // r30
}

// Range: 0x800E6288 -> 0x800E62A8
void zUIBox_Init(struct xBase & data /* r0 */, struct xDynAsset & asset /* r0 */) {}

// Range: 0x800E62A8 -> 0x800E62F8
void zUIBox_Init(class zUIBox * uibox /* r30 */, struct zUIBoxAsset * asset /* r31 */) {}

// total size: 0x60
struct {} zUIBox::__vtable; // size: 0x60, address: 0x802DBB50

