/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class basic_rect screen_bounds; // size: 0x10, address: 0x4F7CF0
static class basic_rect default_adjust; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
static char * default_font_texture[3]; // size: 0xC, address: 0x4165B0
static class font_asset default_font_assets[4]; // size: 0x650, address: 0x4165C0
static class font_data active_fonts[4]; // size: 0x53C0, address: 0x5404A0
static unsigned int active_fonts_size; // size: 0x4, address: 0x50EEA4
static class RwSky2DVertex vert_buffer[120]; // size: 0x1E00, address: 0x545860
static unsigned int vert_buffer_used; // size: 0x4, address: 0x50EEA8
static float rcz; // size: 0x4, address: 0x50EEAC
static float nsz; // size: 0x4, address: 0x50EEB0
static class model_cache_entry model_cache[8]; // size: 0x60, address: 0x547660
static unsigned char model_cache_inited; // size: 0x1, address: 0x50EEB4
static // total size: 0x24
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
    class RwRaster * textureraster; // offset 0x1C, size 0x4
    enum RwTextureFilterMode filter; // offset 0x20, size 0x4
} oldrs; // size: 0x24, address: 0x5476C0
static class substr text_delims; // size: 0x8, address: 0x4F7D00
static class tex_args def_tex_args; // size: 0x34, address: 0x5476F0
static class model_args def_model_args; // size: 0x2C, address: 0x547730
static class tl_cache_entry tl_cache[3]; // size: 0x18F18, address: 0x547760
class callback text_cb; // size: 0xC, address: 0x4F7D08
unsigned char disable_text_stats; // size: 0x1, address: 0x0
static class tag_type format_tags_buffer[2][128]; // size: 0x1400, address: 0x416C30
static class tag_type * format_tags; // size: 0x4, address: 0x50DD50
static unsigned int format_tags_size; // size: 0x4, address: 0x50DD54
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x5BAE28
class basic_rect m_Unit; // size: 0x10, address: 0x4F82C0
class xVec3 m_Null; // size: 0xC, address: 0x4F8E50
class basic_rect m_Null; // size: 0x10, address: 0x4F82B0
class iColor_tag g_WHITE; // size: 0x4, address: 0x4F7600
class xMat4x3 g_I3; // size: 0x40, address: 0x567DC0
unsigned int gActiveHeap; // size: 0x4, address: 0x50EF44
// total size: 0x24
class xfont {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    float width; // offset 0x4, size 0x4
    float height; // offset 0x8, size 0x4
    float space; // offset 0xC, size 0x4
    class iColor_tag color; // offset 0x10, size 0x4
    class basic_rect clip; // offset 0x14, size 0x10
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
// total size: 0x68
class xtextbox {
    // Members
public:
    class xfont font; // offset 0x0, size 0x24
    class basic_rect bounds; // offset 0x24, size 0x10
    unsigned int flags; // offset 0x34, size 0x4
    float line_space; // offset 0x38, size 0x4
    float tab_stop; // offset 0x3C, size 0x4
    float left_indent; // offset 0x40, size 0x4
    float right_indent; // offset 0x44, size 0x4
    class callback * cb; // offset 0x48, size 0x4
    void * context; // offset 0x4C, size 0x4
    char * * texts; // offset 0x50, size 0x4
    unsigned int * text_sizes; // offset 0x54, size 0x4
    unsigned int texts_size; // offset 0x58, size 0x4
    class substr text; // offset 0x5C, size 0x8
    unsigned int text_hash; // offset 0x64, size 0x4
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
// total size: 0x194
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
    unsigned char char_set[128]; // offset 0x14, size 0x80
    // total size: 0x2
    class /* @class */ {
        // Members
    public:
        unsigned char offset; // offset 0x0, size 0x1
        unsigned char size; // offset 0x1, size 0x1
    } char_pos[127]; // offset 0x94, size 0xFE
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
// total size: 0x40
class RwSky2DVertex {
    // Members
public:
    class RwSky2DVertexAlignmentOverlay u; // offset 0x0, size 0x40
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
// total size: 0x14
class tag_entry {
    // Members
public:
    class substr name; // offset 0x0, size 0x8
    char op; // offset 0x8, size 0x1
    class substr * args; // offset 0xC, size 0x4
    unsigned int args_size; // offset 0x10, size 0x4
};
// total size: 0x10
class xQuat {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
// total size: 0x560
class model_pool {
    // Members
public:
    class RwMatrixTag mat[8]; // offset 0x0, size 0x200
    class xModelInstance model[8]; // offset 0x200, size 0x360
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
// total size: 0x8
class RwTexCoords {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x8
class RpTriangle {
    // Members
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    signed short matIndex; // offset 0x6, size 0x2
};
// total size: 0xC
class RxPipelineNodeTopSortData {
    // Members
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class rxReq * req; // offset 0x8, size 0x4
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
// total size: 0x4
class iColor_tag {
    // Members
public:
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
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
// total size: 0x4
class xTextAsset {
    // Members
public:
    unsigned int len; // offset 0x0, size 0x4
};
// total size: 0x0
class xSurface {};
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
// total size: 0x14
class tag_type {
    // Members
public:
    class substr name; // offset 0x0, size 0x8
    void (* parse_tag)(class jot &, class xtextbox &, class xtextbox &, class split_tag &); // offset 0x8, size 0x4
    void (* reset_tag)(class jot &, class xtextbox &, class xtextbox &, class split_tag &); // offset 0xC, size 0x4
    void * context; // offset 0x10, size 0x4
};
// total size: 0x8
class substr {
    // Members
public:
    char * text; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};
// total size: 0xC
class RxPipelineRequiresCluster {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
// total size: 0x20
class split_tag {
    // Members
public:
    class substr tag; // offset 0x0, size 0x8
    class substr name; // offset 0x8, size 0x8
    class substr action; // offset 0x10, size 0x8
    class substr value; // offset 0x18, size 0x8
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
// total size: 0x8
class xVec2 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x8
class xAnimTransitionList {
    // Members
public:
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
};
// total size: 0x14
class xModelBucket {
    // Members
public:
    class RpAtomic * Data; // offset 0x0, size 0x4
    class RpAtomic * OriginalData; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
    signed int ClipFlags; // offset 0xC, size 0x4
    unsigned int PipeFlags; // offset 0x10, size 0x4
};
// total size: 0x14F0
class font_data {
    // Members
public:
    class font_asset * asset; // offset 0x0, size 0x4
    unsigned int index_max; // offset 0x4, size 0x4
    unsigned char char_index[256]; // offset 0x8, size 0x100
    float iwidth; // offset 0x108, size 0x4
    float iheight; // offset 0x10C, size 0x4
    class basic_rect tex_bounds[127]; // offset 0x110, size 0x7F0
    class basic_rect bounds[127]; // offset 0x900, size 0x7F0
    class xVec2 dstfrac[127]; // offset 0x10F0, size 0x3F8
    class RwTexture * texture; // offset 0x14E8, size 0x4
    class RwRaster * raster; // offset 0x14EC, size 0x4
};
// total size: 0x10
class xTimerAsset : public xBaseAsset {
    // Members
public:
    float seconds; // offset 0x8, size 0x4
    float randomRange; // offset 0xC, size 0x4
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
// total size: 0x1C
class xAnimTable {
    // Members
public:
    class xAnimTable * Next; // offset 0x0, size 0x4
    char * Name; // offset 0x4, size 0x4
    class xAnimTransition * TransitionList; // offset 0x8, size 0x4
    class xAnimState * StateList; // offset 0xC, size 0x4
    unsigned int AnimIndex; // offset 0x10, size 0x4
    unsigned int MorphIndex; // offset 0x14, size 0x4
    unsigned int UserFlags; // offset 0x18, size 0x4
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
// total size: 0x84F8
class layout {
    // Members
public:
    class xtextbox tb; // offset 0x0, size 0x68
    class jot _jots[512]; // offset 0x68, size 0x7000
    unsigned int _jots_size; // offset 0x7068, size 0x4
    class jot_line _lines[128]; // offset 0x706C, size 0x1000
    unsigned int _lines_size; // offset 0x806C, size 0x4
    unsigned char context_buffer[1024]; // offset 0x8070, size 0x400
    unsigned int context_buffer_size; // offset 0x8470, size 0x4
    unsigned short dynamics[64]; // offset 0x8474, size 0x80
    unsigned int dynamics_size; // offset 0x84F4, size 0x4
};
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
// total size: 0xC
class xVec3 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x6C
class xModelInstance {
    // Members
public:
    class xModelInstance * Next; // offset 0x0, size 0x4
    class xModelInstance * Parent; // offset 0x4, size 0x4
    class xModelPool * Pool; // offset 0x8, size 0x4
    class xAnimPlay * Anim; // offset 0xC, size 0x4
    class RpAtomic * Data; // offset 0x10, size 0x4
    unsigned int PipeFlags; // offset 0x14, size 0x4
    float RedMultiplier; // offset 0x18, size 0x4
    float GreenMultiplier; // offset 0x1C, size 0x4
    float BlueMultiplier; // offset 0x20, size 0x4
    float Alpha; // offset 0x24, size 0x4
    float FadeStart; // offset 0x28, size 0x4
    float FadeEnd; // offset 0x2C, size 0x4
    class xSurface * Surf; // offset 0x30, size 0x4
    class xModelBucket * * Bucket; // offset 0x34, size 0x4
    class xModelInstance * BucketNext; // offset 0x38, size 0x4
    class xLightKit * LightKit; // offset 0x3C, size 0x4
    void * Object; // offset 0x40, size 0x4
    unsigned short Flags; // offset 0x44, size 0x2
    unsigned char BoneCount; // offset 0x46, size 0x1
    unsigned char BoneIndex; // offset 0x47, size 0x1
    unsigned char * BoneRemap; // offset 0x48, size 0x4
    class RwMatrixTag * Mat; // offset 0x4C, size 0x4
    class xVec3 Scale; // offset 0x50, size 0xC
    unsigned int modelID; // offset 0x5C, size 0x4
    unsigned int shadowID; // offset 0x60, size 0x4
    class RpAtomic * shadowmapAtomic; // offset 0x64, size 0x4
    // total size: 0x4
    class /* @class */ {
        // Members
    public:
        class xVec3 * verts; // offset 0x0, size 0x4
    } anim_coll; // offset 0x68, size 0x4
};
// total size: 0xC
class RwSurfaceProperties {
    // Members
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
// total size: 0x8
class tag_entry_list {
    // Members
public:
    class tag_entry * entries; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
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
// total size: 0xC
class rxHeapSuperBlockDescriptor {
    // Members
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
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
// total size: 0x0
class rxReq {};
// total size: 0x10
class xLightKit {
    // Members
public:
    unsigned int tagID; // offset 0x0, size 0x4
    unsigned int groupID; // offset 0x4, size 0x4
    unsigned int lightCount; // offset 0x8, size 0x4
    class xLightKitLight * lightList; // offset 0xC, size 0x4
};
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
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
    void (* BeforeEnter)(class xAnimPlay *, class xAnimState *); // offset 0x40, size 0x4
    void (* StateCallback)(class xAnimState *, class xAnimSingle *, void *); // offset 0x44, size 0x4
    void (* BeforeAnimMatrices)(class xAnimPlay *, class xQuat *, class xVec3 *, signed int); // offset 0x48, size 0x4
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
// total size: 0x8
class xAnimMultiFileEntry {
    // Members
public:
    unsigned int ID; // offset 0x0, size 0x4
    class xAnimFile * File; // offset 0x4, size 0x4
};
// total size: 0x8
class xAnimActiveEffect {
    // Members
public:
    class xAnimEffect * Effect; // offset 0x0, size 0x4
    unsigned int Handle; // offset 0x4, size 0x4
};
// total size: 0x40
class xMat4x3 : public xMat3x3 {
    // Members
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x20
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
};
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x40
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
    unsigned int pad; // offset 0x3C, size 0x4
};
// total size: 0x8
class rxHeapFreeBlock {
    // Members
public:
    unsigned int size; // offset 0x0, size 0x4
    class rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
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
// total size: 0x28
class tex_tag_context {
    // Members
public:
    class RwRaster * raster; // offset 0x0, size 0x4
    float rot; // offset 0x4, size 0x4
    class basic_rect src; // offset 0x8, size 0x10
    class basic_rect dst; // offset 0x18, size 0x10
};
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x10
class xSphere {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
// total size: 0xC
class model_cache_entry {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int order; // offset 0x4, size 0x4
    class xModelInstance * model; // offset 0x8, size 0x4
};
// total size: 0x4
class xAnimMultiFileBase {
    // Members
public:
    unsigned int Count; // offset 0x0, size 0x4
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
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x4
class /* @class */ {
    // Members
public:
    class xVec3 * verts; // offset 0x0, size 0x4
};
// total size: 0x14
class xAnimEffect {
    // Members
public:
    class xAnimEffect * Next; // offset 0x0, size 0x4
    unsigned int Flags; // offset 0x4, size 0x4
    float StartTime; // offset 0x8, size 0x4
    float EndTime; // offset 0xC, size 0x4
    unsigned int (* Callback)(unsigned int, class xAnimActiveEffect *, class xAnimSingle *, void *); // offset 0x10, size 0x4
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
// total size: 0x10
class RxClusterDefinition {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    char * attributeSet; // offset 0xC, size 0x4
};
enum /* @enum */ {
    SCALE_FONT = 0,
    SCALE_SCREEN = 1,
    SCALE_SIZE = 2,
};
// total size: 0x8508
class tl_cache_entry {
    // Members
public:
    unsigned int used; // offset 0x0, size 0x4
    signed long last_used; // offset 0x8, size 0x4
    class layout tl; // offset 0x10, size 0x84F8
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
// total size: 0xC
class xAnimMultiFile : public xAnimMultiFileBase {
    // Members
public:
    class xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
};
// total size: 0x10
class RwSphere {
    // Members
public:
    class RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
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
// total size: 0x18
class RwTexDictionary {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
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
// total size: 0xC
class RxOutputSpec {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
};
// total size: 0x24
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
    class RwRaster * textureraster; // offset 0x1C, size 0x4
    enum RwTextureFilterMode filter; // offset 0x20, size 0x4
};
// total size: 0xC
class RpMaterialList {
    // Members
public:
    class RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
};
// total size: 0x8
class /* @class */ {
    // Members
public:
    char * s; // offset 0x0, size 0x4
    char * end; // offset 0x4, size 0x4
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
// total size: 0xC
class RxClusterRef {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
// total size: 0xC
class xModelPool {
    // Members
public:
    class xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
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
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
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
// total size: 0x8
class RxPipelineCluster {
    // Members
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
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
// total size: 0xC
class callback {
    // Members
public:
    void (* render)(class jot &, class xtextbox &, float, float); // offset 0x0, size 0x4
    void (* layout_update)(class jot &, class xtextbox &, class xtextbox &); // offset 0x4, size 0x4
    void (* render_update)(class jot &, class xtextbox &, class xtextbox &); // offset 0x8, size 0x4
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
    signed int (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *); // offset 0xC, size 0x4
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
// total size: 0x8
class RxPipelineNodeParam {
    // Members
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
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
// total size: 0x4
class /* @class */ {
    // Members
public:
    signed short x; // offset 0x0, size 0x2
    signed short y; // offset 0x2, size 0x2
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
// total size: 0x10
class RwRGBAReal {
    // Members
public:
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
};
// total size: 0x14
class RwObjectHasFrame {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
};
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
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
// total size: 0x2
class /* @class */ {
    // Members
public:
    unsigned char offset; // offset 0x0, size 0x1
    unsigned char size; // offset 0x1, size 0x1
};
// total size: 0x8
class xBaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DA720 -> 0x001DA978
*/
// Range: 0x1DA720 -> 0x1DA978
void render_fill_rect(class basic_rect & bounds /* r16 */, class iColor_tag color /* r29+0x4C */) {
    /* anonymous block */ {
        // Range: 0x1DA720 -> 0x1DA978
        float rcz; // r21
        float nsz; // r20
        class RwSky2DVertex vert[4]; // r29+0x60
        class basic_rect r; // r29+0x50
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DA980 -> 0x001DAA74
*/
// Range: 0x1DA980 -> 0x1DAA74
static void set_rect_vert(class RwSky2DVertex & vert /* r2 */, float x /* r29+0x10 */, float y /* r29+0x10 */, float z /* r29+0x10 */, class iColor_tag c /* r29+0xC */, float rcz /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x1DA980 -> 0x1DAA74
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DAA80 -> 0x001DAB58
*/
// Range: 0x1DAA80 -> 0x1DAB58
class tag_type * find_format_tag(class substr & s /* r19 */, signed int & index /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1DAA80 -> 0x1DAB58
        signed int start; // r17
        signed int end; // r16
        class tag_type & t; // r20
        signed int c; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DAB60 -> 0x001DAD70
*/
// Range: 0x1DAB60 -> 0x1DAD70
void register_tags(class tag_type * t /* r2 */, unsigned int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DAB60 -> 0x1DAD70
        class tag_type * s1; // r20
        class tag_type * s2; // r19
        class tag_type * end1; // r18
        class tag_type * end2; // r17
        class tag_type * d; // r16
        signed int c; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DAD70 -> 0x001DAF20
*/
// Range: 0x1DAD70 -> 0x1DAF20
static void parse_tag_timer(class jot & j /* r16 */, class split_tag & ti /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DAD70 -> 0x1DAF20
        unsigned int id; // r2
        class xTimer * ta; // r2
        char buffer[64]; // r29+0x20
        unsigned int sec; // r4
        unsigned int mn; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DAF20 -> 0x001DAF60
*/
// Range: 0x1DAF20 -> 0x1DAF60
static void parse_tag_pop(class split_tag & ti /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DAF20 -> 0x1DAF60
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DAF60 -> 0x001DB040
*/
// Range: 0x1DAF60 -> 0x1DB040
static void parse_tag_insert_hash(class jot & j /* r16 */, class split_tag & ti /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DAF60 -> 0x1DB040
        class xTextAsset * ta; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DB040 -> 0x001DB118
*/
// Range: 0x1DB040 -> 0x1DB118
static void parse_tag_insert(class jot & j /* r16 */, class split_tag & ti /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DB040 -> 0x1DB118
        unsigned int id; // r2
        class xTextAsset * ta; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DB120 -> 0x001DB1C8
*/
// Range: 0x1DB120 -> 0x1DB1C8
static void reset_tag_tex() {
    /* anonymous block */ {
        // Range: 0x1DB120 -> 0x1DB1C8
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DB1D0 -> 0x001DB62C
*/
// Range: 0x1DB1D0 -> 0x1DB62C
static void parse_tag_tex(class jot & a /* r17 */, class xtextbox & tb /* r16 */, class split_tag & ti /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DB1D0 -> 0x1DB62C
        class tex_tag_context & ttc; // r3
        class callback cb; // @ 0x004F7F38
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DB630 -> 0x001DB718
*/
// Range: 0x1DB630 -> 0x1DB718
static void render_tag_tex(class jot & j /* r2 */, class xtextbox & tb /* r18 */, float x /* r21 */, float y /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1DB630 -> 0x1DB718
        class tex_tag_context & ttc; // r17
        class basic_rect dst; // r29+0x50
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DB720 -> 0x001DB7B8
*/
// Range: 0x1DB720 -> 0x1DB7B8
static void reset_tag_model() {
    /* anonymous block */ {
        // Range: 0x1DB720 -> 0x1DB7B8
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DB7C0 -> 0x001DBA44
*/
// Range: 0x1DB7C0 -> 0x1DBA44
static void parse_tag_model(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DB7C0 -> 0x1DBA44
        class model_tag_context & mtc; // r16
        class callback cb; // @ 0x004F7F28
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DBA50 -> 0x001DBC60
*/
// Range: 0x1DBA50 -> 0x1DBC60
static void render_tag_model(class jot & j /* r2 */, class xtextbox & tb /* r17 */, float x /* r29+0xA0 */, float y /* r29+0xA0 */) {
    /* anonymous block */ {
        // Range: 0x1DBA50 -> 0x1DBC60
        class model_tag_context & mtc; // r16
        class basic_rect dst; // r29+0x70
        class xVec3 from; // r29+0x90
        class xVec3 to; // r29+0x80
        class xMat4x3 frame; // r29+0x30
        float scale; // r9
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DBC60 -> 0x001DBC7C
*/
// Range: 0x1DBC60 -> 0x1DBC7C
static void parse_tag_page_break(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DBC60 -> 0x1DBC7C
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DBC80 -> 0x001DBC9C
*/
// Range: 0x1DBC80 -> 0x1DBC9C
static void parse_tag_word_break(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DBC80 -> 0x1DBC9C
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DBCA0 -> 0x001DBCBC
*/
// Range: 0x1DBCA0 -> 0x1DBCBC
static void parse_tag_tab(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DBCA0 -> 0x1DBCBC
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DBCC0 -> 0x001DBDD0
*/
// Range: 0x1DBCC0 -> 0x1DBDD0
static void parse_tag_newline(class jot & a /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DBCC0 -> 0x1DBDD0
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DBDD0 -> 0x001DBED4
*/
// Range: 0x1DBDD0 -> 0x1DBED4
static void parse_tag_open_curly(class jot & a /* r2 */, class xtextbox & tb /* r2 */, class split_tag & ti /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DBDD0 -> 0x1DBED4
        char c; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DBEE0 -> 0x001DBEF0
*/
// Range: 0x1DBEE0 -> 0x1DBEF0
static void reset_tag_yjustify(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DBEE0 -> 0x1DBEF0
        class callback cb; // @ 0x004F7F18
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DBEF0 -> 0x001DC088
*/
// Range: 0x1DBEF0 -> 0x1DC088
static void parse_tag_yjustify(class jot & a /* r18 */, class split_tag & ti /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1DBEF0 -> 0x1DC088
        unsigned int & flags; // r16
        class callback cb; // @ 0x004F7F08
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC090 -> 0x001DC0B0
*/
// Range: 0x1DC090 -> 0x1DC0B0
static void update_tag_reset_yjustify(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DC090 -> 0x1DC0B0
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC0B0 -> 0x001DC0D0
*/
// Range: 0x1DC0B0 -> 0x1DC0D0
static void update_tag_yjustify(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DC0B0 -> 0x1DC0D0
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC0D0 -> 0x001DC0E0
*/
// Range: 0x1DC0D0 -> 0x1DC0E0
static void reset_tag_xjustify(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DC0D0 -> 0x1DC0E0
        class callback cb; // @ 0x004F7EF8
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC0E0 -> 0x001DC278
*/
// Range: 0x1DC0E0 -> 0x1DC278
static void parse_tag_xjustify(class jot & a /* r18 */, class split_tag & ti /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1DC0E0 -> 0x1DC278
        unsigned int & flags; // r16
        class callback cb; // @ 0x004F7EE8
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC280 -> 0x001DC2A0
*/
// Range: 0x1DC280 -> 0x1DC2A0
static void update_tag_reset_xjustify(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DC280 -> 0x1DC2A0
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC2A0 -> 0x001DC2C0
*/
// Range: 0x1DC2A0 -> 0x1DC2C0
static void update_tag_xjustify(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DC2A0 -> 0x1DC2C0
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC2C0 -> 0x001DC2D0
*/
// Range: 0x1DC2C0 -> 0x1DC2D0
static void reset_tag_wrap(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DC2C0 -> 0x1DC2D0
        class callback cb; // @ 0x004F7ED8
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC2D0 -> 0x001DC3C8
*/
// Range: 0x1DC2D0 -> 0x1DC3C8
static void parse_tag_wrap(class jot & a /* r17 */, class split_tag & ti /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1DC2D0 -> 0x1DC3C8
        unsigned int & flags; // r18
        class callback cb; // @ 0x004F7EC8
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC3D0 -> 0x001DC3F0
*/
// Range: 0x1DC3D0 -> 0x1DC3F0
static void update_tag_reset_wrap(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DC3D0 -> 0x1DC3F0
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC3F0 -> 0x001DC410
*/
// Range: 0x1DC3F0 -> 0x1DC410
static void update_tag_wrap(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DC3F0 -> 0x1DC410
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC410 -> 0x001DC420
*/
// Range: 0x1DC410 -> 0x1DC420
static void reset_tag_font(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DC410 -> 0x1DC420
        class callback cb; // @ 0x004F7EB8
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC420 -> 0x001DC4AC
*/
// Range: 0x1DC420 -> 0x1DC4AC
static void parse_tag_font(class jot & a /* r16 */, class split_tag & ti /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DC420 -> 0x1DC4AC
        unsigned int & id; // r17
        class callback cb; // @ 0x004F7EA8
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC4B0 -> 0x001DC4BC
*/
// Range: 0x1DC4B0 -> 0x1DC4BC
static void update_tag_reset_font(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DC4B0 -> 0x1DC4BC
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC4C0 -> 0x001DC4CC
*/
// Range: 0x1DC4C0 -> 0x1DC4CC
static void update_tag_font(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DC4C0 -> 0x1DC4CC
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC4D0 -> 0x001DC4E0
*/
// Range: 0x1DC4D0 -> 0x1DC4E0
static void reset_tag_color(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DC4D0 -> 0x1DC4E0
        class callback cb; // @ 0x004F7E98
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC4E0 -> 0x001DC71C
*/
// Range: 0x1DC4E0 -> 0x1DC71C
static void parse_tag_color(class jot & a /* r19 */, class xtextbox & tb /* r18 */, class split_tag & ti /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1DC4E0 -> 0x1DC71C
        class iColor_tag & color; // r16
        unsigned int v; // r3
        unsigned int temp; // r4
        class callback cb; // @ 0x004F7E88
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC720 -> 0x001DC744
*/
// Range: 0x1DC720 -> 0x1DC744
static void update_tag_reset_color(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DC720 -> 0x1DC744
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC750 -> 0x001DC774
*/
// Range: 0x1DC750 -> 0x1DC774
static void update_tag_color(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DC750 -> 0x1DC774
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC780 -> 0x001DC790
*/
// Range: 0x1DC780 -> 0x1DC790
static void reset_tag_all(class jot & j /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DC780 -> 0x1DC790
        class callback cb; // @ 0x004F7E78
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC790 -> 0x001DC864
*/
// Range: 0x1DC790 -> 0x1DC864
static void update_tag_reset_all(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DC790 -> 0x1DC864
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC870 -> 0x001DC880
*/
// Range: 0x1DC870 -> 0x1DC880
static void reset_tag_yspace(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DC870 -> 0x1DC880
        class callback cb; // @ 0x004F7E68
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC880 -> 0x001DC9B4
*/
// Range: 0x1DC880 -> 0x1DC9B4
static void parse_tag_yspace(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1DC880 -> 0x1DC9B4
        float & v; // r16
        class callback cb; // @ 0x004F7E58
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC9C0 -> 0x001DC9CC
*/
// Range: 0x1DC9C0 -> 0x1DC9CC
static void update_tag_reset_yspace(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DC9C0 -> 0x1DC9CC
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC9D0 -> 0x001DC9DC
*/
// Range: 0x1DC9D0 -> 0x1DC9DC
static void update_tag_yspace(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DC9D0 -> 0x1DC9DC
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC9E0 -> 0x001DC9F0
*/
// Range: 0x1DC9E0 -> 0x1DC9F0
static void reset_tag_xspace(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DC9E0 -> 0x1DC9F0
        class callback cb; // @ 0x004F7E48
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC9F0 -> 0x001DCB24
*/
// Range: 0x1DC9F0 -> 0x1DCB24
static void parse_tag_xspace(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1DC9F0 -> 0x1DCB24
        float & v; // r16
        class callback cb; // @ 0x004F7E38
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCB30 -> 0x001DCB3C
*/
// Range: 0x1DCB30 -> 0x1DCB3C
static void update_tag_reset_xspace(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DCB30 -> 0x1DCB3C
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCB40 -> 0x001DCB4C
*/
// Range: 0x1DCB40 -> 0x1DCB4C
static void update_tag_xspace(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DCB40 -> 0x1DCB4C
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCB50 -> 0x001DCB60
*/
// Range: 0x1DCB50 -> 0x1DCB60
static void reset_tag_tab_stop(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DCB50 -> 0x1DCB60
        class callback cb; // @ 0x004F7E28
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCB60 -> 0x001DCC8C
*/
// Range: 0x1DCB60 -> 0x1DCC8C
static void parse_tag_tab_stop(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1DCB60 -> 0x1DCC8C
        float & v; // r16
        class callback cb; // @ 0x004F7E18
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCC90 -> 0x001DCC9C
*/
// Range: 0x1DCC90 -> 0x1DCC9C
static void update_tag_reset_tab_stop(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DCC90 -> 0x1DCC9C
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCCA0 -> 0x001DCCAC
*/
// Range: 0x1DCCA0 -> 0x1DCCAC
static void update_tag_tab_stop(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DCCA0 -> 0x1DCCAC
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCCB0 -> 0x001DCCC0
*/
// Range: 0x1DCCB0 -> 0x1DCCC0
static void reset_tag_right_indent(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DCCB0 -> 0x1DCCC0
        class callback cb; // @ 0x004F7E08
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCCC0 -> 0x001DCDF4
*/
// Range: 0x1DCCC0 -> 0x1DCDF4
static void parse_tag_right_indent(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1DCCC0 -> 0x1DCDF4
        float & v; // r16
        class callback cb; // @ 0x004F7DF8
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCE00 -> 0x001DCE0C
*/
// Range: 0x1DCE00 -> 0x1DCE0C
static void update_tag_reset_right_indent(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DCE00 -> 0x1DCE0C
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCE10 -> 0x001DCE1C
*/
// Range: 0x1DCE10 -> 0x1DCE1C
static void update_tag_right_indent(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DCE10 -> 0x1DCE1C
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCE20 -> 0x001DCE30
*/
// Range: 0x1DCE20 -> 0x1DCE30
static void reset_tag_left_indent(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DCE20 -> 0x1DCE30
        class callback cb; // @ 0x004F7DE8
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCE30 -> 0x001DCF64
*/
// Range: 0x1DCE30 -> 0x1DCF64
static void parse_tag_left_indent(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1DCE30 -> 0x1DCF64
        float & v; // r16
        class callback cb; // @ 0x004F7DD8
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCF70 -> 0x001DCF7C
*/
// Range: 0x1DCF70 -> 0x1DCF7C
static void update_tag_reset_left_indent(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DCF70 -> 0x1DCF7C
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCF80 -> 0x001DCF8C
*/
// Range: 0x1DCF80 -> 0x1DCF8C
static void update_tag_left_indent(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DCF80 -> 0x1DCF8C
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCF90 -> 0x001DCFA0
*/
// Range: 0x1DCF90 -> 0x1DCFA0
static void reset_tag_height(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DCF90 -> 0x1DCFA0
        class callback cb; // @ 0x004F7DC8
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCFA0 -> 0x001DD0CC
*/
// Range: 0x1DCFA0 -> 0x1DD0CC
static void parse_tag_height(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1DCFA0 -> 0x1DD0CC
        float & v; // r16
        class callback cb; // @ 0x004F7DB8
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD0D0 -> 0x001DD0DC
*/
// Range: 0x1DD0D0 -> 0x1DD0DC
static void update_tag_reset_height(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DD0D0 -> 0x1DD0DC
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD0E0 -> 0x001DD0EC
*/
// Range: 0x1DD0E0 -> 0x1DD0EC
static void update_tag_height(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DD0E0 -> 0x1DD0EC
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD0F0 -> 0x001DD100
*/
// Range: 0x1DD0F0 -> 0x1DD100
static void reset_tag_width(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DD0F0 -> 0x1DD100
        class callback cb; // @ 0x004F7DA8
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD100 -> 0x001DD22C
*/
// Range: 0x1DD100 -> 0x1DD22C
static void parse_tag_width(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1DD100 -> 0x1DD22C
        float & v; // r16
        class callback cb; // @ 0x004F7D98
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD230 -> 0x001DD23C
*/
// Range: 0x1DD230 -> 0x1DD23C
static void update_tag_reset_width(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DD230 -> 0x1DD23C
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD240 -> 0x001DD24C
*/
// Range: 0x1DD240 -> 0x1DD24C
static void update_tag_width(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DD240 -> 0x1DD24C
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD250 -> 0x001DD260
*/
// Range: 0x1DD250 -> 0x1DD260
static void reset_tag_blue(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DD250 -> 0x1DD260
        class callback cb; // @ 0x004F7D88
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD260 -> 0x001DD3FC
*/
// Range: 0x1DD260 -> 0x1DD3FC
static void parse_tag_blue(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1DD260 -> 0x1DD3FC
        float & v; // r16
        class callback cb; // @ 0x004F7D78
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD400 -> 0x001DD40C
*/
// Range: 0x1DD400 -> 0x1DD40C
static void update_tag_reset_blue(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DD400 -> 0x1DD40C
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD410 -> 0x001DD478
*/
// Range: 0x1DD410 -> 0x1DD478
static void update_tag_blue(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DD410 -> 0x1DD478
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD480 -> 0x001DD490
*/
// Range: 0x1DD480 -> 0x1DD490
static void reset_tag_green(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DD480 -> 0x1DD490
        class callback cb; // @ 0x004F7D68
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD490 -> 0x001DD62C
*/
// Range: 0x1DD490 -> 0x1DD62C
static void parse_tag_green(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1DD490 -> 0x1DD62C
        float & v; // r16
        class callback cb; // @ 0x004F7D58
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD630 -> 0x001DD63C
*/
// Range: 0x1DD630 -> 0x1DD63C
static void update_tag_reset_green(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DD630 -> 0x1DD63C
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD640 -> 0x001DD6A8
*/
// Range: 0x1DD640 -> 0x1DD6A8
static void update_tag_green(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DD640 -> 0x1DD6A8
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD6B0 -> 0x001DD6C0
*/
// Range: 0x1DD6B0 -> 0x1DD6C0
static void reset_tag_red(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DD6B0 -> 0x1DD6C0
        class callback cb; // @ 0x004F7D48
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD6C0 -> 0x001DD85C
*/
// Range: 0x1DD6C0 -> 0x1DD85C
static void parse_tag_red(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1DD6C0 -> 0x1DD85C
        float & v; // r16
        class callback cb; // @ 0x004F7D38
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD860 -> 0x001DD86C
*/
// Range: 0x1DD860 -> 0x1DD86C
static void update_tag_reset_red(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DD860 -> 0x1DD86C
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD870 -> 0x001DD8D8
*/
// Range: 0x1DD870 -> 0x1DD8D8
static void update_tag_red(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DD870 -> 0x1DD8D8
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD8E0 -> 0x001DD8F0
*/
// Range: 0x1DD8E0 -> 0x1DD8F0
static void reset_tag_alpha(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DD8E0 -> 0x1DD8F0
        class callback cb; // @ 0x004F7D28
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD8F0 -> 0x001DDA8C
*/
// Range: 0x1DD8F0 -> 0x1DDA8C
static void parse_tag_alpha(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1DD8F0 -> 0x1DDA8C
        float & v; // r16
        class callback cb; // @ 0x004F7D18
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DDA90 -> 0x001DDA9C
*/
// Range: 0x1DDA90 -> 0x1DDA9C
static void update_tag_reset_alpha(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DDA90 -> 0x1DDA9C
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DDAA0 -> 0x001DDB08
*/
// Range: 0x1DDAA0 -> 0x1DDB08
static void update_tag_alpha(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DDAA0 -> 0x1DDB08
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DDB10 -> 0x001DDD1C
*/
// Range: 0x1DDB10 -> 0x1DDD1C
// this: r22
unsigned char layout::changed(class xtextbox & ctb /* r21 */) {
    /* anonymous block */ {
        // Range: 0x1DDB10 -> 0x1DDD1C
        unsigned int flags1; // r5
        unsigned int flags2; // r4
        signed int i; // r20
        class jot & j; // r19
        unsigned int oldval; // r18
        unsigned int val; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DDD20 -> 0x001DDE60
*/
// Range: 0x1DDD20 -> 0x1DDE60
// this: r2
float layout::yextent(float max /* r29 */, signed int & size /* r2 */, signed int begin_jot /* r2 */, signed int end_jot /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DDD20 -> 0x1DDE60
        signed int begin_line; // r11
        float top; // r2
        signed int i; // r10
        class jot_line & line; // r9
        class jot_line & line; // r4
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DDE60 -> 0x001DE368
*/
// Range: 0x1DDE60 -> 0x1DE368
// this: r21
void layout::render(class xtextbox & ctb /* r20 */, signed int begin_jot /* r19 */, signed int end_jot /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1DDE60 -> 0x1DE368
        signed int begin_line; // r17
        signed int i; // r16
        class jot & j; // r2
        float top; // r22
        unsigned int li; // r3
        signed int line_last; // r23
        float x; // r21
        float y; // r20
        signed int i; // r2
        class jot_line & line; // r4
        unsigned int xj; // r3
        class jot & j; // r17
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DE370 -> 0x001DE980
*/
// Range: 0x1DE370 -> 0x1DE980
// this: r21
void layout::calc(class xtextbox & ctb /* r30 */, unsigned int start_text /* r23 */) {
    /* anonymous block */ {
        // Range: 0x1DE370 -> 0x1DE980
        class jot_line & first_line; // r2
        // total size: 0x8
        class /* @class */ {
            // Members
        public:
            char * s; // offset 0x0, size 0x4
            char * end; // offset 0x4, size 0x4
        } text_stack[16]; // r29+0xB0
        unsigned int text_stack_size; // r20
        unsigned int text_index; // r2
        char * s; // r19
        char * end; // r18
        class jot & a; // r17
        class jot_line & line; // r16
        class jot_line & last_line; // r5
        unsigned int i; // r6
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DE980 -> 0x001DEAF4
*/
// Range: 0x1DE980 -> 0x1DEAF4
// this: r17
unsigned char layout::fit_line() {
    /* anonymous block */ {
        // Range: 0x1DE980 -> 0x1DEAF4
        class jot_line & line; // r16
        signed int i; // r6
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DEB00 -> 0x001DEC24
*/
// Range: 0x1DEB00 -> 0x1DEC24
// this: r2
void layout::bound_line(class jot_line & line /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DEB00 -> 0x1DEC24
        unsigned int i; // r8
        class jot & a; // r6
        unsigned int i; // r8
        class jot & a; // r6
        float total_height; // r1
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DEC30 -> 0x001DEEFC
*/
// Range: 0x1DEC30 -> 0x1DEEFC
// this: r2
void layout::merge_line(class jot_line & line /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DEC30 -> 0x1DEEFC
        unsigned int d; // r10
        unsigned int i; // r9
        class jot & a1; // r8
        class jot & a2; // r7
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DEF00 -> 0x001DF180
*/
// Range: 0x1DEF00 -> 0x1DF180
// this: r2
void layout::trim_line(class jot_line & line /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DEF00 -> 0x1DF180
        signed int i; // r3
        class jot & a; // r2
        unsigned int i; // r3
        class jot & a; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DF180 -> 0x001DF2D4
*/
// Range: 0x1DF180 -> 0x1DF2D4
// this: r16
void layout::clear() {
    /* anonymous block */ {
        // Range: 0x1DF180 -> 0x1DF2D4
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DF4A0 -> 0x001DF59C
*/
// Range: 0x1DF4A0 -> 0x1DF59C
// this: r2
void layout::refresh_end(class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DF4A0 -> 0x1DF59C
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DF5A0 -> 0x001DF6C4
*/
// Range: 0x1DF5A0 -> 0x1DF6C4
// this: r17
void layout::refresh(class xtextbox & tb /* r16 */, unsigned char force /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DF5A0 -> 0x1DF6C4
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DF6D0 -> 0x001DF724
*/
// Range: 0x1DF6D0 -> 0x1DF724
void clear_layout_cache() {
    /* anonymous block */ {
        // Range: 0x1DF6D0 -> 0x1DF724
        unsigned int index; // r17
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DF730 -> 0x001DF7C4
*/
// Range: 0x1DF730 -> 0x1DF7C4
unsigned int read_list(class tag_entry & e /* r17 */, signed int * v /* r2 */, unsigned int vsize /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DF730 -> 0x1DF7C4
        unsigned int total; // r16
        unsigned int i; // r20
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DF7D0 -> 0x001DF864
*/
// Range: 0x1DF7D0 -> 0x1DF864
unsigned int read_list(class tag_entry & e /* r17 */, float * v /* r2 */, unsigned int vsize /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DF7D0 -> 0x1DF864
        unsigned int total; // r16
        unsigned int i; // r20
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DF870 -> 0x001DF910
*/
// Range: 0x1DF870 -> 0x1DF910
class tag_entry * find_entry(class tag_entry_list & el /* r18 */, class substr & name /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1DF870 -> 0x1DF910
        unsigned int i; // r16
        class tag_entry & e; // r20
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DF910 -> 0x001DFDAC
*/
// Range: 0x1DF910 -> 0x1DFDAC
class tag_entry_list read_tag(class substr & s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DF910 -> 0x1DFDAC
        unsigned int entries_used; // r20
        class substr it; // r29+0x88
        class substr delims; // r29+0x80
        class substr sub_delims; // r29+0x78
        class tag_entry & entry; // r19
        char * d; // r2
        class substr & arg; // r18
        char * d; // r2
        class tag_entry_list ret; // r29+0x70
        class substr arg_buffer[32]; // @ 0x00560680
        class tag_entry entry_buffer[16]; // @ 0x00560780
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DFDB0 -> 0x001DFDC0
*/
// Range: 0x1DFDB0 -> 0x1DFDC0
float yextent(float max /* r29 */, signed int & size /* r2 */, class layout & l /* r2 */, signed int begin_jot /* r2 */, signed int end_jot /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DFDB0 -> 0x1DFDC0
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DFDC0 -> 0x001DFDD0
*/
// Range: 0x1DFDC0 -> 0x1DFDD0
// this: r2
void xtextbox::render(class layout & l /* r2 */, signed int begin_jot /* r2 */, signed int end_jot /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DFDC0 -> 0x1DFDD0
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DFDD0 -> 0x001E0128
*/
// Range: 0x1DFDD0 -> 0x1E0128
// this: r20
class layout & xtextbox::temp_layout(unsigned char cache /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1DFDD0 -> 0x1E0128
        signed long cur_time; // r18
        unsigned char refresh; // r17
        unsigned int index; // r16
        signed int min_used; // r6
        unsigned int i; // r5
        signed int used; // r4
        class tl_cache_entry & e; // r16
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E0130 -> 0x001E0238
*/
// Range: 0x1E0130 -> 0x1E0238
// this: r20
void xtextbox::set_text(char * * texts /* r2 */, unsigned int * text_sizes /* r2 */, unsigned int size /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1E0130 -> 0x1E0238
        unsigned int i; // r17
        unsigned int i; // r18
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E0240 -> 0x001E024C
*/
// Range: 0x1E0240 -> 0x1E024C
// this: r2
void xtextbox::set_text(char * * texts /* r2 */, unsigned int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1E0240 -> 0x1E024C
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E0250 -> 0x001E0294
*/
// Range: 0x1E0250 -> 0x1E0294
// this: r2
void xtextbox::set_text(char * text /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1E0250 -> 0x1E0294
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E02A0 -> 0x001E02B4
*/
// Range: 0x1E02A0 -> 0x1E02B4
void text_render(class jot & j /* r2 */, class xtextbox & tb /* r2 */, float x /* r29 */, float y /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1E02A0 -> 0x1E02B4
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E02C0 -> 0x001E03D8
*/
// Range: 0x1E02C0 -> 0x1E03D8
static void start_layout() {
    /* anonymous block */ {
        // Range: 0x1E02C0 -> 0x1E03D8
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E03E0 -> 0x001E0944
*/
// Range: 0x1E03E0 -> 0x1E0944
static void load_model_args(class model_args & ma /* r16 */, class substr & s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1E03E0 -> 0x1E0944
        class tag_entry_list el; // r29+0xE8
        class tag_entry * e; // r21
        class substr & name; // r2
        unsigned int id; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E0950 -> 0x001E12EC
*/
// Range: 0x1E0950 -> 0x1E12EC
static void load_tex_args(class tex_args & ta /* r16 */, class substr & s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1E0950 -> 0x1E12EC
        class tag_entry_list el; // r29+0x170
        class tag_entry * e; // r21
        class substr & name; // r17
        unsigned int id; // r2
        class RwTexture * texture; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E12F0 -> 0x001E1508
*/
// Range: 0x1E12F0 -> 0x1E1508
static char * parse_next_text_jot(class jot & a /* r2 */, class xtextbox & tb /* r2 */, char * text /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1E12F0 -> 0x1E1508
        char c; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E1510 -> 0x001E171C
*/
// Range: 0x1E1510 -> 0x1E171C
static char * parse_next_tag_jot(class jot & a /* r21 */, class xtextbox & tb /* r20 */, class xtextbox & ctb /* r19 */, char * text /* r18 */, unsigned int text_size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1E1510 -> 0x1E171C
        class split_tag ti; // r29+0x70
        unsigned int size; // r17
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E1720 -> 0x001E1B0C
*/
// Range: 0x1E1720 -> 0x1E1B0C
static unsigned int parse_split_tag(class split_tag & ti /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1E1720 -> 0x1E1B0C
        class substr s; // r29+0x38
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E1B10 -> 0x001E1DD0
*/
// Range: 0x1E1B10 -> 0x1E1DD0
// this: r17
void xfont::irender(char * text /* r23 */, unsigned int text_size /* r30 */, float x /* r21 */, float y /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1E1B10 -> 0x1E1DD0
        class font_data & fd; // r16
        class basic_rect bounds; // r29+0xC0
        unsigned int i; // r21
        unsigned int charIndex; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E1DD0 -> 0x001E1DD8
*/
// Range: 0x1E1DD0 -> 0x1E1DD8
// this: r2
void xfont::irender(char * text /* r2 */, float x /* r29 */, float y /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1E1DD0 -> 0x1E1DD8
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E1DE0 -> 0x001E1EA4
*/
// Range: 0x1E1DE0 -> 0x1E1EA4
void stop_render() {
    /* anonymous block */ {
        // Range: 0x1E1DE0 -> 0x1E1EA4
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E1EB0 -> 0x001E1F18
*/
// Range: 0x1E1EB0 -> 0x1E1F18
// this: r2
void xfont::start_render() {
    /* anonymous block */ {
        // Range: 0x1E1EB0 -> 0x1E1F18
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E1F20 -> 0x001E2088
*/
// Range: 0x1E1F20 -> 0x1E2088
// this: r2
class basic_rect xfont::bounds(char * text /* r2 */, unsigned int text_size /* r2 */, float max_width /* r29+0x10 */, unsigned int & size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1E1F20 -> 0x1E2088
        class font_data & fd; // r13
        class basic_rect r; // r29
        char * s; // r12
        unsigned int i; // r10
        unsigned int charIndex; // r2
        float dx; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E2090 -> 0x001E20BC
*/
// Range: 0x1E2090 -> 0x1E20BC
// this: r2
class basic_rect xfont::bounds(char * text /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1E2090 -> 0x1E20BC
        unsigned int size; // r29+0x1C
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E20C0 -> 0x001E2164
*/
// Range: 0x1E20C0 -> 0x1E2164
void restore_render_state() {
    /* anonymous block */ {
        // Range: 0x1E20C0 -> 0x1E2164
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E2170 -> 0x001E228C
*/
// Range: 0x1E2170 -> 0x1E228C
void set_render_state(class RwRaster * raster /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1E2170 -> 0x1E228C
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E2290 -> 0x001E2354
*/
// Range: 0x1E2290 -> 0x1E2354
void init() {
    /* anonymous block */ {
        // Range: 0x1E2290 -> 0x1E2354
        unsigned int i; // r17
        class font_data & fd; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E2360 -> 0x001E24A0
*/
// Range: 0x1E2360 -> 0x1E24A0
static class xModelInstance * load_model(unsigned int id /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1E2360 -> 0x1E24A0
        unsigned int oldest; // r17
        unsigned int i; // r6
        class RpAtomic * mf; // r16
        class model_cache_entry & e; // r3
        class xModelInstance & model; // r17
        unsigned int next_order; // @ 0x0050EEB8
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E24A0 -> 0x001E2654
*/
// Range: 0x1E24A0 -> 0x1E2654
static void init_model_cache() {
    /* anonymous block */ {
        // Range: 0x1E24A0 -> 0x1E2654
        void * data; // r2
        class model_pool & pool; // r16
        class xModelInstance & model; // r3
        class model_cache_entry & e; // r6
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E2660 -> 0x001E2D60
*/
// Range: 0x1E2660 -> 0x1E2D60
static void tex_render(class basic_rect & src /* r2 */, class basic_rect & dst /* r2 */, class basic_rect & clip /* r2 */, class iColor_tag color /* r29+0x6C */) {
    /* anonymous block */ {
        // Range: 0x1E2660 -> 0x1E2D60
        class basic_rect r; // r29+0x80
        class basic_rect rt; // r29+0x70
        class RwSky2DVertex * vert; // r3
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E2D60 -> 0x001E3498
*/
// Range: 0x1E2D60 -> 0x1E3498
static unsigned char init_font_data(class font_data & fd /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1E2D60 -> 0x1E3498
        class font_asset & a; // r16
        signed int height; // r2
        unsigned char i; // r22
        unsigned char c; // r7
        unsigned int tail_index; // r4
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E34A0 -> 0x001E3770
*/
// Range: 0x1E34A0 -> 0x1E3770
static unsigned char reset_font_spacing(class font_asset & a /* r21 */) {
    /* anonymous block */ {
        // Range: 0x1E34A0 -> 0x1E3770
        class RwTexture * tex; // r16
        class basic_rect char_bounds; // r29+0x1C0
        unsigned char baseline_count[256]; // r29+0xC0
        signed int width; // r20
        class RwImage * image; // r19
        class iColor_tag * bits; // r23
        signed int i; // r18
        class basic_rect r; // r29+0xB0
        signed int baseline; // r4
    }
}


/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E3770 -> 0x001E38EC
*/
// Range: 0x1E3770 -> 0x1E38EC
static class basic_rect find_bounds(class iColor_tag * bits /* r2 */, class basic_rect & r /* r2 */, signed int pitch /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1E3770 -> 0x1E38EC
        signed int diff; // r8
        class iColor_tag * endp; // r3
        class iColor_tag * p; // r2
        signed int pmode; // r25
        signed int minx; // r24
        signed int maxx; // r15
        signed int miny; // r14
        signed int maxy; // r13
        signed int y; // r12
        class iColor_tag * endline; // r11
        signed int x; // r10
        class basic_rect b; // r29
    }
}


