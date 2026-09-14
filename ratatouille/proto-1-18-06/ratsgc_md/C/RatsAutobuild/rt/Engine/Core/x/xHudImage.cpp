/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xHudImage.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8010D2AC -> 0x80110534
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
struct RwTexCoords {
    // Members
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0x4C
struct LayerInfo {
    // Members
    enum RENDERTYPE eType; // offset 0x0, size 0x4
    unsigned int uFlags; // offset 0x4, size 0x4
    struct RwTexCoords upperLeft; // offset 0x8, size 0x8
    struct RwTexCoords lowerRight; // offset 0x10, size 0x8
    float fCurPercent; // offset 0x18, size 0x4
    float fMinPercent; // offset 0x1C, size 0x4
    float fMaxPercent; // offset 0x20, size 0x4
    float fClampTopPercent; // offset 0x24, size 0x4
    float fOffsetX; // offset 0x28, size 0x4
    float fOffsetY; // offset 0x2C, size 0x4
    float fScaleX; // offset 0x30, size 0x4
    float fScaleY; // offset 0x34, size 0x4
    float fAlpha; // offset 0x38, size 0x4
    float fStrobe; // offset 0x3C, size 0x4
    float fStrobeFreq; // offset 0x40, size 0x4
    float fStrobeHeight; // offset 0x44, size 0x4
    int nStrobeCount; // offset 0x48, size 0x4
};
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
// total size: 0xB0
class image_widget : public widget {
    // Functions
    image_widget(const struct image_asset & a);

    void destruct();

    void destroy();

    unsigned char is(unsigned int id) const;

    void update(float dt);

    void update_strobe_effect(unsigned int uLayer, float dt);

    void render();

    unsigned char render_one_to_one(unsigned int uLayer, enum RENDERTYPE eType);

    unsigned char render_variable_top(unsigned int uLayer);

    unsigned char render_variable_right(unsigned int uLayer);

    unsigned char render_counter_clockwise(unsigned int uLayer);

    unsigned char render_half_ccw(unsigned int uLayer);

    unsigned char render_rotate_ccw(unsigned int uLayer);

    unsigned char render_offset_rotate_ccw(unsigned int uLayer);

    unsigned char render_offset_pie(unsigned int uLayer);

    unsigned char render_strobe_effect(unsigned int uLayer);

    unsigned char render_special_strobe(unsigned int uLayer);

    unsigned char render_random_v(unsigned int uLayer);

    void set_buffer_to_layer(enum RENDERTYPE eType);

