/*
    Compile unit: C:\TestBuild\in\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
float scale; // size: 0x4, address: 0x0
static signed int g_xutilinit; // size: 0x4, address: 0x611FB8
static signed int g_crc_needinit; // size: 0x4, address: 0x610C2C
static unsigned int g_crc32_table[256]; // size: 0x400, address: 0x662AB0
static unsigned short ascii_table[3][2]; // size: 0xC, address: 0x510D30
static unsigned short ascii_k_table[33]; // size: 0x42, address: 0x510D40
static unsigned short ascii_special_table[33]; // size: 0x42, address: 0x0
char _ctype_[]; // size: 0x0, address: 0x5EBB00
// total size: 0x4
class sort_uint_functor {
    // Members
public:
    unsigned int key_offset; // offset 0x0, size 0x4
};
// total size: 0x4
class sort_str_functor {
    // Members
public:
    unsigned int key_offset; // offset 0x0, size 0x4
};
// total size: 0x4
class sort_istr_functor {
    // Members
public:
    unsigned int key_offset; // offset 0x0, size 0x4
};
// total size: 0x2
class DoubleChar {
    // Members
public:
    unsigned char byte1; // offset 0x0, size 0x1
    unsigned char byte2; // offset 0x1, size 0x1
};
// total size: 0x4
class sort_float_functor {
    // Members
public:
    unsigned int key_offset; // offset 0x0, size 0x4
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
// total size: 0x4
class sort_int_functor {
    // Members
public:
    unsigned int key_offset; // offset 0x0, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C2960 -> 0x001C297C
*/
// Range: 0x1C2960 -> 0x1C297C
void isort_float(void * base /* r2 */, unsigned int num /* r2 */, unsigned int width /* r2 */, unsigned int key_offset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C2960 -> 0x1C297C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C2980 -> 0x001C299C
*/
// Range: 0x1C2980 -> 0x1C299C
void quicksort_istr(void * base /* r2 */, unsigned int num /* r2 */, unsigned int width /* r2 */, unsigned int key_offset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C2980 -> 0x1C299C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C29A0 -> 0x001C29BC
*/
// Range: 0x1C29A0 -> 0x1C29BC
void quicksort_float(void * base /* r2 */, unsigned int num /* r2 */, unsigned int width /* r2 */, unsigned int key_offset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C29A0 -> 0x1C29BC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C29C0 -> 0x001C29DC
*/
// Range: 0x1C29C0 -> 0x1C29DC
void quicksort_uint(void * base /* r2 */, unsigned int num /* r2 */, unsigned int width /* r2 */, unsigned int key_offset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C29C0 -> 0x1C29DC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C29E0 -> 0x001C29FC
*/
// Range: 0x1C29E0 -> 0x1C29FC
void quicksort_int(void * base /* r2 */, unsigned int num /* r2 */, unsigned int width /* r2 */, unsigned int key_offset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C29E0 -> 0x1C29FC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C2A00 -> 0x001C2AAC
*/
// Range: 0x1C2A00 -> 0x1C2AAC
signed int xUtil_yesno(float wt_yes /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1C2A00 -> 0x1C2AAC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C2AB0 -> 0x001C2B00
*/
// Range: 0x1C2AB0 -> 0x1C2B00
unsigned char itoBCD(unsigned short dec /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C2AB0 -> 0x1C2B00
        signed int ones; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C2B00 -> 0x001C2B50
*/
// Range: 0x1C2B00 -> 0x1C2B50
unsigned char itoBCD(unsigned char dec /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C2B00 -> 0x1C2B50
        signed int ones; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C2B50 -> 0x001C2B84
*/
// Range: 0x1C2B50 -> 0x1C2B84
unsigned char BCDtoi(unsigned char hex /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C2B50 -> 0x1C2B84
        char c[16]; // r29+0x10
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C2B90 -> 0x001C2DC0
*/
// Range: 0x1C2B90 -> 0x1C2DC0
void strtosjis(unsigned char * string /* r20 */, unsigned char * dest /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1C2B90 -> 0x1C2DC0
        signed int i; // r5
        signed int sjis_code; // r4
        signed int ascii_code; // r18
        unsigned char stmp; // r17
        unsigned char stmp2; // r16
        unsigned char * dest2; // r4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C2DC0 -> 0x001C2FE0
*/
// Range: 0x1C2DC0 -> 0x1C2FE0
unsigned int xUtil_crc_update(unsigned int crc_accum /* r18 */, char * data /* r17 */, signed int datasize /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1C2DC0 -> 0x1C2FE0
        signed int i; // r2
        signed int j; // r4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C2FE0 -> 0x001C306C
*/
// Range: 0x1C2FE0 -> 0x1C306C
unsigned int xUtil_crc_init() {
    /* anonymous block */ {
        // Range: 0x1C2FE0 -> 0x1C306C
        signed int i; // r8
        signed int j; // r7
        unsigned int crc_accum; // r6
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C3070 -> 0x001C3384
*/
// Range: 0x1C3070 -> 0x1C3384
char * xUtil_idtag2string(unsigned int srctag /* r2 */, signed int bufidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C3070 -> 0x1C3384
        unsigned int tag; // r29+0xC
        char * strptr; // r2
        char * uc; // r2
        signed int l; // r29+0x8
        char t; // r2
        char buf[6][10]; // @ 0x00662EB0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C3390 -> 0x001C33A0
*/
// Range: 0x1C3390 -> 0x1C33A0
signed int xUtilShutdown() {
    /* anonymous block */ {
        // Range: 0x1C3390 -> 0x1C33A0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C33A0 -> 0x001C33DC
*/
// Range: 0x1C33A0 -> 0x1C33DC
signed int xUtilStartup() {
    /* anonymous block */ {
        // Range: 0x1C33A0 -> 0x1C33DC
    }
}


