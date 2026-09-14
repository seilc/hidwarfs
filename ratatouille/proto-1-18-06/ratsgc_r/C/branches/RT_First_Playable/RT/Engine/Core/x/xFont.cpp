/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xFont.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8005B82C -> 0x80065DC0
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
static struct basic_rect screen_bounds; // size: 0x10, address: 0x80C0A7E8
// total size: 0x388
struct jot_block {
    // Members
    struct jot jots[16]; // offset 0x0, size 0x380
    struct jot_block * next_block; // offset 0x380, size 0x4
    unsigned char used; // offset 0x384, size 0x1
};
static struct jot_block jot_blocks[64]; // size: 0xE200, address: 0x80A5F260
static struct jot_line_block jot_line_blocks[64]; // size: 0x2200, address: 0x80A6D460
static struct context_buffer_block context_buffer_blocks[64]; // size: 0x1300, address: 0x80A6F660
static class layout * gCurrentLayout; // size: 0x4, address: 0x80C072C0
// Range: 0x8005B82C -> 0x8005BA04
static void init_layout_blocks() {
    // Local variables
    int i; // r0

    // References
    // -> static struct context_buffer_block context_buffer_blocks[64];
    // -> static struct jot_line_block jot_line_blocks[64];
    // -> static struct jot_block jot_blocks[64];
}

static char __FUNCTION__[30]; // size: 0x1E, address: 0x804161F8
static char __FUNCTION__[19]; // size: 0x13, address: 0x80BFCAE0
static char __FUNCTION__[24]; // size: 0x18, address: 0x80BFCAF4
static char * default_font_texture[2]; // size: 0x8, address: 0x80BFCB0C
// total size: 0x4
struct /* @class$2113xFont_cpp */ {
    // Members
    signed short x; // offset 0x0, size 0x2
    signed short y; // offset 0x2, size 0x2
};
// total size: 0x2
struct /* @class$2114xFont_cpp */ {
    // Members
    unsigned char offset; // offset 0x0, size 0x1
    unsigned char size; // offset 0x1, size 0x1
};
// total size: 0x1FC
struct font_asset {
    // Members
    unsigned int tex_id; // offset 0x0, size 0x4
    unsigned short u; // offset 0x4, size 0x2
    unsigned short v; // offset 0x6, size 0x2
    unsigned char du; // offset 0x8, size 0x1
    unsigned char dv; // offset 0x9, size 0x1
    unsigned char line_size; // offset 0xA, size 0x1
    unsigned char baseline; // offset 0xB, size 0x1
    // total size: 0x4
    struct /* @class$2113xFont_cpp */ {
        // Members
        signed short x; // offset 0x0, size 0x2
        signed short y; // offset 0x2, size 0x2
    } space; // offset 0xC, size 0x4
    unsigned int flags; // offset 0x10, size 0x4
    float pixel_shear; // offset 0x14, size 0x4
    unsigned char char_set[161]; // offset 0x18, size 0xA1
    // total size: 0x2
    struct /* @class$2114xFont_cpp */ {
        // Members
        unsigned char offset; // offset 0x0, size 0x1
        unsigned char size; // offset 0x1, size 0x1
    } char_pos[160]; // offset 0xB9, size 0x140
};
static struct font_asset default_font_assets[4]; // size: 0x7F0, address: 0x80416218
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
// total size: 0x1A1C
struct font_data {
    // Members
    struct font_asset * asset; // offset 0x0, size 0x4
    unsigned long index_max; // offset 0x4, size 0x4
    unsigned char char_index[256]; // offset 0x8, size 0x100
    unsigned char fixed_width_character; // offset 0x108, size 0x1
    float iwidth; // offset 0x10C, size 0x4
    float iheight; // offset 0x110, size 0x4
    struct basic_rect tex_bounds[160]; // offset 0x114, size 0xA00
    struct basic_rect bounds[160]; // offset 0xB14, size 0xA00
    struct xVec2 dstfrac[160]; // offset 0x1514, size 0x500
    struct RwTexture * texture; // offset 0x1A14, size 0x4
    struct RwRaster * raster; // offset 0x1A18, size 0x4
};
static struct font_data active_fonts[4]; // size: 0x6870, address: 0x80A70960
static struct RwTexture * codepage_textures[16]; // size: 0x40, address: 0x80A771D0
static unsigned long active_fonts_size; // size: 0x4, address: 0x80C072C4
static unsigned long codepage_textures_size; // size: 0x4, address: 0x80C072C8
static struct basic_rect * codepage_tex_bounds; // size: 0x4, address: 0x80C072CC
static struct basic_rect * codepage_bounds; // size: 0x4, address: 0x80C072D0
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
static struct rwGameCube2DVertex vert_buffer[240]; // size: 0x1680, address: 0x80A77210
static unsigned long vert_buffer_used; // size: 0x4, address: 0x80C072D4
static float rcz; // size: 0x4, address: 0x80C072D8
static float nsz; // size: 0x4, address: 0x80C072DC
static char __FUNCTION__[12]; // size: 0xC, address: 0x80BFCB14
// total size: 0x10
struct basic_rect {
    // Static members
    static struct basic_rect m_Null; // size: 0x10
    static struct basic_rect m_Unit; // size: 0x10

    // Members
    int x; // offset 0x0, size 0x4
    int y; // offset 0x4, size 0x4
    int w; // offset 0x8, size 0x4
    int h; // offset 0xC, size 0x4
};
// Range: 0x8005BA04 -> 0x8005BBF0
static struct basic_rect find_bounds(const struct xColor_tag * bits /* r30 */, const struct basic_rect & r /* r31 */, int pitch /* r28 */) {
    // Local variables
    int diff; // r9
    const struct xColor_tag * endp; // r10
    const struct xColor_tag * p; // r11
    int pmode; // r12
    int minx; // r7
    int maxx; // r9
    int miny; // r30
    int maxy; // r8
    int y; // r31
    const struct xColor_tag * endline; // r6
    int x; // r28
    struct basic_rect b; // r1+0x8

    // References
    // -> static char __FUNCTION__[12];
}

static char __FUNCTION__[19]; // size: 0x13, address: 0x80BFCB20
// total size: 0x1C
struct RwImage {
    // Members
    int flags; // offset 0x0, size 0x4
    int width; // offset 0x4, size 0x4
    int height; // offset 0x8, size 0x4
    int depth; // offset 0xC, size 0x4
    int stride; // offset 0x10, size 0x4
    unsigned char * cpPixels; // offset 0x14, size 0x4
    struct RwRGBA * palette; // offset 0x18, size 0x4
};
// Range: 0x8005BBF0 -> 0x8005BF78
static unsigned char reset_font_spacing(struct font_asset & a /* r25 */) {
    // Local variables
    struct RwTexture * tex; // r0
    struct basic_rect char_bounds; // r1+0x28
    unsigned char baseline_count[256]; // r1+0x38
    int width; // r30
    int height; // r29
    struct RwImage * image; // r28
    const struct xColor_tag * bits; // r27
    int i; // r26
    struct basic_rect r; // r1+0x18
    int baseline; // r5

    // References
    // -> static char __FUNCTION__[19];
}

static char __FUNCTION__[19]; // size: 0x13, address: 0x80BFCB34
// Range: 0x8005BF78 -> 0x8005C35C
static unsigned char InitCodePageBounds() {
    // Local variables
    unsigned int codepage; // r26
    struct RwTexture * tex; // r21
    struct basic_rect char_bounds; // r1+0x28
    int width; // r25
    int height; // r24
    struct RwImage * image; // r23
    const struct xColor_tag * bits; // r22
    int i; // r21
    struct basic_rect r; // r1+0x18

    // References
    // -> static unsigned long codepage_textures_size;
    // -> static struct basic_rect * codepage_bounds;
    // -> static struct basic_rect * codepage_tex_bounds;
    // -> static char __FUNCTION__[19];
    // -> static struct RwTexture * codepage_textures[16];
}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80BFCB48
// Range: 0x8005C35C -> 0x8005C594
static struct basic_rect get_tex_bounds(const struct font_data & fd /* r30 */, unsigned char i /* r31 */) {
    // Local variables
    const struct font_asset & a; // r4
    struct basic_rect r; // r1+0x8

    // References
    // -> static char __FUNCTION__[15];
}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80BFCB58
// Range: 0x8005C594 -> 0x8005C6EC
static struct basic_rect get_bounds(const struct font_data & fd /* r29 */, unsigned char i /* r30 */) {
    // Local variables
    const struct font_asset & a; // r8
    struct basic_rect r; // r1+0x8

