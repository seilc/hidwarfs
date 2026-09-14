/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xutil.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80077704 -> 0x80077EF8
*/
static int g_xutilinit; // size: 0x4, address: 0x803C15F8
static int g_crc_needinit; // size: 0x4, address: 0x803BDA98
static unsigned int g_crc32_table[256]; // size: 0x400, address: 0x802D34C8
static unsigned short ascii_table[3][2]; // size: 0xC, address: 0x803BDA9C
static unsigned short ascii_k_table[33]; // size: 0x42, address: 0x802D38C8
// Range: 0x80077704 -> 0x8007773C
int xUtilStartup() {
    // References
    // -> static int g_xutilinit;
}

// Range: 0x8007773C -> 0x8007774C
int xUtilShutdown() {
    // References
    // -> static int g_xutilinit;
}

static char buf[6][10]; // size: 0x3C, address: 0x803BDAA8
// Range: 0x8007774C -> 0x800779BC
char * xUtil_idtag2string(unsigned int srctag /* r0 */, int bufidx /* r30 */) {
    // Local variables
    unsigned int tag; // r1+0xC
    char * strptr; // r31
    char * uc; // r0
    int l; // r1+0x8
    char t; // r5

    // References
    // -> static char buf[6][10];
}

// Range: 0x800779BC -> 0x80077A20
unsigned int xUtil_crc_init() {
    // Local variables
    int i; // r7
    int j; // r0
    unsigned int crc_accum; // r6

    // References
    // -> static int g_crc_needinit;
    // -> static unsigned int g_crc32_table[256];
}

// Range: 0x80077A20 -> 0x80077AA0
unsigned int xUtil_crc_update(unsigned int crc_accum /* r29 */, char * data /* r30 */, int datasize /* r31 */) {
    // Local variables
    int i; // r0
    int j; // r0

    // References
    // -> static unsigned int g_crc32_table[256];
    // -> static int g_crc_needinit;
}

// Range: 0x80077AA0 -> 0x80077C24
void strtosjis(unsigned char * string /* r29 */, unsigned char * dest /* r30 */) {
    // Local variables
    int i; // r0
    int sjis_code; // r3
    int ascii_code; // r28
    unsigned char stmp; // r31
    unsigned char stmp2; // r27
    unsigned char * dest2; // r4

    // References
    // -> static unsigned short ascii_table[3][2];
    // -> static unsigned short ascii_k_table[33];
}

// total size: 0x2
struct DoubleChar {
    // Members
    unsigned char byte1; // offset 0x0, size 0x1
    unsigned char byte2; // offset 0x1, size 0x1
};
union SJIS_STRUCT {
    unsigned short sjisChar; // offset 0x0, size 0x2
    struct DoubleChar doubleChar; // offset 0x0, size 0x2
};
// Range: 0x80077C24 -> 0x80077C90
int xUtil_yesno(float wt_yes /* f31 */) {}

// Range: 0x80077C90 -> 0x80077CE8
void quicksort_int(void * base /* r29 */, unsigned long num /* r30 */, unsigned long width /* r31 */, unsigned long key_offset /* r6 */) {}

// total size: 0x4
struct sort_int_functor {
    // Functions
    static sort_int_functor(unsigned long key_offset);

    static int operator()(void * e1, void * e2) const;

    // Members
    unsigned long key_offset; // offset 0x0, size 0x4
};
// Range: 0x80077CE8 -> 0x80077CF0
// this: r0
static sort_int_functor::sort_int_functor(unsigned long key_offset /* r0 */) {}

// Range: 0x80077CF0 -> 0x80077D48
void quicksort_uint(void * base /* r29 */, unsigned long num /* r30 */, unsigned long width /* r31 */, unsigned long key_offset /* r6 */) {}

// total size: 0x4
struct sort_uint_functor {
    // Functions
    static sort_uint_functor(unsigned long key_offset);

    static int operator()(void * e1, void * e2) const;

    // Members
    unsigned long key_offset; // offset 0x0, size 0x4
};
// Range: 0x80077D48 -> 0x80077D50
// this: r0
static sort_uint_functor::sort_uint_functor(unsigned long key_offset /* r0 */) {}

// Range: 0x80077D50 -> 0x80077DA8
void quicksort_float(void * base /* r29 */, unsigned long num /* r30 */, unsigned long width /* r31 */, unsigned long key_offset /* r6 */) {}

// total size: 0x4
struct sort_float_functor {
    // Functions
    static sort_float_functor(unsigned long key_offset);

    static int operator()(void * e1, void * e2) const;

    // Members
    unsigned long key_offset; // offset 0x0, size 0x4
};
// Range: 0x80077DA8 -> 0x80077DB0
// this: r0
static sort_float_functor::sort_float_functor(unsigned long key_offset /* r0 */) {}

// total size: 0x4
struct sort_str_functor {
    // Members
    unsigned long key_offset; // offset 0x0, size 0x4
};
// Range: 0x80077DB0 -> 0x80077E08
void quicksort_istr(void * base /* r29 */, unsigned long num /* r30 */, unsigned long width /* r31 */, unsigned long key_offset /* r6 */) {}

// total size: 0x4
struct sort_istr_functor {
    // Functions
    static sort_istr_functor(unsigned long key_offset);

    static int operator()(void * e1, void * e2) const;

    // Members
    unsigned long key_offset; // offset 0x0, size 0x4
};
// Range: 0x80077E08 -> 0x80077E10
// this: r0
static sort_istr_functor::sort_istr_functor(unsigned long key_offset /* r0 */) {}

// Range: 0x80077E10 -> 0x80077E68
void isort_float(void * base /* r29 */, unsigned long num /* r30 */, unsigned long width /* r31 */, unsigned long key_offset /* r6 */) {}

// Range: 0x80077E68 -> 0x80077E94
// this: r0
static int sort_uint_functor::operator()(void * e1 /* r0 */, void * e2 /* r0 */) const {
    // Local variables
    unsigned int uint1; // r3
    unsigned int uint2; // r0
}

// Range: 0x80077E94 -> 0x80077EA8
// this: r0
static int sort_int_functor::operator()(void * e1 /* r0 */, void * e2 /* r0 */) const {}

// Range: 0x80077EA8 -> 0x80077ECC
// this: r0
static int sort_float_functor::operator()(void * e1 /* r0 */, void * e2 /* r0 */) const {
    // Local variables
    float diff; // r1+0x8
}

// Range: 0x80077ECC -> 0x80077EF8
// this: r0
static int sort_istr_functor::operator()(void * e1 /* r0 */, void * e2 /* r0 */) const {}


