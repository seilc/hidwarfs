/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80090308 -> 0x8009214C
*/
static int xmath_inited; // size: 0x4, address: 0x80D69298
static int xmath_exited; // size: 0x4, address: 0x80D6929C
static unsigned int rndseed; // size: 0x4, address: 0x80D692A0
// Range: 0x80090308 -> 0x80090344
void xMathInit() {
    // References
    // -> static unsigned int rndseed;
    // -> static int xmath_inited;
}

// Range: 0x80090344 -> 0x8009035C
void xMathExit() {
    // References
    // -> static int xmath_exited;
}

static char __FUNCTION__[10]; // size: 0xA, address: 0x80D5FD60
static char __FUNCTION__[9]; // size: 0x9, address: 0x80D5FD6A
// Range: 0x8009035C -> 0x800904DC
unsigned int xMathSolveQuadratic(float a /* f28 */, float b /* f30 */, float c /* f26 */, float * x1 /* r31 */, float * x2 /* r30 */) {
    // Local variables
    float d; // f29
    float dx; // f31
    float p; // f27
}

// Range: 0x800904DC -> 0x80090534
float xAngleClamp(float a /* r1+0x8 */) {
    // Local variables
    float b; // f31
}

// Range: 0x80090534 -> 0x80090568
float xAngleClampFast(float a /* f1 */) {}

// Range: 0x80090568 -> 0x800905DC
float xDangleClamp(float a /* r1+0x8 */) {
    // Local variables
    float b; // f31
}

int binom_triangle[528]; // size: 0x840, address: 0x80B7F238
// Range: 0x800905DC -> 0x80090680
static void xBinomInit() {
    // Local variables
    int * row0; // r26
    int * row1; // r31
    int i; // r30
    const int * col00; // r28
    const int * col01; // r27
    int * col1; // r29
    int * end_col1; // r25

    // References
    // -> int binom_triangle[528];
}

// Range: 0x80090680 -> 0x800909F4
void xAccelMove(float & x /* r30 */, float & v /* r31 */, float a /* f30 */, float dt /* f23 */, float endx /* f18 */, float maxv /* f24 */) {
    // Local variables
    float offset; // f31
    float t1; // f22
    float t2; // f21
    float oldv; // f25
    float dv; // f27
    float newv; // f29
    float adx; // f28
    float diff; // f20
    float dx; // f26
}

// Range: 0x800909F4 -> 0x80090A9C
float xFuncPiece_Eval(struct xFuncPiece * func /* r3 */, float param /* f1 */, struct xFuncPiece * * iterator /* r4 */) {
    // Local variables
    float result; // f31
    int i; // r31
}

// Range: 0x80090A9C -> 0x80090B50
void xFuncPiece_Derivative(struct xFuncPiece * deriv /* r3 */, struct xFuncPiece * func /* r4 */) {
    // Local variables
    int i; // r31
}

static char __FUNCTION__[21]; // size: 0x15, address: 0x804F56A0
// Range: 0x80090B50 -> 0x80090CDC
void xFuncPiece_EndPoints(struct xFuncPiece * func /* r31 */, float pi /* f31 */, float pf /* f27 */, float fi /* f28 */, float ff /* r1+0x8 */) {
    // Local variables
    float fdiff; // f30
    float xfinv; // f29

    // References
    // -> static char __FUNCTION__[21];
}

static char __FUNCTION__[30]; // size: 0x1E, address: 0x804F56B5
// Range: 0x80090CDC -> 0x80090EE8
void xFuncPiece_EndPointsAndSlopes(struct xFuncPiece * func /* r31 */, float pi /* f27 */, float pf /* f23 */, float fi /* f24 */, float ff /* r1+0x8 */, float vi /* f28 */, float vf /* f25 */) {
    // Local variables
    float fdiff; // f29
    float xfinv; // f31
    float xfinv2; // f30
    float xfinv3; // f26

    // References
    // -> static char __FUNCTION__[30];
}

static char __FUNCTION__[31]; // size: 0x1F, address: 0x804F56D3
// Range: 0x80090EE8 -> 0x800910E4
void xFuncPiece_EndPointsAllInitial(struct xFuncPiece * func /* r31 */, float pi /* f29 */, float pf /* f23 */, float fi /* f24 */, float ff /* r1+0x8 */, float vi /* f25 */, float ai /* f26 */) {
    // Local variables
    float fdiff; // f28
    float xfinv; // f31
    float xfinv2; // f30
    float xfinv3; // f27

    // References
    // -> static char __FUNCTION__[31];
}

static char __FUNCTION__[22]; // size: 0x16, address: 0x804F56F2
// total size: 0x20
struct xFuncPiece {
    // Members
    float coef[5]; // offset 0x0, size 0x14
    float end; // offset 0x14, size 0x4
    int order; // offset 0x18, size 0x4
    struct xFuncPiece * next; // offset 0x1C, size 0x4
};
// Range: 0x800910E4 -> 0x800912F4
void xFuncPiece_ShiftPiece(struct xFuncPiece * shift /* r29 */, struct xFuncPiece * func /* r31 */, float newZero /* f31 */) {
    // Local variables
    int i; // r30
    int j; // r28
    struct xFuncPiece temp; // r1+0x8

    // References
    // -> static char __FUNCTION__[22];
}

