/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xutil.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80102020 -> 0x80103910
*/
static int g_xutilinit; // size: 0x4, address: 0x80D69A08
static int g_crc_needinit; // size: 0x4, address: 0x80D61490
static unsigned int g_crc32_table[256]; // size: 0x400, address: 0x805165A8
static unsigned short ascii_table[3][2]; // size: 0xC, address: 0x80D61494
static unsigned short ascii_k_table[33]; // size: 0x42, address: 0x805169A8
// Range: 0x80102020 -> 0x8010206C
int xUtilStartup() {
    // References
    // -> static int g_xutilinit;
}

static int been_here; // size: 0x4, address: 0x80D69A0C
static char __FUNCTION__[14]; // size: 0xE, address: 0x80D614A0
// Range: 0x8010206C -> 0x80102104
int xUtilShutdown() {
    // References
    // -> static int g_xutilinit;
    // -> static int been_here;
    // -> static char __FUNCTION__[14];
}

static char buf[6][10]; // size: 0x3C, address: 0x805169EA
static int been_here; // size: 0x4, address: 0x80D69A10
static char __FUNCTION__[19]; // size: 0x13, address: 0x80D614AE
// Range: 0x80102104 -> 0x8010241C
char * xUtil_idtag2string(unsigned int srctag /* r1+0x8 */, int bufidx /* r28 */) {
    // Local variables
    unsigned int tag; // r1+0x1C
    char * strptr; // r30
    char * uc; // r31
    int is_mot; // r27
    int l; // r1+0x18
    char * c; // r26
    unsigned long l; // r1+0x14
    unsigned long r; // r1+0x10
    char t; // r29

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[19];
    // -> static char buf[6][10];
}

static int been_here; // size: 0x4, address: 0x80D69A14
static char __FUNCTION__[18]; // size: 0x12, address: 0x80D614C1
// Range: 0x8010241C -> 0x80102C40
void xUtil_niceBufDump(char * membuf /* r1+0x10 */, int bytcnt /* r20 */, int ashex /* r21 */, int rptoff /* r1+0x14 */) {
    // Local variables
    int * dabuf; // r1+0x54
    char * cptr; // r25
    int i; // r29
    int j; // r23
    int cidx; // r30
    char ch; // r31
    int idx_stop; // r27
    const char * sfmt; // r24
    int lnbk; // r26
    int spbk; // r22
    char textbuf[32]; // r1+0x58
    int off; // r28

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[18];
}

// Range: 0x80102C40 -> 0x80102CE4
unsigned int xUtil_crc_init() {
    // Local variables
    int i; // r30
    int j; // r29
    unsigned int crc_accum; // r31

    // References
    // -> static int g_crc_needinit;
    // -> static unsigned int g_crc32_table[256];
}

static int been_here; // size: 0x4, address: 0x80D69A18
static char __FUNCTION__[17]; // size: 0x11, address: 0x80D614D3
// Range: 0x80102CE4 -> 0x80102DF8
unsigned int xUtil_crc_update(unsigned int crc_accum /* r30 */, char * data /* r28 */, int datasize /* r1+0x8 */) {
    // Local variables
    int i; // r29
    int j; // r31

    // References
    // -> static unsigned int g_crc32_table[256];
    // -> static int g_crc_needinit;
    // -> static int been_here;
    // -> static char __FUNCTION__[17];
}

