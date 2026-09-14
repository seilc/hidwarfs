/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zUICustomArtworkManager.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8022BFFC -> 0x8022CB5C
*/
class zUICustomArtworkManager * pUICustomArtworkManager; // size: 0x4, address: 0x80C08FF0
static float ARTWORK_SCROLL_TIMER; // size: 0x4, address: 0x80C04648
static unsigned char unlockedBonus[80]; // size: 0x50, address: 0x80BC9438
// total size: 0x8
struct xIniValue {
    // Members
    const char * tok; // offset 0x0, size 0x4
    const char * val; // offset 0x4, size 0x4
};
// total size: 0xC
struct xIniSection {
    // Members
    const char * sec; // offset 0x0, size 0x4
    int first; // offset 0x4, size 0x4
    int count; // offset 0x8, size 0x4
};
// total size: 0x210
struct xIniFile {
    // Members
    int NumValues; // offset 0x0, size 0x4
    int NumSections; // offset 0x4, size 0x4
    struct xIniValue * Values; // offset 0x8, size 0x4
    struct xIniSection * Sections; // offset 0xC, size 0x4
    char name[256]; // offset 0x10, size 0x100
    char pathname[256]; // offset 0x110, size 0x100
};
// Range: 0x8022BFFC -> 0x8022C00C
void zUIIncrediblesSetUnlockedBonus(unsigned int i /* r0 */, unsigned char value /* r0 */) {
    // References
    // -> static unsigned char unlockedBonus[80];
}

// Range: 0x8022C00C -> 0x8022C01C
unsigned char zUIIncrediblesGetUnlockedBonus(unsigned int i /* r3 */) {
    // References
    // -> static unsigned char unlockedBonus[80];
}

// Range: 0x8022C01C -> 0x8022C024
unsigned int zUIIncrediblesGet_TOTAL_BONUS() {}

// total size: 0x54
struct {} zUICustomArtworkManager::__vtable; // size: 0x54, address: 0x80440020
// total size: 0x34
class zUICustomArtworkManager : public zUICustom {
    // Functions
    zUICustomArtworkManager(class zUI * ui);

    void Init();

    unsigned char HandleEvent(struct xBase * from, unsigned int toEvent);

    void PreUpdate(float dt);

    void UpdateImages();

    // Members
    int numItems; // offset 0x8, size 0x4
    class zUIImage * * items; // offset 0xC, size 0x4
    class zUIImage * control; // offset 0x10, size 0x4
    class zUIImage * bigControl; // offset 0x14, size 0x4
    class zUIText * bigTextControl; // offset 0x18, size 0x4
    const char * nextDescription; // offset 0x1C, size 0x4
    int activeItem; // offset 0x20, size 0x4
    int selectedArtwork; // offset 0x24, size 0x4
    int displayIndex; // offset 0x28, size 0x4
    float timeBeforeScroll; // offset 0x2C, size 0x4
    unsigned char lastScrollUp; // offset 0x30, size 0x1
    unsigned char delayScroll; // offset 0x31, size 0x1
    unsigned char lastDescriptionValid; // offset 0x32, size 0x1
};
// Range: 0x8022C024 -> 0x8022C060
// this: r31
zUICustomArtworkManager::zUICustomArtworkManager(class zUI * ui /* r0 */) {
    // References
    // -> struct [anonymous] zUICustomArtworkManager::__vtable;
}

