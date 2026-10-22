/*
    Compile unit: C:\TestBuild\in\Core\x\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class xQCControl xqc_def_ctrl; // size: 0x3C, address: 0x65D050
// total size: 0x14
class xCylinder {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
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
// total size: 0x18
class xBox {
    // Members
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
};
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
// total size: 0x18
class xLine3 {
    // Members
public:
    class xVec3 p1; // offset 0x0, size 0xC
    class xVec3 p2; // offset 0xC, size 0xC
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
// total size: 0x24
class xBBox {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    class xBox box; // offset 0xC, size 0x18
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
// total size: 0x40
class xMat4x3 : public xMat3x3 {
    // Members
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x10
class xSphere {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
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

/*
    Compile unit: C:\TestBuild\in\Core\x\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AA8A0 -> 0x001AA8CC
*/
// Range: 0x1AA8A0 -> 0x1AA8CC
void xQuickCullForEverything(class xQCData * q /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AA8A0 -> 0x1AA8CC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AA8D0 -> 0x001AABEC
*/
// Range: 0x1AA8D0 -> 0x1AABEC
void xQuickCullForBox(class xQCControl * ctrl /* r2 */, class xQCData * q /* r2 */, class xBox * box /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AA8D0 -> 0x1AABEC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AABF0 -> 0x001AAF28
*/
// Range: 0x1AABF0 -> 0x1AAF28
void xQuickCullForSphere(class xQCControl * ctrl /* r2 */, class xQCData * q /* r2 */, class xSphere * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AABF0 -> 0x1AAF28
        float radius_adjusted; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AAF30 -> 0x001AB2E0
*/
// Range: 0x1AAF30 -> 0x1AB2E0
void xQuickCullForRay(class xQCControl * ctrl /* r2 */, class xQCData * q /* r2 */, class xRay3 * r /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AAF30 -> 0x1AB2E0
        float len; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AB2E0 -> 0x001AB5FC
*/
// Range: 0x1AB2E0 -> 0x1AB5FC
void xQuickCullForLine(class xQCControl * ctrl /* r2 */, class xQCData * q /* r2 */, class xLine3 * ln /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AB2E0 -> 0x1AB5FC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AB600 -> 0x001AC30C
*/
// Range: 0x1AB600 -> 0x1AC30C
void xQuickCullForBound(class xQCControl * ctrl /* r17 */, class xQCData * q /* r16 */, class xBound * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AB600 -> 0x1AC30C
        class xBox box; // r29+0x50
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AC310 -> 0x001AC338
*/
// Range: 0x1AC310 -> 0x1AC338
signed int xQuickCullIsects(class xQCData * a /* r2 */, class xQCData * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AC310 -> 0x1AC338
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AC340 -> 0x001AC35C
*/
// Range: 0x1AC340 -> 0x1AC35C
void xQuickCullInit(class xQCControl * ctrl /* r2 */, class xBox * box /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AC340 -> 0x1AC35C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AC360 -> 0x001AC468
*/
// Range: 0x1AC360 -> 0x1AC468
void xQuickCullInit(class xQCControl * ctrl /* r2 */, float xmin /* r29 */, float ymin /* r29 */, float zmin /* r29 */, float xmax /* r29 */, float ymax /* r29 */, float zmax /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1AC360 -> 0x1AC468
    }
}


