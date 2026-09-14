/*
    Compile unit: C:\TestBuild\in\GAME\zUIUserString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
// total size: 0x50
struct /* @anon1 */ {} zUIUserString::__vtable; // size: 0x50, address: 0x6017F0
// total size: 0x50
struct /* @anon0 */ {} zUIText::__vtable; // size: 0x50, address: 0x6013F0
// total size: 0x50
struct /* @anon2 */ {} zUI::__vtable; // size: 0x50, address: 0x0
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
// total size: 0x80
class zUIUserString : public zUIText {
    // Members
public:
    char * textBuffer; // offset 0x74, size 0x4
    signed int length; // offset 0x78, size 0x4
    signed int maxLength; // offset 0x7C, size 0x4
};
// total size: 0x10
class xDynAsset : public xBaseAsset {
    // Members
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
// total size: 0x74
class zUITextAsset : public zUIAsset {
    // Members
public:
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
    class xColor_tag shadowColor; // offset 0x60, size 0x4
    float shadowOffsetX; // offset 0x64, size 0x4
    float shadowOffsetY; // offset 0x68, size 0x4
    float textScaleX; // offset 0x6C, size 0x4
    float textScaleY; // offset 0x70, size 0x4
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
// total size: 0x8
class zUICustom {
    // Members
public:
    class zUI * ui; // offset 0x4, size 0x4
};
// total size: 0x50
struct /* @anon1 */ {};
// total size: 0x50
struct /* @anon2 */ {};
// total size: 0x0
class zUIMotionAsset {};
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
// total size: 0x78
class zUIUserStringAsset : public zUITextAsset {
    // Members
public:
    unsigned char hardMaxChars; // offset 0x74, size 0x1
    unsigned char softMaxChars; // offset 0x75, size 0x1
};
// total size: 0x74
class zUIText : public zUI {
    // Members
public:
    class xColor_tag shadowColor; // offset 0x6C, size 0x4
    char * text; // offset 0x70, size 0x4
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

/*
    Compile unit: C:\TestBuild\in\GAME\zUIUserString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C3180 -> 0x002C3198
*/
// Range: 0x2C3180 -> 0x2C3198
void zUIUserString_Init(class xBase & data /* r2 */, class xDynAsset & asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2C3180 -> 0x2C3198
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zUIUserString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C31A0 -> 0x002C31AC
*/
// Range: 0x2C31A0 -> 0x2C31AC
// this: r2
unsigned int zUIUserString::GetSortKey() {
    /* anonymous block */ {
        // Range: 0x2C31A0 -> 0x2C31AC
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zUIUserString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C31B0 -> 0x002C3458
*/
// Range: 0x2C31B0 -> 0x2C3458
// this: r16
void zUIUserString::DoHandleEvent(class xBase * from /* r2 */, unsigned int toEvent /* r2 */, float * toParam /* r2 */, class xBase * toParamWidget /* r2 */, unsigned int toParamWidgetID /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2C31B0 -> 0x2C3458
        unsigned int len; // r29+0x2C
        char * asset; // r2
        char ch; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zUIUserString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C3460 -> 0x002C34CC
*/
// Range: 0x2C3460 -> 0x2C34CC
// this: r17
void zUIUserString::DoReset() {
    /* anonymous block */ {
        // Range: 0x2C3460 -> 0x2C34CC
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zUIUserString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C34D0 -> 0x002C3528
*/
// Range: 0x2C34D0 -> 0x2C3528
// this: r16
void zUIUserString::DoInit() {
    /* anonymous block */ {
        // Range: 0x2C34D0 -> 0x2C3528
    }
}


