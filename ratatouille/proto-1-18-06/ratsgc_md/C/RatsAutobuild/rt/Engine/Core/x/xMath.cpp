/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80044330 -> 0x80044FC0
*/
static int xmath_inited; // size: 0x4, address: 0x803C1000
static int xmath_exited; // size: 0x4, address: 0x803C1004
static unsigned int rndseed; // size: 0x4, address: 0x803C1008
// Range: 0x80044330 -> 0x8004436C
void xMathInit() {
    // References
    // -> static unsigned int rndseed;
    // -> static int xmath_inited;
}

// Range: 0x8004436C -> 0x80044384
void xMathExit() {
    // References
    // -> static int xmath_exited;
}

// Range: 0x80044384 -> 0x800444A4
unsigned int xMathSolveQuadratic(float a /* f30 */, float b /* f0 */, float c /* f0 */, float * x1 /* r30 */, float * x2 /* r31 */) {
    // Local variables
    float d; // f1
    float dx; // f1
    float p; // f31
}

// Range: 0x800444A4 -> 0x800444DC
float xAngleClamp(float a /* f0 */) {
    // Local variables
    float b; // f1
}

// Range: 0x800444DC -> 0x8004450C
float xAngleClampFast(float a /* f1 */) {}

// Range: 0x8004450C -> 0x80044560
float xDangleClamp(float a /* f0 */) {
    // Local variables
    float b; // f1
}

int binom_triangle[528]; // size: 0x840, address: 0x80311808
// Range: 0x80044560 -> 0x800445F0
static void xBinomInit() {
    // Local variables
    int * row0; // r6
    int * row1; // r7
    int i; // r8
    const int * col00; // r6
    const int * col01; // r9
    int * col1; // r10
    int * end_col1; // r0

    // References
    // -> int binom_triangle[528];
}

// Range: 0x800445F0 -> 0x800448DC
void xAccelMove(float & x /* r30 */, float & v /* r31 */, float a /* f25 */, float dt /* f26 */, float endx /* f27 */, float maxv /* f4 */) {
    // Local variables
    float offset; // f29
    float t2; // f28
    float oldv; // f0
    float dv; // f2
    float newv; // f1
    float adx; // f0
    float diff; // f1
    float dx; // f2
}

// Range: 0x800448DC -> 0x80044964
float xFuncPiece_Eval(struct xFuncPiece * func /* r3 */, float param /* f0 */, struct xFuncPiece * * iterator /* r0 */) {
    // Local variables
    float result; // f2
    int i; // r6
}

// Range: 0x80044964 -> 0x80044A0C
void xFuncPiece_Derivative(struct xFuncPiece * deriv /* r3 */, struct xFuncPiece * func /* r4 */) {
    // Local variables
    int i; // r8
}

// Range: 0x80044A0C -> 0x80044A60
void xFuncPiece_EndPoints(struct xFuncPiece * func /* r3 */, float pi /* f1 */, float pf /* f0 */, float fi /* f0 */, float ff /* f0 */) {
    // Local variables
    float xfinv; // f2
}

// Range: 0x80044A60 -> 0x80044AEC
void xFuncPiece_EndPointsAndSlopes(struct xFuncPiece * func /* r3 */, float pi /* f1 */, float pf /* f0 */, float fi /* f0 */, float ff /* f0 */, float vi /* f0 */, float vf /* f0 */) {
    // Local variables
    float fdiff; // f10
    float xfinv; // f2
    float xfinv2; // f5
}

// Range: 0x80044AEC -> 0x80044B60
void xFuncPiece_EndPointsAllInitial(struct xFuncPiece * func /* r3 */, float pi /* f1 */, float pf /* f0 */, float fi /* f0 */, float ff /* f0 */, float vi /* f0 */, float ai /* f0 */) {
    // Local variables
    float xfinv; // f7
    float xfinv2; // f0
}

// total size: 0x20
struct xFuncPiece {
    // Members
    float coef[5]; // offset 0x0, size 0x14
    float end; // offset 0x14, size 0x4
    int order; // offset 0x18, size 0x4
    struct xFuncPiece * next; // offset 0x1C, size 0x4
};
// Range: 0x80044B60 -> 0x80044C50
void xFuncPiece_ShiftPiece(struct xFuncPiece * shift /* r0 */, struct xFuncPiece * func /* r0 */, float newZero /* f0 */) {
    // Local variables
    int i; // r8
    int j; // r10
    struct xFuncPiece temp; // r1+0x8
}

