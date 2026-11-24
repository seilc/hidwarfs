/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8024F9AC -> 0x802821AC
*/
extern class _GXRenderModeObj GXMpal480IntDf; // size: 0x3C
extern class _GXRenderModeObj GXMpal480ProgSoft; // size: 0x3C
extern class _GXRenderModeObj GXEurgb60Hz480IntDf; // size: 0x3C
extern class _GXRenderModeObj GXPal528IntDf; // size: 0x3C
extern class _GXRenderModeObj GXNtsc480IntDf; // size: 0x3C
extern class _GXRenderModeObj GXNtsc480ProgSoft; // size: 0x3C
// total size: 0x98
class BuilderModule : public Module {};
// total size: 0x98
class BuildMemoryModule : public Module {
    // Members
    bool hackSuppressRenderSwap; // offset 0x95, size 0x1
};
// total size: 0x98
class DisplayModule : public Module {};
// total size: 0x3C
class _GXRenderModeObj {
    // Members
    enum VITVMode viTVmode; // offset 0x0, size 0x4
    unsigned short fbWidth; // offset 0x4, size 0x2
    unsigned short efbHeight; // offset 0x6, size 0x2
    unsigned short xfbHeight; // offset 0x8, size 0x2
    unsigned short viXOrigin; // offset 0xA, size 0x2
    unsigned short viYOrigin; // offset 0xC, size 0x2
    unsigned short viWidth; // offset 0xE, size 0x2
    unsigned short viHeight; // offset 0x10, size 0x2
    enum VIXFBMode xFBmode; // offset 0x14, size 0x4
    unsigned char field_rendering; // offset 0x18, size 0x1
    unsigned char aa; // offset 0x19, size 0x1
    unsigned char sample_pattern[12][2]; // offset 0x1A, size 0x18
    unsigned char vfilter[7]; // offset 0x32, size 0x7
};
enum VITVMode {
    VI_TVMODE_NTSC_INT = 0,
    VI_TVMODE_NTSC_DS = 1,
    VI_TVMODE_NTSC_PROG = 2,
    VI_TVMODE_PAL_INT = 4,
    VI_TVMODE_PAL_DS = 5,
    VI_TVMODE_EURGB60_INT = 20,
    VI_TVMODE_EURGB60_DS = 21,
    VI_TVMODE_EURGB60_PROG = 22,
    VI_TVMODE_MPAL_INT = 8,
    VI_TVMODE_MPAL_DS = 9,
    VI_TVMODE_MPAL_PROG = 10,
    VI_TVMODE_DEBUG_INT = 12,
    VI_TVMODE_DEBUG_PAL_INT = 16,
    VI_TVMODE_DEBUG_PAL_DS = 17,
};
enum VIXFBMode {
    VI_XFBMODE_SF = 0,
    VI_XFBMODE_DF = 1,
};
// total size: 0x80
class GXFifoObj {
    // Members
    unsigned char pad[128]; // offset 0x0, size 0x80
};
// total size: 0x4
class _GXColor {
    // Members
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
// total size: 0x98
class EffectModule : public Module {};
// total size: 0xAC
class DirSmapLight : public DirLight {
    // Members
    class ViewMatrix worldToTexMat; // offset 0x20, size 0x40
    class ViewMatrix worldToDepthMat; // offset 0x60, size 0x40
    class Sampler smapSampler; // offset 0xA0, size 0xC
};
// total size: 0x20
class DirLight {
    // Members
    class Vector dir; // offset 0x0, size 0x10
    class Vector4 color; // offset 0x10, size 0x10
};
enum RenderStage {
    RENDER_STAGE_DEPTH_FIRST = 0,
    RENDER_STAGE_SHADOW_MAP = 1,
    RENDER_STAGE_STENCIL_SHADOW = 2,
    RENDER_STAGE_COLOR = 3,
    MAX_RENDER_STAGE = 4,
};
// total size: 0xC
class StackPoolArray : public PoolArray {};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    int * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x98
class RenderModule : public Module {};
// total size: 0x120
class WiiLightKitTexLookup {
    // Members
    unsigned char pixels[256]; // offset 0x0, size 0x100
    class _GXTexObj tex; // offset 0x100, size 0x20
};
// total size: 0x44
class LightSectorManager {
    // Members
    int dataCount; // offset 0x0, size 0x4
    class LightSectorData * dataList[16]; // offset 0x4, size 0x40
};
// total size: 0x8
class Batcher {
    // Members
    class Command * cmd; // offset 0x0, size 0x4
    class Batcher * next; // offset 0x4, size 0x4
};
// total size: 0x8
class Command {
    // Members
    int size; // offset 0x0, size 0x4
    void (* cb)(class Command * cmd); // offset 0x4, size 0x4
};
// total size: 0x40034
class MaterialDepot {
    // Members
    void (* customSortFunction)(class PreprocessEntry *, int); // offset 0x0, size 0x4
    class VoidList effects; // offset 0x4, size 0x8
    class VoidList materials; // offset 0xC, size 0x8
    bool dirty; // offset 0x14, size 0x1
    unsigned short bucketCheckpoints[7]; // offset 0x16, size 0xE
    unsigned int bufferUsage; // offset 0x24, size 0x4
    unsigned int threadStackUsage; // offset 0x28, size 0x4
    unsigned int maxBufferUsage; // offset 0x2C, size 0x4
    unsigned int maxThreadStackUsage; // offset 0x30, size 0x4
    unsigned int buffer[65536]; // offset 0x34, size 0x40000
};
// total size: 0x20
class PreprocessEntry {
    // Members
    class Material * material; // offset 0x0, size 0x4
    class Effect * effect; // offset 0x4, size 0x4
    signed char checkPoint; // offset 0x8, size 0x1
    unsigned char techIndex; // offset 0x9, size 0x1
    unsigned char lodIndex; // offset 0xA, size 0x1
    unsigned char featureSet; // offset 0xB, size 0x1
    unsigned char stageID; // offset 0xC, size 0x1
    unsigned char passIndex; // offset 0xD, size 0x1
    unsigned char shaderHandle; // offset 0xE, size 0x1
    unsigned char layer; // offset 0xF, size 0x1
    short sortorder; // offset 0x10, size 0x2
    unsigned short pad; // offset 0x12, size 0x2
    class Shader * shader; // offset 0x14, size 0x4
    class RenderMode * renderMode; // offset 0x18, size 0x4
    unsigned short passInfoIndex; // offset 0x1C, size 0x2
    unsigned short bucketIndex; // offset 0x1E, size 0x2
};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class Scene * * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x8
class ShaderRefEntry {
    // Members
    class Effect * effect; // offset 0x0, size 0x4
    unsigned int shaderRefKey; // offset 0x4, size 0x4
};
// total size: 0x1
class less {};
// total size: 0x10
class CircularQueue {
    // Members
    unsigned int start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    unsigned int mask; // offset 0x8, size 0x4
    class MovieData * * pool; // offset 0xC, size 0x4
};
// total size: 0x14
class OutlineSettings {
    // Members
    bool Enable; // offset 0x0, size 0x1
    float Scale; // offset 0x4, size 0x4
    float Width; // offset 0x8, size 0x4
    float FadeNear; // offset 0xC, size 0x4
    float FadeFar; // offset 0x10, size 0x4
};
// total size: 0x20
class ImmediateContext {
    // Members
    class VertexUV * verts; // offset 0x0, size 0x4
    unsigned short * indices; // offset 0x4, size 0x4
    class ImmediateGeometryEntity * geomEnt; // offset 0x8, size 0x4
    class ImmediateGeometry * geom; // offset 0xC, size 0x4
    int vertexCount; // offset 0x10, size 0x4
    int primCount; // offset 0x14, size 0x4
    int indexCount; // offset 0x18, size 0x4
    enum StateEnum state; // offset 0x1C, size 0x4
};
// total size: 0x14
class VertexUV : public ImmediateVertexBase {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float tu; // offset 0xC, size 0x4
    float tv; // offset 0x10, size 0x4
};
enum StateEnum {
    STATE_ERROR = 4294967295,
    STATE_Constructed = 0,
    STATE_Committed = 1,
    STATE_Added = 2,
};
// total size: 0x8
class StateNode {
    // Members
    short dirtyIndex; // offset 0x0, size 0x2
    unsigned short priority; // offset 0x2, size 0x2
    class @class value; // offset 0x4, size 0x4
};
// total size: 0x4
class @class {
    // Members
    unsigned int i; // offset 0x0, size 0x4
    float f; // offset 0x0, size 0x4
};
// total size: 0x98
class PrimitiveModule : public Module {};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class RenderEntry * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x18
class RenderEntry {
    // Members
    unsigned long long bucketKey; // offset 0x0, size 0x8
    class Renderable * rend; // offset 0x8, size 0x4
    unsigned int renderRefKey; // offset 0xC, size 0x4
    float alphaFade; // offset 0x10, size 0x4
    unsigned char vertLOD; // offset 0x14, size 0x1
    unsigned char pad[3]; // offset 0x15, size 0x3
};
// total size: 0x4
class CacheSort {
    // Members
    class ShadowCache * cache; // offset 0x0, size 0x4
};
// total size: 0x18
class CasterSort {
    // Members
    class @class distanceSqr; // offset 0x0, size 0x4
    bool largeCaster; // offset 0x4, size 0x1
    bool simpleIfNeeded; // offset 0x5, size 0x1
    int rendIndex; // offset 0x8, size 0x4
    unsigned int cacheIdx; // offset 0xC, size 0x4
    unsigned int * projectShadowCachePtr; // offset 0x10, size 0x4
    unsigned int maxTexturePixels; // offset 0x14, size 0x4
};
// total size: 0x4
class @class {
    // Members
    float f; // offset 0x0, size 0x4
    unsigned int i; // offset 0x0, size 0x4
};
// total size: 0x68
class StaticReceiverRayCaster {
    // Members
    class BroadBound bound; // offset 0x0, size 0x20
    class Vector boundCenter; // offset 0x20, size 0x10
    class Vector boundHalf; // offset 0x30, size 0x10
    class Vector4 capsuleStart; // offset 0x40, size 0x10
    class Vector capsuleEnd; // offset 0x50, size 0x10
    unsigned int hitFlags; // offset 0x60, size 0x4
    float minPolyDist; // offset 0x64, size 0x4
};
// total size: 0x18
class LineGradient {
    // Members
    float dydx; // offset 0x0, size 0x4
    float dzdx; // offset 0x4, size 0x4
    float dxdy; // offset 0x8, size 0x4
    float dzdy; // offset 0xC, size 0x4
    float dxdz; // offset 0x10, size 0x4
    float dydz; // offset 0x14, size 0x4
};
// total size: 0x4
class FloatOrInt {
    // Members
    float fdata; // offset 0x0, size 0x4
    int idata; // offset 0x0, size 0x4
};
// total size: 0x20
class ImmediateContext {
    // Members
    class VertexPos * verts; // offset 0x0, size 0x4
    unsigned short * indices; // offset 0x4, size 0x4
    class ImmediateGeometryEntity * geomEnt; // offset 0x8, size 0x4
    class ImmediateGeometry * geom; // offset 0xC, size 0x4
    int vertexCount; // offset 0x10, size 0x4
    int primCount; // offset 0x14, size 0x4
    int indexCount; // offset 0x18, size 0x4
    enum StateEnum state; // offset 0x1C, size 0x4
};
// total size: 0xC
class VertexPos : public ImmediateVertexBase {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x50
class LightPointSoA {
    // Members
    class Vector4 posx; // offset 0x0, size 0x10
    class Vector4 posy; // offset 0x10, size 0x10
    class Vector4 posz; // offset 0x20, size 0x10
    class Vector4 rad; // offset 0x30, size 0x10
    unsigned short sceneIdx[4]; // offset 0x40, size 0x8
    unsigned short lightMask[4]; // offset 0x48, size 0x8
};
// total size: 0xA0
class LightSpotSoA {
    // Members
    class Vector4 posx; // offset 0x0, size 0x10
    class Vector4 posy; // offset 0x10, size 0x10
    class Vector4 posz; // offset 0x20, size 0x10
    class Vector4 rad; // offset 0x30, size 0x10
    class Vector4 dirx; // offset 0x40, size 0x10
    class Vector4 diry; // offset 0x50, size 0x10
    class Vector4 dirz; // offset 0x60, size 0x10
    class Vector4 spotCosSqr; // offset 0x70, size 0x10
    class Vector4 spotSin; // offset 0x80, size 0x10
    unsigned short sceneIdx[4]; // offset 0x90, size 0x8
    unsigned short lightMask[4]; // offset 0x98, size 0x8
};
// total size: 0x98
class RenderStateModule : public Module {};
// total size: 0x8
class RenderStateIDIntPair {
    // Members
    enum RenderStateID id; // offset 0x0, size 0x4
    unsigned int value; // offset 0x4, size 0x4
};
enum RenderStateID {
    RS_ZWRITE = 0,
    RS_ALPHATEST = 1,
    RS_ALPHABLEND = 2,
    RS_SRCBLEND = 3,
    RS_DSTBLEND = 4,
    RS_CULL = 5,
    RS_ALPHACMP = 6,
    RS_ALPHAREF = 7,
    RS_ZENABLE = 8,
    RS_DITHER = 9,
    RS_STENCIL = 10,
    RS_POINTSPRITE = 11,
    RS_MULTISAMPLEAA = 12,
    RS_PATCHEDGESTYLE = 13,
    RS_SCISSOR = 14,
    RS_AALINE = 15,
    RS_ADAPTIVETESS = 16,
    RS_TWOSIDEDSTENCIL = 17,
    RS_SRGBWRITE = 18,
    RS_SEPALPHABLEND = 19,
    RS_CLIPPLANE = 20,
    RS_COLORWRITE0 = 21,
    RS_COLORWRITE1 = 22,
    RS_COLORWRITE2 = 23,
    RS_COLORWRITE3 = 24,
    RS_FILL = 25,
    RS_ZCMP = 26,
    RS_STENCILFAIL = 27,
    RS_STENCILZFAIL = 28,
    RS_STENCILPASS = 29,
    RS_STENCILCMP = 30,
    RS_BLENDOP = 31,
    RS_POSITIONDEGREE = 32,
    RS_NORMALDEGREE = 33,
    RS_CCW_STENCILFAIL = 34,
    RS_CCW_STENCILZFAIL = 35,
    RS_CCW_STENCILPASS = 36,
    RS_CCW_STENCILCMP = 37,
    RS_SRCBLENDALPHA = 38,
    RS_DSTBLENDALPHA = 39,
    RS_BLENDOPALPHA = 40,
    RS_STENCILREF = 41,
    RS_STENCILMASK = 42,
    RS_STENCILWRITEMASK = 43,
    RS_MULTISAMPLEMASK = 44,
    RS_BLENDFACTOR = 45,
    RS_POINTSIZE = 46,
    RS_POINTSIZE_MIN = 47,
    RS_POINTSIZE_MAX = 48,
    RS_SLOPEDEPTHBIAS = 49,
    RS_MINTESSLEVEL = 50,
    RS_MAXTESSLEVEL = 51,
    RS_ADAPTIVETESS_X = 52,
    RS_ADAPTIVETESS_Y = 53,
    RS_ADAPTIVETESS_Z = 54,
    RS_ADAPTIVETESS_W = 55,
    RS_DEPTHBIAS = 56,
    RS_WRAP0 = 57,
    RS_WRAP1 = 58,
    RS_WRAP2 = 59,
    RS_WRAP3 = 60,
    RS_WRAP4 = 61,
    RS_WRAP5 = 62,
    RS_WRAP6 = 63,
    RS_WRAP7 = 64,
    RS_WRAP8 = 65,
    RS_WRAP9 = 66,
    RS_WRAP10 = 67,
    RS_WRAP11 = 68,
    RS_WRAP12 = 69,
    RS_WRAP13 = 70,
    RS_WRAP14 = 71,
    RS_WRAP15 = 72,
    RS_VIEWPORT = 73,
    RS_PRECISEBLEND0 = 74,
    RS_PRECISEBLEND1 = 75,
    RS_PRECISEBLEND2 = 76,
    RS_PRECISEBLEND3 = 77,
    RS_HALFPIXELOFFSET = 78,
    RS_ALPHATOMASK = 79,
    RS_ALPHATOMASKOFFSETS = 80,
    RS_GUARDBAND_X = 81,
    RS_GUARDBAND_Y = 82,
    RS_HISTENCILENABLE = 83,
    RS_HISTENCILWRITE = 84,
    RS_HISTENCILCMP = 85,
    RS_HISTENCILREF = 86,
    RS_CCW_STENCILREF = 87,
    RS_CCW_STENCILMASK = 88,
    RS_CCW_STENCILWRITEMASK = 89,
    RS_TESS = 90,
    RS_LINEWIDTH = 91,
    MAX_RS = 92,
};
// total size: 0x8
class RenderStateIDFloatPair {
    // Members
    enum RenderStateID id; // offset 0x0, size 0x4
    float value; // offset 0x4, size 0x4
};
// total size: 0x4
class StateHandler {
    // Members
    int compoundFlag; // offset 0x0, size 0x4
};
enum _GXBlendFactor {
    GX_BL_ZERO = 0,
    GX_BL_ONE = 1,
    GX_BL_SRCCLR = 2,
    GX_BL_INVSRCCLR = 3,
    GX_BL_SRCALPHA = 4,
    GX_BL_INVSRCALPHA = 5,
    GX_BL_DSTALPHA = 6,
    GX_BL_INVDSTALPHA = 7,
    GX_BL_DSTCLR = 2,
    GX_BL_INVDSTCLR = 3,
};
// total size: 0x1C
class DepthTextureRenderTarget : public RenderTarget {
    // Members
    class _GXTexObj * textureHandle; // offset 0x14, size 0x4
    class Texture * texture; // offset 0x18, size 0x4
};
enum _GXCullMode {
    GX_CULL_NONE = 0,
    GX_CULL_FRONT = 1,
    GX_CULL_BACK = 2,
    GX_CULL_ALL = 3,
};
// total size: 0x30
class OSFontHeader {
    // Members
    unsigned short fontType; // offset 0x0, size 0x2
    unsigned short firstChar; // offset 0x2, size 0x2
    unsigned short lastChar; // offset 0x4, size 0x2
    unsigned short invalChar; // offset 0x6, size 0x2
    unsigned short ascent; // offset 0x8, size 0x2
    unsigned short descent; // offset 0xA, size 0x2
    unsigned short width; // offset 0xC, size 0x2
    unsigned short leading; // offset 0xE, size 0x2
    unsigned short cellWidth; // offset 0x10, size 0x2
    unsigned short cellHeight; // offset 0x12, size 0x2
    unsigned long sheetSize; // offset 0x14, size 0x4
    unsigned short sheetFormat; // offset 0x18, size 0x2
    unsigned short sheetColumn; // offset 0x1A, size 0x2
    unsigned short sheetRow; // offset 0x1C, size 0x2
    unsigned short sheetWidth; // offset 0x1E, size 0x2
    unsigned short sheetHeight; // offset 0x20, size 0x2
    unsigned short widthTable; // offset 0x22, size 0x2
    unsigned long sheetImage; // offset 0x24, size 0x4
    unsigned long sheetFullSize; // offset 0x28, size 0x4
    unsigned char c0; // offset 0x2C, size 0x1
    unsigned char c1; // offset 0x2D, size 0x1
    unsigned char c2; // offset 0x2E, size 0x1
    unsigned char c3; // offset 0x2F, size 0x1
};
// total size: 0x98
class SamplerModule : public Module {};
// total size: 0x98
class SceneModule : public Module {};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class ViewBatch * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x14
class ViewBatch {
    // Members
    class Viewport * viewport; // offset 0x0, size 0x4
    class Space * space; // offset 0x4, size 0x4
    class Scene * scene; // offset 0x8, size 0x4
    class RenderEntry * entryList; // offset 0xC, size 0x4
    int entryCount; // offset 0x10, size 0x4
};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class SortedViewEntry * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x8
class SortedViewEntry {
    // Members
    int order; // offset 0x0, size 0x4
    class View * view; // offset 0x4, size 0x4
};
// total size: 0x20
class BoundingBox {
    // Members
    class Vector lower; // offset 0x0, size 0x10
    class Vector upper; // offset 0x10, size 0x10
};
// total size: 0xF8
class Frustum {
    // Members
    class Vector4 camPlanes[6]; // offset 0x0, size 0x60
    int nVertexLUT[6]; // offset 0x60, size 0x18
    class Vector pntList[8]; // offset 0x78, size 0x80
};
// total size: 0x14
class BoundingSphere {
    // Members
    class Vector centerVec; // offset 0x0, size 0x10
    float radius; // offset 0x10, size 0x4
};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class BoundingBox * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x118
class ShadowMapView : public View {
    // Members
    class ViewMatrix lightViewProjMat; // offset 0x28, size 0x40
    class ViewMatrix projMat; // offset 0x68, size 0x40
    class Matrix43 pplsMat; // offset 0xA8, size 0x30
    class Matrix43 viewMat; // offset 0xD8, size 0x30
    float cosGamma; // offset 0x108, size 0x4
    class DirSmapLight * light; // offset 0x10C, size 0x4
    class Viewport * forViewport; // offset 0x110, size 0x4
    class Scene * forScene; // offset 0x114, size 0x4
};
// total size: 0x10
class VectorOneXType : public Vector {};
// total size: 0x20
class MaterialSpace : public Space {};
// total size: 0xD8
class SkinGeometry : public Geometry {
    // Members
    class VertexBuffer posBuffer; // offset 0xB8, size 0x8
    class @class __anon; // offset 0xC0, size 0x4
    class SkinOutputPosition * posMem; // offset 0xC0, size 0x4
    class SkinOutputPosNorm * posNormMem; // offset 0xC0, size 0x4
    class SkinOutputPosNormTan * posNormTanMem; // offset 0xC0, size 0x4
    bool gpuSkin; // offset 0xC4, size 0x1
    float bonePaletteOffset[3]; // offset 0xC8, size 0xC
    class Matrix43 * skinMat; // offset 0xD4, size 0x4
};
// total size: 0x4
class @class {
    // Members
    class SkinOutputPosition * posMem; // offset 0x0, size 0x4
    class SkinOutputPosNorm * posNormMem; // offset 0x0, size 0x4
    class SkinOutputPosNormTan * posNormTanMem; // offset 0x0, size 0x4
};
// total size: 0xC
class SkinOutputPosition {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x10
class SkinOutputPosNorm {
    // Members
    class SkinOutputPosition pos; // offset 0x0, size 0xC
    class SkinOutputNormal norm; // offset 0xC, size 0x4
};
// total size: 0x4
class SkinOutputNormal {
    // Members
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
    signed char z; // offset 0x2, size 0x1
    signed char pad; // offset 0x3, size 0x1
};
// total size: 0x20
class SkinOutputPosNormTan {
    // Members
    class SkinOutputPosition pos; // offset 0x0, size 0xC
    class SkinOutputNormal norm; // offset 0xC, size 0x4
    class SkinOutputTangent tan; // offset 0x10, size 0x10
};
// total size: 0x10
class SkinOutputTangent {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
enum StateOpTypeEnum {
    STATEOP_USER_FLOAT4 = 0,
    STATEOP_USER_INT4 = 1,
    STATEOP_USER_BOOL = 2,
    STATEOP_USER_MATRIX_FLOAT = 3,
    STATEOP_USER_MATRIX_INT = 4,
    STATEOP_USER_SAMPLER = 5,
    STATEOP_VIEW_MAT = 6,
    STATEOP_WORLD_MAT = 7,
    STATEOP_CAM_POS = 8,
    STATEOP_CAM_POS_WORLD = 9,
    STATEOP_EYE_DIR = 10,
    STATEOP_SMAP_DEPTH_MAT = 11,
    STATEOP_SMAP_DEPTH_BIAS = 12,
    STATEOP_LIGHT_AMBIENT = 13,
    STATEOP_LIGHT_DIR = 14,
    STATEOP_LIGHT_DIR_SMAP = 15,
    STATEOP_RENDER = 16,
    STATEOP_PROJ_MAT = 17,
    STATEOP_LIGHT_ARRAY = 18,
    STATEOP_FOG_PARAMS = 19,
    STATEOP_CAM_PROJ_MAT = 20,
    STATEOP_COLOR_MUL = 21,
    STATEOP_POST_COLOR_MUL = 22,
    STATEOP_USER_FLOAT_ANY = 23,
    STATEOP_BONE_PALETTE = 24,
    STATEOP_BONE_OFFSET = 25,
    STATEOP_LIGHT_FAST = 26,
    STATEOP_PRJ_SHADOW_CAST_MAT = 27,
    STATEOP_PRJ_SHADOW = 28,
    STATEOP_PRJ_SHADOW_TEX = 29,
    STATEOP_PRJ_DECAL = 30,
    STATEOP_INVCAM_MAT = 31,
    STATEOP_WII_SHADER = 32,
    STATEOP_WII_GEOMETRY = 33,
    STATEOP_WII_MATERIAL = 34,
    MAX_STATEOP = 35,
};
// total size: 0x4
class StateOp {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char pad; // offset 0x1, size 0x1
    unsigned short size; // offset 0x2, size 0x2
};
// total size: 0x24
class WiiPipeState {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    float * CLR; // offset 0x4, size 0x4
    float * LMS; // offset 0x8, size 0x4
    float * EMS; // offset 0xC, size 0x4
    signed char oldDiffuseType; // offset 0x10, size 0x1
    signed char oldDiffuseCount; // offset 0x11, size 0x1
    signed char oldEnvCount; // offset 0x12, size 0x1
    signed char configDirty; // offset 0x13, size 0x1
    class _GXTexObj * unitLookup; // offset 0x14, size 0x4
    class _GXTexObj * stepLookup; // offset 0x18, size 0x4
    class LightKitData * kit_last; // offset 0x1C, size 0x4
    unsigned short kit_cur_light; // offset 0x20, size 0x2
    unsigned short kit_light_mask; // offset 0x22, size 0x2
};
enum _GXTexCoordID {
    GX_TEXCOORD0 = 0,
    GX_TEXCOORD1 = 1,
    GX_TEXCOORD2 = 2,
    GX_TEXCOORD3 = 3,
    GX_TEXCOORD4 = 4,
    GX_TEXCOORD5 = 5,
    GX_TEXCOORD6 = 6,
    GX_TEXCOORD7 = 7,
    GX_MAX_TEXCOORD = 8,
    GX_TEXCOORD_NULL = 255,
};
enum _GXTevStageID {
    GX_TEVSTAGE0 = 0,
    GX_TEVSTAGE1 = 1,
    GX_TEVSTAGE2 = 2,
    GX_TEVSTAGE3 = 3,
    GX_TEVSTAGE4 = 4,
    GX_TEVSTAGE5 = 5,
    GX_TEVSTAGE6 = 6,
    GX_TEVSTAGE7 = 7,
    GX_TEVSTAGE8 = 8,
    GX_TEVSTAGE9 = 9,
    GX_TEVSTAGE10 = 10,
    GX_TEVSTAGE11 = 11,
    GX_TEVSTAGE12 = 12,
    GX_TEVSTAGE13 = 13,
    GX_TEVSTAGE14 = 14,
    GX_TEVSTAGE15 = 15,
    GX_MAX_TEVSTAGE = 16,
};
enum _GXTevColorArg {
    GX_CC_CPREV = 0,
    GX_CC_APREV = 1,
    GX_CC_C0 = 2,
    GX_CC_A0 = 3,
    GX_CC_C1 = 4,
    GX_CC_A1 = 5,
    GX_CC_C2 = 6,
    GX_CC_A2 = 7,
    GX_CC_TEXC = 8,
    GX_CC_TEXA = 9,
    GX_CC_RASC = 10,
    GX_CC_RASA = 11,
    GX_CC_ONE = 12,
    GX_CC_HALF = 13,
    GX_CC_KONST = 14,
    GX_CC_ZERO = 15,
};
// total size: 0xC
class Wii_ShaderStateOp : public StateOp {
    // Members
    unsigned int flags; // offset 0x4, size 0x4
    unsigned char matSource; // offset 0x8, size 0x1
    unsigned char channelCount; // offset 0x9, size 0x1
    unsigned char streamCount; // offset 0xA, size 0x1
    unsigned char pad; // offset 0xB, size 0x1
};
// total size: 0xE
class Wii_MaterialStateOp : public StateOp {
    // Members
    class Wii_MaterialSettings mat; // offset 0x4, size 0x8
    unsigned char flags; // offset 0xC, size 0x1
    unsigned char pad; // offset 0xD, size 0x1
};
enum _GXColorSrc {
    GX_SRC_REG = 0,
    GX_SRC_VTX = 1,
};
// total size: 0xD4
class ShapeGeometry : public Geometry {
    // Members
    class VertexBuffer vertBuffer; // offset 0xB8, size 0x8
    unsigned short * indexMem; // offset 0xC0, size 0x4
    void * vertMem; // offset 0xC4, size 0x4
    void (* buildCB)(void * context, class Geometry * geom, unsigned short * indices, void * verts); // offset 0xC8, size 0x4
    void * buildContext; // offset 0xCC, size 0x4
    int vertStride; // offset 0xD0, size 0x4
};
// total size: 0x24
class ShapeBuilder : public Builder {
    // Members
    class Effect * effect; // offset 0x10, size 0x4
    class Material * material; // offset 0x14, size 0x4
    class ParamData * paramData; // offset 0x18, size 0x4
    class GeometryContext * * shaderContextList; // offset 0x1C, size 0x4
    class RenderAttrib viewAttrib; // offset 0x20, size 0x1
};
// total size: 0x18
class IndexLOD {
    // Members
    unsigned long long indexBufferID; // offset 0x0, size 0x8
    unsigned short indexCount; // offset 0x8, size 0x2
    unsigned short primCount; // offset 0xA, size 0x2
    unsigned short triCount; // offset 0xC, size 0x2
    unsigned short vertCount; // offset 0xE, size 0x2
    float lodDist; // offset 0x10, size 0x4
    unsigned char skinSectStart; // offset 0x14, size 0x1
    unsigned char skinSectCount; // offset 0x15, size 0x1
    unsigned short pad; // offset 0x16, size 0x2
};
// total size: 0x10
class WII_P {
    // Members
    short pos_x[2]; // offset 0x0, size 0x4
    short pos_y[2]; // offset 0x4, size 0x4
    short pos_z[2]; // offset 0x8, size 0x4
    unsigned char index[2]; // offset 0xC, size 0x2
    unsigned char pad[2]; // offset 0xE, size 0x2
};
// total size: 0x1C
class WII_WP {
    // Members
    short pos_x[2]; // offset 0x0, size 0x4
    short pos_y[2]; // offset 0x4, size 0x4
    short pos_z[2]; // offset 0x8, size 0x4
    unsigned int weight[2]; // offset 0xC, size 0x8
    unsigned int index[2]; // offset 0x14, size 0x8
};
// total size: 0x14
class WII_PN {
    // Members
    short pos_x[2]; // offset 0x0, size 0x4
    short pos_y[2]; // offset 0x4, size 0x4
    short pos_z[2]; // offset 0x8, size 0x4
    signed char norm_x[2]; // offset 0xC, size 0x2
    signed char norm_y[2]; // offset 0xE, size 0x2
    signed char norm_z[2]; // offset 0x10, size 0x2
    unsigned char index[2]; // offset 0x12, size 0x2
};
// total size: 0x24
class WII_WPN {
    // Members
    short pos_x[2]; // offset 0x0, size 0x4
    short pos_y[2]; // offset 0x4, size 0x4
    short pos_z[2]; // offset 0x8, size 0x4
    signed char norm_x[2]; // offset 0xC, size 0x2
    signed char norm_y[2]; // offset 0xE, size 0x2
    signed char norm_z[2]; // offset 0x10, size 0x2
    signed char pad[2]; // offset 0x12, size 0x2
    unsigned int weight[2]; // offset 0x14, size 0x8
    unsigned int index[2]; // offset 0x1C, size 0x8
};
// total size: 0x2C
class PC_PNT {
    // Members
    float pos[3]; // offset 0x0, size 0xC
    float norm[3]; // offset 0xC, size 0xC
    float tan[4]; // offset 0x18, size 0x10
    unsigned int index; // offset 0x28, size 0x4
};
// total size: 0x30
class PC_WPNT {
    // Members
    float pos[3]; // offset 0x0, size 0xC
    float norm[3]; // offset 0xC, size 0xC
    float tan[4]; // offset 0x18, size 0x10
    unsigned int weight; // offset 0x28, size 0x4
    unsigned int index; // offset 0x2C, size 0x4
};
// total size: 0x10
class BufferInfo {
    // Members
    void * * vertexLists; // offset 0x0, size 0x4
    int * vertexBufferSizes; // offset 0x4, size 0x4
    unsigned short * * indexLists; // offset 0x8, size 0x4
    int * indexBufferSizes; // offset 0xC, size 0x4
};
// total size: 0x8
class AbstractAllocator {
    // Members
    void * (* allocCB)(class AbstractAllocator * allocator, unsigned long size, enum eMemMgrTag memTag); // offset 0x0, size 0x4
    void (* freeCB)(class AbstractAllocator * allocator, void * mem, unsigned long size); // offset 0x4, size 0x4
};
// total size: 0x120
class StaticHolder {
    // Members
    class StaticBuilder builder; // offset 0x4, size 0xE8
    class VertexBuffer vertexBuffer; // offset 0xEC, size 0x8
    class FixedVertexBuffer fixedVertexBuffer; // offset 0xF4, size 0x10
    class FixedIndexBuffer fixedIndexBuffer; // offset 0x104, size 0x14
    unsigned char * builderMem; // offset 0x118, size 0x4
    int builderMemSize; // offset 0x11C, size 0x4
};
// total size: 0xD4
class LineTransientGeometry : public Geometry {
    // Members
    int * vertexStride; // offset 0xB8, size 0x4
    class VertexBuffer * updateVertexBuffers; // offset 0xBC, size 0x4
    void * * vertexData; // offset 0xC0, size 0x4
    bool isRenderThread; // offset 0xC4, size 0x1
    class IndexBuffer wiiIndexBuffer; // offset 0xC8, size 0xC
};
// total size: 0x98
class ConsolePadDeviceModule : public Module {};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class ConsolePadDevice * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x44
class ConsolePadDevice : public PadDevice {
    // Members
    int port; // offset 0x18, size 0x4
    int flags; // offset 0x1C, size 0x4
    int oldFlags; // offset 0x20, size 0x4
    char nameBuffer[32]; // offset 0x24, size 0x20
};
// total size: 0x10
class ConsoleButtonBinding {
    // Members
    enum ButtonSourceType type; // offset 0x0, size 0x4
    enum PadButtonIndex dstIndex; // offset 0x4, size 0x4
    int srcIndex; // offset 0x8, size 0x4
    int srcFlagShift; // offset 0xC, size 0x4
};
enum ButtonSourceType {
    BUTTON_NONE = 0,
    BUTTON_DIGITAL = 1,
    BUTTON_ANALOG = 2,
    BUTTON_BOTH = 3,
    BUTTON_ANALOG_BOTTOMHALF = 4,
    BUTTON_ANALOG_TOPHALF = 5,
};
enum PadButtonIndex {
    PAD_BUTTON_INDEX_START = 0,
    PAD_BUTTON_INDEX_SELECT = 1,
    PAD_BUTTON_INDEX_LEFT = 2,
    PAD_BUTTON_INDEX_RIGHT = 3,
    PAD_BUTTON_INDEX_UP = 4,
    PAD_BUTTON_INDEX_DOWN = 5,
    PAD_BUTTON_INDEX_L1 = 6,
    PAD_BUTTON_INDEX_L2 = 7,
    PAD_BUTTON_INDEX_R1 = 8,
    PAD_BUTTON_INDEX_R2 = 9,
    PAD_BUTTON_INDEX_LSTICK = 10,
    PAD_BUTTON_INDEX_RSTICK = 11,
    PAD_BUTTON_INDEX_A = 12,
    PAD_BUTTON_INDEX_B = 13,
    PAD_BUTTON_INDEX_C = 14,
    PAD_BUTTON_INDEX_D = 15,
    PAD_BUTTON_INDEX_UNUSED = 16,
    PAD_BUTTON_INDEX_HOME = 17,
    MAX_PAD_BUTTON = 18,
    PAD_BUTTON_INDEX_DPAD0 = 2,
    PAD_BUTTON_INDEX_DPAD1 = 3,
    PAD_BUTTON_INDEX_DPAD2 = 4,
    PAD_BUTTON_INDEX_DPAD3 = 5,
};
// total size: 0xC
class WiiExtensionStatus {
    // Members
    unsigned int extensionStatus; // offset 0x0, size 0x4
    int dataMode; // offset 0x4, size 0x4
    bool dirty; // offset 0x8, size 0x1
};
enum WiimoteDataMode {
    WII_DM_BUTTON = 0,
    WII_DM_BUTTON_ACC = 1,
    WII_DM_BUTTON_ACC_IR = 2,
    WII_DM_BUTTON_ACC_IR_FULL = 3,
    WII_DM_MAX = 4,
};
// total size: 0x84
class KPADStatus {
    // Members
    unsigned long hold; // offset 0x0, size 0x4
    unsigned long trig; // offset 0x4, size 0x4
    unsigned long release; // offset 0x8, size 0x4
    class Vec acc; // offset 0xC, size 0xC
    float acc_value; // offset 0x18, size 0x4
    float acc_speed; // offset 0x1C, size 0x4
    class Vec2 pos; // offset 0x20, size 0x8
    class Vec2 vec; // offset 0x28, size 0x8
    float speed; // offset 0x30, size 0x4
    class Vec2 horizon; // offset 0x34, size 0x8
    class Vec2 hori_vec; // offset 0x3C, size 0x8
    float hori_speed; // offset 0x44, size 0x4
    float dist; // offset 0x48, size 0x4
    float dist_vec; // offset 0x4C, size 0x4
    float dist_speed; // offset 0x50, size 0x4
    class Vec2 acc_vertical; // offset 0x54, size 0x8
    unsigned char dev_type; // offset 0x5C, size 0x1
    signed char wpad_err; // offset 0x5D, size 0x1
    signed char dpd_valid_fg; // offset 0x5E, size 0x1
    unsigned char data_format; // offset 0x5F, size 0x1
    class KPADEXStatus ex_status; // offset 0x60, size 0x24
};
// total size: 0xC
class Vec {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x8
class Vec2 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x24
class KPADEXStatus {
    // Members
    class @class fs; // offset 0x0, size 0x1C
    class @class cl; // offset 0x0, size 0x24
};
// total size: 0x1C
class @class {
    // Members
    class Vec2 stick; // offset 0x0, size 0x8
    class Vec acc; // offset 0x8, size 0xC
    float acc_value; // offset 0x14, size 0x4
    float acc_speed; // offset 0x18, size 0x4
};
// total size: 0x24
class @class {
    // Members
    unsigned long hold; // offset 0x0, size 0x4
    unsigned long trig; // offset 0x4, size 0x4
    unsigned long release; // offset 0x8, size 0x4
    class Vec2 lstick; // offset 0xC, size 0x8
    class Vec2 rstick; // offset 0x14, size 0x8
    float ltrigger; // offset 0x1C, size 0x4
    float rtrigger; // offset 0x20, size 0x4
};
// total size: 0x8
class StickSourceVectorTemplate {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
enum PadTiltIndex {
    PAD_TILT_MAIN = 0,
    PAD_TILT_EXTENDED = 1,
    MAX_PAD_TILT = 2,
};
// total size: 0x98
class FileModule : public Module {};
// total size: 0xC
class FactorySortValue {
    // Members
    class FileDeviceFactory * factory; // offset 0x0, size 0x4
    int priority; // offset 0x4, size 0x4
    int order; // offset 0x8, size 0x4
};
// total size: 0x10
class FileDeviceFactory {
    // Members
    char * name; // offset 0x4, size 0x4
    int priority; // offset 0x8, size 0x4
    class FileDeviceFactory * registryNext; // offset 0xC, size 0x4
};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class FileDeviceFactory * * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class FactorySortValue * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x4
class CmdQueue {
    // Members
    class CommChannel * commChan; // offset 0x0, size 0x4
};
// total size: 0x80
class CommChannel {
    // Members
    class PoolInfo poolInfo; // offset 0x0, size 0x8
    class Traffic traffic; // offset 0x8, size 0x8
    int sizePending; // offset 0x10, size 0x4
    int flagOptions; // offset 0x14, size 0x4
    class CriticalSection cs; // offset 0x18, size 0x18
    int waitSendSize; // offset 0x30, size 0x4
    bool waitReceive; // offset 0x34, size 0x1
    class SyncEvent trafficSent; // offset 0x38, size 0x24
    class SyncEvent lessTraffic; // offset 0x5C, size 0x24
};
// total size: 0x8
class PoolInfo {
    // Members
    char * pool; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
};
// total size: 0x8
class Traffic {
    // Members
    int offset; // offset 0x0, size 0x4
    int length; // offset 0x4, size 0x4
};
// total size: 0x110
class MediaCmd {
    // Members
    class MediaCmdHeader header; // offset 0x0, size 0x8
    class @class __anon; // offset 0x8, size 0x108
    class MediaSysHalt haltInfo; // offset 0x8, size 0x4
    class MediaCmdOpen openInfo; // offset 0x8, size 0x108
    class MediaCmdClose closeInfo; // offset 0x8, size 0x1
    class MediaCmdRead readInfo; // offset 0x8, size 0x8
    class MediaCmdWrite writeInfo; // offset 0x8, size 0x8
    class MediaCmdSeek seekInfo; // offset 0x8, size 0x8
    class MediaCmdAbort abortInfo; // offset 0x8, size 0x1
};
// total size: 0x8
class MediaCmdHeader {
    // Members
    enum enMediaCmdType cmdType; // offset 0x0, size 0x4
    class MediaObject * owner; // offset 0x4, size 0x4
};
enum enMediaCmdType {
    MEDIA_SYSCMD_UNKNOWN = 0,
    MEDIA_SYSCMD__TAG_START = 256,
    MEDIA_SYSCMD_HALT_THREAD = 257,
    MEDIA_SYSCMD_DUMP_STATUS = 258,
    MEDIA_SYSCMD__TAG_END = 259,
    MEDIA_CMD_FILE__TAG_START = 512,
    MEDIA_CMD_FILE_OPEN = 513,
    MEDIA_CMD_FILE_CLOSE = 514,
    MEDIA_CMD_FILE_SEEK = 515,
    MEDIA_CMD_FILE_READDATA = 516,
    MEDIA_CMD_FILE_WRITEDATA = 517,
    MEDIA_CMD_FILE_ABORT = 518,
    MEDIA_CMD_FILE__TAG_END = 519,
    MEDIA_CMD_DIR__TAG_START = 768,
    MEDIA_CMD_DIR_OPEN = 769,
    MEDIA_CMD_DIR_CLOSE = 770,
    MEDIA_CMD_DIR_NEXTITEM = 771,
    MEDIA_CMD_DIR__TAG_END = 772,
    MEDIA_CMD_NOMORE = 773,
};
// total size: 0x108
class @class {
    // Members
    class MediaSysHalt haltInfo; // offset 0x0, size 0x4
    class MediaCmdOpen openInfo; // offset 0x0, size 0x108
    class MediaCmdClose closeInfo; // offset 0x0, size 0x1
    class MediaCmdRead readInfo; // offset 0x0, size 0x8
    class MediaCmdWrite writeInfo; // offset 0x0, size 0x8
    class MediaCmdSeek seekInfo; // offset 0x0, size 0x8
    class MediaCmdAbort abortInfo; // offset 0x0, size 0x1
};
// total size: 0x4
class MediaSysHalt {
    // Members
    enum enHaltType haltType; // offset 0x0, size 0x4
};
enum enHaltType {
    HALT_GRACEFUL = 0,
    HALT_HATEFUL = 1,
};
// total size: 0x108
class MediaCmdOpen {
    // Members
    char filename[256]; // offset 0x0, size 0x100
    int openFlags; // offset 0x100, size 0x4
    enum enPriority priority; // offset 0x104, size 0x4
};
// total size: 0x1
class MediaCmdClose {};
// total size: 0x8
class MediaCmdRead {
    // Members
    char * tgtBuffer; // offset 0x0, size 0x4
    int numBytesToRead; // offset 0x4, size 0x4
};
// total size: 0x8
class MediaCmdWrite {
    // Members
    char * srcBuffer; // offset 0x0, size 0x4
    int numBytesToWrite; // offset 0x4, size 0x4
};
// total size: 0x8
class MediaCmdSeek {
    // Members
    enum enSeekOrigin seekType; // offset 0x0, size 0x4
    int offset; // offset 0x4, size 0x4
};
enum enSeekOrigin {
    ORIGIN_CURR = 0,
    ORIGIN_END = 1,
    ORIGIN_START = 2,
    ORIGIN_NOMORE = 3,
};
// total size: 0x1
class MediaCmdAbort {};
// total size: 0xC
class MediaConfig {
    // Members
    class PoolArray configArray; // offset 0x0, size 0xC
};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class Entry * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x104
class Entry {
    // Members
    enum enMediaPath tgtPathID; // offset 0x0, size 0x4
    char rootpath[256]; // offset 0x4, size 0x100
};
enum enMediaPath {
    PATH_BOOT = 0,
    PATH_INI = 1,
    PATH_LOG = 2,
    PATH_UNCFILE = 3,
    PATH_NOMORE = 4,
};
// total size: 0x4C
class MediaHandler {
    // Members
    enum enMediaTarget tgtDevice; // offset 0x0, size 0x4
    class CmdQueue * cmdQueue; // offset 0x4, size 0x4
    class Thread thread; // offset 0x8, size 0x40
};
// total size: 0x9C
class MediaModuleLFS : public Module {
    // Members
    class MediaHandlerLFS * handlerLFS; // offset 0x98, size 0x4
};
// total size: 0x4C
class MediaHandlerLFS : public MediaHandler {};
// total size: 0x48
class FileHandleData : public DVDFileInfo {
    // Members
    int curPos; // offset 0x3C, size 0x4
    int lastResult; // offset 0x40, size 0x4
    bool done; // offset 0x44, size 0x1
};
// total size: 0xC
class TaskFileRead {
    // Members
    int cntRemain; // offset 0x0, size 0x4
    int numToReadTotal; // offset 0x4, size 0x4
    char * tgtBuffer; // offset 0x8, size 0x4
};
// total size: 0x120
class MediaLFSJob : public MediaData {
    // Members
    class MediaObject * mediaObject; // offset 0x0, size 0x4
    class LFSJobBucket * ownerBucket; // offset 0x4, size 0x4
    class FileHandleData * fileHandle; // offset 0x8, size 0x4
    bool markedForDestroy; // offset 0xC, size 0x1
    class MediaLFSTask task; // offset 0x10, size 0x110
};
// total size: 0x3C
class LFSJobBucket {
    // Members
    class PoolList jobList; // offset 0x0, size 0x1C
    class PoolList jobQueue; // offset 0x1C, size 0x1C
    int bucketFlags; // offset 0x38, size 0x4
};
// total size: 0x1C
class PoolList : public PoolListBase {};
// total size: 0x110
class MediaLFSTask {
    // Members
    enum enTaskStatus status; // offset 0x0, size 0x4
    enum enTaskType taskType; // offset 0x4, size 0x4
    class @class __anon; // offset 0x8, size 0x104
    class TaskFileOpen openData; // offset 0x8, size 0x104
    class TaskFileClose closeData; // offset 0x8, size 0x1
    class TaskFileRead readData; // offset 0x8, size 0xC
    class TaskFileWrite writeData; // offset 0x8, size 0xC
    class TaskFileSeek seekData; // offset 0x8, size 0x8
    class MediaLFSJob * ownJob; // offset 0x10C, size 0x4
};
enum enTaskStatus {
    TASK_NONE = 0,
    TASK_READY = 1,
    TASK_IN_QUEUE = 2,
    TASK_COMPLETE = 3,
};
enum enTaskType {
    TASK_TYPE_NONE = 0,
    TASK_TYPE_FILE_OPEN = 1,
    TASK_TYPE_FILE_CLOSE = 2,
    TASK_TYPE_FILE_READ = 3,
    TASK_TYPE_FILE_WRITE = 4,
    TASK_TYPE_FILE_SEEK = 5,
    TASK_TYPE_NOMORE = 6,
};
// total size: 0x104
class @class {
    // Members
    class TaskFileOpen openData; // offset 0x0, size 0x104
    class TaskFileClose closeData; // offset 0x0, size 0x1
    class TaskFileRead readData; // offset 0x0, size 0xC
    class TaskFileWrite writeData; // offset 0x0, size 0xC
    class TaskFileSeek seekData; // offset 0x0, size 0x8
};
// total size: 0x104
class TaskFileOpen {
    // Members
    char filename[256]; // offset 0x0, size 0x100
    int modeFlags; // offset 0x100, size 0x4
};
// total size: 0x1
class TaskFileClose {};
// total size: 0xC
class TaskFileWrite {
    // Members
    int cntRemain; // offset 0x0, size 0x4
    int numToWriteTotal; // offset 0x4, size 0x4
    char * srcBuffer; // offset 0x8, size 0x4
};
// total size: 0x8
class TaskFileSeek {
    // Members
    enum enSeekOrigin seekFrom; // offset 0x0, size 0x4
    int byteOffset; // offset 0x4, size 0x4
};
// total size: 0x84
class MediaThreadLFS : public Runnable {
    // Members
    class MediaHandlerLFS * handler; // offset 0x4, size 0x4
    bool haltCmdReceived; // offset 0x8, size 0x1
    class LFSJobBucket bucketNormal; // offset 0xC, size 0x3C
    class LFSJobBucket bucketStream; // offset 0x48, size 0x3C
};
// total size: 0x9C
class MediaModule : public Module {
    // Members
    class MediaMogul * mogul; // offset 0x98, size 0x4
};
// total size: 0x10
class MediaMogul {
    // Members
    class PoolArray handlerArray; // offset 0x0, size 0xC
    class MediaConfig * mediaConfig; // offset 0xC, size 0x4
};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class MediaHandler * * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x98
class NetworkModule : public Module {};
// total size: 0x98
class PadModule : public Module {};
// total size: 0xC
class DeviceSortValue {
    // Members
    class PadDevice * device; // offset 0x0, size 0x4
    int priority; // offset 0x4, size 0x4
    int order; // offset 0x8, size 0x4
};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class PadDevice * * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class DeviceSortValue * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x98
class SystemCacheModule : public Module {};
// total size: 0x94
class SystemCacheWii {
    // Members
    void * cachedMemory; // offset 0x0, size 0x4
    int cachedSize; // offset 0x4, size 0x4
    class NANDFileInfo fileInfo; // offset 0x8, size 0x8C
};
enum SamplerStateFilter {
    SSV_FILTER_NONE = 0,
    SSV_FILTER_POINT = 1,
    SSV_FILTER_LINEAR = 2,
    SSV_FILTER_ANISOTROPIC = 3,
    MAX_SSV_FILTER = 4,
};
// total size: 0x3C
class MEMiHeapHead {
    // Members
    unsigned long signature; // offset 0x0, size 0x4
    class MEMLink link; // offset 0x4, size 0x8
    class MEMList childList; // offset 0xC, size 0xC
    void * heapStart; // offset 0x18, size 0x4
    void * heapEnd; // offset 0x1C, size 0x4
    class OSMutex mutex; // offset 0x20, size 0x18
    class @class attribute; // offset 0x38, size 0x4
};
// total size: 0x8
class MEMLink {
    // Members
    void * prevObject; // offset 0x0, size 0x4
    void * nextObject; // offset 0x4, size 0x4
};
// total size: 0xC
class MEMList {
    // Members
    void * headObject; // offset 0x0, size 0x4
    void * tailObject; // offset 0x4, size 0x4
    unsigned short numObjects; // offset 0x8, size 0x2
    unsigned short offset; // offset 0xA, size 0x2
};
// total size: 0x4
class @class {
    // Members
    unsigned long val; // offset 0x0, size 0x4
    class @class fields; // offset 0x0, size 0x4
};
// total size: 0x4
class @class {
    // Members
    unsigned long _reserved : 24; // offset 0x0, size 0x4, bit offset 0
    unsigned long optFlag : 8; // offset 0x0, size 0x4, bit offset 24
};
