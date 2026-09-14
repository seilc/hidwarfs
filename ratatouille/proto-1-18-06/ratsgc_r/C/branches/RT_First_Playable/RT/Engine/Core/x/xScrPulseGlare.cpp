/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xScrPulseGlare.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80191204 -> 0x80191A3C
*/
// total size: 0xC
struct config {
    // Members
    float vis_angle; // offset 0x0, size 0x4
    float amp_freq; // offset 0x4, size 0x4
    float rot_freg; // offset 0x8, size 0x4
};
// total size: 0x14
struct xPulse {
    // Members
    float max_amp; // offset 0x0, size 0x4
    float elapsed; // offset 0x4, size 0x4
    float period; // offset 0x8, size 0x4
    float freq; // offset 0xC, size 0x4
    float noise; // offset 0x10, size 0x4
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
// total size: 0x10
struct RwRGBAReal {
    // Members
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
};
// total size: 0x6C
struct xPulseGlare {
    // Members
    struct config cfg; // offset 0x0, size 0xC
    void (* cb_update_size)(struct xPulse &, float); // offset 0xC, size 0x4
    void (* cb_update_rot)(struct xPulse &, float); // offset 0x10, size 0x4
    struct xVec3 pos; // offset 0x14, size 0xC
    struct xVec3 dir; // offset 0x20, size 0xC
    float scale_dir; // offset 0x2C, size 0x4
    float elapsed; // offset 0x30, size 0x4
    float lifetime; // offset 0x34, size 0x4
    float size; // offset 0x38, size 0x4
    float angle; // offset 0x3C, size 0x4
    struct xPulse p; // offset 0x40, size 0x14
    int flags; // offset 0x54, size 0x4
    struct RwRaster * raster; // offset 0x58, size 0x4
    struct RwRGBAReal col; // offset 0x5C, size 0x10
};
// total size: 0x3600
struct xPulseGlareMgr {
    // Functions
    void init();

    void update(float dt);

    void render(const struct xMat4x3 & mat);

    // Members
protected:
    struct xPulseGlare glares[128]; // offset 0x0, size 0x3600
};
static struct xPulseGlareMgr glare_mgr; // size: 0x3600, address: 0x80BB24D8
// Range: 0x80191204 -> 0x8019122C
static void init_pulse(struct xPulse & p /* r0 */) {}

// Range: 0x8019122C -> 0x801912A0
static void xPulseFn(struct xPulse & p /* r31 */) {}

// Range: 0x801912A0 -> 0x8019133C
static void init_pulse_glare(struct xPulseGlare & glare /* r31 */) {}

// Range: 0x8019133C -> 0x80191428
static void update_pulse_glare(struct xPulseGlare & g /* r31 */, float dt /* f1 */) {}

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
static struct RxObjSpace3DVertex sStripVert[4]; // size: 0x90, address: 0x80BB5AD8
static char __FUNCTION__[19]; // size: 0x13, address: 0x80C02140
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
// Range: 0x80191428 -> 0x801918A4
static void render_pulse_glare(const struct xMat4x3 & mat /* r30 */, struct xPulseGlare * g /* r31 */) {
    // Local variables
    struct xVec3 w; // r1+0x34
    struct xVec3 h; // r1+0x28
    struct xVec3 g_pos; // r1+0x1C
    struct xVec3 cam_dir; // r1+0x10
    float dot; // f28
    float noise; // f29
    struct xMat3x3 m; // r1+0x40

    // References
    // -> static struct RxObjSpace3DVertex sStripVert[4];
    // -> static char __FUNCTION__[19];
}

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
enum RwPrimitiveType {
    rwPRIMTYPENAPRIMTYPE = 0,
    rwPRIMTYPELINELIST = 1,
    rwPRIMTYPEPOLYLINE = 2,
    rwPRIMTYPETRILIST = 3,
    rwPRIMTYPETRISTRIP = 4,
    rwPRIMTYPETRIFAN = 5,
    rwPRIMTYPEPOINTLIST = 6,
    rwPRIMITIVETYPEFORCEENUMSIZEINT = 2147483647,
};
// Range: 0x801918A4 -> 0x801918F0
// this: r3
void xPulseGlareMgr::init() {
    // Local variables
    int i; // r30
}

// Range: 0x801918F0 -> 0x80191958
// this: r3
void xPulseGlareMgr::update(float dt /* f31 */) {
    // Local variables
    int i; // r30
}

// total size: 0x40
struct xMat4x3 : public xMat3x3 {
    // Members
    struct xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// Range: 0x80191958 -> 0x801919C0
// this: r3
void xPulseGlareMgr::render(const struct xMat4x3 & mat /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x801919C0 -> 0x801919EC
void xScrFX_PulseGlaresRender(const struct xMat4x3 & mat /* r4 */) {
    // References
    // -> static struct xPulseGlareMgr glare_mgr;
}

// Range: 0x801919EC -> 0x80191A14
void xScrFX_PulseGlaresUpdate(float dt /* f0 */) {
    // References
    // -> static struct xPulseGlareMgr glare_mgr;
}

// Range: 0x80191A14 -> 0x80191A3C
void xScrFX_PulseGlaresReset() {
    // References
    // -> static struct xPulseGlareMgr glare_mgr;
}


