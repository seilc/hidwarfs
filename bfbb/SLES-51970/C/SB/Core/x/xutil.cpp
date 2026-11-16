/*
    Compile unit: C:\SB\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int g_xutilinit; // size: 0x4, address: 0x50F098
static signed int g_crc_needinit; // size: 0x4, address: 0x50DDC0
static unsigned int g_crc32_table[256]; // size: 0x400, address: 0x5B9F80
static unsigned short ascii_table[3][2]; // size: 0xC, address: 0x418280
static unsigned short ascii_k_table[33]; // size: 0x42, address: 0x418290
static unsigned short ascii_special_table[33]; // size: 0x42, address: 0x0
char _ctype_[]; // size: 0x0, address: 0x4EAF38
// total size: 0x2
class DoubleChar {
    // Members
public:
    unsigned char byte1; // offset 0x0, size 0x1
    unsigned char byte2; // offset 0x1, size 0x1
};
// total size: 0x2
class SJIS_STRUCT {
    // Members
public:
    union { // inferred
        unsigned short sjisChar; // offset 0x0, size 0x2
        class DoubleChar doubleChar; // offset 0x0, size 0x2
    };
};

/*
    Compile unit: C:\SB\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020F420 -> 0x0020F538
*/
// Range: 0x20F420 -> 0x20F538
void xUtil_wtadjust(float * wts /* r2 */, signed int cnt /* r2 */, float arbref /* r29 */) {
    /* anonymous block */ {
        // Range: 0x20F420 -> 0x20F538
        signed int i; // r7
        float sum; // r2
        float fac; // r1
    }
}


/*
    Compile unit: C:\SB\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020F540 -> 0x0020F5B8
*/
// Range: 0x20F540 -> 0x20F5B8
signed int xUtil_yesno(float wt_yes /* r20 */) {
    /* anonymous block */ {
        // Range: 0x20F540 -> 0x20F5B8
    }
}


/*
    Compile unit: C:\SB\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020F5C0 -> 0x0020F620
*/
// Range: 0x20F5C0 -> 0x20F620
unsigned char itoBCD(unsigned short dec /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20F5C0 -> 0x20F620
        signed int ones; // r5
    }
}


/*
    Compile unit: C:\SB\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020F620 -> 0x0020F680
*/
// Range: 0x20F620 -> 0x20F680
unsigned char itoBCD(unsigned char dec /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20F620 -> 0x20F680
        signed int ones; // r5
    }
}


/*
    Compile unit: C:\SB\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020F680 -> 0x0020F6B4
*/
// Range: 0x20F680 -> 0x20F6B4
unsigned char BCDtoi(unsigned char hex /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20F680 -> 0x20F6B4
        char c[16]; // r29+0x10
    }
}


/*
    Compile unit: C:\SB\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020F6C0 -> 0x0020F8E8
*/
// Range: 0x20F6C0 -> 0x20F8E8
void strtosjis(unsigned char * string /* r20 */, unsigned char * dest /* r19 */) {
    /* anonymous block */ {
        // Range: 0x20F6C0 -> 0x20F8E8
        signed int i; // r5
        signed int sjis_code; // r4
        signed int ascii_code; // r18
        unsigned char stmp; // r17
        unsigned char stmp2; // r16
        unsigned char * dest2; // r4
    }
}


/*
    Compile unit: C:\SB\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020F8F0 -> 0x0020FAD4
*/
// Range: 0x20F8F0 -> 0x20FAD4
unsigned int xUtil_crc_update(unsigned int crc_accum /* r18 */, char * data /* r17 */, signed int datasize /* r16 */) {
    /* anonymous block */ {
        // Range: 0x20F8F0 -> 0x20FAD4
        signed int i; // r13
        signed int j; // r4
    }
}


/*
    Compile unit: C:\SB\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020FAE0 -> 0x0020FB68
*/
// Range: 0x20FAE0 -> 0x20FB68
unsigned int xUtil_crc_init() {
    /* anonymous block */ {
        // Range: 0x20FAE0 -> 0x20FB68
        signed int i; // r8
        signed int j; // r7
        unsigned int crc_accum; // r6
    }
}


/*
    Compile unit: C:\SB\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020FB70 -> 0x0020FE80
*/
// Range: 0x20FB70 -> 0x20FE80
char * xUtil_idtag2string(unsigned int srctag /* r2 */, signed int bufidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20FB70 -> 0x20FE80
        unsigned int tag; // r29+0xC
        char * strptr; // r2
        char * uc; // r3
        signed int l; // r29+0x8
        char t; // r2
        char buf[6][10]; // @ 0x005BA380
    }
}


/*
    Compile unit: C:\SB\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020FE80 -> 0x0020FE94
*/
// Range: 0x20FE80 -> 0x20FE94
signed int xUtilShutdown() {
    /* anonymous block */ {
        // Range: 0x20FE80 -> 0x20FE94
    }
}


/*
    Compile unit: C:\SB\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020FEA0 -> 0x0020FED0
*/
// Range: 0x20FEA0 -> 0x20FED0
signed int xUtilStartup() {
    /* anonymous block */ {
        // Range: 0x20FEA0 -> 0x20FED0
    }
}


