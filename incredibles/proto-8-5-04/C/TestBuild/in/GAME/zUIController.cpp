/*
    Compile unit: C:\TestBuild\in\GAME\zUIController.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
// total size: 0x50
struct /* @anon1 */ {} zUIController::__vtable; // size: 0x50, address: 0x605F60
// total size: 0x50
struct /* @anon0 */ {} zUI::__vtable; // size: 0x50, address: 0x0
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
// total size: 0x6C
class zUIController : public zUI {};
// total size: 0x8
class zUICustom {
    // Members
public:
    class zUI * ui; // offset 0x4, size 0x4
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
// total size: 0x50
struct /* @anon0 */ {};
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
// total size: 0x10
class xDynAsset : public xBaseAsset {
    // Members
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
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
// total size: 0x4
class RwRGBA {
    // Members
public:
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
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
// total size: 0x50
struct /* @anon1 */ {};
// total size: 0x50
class zUIControllerAsset : public zUIAsset {};
// total size: 0x8
class xBaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};

/*
    Compile unit: C:\TestBuild\in\GAME\zUIController.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0045E240 -> 0x0045E258
*/
// Range: 0x45E240 -> 0x45E258
void zUIController_Init(class xBase & data /* r2 */, class xDynAsset & asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x45E240 -> 0x45E258
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zUIController.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0045E260 -> 0x0045E268
*/
// Range: 0x45E260 -> 0x45E268
void DoRender() {
    /* anonymous block */ {
        // Range: 0x45E260 -> 0x45E268
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zUIController.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0045E270 -> 0x0045E2AC
*/
// Range: 0x45E270 -> 0x45E2AC
// this: r16
void zUIController::DoInit() {
    /* anonymous block */ {
        // Range: 0x45E270 -> 0x45E2AC
    }
}


