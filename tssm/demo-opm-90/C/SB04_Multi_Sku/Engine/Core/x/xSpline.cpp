/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00451520 -> 0x00451670
*/
// Range: 0x451520 -> 0x451670
class xSpline3 * xSpline3_Bezier(class xVec3 * points /* r2 */, float * time /* r2 */, unsigned int numpoints /* r2 */, unsigned int numalloc /* r2 */, class xVec3 * p1 /* r18 */, class xVec3 * p2 /* r17 */) {
    /* anonymous block */ {
        // Range: 0x451520 -> 0x451670
        class xSpline3 * spl; // r16
        unsigned int i; // r7
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00451670 -> 0x004517B4
*/
// Range: 0x451670 -> 0x4517B4
static class xSpline3 * AllocSpline3(class xVec3 * points /* r20 */, float * time /* r19 */, unsigned int numpoints /* r18 */, unsigned int numalloc /* r17 */, unsigned int flags /* r21 */, unsigned int type /* r22 */) {
    /* anonymous block */ {
        // Range: 0x451670 -> 0x4517B4
        class xSpline3 * spl; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004517C0 -> 0x00451D18
*/
// Range: 0x4517C0 -> 0x451D18
void xSpline3_ArcInit(class xSpline3 * spl /* r17 */, unsigned int sample /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4517C0 -> 0x451D18
        unsigned int i; // r21
        unsigned int seg; // r29+0xD0
        float len; // r21
        float arcsum; // r20
        class xCoef3 tempCoef; // r29+0x150
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00451D20 -> 0x00451D64
*/
// Range: 0x451D20 -> 0x451D64
float xSpline3_EvalArcApprox(class xSpline3 * spl /* r2 */, float s /* r20 */, unsigned int deriv /* r2 */, class xVec3 * o /* r2 */) {
    /* anonymous block */ {
        // Range: 0x451D20 -> 0x451D64
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00451D70 -> 0x0045242C
*/
// Range: 0x451D70 -> 0x45242C
static float ArcEvalIterate(class xSpline3 * spl /* r16 */, float s /* r25 */, unsigned int deriv /* r20 */, class xVec3 * o /* r19 */, unsigned int iterations /* r18 */) {
    /* anonymous block */ {
        // Range: 0x451D70 -> 0x45242C
        class xCoef3 tempCoef; // r29+0xF0
        float umin; // r24
        float umax; // r23
        float smin; // r22
        float smax; // r21
        float utest; // r29+0x120
        float arctest; // r29+0x120
        signed int min; // r7
        signed int max; // r2
        signed int test; // r2
        signed int seg; // r17
        signed int segmul; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00452430 -> 0x004528A0
*/
// Range: 0x452430 -> 0x4528A0
void xSpline3_EvalSeg(class xSpline3 * spl /* r19 */, float u /* r20 */, unsigned int deriv /* r18 */, class xVec3 * o /* r17 */) {
    /* anonymous block */ {
        // Range: 0x452430 -> 0x4528A0
        class xCoef3 tempCoef; // r29+0x100
        unsigned int seg; // r7
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004528A0 -> 0x00452AB8
*/
// Range: 0x4528A0 -> 0x452AB8
static void BasisBspline(float (* N)[4] /* r2 */, float * t /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4528A0 -> 0x452AB8
        unsigned int i; // r22
        unsigned int k; // r21
        unsigned int c; // r20
        float d1; // r9
        float d2; // r8
        float Ntemp[4]; // r29+0x80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00452AC0 -> 0x00452C9C
*/
// Range: 0x452AC0 -> 0x452C9C
static void EvalCoef3(class xCoef3 * coef /* r2 */, float u /* r29 */, unsigned int deriv /* r2 */, class xVec3 * o /* r2 */) {
    /* anonymous block */ {
        // Range: 0x452AC0 -> 0x452C9C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00452CA0 -> 0x00452E6C
*/
// Range: 0x452CA0 -> 0x452E6C
static float ArcLength3(class xCoef3 * coef /* r2 */, float ustart /* r29 */, float uend /* r29 */) {
    /* anonymous block */ {
        // Range: 0x452CA0 -> 0x452E6C
        unsigned int i; // r3
        float A; // r5
        float B; // r4
        float C; // r3
        float D; // r14
        float E; // r2
        float h; // r1
        float sum; // r29
        float u; // r11
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00452E70 -> 0x00453098
*/
// Range: 0x452E70 -> 0x453098
static void Interpolate_Bspline(class xVec3 * data /* r21 */, class xVec3 * control /* r20 */, float * knots /* r23 */, unsigned int nodata /* r19 */) {
    /* anonymous block */ {
        // Range: 0x452E70 -> 0x453098
        unsigned int i; // r8
        float * alpha; // r18
        float * beta; // r17
        float * gamma; // r16
        float t1; // r29+0x90
        float t2; // r29+0x90
        float t3; // r29+0x90
        float t4; // r29+0x90
        float t5; // r29+0x90
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004530A0 -> 0x00453340
*/
// Range: 0x4530A0 -> 0x453340
static void Tridiag_Solve(float * a /* r23 */, float * b /* r21 */, float * c /* r22 */, class xVec3 * d /* r20 */, class xVec3 * x /* r19 */, signed int n /* r18 */) {
    /* anonymous block */ {
        // Range: 0x4530A0 -> 0x453340
        signed int j; // r11
        float beta; // r29+0x90
        float * gamma; // r17
        class xVec3 * delta; // r16
    }
}


