/*
    Compile unit: E:\SD2\Game\flat\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static float sBasisUniformBspline[4][4]; // size: 0x40, address: 0x0
static float sBasisBezier[4][4]; // size: 0x40, address: 0x2B3D90
static float sBasisHermite[4][4]; // size: 0x40, address: 0x2B3DD0
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
    Code range: 0x001A9A40 -> 0x001A9B74
*/
// Range: 0x1A9A40 -> 0x1A9B74
class xSpline3 * xSpline3_Bezier(class _xVec3 * points /* r2 */, float * time /* r2 */, unsigned int numpoints /* r2 */, unsigned int numalloc /* r2 */, class _xVec3 * p1 /* r18 */, class _xVec3 * p2 /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1A9A40 -> 0x1A9B74
        unsigned int i; // r5
        class xSpline3 * spl; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A9B80 -> 0x001A9CB0
*/
// Range: 0x1A9B80 -> 0x1A9CB0
static class xSpline3 * AllocSpline3(class _xVec3 * points /* r19 */, float * time /* r18 */, unsigned int numpoints /* r17 */, unsigned int numalloc /* r22 */, unsigned int flags /* r21 */, unsigned int type /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1A9B80 -> 0x1A9CB0
        class xSpline3 * spl; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A9CB0 -> 0x001AA1D4
*/
// Range: 0x1A9CB0 -> 0x1AA1D4
void xSpline3_ArcInit(class xSpline3 * spl /* r21 */, unsigned int sample /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1A9CB0 -> 0x1AA1D4
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
    Code range: 0x001AA1E0 -> 0x001AA224
*/
// Range: 0x1AA1E0 -> 0x1AA224
float xSpline3_EvalArcApprox(class xSpline3 * spl /* r2 */, float s /* r20 */, unsigned int deriv /* r2 */, class _xVec3 * o /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AA1E0 -> 0x1AA224
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AA230 -> 0x001AA8CC
*/
// Range: 0x1AA230 -> 0x1AA8CC
static float ArcEvalIterate(class xSpline3 * spl /* r20 */, float s /* r25 */, unsigned int deriv /* r19 */, class _xVec3 * o /* r18 */, unsigned int iterations /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1AA230 -> 0x1AA8CC
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
    Code range: 0x001AA8D0 -> 0x001AAD58
*/
// Range: 0x1AA8D0 -> 0x1AAD58
void xSpline3_EvalSeg(class xSpline3 * spl /* r19 */, float u /* r20 */, unsigned int deriv /* r18 */, class _xVec3 * o /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1AA8D0 -> 0x1AAD58
        unsigned int seg; // r7
        float flr; // r21
        class xCoef3 tempCoef; // r29+0x60
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AAD60 -> 0x001AADC0
*/
// Range: 0x1AAD60 -> 0x1AADC0
static unsigned int SegBspline(class xSpline3 * spl /* r2 */, float u /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1AAD60 -> 0x1AADC0
        unsigned int mid; // r7
        unsigned int max; // r6
        unsigned int min; // r5
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AADC0 -> 0x001AAF7C
*/
// Range: 0x1AADC0 -> 0x1AAF7C
static void BasisBspline(float (* N)[4] /* r2 */, float * t /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AADC0 -> 0x1AAF7C
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
    Code range: 0x001AAF80 -> 0x001AB034
*/
// Range: 0x1AAF80 -> 0x1AB034
static void CoefToUnity3(class xCoef3 * dest /* r2 */, class xCoef3 * coef /* r2 */, float t1 /* r29 */, float t2 /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1AAF80 -> 0x1AB034
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
    Code range: 0x001AB040 -> 0x001AB214
*/
// Range: 0x1AB040 -> 0x1AB214
static void EvalCoef3(class xCoef3 * coef /* r2 */, float u /* r29 */, unsigned int deriv /* r2 */, class _xVec3 * o /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AB040 -> 0x1AB214
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AB220 -> 0x001AB460
*/
// Range: 0x1AB220 -> 0x1AB460
static float ArcLength3(class xCoef3 * coef /* r2 */, float ustart /* r21 */, float uend /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1AB220 -> 0x1AB460
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
    Code range: 0x001AB460 -> 0x001AB660
*/
// Range: 0x1AB460 -> 0x1AB660
static void Interpolate_Bspline(class _xVec3 * data /* r22 */, class _xVec3 * control /* r21 */, float * knots /* r23 */, unsigned int nodata /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1AB460 -> 0x1AB660
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
    Code range: 0x001AB660 -> 0x001AB8EC
*/
// Range: 0x1AB660 -> 0x1AB8EC
static void Tridiag_Solve(float * a /* r23 */, float * b /* r22 */, float * c /* r21 */, class _xVec3 * d /* r20 */, class _xVec3 * x /* r19 */, signed int n /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1AB660 -> 0x1AB8EC
        class _xVec3 * delta; // r17
        float * gamma; // r16
        float beta; // r3
        signed int j; // r4
    }
}


