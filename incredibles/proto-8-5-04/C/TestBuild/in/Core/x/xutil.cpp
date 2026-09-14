/*
    Compile unit: C:\TestBuild\in\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
float scale; // size: 0x4, address: 0x0
static signed int g_xutilinit; // size: 0x4, address: 0x608BA8
static signed int g_crc_needinit; // size: 0x4, address: 0x607828
static unsigned int g_crc32_table[256]; // size: 0x400, address: 0x66B630
static unsigned short ascii_table[3][2]; // size: 0xC, address: 0x508640
static unsigned short ascii_k_table[33]; // size: 0x42, address: 0x508650
static unsigned short ascii_special_table[33]; // size: 0x42, address: 0x0
char _ctype_[]; // size: 0x0, address: 0x5E3180
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
    Code range: 0x001C1ED0 -> 0x001C1EEC
*/
// Range: 0x1C1ED0 -> 0x1C1EEC
void isort_float(void * base /* r2 */, unsigned int num /* r2 */, unsigned int width /* r2 */, unsigned int key_offset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C1ED0 -> 0x1C1EEC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C1EF0 -> 0x001C1F0C
*/
// Range: 0x1C1EF0 -> 0x1C1F0C
void quicksort_istr(void * base /* r2 */, unsigned int num /* r2 */, unsigned int width /* r2 */, unsigned int key_offset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C1EF0 -> 0x1C1F0C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C1F10 -> 0x001C1F2C
*/
// Range: 0x1C1F10 -> 0x1C1F2C
void quicksort_float(void * base /* r2 */, unsigned int num /* r2 */, unsigned int width /* r2 */, unsigned int key_offset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C1F10 -> 0x1C1F2C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C1F30 -> 0x001C1F4C
*/
// Range: 0x1C1F30 -> 0x1C1F4C
void quicksort_uint(void * base /* r2 */, unsigned int num /* r2 */, unsigned int width /* r2 */, unsigned int key_offset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C1F30 -> 0x1C1F4C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C1F50 -> 0x001C1F6C
*/
// Range: 0x1C1F50 -> 0x1C1F6C
void quicksort_int(void * base /* r2 */, unsigned int num /* r2 */, unsigned int width /* r2 */, unsigned int key_offset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C1F50 -> 0x1C1F6C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C1F70 -> 0x001C201C
*/
// Range: 0x1C1F70 -> 0x1C201C
signed int xUtil_yesno(float wt_yes /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1C1F70 -> 0x1C201C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C2020 -> 0x001C2070
*/
// Range: 0x1C2020 -> 0x1C2070
unsigned char itoBCD(unsigned short dec /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C2020 -> 0x1C2070
        signed int ones; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C2070 -> 0x001C20C0
*/
// Range: 0x1C2070 -> 0x1C20C0
unsigned char itoBCD(unsigned char dec /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C2070 -> 0x1C20C0
        signed int ones; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C20C0 -> 0x001C20F4
*/
// Range: 0x1C20C0 -> 0x1C20F4
unsigned char BCDtoi(unsigned char hex /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C20C0 -> 0x1C20F4
        char c[16]; // r29+0x10
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C2100 -> 0x001C2330
*/
// Range: 0x1C2100 -> 0x1C2330
void strtosjis(unsigned char * string /* r20 */, unsigned char * dest /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1C2100 -> 0x1C2330
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
    Code range: 0x001C2330 -> 0x001C2550
*/
// Range: 0x1C2330 -> 0x1C2550
unsigned int xUtil_crc_update(unsigned int crc_accum /* r18 */, char * data /* r17 */, signed int datasize /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1C2330 -> 0x1C2550
        signed int i; // r2
        signed int j; // r4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C2550 -> 0x001C25DC
*/
// Range: 0x1C2550 -> 0x1C25DC
unsigned int xUtil_crc_init() {
    /* anonymous block */ {
        // Range: 0x1C2550 -> 0x1C25DC
        signed int i; // r8
        signed int j; // r7
        unsigned int crc_accum; // r6
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C25E0 -> 0x001C28F4
*/
// Range: 0x1C25E0 -> 0x1C28F4
char * xUtil_idtag2string(unsigned int srctag /* r2 */, signed int bufidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C25E0 -> 0x1C28F4
        unsigned int tag; // r29+0xC
        char * strptr; // r2
        char * uc; // r3
        signed int l; // r29+0x8
        char t; // r2
        char buf[6][10]; // @ 0x0066BA30
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C2900 -> 0x001C2910
*/
// Range: 0x1C2900 -> 0x1C2910
signed int xUtilShutdown() {
    /* anonymous block */ {
        // Range: 0x1C2900 -> 0x1C2910
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C2910 -> 0x001C294C
*/
// Range: 0x1C2910 -> 0x1C294C
signed int xUtilStartup() {
    /* anonymous block */ {
        // Range: 0x1C2910 -> 0x1C294C
    }
}