    // Members
protected:
    struct RwRaster * m_pRaster; // offset 0x88, size 0x4
    struct LayerInfo * m_pLayers; // offset 0x8C, size 0x4
    unsigned int m_uLayerCount; // offset 0x90, size 0x4
    unsigned int m_uRenderLayerCount; // offset 0x94, size 0x4
    struct rwGameCube2DVertex * m_pVertices; // offset 0x98, size 0x4
    struct rwGameCube2DVertex * m_paVertices; // offset 0x9C, size 0x4
    unsigned short * m_paIndices; // offset 0xA0, size 0x4
    unsigned short m_uVertexCount; // offset 0xA4, size 0x2
    unsigned short m_uIndexCount; // offset 0xA6, size 0x2
    float m_fRecipZ; // offset 0xA8, size 0x4
    unsigned short m_VertexMax; // offset 0xAC, size 0x2
    unsigned short m_IndexMax; // offset 0xAE, size 0x2
};
// Range: 0x8010D2AC -> 0x8010D2FC
void image_widget::load(struct xBase & data /* r30 */, struct xDynAsset & asset /* r31 */) {}

// total size: 0x28
struct {} xhud::image_widget::__vtable; // size: 0x28, address: 0x803BE628
// total size: 0x2C
struct image_asset : public asset {
    // Members
    unsigned int image; // offset 0x28, size 0x4
};
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
// Range: 0x8010D2FC -> 0x8010D378
// this: r30
image_widget::image_widget(const struct image_asset & a /* r31 */) {
    // Local variables
    struct RwTexture * pTexture; // r0

    // References
    // -> struct [anonymous] xhud::image_widget::__vtable;
}

// total size: 0x8
struct /* @class$900xHudImage_cpp */ {
    // Members
    unsigned char visible; // offset 0x0, size 0x1
    unsigned char enabled; // offset 0x1, size 0x1
    unsigned char active; // offset 0x2, size 0x1
    float timer; // offset 0x4, size 0x4
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
// total size: 0x34
struct render_context {
    // Members
    struct xVec3 loc; // offset 0x0, size 0xC
    struct xVec3 size; // offset 0xC, size 0xC
    struct xVec3 rot; // offset 0x18, size 0xC
    float r; // offset 0x24, size 0x4
    float g; // offset 0x28, size 0x4
    float b; // offset 0x2C, size 0x4
    float a; // offset 0x30, size 0x4
};
// total size: 0x8
struct xBaseAsset {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x10
struct xDynAsset : public xBaseAsset {
    // Members
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
// total size: 0x28
struct asset : public xDynAsset {
    // Members
    struct xVec3 loc; // offset 0x10, size 0xC
    struct xVec3 size; // offset 0x1C, size 0xC
};
enum /* @enum$901xHudImage_cpp */ {
    ACT_NONE = 0,
    ACT_SHOW = 1,
    ACT_HIDE = 2,
    MAX_ACT = 3,
};
// total size: 0x0
struct motive_node {};
// total size: 0x20
struct xLinkAsset {
    // Members
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
// total size: 0x10
struct xBase {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    const struct xLinkAsset * link; // offset 0x8, size 0x4
    void (* eventFunc)(struct xBase *, struct xBase *, unsigned int, float *, struct xBase *, unsigned int); // offset 0xC, size 0x4
};
// total size: 0x0
struct holder {};
// total size: 0x10
class block_allocator {
    // Members
    int block_size; // offset 0x0, size 0x4
    int max_blocks; // offset 0x4, size 0x4
    struct holder * head; // offset 0x8, size 0x4
    void * buffer; // offset 0xC, size 0x4
};
// total size: 0x30
struct motive {
    // Members
    union { // inferred
        float * value; // offset 0x0, size 0x4
        float time_to_blink; // offset 0x0, size 0x4
    };
    union { // inferred
        float delta; // offset 0x4, size 0x4
        float start_blink_period; // offset 0x4, size 0x4
    };
    union { // inferred
        float max_offset; // offset 0x8, size 0x4
        float begin_scale; // offset 0x8, size 0x4
        float end_blink_period; // offset 0x8, size 0x4
    };
    union { // inferred
        float accel; // offset 0xC, size 0x4
        float final_scale; // offset 0xC, size 0x4
        float fade_blink_time; // offset 0xC, size 0x4
    };
    union { // inferred
        void * context; // offset 0x10, size 0x4
        float begin_alpha; // offset 0x10, size 0x4
        struct xColor_tag on_blink_color; // offset 0x10, size 0x4
    };
    union { // inferred
        float period; // offset 0x14, size 0x4
        float end_alpha; // offset 0x14, size 0x4
        struct xColor_tag off_blink_color; // offset 0x14, size 0x4
    };
    union { // inferred
        float elapsed; // offset 0x18, size 0x4
        float orig_width; // offset 0x18, size 0x4
    };
    union { // inferred
        float offset; // offset 0x1C, size 0x4
        float current_scale; // offset 0x1C, size 0x4
        float current_blink_time; // offset 0x1C, size 0x4
    };
    unsigned char (* fp_update)(class widget &, struct motive &, float); // offset 0x20, size 0x4
    unsigned char (* fp_finish)(class widget &, struct motive &); // offset 0x24, size 0x4
    union { // inferred
        float start_delta; // offset 0x28, size 0x4
        float orig_height; // offset 0x28, size 0x4
        float period_blink_time; // offset 0x28, size 0x4
    };
    unsigned char hold; // offset 0x2C, size 0x1
    unsigned char inverse; // offset 0x2D, size 0x1
};
enum move_direction {
    LEFT = 0,
    RIGHT = 1,
    TOP = 2,
    BOTTOM = 3,
};
// total size: 0x88
class widget {
    // Static members
    static class block_allocator motive_allocator; // size: 0x10

