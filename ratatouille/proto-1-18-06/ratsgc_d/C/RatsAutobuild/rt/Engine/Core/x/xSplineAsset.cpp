/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSplineAsset.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F6B6C -> 0x800F833C
*/
// total size: 0x8
struct xBaseAsset {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x1C
class xNurbs : public xBaseAsset {
    // Functions
    float approximate_length(int divisions) const;

    int find_span(float u) const;

    void find_basis_functions(float u, int i, float * N) const;

    void find_derivative_basis_functions(float u, int i, int order, float (* ders)[5]) const;

    float start() const;

    float end() const;

    void evaluate(float u, struct xVec3 & point) const;

    struct xVec3 evaluate(float u, int d) const;

    void evaluate(float u, int d, struct xVec3 & point) const;

    struct xVec3 project_point(const struct xVec3 & point, float * u, float * distance, float guess) const;

    void getBoundBox(struct xBox & box) const;

    void DrawCrossSection(int segments, float width) const;

    unsigned char advance_u(float start_u, float distance, unsigned char forward, float & new_u) const;

    // Members
    int degree; // offset 0x8, size 0x4
    int knotMaxIndex; // offset 0xC, size 0x4
    int controlMaxIndex; // offset 0x10, size 0x4
    float * knot; // offset 0x14, size 0x4
    struct xVec3 * control; // offset 0x18, size 0x4
};
// total size: 0xC
struct xVec3 {
    // Static members
    static struct xVec3 m_NegDoubleVec; // size: 0xC
    static struct xVec3 m_DoubleVec; // size: 0xC
    static struct xVec3 m_NegHalfVec; // size: 0xC
    static struct xVec3 m_HalfVec; // size: 0xC
    static struct xVec3 m_UnitAxisZ; // size: 0xC
    static struct xVec3 m_UnitAxisY; // size: 0xC
    static struct xVec3 m_UnitAxisX; // size: 0xC
    static struct xVec3 m_NegOnes; // size: 0xC
    static struct xVec3 m_Ones; // size: 0xC
    static struct xVec3 m_Null; // size: 0xC

    // Members
    union { // inferred
        struct RwV3d m_RwV3d; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
        float a[3]; // offset 0x0, size 0xC
    };
};
// Range: 0x800F6B6C -> 0x800F6C80
// this: r31
float xNurbs::approximate_length(int divisions /* r1+0x8 */) const {
    // Local variables
    float division_size; // f29
    float length; // f30
    struct xVec3 last_point; // r1+0x18
    float t; // f31
    struct xVec3 point; // r1+0xC
}

// Range: 0x800F6C80 -> 0x800F6D5C
// this: r3
int xNurbs::find_span(float u /* f1 */) const {
    // Local variables
    int low; // r30
    int high; // r29
    int mid; // r31
}

static char __FUNCTION__[21]; // size: 0x15, address: 0x80514048
// Range: 0x800F6D5C -> 0x800F6F08
// this: r28
void xNurbs::find_basis_functions(float u /* f29 */, int i /* r27 */, float * N /* r29 */) const {
    // Local variables
    float left[5]; // r1+0x1C
    float right[5]; // r1+0x8
    int j; // r31
    float saved; // f31
    int r; // r30
    float temp; // f30

    // References
    // -> static char __FUNCTION__[21];
}

static char __FUNCTION__[32]; // size: 0x20, address: 0x8051405D
// Range: 0x800F6F08 -> 0x800F73F0
// this: r31
void xNurbs::find_derivative_basis_functions(float u /* f28 */, int i /* r1+0x8 */, int order /* r1+0xC */, float (* ders)[5] /* r20 */) const {
    // Local variables
    float ndu[5][5]; // r1+0x64
    float left[5]; // r1+0x28
    float right[5]; // r1+0x14
    int j; // r30
    float saved; // f30
    int r; // r28
    float temp; // f29
    float a[2][5]; // r1+0x3C
    int r; // r29
    int s1; // r23
    int s2; // r25
    int k; // r27
    float d; // f31
    int rk; // r22
    int pk; // r24
    int j1; // r18
    int j2; // r17
    int j; // r26
    int temp; // r1+0x10
    int k; // r21
    int j; // r19

    // References
    // -> static char __FUNCTION__[32];
}

// Range: 0x800F73F0 -> 0x800F7404
// this: r3
float xNurbs::start() const {}

// Range: 0x800F7404 -> 0x800F741C
// this: r3
float xNurbs::end() const {}

static char __FUNCTION__[9]; // size: 0x9, address: 0x80D61100
struct xVec3 m_Null; // size: 0xC, address: 0x80D6D920
// Range: 0x800F741C -> 0x800F7560
// this: r31
void xNurbs::evaluate(float u /* f31 */, struct xVec3 & point /* r28 */) const {
    // Local variables
    int span; // r29
    float N[5]; // r1+0x8
    int i; // r30

    // References
    // -> struct xVec3 m_Null;
    // -> static char __FUNCTION__[9];
}

// Range: 0x800F7560 -> 0x800F75C0
// this: r1+0x8
struct xVec3 xNurbs::evaluate(float u /* r1+0xC */, int d /* r1+0x10 */) const {
    // Local variables
    struct xVec3 point; // r1+0x14
}

// Range: 0x800F75C0 -> 0x800F772C
// this: r31
void xNurbs::evaluate(float u /* f31 */, int d /* r28 */, struct xVec3 & point /* r27 */) const {
    // Local variables
    int span; // r29
    float ders[5][5]; // r1+0x8
    int j; // r30

    // References
    // -> struct xVec3 m_Null;
}

static char __FUNCTION__[14]; // size: 0xE, address: 0x80D61109
// Range: 0x800F772C -> 0x800F7C94
// this: r31
struct xVec3 xNurbs::project_point(const struct xVec3 & point /* r28 */, float * u /* r29 */, float * distance /* r30 */, float guess /* f31 */) const {
    // Local variables
    float length2; // f30
    struct xVec3 curve_point; // r1+0x44
    float interval_distance; // f20
    float u; // f29
    struct xVec3 test_point; // r1+0x38
    float test_length2; // f25
    float minLength2; // f28
    float minU; // f27
    struct xVec3 minPoint; // r1+0x2C
    int depth; // r26
    struct xVec3 point_to_curve; // r1+0x20
    struct xVec3 curve_tangent; // r1+0x14
    struct xVec3 curve_2nd_derivative; // r1+0x8
    float last_guess; // f24
    float denom; // f26

