/*
    Compile unit: E:\SD2\Game\flat\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static float world_xmin; // size: 0x4, address: 0x358D54
static float world_ymin; // size: 0x4, address: 0x358D58
static float world_zmin; // size: 0x4, address: 0x358D5C
static float world_xmax; // size: 0x4, address: 0x358D60
static float world_ymax; // size: 0x4, address: 0x358D64
static float world_zmax; // size: 0x4, address: 0x358D68
static float world_xsz; // size: 0x4, address: 0x358D6C
static float world_ysz; // size: 0x4, address: 0x358D70
static float world_zsz; // size: 0x4, address: 0x358D74
static float block_xsz; // size: 0x4, address: 0x358D78
static float block_ysz; // size: 0x4, address: 0x358D7C
static float block_zsz; // size: 0x4, address: 0x358D80
static float one_block_xsz; // size: 0x4, address: 0x358D84
static float one_block_ysz; // size: 0x4, address: 0x358D88
static float one_block_zsz; // size: 0x4, address: 0x358D8C
static float lcl_world_xsz; // size: 0x4, address: 0x358D90
static float lcl_world_ysz; // size: 0x4, address: 0x358D94
static float lcl_world_zsz; // size: 0x4, address: 0x358D98
static float ucl_world_xsz; // size: 0x4, address: 0x358D9C
static float ucl_world_ysz; // size: 0x4, address: 0x358DA0
static float ucl_world_zsz; // size: 0x4, address: 0x358DA4
// total size: 0xC
class xQCData {
    // Members
public:
    unsigned int xmask; // offset 0x0, size 0x4
    unsigned int ymask; // offset 0x4, size 0x4
    unsigned int zmask; // offset 0x8, size 0x4
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

/*
    Compile unit: E:\SD2\Game\flat\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D2FB0 -> 0x001D3114
*/
// Range: 0x1D2FB0 -> 0x1D3114
void xQuickCullForRay(class xQCData * q /* r16 */, class _xRay3 * r /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D2FB0 -> 0x1D3114
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
    Code range: 0x001D3120 -> 0x001D31BC
*/
// Range: 0x1D3120 -> 0x1D31BC
static void xQuickCullCellMerge(class xQCData * o /* r2 */, class xQCData * a /* r2 */, class xQCData * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D3120 -> 0x1D31BC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D31C0 -> 0x001D3258
*/
// Range: 0x1D31C0 -> 0x1D3258
static void xQuickCullCellForVec(class xQCData * c /* r2 */, class _xVec3 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D31C0 -> 0x1D3258
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D3260 -> 0x001D33D4
*/
// Range: 0x1D3260 -> 0x1D33D4
void xQuickCullForBound(class xQCData * q /* r16 */, class _xBound * b /* r7 */) {
    /* anonymous block */ {
        // Range: 0x1D3260 -> 0x1D33D4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D33E0 -> 0x001D3410
*/
// Range: 0x1D33E0 -> 0x1D3410
signed int xQuickCullIsects(class xQCData * a /* r2 */, class xQCData * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D33E0 -> 0x1D3410
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D3410 -> 0x001D342C
*/
// Range: 0x1D3410 -> 0x1D342C
void xQuickCullInit(class _xBox * box /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D3410 -> 0x1D342C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D3430 -> 0x001D3564
*/
// Range: 0x1D3430 -> 0x1D3564
void xQuickCullInit(float xmin /* r29 */, float ymin /* r29 */, float zmin /* r29 */, float xmax /* r29 */, float ymax /* r29 */, float zmax /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1D3430 -> 0x1D3564
    }
}


