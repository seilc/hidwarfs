/*
    Compile unit: E:\SD2\Game\flat\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static float world_xmin; // size: 0x4, address: 0x3583B4
static float world_ymin; // size: 0x4, address: 0x3583B8
static float world_zmin; // size: 0x4, address: 0x3583BC
static float world_xmax; // size: 0x4, address: 0x3583C0
static float world_ymax; // size: 0x4, address: 0x3583C4
static float world_zmax; // size: 0x4, address: 0x3583C8
static float world_xsz; // size: 0x4, address: 0x3583CC
static float world_ysz; // size: 0x4, address: 0x3583D0
static float world_zsz; // size: 0x4, address: 0x3583D4
static float block_xsz; // size: 0x4, address: 0x3583D8
static float block_ysz; // size: 0x4, address: 0x3583DC
static float block_zsz; // size: 0x4, address: 0x3583E0
static float one_block_xsz; // size: 0x4, address: 0x3583E4
static float one_block_ysz; // size: 0x4, address: 0x3583E8
static float one_block_zsz; // size: 0x4, address: 0x3583EC
static float lcl_world_xsz; // size: 0x4, address: 0x3583F0
static float lcl_world_ysz; // size: 0x4, address: 0x3583F4
static float lcl_world_zsz; // size: 0x4, address: 0x3583F8
static float ucl_world_xsz; // size: 0x4, address: 0x3583FC
static float ucl_world_ysz; // size: 0x4, address: 0x358400
static float ucl_world_zsz; // size: 0x4, address: 0x358404
// total size: 0xC
class xQCData {
    // Members
public:
    unsigned int xmask; // offset 0x0, size 0x4
    unsigned int ymask; // offset 0x4, size 0x4
    unsigned int zmask; // offset 0x8, size 0x4
};
// total size: 0x40
class _xMat4x3 {
    // Members
public:
    class _xVec3 right; // offset 0x0, size 0xC
    signed int flags; // offset 0xC, size 0x4
    class _xVec3 up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class _xVec3 at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
    class _xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x18
class _xBox {
    // Members
public:
    class _xVec3 upper; // offset 0x0, size 0xC
    class _xVec3 lower; // offset 0xC, size 0xC
};
// total size: 0x24
class _xBBox {
    // Members
public:
    class _xVec3 center; // offset 0x0, size 0xC
    class _xBox box; // offset 0xC, size 0x18
};
// total size: 0x24
class _xRay3 {
    // Members
public:
    class _xVec3 origin; // offset 0x0, size 0xC
    class _xVec3 dir; // offset 0xC, size 0xC
    float min_t; // offset 0x18, size 0x4
    float max_t; // offset 0x1C, size 0x4
    signed int flags; // offset 0x20, size 0x4
};
// total size: 0x38
class _xBound {
    // Members
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char pad[3]; // offset 0x1, size 0x3
    union { // inferred
        class _xSphere sph; // offset 0x4, size 0x10
        class _xBBox box; // offset 0x4, size 0x24
        class _xCylinder cyl; // offset 0x4, size 0x14
    };
    class _xMat4x3 * mat; // offset 0x28, size 0x4
    class xQCData qcd; // offset 0x2C, size 0xC
};
// total size: 0xC
class _xVec3 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x18
class _xLine3 {
    // Members
public:
    class _xVec3 p1; // offset 0x0, size 0xC
    class _xVec3 p2; // offset 0xC, size 0xC
};
// total size: 0x10
class _xSphere {
    // Members
public:
    class _xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
// total size: 0x14
class _xCylinder {
    // Members
public:
    class _xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};

/*
    Compile unit: E:\SD2\Game\flat\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D2300 -> 0x001D2464
*/
// Range: 0x1D2300 -> 0x1D2464
void xQuickCullForRay(class xQCData * q /* r16 */, class _xRay3 * r /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D2300 -> 0x1D2464
        class xQCData b; // r29+0x60
        class xQCData a; // r29+0x50
        float len; // r1
        class _xLine3 ln; // r29+0x30
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D2470 -> 0x001D250C
*/
// Range: 0x1D2470 -> 0x1D250C
static void xQuickCullCellMerge(class xQCData * o /* r2 */, class xQCData * a /* r2 */, class xQCData * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D2470 -> 0x1D250C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D2510 -> 0x001D25A8
*/
// Range: 0x1D2510 -> 0x1D25A8
static void xQuickCullCellForVec(class xQCData * c /* r2 */, class _xVec3 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D2510 -> 0x1D25A8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D25B0 -> 0x001D2724
*/
// Range: 0x1D25B0 -> 0x1D2724
void xQuickCullForBound(class xQCData * q /* r16 */, class _xBound * b /* r7 */) {
    /* anonymous block */ {
        // Range: 0x1D25B0 -> 0x1D2724
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D2730 -> 0x001D2760
*/
// Range: 0x1D2730 -> 0x1D2760
signed int xQuickCullIsects(class xQCData * a /* r2 */, class xQCData * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D2730 -> 0x1D2760
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D2760 -> 0x001D277C
*/
// Range: 0x1D2760 -> 0x1D277C
void xQuickCullInit(class _xBox * box /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D2760 -> 0x1D277C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D2780 -> 0x001D28B4
*/
// Range: 0x1D2780 -> 0x1D28B4
void xQuickCullInit(float xmin /* r29 */, float ymin /* r29 */, float zmin /* r29 */, float xmax /* r29 */, float ymax /* r29 */, float zmax /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1D2780 -> 0x1D28B4
    }
}


