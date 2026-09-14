/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDraw.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80045E08 -> 0x800486F0
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
static struct xColor_tag sgDrawColor; // size: 0x4, address: 0x80BFC4C8
static float sph2_yaw; // size: 0x4, address: 0x80C071D8
// Range: 0x80045E08 -> 0x80045E28
void xDrawBegin() {}

// Range: 0x80045E28 -> 0x80045E48
void xDrawEnd() {}

// Range: 0x80045E48 -> 0x80045E78
void xDrawSetColor(struct xColor_tag & color /* r0 */) {
    // References
    // -> static struct xColor_tag sgDrawColor;
}

// Range: 0x80045E78 -> 0x80045E90
void xDrawSetColor(unsigned char r /* r0 */, unsigned char g /* r0 */, unsigned char b /* r0 */, unsigned char a /* r0 */) {
    // References
    // -> static struct xColor_tag sgDrawColor;
}

// Range: 0x80045E90 -> 0x80045F08
void xDrawLine(const struct xVec3 * a /* r6 */, const struct xVec3 * b /* r31 */) {
    // Local variables
    unsigned int indices[2]; // r1+0xC
    struct RwV3d verts[2]; // r1+0x14

    // References
    // -> static struct xColor_tag sgDrawColor;
}

// Range: 0x80045F08 -> 0x80045F70
void xDrawLine(float x1 /* f0 */, float y1 /* f0 */, float z1 /* f0 */, float x2 /* f0 */, float y2 /* f0 */, float z2 /* f0 */) {
    // Local variables
    unsigned int indices[2]; // r1+0xC
    struct RwV3d verts[2]; // r1+0x14

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
// Range: 0x80045F70 -> 0x80046068
void xDrawArrow(const struct xVec3 * a /* r29 */, const struct xVec3 * b /* r30 */, const struct xVec3 * n /* r31 */, unsigned char asRay /* r0 */, float length /* f0 */) {
    // Local variables
    struct xVec3 btemp; // r1+0x38
    struct xVec3 direction; // r1+0x2C
    struct xVec3 base; // r1+0x20
    struct xVec3 mod; // r1+0x14
    struct xVec3 newB; // r1+0x8
}

static struct xVec3 g_normalXZ; // size: 0xC, address: 0x80BFC4CC
static struct xVec3 g_normalXY; // size: 0xC, address: 0x80BFC4D8
// Range: 0x80046068 -> 0x800460E8
void xDrawArrow(const struct xVec3 * from /* r30 */, const struct xVec3 * dir /* r5 */, unsigned char asRay /* r31 */, float length /* f31 */) {
    // Local variables
    struct xVec3 end; // r1+0x8

    // References
    // -> static struct xVec3 g_normalXZ;
}

struct xVec3 g_X3; // size: 0xC, address: 0x80C0ADAC
// Range: 0x800460E8 -> 0x80046340
void xDrawGrid(const struct xVec3 & c1 /* r25 */, const struct xVec3 & c2 /* r0 */, const struct xVec3 & up /* r26 */, float spacing_hint /* f28 */) {
    // Local variables
    struct xVec3 diff; // r1+0x44
    struct xVec3 right; // r1+0x38
    int grid_size_x; // r29
    int grid_size_y; // r28
    float spacing; // f2
    int i; // r27
    struct xVec3 v1; // r1+0x2C
    struct xVec3 v2; // r1+0x20
    int j; // r27
    struct xVec3 v1; // r1+0x14
    struct xVec3 v2; // r1+0x8

    // References
    // -> struct xVec3 g_X3;
}

// Range: 0x80046340 -> 0x80046368
void xDrawArrowXY(const struct xVec3 * a /* r0 */, const struct xVec3 * b /* r0 */, unsigned char asRay /* r6 */, float length /* f0 */) {
    // References
    // -> static struct xVec3 g_normalXY;
}

void * RwEngineInstance; // size: 0x4, address: 0x80C09F34
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
// Range: 0x80046368 -> 0x800464A0
void xDrawLine2D(float x1 /* f27 */, float y1 /* f28 */, float x2 /* f29 */, float y2 /* f30 */) {
    // Local variables
    struct rwGameCube2DVertex vtx[2]; // r1+0x10
    float z; // f31
    struct RwRaster * raster; // r1+0xC
    int vae; // r1+0x8

    // References
    // -> void * RwEngineInstance;
    // -> static struct xColor_tag sgDrawColor;
}

// total size: 0x8
struct xVec2 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// Range: 0x800464A0 -> 0x8004667C
void xDrawPolyLine2D(const struct xVec2 * p /* r29 */, unsigned int len /* r31 */) {
    // Local variables
    struct rwGameCube2DVertex * vtx; // r30
    struct rwGameCube2DVertex * vp; // r6
    float z; // f2
    int i; // r0

    // References
    // -> void * RwEngineInstance;
    // -> static struct xColor_tag sgDrawColor;
}

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
// Range: 0x8004667C -> 0x80046844
void xDrawCircle2D(float x /* f26 */, float y /* f27 */, float radius /* f28 */, int segments /* r27 */) {
    // Local variables
    struct rwGameCube2DVertex * verts; // r30
    float z; // f31
    float dtheta; // f30
    float theta; // f29
    struct rwGameCube2DVertex * v; // r29
    struct rwGameCube2DVertex * end; // r28
    struct RwRaster * old_raster; // r1+0x10
    enum RwBlendFunction old_srcblend; // r1+0xC
    enum RwBlendFunction old_destblend; // r1+0x8

    // References
    // -> void * RwEngineInstance;
    // -> static struct xColor_tag sgDrawColor;
}

// total size: 0x10
struct xSphere {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
// Range: 0x80046844 -> 0x80046868
void xDrawSphere(const struct xSphere * sph /* r0 */, unsigned int flags /* r0 */) {}

// Range: 0x80046868 -> 0x8004689C
void xDrawSphere(const struct xVec3 * center /* r0 */, float r /* f4 */, unsigned int flags /* r4 */) {}

static struct xVec3 v[8]; // size: 0x60, address: 0x80A5C4E0
// Range: 0x8004689C -> 0x80046A1C
void xDrawBox(const struct xBox * b /* r27 */) {
    // Local variables
    const struct xVec3 * min; // r25
    int i; // r26
    int i; // r26

    // References
    // -> static struct xVec3 v[8];
}

static struct xVec3 v[8]; // size: 0x60, address: 0x80A5C540
// Range: 0x80046A1C -> 0x80046C04
void xDrawBox(const struct xBox * b /* r0 */, const struct xMat4x3 * mat /* r26 */) {
    // Local variables
    struct xVec3 min; // r1+0x14
    struct xVec3 max; // r1+0x8
    int i; // r25
    int i; // r25
    int i; // r25

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
// Range: 0x80046C04 -> 0x80046C40
void xDrawBox(float x1 /* f0 */, float y1 /* f0 */, float z1 /* f0 */, float x2 /* f0 */, float y2 /* f0 */, float z2 /* f0 */) {
    // Local variables
    struct xBox b; // r1+0x8
}

static struct xVec3 sphere_pts[50]; // size: 0x258, address: 0x804156E8
// total size: 0x8
struct /* @class$1324xDraw_cpp */ {
    // Members
    unsigned int begin; // offset 0x0, size 0x4
    unsigned int end; // offset 0x4, size 0x4
};
static // total size: 0x8
struct /* @class$1324xDraw_cpp */ {
    // Members
    unsigned int begin; // offset 0x0, size 0x4
    unsigned int end; // offset 0x4, size 0x4
} sphere_segs[144]; // size: 0x480, address: 0x80415940
// Range: 0x80046C40 -> 0x80046E24
void xDrawSphere(float x /* f0 */, float y /* f0 */, float z /* f0 */, float r /* f0 */) {
    // Local variables
    struct xVec3 vertices[50]; // r1+0xC
    int i; // r6

    // References
    // -> static // total size: 0x8
struct /* @class$1324xDraw_cpp */ {
    // Members
    unsigned int begin; // offset 0x0, size 0x4
    unsigned int end; // offset 0x4, size 0x4
} sphere_segs[144];
    // -> static struct xColor_tag sgDrawColor;
    // -> static struct xVec3 sphere_pts[50];
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
// Range: 0x80046E24 -> 0x80047108
void xDrawSphere2(float x /* f28 */, float y /* f29 */, float z /* f30 */, float r /* f31 */, unsigned int lod /* r3 */) {
    // Local variables
    unsigned int nlverts; // r25
    unsigned int nlidxs; // r24
    struct RwV3d * lverts; // r23
    unsigned int * lidxs; // r22
    unsigned int idx; // r21
    struct xMat3x3 sph_rot; // r1+0x20
    struct xVec3 * v; // r0

    // References
    // -> static struct xColor_tag sgDrawColor;
    // -> static float sph2_yaw;
}

// Range: 0x80047108 -> 0x8004713C
void xDrawSphere2(const struct xSphere * sph /* r0 */, unsigned int lod /* r4 */) {}

// Range: 0x8004713C -> 0x80047170
void xDrawSphere2(const struct xVec3 * pos /* r0 */, float r /* f4 */, unsigned int lod /* r4 */) {}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80BFC4E4
// total size: 0x40
struct xMat4x3 : public xMat3x3 {
    // Members
    struct xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// Range: 0x80047170 -> 0x800474EC
void xDrawCapsule(const struct xVec3 * start /* r27 */, const struct xVec3 * end /* r21 */, float r /* f26 */, unsigned int lod /* r18 */) {
    // Local variables
    unsigned int nlverts; // r25
    unsigned int nlidxs; // r24
    struct RwV3d * lverts; // r23
    unsigned int * lidxs; // r22
    unsigned int idx; // r21
    struct xMat4x3 mat; // r1+0x20
    struct xVec3 diff; // r1+0x14
    float len; // f0

    // References
    // -> static struct xColor_tag sgDrawColor;
    // -> static char __FUNCTION__[13];
}

static unsigned int idxs[12][2]; // size: 0x60, address: 0x80415DC0
// Range: 0x800474EC -> 0x800475FC
void xDrawOBB(const struct xBox * b /* r0 */, const struct xMat4x3 * m /* r28 */) {
    // Local variables
    struct xVec3 lverts[8]; // r1+0x6C
    struct RwV3d wverts[8]; // r1+0xC
    int i; // r29

    // References
    // -> static unsigned int idxs[12][2];
    // -> static struct xColor_tag sgDrawColor;
}

// Range: 0x800475FC -> 0x800477EC
void xDrawOBBShaded(const struct xBox * b /* r28 */, const struct xMat4x3 * m /* r24 */) {
    // Local variables
    int i; // r25
    struct xVec3 lverts[8]; // r1+0x80
    struct xVec3 wverts[8]; // r1+0x20
    int cullmode; // r24

    // References
    // -> static struct xColor_tag sgDrawColor;
}

struct xMat4x3 g_I3; // size: 0x40, address: 0x80A7D5C0
// Range: 0x800477EC -> 0x80047890
void xDrawCircle(const struct xVec3 * center /* r3 */, float radius /* f31 */, unsigned int flags /* r31 */) {
    // Local variables
    struct xMat4x3 mat; // r1+0x10

    // References
    // -> struct xMat4x3 g_I3;
}

// Range: 0x80047890 -> 0x80047A08
void xDrawCircle(const struct xMat4x3 * mat /* r26 */, float radius /* f28 */, unsigned int flags /* r0 */) {
    // Local variables
    unsigned int num_pts; // r28
    struct xVec3 * ptlist; // r27
    struct xVec3 * pt_from; // r3
    float perarc; // f30
    float ang; // f29
    unsigned int i; // r29
}

// total size: 0x14
struct xCylinder {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
// Range: 0x80047A08 -> 0x80047A2C
void xDrawCylinder(const struct xVec3 & start /* r0 */, const struct xVec3 & end /* r0 */, float radius /* f1 */, int sides /* r0 */, int rings /* r0 */) {}

// total size: 0x20
class xCone {
    // Members
public:
    struct xVec3 start; // offset 0x0, size 0xC
    struct xVec3 dir; // offset 0xC, size 0xC
    float height; // offset 0x18, size 0x4
    float angle; // offset 0x1C, size 0x4
};
// Range: 0x80047A2C -> 0x80047D18
void xDrawCone(const struct xVec3 & p1 /* r30 */, float r1 /* f24 */, const struct xVec3 & p2 /* r4 */, float r2 /* f25 */, int sides /* r25 */, int rings /* r31 */) {
    // Local variables
    struct xMat3x3 mat; // r1+0x70
    struct xVec3 at; // r1+0x34
    float mag; // f29
    struct xVec3 loc[2][2]; // r1+0x40
    float dang; // f28
    float dring; // f27
    float ang; // f26
    int i; // r28
    int iend; // r27
    struct xVec3 & loc1; // r0
    struct xVec3 & loc2; // r26
    float ca; // f0
    float sa; // f0
    struct xVec3 & prevloc1; // r25
    struct xVec3 dprevloc; // r1+0x28
    struct xVec3 dcurloc; // r1+0x1C
    struct xVec3 curloc; // r1+0x10
    int j; // r26
}

// Range: 0x80047D18 -> 0x80047D74
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
struct xColor_tag g_BLUE; // size: 0x4, address: 0x80C0A264
struct xColor_tag g_GREEN; // size: 0x4, address: 0x80C0A260
struct xColor_tag g_RED; // size: 0x4, address: 0x80C0A258
// Range: 0x80047D74 -> 0x80047E60
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
struct /* @class$1943xDraw_cpp */ {
    // Members
    struct xVec3 start; // offset 0x0, size 0xC
    struct xVec3 end; // offset 0xC, size 0xC
    float length; // offset 0x18, size 0x4
};
static // total size: 0x1C
struct /* @class$1943xDraw_cpp */ {
    // Members
    struct xVec3 start; // offset 0x0, size 0xC
    struct xVec3 end; // offset 0xC, size 0xC
    float length; // offset 0x18, size 0x4
} lists[7]; // size: 0xC4, address: 0x80415E20
// Range: 0x80047E60 -> 0x80047F40
void xDrawMarker(const struct xVec3 * pos /* r28 */, float size /* f0 */, unsigned int flags /* r0 */) {
    // Local variables
    struct xVec3 start; // r1+0x14
    struct xVec3 end; // r1+0x8
    float size2; // f31
    int i; // r29

    // References
    // -> static // total size: 0x1C
struct /* @class$1943xDraw_cpp */ {
    // Members
    struct xVec3 start; // offset 0x0, size 0xC
    struct xVec3 end; // offset 0xC, size 0xC
    float length; // offset 0x18, size 0x4
} lists[7];
}

// Range: 0x80047F40 -> 0x800480FC
void xDrawArc(const struct xMat4x3 & mat /* r26 */, float radius /* f31 */, float arc_length /* f2 */, int segments /* r27 */) {
    // Local variables
    float dang; // f30
    float sr; // f0
    float cr; // f0
    float x; // f31
    float y; // f28
    struct xVec3 v[2]; // r1+0x8
    int vi; // r31
    int i; // r30
    float xtemp; // f0
    const struct xVec3 & v0; // r29
    struct xVec3 & v1; // r28
}

// Range: 0x800480FC -> 0x80048444
void xDrawCard(struct RwRaster * raster /* r28 */, const struct xFRect & src_rect /* r29 */, const struct xFRect & dst_rect /* r30 */, unsigned char zwrite /* r31 */) {
    // Local variables
    int old_filter; // r1+0x2C
    int old_wrap; // r1+0x28
    int old_fog; // r1+0x24
    int old_cull; // r1+0x20
    int old_zwrite; // r1+0x1C
    int old_ztest; // r1+0x18
    int old_vertalpha; // r1+0x14
    int old_shademode; // r1+0x10
    enum RwBlendFunction old_srcblend; // r1+0xC
    enum RwBlendFunction old_destblend; // r1+0x8
    float rcz; // f31
    float nsz; // f30
    struct rwGameCube2DVertex vert[4]; // r1+0x30
    float x0; // f29
    float x1; // f28
    float y0; // f27
    float y1; // f26
    float uscale; // f10
    float vscale; // f11
    float u0; // f25
    float u1; // f24
    float v0; // f23
    float v1; // f22

    // References
    // -> void * RwEngineInstance;
}

// Range: 0x80048444 -> 0x80048470
static void set_vert(struct rwGameCube2DVertex & vert /* r0 */, float x /* f0 */, float y /* f0 */, float u /* f0 */, float v /* f0 */, float nsz /* f0 */) {}

// total size: 0x10
struct xFRect {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
// Range: 0x80048470 -> 0x8004852C
void xDrawCard(struct RwRaster * raster /* r0 */, float x /* f0 */, float y /* f0 */, float w /* f0 */, float h /* f0 */, unsigned char zwrite /* r4 */) {
    // Local variables
    struct xFRect dst_rect; // r1+0x18
    struct xFRect src_rect; // r1+0x8
}

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
// Range: 0x8004852C -> 0x80048604
int Im2DRenderQuad(float x1 /* f0 */, float y1 /* f0 */, float x2 /* f0 */, float y2 /* f0 */, float z /* f0 */, float uvOffset /* f0 */) {
    // Local variables
    struct rwGameCube2DVertex vx[4]; // r1+0x8

    // References
    // -> void * RwEngineInstance;
}

// Range: 0x80048604 -> 0x800486F0
int Im2DRenderQuadAlpha(float x1 /* f0 */, float y1 /* f0 */, float x2 /* f0 */, float y2 /* f0 */, float alpha /* f0 */, float z /* f0 */, float uvOffset /* f0 */) {
    // Local variables
    struct rwGameCube2DVertex vx[4]; // r1+0x8
    unsigned char alphaI; // r7

    // References
    // -> void * RwEngineInstance;
}


