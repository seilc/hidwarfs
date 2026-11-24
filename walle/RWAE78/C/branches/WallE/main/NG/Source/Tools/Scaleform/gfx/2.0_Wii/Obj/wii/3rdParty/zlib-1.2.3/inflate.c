/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Obj\wii\3rdParty\zlib-1.2.3\inflate.c
    Producer: MW EABI PPC C-Compiler
    Language: C
    Code range: 0x805E5F34 -> 0x805E79A0
*/
// total size: 0x2530
struct inflate_state {
    // Members
    enum @enum mode; // offset 0x0, size 0x4
    int last; // offset 0x4, size 0x4
    int wrap; // offset 0x8, size 0x4
    int havedict; // offset 0xC, size 0x4
    int flags; // offset 0x10, size 0x4
    unsigned int dmax; // offset 0x14, size 0x4
    unsigned long check; // offset 0x18, size 0x4
    unsigned long total; // offset 0x1C, size 0x4
    struct gz_header_s * head; // offset 0x20, size 0x4
    unsigned int wbits; // offset 0x24, size 0x4
    unsigned int wsize; // offset 0x28, size 0x4
    unsigned int whave; // offset 0x2C, size 0x4
    unsigned int write; // offset 0x30, size 0x4
    unsigned char * window; // offset 0x34, size 0x4
    unsigned long hold; // offset 0x38, size 0x4
    unsigned int bits; // offset 0x3C, size 0x4
    unsigned int length; // offset 0x40, size 0x4
    unsigned int offset; // offset 0x44, size 0x4
    unsigned int extra; // offset 0x48, size 0x4
    code * lencode; // offset 0x4C, size 0x4
    code * distcode; // offset 0x50, size 0x4
    unsigned int lenbits; // offset 0x54, size 0x4
    unsigned int distbits; // offset 0x58, size 0x4
    unsigned int ncode; // offset 0x5C, size 0x4
    unsigned int nlen; // offset 0x60, size 0x4
    unsigned int ndist; // offset 0x64, size 0x4
    unsigned int have; // offset 0x68, size 0x4
    code * next; // offset 0x6C, size 0x4
    unsigned short lens[320]; // offset 0x70, size 0x280
    unsigned short work[288]; // offset 0x2F0, size 0x240
    code codes[2048]; // offset 0x530, size 0x2000
};
enum @enum {
    HEAD = 0,
    FLAGS = 1,
    TIME = 2,
    OS = 3,
    EXLEN = 4,
    EXTRA = 5,
    NAME = 6,
    COMMENT = 7,
    HCRC = 8,
    DICTID = 9,
    DICT = 10,
    TYPE = 11,
    TYPEDO = 12,
    STORED = 13,
    COPY = 14,
    TABLE = 15,
    LENLENS = 16,
    CODELENS = 17,
    LEN = 18,
    LENEXT = 19,
    DIST = 20,
    DISTEXT = 21,
    MATCH = 22,
    LIT = 23,
    CHECK = 24,
    LENGTH = 25,
    DONE = 26,
    BAD = 27,
    MEM = 28,
    SYNC = 29,
};
typedef struct {
    // Members
    unsigned char op; // offset 0x0, size 0x1
    unsigned char bits; // offset 0x1, size 0x1
    unsigned short val; // offset 0x2, size 0x2
} code;
static code lenfix[512]; // size: 0x800, address: 0x806EB648
static code distfix[32]; // size: 0x80, address: 0x806EBE48
static unsigned short order[19]; // size: 0x26, address: 0x806EBEC8
// Range: 0x805E5F34 -> 0x805E5FB4
int inflateReset() {
    // Local variables
    struct inflate_state * state; // r0
}
// Range: 0x805E5FB4 -> 0x805E6104
int inflateInit2_(struct z_stream_s * strm /* r30 */, int windowBits /* r31 */) {
    // Local variables
    struct inflate_state * state; // r4
}
// Range: 0x805E6104 -> 0x805E6118
int inflateInit_(char * version /* r0 */) {
}
// Range: 0x805E6118 -> 0x805E6144
static void fixedtables() {
    // References
    // -> static code distfix[32];
    // -> static code lenfix[512];
}
// Range: 0x805E6144 -> 0x805E62C0
static int updatewindow(struct z_stream_s * strm /* r28 */, unsigned int out /* r29 */) {
    // Local variables
    struct inflate_state * state; // r31
    unsigned int copy; // r30
    unsigned int dist; // r29
}
// Range: 0x805E62C0 -> 0x805E7918
int inflate(struct z_stream_s * strm /* r20 */, int flush /* r21 */) {
    // Local variables
    struct inflate_state * state; // r31
    unsigned char * next; // r30
    unsigned char * put; // r29
    unsigned int have; // r28
    unsigned int left; // r27
    unsigned long hold; // r26
    unsigned int bits; // r25
    unsigned int in; // r24
    unsigned int out; // r23
    unsigned int copy; // r18
    unsigned char * from; // r3
    code this; // r1+0x10
    code last; // r1+0xC
    unsigned int len; // r17
    int ret; // r22
    unsigned char hbuf[4]; // r1+0x8

    // References
    // -> static unsigned short order[19];
}
// Range: 0x805E7918 -> 0x805E79A0
int inflateEnd(struct z_stream_s * strm /* r31 */) {
    // Local variables
    struct inflate_state * state; // r0
}
