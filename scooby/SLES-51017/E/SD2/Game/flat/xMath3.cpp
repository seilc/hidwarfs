/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class _xVec3 g_O3; // size: 0xC, address: 0x343708
class _xVec3 g_X3; // size: 0xC, address: 0x0
class _xVec3 g_Y3; // size: 0xC, address: 0x343718
class _xVec3 g_Z3; // size: 0xC, address: 0x343728
class _xVec3 g_NX3; // size: 0xC, address: 0x0
class _xVec3 g_NY3; // size: 0xC, address: 0x343738
class _xVec3 g_NZ3; // size: 0xC, address: 0x0
class _xMat4x3 g_I3; // size: 0x40, address: 0x343750
class _xQuat g_IQ; // size: 0x10, address: 0x343790
// total size: 0x10
class _xQuat {
    // Members
public:
    class _xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
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
// total size: 0xC
class _xVec3 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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

/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001130E0 -> 0x00113164
*/
// Range: 0x1130E0 -> 0x113164
void xQuatMul(class _xQuat * o /* r2 */, class _xQuat * a /* r2 */, class _xQuat * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1130E0 -> 0x113164
        float _s; // r3
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00113170 -> 0x0011330C
*/
// Range: 0x113170 -> 0x11330C
void xQuatSlerp(class _xQuat * o /* r18 */, class _xQuat * a /* r17 */, class _xQuat * b /* r16 */, float t /* r20 */) {
    /* anonymous block */ {
        // Range: 0x113170 -> 0x11330C
        class _xQuat b2; // r29+0x50
        float abdot; // r29+0x60
        float theta; // r21
        float one_sintheta; // r22
        float bsph; // r29+0x60
        float asph; // r21
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00113310 -> 0x00113438
*/
// Range: 0x113310 -> 0x113438
float xQuatNormalize(class _xQuat * o /* r17 */, class _xQuat * q /* r16 */) {
    /* anonymous block */ {
        // Range: 0x113310 -> 0x113438
        float len; // r29+0x30
        float one_len; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00113440 -> 0x001134EC
*/
// Range: 0x113440 -> 0x1134EC
void xQuatToMat(class _xQuat * q /* r2 */, class _xMat3x3 * m /* r2 */) {
    /* anonymous block */ {
        // Range: 0x113440 -> 0x1134EC
        float tzz; // r11
        float tyz; // r10
        float tyy; // r9
        float txz; // r8
        float txy; // r7
        float txx; // r4
        float tsz; // r3
        float tsy; // r6
        float tsx; // r5
        float tz; // r2
        float ty; // r1
        float tx; // r29
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001134F0 -> 0x00113784
*/
// Range: 0x1134F0 -> 0x113784
void xQuatFromMat(class _xQuat * q /* r17 */, class _xMat3x3 * m /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1134F0 -> 0x113784
        signed int k; // r20
        signed int j; // r19
        signed int i; // r18
        float root; // r29+0x90
        float tr; // r1
        float * qvp; // r2
        float * mp; // r2
        signed int nxt[3]; // @ 0x0028AAC0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00113790 -> 0x001137E0
*/
// Range: 0x113790 -> 0x1137E0
void xMat4x3RMul3x3(class _xMat4x3 * o /* r17 */, class _xMat3x3 * m3x3 /* r2 */, class _xMat4x3 * m /* r16 */) {
    /* anonymous block */ {
        // Range: 0x113790 -> 0x1137E0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001137E0 -> 0x00113888
*/
// Range: 0x1137E0 -> 0x113888
void xMat4x3LMul3x3(class _xMat4x3 * o /* r16 */, class _xMat4x3 * m /* r2 */, class _xMat3x3 * m3x3 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1137E0 -> 0x113888
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00113890 -> 0x00113950
*/
// Range: 0x113890 -> 0x113950
void xMat4x3Mul(class _xMat4x3 * o /* r16 */, class _xMat4x3 * a /* r2 */, class _xMat4x3 * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x113890 -> 0x113950
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00113960 -> 0x00113AD4
*/
// Range: 0x113960 -> 0x113AD4
void xMat4x3Rot(class _xMat4x3 * m /* r17 */, class _xVec3 * a /* r2 */, float t /* r29+0x90 */, class _xVec3 * p /* r16 */) {
    /* anonymous block */ {
        // Range: 0x113960 -> 0x113AD4
        class _xMat4x3 temp; // r29+0x40
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00113AE0 -> 0x00113D60
*/
// Range: 0x113AE0 -> 0x113D60
void xMat4x3Orthonormalize(class _xMat4x3 * o /* r17 */, class _xMat4x3 * m /* r16 */) {
    /* anonymous block */ {
        // Range: 0x113AE0 -> 0x113D60
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00113D60 -> 0x00113E38
*/
// Range: 0x113D60 -> 0x113E38
void xMat3x3Tolocal(class _xVec3 * o /* r2 */, class _xMat3x3 * m /* r2 */, class _xVec3 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x113D60 -> 0x113E38
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00113E40 -> 0x00113EB0
*/
// Range: 0x113E40 -> 0x113EB0
void xMat3x3RMulVec(class _xVec3 * o /* r2 */, class _xMat3x3 * m /* r2 */, class _xVec3 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x113E40 -> 0x113EB0
        float z; // r3
        float y; // r6
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00113EB0 -> 0x00113F20
*/
// Range: 0x113EB0 -> 0x113F20
void xMat3x3LMulVec(class _xVec3 * o /* r2 */, class _xMat3x3 * m /* r2 */, class _xVec3 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x113EB0 -> 0x113F20
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00113F20 -> 0x00114100
*/
// Range: 0x113F20 -> 0x114100
void xMat3x3Mul(class _xMat3x3 * o /* r2 */, class _xMat3x3 * a /* r2 */, class _xMat3x3 * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x113F20 -> 0x114100
        unsigned int usetemp; // r7
        class _xMat3x3 * tp; // r3
        class _xMat3x3 temp; // r29+0x10
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00114100 -> 0x00114190
*/
// Range: 0x114100 -> 0x114190
void xMat3x3Transpose(class _xMat3x3 * o /* r2 */, class _xMat3x3 * m /* r2 */) {
    /* anonymous block */ {
        // Range: 0x114100 -> 0x114190
        float temp; // r1
        float temp; // r1
        float temp; // r1
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00114190 -> 0x001142D8
*/
// Range: 0x114190 -> 0x1142D8
void xMat3x3RMulRotY(class _xMat3x3 * o /* r17 */, class _xMat3x3 * m /* r16 */, float t /* r20 */) {
    /* anonymous block */ {
        // Range: 0x114190 -> 0x1142D8
        float temp; // r2
        float b; // r29+0x40
        float a; // r20
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001142E0 -> 0x00114428
*/
// Range: 0x1142E0 -> 0x114428
void xMat3x3LMulRotY(class _xMat3x3 * o /* r17 */, class _xMat3x3 * m /* r16 */, float t /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1142E0 -> 0x114428
        float temp; // r2
        float b; // r29+0x40
        float a; // r20
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00114430 -> 0x001144AC
*/
// Range: 0x114430 -> 0x1144AC
void xMat3x3RotY(class _xMat3x3 * m /* r16 */, float t /* r20 */) {
    /* anonymous block */ {
        // Range: 0x114430 -> 0x1144AC
        float b; // r29+0x30
        float a; // r20
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001144B0 -> 0x001145D4
*/
// Range: 0x1144B0 -> 0x1145D4
void xMat3x3RotC(class _xMat3x3 * m /* r16 */, float _x /* r23 */, float _y /* r22 */, float _z /* r21 */, float t /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1144B0 -> 0x1145D4
        float c; // r2
        float b; // r29+0x30
        float a; // r20
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001145E0 -> 0x001146E0
*/
// Range: 0x1145E0 -> 0x1146E0
void xMat3x3Euler(class _xMat3x3 * m /* r16 */, float yaw /* r20 */, float pitch /* r21 */, float roll /* r24 */) {
    /* anonymous block */ {
        // Range: 0x1145E0 -> 0x1146E0
        float cr; // r29+0x40
        float sr; // r24
        float cp; // r21
        float sp; // r23
        float cy; // r20
        float sy; // r22
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001146E0 -> 0x001146F0
*/
// Range: 0x1146E0 -> 0x1146F0
void xMat3x3Euler(class _xMat3x3 * m /* r2 */, class _xVec3 * ypr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1146E0 -> 0x1146F0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001146F0 -> 0x00114A94
*/
// Range: 0x1146F0 -> 0x114A94
float xMat3x3LookVec(class _xMat3x3 * m /* r17 */, class _xVec3 * at /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1146F0 -> 0x114A94
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00114AA0 -> 0x00114AE0
*/
// Range: 0x114AA0 -> 0x114AE0
void xMat4x3MoveLocalAt(class _xMat4x3 * m /* r2 */, float mag /* r29 */) {
    /* anonymous block */ {
        // Range: 0x114AA0 -> 0x114AE0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00114AE0 -> 0x00114B20
*/
// Range: 0x114AE0 -> 0x114B20
void xMat4x3MoveLocalUp(class _xMat4x3 * m /* r2 */, float mag /* r29 */) {
    /* anonymous block */ {
        // Range: 0x114AE0 -> 0x114B20
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00114B20 -> 0x00114B60
*/
// Range: 0x114B20 -> 0x114B60
void xMat4x3MoveLocalRight(class _xMat4x3 * m /* r2 */, float mag /* r29 */) {
    /* anonymous block */ {
        // Range: 0x114B20 -> 0x114B60
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00114B60 -> 0x00114C6C
*/
// Range: 0x114B60 -> 0x114C6C
void xMat3x3GetEuler(class _xMat3x3 * m /* r17 */, class _xVec3 * a /* r16 */) {
    /* anonymous block */ {
        // Range: 0x114B60 -> 0x114C6C
        float roll; // r29+0x40
        float yaw; // r21
        float pitch; // r20
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00114C70 -> 0x00114D08
*/
// Range: 0x114C70 -> 0x114D08
void xMat3x3GetScale(class _xMat3x3 * m /* r17 */, class _xVec3 * s /* r16 */) {
    /* anonymous block */ {
        // Range: 0x114C70 -> 0x114D08
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00114D10 -> 0x00114FAC
*/
// Range: 0x114D10 -> 0x114FAC
void xMat3x3Normalize(class _xMat3x3 * o /* r17 */, class _xMat3x3 * m /* r16 */) {
    /* anonymous block */ {
        // Range: 0x114D10 -> 0x114FAC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00114FB0 -> 0x001150E0
*/
// Range: 0x114FB0 -> 0x1150E0
void xLine3VecDist2(class _xVec3 * p1 /* r2 */, class _xVec3 * p2 /* r2 */, class _xVec3 * v /* r2 */, class _xIsect * isx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x114FB0 -> 0x1150E0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001150E0 -> 0x001151E8
*/
// Range: 0x1150E0 -> 0x1151E8
float xVec3Normalize(class _xVec3 * o /* r17 */, class _xVec3 * v /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1150E0 -> 0x1151E8
        float len; // r29+0x30
        float one_len; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001151F0 -> 0x001152A4
*/
// Range: 0x1151F0 -> 0x1152A4
float xVec3LengthFast(float x /* r29+0x20 */, float y /* r20 */, float z /* r21 */) {
    /* anonymous block */ {
        // Range: 0x1151F0 -> 0x1152A4
        float temp; // r1
        float temp; // r1
        float temp; // r1
        float min; // r29+0x20
        float med; // r21
        float max; // r20
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001152B0 -> 0x001152B8
*/
// Range: 0x1152B0 -> 0x1152B8
void xMath3Exit() {
    /* anonymous block */ {
        // Range: 0x1152B0 -> 0x1152B8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001152C0 -> 0x001152C8
*/
// Range: 0x1152C0 -> 0x1152C8
void xMath3Init() {
    /* anonymous block */ {
        // Range: 0x1152C0 -> 0x1152C8
    }
}


