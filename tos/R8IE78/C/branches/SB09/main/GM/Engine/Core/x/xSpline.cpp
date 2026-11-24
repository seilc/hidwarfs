/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xSpline.cpp
*/
static float sBasisBezier[4][4]; // size: 0x40, address: 0x806B4108
static float sBasisHermite[4][4]; // size: 0x40, address: 0x806B4148
// signature: ArcLength3(xCoef3 *, double, double)
// Range: 0x80042E80 -> 0x800430C8
static float ArcLength3(double ustart /* f22 */, double uend /* f23 */) {
    // Local variables
    unsigned int i; // r31
    double A; // f30
    double B; // f29
    double C; // f28
    double D; // f27
    double E; // f26
    double h; // f25
    double sum; // f24
    double u; // f20
}
// signature: EvalCoef3(xCoef3 *, float, unsigned int, xVec3 *)
// Range: 0x800430D0 -> 0x80043270
static void EvalCoef3() {
}
// signature: BasisToCoef3(xCoef3 *, float (*)[4], xVec3 *, xVec3 *, xVec3 *, xVec3 *)
// Range: 0x80043270 -> 0x8004332C
static void BasisToCoef3() {
    // Local variables
    unsigned int c; // r0
}
// signature: BasisBspline(float (*)[4], float *)
// Range: 0x80043330 -> 0x800434B4
static void BasisBspline() {
    // Local variables
    unsigned int i; // r26
    unsigned int k; // r25
    unsigned int c; // r24

    {
        // Range: 0x80043360 -> 0x8004349C
        // Local variables
        float Ntemp[4]; // r1+0x8
        float d2; // f9
        float d1; // f8
    }
}
// signature: ClampBspline(const xSpline3 *, float)
// Range: 0x800434C0 -> 0x800434F8
static float ClampBspline() {
}
// signature: SegBspline(const xSpline3 *, float)
// Range: 0x80043500 -> 0x8004355C
static unsigned int SegBspline() {
    // Local variables
    unsigned int min; // r6
    unsigned int max; // r7
    unsigned int mid; // r4
}
// Range: 0x80043560 -> 0x80043740
static class xCoef3 * CoefSeg3(class xSpline3 * spl /* r29 */, unsigned int seg /* r30 */, class xCoef3 * tempCoef /* r31 */) {
    // Local variables
    float N[7][4]; // r1+0x8

    // References
    // -> static float sBasisBezier[4][4];
    // -> static float sBasisHermite[4][4];
}
// Range: 0x80043740 -> 0x80043924
void xSpline3_EvalSeg(class xSpline3 * spl /* r29 */, float u /* f30 */, unsigned int deriv /* r30 */, class xVec3 * o /* r31 */) {
    // Local variables
    class xCoef3 tempCoef; // r1+0x38
    float flr; // f0
    unsigned int seg; // r3

    // References
    // -> static float sBasisBezier[4][4];
    // -> static float sBasisHermite[4][4];
}
// signature: ArcEvalIterate(const xSpline3 *, float, unsigned int, xVec3 *, unsigned int)
// Range: 0x80043930 -> 0x80043C50
static float ArcEvalIterate(float s /* f30 */, unsigned int deriv /* r28 */, class xVec3 * o /* r29 */, unsigned int iterations /* r30 */) {
    // Local variables
    class xCoef3 * coef; // r26
    class xCoef3 tempCoef; // r1+0x8
    float umin; // f31
    float umax; // f27
    float smin; // f26
    float smax; // f25
    float sseg; // f0
    float utest; // f28
    float arctest; // f1
    int min; // r6
    int max; // r7
    int test; // r4
    int seg; // r31
    int segmul; // r6
}
// signature: xSpline3_EvalArcApprox(const xSpline3 *, float, unsigned int, xVec3 *)
// Range: 0x80043C50 -> 0x80043C98
float xSpline3_EvalArcApprox(float s /* f31 */) {
}
// Range: 0x80043CA0 -> 0x80044104
float xSpline3_ProjectPoint(class xSpline3 * spl /* r29 */, class xVec3 * point /* r30 */, class xVec3 * o /* r31 */, float guess /* f26 */) {
    // Local variables
    float length2; // f20
    class xVec3 curve_point; // r1+0x68
    float lower; // f30
    float upper; // f29
    float minLength2; // f28
    float minU; // f27
    class xVec3 minPoint; // r1+0x50

    {
        // Range: 0x80043D14 -> 0x80043DC0
        {
            // Range: 0x80043D48 -> 0x80043DC0
            // Local variables
            float u; // f21

            {
                // Range: 0x80043D48 -> 0x80043DC0
                // Local variables
                float test_length2; // f1
                class xVec3 test_point; // r1+0x5C
            }
        }
    }
    {
        // Range: 0x80043E34 -> 0x80044074
        // Local variables
        int depth; // r27

        {
            // Range: 0x80043E34 -> 0x80044074
            // Local variables
            float denom; // f20
            float last_guess; // f21
            class xVec3 curve_2nd_derivative; // r1+0x2C
            class xVec3 curve_tangent; // r1+0x38
            class xVec3 point_to_curve; // r1+0x44
        }
    }
}
// Range: 0x80044110 -> 0x800442A4
void xSpline3_ArcInit(class xSpline3 * spl /* r30 */, unsigned int sample /* r31 */) {
    // Local variables
    unsigned int i; // r25
    unsigned int seg; // r24
    float len; // f30
    float arcsum; // f29
    class xCoef3 tempCoef; // r1+0x8
    class xCoef3 * coef; // r23

    // References
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x800442B0 -> 0x800443EC
float xSpline3_ArcSeg(class xSpline3 * spl /* r30 */, float u /* f30 */) {
    // Local variables
    unsigned int seg; // r31
    class xCoef3 tempCoef; // r1+0x8
    class xCoef3 * coef; // r3

    {
        // Range: 0x80044324 -> 0x80044374
        // Local variables
        float flr; // f0
    }
}
// Range: 0x800443F0 -> 0x80044534
static class xSpline3 * AllocSpline3(class xVec3 * points /* r24 */, float * time /* r31 */, unsigned int numpoints /* r25 */, unsigned int numalloc /* r29 */, unsigned int flags /* r28 */, unsigned int type /* r27 */) {
    // Local variables
    class xSpline3 * spl; // r26

    // References
    // -> static class xMemWatermark memWatermark;
}
// signature: xSpline3_Bezier(xVec3 *, float *, unsigned int, unsigned int, xVec3 *, xVec3 *)
// Range: 0x80044540 -> 0x80044624
class xSpline3 * xSpline3_Bezier(class xVec3 * p1 /* r26 */, class xVec3 * p2 /* r27 */) {
    // Local variables
    class xSpline3 * spl; // r29

    {
        // Range: 0x800445B4 -> 0x8004460C
        // Local variables
        unsigned int i; // r28
    }

    // References
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x80044630 -> 0x800449DC
void xSpline3_Update(class xSpline3 * spl /* r23 */) {
}
