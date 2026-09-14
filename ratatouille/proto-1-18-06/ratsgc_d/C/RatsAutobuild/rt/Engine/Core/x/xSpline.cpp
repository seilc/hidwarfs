/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpline.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F4F54 -> 0x800F6B6C
*/
static float sBasisBezier[4][4]; // size: 0x40, address: 0x80513FC8
static float sBasisHermite[4][4]; // size: 0x40, address: 0x80514008
const char * _rwMemoryLastAllocFile; // size: 0x4, address: 0x80D6C318
unsigned int _rwMemoryLastAllocLine; // size: 0x4, address: 0x80D6C31C
void * RwEngineInstance; // size: 0x4, address: 0x80D6C374
// Range: 0x800F4F54 -> 0x800F51B0
static void Tridiag_Solve(float * a /* r24 */, float * b /* r26 */, float * c /* r25 */, struct xVec3 * d /* r20 */, struct xVec3 * x /* r23 */, int n /* r27 */) {
    // Local variables
    int j; // r30
    int idx; // r31
    float beta; // f31
    float * gamma; // r29
    struct xVec3 * delta; // r28

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
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
// Range: 0x800F51B0 -> 0x800F5484
static void Interpolate_Bspline(struct xVec3 * data /* r1+0x8 */, struct xVec3 * control /* r25 */, float * knots /* r26 */, unsigned int nodata /* r27 */) {
    // Local variables
    unsigned int i; // r31
    float * alpha; // r30
    float * beta; // r29
    float * gamma; // r28
    float t1; // f28
    float t2; // f31
    float t3; // f30
    float t4; // f29
    float t5; // f27

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

// Range: 0x800F5484 -> 0x800F573C
static float ArcLength3(struct xCoef3 * coef /* r31 */, double ustart /* f29 */, double uend /* f23 */) {
    // Local variables
    unsigned int i; // r30
    double A; // f28
    double B; // f27
    double C; // f26
    double D; // f25
    double E; // f24
    double h; // f22
    double sum; // f30
    double u; // f31
}

// Range: 0x800F573C -> 0x800F58F8
static void EvalCoef3(struct xCoef3 * coef /* r3 */, float u /* f1 */, unsigned int deriv /* r4 */, struct xVec3 * o /* r5 */) {}

// Range: 0x800F58F8 -> 0x800F5A24
static void BasisToCoef3(struct xCoef3 * coef /* r3 */, float (* N)[4] /* r4 */, struct xVec3 * p0 /* r5 */, struct xVec3 * p1 /* r6 */, struct xVec3 * p2 /* r7 */, struct xVec3 * p3 /* r8 */) {
    // Local variables
    unsigned int c; // r31
}

// Range: 0x800F5A24 -> 0x800F5B74
static void CoefToUnity3(struct xCoef3 * dest /* r3 */, struct xCoef3 * coef /* r4 */, float t1 /* f1 */, float t2 /* f2 */) {
    // Local variables
    unsigned int i; // r29
    float a; // f30
    float b; // f29
    float c; // f28
    float d; // f27
    float * p; // r31
    float * o; // r30
    float dt; // f31
}

// Range: 0x800F5B74 -> 0x800F5DA8
static void BasisBspline(float (* N)[4] /* r3 */, float * t /* r4 */) {
    // Local variables
    unsigned int i; // r31
    unsigned int k; // r29
    unsigned int c; // r30
    float d1; // f31
    float d2; // f30
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
// Range: 0x800F5DA8 -> 0x800F5DEC
static float ClampBspline(struct xSpline3 * spl /* r3 */, float u /* f1 */) {}

// Range: 0x800F5DEC -> 0x800F5E5C
static unsigned int SegBspline(struct xSpline3 * spl /* r3 */, float u /* f1 */) {
    // Local variables
    unsigned int min; // r31
    unsigned int max; // r30
    unsigned int mid; // r29
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
// Range: 0x800F5E5C -> 0x800F5F24
static void EvalBspline3(struct xSpline3 * spl /* r31 */, float u /* f31 */, unsigned int deriv /* r1+0x8 */, struct xVec3 * o /* r1+0xC */) {
    // Local variables
    unsigned int seg; // r30
    float N[7][4]; // r1+0x40
    struct xCoef3 coef; // r1+0x10
}

// Range: 0x800F5F24 -> 0x800F60DC
static struct xCoef3 * CoefSeg3(struct xSpline3 * spl /* r31 */, unsigned int seg /* r30 */, struct xCoef3 * tempCoef /* r29 */) {
    // Local variables
    float N[7][4]; // r1+0x8

    // References
    // -> static float sBasisBezier[4][4];
    // -> static float sBasisHermite[4][4];
}

// Range: 0x800F60DC -> 0x800F62AC
void xSpline3_EvalSeg(struct xSpline3 * spl /* r31 */, float u /* f31 */, unsigned int deriv /* r28 */, struct xVec3 * o /* r29 */) {
    // Local variables
    struct xCoef3 tempCoef; // r1+0x8
    float flr; // f30
    unsigned int seg; // r30

    // References
    // -> static float sBasisBezier[4][4];
    // -> static float sBasisHermite[4][4];
}

// Range: 0x800F62AC -> 0x800F6634
static float ArcEvalIterate(struct xSpline3 * spl /* r31 */, float s /* f27 */, unsigned int deriv /* r22 */, struct xVec3 * o /* r23 */, unsigned int iterations /* r24 */) {
    // Local variables
    struct xCoef3 * coef; // r28
    struct xCoef3 tempCoef; // r1+0x8
    float umin; // f30
    float umax; // f26
    float smin; // f29
    float smax; // f28
    float sseg; // f25
    float utest; // f31
    float arctest; // f24
    int min; // r26
    int max; // r30
    int test; // r25
    int seg; // r29
    int segmul; // r27
    int sampTot; // r21
}

// Range: 0x800F6634 -> 0x800F66C0
float xSpline3_EvalArcApprox(struct xSpline3 * spl /* r31 */, float s /* f31 */, unsigned int deriv /* r29 */, struct xVec3 * o /* r30 */) {}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80D610D0
unsigned int gActiveHeap; // size: 0x4, address: 0x80D692A8
// Range: 0x800F66C0 -> 0x800F6834
void xSpline3_ArcInit(struct xSpline3 * spl /* r31 */, unsigned int sample /* r30 */) {
    // Local variables
    unsigned int i; // r29
    unsigned int seg; // r28
    unsigned int oldalloc; // r26
    float len; // f31
    float arcsum; // f30
    struct xCoef3 tempCoef; // r1+0x8
    struct xCoef3 * coef; // r25

    // References
    // -> static char __FUNCTION__[17];
    // -> unsigned int gActiveHeap;
}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80D610E1
// Range: 0x800F6834 -> 0x800F69C4
static struct xSpline3 * AllocSpline3(struct xVec3 * points /* r1+0x8 */, float * time /* r28 */, unsigned int numpoints /* r29 */, unsigned int numalloc /* r30 */, unsigned int flags /* r1+0xC */, unsigned int type /* r1+0x10 */) {
    // Local variables
    struct xSpline3 * spl; // r31

    // References
    // -> static char __FUNCTION__[13];
    // -> unsigned int gActiveHeap;
}

static char __FUNCTION__[16]; // size: 0x10, address: 0x80D610EE
// Range: 0x800F69C4 -> 0x800F6AE0
struct xSpline3 * xSpline3_Bezier(struct xVec3 * points /* r1+0x8 */, float * time /* r1+0xC */, unsigned int numpoints /* r1+0x10 */, unsigned int numalloc /* r1+0x14 */, struct xVec3 * p1 /* r28 */, struct xVec3 * p2 /* r29 */) {
    // Local variables
    struct xSpline3 * spl; // r31
    unsigned int i; // r30

    // References
    // -> static char __FUNCTION__[16];
    // -> unsigned int gActiveHeap;
}

// Range: 0x800F6AE0 -> 0x800F6B44
void xSpline3_Update(struct xSpline3 * spl /* r31 */) {}

// Range: 0x800F6B44 -> 0x800F6B6C
void xSpline3_Catmullize(struct xSpline3 * spl /* r1+0x8 */) {}


