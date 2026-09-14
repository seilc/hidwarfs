/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSplineAsset.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C90EC -> 0x800CA9C0
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
struct RwV3d {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
// Range: 0x800C90EC -> 0x800C91F4
// this: r30
float xNurbs::approximate_length(int divisions /* r31 */) const {
    // Local variables
    float division_size; // f31
    float length; // f30
    struct xVec3 last_point; // r1+0x14
    float t; // f29
    struct xVec3 point; // r1+0x8
}

// Range: 0x800C91F4 -> 0x800C9294
// this: r0
int xNurbs::find_span(float u /* f0 */) const {
    // Local variables
    int low; // r7
    int high; // r5
    int mid; // r3
}

static char __FUNCTION__[21]; // size: 0x15, address: 0x80BFE990
// Range: 0x800C9294 -> 0x800C9590
// this: r23
void xNurbs::find_basis_functions(float u /* f31 */, int i /* r29 */, float * N /* r30 */) const {
    // Local variables
    float left[5]; // r1+0x1C
    float right[5]; // r1+0x8
    int j; // r12
    float saved; // f10
    int r; // r31
    float temp; // f2

    // References
    // -> static char __FUNCTION__[21];
}

static char __FUNCTION__[32]; // size: 0x20, address: 0x8042E3E8
// Range: 0x800C9590 -> 0x800C9C54
// this: r30
void xNurbs::find_derivative_basis_functions(float u /* f31 */, int i /* r14 */, int order /* r31 */, float (* ders)[5] /* r1+0x8 */) const {
    // Local variables
    float ndu[5][5]; // r1+0x5C
    float left[5]; // r1+0x20
    float right[5]; // r1+0xC
    int j; // r19
    float saved; // f4
    int r; // r20
    float temp; // f1
    float a[2][5]; // r1+0x34
    int r; // r20
    int s1; // r19
    int s2; // r18
    int k; // r17
    float d; // f6
    int rk; // r16
    int pk; // r15
    int j1; // r3
    int j2; // r4
    int j; // r3
    int temp; // r0
    int k; // r9
    int j; // r0

    // References
    // -> static char __FUNCTION__[32];
}

// Range: 0x800C9C54 -> 0x800C9C68
// this: r0
float xNurbs::start() const {}

// Range: 0x800C9C68 -> 0x800C9C80
// this: r0
float xNurbs::end() const {}

static char __FUNCTION__[9]; // size: 0x9, address: 0x80BFE9A8
struct xVec3 m_Null; // size: 0xC, address: 0x80C0B540
// Range: 0x800C9C80 -> 0x800C9D98
// this: r27
void xNurbs::evaluate(float u /* f31 */, struct xVec3 & point /* r26 */) const {
    // Local variables
    int span; // r31
    float N[5]; // r1+0x8
    int i; // r27

    // References
    // -> struct xVec3 m_Null;
    // -> static char __FUNCTION__[9];
}

// Range: 0x800C9D98 -> 0x800C9DEC
// this: r4
struct xVec3 xNurbs::evaluate(float u /* f0 */, int d /* r0 */) const {
    // Local variables
    struct xVec3 point; // r1+0x8
}

// Range: 0x800C9DEC -> 0x800C9F2C
// this: r30
void xNurbs::evaluate(float u /* f30 */, int d /* r27 */, struct xVec3 & point /* r26 */) const {
    // Local variables
    int span; // r31
    float ders[5][5]; // r1+0x8
    int j; // r27

    // References
    // -> struct xVec3 m_Null;
}

static char __FUNCTION__[14]; // size: 0xE, address: 0x80BFE9B4
// Range: 0x800C9F2C -> 0x800CA44C
// this: r28
struct xVec3 xNurbs::project_point(const struct xVec3 & point /* r29 */, float * u /* r30 */, float * distance /* r31 */, float guess /* f21 */) const {
    // Local variables
    float length2; // f25
    struct xVec3 curve_point; // r1+0x44
    float interval_distance; // f20
    float u; // f22
    struct xVec3 test_point; // r1+0x38
    float test_length2; // f1
    float minLength2; // f24
    float minU; // f23
    struct xVec3 minPoint; // r1+0x2C
    int depth; // r26
    struct xVec3 point_to_curve; // r1+0x20
    struct xVec3 curve_tangent; // r1+0x14
    struct xVec3 curve_2nd_derivative; // r1+0x8
    float last_guess; // f22
    float denom; // f25

    // References
    // -> static char __FUNCTION__[14];
}

// total size: 0x18
struct xBox {
    // Members
    struct xVec3 upper; // offset 0x0, size 0xC
    struct xVec3 lower; // offset 0xC, size 0xC
};
// Range: 0x800CA44C -> 0x800CA4C4
// this: r29
void xNurbs::getBoundBox(struct xBox & box /* r27 */) const {
    // Local variables
    int i; // r28
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
static struct RxObjSpace3DVertex gSectionVerts[256]; // size: 0x2400, address: 0x80AA2000
static int gTotalSectionVerts; // size: 0x4, address: 0x80C07838
static unsigned char done; // size: 0x1, address: 0x80C0783C
static signed char init; // size: 0x1, address: 0x80C0783D
static char __FUNCTION__[19]; // size: 0x13, address: 0x80BFE9C4
// Range: 0x800CA4C4 -> 0x800CA6A0
void xNurbs::AddCrossSectionPos(struct xVec3 & lastPos /* r30 */, struct xVec3 & centerLinePos /* r31 */, float halfWidth /* f31 */) {
    // Local variables
    struct xVec3 dirVec; // r1+0x20
    float rx; // f0
    struct xVec3 posLeft; // r1+0x14
    struct xVec3 posRight; // r1+0x8
    struct RxObjSpace3DVertex * vp; // r5

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
// Range: 0x800CA6A0 -> 0x800CA87C
// this: r30
void xNurbs::DrawCrossSection(int segments /* r31 */, float width /* f28 */) const {
    // Local variables
    float increment; // f30
    float fstart; // f29
    float fend; // f0
    struct xMat3x3 rotMat; // r1+0x30
    float halfWidth; // f28
    struct xVec3 centerLinePos; // r1+0x24
    struct xVec3 lastPos; // r1+0x18
    float curr; // f29
    enum RwBlendFunction srcBlend; // r1+0x14
    enum RwBlendFunction destBlend; // r1+0x10

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
// Range: 0x800CA87C -> 0x800CA9C0
// this: r29
unsigned char xNurbs::advance_u(float start_u /* f28 */, float distance /* f29 */, unsigned char forward /* r30 */, float & new_u /* r31 */) const {
    // Local variables
    float spline_start; // f31
    float spline_end; // f30
    struct xVec3 velocity_vec; // r1+0x8
    float vel_mag; // f0
}


