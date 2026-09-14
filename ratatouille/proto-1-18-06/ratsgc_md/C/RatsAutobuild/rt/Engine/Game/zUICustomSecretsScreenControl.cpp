/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zUICustomSecretsScreenControl.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8015AD54 -> 0x8015B4CC
*/
// total size: 0x50
struct {} zUICustomSecretsScreenControl::__vtable; // size: 0x50, address: 0x802DDAB8
// total size: 0x10
class zUICustomSecretsScreenControl : public zUICustom {
    // Functions
    zUICustomSecretsScreenControl(class zUI * ui);

    void Setup();

    void PostUpdate(float dt);

    unsigned char PreRender();

    unsigned char HandleEvent(struct xBase * from, unsigned int toEvent, const float * toParam, struct xBase * toParamWidget, unsigned int toParamWidgetID);

    void Reset();

    void changeFocusX(int dir);

    void changeFocusY(int dir);

    // Members
    struct xBase * input; // offset 0x8, size 0x4
    unsigned short currFocus; // offset 0xC, size 0x2
    signed char currRow; // offset 0xE, size 0x1
    signed char currCol; // offset 0xF, size 0x1
};
// Range: 0x8015AD54 -> 0x8015AD98
// this: r31
zUICustomSecretsScreenControl::zUICustomSecretsScreenControl(class zUI * ui /* r0 */) {
    // References
    // -> struct [anonymous] zUICustomSecretsScreenControl::__vtable;
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
// total size: 0x8
class zUICustom {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    class zUI * ui; // offset 0x4, size 0x4
};
// Range: 0x8015AD98 -> 0x8015AD9C
void zUICustomSecretsScreenControl::Init() {}

// Range: 0x8015AD9C -> 0x8015ADD8
// this: r31
void zUICustomSecretsScreenControl::Setup() {}

// Range: 0x8015ADD8 -> 0x8015AE24
// this: r31
void zUICustomSecretsScreenControl::PostUpdate(float dt /* f0 */) {
    // Local variables
    int brightness; // r0
}

void * RwEngineInstance; // size: 0x4, address: 0x803C4584
unsigned int FB_XRES; // size: 0x4, address: 0x803BE15C
unsigned int FB_YRES; // size: 0x4, address: 0x803BE160
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
// Range: 0x8015AE24 -> 0x8015B094
// this: r9
unsigned char zUICustomSecretsScreenControl::PreRender() {
    // Local variables
    float offsetX; // f4
    float offsetY; // f6
    float scaleX; // f8
    float scaleY; // f9
    float glowBoxData[28][3]; // r1+0x68
    float z; // f31
    struct rwGameCube2DVertex vertices[4]; // r1+0x8
    float x1; // f5
    float y1; // f8
    float x2; // f2
    float y2; // f0
    int i; // r0

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int FB_YRES;
    // -> unsigned int FB_XRES;
}

// Range: 0x8015B094 -> 0x8015B218
// this: r26
unsigned char zUICustomSecretsScreenControl::HandleEvent(struct xBase * from /* r27 */, unsigned int toEvent /* r28 */, const float * toParam /* r29 */, struct xBase * toParamWidget /* r30 */, unsigned int toParamWidgetID /* r31 */) {}

// Range: 0x8015B218 -> 0x8015B22C
// this: r0
void zUICustomSecretsScreenControl::Reset() {}

// Range: 0x8015B22C -> 0x8015B308
// this: r0
void zUICustomSecretsScreenControl::changeFocusX(int dir /* r0 */) {
    // Local variables
    int rows[6]; // r1+0x8
    signed char i; // r6
}

// Range: 0x8015B308 -> 0x8015B4CC
// this: r0
void zUICustomSecretsScreenControl::changeFocusY(int dir /* r0 */) {
    // Local variables
    int rows[6]; // r1+0x8
    unsigned char isSpecialCase; // r6
    int oldRow; // r7
    int oldCol; // r8
    signed char i; // r6
}


