/*
    Compile unit: E:\SD2\Game\flat\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static float sBasisUniformBspline[4][4]; // size: 0x40, address: 0x0
static float sBasisBezier[4][4]; // size: 0x40, address: 0x2B3490
static float sBasisHermite[4][4]; // size: 0x40, address: 0x2B34D0
// total size: 0x2C
class xSpline3 {
    // Members
public:
    unsigned short type; // offset 0x0, size 0x2
    unsigned short flags; // offset 0x2, size 0x2
    unsigned int N; // offset 0x4, size 0x4
    unsigned int allocN; // offset 0x8, size 0x4
    class _xVec3 * points; // offset 0xC, size 0x4
    float * time; // offset 0x10, size 0x4
    class _xVec3 * p12; // offset 0x14, size 0x4
    class _xVec3 * bctrl; // offset 0x18, size 0x4
    float * knot; // offset 0x1C, size 0x4
    class xCoef3 * coef; // offset 0x20, size 0x4
    unsigned int arcSample; // offset 0x24, size 0x4
    float * arcLength; // offset 0x28, size 0x4
};
// total size: 0xC
class _xVec3 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x10
class xCoef {
    // Members
public:
    float a[4]; // offset 0x0, size 0x10
};
// total size: 0x30
class xCoef3 {
    // Members
public:
    class xCoef x; // offset 0x0, size 0x10
    class xCoef y; // offset 0x10, size 0x10
    class xCoef z; // offset 0x20, size 0x10
};

/*
    Compile unit: E:\SD2\Game\flat\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A92A0 -> 0x001A93D4
*/
// Range: 0x1A92A0 -> 0x1A93D4
class xSpline3 * xSpline3_Bezier(class _xVec3 * points /* r2 */, float * time /* r2 */, unsigned int numpoints /* r2 */, unsigned int numalloc /* r2 */, class _xVec3 * p1 /* r18 */, class _xVec3 * p2 /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1A92A0 -> 0x1A93D4
        unsigned int i; // r5
        class xSpline3 * spl; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A93E0 -> 0x001A9510
*/
// Range: 0x1A93E0 -> 0x1A9510
static class xSpline3 * AllocSpline3(class _xVec3 * points /* r19 */, float * time /* r18 */, unsigned int numpoints /* r17 */, unsigned int numalloc /* r22 */, unsigned int flags /* r21 */, unsigned int type /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1A93E0 -> 0x1A9510
        class xSpline3 * spl; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A9510 -> 0x001A9A2C
*/
// Range: 0x1A9510 -> 0x1A9A2C
void xSpline3_ArcInit(class xSpline3 * spl /* r21 */, unsigned int sample /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1A9510 -> 0x1A9A2C
        class xCoef3 tempCoef; // r29+0xF0
        float arcsum; // r20
        float len; // r29+0x190
        unsigned int seg; // r29+0xB0
        unsigned int i; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A9A30 -> 0x001A9A74
*/
// Range: 0x1A9A30 -> 0x1A9A74
float xSpline3_EvalArcApprox(class xSpline3 * spl /* r2 */, float s /* r20 */, unsigned int deriv /* r2 */, class _xVec3 * o /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A9A30 -> 0x1A9A74
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A9A80 -> 0x001AA11C
*/
// Range: 0x1A9A80 -> 0x1AA11C
static float ArcEvalIterate(class xSpline3 * spl /* r20 */, float s /* r25 */, unsigned int deriv /* r19 */, class _xVec3 * o /* r18 */, unsigned int iterations /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1A9A80 -> 0x1AA11C
        signed int segmul; // r6
        signed int seg; // r2
        signed int test; // r7
        signed int max; // r2
        signed int min; // r6
        float arctest; // r29+0x130
        float utest; // r23
        float smax; // r21
        float smin; // r29+0x130
        float umax; // r20
        float umin; // r29+0x130
        class xCoef3 tempCoef; // r29+0x90
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AA120 -> 0x001AA5A8
*/
// Range: 0x1AA120 -> 0x1AA5A8
void xSpline3_EvalSeg(class xSpline3 * spl /* r19 */, float u /* r20 */, unsigned int deriv /* r18 */, class _xVec3 * o /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1AA120 -> 0x1AA5A8
        unsigned int seg; // r7
        float flr; // r21
        class xCoef3 tempCoef; // r29+0x60
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AA5B0 -> 0x001AA610
*/
// Range: 0x1AA5B0 -> 0x1AA610
static unsigned int SegBspline(class xSpline3 * spl /* r2 */, float u /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1AA5B0 -> 0x1AA610
        unsigned int mid; // r7
        unsigned int max; // r6
        unsigned int min; // r5
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AA610 -> 0x001AA7CC
*/
// Range: 0x1AA610 -> 0x1AA7CC
static void BasisBspline(float (* N)[4] /* r2 */, float * t /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AA610 -> 0x1AA7CC
        float Ntemp[4]; // r29
        float d2; // r6
        float d1; // r5
        unsigned int c; // r6
        unsigned int k; // r8
        unsigned int i; // r7
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AA7D0 -> 0x001AA884
*/
// Range: 0x1AA7D0 -> 0x1AA884
static void CoefToUnity3(class xCoef3 * dest /* r2 */, class xCoef3 * coef /* r2 */, float t1 /* r29 */, float t2 /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1AA7D0 -> 0x1AA884
        float dt; // r7
        float * o; // r2
        float * p; // r2
        float d; // r1
        float c; // r6
        float b; // r5
        unsigned int i; // r6
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AA890 -> 0x001AAA64
*/
// Range: 0x1AA890 -> 0x1AAA64
static void EvalCoef3(class xCoef3 * coef /* r2 */, float u /* r29 */, unsigned int deriv /* r2 */, class _xVec3 * o /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AA890 -> 0x1AAA64
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AAA70 -> 0x001AACB0
*/
// Range: 0x1AAA70 -> 0x1AACB0
static float ArcLength3(class xCoef3 * coef /* r2 */, float ustart /* r21 */, float uend /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1AAA70 -> 0x1AACB0
        float u; // r29
        float sum; // r28
        float h; // r27
        float E; // r26
        float D; // r25
        float C; // r24
        float B; // r23
        float A; // r22
        unsigned int i; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AACB0 -> 0x001AAEB0
*/
// Range: 0x1AACB0 -> 0x1AAEB0
static void Interpolate_Bspline(class _xVec3 * data /* r22 */, class _xVec3 * control /* r21 */, float * knots /* r23 */, unsigned int nodata /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1AACB0 -> 0x1AAEB0
        float t5; // r5
        float t4; // r4
        float t3; // r2
        float t2; // r3
        float t1; // r1
        float * gamma; // r18
        float * beta; // r17
        float * alpha; // r16
        unsigned int i; // r4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AAEB0 -> 0x001AB13C
*/
// Range: 0x1AAEB0 -> 0x1AB13C
static void Tridiag_Solve(float * a /* r23 */, float * b /* r22 */, float * c /* r21 */, class _xVec3 * d /* r20 */, class _xVec3 * x /* r19 */, signed int n /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1AAEB0 -> 0x1AB13C
        class _xVec3 * delta; // r17
        float * gamma; // r16
        float beta; // r3
        signed int j; // r4
    }
}


