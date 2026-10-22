/*
    Compile unit: C:\TestBuild\in\Core\x\xRand.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
float scale; // size: 0x4, address: 0x0
static unsigned int state[624]; // size: 0x9C0, address: 0x679A40
static signed int left; // size: 0x4, address: 0x610F70
static signed int initf; // size: 0x4, address: 0x6122D8
static unsigned int * next; // size: 0x4, address: 0x6122DC
// total size: 0x8
class sector_type {
    // Members
public:
    float yaw; // offset 0x0, size 0x4
    float z; // offset 0x4, size 0x4
};
// total size: 0xC
class xVec3 {
    // Members
public:
    union { // inferred
        class RwV3d m_RwV3d; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
        float a[3]; // offset 0x0, size 0xC
    };
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
enum xRandomChoiceRule {
    xRandomChoiceRule_ANY_EXCEPT_LAST = 0,
    xRandomChoiceRule_ANY = 1,
    xRandomChoiceRule_ANY_NOT_CHOSEN = 2,
    xRandomChoiceRule_IN_ORDER = 3,
    xRandomChoiceRule_IN_ORDER_RANDOM = 4,
    xRandomChoiceRule_COUNT = 5,
};

/*
    Compile unit: C:\TestBuild\in\Core\x\xRand.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00298830 -> 0x002991D8
*/
// Range: 0x298830 -> 0x2991D8
void xRandUniformSpherePoints(class xVec3 * loc /* r18 */, signed int amount /* r17 */, float zmin /* r22 */, float zmax /* r29+0x90 */) {
    /* anonymous block */ {
        // Range: 0x298830 -> 0x2991D8
        signed int z_sectors; // r20
        signed int yaw_sectors; // r2
        signed int sectors; // r2
        float dyaw; // r21
        float dz; // r20
        class sector_type * sector_buffer; // r16
        class sector_type * sector; // r4
        float sector_yaw; // r1
        float sector_z; // r29+0x90
        signed int lat_index; // r7
        signed int long_index; // r6
        float yaw_range; // r24
        float z_range; // r23
        signed int i; // r20
        float z; // r29+0x90
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xRand.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002991E0 -> 0x00299924
*/
// Range: 0x2991E0 -> 0x299924
unsigned int xrand_RandomChoice(unsigned int & chosenMask /* r2 */, unsigned char & setBits /* r2 */, unsigned int maxCount /* r2 */, enum xRandomChoiceRule rule /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2991E0 -> 0x299924
        unsigned int choice; // r2
        unsigned int ithUnplayed; // r9
        unsigned int testMask; // r7
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xRand.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00299930 -> 0x00299AD4
*/
// Range: 0x299930 -> 0x299AD4
float xrand_GenRandFloat() {
    /* anonymous block */ {
        // Range: 0x299930 -> 0x299AD4
        unsigned int y; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xRand.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00299AE0 -> 0x00299C4C
*/
// Range: 0x299AE0 -> 0x299C4C
unsigned int xrand_GenRandInt32() {
    /* anonymous block */ {
        // Range: 0x299AE0 -> 0x299C4C
        unsigned int y; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xRand.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00299C50 -> 0x00299E44
*/
// Range: 0x299C50 -> 0x299E44
void xrand_SetRandomSeed(unsigned int nNewSeed /* r2 */) {
    /* anonymous block */ {
        // Range: 0x299C50 -> 0x299E44
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xRand.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00299E50 -> 0x00299EA0
*/
// Range: 0x299E50 -> 0x299EA0
void xrand_RandomInit() {
    /* anonymous block */ {
        // Range: 0x299E50 -> 0x299EA0
        unsigned int init[4]; // r29+0x10
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xRand.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00299EA0 -> 0x0029A1EC
*/
// Range: 0x299EA0 -> 0x29A1EC
void init_by_array(unsigned int * init_key /* r2 */, unsigned int key_length /* r2 */) {
    /* anonymous block */ {
        // Range: 0x299EA0 -> 0x29A1EC
        signed int i; // r10
        signed int k; // r7
        unsigned int j; // r9
    }
}


