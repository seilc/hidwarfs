/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xSpline.cpp
*/
static float sBasisBezier[4][4]; // size: 0x40, address: 0x806F2F78
static float sBasisHermite[4][4]; // size: 0x40, address: 0x806F2FB8
// signature: ArcLength3(xCoef3 *, double, double)
// Range: 0x8005DBE0 -> 0x8005DE18
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
// Range: 0x8005DE20 -> 0x8005DFB0
static void EvalCoef3() {
}
// signature: BasisBspline(float (*)[4], float *)
// Range: 0x8005DFB0 -> 0x8005E1C0
static void BasisBspline() {
    // Local variables
    unsigned int i; // r28
    unsigned int k; // r27
    unsigned int c; // r0

    {
        // Range: 0x8005DFE0 -> 0x8005E174
        // Local variables
        float Ntemp[4]; // r1+0x8
        float d2; // f12
        float d1; // f11
    }
}
// Range: 0x8005E1C0 -> 0x8005E71C
void xSpline3_EvalSeg(class xSpline3 * spl /* r29 */, float u /* f31 */, unsigned int deriv /* r30 */, class xVec3 * o /* r31 */) {
    // Local variables
    class xCoef3 tempCoef; // r1+0x38
    float flr; // f0
    unsigned int seg; // r3

    // References
    // -> static float sBasisBezier[4][4];
    // -> static float sBasisHermite[4][4];
}
// Range: 0x8005E720 -> 0x8005EEB4
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
// Range: 0x8005EEC0 -> 0x8005EF08
float xSpline3_EvalArcApprox(float s /* f31 */) {
}
// Range: 0x8005EF10 -> 0x8005F6AC
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
// Range: 0x8005F6B0 -> 0x8005FC48
static class xSpline3 * AllocSpline3(class xVec3 * points /* r25 */, float * time /* r26 */, unsigned int numpoints /* r27 */, unsigned int numalloc /* r31 */, unsigned int flags /* r30 */, unsigned int type /* r29 */) {
    // Local variables
    class xSpline3 * spl; // r28

    // References
    // -> static class xMemWatermark memWatermark;
}
