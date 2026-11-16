/*
    Compile unit: C:\SB\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static float sBasisUniformBspline[4][4]; // size: 0x40, address: 0x0
static float sBasisBezier[4][4]; // size: 0x40, address: 0x4181F0
static float sBasisHermite[4][4]; // size: 0x40, address: 0x418230
unsigned int gActiveHeap; // size: 0x4, address: 0x50EF44
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x5BAE28
// total size: 0x30
class xCoef3 {
    // Members
public:
    class xCoef x; // offset 0x0, size 0x10
    class xCoef y; // offset 0x10, size 0x10
    class xCoef z; // offset 0x20, size 0x10
};
// total size: 0xC
class xVec3 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x2C
class xSpline3 {
    // Members
public:
    unsigned short type; // offset 0x0, size 0x2
    unsigned short flags; // offset 0x2, size 0x2
    unsigned int N; // offset 0x4, size 0x4
    unsigned int allocN; // offset 0x8, size 0x4
    class xVec3 * points; // offset 0xC, size 0x4
    float * time; // offset 0x10, size 0x4
    class xVec3 * p12; // offset 0x14, size 0x4
    class xVec3 * bctrl; // offset 0x18, size 0x4
    float * knot; // offset 0x1C, size 0x4
    class xCoef3 * coef; // offset 0x20, size 0x4
    unsigned int arcSample; // offset 0x24, size 0x4
    float * arcLength; // offset 0x28, size 0x4
};
// total size: 0x10
class xCoef {
    // Members
public:
    float a[4]; // offset 0x0, size 0x10
};

/*
    Compile unit: C:\SB\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020A300 -> 0x0020A444
*/
// Range: 0x20A300 -> 0x20A444
class xSpline3 * xSpline3_Bezier(class xVec3 * points /* r2 */, float * time /* r2 */, unsigned int numpoints /* r2 */, unsigned int numalloc /* r2 */, class xVec3 * p1 /* r18 */, class xVec3 * p2 /* r17 */) {
    /* anonymous block */ {
        // Range: 0x20A300 -> 0x20A444
        class xSpline3 * spl; // r16
        unsigned int i; // r7
    }
}


/*
    Compile unit: C:\SB\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020A450 -> 0x0020A59C
*/
// Range: 0x20A450 -> 0x20A59C
static class xSpline3 * AllocSpline3(class xVec3 * points /* r21 */, float * time /* r20 */, unsigned int numpoints /* r19 */, unsigned int numalloc /* r18 */, unsigned int flags /* r17 */, unsigned int type /* r22 */) {
    /* anonymous block */ {
        // Range: 0x20A450 -> 0x20A59C
        class xSpline3 * spl; // r16
    }
}


/*
    Compile unit: C:\SB\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020A5A0 -> 0x0020A74C
*/
// Range: 0x20A5A0 -> 0x20A74C
void xSpline3_ArcInit(class xSpline3 * spl /* r17 */, unsigned int sample /* r16 */) {
    /* anonymous block */ {
        // Range: 0x20A5A0 -> 0x20A74C
        unsigned int i; // r21
        unsigned int seg; // r20
        float len; // r21
        float arcsum; // r20
        class xCoef3 tempCoef; // r29+0x80
        class xCoef3 * coef; // r19
    }
}


/*
    Compile unit: C:\SB\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020A750 -> 0x0020A798
*/
// Range: 0x20A750 -> 0x20A798
float xSpline3_EvalArcApprox(class xSpline3 * spl /* r2 */, float s /* r20 */, unsigned int deriv /* r2 */, class xVec3 * o /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20A750 -> 0x20A798
    }
}


/*
    Compile unit: C:\SB\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020A7A0 -> 0x0020AAE8
*/
// Range: 0x20A7A0 -> 0x20AAE8
static float ArcEvalIterate(class xSpline3 * spl /* r2 */, float s /* r22 */, unsigned int deriv /* r19 */, class xVec3 * o /* r18 */, unsigned int iterations /* r17 */) {
    /* anonymous block */ {
        // Range: 0x20A7A0 -> 0x20AAE8
        class xCoef3 * coef; // r20
        class xCoef3 tempCoef; // r29+0x80
        float umin; // r21
        float umax; // r20
        float smin; // r25
        float smax; // r24
        float utest; // r23
        float arctest; // r29+0xB0
        signed int min; // r8
        signed int max; // r2
        signed int test; // r7
        signed int seg; // r16
        signed int segmul; // r7
    }
}