// Range: 0x80102DF8 -> 0x80102FA8
void strtosjis(unsigned char * string /* r24 */, unsigned char * dest /* r27 */) {
    // Local variables
    int i; // r26
    int sjis_code; // r25
    int ascii_code; // r31
    unsigned char stmp; // r29
    unsigned char stmp2; // r30
    int ctr; // r23
    unsigned char * dest2; // r28

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
// Range: 0x80102FA8 -> 0x8010301C
int xUtil_yesno(float wt_yes /* f31 */) {}

// Range: 0x8010301C -> 0x80103050
void xUtil_spit_flagbits(unsigned int flag /* r1+0x8 */, int toScreen /* r1+0xC */) {}

enum en_VERBOSE_MSGLEVEL {
    DBML_NONE = 0,
    DBML_RELDISP = 1,
    DBML_DISP = 2,
    DBML_USER = 3,
    DBML_ERR = 4,
    DBML_TIME = 5,
    DBML_WARN = 6,
    DBML_VALID = 7,
    DBML_INFO = 8,
    DBML_DBG = 9,
    DBML_TEST = 10,
    DBML_VDBG = 11,
    DBML_SPEW = 12,
};
// Range: 0x80103050 -> 0x80103418
void xUtil_spit_flagbits(int flag /* r28 */, int toScreen /* r1+0x8 */, int numbytes /* r29 */) {
    // Local variables
    int i; // r31
    enum en_VERBOSE_MSGLEVEL dbml; // r30
}

static char __FUNCTION__[14]; // size: 0xE, address: 0x80D614E4
// Range: 0x80103418 -> 0x801034E0
void quicksort_int(void * base /* r1+0x8 */, unsigned long num /* r1+0xC */, unsigned long width /* r1+0x10 */, unsigned long key_offset /* r30 */) {
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
// Range: 0x801034E0 -> 0x801034E8
// this: r3
static sort_int_functor::sort_int_functor(unsigned long key_offset /* r4 */) {}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80D614F2
// Range: 0x801034E8 -> 0x801035B0
void quicksort_uint(void * base /* r1+0x8 */, unsigned long num /* r1+0xC */, unsigned long width /* r1+0x10 */, unsigned long key_offset /* r30 */) {
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
// Range: 0x801035B0 -> 0x801035B8
// this: r3
static sort_uint_functor::sort_uint_functor(unsigned long key_offset /* r4 */) {}

static char __FUNCTION__[16]; // size: 0x10, address: 0x80D61501
// Range: 0x801035B8 -> 0x80103680
void quicksort_float(void * base /* r1+0x8 */, unsigned long num /* r1+0xC */, unsigned long width /* r1+0x10 */, unsigned long key_offset /* r30 */) {
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
// Range: 0x80103680 -> 0x80103688
// this: r3
static sort_float_functor::sort_float_functor(unsigned long key_offset /* r4 */) {}

// total size: 0x4
struct sort_str_functor {
    // Members
    unsigned long key_offset; // offset 0x0, size 0x4
};
static char __FUNCTION__[15]; // size: 0xF, address: 0x80D61511
// Range: 0x80103688 -> 0x80103750
void quicksort_istr(void * base /* r1+0x8 */, unsigned long num /* r1+0xC */, unsigned long width /* r1+0x10 */, unsigned long key_offset /* r30 */) {
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
// Range: 0x80103750 -> 0x80103758
// this: r3
static sort_istr_functor::sort_istr_functor(unsigned long key_offset /* r4 */) {}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80D61520
// Range: 0x80103758 -> 0x80103820
void isort_float(void * base /* r1+0x8 */, unsigned long num /* r1+0xC */, unsigned long width /* r1+0x10 */, unsigned long key_offset /* r30 */) {
    // References
    // -> static char __FUNCTION__[12];
}

static char __FUNCTION__[6]; // size: 0x6, address: 0x80D6152C
// Range: 0x80103820 -> 0x80103870
// this: r3
static int sort_uint_functor::operator()(void * e1 /* r4 */, void * e2 /* r5 */) const {
    // Local variables
    unsigned int uint1; // r31
    unsigned int uint2; // r30
}

// Range: 0x80103870 -> 0x80103888
// this: r3
static int sort_int_functor::operator()(void * e1 /* r4 */, void * e2 /* r5 */) const {}

// Range: 0x80103888 -> 0x801038B0
// this: r3
static int sort_float_functor::operator()(void * e1 /* r4 */, void * e2 /* r5 */) const {
    // Local variables
    float diff; // r1+0x8
}

// Range: 0x801038B0 -> 0x80103910
// this: r31
static int sort_istr_functor::operator()(void * e1 /* r1+0x8 */, void * e2 /* r1+0xC */) const {
    // Local variables
    const char * s1; // r30
    const char * s2; // r29
}


