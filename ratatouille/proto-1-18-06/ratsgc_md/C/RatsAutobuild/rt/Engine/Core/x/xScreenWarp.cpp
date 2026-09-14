/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xScreenWarp.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80060298 -> 0x80061F18
*/
// total size: 0x10
struct basic_rect {
    // Static members
    static struct basic_rect m_Null; // size: 0x10
    static struct basic_rect m_Unit; // size: 0x10

    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
static struct xVec2 * uvmap_buffer; // size: 0x4, address: 0x803C1320
static float uvmap_uoffset; // size: 0x4, address: 0x803C1324
static float uvmap_voffset; // size: 0x4, address: 0x803C1328
static float uvmap_uscale; // size: 0x4, address: 0x803C132C
static float uvmap_vscale; // size: 0x4, address: 0x803C1330
static float uvmap_udelta; // size: 0x4, address: 0x803C1334
static float uvmap_vdelta; // size: 0x4, address: 0x803C1338
static float uvmap_xscale; // size: 0x4, address: 0x803C133C
static float uvmap_yscale; // size: 0x4, address: 0x803C1340
static float uvmap_xdelta; // size: 0x4, address: 0x803C1344
static float uvmap_ydelta; // size: 0x4, address: 0x803C1348
static unsigned int common_warp_ids[6]; // size: 0x18, address: 0x803C134C
// total size: 0x30
struct warper {
    // Members
    struct warper * next; // offset 0x0, size 0x4
    struct warper * prev; // offset 0x4, size 0x4
    int flags; // offset 0x8, size 0x4
    float life; // offset 0xC, size 0x4
    float iduration; // offset 0x10, size 0x4
    float radius; // offset 0x14, size 0x4
    float intensity; // offset 0x18, size 0x4
    float freq; // offset 0x1C, size 0x4
    enum type_enum type; // offset 0x20, size 0x4
    union { // inferred
        struct xVec3 loc3; // offset 0x24, size 0xC
        struct xVec2 loc2; // offset 0x24, size 0x8
        const struct xVec3 * ploc3; // offset 0x24, size 0x4
        const struct xVec2 * ploc2; // offset 0x24, size 0x4
    };
};
static struct warper warp_buffer[128]; // size: 0x1800, address: 0x80325A08
static struct warper warp_lists[6]; // size: 0x120, address: 0x80327208
static struct warper * warp_stack; // size: 0x4, address: 0x803C1364
static unsigned char render_this_frame; // size: 0x1, address: 0x803C1368
enum type_enum {
    TYPE_INVALID = -1,
    TYPE_WARBLE = 0,
    TYPE_LENS = 1,
    TYPE_RIPPLE = 2,
    TYPE_SHOCKWAVE = 3,
    TYPE_HEAT_SHIMMER = 4,
    TYPE_STATIC_LENS = 5,
    MAX_TYPE = 6,
};
// Range: 0x80060298 -> 0x800602DC
static struct warper * alloc_warp(enum type_enum type /* r0 */) {
    // Local variables
    struct warper * warp; // r3
    struct warper & head; // r5

