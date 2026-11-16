/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class xVec3 g_O3; // size: 0xC, address: 0x4F82D0
class xVec3 g_X3; // size: 0xC, address: 0x4F82E0
class xVec3 g_Y3; // size: 0xC, address: 0x4F82F0
class xVec3 g_Z3; // size: 0xC, address: 0x4F8300
class xVec3 g_NX3; // size: 0xC, address: 0x4F8310
class xVec3 g_NY3; // size: 0xC, address: 0x4F8320
class xVec3 g_NZ3; // size: 0xC, address: 0x4F8330
class xVec3 g_Onez; // size: 0xC, address: 0x4F8340
class xMat4x3 g_I3; // size: 0x40, address: 0x567DC0
class xQuat g_IQ; // size: 0x10, address: 0x4F8350
static float gs_fTolerance; // size: 0x4, address: 0x0
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
class xVec3 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x40
class xMat4x3 : public xMat3x3 {
    // Members
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x1C
class xCapsule {
    // Members
public:
    class xVec3 start; // offset 0x0, size 0xC
    class xVec3 end; // offset 0xC, size 0xC
    float r; // offset 0x18, size 0x4
};
// total size: 0x10
class xQuat {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
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
// total size: 0x18
class xBox {
    // Members
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
};

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ED830 -> 0x001ED8D0
*/
// Range: 0x1ED830 -> 0x1ED8D0
void xQuatDiff(class xQuat * o /* r16 */, class xQuat * a /* r2 */, class xQuat * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1ED830 -> 0x1ED8D0
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ED8D0 -> 0x001ED958
*/
// Range: 0x1ED8D0 -> 0x1ED958
void xQuatMul(class xQuat * o /* r2 */, class xQuat * a /* r2 */, class xQuat * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1ED8D0 -> 0x1ED958
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ED960 -> 0x001EDB04
*/
// Range: 0x1ED960 -> 0x1EDB04
void xQuatSlerp(class xQuat * o /* r18 */, class xQuat * a /* r17 */, class xQuat * b /* r16 */, float t /* r21 */) {
    /* anonymous block */ {
        // Range: 0x1ED960 -> 0x1EDB04
        float asph; // r20
        float bsph; // r29+0x60
        float one_sintheta; // r22
        float abdot; // r29+0x60
        class xQuat b2; // r29+0x50
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EDB10 -> 0x001EDC18
*/
// Range: 0x1EDB10 -> 0x1EDC18
float xQuatNormalize(class xQuat * o /* r2 */, class xQuat * q /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EDB10 -> 0x1EDC18
        float one_len; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EDC20 -> 0x001EDC7C
*/
// Range: 0x1EDC20 -> 0x1EDC7C
void xQuatToAxisAngle(class xQuat * q /* r18 */, class xVec3 * a /* r17 */, float * t /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1EDC20 -> 0x1EDC7C
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EDC80 -> 0x001EDD2C
*/
// Range: 0x1EDC80 -> 0x1EDD2C
void xQuatToMat(class xQuat * q /* r2 */, class xMat3x3 * m /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EDC80 -> 0x1EDD2C
        float tx; // r6
        float ty; // r12
        float tz; // r29
        float tsx; // r11
        float tsy; // r10
        float tsz; // r9
        float txx; // r8
        float txy; // r7
        float txz; // r6
        float tyy; // r4
        float tyz; // r5
        float tzz; // r1
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EDD30 -> 0x001EDDF8
*/
// Range: 0x1EDD30 -> 0x1EDDF8
void xQuatFromAxisAngle(class xQuat * q /* r17 */, class xVec3 * a /* r16 */, float t /* r29+0x40 */) {
    /* anonymous block */ {
        // Range: 0x1EDD30 -> 0x1EDDF8
        float t_2; // r20
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EDE00 -> 0x001EE080
*/
// Range: 0x1EDE00 -> 0x1EE080
void xQuatFromMat(class xQuat * q /* r2 */, class xMat3x3 * m /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EDE00 -> 0x1EE080
        float * mp; // r2
        float * qvp; // r2
        float tr; // r2
        float root; // r3
        signed int i; // r11
        signed int j; // r3
        signed int k; // r10
        signed int nxt[3]; // @ 0x004180A8
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EE080 -> 0x001EE140
*/
// Range: 0x1EE080 -> 0x1EE140
void xMat4x3Mul(class xMat4x3 * o /* r16 */, class xMat4x3 * a /* r2 */, class xMat4x3 * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EE080 -> 0x1EE140
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EE140 -> 0x001EE27C
*/
// Range: 0x1EE140 -> 0x1EE27C
void xMat4x3Rot(class xMat4x3 * m /* r17 */, class xVec3 * a /* r2 */, float t /* r29+0x80 */, class xVec3 * p /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1EE140 -> 0x1EE27C
        class xMat4x3 temp; // r29+0x40
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EE280 -> 0x001EE34C
*/
// Range: 0x1EE280 -> 0x1EE34C
void xMat3x3Tolocal(class xVec3 * o /* r2 */, class xMat3x3 * m /* r2 */, class xVec3 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EE280 -> 0x1EE34C
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EE350 -> 0x001EE3C0
*/
// Range: 0x1EE350 -> 0x1EE3C0
void xMat3x3LMulVec(class xVec3 * o /* r2 */, class xMat3x3 * m /* r2 */, class xVec3 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EE350 -> 0x1EE3C0
        float y; // r6
        float z; // r3
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EE3C0 -> 0x001EE59C
*/
// Range: 0x1EE3C0 -> 0x1EE59C
void xMat3x3Mul(class xMat3x3 * o /* r2 */, class xMat3x3 * a /* r2 */, class xMat3x3 * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EE3C0 -> 0x1EE59C
        class xMat3x3 temp; // r29+0x10
        class xMat3x3 * tp; // r7
        unsigned int usetemp; // r3
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EE5A0 -> 0x001EE638
*/
// Range: 0x1EE5A0 -> 0x1EE638
void xMat3x3Transpose(class xMat3x3 * o /* r2 */, class xMat3x3 * m /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EE5A0 -> 0x1EE638
        float temp; // r1
        float temp; // r1
        float temp; // r1
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EE640 -> 0x001EE790
*/
// Range: 0x1EE640 -> 0x1EE790
void xMat3x3RMulRotY(class xMat3x3 * o /* r17 */, class xMat3x3 * m /* r16 */, float t /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1EE640 -> 0x1EE790
        float temp; // r3
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EE790 -> 0x001EE7BC
*/
// Range: 0x1EE790 -> 0x1EE7BC
void xMat3x3ScaleC(class xMat3x3 * m /* r2 */, float x /* r29 */, float y /* r29 */, float z /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1EE790 -> 0x1EE7BC
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EE7C0 -> 0x001EE840
*/
// Range: 0x1EE7C0 -> 0x1EE840
void xMat3x3RotZ(class xMat3x3 * m /* r16 */, float t /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1EE7C0 -> 0x1EE840
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EE840 -> 0x001EE8C0
*/
// Range: 0x1EE840 -> 0x1EE8C0
void xMat3x3RotY(class xMat3x3 * m /* r16 */, float t /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1EE840 -> 0x1EE8C0
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EE8C0 -> 0x001EE940
*/
// Range: 0x1EE8C0 -> 0x1EE940
void xMat3x3RotX(class xMat3x3 * m /* r16 */, float t /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1EE8C0 -> 0x1EE940
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EE940 -> 0x001EEA68
*/
// Range: 0x1EE940 -> 0x1EEA68
void xMat3x3RotC(class xMat3x3 * m /* r16 */, float _x /* r23 */, float _y /* r22 */, float _z /* r21 */, float t /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1EE940 -> 0x1EEA68
        float c; // r5
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EEA70 -> 0x001EEB70
*/
// Range: 0x1EEA70 -> 0x1EEB70
void xMat3x3Euler(class xMat3x3 * m /* r16 */, float yaw /* r22 */, float pitch /* r21 */, float roll /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1EEA70 -> 0x1EEB70
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EEB70 -> 0x001EEB80
*/
// Range: 0x1EEB70 -> 0x1EEB80
void xMat3x3Euler(class xMat3x3 * m /* r2 */, class xVec3 * ypr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EEB70 -> 0x1EEB80
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EEB80 -> 0x001EEDE8
*/
// Range: 0x1EEB80 -> 0x1EEDE8
float xMat3x3LookVec(class xMat3x3 * m /* r17 */, class xVec3 * at /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1EEB80 -> 0x1EEDE8
        float vec_len; // r20
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EEDF0 -> 0x001EEE30
*/
// Range: 0x1EEDF0 -> 0x1EEE30
void xMat4x3MoveLocalAt(class xMat4x3 * m /* r2 */, float mag /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1EEDF0 -> 0x1EEE30
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EEE30 -> 0x001EEE70
*/
// Range: 0x1EEE30 -> 0x1EEE70
void xMat4x3MoveLocalUp(class xMat4x3 * m /* r2 */, float mag /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1EEE30 -> 0x1EEE70
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EEE70 -> 0x001EEEB0
*/
// Range: 0x1EEE70 -> 0x1EEEB0
void xMat4x3MoveLocalRight(class xMat4x3 * m /* r2 */, float mag /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1EEE70 -> 0x1EEEB0
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EEEB0 -> 0x001EEFB8
*/
// Range: 0x1EEEB0 -> 0x1EEFB8
void xMat3x3GetEuler(class xMat3x3 * m /* r17 */, class xVec3 * a /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1EEEB0 -> 0x1EEFB8
        float pitch; // r21
        float yaw; // r20
        float roll; // r29+0x40
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EEFC0 -> 0x001EF008
*/
// Range: 0x1EEFC0 -> 0x1EF008
void xMat3x3Normalize(class xMat3x3 * o /* r17 */, class xMat3x3 * m /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1EEFC0 -> 0x1EF008
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EF080 -> 0x001EF3F8
*/
// Range: 0x1EF080 -> 0x1EF3F8
void xBoxFromCone(class xBox & box /* r18 */, class xVec3 & center /* r17 */, class xVec3 & dir /* r16 */, float dist /* r22 */, float r1 /* r21 */, float r2 /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1EF080 -> 0x1EF3F8
        class xBox temp; // r29+0x50
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EF400 -> 0x001EF510
*/
// Range: 0x1EF400 -> 0x1EF510
void xBoxInitBoundCapsule(class xBox * b /* r2 */, class xCapsule * c /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EF400 -> 0x1EF510
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EF510 -> 0x001EF7D8
*/
// Range: 0x1EF510 -> 0x1EF7D8
void xBoxInitBoundOBB(class xBox * o /* r2 */, class xBox * b /* r2 */, class xMat4x3 * m /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EF510 -> 0x1EF7D8
        class xVec3 boxcent; // r29+0x40
        float xmax; // r4
        float ymax; // r3
        float zmax; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EF7E0 -> 0x001EF898
*/
// Range: 0x1EF7E0 -> 0x1EF898
signed int xPointInBox(class xBox * b /* r2 */, class xVec3 * p /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EF7E0 -> 0x1EF898
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EF8A0 -> 0x001EF9D0
*/
// Range: 0x1EF8A0 -> 0x1EF9D0
void xLine3VecDist2(class xVec3 * p1 /* r2 */, class xVec3 * p2 /* r2 */, class xVec3 * v /* r2 */, class xIsect * isx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EF8A0 -> 0x1EF9D0
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EF9D0 -> 0x001EF9D8
*/
// Range: 0x1EF9D0 -> 0x1EF9D8
void xMath3Exit() {
    /* anonymous block */ {
        // Range: 0x1EF9D0 -> 0x1EF9D8
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EF9E0 -> 0x001EFABC
*/
// Range: 0x1EF9E0 -> 0x1EFABC
void xMath3Init() {
    /* anonymous block */ {
        // Range: 0x1EF9E0 -> 0x1EFABC
    }
}


