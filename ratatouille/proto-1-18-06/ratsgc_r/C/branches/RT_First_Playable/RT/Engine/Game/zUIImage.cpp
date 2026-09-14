/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zUIImage.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80178774 -> 0x80179DE8
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
// total size: 0x8
struct substr {
    // Members
    const char * text; // offset 0x0, size 0x4
    unsigned long size; // offset 0x4, size 0x4
};
// total size: 0xC
struct /* @class$1026zUIImage_cpp */ {
    // Members
    int value_def; // offset 0x0, size 0x4
    int value_min; // offset 0x4, size 0x4
    int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$1027zUIImage_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int value_min; // offset 0x4, size 0x4
    unsigned int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$1028zUIImage_cpp */ {
    // Members
    float value_def; // offset 0x0, size 0x4
    float value_min; // offset 0x4, size 0x4
    float value_max; // offset 0x8, size 0x4
};
// total size: 0x1
struct /* @class$1029zUIImage_cpp */ {
    // Members
    unsigned char value_def; // offset 0x0, size 0x1
};
// total size: 0x10
struct /* @class$1030zUIImage_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int labels_size; // offset 0x4, size 0x4
    const char * * labels; // offset 0x8, size 0x4
    void * values; // offset 0xC, size 0x4
};
// total size: 0x8
struct /* @class$1031zUIImage_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int mask; // offset 0x4, size 0x4
};
// total size: 0x10
struct /* @class$1032zUIImage_cpp */ {
    // Members
    unsigned char pad[16]; // offset 0x0, size 0x10
};
// total size: 0x28
struct tweak_info {
    // Members
    struct substr name; // offset 0x0, size 0x8
    void * value; // offset 0x8, size 0x4
    const struct tweak_callback * cb; // offset 0xC, size 0x4
    void * context; // offset 0x10, size 0x4
    unsigned char type; // offset 0x14, size 0x1
    unsigned char value_size; // offset 0x15, size 0x1
    unsigned short flags; // offset 0x16, size 0x2
    union { // inferred
        // total size: 0xC
        struct /* @class$1026zUIImage_cpp */ {
            // Members
            int value_def; // offset 0x0, size 0x4
            int value_min; // offset 0x4, size 0x4
            int value_max; // offset 0x8, size 0x4
        } int_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$1027zUIImage_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int value_min; // offset 0x4, size 0x4
            unsigned int value_max; // offset 0x8, size 0x4
        } uint_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$1028zUIImage_cpp */ {
            // Members
            float value_def; // offset 0x0, size 0x4
            float value_min; // offset 0x4, size 0x4
            float value_max; // offset 0x8, size 0x4
        } float_context; // offset 0x18, size 0xC
        // total size: 0x1
        struct /* @class$1029zUIImage_cpp */ {
            // Members
            unsigned char value_def; // offset 0x0, size 0x1
        } bool_context; // offset 0x18, size 0x1
        // total size: 0x10
        struct /* @class$1030zUIImage_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int labels_size; // offset 0x4, size 0x4
            const char * * labels; // offset 0x8, size 0x4
            void * values; // offset 0xC, size 0x4
        } select_context; // offset 0x18, size 0x10
        // total size: 0x8
        struct /* @class$1031zUIImage_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int mask; // offset 0x4, size 0x4
        } flag_context; // offset 0x18, size 0x8
        // total size: 0x10
        struct /* @class$1032zUIImage_cpp */ {
            // Members
            unsigned char pad[16]; // offset 0x0, size 0x10
        } all_context; // offset 0x18, size 0x10
    };
};
// Range: 0x80178774 -> 0x801787B8
static void OnUIImageUpdateTexture(const struct tweak_info & info /* r0 */) {
    // Local variables
    class zUIImage * ui; // r31
}

// total size: 0xC
struct ImageState {
    // Members
    float rotation; // offset 0x0, size 0x4
    float offsetU; // offset 0x4, size 0x4
    float offsetV; // offset 0x8, size 0x4
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
// total size: 0xA0
class zUIImage : public zUI {
    // Functions
    void SetTexture(unsigned int id, unsigned char clearPrev);

    void DoInit();

    void DoReset();

    void DoResetMotion();

    void DoHandleEvent(struct xBase * from, unsigned int toEvent, const float * toParam, struct xBase * toParamWidget, unsigned int toParamWidgetID);

    void PlayMovie(unsigned int id, unsigned char loop, unsigned char stopFrame, unsigned int startFrame, unsigned int endFrame);

    void StopMovie();

    void DoRender() const;

    void DoAddTweaks(const char * baseName);

    void DoInitMotion();

    void DoApplyMotionFrame(const struct zUIMotionFrame * frame);

    void Visible();

    void Invisible();

    unsigned char Blends() const;

