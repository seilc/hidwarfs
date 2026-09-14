/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static char dbfont_chars[51]; // size: 0x33, address: 0x0
class xFontInfo_t FontList[3]; // size: 0x1C8, address: 0xAA6800
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
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
// total size: 0x10C
class tagFile {
    // Members
public:
    char m_name[256]; // offset 0x0, size 0x100
    signed int m_state; // offset 0x100, size 0x4
    signed int m_desc; // offset 0x104, size 0x4
    unsigned int m_fpos; // offset 0x108, size 0x4
};
// total size: 0x3E84
class tagXStreamMDSDirectory {
    // Members
public:
    unsigned int count; // offset 0x0, size 0x4
    class tagXStreamDirectoryEntry directory[1000]; // offset 0x4, size 0x3E80
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00387F70 -> 0x00387F78
*/
// Range: 0x387F70 -> 0x387F78
void iFontDrawChar() {
    /* anonymous block */ {
        // Range: 0x387F70 -> 0x387F78
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00387F80 -> 0x00387F88
*/
// Range: 0x387F80 -> 0x387F88
void iFontDrawBackdrop() {
    /* anonymous block */ {
        // Range: 0x387F80 -> 0x387F88
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00387F90 -> 0x0038807C
*/
// Range: 0x387F90 -> 0x38807C
void xFontFreeTexture(unsigned int id /* r16 */) {
    /* anonymous block */ {
        // Range: 0x387F90 -> 0x38807C
        class xFontInfo_t * font; // r3
    }
}


