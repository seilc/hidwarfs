/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xString.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80073478 -> 0x800745D4
*/
// Range: 0x80073478 -> 0x800734B8
unsigned int xStrHash(const char * str /* r3 */) {
    // Local variables
    unsigned int i; // r5
    char c; // r4
}

// Range: 0x800734B8 -> 0x80073508
unsigned int xStrHash(const char * s /* r3 */, unsigned long size /* r0 */) {
    // Local variables
    unsigned int value; // r6
    unsigned long i; // r7
    char c; // r5
}

// Range: 0x80073508 -> 0x80073540
unsigned int xStrHashCat(unsigned int prefix /* r3 */, const char * str /* r4 */) {
    // Local variables
    unsigned int i; // r3
    char c; // r3
}

// Range: 0x80073540 -> 0x8007363C
char * xStrTok(char * string /* r3 */, const char * control /* r4 */, char * * nextoken /* r0 */) {
    // Local variables
    unsigned char * str; // r8
    const unsigned char * ctrl; // r4
    unsigned char map[32]; // r1+0x8
    int count; // r0
}

// Range: 0x8007363C -> 0x80073750
unsigned int xStrTokCount(const char * string /* r3 */, const char * control /* r4 */, unsigned int * maxsize /* r0 */) {
    // Local variables
    unsigned int num; // r6
    unsigned int max; // r0
    unsigned int test; // r11
    const unsigned char * str; // r12
    const unsigned char * ctrl; // r4
    unsigned char map[32]; // r1+0x8
    int count; // r0
}

// Range: 0x80073750 -> 0x80073860
char * xStrTokBuffer(const char * string /* r3 */, const char * control /* r4 */, void * buffer /* r0 */) {
    // Local variables
    char * * nextoken; // r0
    char * dest; // r6
    const unsigned char * str; // r10
    const unsigned char * ctrl; // r4
    unsigned char map[32]; // r1+0x8
    int count; // r0
}

// Range: 0x80073860 -> 0x80073930
char * xStristr(const char * str1 /* r3 */, const char * str2 /* r4 */) {
    // Local variables
    char * cp; // r7
    char * s1; // r8
    char * s2; // r9
}

// Range: 0x80073930 -> 0x80073A44
int xStricmp(const char * string1 /* r3 */, const char * string2 /* r4 */) {
    // Local variables
    int result; // r9
}

// Range: 0x80073A44 -> 0x80073AD4
int xMemicmp(void * string1 /* r3 */, void * string2 /* r4 */, unsigned long chars /* r5 */) {
    // Local variables
    const char * str1; // r3
    const char * str2; // r4
    int ret; // r0
}

// Range: 0x80073AD4 -> 0x80073B20
char * xStrupr(char * string /* r3 */) {
    // Local variables
    char * p; // r6
}

// Range: 0x80073B20 -> 0x80073CE0
int xStrParseFloatList(float * dest /* r28 */, const char * strbuf /* r4 */, int max /* r29 */) {
    // Local variables
    char * str; // r31
    int index; // r30
    int digits; // r4
    int negate; // r25
    char * numstart; // r3
}

// Range: 0x80073CE0 -> 0x80073D04
float xStrParseFloat(const char * x /* r0 */) {}

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
// Range: 0x80073D04 -> 0x80073D78
int imemcmp(void * d1 /* r3 */, void * d2 /* r4 */, unsigned long size /* r27 */) {
    // Local variables
    const char * s1; // r30
    const char * s2; // r29
    unsigned long i; // r28
    int c1; // r0
    int c2; // r0
}

// Range: 0x80073D78 -> 0x80073D9C
static int tolower(char c /* r3 */) {}

// Range: 0x80073D9C -> 0x80073DA8
static int tolower(int c /* r3 */) {}

// total size: 0x8
struct substr {
    // Members
    const char * text; // offset 0x0, size 0x4
    unsigned long size; // offset 0x4, size 0x4
};
// Range: 0x80073DA8 -> 0x80073E24
int icompare(const struct substr & s1 /* r30 */, const struct substr & s2 /* r31 */) {
    // Local variables
    int c; // r0
}

// Range: 0x80073E24 -> 0x80073ED4
unsigned int atox(const struct substr & s /* r0 */, unsigned long & read_size /* r0 */) {
    // Local variables
    const char * p; // r6
    unsigned long size; // r7
    unsigned int total; // r3
    char c; // r0
    unsigned int v; // r8
}

// Range: 0x80073ED4 -> 0x800745D4
char * find_char(const struct substr & s /* r0 */, const struct substr & cs /* r0 */) {
    // Local variables
    const char * p; // r4
    const char * d; // r0
    int i; // r6
    int i; // r6
    int i; // r6
    int i; // r6
    int i; // r6
    int i; // r6
    int i; // r6
    int i; // r6
    int i; // r6
    int i; // r6
    int i; // r6
    int i; // r7
    const char * s; // r8
}


