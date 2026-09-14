/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xRand.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80059F74 -> 0x8005A560
*/
static unsigned int state[624]; // size: 0x9C0, address: 0x80324AE8
static int left; // size: 0x4, address: 0x803BD880
static int initf; // size: 0x4, address: 0x803C12C0
static unsigned int * next; // size: 0x4, address: 0x803C12C4
// Range: 0x80059F74 -> 0x80059FCC
void init_genrand(unsigned int s /* r0 */) {
    // Local variables
    int j; // r8

    // References
    // -> static int initf;
    // -> static int left;
    // -> static unsigned int state[624];
}

// Range: 0x80059FCC -> 0x8005A114
void init_by_array(unsigned int * init_key /* r30 */, unsigned int key_length /* r31 */) {
    // Local variables
    int i; // r4
    int k; // r0
    unsigned int j; // r10

    // References
    // -> static int initf;
    // -> static int left;
    // -> static unsigned int state[624];
}

// Range: 0x8005A114 -> 0x8005A15C
void xrand_RandomInit() {
    // Local variables
    unsigned int init[4]; // r1+0x8
}

// Range: 0x8005A15C -> 0x8005A1CC
unsigned int xrand_GenRandInt32() {
    // Local variables
    unsigned int y; // r3

    // References
    // -> static unsigned int * next;
    // -> static int left;
}

// Range: 0x8005A1CC -> 0x8005A2B0
void next_state() {
    // Local variables
    unsigned int * p; // r3
    int j; // r8

    // References
    // -> static unsigned int state[624];
    // -> static unsigned int * next;
    // -> static int left;
}

// Range: 0x8005A2B0 -> 0x8005A340
float xrand_GenRandFloat() {
    // Local variables
    unsigned int y; // r4

    // References
    // -> static unsigned int * next;
    // -> static int left;
}

// Range: 0x8005A340 -> 0x8005A3E4
float xrand_GenRandFloatLessThanOne() {
    // Local variables
    unsigned int y; // r4
    float fRandFloat; // f1

    // References
    // -> static unsigned int * next;
    // -> static int left;
}

enum xRandomChoiceRule {
    xRandomChoiceRule_ANY_EXCEPT_LAST = 0,
    xRandomChoiceRule_ANY = 1,
    xRandomChoiceRule_ANY_NOT_CHOSEN = 2,
    xRandomChoiceRule_IN_ORDER = 3,
    xRandomChoiceRule_IN_ORDER_RANDOM = 4,
    xRandomChoiceRule_COUNT = 5,
};
// Range: 0x8005A3E4 -> 0x8005A560
unsigned int xrand_RandomChoice(unsigned int & randomChoiceData /* r30 */, unsigned char & randomChoiceDataSize /* r28 */, unsigned int maxCount /* r31 */, enum xRandomChoiceRule rule /* r0 */) {
    // Local variables
    unsigned int choice; // r29
    unsigned int ithUnplayed; // r3
    unsigned int testMask; // r5
}

// total size: 0x8
struct sector_type {
    // Members
    float yaw; // offset 0x0, size 0x4
    float z; // offset 0x4, size 0x4
};
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

