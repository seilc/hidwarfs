/*
    Compile unit: E:\SD2\Game\flat\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int g_xutilinit; // size: 0x4, address: 0x3589FC
static signed int g_crc_needinit; // size: 0x4, address: 0x357F18
static unsigned int g_crc32_table[256]; // size: 0x400, address: 0x2B3550
static unsigned short ascii_table[3][2]; // size: 0xC, address: 0x2B3950
static unsigned short ascii_k_table[33]; // size: 0x42, address: 0x2B3960
static unsigned short ascii_special_table[33]; // size: 0x42, address: 0x0
char _ctype_[]; // size: 0x0, address: 0x355E50
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
    Code range: 0x0018E670 -> 0x0018E6E8
*/
// Range: 0x18E670 -> 0x18E6E8
signed int xUtil_yesno(float wt_yes /* r20 */) {
    /* anonymous block */ {
        // Range: 0x18E670 -> 0x18E6E8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E6F0 -> 0x0018E72C
*/
// Range: 0x18E6F0 -> 0x18E72C
signed int xUtil_yesno() {
    /* anonymous block */ {
        // Range: 0x18E6F0 -> 0x18E72C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E730 -> 0x0018E790
*/
// Range: 0x18E730 -> 0x18E790
unsigned char itoBCD(unsigned short dec /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18E730 -> 0x18E790
        signed int ones; // r4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E790 -> 0x0018E7F0
*/
// Range: 0x18E790 -> 0x18E7F0
unsigned char itoBCD(unsigned char dec /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18E790 -> 0x18E7F0
        signed int ones; // r4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E7F0 -> 0x0018E824
*/
// Range: 0x18E7F0 -> 0x18E824
unsigned char BCDtoi(unsigned char hex /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18E7F0 -> 0x18E824
        char c[16]; // r29+0x10
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E830 -> 0x0018EA44
*/
// Range: 0x18E830 -> 0x18EA44
void strtosjis(unsigned char * string /* r20 */, unsigned char * dest /* r19 */) {
    /* anonymous block */ {
        // Range: 0x18E830 -> 0x18EA44
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
    Code range: 0x0018EA50 -> 0x0018EC88
*/
// Range: 0x18EA50 -> 0x18EC88
unsigned int xUtil_crc_update(unsigned int crc_accum /* r18 */, char * data /* r17 */, signed int datasize /* r16 */) {
    /* anonymous block */ {
        // Range: 0x18EA50 -> 0x18EC88
        signed int j; // r8
        signed int i; // r10
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018EC90 -> 0x0018ED1C
*/
// Range: 0x18EC90 -> 0x18ED1C
unsigned int xUtil_crc_init() {
    /* anonymous block */ {
        // Range: 0x18EC90 -> 0x18ED1C
        unsigned int crc_accum; // r7
        signed int j; // r6
        signed int i; // r5
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018ED20 -> 0x0018EF88
*/
// Range: 0x18ED20 -> 0x18EF88
char * xUtil_idtag2string(unsigned int srctag /* r2 */, signed int bufidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18ED20 -> 0x18EF88
        char t; // r2
        signed int l; // r29+0xC
        char * uc; // r3
        char * strptr; // r2
        unsigned int tag; // r29+0x8
        char buf[6][10]; // @ 0x002B39B0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018EF90 -> 0x0018EFA4
*/
// Range: 0x18EF90 -> 0x18EFA4
signed int xUtilShutdown() {
    /* anonymous block */ {
        // Range: 0x18EF90 -> 0x18EFA4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018EFB0 -> 0x0018EFE0
*/
// Range: 0x18EFB0 -> 0x18EFE0
signed int xUtilStartup() {
    /* anonymous block */ {
        // Range: 0x18EFB0 -> 0x18EFE0
    }
}


