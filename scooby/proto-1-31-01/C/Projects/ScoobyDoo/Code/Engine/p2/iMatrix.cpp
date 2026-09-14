/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMatrix.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
float g_EPSILON; // size: 0x4, address: 0x485A68
// total size: 0x40
class tagMATRIX {
    // Members
public:
    float _11; // offset 0x0, size 0x4
    float _12; // offset 0x4, size 0x4
    float _13; // offset 0x8, size 0x4
    float _14; // offset 0xC, size 0x4
    float _21; // offset 0x10, size 0x4
    float _22; // offset 0x14, size 0x4
    float _23; // offset 0x18, size 0x4
    float _24; // offset 0x1C, size 0x4
    float _31; // offset 0x20, size 0x4
    float _32; // offset 0x24, size 0x4
    float _33; // offset 0x28, size 0x4
    float _34; // offset 0x2C, size 0x4
    float _41; // offset 0x30, size 0x4
    float _42; // offset 0x34, size 0x4
    float _43; // offset 0x38, size 0x4
    float _44; // offset 0x3C, size 0x4
};
// total size: 0xC
class Vector3D {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMatrix.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00381750 -> 0x003818D0
*/
// Range: 0x381750 -> 0x3818D0
signed int iMatrixVectorMatrixMultiply(class Vector3D * vDest /* r17 */, class Vector3D * vSrc /* r2 */, class tagMATRIX * mat /* r2 */) {
    /* anonymous block */ {
        // Range: 0x381750 -> 0x3818D0
        float w; // r23
        float z; // r22
        float y; // r21
        float x; // r20
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMatrix.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003818D0 -> 0x003819D4
*/
// Range: 0x3818D0 -> 0x3819D4
void iMatrixMatrixMultiply(class tagMATRIX * q /* r18 */, class tagMATRIX * a /* r2 */, class tagMATRIX * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3818D0 -> 0x3819D4
        float pM[16]; // r29+0x40
        float * pB; // r17
        float * pA; // r16
        signed int k; // r6
        signed int j; // r5
        signed int i; // r4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMatrix.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003819E0 -> 0x00381A94
*/
// Range: 0x3819E0 -> 0x381A94
void iMatrixSetRotateZMatrixRIGHT(class tagMATRIX * m /* r16 */, float fRads /* r21 */) {
    /* anonymous block */ {
        // Range: 0x3819E0 -> 0x381A94
        float sinr; // r21
        float cosr; // r20
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMatrix.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00381AA0 -> 0x00381B54
*/
// Range: 0x381AA0 -> 0x381B54
void iMatrixSetRotateZMatrix(class tagMATRIX * m /* r16 */, float fRads /* r21 */) {
    /* anonymous block */ {
        // Range: 0x381AA0 -> 0x381B54
        float sinr; // r21
        float cosr; // r20
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMatrix.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00381B60 -> 0x00381C14
*/
// Range: 0x381B60 -> 0x381C14
void iMatrixSetRotateYMatrixRIGHT(class tagMATRIX * m /* r16 */, float fRads /* r21 */) {
    /* anonymous block */ {
        // Range: 0x381B60 -> 0x381C14
        float sinr; // r21
        float cosr; // r20
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMatrix.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00381C20 -> 0x00381CD4
*/
// Range: 0x381C20 -> 0x381CD4
void iMatrixSetRotateYMatrix(class tagMATRIX * m /* r16 */, float fRads /* r21 */) {
    /* anonymous block */ {
        // Range: 0x381C20 -> 0x381CD4
        float sinr; // r21
        float cosr; // r20
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMatrix.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00381CE0 -> 0x00381D94
*/
// Range: 0x381CE0 -> 0x381D94
void iMatrixSetRotateXMatrixRIGHT(class tagMATRIX * m /* r16 */, float fRads /* r21 */) {
    /* anonymous block */ {
        // Range: 0x381CE0 -> 0x381D94
        float sinr; // r21
        float cosr; // r20
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMatrix.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00381DA0 -> 0x00381E54
*/
// Range: 0x381DA0 -> 0x381E54
void iMatrixSetRotateXMatrix(class tagMATRIX * m /* r16 */, float fRads /* r21 */) {
    /* anonymous block */ {
        // Range: 0x381DA0 -> 0x381E54
        float sinr; // r21
        float cosr; // r20
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMatrix.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00381E60 -> 0x00381ECC
*/
// Range: 0x381E60 -> 0x381ECC
void iMatrixSetScaleMatrix(class tagMATRIX * m /* r16 */, float sx /* r22 */, float sy /* r21 */, float sz /* r20 */) {
    /* anonymous block */ {
        // Range: 0x381E60 -> 0x381ECC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMatrix.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00381ED0 -> 0x00382028
*/
// Range: 0x381ED0 -> 0x382028
void iMatrixCalcShadowMatrix(class tagMATRIX * shadowMat /* r2 */, float * groundPlane /* r2 */, class Vector3D * lightPos /* r2 */) {
    /* anonymous block */ {
        // Range: 0x381ED0 -> 0x382028
        float dot; // r29
    }
}


