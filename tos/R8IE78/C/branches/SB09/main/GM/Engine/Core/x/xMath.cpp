/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xMath.cpp
*/
static int xmath_inited; // size: 0x4, address: 0x80720B14
static int xmath_exited; // size: 0x4, address: 0x80720B18
static unsigned int rndseed; // size: 0x4, address: 0x80720B1C
int ct; // size: 0x4, address: 0x8072E3DC
int ct; // size: 0x4, address: 0x8072E3E0
int ct; // size: 0x4, address: 0x8072E3E4
int ct; // size: 0x4, address: 0x8072E3E8
int ct; // size: 0x4, address: 0x8072E3EC
int ct; // size: 0x4, address: 0x8072E3F0
int ct; // size: 0x4, address: 0x8072E3F4
int ct; // size: 0x4, address: 0x8072E3F8
int binom_triangle[528]; // size: 0x840, address: 0x80720B20
// Range: 0x80035F20 -> 0x80035FCC
void xMathInit() {
    // References
    // -> static unsigned int rndseed;
    // -> int binom_triangle[528];
    // -> static int xmath_inited;
}
// signature: xMathSolveQuadratic(float, float, float, float *, float *)
// Range: 0x80035FD0 -> 0x8003611C
unsigned int xMathSolveQuadratic(float a /* f29 */, float * x1 /* r29 */, float * x2 /* r30 */) {
    // Local variables
    float d; // f31
    float dx; // f1
    float p; // f30
}
// signature: xAngleClamp(float)
// Range: 0x80036120 -> 0x80036168
float xAngleClamp() {
    // Local variables
    float b; // f1
}
// signature: xAngleClampFast(float)
// Range: 0x80036170 -> 0x800361AC
float xAngleClampFast() {
}
// signature: xDangleClamp(float)
// Range: 0x800361B0 -> 0x8003621C
float xDangleClamp() {
    // Local variables
    float b; // f1
}
// signature: xFuncPiece_Eval(xFuncPiece *, float, xFuncPiece **)
// Range: 0x80036220 -> 0x800362B0
float xFuncPiece_Eval() {
    // Local variables
    float result; // f2
    int i; // r6
}
// signature: xFuncPiece_Derivative(xFuncPiece *, xFuncPiece *)
// Range: 0x800362B0 -> 0x80036360
void xFuncPiece_Derivative() {
    // Local variables
    int i; // r9
}
// signature: xFuncPiece_EndPointsAllInitial(xFuncPiece *, float, float, float, float, float, float)
// Range: 0x80036360 -> 0x800363BC
void xFuncPiece_EndPointsAllInitial() {
    // Local variables
    float fdiff; // f3
    float xfinv; // f8
    float xfinv2; // f7
    float xfinv3; // f4
}
// signature: xFuncPiece_ShiftPiece(xFuncPiece *, xFuncPiece *, float)
// Range: 0x800363C0 -> 0x800364B0
void xFuncPiece_ShiftPiece() {
    // Local variables
    int i; // r0
    int j; // r11
    class xFuncPiece temp; // r1+0x8
}
// signature: xResponseCurve::reset(unsigned int, const void *, unsigned int)
// Range: 0x800364B0 -> 0x800364C8
void xResponseCurve::reset() {
}
// Range: 0x800364D0 -> 0x800365DC
void xResponseCurve::eval_linear(class xResponseCurve * this /* r28 */, float t /* f31 */, float * value /* r29 */) const {
    // Local variables
    float * end; // r31
    unsigned long stride; // r30
    class inode & n1; // r4
    class inode & n2; // r5
    float dt; // f1
    float u; // f2
    float * v1; // r3
    float * v2; // r4

    {
        // Range: 0x80036514 -> 0x8003657C
        // Local variables
        float * v1; // r3
    }
}
