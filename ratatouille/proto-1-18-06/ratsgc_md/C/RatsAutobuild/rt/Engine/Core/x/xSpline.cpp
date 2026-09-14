/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpline.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8006FC30 -> 0x8007114C
*/
static float sBasisBezier[4][4]; // size: 0x40, address: 0x803BDA08
static float sBasisHermite[4][4]; // size: 0x40, address: 0x803BDA48
void * RwEngineInstance; // size: 0x4, address: 0x803C4584
// Range: 0x8006FC30 -> 0x8006FE14
static void Tridiag_Solve(float * a /* r24 */, float * b /* r25 */, float * c /* r26 */, struct xVec3 * d /* r27 */, struct xVec3 * x /* r28 */, int n /* r29 */) {
    // Local variables
    int j; // r10
    int idx; // r0
    float beta; // f3
    float * gamma; // r31
    struct xVec3 * delta; // r30

    // References
    // -> void * RwEngineInstance;
}

// total size: 0xC
struct RwV3d {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0xC
struct xVec3 {
    // Static members
    static struct xVec3 m_NegDoubleVec; // size: 0xC
    static struct xVec3 m_DoubleVec; // size: 0xC
    static struct xVec3 m_NegHalfVec; // size: 0xC
    static struct xVec3 m_HalfVec; // size: 0xC
    static struct xVec3 m_UnitAxisZ; // size: 0xC
    static struct xVec3 m_UnitAxisY; // size: 0xC
    static struct xVec3 m_UnitAxisX; // size: 0xC
    static struct xVec3 m_NegOnes; // size: 0xC
    static struct xVec3 m_Ones; // size: 0xC
    static struct xVec3 m_Null; // size: 0xC

    // Members
    union { // inferred
        struct RwV3d m_RwV3d; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
        float a[3]; // offset 0x0, size 0xC
    };
};
// Range: 0x8006FE14 -> 0x8006FFF4
static void Interpolate_Bspline(struct xVec3 * data /* r25 */, struct xVec3 * control /* r26 */, float * knots /* r27 */, unsigned int nodata /* r28 */) {
    // Local variables
    unsigned int i; // r0
    float * alpha; // r31
    float * beta; // r30
    float * gamma; // r29
    float t1; // f2
    float t2; // f7
    float t3; // f0
    float t4; // f8
    float t5; // f6

    // References
    // -> void * RwEngineInstance;
}

// Range: 0x8006FFF4 -> 0x80070224
static float ArcLength3(struct xCoef3 * coef /* r0 */, double ustart /* f21 */, double uend /* f22 */) {
    // Local variables
    unsigned int i; // r31
    double A; // f29
    double B; // f28
    double C; // f27
    double D; // f26
    double E; // f25
    double h; // f24
    double sum; // f31
    double u; // f23
}

// Range: 0x80070224 -> 0x800703B0
static void EvalCoef3(struct xCoef3 * coef /* r0 */, float u /* f0 */, unsigned int deriv /* r0 */, struct xVec3 * o /* r0 */) {}

// Range: 0x800703B0 -> 0x8007046C
static void BasisToCoef3(struct xCoef3 * coef /* r0 */, float (* N)[4] /* r0 */, struct xVec3 * p0 /* r0 */, struct xVec3 * p1 /* r0 */, struct xVec3 * p2 /* r0 */, struct xVec3 * p3 /* r0 */) {
    // Local variables
    unsigned int c; // r0
}

// Range: 0x8007046C -> 0x80070508
static void CoefToUnity3(struct xCoef3 * dest /* r3 */, struct xCoef3 * coef /* r4 */, float t1 /* f0 */, float t2 /* f0 */) {
    // Local variables
    unsigned int i; // r0
    float b; // f2
    float c; // f3
    float d; // f0
    float * p; // r4
    float * o; // r3
    float dt; // f12
}

// Range: 0x80070508 -> 0x8007067C
static void BasisBspline(float (* N)[4] /* r0 */, float * t /* r0 */) {
    // Local variables
    unsigned int i; // r29
    unsigned int k; // r28
    unsigned int c; // r27
    float d1; // f7
    float d2; // f8
    float Ntemp[4]; // r1+0x8
}

// total size: 0x2C
struct xSpline3 {
    // Members
    unsigned short type; // offset 0x0, size 0x2
    unsigned short flags; // offset 0x2, size 0x2
    unsigned int N; // offset 0x4, size 0x4
    unsigned int allocN; // offset 0x8, size 0x4
    struct xVec3 * points; // offset 0xC, size 0x4
    float * time; // offset 0x10, size 0x4
    struct xVec3 * p12; // offset 0x14, size 0x4
    struct xVec3 * bctrl; // offset 0x18, size 0x4
    float * knot; // offset 0x1C, size 0x4
    struct xCoef3 * coef; // offset 0x20, size 0x4
    unsigned int arcSample; // offset 0x24, size 0x4
    float * arcLength; // offset 0x28, size 0x4
};
// Range: 0x8007067C -> 0x800706B0
static float ClampBspline(struct xSpline3 * spl /* r0 */, float u /* f1 */) {}

// Range: 0x800706B0 -> 0x80070700
static unsigned int SegBspline(struct xSpline3 * spl /* r0 */, float u /* f0 */) {
    // Local variables
    unsigned int min; // r6
    unsigned int max; // r7
    unsigned int mid; // r0
}

// total size: 0x10
struct xCoef {
    // Members
    float a[4]; // offset 0x0, size 0x10
};
// total size: 0x30
struct xCoef3 {
    // Members
    struct xCoef x; // offset 0x0, size 0x10
    struct xCoef y; // offset 0x10, size 0x10
    struct xCoef z; // offset 0x20, size 0x10
};
// Range: 0x80070700 -> 0x80070798
static void EvalBspline3(struct xSpline3 * spl /* r28 */, float u /* f31 */, unsigned int deriv /* r29 */, struct xVec3 * o /* r30 */) {
    // Local variables
    unsigned int seg; // r0
    float N[7][4]; // r1+0x38
    struct xCoef3 coef; // r1+0x8
}

// Range: 0x80070798 -> 0x800708BC
static struct xCoef3 * CoefSeg3(struct xSpline3 * spl /* r28 */, unsigned int seg /* r29 */, struct xCoef3 * tempCoef /* r31 */) {
    // Local variables
    float N[7][4]; // r1+0x8

