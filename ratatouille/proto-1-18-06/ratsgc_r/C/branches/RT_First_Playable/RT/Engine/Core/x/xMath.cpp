/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8007A220 -> 0x8007BC90
*/
static int xmath_inited; // size: 0x4, address: 0x80C07438
static int xmath_exited; // size: 0x4, address: 0x80C0743C
static unsigned int rndseed; // size: 0x4, address: 0x80C07440
// Range: 0x8007A220 -> 0x8007A25C
void xMathInit() {
    // References
    // -> static unsigned int rndseed;
    // -> static int xmath_inited;
}

// Range: 0x8007A25C -> 0x8007A274
void xMathExit() {
    // References
    // -> static int xmath_exited;
}

// Range: 0x8007A274 -> 0x8007A39C
unsigned int xMathSolveQuadratic(float a /* f30 */, float b /* f0 */, float c /* f0 */, float * x1 /* r30 */, float * x2 /* r31 */) {
    // Local variables
    float d; // f1
    float dx; // f1
    float p; // f31
}

// Range: 0x8007A39C -> 0x8007A3D4
float xAngleClamp(float a /* f0 */) {
    // Local variables
    float b; // f1
}

// Range: 0x8007A3D4 -> 0x8007A404
float xAngleClampFast(float a /* f1 */) {}

// Range: 0x8007A404 -> 0x8007A458
float xDangleClamp(float a /* f0 */) {
    // Local variables
    float b; // f1
}

int binom_triangle[528]; // size: 0x840, address: 0x80A7CD80
// Range: 0x8007A458 -> 0x8007A58C
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

// Range: 0x8007A58C -> 0x8007A880
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

// Range: 0x8007A880 -> 0x8007A968
float xFuncPiece_Eval(struct xFuncPiece * func /* r3 */, float param /* f0 */, struct xFuncPiece * * iterator /* r0 */) {
    // Local variables
    float result; // f2
    int i; // r6
}

// Range: 0x8007A968 -> 0x8007AA10
void xFuncPiece_Derivative(struct xFuncPiece * deriv /* r3 */, struct xFuncPiece * func /* r4 */) {
    // Local variables
    int i; // r8
}

static char __FUNCTION__[21]; // size: 0x15, address: 0x80BFD248
// Range: 0x8007AA10 -> 0x8007AB60
void xFuncPiece_EndPoints(struct xFuncPiece * func /* r31 */, float pi /* f28 */, float pf /* f29 */, float fi /* f30 */, float ff /* f31 */) {
    // Local variables
    float xfinv; // f2

    // References
    // -> static char __FUNCTION__[21];
}

static char __FUNCTION__[30]; // size: 0x1E, address: 0x80418730
// Range: 0x8007AB60 -> 0x8007AD18
void xFuncPiece_EndPointsAndSlopes(struct xFuncPiece * func /* r31 */, float pi /* f31 */, float pf /* f26 */, float fi /* f27 */, float ff /* f28 */, float vi /* f29 */, float vf /* f30 */) {
    // Local variables
    float fdiff; // f7
    float xfinv; // f6
    float xfinv2; // f7

    // References
    // -> static char __FUNCTION__[30];
}

static char __FUNCTION__[31]; // size: 0x1F, address: 0x80418750
// Range: 0x8007AD18 -> 0x8007AEB8
void xFuncPiece_EndPointsAllInitial(struct xFuncPiece * func /* r31 */, float pi /* f26 */, float pf /* f27 */, float fi /* f28 */, float ff /* f29 */, float vi /* f30 */, float ai /* f31 */) {
    // Local variables
    float xfinv; // f5
    float xfinv2; // f0

    // References
    // -> static char __FUNCTION__[31];
}

static char __FUNCTION__[22]; // size: 0x16, address: 0x80BFD260
// total size: 0x20
struct xFuncPiece {
    // Members
    float coef[5]; // offset 0x0, size 0x14
    float end; // offset 0x14, size 0x4
    int order; // offset 0x18, size 0x4
    struct xFuncPiece * next; // offset 0x1C, size 0x4
};
// Range: 0x8007AEB8 -> 0x8007B08C
void xFuncPiece_ShiftPiece(struct xFuncPiece * shift /* r30 */, struct xFuncPiece * func /* r31 */, float newZero /* f31 */) {
    // Local variables
    int i; // r5
    int j; // r9
    struct xFuncPiece temp; // r1+0x8

    // References
    // -> static char __FUNCTION__[22];
}

static char __FUNCTION__[6]; // size: 0x6, address: 0x80BFD278
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
// total size: 0x3D8
struct debug_data {
    // Members
    char tweak_prefix[128]; // offset 0x0, size 0x80
    char value_names[8][32]; // offset 0x80, size 0x100
    const struct tweak_callback * cb; // offset 0x180, size 0x4
    void * cb_context; // offset 0x184, size 0x4
    unsigned char buffer[512]; // offset 0x188, size 0x200
    struct tweak_callback nodes_cb; // offset 0x388, size 0x28
    struct tweak_callback t_cb; // offset 0x3B0, size 0x28
};
// total size: 0x14
struct xResponseCurve {
    // Functions
    void reset(unsigned int values, void * curve, unsigned int nodes);

    void eval_linear(float t, float * value) const;

    void eval_smooth(float t, float * value) const;

    void add_tweaks(const char * tweak_prefix, const char * * value_names, const struct tweak_callback * cb, void * cb_context);

    void update_node_tweaks();

    void format_curve();

