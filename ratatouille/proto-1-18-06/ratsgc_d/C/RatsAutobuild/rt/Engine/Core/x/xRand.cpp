/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xRand.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C7F48 -> 0x800C8D08
*/
static unsigned int state[624]; // size: 0x9C0, address: 0x80B95438
static int left; // size: 0x4, address: 0x80D60868
static int initf; // size: 0x4, address: 0x80D69670
static unsigned int * next; // size: 0x4, address: 0x80D69674
// Range: 0x800C7F48 -> 0x800C7FE4
void init_genrand(unsigned int s /* r3 */) {
    // Local variables
    int j; // r31

    // References
    // -> static int initf;
    // -> static int left;
    // -> static unsigned int state[624];
}

// Range: 0x800C7FE4 -> 0x800C81C8
void init_by_array(unsigned int * init_key /* r26 */, unsigned int key_length /* r27 */) {
    // Local variables
    int i; // r31
    int k; // r30
    unsigned int j; // r29

    // References
    // -> static int initf;
    // -> static int left;
    // -> static unsigned int state[624];
}

// Range: 0x800C81C8 -> 0x800C8224
void xrand_RandomInit() {
    // Local variables
    unsigned int init[4]; // r1+0x8
    unsigned int length; // r30
}

// Range: 0x800C8224 -> 0x800C82A0
unsigned int xrand_GenRandInt32() {
    // Local variables
    unsigned int y; // r31

    // References
    // -> static unsigned int * next;
    // -> static int left;
}

// Range: 0x800C82A0 -> 0x800C83B8
void next_state() {
    // Local variables
    unsigned int * p; // r31
    int j; // r30

    // References
    // -> static unsigned int state[624];
    // -> static unsigned int * next;
    // -> static int left;
}

static char __FUNCTION__[19]; // size: 0x13, address: 0x80D6086C
// Range: 0x800C83B8 -> 0x800C852C
float xrand_GenRandFloat() {
    // Local variables
    unsigned int y; // r31
    float fRandFloat; // f31

    // References
    // -> static char __FUNCTION__[19];
    // -> static unsigned int * next;
    // -> static int left;
}

static char __FUNCTION__[30]; // size: 0x1E, address: 0x80511560
// Range: 0x800C852C -> 0x800C86B8
float xrand_GenRandFloatLessThanOne() {
    // Local variables
    unsigned int y; // r31
    float fRandFloat; // f31

    // References
    // -> static char __FUNCTION__[30];
    // -> static unsigned int * next;
    // -> static int left;
}

static char __FUNCTION__[19]; // size: 0x13, address: 0x80D6087F
enum xRandomChoiceRule {
    xRandomChoiceRule_ANY_EXCEPT_LAST = 0,
    xRandomChoiceRule_ANY = 1,
    xRandomChoiceRule_ANY_NOT_CHOSEN = 2,
    xRandomChoiceRule_IN_ORDER = 3,
    xRandomChoiceRule_IN_ORDER_RANDOM = 4,
    xRandomChoiceRule_COUNT = 5,
};
// Range: 0x800C86B8 -> 0x800C88FC
unsigned int xrand_RandomChoice(unsigned int & randomChoiceData /* r31 */, unsigned char & randomChoiceDataSize /* r28 */, unsigned int maxCount /* r29 */, enum xRandomChoiceRule rule /* r1+0x8 */) {
    // Local variables
    unsigned int choice; // r30
    unsigned int ithUnplayed; // r27
    unsigned int testMask; // r26

    // References
    // -> static char __FUNCTION__[19];
}

static char __FUNCTION__[25]; // size: 0x19, address: 0x8051157E
// total size: 0x8
struct sector_type {
    // Members
    float yaw; // offset 0x0, size 0x4
    float z; // offset 0x4, size 0x4
};
// Range: 0x800C88FC -> 0x800C8D08
void xRandUniformSpherePoints(struct xVec3 * loc /* r21 */, int amount /* r27 */, float zmin /* f24 */, float zmax /* f18 */) {
    // Local variables
    float z_frac; // f23
    int z_sectors; // r30
    int yaw_sectors; // r26
    int sectors; // r25
    float dyaw; // f28
    float dz; // f27
    struct sector_type * sector_buffer; // r31
    struct sector_type * sector; // r29
    float sector_yaw; // f31
    float sector_z; // f30
    int lat_index; // r24
    int long_index; // r23
    float yaw_range; // f22
    float z_range; // f21
    int i; // r28
    int rand_index; // r22
    float yaw; // f26
    float z; // f29
    float r; // f25
    float x; // f20
    float y; // f19

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

