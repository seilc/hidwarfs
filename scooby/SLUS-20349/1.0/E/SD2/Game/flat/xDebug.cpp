/*
    Compile unit: E:\SD2\Game\flat\xDebug.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static char dm_names[13][16]; // size: 0xD0, address: 0x28EE60
unsigned int gFrameCount; // size: 0x4, address: 0x357C78
void (* sDebugModeCallbackFunc[45])(); // size: 0xB4, address: 0x368CF0
char * sDebugModeName[45]; // size: 0xB4, address: 0x368DB0
unsigned int gDBfont; // size: 0x4, address: 0x3580DC
// total size: 0x4
class iColor_tag {
    // Members
public:
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
// total size: 0x10
class xSB {
    // Members
public:
    char * buf; // offset 0x0, size 0x4
    unsigned int max; // offset 0x4, size 0x4
    char * cur; // offset 0x8, size 0x4
    char * disp; // offset 0xC, size 0x4
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
    Code range: 0x00120030 -> 0x00120038
*/
// Range: 0x120030 -> 0x120038
void xDebugTimestampScreen() {
    /* anonymous block */ {
        // Range: 0x120030 -> 0x120038
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xDebug.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00120040 -> 0x00120048
*/
// Range: 0x120040 -> 0x120048
void xDebugExit() {
    /* anonymous block */ {
        // Range: 0x120040 -> 0x120048
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xDebug.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00120050 -> 0x00120058
*/
// Range: 0x120050 -> 0x120058
void xDebugUpdate() {
    /* anonymous block */ {
        // Range: 0x120050 -> 0x120058
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xDebug.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00120060 -> 0x001200B8
*/
// Range: 0x120060 -> 0x1200B8
void xDebugInit() {
    /* anonymous block */ {
        // Range: 0x120060 -> 0x1200B8
        signed int i; // r4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xDebug.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001200C0 -> 0x001200D8
*/
// Range: 0x1200C0 -> 0x1200D8
void xDebugModeRegisterCallback(signed int mode /* r2 */, void (* func)() /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1200C0 -> 0x1200D8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xDebug.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001200E0 -> 0x0012011C
*/
// Range: 0x1200E0 -> 0x12011C
signed int xDebugModeAdd(char * debugModeName /* r2 */, void (* func)() /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1200E0 -> 0x12011C
        signed int modeid; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xDebug.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00120120 -> 0x001201D0
*/
// Range: 0x120120 -> 0x1201D0
signed int xDebugModeAdd(char * debugModeName /* r17 */) {
    /* anonymous block */ {
        // Range: 0x120120 -> 0x1201D0
        signed int i; // r18
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xDebug.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001201D0 -> 0x001201F8
*/
// Range: 0x1201D0 -> 0x1201F8
void xprintf() {
    /* anonymous block */ {
        // Range: 0x1201D0 -> 0x1201F8
    }
}


