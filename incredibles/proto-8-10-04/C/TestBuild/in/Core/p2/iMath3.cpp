/*
    Compile unit: C:\TestBuild\in\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
// total size: 0x18
class xBox {
    // Members
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
};
// total size: 0x10
class xSphere {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
// total size: 0x24
class xTri3 {
    // Members
public:
    class xVec3 p1; // offset 0x0, size 0xC
    class xVec3 p2; // offset 0xC, size 0xC
    class xVec3 p3; // offset 0x18, size 0xC
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
// total size: 0x14
class xCylinder {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
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
// total size: 0x10
class xPlane {
    // Members
public:
    class xVec3 norm; // offset 0x0, size 0xC
    float d; // offset 0xC, size 0x4
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001607F0 -> 0x001608CC
*/
// Range: 0x1607F0 -> 0x1608CC
void iBoxBoundVec(class xBox * o /* r2 */, class xBox * b /* r2 */, class xVec3 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1607F0 -> 0x1608CC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001608D0 -> 0x001608F8
*/
// Range: 0x1608D0 -> 0x1608F8
void iBoxInitBoundVec(class xBox * b /* r2 */, class xVec3 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1608D0 -> 0x1608F8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00160900 -> 0x00160C50
*/
// Range: 0x160900 -> 0x160C50
void iBoxIsectSphere(class xBox * box /* r2 */, class xSphere * p /* r17 */, class xIsect * isx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x160900 -> 0x160C50
        unsigned int xcode; // r2
        unsigned int ycode; // r2
        unsigned int zcode; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00160C50 -> 0x00160ED4
*/
// Range: 0x160C50 -> 0x160ED4
void iBoxIsectRay(class xBox * b /* r2 */, class xRay3 * r /* r17 */, class xIsect * isx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x160C50 -> 0x160ED4
        float t_in; // r29+0x5C
        float t_out; // r29+0x58
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00160EE0 -> 0x00160FC4
*/
// Range: 0x160EE0 -> 0x160FC4
static unsigned int ClipPlane(float denom /* r29 */, float numer /* r29 */, float * t_in /* r2 */, float * t_out /* r2 */) {
    /* anonymous block */ {
        // Range: 0x160EE0 -> 0x160FC4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00160FD0 -> 0x0016105C
*/
// Range: 0x160FD0 -> 0x16105C
void iBoxIsectVec(class xBox * b /* r2 */, class xVec3 * v /* r2 */, class xIsect * isx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x160FD0 -> 0x16105C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00161060 -> 0x00161958
*/
// Range: 0x161060 -> 0x161958
void iBoxVecDist(class xBox * box /* r2 */, class xVec3 * v /* r2 */, class xIsect * isx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x161060 -> 0x161958
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00161960 -> 0x00161C40
*/
// Range: 0x161960 -> 0x161C40
void iCylinderIsectRay(class xCylinder * c /* r18 */, class xRay3 * r /* r17 */, class xIsect * isx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x161960 -> 0x161C40
        float a; // r1
        float b; // r29+0x50
        float t_in; // r29+0x4C
        float t_out; // r29+0x48
        unsigned int num; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00161C40 -> 0x00161CC4
*/
// Range: 0x161C40 -> 0x161CC4
void iCylinderIsectVec(class xCylinder * c /* r2 */, class xVec3 * v /* r2 */, class xIsect * isx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x161C40 -> 0x161CC4
        float b; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00161CD0 -> 0x00161E18
*/
// Range: 0x161CD0 -> 0x161E18
void iSphereBoundSphere(class xSphere * o /* r2 */, class xSphere * a /* r2 */, class xSphere * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x161CD0 -> 0x161E18
        float scale; // r29+0x20
        class xSphere temp; // r29+0x10
        class xSphere * tp; // r2
        unsigned int usetemp; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00161E20 -> 0x00161F30
*/
// Range: 0x161E20 -> 0x161F30
void iSphereBoundVec(class xSphere * o /* r2 */, class xSphere * s /* r2 */, class xVec3 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x161E20 -> 0x161F30
        float scale; // r29+0x20
        class xSphere temp; // r29+0x10
        class xSphere * tp; // r2
        unsigned int usetemp; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00161F30 -> 0x0016208C
*/
// Range: 0x161F30 -> 0x16208C
void iSphereInitBoundOBB(class xSphere * s /* r2 */, class xBox * b /* r2 */, class xMat4x3 * m /* r2 */) {
    /* anonymous block */ {
        // Range: 0x161F30 -> 0x16208C
        class xVec3 r; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00162090 -> 0x00162124
*/
// Range: 0x162090 -> 0x162124
void iSphereInitBoundBox(class xSphere * s /* r2 */, class xBox * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x162090 -> 0x162124
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00162130 -> 0x00162158
*/
// Range: 0x162130 -> 0x162158
void iSphereInitBoundVec(class xSphere * s /* r2 */, class xVec3 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x162130 -> 0x162158
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00162160 -> 0x001621D4
*/
// Range: 0x162160 -> 0x1621D4
void iSphereIsectSphere(class xSphere * s /* r2 */, class xSphere * p /* r2 */, class xIsect * isx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x162160 -> 0x1621D4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001621E0 -> 0x001623BC
*/
// Range: 0x1621E0 -> 0x1623BC
void iSphereIsectRay(class xSphere * s /* r2 */, class xRay3 * r /* r17 */, class xIsect * isx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1621E0 -> 0x1623BC
        float t_in; // r29+0x3C
        float t_out; // r29+0x38
        unsigned int num; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001623C0 -> 0x00162420
*/
// Range: 0x1623C0 -> 0x162420
void iSphereIsectVec(class xSphere * s /* r2 */, class xVec3 * v /* r2 */, class xIsect * isx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1623C0 -> 0x162420
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00162420 -> 0x00162428
*/
// Range: 0x162420 -> 0x162428
void iMath3Init() {
    /* anonymous block */ {
        // Range: 0x162420 -> 0x162428
    }
}