    // References
    // -> static char __FUNCTION__[11];
}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80BFCB64
// Range: 0x8005C6EC -> 0x8005CDE8
static unsigned char init_font_data(struct font_data & fd /* r29 */) {
    // Local variables
    const struct font_asset & a; // r31
    int height; // r7
    unsigned char i; // r30
    unsigned char c; // r4
    unsigned long tail_index; // r30

    // References
    // -> static char __FUNCTION__[15];
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80BFCB74
void * RwEngineInstance; // size: 0x4, address: 0x80C09F34
// total size: 0x18
struct analog_data {
    // Members
    struct xVec2 offset; // offset 0x0, size 0x8
    struct xVec2 dir; // offset 0x8, size 0x8
    float mag; // offset 0x10, size 0x4
    float ang; // offset 0x14, size 0x4
};
enum xCamCoordType {
    XCAM_COORD_INVALID = -1,
    XCAM_COORD_CART = 0,
    XCAM_COORD_CYLINDER = 1,
    XCAM_COORD_SPHERE = 2,
    XCAM_COORD_MAX = 3,
};
enum xCamOrientType {
    XCAM_ORIENT_INVALID = -1,
    XCAM_ORIENT_QUAT = 0,
    XCAM_ORIENT_EULER = 1,
    XCAM_ORIENT_MAX = 2,
};
// total size: 0x18
struct xCamCoordCylinder {
    // Members
    struct xVec3 origin; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    float height; // offset 0x10, size 0x4
    float theta; // offset 0x14, size 0x4
};
// total size: 0x10
struct xQuat {
    // Members
    struct xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
// total size: 0x20
struct xCamCoordSphere {
    // Members
    struct xVec3 origin; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    struct xQuat dir; // offset 0x10, size 0x10
};
// total size: 0x20
struct xCamCoord {
    // Members
    union { // inferred
        struct xVec3 cart; // offset 0x0, size 0xC
        struct xCamCoordCylinder cylinder; // offset 0x0, size 0x18
        struct xCamCoordSphere sphere; // offset 0x0, size 0x20
    };
};
// total size: 0xC
struct xCamOrientEuler {
    // Members
    float yaw; // offset 0x0, size 0x4
    float pitch; // offset 0x4, size 0x4
    float roll; // offset 0x8, size 0x4
};
// total size: 0x10
struct xCamOrient {
    // Members
    union { // inferred
        struct xQuat quat; // offset 0x0, size 0x10
        struct xCamOrientEuler euler; // offset 0x0, size 0xC
    };
};
// total size: 0x30
struct xCamSpatialInfo {
    // Members
    struct xCamCoord coord; // offset 0x0, size 0x20
    struct xCamOrient orient; // offset 0x20, size 0x10
};
// total size: 0x8
struct xCamConfigCommon {
    // Members
    unsigned char priority; // offset 0x0, size 0x1
    unsigned char pad1; // offset 0x1, size 0x1
    unsigned char pad2; // offset 0x2, size 0x1
    unsigned char pad3; // offset 0x3, size 0x1
    float blend_time; // offset 0x4, size 0x4
};
// total size: 0x0
class xCamTransition {};
// total size: 0x14
class xCamTimeBias : public xCamBias {
    // Members
    float bias; // offset 0x8, size 0x4
    float time; // offset 0xC, size 0x4
    float blendTime; // offset 0x10, size 0x4
};
// total size: 0x8
class xCamBias {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned char mIsBiDirectional; // offset 0x4, size 0x1
};
// total size: 0x0
class zCam2Player {};
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
// total size: 0x8
struct xBaseAsset {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x50
struct xEntAsset : public xBaseAsset {
    // Members
    unsigned char flags; // offset 0x8, size 0x1
    unsigned char subtype; // offset 0x9, size 0x1
    unsigned char pflags; // offset 0xA, size 0x1
    unsigned char moreFlags; // offset 0xB, size 0x1
    unsigned int surfaceID; // offset 0xC, size 0x4
    struct xVec3 ang; // offset 0x10, size 0xC
    struct xVec3 pos; // offset 0x1C, size 0xC
    struct xVec3 scale; // offset 0x28, size 0xC
    float redMult; // offset 0x34, size 0x4
    float greenMult; // offset 0x38, size 0x4
    float blueMult; // offset 0x3C, size 0x4
    float seeThru; // offset 0x40, size 0x4
    float seeThruSpeed; // offset 0x44, size 0x4
    unsigned int modelInfoID; // offset 0x48, size 0x4
    unsigned int animListID; // offset 0x4C, size 0x4
};
// total size: 0xC
struct xModelPool {
    // Members
    struct xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    struct xModelInstance * List; // offset 0x8, size 0x4
};
// total size: 0xC
struct xAnimPhysicsData {
    // Members
    struct xVec3 * tranTable; // offset 0x0, size 0x4
    float * yawTable; // offset 0x4, size 0x4
    int tranCount; // offset 0x8, size 0x4
};
// total size: 0x24
struct xAnimFile {
    // Members
    struct xAnimFile * Next; // offset 0x0, size 0x4
    const char * Name; // offset 0x4, size 0x4
    unsigned int ID; // offset 0x8, size 0x4
    unsigned int FileFlags; // offset 0xC, size 0x4
    float Duration; // offset 0x10, size 0x4
    float TimeOffset; // offset 0x14, size 0x4
    unsigned short BoneCount; // offset 0x18, size 0x2
    unsigned char NumAnims[2]; // offset 0x1A, size 0x2
    void * RawData; // offset 0x1C, size 0x4
    struct xAnimPhysicsData * PhysicsData; // offset 0x20, size 0x4
};
enum xSndHandle {
};
// total size: 0x8
struct xAnimActiveEffect {
    // Members
    struct xAnimEffect * Effect; // offset 0x0, size 0x4
    union { // inferred
        unsigned int Handle; // offset 0x4, size 0x4
        enum xSndHandle SndHandle; // offset 0x4, size 0x4
    };
};
// total size: 0x14
struct xAnimEffect {
    // Members
    struct xAnimEffect * Next; // offset 0x0, size 0x4
    unsigned short Flags; // offset 0x4, size 0x2
    unsigned short Probability; // offset 0x6, size 0x2
    float StartTime; // offset 0x8, size 0x4
    float EndTime; // offset 0xC, size 0x4
    unsigned int (* Callback)(unsigned int, struct xAnimActiveEffect *, struct xAnimSingle *, void *); // offset 0x10, size 0x4
};
// total size: 0x2C
struct xAnimTransition {
    // Members
    struct xAnimTransition * Next; // offset 0x0, size 0x4
    struct xAnimState * Dest; // offset 0x4, size 0x4
    unsigned int (* Conditional)(struct xAnimTransition *, struct xAnimSingle *, void *); // offset 0x8, size 0x4
    unsigned int (* Callback)(struct xAnimTransition *, struct xAnimSingle *, void *); // offset 0xC, size 0x4
    unsigned int Flags; // offset 0x10, size 0x4
    unsigned int UserFlags; // offset 0x14, size 0x4
    float SrcTime; // offset 0x18, size 0x4
    float DestTime; // offset 0x1C, size 0x4
    unsigned short Priority; // offset 0x20, size 0x2
    unsigned short QueuePriority; // offset 0x22, size 0x2
    float BlendRecip; // offset 0x24, size 0x4
    unsigned short * BlendOffset; // offset 0x28, size 0x4
};
// total size: 0x8
struct xAnimTransitionList {
    // Members
    struct xAnimTransitionList * Next; // offset 0x0, size 0x4
    struct xAnimTransition * T; // offset 0x4, size 0x4
};
// total size: 0x4
struct xAnimMultiFileBase {
    // Members
    unsigned int Count; // offset 0x0, size 0x4
};
// total size: 0x8
struct xAnimMultiFileEntry {
    // Members
    unsigned int ID; // offset 0x0, size 0x4
    struct xAnimFile * File; // offset 0x4, size 0x4
};
// total size: 0xC
struct xAnimMultiFile : public xAnimMultiFileBase {
    // Members
    struct xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
};
// total size: 0x4C
struct xAnimState {
    // Members
    struct xAnimState * Next; // offset 0x0, size 0x4
    const char * Name; // offset 0x4, size 0x4
    unsigned int ID; // offset 0x8, size 0x4
    unsigned int Flags; // offset 0xC, size 0x4
    unsigned int UserFlags; // offset 0x10, size 0x4
    float Speed; // offset 0x14, size 0x4
    struct xAnimFile * Data; // offset 0x18, size 0x4
    struct xAnimEffect * Effects; // offset 0x1C, size 0x4
    struct xAnimTransitionList * Default; // offset 0x20, size 0x4
    struct xAnimTransitionList * List; // offset 0x24, size 0x4
    float * BoneBlend; // offset 0x28, size 0x4
    float * TimeSnap; // offset 0x2C, size 0x4
    float FadeRecip; // offset 0x30, size 0x4
    unsigned short * FadeOffset; // offset 0x34, size 0x4
    void * CallbackData; // offset 0x38, size 0x4
    struct xAnimMultiFile * MultiFile; // offset 0x3C, size 0x4
    void (* BeforeEnter)(struct xAnimPlay *, struct xAnimState *, void *); // offset 0x40, size 0x4
    void (* StateCallback)(struct xAnimState *, struct xAnimSingle *, void *); // offset 0x44, size 0x4
    void (* BeforeAnimMatrices)(struct xAnimPlay *, struct xQuat *, struct xVec3 *, int); // offset 0x48, size 0x4
};
// total size: 0x50
struct xAnimSingle {
    // Members
    unsigned int SingleFlags; // offset 0x0, size 0x4
    struct xAnimState * State; // offset 0x4, size 0x4
    float Time; // offset 0x8, size 0x4
    float CurrentSpeed; // offset 0xC, size 0x4
    float BilinearLerp[2]; // offset 0x10, size 0x8
    struct xAnimEffect * Effect; // offset 0x18, size 0x4
    unsigned int ActiveCount; // offset 0x1C, size 0x4
    float LastTime; // offset 0x20, size 0x4
    struct xAnimActiveEffect * ActiveList; // offset 0x24, size 0x4
    struct xAnimPlay * Play; // offset 0x28, size 0x4
    struct xAnimTransition * Sync; // offset 0x2C, size 0x4
    struct xAnimTransition * Tran; // offset 0x30, size 0x4
    struct xAnimSingle * Blend; // offset 0x34, size 0x4
    float BlendFactor; // offset 0x38, size 0x4
    struct xVec3 PhysDisp; // offset 0x3C, size 0xC
    float YawDisp; // offset 0x48, size 0x4
    unsigned int pad[1]; // offset 0x4C, size 0x4
};
// total size: 0x18
struct xAnimTable {
    // Members
    const char * Name; // offset 0x0, size 0x4
    struct xAnimTransition * TransitionList; // offset 0x4, size 0x4
    struct xAnimState * StateList; // offset 0x8, size 0x4
    unsigned int AnimIndex; // offset 0xC, size 0x4
    unsigned int MorphIndex; // offset 0x10, size 0x4
    unsigned int UserFlags; // offset 0x14, size 0x4
};
// total size: 0x1C
struct xMemPool {
    // Members
    void * FreeList; // offset 0x0, size 0x4
    unsigned short NextOffset; // offset 0x4, size 0x2
    unsigned short Flags; // offset 0x6, size 0x2
    void * UsedList; // offset 0x8, size 0x4
    void (* InitCB)(struct xMemPool *, void *); // offset 0xC, size 0x4
    void * Buffer; // offset 0x10, size 0x4
    unsigned short Size; // offset 0x14, size 0x2
    unsigned short NumRealloc; // offset 0x16, size 0x2
    unsigned int Total; // offset 0x18, size 0x4
};
// total size: 0x20
struct xAnimPlay {
    // Members
    struct xAnimPlay * Next; // offset 0x0, size 0x4
    unsigned short NumSingle; // offset 0x4, size 0x2
    unsigned short BoneCount; // offset 0x6, size 0x2
    struct xAnimSingle * Single; // offset 0x8, size 0x4
    void * Object; // offset 0xC, size 0x4
    struct xAnimTable * Table; // offset 0x10, size 0x4
    struct xMemPool * Pool; // offset 0x14, size 0x4
    struct xModelInstance * ModelInst; // offset 0x18, size 0x4
    void (* BeforeAnimMatrices)(struct xAnimPlay *, struct xQuat *, struct xVec3 *, int); // offset 0x1C, size 0x4
};
// total size: 0x14
struct RwObjectHasFrame {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLLLink lFrame; // offset 0x8, size 0x8
    struct RwObjectHasFrame * (* sync)(struct RwObjectHasFrame *); // offset 0x10, size 0x4
};
// total size: 0x18
struct RwResEntry {
    // Members
    struct RwLLLink link; // offset 0x0, size 0x8
    int size; // offset 0x8, size 0x4
    void * owner; // offset 0xC, size 0x4
    struct RwResEntry * * ownerRef; // offset 0x10, size 0x4
    void (* destroyNotify)(struct RwResEntry *); // offset 0x14, size 0x4
};
// total size: 0xC
struct rxHeapSuperBlockDescriptor {
    // Members
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    struct rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
// total size: 0x8
struct rxHeapFreeBlock {
    // Members
    unsigned int size; // offset 0x0, size 0x4
    struct rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
// total size: 0x20
struct rxHeapBlockHeader {
    // Members
    struct rxHeapBlockHeader * prev; // offset 0x0, size 0x4
    struct rxHeapBlockHeader * next; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    struct rxHeapFreeBlock * freeEntry; // offset 0xC, size 0x4
    unsigned int pad[4]; // offset 0x10, size 0x10
};
// total size: 0x1C
struct RxHeap {
    // Members
    unsigned int superBlockSize; // offset 0x0, size 0x4
    struct rxHeapSuperBlockDescriptor * head; // offset 0x4, size 0x4
    struct rxHeapBlockHeader * headBlock; // offset 0x8, size 0x4
    struct rxHeapFreeBlock * freeBlocks; // offset 0xC, size 0x4
    unsigned int entriesAlloced; // offset 0x10, size 0x4
    unsigned int entriesUsed; // offset 0x14, size 0x4
    int dirty; // offset 0x18, size 0x4
};
// total size: 0x8
struct RxPipelineNodeParam {
    // Members
    void * dataParam; // offset 0x0, size 0x4
    struct RxHeap * heap; // offset 0x4, size 0x4
};
// total size: 0x1C
struct RxNodeMethods {
    // Members
    int (* nodeBody)(struct RxPipelineNode *, struct RxPipelineNodeParam *); // offset 0x0, size 0x4
    int (* nodeInit)(struct RxNodeDefinition *); // offset 0x4, size 0x4
    void (* nodeTerm)(struct RxNodeDefinition *); // offset 0x8, size 0x4
    int (* pipelineNodeInit)(struct RxPipelineNode *); // offset 0xC, size 0x4
    void (* pipelineNodeTerm)(struct RxPipelineNode *); // offset 0x10, size 0x4
    int (* pipelineNodeConfig)(struct RxPipelineNode *, struct RxPipeline *); // offset 0x14, size 0x4
    unsigned int (* configMsgHandler)(struct RxPipelineNode *, unsigned int, unsigned int, void *); // offset 0x18, size 0x4
};
// total size: 0x10
struct RxClusterDefinition {
    // Members
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    const char * attributeSet; // offset 0xC, size 0x4
};
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
struct RxClusterRef {
    // Members
    struct RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
};
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
struct RxOutputSpec {
    // Members
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
};
// total size: 0x14
struct RxIoSpec {
    // Members
    unsigned int numClustersOfInterest; // offset 0x0, size 0x4
    struct RxClusterRef * clustersOfInterest; // offset 0x4, size 0x4
    enum RxClusterValidityReq * inputRequirements; // offset 0x8, size 0x4
    unsigned int numOutputs; // offset 0xC, size 0x4
    struct RxOutputSpec * outputs; // offset 0x10, size 0x4
};
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x40
struct RxNodeDefinition {
    // Members
    char * name; // offset 0x0, size 0x4
    struct RxNodeMethods nodeMethods; // offset 0x4, size 0x1C
    struct RxIoSpec io; // offset 0x20, size 0x14
    unsigned int pipelineNodePrivateDataSize; // offset 0x34, size 0x4
    enum RxNodeDefEditable editable; // offset 0x38, size 0x4
    int InputPipesCnt; // offset 0x3C, size 0x4
};
// total size: 0x8
struct RxPipelineCluster {
    // Members
    struct RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
// total size: 0x0
struct rxReq {};
// total size: 0xC
struct RxPipelineNodeTopSortData {
    // Members
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    struct rxReq * req; // offset 0x8, size 0x4
};
// total size: 0x28
struct RxPipelineNode {
    // Members
    struct RxNodeDefinition * nodeDef; // offset 0x0, size 0x4
    unsigned int numOutputs; // offset 0x4, size 0x4
    unsigned int * outputs; // offset 0x8, size 0x4
    struct RxPipelineCluster * * slotClusterRefs; // offset 0xC, size 0x4
    unsigned int * slotsContinue; // offset 0x10, size 0x4
    void * privateData; // offset 0x14, size 0x4
    unsigned int * inputToClusterSlot; // offset 0x18, size 0x4
    struct RxPipelineNodeTopSortData * topSortData; // offset 0x1C, size 0x4
    void * initializationData; // offset 0x20, size 0x4
    unsigned int initializationDataSize; // offset 0x24, size 0x4
};
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x1C
struct RxCluster {
    // Members
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short stride; // offset 0x2, size 0x2
    void * data; // offset 0x4, size 0x4
    void * currentData; // offset 0x8, size 0x4
    unsigned int numAlloced; // offset 0xC, size 0x4
    unsigned int numUsed; // offset 0x10, size 0x4
    struct RxPipelineCluster * clusterRef; // offset 0x14, size 0x4
    unsigned int attributes; // offset 0x18, size 0x4
};
// total size: 0x30
struct RxPacket {
    // Members
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short numClusters; // offset 0x2, size 0x2
    struct RxPipeline * pipeline; // offset 0x4, size 0x4
    unsigned int * inputToClusterSlot; // offset 0x8, size 0x4
    unsigned int * slotsContinue; // offset 0xC, size 0x4
    struct RxPipelineCluster * * slotClusterRefs; // offset 0x10, size 0x4
    struct RxCluster clusters[1]; // offset 0x14, size 0x1C
};
// total size: 0xC
struct RxPipelineRequiresCluster {
    // Members
    struct RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
// total size: 0x34
struct RxPipeline {
    // Members
    int locked; // offset 0x0, size 0x4
    unsigned int numNodes; // offset 0x4, size 0x4
    struct RxPipelineNode * nodes; // offset 0x8, size 0x4
    unsigned int packetNumClusterSlots; // offset 0xC, size 0x4
    enum rxEmbeddedPacketState embeddedPacketState; // offset 0x10, size 0x4
    struct RxPacket * embeddedPacket; // offset 0x14, size 0x4
    unsigned int numInputRequirements; // offset 0x18, size 0x4
    struct RxPipelineRequiresCluster * inputRequirements; // offset 0x1C, size 0x4
    void * superBlock; // offset 0x20, size 0x4
    unsigned int superBlockSize; // offset 0x24, size 0x4
    unsigned int entryPoint; // offset 0x28, size 0x4
    unsigned int pluginId; // offset 0x2C, size 0x4
    unsigned int pluginData; // offset 0x30, size 0x4
};
// total size: 0xC
struct RwSurfaceProperties {
    // Members
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
// total size: 0x1C
struct RpMaterial {
    // Members
    struct RwTexture * texture; // offset 0x0, size 0x4
    struct RwRGBA color; // offset 0x4, size 0x4
    struct RxPipeline * pipeline; // offset 0x8, size 0x4
    struct RwSurfaceProperties surfaceProps; // offset 0xC, size 0xC
    signed short refCount; // offset 0x18, size 0x2
    signed short pad; // offset 0x1A, size 0x2
};
// total size: 0xC
struct RpMaterialList {
    // Members
    struct RpMaterial * * materials; // offset 0x0, size 0x4
    int numMaterials; // offset 0x4, size 0x4
    int space; // offset 0x8, size 0x4
};
// total size: 0x8
struct RpTriangle {
    // Members
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    unsigned short matIndex; // offset 0x6, size 0x2
};
// total size: 0x8
struct RwTexCoords {
    // Members
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0x10
struct RpMeshHeader {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    unsigned short numMeshes; // offset 0x4, size 0x2
    unsigned short serialNum; // offset 0x6, size 0x2
    unsigned int totalIndicesInMesh; // offset 0x8, size 0x4
    unsigned int firstMeshOffset; // offset 0xC, size 0x4
};
// total size: 0x10
struct RwSphere {
    // Members
    struct RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
// total size: 0x1C
struct RpMorphTarget {
    // Members
    struct RpGeometry * parentGeom; // offset 0x0, size 0x4
    struct RwSphere boundingSphere; // offset 0x4, size 0x10
    struct RwV3d * verts; // offset 0x14, size 0x4
    struct RwV3d * normals; // offset 0x18, size 0x4
};
// total size: 0x60
struct RpGeometry {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    unsigned int flags; // offset 0x8, size 0x4
    unsigned short lockedSinceLastInst; // offset 0xC, size 0x2
    signed short refCount; // offset 0xE, size 0x2
    int numTriangles; // offset 0x10, size 0x4
    int numVertices; // offset 0x14, size 0x4
    int numMorphTargets; // offset 0x18, size 0x4
    int numTexCoordSets; // offset 0x1C, size 0x4
    struct RpMaterialList matList; // offset 0x20, size 0xC
    struct RpTriangle * triangles; // offset 0x2C, size 0x4
    struct RwRGBA * preLitLum; // offset 0x30, size 0x4
    struct RwTexCoords * texCoords[8]; // offset 0x34, size 0x20
    struct RpMeshHeader * mesh; // offset 0x54, size 0x4
    struct RwResEntry * repEntry; // offset 0x58, size 0x4
    struct RpMorphTarget * morphTarget; // offset 0x5C, size 0x4
};
// total size: 0x2C
struct RpClump {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLinkList atomicList; // offset 0x8, size 0x8
    struct RwLinkList lightList; // offset 0x10, size 0x8
    struct RwLinkList cameraList; // offset 0x18, size 0x8
    struct RwLLLink inWorldLink; // offset 0x20, size 0x8
    struct RpClump * (* callback)(struct RpClump *, void *); // offset 0x28, size 0x4
};
// total size: 0x14
struct RpInterpolator {
    // Members
    int flags; // offset 0x0, size 0x4
    signed short startMorphTarget; // offset 0x4, size 0x2
    signed short endMorphTarget; // offset 0x6, size 0x2
    float time; // offset 0x8, size 0x4
    float recipTime; // offset 0xC, size 0x4
    float position; // offset 0x10, size 0x4
};
// total size: 0x70
struct RpAtomic {
    // Members
    struct RwObjectHasFrame object; // offset 0x0, size 0x14
    struct RwResEntry * repEntry; // offset 0x14, size 0x4
    struct RpGeometry * geometry; // offset 0x18, size 0x4
    struct RwSphere boundingSphere; // offset 0x1C, size 0x10
    struct RwSphere worldBoundingSphere; // offset 0x2C, size 0x10
    struct RpClump * clump; // offset 0x3C, size 0x4
    struct RwLLLink inClumpLink; // offset 0x40, size 0x8
    struct RpAtomic * (* renderCallBack)(struct RpAtomic *); // offset 0x48, size 0x4
    struct RpInterpolator interpolator; // offset 0x4C, size 0x14
    unsigned short renderFrame; // offset 0x60, size 0x2
    unsigned short pad; // offset 0x62, size 0x2
    struct RwLinkList llWorldSectorsInAtomic; // offset 0x64, size 0x8
    struct RxPipeline * pipeline; // offset 0x6C, size 0x4
};
// total size: 0x8
struct xModelPipe {
    // Members
    unsigned int Flags; // offset 0x0, size 0x4
    unsigned char Layer; // offset 0x4, size 0x1
    unsigned char AlphaDiscard; // offset 0x5, size 0x1
    unsigned short PipePad; // offset 0x6, size 0x2
};
// total size: 0x0
struct xSurface {};
// total size: 0x18
struct xModelBucket {
    // Members
    struct RpAtomic * Data; // offset 0x0, size 0x4
    struct RpAtomic * OriginalData; // offset 0x4, size 0x4
    union { // inferred
        struct xModelInstance * List; // offset 0x8, size 0x4
        struct xModelBucket * * BackRef; // offset 0x8, size 0x4
    };
    int ClipFlags; // offset 0xC, size 0x4
    struct xModelPipe Pipe; // offset 0x10, size 0x8
};
// total size: 0x10
struct RwRGBAReal {
    // Members
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
};
// total size: 0x40
struct RpLight {
    // Members
    struct RwObjectHasFrame object; // offset 0x0, size 0x14
    float radius; // offset 0x14, size 0x4
    struct RwRGBAReal color; // offset 0x18, size 0x10
    float minusCosAngle; // offset 0x28, size 0x4
    struct RwLinkList WorldSectorsInLight; // offset 0x2C, size 0x8
    struct RwLLLink inWorld; // offset 0x34, size 0x8
    unsigned short lightFrame; // offset 0x3C, size 0x2
    unsigned short pad; // offset 0x3E, size 0x2
};
// total size: 0x60
struct xLightKitLight {
    // Members
    unsigned int type; // offset 0x0, size 0x4
    struct RwRGBAReal color; // offset 0x4, size 0x10
    float matrix[16]; // offset 0x14, size 0x40
    float radius; // offset 0x54, size 0x4
    float angle; // offset 0x58, size 0x4
    struct RpLight * platLight; // offset 0x5C, size 0x4
};
// total size: 0x14
struct xLightKit {
    // Members
    unsigned int tagID; // offset 0x0, size 0x4
    unsigned int groupID; // offset 0x4, size 0x4
    unsigned int lightCount; // offset 0x8, size 0x4
    struct xLightKitLight * lightList; // offset 0xC, size 0x4
    int blended; // offset 0x10, size 0x4
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
// total size: 0x18
struct xBox {
    // Members
    struct xVec3 upper; // offset 0x0, size 0xC
    struct xVec3 lower; // offset 0xC, size 0xC
};
// total size: 0x4
struct /* @class$1115xFont_cpp */ {
    // Members
    struct xVec3 * verts; // offset 0x0, size 0x4
};
// total size: 0x0
struct xLight {};
// total size: 0xCC
struct xModelInstance {
    // Members
    struct xModelInstance * Next; // offset 0x0, size 0x4
    struct xModelInstance * Parent; // offset 0x4, size 0x4
    struct xModelPool * Pool; // offset 0x8, size 0x4
    struct xAnimPlay * Anim; // offset 0xC, size 0x4
    struct RpAtomic * Data; // offset 0x10, size 0x4
    struct xModelPipe Pipe; // offset 0x14, size 0x8
    unsigned char InFrustum; // offset 0x1C, size 0x1
    unsigned char TrueClip; // offset 0x1D, size 0x1
    signed char sortBias; // offset 0x1E, size 0x1
    unsigned char modelpad; // offset 0x1F, size 0x1
    float RedMultiplier; // offset 0x20, size 0x4
    float GreenMultiplier; // offset 0x24, size 0x4
    float BlueMultiplier; // offset 0x28, size 0x4
    float Alpha; // offset 0x2C, size 0x4
    float FadeStart; // offset 0x30, size 0x4
    float FadeEnd; // offset 0x34, size 0x4
    struct xSurface * Surf; // offset 0x38, size 0x4
    struct xModelBucket * * Bucket; // offset 0x3C, size 0x4
    struct xModelInstance * BucketNext; // offset 0x40, size 0x4
    struct xLightKit * LightKit; // offset 0x44, size 0x4
    struct xLightKit * LightKitBlend; // offset 0x48, size 0x4
    float BlendDuration; // offset 0x4C, size 0x4
    float BlendTimeRemaining; // offset 0x50, size 0x4
    void * Object; // offset 0x54, size 0x4
    unsigned short Flags; // offset 0x58, size 0x2
    unsigned char BoneCount; // offset 0x5A, size 0x1
    unsigned char BoneIndex; // offset 0x5B, size 0x1
    unsigned char * BoneRemap; // offset 0x5C, size 0x4
    struct RwMatrixTag * Mat; // offset 0x60, size 0x4
    struct xVec3 Scale; // offset 0x64, size 0xC
    struct xBox animBound; // offset 0x70, size 0x18
    struct xBox combinedAnimBound; // offset 0x88, size 0x18
    unsigned int modelID; // offset 0xA0, size 0x4
    unsigned int shadowID; // offset 0xA4, size 0x4
    // total size: 0x4
    struct /* @class$1115xFont_cpp */ {
        // Members
        struct xVec3 * verts; // offset 0x0, size 0x4
    } anim_coll; // offset 0xA8, size 0x4
    struct xLight * lights[4]; // offset 0xAC, size 0x10
    float lightsDistance[4]; // offset 0xBC, size 0x10
};
// total size: 0x10
struct xRot {
    // Members
    struct xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
};
// total size: 0xF0
struct xEntFrame {
    // Members
    struct xMat4x3 mat; // offset 0x0, size 0x40
    struct xMat4x3 oldmat; // offset 0x40, size 0x40
    struct xVec3 oldvel; // offset 0x80, size 0xC
    struct xRot oldrot; // offset 0x8C, size 0x10
    struct xRot drot; // offset 0x9C, size 0x10
    struct xRot rot; // offset 0xAC, size 0x10
    struct xVec3 dvel; // offset 0xBC, size 0xC
    struct xVec3 vel; // offset 0xC8, size 0xC
    unsigned int mode; // offset 0xD4, size 0x4
    struct xVec3 dpos; // offset 0xD8, size 0xC
};
// total size: 0xC
struct /* @class$1270xFont_cpp */ {
    // Members
    float t; // offset 0x0, size 0x4
    float u; // offset 0x4, size 0x4
    float v; // offset 0x8, size 0x4
};
// total size: 0xC
struct tri_data {
    // Members
    unsigned int index; // offset 0x0, size 0x4
    float r; // offset 0x4, size 0x4
    float d; // offset 0x8, size 0x4
};
// total size: 0x54
struct xCollis {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int oid; // offset 0x4, size 0x4
    void * optr; // offset 0x8, size 0x4
    struct xModelInstance * mptr; // offset 0xC, size 0x4
    float dist; // offset 0x10, size 0x4
    float test_dist; // offset 0x14, size 0x4
    struct xVec3 norm; // offset 0x18, size 0xC
    struct xVec3 tohit; // offset 0x24, size 0xC
    struct xVec3 depen; // offset 0x30, size 0xC
    struct xVec3 hdng; // offset 0x3C, size 0xC
    union { // inferred
        // total size: 0xC
        struct /* @class$1270xFont_cpp */ {
            // Members
            float t; // offset 0x0, size 0x4
            float u; // offset 0x4, size 0x4
            float v; // offset 0x8, size 0x4
        } tuv; // offset 0x48, size 0xC
        struct tri_data tri; // offset 0x48, size 0xC
    };
};
// total size: 0x5FC
struct xEntCollis {
    // Members
    unsigned char chk; // offset 0x0, size 0x1
    unsigned char pen; // offset 0x1, size 0x1
    unsigned char env_sidx; // offset 0x2, size 0x1
    unsigned char env_eidx; // offset 0x3, size 0x1
    unsigned char npc_sidx; // offset 0x4, size 0x1
    unsigned char npc_eidx; // offset 0x5, size 0x1
    unsigned char dyn_sidx; // offset 0x6, size 0x1
    unsigned char dyn_eidx; // offset 0x7, size 0x1
    unsigned char stat_sidx; // offset 0x8, size 0x1
    unsigned char stat_eidx; // offset 0x9, size 0x1
    unsigned char idx; // offset 0xA, size 0x1
    struct xCollis colls[18]; // offset 0xC, size 0x5E8
    void (* post)(struct xEnt *, struct xScene *, float, struct xEntCollis *); // offset 0x5F4, size 0x4
    unsigned int (* depenq)(struct xEnt *, struct xEnt *, struct xScene *, float, struct xCollis *); // offset 0x5F8, size 0x4
};
// total size: 0x0
struct xGrid {};
// total size: 0x18
struct xGridBound {
    // Members
    void * data; // offset 0x0, size 0x4
    unsigned short gx; // offset 0x4, size 0x2
    unsigned short gz; // offset 0x6, size 0x2
    unsigned char oversize; // offset 0x8, size 0x1
    unsigned char deleted; // offset 0x9, size 0x1
    unsigned char gpad; // offset 0xA, size 0x1
    unsigned char pad; // offset 0xB, size 0x1
    struct xGrid * grid; // offset 0xC, size 0x4
    struct xGridBound * * head; // offset 0x10, size 0x4
    struct xGridBound * next; // offset 0x14, size 0x4
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
// total size: 0x10
struct xSphere {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
// total size: 0x24
struct xBBox {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    struct xBox box; // offset 0xC, size 0x18
};
// total size: 0x14
struct xCylinder {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
// total size: 0x4C
struct xBound {
    // Members
    struct xQCData qcd; // offset 0x0, size 0x20
    unsigned char type; // offset 0x20, size 0x1
    unsigned char pad[3]; // offset 0x21, size 0x3
    union { // inferred
        struct xSphere sph; // offset 0x24, size 0x10
        struct xBBox box; // offset 0x24, size 0x24
        struct xCylinder cyl; // offset 0x24, size 0x14
    };
    struct xMat4x3 * mat; // offset 0x48, size 0x4
};
// total size: 0x0
struct xFFX {};
// total size: 0x50
struct xEntDriveInfo {
    // Members
    struct xMat4x3 driveMat; // offset 0x0, size 0x40
    struct xVec3 centerOffset; // offset 0x40, size 0xC
    unsigned int flags; // offset 0x4C, size 0x4
};
// total size: 0x30
struct xShadowSimplePoly {
    // Members
    struct xVec3 vert[3]; // offset 0x0, size 0x24
    struct xVec3 norm; // offset 0x24, size 0xC
};
// total size: 0xA4
struct xShadowSimpleCache {
    // Members
    unsigned short flags; // offset 0x0, size 0x2
    unsigned char alpha; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
    unsigned int collPriority; // offset 0x4, size 0x4
    struct xVec3 pos; // offset 0x8, size 0xC
    struct xVec3 at; // offset 0x14, size 0xC
    float tol_movement; // offset 0x20, size 0x4
    float radiusOptional; // offset 0x24, size 0x4
    struct xEnt * castOnEnt; // offset 0x28, size 0x4
    struct xShadowSimplePoly poly; // offset 0x2C, size 0x30
    float envHeight; // offset 0x5C, size 0x4
    float shadowHeight; // offset 0x60, size 0x4
    union { // inferred
        unsigned int raster; // offset 0x64, size 0x4
        struct RwRaster * ptr_raster; // offset 0x64, size 0x4
    };
    float dydx; // offset 0x68, size 0x4
    float dydz; // offset 0x6C, size 0x4
    struct xVec3 corner[4]; // offset 0x70, size 0x30
    void * collSkipsItem; // offset 0xA0, size 0x4
};
// total size: 0x2C
struct xEntShadow {
    // Members
    struct xVec3 pos; // offset 0x0, size 0xC
    struct xVec3 vec; // offset 0xC, size 0xC
    struct RpAtomic * shadowModel; // offset 0x18, size 0x4
    float dst_cast; // offset 0x1C, size 0x4
    float radius[2]; // offset 0x20, size 0x8
    int flg_castOnOneDFF : 1; // offset 0x28, size 0x4
    int flg_castOnAllDFF : 1; // offset 0x28, size 0x4
    int flg_disableEnvCast : 1; // offset 0x28, size 0x4
    int flg_shadowUnused : 29; // offset 0x28, size 0x4
};
// total size: 0x0
struct anim_coll_data {};
// total size: 0xD8
struct xEnt : public xBase {
    // Members
    struct xEntAsset * asset; // offset 0x10, size 0x4
    unsigned short idx; // offset 0x14, size 0x2
    unsigned char flags; // offset 0x16, size 0x1
    unsigned char miscflags; // offset 0x17, size 0x1
    unsigned char subType; // offset 0x18, size 0x1
    unsigned char pflags; // offset 0x19, size 0x1
    unsigned short moreFlags; // offset 0x1A, size 0x2
    unsigned char isCulled : 2; // offset 0x1C, size 0x1
    unsigned char collisionEventReceived : 2; // offset 0x1C, size 0x1
    unsigned char driving_count : 7; // offset 0x1D, size 0x1
    unsigned char driving_reset : 1; // offset 0x1D, size 0x1
    unsigned char num_ffx; // offset 0x1E, size 0x1
    unsigned char collType; // offset 0x1F, size 0x1
    unsigned char collLev; // offset 0x20, size 0x1
    unsigned char chkby; // offset 0x21, size 0x1
    unsigned char penby; // offset 0x22, size 0x1
    void (* visUpdate)(struct xEnt *); // offset 0x24, size 0x4
    struct xModelInstance * model; // offset 0x28, size 0x4
    struct xModelInstance * collModel; // offset 0x2C, size 0x4
    struct xModelInstance * camcollModel; // offset 0x30, size 0x4
    void (* update)(struct xEnt *, struct xScene *, float); // offset 0x34, size 0x4
    void (* endUpdate)(struct xEnt *, struct xScene *, float); // offset 0x38, size 0x4
    void (* bupdate)(struct xEnt *, struct xVec3 *); // offset 0x3C, size 0x4
    void (* move)(struct xEnt *, struct xScene *, float, struct xEntFrame *); // offset 0x40, size 0x4
    void (* render)(struct xEnt *); // offset 0x44, size 0x4
    struct xEntFrame * frame; // offset 0x48, size 0x4
    struct xEntCollis * collis; // offset 0x4C, size 0x4
    struct xGridBound gridb; // offset 0x50, size 0x18
    struct xBound bound; // offset 0x68, size 0x4C
    void (* transl)(struct xEnt *, struct xVec3 *, struct xMat4x3 *); // offset 0xB4, size 0x4
    struct xFFX * ffx; // offset 0xB8, size 0x4
    struct xEnt * driver; // offset 0xBC, size 0x4
    struct xEnt * driven; // offset 0xC0, size 0x4
    struct xEntDriveInfo * driveInfo; // offset 0xC4, size 0x4
    struct xShadowSimpleCache * simpShadow; // offset 0xC8, size 0x4
    struct xEntShadow * entShadow; // offset 0xCC, size 0x4
    struct anim_coll_data * anim_coll; // offset 0xD0, size 0x4
    void * user_data; // offset 0xD4, size 0x4
};
enum RpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x4
struct RpSector {
    // Members
    int type; // offset 0x0, size 0x4
};
// total size: 0x18
struct RwBBox {
    // Members
    struct RwV3d sup; // offset 0x0, size 0xC
    struct RwV3d inf; // offset 0xC, size 0xC
};
// total size: 0x4
struct RpVertexNormal {
    // Members
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
    signed char z; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
};
// total size: 0x88
struct RpWorldSector {
    // Members
    int type; // offset 0x0, size 0x4
    struct RpTriangle * triangles; // offset 0x4, size 0x4
    struct RwV3d * vertices; // offset 0x8, size 0x4
    struct RpVertexNormal * normals; // offset 0xC, size 0x4
    struct RwTexCoords * texCoords[8]; // offset 0x10, size 0x20
    struct RwRGBA * preLitLum; // offset 0x30, size 0x4
    struct RwResEntry * repEntry; // offset 0x34, size 0x4
    struct RwLinkList collAtomicsInWorldSector; // offset 0x38, size 0x8
    struct RwLinkList lightsInWorldSector; // offset 0x40, size 0x8
    struct RwBBox boundingBox; // offset 0x48, size 0x18
    struct RwBBox tightBoundingBox; // offset 0x60, size 0x18
    struct RpMeshHeader * mesh; // offset 0x78, size 0x4
    struct RxPipeline * pipeline; // offset 0x7C, size 0x4
    unsigned short matListWindowBase; // offset 0x80, size 0x2
    unsigned short numVertices; // offset 0x82, size 0x2
    unsigned short numTriangles; // offset 0x84, size 0x2
    unsigned short pad; // offset 0x86, size 0x2
};
// total size: 0x70
struct RpWorld {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    unsigned int flags; // offset 0x8, size 0x4
    enum RpWorldRenderOrder renderOrder; // offset 0xC, size 0x4
    struct RpMaterialList matList; // offset 0x10, size 0xC
    struct RpSector * rootSector; // offset 0x1C, size 0x4
    int numTexCoordSets; // offset 0x20, size 0x4
    int numClumpsInWorld; // offset 0x24, size 0x4
    struct RwLLLink * currentClumpLink; // offset 0x28, size 0x4
    struct RwLinkList clumpList; // offset 0x2C, size 0x8
    struct RwLinkList lightList; // offset 0x34, size 0x8
    struct RwLinkList directionalLightList; // offset 0x3C, size 0x8
    struct RwV3d worldOrigin; // offset 0x44, size 0xC
    struct RwBBox boundingBox; // offset 0x50, size 0x18
    struct RpWorldSector * (* renderCallBack)(struct RpWorldSector *); // offset 0x68, size 0x4
    struct RxPipeline * pipeline; // offset 0x6C, size 0x4
};
// total size: 0x10
struct xClumpCollBSPBranchNode {
    // Members
    unsigned int leftInfo; // offset 0x0, size 0x4
    unsigned int rightInfo; // offset 0x4, size 0x4
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
};
// total size: 0x4
struct xClumpCollBSPVertInfo {
    // Members
    unsigned short atomIndex; // offset 0x0, size 0x2
    unsigned short meshVertIndex; // offset 0x2, size 0x2
};
union /* @class$1271xFont_cpp */ {
    struct xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
    unsigned int rawIdx; // offset 0x0, size 0x4
    struct RwV3d * p; // offset 0x0, size 0x4
};
// total size: 0x8
struct xClumpCollBSPTriangle {
    // Members
    union /* @class$1271xFont_cpp */ {
        struct xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
        unsigned int rawIdx; // offset 0x0, size 0x4
        struct RwV3d * p; // offset 0x0, size 0x4
    } v; // offset 0x0, size 0x4
    unsigned char flags; // offset 0x4, size 0x1
    unsigned char detailed_info_cache_index; // offset 0x5, size 0x1
    unsigned short matIndex; // offset 0x6, size 0x2
};
// total size: 0x10
struct xClumpCollBSPTree {
    // Members
    int numBranchNodes; // offset 0x0, size 0x4
    struct xClumpCollBSPBranchNode * branchNodes; // offset 0x4, size 0x4
    int numTriangles; // offset 0x8, size 0x4
    struct xClumpCollBSPTriangle * triangles; // offset 0xC, size 0x4
};
// total size: 0x8
struct xJSPNodeInfo {
    // Members
    int originalMatIndex; // offset 0x0, size 0x4
    unsigned short nodeFlags; // offset 0x4, size 0x2
    signed short sortOrder; // offset 0x6, size 0x2
};
// total size: 0x10
struct xJSPNodeTreeBranch {
    // Members
    unsigned short leftNode; // offset 0x0, size 0x2
    unsigned short rightNode; // offset 0x2, size 0x2
    unsigned char leftType; // offset 0x4, size 0x1
    unsigned char rightType; // offset 0x5, size 0x1
    unsigned short coord; // offset 0x6, size 0x2
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
};
// total size: 0x20
struct xJSPNodeTreeLeaf {
    // Members
    int nodeIndex; // offset 0x0, size 0x4
    int leafCount; // offset 0x4, size 0x4
    struct RwBBox box; // offset 0x8, size 0x18
};
// total size: 0x10
struct xJSPNodeTree {
    // Members
    int numBranchNodes; // offset 0x0, size 0x4
    struct xJSPNodeTreeBranch * branchNodes; // offset 0x4, size 0x4
    int numLeafNodes; // offset 0x8, size 0x4
    struct xJSPNodeTreeLeaf * leafNodes; // offset 0xC, size 0x4
};
// total size: 0x18
struct RpTie {
    // Members
    struct RwLLLink lAtomicInWorldSector; // offset 0x0, size 0x8
    struct RpAtomic * apAtom; // offset 0x8, size 0x4
    struct RwLLLink lWorldSectorInAtomic; // offset 0xC, size 0x8
    struct RpWorldSector * worldSector; // offset 0x14, size 0x4
};
// total size: 0xC
struct xJSPMiniLightTie {
    // Members
    struct RwLLLink lightInWorldSector; // offset 0x0, size 0x8
    struct RpLight * light; // offset 0x8, size 0x4
};
// total size: 0x108
struct xJSPNodeLight {
    // Members
    struct RpAtomic * atomic; // offset 0x0, size 0x4
    int lightCount; // offset 0x4, size 0x4
    struct RpTie dummyTie; // offset 0x8, size 0x18
    struct RpWorldSector dummySector; // offset 0x20, size 0x88
    struct xJSPMiniLightTie dummyLightTie[8]; // offset 0xA8, size 0x60
};
// total size: 0x2C
struct xJSPHeader {
    // Members
    char idtag[4]; // offset 0x0, size 0x4
    unsigned int version; // offset 0x4, size 0x4
    unsigned int jspNodeCount; // offset 0x8, size 0x4
    struct RpClump * clump; // offset 0xC, size 0x4
    struct xClumpCollBSPTree * colltree; // offset 0x10, size 0x4
    struct xJSPNodeInfo * jspNodeList; // offset 0x14, size 0x4
    unsigned int stripVecCount; // offset 0x18, size 0x4
    struct RwV3d * stripVecList; // offset 0x1C, size 0x4
    unsigned short vertDataFlags; // offset 0x20, size 0x2
    unsigned short vertDataStride; // offset 0x22, size 0x2
    struct xJSPNodeTree * nodetree; // offset 0x24, size 0x4
    struct xJSPNodeLight * nodelight; // offset 0x28, size 0x4
};
// total size: 0x10
struct iEnvMatOrder {
    // Members
    unsigned short jspIndex; // offset 0x0, size 0x2
    unsigned short nodeIndex; // offset 0x2, size 0x2
    int matGroup; // offset 0x4, size 0x4
    struct RpAtomic * atomic; // offset 0x8, size 0x4
    struct xJSPNodeInfo * nodeInfo; // offset 0xC, size 0x4
};
// total size: 0xA4
struct RwFrame {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLLLink inDirtyListLink; // offset 0x8, size 0x8
    struct RwMatrixTag modelling; // offset 0x10, size 0x40
    struct RwMatrixTag ltm; // offset 0x50, size 0x40
    struct RwLinkList objectList; // offset 0x90, size 0x8
    struct RwFrame * child; // offset 0x98, size 0x4
    struct RwFrame * next; // offset 0x9C, size 0x4
    struct RwFrame * root; // offset 0xA0, size 0x4
};
// total size: 0x44
struct iEnv {
    // Members
    struct RpWorld * world; // offset 0x0, size 0x4
    struct RpWorld * collision; // offset 0x4, size 0x4
    struct RpWorld * fx; // offset 0x8, size 0x4
    struct RpWorld * camera; // offset 0xC, size 0x4
    int jsp_count; // offset 0x10, size 0x4
    unsigned int * jsp_aid; // offset 0x14, size 0x4
    struct xJSPHeader * * jsp_list; // offset 0x18, size 0x4
    struct xBox * jsp_bound; // offset 0x1C, size 0x4
    int * jsp_visibilityCount; // offset 0x20, size 0x4
    int jspMatOrderCount; // offset 0x24, size 0x4
    struct iEnvMatOrder * jspMatOrderList; // offset 0x28, size 0x4
    struct RpLight * light[2]; // offset 0x2C, size 0x8
    struct RwFrame * light_frame[2]; // offset 0x34, size 0x8
    int memlvl; // offset 0x3C, size 0x4
    unsigned short numOpaque; // offset 0x40, size 0x2
    unsigned short numTransparent; // offset 0x42, size 0x2
};
// total size: 0x4C
struct xEnv {
    // Members
    struct iEnv * geom; // offset 0x0, size 0x4
    struct iEnv ienv; // offset 0x4, size 0x44
    struct xLightKit * lightKit; // offset 0x48, size 0x4
};
// total size: 0x70
struct xScene {
    // Members
    unsigned int sceneID; // offset 0x0, size 0x4
    unsigned short flags; // offset 0x4, size 0x2
    unsigned short numTrigs; // offset 0x6, size 0x2
    unsigned short numSpecialTriggers; // offset 0x8, size 0x2
    unsigned short numStats; // offset 0xA, size 0x2
    unsigned short numDyns; // offset 0xC, size 0x2
    unsigned short numNpcs; // offset 0xE, size 0x2
    unsigned short numActEnts; // offset 0x10, size 0x2
    float gravity; // offset 0x14, size 0x4
    float drag; // offset 0x18, size 0x4
    float friction; // offset 0x1C, size 0x4
    unsigned short numEntsAllocd; // offset 0x20, size 0x2
    unsigned short numTrigsAllocd; // offset 0x22, size 0x2
    unsigned short numSpecialTriggersAllocd; // offset 0x24, size 0x2
    unsigned short numStatsAllocd; // offset 0x26, size 0x2
    unsigned short numDynsAllocd; // offset 0x28, size 0x2
    unsigned short numNpcsAllocd; // offset 0x2A, size 0x2
    struct xEnt * * trigs; // offset 0x2C, size 0x4
    struct xEnt * * specialTriggers; // offset 0x30, size 0x4
    struct xEnt * * stats; // offset 0x34, size 0x4
    struct xEnt * * dyns; // offset 0x38, size 0x4
    struct xEnt * * npcs; // offset 0x3C, size 0x4
    struct xEnt * * actEnts; // offset 0x40, size 0x4
    struct xEnv * env; // offset 0x44, size 0x4
    struct xMemPool mempool; // offset 0x48, size 0x1C
    struct xBase * (* resolvID)(unsigned int); // offset 0x64, size 0x4
    char * (* base2Name)(struct xBase *); // offset 0x68, size 0x4
    char * (* id2Name)(unsigned int); // offset 0x6C, size 0x4
};
// total size: 0x170
struct xCamBlend : public xCam {
    // Members
    struct xCam * src; // offset 0x140, size 0x4
    struct xCam * dst; // offset 0x144, size 0x4
    class xCamBias * bias; // offset 0x148, size 0x4
    class xCamTimeBias timeBias; // offset 0x14C, size 0x14
    class xCamTransition * transition; // offset 0x160, size 0x4
};
// total size: 0x10
struct /* @class$1645xFont_cpp */ {
    // Members
    int flags; // offset 0x0, size 0x4
    struct xColor_tag color[3]; // offset 0x4, size 0xC
};
// total size: 0x18
struct zone_data {
    // Members
    struct xVec3 offset; // offset 0x0, size 0xC
    struct xVec3 face; // offset 0xC, size 0xC
};
// total size: 0x54
struct xCamConfigFollow {
    // Members
    struct zone_data zone_rest; // offset 0x0, size 0x18
    struct zone_data zone_above; // offset 0x18, size 0x18
    struct zone_data zone_below; // offset 0x30, size 0x18
    float speed_zone_offset; // offset 0x48, size 0x4
    float speed_zone_face; // offset 0x4C, size 0x4
    float speed_move_orbit; // offset 0x50, size 0x4
};
// total size: 0x18
struct xCamCoordPolar {
    // Members
    struct xVec3 origin; // offset 0x0, size 0xC
    float theta; // offset 0xC, size 0x4
    float phi; // offset 0x10, size 0x4
    float dist; // offset 0x14, size 0x4
};
// total size: 0x0
class zCamSplineCommonMix {};
// total size: 0x140
struct xCam {
    // Members
    struct xMat4x3 mat; // offset 0x0, size 0x40
    struct xMat4x3 coll_mat; // offset 0x40, size 0x40
    float fov; // offset 0x80, size 0x4
    int flags; // offset 0x84, size 0x4
    unsigned int owner; // offset 0x88, size 0x4
    struct xCamGroup * group; // offset 0x8C, size 0x4
    struct analog_data analog; // offset 0x90, size 0x18
    enum xCamCoordType coord_type; // offset 0xA8, size 0x4
    enum xCamOrientType orient_type; // offset 0xAC, size 0x4
    struct xCamSpatialInfo spatial; // offset 0xB0, size 0x30
    struct xCamSpatialInfo coll_spatial; // offset 0xE0, size 0x30
    struct xCamConfigCommon cfg_common; // offset 0x110, size 0x8
    void * __vptr$; // offset 0x118, size 0x4
private:
    int group_flags; // offset 0x11C, size 0x4
    struct xCamBlend * blender; // offset 0x120, size 0x4
public:
    // total size: 0x10
    struct /* @class$1645xFont_cpp */ {
        // Members
        int flags; // offset 0x0, size 0x4
        struct xColor_tag color[3]; // offset 0x4, size 0xC
    } debug; // offset 0x124, size 0x10
};
// total size: 0xC
struct xCamTransitionParams : public xCamConfigCommon {
    // Members
    class xCamTransition * mTransitionObject; // offset 0x8, size 0x4
};
// total size: 0xE0
struct xCamGroup {
    // Members
    struct xMat4x3 mat; // offset 0x0, size 0x40
    struct xMat4x3 coll_mat; // offset 0x40, size 0x40
    struct xVec3 coll_atXZ; // offset 0x80, size 0xC
    float cameraPlayerAudioBias; // offset 0x8C, size 0x4
    struct xVec3 vel; // offset 0x90, size 0xC
    float fov; // offset 0x9C, size 0x4
    float fov_default; // offset 0xA0, size 0x4
    int flags; // offset 0xA4, size 0x4
    struct xCam * primary; // offset 0xA8, size 0x4
    struct analog_data analog; // offset 0xAC, size 0x18
private:
    int child_flags; // offset 0xC4, size 0x4
    int child_flags_mask; // offset 0xC8, size 0x4
    struct xCamBlend * blend_cam[4]; // offset 0xCC, size 0x10
};
enum RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x10
struct xVec4 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
// total size: 0x8
struct xCamScreen {
    // Members
    struct RwCamera * icam; // offset 0x0, size 0x4
    float fov; // offset 0x4, size 0x4
};
// total size: 0x10
struct xUpdateCullEnt {
    // Members
    unsigned short index; // offset 0x0, size 0x2
    signed short groupIndex; // offset 0x2, size 0x2
    unsigned int (* update_cull_cb)(void *, void *); // offset 0x4, size 0x4
    void * cbdata; // offset 0x8, size 0x4
    struct xUpdateCullEnt * nextInGroup; // offset 0xC, size 0x4
};
// total size: 0xC
struct xGroupAsset : public xBaseAsset {
    // Members
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
};
// total size: 0x24
struct xGroup : public xBase {
    // Members
    struct xGroupAsset * asset; // offset 0x10, size 0x4
    struct xBase * * item; // offset 0x14, size 0x4
    unsigned int last_index; // offset 0x18, size 0x4
    unsigned int ptr_last_index; // offset 0x1C, size 0x4
    int flg_group; // offset 0x20, size 0x4
};
// total size: 0xC
struct xUpdateCullGroup {
    // Members
    unsigned int active; // offset 0x0, size 0x4
    unsigned short startIndex; // offset 0x4, size 0x2
    unsigned short endIndex; // offset 0x6, size 0x2
    struct xGroup * groupObject; // offset 0x8, size 0x4
};
// total size: 0x2C
struct xUpdateCullMgr {
    // Members
    unsigned int entCount; // offset 0x0, size 0x4
    unsigned int entActive; // offset 0x4, size 0x4
    void * ent; // offset 0x8, size 0x4
    struct xUpdateCullEnt * * mgr; // offset 0xC, size 0x4
    unsigned int mgrCount; // offset 0x10, size 0x4
    unsigned int mgrCurr; // offset 0x14, size 0x4
    struct xUpdateCullEnt * mgrList; // offset 0x18, size 0x4
    unsigned int grpCount; // offset 0x1C, size 0x4
    struct xUpdateCullGroup * grpList; // offset 0x20, size 0x4
    void (* activateCB)(void *); // offset 0x24, size 0x4
    void (* deactivateCB)(void *); // offset 0x28, size 0x4
};
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x1C
struct iFogParams {
    // Members
    enum RwFogType type; // offset 0x0, size 0x4
    float start; // offset 0x4, size 0x4
    float stop; // offset 0x8, size 0x4
    float density; // offset 0xC, size 0x4
    struct RwRGBA fogcolor; // offset 0x10, size 0x4
    struct RwRGBA bgcolor; // offset 0x14, size 0x4
    unsigned char * table; // offset 0x18, size 0x4
};
// total size: 0x0
struct PlaybackStruct {};
// total size: 0xC
struct PlaybackBuffers {
    // Members
    struct PlaybackStruct * PlaybackBuf; // offset 0x0, size 0x4
    struct PlaybackStruct * PlaybackCur; // offset 0x4, size 0x4
    struct PlaybackStruct * PlaybackEnd; // offset 0x8, size 0x4
};
// total size: 0x0
struct zPlayer {};
// total size: 0x14
class zPlayerContainer {
    // Members
    struct zPlayer * playerArray[4]; // offset 0x0, size 0x10
    int numPlayers; // offset 0x10, size 0x4
};
// total size: 0x18
struct xPortalAsset : public xBaseAsset {
    // Members
    unsigned int assetCameraID; // offset 0x8, size 0x4
    unsigned int assetMarkerID; // offset 0xC, size 0x4
    float ang; // offset 0x10, size 0x4
    unsigned int sceneID; // offset 0x14, size 0x4
};
// total size: 0x14
struct _zPortal : public xBase {
    // Members
    struct xPortalAsset * passet; // offset 0x10, size 0x4
};
// total size: 0x5C
struct xEnvAsset : public xBaseAsset {
    // Members
    unsigned int bspAssetID; // offset 0x8, size 0x4
    unsigned int startCameraAssetID; // offset 0xC, size 0x4
    unsigned int climateFlags; // offset 0x10, size 0x4
    float climateStrengthMin; // offset 0x14, size 0x4
    float climateStrengthMax; // offset 0x18, size 0x4
    unsigned int bspLightKit; // offset 0x1C, size 0x4
    unsigned int objectLightKit; // offset 0x20, size 0x4
    unsigned int flags; // offset 0x24, size 0x4
    unsigned int bspCollisionAssetID; // offset 0x28, size 0x4
    unsigned int bspFXAssetID; // offset 0x2C, size 0x4
    unsigned int bspCameraAssetID; // offset 0x30, size 0x4
    unsigned int bspMapperID; // offset 0x34, size 0x4
    unsigned int bspMapperCollisionID; // offset 0x38, size 0x4
    unsigned int bspMapperFXID; // offset 0x3C, size 0x4
    float loldHeight; // offset 0x40, size 0x4
    struct xVec3 minBounds; // offset 0x44, size 0xC
    struct xVec3 maxBounds; // offset 0x50, size 0xC
};
// total size: 0x14
struct _zEnv : public xBase {
    // Members
    struct xEnvAsset * easset; // offset 0x10, size 0x4
};
// total size: 0x10
struct xDynAsset : public xBaseAsset {
    // Members
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
// total size: 0x68
struct zSceneParameters : public xDynAsset {
    // Members
    unsigned int idle03ExtraCount; // offset 0x10, size 0x4
    struct xAnimFile * * idle03Extras; // offset 0x14, size 0x4
    unsigned int idle04ExtraCount; // offset 0x18, size 0x4
    struct xAnimFile * * idle04Extras; // offset 0x1C, size 0x4
    unsigned char bombCount; // offset 0x20, size 0x1
    unsigned char extraIdleDelay; // offset 0x21, size 0x1
    unsigned char hdrGlow; // offset 0x22, size 0x1
    unsigned char hdrDarken; // offset 0x23, size 0x1
    unsigned int uDefaultMusicHash; // offset 0x24, size 0x4
    unsigned int flags; // offset 0x28, size 0x4
    float waterTileWidth; // offset 0x2C, size 0x4
    float lodFadeDistance; // offset 0x30, size 0x4
    float waterTileOffsetX; // offset 0x34, size 0x4
    float waterTileOffsetZ; // offset 0x38, size 0x4
    unsigned char numCheckpoints; // offset 0x3C, size 0x1
    unsigned char pad1[3]; // offset 0x3D, size 0x3
    float grassDistFade; // offset 0x40, size 0x4
    float grassDistCull; // offset 0x44, size 0x4
    unsigned int piggybank; // offset 0x48, size 0x4
    unsigned int maxAnimationMem; // offset 0x4C, size 0x4
    unsigned int maxArtMem; // offset 0x50, size 0x4
    unsigned int maxDesignMem; // offset 0x54, size 0x4
    unsigned int maxProgrammingMem; // offset 0x58, size 0x4
    unsigned int pad[3]; // offset 0x5C, size 0xC
};
// total size: 0x6A8
struct zScene : public xScene {
    // Members
    struct _zPortal * pendingPortal; // offset 0x70, size 0x4
    int num_base; // offset 0x74, size 0x4
    struct xBase * * base; // offset 0x78, size 0x4
    unsigned int num_update_base; // offset 0x7C, size 0x4
    struct xBase * * update_base; // offset 0x80, size 0x4
    int baseCount[195]; // offset 0x84, size 0x30C
    struct xBase * baseList[195]; // offset 0x390, size 0x30C
    struct _zEnv * zen; // offset 0x69C, size 0x4
    struct zSceneParameters * parameters; // offset 0x6A0, size 0x4
    unsigned char enableDrawing; // offset 0x6A4, size 0x1
};
enum sceDemoEndReason {
    SCE_DEMO_ENDREASON_ATTRACT_INTERRUPTED = 0,
    SCE_DEMO_ENDREASON_ATTRACT_COMPLETE = 1,
    SCE_DEMO_ENDREASON_PLAYABLE_INACTIVITY_TIMEOUT = 2,
    SCE_DEMO_ENDREASON_PLAYABLE_GAMEPLAY_TIMEOUT = 3,
    SCE_DEMO_ENDREASON_PLAYABLE_COMPLETE = 4,
    SCE_DEMO_ENDREASON_PLAYABLE_QUIT = 5,
};
// total size: 0x38
struct PS2DemoGlobals {
    // Members
    unsigned short language; // offset 0x0, size 0x2
    unsigned short aspect; // offset 0x2, size 0x2
    unsigned short play_mode; // offset 0x4, size 0x2
    unsigned short inactive_timeout; // offset 0x6, size 0x2
    unsigned short gameplay_timeout; // offset 0x8, size 0x2
    enum sceDemoEndReason exit_code; // offset 0xC, size 0x4
    unsigned int FMV_playing : 1; // offset 0x10, size 0x4
    unsigned int more_padding : 31; // offset 0x10, size 0x4
    float bail_timer; // offset 0x14, size 0x4
    int inactive_detect; // offset 0x18, size 0x4
    float inactive_timer; // offset 0x1C, size 0x4
    float gameplay_timer; // offset 0x20, size 0x4
    char subdir[16]; // offset 0x24, size 0x10
    unsigned short quit; // offset 0x34, size 0x2
    unsigned short vmode; // offset 0x36, size 0x2
};
// total size: 0x0
class xDebugLink {};
// total size: 0x6C0
struct xGlobals {
    // Members
    struct xCamGroup * cam; // offset 0x0, size 0x4
    struct xCamScreen * screen; // offset 0x4, size 0x4
    struct xVec4 frustplane[12]; // offset 0x8, size 0xC0
    int profile; // offset 0xC8, size 0x4
    char profFunc[6][128]; // offset 0xCC, size 0x300
    struct xUpdateCullMgr * updateMgr; // offset 0x3CC, size 0x4
    int sceneFirst; // offset 0x3D0, size 0x4
    char sceneStart[32]; // offset 0x3D4, size 0x20
    struct RpWorld * currWorld; // offset 0x3F4, size 0x4
    struct iFogParams fog; // offset 0x3F8, size 0x1C
    struct iFogParams fogA; // offset 0x414, size 0x1C
    struct iFogParams fogB; // offset 0x430, size 0x1C
    long long fog_t0; // offset 0x450, size 0x8
    long long fog_t1; // offset 0x458, size 0x8
    int option_vibration_p1; // offset 0x460, size 0x4
    int option_vibration_p2; // offset 0x464, size 0x4
    int option_vibration_p1_menu; // offset 0x468, size 0x4
    int option_vibration_p2_menu; // offset 0x46C, size 0x4
    int option_subtitles; // offset 0x470, size 0x4
    unsigned int slowdown; // offset 0x474, size 0x4
    float update_dt; // offset 0x478, size 0x4
    unsigned int dumpCutscene; // offset 0x47C, size 0x4
    unsigned int PlaybackMode; // offset 0x480, size 0x4
    struct PlaybackBuffers PlaybackFrames[4]; // offset 0x484, size 0x30
    char PlaybackFile[128]; // offset 0x4B4, size 0x80
    unsigned int PlaybackStartFrame; // offset 0x534, size 0x4
    unsigned int PlaybackEndFrame; // offset 0x538, size 0x4
    unsigned int PlaybackResolution; // offset 0x53C, size 0x4
    int MemTrackingLvl; // offset 0x540, size 0x4
    char MemTrackLogFileName[128]; // offset 0x544, size 0x80
    signed short ForceCutscene; // offset 0x5C4, size 0x2
    int useHIPHOP; // offset 0x5C8, size 0x4
    unsigned char NoMusic; // offset 0x5CC, size 0x1
    unsigned char NoCutscenes; // offset 0x5CD, size 0x1
    unsigned char NoPadCheck; // offset 0x5CE, size 0x1
    unsigned char firstStartPressed; // offset 0x5CF, size 0x1
    unsigned char fromLauncher; // offset 0x5D0, size 0x1
    unsigned char skipAssertWithController; // offset 0x5D1, size 0x1
    unsigned char enableHelperAI; // offset 0x5D2, size 0x1
    unsigned char enableHelperAIAttack; // offset 0x5D3, size 0x1
    unsigned char enableDebugControls; // offset 0x5D4, size 0x1
    unsigned char showReleaseMemInfo; // offset 0x5D5, size 0x1
    unsigned char PlaybackFlashDemo; // offset 0x5D6, size 0x1
    unsigned char FlashWIP; // offset 0x5D7, size 0x1
    unsigned char inLoadingScreen; // offset 0x5D8, size 0x1
    unsigned char LoadingScene; // offset 0x5D9, size 0x1
    unsigned char InitializingLoadingScreen; // offset 0x5DA, size 0x1
    unsigned char ForceMono; // offset 0x5DB, size 0x1
    unsigned char UnlimitedNukes; // offset 0x5DC, size 0x1
    unsigned int minVSyncCnt; // offset 0x5E0, size 0x4
    unsigned char dontShowPadMessageDuringLoadingOrCutScene; // offset 0x5E4, size 0x1
    unsigned char autoSaveFeature; // offset 0x5E5, size 0x1
    unsigned char skipAsserts; // offset 0x5E6, size 0x1
    unsigned char beforeFirstFrame; // offset 0x5E7, size 0x1
    int asyncLoadingScreen; // offset 0x5E8, size 0x4
    int asyncLoadingFlags; // offset 0x5EC, size 0x4
    char fromLauncherUser[32]; // offset 0x5F0, size 0x20
    class zPlayerContainer players; // offset 0x610, size 0x14
    struct zScene * sceneCur; // offset 0x624, size 0x4
    struct zScene * scenePreload; // offset 0x628, size 0x4
    struct PS2DemoGlobals * PS2demo; // offset 0x62C, size 0x4
    char watermark[127]; // offset 0x630, size 0x7F
    unsigned char watermarkAlpha; // offset 0x6AF, size 0x1
    float watermarkSize; // offset 0x6B0, size 0x4
    class xDebugLink * debugLink; // offset 0x6B4, size 0x4
    unsigned char enableRealTimeUpdate; // offset 0x6B8, size 0x1
    unsigned char showMenuOnBoot; // offset 0x6B9, size 0x1
    unsigned char enableHUD; // offset 0x6BA, size 0x1
    unsigned char skipAnimViewer; // offset 0x6BB, size 0x1
};
// total size: 0x1C
struct zGlobalSettings {
    // Members
    unsigned short AnalogMin; // offset 0x0, size 0x2
    unsigned short AnalogMax; // offset 0x2, size 0x2
    unsigned int TakeDamage; // offset 0x4, size 0x4
    float DamageInvincibility; // offset 0x8, size 0x4
    float Gravity; // offset 0xC, size 0x4
    unsigned char AttractModeDuringGameplay; // offset 0x10, size 0x1
    unsigned int AccelScripts; // offset 0x14, size 0x4
    float CameraFOV; // offset 0x18, size 0x4
};
enum xSndEffect {
    xSndEffect_NONE = 0,
    xSndEffect_CAVE = 1,
    xSndEffect_MAX_TYPES = 2,
};
// total size: 0xC
struct zCheckPoint {
    // Members
    unsigned int initCamID; // offset 0x0, size 0x4
    unsigned char * jsp_active; // offset 0x4, size 0x4
    enum xSndEffect currentEffect; // offset 0x8, size 0x4
};
// total size: 0x0
struct zAssetPickupTable {};
// total size: 0x0
struct zCutsceneMgr {};
enum zGlobalDemoType {
    zDT_NONE = 0,
    zDT_E3 = 1,
    zDT_PUBLICITY = 2,
    zDT_OPM = 3,
    zDT_LAST = 4,
};
enum eBrainType {
    eBrainType_Unknown = 0,
    eBrainType_NPC_Thief = 1,
    eBrainType_NPC_Chef = 2,
    eBrainType_NPC_Alarmer = 3,
    eBrainType_NPC_Waiter = 4,
    eBrainType_CMG_StirringPlayer = 5,
    eBrainType_CMG_StirringRemy = 6,
    eBrainType_CMG_LeftArm = 7,
    eBrainType_CMG_RightArm = 8,
    eBrainType_CMG_PourNSwirl = 9,
    eBrainType_NPC_SpringBoard = 10,
    eBrainType_NPC_ContextSensitive = 11,
    eBrainType_NPC_AnimViewer = 12,
    eBrainType_NPC_SwarmOwl = 13,
    eBrainType_NPC_Simpleton = 14,
    eBrainType_NPC_InstaKill = 15,
    eBrainType_Player_Remy = 16,
    eBrainType_Player_HumanVehicle = 17,
    eBrainType_Player_Ratball = 18,
    eBrainType_Player_MG1 = 19,
    eBrainType_Player_MG2_RatOnball = 20,
    eBrainType_Player_MG3_Pufferoids = 21,
    eBrainType_Player_MG4_GrapeStomper = 22,
    eBrainType_Player_MG5_CongaLine = 23,
    eBrainType_Player_MG6_AvoidTheStuff = 24,
};
// total size: 0x0
class zEconomics {};
// total size: 0x4
class zLightweightSystemBase {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
enum ezMiniGameTypes {
    MG_GAMETYPE_UNKNOWN = 0,
    MG_GAMETYPE_TYPE1 = 1,
    MG_GAMETYPE_DEFENDTHEBASE = 2,
    MG_GAMETYPE_RATONBALL = 3,
    MG_GAMETYPE_PUFFEROIDS = 4,
    MG_GAMETYPE_GRAPESTOMPER = 5,
    MG_GAMETYPE_CONGALINE = 6,
    MG_GAMETYPE_AVOIDTHESTUFF = 7,
    MG_GAMETYPE_COUNT = 8,
};
// total size: 0x14
struct zMiniGameAsset : public xDynAsset {
    // Members
    unsigned int dispatcherID; // offset 0x10, size 0x4
};
enum eMiniGameState {
    GAMESTATE_GAME_START = 0,
    GAMESTATE_STAGE_START = 1,
    GAMESTATE_GAME_PLAY = 2,
    GAMESTATE_STAGE_END = 3,
    GAMESTATE_GAME_END = 4,
};
// total size: 0x2C
class zMiniGameBase : public xBase {
    // Static members
    static class zMiniGameBase * currentMiniGame; // size: 0x4

    // Members
protected:
    enum ezMiniGameTypes gameType; // offset 0x10, size 0x4
    struct zMiniGameAsset * asset; // offset 0x14, size 0x4
    int playerCount; // offset 0x18, size 0x4
    unsigned char gameDone; // offset 0x1C, size 0x1
    struct xBase * dispatcher; // offset 0x20, size 0x4
    enum eMiniGameState gameState; // offset 0x24, size 0x4
public:
    void * __vptr$; // offset 0x28, size 0x4
};
// total size: 0xC
class zMiniGameManager : public zLightweightSystemBase {
    // Members
    class zMiniGameBase * currentGame; // offset 0x4, size 0x4
    int userSetPlayerCount; // offset 0x8, size 0x4
};
// total size: 0x798
struct zGlobals : public xGlobals {
    // Members
    struct zGlobalSettings settings; // offset 0x6C0, size 0x1C
    struct zCheckPoint checkPoint; // offset 0x6DC, size 0xC
    unsigned int playerTag[9]; // offset 0x6E8, size 0x24
    unsigned char playerLoaded; // offset 0x70C, size 0x1
    unsigned char invertJoystick; // offset 0x70D, size 0x1
    float timeMultiplier; // offset 0x710, size 0x4
    float timeMultiplierTarget; // offset 0x714, size 0x4
    float XPMultiplier; // offset 0x718, size 0x4
    struct zAssetPickupTable * pickupTable; // offset 0x71C, size 0x4
    struct zCutsceneMgr * cmgr; // offset 0x720, size 0x4
    char startDebugMode[32]; // offset 0x724, size 0x20
    unsigned int noMovies; // offset 0x744, size 0x4
    unsigned int boundUpdateTime; // offset 0x748, size 0x4
    unsigned char draw_player_after_fx; // offset 0x74C, size 0x1
    unsigned char bAllowMasterCheats; // offset 0x74D, size 0x1
    unsigned char enableFriendlyFly; // offset 0x74E, size 0x1
    unsigned char stopCurrentConversation; // offset 0x74F, size 0x1
    enum zGlobalDemoType demoType; // offset 0x750, size 0x4
    struct zCutsceneMgr * DisabledCutsceneDoneMgr; // offset 0x754, size 0x4
    struct xVec3 cameraPlayersMidpoint; // offset 0x758, size 0xC
    struct xVec3 cameraLookAt; // offset 0x764, size 0xC
    int cameraAIFocus; // offset 0x770, size 0x4
    enum eBrainType firstPlayerBrainID; // offset 0x774, size 0x4
    class zEconomics * economics; // offset 0x778, size 0x4
    class zMiniGameManager * mgManager; // offset 0x77C, size 0x4
    unsigned char fmvJustFinished; // offset 0x780, size 0x1
    unsigned int initialRemyPowerUp[5]; // offset 0x784, size 0x14
};
struct zGlobals globals; // size: 0x798, address: 0x80B9EF78
// Range: 0x8005CDE8 -> 0x8005CEB4
static void start_tex_render(unsigned int font /* r31 */) {
    // Local variables
    struct RwCamera * cam; // r3

    // References
    // -> static struct font_data active_fonts[4];
    // -> static char __FUNCTION__[17];
    // -> static unsigned long active_fonts_size;
    // -> static float nsz;
    // -> static float rcz;
    // -> struct zGlobals globals;
    // -> void * RwEngineInstance;
}

// Range: 0x8005CEB4 -> 0x8005CF00
static void tex_flush() {
    // References
    // -> static unsigned long vert_buffer_used;
    // -> static struct rwGameCube2DVertex vert_buffer[240];
    // -> void * RwEngineInstance;
}

// Range: 0x8005CF00 -> 0x8005CF24
static void stop_tex_render() {}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80BFCB88
char __FUNCTION__$localstatic1$clip__13basic_rect<f>CFR13basic_rect<f>R13basic_rect<f>[5]; // size: 0x5, address: 0x80BFCB94
unsigned int FB_XRES; // size: 0x4, address: 0x80C00BDC
unsigned int FB_YRES; // size: 0x4, address: 0x80C00BE0
// Range: 0x8005CF24 -> 0x8005D194
static void tex_render(const struct basic_rect & src /* r0 */, const struct basic_rect & dst /* r0 */, const struct basic_rect & clip /* r30 */, struct xColor_tag & color /* r31 */) {
    // Local variables
    struct basic_rect r; // r1+0x28
    struct basic_rect rt; // r1+0x18
    struct rwGameCube2DVertex * vert; // r30

    // References
    // -> static unsigned long vert_buffer_used;
    // -> unsigned int FB_YRES;
    // -> unsigned int FB_XRES;
    // -> static struct rwGameCube2DVertex vert_buffer[240];
    // -> static char __FUNCTION__[11];
    // -> void * RwEngineInstance;
}

// Range: 0x8005D1E0 -> 0x8005D21C
static void set_vert(struct rwGameCube2DVertex & vert /* r0 */, float x /* f0 */, float y /* f0 */, float u /* f0 */, float v /* f0 */, struct xColor_tag & c /* r0 */) {
    // References
    // -> static float nsz;
}

static char __FUNCTION__[20]; // size: 0x14, address: 0x80BFCB9C
// Range: 0x8005D21C -> 0x8005D668
static void tex_render_shadowed(const struct basic_rect & src /* r0 */, const struct basic_rect & dst /* r0 */, const struct basic_rect & clip /* r5 */, struct xColor_tag & color /* r29 */, struct xColor_tag & shadowcolor /* r30 */, float shadowOffsetX /* f29 */, float shadowOffsetY /* f30 */, float fshear /* f31 */) {
    // Local variables
    struct basic_rect r; // r1+0x28
    struct basic_rect rt; // r1+0x18
    struct rwGameCube2DVertex * vert; // r31

    // References
    // -> static unsigned long vert_buffer_used;
    // -> unsigned int FB_YRES;
    // -> unsigned int FB_XRES;
    // -> static struct rwGameCube2DVertex vert_buffer[240];
    // -> static char __FUNCTION__[20];
    // -> void * RwEngineInstance;
}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80BFCBB0
// total size: 0xC
struct model_cache_entry {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned int order; // offset 0x4, size 0x4
    struct xModelInstance * model; // offset 0x8, size 0x4
};
static struct model_cache_entry model_cache[8]; // size: 0x60, address: 0x80A78890
static unsigned char model_cache_inited; // size: 0x1, address: 0x80C072E0
static char __FUNCTION__[17]; // size: 0x11, address: 0x80BFCBBC
unsigned int gActiveHeap; // size: 0x4, address: 0x80C07448
// total size: 0x860
struct model_pool {
    // Members
    struct RwMatrixTag mat[8]; // offset 0x0, size 0x200
    struct xModelInstance model[8]; // offset 0x200, size 0x660
};
// Range: 0x8005D668 -> 0x8005D890
static void init_model_cache() {
    // Local variables
    void * data; // r31
    struct model_pool & pool; // r0
    struct xModelInstance & model; // r23
    struct model_cache_entry & e; // r0

    // References
    // -> static struct model_cache_entry model_cache[8];
    // -> static char __FUNCTION__[17];
    // -> unsigned int gActiveHeap;
    // -> static unsigned char model_cache_inited;
}

static unsigned int next_order; // size: 0x4, address: 0x80C072E4
static signed char init; // size: 0x1, address: 0x80C072E8
static char __FUNCTION__[11]; // size: 0xB, address: 0x80BFCBD0
// Range: 0x8005D890 -> 0x8005DAF0
static struct xModelInstance * load_model(unsigned int id /* r31 */) {
    // Local variables
    unsigned long oldest; // r29
    unsigned long i; // r7
    struct RpAtomic * mf; // r0
    struct model_cache_entry & e; // r3
    struct xModelInstance & model; // r29

    // References
    // -> static unsigned int next_order;
    // -> static struct model_cache_entry model_cache[8];
    // -> static signed char init;
    // -> static char __FUNCTION__[11];
    // -> static unsigned char model_cache_inited;
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
// total size: 0x40
struct xMat4x3 : public xMat3x3 {
    // Members
    struct xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
static char __FUNCTION__[5]; // size: 0x5, address: 0x80BFCBDC
// total size: 0x30
class xfont {
    // Functions
    struct basic_rect bounds(unsigned int c) const;

    struct basic_rect bounds(char c) const;

    struct basic_rect bounds(const char * text) const;

    struct basic_rect bounds(const char * text, unsigned long text_size) const;

    struct basic_rect bounds(const char * text, unsigned long text_size, float max_width, unsigned long & size) const;

    void start_render() const;

    void irender(const char * text, float x, float y) const;

    void irender(const char * text, unsigned long text_size, float x, float y) const;

    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    float width; // offset 0x4, size 0x4
    float height; // offset 0x8, size 0x4
    float space; // offset 0xC, size 0x4
    struct xColor_tag color; // offset 0x10, size 0x4
    struct xColor_tag shadowColor; // offset 0x14, size 0x4
    float shadowOffsetX; // offset 0x18, size 0x4
    float shadowOffsetY; // offset 0x1C, size 0x4
    struct basic_rect clip; // offset 0x20, size 0x10
};
// Range: 0x8005DAF0 -> 0x8005DD94
void xfont::init() {
    // Local variables
    unsigned long i; // r30
    struct RwTexture * tex; // r0
    struct font_data & fd; // r3
    char filename[20]; // r1+0x8

    // References
    // -> static unsigned long codepage_textures_size;
    // -> unsigned int gActiveHeap;
    // -> static struct basic_rect * codepage_bounds;
    // -> static struct basic_rect * codepage_tex_bounds;
    // -> static struct RwTexture * codepage_textures[16];
    // -> static char __FUNCTION__[5];
    // -> static unsigned long active_fonts_size;
    // -> static struct font_data active_fonts[4];
    // -> static char * default_font_texture[2];
    // -> static struct font_asset default_font_assets[4];
}

enum xRegion {
    eRegionUnknown = -1,
    eRegionUS = 0,
    eRegionBE = 1,
    eRegionCH = 2,
    eRegionCZ = 3,
    eRegionDE = 4,
    eRegionDK = 5,
    eRegionES = 6,
    eRegionFI = 7,
    eRegionFR = 8,
    eRegionIT = 9,
    eRegionJP = 10,
    eRegionKR = 11,
    eRegionNL = 12,
    eRegionNO = 13,
    eRegionPL = 14,
    eRegionPT = 15,
    eRegionRU = 16,
    eRegionSE = 17,
    eRegionSK = 18,
    eRegionTW = 19,
    eRegionUK = 20,
    eRegionCount = 21,
    eRegionMaxCount = 32,
};
// Range: 0x8005DD94 -> 0x8005DDC0
static unsigned char ProportionalLFont() {
    // Local variables
    enum xRegion region; // r0
}

enum RwTextureFilterMode {
    rwFILTERNAFILTERMODE = 0,
    rwFILTERNEAREST = 1,
    rwFILTERLINEAR = 2,
    rwFILTERMIPNEAREST = 3,
    rwFILTERMIPLINEAR = 4,
    rwFILTERLINEARMIPNEAREST = 5,
    rwFILTERLINEARMIPLINEAR = 6,
    rwTEXTUREFILTERMODEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x24
struct /* @class$3052xFont_cpp */ {
    // Members
    int fogenable; // offset 0x0, size 0x4
    int vertexalphaenable; // offset 0x4, size 0x4
    int zwriteenable; // offset 0x8, size 0x4
    int ztestenable; // offset 0xC, size 0x4
    int cullmode; // offset 0x10, size 0x4
    unsigned int srcblend; // offset 0x14, size 0x4
    unsigned int destblend; // offset 0x18, size 0x4
    unsigned int shademode; // offset 0x1C, size 0x4
    enum RwTextureFilterMode filter; // offset 0x20, size 0x4
};
// Range: 0x8005DDC0 -> 0x8005DDE8
void xfont::set_render_state(struct RwRaster * raster /* r4 */) {}

// Range: 0x8005DDE8 -> 0x8005DE10
void xfont::restore_render_state() {}

// Range: 0x8005DE10 -> 0x8005DF2C
// this: r28
struct basic_rect xfont::bounds(unsigned int c /* r29 */) const {
    // Local variables
    const struct font_data & fd; // r30
    struct basic_rect r; // r1+0x8

    // References
    // -> static struct basic_rect * codepage_bounds;
    // -> static struct font_data active_fonts[4];
}

static char __FUNCTION__[7]; // size: 0x7, address: 0x80BFCBE4
struct basic_rect m_Null; // size: 0x10, address: 0x80C0AD80
// Range: 0x8005DF2C -> 0x8005E084
// this: r31
struct basic_rect xfont::bounds(char c /* r29 */) const {
    // Local variables
    const struct font_data & fd; // r4
    unsigned int i; // r0
    struct basic_rect r; // r1+0x8

    // References
    // -> struct basic_rect m_Null;
    // -> static struct font_data active_fonts[4];
    // -> static char __FUNCTION__[7];
    // -> static unsigned long active_fonts_size;
}

// Range: 0x8005E084 -> 0x8005E0BC
// this: r0
struct basic_rect xfont::bounds(const char * text /* r0 */) const {
    // Local variables
    unsigned long size; // r1+0x8
}

// Range: 0x8005E0BC -> 0x8005E0F0
// this: r0
struct basic_rect xfont::bounds(const char * text /* r0 */, unsigned long text_size /* r0 */) const {
    // Local variables
    unsigned long size; // r1+0x8
}

static char __FUNCTION__[7]; // size: 0x7, address: 0x80BFCBEC
// Range: 0x8005E0F0 -> 0x8005E330
// this: r27
struct basic_rect xfont::bounds(const char * text /* r28 */, unsigned long text_size /* r29 */, float max_width /* f31 */, unsigned long & size /* r30 */) const {
    // Local variables
    const struct font_data & fd; // r31
    struct basic_rect r; // r1+0xC
    const char * s; // r1+0x8
    unsigned int c; // r0
    float dx; // f2
    unsigned int charIndex; // r0
    const struct font_data & fd; // r24

    // References
    // -> static struct basic_rect * codepage_bounds;
    // -> static struct font_data active_fonts[4];
    // -> static char __FUNCTION__[7];
    // -> static unsigned long active_fonts_size;
}

// Range: 0x8005E330 -> 0x8005E370
static unsigned int nextCharacter(const char * & stream /* r0 */) {
    // Local variables
    unsigned char ch1; // r0
    unsigned char ch2; // r0
}

static float cpu_times[1]; // size: 0x4, address: 0x80BFCBF4
static long long start_time; // size: 0x8, address: 0x80C072F0
static float avg_cpu_time; // size: 0x4, address: 0x80C072F8
// Range: 0x8005E370 -> 0x8005E3B4
// this: r31
void xfont::start_render() const {
    // References
    // -> static float cpu_times[1];
    // -> static long long start_time;
}

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
// Range: 0x8005E3B4 -> 0x8005E3FC
void xfont::stop_render() {
    // Local variables
    long long stop_time; // r5

    // References
    // -> static long long start_time;
    // -> static float cpu_times[1];
}

// Range: 0x8005E3FC -> 0x8005E5D4
static void char_render(unsigned char c /* r26 */, unsigned int font_index /* r25 */, const struct basic_rect & bounds /* r27 */, const struct basic_rect & clip /* r28 */, struct xColor_tag & color /* r29 */, struct xColor_tag & shadowColor /* r30 */, float shadowOffsetX /* f30 */, float shadowOffsetY /* f31 */) {
    // Local variables
    const struct font_data & fd; // r31
    unsigned int i; // r25
    struct basic_rect dest; // r1+0x10
    float fShear; // f3

    // References
    // -> unsigned int FB_YRES;
    // -> static struct font_data active_fonts[4];
    // -> static char __FUNCTION__[12];
    // -> static unsigned long active_fonts_size;
}

// Range: 0x8005E5D4 -> 0x8005E7A4
static void mchar_render(unsigned int c /* r25 */, unsigned int font_index /* r27 */, struct basic_rect & bounds /* r28 */, const struct basic_rect & clip /* r29 */, struct xColor_tag & color /* r30 */, struct xColor_tag & shadowColor /* r31 */, float shadowOffsetX /* f30 */, float shadowOffsetY /* f31 */) {
    // Local variables
    unsigned int offset; // r26
    struct basic_rect src; // r1+0x20
    struct basic_rect dest; // r1+0x10
    const struct font_data & fd; // r5

    // References
    // -> static struct font_data active_fonts[4];
    // -> static struct basic_rect * codepage_bounds;
    // -> static struct basic_rect * codepage_tex_bounds;
}

// Range: 0x8005E7A4 -> 0x8005E800
static struct RwRaster * set_tex_raster(struct RwRaster * raster /* r31 */) {
    // Local variables
    struct RwRaster * oldraster; // r1+0x8
}

// Range: 0x8005E800 -> 0x8005E824
// this: r0
void xfont::irender(const char * text /* r0 */, float x /* f0 */, float y /* f0 */) const {}

static char __FUNCTION__[8]; // size: 0x8, address: 0x80BFCBF8
// Range: 0x8005E824 -> 0x8005EC54
// this: r24
void xfont::irender(const char * text /* r25 */, unsigned long text_size /* r26 */, float x /* f31 */, float y /* f30 */) const {
    // Local variables
    const struct font_data & fd; // r30
    struct basic_rect bounds; // r1+0x40
    unsigned char pageCompleted[16]; // r1+0x30
    unsigned long cpItr; // r29
    int whichCodePage; // r28
    const char * s; // r1+0x1C
    unsigned int c; // r0
    unsigned int codePage; // r27
    unsigned int charIndex; // r0
    const char * s; // r1+0x18
    unsigned int c; // r0
    unsigned int charIndex; // r0

    // References
    // -> static struct basic_rect * codepage_bounds;
    // -> static unsigned long codepage_textures_size;
    // -> static struct RwTexture * codepage_textures[16];
    // -> static char __FUNCTION__[8];
    // -> static struct font_data active_fonts[4];
    // -> static unsigned long active_fonts_size;
}

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
// total size: 0x8
struct substr {
    // Members
    const char * text; // offset 0x0, size 0x4
    unsigned long size; // offset 0x4, size 0x4
};
static struct substr text_delims; // size: 0x8, address: 0x80C0A828
static char __FUNCTION__[16]; // size: 0x10, address: 0x80BFCC00
// Range: 0x8005EC54 -> 0x8005EE3C
static unsigned long parse_split_tag(struct split_tag & ti /* r31 */) {
    // Local variables
    struct substr s; // r1+0x8
    char c; // r4

    // References
    // -> static struct substr text_delims;
    // -> static char __FUNCTION__[16];
}

// total size: 0x20
struct split_tag {
    // Members
    struct substr tag; // offset 0x0, size 0x8
    struct substr name; // offset 0x8, size 0x8
    struct substr action; // offset 0x10, size 0x8
    struct substr value; // offset 0x18, size 0x8
};
// Range: 0x8005EE3C -> 0x8005EFE4
static char * parse_next_tag_jot(struct jot & a /* r28 */, const class xtextbox & tb /* r29 */, const class xtextbox & ctb /* r30 */, const char * text /* r31 */, unsigned long text_size /* r0 */) {
    // Local variables
    struct split_tag ti; // r1+0x18
    unsigned long size; // r0
}

// total size: 0x74
class xtextbox {
    // Functions
    void set_text(const char * text);

    void set_text(const char * text, unsigned long text_size);

    void set_text(const char * * texts, unsigned long size);

    void set_text(const char * * texts, const unsigned long * text_sizes, unsigned long size);

    class layout & temp_layout(unsigned char cache) const;

    void render(class layout & l, int begin_jot, int end_jot) const;

    // Static members
    static unsigned char japanese_word_breaking; // size: 0x1
    static struct callback text_cb; // size: 0xC

    // Members
public:
    class xfont font; // offset 0x0, size 0x30
    struct basic_rect bounds; // offset 0x30, size 0x10
    unsigned int flags; // offset 0x40, size 0x4
    float line_space; // offset 0x44, size 0x4
    float tab_stop; // offset 0x48, size 0x4
    float left_indent; // offset 0x4C, size 0x4
    float right_indent; // offset 0x50, size 0x4
    const struct callback * cb; // offset 0x54, size 0x4
    void * context; // offset 0x58, size 0x4
private:
    const char * * texts; // offset 0x5C, size 0x4
    const unsigned long * text_sizes; // offset 0x60, size 0x4
    unsigned long texts_size; // offset 0x64, size 0x4
    struct substr text; // offset 0x68, size 0x8
    unsigned int text_hash; // offset 0x70, size 0x4
};
// total size: 0x14
struct tag_type {
    // Members
    struct substr name; // offset 0x0, size 0x8
    void (* parse_tag)(struct jot &, class xtextbox &, class xtextbox &, struct split_tag &); // offset 0x8, size 0x4
    void (* reset_tag)(struct jot &, class xtextbox &, class xtextbox &, struct split_tag &); // offset 0xC, size 0x4
    void * context; // offset 0x10, size 0x4
};
// total size: 0xC
struct callback {
    // Members
    void (* render)(struct jot &, class xtextbox &, float, float); // offset 0x0, size 0x4
    void (* layout_update)(struct jot &, class xtextbox &, class xtextbox &); // offset 0x4, size 0x4
    void (* render_update)(struct jot &, class xtextbox &, class xtextbox &); // offset 0x8, size 0x4
};
struct callback text_cb; // size: 0xC, address: 0x80BFCC54
// Range: 0x8005EFE4 -> 0x8005F1EC
static char * parse_next_text_jot(struct jot & a /* r29 */, const class xtextbox & tb /* r30 */, const char * text /* r26 */, unsigned long text_size /* r27 */) {
    // Local variables
    unsigned int c; // r31
    unsigned char hasSpaceChar; // r28

    // References
    // -> struct callback text_cb;
}

unsigned char japanese_word_breaking; // size: 0x1, address: 0x80C07308
// Range: 0x8005F1EC -> 0x8005F214
static unsigned int getCharacter(const char * stream /* r1+0x8 */) {}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80BFCC10
// Range: 0x8005F214 -> 0x8005F358
static char * parse_next_jot(struct jot & a /* r30 */, const class xtextbox & tb /* r31 */, const class xtextbox & ctb /* r27 */, const char * text /* r28 */, unsigned long text_size /* r29 */) {
    // Local variables
    const char * next; // r3

    // References
    // -> static char __FUNCTION__[15];
}

enum /* @enum$3520xFont_cpp */ {
    SCALE_FONT = 0,
    SCALE_SCREEN = 1,
    SCALE_SIZE = 2,
    SCALE_FONT_WIDTH = 3,
    SCALE_FONT_HEIGHT = 4,
    SCALE_SCREEN_WIDTH = 5,
    SCALE_SCREEN_HEIGHT = 6,
};
// total size: 0x34
struct tex_args {
    // Members
    struct RwRaster * raster; // offset 0x0, size 0x4
    float rot; // offset 0x4, size 0x4
    struct basic_rect src; // offset 0x8, size 0x10
    struct basic_rect dst; // offset 0x18, size 0x10
    struct xVec2 off; // offset 0x28, size 0x8
    enum /* @enum$3520xFont_cpp */ {
        SCALE_FONT = 0,
        SCALE_SCREEN = 1,
        SCALE_SIZE = 2,
        SCALE_FONT_WIDTH = 3,
        SCALE_FONT_HEIGHT = 4,
        SCALE_SCREEN_WIDTH = 5,
        SCALE_SCREEN_HEIGHT = 6,
    } scale; // offset 0x30, size 0x4
};
static struct tex_args def_tex_args; // size: 0x34, address: 0x80A788F0
struct basic_rect m_Unit; // size: 0x10, address: 0x80C0AD90
// Range: 0x8005F358 -> 0x8005F3BC
static void reset_tex_args(struct tex_args & ta /* r31 */) {
    // References
    // -> struct basic_rect m_Unit;
}

static char __FUNCTION__[14]; // size: 0xE, address: 0x80BFCC20
// total size: 0x8
struct tag_entry_list {
    // Members
    const struct tag_entry * entries; // offset 0x0, size 0x4
    unsigned long size; // offset 0x4, size 0x4
};
// Range: 0x8005F3BC -> 0x8005F8AC
static void load_tex_args(struct tex_args & ta /* r30 */, const struct substr & s /* r4 */) {
    // Local variables
    struct tag_entry_list el; // r1+0x78
    const struct tag_entry * e; // r31
    const struct substr & name; // r31
    unsigned int id; // r3
    struct RwTexture * texture; // r0

    // References
    // -> static char __FUNCTION__[14];
}

enum /* @enum$3649xFont_cpp */ {
    SCALE_FONT = 0,
    SCALE_SCREEN = 1,
    SCALE_SIZE = 2,
};
// total size: 0x2C
struct model_args {
    // Members
    struct xModelInstance * model; // offset 0x0, size 0x4
    struct xVec3 rot; // offset 0x4, size 0xC
    struct basic_rect dst; // offset 0x10, size 0x10
    struct xVec2 off; // offset 0x20, size 0x8
    enum /* @enum$3649xFont_cpp */ {
        SCALE_FONT = 0,
        SCALE_SCREEN = 1,
        SCALE_SIZE = 2,
    } scale; // offset 0x28, size 0x4
};
static struct model_args def_model_args; // size: 0x2C, address: 0x80A78924
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
struct xVec3 m_Null; // size: 0xC, address: 0x80C0B540
// Range: 0x8005F8AC -> 0x8005F908
static void reset_model_args(struct model_args & ma /* r31 */) {
    // References
    // -> struct basic_rect m_Unit;
    // -> struct xVec3 m_Null;
}

static char __FUNCTION__[16]; // size: 0x10, address: 0x80BFCC30
// Range: 0x8005F908 -> 0x8005FBAC
static void load_model_args(struct model_args & ma /* r31 */, const struct substr & s /* r4 */) {
    // Local variables
    struct tag_entry_list el; // r1+0x38
    const struct tag_entry * e; // r30
    const struct substr & name; // r4
    unsigned int id; // r0

    // References
    // -> static char __FUNCTION__[16];
}

// Range: 0x8005FBAC -> 0x8005FBE0
static void start_layout() {
    // References
    // -> static struct model_args def_model_args;
    // -> static struct tex_args def_tex_args;
}

// Range: 0x8005FBE0 -> 0x8005FBE4
static void stop_layout() {}

// Range: 0x8005FBE4 -> 0x8005FC04
static void start_render(const class xtextbox & tb /* r0 */) {}

// Range: 0x8005FC04 -> 0x8005FC24
static void stop_render(const class xtextbox & tb /* r0 */) {}

// total size: 0x120
struct tl_cache_entry {
    // Members
    unsigned char hasData; // offset 0x0, size 0x1
    long long last_used; // offset 0x8, size 0x8
    class layout tl; // offset 0x10, size 0x10C
};
static struct tl_cache_entry tl_cache[16]; // size: 0x1200, address: 0x80A78950
static long long decay_time; // size: 0x8, address: 0x80C07300
static char __FUNCTION__[20]; // size: 0x14, address: 0x80BFCC40
// Range: 0x8005FC24 -> 0x8005FE0C
static unsigned int clear_oldest_layout(unsigned char withData /* r22 */) {
    // Local variables
    unsigned int index; // r26
    long long cur_time; // r0
    long long min_time; // r25
    unsigned long i; // r23

    // References
    // -> static struct tl_cache_entry tl_cache[16];
    // -> static long long decay_time;
    // -> static class layout * gCurrentLayout;
    // -> static char __FUNCTION__[20];
}

// total size: 0x20
struct jot_line {
    // Members
    struct basic_rect bounds; // offset 0x0, size 0x10
    float baseline; // offset 0x10, size 0x4
    unsigned long first; // offset 0x14, size 0x4
    unsigned long last; // offset 0x18, size 0x4
    unsigned char page_break; // offset 0x1C, size 0x1
};
// total size: 0x88
struct jot_line_block {
    // Members
    struct jot_line jot_lines[4]; // offset 0x0, size 0x80
    struct jot_line_block * next_block; // offset 0x80, size 0x4
    unsigned char used; // offset 0x84, size 0x1
};
// total size: 0x4C
struct context_buffer_block {
    // Members
    unsigned char context_buffer[64]; // offset 0x0, size 0x40
    unsigned long size; // offset 0x40, size 0x4
    struct context_buffer_block * next_block; // offset 0x44, size 0x4
    unsigned char used; // offset 0x48, size 0x1
};
// total size: 0x10C
class layout {
    // Functions
    struct jot & get_jot(unsigned long index) const;

    struct jot & get_new_jot();

    struct jot_line & get_jot_line(unsigned long index) const;

    struct jot_line & get_new_jot_line();

    void clear_jots();

    void clear_jot_lines();

    void clear_context_buffers();

    void free_unused_blocks();

    void * add_context_data(void * data, unsigned long size);

    void get_max_bounds(float & maxWidth, float & maxHeight) const;

    void refresh(const class xtextbox & tb, unsigned char force);

    void clear();

    void refresh_end(const class xtextbox & tb);

    void trim_line(struct jot_line & line);

    void erase_jots(unsigned long first, unsigned long last);

    void merge_line(struct jot_line & line);

    void bound_line(struct jot_line & line);

    unsigned char fit_line(unsigned char isLastLine);

    void next_line();

    void calc(const class xtextbox & ctb, unsigned long start_text);

    void render(const class xtextbox & ctb, int begin_jot, int end_jot);

    float yextent(float max, int & size, int begin_jot, int end_jot) const;

    unsigned char changed(const class xtextbox & ctb);

    // Members
    class xtextbox tb; // offset 0x0, size 0x74
    struct jot_block * first_jot_block; // offset 0x74, size 0x4
    unsigned long _jots_size; // offset 0x78, size 0x4
    struct jot_line_block * first_line_block; // offset 0x7C, size 0x4
    unsigned long _lines_size; // offset 0x80, size 0x4
    struct context_buffer_block * first_context_buffer; // offset 0x84, size 0x4
    unsigned short dynamics[64]; // offset 0x88, size 0x80
    unsigned long dynamics_size; // offset 0x108, size 0x4
};
// Range: 0x8005FE0C -> 0x8005FE3C
void xtextbox::text_render(const struct jot & j /* r5 */, const class xtextbox & tb /* r3 */, float x /* f0 */, float y /* f0 */) {}

// Range: 0x8005FE3C -> 0x8005FE60
// this: r0
void xtextbox::set_text(const char * text /* r0 */) {}

// Range: 0x8005FE60 -> 0x8005FEB4
// this: r0
void xtextbox::set_text(const char * text /* r0 */, unsigned long text_size /* r0 */) {}

// Range: 0x8005FEB4 -> 0x8005FEDC
// this: r0
void xtextbox::set_text(const char * * texts /* r0 */, unsigned long size /* r6 */) {}

static char __FUNCTION__[9]; // size: 0x9, address: 0x80BFCC60
// Range: 0x8005FEDC -> 0x80060048
// this: r30
void xtextbox::set_text(const char * * texts /* r28 */, const unsigned long * text_sizes /* r27 */, unsigned long size /* r31 */) {
    // Local variables
    unsigned long i; // r28
    unsigned long i; // r27

    // References
    // -> static char __FUNCTION__[9];
}

unsigned char disable_text_stats; // size: 0x1, address: 0x80C07309
static unsigned int hits; // size: 0x4, address: 0x80C0730C
static unsigned int misses; // size: 0x4, address: 0x80C07310
static char percent[16]; // size: 0x10, address: 0x80BFCC6C
// Range: 0x80060048 -> 0x80060058
static void on_change_reset() {
    // References
    // -> static unsigned int misses;
    // -> static unsigned int hits;
}

// Range: 0x80060058 -> 0x80060100
static void on_update_percent() {
    // Local variables
    float total; // f2

    // References
    // -> static char percent[16];
    // -> static unsigned int misses;
    // -> static unsigned int hits;
}

static unsigned char registered; // size: 0x1, address: 0x80C07314
static signed char init; // size: 0x1, address: 0x80C07315
// total size: 0xC
struct /* @class$1056xFont_cpp */ {
    // Members
    int value_def; // offset 0x0, size 0x4
    int value_min; // offset 0x4, size 0x4
    int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$1057xFont_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int value_min; // offset 0x4, size 0x4
    unsigned int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$1058xFont_cpp */ {
    // Members
    float value_def; // offset 0x0, size 0x4
    float value_min; // offset 0x4, size 0x4
    float value_max; // offset 0x8, size 0x4
};
// total size: 0x1
struct /* @class$1059xFont_cpp */ {
    // Members
    unsigned char value_def; // offset 0x0, size 0x1
};
// total size: 0x10
struct /* @class$1060xFont_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int labels_size; // offset 0x4, size 0x4
    const char * * labels; // offset 0x8, size 0x4
    void * values; // offset 0xC, size 0x4
};
// total size: 0x8
struct /* @class$1061xFont_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int mask; // offset 0x4, size 0x4
};
// total size: 0x10
struct /* @class$1062xFont_cpp */ {
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
        struct /* @class$1056xFont_cpp */ {
            // Members
            int value_def; // offset 0x0, size 0x4
            int value_min; // offset 0x4, size 0x4
            int value_max; // offset 0x8, size 0x4
        } int_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$1057xFont_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int value_min; // offset 0x4, size 0x4
            unsigned int value_max; // offset 0x8, size 0x4
        } uint_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$1058xFont_cpp */ {
            // Members
            float value_def; // offset 0x0, size 0x4
            float value_min; // offset 0x4, size 0x4
            float value_max; // offset 0x8, size 0x4
        } float_context; // offset 0x18, size 0xC
        // total size: 0x1
        struct /* @class$1059xFont_cpp */ {
            // Members
            unsigned char value_def; // offset 0x0, size 0x1
        } bool_context; // offset 0x18, size 0x1
        // total size: 0x10
        struct /* @class$1060xFont_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int labels_size; // offset 0x4, size 0x4
            const char * * labels; // offset 0x8, size 0x4
            void * values; // offset 0xC, size 0x4
        } select_context; // offset 0x18, size 0x10
        // total size: 0x8
        struct /* @class$1061xFont_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int mask; // offset 0x4, size 0x4
        } flag_context; // offset 0x18, size 0x8
        // total size: 0x10
        struct /* @class$1062xFont_cpp */ {
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
static struct tweak_callback cb_reset; // size: 0x28, address: 0x803ADA08
static struct tweak_callback cb_percent; // size: 0x28, address: 0x803ADA30
// Range: 0x80060100 -> 0x80060224
static void log_cache(unsigned char hit /* r31 */) {
    // References
    // -> static unsigned int misses;
    // -> static unsigned int hits;
    // -> static struct tweak_callback cb_percent;
    // -> static char percent[16];
    // -> static struct tweak_callback cb_reset;
    // -> static unsigned char registered;
    // -> static signed char init;
    // -> unsigned char disable_text_stats;
}

static char __FUNCTION__[8]; // size: 0x8, address: 0x80BFCC7C
// Range: 0x80060224 -> 0x80060374
// this: r30
struct jot & layout::get_jot(unsigned long index /* r31 */) const {
    // Local variables
    struct jot_block * block; // r3

    // References
    // -> static char __FUNCTION__[8];
}

// Range: 0x80060374 -> 0x800603F8
// this: r30
struct jot & layout::get_new_jot() {
    // Local variables
    struct jot_block * block; // r31
    unsigned long index; // r30
}

// Range: 0x800603F8 -> 0x8006050C
static struct jot_block * allocate_jot_block() {
    // Local variables
    int i; // r4
    int i; // r3

    // References
    // -> static char __FUNCTION__[19];
    // -> static struct jot_block jot_blocks[64];
}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80BFCC84
// Range: 0x8006050C -> 0x80060614
// this: r30
struct jot_line & layout::get_jot_line(unsigned long index /* r31 */) const {
    // Local variables
    struct jot_line_block * block; // r3

    // References
    // -> static char __FUNCTION__[13];
}

// Range: 0x80060614 -> 0x80060698
// this: r30
struct jot_line & layout::get_new_jot_line() {
    // Local variables
    struct jot_line_block * block; // r31
    unsigned long index; // r30
}

// Range: 0x80060698 -> 0x800607AC
static struct jot_line_block * allocate_jot_line_block() {
    // Local variables
    int i; // r4
    int i; // r3

    // References
    // -> static char __FUNCTION__[24];
    // -> static struct jot_line_block jot_line_blocks[64];
}

// Range: 0x800607AC -> 0x800607D4
// this: r0
void layout::clear_jots() {}

// Range: 0x800607D4 -> 0x800607FC
// this: r0
void layout::clear_jot_lines() {}

// Range: 0x800607FC -> 0x80060824
// this: r0
void layout::clear_context_buffers() {}

// Range: 0x80060824 -> 0x80060920
// this: r0
void layout::free_unused_blocks() {
    // Local variables
    unsigned long i; // r4
    struct jot_block * j; // r5
    struct jot_line_block * jl; // r5
}

// Range: 0x80060920 -> 0x800609D4
// this: r30
void * layout::add_context_data(void * data /* r28 */, unsigned long size /* r29 */) {
    // Local variables
    struct context_buffer_block * block; // r31
    void * destination; // r30
}

// Range: 0x800609D4 -> 0x80060AF4
static struct context_buffer_block * allocate_context_buffer_block() {
    // Local variables
    int i; // r4
    int i; // r3

    // References
    // -> static char __FUNCTION__[30];
    // -> static struct context_buffer_block context_buffer_blocks[64];
}

// Range: 0x80060AF4 -> 0x80060B7C
// this: r27
void layout::get_max_bounds(float & maxWidth /* r28 */, float & maxHeight /* r29 */) const {
    // Local variables
    unsigned long i; // r30
    const struct jot_line & line; // r0
}

// Range: 0x80060B7C -> 0x80060C7C
// this: r30
class layout & xtextbox::temp_layout(unsigned char cache /* r31 */) const {
    // Local variables
    long long cur_time; // r0
    unsigned char refresh; // r26
    unsigned long index; // r25
    struct tl_cache_entry & e; // r25

    // References
    // -> static struct tl_cache_entry tl_cache[16];
}

// Range: 0x80060C7C -> 0x80060CA8
// this: r0
void xtextbox::render(class layout & l /* r4 */, int begin_jot /* r0 */, int end_jot /* r0 */) const {}

// Range: 0x80060CA8 -> 0x80060CD4
float xtextbox::yextent(float max /* f0 */, int & size /* r0 */, const class layout & l /* r5 */, int begin_jot /* r6 */, int end_jot /* r7 */) {}

static struct substr arg_buffer[32]; // size: 0x100, address: 0x80A79B50
static struct tag_entry entry_buffer[16]; // size: 0x140, address: 0x80A79C50
static char __FUNCTION__[9]; // size: 0x9, address: 0x80BFCC94
// Range: 0x80060CD4 -> 0x80061004
struct tag_entry_list xtextbox::read_tag(const struct substr & s /* r25 */) {
    // Local variables
    unsigned long args_used; // r27
    unsigned long entries_used; // r26
    struct substr it; // r1+0x20
    const char * d; // r0
    struct substr delims; // r1+0x18
    struct substr sub_delims; // r1+0x10
    struct tag_entry & entry; // r25
    const char * d; // r0
    const char * d; // r0
    struct tag_entry_list ret; // r1+0x8

    // References
    // -> static char __FUNCTION__[9];
    // -> static struct substr arg_buffer[32];
    // -> static struct tag_entry entry_buffer[16];
}

// Range: 0x80061004 -> 0x80061074
struct tag_entry * xtextbox::find_entry(const struct tag_entry_list & el /* r0 */, const struct substr & name /* r26 */) {
    // Local variables
    unsigned long i; // r28
    const struct tag_entry & e; // r27
}

// total size: 0x14
struct tag_entry {
    // Members
    struct substr name; // offset 0x0, size 0x8
    char op; // offset 0x8, size 0x1
    struct substr * args; // offset 0xC, size 0x4
    unsigned long args_size; // offset 0x10, size 0x4
};
// Range: 0x80061074 -> 0x800610F4
unsigned long xtextbox::read_list(const struct tag_entry & e /* r0 */, float * v /* r4 */, unsigned long vsize /* r5 */) {
    // Local variables
    unsigned long i; // r28
}

// Range: 0x800610F4 -> 0x80061174
unsigned long xtextbox::read_list(const struct tag_entry & e /* r0 */, int * v /* r4 */, unsigned long vsize /* r5 */) {
    // Local variables
    unsigned long i; // r28
}

// Range: 0x80061174 -> 0x800611C4
void xtextbox::clear_layout_cache() {
    // Local variables
    unsigned long index; // r30

    // References
    // -> static struct tl_cache_entry tl_cache[16];
}

// Range: 0x800611C4 -> 0x80061228
// this: r30
void layout::refresh(const class xtextbox & tb /* r31 */, unsigned char force /* r0 */) {}

// Range: 0x80061228 -> 0x80061288
// this: r31
void layout::clear() {}

struct xColor_tag g_BLACK; // size: 0x4, address: 0x80C0A278
struct xColor_tag g_WHITE; // size: 0x4, address: 0x80C0A27C
// Range: 0x80061288 -> 0x800612E8
// this: r29
void layout::refresh_end(const class xtextbox & tb /* r30 */) {}

// Range: 0x800612E8 -> 0x800613E0
// this: r29
void layout::trim_line(struct jot_line & line /* r30 */) {
    // Local variables
    unsigned long i; // r31
    struct jot & a; // r0
    unsigned long i; // r31
    struct jot & a; // r0
}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80BFCCA0
// Range: 0x800613E0 -> 0x800614D8
// this: r28
void layout::erase_jots(unsigned long first /* r30 */, unsigned long last /* r29 */) {
    // Local variables
    unsigned long offset; // r31
    unsigned long i; // r30
    struct jot & a; // r29

    // References
    // -> static char __FUNCTION__[11];
}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80BFCCAC
// Range: 0x80061554 -> 0x80061720
// this: r26
void layout::merge_line(struct jot_line & line /* r27 */) {
    // Local variables
    unsigned long d; // r31
    unsigned long i; // r30
    struct jot & a1; // r29
    struct jot & a2; // r28
    struct jot & jot_d; // r0

    // References
    // -> static char __FUNCTION__[11];
}

// total size: 0x2
struct /* @class$960xFont_cpp */ {
    // Members
    unsigned char invisible : 1; // offset 0x0, size 0x1
    unsigned char ethereal : 1; // offset 0x0, size 0x1
    unsigned char merge : 1; // offset 0x0, size 0x1
    unsigned char word_break : 1; // offset 0x0, size 0x1
    unsigned char word_end : 1; // offset 0x0, size 0x1
    unsigned char line_break : 1; // offset 0x0, size 0x1
    unsigned char stop : 1; // offset 0x0, size 0x1
    unsigned char tab : 1; // offset 0x0, size 0x1
    unsigned char insert : 1; // offset 0x1, size 0x1
    unsigned char dynamic : 1; // offset 0x1, size 0x1
    unsigned char page_break : 1; // offset 0x1, size 0x1
    unsigned char stateful : 1; // offset 0x1, size 0x1
    unsigned char japanese_break : 1; // offset 0x1, size 0x1
    unsigned short dummy : 3; // offset 0x0, size 0x2
};
// total size: 0x38
struct jot {
    // Members
    struct substr s; // offset 0x0, size 0x8
    // total size: 0x2
    struct /* @class$960xFont_cpp */ {
        // Members
        unsigned char invisible : 1; // offset 0x0, size 0x1
        unsigned char ethereal : 1; // offset 0x0, size 0x1
        unsigned char merge : 1; // offset 0x0, size 0x1
        unsigned char word_break : 1; // offset 0x0, size 0x1
        unsigned char word_end : 1; // offset 0x0, size 0x1
        unsigned char line_break : 1; // offset 0x0, size 0x1
        unsigned char stop : 1; // offset 0x0, size 0x1
        unsigned char tab : 1; // offset 0x0, size 0x1
        unsigned char insert : 1; // offset 0x1, size 0x1
        unsigned char dynamic : 1; // offset 0x1, size 0x1
        unsigned char page_break : 1; // offset 0x1, size 0x1
        unsigned char stateful : 1; // offset 0x1, size 0x1
        unsigned char japanese_break : 1; // offset 0x1, size 0x1
        unsigned short dummy : 3; // offset 0x0, size 0x2
    } flag; // offset 0x8, size 0x2
    unsigned short context_size; // offset 0xA, size 0x2
    void * context; // offset 0xC, size 0x4
    struct basic_rect bounds; // offset 0x10, size 0x10
    struct basic_rect render_bounds; // offset 0x20, size 0x10
    const struct callback * cb; // offset 0x30, size 0x4
    const struct tag_type * tag; // offset 0x34, size 0x4
};
// Range: 0x80061720 -> 0x80061850
// this: r29
void layout::bound_line(struct jot_line & line /* r30 */) {
    // Local variables
    unsigned long i; // r31
    struct jot & a; // r0
    unsigned long i; // r31
    struct jot & a; // r0
    float total_height; // f1
}

static char __FUNCTION__[9]; // size: 0x9, address: 0x80BFCCB8
// Range: 0x80061850 -> 0x80061A1C
// this: r29
unsigned char layout::fit_line(unsigned char isLastLine /* r30 */) {
    // Local variables
    struct jot_line & line; // r31
    unsigned long i; // r27
    struct jot & a; // r0

    // References
    // -> static char __FUNCTION__[9];
}

// Range: 0x80061A1C -> 0x80061AA0
// this: r30
void layout::next_line() {
    // Local variables
    struct jot_line & line; // r0
    struct jot_line & nline; // r4
}

static char __FUNCTION__[5]; // size: 0x5, address: 0x80BFCCC4
// total size: 0x8
struct /* @class$4556xFont_cpp */ {
    // Members
    const char * s; // offset 0x0, size 0x4
    const char * end; // offset 0x4, size 0x4
};
// Range: 0x80061AA0 -> 0x80061F88
// this: r21
void layout::calc(const class xtextbox & ctb /* r22 */, unsigned long start_text /* r23 */) {
    // Local variables
    float initialWidth; // f31
    float initialHeight; // f30
    struct jot_line & first_line; // r0
    // total size: 0x8
    struct /* @class$4556xFont_cpp */ {
        // Members
        const char * s; // offset 0x0, size 0x4
        const char * end; // offset 0x4, size 0x4
    } text_stack[16]; // r1+0x50
    unsigned long text_stack_size; // r28
    unsigned long text_index; // r27
    const char * s; // r26
    const char * end; // r25
    const char * next; // r24
    unsigned char temp_context_buffer[64]; // r1+0x10
    struct jot & a; // r23
    struct jot_line & line; // r0
    unsigned long context_size; // r26
    struct jot_line & last_line; // r0
    unsigned long i; // r23

    // References
    // -> static class layout * gCurrentLayout;
    // -> static char __FUNCTION__[5];
}

static char __FUNCTION__[7]; // size: 0x7, address: 0x80BFCCCC
// Range: 0x80061F88 -> 0x80062304
// this: r26
void layout::render(const class xtextbox & ctb /* r27 */, int begin_jot /* r25 */, int end_jot /* r28 */) {
    // Local variables
    unsigned long begin_line; // r30
    unsigned long i; // r29
    struct jot & j; // r0
    float top; // f31
    unsigned long li; // r31
    int line_last; // r30
    float x; // f30
    float y; // f29
    int i; // r29
    const struct jot_line & line; // r0
    unsigned int xj; // r5
    unsigned int yj; // r0
    struct jot & j; // r25

    // References
    // -> static char __FUNCTION__[7];
}

// Range: 0x80062304 -> 0x80062494
// this: r25
float layout::yextent(float max /* f30 */, int & size /* r26 */, int begin_jot /* r27 */, int end_jot /* r28 */) const {
    // Local variables
    unsigned long begin_line; // r30
    float top; // f31
    unsigned long i; // r29
    const struct jot_line & line; // r0
    const struct jot_line & line; // r0
}

// Range: 0x80062494 -> 0x800625C8
// this: r26
unsigned char layout::changed(const class xtextbox & ctb /* r27 */) {
    // Local variables
    unsigned int flags1; // r5
    unsigned int flags2; // r4
    int i; // r29
    struct jot & j; // r28
    unsigned int oldval; // r0
    unsigned int val; // r0
}

// Range: 0x800625C8 -> 0x800625F4
static void update_tag_alpha(const struct jot & j /* r0 */, class xtextbox & tb /* r0 */) {}

// Range: 0x800625F4 -> 0x80062600
static void update_tag_reset_alpha(class xtextbox & tb /* r0 */, const class xtextbox & ctb /* r0 */) {}

static struct callback cb; // size: 0xC, address: 0x80C0A854
// Range: 0x80062600 -> 0x80062730
static void parse_tag_alpha(struct jot & a /* r29 */, const class xtextbox & tb /* r30 */, const struct split_tag & ti /* r31 */) {
    // Local variables
    float & v; // r0

    // References
    // -> static struct callback cb;
}

static struct callback cb; // size: 0xC, address: 0x80C0A864
// Range: 0x80062730 -> 0x8006273C
static void reset_tag_alpha(struct jot & a /* r0 */) {
    // References
    // -> static struct callback cb;
}

// Range: 0x8006273C -> 0x80062768
static void update_tag_red(const struct jot & j /* r0 */, class xtextbox & tb /* r0 */) {}

// Range: 0x80062768 -> 0x80062774
static void update_tag_reset_red(class xtextbox & tb /* r0 */, const class xtextbox & ctb /* r0 */) {}

static struct callback cb; // size: 0xC, address: 0x80C0A870
// Range: 0x80062774 -> 0x800628A4
static void parse_tag_red(struct jot & a /* r29 */, const class xtextbox & tb /* r30 */, const struct split_tag & ti /* r31 */) {
    // Local variables
    float & v; // r0

    // References
    // -> static struct callback cb;
}

static struct callback cb; // size: 0xC, address: 0x80C0A87C
// Range: 0x800628A4 -> 0x800628B0
static void reset_tag_red(struct jot & a /* r0 */) {
    // References
    // -> static struct callback cb;
}

// Range: 0x800628B0 -> 0x800628DC
static void update_tag_green(const struct jot & j /* r0 */, class xtextbox & tb /* r0 */) {}

// Range: 0x800628DC -> 0x800628E8
static void update_tag_reset_green(class xtextbox & tb /* r0 */, const class xtextbox & ctb /* r0 */) {}

static struct callback cb; // size: 0xC, address: 0x80C0A888
// Range: 0x800628E8 -> 0x80062A18
static void parse_tag_green(struct jot & a /* r29 */, const class xtextbox & tb /* r30 */, const struct split_tag & ti /* r31 */) {
    // Local variables
    float & v; // r0

    // References
    // -> static struct callback cb;
}

static struct callback cb; // size: 0xC, address: 0x80C0A894
// Range: 0x80062A18 -> 0x80062A24
static void reset_tag_green(struct jot & a /* r0 */) {
    // References
    // -> static struct callback cb;
}

// Range: 0x80062A24 -> 0x80062A50
static void update_tag_blue(const struct jot & j /* r0 */, class xtextbox & tb /* r0 */) {}

// Range: 0x80062A50 -> 0x80062A5C
static void update_tag_reset_blue(class xtextbox & tb /* r0 */, const class xtextbox & ctb /* r0 */) {}

static struct callback cb; // size: 0xC, address: 0x80C0A8A0
// Range: 0x80062A5C -> 0x80062B8C
static void parse_tag_blue(struct jot & a /* r29 */, const class xtextbox & tb /* r30 */, const struct split_tag & ti /* r31 */) {
    // Local variables
    float & v; // r0

    // References
    // -> static struct callback cb;
}

static struct callback cb; // size: 0xC, address: 0x80C0A8AC
// Range: 0x80062B8C -> 0x80062B98
static void reset_tag_blue(struct jot & a /* r0 */) {
    // References
    // -> static struct callback cb;
}

// Range: 0x80062B98 -> 0x80062BC4
static void update_tag_salpha(const struct jot & j /* r0 */, class xtextbox & tb /* r0 */) {}

// Range: 0x80062BC4 -> 0x80062BD0
static void update_tag_reset_salpha(class xtextbox & tb /* r0 */, const class xtextbox & ctb /* r0 */) {}

static struct callback cb; // size: 0xC, address: 0x80C0A8B8
// Range: 0x80062BD0 -> 0x80062D00
static void parse_tag_salpha(struct jot & a /* r29 */, const class xtextbox & tb /* r30 */, const struct split_tag & ti /* r31 */) {
    // Local variables
    float & v; // r0

    // References
    // -> static struct callback cb;
}

static struct callback cb; // size: 0xC, address: 0x80C0A8C4
// Range: 0x80062D00 -> 0x80062D0C
static void reset_tag_salpha(struct jot & a /* r0 */) {
    // References
    // -> static struct callback cb;
}

// Range: 0x80062D0C -> 0x80062D38
static void update_tag_sred(const struct jot & j /* r0 */, class xtextbox & tb /* r0 */) {}

// Range: 0x80062D38 -> 0x80062D44
static void update_tag_reset_sred(class xtextbox & tb /* r0 */, const class xtextbox & ctb /* r0 */) {}

static struct callback cb; // size: 0xC, address: 0x80C0A8D0
// Range: 0x80062D44 -> 0x80062E74
static void parse_tag_sred(struct jot & a /* r29 */, const class xtextbox & tb /* r30 */, const struct split_tag & ti /* r31 */) {
    // Local variables
    float & v; // r0

    // References
    // -> static struct callback cb;
}

static struct callback cb; // size: 0xC, address: 0x80C0A8DC
// Range: 0x80062E74 -> 0x80062E80
static void reset_tag_sred(struct jot & a /* r0 */) {
    // References
    // -> static struct callback cb;
}

// Range: 0x80062E80 -> 0x80062EAC
static void update_tag_sgreen(const struct jot & j /* r0 */, class xtextbox & tb /* r0 */) {}

// Range: 0x80062EAC -> 0x80062EB8
static void update_tag_reset_sgreen(class xtextbox & tb /* r0 */, const class xtextbox & ctb /* r0 */) {}

static struct callback cb; // size: 0xC, address: 0x80C0A8E8
// Range: 0x80062EB8 -> 0x80062FE8
static void parse_tag_sgreen(struct jot & a /* r29 */, const class xtextbox & tb /* r30 */, const struct split_tag & ti /* r31 */) {
    // Local variables
    float & v; // r0

    // References
    // -> static struct callback cb;
}

static struct callback cb; // size: 0xC, address: 0x80C0A8F4
// Range: 0x80062FE8 -> 0x80062FF4
static void reset_tag_sgreen(struct jot & a /* r0 */) {
    // References
    // -> static struct callback cb;
}

// Range: 0x80062FF4 -> 0x80063020
static void update_tag_sblue(const struct jot & j /* r0 */, class xtextbox & tb /* r0 */) {}

// Range: 0x80063020 -> 0x8006302C
static void update_tag_reset_sblue(class xtextbox & tb /* r0 */, const class xtextbox & ctb /* r0 */) {}

static struct callback cb; // size: 0xC, address: 0x80C0A900
// Range: 0x8006302C -> 0x8006315C
static void parse_tag_sblue(struct jot & a /* r29 */, const class xtextbox & tb /* r30 */, const struct split_tag & ti /* r31 */) {
    // Local variables
    float & v; // r0

    // References
    // -> static struct callback cb;
}

static struct callback cb; // size: 0xC, address: 0x80C0A90C
// Range: 0x8006315C -> 0x80063168
static void reset_tag_sblue(struct jot & a /* r0 */) {
    // References
    // -> static struct callback cb;
}

// Range: 0x80063168 -> 0x80063174
static void update_tag_width(const struct jot & j /* r0 */, class xtextbox & tb /* r0 */) {}

// Range: 0x80063174 -> 0x80063180
static void update_tag_reset_width(class xtextbox & tb /* r0 */, const class xtextbox & ctb /* r0 */) {}

static struct callback cb; // size: 0xC, address: 0x80C0A918
// Range: 0x80063180 -> 0x80063274
static void parse_tag_width(struct jot & a /* r29 */, const class xtextbox & tb /* r30 */, const struct split_tag & ti /* r31 */) {
    // Local variables
    float & v; // r0

    // References
    // -> static struct callback cb;
}

static struct callback cb; // size: 0xC, address: 0x80C0A924
// Range: 0x80063274 -> 0x80063280
static void reset_tag_width(struct jot & a /* r0 */) {
    // References
    // -> static struct callback cb;
}

// Range: 0x80063280 -> 0x8006328C
static void update_tag_height(const struct jot & j /* r0 */, class xtextbox & tb /* r0 */) {}

// Range: 0x8006328C -> 0x80063298
static void update_tag_reset_height(class xtextbox & tb /* r0 */, const class xtextbox & ctb /* r0 */) {}

static struct callback cb; // size: 0xC, address: 0x80C0A930
// Range: 0x80063298 -> 0x8006338C
static void parse_tag_height(struct jot & a /* r29 */, const class xtextbox & tb /* r30 */, const struct split_tag & ti /* r31 */) {
    // Local variables
    float & v; // r0

    // References
    // -> static struct callback cb;
}

static struct callback cb; // size: 0xC, address: 0x80C0A93C
// Range: 0x8006338C -> 0x80063398
static void reset_tag_height(struct jot & a /* r0 */) {
    // References
    // -> static struct callback cb;
}

// Range: 0x80063398 -> 0x800633A4
static void update_tag_left_indent(const struct jot & j /* r0 */, class xtextbox & tb /* r0 */) {}

// Range: 0x800633A4 -> 0x800633B0
static void update_tag_reset_left_indent(class xtextbox & tb /* r0 */, const class xtextbox & ctb /* r0 */) {}

static struct callback cb; // size: 0xC, address: 0x80C0A948
// Range: 0x800633B0 -> 0x800634A4
static void parse_tag_left_indent(struct jot & a /* r29 */, const class xtextbox & tb /* r30 */, const struct split_tag & ti /* r31 */) {
    // Local variables
    float & v; // r0

    // References
    // -> static struct callback cb;
}

static struct callback cb; // size: 0xC, address: 0x80C0A958
// Range: 0x800634A4 -> 0x800634B0
static void reset_tag_left_indent(struct jot & a /* r0 */) {
    // References
    // -> static struct callback cb;
}

// Range: 0x800634B0 -> 0x800634BC
static void update_tag_right_indent(const struct jot & j /* r0 */, class xtextbox & tb /* r0 */) {}

// Range: 0x800634BC -> 0x800634C8
static void update_tag_reset_right_indent(class xtextbox & tb /* r0 */, const class xtextbox & ctb /* r0 */) {}

static struct callback cb; // size: 0xC, address: 0x80C0A964
// Range: 0x800634C8 -> 0x800635BC
static void parse_tag_right_indent(struct jot & a /* r29 */, const class xtextbox & tb /* r30 */, const struct split_tag & ti /* r31 */) {
    // Local variables
    float & v; // r0

    // References
    // -> static struct callback cb;
}

static struct callback cb; // size: 0xC, address: 0x80C0A970
// Range: 0x800635BC -> 0x800635C8
static void reset_tag_right_indent(struct jot & a /* r0 */) {
    // References
    // -> static struct callback cb;
}

// Range: 0x800635C8 -> 0x800635D4
static void update_tag_tab_stop(const struct jot & j /* r0 */, class xtextbox & tb /* r0 */) {}

// Range: 0x800635D4 -> 0x800635E0
static void update_tag_reset_tab_stop(class xtextbox & tb /* r0 */, const class xtextbox & ctb /* r0 */) {}

static struct callback cb; // size: 0xC, address: 0x80C0A97C
// Range: 0x800635E0 -> 0x800636D4
static void parse_tag_tab_stop(struct jot & a /* r29 */, const class xtextbox & tb /* r30 */, const struct split_tag & ti /* r31 */) {
    // Local variables
    float & v; // r0

    // References
    // -> static struct callback cb;
}

static struct callback cb; // size: 0xC, address: 0x80C0A988
// Range: 0x800636D4 -> 0x800636E0
static void reset_tag_tab_stop(struct jot & a /* r0 */) {
    // References
    // -> static struct callback cb;
}

// Range: 0x800636E0 -> 0x800636EC
static void update_tag_xspace(const struct jot & j /* r0 */, class xtextbox & tb /* r0 */) {}

// Range: 0x800636EC -> 0x800636F8
static void update_tag_reset_xspace(class xtextbox & tb /* r0 */, const class xtextbox & ctb /* r0 */) {}

static struct callback cb; // size: 0xC, address: 0x80C0A994
// Range: 0x800636F8 -> 0x800637EC
static void parse_tag_xspace(struct jot & a /* r29 */, const class xtextbox & tb /* r30 */, const struct split_tag & ti /* r31 */) {
    // Local variables
    float & v; // r0

    // References
    // -> static struct callback cb;
}

static struct callback cb; // size: 0xC, address: 0x80C0A9A0
// Range: 0x800637EC -> 0x800637F8
static void reset_tag_xspace(struct jot & a /* r0 */) {
    // References
    // -> static struct callback cb;
}

// Range: 0x800637F8 -> 0x80063804
static void update_tag_yspace(const struct jot & j /* r0 */, class xtextbox & tb /* r0 */) {}

// Range: 0x80063804 -> 0x80063810
static void update_tag_reset_yspace(class xtextbox & tb /* r0 */, const class xtextbox & ctb /* r0 */) {}

static struct callback cb; // size: 0xC, address: 0x80C0A9AC
// Range: 0x80063810 -> 0x80063904
static void parse_tag_yspace(struct jot & a /* r29 */, const class xtextbox & tb /* r30 */, const struct split_tag & ti /* r31 */) {
    // Local variables
    float & v; // r0

    // References
    // -> static struct callback cb;
}

static struct callback cb; // size: 0xC, address: 0x80C0A9B8
// Range: 0x80063904 -> 0x80063910
static void reset_tag_yspace(struct jot & a /* r0 */) {
    // References
    // -> static struct callback cb;
}

// Range: 0x80063910 -> 0x80063938
static void update_tag_reset_all(class xtextbox & tb /* r4 */, const class xtextbox & ctb /* r5 */) {}

static struct callback cb; // size: 0xC, address: 0x80C0A9C4
// Range: 0x80063938 -> 0x80063944
static void reset_tag_all(struct jot & j /* r0 */) {
    // References
    // -> static struct callback cb;
}

// Range: 0x80063944 -> 0x80063960
static void update_tag_color(const struct jot & j /* r0 */, class xtextbox & tb /* r0 */) {}

// Range: 0x80063960 -> 0x80063988
static void update_tag_reset_color(class xtextbox & tb /* r0 */, const class xtextbox & ctb /* r0 */) {}

static struct callback cb; // size: 0xC, address: 0x80C0A9D0
// Range: 0x80063988 -> 0x80063B54
static void parse_tag_color(struct jot & a /* r30 */, const class xtextbox & tb /* r31 */, const struct split_tag & ti /* r29 */) {
    // Local variables
    struct xColor_tag & color; // r0
    unsigned int v; // r3
    unsigned int temp; // r0

    // References
    // -> static struct callback cb;
}

static struct callback cb; // size: 0xC, address: 0x80C0A9DC
// Range: 0x80063B54 -> 0x80063B60
static void reset_tag_color(struct jot & a /* r0 */) {
    // References
    // -> static struct callback cb;
}

// Range: 0x80063B60 -> 0x80063B6C
static void update_tag_font(const struct jot & j /* r0 */, class xtextbox & tb /* r0 */) {}

// Range: 0x80063B6C -> 0x80063B78
static void update_tag_reset_font(class xtextbox & tb /* r0 */, const class xtextbox & ctb /* r0 */) {}

static struct callback cb; // size: 0xC, address: 0x80C0A9E8
// Range: 0x80063B78 -> 0x80063BF0
static void parse_tag_font(struct jot & a /* r31 */, const struct split_tag & ti /* r0 */) {
    // Local variables
    unsigned int & id; // r0

    // References
    // -> static struct callback cb;
    // -> static unsigned long active_fonts_size;
}

static struct callback cb; // size: 0xC, address: 0x80C0A9F4
// Range: 0x80063BF0 -> 0x80063BFC
static void reset_tag_font(struct jot & a /* r0 */) {
    // References
    // -> static struct callback cb;
}

// Range: 0x80063BFC -> 0x80063C10
static void update_tag_wrap(const struct jot & j /* r0 */, class xtextbox & tb /* r0 */) {}

// Range: 0x80063C10 -> 0x80063C24
static void update_tag_reset_wrap(class xtextbox & tb /* r0 */, const class xtextbox & ctb /* r0 */) {}

static struct callback cb; // size: 0xC, address: 0x80C0AA00
// Range: 0x80063C24 -> 0x80063D14
static void parse_tag_wrap(struct jot & a /* r30 */, const struct split_tag & ti /* r31 */) {
    // Local variables
    unsigned int & flags; // r0

    // References
    // -> static struct callback cb;
}

static struct callback cb; // size: 0xC, address: 0x80C0AA0C
// Range: 0x80063D14 -> 0x80063D20
static void reset_tag_wrap(struct jot & a /* r0 */) {
    // References
    // -> static struct callback cb;
}

// Range: 0x80063D20 -> 0x80063D34
static void update_tag_xjustify(const struct jot & j /* r0 */, class xtextbox & tb /* r0 */) {}

// Range: 0x80063D34 -> 0x80063D48
static void update_tag_reset_xjustify(class xtextbox & tb /* r0 */, const class xtextbox & ctb /* r0 */) {}

static struct callback cb; // size: 0xC, address: 0x80C0AA18
// Range: 0x80063D48 -> 0x80063E5C
static void parse_tag_xjustify(struct jot & a /* r30 */, const struct split_tag & ti /* r31 */) {
    // Local variables
    unsigned int & flags; // r0

    // References
    // -> static struct callback cb;
}

static struct callback cb; // size: 0xC, address: 0x80C0AA24
// Range: 0x80063E5C -> 0x80063E68
static void reset_tag_xjustify(struct jot & a /* r0 */) {
    // References
    // -> static struct callback cb;
}

// Range: 0x80063E68 -> 0x80063E7C
static void update_tag_yjustify(const struct jot & j /* r0 */, class xtextbox & tb /* r0 */) {}

// Range: 0x80063E7C -> 0x80063E90
static void update_tag_reset_yjustify(class xtextbox & tb /* r0 */, const class xtextbox & ctb /* r0 */) {}

static struct callback cb; // size: 0xC, address: 0x80C0AA30
// Range: 0x80063E90 -> 0x80063FA4
static void parse_tag_yjustify(struct jot & a /* r30 */, const struct split_tag & ti /* r31 */) {
    // Local variables
    unsigned int & flags; // r0

    // References
    // -> static struct callback cb;
}

static struct callback cb; // size: 0xC, address: 0x80C0AA3C
// Range: 0x80063FA4 -> 0x80063FB0
static void reset_tag_yjustify(struct jot & a /* r0 */) {
    // References
    // -> static struct callback cb;
}

// Range: 0x80063FB0 -> 0x80064034
static void parse_tag_open_curly(struct jot & a /* r29 */, const class xtextbox & tb /* r30 */, const struct split_tag & ti /* r0 */) {
    // Local variables
    char c; // r31
}

// Range: 0x80064034 -> 0x80064094
static void parse_tag_newline(struct jot & a /* r31 */, const class xtextbox & tb /* r0 */) {}

// Range: 0x80064094 -> 0x80064134
static void parse_tag_nbsp(struct jot & a /* r30 */, const class xtextbox & tb /* r31 */) {
    // References
    // -> struct callback text_cb;
}

// Range: 0x80064134 -> 0x80064148
static void parse_tag_tab(struct jot & a /* r0 */) {}

// Range: 0x80064148 -> 0x8006415C
static void parse_tag_word_break(struct jot & a /* r0 */) {}

// Range: 0x8006415C -> 0x80064170
static void parse_tag_page_break(struct jot & a /* r0 */) {}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80BFCCD4
// total size: 0x30
struct model_tag_context {
    // Members
    struct xModelInstance * model; // offset 0x0, size 0x4
    struct xVec3 rot; // offset 0x4, size 0xC
    struct basic_rect dst; // offset 0x10, size 0x10
    struct xSphere o; // offset 0x20, size 0x10
};
// Range: 0x80064170 -> 0x800643B8
static void render_tag_model(const struct jot & j /* r31 */, const class xtextbox & tb /* r30 */, float x /* f30 */, float y /* f31 */) {
    // Local variables
    const struct model_tag_context & mtc; // r31
    struct basic_rect dst; // r1+0x28
    struct xVec3 from; // r1+0x1C
    struct xVec3 to; // r1+0x10
    struct xMat4x3 frame; // r1+0x40
    float scale; // f31

    // References
    // -> static char __FUNCTION__[17];
}

static struct callback cb; // size: 0xC, address: 0x80C0AA64
static char __FUNCTION__[16]; // size: 0x10, address: 0x80BFCCE8
// Range: 0x800643B8 -> 0x80064560
static void parse_tag_model(struct jot & a /* r30 */, const class xtextbox & tb /* r31 */, const struct split_tag & ti /* r6 */) {
    // Local variables
    struct model_tag_context & mtc; // r29
    const struct xSphere * o; // r28

    // References
    // -> static struct callback cb;
    // -> static struct model_args def_model_args;
    // -> static char __FUNCTION__[16];
}

// Range: 0x80064560 -> 0x80064588
static void reset_tag_model() {
    // References
    // -> static struct model_args def_model_args;
}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80BFCCF8
// total size: 0x28
struct tex_tag_context {
    // Members
    struct RwRaster * raster; // offset 0x0, size 0x4
    float rot; // offset 0x4, size 0x4
    struct basic_rect src; // offset 0x8, size 0x10
    struct basic_rect dst; // offset 0x18, size 0x10
};
// Range: 0x80064588 -> 0x80064680
static void render_tag_tex(const struct jot & j /* r31 */, const class xtextbox & tb /* r30 */, float x /* f30 */, float y /* f31 */) {
    // Local variables
    const struct tex_tag_context & ttc; // r31
    struct basic_rect dst; // r1+0xC

    // References
    // -> static char __FUNCTION__[15];
}

static struct callback cb; // size: 0xC, address: 0x80C0AA74
// total size: 0x8
struct xVec2 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// Range: 0x80064680 -> 0x800648F8
static void parse_tag_tex(struct jot & a /* r29 */, const class xtextbox & tb /* r30 */, const struct split_tag & ti /* r6 */) {
    // Local variables
    struct tex_tag_context & ttc; // r31
    struct xVec2 scale; // r1+0x30

    // References
    // -> static struct callback cb;
    // -> static struct tex_args def_tex_args;
}

// Range: 0x800648F8 -> 0x8006496C
static struct xVec2 get_texture_size(struct RwRaster & raster /* r0 */) {
    // Local variables
    struct xVec2 ret; // r1+0x8
}

// Range: 0x8006496C -> 0x80064994
static void reset_tag_tex() {
    // References
    // -> static struct tex_args def_tex_args;
}

// Range: 0x80064994 -> 0x80064A50
static void parse_tag_insert(struct jot & j /* r30 */, const struct split_tag & ti /* r31 */) {
    // Local variables
    unsigned int id; // r0
    unsigned int len; // r1+0x8
    const char * text; // r0
}

// Range: 0x80064A50 -> 0x80064B0C
static void parse_tag_insert_hash(struct jot & j /* r30 */, const struct split_tag & ti /* r31 */) {
    // Local variables
    unsigned int id; // r0
    unsigned int len; // r1+0x8
    const char * text; // r0
}

// Range: 0x80064B0C -> 0x80064B34
static void parse_tag_pop(const struct split_tag & ti /* r0 */) {}

static char __FUNCTION__[16]; // size: 0x10, address: 0x80BFCD08
// total size: 0x10
struct xTimerAsset : public xBaseAsset {
    // Members
    float seconds; // offset 0x8, size 0x4
    float randomRange; // offset 0xC, size 0x4
};
// total size: 0x1C
struct xTimer : public xBase {
    // Members
    struct xTimerAsset * tasset; // offset 0x10, size 0x4
    unsigned char state; // offset 0x14, size 0x1
    unsigned char runsInPause; // offset 0x15, size 0x1
    unsigned short flags; // offset 0x16, size 0x2
    float secondsLeft; // offset 0x18, size 0x4
};
// Range: 0x80064B34 -> 0x80064CCC
static void parse_tag_timer(struct jot & j /* r31 */, const struct split_tag & ti /* r30 */) {
    // Local variables
    unsigned int id; // r0
    const struct xTimer * ta; // r0
    char buffer[64]; // r1+0x8
    unsigned int sec; // r6
    unsigned int mn; // r5

    // References
    // -> static char __FUNCTION__[16];
}

// total size: 0xC
struct xCounterAsset : public xBaseAsset {
    // Members
    signed short count; // offset 0x8, size 0x2
};
// total size: 0x60
struct _xCounter : public xBase {
    // Members
    struct xCounterAsset * asset; // offset 0x10, size 0x4
    signed short count; // offset 0x14, size 0x2
    unsigned char state; // offset 0x16, size 0x1
    unsigned char pad; // offset 0x17, size 0x1
    char stats[72]; // offset 0x18, size 0x48
};
// Range: 0x80064CCC -> 0x80064DC0
static void parse_tag_counter(struct jot & j /* r30 */, const struct split_tag & ti /* r31 */) {
    // Local variables
    unsigned int id; // r0
    struct _xCounter * counter; // r0
    char * buffer; // r31
}

static struct tag_type format_tags_buffer[2][128]; // size: 0x1400, address: 0x80416A08
static struct tag_type * format_tags; // size: 0x4, address: 0x80BFCD18
static unsigned long format_tags_size; // size: 0x4, address: 0x80BFCD1C
static char __FUNCTION__[18]; // size: 0x12, address: 0x80BFCD20
// Range: 0x80064DC0 -> 0x80064EE0
static unsigned long count_format_tags() {
    // Local variables
    unsigned long i; // r3

    // References
    // -> static char __FUNCTION__[18];
    // -> static struct tag_type * format_tags;
}

// Range: 0x80064EE0 -> 0x80064F78
static unsigned char ordered(const struct tag_type * t /* r28 */, unsigned long size /* r29 */) {
    // Local variables
    unsigned long i; // r30
}

static char __FUNCTION__[14]; // size: 0xE, address: 0x80BFCD34
// Range: 0x80064F78 -> 0x80065214
void xtextbox::register_tags(const struct tag_type * t /* r30 */, unsigned long size /* r31 */) {
    // Local variables
    const struct tag_type * s1; // r29
    const struct tag_type * s2; // r30
    const struct tag_type * end1; // r31
    const struct tag_type * end2; // r28
    struct tag_type * d; // r27
    int c; // r0

    // References
    // -> static struct tag_type * format_tags;
    // -> static unsigned long format_tags_size;
    // -> static struct tag_type format_tags_buffer[2][128];
    // -> static char __FUNCTION__[14];
}

// Range: 0x80065240 -> 0x800652E4
struct tag_type * xtextbox::find_format_tag(const struct substr & s /* r27 */, int & index /* r28 */) {
    // Local variables
    int start; // r31
    int end; // r30
    struct tag_type & t; // r29
    int c; // r0

    // References
    // -> static struct tag_type * format_tags;
    // -> static unsigned long format_tags_size;
}

// Range: 0x800652E4 -> 0x80065420
void render_fill_rect(const struct basic_rect & bounds /* r30 */, struct xColor_tag & color /* r31 */) {
    // Local variables
    float rcz; // f31
    float nsz; // f30
    struct RwCamera * cam; // r5
    struct rwGameCube2DVertex vert[4]; // r1+0x1C
    struct basic_rect r; // r1+0xC

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int FB_YRES;
    // -> unsigned int FB_XRES;
    // -> struct zGlobals globals;
}

// Range: 0x80065420 -> 0x80065568
static void set_rect_verts(struct rwGameCube2DVertex * vert /* r30 */, float x /* f25 */, float y /* f26 */, float w /* f27 */, float h /* f30 */, struct xColor_tag & c /* r31 */, float rcz /* f28 */, float nsz /* f29 */) {}

// Range: 0x80065568 -> 0x80065598
static void set_rect_vert(struct rwGameCube2DVertex & vert /* r0 */, float x /* f0 */, float y /* f0 */, float z /* f0 */, struct xColor_tag & c /* r0 */) {}

// Range: 0x80065598 -> 0x800655C8
int textstrlen(const char * string /* r3 */) {
    // Local variables
    int ret; // r5
}

// Range: 0x800655C8 -> 0x8006562C
char * textstrncpy(char * dest /* r8 */, const char * source /* r4 */, int chars /* r0 */, char * * outDest /* r0 */, const char * * outSource /* r0 */) {
    // Local variables
    char * ret; // r3
}

static const char * TXT_WIP; // size: 0x4, address: 0x80C07318
static signed char init; // size: 0x1, address: 0x80C0731C
static float wipTimer; // size: 0x4, address: 0x80C07320
static signed char init; // size: 0x1, address: 0x80C07324
static float fadeInTime; // size: 0x4, address: 0x80C07328
static signed char init; // size: 0x1, address: 0x80C0732C
static float onTime; // size: 0x4, address: 0x80C07330
static signed char init; // size: 0x1, address: 0x80C07334
static float fadeOutTime; // size: 0x4, address: 0x80C07338
static signed char init; // size: 0x1, address: 0x80C0733C
static float offTime; // size: 0x4, address: 0x80C07340
static signed char init; // size: 0x1, address: 0x80C07344
static unsigned char first; // size: 0x1, address: 0x80C07345
static signed char init; // size: 0x1, address: 0x80C07346
static class xtextbox tb; // size: 0x74, address: 0x80417E08
static signed char init; // size: 0x1, address: 0x80C07347
float gRealTimeElapsed; // size: 0x4, address: 0x80C07E08
// Range: 0x8006562C -> 0x80065A58
static void PrintWIPText() {
    // Local variables
    float totalTime; // f8
    struct xColor_tag color; // r1+0x14
    struct xColor_tag dropcolor; // r1+0x10
    float fadePer; // f2
    struct basic_rect bounds; // r1+0x18

    // References
    // -> static class xtextbox tb;
    // -> static const char * TXT_WIP;
    // -> static signed char init;
    // -> static struct basic_rect screen_bounds;
    // -> struct xColor_tag g_WHITE;
    // -> struct xColor_tag g_BLACK;
    // -> static float wipTimer;
    // -> static float onTime;
    // -> static float fadeInTime;
    // -> static float fadeOutTime;
    // -> static float offTime;
    // -> static unsigned char first;
    // -> static signed char init;
    // -> static signed char init;
    // -> static signed char init;
    // -> static signed char init;
    // -> static signed char init;
    // -> float gRealTimeElapsed;
    // -> static signed char init;
    // -> static signed char init;
}

struct xGlobals * xglobals; // size: 0x4, address: 0x80C00BE8
// Range: 0x80065A58 -> 0x80065BEC
static void PrintWatermark() {
    // Local variables
    struct basic_rect bounds; // r1+0x18
    class xtextbox tb; // r1+0xCC
    struct xColor_tag color; // r1+0x14
    struct xColor_tag dropcolor; // r1+0x10

    // References
    // -> struct xGlobals * xglobals;
    // -> static struct basic_rect screen_bounds;
    // -> struct xColor_tag g_WHITE;
    // -> struct xColor_tag g_BLACK;
}

// Range: 0x80065BEC -> 0x80065C30
void xFontPrintTopText() {
    // References
    // -> struct xGlobals * xglobals;
}

static unsigned char on; // size: 0x1, address: 0x80C07348
static signed char init; // size: 0x1, address: 0x80C07349
// Range: 0x80065C30 -> 0x80065D74
void debug_mode_fontperf() {
    // Local variables
    int index; // r4
    float avg_frame_percent; // f3
    char buf[512]; // r1+0x8
    int count; // r31

    // References
    // -> static unsigned char on;
    // -> static signed char init;
    // -> static float avg_cpu_time;
    // -> float gRealTimeElapsed;
    // -> static float cpu_times[1];
}


