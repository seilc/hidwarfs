/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
float scale; // size: 0x4, address: 0x0
static signed int xmath_inited; // size: 0x4, address: 0x608A54
static signed int xmath_exited; // size: 0x4, address: 0x0
static unsigned int rndseed; // size: 0x4, address: 0x608A58
signed int binom_triangle[528]; // size: 0x840, address: 0x643620
float cosSinPolynomial[]; // size: 0x0, address: 0x0
// total size: 0x10
class xResponseCurve {
    // Members
public:
    unsigned int _values; // offset 0x0, size 0x4
    class inode * curve; // offset 0x4, size 0x4
    unsigned int _nodes; // offset 0x8, size 0x4
    unsigned int active_node; // offset 0xC, size 0x4
};
// total size: 0x4
class node {
    // Members
public:
    float t; // offset 0x0, size 0x4
};
// total size: 0x20
class xFuncPiece {
    // Members
public:
    float coef[5]; // offset 0x0, size 0x14
    float end; // offset 0x14, size 0x4
    signed int order; // offset 0x18, size 0x4
    class xFuncPiece * next; // offset 0x1C, size 0x4
};
// total size: 0x8
class inode : public node {
    // Members
public:
    float value[1]; // offset 0x4, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019A9D0 -> 0x0019ACCC
*/
// Range: 0x19A9D0 -> 0x19ACCC
// this: r2
void xResponseCurve::eval_smooth(float t /* r29+0x10 */, float * value /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19A9D0 -> 0x19ACCC
        float * end; // r2
        unsigned int stride; // r2
        class inode & n1; // r2
        class inode & n2; // r2
        float dt; // r1
        float * v1; // r3
        float u; // r29+0x10
        float u2; // r29+0x10
        float u3; // r29+0x10
        float c0; // r11
        float c1; // r6
        float c2; // r5
        float c3; // r4
        float * v0; // r4
        float * v1; // r9
        float * v2; // r8
        float * v3; // r3
        float c23; // r3
        float * v0; // r3
        float * v1; // r7
        float * v2; // r4
        float c01; // r3
        float * v1; // r8
        float * v2; // r7
        float * v3; // r3
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019ACD0 -> 0x0019AE2C
*/
// Range: 0x19ACD0 -> 0x19AE2C
// this: r2
void xResponseCurve::eval_linear(float t /* r29 */, float * value /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19ACD0 -> 0x19AE2C
        float * end; // r2
        unsigned int stride; // r2
        class inode & n1; // r2
        class inode & n2; // r2
        float dt; // r1
        float * v1; // r4
        float u; // r3
        float * v1; // r7
        float * v2; // r4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019AE30 -> 0x0019AE44
*/
// Range: 0x19AE30 -> 0x19AE44
// this: r2
void xResponseCurve::reset(unsigned int values /* r2 */, void * curve /* r2 */, unsigned int nodes /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19AE30 -> 0x19AE44
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019AE50 -> 0x0019B134
*/
// Range: 0x19AE50 -> 0x19B134
void xFuncPiece_ShiftPiece(class xFuncPiece * shift /* r2 */, class xFuncPiece * func /* r2 */, float newZero /* r29+0x20 */) {
    /* anonymous block */ {
        // Range: 0x19AE50 -> 0x19B134
        signed int i; // r8
        signed int j; // r13
        class xFuncPiece temp; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019B140 -> 0x0019B1A0
*/
// Range: 0x19B140 -> 0x19B1A0
void xFuncPiece_EndPointsAllInitial(class xFuncPiece * func /* r2 */, float pi /* r29 */, float pf /* r29 */, float fi /* r29 */, float ff /* r29 */, float vi /* r29 */, float ai /* r29 */) {
    /* anonymous block */ {
        // Range: 0x19B140 -> 0x19B1A0
        float xfinv; // r29
        float xfinv2; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019B1A0 -> 0x0019B22C
*/
// Range: 0x19B1A0 -> 0x19B22C
void xFuncPiece_EndPointsAndSlopes(class xFuncPiece * func /* r2 */, float pi /* r29 */, float pf /* r29 */, float fi /* r29 */, float ff /* r29 */, float vi /* r29 */, float vf /* r29 */) {
    /* anonymous block */ {
        // Range: 0x19B1A0 -> 0x19B22C
        float fdiff; // r29
        float xfinv; // r29
        float xfinv2; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019B230 -> 0x0019B26C
*/
// Range: 0x19B230 -> 0x19B26C
void xFuncPiece_EndPoints(class xFuncPiece * func /* r2 */, float pi /* r29 */, float pf /* r29 */, float fi /* r29 */, float ff /* r29 */) {
    /* anonymous block */ {
        // Range: 0x19B230 -> 0x19B26C
        float xfinv; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019B270 -> 0x0019B320
*/
// Range: 0x19B270 -> 0x19B320
void xFuncPiece_Derivative(class xFuncPiece * deriv /* r2 */, class xFuncPiece * func /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19B270 -> 0x19B320
        signed int i; // r8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019B320 -> 0x0019B490
*/
// Range: 0x19B320 -> 0x19B490
float xFuncPiece_Eval(class xFuncPiece * func /* r2 */, float param /* r29 */, class xFuncPiece * * iterator /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19B320 -> 0x19B490
        float result; // r29
        signed int i; // r6
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019B490 -> 0x0019B5D0
*/
// Range: 0x19B490 -> 0x19B5D0
void xAccelStop(float & x /* r2 */, float & v /* r2 */, float a /* r29+0x8 */, float dt /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x19B490 -> 0x19B5D0
        float oldv; // r29+0xC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019B5D0 -> 0x0019B8B8
*/
// Range: 0x19B5D0 -> 0x19B8B8
void xAccelMoveRange(float & x /* r17 */, float & v /* r16 */, float accel_min /* r29+0x60 */, float accel_max /* r29+0x60 */, float dt /* r25 */, float endx /* r29+0x60 */, float maxv /* r29+0x60 */) {
    /* anonymous block */ {
        // Range: 0x19B5D0 -> 0x19B8B8
        float offset; // r29+0x5C
        float a; // r24
        float oldv; // r23
        float dv; // r29+0x58
        float newv; // r29+0x54
        float adx; // r29+0x60
        float diff; // r29+0x60
        float dx; // r29+0x50
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019B8C0 -> 0x0019B9C8
*/
// Range: 0x19B8C0 -> 0x19B9C8
void xAccelMove(float & x /* r2 */, float & v /* r2 */, float a /* r29+0x8 */, float dt /* r29+0x10 */, float maxv /* r29+0xC */) {
    /* anonymous block */ {
        // Range: 0x19B8C0 -> 0x19B9C8
        float diff; // r29+0x10
        float dv; // r29+0x10
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019B9D0 -> 0x0019BA48
*/
// Range: 0x19B9D0 -> 0x19BA48
float xAccelMoveTime(float dx /* r29 */, float a /* r29 */, float maxv /* r29 */) {
    /* anonymous block */ {
        // Range: 0x19B9D0 -> 0x19BA48
        float time; // r1
        float atime; // r29
        float adist; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019BA50 -> 0x0019BCF0
*/
// Range: 0x19BA50 -> 0x19BCF0
void xAccelMove2(float & x /* r17 */, float & v /* r16 */, float decel /* r29+0x60 */, float accel /* r29+0x60 */, float dt /* r25 */, float endx /* r29+0x60 */, float maxv /* r29+0x60 */) {
    /* anonymous block */ {
        // Range: 0x19BA50 -> 0x19BCF0
        float offset; // r29+0x5C
        float a; // r24
        float oldv; // r23
        float dv; // r29+0x58
        float newv; // r29+0x54
        float adx; // r29+0x60
        float diff; // r29+0x60
        float dx; // r29+0x50
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019BCF0 -> 0x0019BF94
*/
// Range: 0x19BCF0 -> 0x19BF94
void xAccelMove(float & x /* r17 */, float & v /* r16 */, float a /* r25 */, float dt /* r24 */, float endx /* r29+0x60 */, float maxv /* r29+0x60 */) {
    /* anonymous block */ {
        // Range: 0x19BCF0 -> 0x19BF94
        float offset; // r29+0x5C
        float oldv; // r23
        float dv; // r29+0x58
        float newv; // r29+0x54
        float adx; // r29+0x60
        float diff; // r29+0x60
        float dx; // r29+0x50
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019BFA0 -> 0x0019C10C
*/
// Range: 0x19BFA0 -> 0x19C10C
static void xBinomInit() {
    /* anonymous block */ {
        // Range: 0x19BFA0 -> 0x19C10C
        signed int * row0; // r11
        signed int * row1; // r10
        signed int i; // r9
        signed int * col00; // r2
        signed int * col01; // r8
        signed int * col1; // r7
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C110 -> 0x0019C180
*/
// Range: 0x19C110 -> 0x19C180
float xDangleClampFast(float a /* r29 */) {
    /* anonymous block */ {
        // Range: 0x19C110 -> 0x19C180
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C180 -> 0x0019C210
*/
// Range: 0x19C180 -> 0x19C210
float xDangleClamp(float a /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x19C180 -> 0x19C210
        float b; // r29+0x10
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C210 -> 0x0019C264
*/
// Range: 0x19C210 -> 0x19C264
float xAngleClampFast(float a /* r29 */) {
    /* anonymous block */ {
        // Range: 0x19C210 -> 0x19C264
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C270 -> 0x0019C2BC
*/
// Range: 0x19C270 -> 0x19C2BC
float xAngleClamp(float a /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x19C270 -> 0x19C2BC
        float b; // r29+0x10
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C2C0 -> 0x0019C3C4
*/
// Range: 0x19C2C0 -> 0x19C3C4
unsigned int xMathSolveQuadratic(float a /* r29 */, float b /* r29 */, float c /* r29 */, float * x1 /* r2 */, float * x2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19C2C0 -> 0x19C3C4
        float d; // r29
        float dx; // r29
        float p; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C3D0 -> 0x0019C3D8
*/
// Range: 0x19C3D0 -> 0x19C3D8
float xatof(char * x /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19C3D0 -> 0x19C3D8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C3E0 -> 0x0019C40C
*/
// Range: 0x19C3E0 -> 0x19C40C
void xMathInit() {
    /* anonymous block */ {
        // Range: 0x19C3E0 -> 0x19C40C
    }
}