/*
    Compile unit: C:\SB\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020AAF0 -> 0x0020AE54
*/
// Range: 0x20AAF0 -> 0x20AE54
void xSpline3_EvalSeg(class xSpline3 * spl /* r18 */, float u /* r20 */, unsigned int deriv /* r17 */, class xVec3 * o /* r16 */) {
    /* anonymous block */ {
        // Range: 0x20AAF0 -> 0x20AE54
        class xCoef3 tempCoef; // r29+0x50
        unsigned int seg; // r7
    }
}


/*
    Compile unit: C:\SB\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020AE60 -> 0x0020B2BC
*/
// Range: 0x20AE60 -> 0x20B2BC
static class xCoef3 * CoefSeg3(class xSpline3 * spl /* r19 */, unsigned int seg /* r18 */, class xCoef3 * tempCoef /* r17 */) {
    /* anonymous block */ {
        // Range: 0x20AE60 -> 0x20B2BC
        float N[7][4]; // r29+0x50
    }
}


/*
    Compile unit: C:\SB\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020B2C0 -> 0x0020B4B0
*/
// Range: 0x20B2C0 -> 0x20B4B0
static void EvalBspline3(class xSpline3 * spl /* r19 */, float u /* r29+0x100 */, unsigned int deriv /* r18 */, class xVec3 * o /* r17 */) {
    /* anonymous block */ {
        // Range: 0x20B2C0 -> 0x20B4B0
        float N[7][4]; // r29+0x90
        class xCoef3 coef; // r29+0x60
    }
}


/*
    Compile unit: C:\SB\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020B4B0 -> 0x0020B6B4
*/
// Range: 0x20B4B0 -> 0x20B6B4
static void BasisBspline(float (* N)[4] /* r2 */, float * t /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20B4B0 -> 0x20B6B4
        unsigned int i; // r17
        unsigned int k; // r16
        unsigned int c; // r25
        float d1; // r8
        float d2; // r7
        float Ntemp[4]; // r29+0x70
    }
}


/*
    Compile unit: C:\SB\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020B6C0 -> 0x0020B8A8
*/
// Range: 0x20B6C0 -> 0x20B8A8
static void EvalCoef3(class xCoef3 * coef /* r2 */, float u /* r29 */, unsigned int deriv /* r2 */, class xVec3 * o /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20B6C0 -> 0x20B8A8
    }
}


/*
    Compile unit: C:\SB\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020B8B0 -> 0x0020BA84
*/
// Range: 0x20B8B0 -> 0x20BA84
static float ArcLength3(class xCoef3 * coef /* r2 */, float ustart /* r29 */, float uend /* r29 */) {
    /* anonymous block */ {
        // Range: 0x20B8B0 -> 0x20BA84
        unsigned int i; // r4
        float A; // r7
        float B; // r6
        float C; // r5
        float D; // r4
        float E; // r3
        float h; // r2
        float sum; // r1
        float u; // r10
    }
}


/*
    Compile unit: C:\SB\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020BA90 -> 0x0020BCAC
*/
// Range: 0x20BA90 -> 0x20BCAC
static void Interpolate_Bspline(class xVec3 * data /* r22 */, class xVec3 * control /* r21 */, float * knots /* r23 */, unsigned int nodata /* r20 */) {
    /* anonymous block */ {
        // Range: 0x20BA90 -> 0x20BCAC
        unsigned int i; // r8
        float * alpha; // r19
        float * beta; // r18
        float * gamma; // r17
        float t1; // r29+0x90
        float t2; // r7
        float t3; // r4
        float t4; // r6
        float t5; // r3
    }
}


/*
    Compile unit: C:\SB\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020BCB0 -> 0x0020BF48
*/
// Range: 0x20BCB0 -> 0x20BF48
static void Tridiag_Solve(float * a /* r23 */, float * b /* r22 */, float * c /* r21 */, class xVec3 * d /* r20 */, class xVec3 * x /* r19 */, signed int n /* r18 */) {
    /* anonymous block */ {
        // Range: 0x20BCB0 -> 0x20BF48
        signed int j; // r11
        float beta; // r3
        float * gamma; // r17
        class xVec3 * delta; // r16
    }
}


