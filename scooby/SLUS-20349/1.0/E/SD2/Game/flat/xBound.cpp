/*
    Compile unit: E:\SD2\Game\flat\xBound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
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
// total size: 0x2C
class _xIsect {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    float penned; // offset 0x4, size 0x4
    float contained; // offset 0x8, size 0x4
    float lapped; // offset 0xC, size 0x4
    class _xVec3 point; // offset 0x10, size 0xC
    class _xVec3 norm; // offset 0x1C, size 0xC
    float dist; // offset 0x28, size 0x4
};
// total size: 0x44
class _xCollis {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int oid; // offset 0x4, size 0x4
    void * optr; // offset 0x8, size 0x4
    float dist; // offset 0xC, size 0x4
    class _xVec3 norm; // offset 0x10, size 0xC
    class _xVec3 tohit; // offset 0x1C, size 0xC
    class _xVec3 depen; // offset 0x28, size 0xC
    class _xVec3 hdng; // offset 0x34, size 0xC
    class _iCollis ixtra; // offset 0x40, size 0x4
};
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
// total size: 0x24
class _xBBox {
    // Members
public:
    class _xVec3 center; // offset 0x0, size 0xC
    class _xBox box; // offset 0xC, size 0x18
};
// total size: 0x0
class xModelInstance {};
// total size: 0xC
class _xVec3 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x30
class _xMat3x3 {
    // Members
public:
    class _xVec3 right; // offset 0x0, size 0xC
    signed int flags; // offset 0xC, size 0x4
    class _xVec3 up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class _xVec3 at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
};
// total size: 0x4
class _iCollis {
    // Members
public:
    signed int unknown; // offset 0x0, size 0x4
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
// total size: 0x18
class _xBox {
    // Members
public:
    class _xVec3 upper; // offset 0x0, size 0xC
    class _xVec3 lower; // offset 0xC, size 0xC
};

/*
    Compile unit: E:\SD2\Game\flat\xBound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A71F0 -> 0x001A72F8
*/
// Range: 0x1A71F0 -> 0x1A72F8
void xVecHitsBound(class _xVec3 * v /* r7 */, class _xBound * b /* r17 */, class _xCollis * c /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1A71F0 -> 0x1A72F8
        class _xVec3 lv; // r29+0x60
        class _xIsect isect; // r29+0x30
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xBound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A7300 -> 0x001A736C
*/
// Range: 0x1A7300 -> 0x1A736C
void xRayHitsBound(class _xRay3 * r /* r18 */, class xQCData * q /* r2 */, class _xBound * b /* r17 */, class _xCollis * c /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1A7300 -> 0x1A736C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xBound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A7370 -> 0x001A7558
*/
// Range: 0x1A7370 -> 0x1A7558
void xRayHitsBound(class _xRay3 * r /* r18 */, class _xBound * b /* r17 */, class _xCollis * c /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1A7370 -> 0x1A7558
        float one_ms; // r2
        class _xMat3x3 * dmp; // r19
        class _xMat3x3 mn; // r29+0xC0
        class _xRay3 lr; // r29+0x90
        class _xIsect isect; // r29+0x60
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xBound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A7560 -> 0x001A75AC
*/
// Range: 0x1A7560 -> 0x1A75AC
void xBoundHitsModel(class _xBound * b /* r2 */, class xModelInstance * m /* r2 */, class _xCollis * colls /* r2 */, unsigned char ncolls /* r2 */, float sth /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x1A7560 -> 0x1A75AC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xBound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A75B0 -> 0x001A76A8
*/
// Range: 0x1A75B0 -> 0x1A76A8
void xBoundHitsBound(class _xBound * a /* r18 */, class _xBound * b /* r17 */, class _xCollis * c /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1A75B0 -> 0x1A76A8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xBound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A76B0 -> 0x001A7804
*/
// Range: 0x1A76B0 -> 0x1A7804
void xBoundUpdate(class _xBound * b /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1A76B0 -> 0x1A7804
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xBound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A7810 -> 0x001A7860
*/
// Range: 0x1A7810 -> 0x1A7860
class _xVec3 * xBoundCenter(class _xBound * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A7810 -> 0x1A7860
    }
}


