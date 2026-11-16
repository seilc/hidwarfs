/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int xmath_inited; // size: 0x4, address: 0x50EF38
static signed int xmath_exited; // size: 0x4, address: 0x50EF3C
static unsigned int rndseed; // size: 0x4, address: 0x50EF40
float cosSinPolynomial[]; // size: 0x0, address: 0x4162C0
// total size: 0x20
class xFuncPiece {
    // Members
public:
    float coef[5]; // offset 0x0, size 0x14
    float end; // offset 0x14, size 0x4
    signed int order; // offset 0x18, size 0x4
    class xFuncPiece * next; // offset 0x1C, size 0x4
};

/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EC950 -> 0x001ECA6C
*/
// Range: 0x1EC950 -> 0x1ECA6C
void xFuncPiece_ShiftPiece(class xFuncPiece * shift /* r2 */, class xFuncPiece * func /* r2 */, float newZero /* r29+0x20 */) {
    /* anonymous block */ {
        // Range: 0x1EC950 -> 0x1ECA6C
        signed int i; // r8
        signed int j; // r10
        class xFuncPiece temp; // r29
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ECA70 -> 0x001ECAAC
*/
// Range: 0x1ECA70 -> 0x1ECAAC
void xFuncPiece_EndPoints(class xFuncPiece * func /* r2 */, float pi /* r29 */, float pf /* r29 */, float fi /* r29 */, float ff /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1ECA70 -> 0x1ECAAC
        float xfinv; // r1
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ECAB0 -> 0x001ECB58
*/
// Range: 0x1ECAB0 -> 0x1ECB58
float xFuncPiece_Eval(class xFuncPiece * func /* r2 */, float param /* r29 */, class xFuncPiece * * iterator /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1ECAB0 -> 0x1ECB58
        float result; // r29
        signed int i; // r3
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ECB60 -> 0x001ECCB0
*/
// Range: 0x1ECB60 -> 0x1ECCB0
void xAccelStop(float & x /* r2 */, float & v /* r2 */, float a /* r29+0x4 */, float dt /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x1ECB60 -> 0x1ECCB0
        unsigned int aa; // r29+0xC
        float oldv; // r29+0x8
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ECCB0 -> 0x001ECDE8
*/
// Range: 0x1ECCB0 -> 0x1ECDE8
void xAccelMove(float & x /* r2 */, float & v /* r2 */, float a /* r29 */, float dt /* r29+0x10 */, float maxv /* r29+0x4 */) {
    /* anonymous block */ {
        // Range: 0x1ECCB0 -> 0x1ECDE8
        unsigned int bn; // r10
        unsigned int bp; // r7
        unsigned int aa; // r29+0xC
        unsigned int bn; // r8
        unsigned int bp; // r6
        unsigned int aa; // r29+0x8
        float diff; // r5
        float dv; // r4
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ECDF0 -> 0x001ECE68
*/
// Range: 0x1ECDF0 -> 0x1ECE68
float xAccelMoveTime(float dx /* r29 */, float a /* r29 */, float maxv /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1ECDF0 -> 0x1ECE68
        float time; // r1
        float atime; // r1
        float adist; // r29
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ECE70 -> 0x001ED158
*/
// Range: 0x1ECE70 -> 0x1ED158
void xAccelMove(float & x /* r17 */, float & v /* r16 */, float a /* r24 */, float dt /* r23 */, float endx /* r29+0x60 */, float maxv /* r29+0x60 */) {
    /* anonymous block */ {
        // Range: 0x1ECE70 -> 0x1ED158
        float offset; // r29+0x5C
        float t1; // r22
        float t2; // r21
        float oldv; // r20
        float dv; // r29+0x58
        float newv; // r29+0x54
        float adx; // r1
        float diff; // r1
        float dx; // r29+0x50
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ED160 -> 0x001ED1E4
*/
// Range: 0x1ED160 -> 0x1ED1E4
float xDangleClamp(float a /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x1ED160 -> 0x1ED1E4
        float b; // r29+0x10
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ED1F0 -> 0x001ED240
*/
// Range: 0x1ED1F0 -> 0x1ED240
float xAngleClampFast(float a /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1ED1F0 -> 0x1ED240
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ED240 -> 0x001ED28C
*/
// Range: 0x1ED240 -> 0x1ED28C
float xAngleClamp(float a /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x1ED240 -> 0x1ED28C
        float b; // r29+0x10
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ED290 -> 0x001ED634
*/
// Range: 0x1ED290 -> 0x1ED634
unsigned int xMathSolveCubic(float a /* r29+0x50 */, float b /* r29+0x50 */, float c /* r29+0x50 */, float d /* r29+0x50 */, float * x1 /* r18 */, float * x2 /* r17 */, float * x3 /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1ED290 -> 0x1ED634
        float arecip; // r29+0x50
        float fA; // r4
        float fB; // r3
        float fOffset; // r22
        float fDiscr; // r20
        float fHalfB; // r21
        float fTemp; // r29+0x50
        float fDist; // r20
        float fAngle; // r21
        float fCos; // r21
        float fSin; // r29+0x50
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ED640 -> 0x001ED748
*/
// Range: 0x1ED640 -> 0x1ED748
unsigned int xMathSolveQuadratic(float a /* r29 */, float b /* r29 */, float c /* r29 */, float * x1 /* r2 */, float * x2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1ED640 -> 0x1ED748
        float d; // r4
        float dx; // r1
        float p; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ED750 -> 0x001ED7A8
*/
// Range: 0x1ED750 -> 0x1ED7A8
float xurand() {
    /* anonymous block */ {
        // Range: 0x1ED750 -> 0x1ED7A8
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ED7B0 -> 0x001ED7D0
*/
// Range: 0x1ED7B0 -> 0x1ED7D0
unsigned int xrand() {
    /* anonymous block */ {
        // Range: 0x1ED7B0 -> 0x1ED7D0
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ED7D0 -> 0x001ED7D8
*/
// Range: 0x1ED7D0 -> 0x1ED7D8
void xsrand(unsigned int seed /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1ED7D0 -> 0x1ED7D8
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ED7E0 -> 0x001ED7E8
*/
// Range: 0x1ED7E0 -> 0x1ED7E8
float xatof(char * x /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1ED7E0 -> 0x1ED7E8
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ED7F0 -> 0x001ED808
*/
// Range: 0x1ED7F0 -> 0x1ED808
void xMathExit() {
    /* anonymous block */ {
        // Range: 0x1ED7F0 -> 0x1ED808
    }
}


/*
    Compile unit: C:\SB\Core\x\xMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ED810 -> 0x001ED830
*/
// Range: 0x1ED810 -> 0x1ED830
void xMathInit() {
    /* anonymous block */ {
        // Range: 0x1ED810 -> 0x1ED830
    }
}


