/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xRand.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800A31D4 -> 0x800A3EC8
*/
static unsigned int state[624]; // size: 0x9C0, address: 0x80A92F20
static int left; // size: 0x4, address: 0x80BFDF30
static int initf; // size: 0x4, address: 0x80C07608
static unsigned int * next; // size: 0x4, address: 0x80C0760C
// Range: 0x800A31D4 -> 0x800A333C
void init_genrand(unsigned int s /* r0 */) {
    // Local variables
    int j; // r4

    // References
    // -> static int initf;
    // -> static int left;
    // -> static unsigned int state[624];
}

// Range: 0x800A333C -> 0x800A348C
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

// Range: 0x800A348C -> 0x800A34D4
void xrand_RandomInit() {
    // Local variables
    unsigned int init[4]; // r1+0x8
}

// Range: 0x800A34D4 -> 0x800A3544
unsigned int xrand_GenRandInt32() {
    // Local variables
    unsigned int y; // r3

    // References
    // -> static unsigned int * next;
    // -> static int left;
}

// Range: 0x800A3544 -> 0x800A3628
void next_state() {
    // Local variables
    unsigned int * p; // r3
    int j; // r8

    // References
    // -> static unsigned int state[624];
    // -> static unsigned int * next;
    // -> static int left;
}

static char __FUNCTION__[19]; // size: 0x13, address: 0x80BFDF34
// Range: 0x800A3628 -> 0x800A3774
float xrand_GenRandFloat() {
    // Local variables
    unsigned int y; // r4
    float fRandFloat; // f31

    // References
    // -> static char __FUNCTION__[19];
    // -> static unsigned int * next;
    // -> static int left;
}

static char __FUNCTION__[30]; // size: 0x1E, address: 0x8042BB90
// Range: 0x800A3774 -> 0x800A38D8
float xrand_GenRandFloatLessThanOne() {
    // Local variables
    unsigned int y; // r4
    float fRandFloat; // f31

    // References
    // -> static char __FUNCTION__[30];
    // -> static unsigned int * next;
    // -> static int left;
}

static char __FUNCTION__[19]; // size: 0x13, address: 0x80BFDF48
enum xRandomChoiceRule {
    xRandomChoiceRule_ANY_EXCEPT_LAST = 0,
    xRandomChoiceRule_ANY = 1,
    xRandomChoiceRule_ANY_NOT_CHOSEN = 2,
    xRandomChoiceRule_IN_ORDER = 3,
    xRandomChoiceRule_IN_ORDER_RANDOM = 4,
    xRandomChoiceRule_COUNT = 5,
};
// Range: 0x800A38D8 -> 0x800A3B04
unsigned int xrand_RandomChoice(unsigned int & randomChoiceData /* r28 */, unsigned char & randomChoiceDataSize /* r29 */, unsigned int maxCount /* r30 */, enum xRandomChoiceRule rule /* r0 */) {
    // Local variables
    unsigned int choice; // r31
    unsigned int ithUnplayed; // r3
    unsigned int testMask; // r5

    // References
    // -> static char __FUNCTION__[19];
}

static char __FUNCTION__[25]; // size: 0x19, address: 0x8042BBB0
// total size: 0x8
struct sector_type {
    // Members
    float yaw; // offset 0x0, size 0x4
    float z; // offset 0x4, size 0x4
};
// Range: 0x800A3B04 -> 0x800A3EC8
void xRandUniformSpherePoints(struct xVec3 * loc /* r27 */, int amount /* r28 */, float zmin /* f31 */, float zmax /* f24 */) {
    // Local variables
    int z_sectors; // r31
    int yaw_sectors; // r30
    int sectors; // r29
    float dyaw; // f28
    float dz; // f27
    struct sector_type * sector_buffer; // r26
    struct sector_type * sector; // r25
    float sector_yaw; // f0
    float sector_z; // f1
    int lat_index; // r4
    int long_index; // r0
    float yaw_range; // f26
    float z_range; // f27
    int i; // r25
    int rand_index; // r0
    float yaw; // f25
    float z; // f28
    float r; // f0
    float x; // f24
    float y; // f2

    // References
    // -> static char __FUNCTION__[25];
}

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

