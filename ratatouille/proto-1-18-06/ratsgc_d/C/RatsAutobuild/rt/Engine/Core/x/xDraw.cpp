/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDraw.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80052330 -> 0x800559A0
*/
// total size: 0x4
struct RwRGBA {
    // Members
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// total size: 0x4
struct xColor_tag {
    // Members
    union { // inferred
        struct { // inferred
            unsigned char r; // offset 0x0, size 0x1
            unsigned char g; // offset 0x1, size 0x1
            unsigned char b; // offset 0x2, size 0x1
            unsigned char a; // offset 0x3, size 0x1
        };
        struct RwRGBA rgba; // offset 0x0, size 0x4
    };
};
static struct xColor_tag sgDrawColor; // size: 0x4, address: 0x80D5F150
static float sph2_yaw; // size: 0x4, address: 0x80D68F40
static unsigned char ctr; // size: 0x1, address: 0x80D68F44
static signed char init; // size: 0x1, address: 0x80D68F45
static unsigned char ctr2; // size: 0x1, address: 0x80D68F46
static signed char init; // size: 0x1, address: 0x80D68F47
struct xColor_tag g_COLOR_TRYME; // size: 0x4, address: 0x80D5EA30
struct xColor_tag g_NEON_BLUE; // size: 0x4, address: 0x80D6C6C0
struct xColor_tag g_COLOR_TRYME2; // size: 0x4, address: 0x80D5EA34
struct xColor_tag g_NEON_RED; // size: 0x4, address: 0x80D6C6B8
struct xColor_tag g_NEON_GREEN; // size: 0x4, address: 0x80D6C6BC
struct xColor_tag g_COLOR_TRYME3; // size: 0x4, address: 0x80D5EA38
struct xColor_tag g_BLACK; // size: 0x4, address: 0x80D6C6A0
// Range: 0x80052330 -> 0x800525A8
void xDrawBegin() {
    // References
    // -> static float sph2_yaw;
    // -> static unsigned char ctr2;
    // -> struct xColor_tag g_COLOR_TRYME3;
    // -> struct xColor_tag g_NEON_RED;
    // -> struct xColor_tag g_BLACK;
    // -> struct xColor_tag g_NEON_BLUE;
    // -> struct xColor_tag g_NEON_GREEN;
    // -> static unsigned char ctr;
    // -> struct xColor_tag g_COLOR_TRYME2;
    // -> static signed char init;
    // -> static signed char init;
    // -> struct xColor_tag g_COLOR_TRYME;
}

// Range: 0x800525A8 -> 0x800525C8
void xDrawEnd() {}

// Range: 0x800525C8 -> 0x80052628
void xDrawSetColor(struct xColor_tag & color /* r30 */) {
    // References
    // -> static struct xColor_tag sgDrawColor;
}

// Range: 0x80052628 -> 0x80052648
void xDrawSetColor(unsigned char r /* r3 */, unsigned char g /* r4 */, unsigned char b /* r5 */, unsigned char a /* r6 */) {
    // References
    // -> static struct xColor_tag sgDrawColor;
}

// Range: 0x80052648 -> 0x800526DC
void xDrawLine(const struct xVec3 * a /* r1+0x8 */, const struct xVec3 * b /* r1+0xC */) {
    // Local variables
    unsigned int indices[2]; // r1+0x14
    struct RwV3d verts[2]; // r1+0x1C

    // References
    // -> static struct xColor_tag sgDrawColor;
}

// Range: 0x800526DC -> 0x800527A0
void xDrawLine(float x1 /* r1+0x8 */, float y1 /* r1+0xC */, float z1 /* r1+0x10 */, float x2 /* r1+0x14 */, float y2 /* r1+0x18 */, float z2 /* r1+0x1C */) {
    // Local variables
    unsigned int indices[2]; // r1+0x24
    struct RwV3d verts[2]; // r1+0x2C

    // References
    // -> static struct xColor_tag sgDrawColor;
}

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
// Range: 0x800527A0 -> 0x800528A4
void xDrawArrow(const struct xVec3 * a /* r30 */, const struct xVec3 * b /* r31 */, const struct xVec3 * n /* r1+0x8 */, unsigned char asRay /* r1+0xC */, float length /* r1+0x10 */) {
    // Local variables
    struct xVec3 btemp; // r1+0x44
    struct xVec3 direction; // r1+0x38
    struct xVec3 base; // r1+0x2C
    struct xVec3 mod; // r1+0x20
    struct xVec3 newB; // r1+0x14
}

static struct xVec3 g_normalXZ; // size: 0xC, address: 0x80D5F154
static struct xVec3 g_normalXY; // size: 0xC, address: 0x80D5F160
// Range: 0x800528A4 -> 0x80052940
void xDrawArrow(const struct xVec3 * from /* r30 */, const struct xVec3 * dir /* r29 */, unsigned char asRay /* r31 */, float length /* f31 */) {
    // Local variables
    struct xVec3 end; // r1+0x8

    // References
    // -> static struct xVec3 g_normalXZ;
}

struct xVec3 g_X3; // size: 0xC, address: 0x80D6D1A4
// Range: 0x80052940 -> 0x80052C9C
void xDrawGrid(const struct xVec3 & c1 /* r26 */, const struct xVec3 & c2 /* r1+0x8 */, const struct xVec3 & up /* r27 */, float spacing_hint /* f30 */) {
    // Local variables
    struct xVec3 diff; // r1+0x48
    struct xVec3 right; // r1+0x3C
    int grid_size_x; // r31
    int grid_size_y; // r30
    float spacing; // f31
    int i; // r29
    struct xVec3 v1; // r1+0x30
    struct xVec3 v2; // r1+0x24
    int j; // r28
    struct xVec3 v1; // r1+0x18
    struct xVec3 v2; // r1+0xC

    // References
    // -> struct xVec3 g_X3;
}

// Range: 0x80052C9C -> 0x80052CE0
void xDrawArrowXY(const struct xVec3 * a /* r1+0x8 */, const struct xVec3 * b /* r1+0xC */, unsigned char asRay /* r1+0x10 */, float length /* r1+0x14 */) {
    // References
    // -> static struct xVec3 g_normalXY;
}

// total size: 0x18
struct rwGameCube2DVertex {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    unsigned char r; // offset 0xC, size 0x1
    unsigned char g; // offset 0xD, size 0x1
    unsigned char b; // offset 0xE, size 0x1
    unsigned char a; // offset 0xF, size 0x1
    float u; // offset 0x10, size 0x4
    float v; // offset 0x14, size 0x4
};
// total size: 0x34
struct RwRaster {
    // Members
    struct RwRaster * parent; // offset 0x0, size 0x4
    unsigned char * cpPixels; // offset 0x4, size 0x4
    unsigned char * palette; // offset 0x8, size 0x4
    int width; // offset 0xC, size 0x4
    int height; // offset 0x10, size 0x4
    int depth; // offset 0x14, size 0x4
    int stride; // offset 0x18, size 0x4
    signed short nOffsetX; // offset 0x1C, size 0x2
    signed short nOffsetY; // offset 0x1E, size 0x2
    unsigned char cType; // offset 0x20, size 0x1
    unsigned char cFlags; // offset 0x21, size 0x1
    unsigned char privateFlags; // offset 0x22, size 0x1
    unsigned char cFormat; // offset 0x23, size 0x1
    unsigned char * originalPixels; // offset 0x24, size 0x4
    int originalWidth; // offset 0x28, size 0x4
    int originalHeight; // offset 0x2C, size 0x4
    int originalStride; // offset 0x30, size 0x4
};
// Range: 0x80052CE0 -> 0x80052E14
void xDrawLine2D(float x1 /* r1+0x8 */, float y1 /* r1+0xC */, float x2 /* r1+0x10 */, float y2 /* r1+0x14 */) {
    // Local variables
    struct rwGameCube2DVertex vtx[2]; // r1+0x24
    float z; // f31
    float rcz; // r1+0x20
    struct RwRaster * raster; // r1+0x1C
    int vae; // r1+0x18

    // References
    // -> static struct xColor_tag sgDrawColor;
}

// total size: 0x8
struct xVec2 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
static int been_here; // size: 0x4, address: 0x80D68F48
static char __FUNCTION__[16]; // size: 0x10, address: 0x80D5F16C
// Range: 0x80052E14 -> 0x80052F7C
void xDrawPolyLine2D(const struct xVec2 * p /* r29 */, unsigned int len /* r27 */) {
    // Local variables
    struct rwGameCube2DVertex * vtx; // r30
    struct rwGameCube2DVertex * vp; // r31
    float z; // f31
    float rcz; // r1+0x8
    int i; // r28

    // References
    // -> static struct xColor_tag sgDrawColor;
    // -> static int been_here;
    // -> static char __FUNCTION__[16];
}

static char __FUNCTION__[14]; // size: 0xE, address: 0x80D5F17C
// total size: 0x8
struct RwObject {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};
// total size: 0x8
struct RwLLLink {
    // Members
    struct RwLLLink * next; // offset 0x0, size 0x4
    struct RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x14
struct RwObjectHasFrame {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLLLink lFrame; // offset 0x8, size 0x8
    struct RwObjectHasFrame * (* sync)(struct RwObjectHasFrame *); // offset 0x10, size 0x4
};
enum RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x40
struct RwMatrixTag {
    // Members
    struct RwV3d right; // offset 0x0, size 0xC
    unsigned int flags; // offset 0xC, size 0x4
    struct RwV3d up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    struct RwV3d at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
    struct RwV3d pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x8
struct RwV2d {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x10
struct RwPlane {
    // Members
    struct RwV3d normal; // offset 0x0, size 0xC
    float distance; // offset 0xC, size 0x4
};
// total size: 0x14
struct RwFrustumPlane {
    // Members
    struct RwPlane plane; // offset 0x0, size 0x10
    unsigned char closestX; // offset 0x10, size 0x1
    unsigned char closestY; // offset 0x11, size 0x1
    unsigned char closestZ; // offset 0x12, size 0x1
    unsigned char pad; // offset 0x13, size 0x1
};
// total size: 0x18
struct RwBBox {
    // Members
    struct RwV3d sup; // offset 0x0, size 0xC
    struct RwV3d inf; // offset 0xC, size 0xC
};
// total size: 0x184
struct RwCamera {
    // Members
    struct RwObjectHasFrame object; // offset 0x0, size 0x14
    enum RwCameraProjection projectionType; // offset 0x14, size 0x4
    struct RwCamera * (* beginUpdate)(struct RwCamera *); // offset 0x18, size 0x4
    struct RwCamera * (* endUpdate)(struct RwCamera *); // offset 0x1C, size 0x4
    struct RwMatrixTag viewMatrix; // offset 0x20, size 0x40
    struct RwRaster * frameBuffer; // offset 0x60, size 0x4
    struct RwRaster * zBuffer; // offset 0x64, size 0x4
    struct RwV2d viewWindow; // offset 0x68, size 0x8
    struct RwV2d recipViewWindow; // offset 0x70, size 0x8
    struct RwV2d viewOffset; // offset 0x78, size 0x8
    float nearPlane; // offset 0x80, size 0x4
    float farPlane; // offset 0x84, size 0x4
    float fogPlane; // offset 0x88, size 0x4
    float zScale; // offset 0x8C, size 0x4
    float zShift; // offset 0x90, size 0x4
    struct RwFrustumPlane frustumPlanes[6]; // offset 0x94, size 0x78
    struct RwBBox frustumBoundBox; // offset 0x10C, size 0x18
    struct RwV3d frustumCorners[8]; // offset 0x124, size 0x60
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
// Range: 0x80052F7C -> 0x80053170
void xDrawCircle2D(float x /* r1+0x8 */, float y /* r1+0xC */, float radius /* f27 */, int segments /* r30 */) {
    // Local variables
    struct rwGameCube2DVertex * verts; // r29
    struct RwCamera * cam; // r28
    float z; // f30
    float rcz; // r1+0x1C
    float dtheta; // f29
    float theta; // f31
    struct rwGameCube2DVertex * v; // r31
    struct rwGameCube2DVertex * end; // r27
    struct RwRaster * old_raster; // r1+0x18
    enum RwBlendFunction old_srcblend; // r1+0x14
    enum RwBlendFunction old_destblend; // r1+0x10

    // References
    // -> static struct xColor_tag sgDrawColor;
    // -> static char __FUNCTION__[14];
}

// total size: 0x10
struct xSphere {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
// Range: 0x80053170 -> 0x800531A8
void xDrawSphere(const struct xSphere * sph /* r31 */, unsigned int flags /* r1+0x8 */) {}

// Range: 0x800531A8 -> 0x800531F0
void xDrawSphere(const struct xVec3 * center /* r31 */, float r /* r1+0x8 */, unsigned int flags /* r1+0xC */) {}

static struct xVec3 v[8]; // size: 0x60, address: 0x80B5E980
// Range: 0x800531F0 -> 0x8005343C
void xDrawBox(const struct xBox * b /* r27 */) {
    // Local variables
    const struct xVec3 * min; // r31
    const struct xVec3 * max; // r30
    int i; // r29
    int i; // r28

    // References
    // -> static struct xVec3 v[8];
}

static struct xVec3 v[8]; // size: 0x60, address: 0x80B5E9E0
// Range: 0x8005343C -> 0x80053708
void xDrawBox(const struct xBox * b /* r28 */, const struct xMat4x3 * mat /* r27 */) {
    // Local variables
    struct xVec3 min; // r1+0x14
    struct xVec3 max; // r1+0x8
    int i; // r30
    int i; // r29
    int i; // r31

    // References
    // -> static struct xVec3 v[8];
}

// total size: 0x50
struct xOBB {
    // Members
    struct xMat4x3 frame; // offset 0x0, size 0x40
    float w; // offset 0x40, size 0x4
    float h; // offset 0x44, size 0x4
    float d; // offset 0x48, size 0x4
};
// total size: 0x18
struct xBox {
    // Members
    struct xVec3 upper; // offset 0x0, size 0xC
    struct xVec3 lower; // offset 0xC, size 0xC
};
// Range: 0x80053708 -> 0x80053774
void xDrawBox(float x1 /* r1+0x8 */, float y1 /* r1+0xC */, float z1 /* r1+0x10 */, float x2 /* r1+0x14 */, float y2 /* r1+0x18 */, float z2 /* r1+0x1C */) {
    // Local variables
    struct xBox b; // r1+0x20
}

static struct xVec3 sphere_pts[50]; // size: 0x258, address: 0x804F2458
// total size: 0x8
struct /* @class$1044xDraw_cpp */ {
    // Members
    unsigned int begin; // offset 0x0, size 0x4
    unsigned int end; // offset 0x4, size 0x4
};
static // total size: 0x8
struct /* @class$1044xDraw_cpp */ {
    // Members
    unsigned int begin; // offset 0x0, size 0x4
    unsigned int end; // offset 0x4, size 0x4
} sphere_segs[144]; // size: 0x480, address: 0x804F26B0
// Range: 0x80053774 -> 0x80053898
void xDrawSphere(float x /* r1+0x8 */, float y /* r1+0xC */, float z /* r1+0x10 */, float r /* f31 */) {
    // Local variables
    struct xVec3 vertices[50]; // r1+0x18
    int i; // r31

    // References
    // -> static // total size: 0x8
struct /* @class$1044xDraw_cpp */ {
    // Members
    unsigned int begin; // offset 0x0, size 0x4
    unsigned int end; // offset 0x4, size 0x4
} sphere_segs[144];
    // -> static struct xColor_tag sgDrawColor;
    // -> static struct xVec3 sphere_pts[50];
}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80D5F18A
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
// Range: 0x80053898 -> 0x80053D14
void xDrawSphere2(float x /* f28 */, float y /* f29 */, float z /* f30 */, float r /* f31 */, unsigned int lod /* r22 */) {
    // Local variables
    unsigned int ninr; // r29
    unsigned int nlverts; // r26
    unsigned int nlidxs; // r25
    struct RwV3d * lverts; // r27
    unsigned int * lidxs; // r28
    unsigned int idx; // r30
    struct xMat3x3 sph_rot; // r1+0x20
    struct xVec3 * v; // r31

    // References
    // -> static struct xColor_tag sgDrawColor;
    // -> static float sph2_yaw;
    // -> static char __FUNCTION__[13];
}

// Range: 0x80053D14 -> 0x80053D58
void xDrawSphere2(const struct xSphere * sph /* r31 */, unsigned int lod /* r1+0x8 */) {}

// Range: 0x80053D58 -> 0x80053DA0
void xDrawSphere2(const struct xVec3 * pos /* r31 */, float r /* r1+0x8 */, unsigned int lod /* r1+0xC */) {}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80D5F197
// total size: 0x40
struct xMat4x3 : public xMat3x3 {
    // Members
    struct xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// Range: 0x80053DA0 -> 0x800542AC
void xDrawCapsule(const struct xVec3 * start /* r20 */, const struct xVec3 * end /* r21 */, float r /* f30 */, unsigned int lod /* r26 */) {
    // Local variables
    unsigned int ninr; // r29
    unsigned int nlverts; // r27
    unsigned int nlidxs; // r25
    struct RwV3d * lverts; // r30
    unsigned int * lidxs; // r28
    unsigned int idx; // r31
    struct xMat4x3 mat; // r1+0x20
    struct xVec3 diff; // r1+0x14
    float len; // f31

    // References
    // -> static struct xColor_tag sgDrawColor;
    // -> static char __FUNCTION__[13];
}

static unsigned int idxs[12][2]; // size: 0x60, address: 0x804F2B30
// Range: 0x800542AC -> 0x80054420
void xDrawOBB(const struct xBox * b /* r31 */, const struct xMat4x3 * m /* r1+0x8 */) {
    // Local variables
    struct xVec3 lverts[8]; // r1+0x70
    struct RwV3d wverts[8]; // r1+0x10
    int i; // r30

    // References
    // -> static unsigned int idxs[12][2];
    // -> static struct xColor_tag sgDrawColor;
}

// Range: 0x80054420 -> 0x800546BC
void xDrawOBBShaded(const struct xBox * b /* r31 */, const struct xMat4x3 * m /* r1+0x8 */) {
    // Local variables
    int i; // r30
    struct xVec3 lverts[8]; // r1+0x84
    struct xVec3 wverts[8]; // r1+0x24
    int cullmode; // r29

    // References
    // -> static struct xColor_tag sgDrawColor;
}

struct xMat4x3 g_I3; // size: 0x40, address: 0x80B7FA80
// Range: 0x800546BC -> 0x80054754
void xDrawCircle(const struct xVec3 * center /* r1+0x10 */, float radius /* r1+0x14 */, unsigned int flags /* r1+0x18 */) {
    // Local variables
    struct xMat4x3 mat; // r1+0x20

    // References
    // -> struct xMat4x3 g_I3;
}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80D5F1A4
// Range: 0x80054754 -> 0x800548E0
void xDrawCircle(const struct xMat4x3 * mat /* r1+0x8 */, float radius /* f29 */, unsigned int flags /* r1+0xC */) {
    // Local variables
    unsigned int num_pts; // r30
    struct xVec3 * ptlist; // r29
    struct xVec3 * tmp_pt; // r28
    struct xVec3 * pt_from; // r27
    struct xVec3 * pt_to; // r26
    float perarc; // f30
    float ang; // f31
    unsigned int i; // r31

    // References
    // -> static char __FUNCTION__[12];
}

// total size: 0x14
struct xCylinder {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
// Range: 0x800548E0 -> 0x80054930
void xDrawCylinder(const struct xVec3 & start /* r1+0x8 */, const struct xVec3 & end /* r1+0xC */, float radius /* f31 */, int sides /* r1+0x10 */, int rings /* r1+0x14 */) {}

// total size: 0x20
class xCone {
    // Members
public:
    struct xVec3 start; // offset 0x0, size 0xC
    struct xVec3 dir; // offset 0xC, size 0xC
    float height; // offset 0x18, size 0x4
    float angle; // offset 0x1C, size 0x4
};
// Range: 0x80054930 -> 0x80054C5C
void xDrawCone(const struct xVec3 & p1 /* r28 */, float r1 /* f24 */, const struct xVec3 & p2 /* r1+0x10 */, float r2 /* f25 */, int sides /* r24 */, int rings /* r25 */) {
    // Local variables
    struct xMat3x3 mat; // r1+0x80
    struct xVec3 at; // r1+0x38
    float mag; // f30
    struct xVec3 loc[2][2]; // r1+0x44
    float dang; // f29
    float dring; // f28
    float ang; // f31
    int i; // r30
    int iend; // r21
    struct xVec3 & loc1; // r31
    struct xVec3 & loc2; // r29
    float ca; // f27
    float sa; // f26
    struct xVec3 & prevloc1; // r27
    const struct xVec3 & prevloc2; // r20
    struct xVec3 dprevloc; // r1+0x2C
    struct xVec3 dcurloc; // r1+0x20
    struct xVec3 curloc; // r1+0x14
    int j; // r26
}

// Range: 0x80054C5C -> 0x80054CB8
void xDrawTri(const struct xVec3 * a /* r29 */, const struct xVec3 * b /* r30 */, const struct xVec3 * c /* r31 */) {}

// total size: 0x3C
struct xQCControl {
    // Members
    float world_xmin; // offset 0x0, size 0x4
    float world_ymin; // offset 0x4, size 0x4
    float world_zmin; // offset 0x8, size 0x4
    float world_xmax; // offset 0xC, size 0x4
    float world_ymax; // offset 0x10, size 0x4
    float world_zmax; // offset 0x14, size 0x4
    float world_xsz; // offset 0x18, size 0x4
    float world_ysz; // offset 0x1C, size 0x4
    float world_zsz; // offset 0x20, size 0x4
    float scale_x; // offset 0x24, size 0x4
    float scale_y; // offset 0x28, size 0x4
    float scale_z; // offset 0x2C, size 0x4
    float center_x; // offset 0x30, size 0x4
    float center_y; // offset 0x34, size 0x4
    float center_z; // offset 0x38, size 0x4
};
// total size: 0x20
struct xQCData {
    // Members
    signed char xmin; // offset 0x0, size 0x1
    signed char ymin; // offset 0x1, size 0x1
    signed char zmin; // offset 0x2, size 0x1
    signed char zmin_dup; // offset 0x3, size 0x1
    signed char xmax; // offset 0x4, size 0x1
    signed char ymax; // offset 0x5, size 0x1
    signed char zmax; // offset 0x6, size 0x1
    signed char zmax_dup; // offset 0x7, size 0x1
    struct xVec3 min; // offset 0x8, size 0xC
    struct xVec3 max; // offset 0x14, size 0xC
};
// total size: 0xA0
struct xConic {
    // Members
    struct xMat4x3 basis; // offset 0x0, size 0x40
    struct xMat4x3 invbasis; // offset 0x40, size 0x40
    float coef[5]; // offset 0x80, size 0x14
    struct xVec3 coneBasisCenter; // offset 0x94, size 0xC
};
// total size: 0x20
struct xFuncPiece {
    // Members
    float coef[5]; // offset 0x0, size 0x14
    float end; // offset 0x14, size 0x4
    int order; // offset 0x18, size 0x4
    struct xFuncPiece * next; // offset 0x1C, size 0x4
};
struct xColor_tag g_BLUE; // size: 0x4, address: 0x80D6C68C
struct xColor_tag g_GREEN; // size: 0x4, address: 0x80D6C688
struct xColor_tag g_RED; // size: 0x4, address: 0x80D6C680
// Range: 0x80054CB8 -> 0x80054E30
void xDrawAxis(const struct xMat4x3 * mat_orient /* r31 */, float scale /* f31 */) {
    // Local variables
    struct xColor_tag prevColor; // r1+0x1C
    struct xVec3 pos_end; // r1+0x20

    // References
    // -> static struct xColor_tag sgDrawColor;
    // -> struct xColor_tag g_RED;
    // -> struct xColor_tag g_GREEN;
    // -> struct xColor_tag g_BLUE;
}

// total size: 0x1C
struct /* @class$1507xDraw_cpp */ {
    // Members
    struct xVec3 start; // offset 0x0, size 0xC
    struct xVec3 end; // offset 0xC, size 0xC
    float length; // offset 0x18, size 0x4
};
static // total size: 0x1C
struct /* @class$1507xDraw_cpp */ {
    // Members
    struct xVec3 start; // offset 0x0, size 0xC
    struct xVec3 end; // offset 0xC, size 0xC
    float length; // offset 0x18, size 0x4
} lists[7]; // size: 0xC4, address: 0x804F2B90
// Range: 0x80054E30 -> 0x80054F48
void xDrawMarker(const struct xVec3 * pos /* r29 */, float size /* r1+0x8 */, unsigned int flags /* r1+0xC */) {
    // Local variables
    struct xVec3 start; // r1+0x1C
    struct xVec3 end; // r1+0x10
    float size2; // f31
    int i; // r31

    // References
    // -> static // total size: 0x1C
struct /* @class$1507xDraw_cpp */ {
    // Members
    struct xVec3 start; // offset 0x0, size 0xC
    struct xVec3 end; // offset 0xC, size 0xC
    float length; // offset 0x18, size 0x4
} lists[7];
}

// Range: 0x80054F48 -> 0x8005519C
void xDrawArc(const struct xMat4x3 & mat /* r26 */, float radius /* r1+0x8 */, float arc_length /* f31 */, int segments /* r31 */) {
    // Local variables
    float dang; // f28
    float sr; // f27
    float cr; // f26
    float x; // f30
    float y; // f29
    struct xVec3 v[2]; // r1+0xC
    int vi; // r30
    int i; // r28
    float xtemp; // f25
    float ytemp; // f24
    const struct xVec3 & v0; // r27
    struct xVec3 & v1; // r29
}

// Range: 0x8005519C -> 0x80055500
void xDrawCard(struct RwRaster * raster /* r29 */, const struct xFRect & src_rect /* r30 */, const struct xFRect & dst_rect /* r31 */, unsigned char zwrite /* r1+0x8 */) {
    // Local variables
    int old_filter; // r1+0x30
    int old_wrap; // r1+0x2C
    int old_fog; // r1+0x28
    int old_cull; // r1+0x24
    int old_zwrite; // r1+0x20
    int old_ztest; // r1+0x1C
    int old_vertalpha; // r1+0x18
    int old_shademode; // r1+0x14
    enum RwBlendFunction old_srcblend; // r1+0x10
    enum RwBlendFunction old_destblend; // r1+0xC
    float rcz; // f31
    float nsz; // f30
    struct rwGameCube2DVertex vert[4]; // r1+0x34
    float x0; // f29
    float x1; // f25
    float y0; // f28
    float y1; // f24
    float uscale; // f23
    float vscale; // f22
    float u0; // f27
    float u1; // f21
    float v0; // f26
    float v1; // f20
}

// Range: 0x80055500 -> 0x80055538
static void set_vert(struct rwGameCube2DVertex & vert /* r3 */, float x /* f1 */, float y /* f2 */, float u /* f3 */, float v /* f4 */, float nsz /* f6 */) {}

// total size: 0x10
struct xFRect {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
// Range: 0x80055538 -> 0x80055654
void xDrawCard(struct RwRaster * raster /* r31 */, float x /* r1+0x8 */, float y /* r1+0xC */, float w /* r1+0x10 */, float h /* r1+0x14 */, unsigned char zwrite /* r1+0x18 */) {
    // Local variables
    struct xFRect dst_rect; // r1+0x2C
    struct xFRect src_rect; // r1+0x1C
}

// total size: 0x8
struct RwLinkList {
    // Members
    struct RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0x18
struct RwTexDictionary {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLinkList texturesInDict; // offset 0x8, size 0x8
    struct RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0x58
struct RwTexture {
    // Members
    struct RwRaster * raster; // offset 0x0, size 0x4
    struct RwTexDictionary * dict; // offset 0x4, size 0x4
    struct RwLLLink lInDictionary; // offset 0x8, size 0x8
    char name[32]; // offset 0x10, size 0x20
    char mask[32]; // offset 0x30, size 0x20
    unsigned int filterAddressing; // offset 0x50, size 0x4
    int refCount; // offset 0x54, size 0x4
};
// Range: 0x80055654 -> 0x800557F4
int Im2DRenderQuad(float x1 /* f26 */, float y1 /* f27 */, float x2 /* f28 */, float y2 /* f29 */, float z /* f30 */, float uvOffset /* f31 */) {
    // Local variables
    struct rwGameCube2DVertex vx[4]; // r1+0x8
}

// Range: 0x800557F4 -> 0x800559A0
int Im2DRenderQuadAlpha(float x1 /* f26 */, float y1 /* f27 */, float x2 /* f28 */, float y2 /* f29 */, float alpha /* r1+0x8 */, float z /* f30 */, float uvOffset /* f31 */) {
    // Local variables
    struct rwGameCube2DVertex vx[4]; // r1+0xC
    unsigned char alphaI; // r31
}