    // References
    // -> static struct warper warp_lists[6];
    // -> static struct warper * warp_stack;
}

// Range: 0x800602DC -> 0x8006030C
static void free_warp(struct warper * warp /* r0 */) {
    // References
    // -> static struct warper * warp_stack;
}

// Range: 0x8006030C -> 0x80060370
static void change_warp_type(struct warper * warp /* r0 */, enum type_enum type /* r0 */) {
    // Local variables
    struct warper & head; // r6

    // References
    // -> static struct warper warp_lists[6];
}

// Range: 0x80060370 -> 0x80060394
static void set_warp(struct warper & warp /* r0 */, float radius /* f0 */, float duration /* f0 */, enum type_enum type /* r0 */, float intensity /* f0 */, float freq /* f0 */, int flags /* r0 */) {}

// Range: 0x80060394 -> 0x8006040C
static struct warper * create_warp(float radius /* f28 */, float duration /* f29 */, enum type_enum type /* r29 */, float intensity /* f30 */, float freq /* f31 */, int flags /* r30 */) {
    // Local variables
    struct warper * warp; // r31
}

// Range: 0x8006040C -> 0x800604C0
static void reset_uvmap(struct xVec2 * uvmap /* r3 */) {
    // Local variables
    struct xVec2 * uv; // r31
    float du; // f31
    float dv; // f30
    float u; // f29
    int i; // r30
    float v; // f28
    int j; // r29

    // References
    // -> static float uvmap_voffset;
    // -> static float uvmap_uoffset;
    // -> static float uvmap_vdelta;
    // -> static float uvmap_udelta;
}

// total size: 0x8
struct xVec2 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
void (* common_warp_animate[6])(struct xVec2 *, struct warper &, struct xVec2 &, float, float, float, float); // size: 0x18, address: 0x803BD934
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
// total size: 0x40
struct xMat4x3 : public xMat3x3 {
    // Members
    struct xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
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
// Range: 0x800604C0 -> 0x800606E4
static unsigned char animate_uvmap(struct xVec2 * uvmap /* r31 */, struct RwCamera * cam /* r0 */) {
    // Local variables
    const struct xMat4x3 & view_mat; // r27
    unsigned char need_render; // r26
    int type; // r25
    void (* const animate_cb)(struct xVec2 *, struct warper &, struct xVec2 &, float, float, float, float); // r24
    struct warper * warp; // r23
    struct xVec2 loc; // r1+0x8
    float radius; // f31
    float iz; // f30
    struct xVec3 loc3; // r1+0x10
    float intensity; // f2

    // References
    // -> static float uvmap_yscale;
    // -> static float uvmap_xscale;
    // -> static struct warper warp_lists[6];
    // -> void (* common_warp_animate[6])(struct xVec2 *, struct warper &, struct xVec2 &, float, float, float, float);
}

unsigned int FB_YRES; // size: 0x4, address: 0x803BE160
unsigned int FB_XRES; // size: 0x4, address: 0x803BE15C
char * common_warp_names[7]; // size: 0x1C, address: 0x803BD918
// Range: 0x800606E4 -> 0x800607BC
void scene_enter() {
    // Local variables
    int i; // r28

    // References
    // -> char * common_warp_names[7];
    // -> static unsigned int common_warp_ids[6];
    // -> static float uvmap_yscale;
    // -> static float uvmap_ydelta;
    // -> static float uvmap_xscale;
    // -> static float uvmap_xdelta;
    // -> static float uvmap_vscale;
    // -> static float uvmap_vdelta;
    // -> static float uvmap_uscale;
    // -> static float uvmap_udelta;
    // -> unsigned int FB_XRES;
    // -> unsigned int FB_YRES;
}

// Range: 0x800607BC -> 0x800607C0
static void debug_init() {}

// Range: 0x800607C0 -> 0x800607E0
void scene_exit() {}

// Range: 0x800607E0 -> 0x80060800
void reset() {}

// Range: 0x80060800 -> 0x80060910
void update(float dt /* f31 */) {
    // Local variables
    int type; // r29
    struct warper * warp; // r3
    struct warper * next_warp; // r28

    // References
    // -> static struct warper warp_lists[6];
}

// Range: 0x80060910 -> 0x80060914
static void debug_update() {}

// Range: 0x80060914 -> 0x80060918
void pre_render() {}

// Range: 0x80060918 -> 0x80060978
void render(struct RwCamera * cam /* r31 */) {
    // References
    // -> static struct xVec2 * uvmap_buffer;
    // -> static unsigned char render_this_frame;
}

// Range: 0x80060978 -> 0x800609E4
void clear() {
    // Local variables
    struct warper * warp; // r5
    struct warper * end_warp; // r3

    // References
    // -> static struct warper warp_buffer[128];
    // -> static struct warper * warp_stack;
    // -> static struct warper warp_lists[6];
}

// Range: 0x800609E4 -> 0x80060A20
enum type_enum find_type(unsigned int id /* r0 */) {
    // Local variables
    int i; // r6

    // References
    // -> static unsigned int common_warp_ids[6];
}

// Range: 0x80060A20 -> 0x80060AA4
struct warper * emit(const struct xVec3 & loc /* r30 */, float radius /* f0 */, float duration /* f0 */, enum type_enum type /* r4 */, float intensity /* f0 */, float freq /* f0 */, int flags /* r5 */) {
    // Local variables
    struct warper * warp; // r31

