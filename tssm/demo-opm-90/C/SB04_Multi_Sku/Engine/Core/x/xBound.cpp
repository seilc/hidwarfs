/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00439000 -> 0x0043908C
*/
// Range: 0x439000 -> 0x43908C
void xBoundGetCenter(class xBound * b /* r2 */, class xVec3 * center /* r2 */) {
    /* anonymous block */ {
        // Range: 0x439000 -> 0x43908C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00439090 -> 0x00439168
*/
// Range: 0x439090 -> 0x439168
unsigned char xOBBHitsBound(class xBox & box /* r16 */, class xMat4x3 & mat /* r2 */, class xBound & b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x439090 -> 0x439168
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00439170 -> 0x004392E8
*/
// Range: 0x439170 -> 0x4392E8
unsigned char xSphereHitsBound(class xVec3 & c /* r2 */, float r /* r20 */, class xBound & b /* r16 */) {
    /* anonymous block */ {
        // Range: 0x439170 -> 0x4392E8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004392F0 -> 0x004396AC
*/
// Range: 0x4392F0 -> 0x4396AC
unsigned char xBoundHitsBound(class xBound & a /* r17 */, class xBound & b /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4392F0 -> 0x4396AC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004396B0 -> 0x004396B8
*/
// Range: 0x4396B0 -> 0x4396B8
void xBoundDraw() {
    /* anonymous block */ {
        // Range: 0x4396B0 -> 0x4396B8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004396C0 -> 0x004397F8
*/
// Range: 0x4396C0 -> 0x4397F8
void xVecHitsBound(class xVec3 * v /* r7 */, class xBound * b /* r17 */, class xCollis * c /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4396C0 -> 0x4397F8
        class xIsect isect; // r29+0x30
        class xVec3 lv; // r29+0x60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00439800 -> 0x0043987C
*/
// Range: 0x439800 -> 0x43987C
void xSphereHitsBound(class xSphere * o /* r2 */, class xBound * b /* r8 */, class xCollis * c /* r2 */) {
    /* anonymous block */ {
        // Range: 0x439800 -> 0x43987C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00439880 -> 0x00439978
*/
// Range: 0x439880 -> 0x439978
void xRayHitsBound(class xRay3 * r /* r7 */, class xBound * b /* r2 */, class xCollis * c /* r16 */) {
    /* anonymous block */ {
        // Range: 0x439880 -> 0x439978
        class xIsect isect; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00439980 -> 0x00439C58
*/
// Range: 0x439980 -> 0x439C58
static void xBoundOBBIsectRay(class xBox * b /* r2 */, class xMat4x3 * m /* r2 */, class xRay3 * r /* r17 */, class xIsect * isect /* r16 */) {
    /* anonymous block */ {
        // Range: 0x439980 -> 0x439C58
        class xRay3 xfr; // r29+0x90
        class xBox sbox; // r29+0x70
        class xMat4x3 mnormal; // r29+0x30
        float len2; // r29+0xC0
        float len_inv; // r29+0xC0
        float len2; // r29+0xC0
        float len_inv; // r29+0xC0
        float len2; // r29+0xC0
        float len_inv; // r29+0xC0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00439C60 -> 0x00439CBC
*/
// Range: 0x439C60 -> 0x439CBC
void xBoundHitsModel(class xBound * b /* r2 */, class xModelInstance * m /* r2 */, class xCollis * colls /* r2 */, unsigned char ncolls /* r2 */, float sth /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x439C60 -> 0x439CBC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00439CC0 -> 0x00439F64
*/
// Range: 0x439CC0 -> 0x439F64
void xBoundHitsBound(class xBound * a /* r18 */, class xBound * b /* r17 */, class xCollis * c /* r16 */) {
    /* anonymous block */ {
        // Range: 0x439CC0 -> 0x439F64
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00439F70 -> 0x0043A1F0
*/
// Range: 0x439F70 -> 0x43A1F0
void xBoundGetSphere(class xSphere & o /* r2 */, class xBound & bound /* r2 */) {
    /* anonymous block */ {
        // Range: 0x439F70 -> 0x43A1F0
        class xMat4x3 & mat; // r2
        class xVec3 v; // r29+0x60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043A1F0 -> 0x0043A30C
*/
// Range: 0x43A1F0 -> 0x43A30C
void xBoundGetBox(class xBox & box /* r2 */, class xBound & bound /* r6 */) {
    /* anonymous block */ {
        // Range: 0x43A1F0 -> 0x43A30C
        class xSphere & o; // r2
        class xCylinder & c; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043A310 -> 0x0043A474
*/
// Range: 0x43A310 -> 0x43A474
void xBoundUpdate(class xBound * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43A310 -> 0x43A474
    }
}