    // References
    // -> static char __FUNCTION__[14];
}

// total size: 0x18
struct xBox {
    // Members
    struct xVec3 upper; // offset 0x0, size 0xC
    struct xVec3 lower; // offset 0xC, size 0xC
};
// Range: 0x800F7C94 -> 0x800F7D18
// this: r31
void xNurbs::getBoundBox(struct xBox & box /* r29 */) const {
    // Local variables
    int i; // r30
}

// total size: 0x24
struct RxObjSpace3DVertex {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float nx; // offset 0xC, size 0x4
    float ny; // offset 0x10, size 0x4
    float nz; // offset 0x14, size 0x4
    unsigned char r; // offset 0x18, size 0x1
    unsigned char g; // offset 0x19, size 0x1
    unsigned char b; // offset 0x1A, size 0x1
    unsigned char a; // offset 0x1B, size 0x1
    float u; // offset 0x1C, size 0x4
    float v; // offset 0x20, size 0x4
};
static struct RxObjSpace3DVertex gSectionVerts[256]; // size: 0x2400, address: 0x80BA4540
static int gTotalSectionVerts; // size: 0x4, address: 0x80D69930
static unsigned char done; // size: 0x1, address: 0x80D69934
static signed char init; // size: 0x1, address: 0x80D69935
static char __FUNCTION__[19]; // size: 0x13, address: 0x80D61117
// total size: 0xC
struct RwV3d {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x4
struct RwRGBA {
    // Members
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// Range: 0x800F7D18 -> 0x800F7FFC
void xNurbs::AddCrossSectionPos(struct xVec3 & lastPos /* r1+0x8 */, struct xVec3 & centerLinePos /* r30 */, float halfWidth /* r1+0xC */) {
    // Local variables
    struct xVec3 dirVec; // r1+0x60
    float rx; // f31
    float rz; // f30
    struct xVec3 posLeft; // r1+0x54
    struct xVec3 posRight; // r1+0x48
    struct RxObjSpace3DVertex * vp; // r31
    struct RwV3d tmp; // r1+0x3C
    struct RwRGBA col; // r1+0x14
    struct RwV3d packed; // r1+0x30
    struct RwV3d tmp; // r1+0x24
    struct RwRGBA col; // r1+0x10
    struct RwV3d packed; // r1+0x18

    // References
    // -> static int gTotalSectionVerts;
    // -> static struct RxObjSpace3DVertex gSectionVerts[256];
    // -> static unsigned char done;
    // -> static char __FUNCTION__[19];
    // -> static signed char init;
}

// total size: 0x30
struct xMat3x3 {
    // Members
    struct xVec3 right; // offset 0x0, size 0xC
    int flags; // offset 0xC, size 0x4
    struct xVec3 up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    struct xVec3 at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
};
enum RwBlendFunction {
    rwBLENDNABLEND = 0,
    rwBLENDZERO = 1,
    rwBLENDONE = 2,
    rwBLENDSRCCOLOR = 3,
    rwBLENDINVSRCCOLOR = 4,
    rwBLENDSRCALPHA = 5,
    rwBLENDINVSRCALPHA = 6,
    rwBLENDDESTALPHA = 7,
    rwBLENDINVDESTALPHA = 8,
    rwBLENDDESTCOLOR = 9,
    rwBLENDINVDESTCOLOR = 10,
    rwBLENDSRCALPHASAT = 11,
    rwBLENDFUNCTIONFORCEENUMSIZEINT = 2147483647,
};
// Range: 0x800F7FFC -> 0x800F81EC
// this: r31
void xNurbs::DrawCrossSection(int segments /* r30 */, float width /* r1+0x10 */) const {
    // Local variables
    float increment; // f30
    float fstart; // f29
    float fend; // f28
    struct xMat3x3 rotMat; // r1+0x40
    float halfWidth; // f27
    struct xVec3 centerLinePos; // r1+0x28
    struct xVec3 lastPos; // r1+0x1C
    float curr; // f31
    enum RwBlendFunction srcBlend; // r1+0x18
    enum RwBlendFunction destBlend; // r1+0x14

    // References
    // -> static int gTotalSectionVerts;
    // -> static struct RxObjSpace3DVertex gSectionVerts[256];
}

// total size: 0x40
struct xMat4x3 : public xMat3x3 {
    // Members
    struct xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x14
struct search_end {
    // Members
    float u; // offset 0x0, size 0x4
    struct xVec3 pos; // offset 0x4, size 0xC
    float dist_to_circle; // offset 0x10, size 0x4
};
// Range: 0x800F81EC -> 0x800F833C
// this: r30
unsigned char xNurbs::advance_u(float start_u /* f31 */, float distance /* f27 */, unsigned char forward /* r1+0x8 */, float & new_u /* r31 */) const {
    // Local variables
    float spline_start; // f30
    float spline_end; // f29
    struct xVec3 velocity_vec; // r1+0xC
    float vel_mag; // f28
}


