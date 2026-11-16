/*
    Compile unit: C:\SB\Core\x\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class xQCControl xqc_def_ctrl; // size: 0x3C, address: 0x5A0C10
// total size: 0x20
class xQCData {
    // Members
public:
    signed char xmin; // offset 0x0, size 0x1
    signed char ymin; // offset 0x1, size 0x1
    signed char zmin; // offset 0x2, size 0x1
    signed char zmin_dup; // offset 0x3, size 0x1
    signed char xmax; // offset 0x4, size 0x1
    signed char ymax; // offset 0x5, size 0x1
    signed char zmax; // offset 0x6, size 0x1
    signed char zmax_dup; // offset 0x7, size 0x1
    class xVec3 min; // offset 0x8, size 0xC
    class xVec3 max; // offset 0x14, size 0xC
};
// total size: 0x3C
class xQCControl {
    // Members
public:
    float world_xmin; // offset 0x0, size 0x4
    float world_ymin; // offset 0x4, size 0x4
    float world_zmin; // offset 0x8, size 0x4
    float world_xmax; // offset 0xC, size 0x4
    float world_ymax; // offset 0x10, size 0x4
    float world_zmax; // offset 0x14, size 0x4
    float world_xsz; // offset 0x18, size 0x4
    float world_ysz; // offset 0x1C, size 0x4
    float world_zsz; // offset 0x20, size 0x4
    float scale_x; // offset 0x24, size 0x4
    float scale_y; // offset 0x28, size 0x4
    float scale_z; // offset 0x2C, size 0x4
    float center_x; // offset 0x30, size 0x4
    float center_y; // offset 0x34, size 0x4
    float center_z; // offset 0x38, size 0x4
};
// total size: 0xC
class xVec3 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x18
class xBox {
    // Members
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
};
// total size: 0x24
class xBBox {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    class xBox box; // offset 0xC, size 0x18
};
// total size: 0x24
class xRay3 {
    // Members
public:
    class xVec3 origin; // offset 0x0, size 0xC
    class xVec3 dir; // offset 0xC, size 0xC
    float min_t; // offset 0x18, size 0x4
    float max_t; // offset 0x1C, size 0x4
    signed int flags; // offset 0x20, size 0x4
};
// total size: 0x40
class xMat4x3 : public xMat3x3 {
    // Members
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x10
class xSphere {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
// total size: 0x14
class xCylinder {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
// total size: 0x18
class xLine3 {
    // Members
public:
    class xVec3 p1; // offset 0x0, size 0xC
    class xVec3 p2; // offset 0xC, size 0xC
};
// total size: 0x30
class xMat3x3 {
    // Members
public:
    class xVec3 right; // offset 0x0, size 0xC
    signed int flags; // offset 0xC, size 0x4
    class xVec3 up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class xVec3 at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
};
// total size: 0x4C
class xBound {
    // Members
public:
    class xQCData qcd; // offset 0x0, size 0x20
    unsigned char type; // offset 0x20, size 0x1
    unsigned char pad[3]; // offset 0x21, size 0x3
    union { // inferred
        class xSphere sph; // offset 0x24, size 0x10
        class xBBox box; // offset 0x24, size 0x24
        class xCylinder cyl; // offset 0x24, size 0x14
    };
    class xMat4x3 * mat; // offset 0x48, size 0x4
};

/*
    Compile unit: C:\SB\Core\x\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F9B40 -> 0x001F9B6C
*/
// Range: 0x1F9B40 -> 0x1F9B6C
void xQuickCullForEverything(class xQCData * q /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F9B40 -> 0x1F9B6C
    }
}


/*
    Compile unit: C:\SB\Core\x\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F9B70 -> 0x001F9BBC
*/
// Range: 0x1F9B70 -> 0x1F9BBC
void xQuickCullForOBB(class xQCControl * ctrl /* r17 */, class xQCData * q /* r16 */, class xBox * b /* r2 */, class xMat4x3 * m /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F9B70 -> 0x1F9BBC
        class xBox worldbox; // r29+0x30
    }
}


/*
    Compile unit: C:\SB\Core\x\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F9BC0 -> 0x001F9CA4
*/
// Range: 0x1F9BC0 -> 0x1F9CA4
void xQuickCullForBox(class xQCControl * ctrl /* r18 */, class xQCData * q /* r16 */, class xBox * box /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1F9BC0 -> 0x1F9CA4
        class xQCData a; // r29+0x60
        class xQCData b; // r29+0x40
    }
}


/*
    Compile unit: C:\SB\Core\x\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F9CB0 -> 0x001F9E28
*/
// Range: 0x1F9CB0 -> 0x1F9E28
void xQuickCullForSphere(class xQCControl * ctrl /* r17 */, class xQCData * q /* r16 */, class xSphere * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F9CB0 -> 0x1F9E28
        class xVec3 v1; // r29+0x80
        class xVec3 v2; // r29+0x70
        float radius_adjusted; // r1
        class xQCData a; // r29+0x50
        class xQCData b; // r29+0x30
    }
}


/*
    Compile unit: C:\SB\Core\x\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F9E30 -> 0x001FA044
*/
// Range: 0x1F9E30 -> 0x1FA044
void xQuickCullForRay(class xQCControl * ctrl /* r17 */, class xQCData * q /* r16 */, class xRay3 * r /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F9E30 -> 0x1FA044
        class xLine3 ln; // r29+0x70
        float len; // r1
        class xQCData a; // r29+0x50
        class xQCData b; // r29+0x30
    }
}


/*
    Compile unit: C:\SB\Core\x\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA050 -> 0x001FA130
*/
// Range: 0x1FA050 -> 0x1FA130
void xQuickCullForLine(class xQCControl * ctrl /* r18 */, class xQCData * q /* r16 */, class xLine3 * ln /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1FA050 -> 0x1FA130
        class xQCData a; // r29+0x60
        class xQCData b; // r29+0x40
    }
}


/*
    Compile unit: C:\SB\Core\x\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA130 -> 0x001FA270
*/
// Range: 0x1FA130 -> 0x1FA270
static void xQuickCullCellForVec(class xQCControl * ctrl /* r2 */, class xQCData * c /* r2 */, class xVec3 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FA130 -> 0x1FA270
    }
}


/*
    Compile unit: C:\SB\Core\x\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA270 -> 0x001FA2E4
*/
// Range: 0x1FA270 -> 0x1FA2E4
void xQuickCullForBound(class xQCControl * ctrl /* r2 */, class xQCData * q /* r2 */, class xBound * b /* r7 */) {
    /* anonymous block */ {
        // Range: 0x1FA270 -> 0x1FA2E4
    }
}


/*
    Compile unit: C:\SB\Core\x\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA2F0 -> 0x001FA318
*/
// Range: 0x1FA2F0 -> 0x1FA318
signed int xQuickCullIsects(class xQCData * a /* r2 */, class xQCData * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FA2F0 -> 0x1FA318
        signed int result; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA320 -> 0x001FA33C
*/
// Range: 0x1FA320 -> 0x1FA33C
void xQuickCullInit(class xQCControl * ctrl /* r2 */, class xBox * box /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FA320 -> 0x1FA33C
    }
}


/*
    Compile unit: C:\SB\Core\x\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA340 -> 0x001FA43C
*/
// Range: 0x1FA340 -> 0x1FA43C
void xQuickCullInit(class xQCControl * ctrl /* r2 */, float xmin /* r29 */, float ymin /* r29 */, float zmin /* r29 */, float xmax /* r29 */, float ymax /* r29 */, float zmax /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1FA340 -> 0x1FA43C
    }
}