    // Members
public:
    // total size: 0x8
    struct /* @class$900xHudImage_cpp */ {
        // Members
        unsigned char visible; // offset 0x0, size 0x1
        unsigned char enabled; // offset 0x1, size 0x1
        unsigned char active; // offset 0x2, size 0x1
        float timer; // offset 0x4, size 0x4
    } flag; // offset 0x0, size 0x8
    struct render_context rc; // offset 0x8, size 0x34
    struct render_context start_rc; // offset 0x3C, size 0x34
    const struct asset * a; // offset 0x70, size 0x4
    enum /* @enum$901xHudImage_cpp */ {
        ACT_NONE = 0,
        ACT_SHOW = 1,
        ACT_HIDE = 2,
        MAX_ACT = 3,
    } activity; // offset 0x74, size 0x4
    void * __vptr$; // offset 0x78, size 0x4
private:
    struct motive_node * _motive_top; // offset 0x7C, size 0x4
    struct motive_node * _motive_temp; // offset 0x80, size 0x4
    struct motive_node * * _motive_temp_tail; // offset 0x84, size 0x4
};
// Range: 0x8010D378 -> 0x8010D3B4
// this: r0
void image_widget::destruct() {}

// Range: 0x8010D3B4 -> 0x8010D3D4
// this: r0
void image_widget::destroy() {}

static unsigned int myid; // size: 0x4, address: 0x803C29A0
static signed char init; // size: 0x1, address: 0x803C29A4
// Range: 0x8010D3D4 -> 0x8010D414
unsigned int image_widget::type() {
    // References
    // -> static unsigned int myid;
    // -> static signed char init;
}

// total size: 0x2C
struct model_asset : public asset {
    // Members
    unsigned int model; // offset 0x28, size 0x4
};
// Range: 0x8010D414 -> 0x8010D46C
// this: r29
unsigned char image_widget::is(unsigned int id /* r30 */) const {}

// Range: 0x8010D46C -> 0x8010D514
// this: r29
void image_widget::update(float dt /* f31 */) {
    // Local variables
    unsigned int uLayer; // r30
}

// Range: 0x8010D514 -> 0x8010D5C8
// this: r30
void image_widget::update_strobe_effect(unsigned int uLayer /* r31 */, float dt /* f31 */) {
    // Local variables
    float fStrobeRangePixels; // f0
}

static float fNearZ; // size: 0x4, address: 0x803C29A8
static signed char init; // size: 0x1, address: 0x803C29AC
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
// total size: 0x10
struct xVec4 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
// total size: 0x90
struct tagiRenderInput {
    // Members
    struct rwGameCube2DVertex * m_vertex_2d; // offset 0x0, size 0x4
    unsigned short * m_index; // offset 0x4, size 0x4
    struct RxObjSpace3DVertex * m_vertex; // offset 0x8, size 0x4
    float * m_vertexTZ; // offset 0xC, size 0x4
    unsigned int m_mode; // offset 0x10, size 0x4
    int m_vertexType; // offset 0x14, size 0x4
    int m_vertexTypeSize; // offset 0x18, size 0x4
    int m_indexCount; // offset 0x1C, size 0x4
    int m_vertexCount; // offset 0x20, size 0x4
    struct xMat4x3 m_camViewMatrix; // offset 0x30, size 0x40
    struct xVec4 m_camViewR; // offset 0x70, size 0x10
    struct xVec4 m_camViewU; // offset 0x80, size 0x10
};
struct tagiRenderInput gRenderBuffer; // size: 0x90, address: 0x80387A30
void * RwEngineInstance; // size: 0x4, address: 0x803C4584
class i2dQuadBuffer * gQuadBuffer; // size: 0x4, address: 0x803C2E08
enum LAYER_FLAGS {
    BLEND = 1,
    ADDITIVE = 2,
    SET_DEST_ALPHA = 4,
    USE_DEST_ALPHA = 8,
    BLEND_MASK = 15,
};
// Range: 0x8010D5C8 -> 0x8010D97C
// this: r28
void image_widget::render() {
    // Local variables
    enum LAYER_FLAGS eLayerMode; // r30
    unsigned int uLayer; // r29
    unsigned int uNewMode; // r27
    unsigned char bRendered; // r3

    // References
    // -> class i2dQuadBuffer * gQuadBuffer;
    // -> void * RwEngineInstance;
    // -> static signed char init;
    // -> static float fNearZ;
    // -> struct tagiRenderInput gRenderBuffer;
}

unsigned int FB_XRES; // size: 0x4, address: 0x803BE15C
unsigned int FB_YRES; // size: 0x4, address: 0x803BE160
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
struct xColor_tag g_WHITE; // size: 0x4, address: 0x803C4844
enum RENDERTYPE {
    TOPLEFT = 0,
    BOTTOMLEFT = 1,
    BOTTOMRIGHT = 2,
    TOPRIGHT = 3,
    OFFSET_CENTERPT = 4,
    OFFSET_PIE = 5,
    STROBE_EFFECT = 6,
    ROTATE_CCW = 7,
    OFFSET_ROTATE_CCW = 8,
    VARIABLE_TOP = 9,
    VARIABLE_RIGHT = 10,
    COUNTER_CLOCKWISE = 11,
    HALF_CCW = 12,
    RANDOM_V = 13,
    SPECIAL_STROBE = 14,
};
// total size: 0x10
struct i2dRect {
    // Members
    union { // inferred
        struct { // inferred
            float tlx; // offset 0x0, size 0x4
            float tly; // offset 0x4, size 0x4
            float brx; // offset 0x8, size 0x4
            float bry; // offset 0xC, size 0x4
        };
        struct { // inferred
            float tlu; // offset 0x0, size 0x4
            float tlv; // offset 0x4, size 0x4
            float bru; // offset 0x8, size 0x4
            float brv; // offset 0xC, size 0x4
        };
    };
};
// Range: 0x8010D97C -> 0x8010DD00
// this: r30
unsigned char image_widget::render_one_to_one(unsigned int uLayer /* r0 */, enum RENDERTYPE eType /* r29 */) {
    // Local variables
    struct i2dRect uv_rect; // r1+0x20
    struct i2dRect location_rect; // r1+0x10
    float fQuadWidth; // f31
    float fQuadHeight; // f30
    float fCenterX; // f29
    float fCenterY; // f2
    struct xColor_tag rect_color; // r1+0xC

    // References
    // -> class i2dQuadBuffer * gQuadBuffer;
    // -> struct xColor_tag g_WHITE;
    // -> unsigned int FB_YRES;
    // -> unsigned int FB_XRES;
}

// total size: 0x8
class i2dQuadBuffer {
    // Members
    unsigned short vertsUsed; // offset 0x0, size 0x2
    unsigned short vertsMax; // offset 0x2, size 0x2
    struct rwGameCube2DVertex * vertArray; // offset 0x4, size 0x4
};
// Range: 0x8010DD00 -> 0x8010DEA8
// this: r30
unsigned char image_widget::render_variable_top(unsigned int uLayer /* r0 */) {
    // Local variables
    float fPercent; // f31
    struct i2dRect uv_rect; // r1+0x20
    struct i2dRect location_rect; // r1+0x10
    float fQuadHeight; // f31
    float fQuadWidth; // f0
    struct xColor_tag rect_color; // r1+0xC

    // References
    // -> class i2dQuadBuffer * gQuadBuffer;
    // -> struct xColor_tag g_WHITE;
    // -> unsigned int FB_XRES;
    // -> unsigned int FB_YRES;
}

// Range: 0x8010DEA8 -> 0x8010E03C
// this: r30
unsigned char image_widget::render_variable_right(unsigned int uLayer /* r0 */) {
    // Local variables
    float fPercent; // f31
    struct i2dRect uv_rect; // r1+0x20
    struct i2dRect location_rect; // r1+0x10
    struct xColor_tag rect_color; // r1+0xC

    // References
    // -> class i2dQuadBuffer * gQuadBuffer;
    // -> struct xColor_tag g_WHITE;
    // -> unsigned int FB_YRES;
    // -> unsigned int FB_XRES;
}

// Range: 0x8010E03C -> 0x8010E664
// this: r28
unsigned char image_widget::render_counter_clockwise(unsigned int uLayer /* r0 */) {
    // Local variables
    float fPercent; // f24
    float u0; // f30
    float v0; // f29
    float u1; // f28
    float v1; // f27
    float fHalfWidth; // f0
    float fHalfHeight; // f0
    float fCenterX; // f23
    float fCenterY; // f22
    float fCenterYPlusfHalfHeight; // f21
    float fCenterYMinusfHalfHeight; // f20
    float fCenterU; // f26
    float fCenterV; // f25
    float fRangeToEight; // f24
    int nWholeTris; // r31
    int nWholeTrisPlus1; // r30
    int nWholeTrisPlus2; // r29
    float fInterpAmount; // f0
    float xCoord; // f20
    float yCoord; // f21
    float uCoord; // f22
    float vCoord; // f23
    int vertexIndex0; // r0
    int vertexIndex1; // r5
    int vertexIndex2; // r4
    int VertIndex; // r30

    // References
    // -> unsigned int FB_YRES;
    // -> unsigned int FB_XRES;
}

// Range: 0x8010E664 -> 0x8010ED98
// this: r20
unsigned char image_widget::render_half_ccw(unsigned int uLayer /* r0 */) {
    // Local variables
    float fPercent; // f30
    float fClampTopY; // f29
    float fClampTopV; // f28
    float fHalfWidth; // f0
    float fHalfHeight; // f0
    float fCenterX; // f27
    float fCenterY; // f2
    float fCenterYPlusfHalfHeight; // f3
    float fCenterYMinusfHalfHeight; // f0
    float u0; // f29
    float u1; // f26
    float fCenterU; // f19
    float v0; // f3
    float v1; // f4
    float fCenterV; // f0
    float fRangeToFour; // f28
    int nWholeTris; // r25
    int nWholeTrisPlus1; // r24
    int nWholeTrisPlus2; // r23
    float fInterpAmount; // f26
    unsigned int vertexIndex0; // r3
    unsigned int vertexIndex1; // r4
    unsigned int vertexIndex2; // r9
    float xCoord[2]; // r1+0x20
    float yCoord[2]; // r1+0x18
    float uCoord[2]; // r1+0x10
    float vCoord[2]; // r1+0x8
    unsigned int uHalfOffset; // r22
    unsigned int uHalfOffsetX6; // r0
    unsigned int VertIndex; // r21

    // References
    // -> unsigned int FB_YRES;
    // -> unsigned int FB_XRES;
}

// total size: 0x8
struct xVec2 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// Range: 0x8010ED98 -> 0x8010F150
// this: r30
unsigned char image_widget::render_rotate_ccw(unsigned int uLayer /* r0 */) {
    // Local variables
    float fRadians; // f31
    float fTopU; // f30
    float fTopV; // f29
    float fBotU; // f28
    float fBotV; // f27
    float fTopX; // f24
    float fTopY; // f23
    float fCenterX; // f26
    float fCenterY; // f25
    float fBotX; // f22
    float fBotY; // f1
    struct xVec2 toTopLeft; // r1+0x20
    struct xVec2 toBotLeft; // r1+0x18
    struct xVec2 toTopRight; // r1+0x10
    struct xVec2 toBotRight; // r1+0x8
    float fSin; // f0
    float fCos; // f0
    float fTemp10; // f22
    float fTemp20; // f0

    // References
    // -> unsigned int FB_YRES;
    // -> unsigned int FB_XRES;
}

// Range: 0x8010F150 -> 0x8010F56C
// this: r30
unsigned char image_widget::render_offset_rotate_ccw(unsigned int uLayer /* r0 */) {
    // Local variables
    float fRadians; // f30
    float fTopU; // f29
    float fTopV; // f28
    float fBotU; // f27
    float fBotV; // f26
    float fTopX; // f31
    float fTopY; // f23
    float fBotX; // f22
    float fBotY; // f7
    float fCenterX; // f25
    float fCenterY; // f24
    struct xVec2 toTopLeft; // r1+0x20
    struct xVec2 toBotLeft; // r1+0x18
    struct xVec2 toTopRight; // r1+0x10
    struct xVec2 toBotRight; // r1+0x8
    float fSin; // f0
    float fCos; // f0
    float fTemp10; // f0
    float fTemp20; // f5

    // References
    // -> unsigned int FB_YRES;
    // -> unsigned int FB_XRES;
}

// Range: 0x8010F56C -> 0x8010FC0C
// this: r28
unsigned char image_widget::render_offset_pie(unsigned int uLayer /* r0 */) {
    // Local variables
    float u0; // f31
    float v0; // f30
    float u1; // f29
    float v1; // f28
    float fQuadWidth; // f27
    float fQuadHeight; // f26
    float fCenterX; // f25
    float fCenterY; // f26
    float fHalfWidth; // f27
    float fHalfHeight; // f2
    float fCenterYPlusfHalfHeight; // f21
    float fCenterYMinusfHalfHeight; // f20
    float fCenterU; // f24
    float fCenterV; // f23
    float fRangeToEight; // f22
    int nWholeTris; // r31
    int nWholeTrisPlus1; // r30
    int nWholeTrisPlus2; // r29
    float fInterpAmount; // f0
    float xCoord; // f20
    float yCoord; // f21
    float uCoord; // f22
    float vCoord; // f23
    int vertexIndex0; // r0
    int vertexIndex1; // r5
    int vertexIndex2; // r4
    int VertIndex; // r30

    // References
    // -> unsigned int FB_YRES;
    // -> unsigned int FB_XRES;
}

// Range: 0x8010FC0C -> 0x8010FEBC
// this: r30
unsigned char image_widget::render_strobe_effect(unsigned int uLayer /* r0 */) {
    // Local variables
    struct i2dRect location_rect; // r1+0x20
    float fRealBottomY; // f0
    float fVirtualBottomY; // f30
    float fStrobeRangePixels; // f1
    float fRealTopY; // f1
    float fTopYPercent; // f30
    float fBottomYPercent; // f31
    float vRange; // f29
    struct i2dRect uv_rect; // r1+0x10
    struct xColor_tag rect_color; // r1+0xC

    // References
    // -> class i2dQuadBuffer * gQuadBuffer;
    // -> struct xColor_tag g_WHITE;
    // -> unsigned int FB_XRES;
    // -> unsigned int FB_YRES;
}

// Range: 0x8010FEBC -> 0x801100E8
// this: r31
unsigned char image_widget::render_special_strobe(unsigned int uLayer /* r0 */) {
    // Local variables
    struct i2dRect location_rect; // r1+0x20
    float fRealBottomY; // f0
    float fVirtualBottomY; // f30
    float fStrobeRangePixels; // f1
    struct i2dRect uv_rect; // r1+0x10
    struct xColor_tag rect_color; // r1+0xC

    // References
    // -> class i2dQuadBuffer * gQuadBuffer;
    // -> struct xColor_tag g_WHITE;
    // -> unsigned int FB_XRES;
    // -> unsigned int FB_YRES;
}

// Range: 0x801100E8 -> 0x8011028C
// this: r30
unsigned char image_widget::render_random_v(unsigned int uLayer /* r0 */) {
    // Local variables
    struct i2dRect location_rect; // r1+0x20
    float fWidth; // f31
    float fDeltaV; // f31
    struct i2dRect uv_rect; // r1+0x10
    struct xColor_tag rect_color; // r1+0xC

    // References
    // -> class i2dQuadBuffer * gQuadBuffer;
    // -> struct xColor_tag g_WHITE;
    // -> unsigned int FB_YRES;
    // -> unsigned int FB_XRES;
}

// Range: 0x801102A0 -> 0x80110534
// this: r0
void image_widget::set_buffer_to_layer(enum RENDERTYPE eType /* r0 */) {
    // Local variables
    unsigned short * pIndex; // r5
}


