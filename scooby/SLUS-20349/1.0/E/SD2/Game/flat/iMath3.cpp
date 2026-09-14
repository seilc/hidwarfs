/*
    Compile unit: E:\SD2\Game\flat\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
// total size: 0x18
class _xBox {
    // Members
public:
    class _xVec3 upper; // offset 0x0, size 0xC
    class _xVec3 lower; // offset 0xC, size 0xC
};
// total size: 0x24
class _xTri3 {
    // Members
public:
    class _xVec3 p1; // offset 0x0, size 0xC
    class _xVec3 p2; // offset 0xC, size 0xC
    class _xVec3 p3; // offset 0x18, size 0xC
};
// total size: 0xC
class _xVec3 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x10
class _xSphere {
    // Members
public:
    class _xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
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
// total size: 0x10
class _xPlane {
    // Members
public:
    class _xVec3 norm; // offset 0x0, size 0xC
    float d; // offset 0xC, size 0x4
};

/*
    Compile unit: E:\SD2\Game\flat\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00123CE0 -> 0x00123D8C
*/
// Range: 0x123CE0 -> 0x123D8C
void iBoxBoundVec(class _xBox * o /* r2 */, class _xBox * b /* r2 */, class _xVec3 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x123CE0 -> 0x123D8C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00123D90 -> 0x00123DC4
*/
// Range: 0x123D90 -> 0x123DC4
void iBoxInitBoundVec(class _xBox * b /* r2 */, class _xVec3 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x123D90 -> 0x123DC4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00123DD0 -> 0x0012416C
*/
// Range: 0x123DD0 -> 0x12416C
void iBoxIsectSphere(class _xBox * box /* r2 */, class _xSphere * p /* r17 */, class _xIsect * isx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x123DD0 -> 0x12416C
        unsigned int zcode; // r2
        unsigned int ycode; // r2
        unsigned int xcode; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00124170 -> 0x00124444
*/
// Range: 0x124170 -> 0x124444
void iBoxIsectRay(class _xBox * b /* r2 */, class _xRay3 * r /* r21 */, class _xIsect * isx /* r20 */) {
    /* anonymous block */ {
        // Range: 0x124170 -> 0x124444
        float t_out; // r29+0x9C
        float t_in; // r29+0x98
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00124450 -> 0x00124540
*/
// Range: 0x124450 -> 0x124540
static unsigned int ClipPlane(float denom /* r29 */, float numer /* r29 */, float * t_in /* r2 */, float * t_out /* r2 */) {
    /* anonymous block */ {
        // Range: 0x124450 -> 0x124540
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00124540 -> 0x001245DC
*/
// Range: 0x124540 -> 0x1245DC
void iBoxIsectVec(class _xBox * b /* r2 */, class _xVec3 * v /* r2 */, class _xIsect * isx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x124540 -> 0x1245DC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001245E0 -> 0x00125030
*/
// Range: 0x1245E0 -> 0x125030
void iBoxVecDist(class _xBox * box /* r2 */, class _xVec3 * v /* r2 */, class _xIsect * isx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1245E0 -> 0x125030
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00125030 -> 0x00125334
*/
// Range: 0x125030 -> 0x125334
void iCylinderIsectRay(class _xCylinder * c /* r18 */, class _xRay3 * r /* r17 */, class _xIsect * isx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x125030 -> 0x125334
        unsigned int num; // r2
        float t_out; // r29+0x4C
        float t_in; // r29+0x48
        float b; // r1
        float a; // r29+0x50
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00125340 -> 0x001253E4
*/
// Range: 0x125340 -> 0x1253E4
void iCylinderIsectVec(class _xCylinder * c /* r17 */, class _xVec3 * v /* r2 */, class _xIsect * isx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x125340 -> 0x1253E4
        float b; // r1
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001253F0 -> 0x00125530
*/
// Range: 0x1253F0 -> 0x125530
void iSphereInitBoundOBB(class _xSphere * s /* r17 */, class _xBox * b /* r2 */, class _xMat4x3 * m /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1253F0 -> 0x125530
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00125530 -> 0x001255E0
*/
// Range: 0x125530 -> 0x1255E0
void iSphereIsectSphere(class _xSphere * s /* r18 */, class _xSphere * p /* r17 */, class _xIsect * isx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x125530 -> 0x1255E0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001255E0 -> 0x001257D0
*/
// Range: 0x1255E0 -> 0x1257D0
void iSphereIsectRay(class _xSphere * s /* r2 */, class _xRay3 * r /* r17 */, class _xIsect * isx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1255E0 -> 0x1257D0
        unsigned int num; // r2
        float t_out; // r29+0x3C
        float t_in; // r29+0x38
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001257D0 -> 0x0012585C
*/
// Range: 0x1257D0 -> 0x12585C
void iSphereIsectVec(class _xSphere * s /* r17 */, class _xVec3 * v /* r2 */, class _xIsect * isx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1257D0 -> 0x12585C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00125860 -> 0x00125868
*/
// Range: 0x125860 -> 0x125868
void iMath3Exit() {
    /* anonymous block */ {
        // Range: 0x125860 -> 0x125868
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00125870 -> 0x00125878
*/
// Range: 0x125870 -> 0x125878
void iMath3Init() {
    /* anonymous block */ {
        // Range: 0x125870 -> 0x125878
    }
}


