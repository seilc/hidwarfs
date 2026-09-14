/*
    Compile unit: E:\SD2\Game\flat\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int g_xutilinit; // size: 0x4, address: 0x35806C
static signed int g_crc_needinit; // size: 0x4, address: 0x357598
static unsigned int g_crc32_table[256]; // size: 0x400, address: 0x2B2C50
static unsigned short ascii_table[3][2]; // size: 0xC, address: 0x2B3050
static unsigned short ascii_k_table[33]; // size: 0x42, address: 0x2B3060
static unsigned short ascii_special_table[33]; // size: 0x42, address: 0x0
char _ctype_[]; // size: 0x0, address: 0x3554F0
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
    Compile unit: E:\SD2\Game\flat\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018DED0 -> 0x0018DF48
*/
// Range: 0x18DED0 -> 0x18DF48
signed int xUtil_yesno(float wt_yes /* r20 */) {
    /* anonymous block */ {
        // Range: 0x18DED0 -> 0x18DF48
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018DF50 -> 0x0018DF8C
*/
// Range: 0x18DF50 -> 0x18DF8C
signed int xUtil_yesno() {
    /* anonymous block */ {
        // Range: 0x18DF50 -> 0x18DF8C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018DF90 -> 0x0018DFF0
*/
// Range: 0x18DF90 -> 0x18DFF0
unsigned char itoBCD(unsigned short dec /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18DF90 -> 0x18DFF0
        signed int ones; // r4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018DFF0 -> 0x0018E050
*/
// Range: 0x18DFF0 -> 0x18E050
unsigned char itoBCD(unsigned char dec /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18DFF0 -> 0x18E050
        signed int ones; // r4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E050 -> 0x0018E084
*/
// Range: 0x18E050 -> 0x18E084
unsigned char BCDtoi(unsigned char hex /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18E050 -> 0x18E084
        char c[16]; // r29+0x10
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E090 -> 0x0018E2A4
*/
// Range: 0x18E090 -> 0x18E2A4
void strtosjis(unsigned char * string /* r20 */, unsigned char * dest /* r19 */) {
    /* anonymous block */ {
        // Range: 0x18E090 -> 0x18E2A4
        unsigned char * dest2; // r5
        unsigned char stmp2; // r18
        unsigned char stmp; // r17
        signed int ascii_code; // r16
        signed int sjis_code; // r4
        signed int i; // r4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E2B0 -> 0x0018E4E8
*/
// Range: 0x18E2B0 -> 0x18E4E8
unsigned int xUtil_crc_update(unsigned int crc_accum /* r18 */, char * data /* r17 */, signed int datasize /* r16 */) {
    /* anonymous block */ {
        // Range: 0x18E2B0 -> 0x18E4E8
        signed int j; // r8
        signed int i; // r10
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E4F0 -> 0x0018E57C
*/
// Range: 0x18E4F0 -> 0x18E57C
unsigned int xUtil_crc_init() {
    /* anonymous block */ {
        // Range: 0x18E4F0 -> 0x18E57C
        unsigned int crc_accum; // r7
        signed int j; // r6
        signed int i; // r5
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E580 -> 0x0018E7E8
*/
// Range: 0x18E580 -> 0x18E7E8
char * xUtil_idtag2string(unsigned int srctag /* r2 */, signed int bufidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18E580 -> 0x18E7E8
        char t; // r2
        signed int l; // r29+0xC
        char * uc; // r3
        char * strptr; // r2
        unsigned int tag; // r29+0x8
        char buf[6][10]; // @ 0x002B30B0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E7F0 -> 0x0018E804
*/
// Range: 0x18E7F0 -> 0x18E804
signed int xUtilShutdown() {
    /* anonymous block */ {
        // Range: 0x18E7F0 -> 0x18E804
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E810 -> 0x0018E840
*/
// Range: 0x18E810 -> 0x18E840
signed int xUtilStartup() {
    /* anonymous block */ {
        // Range: 0x18E810 -> 0x18E840
    }
}


