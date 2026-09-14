/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
float scale; // size: 0x4, address: 0x0
class xVec3 g_O3; // size: 0xC, address: 0x5E77C0
class xVec3 g_X3; // size: 0xC, address: 0x5E77D0
class xVec3 g_Y3; // size: 0xC, address: 0x5E77E0
class xVec3 g_Z3; // size: 0xC, address: 0x5E77F0
class xVec3 g_NX3; // size: 0xC, address: 0x5E7800
class xVec3 g_NY3; // size: 0xC, address: 0x5E7810
class xVec3 g_NZ3; // size: 0xC, address: 0x5E7820
class xVec3 g_Onez; // size: 0xC, address: 0x0
class xMat4x3 g_I3; // size: 0x40, address: 0x643E60
class xQuat g_IQ; // size: 0x10, address: 0x5E7830
static float gs_fTolerance; // size: 0x4, address: 0x6077D8
// total size: 0x10
class xQuat {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
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
// total size: 0x18
class xBox {
    // Members
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
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
// total size: 0x10
class xVec4 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
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
// total size: 0x1C
class xCapsule {
    // Members
public:
    class xVec3 start; // offset 0x0, size 0xC
    class xVec3 end; // offset 0xC, size 0xC
    float r; // offset 0x18, size 0x4
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0xA0
class xConic {
    // Members
public:
    class xMat4x3 basis; // offset 0x0, size 0x40
    class xMat4x3 invbasis; // offset 0x40, size 0x40
    float coef[5]; // offset 0x80, size 0x14
    class xVec3 coneBasisCenter; // offset 0x94, size 0xC
};

/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C450 -> 0x0019C4D8
*/
// Range: 0x19C450 -> 0x19C4D8
unsigned char xMat4x3Eq(class xMat4x3 & a /* r2 */, class xMat4x3 & b /* r2 */, float tol /* r29 */) {
    /* anonymous block */ {
        // Range: 0x19C450 -> 0x19C4D8
        class xVec4 * va; // r2
        class xVec4 * vb; // r2
        signed int i; // r9
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C4E0 -> 0x0019C528
*/
// Range: 0x19C4E0 -> 0x19C528
unsigned char xVec3Eq(class xVec3 & a /* r2 */, class xVec3 & b /* r2 */, float tol /* r29 */) {
    /* anonymous block */ {
        // Range: 0x19C4E0 -> 0x19C528
        float * fa; // r2
        float * fb; // r2
        signed int i; // r3
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C530 -> 0x0019C650
*/
// Range: 0x19C530 -> 0x19C650
unsigned char xVec3Rotate(class xMat3x3 * o /* r16 */, class xVec3 * a /* r2 */, class xVec3 * b /* r2 */, float l /* r21 */) {
    /* anonymous block */ {
        // Range: 0x19C530 -> 0x19C650
        class xVec3 axis; // r29+0x30
        float angle; // r29+0x40
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C650 -> 0x0019C7C8
*/
// Range: 0x19C650 -> 0x19C7C8
void xQuatDiff(class xQuat * o /* r2 */, class xQuat * a /* r2 */, class xQuat * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19C650 -> 0x19C7C8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C7D0 -> 0x0019C934
*/
// Range: 0x19C7D0 -> 0x19C934
void xQuatMul(class xQuat * o /* r2 */, class xQuat * a /* r2 */, class xQuat * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19C7D0 -> 0x19C934
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C940 -> 0x0019CBF0
*/
// Range: 0x19C940 -> 0x19CBF0
void xQuatSlerp(class xQuat * o /* r18 */, class xQuat * a /* r17 */, class xQuat * b /* r16 */, float t /* r22 */) {
    /* anonymous block */ {
        // Range: 0x19C940 -> 0x19CBF0
        float asph; // r21
        float bsph; // r29+0x60
        float one_sintheta; // r23
        float abdot; // r29+0x60
        class xQuat b2; // r29+0x50
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019CBF0 -> 0x0019CCCC
*/
// Range: 0x19CBF0 -> 0x19CCCC
float xQuatNormalize(class xQuat * o /* r2 */, class xQuat * q /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19CBF0 -> 0x19CCCC
        float one_len; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019CCD0 -> 0x0019CD60
*/
// Range: 0x19CCD0 -> 0x19CD60
void xQuatToAxisAngle(class xQuat * q /* r18 */, class xVec3 * a /* r17 */, float * t /* r16 */) {
    /* anonymous block */ {
        // Range: 0x19CCD0 -> 0x19CD60
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019CD60 -> 0x0019CE0C
*/
// Range: 0x19CD60 -> 0x19CE0C
void xQuatToMat(class xQuat * q /* r2 */, class xMat3x3 * m /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19CD60 -> 0x19CE0C
        float tx; // r29
        float ty; // r29
        float tz; // r29
        float tsx; // r29
        float tsy; // r29
        float tsz; // r29
        float txx; // r29
        float txy; // r29
        float txz; // r29
        float tyy; // r29
        float tyz; // r29
        float tzz; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019CE10 -> 0x0019CED0
*/
// Range: 0x19CE10 -> 0x19CED0
void xQuatFromAxisAngle(class xQuat * q /* r16 */, class xVec3 * a /* r17 */, float t /* r29+0x40 */) {
    /* anonymous block */ {
        // Range: 0x19CE10 -> 0x19CED0
        float t_2; // r20
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019CED0 -> 0x0019D154
*/
// Range: 0x19CED0 -> 0x19D154
void xQuatFromMat(class xQuat * q /* r2 */, class xMat3x3 * m /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19CED0 -> 0x19D154
        float * mp; // r2
        float * qvp; // r2
        float tr; // r29
        float root; // r29
        signed int i; // r11
        signed int j; // r2
        signed int k; // r2
        signed int nxt[3]; // @ 0x00508438
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D160 -> 0x0019D180
*/
// Range: 0x19D160 -> 0x19D180
void xQuatInit(class xQuat * q /* r2 */, float s /* r29 */, class xVec3 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19D160 -> 0x19D180
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D180 -> 0x0019D1EC
*/
// Range: 0x19D180 -> 0x19D1EC
void xMat4x3Mul(class xMat4x3 * o /* r2 */, class xMat4x3 * a /* r2 */, class xMat4x3 * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19D180 -> 0x19D1EC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D1F0 -> 0x0019D29C
*/
// Range: 0x19D1F0 -> 0x19D29C
void xMat4x3Rot(class xMat4x3 * m /* r17 */, class xVec3 * a /* r2 */, float t /* r29+0x70 */, class xVec3 * p /* r16 */) {
    /* anonymous block */ {
        // Range: 0x19D1F0 -> 0x19D29C
        class xMat4x3 temp; // r29+0x30
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D2A0 -> 0x0019D354
*/
// Range: 0x19D2A0 -> 0x19D354
void xMat3x3Tolocal(class xVec3 * o /* r2 */, class xMat3x3 * m /* r2 */, class xVec3 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19D2A0 -> 0x19D354
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D360 -> 0x0019D3C4
*/
// Range: 0x19D360 -> 0x19D3C4
void xMat3x3LMulVec(class xVec3 * o /* r2 */, class xMat3x3 * m /* r2 */, class xVec3 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19D360 -> 0x19D3C4
        float y; // r29
        float z; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D3D0 -> 0x0019D4FC
*/
// Range: 0x19D3D0 -> 0x19D4FC
void xMat3x3Mul(class xMat3x3 * o /* r2 */, class xMat3x3 * a /* r2 */, class xMat3x3 * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19D3D0 -> 0x19D4FC
        class xMat3x3 temp; // r29
        class xMat3x3 * tp; // r7
        unsigned int usetemp; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D500 -> 0x0019D598
*/
// Range: 0x19D500 -> 0x19D598
void xMat3x3Transpose(class xMat3x3 * o /* r2 */, class xMat3x3 * m /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19D500 -> 0x19D598
        float temp; // r29
        float temp; // r29
        float temp; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D5A0 -> 0x0019D6D4
*/
// Range: 0x19D5A0 -> 0x19D6D4
void xMat3x3RMulRotY(class xMat3x3 * o /* r17 */, class xMat3x3 * m /* r16 */, float t /* r20 */) {
    /* anonymous block */ {
        // Range: 0x19D5A0 -> 0x19D6D4
        float temp; // r29+0x40
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D6E0 -> 0x0019D814
*/
// Range: 0x19D6E0 -> 0x19D814
void xMat3x3LMulRotY(class xMat3x3 * o /* r17 */, class xMat3x3 * m /* r16 */, float t /* r20 */) {
    /* anonymous block */ {
        // Range: 0x19D6E0 -> 0x19D814
        float temp; // r29+0x40
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D820 -> 0x0019D84C
*/
// Range: 0x19D820 -> 0x19D84C
void xMat3x3ScaleC(class xMat3x3 * m /* r2 */, float x /* r29 */, float y /* r29 */, float z /* r29 */) {
    /* anonymous block */ {
        // Range: 0x19D820 -> 0x19D84C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D850 -> 0x0019D8D0
*/
// Range: 0x19D850 -> 0x19D8D0
void xMat3x3RotZ(class xMat3x3 * m /* r16 */, float t /* r20 */) {
    /* anonymous block */ {
        // Range: 0x19D850 -> 0x19D8D0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D8D0 -> 0x0019D950
*/
// Range: 0x19D8D0 -> 0x19D950
void xMat3x3RotY(class xMat3x3 * m /* r16 */, float t /* r20 */) {
    /* anonymous block */ {
        // Range: 0x19D8D0 -> 0x19D950
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D950 -> 0x0019D9D0
*/
// Range: 0x19D950 -> 0x19D9D0
void xMat3x3RotX(class xMat3x3 * m /* r16 */, float t /* r20 */) {
    /* anonymous block */ {
        // Range: 0x19D950 -> 0x19D9D0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D9D0 -> 0x0019DB04
*/
// Range: 0x19D9D0 -> 0x19DB04
void xMat3x3RotC(class xMat3x3 * m /* r16 */, float _x /* r23 */, float _y /* r22 */, float _z /* r21 */, float t /* r20 */) {
    /* anonymous block */ {
        // Range: 0x19D9D0 -> 0x19DB04
        float c; // r29+0x30
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019DB10 -> 0x0019DC10
*/
// Range: 0x19DB10 -> 0x19DC10
void xMat3x3Euler(class xMat3x3 * m /* r16 */, float yaw /* r22 */, float pitch /* r21 */, float roll /* r20 */) {
    /* anonymous block */ {
        // Range: 0x19DB10 -> 0x19DC10
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019DC10 -> 0x0019DC20
*/
// Range: 0x19DC10 -> 0x19DC20
void xMat3x3Euler(class xMat3x3 * m /* r2 */, class xVec3 * ypr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19DC10 -> 0x19DC20
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019DC20 -> 0x0019DF5C
*/
// Range: 0x19DC20 -> 0x19DF5C
float xMat3x3LookVec5(class xMat3x3 & mat /* r2 */, float at_x /* r29+0x20 */, float at_y /* r29+0x20 */, float at_z /* r29+0x20 */, class xVec3 & hint_up /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19DC20 -> 0x19DF5C
        float mag2; // r29+0x20
        float imag; // r29+0x20
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019DF60 -> 0x0019E29C
*/
// Range: 0x19DF60 -> 0x19E29C
float xMat3x3LookVec4(class xMat3x3 & mat /* r2 */, float at_x /* r29+0x20 */, float at_y /* r29+0x20 */, float at_z /* r29+0x20 */, class xVec3 & hint_right /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19DF60 -> 0x19E29C
        float mag2; // r29+0x20
        float imag; // r29+0x20
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019E2A0 -> 0x0019E578
*/
// Range: 0x19E2A0 -> 0x19E578
void xMat3x3LookVec2(class xMat3x3 * m /* r16 */, class xVec3 * at /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19E2A0 -> 0x19E578
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019E580 -> 0x0019E79C
*/
// Range: 0x19E580 -> 0x19E79C
float xMat3x3LookVec(class xMat3x3 * m /* r16 */, class xVec3 * at /* r17 */) {
    /* anonymous block */ {
        // Range: 0x19E580 -> 0x19E79C
        float vec_len; // r20
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019E7A0 -> 0x0019E7E8
*/
// Range: 0x19E7A0 -> 0x19E7E8
void xMat4x3MoveLocalAt(class xMat4x3 * m /* r2 */, float mag /* r29 */) {
    /* anonymous block */ {
        // Range: 0x19E7A0 -> 0x19E7E8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019E7F0 -> 0x0019E838
*/
// Range: 0x19E7F0 -> 0x19E838
void xMat4x3MoveLocalUp(class xMat4x3 * m /* r2 */, float mag /* r29 */) {
    /* anonymous block */ {
        // Range: 0x19E7F0 -> 0x19E838
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019E840 -> 0x0019E888
*/
// Range: 0x19E840 -> 0x19E888
void xMat4x3MoveLocalRight(class xMat4x3 * m /* r2 */, float mag /* r29 */) {
    /* anonymous block */ {
        // Range: 0x19E840 -> 0x19E888
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019E890 -> 0x0019E9CC
*/
// Range: 0x19E890 -> 0x19E9CC
void xMat3x3GetEuler(class xMat3x3 * m /* r17 */, class xVec3 * a /* r16 */) {
    /* anonymous block */ {
        // Range: 0x19E890 -> 0x19E9CC
        float pitch; // r21
        float yaw; // r20
        float roll; // r29+0x40
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019E9D0 -> 0x0019EA3C
*/
// Range: 0x19E9D0 -> 0x19EA3C
void xMat3x3GetScale(class xMat3x3 * m /* r2 */, class xVec3 * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19E9D0 -> 0x19EA3C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019EA40 -> 0x0019EA88
*/
// Range: 0x19EA40 -> 0x19EA88
void xMat3x3Normalize(class xMat3x3 * o /* r17 */, class xMat3x3 * m /* r16 */) {
    /* anonymous block */ {
        // Range: 0x19EA40 -> 0x19EA88
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019EA90 -> 0x0019EAE0
*/
// Range: 0x19EA90 -> 0x19EAE0
void xMat3x3Init(class xMat3x3 * m /* r2 */, class xVec3 * _right /* r2 */, class xVec3 * _up /* r2 */, class xVec3 * _at /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19EA90 -> 0x19EAE0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019EAE0 -> 0x0019EBA8
*/
// Range: 0x19EAE0 -> 0x19EBA8
void xBoxInitBoundCapsule(class xBox * b /* r2 */, class xCapsule * c /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19EAE0 -> 0x19EBA8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019EBB0 -> 0x0019ED28
*/
// Range: 0x19EBB0 -> 0x19ED28
void xBoxInitBoundOBB(class xBox * o /* r2 */, class xBox * b /* r2 */, class xMat4x3 * m /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19EBB0 -> 0x19ED28
        class xVec3 boxcent; // r29
        float xmax; // r29+0x10
        float ymax; // r29+0x10
        float zmax; // r29+0x10
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019ED30 -> 0x0019EDF4
*/
// Range: 0x19ED30 -> 0x19EDF4
signed int xPointInBox(class xBox * b /* r2 */, class xVec3 * p /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19ED30 -> 0x19EDF4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019EE00 -> 0x0019F240
*/
// Range: 0x19EE00 -> 0x19F240
void xTri3VecMinDist(class xVec3 * V0 /* r2 */, class xVec3 * V1 /* r2 */, class xVec3 * V2 /* r2 */, class xVec3 * p /* r2 */, float & s /* r2 */, float & t /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19EE00 -> 0x19F240
        float kDiffx; // r29
        float kDiffy; // r29
        float kDiffz; // r29
        float edge0x; // r29
        float edge0y; // r29
        float edge0z; // r29
        float edge1x; // r29
        float edge1y; // r29
        float edge1z; // r29
        float fA00; // r29
        float fA01; // r29
        float fA11; // r29
        float fB0; // r29
        float fB1; // r29
        float fS; // r1
        float fT; // r29
        float fInvDet; // r29
        float fTmp0; // r29
        float fTmp1; // r29
        float fNumer; // r29
        float fDenom; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019F240 -> 0x001A15AC
*/
// Range: 0x19F240 -> 0x1A15AC
void xLine3TriMinDist(class xVec3 * p1 /* r20 */, class xVec3 * p2 /* r19 */, class xVec3 * V0 /* r18 */, class xVec3 * V1 /* r17 */, class xVec3 * V2 /* r16 */, float & t /* r21 */, float & u /* r22 */, float & v /* r23 */) {
    /* anonymous block */ {
        // Range: 0x19F240 -> 0x1A15AC
        float kDiffx; // r29+0xC0
        float kDiffy; // r29+0xC0
        float kDiffz; // r29+0xC0
        float pDirx; // r29+0xC0
        float pDiry; // r29+0xC0
        float pDirz; // r29+0xC0
        float edge0x; // r29+0xC0
        float edge0y; // r29+0xC0
        float edge0z; // r29+0xC0
        float edge1x; // r29+0xC0
        float edge1y; // r29+0xC0
        float edge1z; // r29+0xC0
        float fA00; // r6
        float fA01; // r5
        float fA02; // r4
        float fA11; // r3
        float fA12; // r2
        float fA22; // r1
        float fB0; // r20
        float fB1; // r19
        float fB2; // r18
        float fSqrDist; // r20
        float fSqrDist0; // r29+0xC0
        float fR; // r29+0xBC
        float fS; // r29+0xB8
        float fT; // r29+0xB4
        float fR0; // r29+0xB0
        float fS0; // r29+0xAC
        float fT0; // r29+0xA8
        float kNx; // r29+0xC0
        float kNy; // r29+0xC0
        float kNz; // r29+0xC0
        float fDot; // r29+0xC0
        float tp1x; // r29+0xC0
        float tp1y; // r29+0xC0
        float tp1z; // r29+0xC0
        float tp2x; // r29+0xC0
        float tp2y; // r29+0xC0
        float tp2z; // r29+0xC0
        float fCof00; // r29+0xC0
        float fCof01; // r29+0xC0
        float fCof02; // r29+0xC0
        float fCof12; // r29+0xC0
        float fInvDet; // r29+0xC0
        float fRhs0; // r29+0xC0
        float fRhs1; // r29+0xC0
        float fRhs2; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
        float dx__; // r29+0xC0
        float dy__; // r29+0xC0
        float dz__; // r29+0xC0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A15B0 -> 0x001A1B98
*/
// Range: 0x1A15B0 -> 0x1A1B98
void xLine3LineMinDist(class xVec3 * p1 /* r2 */, class xVec3 * p2 /* r2 */, class xVec3 * q1 /* r2 */, class xVec3 * q2 /* r2 */, float & t /* r2 */, float & u /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A15B0 -> 0x1A1B98
        float kDiffx; // r29
        float kDiffy; // r29
        float kDiffz; // r29
        float pDirx; // r29
        float pDiry; // r29
        float pDirz; // r29
        float qDirx; // r29
        float qDiry; // r29
        float qDirz; // r29
        float fA00; // r29
        float fA01; // r29
        float fA11; // r29
        float fB0; // r29
        float fB1; // r29
        float fS; // r2
        float fT; // r1
        float fTmp; // r29
        float fInvDet; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A1BA0 -> 0x001A1CB8
*/
// Range: 0x1A1BA0 -> 0x1A1CB8
void xLine3VecDist2(class xVec3 * p1 /* r2 */, class xVec3 * p2 /* r2 */, class xVec3 * v /* r2 */, class xIsect * isx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A1BA0 -> 0x1A1CB8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A1CC0 -> 0x001A1D9C
*/
// Range: 0x1A1CC0 -> 0x1A1D9C
void xMath3Init() {
    /* anonymous block */ {
        // Range: 0x1A1CC0 -> 0x1A1D9C
    }
}


