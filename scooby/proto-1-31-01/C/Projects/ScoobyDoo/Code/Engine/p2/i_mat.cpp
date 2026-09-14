/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\i_mat.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static float (* matrix_stack)[16]; // size: 0x4, address: 0x4A4F8C
float (* matrix_sp)[16]; // size: 0x4, address: 0x4A4F90
static signed short matrix_stack_depth; // size: 0x2, address: 0x4A4F94
static signed short matrix_stack_maxdepth; // size: 0x2, address: 0x4A4F98
float SCALE; // size: 0x4, address: 0x0
float CX; // size: 0x4, address: 0x0
float CY; // size: 0x4, address: 0x0
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
// total size: 0x4698
class XStreamHeader {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int versionID; // offset 0x4, size 0x4
    unsigned char month; // offset 0x8, size 0x1
    unsigned char day; // offset 0x9, size 0x1
    unsigned char hour; // offset 0xA, size 0x1
    unsigned char minute; // offset 0xB, size 0x1
    unsigned int mdsOffset; // offset 0xC, size 0x4
    unsigned int mdsLength; // offset 0x10, size 0x4
    class tagXStreamMDSDirectory directory; // offset 0x14, size 0x3E84
    char safety[2048]; // offset 0x3E98, size 0x800
};
// total size: 0xC
class Vector3D {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x10
class tagXStreamDirectoryEntry {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int type; // offset 0x4, size 0x4
    unsigned int offset; // offset 0x8, size 0x4
    unsigned int length; // offset 0xC, size 0x4
};
// total size: 0x3E84
class tagXStreamMDSDirectory {
    // Members
public:
    unsigned int count; // offset 0x0, size 0x4
    class tagXStreamDirectoryEntry directory[1000]; // offset 0x4, size 0x3E80
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\i_mat.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038EE40 -> 0x0038EF50
*/
// Range: 0x38EE40 -> 0x38EF50
void RotMatrixZ(float (* a)[16] /* r2 */, float ang /* r21 */) {
    /* anonymous block */ {
        // Range: 0x38EE40 -> 0x38EF50
        float rot[16]; // r29+0x40
        float (* m)[16]; // r16
        float c; // r21
        float s; // r20
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\i_mat.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038EF50 -> 0x0038F060
*/
// Range: 0x38EF50 -> 0x38F060
void RotMatrixY(float (* a)[16] /* r2 */, float ang /* r21 */) {
    /* anonymous block */ {
        // Range: 0x38EF50 -> 0x38F060
        float rot[16]; // r29+0x40
        float (* m)[16]; // r16
        float c; // r21
        float s; // r20
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\i_mat.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038F060 -> 0x0038F170
*/
// Range: 0x38F060 -> 0x38F170
void RotMatrixX(float (* a)[16] /* r2 */, float ang /* r21 */) {
    /* anonymous block */ {
        // Range: 0x38F060 -> 0x38F170
        float rot[16]; // r29+0x40
        float (* m)[16]; // r16
        float c; // r21
        float s; // r20
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\i_mat.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038F170 -> 0x0038F238
*/
// Range: 0x38F170 -> 0x38F238
void ScaleMatrix(float (* a)[16] /* r2 */, float sx /* r22 */, float sy /* r21 */, float sz /* r20 */) {
    /* anonymous block */ {
        // Range: 0x38F170 -> 0x38F238
        float S[16]; // r29+0x40
        float (* m)[16]; // r16
        float * s; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\i_mat.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038F240 -> 0x0038F6D8
*/
// Range: 0x38F240 -> 0x38F6D8
void MultMatrix(float (* R)[16] /* r18 */, float (* A)[16] /* r17 */, float (* B)[16] /* r16 */) {
    /* anonymous block */ {
        // Range: 0x38F240 -> 0x38F6D8
        float * r; // r5
        float * b; // r2
        float * a; // r2
        float temp[16]; // r29+0x60
        signed int usetemp; // r4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\i_mat.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038F6E0 -> 0x0038F73C
*/
// Range: 0x38F6E0 -> 0x38F73C
void IdMatrix(float (* a)[16] /* r2 */) {
    /* anonymous block */ {
        // Range: 0x38F6E0 -> 0x38F73C
        float * m; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\i_mat.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038F740 -> 0x0038F76C
*/
// Range: 0x38F740 -> 0x38F76C
void SetCurrentMatrix(float (* m)[16] /* r2 */) {
    /* anonymous block */ {
        // Range: 0x38F740 -> 0x38F76C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\i_mat.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038F770 -> 0x0038F798
*/
// Range: 0x38F770 -> 0x38F798
void GetCurrentMatrix(float (* m)[16] /* r2 */) {
    /* anonymous block */ {
        // Range: 0x38F770 -> 0x38F798
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\i_mat.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038F7A0 -> 0x0038F898
*/
// Range: 0x38F7A0 -> 0x38F898
void PopMatrixStack(unsigned int num /* r16 */) {
    /* anonymous block */ {
        // Range: 0x38F7A0 -> 0x38F898
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\i_mat.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038F8A0 -> 0x0038F9A8
*/
// Range: 0x38F8A0 -> 0x38F9A8
void PushMatrixStack(float (* m)[16] /* r16 */) {
    /* anonymous block */ {
        // Range: 0x38F8A0 -> 0x38F9A8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\i_mat.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038F9B0 -> 0x0038FBF8
*/
// Range: 0x38F9B0 -> 0x38FBF8
void InitMatrixStack(unsigned int maxdepth /* r17 */) {
    /* anonymous block */ {
        // Range: 0x38F9B0 -> 0x38FBF8
        unsigned int num; // r16
    }
}


