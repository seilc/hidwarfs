/*
    Compile unit: C:\TestBuild\in\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
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
// total size: 0x10
class xSphere {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
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
// total size: 0x18
class xBox {
    // Members
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
};
// total size: 0x10
class xPlane {
    // Members
public:
    class xVec3 norm; // offset 0x0, size 0xC
    float d; // offset 0xC, size 0x4
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
// total size: 0x24
class xTri3 {
    // Members
public:
    class xVec3 p1; // offset 0x0, size 0xC
    class xVec3 p2; // offset 0xC, size 0xC
    class xVec3 p3; // offset 0x18, size 0xC
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
    Code range: 0x00160460 -> 0x0016053C
*/
// Range: 0x160460 -> 0x16053C
void iBoxBoundVec(class xBox * o /* r2 */, class xBox * b /* r2 */, class xVec3 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x160460 -> 0x16053C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00160540 -> 0x00160568
*/
// Range: 0x160540 -> 0x160568
void iBoxInitBoundVec(class xBox * b /* r2 */, class xVec3 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x160540 -> 0x160568
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00160570 -> 0x001608C0
*/
// Range: 0x160570 -> 0x1608C0
void iBoxIsectSphere(class xBox * box /* r2 */, class xSphere * p /* r17 */, class xIsect * isx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x160570 -> 0x1608C0
        unsigned int xcode; // r2
        unsigned int ycode; // r2
        unsigned int zcode; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001608C0 -> 0x00160B44
*/
// Range: 0x1608C0 -> 0x160B44
void iBoxIsectRay(class xBox * b /* r2 */, class xRay3 * r /* r17 */, class xIsect * isx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1608C0 -> 0x160B44
        float t_in; // r29+0x5C
        float t_out; // r29+0x58
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00160B50 -> 0x00160C34
*/
// Range: 0x160B50 -> 0x160C34
static unsigned int ClipPlane(float denom /* r29 */, float numer /* r29 */, float * t_in /* r2 */, float * t_out /* r2 */) {
    /* anonymous block */ {
        // Range: 0x160B50 -> 0x160C34
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00160C40 -> 0x00160CCC
*/
// Range: 0x160C40 -> 0x160CCC
void iBoxIsectVec(class xBox * b /* r2 */, class xVec3 * v /* r2 */, class xIsect * isx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x160C40 -> 0x160CCC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00160CD0 -> 0x001615C8
*/
// Range: 0x160CD0 -> 0x1615C8
void iBoxVecDist(class xBox * box /* r2 */, class xVec3 * v /* r2 */, class xIsect * isx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x160CD0 -> 0x1615C8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001615D0 -> 0x001618B0
*/
// Range: 0x1615D0 -> 0x1618B0
void iCylinderIsectRay(class xCylinder * c /* r18 */, class xRay3 * r /* r17 */, class xIsect * isx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1615D0 -> 0x1618B0
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
    Code range: 0x001618B0 -> 0x00161934
*/
// Range: 0x1618B0 -> 0x161934
void iCylinderIsectVec(class xCylinder * c /* r2 */, class xVec3 * v /* r2 */, class xIsect * isx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1618B0 -> 0x161934
        float b; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00161940 -> 0x00161A88
*/
// Range: 0x161940 -> 0x161A88
void iSphereBoundSphere(class xSphere * o /* r2 */, class xSphere * a /* r2 */, class xSphere * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x161940 -> 0x161A88
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
    Code range: 0x00161A90 -> 0x00161BA0
*/
// Range: 0x161A90 -> 0x161BA0
void iSphereBoundVec(class xSphere * o /* r2 */, class xSphere * s /* r2 */, class xVec3 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x161A90 -> 0x161BA0
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
    Code range: 0x00161BA0 -> 0x00161CFC
*/
// Range: 0x161BA0 -> 0x161CFC
void iSphereInitBoundOBB(class xSphere * s /* r2 */, class xBox * b /* r2 */, class xMat4x3 * m /* r2 */) {
    /* anonymous block */ {
        // Range: 0x161BA0 -> 0x161CFC
        class xVec3 r; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00161D00 -> 0x00161D94
*/
// Range: 0x161D00 -> 0x161D94
void iSphereInitBoundBox(class xSphere * s /* r2 */, class xBox * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x161D00 -> 0x161D94
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00161DA0 -> 0x00161DC8
*/
// Range: 0x161DA0 -> 0x161DC8
void iSphereInitBoundVec(class xSphere * s /* r2 */, class xVec3 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x161DA0 -> 0x161DC8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00161DD0 -> 0x00161E44
*/
// Range: 0x161DD0 -> 0x161E44
void iSphereIsectSphere(class xSphere * s /* r2 */, class xSphere * p /* r2 */, class xIsect * isx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x161DD0 -> 0x161E44
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00161E50 -> 0x0016202C
*/
// Range: 0x161E50 -> 0x16202C
void iSphereIsectRay(class xSphere * s /* r2 */, class xRay3 * r /* r17 */, class xIsect * isx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x161E50 -> 0x16202C
        float t_in; // r29+0x3C
        float t_out; // r29+0x38
        unsigned int num; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00162030 -> 0x00162090
*/
// Range: 0x162030 -> 0x162090
void iSphereIsectVec(class xSphere * s /* r2 */, class xVec3 * v /* r2 */, class xIsect * isx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x162030 -> 0x162090
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00162090 -> 0x00162098
*/
// Range: 0x162090 -> 0x162098
void iMath3Init() {
    /* anonymous block */ {
        // Range: 0x162090 -> 0x162098
    }
}


