/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xString.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800FAE84 -> 0x800FC630
*/
// Range: 0x800FAE84 -> 0x800FAEE0
unsigned int xStrHash(const char * str /* r3 */) {
    // Local variables
    unsigned int i; // r30
    char c; // r31
}

static char __FUNCTION__[9]; // size: 0x9, address: 0x80D612B0
// Range: 0x800FAEE0 -> 0x800FAFBC
unsigned int xStrHash(const char * s /* r31 */, unsigned long size /* r26 */) {
    // Local variables
    unsigned int value; // r29
    unsigned long i; // r28
    char c; // r30

    // References
    // -> static char __FUNCTION__[9];
}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80D612B9
// Range: 0x800FAFBC -> 0x800FB0C8
unsigned int xStrHashCat(unsigned int prefix /* r1+0x8 */, const char * str /* r31 */) {
    // Local variables
    unsigned int i; // r29
    char c; // r30

    // References
    // -> static char __FUNCTION__[12];
}

// Range: 0x800FB0C8 -> 0x800FB1FC
char * xStrTok(char * string /* r3 */, const char * control /* r4 */, char * * nextoken /* r5 */) {
    // Local variables
    unsigned char * str; // r31
    const unsigned char * ctrl; // r30
    unsigned char map[32]; // r1+0x8
    int count; // r29
}

// Range: 0x800FB1FC -> 0x800FB33C
unsigned int xStrTokCount(const char * string /* r3 */, const char * control /* r4 */, unsigned int * maxsize /* r5 */) {
    // Local variables
    unsigned int num; // r27
    unsigned int max; // r26
    unsigned int test; // r29
    const unsigned char * str; // r31
    const unsigned char * ctrl; // r30
    unsigned char map[32]; // r1+0x8
    int count; // r28
}

// Range: 0x800FB33C -> 0x800FB47C
char * xStrTokBuffer(const char * string /* r3 */, const char * control /* r4 */, void * buffer /* r5 */) {
    // Local variables
    char * * nextoken; // r30
    char * dest; // r29
    const unsigned char * str; // r31
    const unsigned char * ctrl; // r28
    unsigned char map[32]; // r1+0x8
    int count; // r27
}

// Range: 0x800FB47C -> 0x800FB590
char * xStristr(const char * str1 /* r3 */, const char * str2 /* r4 */) {
    // Local variables
    char * cp; // r29
    char * s1; // r30
    char * s2; // r31
}

// Range: 0x800FB590 -> 0x800FB734
int xStricmp(const char * string1 /* r3 */, const char * string2 /* r4 */) {
    // Local variables
    int result; // r31
}

// Range: 0x800FB734 -> 0x800FB80C
int xMemicmp(void * string1 /* r3 */, void * string2 /* r4 */, unsigned long chars /* r5 */) {
    // Local variables
    const char * str1; // r31
    const char * str2; // r30
    int ret; // r29
}

// Range: 0x800FB80C -> 0x800FB894
char * xStrupr(char * string /* r3 */) {
    // Local variables
    char * p; // r31
}

// Range: 0x800FB894 -> 0x800FBAB4
int xStrParseFloatList(float * dest /* r29 */, const char * strbuf /* r1+0x8 */, int max /* r1+0xC */) {
    // Local variables
    char * str; // r31
    int index; // r30
    int digits; // r28
    int negate; // r27
    char tmpc; // r26
    char * numstart; // r25
}

// Range: 0x800FBAB4 -> 0x800FBAE0
float xStrParseFloat(const char * x /* r1+0x8 */) {}

// total size: 0xC
struct RwV3d {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0xC
struct xVec3 {
    // Static members
    static struct xVec3 m_NegDoubleVec; // size: 0xC
    static struct xVec3 m_DoubleVec; // size: 0xC
    static struct xVec3 m_NegHalfVec; // size: 0xC
    static struct xVec3 m_HalfVec; // size: 0xC
    static struct xVec3 m_UnitAxisZ; // size: 0xC
    static struct xVec3 m_UnitAxisY; // size: 0xC
    static struct xVec3 m_UnitAxisX; // size: 0xC
    static struct xVec3 m_NegOnes; // size: 0xC
    static struct xVec3 m_Ones; // size: 0xC
    static struct xVec3 m_Null; // size: 0xC

    // Members
    union { // inferred
        struct RwV3d m_RwV3d; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
        float a[3]; // offset 0x0, size 0xC
    };
};
// Range: 0x800FBAE0 -> 0x800FBB64
int imemcmp(void * d1 /* r1+0x8 */, void * d2 /* r1+0xC */, unsigned long size /* r1+0x10 */) {
    // Local variables
    const char * s1; // r31
    const char * s2; // r30
    unsigned long i; // r29
    int c1; // r28
    int c2; // r27
}

// Range: 0x800FBB64 -> 0x800FBB90
static int tolower(char c /* r1+0x8 */) {}

// Range: 0x800FBB90 -> 0x800FBB9C
static int tolower(int c /* r3 */) {}

// total size: 0x8
struct substr {
    // Members
    const char * text; // offset 0x0, size 0x4
    unsigned long size; // offset 0x4, size 0x4
};
// Range: 0x800FBB9C -> 0x800FBC3C
int icompare(const struct substr & s1 /* r30 */, const struct substr & s2 /* r31 */) {
    // Local variables
    unsigned long len; // r27
    int c; // r29
}

// Range: 0x800FBC3C -> 0x800FBD18
unsigned int atox(const struct substr & s /* r3 */, unsigned long & read_size /* r4 */) {
    // Local variables
    const char * p; // r30
    unsigned long size; // r29
    unsigned int total; // r28
    char c; // r31
    unsigned int v; // r27
}

// Range: 0x800FBD18 -> 0x800FC630
char * find_char(const struct substr & s /* r3 */, const struct substr & cs /* r4 */) {
    // Local variables
    const char * p; // r30
    const char * d; // r31
    int i; // r20
    char c; // r1+0xA
    int i; // r19
    char c; // r1+0x9
    int i; // r1+0x60
    char c; // r1+0x8
    int i; // r1+0x5C
    char c; // r21
    int i; // r1+0x58
    char c; // r22
    int i; // r1+0x54
    char c; // r24
    int i; // r1+0x50
    char c; // r25
    int i; // r1+0x4C
    char c; // r26
    int i; // r1+0x48
    char c; // r27
    int i; // r1+0x44
    char c; // r28
    int i; // r1+0x40
    char c; // r29
    int i; // r1+0x3C
    const char * s; // r23
}


