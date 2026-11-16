/*
    Compile unit: E:\SD2\Game\flat\xDebug.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static char dm_names[13][16]; // size: 0xD0, address: 0x28F760
unsigned int gFrameCount; // size: 0x4, address: 0x3585F4
void (* sDebugModeCallbackFunc[45])(); // size: 0xB4, address: 0x366670
char * sDebugModeName[45]; // size: 0xB4, address: 0x366730
unsigned int gDBfont; // size: 0x4, address: 0x358A6C
// total size: 0x10
class xSB {
    // Members
public:
    char * buf; // offset 0x0, size 0x4
    unsigned int max; // offset 0x4, size 0x4
    char * cur; // offset 0x8, size 0x4
    char * disp; // offset 0xC, size 0x4
};
// total size: 0x4
class iColor_tag {
    // Members
public:
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
// total size: 0x4C
class xFontBox {
    // Members
public:
    signed int flags; // offset 0x0, size 0x4
    float x; // offset 0x4, size 0x4
    float y; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
    unsigned int font; // offset 0x14, size 0x4
    class iColor_tag color; // offset 0x18, size 0x4
    class iColor_tag saved_color; // offset 0x1C, size 0x4
    float draw_width; // offset 0x20, size 0x4
    float draw_height; // offset 0x24, size 0x4
    float x_spacing; // offset 0x28, size 0x4
    float y_spacing; // offset 0x2C, size 0x4
    float depth; // offset 0x30, size 0x4
    float inset_left; // offset 0x34, size 0x4
    float inset_right; // offset 0x38, size 0x4
    float inset_top; // offset 0x3C, size 0x4
    float inset_bottom; // offset 0x40, size 0x4
    char * text; // offset 0x44, size 0x4
    class iColor_tag backdrop_color; // offset 0x48, size 0x4
};

/*
    Compile unit: E:\SD2\Game\flat\xDebug.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011FFD0 -> 0x0011FFD8
*/
// Range: 0x11FFD0 -> 0x11FFD8
void xDebugTimestampScreen() {
    /* anonymous block */ {
        // Range: 0x11FFD0 -> 0x11FFD8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xDebug.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011FFE0 -> 0x0011FFE8
*/
// Range: 0x11FFE0 -> 0x11FFE8
void xDebugExit() {
    /* anonymous block */ {
        // Range: 0x11FFE0 -> 0x11FFE8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xDebug.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011FFF0 -> 0x0011FFF8
*/
// Range: 0x11FFF0 -> 0x11FFF8
void xDebugUpdate() {
    /* anonymous block */ {
        // Range: 0x11FFF0 -> 0x11FFF8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xDebug.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00120000 -> 0x00120058
*/
// Range: 0x120000 -> 0x120058
void xDebugInit() {
    /* anonymous block */ {
        // Range: 0x120000 -> 0x120058
        signed int i; // r4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xDebug.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00120060 -> 0x00120078
*/
// Range: 0x120060 -> 0x120078
void xDebugModeRegisterCallback(signed int mode /* r2 */, void (* func)() /* r2 */) {
    /* anonymous block */ {
        // Range: 0x120060 -> 0x120078
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xDebug.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00120080 -> 0x001200BC
*/
// Range: 0x120080 -> 0x1200BC
signed int xDebugModeAdd(char * debugModeName /* r2 */, void (* func)() /* r16 */) {
    /* anonymous block */ {
        // Range: 0x120080 -> 0x1200BC
        signed int modeid; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xDebug.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001200C0 -> 0x00120170
*/
// Range: 0x1200C0 -> 0x120170
signed int xDebugModeAdd(char * debugModeName /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1200C0 -> 0x120170
        signed int i; // r18
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xDebug.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00120170 -> 0x00120198
*/
// Range: 0x120170 -> 0x120198
void xprintf() {
    /* anonymous block */ {
        // Range: 0x120170 -> 0x120198
    }
}


