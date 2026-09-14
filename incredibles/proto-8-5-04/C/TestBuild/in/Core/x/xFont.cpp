/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class basic_rect screen_bounds; // size: 0x10, address: 0x5E7240
static class basic_rect default_adjust; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
static class xVec2 g_DefaultFontShadowOffset; // size: 0x8, address: 0x0
static char * default_font_texture[2]; // size: 0x8, address: 0x607768
static class font_asset default_font_assets[4]; // size: 0x7F0, address: 0x5067C0
static class font_data active_fonts[4]; // size: 0x6870, address: 0x627B50
static class RwTexture * codepage_textures[16]; // size: 0x40, address: 0x62E3C0
static unsigned int active_fonts_size; // size: 0x4, address: 0x6089F0
static unsigned int codepage_textures_size; // size: 0x4, address: 0x6089F4
static class RwSky2DVertex vert_buffer[240]; // size: 0x3C00, address: 0x62E400
static unsigned int vert_buffer_used; // size: 0x4, address: 0x6089F8
static float rcz; // size: 0x4, address: 0x6089FC
static float nsz; // size: 0x4, address: 0x608A00
static class model_cache_entry model_cache[8]; // size: 0x60, address: 0x632000
static unsigned char model_cache_inited; // size: 0x1, address: 0x608A04
static // total size: 0x20
class /* @class */ {
    // Members
public:
    signed int fogenable; // offset 0x0, size 0x4
    signed int vertexalphaenable; // offset 0x4, size 0x4
    signed int zwriteenable; // offset 0x8, size 0x4
    signed int ztestenable; // offset 0xC, size 0x4
    unsigned int srcblend; // offset 0x10, size 0x4
    unsigned int destblend; // offset 0x14, size 0x4
    unsigned int shademode; // offset 0x18, size 0x4
    enum RwTextureFilterMode filter; // offset 0x1C, size 0x4
} oldrs; // size: 0x20, address: 0x632060
static class substr text_delims; // size: 0x8, address: 0x5E7250
static class tex_args def_tex_args; // size: 0x34, address: 0x632080
static class model_args def_model_args; // size: 0x2C, address: 0x6320C0
static class tl_cache_entry tl_cache[2]; // size: 0x10A30, address: 0x6320F0
class callback text_cb; // size: 0xC, address: 0x5E7258
unsigned char disable_text_stats; // size: 0x1, address: 0x0
static class tag_type format_tags_buffer[2][128]; // size: 0x1400, address: 0x506FD0
static class tag_type * format_tags; // size: 0x4, address: 0x607788
static unsigned int format_tags_size; // size: 0x4, address: 0x60778C
class xGlobals * xglobals; // size: 0x4, address: 0x6076C8
class xColor_tag g_BLACK; // size: 0x4, address: 0x5E7208
class xColor_tag g_WHITE; // size: 0x4, address: 0x5E7210
float gRealTimeElapsed; // size: 0x4, address: 0x6085F0
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x6B2890
unsigned int FB_XRES; // size: 0x4, address: 0x6076BC
unsigned int FB_YRES; // size: 0x4, address: 0x6076C0
class basic_rect m_Unit; // size: 0x10, address: 0x5E77B0
class xVec3 m_Null; // size: 0xC, address: 0x5E7C40
class basic_rect m_Null; // size: 0x10, address: 0x5E77A0
class xMat4x3 g_I3; // size: 0x40, address: 0x643E60
unsigned int gActiveHeap; // size: 0x4, address: 0x608A5C
// total size: 0x20
class split_tag {
    // Members
public:
    class substr tag; // offset 0x0, size 0x8
    class substr name; // offset 0x8, size 0x8
    class substr action; // offset 0x10, size 0x8
    class substr value; // offset 0x18, size 0x8
};
// total size: 0xD8
class xEnt : public xBase {
    // Members
public:
    class xEntAsset * asset; // offset 0x10, size 0x4
    unsigned short idx; // offset 0x14, size 0x2
    unsigned char flags; // offset 0x16, size 0x1
    unsigned char miscflags; // offset 0x17, size 0x1
    unsigned char subType; // offset 0x18, size 0x1
    unsigned char pflags; // offset 0x19, size 0x1
    unsigned short moreFlags; // offset 0x1A, size 0x2
    unsigned char _isCulled : 2; // offset 0x1C, size 0x1
    unsigned char collisionEventReceived : 2; // offset 0x1C, size 0x1
    unsigned char driving_count; // offset 0x1D, size 0x1
    unsigned char num_ffx; // offset 0x1E, size 0x1
    unsigned char collType; // offset 0x1F, size 0x1
    unsigned char collLev; // offset 0x20, size 0x1
    unsigned char chkby; // offset 0x21, size 0x1
    unsigned char penby; // offset 0x22, size 0x1
    void (* visUpdate)(class xEnt *); // offset 0x24, size 0x4
    class xModelInstance * model; // offset 0x28, size 0x4
    class xModelInstance * collModel; // offset 0x2C, size 0x4
    class xModelInstance * camcollModel; // offset 0x30, size 0x4
    void (* update)(class xEnt *, class xScene *, float); // offset 0x34, size 0x4
    void (* endUpdate)(class xEnt *, class xScene *, float); // offset 0x38, size 0x4
    void (* bupdate)(class xEnt *, class xVec3 *); // offset 0x3C, size 0x4
    void (* move)(class xEnt *, class xScene *, float, class xEntFrame *); // offset 0x40, size 0x4
    void (* render)(class xEnt *); // offset 0x44, size 0x4
    class xEntFrame * frame; // offset 0x48, size 0x4
    class xEntCollis * collis; // offset 0x4C, size 0x4
    class xGridBound gridb; // offset 0x50, size 0x18
    class xBound bound; // offset 0x68, size 0x4C
    void (* transl)(class xEnt *, class xVec3 *, class xMat4x3 *); // offset 0xB4, size 0x4
    class xFFX * ffx; // offset 0xB8, size 0x4
    class xEnt * driver; // offset 0xBC, size 0x4
    class xEnt * driven; // offset 0xC0, size 0x4
    signed int driveMode; // offset 0xC4, size 0x4
    class xShadowSimpleCache * simpShadow; // offset 0xC8, size 0x4
    class xEntShadow * entShadow; // offset 0xCC, size 0x4
    class anim_coll_data * anim_coll; // offset 0xD0, size 0x4
    void * user_data; // offset 0xD4, size 0x4
};
// total size: 0x34
class RwRaster {
    // Members
public:
    class RwRaster * parent; // offset 0x0, size 0x4
    unsigned char * cpPixels; // offset 0x4, size 0x4
    unsigned char * palette; // offset 0x8, size 0x4
    signed int width; // offset 0xC, size 0x4
    signed int height; // offset 0x10, size 0x4
    signed int depth; // offset 0x14, size 0x4
    signed int stride; // offset 0x18, size 0x4
    signed short nOffsetX; // offset 0x1C, size 0x2
    signed short nOffsetY; // offset 0x1E, size 0x2
    unsigned char cType; // offset 0x20, size 0x1
    unsigned char cFlags; // offset 0x21, size 0x1
    unsigned char privateFlags; // offset 0x22, size 0x1
    unsigned char cFormat; // offset 0x23, size 0x1
    unsigned char * originalPixels; // offset 0x24, size 0x4
    signed int originalWidth; // offset 0x28, size 0x4
    signed int originalHeight; // offset 0x2C, size 0x4
    signed int originalStride; // offset 0x30, size 0x4
};
// total size: 0x8
class substr {
    // Members
public:
    char * text; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};