// total size: 0x4
struct node {
    // Members
    float t; // offset 0x0, size 0x4
};
// total size: 0x8
struct inode : public node {
    // Members
    float value[1]; // offset 0x4, size 0x4
};
// total size: 0x8
struct substr {
    // Members
    const char * text; // offset 0x0, size 0x4
    unsigned long size; // offset 0x4, size 0x4
};
// total size: 0xC
struct /* @class$693xMath_cpp */ {
    // Members
    int value_def; // offset 0x0, size 0x4
    int value_min; // offset 0x4, size 0x4
    int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$694xMath_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int value_min; // offset 0x4, size 0x4
    unsigned int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$695xMath_cpp */ {
    // Members
    float value_def; // offset 0x0, size 0x4
    float value_min; // offset 0x4, size 0x4
    float value_max; // offset 0x8, size 0x4
};
// total size: 0x1
struct /* @class$696xMath_cpp */ {
    // Members
    unsigned char value_def; // offset 0x0, size 0x1
};
// total size: 0x10
struct /* @class$697xMath_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int labels_size; // offset 0x4, size 0x4
    const char * * labels; // offset 0x8, size 0x4
    void * values; // offset 0xC, size 0x4
};
// total size: 0x8
struct /* @class$698xMath_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int mask; // offset 0x4, size 0x4
};
// total size: 0x10
struct /* @class$699xMath_cpp */ {
    // Members
    unsigned char pad[16]; // offset 0x0, size 0x10
};
// total size: 0x28
struct tweak_info {
    // Members
    struct substr name; // offset 0x0, size 0x8
    void * value; // offset 0x8, size 0x4
    const struct tweak_callback * cb; // offset 0xC, size 0x4
    void * context; // offset 0x10, size 0x4
    unsigned char type; // offset 0x14, size 0x1
    unsigned char value_size; // offset 0x15, size 0x1
    unsigned short flags; // offset 0x16, size 0x2
    union { // inferred
        // total size: 0xC
        struct /* @class$693xMath_cpp */ {
            // Members
            int value_def; // offset 0x0, size 0x4
            int value_min; // offset 0x4, size 0x4
            int value_max; // offset 0x8, size 0x4
        } int_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$694xMath_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int value_min; // offset 0x4, size 0x4
            unsigned int value_max; // offset 0x8, size 0x4
        } uint_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$695xMath_cpp */ {
            // Members
            float value_def; // offset 0x0, size 0x4
            float value_min; // offset 0x4, size 0x4
            float value_max; // offset 0x8, size 0x4
        } float_context; // offset 0x18, size 0xC
        // total size: 0x1
        struct /* @class$696xMath_cpp */ {
            // Members
            unsigned char value_def; // offset 0x0, size 0x1
        } bool_context; // offset 0x18, size 0x1
        // total size: 0x10
        struct /* @class$697xMath_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int labels_size; // offset 0x4, size 0x4
            const char * * labels; // offset 0x8, size 0x4
            void * values; // offset 0xC, size 0x4
        } select_context; // offset 0x18, size 0x10
        // total size: 0x8
        struct /* @class$698xMath_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int mask; // offset 0x4, size 0x4
        } flag_context; // offset 0x18, size 0x8
        // total size: 0x10
        struct /* @class$699xMath_cpp */ {
            // Members
            unsigned char pad[16]; // offset 0x0, size 0x10
        } all_context; // offset 0x18, size 0x10
    };
};
// total size: 0x28
struct tweak_callback {
    // Members
    void (* on_change)(struct tweak_info &); // offset 0x0, size 0x4
    void (* on_select)(struct tweak_info &); // offset 0x4, size 0x4
    void (* on_unselect)(struct tweak_info &); // offset 0x8, size 0x4
    void (* on_start_edit)(struct tweak_info &); // offset 0xC, size 0x4
    void (* on_stop_edit)(struct tweak_info &); // offset 0x10, size 0x4
    void (* on_expand)(struct tweak_info &); // offset 0x14, size 0x4
    void (* on_collapse)(struct tweak_info &); // offset 0x18, size 0x4
    void (* on_update)(struct tweak_info &); // offset 0x1C, size 0x4
    void (* convert_mem_to_tweak)(struct tweak_info &, void *); // offset 0x20, size 0x4
    void (* convert_tweak_to_mem)(struct tweak_info &, void *); // offset 0x24, size 0x4
};
// total size: 0x10
struct xResponseCurve {
    // Functions
    void reset(unsigned int values, void * curve, unsigned int nodes);

    void eval_linear(float t, float * value) const;

    void eval_smooth(float t, float * value) const;

    // Members
private:
    unsigned int _values; // offset 0x0, size 0x4
    const struct inode * curve; // offset 0x4, size 0x4
    unsigned int _nodes; // offset 0x8, size 0x4
    unsigned int active_node; // offset 0xC, size 0x4
};
// Range: 0x80044C50 -> 0x80044C68
// this: r0
void xResponseCurve::reset(unsigned int values /* r0 */, void * curve /* r0 */, unsigned int nodes /* r0 */) {}

// Range: 0x80044C68 -> 0x80044D60
// this: r28
void xResponseCurve::eval_linear(float t /* f31 */, float * value /* r29 */) const {
    // Local variables
    float * end; // r31
    unsigned long stride; // r30
    const struct inode & n1; // r3
    const struct inode & n2; // r4
    float dt; // f1
    const float * v1; // r3
    float u; // f2
    const float * v1; // r3
    const float * v2; // r4
}

// Range: 0x80044D60 -> 0x80044FC0
// this: r28
void xResponseCurve::eval_smooth(float t /* f31 */, float * value /* r31 */) const {
    // Local variables
    float * end; // r30
    unsigned long stride; // r29
    const struct inode & n1; // r6
    const struct inode & n2; // r7
    float dt; // f4
    const float * v1; // r3
    float u; // f8
    float u2; // f9
    float u3; // f10
    float c0; // f4
    float c1; // f5
    float c2; // f6
    float c3; // f7
    const float * v0; // r4
    const float * v1; // r6
    const float * v2; // r7
    const float * v3; // r3
    float c23; // f3
    const float * v0; // r3
    const float * v1; // r4
    const float * v2; // r6
    float c01; // f3
    const float * v1; // r4
    const float * v2; // r3
    const float * v3; // r6
}


