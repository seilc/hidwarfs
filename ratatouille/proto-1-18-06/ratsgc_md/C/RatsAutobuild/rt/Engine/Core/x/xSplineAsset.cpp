/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSplineAsset.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8007114C -> 0x80072320
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
// Range: 0x8007114C -> 0x8007124C
// this: r30
float xNurbs::approximate_length(int divisions /* r31 */) const {
    // Local variables
    float division_size; // f31
    float length; // f30
    struct xVec3 last_point; // r1+0x14
    float t; // f29
    struct xVec3 point; // r1+0x8
}

// Range: 0x8007124C -> 0x800712E4
// this: r0
int xNurbs::find_span(float u /* f0 */) const {
    // Local variables
    int low; // r7
    int high; // r5
    int mid; // r3
}

// Range: 0x800712E4 -> 0x800713AC
// this: r0
void xNurbs::find_basis_functions(float u /* f0 */, int i /* r0 */, float * N /* r0 */) const {
    // Local variables
    float left[5]; // r1+0x1C
    float right[5]; // r1+0x8
    int j; // r31
    float saved; // f5
    int r; // r30
    float temp; // f2
}

// Range: 0x800713AC -> 0x80071714
// this: r0
void xNurbs::find_derivative_basis_functions(float u /* f0 */, int i /* r0 */, int order /* r0 */, float (* ders)[5] /* r0 */) const {
    // Local variables
    float ndu[5][5]; // r1+0x58
    float left[5]; // r1+0x1C
    float right[5]; // r1+0x8
    int j; // r21
    float saved; // f5
    int r; // r22
    float temp; // f2
    float a[2][5]; // r1+0x30
    int r; // r26
    int s1; // r25
    int s2; // r24
    int k; // r23
    float d; // f4
    int rk; // r22
    int pk; // r21
    int j1; // r20
    int j2; // r19
    int j; // r20
    int temp; // r0
    int k; // r11
    int j; // r0
}

// Range: 0x80071714 -> 0x80071728
// this: r0
float xNurbs::start() const {}

// Range: 0x80071728 -> 0x80071740
// this: r0
float xNurbs::end() const {}

struct xVec3 m_Null; // size: 0xC, address: 0x803C5738
// Range: 0x80071740 -> 0x800717EC
// this: r26
void xNurbs::evaluate(float u /* f31 */, struct xVec3 & point /* r25 */) const {
    // Local variables
    int span; // r29
    float N[5]; // r1+0x8
    int i; // r26

    // References
    // -> struct xVec3 m_Null;
}

// Range: 0x800717EC -> 0x80071840
// this: r4
struct xVec3 xNurbs::evaluate(float u /* f0 */, int d /* r0 */) const {
    // Local variables
    struct xVec3 point; // r1+0x8
}

// Range: 0x80071840 -> 0x80071984
// this: r29
void xNurbs::evaluate(float u /* f30 */, int d /* r26 */, struct xVec3 & point /* r25 */) const {
    // Local variables
    int span; // r30
    float ders[5][5]; // r1+0x8
    int j; // r26

    // References
    // -> struct xVec3 m_Null;
}

// Range: 0x80071984 -> 0x80071E38
// this: r26
struct xVec3 xNurbs::project_point(const struct xVec3 & point /* r27 */, float * u /* r28 */, float * distance /* r29 */, float guess /* f21 */) const {
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
    int depth; // r30
    struct xVec3 point_to_curve; // r1+0x20
    struct xVec3 curve_tangent; // r1+0x14
    struct xVec3 curve_2nd_derivative; // r1+0x8
    float last_guess; // f22
    float denom; // f25
}

// total size: 0x18
struct xBox {
    // Members
    struct xVec3 upper; // offset 0x0, size 0xC
    struct xVec3 lower; // offset 0xC, size 0xC
};
// Range: 0x80071E38 -> 0x80071EB0
// this: r30
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
static struct RxObjSpace3DVertex gSectionVerts[256]; // size: 0x2400, address: 0x80333AF0
static int gTotalSectionVerts; // size: 0x4, address: 0x803C14E0
// Range: 0x80071EB0 -> 0x80072000
void xNurbs::AddCrossSectionPos(struct xVec3 & lastPos /* r0 */, struct xVec3 & centerLinePos /* r31 */, float halfWidth /* f31 */) {
    // Local variables
    struct xVec3 dirVec; // r1+0x20
    float rx; // f0
    struct xVec3 posLeft; // r1+0x14
    struct xVec3 posRight; // r1+0x8
    struct RxObjSpace3DVertex * vp; // r5

    // References
    // -> static int gTotalSectionVerts;
    // -> static struct RxObjSpace3DVertex gSectionVerts[256];
}

void * RwEngineInstance; // size: 0x4, address: 0x803C4584
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
// Range: 0x80072000 -> 0x800721EC
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
    // -> void * RwEngineInstance;
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
// Range: 0x800721EC -> 0x80072320
// this: r29
unsigned char xNurbs::advance_u(float start_u /* f28 */, float distance /* f29 */, unsigned char forward /* r30 */, float & new_u /* r31 */) const {
    // Local variables
    float spline_start; // f31
    float spline_end; // f30
    struct xVec3 velocity_vec; // r1+0x8
    float vel_mag; // f0
}