// total size: 0x68
class xScene {
    // Members
public:
    unsigned int sceneID; // offset 0x0, size 0x4
    unsigned short flags; // offset 0x4, size 0x2
    unsigned short num_trigs; // offset 0x6, size 0x2
    unsigned short num_stats; // offset 0x8, size 0x2
    unsigned short num_dyns; // offset 0xA, size 0x2
    unsigned short num_npcs; // offset 0xC, size 0x2
    unsigned short num_act_ents; // offset 0xE, size 0x2
    float gravity; // offset 0x10, size 0x4
    float drag; // offset 0x14, size 0x4
    float friction; // offset 0x18, size 0x4
    unsigned short num_ents_allocd; // offset 0x1C, size 0x2
    unsigned short num_trigs_allocd; // offset 0x1E, size 0x2
    unsigned short num_stats_allocd; // offset 0x20, size 0x2
    unsigned short num_dyns_allocd; // offset 0x22, size 0x2
    unsigned short num_npcs_allocd; // offset 0x24, size 0x2
    class xEnt * * trigs; // offset 0x28, size 0x4
    class xEnt * * stats; // offset 0x2C, size 0x4
    class xEnt * * dyns; // offset 0x30, size 0x4
    class xEnt * * npcs; // offset 0x34, size 0x4
    class xEnt * * act_ents; // offset 0x38, size 0x4
    class xEnv * env; // offset 0x3C, size 0x4
    class xMemPool mempool; // offset 0x40, size 0x1C
    class xBase * (* resolvID)(unsigned int); // offset 0x5C, size 0x4
    char * (* base2Name)(class xBase *); // offset 0x60, size 0x4
    char * (* id2Name)(unsigned int); // offset 0x64, size 0x4
};
// total size: 0x4E8
class zScene : public xScene {
    // Members
public:
    class _zPortal * pendingPortal; // offset 0x68, size 0x4
    signed int num_base; // offset 0x6C, size 0x4
    class xBase * * base; // offset 0x70, size 0x4
    unsigned int num_update_base; // offset 0x74, size 0x4
    class xBase * * update_base; // offset 0x78, size 0x4
    signed int baseCount[140]; // offset 0x7C, size 0x230
    class xBase * baseList[140]; // offset 0x2AC, size 0x230
    class _zEnv * zen; // offset 0x4DC, size 0x4
    class zSceneParameters * parameters; // offset 0x4E0, size 0x4
    unsigned char enableDrawing; // offset 0x4E4, size 0x1
};
// total size: 0x14
class RpInterpolator {
    // Members
public:
    signed int flags; // offset 0x0, size 0x4
    signed short startMorphTarget; // offset 0x4, size 0x2
    signed short endMorphTarget; // offset 0x6, size 0x2
    float time; // offset 0x8, size 0x4
    float recipTime; // offset 0xC, size 0x4
    float position; // offset 0x10, size 0x4
};
// total size: 0x4C
class xAnimState {
    // Members
public:
    class xAnimState * Next; // offset 0x0, size 0x4
    char * Name; // offset 0x4, size 0x4
    unsigned int ID; // offset 0x8, size 0x4
    unsigned int Flags; // offset 0xC, size 0x4
    unsigned int UserFlags; // offset 0x10, size 0x4
    float Speed; // offset 0x14, size 0x4
    class xAnimFile * Data; // offset 0x18, size 0x4
    class xAnimEffect * Effects; // offset 0x1C, size 0x4
    class xAnimTransitionList * Default; // offset 0x20, size 0x4
    class xAnimTransitionList * List; // offset 0x24, size 0x4
    float * BoneBlend; // offset 0x28, size 0x4
    float * TimeSnap; // offset 0x2C, size 0x4
    float FadeRecip; // offset 0x30, size 0x4
    unsigned short * FadeOffset; // offset 0x34, size 0x4
    void * CallbackData; // offset 0x38, size 0x4
    class xAnimMultiFile * MultiFile; // offset 0x3C, size 0x4
    void (* BeforeEnter)(class xAnimPlay *, class xAnimState *, void *); // offset 0x40, size 0x4
    void (* StateCallback)(class xAnimState *, class xAnimSingle *, void *); // offset 0x44, size 0x4
    void (* BeforeAnimMatrices)(class xAnimPlay *, class xQuat *, class xVec3 *, signed int); // offset 0x48, size 0x4
};
// total size: 0x2
class /* @class */ {
    // Members
public:
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
    unsigned short dummy : 4; // offset 0x0, size 0x2
};
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x10
class xJSPNodeTree {
    // Members
public:
    signed int numBranchNodes; // offset 0x0, size 0x4
    class xJSPNodeTreeBranch * branchNodes; // offset 0x4, size 0x4
    signed int numLeafNodes; // offset 0x8, size 0x4
    class xJSPNodeTreeLeaf * leafNodes; // offset 0xC, size 0x4
};
// total size: 0x1C
class xTimer : public xBase {
    // Members
public:
    class xTimerAsset * tasset; // offset 0x10, size 0x4
    unsigned char state; // offset 0x14, size 0x1
    unsigned char runsInPause; // offset 0x15, size 0x1
    unsigned short flags; // offset 0x16, size 0x2
    float secondsLeft; // offset 0x18, size 0x4
};
// total size: 0xA4
class xModelInstance {
    // Members
public:
    class xModelInstance * Next; // offset 0x0, size 0x4
    class xModelInstance * Parent; // offset 0x4, size 0x4
    class xModelPool * Pool; // offset 0x8, size 0x4
    class xAnimPlay * Anim; // offset 0xC, size 0x4
    class RpAtomic * Data; // offset 0x10, size 0x4
    class xModelPipe Pipe; // offset 0x14, size 0x8
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
    class xSurface * Surf; // offset 0x38, size 0x4
    class xModelBucket * * Bucket; // offset 0x3C, size 0x4
    class xModelInstance * BucketNext; // offset 0x40, size 0x4
    class xLightKit * LightKit; // offset 0x44, size 0x4
    void * Object; // offset 0x48, size 0x4
    unsigned short Flags; // offset 0x4C, size 0x2
    unsigned char BoneCount; // offset 0x4E, size 0x1
    unsigned char BoneIndex; // offset 0x4F, size 0x1
    unsigned char * BoneRemap; // offset 0x50, size 0x4
    class RwMatrixTag * Mat; // offset 0x54, size 0x4
    class xVec3 Scale; // offset 0x58, size 0xC
    class xBox animBound; // offset 0x64, size 0x18
    class xBox combinedAnimBound; // offset 0x7C, size 0x18
    unsigned int modelID; // offset 0x94, size 0x4
    unsigned int shadowID; // offset 0x98, size 0x4
    class RpAtomic * shadowmapAtomic; // offset 0x9C, size 0x4
    // total size: 0x4
    class /* @class */ {
        // Members
    public:
        class xVec3 * verts; // offset 0x0, size 0x4
    } anim_coll; // offset 0xA0, size 0x4
};
// total size: 0x138
class _tagxPad {
    // Members
public:
    unsigned char value[22]; // offset 0x0, size 0x16
    unsigned char last_value[22]; // offset 0x16, size 0x16
    unsigned int on; // offset 0x2C, size 0x4
    unsigned int pressed; // offset 0x30, size 0x4
    unsigned int released; // offset 0x34, size 0x4
    class _tagPadAnalog analog1; // offset 0x38, size 0x2
    class _tagPadAnalog analog2; // offset 0x3A, size 0x2
    enum _tagPadState state; // offset 0x3C, size 0x4
    unsigned int flags; // offset 0x40, size 0x4
    signed short port; // offset 0x44, size 0x2
    signed short slot; // offset 0x46, size 0x2
    class _tagiPad context; // offset 0x48, size 0x4
    float al2d_timer; // offset 0x4C, size 0x4
    float ar2d_timer; // offset 0x50, size 0x4
    float d_timer; // offset 0x54, size 0x4
    float up_tmr[22]; // offset 0x58, size 0x58
    float down_tmr[22]; // offset 0xB0, size 0x58
    class analog_data analog[2]; // offset 0x108, size 0x30
};
// total size: 0x10
class xLightKit {
    // Members
public:
    unsigned int tagID; // offset 0x0, size 0x4
    unsigned int groupID; // offset 0x4, size 0x4
    unsigned int lightCount; // offset 0x8, size 0x4
    class xLightKitLight * lightList; // offset 0xC, size 0x4
};
// total size: 0x18
class xBox {
    // Members
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
};
// total size: 0x24
class xAnimFile {
    // Members
public:
    class xAnimFile * Next; // offset 0x0, size 0x4
    char * Name; // offset 0x4, size 0x4
    unsigned int ID; // offset 0x8, size 0x4
    unsigned int FileFlags; // offset 0xC, size 0x4
    float Duration; // offset 0x10, size 0x4
    float TimeOffset; // offset 0x14, size 0x4
    unsigned short BoneCount; // offset 0x18, size 0x2
    unsigned char NumAnims[2]; // offset 0x1A, size 0x2
    void * * RawData; // offset 0x1C, size 0x4
    class xAnimPhysicsData * PhysicsData; // offset 0x20, size 0x4
};
// total size: 0x10
class basic_rect {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
// total size: 0x10
class xBase {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    class xLinkAsset * link; // offset 0x8, size 0x4
    void (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // offset 0xC, size 0x4
};
// total size: 0x70
class RpAtomic {
    // Members
public:
    class RwObjectHasFrame object; // offset 0x0, size 0x14
    class RwResEntry * repEntry; // offset 0x14, size 0x4
    class RpGeometry * geometry; // offset 0x18, size 0x4
    class RwSphere boundingSphere; // offset 0x1C, size 0x10
    class RwSphere worldBoundingSphere; // offset 0x2C, size 0x10
    class RpClump * clump; // offset 0x3C, size 0x4
    class RwLLLink inClumpLink; // offset 0x40, size 0x8
    class RpAtomic * (* renderCallBack)(class RpAtomic *); // offset 0x48, size 0x4
    class RpInterpolator interpolator; // offset 0x4C, size 0x14
    unsigned short renderFrame; // offset 0x60, size 0x2
    unsigned short pad; // offset 0x62, size 0x2
    class RwLinkList llWorldSectorsInAtomic; // offset 0x64, size 0x8
    class RxPipeline * pipeline; // offset 0x6C, size 0x4
};
// total size: 0x20
class jot_line {
    // Members
public:
    class basic_rect bounds; // offset 0x0, size 0x10
    float baseline; // offset 0x10, size 0x4
    unsigned int first; // offset 0x14, size 0x4
    unsigned int last; // offset 0x18, size 0x4
    unsigned char page_break; // offset 0x1C, size 0x1
};
// total size: 0x1A1C
class font_data {
    // Members
public:
    class font_asset * asset; // offset 0x0, size 0x4
    unsigned int index_max; // offset 0x4, size 0x4
    unsigned char char_index[256]; // offset 0x8, size 0x100
    unsigned char fixed_width_character; // offset 0x108, size 0x1
    float iwidth; // offset 0x10C, size 0x4
    float iheight; // offset 0x110, size 0x4
    class basic_rect tex_bounds[160]; // offset 0x114, size 0xA00
    class basic_rect bounds[160]; // offset 0xB14, size 0xA00
    class xVec2 dstfrac[160]; // offset 0x1514, size 0x500
    class RwTexture * texture; // offset 0x1A14, size 0x4
    class RwRaster * raster; // offset 0x1A18, size 0x4
};
// total size: 0x54
class xCollis {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int oid; // offset 0x4, size 0x4
    void * optr; // offset 0x8, size 0x4
    class xModelInstance * mptr; // offset 0xC, size 0x4
    float dist; // offset 0x10, size 0x4
    float test_dist; // offset 0x14, size 0x4
    class xVec3 norm; // offset 0x18, size 0xC
    class xVec3 tohit; // offset 0x24, size 0xC
    class xVec3 depen; // offset 0x30, size 0xC
    class xVec3 hdng; // offset 0x3C, size 0xC
    union { // inferred
        // total size: 0xC
        class /* @class */ {
            // Members
        public:
            float t; // offset 0x0, size 0x4
            float u; // offset 0x4, size 0x4
            float v; // offset 0x8, size 0x4
        } tuv; // offset 0x48, size 0xC
        class tri_data tri; // offset 0x48, size 0xC
    };
};
// total size: 0x38
class jot {
    // Members
public:
    class substr s; // offset 0x0, size 0x8
    // total size: 0x2
    class /* @class */ {
        // Members
    public:
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
        unsigned short dummy : 4; // offset 0x0, size 0x2
    } flag; // offset 0x8, size 0x2
    unsigned short context_size; // offset 0xA, size 0x2
    void * context; // offset 0xC, size 0x4
    class basic_rect bounds; // offset 0x10, size 0x10
    class basic_rect render_bounds; // offset 0x20, size 0x10
    class callback * cb; // offset 0x30, size 0x4
    class tag_type * tag; // offset 0x34, size 0x4
};
// total size: 0x8
class xJSPNodeInfo {
    // Members
public:
    signed int originalMatIndex; // offset 0x0, size 0x4
    unsigned short nodeFlags; // offset 0x4, size 0x2
    signed short sortOrder; // offset 0x6, size 0x2
};
// total size: 0x34
class PS2DemoGlobals {
    // Members
public:
    unsigned short language; // offset 0x0, size 0x2
    unsigned short aspect; // offset 0x2, size 0x2
    unsigned short play_mode; // offset 0x4, size 0x2
    unsigned short inactive_timeout; // offset 0x6, size 0x2
    unsigned short gameplay_timeout; // offset 0x8, size 0x2
    enum sceDemoEndReason exit_code; // offset 0xC, size 0x4
    unsigned int FMV_playing : 1; // offset 0x10, size 0x4
    unsigned int more_padding : 31; // offset 0x10, size 0x4
    float bail_timer; // offset 0x14, size 0x4
    float inactive_timer; // offset 0x18, size 0x4
    float gameplay_timer; // offset 0x1C, size 0x4
    char subdir[16]; // offset 0x20, size 0x10
    unsigned short quit; // offset 0x30, size 0x2
    unsigned short vmode; // offset 0x32, size 0x2
};
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x14
class tag_entry {
    // Members
public:
    class substr name; // offset 0x0, size 0x8
    char op; // offset 0x8, size 0x1
    class substr * args; // offset 0xC, size 0x4
    unsigned int args_size; // offset 0x10, size 0x4
};
// total size: 0x18
class RpTie {
    // Members
public:
    class RwLLLink lAtomicInWorldSector; // offset 0x0, size 0x8
    class RpAtomic * apAtom; // offset 0x8, size 0x4
    class RwLLLink lWorldSectorInAtomic; // offset 0xC, size 0x8
    class RpWorldSector * worldSector; // offset 0x14, size 0x4
};
// total size: 0x10
class xJSPNodeTreeBranch {
    // Members
public:
    unsigned short leftNode; // offset 0x0, size 0x2
    unsigned short rightNode; // offset 0x2, size 0x2
    unsigned char leftType; // offset 0x4, size 0x1
    unsigned char rightType; // offset 0x5, size 0x1
    unsigned short coord; // offset 0x6, size 0x2
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
};
// total size: 0x20
class rxHeapBlockHeader {
    // Members
public:
    class rxHeapBlockHeader * prev; // offset 0x0, size 0x4
    class rxHeapBlockHeader * next; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    class rxHeapFreeBlock * freeEntry; // offset 0xC, size 0x4
    unsigned int pad[4]; // offset 0x10, size 0x10
};
// total size: 0x74
class xtextbox {
    // Members
public:
    class xfont font; // offset 0x0, size 0x30
    class basic_rect bounds; // offset 0x30, size 0x10
    unsigned int flags; // offset 0x40, size 0x4
    float line_space; // offset 0x44, size 0x4
    float tab_stop; // offset 0x48, size 0x4
    float left_indent; // offset 0x4C, size 0x4
    float right_indent; // offset 0x50, size 0x4
    class callback * cb; // offset 0x54, size 0x4
    void * context; // offset 0x58, size 0x4
    char * * texts; // offset 0x5C, size 0x4
    unsigned int * text_sizes; // offset 0x60, size 0x4
    unsigned int texts_size; // offset 0x64, size 0x4
    class substr text; // offset 0x68, size 0x8
    unsigned int text_hash; // offset 0x70, size 0x4
};
// total size: 0x8
class xAnimTransitionList {
    // Members
public:
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
};
// total size: 0x14
class RxIoSpec {
    // Members
public:
    unsigned int numClustersOfInterest; // offset 0x0, size 0x4
    class RxClusterRef * clustersOfInterest; // offset 0x4, size 0x4
    enum RxClusterValidityReq * inputRequirements; // offset 0x8, size 0x4
    unsigned int numOutputs; // offset 0xC, size 0x4
    class RxOutputSpec * outputs; // offset 0x10, size 0x4
};
// total size: 0x40
class xMat4x3 : public xMat3x3 {
    // Members
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x8504
class layout {
    // Members
public:
    class xtextbox tb; // offset 0x0, size 0x74
    class jot _jots[512]; // offset 0x74, size 0x7000
    unsigned int _jots_size; // offset 0x7074, size 0x4
    class jot_line _lines[128]; // offset 0x7078, size 0x1000
    unsigned int _lines_size; // offset 0x8078, size 0x4
    unsigned char context_buffer[1024]; // offset 0x807C, size 0x400
    unsigned int context_buffer_size; // offset 0x847C, size 0x4
    unsigned short dynamics[64]; // offset 0x8480, size 0x80
    unsigned int dynamics_size; // offset 0x8500, size 0x4
};
// total size: 0x20
class xJSPNodeTreeLeaf {
    // Members
public:
    signed int nodeIndex; // offset 0x0, size 0x4
    signed int leafCount; // offset 0x4, size 0x4
    class RwBBox box; // offset 0x8, size 0x18
};
// total size: 0x18
class RwBBox {
    // Members
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
};
// total size: 0x14
class tag_type {
    // Members
public:
    class substr name; // offset 0x0, size 0x8
    void (* parse_tag)(class jot &, class xtextbox &, class xtextbox &, class split_tag &); // offset 0x8, size 0x4
    void (* reset_tag)(class jot &, class xtextbox &, class xtextbox &, class split_tag &); // offset 0xC, size 0x4
    void * context; // offset 0x10, size 0x4
};
// total size: 0x2C
class xAnimTransition {
    // Members
public:
    class xAnimTransition * Next; // offset 0x0, size 0x4
    class xAnimState * Dest; // offset 0x4, size 0x4
    unsigned int (* Conditional)(class xAnimTransition *, class xAnimSingle *, void *); // offset 0x8, size 0x4
    unsigned int (* Callback)(class xAnimTransition *, class xAnimSingle *, void *); // offset 0xC, size 0x4
    unsigned int Flags; // offset 0x10, size 0x4
    unsigned int UserFlags; // offset 0x14, size 0x4
    float SrcTime; // offset 0x18, size 0x4
    float DestTime; // offset 0x1C, size 0x4
    unsigned short Priority; // offset 0x20, size 0x2
    unsigned short QueuePriority; // offset 0x22, size 0x2
    float BlendRecip; // offset 0x24, size 0x4
    unsigned short * BlendOffset; // offset 0x28, size 0x4
};
// total size: 0x70
class RpWorld {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    unsigned int flags; // offset 0x8, size 0x4
    enum RpWorldRenderOrder renderOrder; // offset 0xC, size 0x4
    class RpMaterialList matList; // offset 0x10, size 0xC
    class RpSector * rootSector; // offset 0x1C, size 0x4
    signed int numTexCoordSets; // offset 0x20, size 0x4
    signed int numClumpsInWorld; // offset 0x24, size 0x4
    class RwLLLink * currentClumpLink; // offset 0x28, size 0x4
    class RwLinkList clumpList; // offset 0x2C, size 0x8
    class RwLinkList lightList; // offset 0x34, size 0x8
    class RwLinkList directionalLightList; // offset 0x3C, size 0x8
    class RwV3d worldOrigin; // offset 0x44, size 0xC
    class RwBBox boundingBox; // offset 0x50, size 0x18
    class RpWorldSector * (* renderCallBack)(class RpWorldSector *); // offset 0x68, size 0x4
    class RxPipeline * pipeline; // offset 0x6C, size 0x4
};
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
// total size: 0x5FC
class xEntCollis {
    // Members
public:
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
    class xCollis colls[18]; // offset 0xC, size 0x5E8
    void (* post)(class xEnt *, class xScene *, float, class xEntCollis *); // offset 0x5F4, size 0x4
    unsigned int (* depenq)(class xEnt *, class xEnt *, class xScene *, float, class xCollis *); // offset 0x5F8, size 0x4
};
// total size: 0x14
class _zEnv : public xBase {
    // Members
public:
    class xEnvAsset * easset; // offset 0x10, size 0x4
};
// total size: 0x40
class RwSky2DVertex {
    // Members
public:
    class RwSky2DVertexAlignmentOverlay u; // offset 0x0, size 0x40
};
// total size: 0xC
class tri_data {
    // Members
public:
    unsigned int index; // offset 0x0, size 0x4
    float r; // offset 0x4, size 0x4
    float d; // offset 0x8, size 0x4
};
// total size: 0x20
class xLinkAsset {
    // Members
public:
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
// total size: 0x30
class RxPacket {
    // Members
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short numClusters; // offset 0x2, size 0x2
    class RxPipeline * pipeline; // offset 0x4, size 0x4
    unsigned int * inputToClusterSlot; // offset 0x8, size 0x4
    unsigned int * slotsContinue; // offset 0xC, size 0x4
    class RxPipelineCluster * * slotClusterRefs; // offset 0x10, size 0x4
    class RxCluster clusters[1]; // offset 0x14, size 0x1C
};
// total size: 0x720
class model_pool {
    // Members
public:
    class RwMatrixTag mat[8]; // offset 0x0, size 0x200
    class xModelInstance model[8]; // offset 0x200, size 0x520
};
// total size: 0x50
class iEnv {
    // Members
public:
    class RpWorld * world; // offset 0x0, size 0x4
    class RpWorld * collision; // offset 0x4, size 0x4
    class RpWorld * fx; // offset 0x8, size 0x4
    class RpWorld * camera; // offset 0xC, size 0x4
    signed int jsp_count; // offset 0x10, size 0x4
    unsigned int * jsp_aid; // offset 0x14, size 0x4
    class xJSPHeader * * jsp_list; // offset 0x18, size 0x4
    class xBox * jsp_bound; // offset 0x1C, size 0x4
    signed int * jsp_visibilityCount; // offset 0x20, size 0x4
    signed int jspMatOrderCount; // offset 0x24, size 0x4
    class iEnvMatOrder * jspMatOrderList; // offset 0x28, size 0x4
    class RpLight * light[2]; // offset 0x2C, size 0x8
    class RwFrame * light_frame[2]; // offset 0x34, size 0x8
    signed int memlvl; // offset 0x3C, size 0x4
    unsigned short numOpaque; // offset 0x40, size 0x2
    unsigned short numTransparent; // offset 0x42, size 0x2
};
// total size: 0xC
class model_cache_entry {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int order; // offset 0x4, size 0x4
    class xModelInstance * model; // offset 0x8, size 0x4
};
// total size: 0x40
class RwMatrixTag {
    // Members
public:
    class RwV3d right; // offset 0x0, size 0xC
    unsigned int flags; // offset 0xC, size 0x4
    class RwV3d up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class RwV3d at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
    class RwV3d pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x10
class xUpdateCullEnt {
    // Members
public:
    unsigned short index; // offset 0x0, size 0x2
    signed short groupIndex; // offset 0x2, size 0x2
    unsigned int (* cb)(void *, void *); // offset 0x4, size 0x4
    void * cbdata; // offset 0x8, size 0x4
    class xUpdateCullEnt * nextInGroup; // offset 0xC, size 0x4
};
// total size: 0x30
class xShadowSimplePoly {
    // Members
public:
    class xVec3 vert[3]; // offset 0x0, size 0x24
    class xVec3 norm; // offset 0x24, size 0xC
};
// total size: 0xC
class RxOutputSpec {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
};
// total size: 0x28
class tex_tag_context {
    // Members
public:
    class RwRaster * raster; // offset 0x0, size 0x4
    float rot; // offset 0x4, size 0x4
    class basic_rect src; // offset 0x8, size 0x10
    class basic_rect dst; // offset 0x18, size 0x10
};
// total size: 0x5C
class xEnvAsset : public xBaseAsset {
    // Members
public:
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
    class xVec3 minBounds; // offset 0x44, size 0xC
    class xVec3 maxBounds; // offset 0x50, size 0xC
};
// total size: 0x20
class xGroup : public xBase {
    // Members
public:
    class xGroupAsset * asset; // offset 0x10, size 0x4
    class xBase * * item; // offset 0x14, size 0x4
    unsigned int last_index; // offset 0x18, size 0x4
    signed int flg_group; // offset 0x1C, size 0x4
};
// total size: 0x58
class RwTexture {
    // Members
public:
    class RwRaster * raster; // offset 0x0, size 0x4
    class RwTexDictionary * dict; // offset 0x4, size 0x4
    class RwLLLink lInDictionary; // offset 0x8, size 0x8
    char name[32]; // offset 0x10, size 0x20
    char mask[32]; // offset 0x30, size 0x20
    unsigned int filterAddressing; // offset 0x50, size 0x4
    signed int refCount; // offset 0x54, size 0x4
};
// total size: 0xC
class xAnimPhysicsData {
    // Members
public:
    class xVec3 * tranTable; // offset 0x0, size 0x4
    float * yawTable; // offset 0x4, size 0x4
    signed int tranCount; // offset 0x8, size 0x4
};
// total size: 0x560
class xGlobals {
    // Members
public:
    class xCamGroup * cam; // offset 0x0, size 0x4
    class xCamScreen * screen; // offset 0x4, size 0x4
    class xVec4 frustplane[12]; // offset 0x10, size 0xC0
    union { // inferred
        struct { // inferred
            class _tagxPad * pad0; // offset 0xD0, size 0x4
            class _tagxPad * pad1; // offset 0xD4, size 0x4
            class _tagxPad * pad2; // offset 0xD8, size 0x4
            class _tagxPad * pad3; // offset 0xDC, size 0x4
        };
        class _tagxPad * pad[4]; // offset 0xD0, size 0x10
    };
    signed int profile; // offset 0xE0, size 0x4
    char profFunc[6][128]; // offset 0xE4, size 0x300
    class xUpdateCullMgr * updateMgr; // offset 0x3E4, size 0x4
    signed int sceneFirst; // offset 0x3E8, size 0x4
    char sceneStart[32]; // offset 0x3EC, size 0x20
    class RpWorld * currWorld; // offset 0x40C, size 0x4
    class iFogParams fog; // offset 0x410, size 0x1C
    class iFogParams fogA; // offset 0x42C, size 0x1C
    class iFogParams fogB; // offset 0x448, size 0x1C
    signed long fog_t0; // offset 0x468, size 0x4
    signed long fog_t1; // offset 0x470, size 0x4
    signed int option_vibration; // offset 0x478, size 0x4
    signed int option_subtitles; // offset 0x47C, size 0x4
    unsigned int slowdown; // offset 0x480, size 0x4
    float update_dt; // offset 0x484, size 0x4
    signed short ForceCinematic; // offset 0x488, size 0x2
    signed int useHIPHOP; // offset 0x48C, size 0x4
    unsigned char NoMusic; // offset 0x490, size 0x1
    unsigned char NoCutscenes; // offset 0x491, size 0x1
    unsigned char NoPadCheck; // offset 0x492, size 0x1
    char currentActivePad; // offset 0x493, size 0x1
    unsigned char firstStartPressed; // offset 0x494, size 0x1
    unsigned char fromLauncher; // offset 0x495, size 0x1
    unsigned char FlashWIP; // offset 0x496, size 0x1
    unsigned char inLoadingScreen; // offset 0x497, size 0x1
    unsigned char LoadingScene; // offset 0x498, size 0x1
    unsigned char InitializingLoadingScreen; // offset 0x499, size 0x1
    unsigned char ForceMono; // offset 0x49A, size 0x1
    unsigned int minVSyncCnt; // offset 0x49C, size 0x4
    unsigned char dontShowPadMessageDuringLoadingOrCutScene; // offset 0x4A0, size 0x1
    unsigned char autoSaveFeature; // offset 0x4A1, size 0x1
    signed int asyncLoadingScreen; // offset 0x4A4, size 0x4
    signed int asyncLoadingFlags; // offset 0x4A8, size 0x4
    char fromLauncherUser[32]; // offset 0x4AC, size 0x20
    class zPlayer * ___player_ent_dont_use_directly; // offset 0x4CC, size 0x4
    class zScene * sceneCur; // offset 0x4D0, size 0x4
    class zScene * scenePreload; // offset 0x4D4, size 0x4
    class PS2DemoGlobals * PS2demo; // offset 0x4D8, size 0x4
    char watermark[127]; // offset 0x4DC, size 0x7F
    unsigned char watermarkAlpha; // offset 0x55B, size 0x1
    float watermarkSize; // offset 0x55C, size 0x4
};
// total size: 0xC
class xVec3 {
    // Members
public:
    union { // inferred
        class RwV3d m_RwV3d; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
        float a[3]; // offset 0x0, size 0xC
    };
};
// total size: 0x70
class xEnv {
    // Members
public:
    class iEnv * geom; // offset 0x0, size 0x4
    class iEnv ienv; // offset 0x10, size 0x50
    class xLightKit * lightKit; // offset 0x60, size 0x4
};
// total size: 0xC
class xGroupAsset : public xBaseAsset {
    // Members
public:
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
};
// total size: 0xC
class xJSPMiniLightTie {
    // Members
public:
    class RwLLLink lightInWorldSector; // offset 0x0, size 0x8
    class RpLight * light; // offset 0x8, size 0x4
};
// total size: 0x4
class xColor_tag {
    // Members
public:
    union { // inferred
        struct { // inferred
            unsigned char r; // offset 0x0, size 0x1
            unsigned char g; // offset 0x1, size 0x1
            unsigned char b; // offset 0x2, size 0x1
            unsigned char a; // offset 0x3, size 0x1
        };
        class RwRGBA rgba; // offset 0x0, size 0x4
    };
};
// total size: 0x8
class xAnimMultiFileEntry {
    // Members
public:
    unsigned int ID; // offset 0x0, size 0x4
    class xAnimFile * File; // offset 0x4, size 0x4
};
// total size: 0x10
class xTimerAsset : public xBaseAsset {
    // Members
public:
    float seconds; // offset 0x8, size 0x4
    float randomRange; // offset 0xC, size 0x4
};
// total size: 0x88
class RpWorldSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
    class RpTriangle * triangles; // offset 0x4, size 0x4
    class RwV3d * vertices; // offset 0x8, size 0x4
    class RpVertexNormal * normals; // offset 0xC, size 0x4
    class RwTexCoords * texCoords[8]; // offset 0x10, size 0x20
    class RwRGBA * preLitLum; // offset 0x30, size 0x4
    class RwResEntry * repEntry; // offset 0x34, size 0x4
    class RwLinkList collAtomicsInWorldSector; // offset 0x38, size 0x8
    class RwLinkList lightsInWorldSector; // offset 0x40, size 0x8
    class RwBBox boundingBox; // offset 0x48, size 0x18
    class RwBBox tightBoundingBox; // offset 0x60, size 0x18
    class RpMeshHeader * mesh; // offset 0x78, size 0x4
    class RxPipeline * pipeline; // offset 0x7C, size 0x4
    unsigned short matListWindowBase; // offset 0x80, size 0x2
    unsigned short numVertices; // offset 0x82, size 0x2
    unsigned short numTriangles; // offset 0x84, size 0x2
    unsigned short pad; // offset 0x86, size 0x2
};
// total size: 0x10
class RwSphere {
    // Members
public:
    class RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
// total size: 0x1FC
class font_asset {
    // Members
public:
    unsigned int tex_id; // offset 0x0, size 0x4
    unsigned short u; // offset 0x4, size 0x2
    unsigned short v; // offset 0x6, size 0x2
    unsigned char du; // offset 0x8, size 0x1
    unsigned char dv; // offset 0x9, size 0x1
    unsigned char line_size; // offset 0xA, size 0x1
    unsigned char baseline; // offset 0xB, size 0x1
    // total size: 0x4
    class /* @class */ {
        // Members
    public:
        signed short x; // offset 0x0, size 0x2
        signed short y; // offset 0x2, size 0x2
    } space; // offset 0xC, size 0x4
    unsigned int flags; // offset 0x10, size 0x4
    float pixel_shear; // offset 0x14, size 0x4
    unsigned char char_set[161]; // offset 0x18, size 0xA1
    // total size: 0x2
    class /* @class */ {
        // Members
    public:
        unsigned char offset; // offset 0x0, size 0x1
        unsigned char size; // offset 0x1, size 0x1
    } char_pos[160]; // offset 0xB9, size 0x140
};
// total size: 0x10
class basic_rect {
    // Members
public:
    signed int x; // offset 0x0, size 0x4
    signed int y; // offset 0x4, size 0x4
    signed int w; // offset 0x8, size 0x4
    signed int h; // offset 0xC, size 0x4
};
// total size: 0x14
class xAnimEffect {
    // Members
public:
    class xAnimEffect * Next; // offset 0x0, size 0x4
    unsigned short Flags; // offset 0x4, size 0x2
    unsigned short Probability; // offset 0x6, size 0x2
    float StartTime; // offset 0x8, size 0x4
    float EndTime; // offset 0xC, size 0x4
    unsigned int (* Callback)(unsigned int, class xAnimActiveEffect *, class xAnimSingle *, void *); // offset 0x10, size 0x4
};
// total size: 0x1C
class RxCluster {
    // Members
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short stride; // offset 0x2, size 0x2
    void * data; // offset 0x4, size 0x4
    void * currentData; // offset 0x8, size 0x4
    unsigned int numAlloced; // offset 0xC, size 0x4
    unsigned int numUsed; // offset 0x10, size 0x4
    class RxPipelineCluster * clusterRef; // offset 0x14, size 0x4
    unsigned int attributes; // offset 0x18, size 0x4
};
// total size: 0xC
class rxHeapSuperBlockDescriptor {
    // Members
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
// total size: 0x0
class xFFX {};
// total size: 0x40
class RpLight {
    // Members
public:
    class RwObjectHasFrame object; // offset 0x0, size 0x14
    float radius; // offset 0x14, size 0x4
    class RwRGBAReal color; // offset 0x18, size 0x10
    float minusCosAngle; // offset 0x28, size 0x4
    class RwLinkList WorldSectorsInLight; // offset 0x2C, size 0x8
    class RwLLLink inWorld; // offset 0x34, size 0x8
    unsigned short lightFrame; // offset 0x3C, size 0x2
    unsigned short pad; // offset 0x3E, size 0x2
};
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x4
class RpSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
};
// total size: 0xC
class callback {
    // Members
public:
    void (* render)(class jot &, class xtextbox &, float, float); // offset 0x0, size 0x4
    void (* layout_update)(class jot &, class xtextbox &, class xtextbox &); // offset 0x4, size 0x4
    void (* render_update)(class jot &, class xtextbox &, class xtextbox &); // offset 0x8, size 0x4
};
// total size: 0x8
class xAnimActiveEffect {
    // Members
public:
    class xAnimEffect * Effect; // offset 0x0, size 0x4
    union { // inferred
        unsigned int Handle; // offset 0x4, size 0x4
        enum iSndHandle SndHandle; // offset 0x4, size 0x4
    };
};
// total size: 0x4
class /* @class */ {
    // Members
public:
    class xVec3 * verts; // offset 0x0, size 0x4
};
// total size: 0x2C
class xJSPHeader {
    // Members
public:
    char idtag[4]; // offset 0x0, size 0x4
    unsigned int version; // offset 0x4, size 0x4
    unsigned int jspNodeCount; // offset 0x8, size 0x4
    class RpClump * clump; // offset 0xC, size 0x4
    class xClumpCollBSPTree * colltree; // offset 0x10, size 0x4
    class xJSPNodeInfo * jspNodeList; // offset 0x14, size 0x4
    unsigned int stripVecCount; // offset 0x18, size 0x4
    class RwV3d * stripVecList; // offset 0x1C, size 0x4
    unsigned short vertDataFlags; // offset 0x20, size 0x2
    unsigned short vertDataStride; // offset 0x22, size 0x2
    class xJSPNodeTree * nodetree; // offset 0x24, size 0x4
    class xJSPNodeLight * nodelight; // offset 0x28, size 0x4
};
// total size: 0x30
class xfont {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    float width; // offset 0x4, size 0x4
    float height; // offset 0x8, size 0x4
    float space; // offset 0xC, size 0x4
    class xColor_tag color; // offset 0x10, size 0x4
    class xColor_tag shadowColor; // offset 0x14, size 0x4
    float shadowOffsetX; // offset 0x18, size 0x4
    float shadowOffsetY; // offset 0x1C, size 0x4
    class basic_rect clip; // offset 0x20, size 0x10
};
// total size: 0xC
class /* @class */ {
    // Members
public:
    float t; // offset 0x0, size 0x4
    float u; // offset 0x4, size 0x4
    float v; // offset 0x8, size 0x4
};
// total size: 0xA4
class xShadowSimpleCache {
    // Members
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned char alpha; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
    unsigned int collPriority; // offset 0x4, size 0x4
    class xVec3 pos; // offset 0x8, size 0xC
    class xVec3 at; // offset 0x14, size 0xC
    float tol_movement; // offset 0x20, size 0x4
    float radiusOptional; // offset 0x24, size 0x4
    class xEnt * castOnEnt; // offset 0x28, size 0x4
    class xShadowSimplePoly poly; // offset 0x2C, size 0x30
    float envHeight; // offset 0x5C, size 0x4
    float shadowHeight; // offset 0x60, size 0x4
    union { // inferred
        unsigned int raster; // offset 0x64, size 0x4
        class RwRaster * ptr_raster; // offset 0x64, size 0x4
    };
    float dydx; // offset 0x68, size 0x4
    float dydz; // offset 0x6C, size 0x4
    class xVec3 corner[4]; // offset 0x70, size 0x30
    void * collSkipsItem; // offset 0xA0, size 0x4
};
// total size: 0x14
class _zPortal : public xBase {
    // Members
public:
    class xPortalAsset * passet; // offset 0x10, size 0x4
};
// total size: 0x4
class xClumpCollBSPVertInfo {
    // Members
public:
    unsigned short atomIndex; // offset 0x0, size 0x2
    unsigned short meshVertIndex; // offset 0x2, size 0x2
};
// total size: 0x20
class xAnimPlay {
    // Members
public:
    class xAnimPlay * Next; // offset 0x0, size 0x4
    unsigned short NumSingle; // offset 0x4, size 0x2
    unsigned short BoneCount; // offset 0x6, size 0x2
    class xAnimSingle * Single; // offset 0x8, size 0x4
    void * Object; // offset 0xC, size 0x4
    class xAnimTable * Table; // offset 0x10, size 0x4
    class xMemPool * Pool; // offset 0x14, size 0x4
    class xModelInstance * ModelInst; // offset 0x18, size 0x4
    void (* BeforeAnimMatrices)(class xAnimPlay *, class xQuat *, class xVec3 *, signed int); // offset 0x1C, size 0x4
};
// total size: 0xF0
class xEntFrame {
    // Members
public:
    class xMat4x3 mat; // offset 0x0, size 0x40
    class xMat4x3 oldmat; // offset 0x40, size 0x40
    class xVec3 oldvel; // offset 0x80, size 0xC
    class xRot oldrot; // offset 0x8C, size 0x10
    class xRot drot; // offset 0x9C, size 0x10
    class xRot rot; // offset 0xAC, size 0x10
    class xVec3 dvel; // offset 0xBC, size 0xC
    class xVec3 vel; // offset 0xC8, size 0xC
    unsigned int mode; // offset 0xD4, size 0x4
    class xVec3 dpos; // offset 0xD8, size 0xC
};
// total size: 0x50
class xAnimSingle {
    // Members
public:
    unsigned int SingleFlags; // offset 0x0, size 0x4
    class xAnimState * State; // offset 0x4, size 0x4
    float Time; // offset 0x8, size 0x4
    float CurrentSpeed; // offset 0xC, size 0x4
    float BilinearLerp[2]; // offset 0x10, size 0x8
    class xAnimEffect * Effect; // offset 0x18, size 0x4
    unsigned int ActiveCount; // offset 0x1C, size 0x4
    float LastTime; // offset 0x20, size 0x4
    class xAnimActiveEffect * ActiveList; // offset 0x24, size 0x4
    class xAnimPlay * Play; // offset 0x28, size 0x4
    class xAnimTransition * Sync; // offset 0x2C, size 0x4
    class xAnimTransition * Tran; // offset 0x30, size 0x4
    class xAnimSingle * Blend; // offset 0x34, size 0x4
    float BlendFactor; // offset 0x38, size 0x4
    class xVec3 PhysDisp; // offset 0x3C, size 0xC
    float YawDisp; // offset 0x48, size 0x4
    unsigned int pad[1]; // offset 0x4C, size 0x4
};
// total size: 0x10
class xClumpCollBSPTree {
    // Members
public:
    signed int numBranchNodes; // offset 0x0, size 0x4
    class xClumpCollBSPBranchNode * branchNodes; // offset 0x4, size 0x4
    signed int numTriangles; // offset 0x8, size 0x4
    class xClumpCollBSPTriangle * triangles; // offset 0xC, size 0x4
};
// total size: 0x8
class RxPipelineCluster {
    // Members
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
// total size: 0x1C
class iFogParams {
    // Members
public:
    enum RwFogType type; // offset 0x0, size 0x4
    float start; // offset 0x4, size 0x4
    float stop; // offset 0x8, size 0x4
    float density; // offset 0xC, size 0x4
    class RwRGBA fogcolor; // offset 0x10, size 0x4
    class RwRGBA bgcolor; // offset 0x14, size 0x4
    unsigned char * table; // offset 0x18, size 0x4
};
// total size: 0xC
class xUpdateCullGroup {
    // Members
public:
    unsigned int active; // offset 0x0, size 0x4
    unsigned short startIndex; // offset 0x4, size 0x2
    unsigned short endIndex; // offset 0x6, size 0x2
    class xGroup * groupObject; // offset 0x8, size 0x4
};
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x168
class xJSPNodeLight {
    // Members
public:
    class RpAtomic * atomic; // offset 0x0, size 0x4
    signed int lightCount; // offset 0x4, size 0x4
    class RpTie dummyTie; // offset 0x8, size 0x18
    class RpWorldSector dummySector; // offset 0x20, size 0x88
    class xJSPMiniLightTie dummyLightTie[16]; // offset 0xA8, size 0xC0
};
// total size: 0x60
class RpGeometry {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    unsigned int flags; // offset 0x8, size 0x4
    unsigned short lockedSinceLastInst; // offset 0xC, size 0x2
    signed short refCount; // offset 0xE, size 0x2
    signed int numTriangles; // offset 0x10, size 0x4
    signed int numVertices; // offset 0x14, size 0x4
    signed int numMorphTargets; // offset 0x18, size 0x4
    signed int numTexCoordSets; // offset 0x1C, size 0x4
    class RpMaterialList matList; // offset 0x20, size 0xC
    class RpTriangle * triangles; // offset 0x2C, size 0x4
    class RwRGBA * preLitLum; // offset 0x30, size 0x4
    class RwTexCoords * texCoords[8]; // offset 0x34, size 0x20
    class RpMeshHeader * mesh; // offset 0x54, size 0x4
    class RwResEntry * repEntry; // offset 0x58, size 0x4
    class RpMorphTarget * morphTarget; // offset 0x5C, size 0x4
};
// total size: 0x4
class xAnimMultiFileBase {
    // Members
public:
    unsigned int Count; // offset 0x0, size 0x4
};
// total size: 0xC
class RxClusterRef {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
// total size: 0x8
class xVec2 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x10
class iEnvMatOrder {
    // Members
public:
    unsigned short jspIndex; // offset 0x0, size 0x2
    unsigned short nodeIndex; // offset 0x2, size 0x2
    signed int matGroup; // offset 0x4, size 0x4
    class RpAtomic * atomic; // offset 0x8, size 0x4
    class xJSPNodeInfo * nodeInfo; // offset 0xC, size 0x4
};
// total size: 0x10
class xClumpCollBSPBranchNode {
    // Members
public:
    unsigned int leftInfo; // offset 0x0, size 0x4
    unsigned int rightInfo; // offset 0x4, size 0x4
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
};
// total size: 0x8
class xClumpCollBSPTriangle {
    // Members
public:
    // total size: 0x4
    class /* @class */ {
        // Members
    public:
        union { // inferred
            class xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
            unsigned int rawIdx; // offset 0x0, size 0x4
            class RwV3d * p; // offset 0x0, size 0x4
        };
    } v; // offset 0x0, size 0x4
    unsigned char flags; // offset 0x4, size 0x1
    unsigned char detailed_info_cache_index; // offset 0x5, size 0x1
    unsigned short matIndex; // offset 0x6, size 0x2
};
// total size: 0xB0
class RwFrame {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink inDirtyListLink; // offset 0x8, size 0x8
    class RwMatrixTag modelling; // offset 0x10, size 0x40
    class RwMatrixTag ltm; // offset 0x50, size 0x40
    class RwLinkList objectList; // offset 0x90, size 0x8
    class RwFrame * child; // offset 0x98, size 0x4
    class RwFrame * next; // offset 0x9C, size 0x4
    class RwFrame * root; // offset 0xA0, size 0x4
};
// total size: 0xC
class RpMaterialList {
    // Members
public:
    class RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
};
// total size: 0x18
class _xCounter : public xBase {
    // Members
public:
    class xCounterAsset * asset; // offset 0x10, size 0x4
    signed short count; // offset 0x14, size 0x2
    unsigned char state; // offset 0x16, size 0x1
    unsigned char pad; // offset 0x17, size 0x1
};
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_DisabledError = 1,
    ePad_Enabled = 2,
    ePad_Missing = 3,
    ePad_Total = 4,
};
// total size: 0x1C
class RwImage {
    // Members
public:
    signed int flags; // offset 0x0, size 0x4
    signed int width; // offset 0x4, size 0x4
    signed int height; // offset 0x8, size 0x4
    signed int depth; // offset 0xC, size 0x4
    signed int stride; // offset 0x10, size 0x4
    unsigned char * cpPixels; // offset 0x14, size 0x4
    class RwRGBA * palette; // offset 0x18, size 0x4
};
// total size: 0x1C
class RpMorphTarget {
    // Members
public:
    class RpGeometry * parentGeom; // offset 0x0, size 0x4
    class RwSphere boundingSphere; // offset 0x4, size 0x10
    class RwV3d * verts; // offset 0x14, size 0x4
    class RwV3d * normals; // offset 0x18, size 0x4
};
// total size: 0xC
class xCounterAsset : public xBaseAsset {
    // Members
public:
    signed short count; // offset 0x8, size 0x2
};
// total size: 0x4
class RpVertexNormal {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
    signed char z; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
};
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x4
class RwRGBA {
    // Members
public:
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// total size: 0x44
class zSceneParameters : public xDynAsset {
    // Members
public:
    unsigned int idle03ExtraCount; // offset 0x10, size 0x4
    class xAnimFile * * idle03Extras; // offset 0x14, size 0x4
    unsigned int idle04ExtraCount; // offset 0x18, size 0x4
    class xAnimFile * * idle04Extras; // offset 0x1C, size 0x4
    unsigned char bombCount; // offset 0x20, size 0x1
    unsigned char extraIdleDelay; // offset 0x21, size 0x1
    unsigned char hdrGlow; // offset 0x22, size 0x1
    unsigned char hdrDarken; // offset 0x23, size 0x1
    unsigned int uDefaultMusicHash; // offset 0x24, size 0x4
    unsigned int flags; // offset 0x28, size 0x4
    float waterTileWidth; // offset 0x2C, size 0x4
    float lodFadeDistance; // offset 0x30, size 0x4
    unsigned int pad[4]; // offset 0x34, size 0x10
};
// total size: 0x8
class xModelPipe {
    // Members
public:
    unsigned int Flags; // offset 0x0, size 0x4
    unsigned char Layer; // offset 0x4, size 0x1
    unsigned char AlphaDiscard; // offset 0x5, size 0x1
    unsigned short PipePad; // offset 0x6, size 0x2
};
// total size: 0xC
class xAnimMultiFile : public xAnimMultiFileBase {
    // Members
public:
    class xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
};
// total size: 0x2C
class xUpdateCullMgr {
    // Members
public:
    unsigned int entCount; // offset 0x0, size 0x4
    unsigned int entActive; // offset 0x4, size 0x4
    void * * ent; // offset 0x8, size 0x4
    class xUpdateCullEnt * * mgr; // offset 0xC, size 0x4
    unsigned int mgrCount; // offset 0x10, size 0x4
    unsigned int mgrCurr; // offset 0x14, size 0x4
    class xUpdateCullEnt * mgrList; // offset 0x18, size 0x4
    unsigned int grpCount; // offset 0x1C, size 0x4
    class xUpdateCullGroup * grpList; // offset 0x20, size 0x4
    void (* activateCB)(void *); // offset 0x24, size 0x4
    void (* deactivateCB)(void *); // offset 0x28, size 0x4
};
// total size: 0xC
class xModelPool {
    // Members
public:
    class xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
};
// total size: 0x2C
class model_args {
    // Members
public:
    class xModelInstance * model; // offset 0x0, size 0x4
    class xVec3 rot; // offset 0x4, size 0xC
    class basic_rect dst; // offset 0x10, size 0x10
    class xVec2 off; // offset 0x20, size 0x8
    enum /* @enum */ {
        SCALE_FONT = 0,
        SCALE_SCREEN = 1,
        SCALE_SIZE = 2,
    } scale; // offset 0x28, size 0x4
};
// total size: 0x4
class /* @class */ {
    // Members
public:
    signed short x; // offset 0x0, size 0x2
    signed short y; // offset 0x2, size 0x2
};
// total size: 0x4
class /* @class */ {
    // Members
public:
    union { // inferred
        class xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
        unsigned int rawIdx; // offset 0x0, size 0x4
        class RwV3d * p; // offset 0x0, size 0x4
    };
};
// total size: 0x2C
class xEntShadow {
    // Members
public:
    class xVec3 pos; // offset 0x0, size 0xC
    class xVec3 vec; // offset 0xC, size 0xC
    class RpAtomic * shadowModel; // offset 0x18, size 0x4
    float dst_cast; // offset 0x1C, size 0x4
    float radius[2]; // offset 0x20, size 0x8
    signed int flg_castOnOneDFF : 1; // offset 0x28, size 0x4
    signed int flg_castOnAllDFF : 1; // offset 0x28, size 0x4
    signed int flg_disableEnvCast : 1; // offset 0x28, size 0x4
    signed int flg_shadowUnused : 29; // offset 0x28, size 0x4
};
// total size: 0x24
class xBBox {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    class xBox box; // offset 0xC, size 0x18
};
// total size: 0x1C
class RpMaterial {
    // Members
public:
    class RwTexture * texture; // offset 0x0, size 0x4
    class RwRGBA color; // offset 0x4, size 0x4
    class RxPipeline * pipeline; // offset 0x8, size 0x4
    class RwSurfaceProperties surfaceProps; // offset 0xC, size 0xC
    signed short refCount; // offset 0x18, size 0x2
    signed short pad; // offset 0x1A, size 0x2
};
// total size: 0x1C
class RxNodeMethods {
    // Members
public:
    signed int (* nodeBody)(class RxPipelineNode *, class RxPipelineNodeParam *); // offset 0x0, size 0x4
    signed int (* nodeInit)(class RxNodeDefinition *); // offset 0x4, size 0x4
    void (* nodeTerm)(class RxNodeDefinition *); // offset 0x8, size 0x4
    signed int (* pipelineNodeInit)(class RxPipelineNode *); // offset 0xC, size 0x4
    void (* pipelineNodeTerm)(class RxPipelineNode *); // offset 0x10, size 0x4
    signed int (* pipelineNodeConfig)(class RxPipelineNode *, class RxPipeline *); // offset 0x14, size 0x4
    unsigned int (* configMsgHandler)(class RxPipelineNode *, unsigned int, unsigned int, void *); // offset 0x18, size 0x4
};
// total size: 0x0
class anim_coll_data {};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x18
class RwResEntry {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
    signed int size; // offset 0x8, size 0x4
    void * owner; // offset 0xC, size 0x4
    class RwResEntry * * ownerRef; // offset 0x10, size 0x4
    void (* destroyNotify)(class RwResEntry *); // offset 0x14, size 0x4
};
// total size: 0x2
class _tagPadAnalog {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
};
// total size: 0x30
class model_tag_context {
    // Members
public:
    class xModelInstance * model; // offset 0x0, size 0x4
    class xVec3 rot; // offset 0x4, size 0xC
    class basic_rect dst; // offset 0x10, size 0x10
    class xSphere o; // offset 0x20, size 0x10
};
// total size: 0x8
class /* @class */ {
    // Members
public:
    char * s; // offset 0x0, size 0x4
    char * end; // offset 0x4, size 0x4
};
// total size: 0x14
class RwObjectHasFrame {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
};
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x18
class xAnimTable {
    // Members
public:
    char * Name; // offset 0x0, size 0x4
    class xAnimTransition * TransitionList; // offset 0x4, size 0x4
    class xAnimState * StateList; // offset 0x8, size 0x4
    unsigned int AnimIndex; // offset 0xC, size 0x4
    unsigned int MorphIndex; // offset 0x10, size 0x4
    unsigned int UserFlags; // offset 0x14, size 0x4
};
// total size: 0x2C
class RpClump {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList atomicList; // offset 0x8, size 0x8
    class RwLinkList lightList; // offset 0x10, size 0x8
    class RwLinkList cameraList; // offset 0x18, size 0x8
    class RwLLLink inWorldLink; // offset 0x20, size 0x8
    class RpClump * (* callback)(class RpClump *, void *); // offset 0x28, size 0x4
};
// total size: 0x1C
class xMemPool {
    // Members
public:
    void * FreeList; // offset 0x0, size 0x4
    unsigned short NextOffset; // offset 0x4, size 0x2
    unsigned short Flags; // offset 0x6, size 0x2
    void * UsedList; // offset 0x8, size 0x4
    void (* InitCB)(class xMemPool *, void *); // offset 0xC, size 0x4
    void * Buffer; // offset 0x10, size 0x4
    unsigned short Size; // offset 0x14, size 0x2
    unsigned short NumRealloc; // offset 0x16, size 0x2
    unsigned int Total; // offset 0x18, size 0x4
};
// total size: 0x8518
class tl_cache_entry {
    // Members
public:
    unsigned int used; // offset 0x0, size 0x4
    signed long last_used; // offset 0x8, size 0x4
    class layout tl; // offset 0x10, size 0x8504
};
// total size: 0x60
class xLightKitLight {
    // Members
public:
    unsigned int type; // offset 0x0, size 0x4
    class RwRGBAReal color; // offset 0x4, size 0x10
    float matrix[16]; // offset 0x14, size 0x40
    float radius; // offset 0x54, size 0x4
    float angle; // offset 0x58, size 0x4
    class RpLight * platLight; // offset 0x5C, size 0x4
};
// total size: 0x4C
class xBound {
    // Members
public:
    class xQCData qcd; // offset 0x0, size 0x20
    unsigned char type; // offset 0x20, size 0x1
    unsigned char pad[3]; // offset 0x21, size 0x3
    union { // inferred
        class xSphere sph; // offset 0x24, size 0x10
        class xBBox box; // offset 0x24, size 0x24
        class xCylinder cyl; // offset 0x24, size 0x14
    };
    class xMat4x3 * mat; // offset 0x48, size 0x4
};
// total size: 0x34
class tex_args {
    // Members
public:
    class RwRaster * raster; // offset 0x0, size 0x4
    float rot; // offset 0x4, size 0x4
    class basic_rect src; // offset 0x8, size 0x10
    class basic_rect dst; // offset 0x18, size 0x10
    class xVec2 off; // offset 0x28, size 0x8
    enum /* @enum */ {
        SCALE_FONT = 0,
        SCALE_SCREEN = 1,
        SCALE_SIZE = 2,
        SCALE_FONT_WIDTH = 3,
        SCALE_FONT_HEIGHT = 4,
        SCALE_SCREEN_WIDTH = 5,
        SCALE_SCREEN_HEIGHT = 6,
    } scale; // offset 0x30, size 0x4
};
// total size: 0xC
class RwSurfaceProperties {
    // Members
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
// total size: 0x0
class xGrid {};
// total size: 0x8
class xBaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x28
class RxPipelineNode {
    // Members
public:
    class RxNodeDefinition * nodeDef; // offset 0x0, size 0x4
    unsigned int numOutputs; // offset 0x4, size 0x4
    unsigned int * outputs; // offset 0x8, size 0x4
    class RxPipelineCluster * * slotClusterRefs; // offset 0xC, size 0x4
    unsigned int * slotsContinue; // offset 0x10, size 0x4
    void * privateData; // offset 0x14, size 0x4
    unsigned int * inputToClusterSlot; // offset 0x18, size 0x4
    class RxPipelineNodeTopSortData * topSortData; // offset 0x1C, size 0x4
    void * initializationData; // offset 0x20, size 0x4
    unsigned int initializationDataSize; // offset 0x24, size 0x4
};
// total size: 0x10
class xQuat {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
// total size: 0x2
class /* @class */ {
    // Members
public:
    unsigned char offset; // offset 0x0, size 0x1
    unsigned char size; // offset 0x1, size 0x1
};
enum iSndHandle {
};
// total size: 0x8
class tag_entry_list {
    // Members
public:
    class tag_entry * entries; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};
// total size: 0x18
class xGridBound {
    // Members
public:
    void * data; // offset 0x0, size 0x4
    unsigned short gx; // offset 0x4, size 0x2
    unsigned short gz; // offset 0x6, size 0x2
    unsigned char oversize; // offset 0x8, size 0x1
    unsigned char deleted; // offset 0x9, size 0x1
    unsigned char gpad; // offset 0xA, size 0x1
    unsigned char pad; // offset 0xB, size 0x1
    class xGrid * grid; // offset 0xC, size 0x4
    class xGridBound * * head; // offset 0x10, size 0x4
    class xGridBound * next; // offset 0x14, size 0x4
};
// total size: 0x18
class xPortalAsset : public xBaseAsset {
    // Members
public:
    unsigned int assetCameraID; // offset 0x8, size 0x4
    unsigned int assetMarkerID; // offset 0xC, size 0x4
    float ang; // offset 0x10, size 0x4
    unsigned int sceneID; // offset 0x14, size 0x4
};
// total size: 0x20
class /* @class */ {
    // Members
public:
    signed int fogenable; // offset 0x0, size 0x4
    signed int vertexalphaenable; // offset 0x4, size 0x4
    signed int zwriteenable; // offset 0x8, size 0x4
    signed int ztestenable; // offset 0xC, size 0x4
    unsigned int srcblend; // offset 0x10, size 0x4
    unsigned int destblend; // offset 0x14, size 0x4
    unsigned int shademode; // offset 0x18, size 0x4
    enum RwTextureFilterMode filter; // offset 0x1C, size 0x4
};
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x0
class xCamGroup {};
enum RpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x10
class RpMeshHeader {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned short numMeshes; // offset 0x4, size 0x2
    unsigned short serialNum; // offset 0x6, size 0x2
    unsigned int totalIndicesInMesh; // offset 0x8, size 0x4
    unsigned int firstMeshOffset; // offset 0xC, size 0x4
};
// total size: 0x20
class xQCData {
    // Members
public:
    signed char xmin; // offset 0x0, size 0x1
    signed char ymin; // offset 0x1, size 0x1
    signed char zmin; // offset 0x2, size 0x1
    signed char zmin_dup; // offset 0x3, size 0x1
    signed char xmax; // offset 0x4, size 0x1
    signed char ymax; // offset 0x5, size 0x1
    signed char zmax; // offset 0x6, size 0x1
    signed char zmax_dup; // offset 0x7, size 0x1
    class xVec3 min; // offset 0x8, size 0xC
    class xVec3 max; // offset 0x14, size 0xC
};
// total size: 0x4
class _tagiPad {
    // Members
public:
    signed int port; // offset 0x0, size 0x4
};
// total size: 0x34
class RxPipeline {
    // Members
public:
    signed int locked; // offset 0x0, size 0x4
    unsigned int numNodes; // offset 0x4, size 0x4
    class RxPipelineNode * nodes; // offset 0x8, size 0x4
    unsigned int packetNumClusterSlots; // offset 0xC, size 0x4
    enum rxEmbeddedPacketState embeddedPacketState; // offset 0x10, size 0x4
    class RxPacket * embeddedPacket; // offset 0x14, size 0x4
    unsigned int numInputRequirements; // offset 0x18, size 0x4
    class RxPipelineRequiresCluster * inputRequirements; // offset 0x1C, size 0x4
    void * superBlock; // offset 0x20, size 0x4
    unsigned int superBlockSize; // offset 0x24, size 0x4
    unsigned int entryPoint; // offset 0x28, size 0x4
    unsigned int pluginId; // offset 0x2C, size 0x4
    unsigned int pluginData; // offset 0x30, size 0x4
};
// total size: 0x50
class xEntAsset : public xBaseAsset {
    // Members
public:
    unsigned char flags; // offset 0x8, size 0x1
    unsigned char subtype; // offset 0x9, size 0x1
    unsigned char pflags; // offset 0xA, size 0x1
    unsigned char moreFlags; // offset 0xB, size 0x1
    unsigned int surfaceID; // offset 0xC, size 0x4
    class xVec3 ang; // offset 0x10, size 0xC
    class xVec3 pos; // offset 0x1C, size 0xC
    class xVec3 scale; // offset 0x28, size 0xC
    float redMult; // offset 0x34, size 0x4
    float greenMult; // offset 0x38, size 0x4
    float blueMult; // offset 0x3C, size 0x4
    float seeThru; // offset 0x40, size 0x4
    float seeThruSpeed; // offset 0x44, size 0x4
    unsigned int modelInfoID; // offset 0x48, size 0x4
    unsigned int animListID; // offset 0x4C, size 0x4
};
// total size: 0xC
class RxPipelineNodeTopSortData {
    // Members
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class rxReq * req; // offset 0x8, size 0x4
};
// total size: 0x0
class xCamScreen {};
enum sceDemoEndReason {
    SCE_DEMO_ENDREASON_ATTRACT_INTERRUPTED = 0,
    SCE_DEMO_ENDREASON_ATTRACT_COMPLETE = 1,
    SCE_DEMO_ENDREASON_PLAYABLE_INACTIVITY_TIMEOUT = 2,
    SCE_DEMO_ENDREASON_PLAYABLE_GAMEPLAY_TIMEOUT = 3,
    SCE_DEMO_ENDREASON_PLAYABLE_COMPLETE = 4,
    SCE_DEMO_ENDREASON_PLAYABLE_QUIT = 5,
    SCE_DEMO_ENDREASON_NETCONFIG_REQUEST = 6,
    SCE_DEMO_ENDREASON_NETCONFIG_COMPLETE = 7,
};
// total size: 0x0
class zPlayer {};
// total size: 0x10
class xVec4 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
// total size: 0x8
class RxPipelineNodeParam {
    // Members
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
};
// total size: 0x40
class RwSky2DVertexAlignmentOverlay {
    // Members
public:
    union { // inferred
        class RwSky2DVertexFields els; // offset 0x0, size 0x40
        __int128 qWords[4]; // offset 0x0, size 0x40
    };
};
// total size: 0x18
class RwTexDictionary {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0x18
class xModelBucket {
    // Members
public:
    class RpAtomic * Data; // offset 0x0, size 0x4
    class RpAtomic * OriginalData; // offset 0x4, size 0x4
    union { // inferred
        class xModelInstance * List; // offset 0x8, size 0x4
        class xModelBucket * * BackRef; // offset 0x8, size 0x4
    };
    signed int ClipFlags; // offset 0xC, size 0x4
    class xModelPipe Pipe; // offset 0x10, size 0x8
};
// total size: 0x0
class rxReq {};
// total size: 0x10
class xDynAsset : public xBaseAsset {
    // Members
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
enum /* @enum */ {
    SCALE_FONT = 0,
    SCALE_SCREEN = 1,
    SCALE_SIZE = 2,
};
// total size: 0x8
class RwTexCoords {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0xC
class RxPipelineRequiresCluster {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
// total size: 0x1C
class RxHeap {
    // Members
public:
    unsigned int superBlockSize; // offset 0x0, size 0x4
    class rxHeapSuperBlockDescriptor * head; // offset 0x4, size 0x4
    class rxHeapBlockHeader * headBlock; // offset 0x8, size 0x4
    class rxHeapFreeBlock * freeBlocks; // offset 0xC, size 0x4
    unsigned int entriesAlloced; // offset 0x10, size 0x4
    unsigned int entriesUsed; // offset 0x14, size 0x4
    signed int dirty; // offset 0x18, size 0x4
};
enum /* @enum */ {
    SCALE_FONT = 0,
    SCALE_SCREEN = 1,
    SCALE_SIZE = 2,
    SCALE_FONT_WIDTH = 3,
    SCALE_FONT_HEIGHT = 4,
    SCALE_SCREEN_WIDTH = 5,
    SCALE_SCREEN_HEIGHT = 6,
};
// total size: 0x40
class RwSky2DVertexFields {
    // Members
public:
    class RwV3d scrVertex; // offset 0x0, size 0xC
    float camVertex_z; // offset 0xC, size 0x4
    float u; // offset 0x10, size 0x4
    float v; // offset 0x14, size 0x4
    float recipZ; // offset 0x18, size 0x4
    float pad1; // offset 0x1C, size 0x4
    class RwRGBAReal color; // offset 0x20, size 0x10
    class RwV3d objNormal; // offset 0x30, size 0xC
    float pad2; // offset 0x3C, size 0x4
};
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0x0
class xSurface {};
// total size: 0x10
class xRot {
    // Members
public:
    class xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
};
// total size: 0x40
class RxNodeDefinition {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    class RxNodeMethods nodeMethods; // offset 0x4, size 0x1C
    class RxIoSpec io; // offset 0x20, size 0x14
    unsigned int pipelineNodePrivateDataSize; // offset 0x34, size 0x4
    enum RxNodeDefEditable editable; // offset 0x38, size 0x4
    signed int InputPipesCnt; // offset 0x3C, size 0x4
};
// total size: 0x8
class RpTriangle {
    // Members
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    unsigned short matIndex; // offset 0x6, size 0x2
};
// total size: 0x10
class xSphere {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
// total size: 0x8
class rxHeapFreeBlock {
    // Members
public:
    unsigned int size; // offset 0x0, size 0x4
    class rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
// total size: 0x10
class RwRGBAReal {
    // Members
public:
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
};
// total size: 0x8
class RwObject {
    // Members
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};
// total size: 0x10
class RxClusterDefinition {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    char * attributeSet; // offset 0xC, size 0x4
};
// total size: 0x14
class xCylinder {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
// total size: 0x30
class xMat3x3 {
    // Members
public:
    class xVec3 right; // offset 0x0, size 0xC
    signed int flags; // offset 0xC, size 0x4
    class xVec3 up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class xVec3 at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
};
// total size: 0x18
class analog_data {
    // Members
public:
    class xVec2 offset; // offset 0x0, size 0x8
    class xVec2 dir; // offset 0x8, size 0x8
    float mag; // offset 0x10, size 0x4
    float ang; // offset 0x14, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00189E10 -> 0x0018A2F8
*/
// Range: 0x189E10 -> 0x18A2F8
void xFontPrintTopText() {
    /* anonymous block */ {
        // Range: 0x189E10 -> 0x18A2F8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018A300 -> 0x0018A9C4
*/
// Range: 0x18A300 -> 0x18A9C4
static void PrintWIPText() {
    /* anonymous block */ {
        // Range: 0x18A300 -> 0x18A9C4
        float fadePer; // r3
        class basic_rect bounds; // r29+0x1D0
        class xtextbox tb; // @ 0x00642D60
        signed char @7392; // @ 0x00608A14
        float wipTimer; // @ 0x00608A10
        char * TXT_WIP; // @ 0x00608A0C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018A9D0 -> 0x0018AA48
*/
// Range: 0x18A9D0 -> 0x18AA48
char * textstrncpy(char * dest /* r2 */, char * source /* r2 */, signed int chars /* r2 */, char * * outDest /* r2 */, char * * outSource /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18A9D0 -> 0x18AA48
        char * ret; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018AA50 -> 0x0018AA88
*/
// Range: 0x18AA50 -> 0x18AA88
signed int textstrlen(char * string /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18AA50 -> 0x18AA88
        signed int ret; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018AA90 -> 0x0018B044
*/
// Range: 0x18AA90 -> 0x18B044
void render_fill_rect(class basic_rect & bounds /* r19 */, class xColor_tag color /* r29+0x6C */) {
    /* anonymous block */ {
        // Range: 0x18AA90 -> 0x18B044
        float rcz; // r21
        float nsz; // r20
        class RwSky2DVertex vert[4]; // r29+0x80
        class basic_rect r; // r29+0x70
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018B050 -> 0x0018B124
*/
// Range: 0x18B050 -> 0x18B124
class tag_type * find_format_tag(class substr & s /* r19 */, signed int & index /* r18 */) {
    /* anonymous block */ {
        // Range: 0x18B050 -> 0x18B124
        signed int start; // r17
        signed int end; // r16
        class tag_type & t; // r20
        signed int c; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018B130 -> 0x0018B338
*/
// Range: 0x18B130 -> 0x18B338
void register_tags(class tag_type * t /* r2 */, unsigned int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18B130 -> 0x18B338
        class tag_type * s1; // r20
        class tag_type * s2; // r19
        class tag_type * end1; // r2
        class tag_type * end2; // r2
        class tag_type * d; // r18
        signed int c; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018B340 -> 0x0018B41C
*/
// Range: 0x18B340 -> 0x18B41C
static void parse_tag_counter(class jot & j /* r16 */, class split_tag & ti /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18B340 -> 0x18B41C
        unsigned int id; // r2
        class _xCounter * counter; // r2
        char * buffer; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018B420 -> 0x0018B5C4
*/
// Range: 0x18B420 -> 0x18B5C4
static void parse_tag_timer(class jot & j /* r16 */, class split_tag & ti /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18B420 -> 0x18B5C4
        unsigned int id; // r2
        class xTimer * ta; // r2
        char buffer[64]; // r29+0x20
        unsigned int sec; // r2
        unsigned int mn; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018B5D0 -> 0x0018B600
*/
// Range: 0x18B5D0 -> 0x18B600
static void parse_tag_pop(class split_tag & ti /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18B5D0 -> 0x18B600
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018B600 -> 0x0018B6E0
*/
// Range: 0x18B600 -> 0x18B6E0
static void parse_tag_insert_hash(class jot & j /* r16 */, class split_tag & ti /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18B600 -> 0x18B6E0
        unsigned int len; // r29+0x2C
        char * text; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018B6E0 -> 0x0018B7BC
*/
// Range: 0x18B6E0 -> 0x18B7BC
static void parse_tag_insert(class jot & j /* r16 */, class split_tag & ti /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18B6E0 -> 0x18B7BC
        unsigned int id; // r2
        unsigned int len; // r29+0x2C
        char * text; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018B7C0 -> 0x0018B868
*/
// Range: 0x18B7C0 -> 0x18B868
static void reset_tag_tex() {
    /* anonymous block */ {
        // Range: 0x18B7C0 -> 0x18B868
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018B870 -> 0x0018BC80
*/
// Range: 0x18B870 -> 0x18BC80
static void parse_tag_tex(class jot & a /* r17 */, class xtextbox & tb /* r16 */, class split_tag & ti /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18B870 -> 0x18BC80
        class tex_tag_context & ttc; // r2
        class callback cb; // @ 0x005E7508
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018BC80 -> 0x0018BD6C
*/
// Range: 0x18BC80 -> 0x18BD6C
static void render_tag_tex(class jot & j /* r2 */, class xtextbox & tb /* r18 */, float x /* r21 */, float y /* r20 */) {
    /* anonymous block */ {
        // Range: 0x18BC80 -> 0x18BD6C
        class tex_tag_context & ttc; // r2
        class basic_rect dst; // r29+0x50
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018BD70 -> 0x0018BE08
*/
// Range: 0x18BD70 -> 0x18BE08
static void reset_tag_model() {
    /* anonymous block */ {
        // Range: 0x18BD70 -> 0x18BE08
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018BE10 -> 0x0018C094
*/
// Range: 0x18BE10 -> 0x18C094
static void parse_tag_model(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18BE10 -> 0x18C094
        class model_tag_context & mtc; // r16
        class callback cb; // @ 0x005E74F8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018C0A0 -> 0x0018C334
*/
// Range: 0x18C0A0 -> 0x18C334
static void render_tag_model(class jot & j /* r2 */, class xtextbox & tb /* r16 */, float x /* r29+0xA0 */, float y /* r29+0xA0 */) {
    /* anonymous block */ {
        // Range: 0x18C0A0 -> 0x18C334
        class model_tag_context & mtc; // r17
        class basic_rect dst; // r29+0x70
        class xVec3 from; // r29+0x90
        class xVec3 to; // r29+0x80
        class xMat4x3 frame; // r29+0x30
        float ir; // r29+0xA0
        float scale; // r29+0xA0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018C340 -> 0x0018C35C
*/
// Range: 0x18C340 -> 0x18C35C
static void parse_tag_page_break(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18C340 -> 0x18C35C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018C360 -> 0x0018C37C
*/
// Range: 0x18C360 -> 0x18C37C
static void parse_tag_word_break(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18C360 -> 0x18C37C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018C380 -> 0x0018C39C
*/
// Range: 0x18C380 -> 0x18C39C
static void parse_tag_tab(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18C380 -> 0x18C39C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018C3A0 -> 0x0018C4FC
*/
// Range: 0x18C3A0 -> 0x18C4FC
static void parse_tag_nbsp(class jot & a /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18C3A0 -> 0x18C4FC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018C500 -> 0x0018C608
*/
// Range: 0x18C500 -> 0x18C608
static void parse_tag_newline(class jot & a /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18C500 -> 0x18C608
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018C610 -> 0x0018C710
*/
// Range: 0x18C610 -> 0x18C710
static void parse_tag_open_curly(class jot & a /* r2 */, class xtextbox & tb /* r2 */, class split_tag & ti /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18C610 -> 0x18C710
        char c; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018C710 -> 0x0018C720
*/
// Range: 0x18C710 -> 0x18C720
static void reset_tag_yjustify(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18C710 -> 0x18C720
        class callback cb; // @ 0x005E74E8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018C720 -> 0x0018C8B4
*/
// Range: 0x18C720 -> 0x18C8B4
static void parse_tag_yjustify(class jot & a /* r18 */, class split_tag & ti /* r17 */) {
    /* anonymous block */ {
        // Range: 0x18C720 -> 0x18C8B4
        unsigned int & flags; // r2
        class callback cb; // @ 0x005E74D8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018C8C0 -> 0x0018C8E0
*/
// Range: 0x18C8C0 -> 0x18C8E0
static void update_tag_reset_yjustify(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18C8C0 -> 0x18C8E0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018C8E0 -> 0x0018C900
*/
// Range: 0x18C8E0 -> 0x18C900
static void update_tag_yjustify(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18C8E0 -> 0x18C900
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018C900 -> 0x0018C910
*/
// Range: 0x18C900 -> 0x18C910
static void reset_tag_xjustify(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18C900 -> 0x18C910
        class callback cb; // @ 0x005E74C8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018C910 -> 0x0018CAA4
*/
// Range: 0x18C910 -> 0x18CAA4
static void parse_tag_xjustify(class jot & a /* r18 */, class split_tag & ti /* r17 */) {
    /* anonymous block */ {
        // Range: 0x18C910 -> 0x18CAA4
        unsigned int & flags; // r2
        class callback cb; // @ 0x005E74B8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CAB0 -> 0x0018CAD0
*/
// Range: 0x18CAB0 -> 0x18CAD0
static void update_tag_reset_xjustify(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18CAB0 -> 0x18CAD0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CAD0 -> 0x0018CAF0
*/
// Range: 0x18CAD0 -> 0x18CAF0
static void update_tag_xjustify(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18CAD0 -> 0x18CAF0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CAF0 -> 0x0018CB00
*/
// Range: 0x18CAF0 -> 0x18CB00
static void reset_tag_wrap(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18CAF0 -> 0x18CB00
        class callback cb; // @ 0x005E74A8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CB00 -> 0x0018CBE0
*/
// Range: 0x18CB00 -> 0x18CBE0
static void parse_tag_wrap(class jot & a /* r17 */, class split_tag & ti /* r16 */) {
    /* anonymous block */ {
        // Range: 0x18CB00 -> 0x18CBE0
        unsigned int & flags; // r2
        class callback cb; // @ 0x005E7498
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CBE0 -> 0x0018CC00
*/
// Range: 0x18CBE0 -> 0x18CC00
static void update_tag_reset_wrap(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18CBE0 -> 0x18CC00
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CC00 -> 0x0018CC20
*/
// Range: 0x18CC00 -> 0x18CC20
static void update_tag_wrap(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18CC00 -> 0x18CC20
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CC20 -> 0x0018CC30
*/
// Range: 0x18CC20 -> 0x18CC30
static void reset_tag_font(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18CC20 -> 0x18CC30
        class callback cb; // @ 0x005E7488
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CC30 -> 0x0018CCB8
*/
// Range: 0x18CC30 -> 0x18CCB8
static void parse_tag_font(class jot & a /* r16 */, class split_tag & ti /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18CC30 -> 0x18CCB8
        unsigned int & id; // r17
        class callback cb; // @ 0x005E7478
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CCC0 -> 0x0018CCCC
*/
// Range: 0x18CCC0 -> 0x18CCCC
static void update_tag_reset_font(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18CCC0 -> 0x18CCCC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CCD0 -> 0x0018CCDC
*/
// Range: 0x18CCD0 -> 0x18CCDC
static void update_tag_font(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18CCD0 -> 0x18CCDC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CCE0 -> 0x0018CCF0
*/
// Range: 0x18CCE0 -> 0x18CCF0
static void reset_tag_color(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18CCE0 -> 0x18CCF0
        class callback cb; // @ 0x005E7468
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CCF0 -> 0x0018CEEC
*/
// Range: 0x18CCF0 -> 0x18CEEC
static void parse_tag_color(class jot & a /* r19 */, class xtextbox & tb /* r18 */, class split_tag & ti /* r17 */) {
    /* anonymous block */ {
        // Range: 0x18CCF0 -> 0x18CEEC
        class xColor_tag & color; // r2
        unsigned int v; // r3
        unsigned int temp; // r2
        class callback cb; // @ 0x005E7458
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CEF0 -> 0x0018CF14
*/
// Range: 0x18CEF0 -> 0x18CF14
static void update_tag_reset_color(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18CEF0 -> 0x18CF14
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CF20 -> 0x0018CF3C
*/
// Range: 0x18CF20 -> 0x18CF3C
static void update_tag_color(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18CF20 -> 0x18CF3C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CF40 -> 0x0018CF50
*/
// Range: 0x18CF40 -> 0x18CF50
static void reset_tag_all(class jot & j /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18CF40 -> 0x18CF50
        class callback cb; // @ 0x005E7448
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CF50 -> 0x0018D03C
*/
// Range: 0x18CF50 -> 0x18D03C
static void update_tag_reset_all(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18CF50 -> 0x18D03C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D040 -> 0x0018D050
*/
// Range: 0x18D040 -> 0x18D050
static void reset_tag_yspace(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18D040 -> 0x18D050
        class callback cb; // @ 0x005E7438
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D050 -> 0x0018D168
*/
// Range: 0x18D050 -> 0x18D168
static void parse_tag_yspace(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x18D050 -> 0x18D168
        float & v; // r16
        class callback cb; // @ 0x005E7428
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D170 -> 0x0018D17C
*/
// Range: 0x18D170 -> 0x18D17C
static void update_tag_reset_yspace(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18D170 -> 0x18D17C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D180 -> 0x0018D18C
*/
// Range: 0x18D180 -> 0x18D18C
static void update_tag_yspace(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18D180 -> 0x18D18C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D190 -> 0x0018D1A0
*/
// Range: 0x18D190 -> 0x18D1A0
static void reset_tag_xspace(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18D190 -> 0x18D1A0
        class callback cb; // @ 0x005E7418
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D1A0 -> 0x0018D2B8
*/
// Range: 0x18D1A0 -> 0x18D2B8
static void parse_tag_xspace(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x18D1A0 -> 0x18D2B8
        float & v; // r16
        class callback cb; // @ 0x005E7408
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D2C0 -> 0x0018D2CC
*/
// Range: 0x18D2C0 -> 0x18D2CC
static void update_tag_reset_xspace(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18D2C0 -> 0x18D2CC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D2D0 -> 0x0018D2DC
*/
// Range: 0x18D2D0 -> 0x18D2DC
static void update_tag_xspace(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18D2D0 -> 0x18D2DC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D2E0 -> 0x0018D2F0
*/
// Range: 0x18D2E0 -> 0x18D2F0
static void reset_tag_tab_stop(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18D2E0 -> 0x18D2F0
        class callback cb; // @ 0x005E73F8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D2F0 -> 0x0018D404
*/
// Range: 0x18D2F0 -> 0x18D404
static void parse_tag_tab_stop(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x18D2F0 -> 0x18D404
        float & v; // r16
        class callback cb; // @ 0x005E73E8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D410 -> 0x0018D41C
*/
// Range: 0x18D410 -> 0x18D41C
static void update_tag_reset_tab_stop(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18D410 -> 0x18D41C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D420 -> 0x0018D42C
*/
// Range: 0x18D420 -> 0x18D42C
static void update_tag_tab_stop(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18D420 -> 0x18D42C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D430 -> 0x0018D440
*/
// Range: 0x18D430 -> 0x18D440
static void reset_tag_right_indent(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18D430 -> 0x18D440
        class callback cb; // @ 0x005E73D8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D440 -> 0x0018D558
*/
// Range: 0x18D440 -> 0x18D558
static void parse_tag_right_indent(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x18D440 -> 0x18D558
        float & v; // r16
        class callback cb; // @ 0x005E73C8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D560 -> 0x0018D56C
*/
// Range: 0x18D560 -> 0x18D56C
static void update_tag_reset_right_indent(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18D560 -> 0x18D56C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D570 -> 0x0018D57C
*/
// Range: 0x18D570 -> 0x18D57C
static void update_tag_right_indent(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18D570 -> 0x18D57C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D580 -> 0x0018D590
*/
// Range: 0x18D580 -> 0x18D590
static void reset_tag_left_indent(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18D580 -> 0x18D590
        class callback cb; // @ 0x005E73B8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D590 -> 0x0018D6A8
*/
// Range: 0x18D590 -> 0x18D6A8
static void parse_tag_left_indent(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x18D590 -> 0x18D6A8
        float & v; // r16
        class callback cb; // @ 0x005E73A8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D6B0 -> 0x0018D6BC
*/
// Range: 0x18D6B0 -> 0x18D6BC
static void update_tag_reset_left_indent(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18D6B0 -> 0x18D6BC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D6C0 -> 0x0018D6CC
*/
// Range: 0x18D6C0 -> 0x18D6CC
static void update_tag_left_indent(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18D6C0 -> 0x18D6CC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D6D0 -> 0x0018D6E0
*/
// Range: 0x18D6D0 -> 0x18D6E0
static void reset_tag_height(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18D6D0 -> 0x18D6E0
        class callback cb; // @ 0x005E7398
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D6E0 -> 0x0018D7F4
*/
// Range: 0x18D6E0 -> 0x18D7F4
static void parse_tag_height(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x18D6E0 -> 0x18D7F4
        float & v; // r16
        class callback cb; // @ 0x005E7388
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D800 -> 0x0018D80C
*/
// Range: 0x18D800 -> 0x18D80C
static void update_tag_reset_height(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18D800 -> 0x18D80C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D810 -> 0x0018D81C
*/
// Range: 0x18D810 -> 0x18D81C
static void update_tag_height(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18D810 -> 0x18D81C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D820 -> 0x0018D830
*/
// Range: 0x18D820 -> 0x18D830
static void reset_tag_width(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18D820 -> 0x18D830
        class callback cb; // @ 0x005E7378
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D830 -> 0x0018D944
*/
// Range: 0x18D830 -> 0x18D944
static void parse_tag_width(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x18D830 -> 0x18D944
        float & v; // r16
        class callback cb; // @ 0x005E7368
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D950 -> 0x0018D95C
*/
// Range: 0x18D950 -> 0x18D95C
static void update_tag_reset_width(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18D950 -> 0x18D95C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D960 -> 0x0018D96C
*/
// Range: 0x18D960 -> 0x18D96C
static void update_tag_width(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18D960 -> 0x18D96C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D970 -> 0x0018D980
*/
// Range: 0x18D970 -> 0x18D980
static void reset_tag_sblue(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18D970 -> 0x18D980
        class callback cb; // @ 0x005E7358
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D980 -> 0x0018DB18
*/
// Range: 0x18D980 -> 0x18DB18
static void parse_tag_sblue(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x18D980 -> 0x18DB18
        float & v; // r16
        class callback cb; // @ 0x005E7348
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018DB20 -> 0x0018DB2C
*/
// Range: 0x18DB20 -> 0x18DB2C
static void update_tag_reset_sblue(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18DB20 -> 0x18DB2C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018DB30 -> 0x0018DB9C
*/
// Range: 0x18DB30 -> 0x18DB9C
static void update_tag_sblue(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18DB30 -> 0x18DB9C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018DBA0 -> 0x0018DBB0
*/
// Range: 0x18DBA0 -> 0x18DBB0
static void reset_tag_sgreen(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18DBA0 -> 0x18DBB0
        class callback cb; // @ 0x005E7338
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018DBB0 -> 0x0018DD48
*/
// Range: 0x18DBB0 -> 0x18DD48
static void parse_tag_sgreen(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x18DBB0 -> 0x18DD48
        float & v; // r16
        class callback cb; // @ 0x005E7328
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018DD50 -> 0x0018DD5C
*/
// Range: 0x18DD50 -> 0x18DD5C
static void update_tag_reset_sgreen(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18DD50 -> 0x18DD5C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018DD60 -> 0x0018DDCC
*/
// Range: 0x18DD60 -> 0x18DDCC
static void update_tag_sgreen(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18DD60 -> 0x18DDCC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018DDD0 -> 0x0018DDE0
*/
// Range: 0x18DDD0 -> 0x18DDE0
static void reset_tag_sred(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18DDD0 -> 0x18DDE0
        class callback cb; // @ 0x005E7318
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018DDE0 -> 0x0018DF78
*/
// Range: 0x18DDE0 -> 0x18DF78
static void parse_tag_sred(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x18DDE0 -> 0x18DF78
        float & v; // r16
        class callback cb; // @ 0x005E7308
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018DF80 -> 0x0018DF8C
*/
// Range: 0x18DF80 -> 0x18DF8C
static void update_tag_reset_sred(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18DF80 -> 0x18DF8C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018DF90 -> 0x0018DFFC
*/
// Range: 0x18DF90 -> 0x18DFFC
static void update_tag_sred(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18DF90 -> 0x18DFFC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E000 -> 0x0018E010
*/
// Range: 0x18E000 -> 0x18E010
static void reset_tag_salpha(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18E000 -> 0x18E010
        class callback cb; // @ 0x005E72F8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E010 -> 0x0018E1A8
*/
// Range: 0x18E010 -> 0x18E1A8
static void parse_tag_salpha(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x18E010 -> 0x18E1A8
        float & v; // r16
        class callback cb; // @ 0x005E72E8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E1B0 -> 0x0018E1BC
*/
// Range: 0x18E1B0 -> 0x18E1BC
static void update_tag_reset_salpha(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18E1B0 -> 0x18E1BC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E1C0 -> 0x0018E22C
*/
// Range: 0x18E1C0 -> 0x18E22C
static void update_tag_salpha(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18E1C0 -> 0x18E22C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E230 -> 0x0018E240
*/
// Range: 0x18E230 -> 0x18E240
static void reset_tag_blue(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18E230 -> 0x18E240
        class callback cb; // @ 0x005E72D8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E240 -> 0x0018E3D8
*/
// Range: 0x18E240 -> 0x18E3D8
static void parse_tag_blue(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x18E240 -> 0x18E3D8
        float & v; // r16
        class callback cb; // @ 0x005E72C8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E3E0 -> 0x0018E3EC
*/
// Range: 0x18E3E0 -> 0x18E3EC
static void update_tag_reset_blue(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18E3E0 -> 0x18E3EC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E3F0 -> 0x0018E45C
*/
// Range: 0x18E3F0 -> 0x18E45C
static void update_tag_blue(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18E3F0 -> 0x18E45C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E460 -> 0x0018E470
*/
// Range: 0x18E460 -> 0x18E470
static void reset_tag_green(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18E460 -> 0x18E470
        class callback cb; // @ 0x005E72B8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E470 -> 0x0018E608
*/
// Range: 0x18E470 -> 0x18E608
static void parse_tag_green(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x18E470 -> 0x18E608
        float & v; // r16
        class callback cb; // @ 0x005E72A8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E610 -> 0x0018E61C
*/
// Range: 0x18E610 -> 0x18E61C
static void update_tag_reset_green(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18E610 -> 0x18E61C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E620 -> 0x0018E68C
*/
// Range: 0x18E620 -> 0x18E68C
static void update_tag_green(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18E620 -> 0x18E68C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E690 -> 0x0018E6A0
*/
// Range: 0x18E690 -> 0x18E6A0
static void reset_tag_red(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18E690 -> 0x18E6A0
        class callback cb; // @ 0x005E7298
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E6A0 -> 0x0018E838
*/
// Range: 0x18E6A0 -> 0x18E838
static void parse_tag_red(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x18E6A0 -> 0x18E838
        float & v; // r16
        class callback cb; // @ 0x005E7288
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E840 -> 0x0018E84C
*/
// Range: 0x18E840 -> 0x18E84C
static void update_tag_reset_red(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18E840 -> 0x18E84C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E850 -> 0x0018E8BC
*/
// Range: 0x18E850 -> 0x18E8BC
static void update_tag_red(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18E850 -> 0x18E8BC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E8C0 -> 0x0018E8D0
*/
// Range: 0x18E8C0 -> 0x18E8D0
static void reset_tag_alpha(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18E8C0 -> 0x18E8D0
        class callback cb; // @ 0x005E7278
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E8D0 -> 0x0018EA68
*/
// Range: 0x18E8D0 -> 0x18EA68
static void parse_tag_alpha(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x18E8D0 -> 0x18EA68
        float & v; // r16
        class callback cb; // @ 0x005E7268
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018EA70 -> 0x0018EA7C
*/
// Range: 0x18EA70 -> 0x18EA7C
static void update_tag_reset_alpha(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18EA70 -> 0x18EA7C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018EA80 -> 0x0018EAEC
*/
// Range: 0x18EA80 -> 0x18EAEC
static void update_tag_alpha(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18EA80 -> 0x18EAEC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018EAF0 -> 0x0018ED00
*/
// Range: 0x18EAF0 -> 0x18ED00
// this: r21
unsigned char layout::changed(class xtextbox & ctb /* r20 */) {
    /* anonymous block */ {
        // Range: 0x18EAF0 -> 0x18ED00
        unsigned int flags1; // r2
        unsigned int flags2; // r2
        signed int i; // r19
        class jot & j; // r18
        unsigned int oldval; // r2
        unsigned int val; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018ED00 -> 0x0018EE30
*/
// Range: 0x18ED00 -> 0x18EE30
// this: r2
float layout::yextent(float max /* r29 */, signed int & size /* r2 */, signed int begin_jot /* r2 */, signed int end_jot /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18ED00 -> 0x18EE30
        signed int begin_line; // r11
        float top; // r2
        signed int i; // r10
        class jot_line & line; // r2
        class jot_line & line; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018EE30 -> 0x0018F54C
*/
// Range: 0x18EE30 -> 0x18F54C
// this: r20
void layout::render(class xtextbox & ctb /* r19 */, signed int begin_jot /* r18 */, signed int end_jot /* r23 */) {
    /* anonymous block */ {
        // Range: 0x18EE30 -> 0x18F54C
        signed int begin_line; // r17
        signed int i; // r21
        class jot & j; // r2
        float top; // r22
        unsigned int li; // r17
        signed int line_last; // r22
        float x; // r21
        float y; // r20
        signed int i; // r2
        class jot_line & line; // r2
        unsigned int xj; // r2
        unsigned int yj; // r2
        class jot & j; // r21
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018F550 -> 0x0018FCA8
*/
// Range: 0x18F550 -> 0x18FCA8
// this: r21
void layout::calc(class xtextbox & ctb /* r20 */, unsigned int start_text /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18F550 -> 0x18FCA8
        class jot_line & first_line; // r2
        // total size: 0x8
        class /* @class */ {
            // Members
        public:
            char * s; // offset 0x0, size 0x4
            char * end; // offset 0x4, size 0x4
        } text_stack[16]; // r29+0xB0
        unsigned int text_stack_size; // r22
        unsigned int text_index; // r30
        char * s; // r19
        char * end; // r18
        class jot & a; // r17
        class jot_line & line; // r16
        class jot_line & last_line; // r2
        unsigned int i; // r8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018FCB0 -> 0x0018FF04
*/
// Range: 0x18FCB0 -> 0x18FF04
// this: r18
unsigned char layout::fit_line(unsigned char isLastLine /* r17 */) {
    /* anonymous block */ {
        // Range: 0x18FCB0 -> 0x18FF04
        class jot_line & line; // r16
        signed int i; // r6
        class jot & current; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018FF10 -> 0x00190040
*/
// Range: 0x18FF10 -> 0x190040
// this: r2
void layout::bound_line(class jot_line & line /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18FF10 -> 0x190040
        unsigned int i; // r8
        class jot & a; // r2
        unsigned int i; // r8
        class jot & a; // r2
        float total_height; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00190040 -> 0x00190314
*/
// Range: 0x190040 -> 0x190314
// this: r2
void layout::merge_line(class jot_line & line /* r2 */) {
    /* anonymous block */ {
        // Range: 0x190040 -> 0x190314
        unsigned int d; // r10
        unsigned int i; // r9
        class jot & a1; // r2
        class jot & a2; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00190320 -> 0x00190590
*/
// Range: 0x190320 -> 0x190590
// this: r2
void layout::trim_line(class jot_line & line /* r2 */) {
    /* anonymous block */ {
        // Range: 0x190320 -> 0x190590
        signed int i; // r3
        class jot & a; // r2
        unsigned int i; // r3
        class jot & a; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00190590 -> 0x001906A0
*/
// Range: 0x190590 -> 0x1906A0
// this: r2
void layout::refresh_end(class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x190590 -> 0x1906A0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001906A0 -> 0x001909AC
*/
// Range: 0x1906A0 -> 0x1909AC
// this: r2
void layout::clear() {
    /* anonymous block */ {
        // Range: 0x1906A0 -> 0x1909AC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001909B0 -> 0x00190AE8
*/
// Range: 0x1909B0 -> 0x190AE8
// this: r17
void layout::refresh(class xtextbox & tb /* r16 */, unsigned char force /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1909B0 -> 0x190AE8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00190AF0 -> 0x00190F64
*/
// Range: 0x190AF0 -> 0x190F64
void clear_layout_cache() {
    /* anonymous block */ {
        // Range: 0x190AF0 -> 0x190F64
        unsigned int index; // r22
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00190F70 -> 0x0019100C
*/
// Range: 0x190F70 -> 0x19100C
unsigned int read_list(class tag_entry & e /* r20 */, signed int * v /* r2 */, unsigned int vsize /* r2 */) {
    /* anonymous block */ {
        // Range: 0x190F70 -> 0x19100C
        unsigned int total; // r2
        unsigned int i; // r19
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00191010 -> 0x001910AC
*/
// Range: 0x191010 -> 0x1910AC
unsigned int read_list(class tag_entry & e /* r20 */, float * v /* r2 */, unsigned int vsize /* r2 */) {
    /* anonymous block */ {
        // Range: 0x191010 -> 0x1910AC
        unsigned int total; // r2
        unsigned int i; // r19
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001910B0 -> 0x00191150
*/
// Range: 0x1910B0 -> 0x191150
class tag_entry * find_entry(class tag_entry_list & el /* r19 */, class substr & name /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1910B0 -> 0x191150
        unsigned int i; // r17
        class tag_entry & e; // r20
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00191150 -> 0x001915B4
*/
// Range: 0x191150 -> 0x1915B4
class tag_entry_list read_tag(class substr & s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x191150 -> 0x1915B4
        unsigned int entries_used; // r21
        class substr it; // r29+0x88
        class substr delims; // r29+0x80
        class substr sub_delims; // r29+0x78
        class tag_entry & entry; // r19
        char * d; // r2
        class substr & arg; // r18
        char * d; // r2
        class tag_entry_list ret; // r29+0x70
        class substr arg_buffer[32]; // @ 0x00642B20
        class tag_entry entry_buffer[16]; // @ 0x00642C20
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001915C0 -> 0x001915D0
*/
// Range: 0x1915C0 -> 0x1915D0
float yextent(float max /* r29 */, signed int & size /* r2 */, class layout & l /* r2 */, signed int begin_jot /* r2 */, signed int end_jot /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1915C0 -> 0x1915D0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001915D0 -> 0x001915E0
*/
// Range: 0x1915D0 -> 0x1915E0
// this: r2
void xtextbox::render(class layout & l /* r2 */, signed int begin_jot /* r2 */, signed int end_jot /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1915D0 -> 0x1915E0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001915E0 -> 0x00191950
*/
// Range: 0x1915E0 -> 0x191950
// this: r18
class layout & xtextbox::temp_layout(unsigned char cache /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1915E0 -> 0x191950
        signed long cur_time; // r2
        unsigned char refresh; // r16
        unsigned int index; // r21
        signed int min_used; // r6
        unsigned int i; // r5
        signed int used; // r4
        class tl_cache_entry & e; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00191950 -> 0x00191A54
*/
// Range: 0x191950 -> 0x191A54
// this: r17
void xtextbox::set_text(char * * texts /* r2 */, unsigned int * text_sizes /* r2 */, unsigned int size /* r16 */) {
    /* anonymous block */ {
        // Range: 0x191950 -> 0x191A54
        unsigned int i; // r19
        unsigned int i; // r20
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00191A60 -> 0x00191A6C
*/
// Range: 0x191A60 -> 0x191A6C
// this: r2
void xtextbox::set_text(char * * texts /* r2 */, unsigned int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x191A60 -> 0x191A6C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00191A70 -> 0x00191AB4
*/
// Range: 0x191A70 -> 0x191AB4
// this: r2
void xtextbox::set_text(char * text /* r2 */) {
    /* anonymous block */ {
        // Range: 0x191A70 -> 0x191AB4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00191AC0 -> 0x00191AD4
*/
// Range: 0x191AC0 -> 0x191AD4
void text_render(class jot & j /* r2 */, class xtextbox & tb /* r2 */, float x /* r29 */, float y /* r29 */) {
    /* anonymous block */ {
        // Range: 0x191AC0 -> 0x191AD4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00191AE0 -> 0x00192024
*/
// Range: 0x191AE0 -> 0x192024
static void load_model_args(class model_args & ma /* r22 */, class substr & s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x191AE0 -> 0x192024
        class tag_entry_list el; // r29+0xE8
        class tag_entry * e; // r21
        class substr & name; // r2
        unsigned int id; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00192030 -> 0x001929B4
*/
// Range: 0x192030 -> 0x1929B4
static void load_tex_args(class tex_args & ta /* r22 */, class substr & s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x192030 -> 0x1929B4
        class tag_entry_list el; // r29+0x170
        class tag_entry * e; // r21
        class substr & name; // r2
        unsigned int id; // r2
        class RwTexture * texture; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001929C0 -> 0x00192D28
*/
// Range: 0x1929C0 -> 0x192D28
static char * parse_next_text_jot(class jot & a /* r2 */, class xtextbox & tb /* r2 */, char * text /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1929C0 -> 0x192D28
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00192D30 -> 0x00192F48
*/
// Range: 0x192D30 -> 0x192F48
static char * parse_next_tag_jot(class jot & a /* r21 */, class xtextbox & tb /* r20 */, class xtextbox & ctb /* r19 */, char * text /* r18 */, unsigned int text_size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x192D30 -> 0x192F48
        class split_tag ti; // r29+0x70
        unsigned int size; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00192F50 -> 0x00193308
*/
// Range: 0x192F50 -> 0x193308
static unsigned int parse_split_tag(class split_tag & ti /* r17 */) {
    /* anonymous block */ {
        // Range: 0x192F50 -> 0x193308
        class substr s; // r29+0x38
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00193310 -> 0x00193AFC
*/
// Range: 0x193310 -> 0x193AFC
// this: r20
void xfont::irender(char * text /* r29+0xDC */, unsigned int text_size /* r29+0xD8 */, float x /* r20 */, float y /* r29+0x150 */) {
    /* anonymous block */ {
        // Range: 0x193310 -> 0x193AFC
        class font_data & fd; // r19
        class basic_rect bounds; // r29+0x120
        unsigned char pageCompleted[16]; // r29+0x110
        unsigned int cpItr; // r29+0xC0
        signed int whichCodePage; // r21
        char * s; // r18
        unsigned int codePage; // r2
        unsigned int charIndex; // r2
        char * s; // r18
        unsigned int charIndex; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00193B00 -> 0x00193B08
*/
// Range: 0x193B00 -> 0x193B08
// this: r2
void xfont::irender(char * text /* r2 */, float x /* r29 */, float y /* r29 */) {
    /* anonymous block */ {
        // Range: 0x193B00 -> 0x193B08
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00193B10 -> 0x00193C10
*/
// Range: 0x193B10 -> 0x193C10
void stop_render() {
    /* anonymous block */ {
        // Range: 0x193B10 -> 0x193C10
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00193C10 -> 0x00193C5C
*/
// Range: 0x193C10 -> 0x193C5C
// this: r2
void xfont::start_render() {
    /* anonymous block */ {
        // Range: 0x193C10 -> 0x193C5C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00193C60 -> 0x00193D34
*/
// Range: 0x193C60 -> 0x193D34
void restore_render_state() {
    /* anonymous block */ {
        // Range: 0x193C60 -> 0x193D34
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00193D40 -> 0x00193EA8
*/
// Range: 0x193D40 -> 0x193EA8
void set_render_state(class RwRaster * raster /* r17 */) {
    /* anonymous block */ {
        // Range: 0x193D40 -> 0x193EA8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00193EB0 -> 0x00194044
*/
// Range: 0x193EB0 -> 0x194044
void init() {
    /* anonymous block */ {
        // Range: 0x193EB0 -> 0x194044
        unsigned int i; // r17
        class font_data & fd; // r2
        char filename[20]; // r29+0x30
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00194050 -> 0x001941B8
*/
// Range: 0x194050 -> 0x1941B8
static class xModelInstance * load_model(unsigned int id /* r17 */) {
    /* anonymous block */ {
        // Range: 0x194050 -> 0x1941B8
        unsigned int next_order'86; // r2
        unsigned int oldest; // r16
        unsigned int i; // r7
        class model_cache_entry & e; // r2
        class RpAtomic * mf; // r2
        class model_cache_entry & e; // r2
        class xModelInstance & model; // r16
        unsigned int next_order; // @ 0x00608A08
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001941C0 -> 0x00194374
*/
// Range: 0x1941C0 -> 0x194374
static void init_model_cache() {
    /* anonymous block */ {
        // Range: 0x1941C0 -> 0x194374
        void * data; // r2
        class model_pool & pool; // r16
        class xModelInstance & model; // r2
        class model_cache_entry & e; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00194380 -> 0x00194DB4
*/
// Range: 0x194380 -> 0x194DB4
static void tex_render_shadowed(class basic_rect & src /* r2 */, class basic_rect & dst /* r2 */, class basic_rect & clip /* r2 */, class xColor_tag color /* r29+0xB8 */, class xColor_tag shadowcolor /* r29+0xBC */, float shadowOffsetX /* r22 */, float shadowOffsetY /* r21 */, float fshear /* r20 */) {
    /* anonymous block */ {
        // Range: 0x194380 -> 0x194DB4
        class basic_rect r; // r29+0xD0
        class basic_rect rt; // r29+0xC0
        class RwSky2DVertex * vert; // r3
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00194DC0 -> 0x0019551C
*/
// Range: 0x194DC0 -> 0x19551C
static void tex_render(class basic_rect & src /* r2 */, class basic_rect & dst /* r2 */, class basic_rect & clip /* r2 */, class xColor_tag color /* r29+0x9C */) {
    /* anonymous block */ {
        // Range: 0x194DC0 -> 0x19551C
        class basic_rect r; // r29+0xB0
        class basic_rect rt; // r29+0xA0
        class RwSky2DVertex * vert; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00195520 -> 0x00195BEC
*/
// Range: 0x195520 -> 0x195BEC
static unsigned char init_font_data(class font_data & fd /* r17 */) {
    /* anonymous block */ {
        // Range: 0x195520 -> 0x195BEC
        class font_asset & a; // r16
        signed int height; // r2
        unsigned char i; // r2
        unsigned char c; // r2
        unsigned int tail_index; // r3
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00195BF0 -> 0x00195E90
*/
// Range: 0x195BF0 -> 0x195E90
static unsigned char reset_font_spacing(class font_asset & a /* r21 */) {
    /* anonymous block */ {
        // Range: 0x195BF0 -> 0x195E90
        class RwTexture * tex; // r16
        class basic_rect char_bounds; // r29+0x1C0
        unsigned char baseline_count[256]; // r29+0xC0
        signed int width; // r20
        class RwImage * image; // r19
        class xColor_tag * bits; // r2
        signed int i; // r18
        class basic_rect r; // r29+0xB0
        signed int baseline; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00195E90 -> 0x00196008
*/
// Range: 0x195E90 -> 0x196008
static class basic_rect find_bounds(class xColor_tag * bits /* r2 */, class basic_rect & r /* r2 */, signed int pitch /* r2 */) {
    /* anonymous block */ {
        // Range: 0x195E90 -> 0x196008
        signed int diff; // r2
        class xColor_tag * endp; // r2
        class xColor_tag * p; // r2
        signed int pmode; // r2
        signed int minx; // r3
        signed int maxx; // r16
        signed int miny; // r25
        signed int maxy; // r14
        signed int y; // r24
        class xColor_tag * endline; // r2
        signed int x; // r12
        class basic_rect b; // r29+0x10
    }
}