// total size: 0x8
class zUICustom {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    class zUI * ui; // offset 0x4, size 0x4
};
static char __FUNCTION__[5]; // size: 0x5, address: 0x80C0464C
// total size: 0xC
struct xGroupAsset : public xBaseAsset {
    // Members
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
};
// total size: 0x24
struct xGroup : public xBase {
    // Members
    struct xGroupAsset * asset; // offset 0x10, size 0x4
    struct xBase * * item; // offset 0x14, size 0x4
    unsigned int last_index; // offset 0x18, size 0x4
    unsigned int ptr_last_index; // offset 0x1C, size 0x4
    int flg_group; // offset 0x20, size 0x4
};
// Range: 0x8022C060 -> 0x8022C48C
// this: r29
void zUICustomArtworkManager::Init() {
    // Local variables
    struct xGroup * group; // r31
    unsigned int i; // r30
    struct xBase * b; // r0
    class zUIImage * ui; // r0
    int itemIterator; // r28
    unsigned int i; // r27
    struct xBase * b; // r0
    unsigned int i; // r0

    // References
    // -> static unsigned char unlockedBonus[80];
    // -> static char __FUNCTION__[5];
}

// Range: 0x8022C48C -> 0x8022C870
// this: r31
unsigned char zUICustomArtworkManager::HandleEvent(struct xBase * from /* r0 */, unsigned int toEvent /* r0 */) {
    // Local variables
    int i; // r30
    char buffer[32]; // r1+0x8
    char textBuffer[48]; // r1+0x28

    // References
    // -> static float ARTWORK_SCROLL_TIMER;
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
// Range: 0x8022C870 -> 0x8022C988
// this: r31
void zUICustomArtworkManager::PreUpdate(float dt /* f0 */) {}

// total size: 0x0
class xtextbox {};
// total size: 0x74
struct zUITextAsset : public zUIAsset {
    // Members
    unsigned int textID; // offset 0x50, size 0x4
    unsigned char font; // offset 0x54, size 0x1
    unsigned char fontSizeW; // offset 0x55, size 0x1
    unsigned char fontSizeH; // offset 0x56, size 0x1
    unsigned char fontSpacingX; // offset 0x57, size 0x1
    unsigned char fontSpacingY; // offset 0x58, size 0x1
    unsigned char textBoxInsetTop; // offset 0x59, size 0x1
    unsigned char textBoxInsetLeft; // offset 0x5A, size 0x1
    unsigned char textBoxInsetRight; // offset 0x5B, size 0x1
    unsigned char textBoxInsetBottom; // offset 0x5C, size 0x1
    unsigned char justifyX; // offset 0x5D, size 0x1
    unsigned char justifyY; // offset 0x5E, size 0x1
    unsigned char textFlags; // offset 0x5F, size 0x1
    struct xColor_tag shadowColor; // offset 0x60, size 0x4
    float shadowOffsetX; // offset 0x64, size 0x4
    float shadowOffsetY; // offset 0x68, size 0x4
    float textScaleX; // offset 0x6C, size 0x4
    float textScaleY; // offset 0x70, size 0x4
};
// total size: 0x80
class zUIText : public zUI {
    // Members
    struct xColor_tag shadowColor; // offset 0x74, size 0x4
    const char * text; // offset 0x78, size 0x4
    unsigned char cached; // offset 0x7C, size 0x1
    unsigned char clearLayoutCache; // offset 0x7D, size 0x1
};
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
// Range: 0x8022C988 -> 0x8022C9E0
void zUICustomArtworkManager::AddTweaks(const char * baseName /* r4 */) {
    // Local variables
    char buffer[128]; // r1+0x8

    // References
    // -> static float ARTWORK_SCROLL_TIMER;
}

// Range: 0x8022C9E0 -> 0x8022CAB0
// this: r27
void zUICustomArtworkManager::UpdateImages() {
    // Local variables
    int i; // r29
    int realItem; // r28
    char buffer[32]; // r1+0x8
}

static int translationTable[80]; // size: 0x140, address: 0x8043FEE0
// Range: 0x8022CAB0 -> 0x8022CB5C
void zUICustomArtworkManager::AddArtworkIndex(char * buffer /* r30 */, int index /* r31 */) {
    // Local variables
    int realIndex; // r5

    // References
    // -> static unsigned char unlockedBonus[80];
    // -> static int translationTable[80];
}


