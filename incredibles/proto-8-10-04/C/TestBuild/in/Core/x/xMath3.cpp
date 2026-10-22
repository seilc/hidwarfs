/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
float scale; // size: 0x4, address: 0x0
class xVec3 g_O3; // size: 0xC, address: 0x5F0120
class xVec3 g_X3; // size: 0xC, address: 0x5F0130
class xVec3 g_Y3; // size: 0xC, address: 0x5F0140
class xVec3 g_Z3; // size: 0xC, address: 0x5F0150
class xVec3 g_NX3; // size: 0xC, address: 0x5F0160
class xVec3 g_NY3; // size: 0xC, address: 0x5F0170
class xVec3 g_NZ3; // size: 0xC, address: 0x5F0180
class xVec3 g_Onez; // size: 0xC, address: 0x0
class xMat4x3 g_I3; // size: 0x40, address: 0x64D280
class xQuat g_IQ; // size: 0x10, address: 0x5F0190
static float gs_fTolerance; // size: 0x4, address: 0x610BD8
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
// total size: 0x18
class xBox {
    // Members
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
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
// total size: 0xA0
class xConic {
    // Members
public:
    class xMat4x3 basis; // offset 0x0, size 0x40
    class xMat4x3 invbasis; // offset 0x40, size 0x40
    float coef[5]; // offset 0x80, size 0x14
    class xVec3 coneBasisCenter; // offset 0x94, size 0xC
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
// total size: 0x10
class xSphere {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
// total size: 0x40
class xMat4x3 : public xMat3x3 {
    // Members
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x10
class xQuat {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
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

/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019CB60 -> 0x0019CBE8
*/
// Range: 0x19CB60 -> 0x19CBE8
unsigned char xMat4x3Eq(class xMat4x3 & a /* r2 */, class xMat4x3 & b /* r2 */, float tol /* r29 */) {
    /* anonymous block */ {
        // Range: 0x19CB60 -> 0x19CBE8
        class xVec4 * va; // r2
        class xVec4 * vb; // r2
        signed int i; // r9
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019CBF0 -> 0x0019CC38
*/
// Range: 0x19CBF0 -> 0x19CC38
unsigned char xVec3Eq(class xVec3 & a /* r2 */, class xVec3 & b /* r2 */, float tol /* r29 */) {
    /* anonymous block */ {
        // Range: 0x19CBF0 -> 0x19CC38
        float * fa; // r2
        float * fb; // r2
        signed int i; // r3
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019CC40 -> 0x0019CD60
*/
// Range: 0x19CC40 -> 0x19CD60
unsigned char xVec3Rotate(class xMat3x3 * o /* r16 */, class xVec3 * a /* r2 */, class xVec3 * b /* r2 */, float l /* r21 */) {
    /* anonymous block */ {
        // Range: 0x19CC40 -> 0x19CD60
        class xVec3 axis; // r29+0x30
        float angle; // r29+0x40
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019CD60 -> 0x0019CED8
*/
// Range: 0x19CD60 -> 0x19CED8
void xQuatDiff(class xQuat * o /* r2 */, class xQuat * a /* r2 */, class xQuat * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19CD60 -> 0x19CED8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019CEE0 -> 0x0019D044
*/
// Range: 0x19CEE0 -> 0x19D044
void xQuatMul(class xQuat * o /* r2 */, class xQuat * a /* r2 */, class xQuat * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19CEE0 -> 0x19D044
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D050 -> 0x0019D300
*/
// Range: 0x19D050 -> 0x19D300
void xQuatSlerp(class xQuat * o /* r18 */, class xQuat * a /* r17 */, class xQuat * b /* r16 */, float t /* r22 */) {
    /* anonymous block */ {
        // Range: 0x19D050 -> 0x19D300
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
    Code range: 0x0019D300 -> 0x0019D3DC
*/
// Range: 0x19D300 -> 0x19D3DC
float xQuatNormalize(class xQuat * o /* r2 */, class xQuat * q /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19D300 -> 0x19D3DC
        float one_len; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D3E0 -> 0x0019D470
*/
// Range: 0x19D3E0 -> 0x19D470
void xQuatToAxisAngle(class xQuat * q /* r18 */, class xVec3 * a /* r17 */, float * t /* r16 */) {
    /* anonymous block */ {
        // Range: 0x19D3E0 -> 0x19D470
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D470 -> 0x0019D51C
*/
// Range: 0x19D470 -> 0x19D51C
void xQuatToMat(class xQuat * q /* r2 */, class xMat3x3 * m /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19D470 -> 0x19D51C
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
    Code range: 0x0019D520 -> 0x0019D5E0
*/
// Range: 0x19D520 -> 0x19D5E0
void xQuatFromAxisAngle(class xQuat * q /* r16 */, class xVec3 * a /* r17 */, float t /* r29+0x40 */) {
    /* anonymous block */ {
        // Range: 0x19D520 -> 0x19D5E0
        float t_2; // r20
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D5E0 -> 0x0019D864
*/
// Range: 0x19D5E0 -> 0x19D864
void xQuatFromMat(class xQuat * q /* r2 */, class xMat3x3 * m /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19D5E0 -> 0x19D864
        float * mp; // r2
        float * qvp; // r2
        float tr; // r29
        float root; // r29
        signed int i; // r11
        signed int j; // r2
        signed int k; // r2
        signed int nxt[3]; // @ 0x00510B28
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D870 -> 0x0019D890
*/
// Range: 0x19D870 -> 0x19D890
void xQuatInit(class xQuat * q /* r2 */, float s /* r29 */, class xVec3 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19D870 -> 0x19D890
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D890 -> 0x0019D8FC
*/
// Range: 0x19D890 -> 0x19D8FC
void xMat4x3Mul(class xMat4x3 * o /* r2 */, class xMat4x3 * a /* r2 */, class xMat4x3 * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19D890 -> 0x19D8FC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D900 -> 0x0019D9AC
*/
// Range: 0x19D900 -> 0x19D9AC
void xMat4x3Rot(class xMat4x3 * m /* r17 */, class xVec3 * a /* r2 */, float t /* r29+0x70 */, class xVec3 * p /* r16 */) {
    /* anonymous block */ {
        // Range: 0x19D900 -> 0x19D9AC
        class xMat4x3 temp; // r29+0x30
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D9B0 -> 0x0019DA64
*/
// Range: 0x19D9B0 -> 0x19DA64
void xMat3x3Tolocal(class xVec3 * o /* r2 */, class xMat3x3 * m /* r2 */, class xVec3 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19D9B0 -> 0x19DA64
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019DA70 -> 0x0019DAD4
*/
// Range: 0x19DA70 -> 0x19DAD4
void xMat3x3LMulVec(class xVec3 * o /* r2 */, class xMat3x3 * m /* r2 */, class xVec3 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19DA70 -> 0x19DAD4
        float y; // r29
        float z; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019DAE0 -> 0x0019DC0C
*/
// Range: 0x19DAE0 -> 0x19DC0C
void xMat3x3Mul(class xMat3x3 * o /* r2 */, class xMat3x3 * a /* r2 */, class xMat3x3 * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19DAE0 -> 0x19DC0C
        class xMat3x3 temp; // r29
        class xMat3x3 * tp; // r7
        unsigned int usetemp; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019DC10 -> 0x0019DCA8
*/
// Range: 0x19DC10 -> 0x19DCA8
void xMat3x3Transpose(class xMat3x3 * o /* r2 */, class xMat3x3 * m /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19DC10 -> 0x19DCA8
        float temp; // r29
        float temp; // r29
        float temp; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019DCB0 -> 0x0019DDE4
*/
// Range: 0x19DCB0 -> 0x19DDE4
void xMat3x3RMulRotY(class xMat3x3 * o /* r17 */, class xMat3x3 * m /* r16 */, float t /* r20 */) {
    /* anonymous block */ {
        // Range: 0x19DCB0 -> 0x19DDE4
        float temp; // r29+0x40
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019DDF0 -> 0x0019DF24
*/
// Range: 0x19DDF0 -> 0x19DF24
void xMat3x3LMulRotY(class xMat3x3 * o /* r17 */, class xMat3x3 * m /* r16 */, float t /* r20 */) {
    /* anonymous block */ {
        // Range: 0x19DDF0 -> 0x19DF24
        float temp; // r29+0x40
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019DF30 -> 0x0019DF5C
*/
// Range: 0x19DF30 -> 0x19DF5C
void xMat3x3ScaleC(class xMat3x3 * m /* r2 */, float x /* r29 */, float y /* r29 */, float z /* r29 */) {
    /* anonymous block */ {
        // Range: 0x19DF30 -> 0x19DF5C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019DF60 -> 0x0019DFE0
*/
// Range: 0x19DF60 -> 0x19DFE0
void xMat3x3RotZ(class xMat3x3 * m /* r16 */, float t /* r20 */) {
    /* anonymous block */ {
        // Range: 0x19DF60 -> 0x19DFE0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019DFE0 -> 0x0019E060
*/
// Range: 0x19DFE0 -> 0x19E060
void xMat3x3RotY(class xMat3x3 * m /* r16 */, float t /* r20 */) {
    /* anonymous block */ {
        // Range: 0x19DFE0 -> 0x19E060
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019E060 -> 0x0019E0E0
*/
// Range: 0x19E060 -> 0x19E0E0
void xMat3x3RotX(class xMat3x3 * m /* r16 */, float t /* r20 */) {
    /* anonymous block */ {
        // Range: 0x19E060 -> 0x19E0E0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019E0E0 -> 0x0019E214
*/
// Range: 0x19E0E0 -> 0x19E214
void xMat3x3RotC(class xMat3x3 * m /* r16 */, float _x /* r23 */, float _y /* r22 */, float _z /* r21 */, float t /* r20 */) {
    /* anonymous block */ {
        // Range: 0x19E0E0 -> 0x19E214
        float c; // r29+0x30
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019E220 -> 0x0019E320
*/
// Range: 0x19E220 -> 0x19E320
void xMat3x3Euler(class xMat3x3 * m /* r16 */, float yaw /* r22 */, float pitch /* r21 */, float roll /* r20 */) {
    /* anonymous block */ {
        // Range: 0x19E220 -> 0x19E320
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019E320 -> 0x0019E330
*/
// Range: 0x19E320 -> 0x19E330
void xMat3x3Euler(class xMat3x3 * m /* r2 */, class xVec3 * ypr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19E320 -> 0x19E330
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019E330 -> 0x0019E66C
*/
// Range: 0x19E330 -> 0x19E66C
float xMat3x3LookVec5(class xMat3x3 & mat /* r2 */, float at_x /* r29+0x20 */, float at_y /* r29+0x20 */, float at_z /* r29+0x20 */, class xVec3 & hint_up /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19E330 -> 0x19E66C
        float mag2; // r29+0x20
        float imag; // r29+0x20
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019E670 -> 0x0019E9AC
*/
// Range: 0x19E670 -> 0x19E9AC
float xMat3x3LookVec4(class xMat3x3 & mat /* r2 */, float at_x /* r29+0x20 */, float at_y /* r29+0x20 */, float at_z /* r29+0x20 */, class xVec3 & hint_right /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19E670 -> 0x19E9AC
        float mag2; // r29+0x20
        float imag; // r29+0x20
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019E9B0 -> 0x0019EC88
*/
// Range: 0x19E9B0 -> 0x19EC88
void xMat3x3LookVec2(class xMat3x3 * m /* r16 */, class xVec3 * at /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19E9B0 -> 0x19EC88
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019EC90 -> 0x0019EEAC
*/
// Range: 0x19EC90 -> 0x19EEAC
float xMat3x3LookVec(class xMat3x3 * m /* r16 */, class xVec3 * at /* r17 */) {
    /* anonymous block */ {
        // Range: 0x19EC90 -> 0x19EEAC
        float vec_len; // r20
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019EEB0 -> 0x0019EEF8
*/
// Range: 0x19EEB0 -> 0x19EEF8
void xMat4x3MoveLocalAt(class xMat4x3 * m /* r2 */, float mag /* r29 */) {
    /* anonymous block */ {
        // Range: 0x19EEB0 -> 0x19EEF8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019EF00 -> 0x0019EF48
*/
// Range: 0x19EF00 -> 0x19EF48
void xMat4x3MoveLocalUp(class xMat4x3 * m /* r2 */, float mag /* r29 */) {
    /* anonymous block */ {
        // Range: 0x19EF00 -> 0x19EF48
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019EF50 -> 0x0019EF98
*/
// Range: 0x19EF50 -> 0x19EF98
void xMat4x3MoveLocalRight(class xMat4x3 * m /* r2 */, float mag /* r29 */) {
    /* anonymous block */ {
        // Range: 0x19EF50 -> 0x19EF98
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019EFA0 -> 0x0019F0DC
*/
// Range: 0x19EFA0 -> 0x19F0DC
void xMat3x3GetEuler(class xMat3x3 * m /* r17 */, class xVec3 * a /* r16 */) {
    /* anonymous block */ {
        // Range: 0x19EFA0 -> 0x19F0DC
        float pitch; // r21
        float yaw; // r20
        float roll; // r29+0x40
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019F0E0 -> 0x0019F14C
*/
// Range: 0x19F0E0 -> 0x19F14C
void xMat3x3GetScale(class xMat3x3 * m /* r2 */, class xVec3 * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19F0E0 -> 0x19F14C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019F150 -> 0x0019F198
*/
// Range: 0x19F150 -> 0x19F198
void xMat3x3Normalize(class xMat3x3 * o /* r17 */, class xMat3x3 * m /* r16 */) {
    /* anonymous block */ {
        // Range: 0x19F150 -> 0x19F198
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019F1A0 -> 0x0019F1F0
*/
// Range: 0x19F1A0 -> 0x19F1F0
void xMat3x3Init(class xMat3x3 * m /* r2 */, class xVec3 * _right /* r2 */, class xVec3 * _up /* r2 */, class xVec3 * _at /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19F1A0 -> 0x19F1F0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019F1F0 -> 0x0019F2B8
*/
// Range: 0x19F1F0 -> 0x19F2B8
void xBoxInitBoundCapsule(class xBox * b /* r2 */, class xCapsule * c /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19F1F0 -> 0x19F2B8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019F2C0 -> 0x0019F438
*/
// Range: 0x19F2C0 -> 0x19F438
void xBoxInitBoundOBB(class xBox * o /* r2 */, class xBox * b /* r2 */, class xMat4x3 * m /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19F2C0 -> 0x19F438
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
    Code range: 0x0019F440 -> 0x0019F504
*/
// Range: 0x19F440 -> 0x19F504
signed int xPointInBox(class xBox * b /* r2 */, class xVec3 * p /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19F440 -> 0x19F504
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019F510 -> 0x0019F950
*/
// Range: 0x19F510 -> 0x19F950
void xTri3VecMinDist(class xVec3 * V0 /* r2 */, class xVec3 * V1 /* r2 */, class xVec3 * V2 /* r2 */, class xVec3 * p /* r2 */, float & s /* r2 */, float & t /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19F510 -> 0x19F950
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
    Code range: 0x0019F950 -> 0x001A1CBC
*/
// Range: 0x19F950 -> 0x1A1CBC
void xLine3TriMinDist(class xVec3 * p1 /* r20 */, class xVec3 * p2 /* r19 */, class xVec3 * V0 /* r18 */, class xVec3 * V1 /* r17 */, class xVec3 * V2 /* r16 */, float & t /* r21 */, float & u /* r22 */, float & v /* r23 */) {
    /* anonymous block */ {
        // Range: 0x19F950 -> 0x1A1CBC
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
    Code range: 0x001A1CC0 -> 0x001A22A8
*/
// Range: 0x1A1CC0 -> 0x1A22A8
void xLine3LineMinDist(class xVec3 * p1 /* r2 */, class xVec3 * p2 /* r2 */, class xVec3 * q1 /* r2 */, class xVec3 * q2 /* r2 */, float & t /* r2 */, float & u /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A1CC0 -> 0x1A22A8
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
    Code range: 0x001A22B0 -> 0x001A23C8
*/
// Range: 0x1A22B0 -> 0x1A23C8
void xLine3VecDist2(class xVec3 * p1 /* r2 */, class xVec3 * p2 /* r2 */, class xVec3 * v /* r2 */, class xIsect * isx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A22B0 -> 0x1A23C8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A23D0 -> 0x001A24AC
*/
// Range: 0x1A23D0 -> 0x1A24AC
void xMath3Init() {
    /* anonymous block */ {
        // Range: 0x1A23D0 -> 0x1A24AC
    }
}