    // References
    // -> static struct warper * warp_stack;
}

// Range: 0x80060AA4 -> 0x80060B88
void modify(struct warper * warp /* r28 */, const struct xVec3 & loc /* r29 */, float radius /* f28 */, float duration /* f29 */, enum type_enum type /* r30 */, float intensity /* f30 */, float freq /* f31 */, int flags /* r31 */) {}

// Range: 0x80060B88 -> 0x80060BA8
void remove(struct warper * warp /* r0 */) {}

// Range: 0x80060BA8 -> 0x80060C7C
static void get_uvmap_range(int & istart /* r0 */, int & iend /* r0 */, int & jstart /* r0 */, int & jend /* r0 */, float x /* f0 */, float y /* f0 */, float r /* f0 */) {}

// Range: 0x80060C7C -> 0x80060F18
static void warp_animate_warble(struct xVec2 * uvmap /* r31 */, struct warper & warp /* r0 */, const struct xVec2 & loc /* r23 */, float radius /* f1 */, float base_intensity /* f0 */, float s /* f2 */) {
    // Local variables
    float random_u; // f27
    float random_v; // f26
    float r2; // f25
    float ir2; // f24
    int istart; // r1+0x14
    int iend; // r1+0x10
    int jstart; // r1+0xC
    int jend; // r1+0x8
    float dx; // f0
    float dy; // f23
    float x; // f22
    struct xVec2 * uv; // r25
    int i; // r24
    float y; // f21
    int j; // r23
    float xoff; // f20
    float yoff; // f0
    float dist2; // f1
    float intensity; // f19

    // References
    // -> static float uvmap_ydelta;
    // -> static float uvmap_xdelta;
    // -> static float uvmap_vscale;
    // -> static float uvmap_uscale;
}

// Range: 0x80060F18 -> 0x80061100
static void warp_animate_lens(struct xVec2 * uvmap /* r31 */, const struct xVec2 & loc /* r30 */, float radius /* f30 */, float base_intensity /* f29 */, float s /* f28 */) {
    // Local variables
    float mag; // f5
    float r2; // f31
    float ir2; // f30
    float umag; // f29
    float vmag; // f28
    int istart; // r1+0x14
    int iend; // r1+0x10
    int jstart; // r1+0xC
    int jend; // r1+0x8
    float dx; // f0
    float dy; // f8
    float x; // f9
    struct xVec2 * uv; // r8
    int i; // r9
    float y; // f10
    int j; // r10
    float xoff; // f11
    float yoff; // f1
    float dist2; // f0
    float scale; // f12

    // References
    // -> static float uvmap_ydelta;
    // -> static float uvmap_xdelta;
    // -> static float uvmap_vscale;
    // -> static float uvmap_uscale;
}

// Range: 0x80061100 -> 0x800613DC
static void warp_animate_ripple(struct xVec2 * uvmap /* r31 */, struct warper & warp /* r0 */, const struct xVec2 & loc /* r24 */, float radius /* f1 */, float base_intensity /* f0 */, float s /* f17 */) {
    // Local variables
    float mag; // f6
    float umag; // f26
    float vmag; // f25
    float freq; // f24
    float r2; // f23
    float ir2; // f22
    int istart; // r1+0x14
    int iend; // r1+0x10
    int jstart; // r1+0xC
    int jend; // r1+0x8
    float dx; // f0
    float dy; // f21
    float x; // f20
    struct xVec2 * uv; // r6
    int i; // r25
    float y; // f19
    int j; // r24
    float xoff; // f18
    float yoff; // f17
    float dist2; // f1
    float t; // f16
    float scale; // f1

    // References
    // -> static float uvmap_ydelta;
    // -> static float uvmap_xdelta;
    // -> static float uvmap_vscale;
    // -> static float uvmap_uscale;
}

// Range: 0x800613DC -> 0x800616C8
static void warp_animate_shockwave(struct xVec2 * uvmap /* r31 */, const struct xVec2 & loc /* r24 */, float radius /* f3 */, float base_intensity /* f0 */, float s /* f17 */) {
    // Local variables
    float mag; // f5
    float umag; // f25
    float vmag; // f24
    float r2; // f23
    float ir; // f22
    int istart; // r1+0x18
    int iend; // r1+0x14
    int jstart; // r1+0x10
    int jend; // r1+0xC
    float dx; // f0
    float dy; // f21
    float x; // f20
    struct xVec2 * uv; // r6
    int i; // r25
    float y; // f19
    int j; // r24
    float xoff; // f18
    float yoff; // f17
    float dist2; // f1
    float dist; // f0
    float theta; // f1
    float stheta; // r1+0x8
    float scale; // f1

    // References
    // -> static float uvmap_ydelta;
    // -> static float uvmap_xdelta;
    // -> static float uvmap_vscale;
    // -> static float uvmap_uscale;
}

// Range: 0x800616C8 -> 0x80061928
static void warp_animate_heat_shimmer(struct xVec2 * uvmap /* r30 */, struct warper & warp /* r0 */, const struct xVec2 & loc /* r31 */, float radius /* f30 */, float base_intensity /* f0 */, float s /* f0 */) {
    // Local variables
    float mag; // f29
    float start_theta; // f31
    int istart; // r1+0x14
    int iend; // r1+0x10
    int jstart; // r1+0xC
    int jend; // r1+0x8
    float phase; // f28
    float startcos0; // f31
    float startsin0; // f9
    float ir; // f10
    float dx; // f11
    float dy; // f5
    float ystart; // f4
    int ysize; // r7
    struct xVec2 * uv; // r5
    struct xVec2 * uv_xend; // r6
    float x; // f7
    float tempcos; // f0
    float cos0; // f8
    float sin0; // f10
    float y; // f12
    float x2; // f13
    struct xVec2 * uv_yend; // r7
    float dist2; // f0

    // References
    // -> static float uvmap_ydelta;
    // -> static float uvmap_xdelta;
    // -> static float uvmap_uscale;
}

// Range: 0x80061928 -> 0x80061AE8
static void warp_animate_static_lens(struct xVec2 * uvmap /* r31 */, const struct xVec2 & loc /* r30 */, float radius /* f1 */, float base_intensity /* f0 */) {
    // Local variables
    float mag; // f6
    float r2; // f31
    float ir2; // f30
    float umag; // f29
    float vmag; // f28
    int istart; // r1+0x14
    int iend; // r1+0x10
    int jstart; // r1+0xC
    int jend; // r1+0x8
    float dx; // f0
    float dy; // f8
    float x; // f9
    struct xVec2 * uv; // r8
    int i; // r9
    float y; // f10
    int j; // r10
    float xoff; // f11
    float yoff; // f1
    float dist2; // f0
    float scale; // f12

    // References
    // -> static float uvmap_ydelta;
    // -> static float uvmap_xdelta;
    // -> static float uvmap_vscale;
    // -> static float uvmap_uscale;
}

// Range: 0x80061AE8 -> 0x80061AF8
static void render_scene_enter() {
    // References
    // -> static float uvmap_voffset;
    // -> static float uvmap_uoffset;
}

// Range: 0x80061AF8 -> 0x80061AFC
static void render_scene_exit() {}

// total size: 0x20
struct _GXTexObj {
    // Members
    unsigned long dummy[8]; // offset 0x0, size 0x20
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
// Range: 0x80061AFC -> 0x80061ECC
static void render_uvmap() {
    // Local variables
    void * junk_buffer; // r31
    void * frame_buffer_raw; // r30
    void * frame_buffer; // r26
    float mProjection[4][4]; // r1+0x80
    float mIdentity[4][4]; // r1+0x40
    struct _GXTexObj tex; // r1+0x20
    enum RwBlendFunction oldSrcBlend; // r1+0x14
    enum RwBlendFunction oldDestBlend; // r1+0x10
    int dx; // r25
    int dy; // r24
    int x; // r23
    struct xVec2 * uv0; // r22
    struct xVec2 * uv1; // r21
    int i; // r29
    int y; // r20
    int j; // r19

    // References
    // -> static struct xVec2 * uvmap_buffer;
    // -> unsigned int FB_YRES;
    // -> unsigned int FB_XRES;
}