static char __FUNCTION__[6]; // size: 0x6, address: 0x80D5FD73
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
// Range: 0x800912F4 -> 0x800913AC
// this: r31
void xResponseCurve::reset(unsigned int values /* r1+0x8 */, void * curve /* r1+0xC */, unsigned int nodes /* r1+0x10 */) {
    // References
    // -> static char __FUNCTION__[6];
}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80D5FD79
// Range: 0x800913AC -> 0x80091620
// this: r30
void xResponseCurve::eval_linear(float t /* f30 */, float * value /* r31 */) const {
    // Local variables
    float * end; // r23
    unsigned long stride; // r25
    const struct inode & n1; // r29
    const struct inode & n2; // r24
    float dt; // f31
    const float * v1; // r27
    float u; // f29
    const float * v1; // r28
    const float * v2; // r26

    // References
    // -> static char __FUNCTION__[12];
}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80D5FD85
// Range: 0x80091620 -> 0x80091B08
// this: r31
void xResponseCurve::eval_smooth(float t /* f28 */, float * value /* r30 */) const {
    // Local variables
    float * end; // r27
    unsigned long stride; // r1+0x2C
    const struct inode & n1; // r29
    const struct inode & n2; // r28
    float dt; // f27
    const float * v1; // r26
    float u; // f31
    float u2; // f30
    float u3; // f29
    float c0; // f26
    float c1; // f25
    float c2; // f24
    float c3; // f23
    const struct inode & n0; // r1+0x28
    const struct inode & n3; // r1+0x24
    const float * v0; // r25
    const float * v1; // r24
    const float * v2; // r23
    const float * v3; // r22
    float c23; // f22
    const struct inode & n0; // r1+0x20
    const float * v0; // r21
    const float * v1; // r20
    const float * v2; // r19
    float c01; // f21
    const struct inode & n3; // r1+0x1C
    const float * v1; // r18
    const float * v2; // r17
    const float * v3; // r1+0x18

    // References
    // -> static char __FUNCTION__[12];
}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80D5FD91
// Range: 0x80091B08 -> 0x80091DF8
// this: r31
void xResponseCurve::add_tweaks(const char * tweak_prefix /* r1+0x18 */, const char * * value_names /* r27 */, const struct tweak_callback * cb /* r28 */, void * cb_context /* r1+0x1C */) {
    // Local variables
    unsigned long i; // r30
    unsigned long i; // r29
    const char * prefix; // r26

    // References
    // -> static char __FUNCTION__[11];
}

// total size: 0xC
struct /* @class$734xMath_cpp */ {
    // Members
    int value_def; // offset 0x0, size 0x4
    int value_min; // offset 0x4, size 0x4
    int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$735xMath_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int value_min; // offset 0x4, size 0x4
    unsigned int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$736xMath_cpp */ {
    // Members
    float value_def; // offset 0x0, size 0x4
    float value_min; // offset 0x4, size 0x4
    float value_max; // offset 0x8, size 0x4
};
// total size: 0x1
struct /* @class$737xMath_cpp */ {
    // Members
    unsigned char value_def; // offset 0x0, size 0x1
};
// total size: 0x10
struct /* @class$738xMath_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int labels_size; // offset 0x4, size 0x4
    const char * * labels; // offset 0x8, size 0x4
    void * values; // offset 0xC, size 0x4
};
// total size: 0x8
struct /* @class$739xMath_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int mask; // offset 0x4, size 0x4
};
// total size: 0x10
struct /* @class$740xMath_cpp */ {
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
        struct /* @class$734xMath_cpp */ {
            // Members
            int value_def; // offset 0x0, size 0x4
            int value_min; // offset 0x4, size 0x4
            int value_max; // offset 0x8, size 0x4
        } int_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$735xMath_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int value_min; // offset 0x4, size 0x4
            unsigned int value_max; // offset 0x8, size 0x4
        } uint_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$736xMath_cpp */ {
            // Members
            float value_def; // offset 0x0, size 0x4
            float value_min; // offset 0x4, size 0x4
            float value_max; // offset 0x8, size 0x4
        } float_context; // offset 0x18, size 0xC
        // total size: 0x1
        struct /* @class$737xMath_cpp */ {
            // Members
            unsigned char value_def; // offset 0x0, size 0x1
        } bool_context; // offset 0x18, size 0x1
        // total size: 0x10
        struct /* @class$738xMath_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int labels_size; // offset 0x4, size 0x4
            const char * * labels; // offset 0x8, size 0x4
            void * values; // offset 0xC, size 0x4
        } select_context; // offset 0x18, size 0x10
        // total size: 0x8
        struct /* @class$739xMath_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int mask; // offset 0x4, size 0x4
        } flag_context; // offset 0x18, size 0x8
        // total size: 0x10
        struct /* @class$740xMath_cpp */ {
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
// Range: 0x80091DF8 -> 0x80091FB0
// this: r31
void xResponseCurve::update_node_tweaks() {
    // Local variables
    char prefix[128]; // r1+0x8
    char * tail; // r28
    unsigned long stride; // r23
    unsigned long i; // r30
    char * subtail; // r27
    struct inode & n; // r24
    int name; // r25
    float * v; // r29
    float * endv; // r22
    unsigned long i; // r26
}

// total size: 0x8
struct substr {
    // Members
    const char * text; // offset 0x0, size 0x4
    unsigned long size; // offset 0x4, size 0x4
};
// Range: 0x80091FB0 -> 0x8009203C
// this: r3
void xResponseCurve::format_curve() {
    // Local variables
    unsigned long stride; // r28
    int i; // r31
    struct inode & prev; // r30
    struct inode & n; // r29
}

// Range: 0x8009203C -> 0x800920CC
void xResponseCurve::on_change_nodes(const struct tweak_info & info /* r30 */) {
    // Local variables
    struct xResponseCurve & owner; // r31
    const struct tweak_callback * cb; // r29
}

// Range: 0x800920CC -> 0x8009214C
void xResponseCurve::on_change_t(const struct tweak_info & info /* r30 */) {
    // Local variables
    struct xResponseCurve & owner; // r31
    const struct tweak_callback * cb; // r29
}


