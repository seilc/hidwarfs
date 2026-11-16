/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\strfile.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
// total size: 0x4
class sceCdRMode {
    // Members
public:
    unsigned char trycount; // offset 0x0, size 0x1
    unsigned char spindlctrl; // offset 0x1, size 0x1
    unsigned char datapattern; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
};
// total size: 0x34
class StrFile {
    // Members
public:
    signed int isOnCD; // offset 0x0, size 0x4
    signed int size; // offset 0x4, size 0x4
    class sceCdlFILE fp; // offset 0x8, size 0x24
    unsigned char * iopBuf; // offset 0x2C, size 0x4
    signed int fd; // offset 0x30, size 0x4
};
// total size: 0x24
class sceCdlFILE {
    // Members
public:
    unsigned int lsn; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    char name[16]; // offset 0x8, size 0x10
    unsigned char date[8]; // offset 0x18, size 0x8
    unsigned int flag; // offset 0x20, size 0x4
};

/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\strfile.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00262420 -> 0x002624B4
*/
// Range: 0x262420 -> 0x2624B4
signed int strFileRead(class StrFile * file /* r2 */, void * buff /* r18 */, signed int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x262420 -> 0x2624B4
        unsigned int err; // r29+0x4C
        signed int count; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\strfile.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002624C0 -> 0x0026250C
*/
// Range: 0x2624C0 -> 0x26250C
signed int strFileClose(class StrFile * file /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2624C0 -> 0x26250C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\strfile.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00262510 -> 0x00262800
*/
// Range: 0x262510 -> 0x262800
signed int strFileOpen(class StrFile * file /* r21 */, char * filename /* r20 */) {
    /* anonymous block */ {
        // Range: 0x262510 -> 0x262800
        class sceCdRMode mode; // r29+0x1BC
        signed int len; // r18
        signed int i; // r17
        signed int dlen; // r17
        char devname[64]; // r29+0x170
        char fn[256]; // r29+0x70
        char * body; // r16
        signed int ret; // r2
    }
}


