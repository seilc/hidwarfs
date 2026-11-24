/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xSpline.cpp
*/
static float sBasisBezier[4][4]; // size: 0x40, address: 0x807A22D0
static float sBasisHermite[4][4]; // size: 0x40, address: 0x807A2310
// signature: ArcLength3(xCoef3 *, double, double)
// Range: 0x8007D5A0 -> 0x8007D7D8
static float ArcLength3(double ustart /* f22 */, double uend /* f23 */) {
    // Local variables
    unsigned int i; // r30
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
// Range: 0x8007D7E0 -> 0x8007D970
static void EvalCoef3() {
}
// signature: BasisBspline(float (*)[4], float *)
// Range: 0x8007D970 -> 0x8007DB80
static void BasisBspline() {
    // Local variables
    unsigned int i; // r28
    unsigned int k; // r27
    unsigned int c; // r0

    {
        // Range: 0x8007D9A0 -> 0x8007DB34
        // Local variables
        float Ntemp[4]; // r1+0x8
        float d2; // f12
        float d1; // f11
    }
}
// Range: 0x8007DB80 -> 0x8007E0DC
void xSpline3_EvalSeg(class xSpline3 * spl /* r29 */, float u /* f31 */, unsigned int deriv /* r30 */, class xVec3 * o /* r31 */) {
    // Local variables
    class xCoef3 tempCoef; // r1+0x38
    float flr; // f0
    unsigned int seg; // r3

    // References
    // -> static float sBasisBezier[4][4];
    // -> static float sBasisHermite[4][4];
}
// Range: 0x8007E0E0 -> 0x8007E874
static float ArcEvalIterate(class xSpline3 * spl /* r26 */, float s /* f26 */, unsigned int deriv /* r27 */, class xVec3 * o /* r28 */, unsigned int iterations /* r29 */) {
    // Local variables
    class xCoef3 tempCoef; // r1+0x8
    float umin; // f29
    float umax; // f28
    float smin; // f31
    float smax; // f27
    float sseg; // f0
    float utest; // f30
    float arctest; // f1
    int min; // r6
    int max; // r7
    int test; // r4
    int seg; // r30
    int segmul; // r6

    // References
    // -> static float sBasisBezier[4][4];
    // -> static float sBasisHermite[4][4];
}
// signature: xSpline3_EvalArcApprox(const xSpline3 *, float, unsigned int, xVec3 *)
// Range: 0x8007E880 -> 0x8007E8C8
float xSpline3_EvalArcApprox(float s /* f31 */) {
}
// Range: 0x8007E8D0 -> 0x8007EEA0
float xSpline3_ProjectPoint(class xSpline3 * spl /* r27 */, class xVec3 * point /* r28 */, class xVec3 * o /* r29 */, float guess /* f19 */) {
    // Local variables
    float length2; // f25
    class xVec3 curve_point; // r1+0x68
    float lower; // f24
    float upper; // f23
    float minLength2; // f22
    float minU; // f21
    class xVec3 minPoint; // r1+0x50

    {
        // Range: 0x8007E964 -> 0x8007EA18
        {
            // Range: 0x8007E98C -> 0x8007E990
            // Local variables
            float u; // f21

            {
                // Range: 0x8007E98C -> 0x8007E990
                // Local variables
                float test_length2; // f0
                class xVec3 test_point; // r1+0x5C
            }
        }
    }
    {
        // Range: 0x8007EAB4 -> 0x8007EDE8
        // Local variables
        int depth; // r30

        {
            // Range: 0x8007EAB4 -> 0x8007EDE8
            // Local variables
            float denom; // f5
            float last_guess; // f20
            class xVec3 curve_2nd_derivative; // r1+0x2C
            class xVec3 curve_tangent; // r1+0x38
            class xVec3 point_to_curve; // r1+0x44
        }
    }
}
// Range: 0x8007EEA0 -> 0x8007F63C
void xSpline3_ArcInit(class xSpline3 * spl /* r15 */, unsigned int sample /* r16 */) {
    // Local variables
    unsigned int i; // r18
    unsigned int seg; // r17
    float len; // f29
    float arcsum; // f28
    class xCoef3 tempCoef; // r1+0x8

    // References
    // -> static float sBasisBezier[4][4];
    // -> static float sBasisHermite[4][4];
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x8007F640 -> 0x8007FC74
float xSpline3_ArcSeg(class xSpline3 * spl /* r28 */, float u /* f31 */) {
    // Local variables
    unsigned int seg; // r29
    class xCoef3 tempCoef; // r1+0x8

    {
        // Range: 0x8007F72C -> 0x8007F774
        // Local variables
        float flr; // f0
    }

    // References
    // -> static float sBasisBezier[4][4];
    // -> static float sBasisHermite[4][4];
}
// Range: 0x8007FC80 -> 0x80080218
static class xSpline3 * AllocSpline3(class xVec3 * points /* r25 */, float * time /* r26 */, unsigned int numpoints /* r27 */, unsigned int numalloc /* r31 */, unsigned int flags /* r30 */, unsigned int type /* r29 */) {
    // Local variables
    class xSpline3 * spl; // r28

    // References
    // -> static class xMemWatermark memWatermark;
}
