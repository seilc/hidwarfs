/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\mtx\src\mtx.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8039BACC -> 0x8039C064
*/
// Range: 0x8039BACC -> 0x8039BB74
void C_MTXIdentity(float (* m)[4] /* r31 */) {}

// Range: 0x8039BB74 -> 0x8039BC48
void C_MTXCopy(const float (* src)[4] /* r30 */, float (* dst)[4] /* r31 */) {}

// Range: 0x8039BC48 -> 0x8039BF9C
void C_MTXConcat(const float (* a)[4] /* r31 */, const float (* b)[4] /* r30 */, float (* ab)[4] /* r27 */) {
    // Local variables
    float mTmp[3][4]; // r1+0x14
    float (* m)[4]; // r29
}

// Range: 0x8039BF9C -> 0x8039C064
void C_MTXScale(float (* m)[4] /* r31 */, float xS /* r1+0xC */, float yS /* r1+0x10 */, float zS /* r1+0x14 */) {}


