/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xutil.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800D2548 -> 0x800D3224
*/
static int g_xutilinit; // size: 0x4, address: 0x80C07890
static int g_crc_needinit; // size: 0x4, address: 0x80BFED70
static unsigned int g_crc32_table[256]; // size: 0x400, address: 0x80430840
static unsigned short ascii_table[3][2]; // size: 0xC, address: 0x80BFED74
static unsigned short ascii_k_table[33]; // size: 0x42, address: 0x80430C40
// Range: 0x800D2548 -> 0x800D2594
int xUtilStartup() {
    // References
    // -> static int g_xutilinit;
}

// Range: 0x800D2594 -> 0x800D25DC
int xUtilShutdown() {
    // References
    // -> static int g_xutilinit;
}

static char buf[6][10]; // size: 0x3C, address: 0x80430C84
// Range: 0x800D25DC -> 0x800D2860
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

// Range: 0x800D2860 -> 0x800D2940
unsigned int xUtil_crc_init() {
    // Local variables
    int i; // r5
    int j; // r0
    unsigned int crc_accum; // r0

    // References
    // -> static int g_crc_needinit;
    // -> static unsigned int g_crc32_table[256];
}

// Range: 0x800D2940 -> 0x800D2B2C
unsigned int xUtil_crc_update(unsigned int crc_accum /* r29 */, char * data /* r30 */, int datasize /* r31 */) {
    // Local variables
    int i; // r0
    int j; // r4

    // References
    // -> static unsigned int g_crc32_table[256];
    // -> static int g_crc_needinit;
}

// Range: 0x800D2B2C -> 0x800D2D30
void strtosjis(unsigned char * string /* r29 */, unsigned char * dest /* r30 */) {
    // Local variables
    int i; // r0
    int sjis_code; // r3
    int ascii_code; // r28
    unsigned char stmp; // r31
    unsigned char stmp2; // r27
    unsigned char * dest2; // r3

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
// Range: 0x800D2D30 -> 0x800D2D9C
int xUtil_yesno(float wt_yes /* f31 */) {}

static char __FUNCTION__[14]; // size: 0xE, address: 0x80BFED80
// Range: 0x800D2D9C -> 0x800D2E60
void quicksort_int(void * base /* r28 */, unsigned long num /* r29 */, unsigned long width /* r30 */, unsigned long key_offset /* r31 */) {
    // References
    // -> static char __FUNCTION__[14];
}

// total size: 0x4
struct sort_int_functor {
    // Functions
    static sort_int_functor(unsigned long key_offset);

    static int operator()(void * e1, void * e2) const;

    // Members
    unsigned long key_offset; // offset 0x0, size 0x4
};
// Range: 0x800D2E60 -> 0x800D2E68
// this: r0
static sort_int_functor::sort_int_functor(unsigned long key_offset /* r0 */) {}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80BFED90
// Range: 0x800D2E68 -> 0x800D2F2C
void quicksort_uint(void * base /* r28 */, unsigned long num /* r29 */, unsigned long width /* r30 */, unsigned long key_offset /* r31 */) {
    // References
    // -> static char __FUNCTION__[15];
}

// total size: 0x4
struct sort_uint_functor {
    // Functions
    static sort_uint_functor(unsigned long key_offset);

    static int operator()(void * e1, void * e2) const;

    // Members
    unsigned long key_offset; // offset 0x0, size 0x4
};
// Range: 0x800D2F2C -> 0x800D2F34
// this: r0
static sort_uint_functor::sort_uint_functor(unsigned long key_offset /* r0 */) {}

static char __FUNCTION__[16]; // size: 0x10, address: 0x80BFEDA0
// Range: 0x800D2F34 -> 0x800D2FF8
void quicksort_float(void * base /* r28 */, unsigned long num /* r29 */, unsigned long width /* r30 */, unsigned long key_offset /* r31 */) {
    // References
    // -> static char __FUNCTION__[16];
}

// total size: 0x4
struct sort_float_functor {
    // Functions
    static sort_float_functor(unsigned long key_offset);

    static int operator()(void * e1, void * e2) const;

    // Members
    unsigned long key_offset; // offset 0x0, size 0x4
};
// Range: 0x800D2FF8 -> 0x800D3000
// this: r0
static sort_float_functor::sort_float_functor(unsigned long key_offset /* r0 */) {}

// total size: 0x4
struct sort_str_functor {
    // Members
    unsigned long key_offset; // offset 0x0, size 0x4
};
static char __FUNCTION__[15]; // size: 0xF, address: 0x80BFEDB0
// Range: 0x800D3000 -> 0x800D30C4
void quicksort_istr(void * base /* r28 */, unsigned long num /* r29 */, unsigned long width /* r30 */, unsigned long key_offset /* r31 */) {
    // References
    // -> static char __FUNCTION__[15];
}

// total size: 0x4
struct sort_istr_functor {
    // Functions
    static sort_istr_functor(unsigned long key_offset);

    static int operator()(void * e1, void * e2) const;

    // Members
    unsigned long key_offset; // offset 0x0, size 0x4
};
// Range: 0x800D30C4 -> 0x800D30CC
// this: r0
static sort_istr_functor::sort_istr_functor(unsigned long key_offset /* r0 */) {}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80BFEDC0
// Range: 0x800D30CC -> 0x800D3190
void isort_float(void * base /* r28 */, unsigned long num /* r29 */, unsigned long width /* r30 */, unsigned long key_offset /* r31 */) {
    // References
    // -> static char __FUNCTION__[12];
}

static char __FUNCTION__[6]; // size: 0x6, address: 0x80BFEDCC
// Range: 0x800D3190 -> 0x800D31C0
// this: r0
static int sort_uint_functor::operator()(void * e1 /* r0 */, void * e2 /* r0 */) const {
    // Local variables
    unsigned int uint1; // r4
    unsigned int uint2; // r0
}

// Range: 0x800D31C0 -> 0x800D31D4
// this: r0
static int sort_int_functor::operator()(void * e1 /* r0 */, void * e2 /* r0 */) const {}

// Range: 0x800D31D4 -> 0x800D31F8
// this: r0
static int sort_float_functor::operator()(void * e1 /* r0 */, void * e2 /* r0 */) const {
    // Local variables
    float diff; // r1+0x8
}

// Range: 0x800D31F8 -> 0x800D3224
// this: r0
static int sort_istr_functor::operator()(void * e1 /* r0 */, void * e2 /* r0 */) const {}