    // Members
public:
    struct ImageState currentImage; // offset 0x74, size 0xC
    struct ImageState startMovementImage; // offset 0x80, size 0xC
private:
    class xTextureHandle texture; // offset 0x8C, size 0x10
    unsigned int currentID; // offset 0x9C, size 0x4
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
// Range: 0x801787B8 -> 0x801788A8
// this: r28
void zUIImage::SetTexture(unsigned int id /* r29 */, unsigned char clearPrev /* r30 */) {
    // Local variables
    struct PKRAssetTOCInfo info; // r1+0x18
}

// Range: 0x801788A8 -> 0x801788E4
// this: r31
void zUIImage::DoInit() {}

// Range: 0x801788E4 -> 0x80178934
// this: r31
void zUIImage::DoReset() {}

// Range: 0x80178934 -> 0x8017897C
// this: r31
void zUIImage::DoResetMotion() {}

static char __FUNCTION__[14]; // size: 0xE, address: 0x80C01BB0
// Range: 0x8017897C -> 0x80178B9C
// this: r28
void zUIImage::DoHandleEvent(struct xBase * from /* r4 */, unsigned int toEvent /* r5 */, const float * toParam /* r29 */, struct xBase * toParamWidget /* r7 */, unsigned int toParamWidgetID /* r30 */) {
    // Local variables
    struct RwTexture * pTexture; // r7
    float u0; // f31
    float v0; // f30
    float u1; // f29
    float v1; // f28
    struct zUIImageAsset * pAsset; // r31

    // References
    // -> static char __FUNCTION__[14];
}

// Range: 0x80178B9C -> 0x80178BD8
// this: r3
void zUIImage::PlayMovie(unsigned int id /* r0 */, unsigned char loop /* r5 */, unsigned char stopFrame /* r6 */, unsigned int startFrame /* r0 */, unsigned int endFrame /* r0 */) {}

// Range: 0x80178BD8 -> 0x80178C10
// this: r31
void zUIImage::StopMovie() {}

static void * modeTranslate[3]; // size: 0xC, address: 0x80C01BC0
static char __FUNCTION__[9]; // size: 0x9, address: 0x80C01BCC
unsigned int FB_XRES; // size: 0x4, address: 0x80C00BDC
unsigned int FB_YRES; // size: 0x4, address: 0x80C00BE0
void * RwEngineInstance; // size: 0x4, address: 0x80C09F34
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
// Range: 0x80178C10 -> 0x8017969C
// this: r28
void zUIImage::DoRender() const {
    // Local variables
    struct RwTexture * pTexture; // r0
    struct RwRaster * raster; // r29
    void * oldAlphaFunction; // r1+0x10
    enum RwBlendFunction srcBlend; // r1+0xC
    enum RwBlendFunction destBlend; // r1+0x8
    struct rwGameCube2DVertex vertex[4]; // r1+0x14
    const struct zUIImageAsset * asset; // r0
    float x1; // f24
    float y1; // f31
    float x2; // f30
    float y2; // f29
    float ulx; // f13
    float uly; // f24
    float urx; // f5
    float ury; // f6
    float llx; // f7
    float lly; // f8
    float lrx; // f9
    float lry; // f10
    float offx; // f28
    float offy; // f27
    float sinA; // f0
    float cosA; // f0
    const struct xColor_tag * color; // r0
    float z; // f11
    float u1; // f2
    float v1; // f9
    float u2; // f10
    float v2; // f12
    float u3; // f13
    float v3; // f27
    float u4; // f28
    float v4; // f29

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int FB_YRES;
    // -> unsigned int FB_XRES;
    // -> static void * modeTranslate[3];
    // -> static char __FUNCTION__[9];
}

// total size: 0x28
struct tweak_callback {
    // Members
    void (* on_change)(struct tweak_info &); // offset 0x0, size 0x4
    void (* on_select)(struct tweak_info &); // offset 0x4, size 0x4
    void (* on_unselect)(struct tweak_info &); // offset 0x8, size 0x4
    void (* on_start_edit)(struct tweak_info &); // offset 0xC, size 0x4
    void (* on_stop_edit)(struct tweak_info &); // offset 0x10, size 0x4
    void (* on_expand)(struct tweak_info &); // offset 0x14, size 0x4
    void (* on_collapse)(struct tweak_info &); // offset 0x18, size 0x4
    void (* on_update)(struct tweak_info &); // offset 0x1C, size 0x4
    void (* convert_mem_to_tweak)(struct tweak_info &, void *); // offset 0x20, size 0x4
    void (* convert_tweak_to_mem)(struct tweak_info &, void *); // offset 0x24, size 0x4
};
static struct tweak_callback textureCB; // size: 0x28, address: 0x8043C898
static signed char init; // size: 0x1, address: 0x80C08590
const char * * all_texture_labels; // size: 0x4, address: 0x80C08460
unsigned int * all_texture_ids; // size: 0x4, address: 0x80C08464
unsigned int all_texture_count; // size: 0x4, address: 0x80C08468
// Range: 0x8017969C -> 0x80179A94
// this: r29
void zUIImage::DoAddTweaks(const char * baseName /* r30 */) {
    // Local variables
    struct zUIImageAsset * asset; // r0
    char buffer[128]; // r1+0x30

    // References
    // -> static struct tweak_callback textureCB;
    // -> unsigned int all_texture_count;
    // -> unsigned int * all_texture_ids;
    // -> const char * * all_texture_labels;
    // -> static signed char init;
}

// Range: 0x80179A94 -> 0x80179ACC
// this: r31
void zUIImage::DoInitMotion() {}

// Range: 0x80179AE8 -> 0x80179C90
// this: r31
void zUIImage::DoApplyMotionFrame(const struct zUIMotionFrame * frame /* r30 */) {}

// Range: 0x80179C90 -> 0x80179CB0
// this: r0
void zUIImage::Visible() {}

// Range: 0x80179CB0 -> 0x80179D04
// this: r31
void zUIImage::Invisible() {}

// Range: 0x80179D04 -> 0x80179D2C
// this: r0
unsigned char zUIImage::Blends() const {}

// Range: 0x80179D2C -> 0x80179D4C
void zUIImage_Init(struct xBase & data /* r0 */, struct xDynAsset & asset /* r0 */) {}

// Range: 0x80179D4C -> 0x80179DA4
void zUIImage_Init(class zUIImage * image /* r30 */, struct zUIImageAsset * asset /* r31 */) {}

// total size: 0x64
struct {} zUIImage::__vtable; // size: 0x64, address: 0x8043C8C0

