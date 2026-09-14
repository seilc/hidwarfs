/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zLoadingScreen.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80122814 -> 0x80122DCC
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
// Range: 0x80122814 -> 0x80122840
static void * CustomStaticAllocator(unsigned int size /* r0 */, void * user /* r4 */) {}

// Range: 0x80122840 -> 0x80122898
static void CustomSignalHandler(class zUI * from /* r3 */, unsigned int dest /* r31 */, unsigned int event /* r12 */, const float * param /* r11 */, struct xBase * paramWidget /* r10 */, unsigned int paramWidgetID /* r0 */, void * user /* r9 */) {}

static unsigned char show_stats; // size: 0x1, address: 0x803C2C68
// total size: 0x4
class Screen {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0xCC
class zLoadingScreen : public Screen {
    // Functions
    void Init();

    void Update(float dt);

    void Render();

    void Exit();

    void * CustomAllocate(unsigned int size);

    void CustomSignal(class zUI * from, unsigned int dest, unsigned int event, const float * param, struct xBase * paramWidget, unsigned int paramWidgetID);

    // Static members
    static unsigned int MAX_ALLOCATION; // size: 0x4
    static unsigned int MAX_CONTROLS; // size: 0x4

    // Members
    class zUI * controls[16]; // offset 0x4, size 0x40
    int controlCount; // offset 0x44, size 0x4
    void * allocations[32]; // offset 0x48, size 0x80
    int allocationCount; // offset 0xC8, size 0x4
};
// Range: 0x80122898 -> 0x801228A4
void zLoadingScreen::UnSetShowStats() {
    // References
    // -> static unsigned char show_stats;
}

void * RwEngineInstance; // size: 0x4, address: 0x803C4584
// total size: 0xC
struct xGroupAsset : public xBaseAsset {
    // Members
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
};
// Range: 0x801228A4 -> 0x80122B38
// this: r27
void zLoadingScreen::Init() {
    // Local variables
    struct xGroupAsset * group; // r0
    signed short i; // r30
    unsigned int size; // r1+0x8
    struct xDynAsset * asset; // r29
    void * test; // r0
    class zUI * element; // r28
    int i; // r30

    // References
    // -> void * RwEngineInstance;
    // -> static unsigned char show_stats;
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
// Range: 0x80122B38 -> 0x80122BA8
// this: r29
void zLoadingScreen::Update(float dt /* f31 */) {
    // Local variables
    int i; // r30
}

// Range: 0x80122BA8 -> 0x80122C0C
// this: r29
void zLoadingScreen::Render() {
    // Local variables
    int i; // r30
}

// Range: 0x80122C0C -> 0x80122CC4
// this: r29
void zLoadingScreen::Exit() {
    // Local variables
    int j; // r30
    int i; // r30

    // References
    // -> void * RwEngineInstance;
}

// Range: 0x80122CC4 -> 0x80122D30
// this: r31
void * zLoadingScreen::CustomAllocate(unsigned int size /* r0 */) {
    // References
    // -> void * RwEngineInstance;
}

// Range: 0x80122D30 -> 0x80122DCC
// this: r23
void zLoadingScreen::CustomSignal(class zUI * from /* r24 */, unsigned int dest /* r25 */, unsigned int event /* r26 */, const float * param /* r27 */, struct xBase * paramWidget /* r28 */, unsigned int paramWidgetID /* r29 */) {
    // Local variables
    int i; // r30
}

// total size: 0x18
struct {} zLoadingScreen::__vtable; // size: 0x18, address: 0x803BE910

