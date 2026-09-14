/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040C8C0 -> 0x0040CB20
*/
// Range: 0x40C8C0 -> 0x40CB20
void xSphereRandomPointOnSphere(class xSphere * sphere /* r17 */, class xVec3 & pt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x40C8C0 -> 0x40CB20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040CB20 -> 0x0040CBA8
*/
// Range: 0x40CB20 -> 0x40CBA8
unsigned char xMat4x3Eq(class xMat4x3 & a /* r2 */, class xMat4x3 & b /* r2 */, float tol /* r29 */) {
    /* anonymous block */ {
        // Range: 0x40CB20 -> 0x40CBA8
        class xVec4 * va; // r2
        class xVec4 * vb; // r2
        signed int i; // r9
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040CBB0 -> 0x0040CCD0
*/
// Range: 0x40CBB0 -> 0x40CCD0
unsigned char xVec3Rotate(class xMat3x3 * o /* r16 */, class xVec3 * a /* r2 */, class xVec3 * b /* r2 */, float l /* r21 */) {
    /* anonymous block */ {
        // Range: 0x40CBB0 -> 0x40CCD0
        class xVec3 axis; // r29+0x30
        float angle; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040CCD0 -> 0x0040CE48
*/
// Range: 0x40CCD0 -> 0x40CE48
void xQuatDiff(class xQuat * o /* r2 */, class xQuat * a /* r2 */, class xQuat * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40CCD0 -> 0x40CE48
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040CE50 -> 0x0040CFB4
*/
// Range: 0x40CE50 -> 0x40CFB4
void xQuatMul(class xQuat * o /* r2 */, class xQuat * a /* r2 */, class xQuat * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40CE50 -> 0x40CFB4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040CFC0 -> 0x0040D270
*/
// Range: 0x40CFC0 -> 0x40D270
void xQuatSlerp(class xQuat * o /* r18 */, class xQuat * a /* r17 */, class xQuat * b /* r16 */, float t /* r22 */) {
    /* anonymous block */ {
        // Range: 0x40CFC0 -> 0x40D270
        float asph; // r21
        float bsph; // r29+0x60
        float one_sintheta; // r23
        float abdot; // r29+0x60
        class xQuat b2; // r29+0x50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040D270 -> 0x0040D34C
*/
// Range: 0x40D270 -> 0x40D34C
float xQuatNormalize(class xQuat * o /* r2 */, class xQuat * q /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40D270 -> 0x40D34C
        float one_len; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040D350 -> 0x0040D3E0
*/
// Range: 0x40D350 -> 0x40D3E0
void xQuatToAxisAngle(class xQuat * q /* r18 */, class xVec3 * a /* r17 */, float * t /* r16 */) {
    /* anonymous block */ {
        // Range: 0x40D350 -> 0x40D3E0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040D3E0 -> 0x0040D48C
*/
// Range: 0x40D3E0 -> 0x40D48C
void xQuatToMat(class xQuat * q /* r2 */, class xMat3x3 * m /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40D3E0 -> 0x40D48C
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
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040D490 -> 0x0040D550
*/
// Range: 0x40D490 -> 0x40D550
void xQuatFromAxisAngle(class xQuat * q /* r16 */, class xVec3 * a /* r17 */, float t /* r29+0x40 */) {
    /* anonymous block */ {
        // Range: 0x40D490 -> 0x40D550
        float t_2; // r20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040D550 -> 0x0040D7D4
*/
// Range: 0x40D550 -> 0x40D7D4
void xQuatFromMat(class xQuat * q /* r2 */, class xMat3x3 * m /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40D550 -> 0x40D7D4
        float * mp; // r2
        float * qvp; // r2
        float tr; // r29
        float root; // r29
        signed int i; // r11
        signed int j; // r2
        signed int k; // r2
        signed int nxt[3]; // @ 0x006045D8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040D7E0 -> 0x0040D830
*/
// Range: 0x40D7E0 -> 0x40D830
void xMat4x3RMul3x3(class xMat4x3 * o /* r17 */, class xMat3x3 * m3x3 /* r2 */, class xMat4x3 * m /* r16 */) {
    /* anonymous block */ {
        // Range: 0x40D7E0 -> 0x40D830
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040D830 -> 0x0040D89C
*/
// Range: 0x40D830 -> 0x40D89C
void xMat4x3Mul(class xMat4x3 * o /* r2 */, class xMat4x3 * a /* r2 */, class xMat4x3 * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40D830 -> 0x40D89C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040D8A0 -> 0x0040D998
*/
// Range: 0x40D8A0 -> 0x40D998
void xMat4x3RotY(class xMat4x3 * m /* r17 */, float t /* r20 */, class xVec3 * p /* r16 */) {
    /* anonymous block */ {
        // Range: 0x40D8A0 -> 0x40D998
        class xMat4x3 temp; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040D9A0 -> 0x0040DA4C
*/
// Range: 0x40D9A0 -> 0x40DA4C
void xMat4x3Rot(class xMat4x3 * m /* r17 */, class xVec3 * a /* r2 */, float t /* r29+0x70 */, class xVec3 * p /* r16 */) {
    /* anonymous block */ {
        // Range: 0x40D9A0 -> 0x40DA4C
        class xMat4x3 temp; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040DA50 -> 0x0040DB04
*/
// Range: 0x40DA50 -> 0x40DB04
void xMat3x3Tolocal(class xVec3 * o /* r2 */, class xMat3x3 * m /* r2 */, class xVec3 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40DA50 -> 0x40DB04
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040DB10 -> 0x0040DB74
*/
// Range: 0x40DB10 -> 0x40DB74
void xMat3x3LMulVec(class xVec3 * o /* r2 */, class xMat3x3 * m /* r2 */, class xVec3 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40DB10 -> 0x40DB74
        float y; // r29
        float z; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040DB80 -> 0x0040DCAC
*/
// Range: 0x40DB80 -> 0x40DCAC
void xMat3x3Mul(class xMat3x3 * o /* r2 */, class xMat3x3 * a /* r2 */, class xMat3x3 * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40DB80 -> 0x40DCAC
        class xMat3x3 temp; // r29
        class xMat3x3 * tp; // r7
        unsigned int usetemp; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040DCB0 -> 0x0040DD48
*/
// Range: 0x40DCB0 -> 0x40DD48
void xMat3x3Transpose(class xMat3x3 * o /* r2 */, class xMat3x3 * m /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40DCB0 -> 0x40DD48
        float temp; // r29
        float temp; // r29
        float temp; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040DD50 -> 0x0040DE84
*/
// Range: 0x40DD50 -> 0x40DE84
void xMat3x3RMulRotY(class xMat3x3 * o /* r17 */, class xMat3x3 * m /* r16 */, float t /* r20 */) {
    /* anonymous block */ {
        // Range: 0x40DD50 -> 0x40DE84
        float temp; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040DE90 -> 0x0040DEBC
*/
// Range: 0x40DE90 -> 0x40DEBC
void xMat3x3ScaleC(class xMat3x3 * m /* r2 */, float x /* r29 */, float y /* r29 */, float z /* r29 */) {
    /* anonymous block */ {
        // Range: 0x40DE90 -> 0x40DEBC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040DEC0 -> 0x0040DF40
*/
// Range: 0x40DEC0 -> 0x40DF40
void xMat3x3RotZ(class xMat3x3 * m /* r16 */, float t /* r20 */) {
    /* anonymous block */ {
        // Range: 0x40DEC0 -> 0x40DF40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040DF40 -> 0x0040DFC0
*/
// Range: 0x40DF40 -> 0x40DFC0
void xMat3x3RotY(class xMat3x3 * m /* r16 */, float t /* r20 */) {
    /* anonymous block */ {
        // Range: 0x40DF40 -> 0x40DFC0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040DFC0 -> 0x0040E040
*/
// Range: 0x40DFC0 -> 0x40E040
void xMat3x3RotX(class xMat3x3 * m /* r16 */, float t /* r20 */) {
    /* anonymous block */ {
        // Range: 0x40DFC0 -> 0x40E040
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040E040 -> 0x0040E174
*/
// Range: 0x40E040 -> 0x40E174
void xMat3x3RotC(class xMat3x3 * m /* r16 */, float _x /* r23 */, float _y /* r22 */, float _z /* r21 */, float t /* r20 */) {
    /* anonymous block */ {
        // Range: 0x40E040 -> 0x40E174
        float c; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040E180 -> 0x0040E280
*/
// Range: 0x40E180 -> 0x40E280
void xMat3x3Euler(class xMat3x3 * m /* r16 */, float yaw /* r22 */, float pitch /* r21 */, float roll /* r20 */) {
    /* anonymous block */ {
        // Range: 0x40E180 -> 0x40E280
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040E280 -> 0x0040E290
*/
// Range: 0x40E280 -> 0x40E290
void xMat3x3Euler(class xMat3x3 * m /* r2 */, class xVec3 * ypr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40E280 -> 0x40E290
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040E290 -> 0x0040E5CC
*/
// Range: 0x40E290 -> 0x40E5CC
float xMat3x3LookVec4(class xMat3x3 & mat /* r2 */, float at_x /* r29+0x20 */, float at_y /* r29+0x20 */, float at_z /* r29+0x20 */, class xVec3 & hint_right /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40E290 -> 0x40E5CC
        float mag2; // r29+0x20
        float imag; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040E5D0 -> 0x0040E7EC
*/
// Range: 0x40E5D0 -> 0x40E7EC
float xMat3x3LookVec(class xMat3x3 * m /* r16 */, class xVec3 * at /* r17 */) {
    /* anonymous block */ {
        // Range: 0x40E5D0 -> 0x40E7EC
        float vec_len; // r20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040E7F0 -> 0x0040E838
*/
// Range: 0x40E7F0 -> 0x40E838
void xMat4x3MoveLocalAt(class xMat4x3 * m /* r2 */, float mag /* r29 */) {
    /* anonymous block */ {
        // Range: 0x40E7F0 -> 0x40E838
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040E840 -> 0x0040E888
*/
// Range: 0x40E840 -> 0x40E888
void xMat4x3MoveLocalUp(class xMat4x3 * m /* r2 */, float mag /* r29 */) {
    /* anonymous block */ {
        // Range: 0x40E840 -> 0x40E888
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040E890 -> 0x0040E8D8
*/
// Range: 0x40E890 -> 0x40E8D8
void xMat4x3MoveLocalRight(class xMat4x3 * m /* r2 */, float mag /* r29 */) {
    /* anonymous block */ {
        // Range: 0x40E890 -> 0x40E8D8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040E8E0 -> 0x0040EB0C
*/
// Range: 0x40E8E0 -> 0x40EB0C
void xMat3x3GetEuler(class xMat3x3 * m /* r17 */, class xVec3 * a /* r16 */) {
    /* anonymous block */ {
        // Range: 0x40E8E0 -> 0x40EB0C
        float pitch; // r20
        float yaw; // r22
        float roll; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040EB10 -> 0x0040EB58
*/
// Range: 0x40EB10 -> 0x40EB58
void xMat3x3Normalize(class xMat3x3 * o /* r17 */, class xMat3x3 * m /* r16 */) {
    /* anonymous block */ {
        // Range: 0x40EB10 -> 0x40EB58
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040EB60 -> 0x0040EE74
*/
// Range: 0x40EB60 -> 0x40EE74
void xBoxFromCone(class xBox & box /* r2 */, class xVec3 & center /* r2 */, class xVec3 & dir /* r2 */, float dist /* r29+0xD0 */, float r1 /* r29+0xD0 */, float r2 /* r29+0xD0 */) {
    /* anonymous block */ {
        // Range: 0x40EB60 -> 0x40EE74
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040EE80 -> 0x0040EF48
*/
// Range: 0x40EE80 -> 0x40EF48
void xBoxInitBoundCapsule(class xBox * b /* r2 */, class xCapsule * c /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40EE80 -> 0x40EF48
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040EF50 -> 0x0040F0C8
*/
// Range: 0x40EF50 -> 0x40F0C8
void xBoxInitBoundOBB(class xBox * o /* r2 */, class xBox * b /* r2 */, class xMat4x3 * m /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40EF50 -> 0x40F0C8
        class xVec3 boxcent; // r29
        float xmax; // r29+0x10
        float ymax; // r29+0x10
        float zmax; // r29+0x10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040F0D0 -> 0x0040F194
*/
// Range: 0x40F0D0 -> 0x40F194
signed int xPointInBox(class xBox * b /* r2 */, class xVec3 * p /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40F0D0 -> 0x40F194
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040F1A0 -> 0x0040F5E0
*/
// Range: 0x40F1A0 -> 0x40F5E0
void xTri3VecMinDist(class xVec3 * V0 /* r2 */, class xVec3 * V1 /* r2 */, class xVec3 * V2 /* r2 */, class xVec3 * p /* r2 */, float & s /* r2 */, float & t /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40F1A0 -> 0x40F5E0
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
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040F5E0 -> 0x0040F6F8
*/
// Range: 0x40F5E0 -> 0x40F6F8
void xLine3VecDist2(class xVec3 * p1 /* r2 */, class xVec3 * p2 /* r2 */, class xVec3 * v /* r2 */, class xIsect * isx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40F5E0 -> 0x40F6F8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040F700 -> 0x0040F7DC
*/
// Range: 0x40F700 -> 0x40F7DC
void xMath3Init() {
    /* anonymous block */ {
        // Range: 0x40F700 -> 0x40F7DC
    }
}


