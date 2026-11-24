/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xMath.cpp
*/
static int xmath_inited; // size: 0x4, address: 0x80758100
static int xmath_exited; // size: 0x4, address: 0x80758104
static unsigned int rndseed; // size: 0x4, address: 0x80758108
static int ct; // size: 0x4, address: 0x8075810C
static int ct; // size: 0x4, address: 0x80758110
static int ct; // size: 0x4, address: 0x80758114
static int ct; // size: 0x4, address: 0x80758118
static int ct; // size: 0x4, address: 0x8075811C
static int ct; // size: 0x4, address: 0x80758120
static int ct; // size: 0x4, address: 0x80758124
static int ct; // size: 0x4, address: 0x80758128
int binom_triangle[528]; // size: 0x840, address: 0x80758130
// signature: xAngleClamp(float)
// Range: 0x80049260 -> 0x800492AC
float xAngleClamp() {
    // Local variables
    float b; // f1
}
// signature: xAngleClampFast(float)
// Range: 0x800492B0 -> 0x800492EC
float xAngleClampFast() {
}
// signature: xDangleClamp(float)
// Range: 0x800492F0 -> 0x80049358
float xDangleClamp() {
    // Local variables
    float b; // f1
}
// Range: 0x80049360 -> 0x80049504
static void xBinomInit() {
    // Local variables
    int * row0; // reg65535
    int * row1; // r5

    {
        // Range: 0x80049378 -> 0x800494D8
        // Local variables
        int i; // r6

        {
            // Range: 0x80049378 -> 0x800494D8
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
// Range: 0x80049510 -> 0x80049720
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
        // Range: 0x80049628 -> 0x8004964C
        // Local variables
        float diff; // f5
    }
}
// signature: xResponseCurve::reset(unsigned int, const void *, unsigned int)
// Range: 0x80049720 -> 0x80049738
void xResponseCurve::reset() {
}
// signature: xResponseCurve::eval_linear(float, float *) const
// Range: 0x80049740 -> 0x80049870
void xResponseCurve::eval_linear() const {
    // Local variables
    float * end; // r8
    unsigned long stride; // r9
    class inode * n1; // r5
    class inode * n2; // r6
    float dt; // f2
    float u; // f2
    float * v1; // r3
    float * v2; // r5

    {
        // Range: 0x800497C4 -> 0x8004982C
        // Local variables
        float * v1; // r3
    }
}
