/*
    Compile unit: C:\TestBuild\in\GAME\zLoadingScreen.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
static class basic_rect screen_bounds; // size: 0x10, address: 0x0
static class basic_rect default_adjust; // size: 0x10, address: 0x0
static unsigned char show_stats; // size: 0x1, address: 0x609654
// total size: 0x18
struct /* @anon0 */ {} zLoadingScreen::__vtable; // size: 0x18, address: 0x606820
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x6B2890
void CustomSignalHandler(class zUI *, unsigned int, unsigned int, float *, class xBase *, unsigned int, void *); // size: 0x0, address: 0x473110
void * CustomStaticAllocator(unsigned int, void *); // size: 0x0, address: 0x473220
// total size: 0x50
class zUIAsset : public xDynAsset {
    // Members
public:
    float x; // offset 0x10, size 0x4
    float y; // offset 0x14, size 0x4
    float z; // offset 0x18, size 0x4
    float width; // offset 0x1C, size 0x4
    float height; // offset 0x20, size 0x4
    signed int flags; // offset 0x24, size 0x4
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
// total size: 0x6C
class zUI : public xBase {
    // Members
public:
    class zUIAsset * asset; // offset 0x10, size 0x4
    class State current; // offset 0x14, size 0x18
    class State startMovement; // offset 0x2C, size 0x18
    float z; // offset 0x44, size 0x4
    class zUIMotionAsset * selectedMotion; // offset 0x48, size 0x4
    class zUIMotionAsset * unselectedMotion; // offset 0x4C, size 0x4
    class zUICustom * custom; // offset 0x50, size 0x4
    unsigned char visible; // offset 0x54, size 0x1
    unsigned char focus; // offset 0x55, size 0x1
    unsigned char lastFocus; // offset 0x56, size 0x1
    unsigned char selected; // offset 0x57, size 0x1
    unsigned char brighten; // offset 0x58, size 0x1
    unsigned char hdrPass; // offset 0x59, size 0x1
    unsigned char locked; // offset 0x5A, size 0x1
    class zUIMotionAsset * motion; // offset 0x60, size 0x4
    float motionTime; // offset 0x64, size 0x4
    unsigned char motionFiredEvent; // offset 0x68, size 0x1
    unsigned char motionLoop; // offset 0x69, size 0x1
};
// total size: 0x18
class State {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float width; // offset 0x8, size 0x4
    float height; // offset 0xC, size 0x4
    class xColor_tag color; // offset 0x10, size 0x4
    unsigned char brightness; // offset 0x14, size 0x1
    unsigned char pad[3]; // offset 0x15, size 0x3
};
// total size: 0x10
class xBase {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    class xLinkAsset * link; // offset 0x8, size 0x4
    void (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // offset 0xC, size 0x4
};
// total size: 0x4
class Screen {};
// total size: 0x8
class zUICustom {
    // Members
public:
    class zUI * ui; // offset 0x4, size 0x4
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
// total size: 0x0
class zUIMotionAsset {};
// total size: 0xC
class xGroupAsset : public xBaseAsset {
    // Members
public:
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
};
// total size: 0x18
class xFXHighDynamicRangeConfiguration {
    // Members
public:
    signed int glow; // offset 0x0, size 0x4
    signed int darken; // offset 0x4, size 0x4
    signed int downsamples; // offset 0x8, size 0x4
    float overbrighten; // offset 0xC, size 0x4
    float overbrighten_decay; // offset 0x10, size 0x4
    unsigned char blur_faster; // offset 0x14, size 0x1
};
// total size: 0x20
class xLinkAsset {
    // Members
public:
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
// total size: 0x8
class xBaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0xCC
class zLoadingScreen : public Screen {
    // Members
public:
    class zUI * controls[16]; // offset 0x4, size 0x40
    signed int controlCount; // offset 0x44, size 0x4
    void * allocations[32]; // offset 0x48, size 0x80
    signed int allocationCount; // offset 0xC8, size 0x4
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
class basic_rect {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
// total size: 0x1C
class zUIMgrHDRContext {
    // Members
public:
    unsigned char renderedHDR; // offset 0x0, size 0x1
    class xFXHighDynamicRangeConfiguration oldConfiguration; // offset 0x4, size 0x18
};
// total size: 0x18
struct /* @anon0 */ {};
// total size: 0x10
class xDynAsset : public xBaseAsset {
    // Members
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};

/*
    Compile unit: C:\TestBuild\in\GAME\zLoadingScreen.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00472B90 -> 0x00472C7C
*/
// Range: 0x472B90 -> 0x472C7C
// this: r19
void zLoadingScreen::Exit() {
    /* anonymous block */ {
        // Range: 0x472B90 -> 0x472C7C
        signed int j; // r16
        signed int i; // r18
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLoadingScreen.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00472C80 -> 0x00472D0C
*/
// Range: 0x472C80 -> 0x472D0C
// this: r16
void zLoadingScreen::Render() {
    /* anonymous block */ {
        // Range: 0x472C80 -> 0x472D0C
        class zUIMgrHDRContext context; // r29+0x30
        signed int i; // r17
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLoadingScreen.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00472D10 -> 0x00472DE0
*/
// Range: 0x472D10 -> 0x472DE0
// this: r18
void zLoadingScreen::Update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x472D10 -> 0x472DE0
        signed int i; // r17
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLoadingScreen.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00472DE0 -> 0x004730F8
*/
// Range: 0x472DE0 -> 0x4730F8
// this: r16
void zLoadingScreen::Init() {
    /* anonymous block */ {
        // Range: 0x472DE0 -> 0x4730F8
        class xGroupAsset * group; // r22
        signed short i; // r21
        unsigned int size; // r29+0x8C
        class xDynAsset * asset; // r20
        void * test; // r2
        class zUI * element; // r19
        signed int i; // r17
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLoadingScreen.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00473100 -> 0x00473108
*/
// Range: 0x473100 -> 0x473108
void UnSetShowStats() {
    /* anonymous block */ {
        // Range: 0x473100 -> 0x473108
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLoadingScreen.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00473110 -> 0x00473214
*/
// Range: 0x473110 -> 0x473214
static void CustomSignalHandler(class zUI * from /* r20 */, unsigned int dest /* r2 */, unsigned int event /* r19 */, float * param /* r18 */, class xBase * paramWidget /* r17 */, unsigned int paramWidgetID /* r16 */, void * user /* r2 */) {
    /* anonymous block */ {
        // Range: 0x473110 -> 0x473214
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLoadingScreen.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00473220 -> 0x00473284
*/
// Range: 0x473220 -> 0x473284
static void * CustomStaticAllocator(unsigned int size /* r2 */, void * user /* r17 */) {
    /* anonymous block */ {
        // Range: 0x473220 -> 0x473284
    }
}


