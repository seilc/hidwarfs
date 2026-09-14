/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class xFontInfo_t FontList[3]; // size: 0x1C8, address: 0xAA6800
class xFontBox_t BoxList[3]; // size: 0xCC, address: 0xAA69D0
unsigned int dbFont; // size: 0x4, address: 0x4A4E24
unsigned int draw; // size: 0x4, address: 0x4A4E28
unsigned int dpx; // size: 0x4, address: 0x4A4E2C
unsigned int dpy; // size: 0x4, address: 0x4A4E30
static char * blankText; // size: 0x4, address: 0x4A464C
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
// total size: 0x44
class xFontBox_t {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    float x; // offset 0x4, size 0x4
    float y; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
    unsigned int font; // offset 0x14, size 0x4
    unsigned int color; // offset 0x18, size 0x4
    unsigned int saved_color; // offset 0x1C, size 0x4
    float x_spacing; // offset 0x20, size 0x4
    float y_spacing; // offset 0x24, size 0x4
    float depth; // offset 0x28, size 0x4
    float inset_left; // offset 0x2C, size 0x4
    float inset_right; // offset 0x30, size 0x4
    float inset_top; // offset 0x34, size 0x4
    float inset_bottom; // offset 0x38, size 0x4
    char * text; // offset 0x3C, size 0x4
    unsigned int backdrop_color; // offset 0x40, size 0x4
};
// total size: 0x98
class xFontInfo_t {
    // Members
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char id; // offset 0x1, size 0x1
    unsigned short flags; // offset 0x2, size 0x2
    unsigned short char_width; // offset 0x4, size 0x2
    unsigned short char_height; // offset 0x6, size 0x2
    unsigned short draw_width; // offset 0x8, size 0x2
    unsigned short draw_height; // offset 0xA, size 0x2
    unsigned short tex_width; // offset 0xC, size 0x2
    unsigned short tex_height; // offset 0xE, size 0x2
    unsigned short layout; // offset 0x10, size 0x2
    unsigned short pad; // offset 0x12, size 0x2
    unsigned char lookup[128]; // offset 0x14, size 0x80
    char * characters; // offset 0x94, size 0x4
};
// total size: 0x4698
class XStreamHeader {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int versionID; // offset 0x4, size 0x4
    unsigned char month; // offset 0x8, size 0x1
    unsigned char day; // offset 0x9, size 0x1
    unsigned char hour; // offset 0xA, size 0x1
    unsigned char minute; // offset 0xB, size 0x1
    unsigned int mdsOffset; // offset 0xC, size 0x4
    unsigned int mdsLength; // offset 0x10, size 0x4
    class tagXStreamMDSDirectory directory; // offset 0x14, size 0x3E84
    char safety[2048]; // offset 0x3E98, size 0x800
};
// total size: 0x10
class tagXStreamDirectoryEntry {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int type; // offset 0x4, size 0x4
    unsigned int offset; // offset 0x8, size 0x4
    unsigned int length; // offset 0xC, size 0x4
};
// total size: 0x3E84
class tagXStreamMDSDirectory {
    // Members
public:
    unsigned int count; // offset 0x0, size 0x4
    class tagXStreamDirectoryEntry directory[1000]; // offset 0x4, size 0x3E80
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035D160 -> 0x0035D300
*/
// Range: 0x35D160 -> 0x35D300
void xFontBoxSetBackdrop(class xFontBox_t * box /* r18 */, unsigned int color /* r17 */, unsigned int opaque /* r16 */) {
    /* anonymous block */ {
        // Range: 0x35D160 -> 0x35D300
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035D300 -> 0x0035D4B4
*/
// Range: 0x35D300 -> 0x35D4B4
void xFontBoxSetJustification(class xFontBox_t * box /* r17 */, unsigned int mode /* r16 */) {
    /* anonymous block */ {
        // Range: 0x35D300 -> 0x35D4B4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035D4C0 -> 0x0035D6AC
*/
// Range: 0x35D4C0 -> 0x35D6AC
void xFontBoxSetInset(class xFontBox_t * box /* r16 */, float inset_left /* r23 */, float inset_right /* r22 */, float inset_top /* r21 */, float inset_bottom /* r20 */) {
    /* anonymous block */ {
        // Range: 0x35D4C0 -> 0x35D6AC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035D6B0 -> 0x0035D83C
*/
// Range: 0x35D6B0 -> 0x35D83C
void xFontBoxSetSpacing(class xFontBox_t * box /* r16 */, float x_spacing /* r21 */, float y_spacing /* r20 */) {
    /* anonymous block */ {
        // Range: 0x35D6B0 -> 0x35D83C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035D840 -> 0x0035D9C0
*/
// Range: 0x35D840 -> 0x35D9C0
void xFontBoxSetColor(class xFontBox_t * box /* r17 */, unsigned int color /* r16 */) {
    /* anonymous block */ {
        // Range: 0x35D840 -> 0x35D9C0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035D9C0 -> 0x0035DB4C
*/
// Range: 0x35D9C0 -> 0x35DB4C
void xFontBoxSetText(class xFontBox_t * box /* r17 */, char * text /* r16 */) {
    /* anonymous block */ {
        // Range: 0x35D9C0 -> 0x35DB4C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035DB50 -> 0x0035DCC0
*/
// Range: 0x35DB50 -> 0x35DCC0
void xFontBoxDestroy(class xFontBox_t * box /* r16 */) {
    /* anonymous block */ {
        // Range: 0x35DB50 -> 0x35DCC0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035DCC0 -> 0x0035DF08
*/
// Range: 0x35DCC0 -> 0x35DF08
char * xFontBoxRender(class xFontBox_t * box /* r20 */) {
    /* anonymous block */ {
        // Range: 0x35DCC0 -> 0x35DF08
        unsigned int maxy; // r19
        unsigned int maxx; // r18
        unsigned int miny; // r16
        unsigned int minx; // r17
        unsigned int maxheight; // r2
        unsigned int maxwidth; // r2
        char * t; // r2
        char * s; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035DF10 -> 0x0035E458
*/
// Range: 0x35DF10 -> 0x35E458
static char * JustifyLine(class xFontBox_t * box /* r21 */, char * text /* r30 */, unsigned int maxwidth /* r22 */, unsigned int maxheight /* r23 */) {
    /* anonymous block */ {
        // Range: 0x35DF10 -> 0x35E458
        char * end; // r20
        char * t; // r2
        char * s; // r19
        unsigned int testheight; // r29+0xCC
        unsigned int testwidth; // r29+0xC8
        unsigned int whitespace_width; // r18
        unsigned int height; // r17
        unsigned int width; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035E460 -> 0x0035EBC0
*/
// Range: 0x35E460 -> 0x35EBC0
static char * ProcessWord(class xFontBox_t * box /* r21 */, char * text /* r2 */, unsigned int * width /* r30 */, unsigned int * height /* r23 */) {
    /* anonymous block */ {
        // Range: 0x35E460 -> 0x35EBC0
        class xFontInfo_t * font; // r2
        char c; // r3
        unsigned int b; // r2
        unsigned int g; // r2
        unsigned int r; // r2
        unsigned int color; // r18
        unsigned int fontID; // r2
        char * s; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035EBC0 -> 0x0035EDFC
*/
// Range: 0x35EBC0 -> 0x35EDFC
class xFontBox_t * xFontBoxCreate(float x /* r29+0x50 */, float y /* r29+0x50 */, float w /* r29+0x50 */, float h /* r29+0x50 */, unsigned int id /* r17 */, unsigned int color /* r2 */) {
    /* anonymous block */ {
        // Range: 0x35EBC0 -> 0x35EDFC
        class xFontInfo_t * font; // r4
        class xFontBox_t * box; // r16
        unsigned int i; // r3
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035EE00 -> 0x0035EE6C
*/
// Range: 0x35EE00 -> 0x35EE6C
void xFontRender() {
    /* anonymous block */ {
        // Range: 0x35EE00 -> 0x35EE6C
        class xFontBox_t * box; // r17
        unsigned int i; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035EE70 -> 0x0035EEE4
*/
// Range: 0x35EE70 -> 0x35EEE4
void xFontExit() {
    /* anonymous block */ {
        // Range: 0x35EE70 -> 0x35EEE4
        class xFontInfo_t * font; // r17
        unsigned int i; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035EEF0 -> 0x0035F0A0
*/
// Range: 0x35EEF0 -> 0x35F0A0
void xFontInit() {
    /* anonymous block */ {
        // Range: 0x35EEF0 -> 0x35F0A0
        unsigned int i; // r5
    }
}


