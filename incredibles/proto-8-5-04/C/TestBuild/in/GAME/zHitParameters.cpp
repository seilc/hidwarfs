/*
    Compile unit: C:\TestBuild\in\GAME\zHitParameters.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
float scale; // size: 0x4, address: 0x0
class zHitSourceMapEntry zHitSourceMap[22]; // size: 0xB0, address: 0x5E8F70
unsigned int zHitSourceCCs[21]; // size: 0x54, address: 0x5091F0
unsigned int zHitTargetCCs[7]; // size: 0x1C, address: 0x509250
enum zHitSource {
    zHS_EVENT = 0,
    zHS_GENERAL = 1,
    zHS_PROJECTILE = 2,
    zHS_EXPLOSION = 3,
    zHS_LASER = 4,
    zHS_ENERGY = 5,
    zHS_FIRE = 6,
    zHS_SURFACE = 7,
    zHS_MELEE_HIGH = 8,
    zHS_MELEE_MID = 9,
    zHS_MELEE_LOW = 10,
    zHS_MELEE_UP = 11,
    zHS_MELEE_BACK = 12,
    zHS_MELEE_DIZZY = 13,
    zHS_THROW = 14,
    zHS_WATER = 15,
    zHS_DEATHPLANE = 16,
    zHS_INCREDI = 17,
    zHS_KNOCKBACK = 18,
    zHS_LASERBEAM = 19,
    zHS_INFINITE_FALL = 20,
    zHS_COUNT = 21,
    zHS_FORCE_INT = -1,
};
// total size: 0x8
class zHitSourceMapEntry {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum zHitSource sourcetype; // offset 0x4, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\GAME\zHitParameters.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FD580 -> 0x001FD640
*/
// Range: 0x1FD580 -> 0x1FD640
signed int getSourceCCIdx(unsigned int value /* r21 */) {
    /* anonymous block */ {
        // Range: 0x1FD580 -> 0x1FD640
        signed int i; // r20
        char tag[4]; // r29+0x7C
    }
}


