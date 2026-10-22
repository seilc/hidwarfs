/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
float scale; // size: 0x4, address: 0x0
static signed int xmath_inited; // size: 0x4, address: 0x611E64
static signed int xmath_exited; // size: 0x4, address: 0x0
static unsigned int rndseed; // size: 0x4, address: 0x611E68
signed int binom_triangle[528]; // size: 0x840, address: 0x64CA40
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
// total size: 0x20
class xFuncPiece {
    // Members
public:
    float coef[5]; // offset 0x0, size 0x14
    float end; // offset 0x14, size 0x4
    signed int order; // offset 0x18, size 0x4
    class xFuncPiece * next; // offset 0x1C, size 0x4
};
// total size: 0x4
class node {
    // Members
public:
    float t; // offset 0x0, size 0x4
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
    Code range: 0x0019B0E0 -> 0x0019B3DC
*/
// Range: 0x19B0E0 -> 0x19B3DC
// this: r2
void xResponseCurve::eval_smooth(float t /* r29+0x10 */, float * value /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19B0E0 -> 0x19B3DC
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
    Code range: 0x0019B3E0 -> 0x0019B53C
*/
// Range: 0x19B3E0 -> 0x19B53C
// this: r2
void xResponseCurve::eval_linear(float t /* r29 */, float * value /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19B3E0 -> 0x19B53C
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
    Code range: 0x0019B540 -> 0x0019B554
*/
// Range: 0x19B540 -> 0x19B554
// this: r2
void xResponseCurve::reset(unsigned int values /* r2 */, void * curve /* r2 */, unsigned int nodes /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19B540 -> 0x19B554
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019B560 -> 0x0019B844
*/
// Range: 0x19B560 -> 0x19B844
void xFuncPiece_ShiftPiece(class xFuncPiece * shift /* r2 */, class xFuncPiece * func /* r2 */, float newZero /* r29+0x20 */) {
    /* anonymous block */ {
        // Range: 0x19B560 -> 0x19B844
        signed int i; // r8
        signed int j; // r13
        class xFuncPiece temp; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019B850 -> 0x0019B8B0
*/
// Range: 0x19B850 -> 0x19B8B0
void xFuncPiece_EndPointsAllInitial(class xFuncPiece * func /* r2 */, float pi /* r29 */, float pf /* r29 */, float fi /* r29 */, float ff /* r29 */, float vi /* r29 */, float ai /* r29 */) {
    /* anonymous block */ {
        // Range: 0x19B850 -> 0x19B8B0
        float xfinv; // r29
        float xfinv2; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019B8B0 -> 0x0019B93C
*/
// Range: 0x19B8B0 -> 0x19B93C
void xFuncPiece_EndPointsAndSlopes(class xFuncPiece * func /* r2 */, float pi /* r29 */, float pf /* r29 */, float fi /* r29 */, float ff /* r29 */, float vi /* r29 */, float vf /* r29 */) {
    /* anonymous block */ {
        // Range: 0x19B8B0 -> 0x19B93C
        float fdiff; // r29
        float xfinv; // r29
        float xfinv2; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019B940 -> 0x0019B97C
*/
// Range: 0x19B940 -> 0x19B97C
void xFuncPiece_EndPoints(class xFuncPiece * func /* r2 */, float pi /* r29 */, float pf /* r29 */, float fi /* r29 */, float ff /* r29 */) {
    /* anonymous block */ {
        // Range: 0x19B940 -> 0x19B97C
        float xfinv; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019B980 -> 0x0019BA30
*/
// Range: 0x19B980 -> 0x19BA30
void xFuncPiece_Derivative(class xFuncPiece * deriv /* r2 */, class xFuncPiece * func /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19B980 -> 0x19BA30
        signed int i; // r8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019BA30 -> 0x0019BBA0
*/
// Range: 0x19BA30 -> 0x19BBA0
float xFuncPiece_Eval(class xFuncPiece * func /* r2 */, float param /* r29 */, class xFuncPiece * * iterator /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19BA30 -> 0x19BBA0
        float result; // r29
        signed int i; // r6
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019BBA0 -> 0x0019BCE0
*/
// Range: 0x19BBA0 -> 0x19BCE0
void xAccelStop(float & x /* r2 */, float & v /* r2 */, float a /* r29+0x8 */, float dt /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x19BBA0 -> 0x19BCE0
        float oldv; // r29+0xC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019BCE0 -> 0x0019BFC8
*/
// Range: 0x19BCE0 -> 0x19BFC8
void xAccelMoveRange(float & x /* r17 */, float & v /* r16 */, float accel_min /* r29+0x60 */, float accel_max /* r29+0x60 */, float dt /* r25 */, float endx /* r29+0x60 */, float maxv /* r29+0x60 */) {
    /* anonymous block */ {
        // Range: 0x19BCE0 -> 0x19BFC8
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
    Code range: 0x0019BFD0 -> 0x0019C0D8
*/
// Range: 0x19BFD0 -> 0x19C0D8
void xAccelMove(float & x /* r2 */, float & v /* r2 */, float a /* r29+0x8 */, float dt /* r29+0x10 */, float maxv /* r29+0xC */) {
    /* anonymous block */ {
        // Range: 0x19BFD0 -> 0x19C0D8
        float diff; // r29+0x10
        float dv; // r29+0x10
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C0E0 -> 0x0019C158
*/
// Range: 0x19C0E0 -> 0x19C158
float xAccelMoveTime(float dx /* r29 */, float a /* r29 */, float maxv /* r29 */) {
    /* anonymous block */ {
        // Range: 0x19C0E0 -> 0x19C158
        float time; // r1
        float atime; // r29
        float adist; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C160 -> 0x0019C400
*/
// Range: 0x19C160 -> 0x19C400
void xAccelMove2(float & x /* r17 */, float & v /* r16 */, float decel /* r29+0x60 */, float accel /* r29+0x60 */, float dt /* r25 */, float endx /* r29+0x60 */, float maxv /* r29+0x60 */) {
    /* anonymous block */ {
        // Range: 0x19C160 -> 0x19C400
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
    Code range: 0x0019C400 -> 0x0019C6A4
*/
// Range: 0x19C400 -> 0x19C6A4
void xAccelMove(float & x /* r17 */, float & v /* r16 */, float a /* r25 */, float dt /* r24 */, float endx /* r29+0x60 */, float maxv /* r29+0x60 */) {
    /* anonymous block */ {
        // Range: 0x19C400 -> 0x19C6A4
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
    Code range: 0x0019C6B0 -> 0x0019C81C
*/
// Range: 0x19C6B0 -> 0x19C81C
static void xBinomInit() {
    /* anonymous block */ {
        // Range: 0x19C6B0 -> 0x19C81C
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
    Code range: 0x0019C820 -> 0x0019C890
*/
// Range: 0x19C820 -> 0x19C890
float xDangleClampFast(float a /* r29 */) {
    /* anonymous block */ {
        // Range: 0x19C820 -> 0x19C890
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C890 -> 0x0019C920
*/
// Range: 0x19C890 -> 0x19C920
float xDangleClamp(float a /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x19C890 -> 0x19C920
        float b; // r29+0x10
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C920 -> 0x0019C974
*/
// Range: 0x19C920 -> 0x19C974
float xAngleClampFast(float a /* r29 */) {
    /* anonymous block */ {
        // Range: 0x19C920 -> 0x19C974
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C980 -> 0x0019C9CC
*/
// Range: 0x19C980 -> 0x19C9CC
float xAngleClamp(float a /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x19C980 -> 0x19C9CC
        float b; // r29+0x10
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C9D0 -> 0x0019CAD4
*/
// Range: 0x19C9D0 -> 0x19CAD4
unsigned int xMathSolveQuadratic(float a /* r29 */, float b /* r29 */, float c /* r29 */, float * x1 /* r2 */, float * x2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19C9D0 -> 0x19CAD4
        float d; // r29
        float dx; // r29
        float p; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019CAE0 -> 0x0019CAE8
*/
// Range: 0x19CAE0 -> 0x19CAE8
float xatof(char * x /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19CAE0 -> 0x19CAE8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019CAF0 -> 0x0019CB1C
*/
// Range: 0x19CAF0 -> 0x19CB1C
void xMathInit() {
    /* anonymous block */ {
        // Range: 0x19CAF0 -> 0x19CB1C
    }
}


