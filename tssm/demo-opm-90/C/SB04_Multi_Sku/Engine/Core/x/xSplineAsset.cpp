/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSplineAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044FC80 -> 0x00450354
*/
// Range: 0x44FC80 -> 0x450354
// this: r19
unsigned char NURBS::advance_u(float start_u /* r23 */, float distance /* r22 */, unsigned char forward /* r18 */, float & new_u /* r17 */) {
    /* anonymous block */ {
        // Range: 0x44FC80 -> 0x450354
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSplineAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00450360 -> 0x00450978
*/
// Range: 0x450360 -> 0x450978
// this: r20
class xVec3 NURBS::evaluate(float u /* r29+0x110 */, signed int d /* r19 */) {
    /* anonymous block */ {
        // Range: 0x450360 -> 0x450978
        class xVec3 point; // r29+0x100
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSplineAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00450980 -> 0x00450B70
*/
// Range: 0x450980 -> 0x450B70
// this: r18
void NURBS::evaluate(float u /* r29+0x80 */, class xVec3 & point /* r17 */) {
    /* anonymous block */ {
        // Range: 0x450980 -> 0x450B70
        signed int span; // r2
        float N[5]; // r29+0x40
        signed int i; // r11
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSplineAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00450B70 -> 0x00450B88
*/
// Range: 0x450B70 -> 0x450B88
// this: r2
float NURBS::start() {
    /* anonymous block */ {
        // Range: 0x450B70 -> 0x450B88
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSplineAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00450B90 -> 0x004511FC
*/
// Range: 0x450B90 -> 0x4511FC
// this: r2
void NURBS::find_derivative_basis_functions(float u /* r29+0x170 */, signed int i /* r2 */, signed int order /* r2 */, float (* ders)[5] /* r2 */) {
    /* anonymous block */ {
        // Range: 0x450B90 -> 0x4511FC
        float ndu[5][5]; // r29+0x100
        float left[5]; // r29+0xE0
        float right[5]; // r29+0xC0
        signed int j; // r13
        float saved; // r3
        signed int r; // r5
        float temp; // r29+0x170
        float a[2][5]; // r29+0x90
        signed int r; // r21
        signed int s1; // r20
        signed int s2; // r19
        signed int k; // r18
        float d; // r1
        signed int rk; // r2
        signed int pk; // r2
        signed int j1; // r17
        signed int j2; // r2
        signed int j; // r2
        signed int temp; // r3
        signed int k; // r9
        signed int j; // r8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSplineAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00451200 -> 0x00451518
*/
// Range: 0x451200 -> 0x451518
// this: r2
void NURBS::find_basis_functions(float u /* r29+0x60 */, signed int i /* r2 */, float * N /* r2 */) {
    /* anonymous block */ {
        // Range: 0x451200 -> 0x451518
        float left[5]; // r29+0x40
        float right[5]; // r29+0x20
        signed int j; // r25
        float saved; // r29+0x60
        signed int r; // r24
        float temp; // r29+0x60
    }
}


