/*
    Compile unit: C:\SB\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
// total size: 0x2C
class xIsect {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    float penned; // offset 0x4, size 0x4
    float contained; // offset 0x8, size 0x4
    float lapped; // offset 0xC, size 0x4
    class xVec3 point; // offset 0x10, size 0xC
    class xVec3 norm; // offset 0x1C, size 0xC
    float dist; // offset 0x28, size 0x4
};
// total size: 0x18
class xBox {
    // Members
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
};
// total size: 0xC
class xVec3 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x24
class xTri3 {
    // Members
public:
    class xVec3 p1; // offset 0x0, size 0xC
    class xVec3 p2; // offset 0xC, size 0xC
    class xVec3 p3; // offset 0x18, size 0xC
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
// total size: 0x10
class xPlane {
    // Members
public:
    class xVec3 norm; // offset 0x0, size 0xC
    float d; // offset 0xC, size 0x4
};
// total size: 0x40
class xMat4x3 : public xMat3x3 {
    // Members
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
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

/*
    Compile unit: C:\SB\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AAAB0 -> 0x001AAB8C
*/
// Range: 0x1AAAB0 -> 0x1AAB8C
void iBoxBoundVec(class xBox * o /* r2 */, class xBox * b /* r2 */, class xVec3 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AAAB0 -> 0x1AAB8C
    }
}


/*
    Compile unit: C:\SB\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AAB90 -> 0x001AABC4
*/
// Range: 0x1AAB90 -> 0x1AABC4
void iBoxInitBoundVec(class xBox * b /* r2 */, class xVec3 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AAB90 -> 0x1AABC4
    }
}


/*
    Compile unit: C:\SB\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AABD0 -> 0x001AAF44
*/
// Range: 0x1AABD0 -> 0x1AAF44
void iBoxIsectSphere(class xBox * box /* r2 */, class xSphere * p /* r17 */, class xIsect * isx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AABD0 -> 0x1AAF44
        unsigned int xcode; // r8
        unsigned int ycode; // r7
        unsigned int zcode; // r6
    }
}


/*
    Compile unit: C:\SB\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AAF50 -> 0x001AB1DC
*/
// Range: 0x1AAF50 -> 0x1AB1DC
void iBoxIsectRay(class xBox * b /* r2 */, class xRay3 * r /* r17 */, class xIsect * isx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AAF50 -> 0x1AB1DC
        float t_in; // r29+0x5C
        float t_out; // r29+0x58
    }
}


/*
    Compile unit: C:\SB\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AB1E0 -> 0x001AB2B8
*/
// Range: 0x1AB1E0 -> 0x1AB2B8
static unsigned int ClipPlane(float denom /* r29 */, float numer /* r29 */, float * t_in /* r2 */, float * t_out /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AB1E0 -> 0x1AB2B8
    }
}


/*
    Compile unit: C:\SB\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AB2C0 -> 0x001AB348
*/
// Range: 0x1AB2C0 -> 0x1AB348
void iBoxIsectVec(class xBox * b /* r2 */, class xVec3 * v /* r2 */, class xIsect * isx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AB2C0 -> 0x1AB348
    }
}


/*
    Compile unit: C:\SB\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AB350 -> 0x001ABD58
*/
// Range: 0x1AB350 -> 0x1ABD58
void iBoxVecDist(class xBox * box /* r2 */, class xVec3 * v /* r2 */, class xIsect * isx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AB350 -> 0x1ABD58
    }
}


/*
    Compile unit: C:\SB\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ABD60 -> 0x001ABDE0
*/
// Range: 0x1ABD60 -> 0x1ABDE0
void iCylinderIsectVec(class xCylinder * c /* r2 */, class xVec3 * v /* r2 */, class xIsect * isx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1ABD60 -> 0x1ABDE0
        float b; // r3
    }
}


/*
    Compile unit: C:\SB\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ABDE0 -> 0x001ABF1C
*/
// Range: 0x1ABDE0 -> 0x1ABF1C
void iSphereBoundVec(class xSphere * o /* r2 */, class xSphere * s /* r2 */, class xVec3 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1ABDE0 -> 0x1ABF1C
        float scale; // r2
        class xSphere temp; // r29+0x10
        class xSphere * tp; // r6
        unsigned int usetemp; // r7
    }
}


/*
    Compile unit: C:\SB\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ABF20 -> 0x001ABF48
*/
// Range: 0x1ABF20 -> 0x1ABF48
void iSphereInitBoundVec(class xSphere * s /* r2 */, class xVec3 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1ABF20 -> 0x1ABF48
    }
}


/*
    Compile unit: C:\SB\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ABF50 -> 0x001ABFCC
*/
// Range: 0x1ABF50 -> 0x1ABFCC
void iSphereIsectSphere(class xSphere * s /* r2 */, class xSphere * p /* r2 */, class xIsect * isx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1ABF50 -> 0x1ABFCC
    }
}


/*
    Compile unit: C:\SB\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ABFD0 -> 0x001AC1BC
*/
// Range: 0x1ABFD0 -> 0x1AC1BC
void iSphereIsectRay(class xSphere * s /* r2 */, class xRay3 * r /* r17 */, class xIsect * isx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1ABFD0 -> 0x1AC1BC
        float t_in; // r29+0x3C
        float t_out; // r29+0x38
        unsigned int num; // r2
    }
}


/*
    Compile unit: C:\SB\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AC1C0 -> 0x001AC224
*/
// Range: 0x1AC1C0 -> 0x1AC224
void iSphereIsectVec(class xSphere * s /* r2 */, class xVec3 * v /* r2 */, class xIsect * isx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AC1C0 -> 0x1AC224
    }
}


/*
    Compile unit: C:\SB\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AC230 -> 0x001AC238
*/
// Range: 0x1AC230 -> 0x1AC238
void iMath3Exit() {
    /* anonymous block */ {
        // Range: 0x1AC230 -> 0x1AC238
    }
}


/*
    Compile unit: C:\SB\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AC240 -> 0x001AC248
*/
// Range: 0x1AC240 -> 0x1AC248
void iMath3Init() {
    /* anonymous block */ {
        // Range: 0x1AC240 -> 0x1AC248
    }
}


