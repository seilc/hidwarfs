/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xMath.cpp
*/
static int xmath_inited; // size: 0x4, address: 0x80808DFC
static int xmath_exited; // size: 0x4, address: 0x80808E00
static unsigned int rndseed; // size: 0x4, address: 0x80808E04
static int ct; // size: 0x4, address: 0x80808E08
static int ct; // size: 0x4, address: 0x80808E0C
static int ct; // size: 0x4, address: 0x80808E10
static int ct; // size: 0x4, address: 0x80808E14
static int ct; // size: 0x4, address: 0x80808E18
static int ct; // size: 0x4, address: 0x80808E1C
static int ct; // size: 0x4, address: 0x80808E20
static int ct; // size: 0x4, address: 0x80808E24
int binom_triangle[528]; // size: 0x840, address: 0x80808E28
// signature: xAngleClampFast(float)
// Range: 0x80065740 -> 0x8006577C
float xAngleClampFast() {
}
// signature: xDangleClamp(float)
// Range: 0x80065780 -> 0x800657E8
float xDangleClamp() {
    // Local variables
    float b; // f1
}
// Range: 0x800657F0 -> 0x80065994
static void xBinomInit() {
    // Local variables
    int * row0; // reg65535
    int * row1; // r5

    {
        // Range: 0x80065808 -> 0x80065968
        // Local variables
        int i; // r6

        {
            // Range: 0x80065808 -> 0x80065968
            // Local variables
            int * col1; // r9
            int * col01; // r8
            int * col00; // r7
        }
    }

    // References
    // -> int binom_triangle[528];
}
// signature: xAccelMove(float &, float &, float, float, float, float)
// Range: 0x800659A0 -> 0x80065BB0
void xAccelMove() {
    // Local variables
    float offset; // f0
    float t1; // f0
    float t2; // f0
    float oldv; // f9
    float dv; // f10
    float newv; // f11
    float adx; // f1
    float dx; // f4

    {
        // Range: 0x80065AB8 -> 0x80065ADC
        // Local variables
        float diff; // f5
    }
}
// signature: xFuncPiece_Eval(xFuncPiece *, float, xFuncPiece **)
// Range: 0x80065BB0 -> 0x80065D08
float xFuncPiece_Eval() {
    // Local variables
    float result; // f2
    int i; // r8
}
// signature: xFuncPiece_Derivative(xFuncPiece *, xFuncPiece *)
// Range: 0x80065D10 -> 0x80065DC0
void xFuncPiece_Derivative() {
    // Local variables
    int i; // r9
}
// signature: xFuncPiece_EndPointsAllInitial(xFuncPiece *, float, float, float, float, float, float)
// Range: 0x80065DC0 -> 0x80065E1C
void xFuncPiece_EndPointsAllInitial() {
    // Local variables
    float fdiff; // f3
    float xfinv; // f8
    float xfinv2; // f7
    float xfinv3; // f4
}
// signature: xFuncPiece_ShiftPiece(xFuncPiece *, xFuncPiece *, float)
// Range: 0x80065E20 -> 0x80066144
void xFuncPiece_ShiftPiece() {
    // Local variables
    int i; // r9
    int j; // r7
    class xFuncPiece temp; // r1+0x8
}
// signature: xResponseCurve::reset(unsigned int, const void *, unsigned int)
// Range: 0x80066150 -> 0x80066168
void xResponseCurve::reset() {
}
// signature: xResponseCurve::eval_linear(float, float *) const
// Range: 0x80066170 -> 0x800662A0
void xResponseCurve::eval_linear() const {
    // Local variables
    float * end; // r8
    unsigned long stride; // r9
    class inode & n1; // r5
    class inode & n2; // r6
    float dt; // f2
    float u; // f2
    float * v1; // r3
    float * v2; // r5

    {
        // Range: 0x800661F4 -> 0x8006625C
        // Local variables
        float * v1; // r3
    }
}