    // Members
private:
    unsigned int _values; // offset 0x0, size 0x4
    const struct inode * curve; // offset 0x4, size 0x4
    unsigned int _nodes; // offset 0x8, size 0x4
    unsigned int active_node; // offset 0xC, size 0x4
    struct debug_data * debug; // offset 0x10, size 0x4
};
// Range: 0x8007B08C -> 0x8007B110
// this: r0
void xResponseCurve::reset(unsigned int values /* r0 */, void * curve /* r0 */, unsigned int nodes /* r0 */) {
    // References
    // -> static char __FUNCTION__[6];
}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80BFD280
// Range: 0x8007B110 -> 0x8007B33C
// this: r30
void xResponseCurve::eval_linear(float t /* f31 */, float * value /* r31 */) const {
    // Local variables
    float * end; // r29
    unsigned long stride; // r28
    const struct inode & n1; // r3
    const struct inode & n2; // r4
    float dt; // f1
    const float * v1; // r3
    float u; // f2
    const float * v1; // r3
    const float * v2; // r4

    // References
    // -> static char __FUNCTION__[12];
}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80BFD28C
// Range: 0x8007B33C -> 0x8007B6DC
// this: r30
void xResponseCurve::eval_smooth(float t /* f31 */, float * value /* r31 */) const {
    // Local variables
    float * end; // r29
    unsigned long stride; // r28
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

    // References
    // -> static char __FUNCTION__[12];
}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80BFD298
// Range: 0x8007B6DC -> 0x8007B9A8
// this: r29
void xResponseCurve::add_tweaks(const char * tweak_prefix /* r26 */, const char * * value_names /* r25 */, const struct tweak_callback * cb /* r30 */, void * cb_context /* r31 */) {
    // Local variables
    unsigned long i; // r26
    unsigned long i; // r25

    // References
    // -> static char __FUNCTION__[11];
}

// total size: 0xC
struct /* @class$930xMath_cpp */ {
    // Members
    int value_def; // offset 0x0, size 0x4
    int value_min; // offset 0x4, size 0x4
    int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$931xMath_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int value_min; // offset 0x4, size 0x4
    unsigned int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$932xMath_cpp */ {
    // Members
    float value_def; // offset 0x0, size 0x4
    float value_min; // offset 0x4, size 0x4
    float value_max; // offset 0x8, size 0x4
};
// total size: 0x1
struct /* @class$933xMath_cpp */ {
    // Members
    unsigned char value_def; // offset 0x0, size 0x1
};
// total size: 0x10
struct /* @class$934xMath_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int labels_size; // offset 0x4, size 0x4
    const char * * labels; // offset 0x8, size 0x4
    void * values; // offset 0xC, size 0x4
};
// total size: 0x8
struct /* @class$935xMath_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int mask; // offset 0x4, size 0x4
};
// total size: 0x10
struct /* @class$936xMath_cpp */ {
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
        struct /* @class$930xMath_cpp */ {
            // Members
            int value_def; // offset 0x0, size 0x4
            int value_min; // offset 0x4, size 0x4
            int value_max; // offset 0x8, size 0x4
        } int_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$931xMath_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int value_min; // offset 0x4, size 0x4
            unsigned int value_max; // offset 0x8, size 0x4
        } uint_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$932xMath_cpp */ {
            // Members
            float value_def; // offset 0x0, size 0x4
            float value_min; // offset 0x4, size 0x4
            float value_max; // offset 0x8, size 0x4
        } float_context; // offset 0x18, size 0xC
        // total size: 0x1
        struct /* @class$933xMath_cpp */ {
            // Members
            unsigned char value_def; // offset 0x0, size 0x1
        } bool_context; // offset 0x18, size 0x1
        // total size: 0x10
        struct /* @class$934xMath_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int labels_size; // offset 0x4, size 0x4
            const char * * labels; // offset 0x8, size 0x4
            void * values; // offset 0xC, size 0x4
        } select_context; // offset 0x18, size 0x10
        // total size: 0x8
        struct /* @class$935xMath_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int mask; // offset 0x4, size 0x4
        } flag_context; // offset 0x18, size 0x8
        // total size: 0x10
        struct /* @class$936xMath_cpp */ {
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
// Range: 0x8007B9A8 -> 0x8007BB4C
// this: r28
void xResponseCurve::update_node_tweaks() {
    // Local variables
    char prefix[128]; // r1+0x8
    char * tail; // r31
    unsigned long stride; // r30
    unsigned long i; // r29
    char * subtail; // r26
    struct inode & n; // r24
    float * v; // r24
    float * endv; // r23
    unsigned long i; // r23
}

// total size: 0x8
struct substr {
    // Members
    const char * text; // offset 0x0, size 0x4
    unsigned long size; // offset 0x4, size 0x4
};
// Range: 0x8007BB4C -> 0x8007BBA0
// this: r0
void xResponseCurve::format_curve() {
    // Local variables
    unsigned long stride; // r7
    int i; // r8
    struct inode & prev; // r0
    struct inode & n; // r0
}

// Range: 0x8007BBA0 -> 0x8007BC20
void xResponseCurve::on_change_nodes(const struct tweak_info & info /* r30 */) {
    // Local variables
    struct xResponseCurve & owner; // r31
    const struct tweak_callback * cb; // r4
}

// Range: 0x8007BC20 -> 0x8007BC90
void xResponseCurve::on_change_t(const struct tweak_info & info /* r30 */) {
    // Local variables
    struct xResponseCurve & owner; // r31
    const struct tweak_callback * cb; // r4
}


