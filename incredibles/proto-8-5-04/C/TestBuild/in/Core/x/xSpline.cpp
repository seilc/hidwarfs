/*
    Compile unit: C:\TestBuild\in\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static float sBasisUniformBspline[4][4]; // size: 0x40, address: 0x0
static float sBasisBezier[4][4]; // size: 0x40, address: 0x5085B0
static float sBasisHermite[4][4]; // size: 0x40, address: 0x5085F0
unsigned int gActiveHeap; // size: 0x4, address: 0x608A5C
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x6B2890
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
    union { // inferred
        class RwV3d m_RwV3d; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
        float a[3]; // offset 0x0, size 0xC
    };
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
// total size: 0xC
class RwV3d {
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

/*
    Compile unit: C:\TestBuild\in\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BBB70 -> 0x001BBCC0
*/
// Range: 0x1BBB70 -> 0x1BBCC0
class xSpline3 * xSpline3_Bezier(class xVec3 * points /* r2 */, float * time /* r2 */, unsigned int numpoints /* r2 */, unsigned int numalloc /* r2 */, class xVec3 * p1 /* r18 */, class xVec3 * p2 /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1BBB70 -> 0x1BBCC0
        class xSpline3 * spl; // r16
        unsigned int i; // r7
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BBCC0 -> 0x001BBE04
*/
// Range: 0x1BBCC0 -> 0x1BBE04
static class xSpline3 * AllocSpline3(class xVec3 * points /* r20 */, float * time /* r19 */, unsigned int numpoints /* r18 */, unsigned int numalloc /* r17 */, unsigned int flags /* r21 */, unsigned int type /* r22 */) {
    /* anonymous block */ {
        // Range: 0x1BBCC0 -> 0x1BBE04
        class xSpline3 * spl; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BBE10 -> 0x001BC368
*/
// Range: 0x1BBE10 -> 0x1BC368
void xSpline3_ArcInit(class xSpline3 * spl /* r17 */, unsigned int sample /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1BBE10 -> 0x1BC368
        unsigned int i; // r21
        unsigned int seg; // r29+0xD0
        float len; // r21
        float arcsum; // r20
        class xCoef3 tempCoef; // r29+0x150
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BC370 -> 0x001BC3B4
*/
// Range: 0x1BC370 -> 0x1BC3B4
float xSpline3_EvalArcApprox(class xSpline3 * spl /* r2 */, float s /* r20 */, unsigned int deriv /* r2 */, class xVec3 * o /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BC370 -> 0x1BC3B4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BC3C0 -> 0x001BCA7C
*/
// Range: 0x1BC3C0 -> 0x1BCA7C
static float ArcEvalIterate(class xSpline3 * spl /* r16 */, float s /* r25 */, unsigned int deriv /* r20 */, class xVec3 * o /* r19 */, unsigned int iterations /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1BC3C0 -> 0x1BCA7C
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
    Compile unit: C:\TestBuild\in\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BCA80 -> 0x001BCEF0
*/
// Range: 0x1BCA80 -> 0x1BCEF0
void xSpline3_EvalSeg(class xSpline3 * spl /* r19 */, float u /* r20 */, unsigned int deriv /* r18 */, class xVec3 * o /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1BCA80 -> 0x1BCEF0
        class xCoef3 tempCoef; // r29+0x100
        unsigned int seg; // r7
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BCEF0 -> 0x001BD108
*/
// Range: 0x1BCEF0 -> 0x1BD108
static void BasisBspline(float (* N)[4] /* r2 */, float * t /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BCEF0 -> 0x1BD108
        unsigned int i; // r22
        unsigned int k; // r21
        unsigned int c; // r20
        float d1; // r9
        float d2; // r8
        float Ntemp[4]; // r29+0x80
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BD110 -> 0x001BD2EC
*/
// Range: 0x1BD110 -> 0x1BD2EC
static void EvalCoef3(class xCoef3 * coef /* r2 */, float u /* r29 */, unsigned int deriv /* r2 */, class xVec3 * o /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BD110 -> 0x1BD2EC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BD2F0 -> 0x001BD4BC
*/
// Range: 0x1BD2F0 -> 0x1BD4BC
static float ArcLength3(class xCoef3 * coef /* r2 */, float ustart /* r29 */, float uend /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1BD2F0 -> 0x1BD4BC
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
    Compile unit: C:\TestBuild\in\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BD4C0 -> 0x001BD6E8
*/
// Range: 0x1BD4C0 -> 0x1BD6E8
static void Interpolate_Bspline(class xVec3 * data /* r21 */, class xVec3 * control /* r20 */, float * knots /* r23 */, unsigned int nodata /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1BD4C0 -> 0x1BD6E8
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
    Compile unit: C:\TestBuild\in\Core\x\xSpline.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BD6F0 -> 0x001BD990
*/
// Range: 0x1BD6F0 -> 0x1BD990
static void Tridiag_Solve(float * a /* r23 */, float * b /* r21 */, float * c /* r22 */, class xVec3 * d /* r20 */, class xVec3 * x /* r19 */, signed int n /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1BD6F0 -> 0x1BD990
        signed int j; // r11
        float beta; // r29+0x90
        float * gamma; // r17
        class xVec3 * delta; // r16
    }
}


