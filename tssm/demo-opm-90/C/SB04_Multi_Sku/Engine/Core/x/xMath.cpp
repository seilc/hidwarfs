/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040F7E0 -> 0x0040F93C
*/
// Range: 0x40F7E0 -> 0x40F93C
// this: r2
void xResponseCurve::eval_linear(float t /* r29 */, float * value /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40F7E0 -> 0x40F93C
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
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040F940 -> 0x0040F954
*/
// Range: 0x40F940 -> 0x40F954
// this: r2
void xResponseCurve::reset(unsigned int values /* r2 */, void * curve /* r2 */, unsigned int nodes /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40F940 -> 0x40F954
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040F960 -> 0x0040FC44
*/
// Range: 0x40F960 -> 0x40FC44
void xFuncPiece_ShiftPiece(class xFuncPiece * shift /* r2 */, class xFuncPiece * func /* r2 */, float newZero /* r29+0x20 */) {
    /* anonymous block */ {
        // Range: 0x40F960 -> 0x40FC44
        signed int i; // r8
        signed int j; // r13
        class xFuncPiece temp; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040FC50 -> 0x0040FC8C
*/
// Range: 0x40FC50 -> 0x40FC8C
void xFuncPiece_EndPoints(class xFuncPiece * func /* r2 */, float pi /* r29 */, float pf /* r29 */, float fi /* r29 */, float ff /* r29 */) {
    /* anonymous block */ {
        // Range: 0x40FC50 -> 0x40FC8C
        float xfinv; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040FC90 -> 0x0040FDD0
*/
// Range: 0x40FC90 -> 0x40FDD0
void xAccelStop(float & x /* r2 */, float & v /* r2 */, float a /* r29+0x8 */, float dt /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x40FC90 -> 0x40FDD0
        float oldv; // r29+0xC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040FDD0 -> 0x0040FED4
*/
// Range: 0x40FDD0 -> 0x40FED4
void xAccelMove(float & x /* r2 */, float & v /* r2 */, float a /* r29+0x8 */, float dt /* r29+0x10 */, float maxv /* r29+0xC */) {
    /* anonymous block */ {
        // Range: 0x40FDD0 -> 0x40FED4
        float diff; // r29+0x10
        float dv; // r29+0x10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040FEE0 -> 0x00410180
*/
// Range: 0x40FEE0 -> 0x410180
void xAccelMove(float & x /* r17 */, float & v /* r16 */, float a /* r25 */, float dt /* r24 */, float endx /* r29+0x60 */, float maxv /* r29+0x60 */) {
    /* anonymous block */ {
        // Range: 0x40FEE0 -> 0x410180
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
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00410180 -> 0x004102EC
*/
// Range: 0x410180 -> 0x4102EC
static void xBinomInit() {
    /* anonymous block */ {
        // Range: 0x410180 -> 0x4102EC
        signed int * row0; // r11
        signed int * row1; // r10
        signed int i; // r9
        signed int * col00; // r2
        signed int * col01; // r8
        signed int * col1; // r7
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004102F0 -> 0x00410380
*/
// Range: 0x4102F0 -> 0x410380
float xDangleClamp(float a /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x4102F0 -> 0x410380
        float b; // r29+0x10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00410380 -> 0x004103D4
*/
// Range: 0x410380 -> 0x4103D4
float xAngleClampFast(float a /* r29 */) {
    /* anonymous block */ {
        // Range: 0x410380 -> 0x4103D4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004103E0 -> 0x0041042C
*/
// Range: 0x4103E0 -> 0x41042C
float xAngleClamp(float a /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x4103E0 -> 0x41042C
        float b; // r29+0x10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00410430 -> 0x004107BC
*/
// Range: 0x410430 -> 0x4107BC
unsigned int xMathSolveCubic(float a /* r29+0x50 */, float b /* r29+0x50 */, float c /* r29+0x50 */, float d /* r29+0x50 */, float * x1 /* r18 */, float * x2 /* r17 */, float * x3 /* r16 */) {
    /* anonymous block */ {
        // Range: 0x410430 -> 0x4107BC
        float arecip; // r29+0x50
        float fA; // r6
        float fB; // r29+0x50
        float fOffset; // r21
        float fDiscr; // r2
        float fHalfB; // r29+0x50
        float fTemp; // r29+0x50
        float fAngle; // r22
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004107C0 -> 0x004108C4
*/
// Range: 0x4107C0 -> 0x4108C4
unsigned int xMathSolveQuadratic(float a /* r29 */, float b /* r29 */, float c /* r29 */, float * x1 /* r2 */, float * x2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4107C0 -> 0x4108C4
        float d; // r29
        float dx; // r29
        float p; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004108D0 -> 0x004108D8
*/
// Range: 0x4108D0 -> 0x4108D8
float xatof(char * x /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4108D0 -> 0x4108D8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004108E0 -> 0x0041090C
*/
// Range: 0x4108E0 -> 0x41090C
void xMathInit() {
    /* anonymous block */ {
        // Range: 0x4108E0 -> 0x41090C
    }
}


