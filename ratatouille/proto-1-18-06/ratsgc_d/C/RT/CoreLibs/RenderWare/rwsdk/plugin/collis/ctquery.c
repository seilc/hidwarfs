/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\plugin\collis\ctquery.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803DCC5C -> 0x803DCDBC
*/
static char __dbFunctionName[27]; // size: 0x1B, address: 0x804E7810
// total size: 0x8
struct RpCollSectorBBoxItNodeInfo {
    // Members
    struct RpCollSector * sector; // offset 0x0, size 0x4
    unsigned int clipFlags; // offset 0x4, size 0x4
};
// total size: 0x148
struct RpCollSectorBBoxIt {
    // Members
    struct RpCollTree * tree; // offset 0x0, size 0x4
    struct RwBBox bbox; // offset 0x4, size 0x18
    struct RwBBox clipBBox; // offset 0x1C, size 0x18
    struct RpCollSector dummy; // offset 0x34, size 0x8
    struct RpCollSectorBBoxItNodeInfo stack[33]; // offset 0x3C, size 0x108
    struct RpCollSectorBBoxItNodeInfo * curr; // offset 0x144, size 0x4
};
// Range: 0x803DCC5C -> 0x803DCD0C
int RpCollSectorBBoxItFinished(struct RpCollSectorBBoxIt * it /* r31 */) {
    // References
    // -> static char __dbFunctionName[27];
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804E782B
// total size: 0xC
struct RpCollSectorLineItNodeInfo {
    // Members
    struct RpCollSector * sector; // offset 0x0, size 0x4
    float pa; // offset 0x4, size 0x4
    float pb; // offset 0x8, size 0x4
};
// total size: 0x1CC
struct RpCollSectorLineIt {
    // Members
    struct RpCollTree * tree; // offset 0x0, size 0x4
    struct RwV3d start; // offset 0x4, size 0xC
    struct RwV3d delta; // offset 0x10, size 0xC
    struct RwV3d recip; // offset 0x1C, size 0xC
    struct RwV3d padding; // offset 0x28, size 0xC
    struct RpCollSector dummy; // offset 0x34, size 0x8
    struct RpCollSectorLineItNodeInfo stack[33]; // offset 0x3C, size 0x18C
    struct RpCollSectorLineItNodeInfo * curr; // offset 0x1C8, size 0x4
};
// Range: 0x803DCD0C -> 0x803DCDBC
int RpCollSectorLineItFinished(struct RpCollSectorLineIt * it /* r31 */) {
    // References
    // -> static char __dbFunctionName[27];
}

// total size: 0x18
struct RpPlaneSector {
    // Members
    int type; // offset 0x0, size 0x4
    float value; // offset 0x4, size 0x4
    struct RpSector * leftSubTree; // offset 0x8, size 0x4
    struct RpSector * rightSubTree; // offset 0xC, size 0x4
    float leftValue; // offset 0x10, size 0x4
    float rightValue; // offset 0x14, size 0x4
};
// total size: 0x18
struct RwLine {
    // Members
    struct RwV3d start; // offset 0x0, size 0xC
    struct RwV3d end; // offset 0xC, size 0xC
};

