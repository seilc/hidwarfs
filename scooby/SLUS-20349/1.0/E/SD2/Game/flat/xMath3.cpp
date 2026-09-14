/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class _xVec3 g_O3; // size: 0xC, address: 0x342E28
class _xVec3 g_X3; // size: 0xC, address: 0x0
class _xVec3 g_Y3; // size: 0xC, address: 0x342E38
class _xVec3 g_Z3; // size: 0xC, address: 0x342E48
class _xVec3 g_NX3; // size: 0xC, address: 0x0
class _xVec3 g_NY3; // size: 0xC, address: 0x342E58
class _xVec3 g_NZ3; // size: 0xC, address: 0x0
class _xMat4x3 g_I3; // size: 0x40, address: 0x342E70
class _xQuat g_IQ; // size: 0x10, address: 0x342EB0
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
// total size: 0x10
class _xQuat {
    // Members
public:
    class _xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
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
    Code range: 0x001131A0 -> 0x00113224
*/
// Range: 0x1131A0 -> 0x113224
void xQuatMul(class _xQuat * o /* r2 */, class _xQuat * a /* r2 */, class _xQuat * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1131A0 -> 0x113224
        float _s; // r3
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00113230 -> 0x001133CC
*/
// Range: 0x113230 -> 0x1133CC
void xQuatSlerp(class _xQuat * o /* r18 */, class _xQuat * a /* r17 */, class _xQuat * b /* r16 */, float t /* r20 */) {
    /* anonymous block */ {
        // Range: 0x113230 -> 0x1133CC
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
    Code range: 0x001133D0 -> 0x001134F8
*/
// Range: 0x1133D0 -> 0x1134F8
float xQuatNormalize(class _xQuat * o /* r17 */, class _xQuat * q /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1133D0 -> 0x1134F8
        float len; // r29+0x30
        float one_len; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00113500 -> 0x001135AC
*/
// Range: 0x113500 -> 0x1135AC
void xQuatToMat(class _xQuat * q /* r2 */, class _xMat3x3 * m /* r2 */) {
    /* anonymous block */ {
        // Range: 0x113500 -> 0x1135AC
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
    Code range: 0x001135B0 -> 0x00113844
*/
// Range: 0x1135B0 -> 0x113844
void xQuatFromMat(class _xQuat * q /* r17 */, class _xMat3x3 * m /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1135B0 -> 0x113844
        signed int k; // r20
        signed int j; // r19
        signed int i; // r18
        float root; // r29+0x90
        float tr; // r1
        float * qvp; // r2
        float * mp; // r2
        signed int nxt[3]; // @ 0x0028A1C0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00113850 -> 0x001138A0
*/
// Range: 0x113850 -> 0x1138A0
void xMat4x3RMul3x3(class _xMat4x3 * o /* r17 */, class _xMat3x3 * m3x3 /* r2 */, class _xMat4x3 * m /* r16 */) {
    /* anonymous block */ {
        // Range: 0x113850 -> 0x1138A0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001138A0 -> 0x00113948
*/
// Range: 0x1138A0 -> 0x113948
void xMat4x3LMul3x3(class _xMat4x3 * o /* r16 */, class _xMat4x3 * m /* r2 */, class _xMat3x3 * m3x3 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1138A0 -> 0x113948
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00113950 -> 0x00113A10
*/
// Range: 0x113950 -> 0x113A10
void xMat4x3Mul(class _xMat4x3 * o /* r16 */, class _xMat4x3 * a /* r2 */, class _xMat4x3 * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x113950 -> 0x113A10
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00113A20 -> 0x00113B94
*/
// Range: 0x113A20 -> 0x113B94
void xMat4x3Rot(class _xMat4x3 * m /* r17 */, class _xVec3 * a /* r2 */, float t /* r29+0x90 */, class _xVec3 * p /* r16 */) {
    /* anonymous block */ {
        // Range: 0x113A20 -> 0x113B94
        class _xMat4x3 temp; // r29+0x40
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00113BA0 -> 0x00113E20
*/
// Range: 0x113BA0 -> 0x113E20
void xMat4x3Orthonormalize(class _xMat4x3 * o /* r17 */, class _xMat4x3 * m /* r16 */) {
    /* anonymous block */ {
        // Range: 0x113BA0 -> 0x113E20
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00113E20 -> 0x00113EF8
*/
// Range: 0x113E20 -> 0x113EF8
void xMat3x3Tolocal(class _xVec3 * o /* r2 */, class _xMat3x3 * m /* r2 */, class _xVec3 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x113E20 -> 0x113EF8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00113F00 -> 0x00113F70
*/
// Range: 0x113F00 -> 0x113F70
void xMat3x3RMulVec(class _xVec3 * o /* r2 */, class _xMat3x3 * m /* r2 */, class _xVec3 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x113F00 -> 0x113F70
        float z; // r3
        float y; // r6
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00113F70 -> 0x00113FE0
*/
// Range: 0x113F70 -> 0x113FE0
void xMat3x3LMulVec(class _xVec3 * o /* r2 */, class _xMat3x3 * m /* r2 */, class _xVec3 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x113F70 -> 0x113FE0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00113FE0 -> 0x001141C0
*/
// Range: 0x113FE0 -> 0x1141C0
void xMat3x3Mul(class _xMat3x3 * o /* r2 */, class _xMat3x3 * a /* r2 */, class _xMat3x3 * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x113FE0 -> 0x1141C0
        unsigned int usetemp; // r7
        class _xMat3x3 * tp; // r3
        class _xMat3x3 temp; // r29+0x10
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001141C0 -> 0x00114250
*/
// Range: 0x1141C0 -> 0x114250
void xMat3x3Transpose(class _xMat3x3 * o /* r2 */, class _xMat3x3 * m /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1141C0 -> 0x114250
        float temp; // r1
        float temp; // r1
        float temp; // r1
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00114250 -> 0x00114398
*/
// Range: 0x114250 -> 0x114398
void xMat3x3RMulRotY(class _xMat3x3 * o /* r17 */, class _xMat3x3 * m /* r16 */, float t /* r20 */) {
    /* anonymous block */ {
        // Range: 0x114250 -> 0x114398
        float temp; // r2
        float b; // r29+0x40
        float a; // r20
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001143A0 -> 0x001144E8
*/
// Range: 0x1143A0 -> 0x1144E8
void xMat3x3LMulRotY(class _xMat3x3 * o /* r17 */, class _xMat3x3 * m /* r16 */, float t /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1143A0 -> 0x1144E8
        float temp; // r2
        float b; // r29+0x40
        float a; // r20
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001144F0 -> 0x0011456C
*/
// Range: 0x1144F0 -> 0x11456C
void xMat3x3RotY(class _xMat3x3 * m /* r16 */, float t /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1144F0 -> 0x11456C
        float b; // r29+0x30
        float a; // r20
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00114570 -> 0x00114694
*/
// Range: 0x114570 -> 0x114694
void xMat3x3RotC(class _xMat3x3 * m /* r16 */, float _x /* r23 */, float _y /* r22 */, float _z /* r21 */, float t /* r20 */) {
    /* anonymous block */ {
        // Range: 0x114570 -> 0x114694
        float c; // r2
        float b; // r29+0x30
        float a; // r20
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001146A0 -> 0x001147A0
*/
// Range: 0x1146A0 -> 0x1147A0
void xMat3x3Euler(class _xMat3x3 * m /* r16 */, float yaw /* r20 */, float pitch /* r21 */, float roll /* r24 */) {
    /* anonymous block */ {
        // Range: 0x1146A0 -> 0x1147A0
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
    Code range: 0x001147A0 -> 0x001147B0
*/
// Range: 0x1147A0 -> 0x1147B0
void xMat3x3Euler(class _xMat3x3 * m /* r2 */, class _xVec3 * ypr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1147A0 -> 0x1147B0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001147B0 -> 0x00114B54
*/
// Range: 0x1147B0 -> 0x114B54
float xMat3x3LookVec(class _xMat3x3 * m /* r17 */, class _xVec3 * at /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1147B0 -> 0x114B54
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00114B60 -> 0x00114BA0
*/
// Range: 0x114B60 -> 0x114BA0
void xMat4x3MoveLocalAt(class _xMat4x3 * m /* r2 */, float mag /* r29 */) {
    /* anonymous block */ {
        // Range: 0x114B60 -> 0x114BA0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00114BA0 -> 0x00114BE0
*/
// Range: 0x114BA0 -> 0x114BE0
void xMat4x3MoveLocalUp(class _xMat4x3 * m /* r2 */, float mag /* r29 */) {
    /* anonymous block */ {
        // Range: 0x114BA0 -> 0x114BE0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00114BE0 -> 0x00114C20
*/
// Range: 0x114BE0 -> 0x114C20
void xMat4x3MoveLocalRight(class _xMat4x3 * m /* r2 */, float mag /* r29 */) {
    /* anonymous block */ {
        // Range: 0x114BE0 -> 0x114C20
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00114C20 -> 0x00114D2C
*/
// Range: 0x114C20 -> 0x114D2C
void xMat3x3GetEuler(class _xMat3x3 * m /* r17 */, class _xVec3 * a /* r16 */) {
    /* anonymous block */ {
        // Range: 0x114C20 -> 0x114D2C
        float roll; // r29+0x40
        float yaw; // r21
        float pitch; // r20
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00114D30 -> 0x00114DC8
*/
// Range: 0x114D30 -> 0x114DC8
void xMat3x3GetScale(class _xMat3x3 * m /* r17 */, class _xVec3 * s /* r16 */) {
    /* anonymous block */ {
        // Range: 0x114D30 -> 0x114DC8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00114DD0 -> 0x0011506C
*/
// Range: 0x114DD0 -> 0x11506C
void xMat3x3Normalize(class _xMat3x3 * o /* r17 */, class _xMat3x3 * m /* r16 */) {
    /* anonymous block */ {
        // Range: 0x114DD0 -> 0x11506C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00115070 -> 0x001151A0
*/
// Range: 0x115070 -> 0x1151A0
void xLine3VecDist2(class _xVec3 * p1 /* r2 */, class _xVec3 * p2 /* r2 */, class _xVec3 * v /* r2 */, class _xIsect * isx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x115070 -> 0x1151A0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001151A0 -> 0x001152A8
*/
// Range: 0x1151A0 -> 0x1152A8
float xVec3Normalize(class _xVec3 * o /* r17 */, class _xVec3 * v /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1151A0 -> 0x1152A8
        float len; // r29+0x30
        float one_len; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001152B0 -> 0x00115364
*/
// Range: 0x1152B0 -> 0x115364
float xVec3LengthFast(float x /* r29+0x20 */, float y /* r20 */, float z /* r21 */) {
    /* anonymous block */ {
        // Range: 0x1152B0 -> 0x115364
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
    Code range: 0x00115370 -> 0x00115378
*/
// Range: 0x115370 -> 0x115378
void xMath3Exit() {
    /* anonymous block */ {
        // Range: 0x115370 -> 0x115378
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00115380 -> 0x00115388
*/
// Range: 0x115380 -> 0x115388
void xMath3Init() {
    /* anonymous block */ {
        // Range: 0x115380 -> 0x115388
    }
}