    // References
    // -> static float sBasisBezier[4][4];
    // -> static float sBasisHermite[4][4];
}

// Range: 0x800708BC -> 0x80070A30
void xSpline3_EvalSeg(struct xSpline3 * spl /* r29 */, float u /* f30 */, unsigned int deriv /* r30 */, struct xVec3 * o /* r31 */) {
    // Local variables
    struct xCoef3 tempCoef; // r1+0x8
    float flr; // f0
    unsigned int seg; // r7

    // References
    // -> static float sBasisBezier[4][4];
    // -> static float sBasisHermite[4][4];
}

// Range: 0x80070A30 -> 0x80070D3C
static float ArcEvalIterate(struct xSpline3 * spl /* r3 */, float s /* f30 */, unsigned int deriv /* r28 */, struct xVec3 * o /* r29 */, unsigned int iterations /* r30 */) {
    // Local variables
    struct xCoef3 * coef; // r27
    struct xCoef3 tempCoef; // r1+0x8
    float umin; // f31
    float umax; // f26
    float smin; // f28
    float smax; // f25
    float utest; // f27
    float arctest; // f1
    int min; // r5
    int max; // r8
    int test; // r6
    int seg; // r31
    int segmul; // r9
}

// Range: 0x80070D3C -> 0x80070D84
float xSpline3_EvalArcApprox(struct xSpline3 * spl /* r0 */, float s /* f31 */, unsigned int deriv /* r0 */, struct xVec3 * o /* r0 */) {}

unsigned int gActiveHeap; // size: 0x4, address: 0x803C1074
// Range: 0x80070D84 -> 0x80070EE4
void xSpline3_ArcInit(struct xSpline3 * spl /* r30 */, unsigned int sample /* r31 */) {
    // Local variables
    unsigned int i; // r27
    unsigned int seg; // r26
    float len; // f30
    float arcsum; // f29
    struct xCoef3 tempCoef; // r1+0x8
    struct xCoef3 * coef; // r25

    // References
    // -> unsigned int gActiveHeap;
}

// Range: 0x80070EE4 -> 0x80070FF4
static struct xSpline3 * AllocSpline3(struct xVec3 * points /* r25 */, float * time /* r26 */, unsigned int numpoints /* r27 */, unsigned int numalloc /* r28 */, unsigned int flags /* r29 */, unsigned int type /* r30 */) {
    // Local variables
    struct xSpline3 * spl; // r31

    // References
    // -> unsigned int gActiveHeap;
}

// Range: 0x80070FF4 -> 0x800710C8
struct xSpline3 * xSpline3_Bezier(struct xVec3 * points /* r0 */, float * time /* r0 */, unsigned int numpoints /* r0 */, unsigned int numalloc /* r0 */, struct xVec3 * p1 /* r25 */, struct xVec3 * p2 /* r26 */) {
    // Local variables
    struct xSpline3 * spl; // r28
    unsigned int i; // r27

    // References
    // -> unsigned int gActiveHeap;
}

// Range: 0x800710C8 -> 0x8007112C
void xSpline3_Update(struct xSpline3 * spl /* r31 */) {}

// Range: 0x8007112C -> 0x8007114C
void xSpline3_Catmullize(struct xSpline3 * spl /* r0 */) {}


