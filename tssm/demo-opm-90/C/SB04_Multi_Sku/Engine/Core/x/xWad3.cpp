/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xWad3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
float scale; // size: 0x4, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
static class RwV3d * sCurrVert; // size: 0x4, address: 0x638060
static unsigned int sAtomicStartCount; // size: 0x4, address: 0x638064
static class RwV3d * * sAtomicStartVert; // size: 0x4, address: 0x638068
static class TempSplit * sSplitList; // size: 0x4, address: 0x63806C
static class TempSplit * sSplitCurr; // size: 0x4, address: 0x638070
static class xJSPNodeTreeLeaf * sSplitLeaf; // size: 0x4, address: 0x638074
class xLightKit * gLastLightKit; // size: 0x4, address: 0x638078
class xLightKit * gCloneLightKit; // size: 0x4, address: 0x63807C
static class xColor_tag const_color; // size: 0x4, address: 0x0
class activity_type * activities; // size: 0x4, address: 0x638080
signed int activities_used; // size: 0x4, address: 0x638084
static signed int xmath_inited; // size: 0x4, address: 0x638088
static signed int xmath_exited; // size: 0x4, address: 0x0
static unsigned int rndseed; // size: 0x4, address: 0x63808C
signed int binom_triangle[528]; // size: 0x840, address: 0x6D2FD0
class xVec2 g_O2; // size: 0x8, address: 0x0
class xVec2 g_X2; // size: 0x8, address: 0x0
class xVec2 g_Y2; // size: 0x8, address: 0x0
class _xMat3x2 g_I2; // size: 0x18, address: 0x0
class basic_rect m_Null; // size: 0x10, address: 0x62C4B0
class basic_rect m_Unit; // size: 0x10, address: 0x62C4C0
class xVec3 g_O3; // size: 0xC, address: 0x62C4D0
class xVec3 g_X3; // size: 0xC, address: 0x62C4E0
class xVec3 g_Y3; // size: 0xC, address: 0x62C4F0
class xVec3 g_Z3; // size: 0xC, address: 0x62C500
class xVec3 g_NX3; // size: 0xC, address: 0x62C510
class xVec3 g_NY3; // size: 0xC, address: 0x62C520
class xVec3 g_NZ3; // size: 0xC, address: 0x62C530
class xVec3 g_Onez; // size: 0xC, address: 0x0
class xMat4x3 g_I3; // size: 0x40, address: 0x6D3810
class xQuat g_IQ; // size: 0x10, address: 0x62C540
static float gs_fTolerance; // size: 0x4, address: 0x0
class xMemInfo gMemInfo; // size: 0x24, address: 0x6D3850
unsigned int gActiveHeap; // size: 0x4, address: 0x638090
class xMemHeap gxHeap[3]; // size: 0x324, address: 0x6D3880
void (* sMemBaseNotifyFunc)(); // size: 0x4, address: 0x638094
signed int gMemReporting; // size: 0x4, address: 0x0
unsigned int gMemReportingThreshold; // size: 0x4, address: 0x0
unsigned int scratch_mem_used; // size: 0x4, address: 0x638098
static unsigned short scratch_stack[128]; // size: 0x100, address: 0x6D3BB0
static unsigned char scratch_buffer[16384]; // size: 0x4000, address: 0x6D3CB0
static signed int scratch_allocations; // size: 0x4, address: 0x63809C
static signed int zeroMemoryAddress; // size: 0x4, address: 0x6380A0
static unsigned int MEM_CLEAR_VALUE; // size: 0x4, address: 0x636E88
static unsigned int MEM_DEALLOC_VALUE; // size: 0x4, address: 0x636E8C
class RpMorphTarget anim_coll_old_mt; // size: 0x1C, address: 0x6D7CB0
static class xModelPool * sxModelPoolList; // size: 0x4, address: 0x6380A4
static class RwCamera * subcamera; // size: 0x4, address: 0x6380B0
signed int xModelPipeNumTables; // size: 0x4, address: 0x6380B4
signed int xModelPipeCount[16]; // size: 0x40, address: 0x6D7CD0
class xModelPipeTable * xModelPipeData[16]; // size: 0x40, address: 0x6D7D10
signed int xModelLookupCount; // size: 0x4, address: 0x6380B8
class xModelPipeLookup * xModelLookupList; // size: 0x4, address: 0x6380BC
signed int xModelInstStaticAlloc; // size: 0x4, address: 0x6380C0
signed int xModelBucketEnabled; // size: 0x4, address: 0x6380C4
static class RpWorld * sBucketDummyWorld; // size: 0x4, address: 0x6380D0
static class RwCamera * sBucketDummyCamera; // size: 0x4, address: 0x6380E0
static signed int sBucketCurr; // size: 0x4, address: 0x6380E4
static signed int sBucketCount; // size: 0x4, address: 0x6380E8
static class xModelBucket * sBucketList; // size: 0x4, address: 0x6380EC
static signed int sBucketClipCullCurr; // size: 0x4, address: 0x6380F0
static signed int sBucketClipCullCount; // size: 0x4, address: 0x6380F4
static class xModelBucket * * sBucketClipCullList; // size: 0x4, address: 0x6380F8
static signed int sAlphaCurr; // size: 0x4, address: 0x6380FC
static signed int sAlphaStart; // size: 0x4, address: 0x638100
static signed int sAlphaCount; // size: 0x4, address: 0x638104
static class xModelAlphaBucket * sAlphaList; // size: 0x4, address: 0x638108
static signed int sBucketOpaqueRenderStart; // size: 0x4, address: 0x63810C
static class RpMaterial * s_pMaterial; // size: 0x4, address: 0x0
static signed int g_modinit; // size: 0x4, address: 0x0
static class xNPCPred * g_predinst[16]; // size: 0x40, address: 0x0
static signed int g_predlock; // size: 0x4, address: 0x0
// total size: 0x1C
struct /* @anon2 */ {} xMemoryManagerMarkSet::__vtable; // size: 0x1C, address: 0x0
// total size: 0x14
struct /* @anon6 */ {} CUniqueAmountGreaterThanX::__vtable; // size: 0x14, address: 0x0
// total size: 0x14
struct /* @anon8 */ {} BasicInform::__vtable; // size: 0x14, address: 0x0
// total size: 0x14
struct /* @anon3 */ {} CHappensXTimesWithinY::__vtable; // size: 0x14, address: 0x0
// total size: 0x14
struct /* @anon0 */ {} CXNumUniqueWithinY::__vtable; // size: 0x14, address: 0x0
// total size: 0x14
struct /* @anon10 */ {} CUniqueAmountLessThanX::__vtable; // size: 0x14, address: 0x0
// total size: 0x14
struct /* @anon7 */ {} CTrueForYLong::__vtable; // size: 0x14, address: 0x0
// total size: 0x14
struct /* @anon11 */ {} CActiveEvent::__vtable; // size: 0x14, address: 0x0
class xGlobals * xglobals; // size: 0x4, address: 0x636F28
class xSndGlobals gSnd; // size: 0x2970, address: 0x7A57F0
class zGlobals globals; // size: 0x2410, address: 0x7AB790
signed int compare(void *, void *); // size: 0x0, address: 0x0
signed long skyTest_1; // size: 0x4, address: 0x636808
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x643E38
unsigned char HDR_brightening; // size: 0x1, address: 0x638330
signed int compare_opaque_buckets(void *, void *); // size: 0x0, address: 0x4083F0
class RpAtomic * GimmeAtomicCallback(class RpAtomic *, void *); // size: 0x0, address: 0x4081C0
class RwRaster * ShadowRenderRaster; // size: 0x4, address: 0x0
unsigned int FB_YRES; // size: 0x4, address: 0x636F20
unsigned int FB_XRES; // size: 0x4, address: 0x636F1C
float cosSinPolynomial[]; // size: 0x0, address: 0x605540
class xColor_tag g_BLACK; // size: 0x4, address: 0x62C8A0
class xColor_tag g_CLEAR; // size: 0x4, address: 0x62C8B0
unsigned int lastSetFBMSK; // size: 0x4, address: 0x638500
class xColor_tag g_MAGENTA; // size: 0x4, address: 0x62C890
class xColor_tag g_WHITE; // size: 0x4, address: 0x62C8A8
unsigned int _rwSkyLightQWordsWritten; // size: 0x4, address: 0x63707C
float * _rwSkyLightFillPos; // size: 0x4, address: 0x637078
signed int JSPApplyLightCB(class xJSPHeader *, class xJSPNodeTreeLeaf *, class RwBBox *, void *); // size: 0x0, address: 0x0
class xColor_tag g_CYAN; // size: 0x4, address: 0x0
class RpAtomic * ListAtomicCB(class RpAtomic *, void *); // size: 0x0, address: 0x413350
class RpAtomic * AddAtomicCB(class RpAtomic *, void *); // size: 0x0, address: 0x4133C0
class RpAtomic * CountAtomicCB(class RpAtomic *, void *); // size: 0x0, address: 0x4134B0
class RpAtomic * AddAtomicPrecalcedVertCB(class RpAtomic *, void *); // size: 0x0, address: 0x413370
class RpMesh * AddMeshCB(class RpMesh *, class RpMeshHeader *, void *); // size: 0x0, address: 0x413430
// total size: 0x1C
struct /* @anon9 */ {} xMemoryManagerGeneral::__vtable; // size: 0x1C, address: 0x635E00
// total size: 0x1C
struct /* @anon1 */ {} xMemoryManagerFixed::__vtable; // size: 0x1C, address: 0x635E20
// total size: 0x1C
struct /* @anon4 */ {} xMemoryManager::__vtable; // size: 0x1C, address: 0x0
// total size: 0x10
struct /* @anon5 */ {} xLightVolumeModel::__vtable; // size: 0x10, address: 0x0
// total size: 0x0
class zEntHangable {};
// total size: 0x190
class RwCamera {
    // Members
public:
    class RwObjectHasFrame object; // offset 0x0, size 0x14
    enum RwCameraProjection projectionType; // offset 0x14, size 0x4
    class RwCamera * (* beginUpdate)(class RwCamera *); // offset 0x18, size 0x4
    class RwCamera * (* endUpdate)(class RwCamera *); // offset 0x1C, size 0x4
    class RwMatrixTag viewMatrix; // offset 0x20, size 0x40
    class RwRaster * frameBuffer; // offset 0x60, size 0x4
    class RwRaster * zBuffer; // offset 0x64, size 0x4
    class RwV2d viewWindow; // offset 0x68, size 0x8
    class RwV2d recipViewWindow; // offset 0x70, size 0x8
    class RwV2d viewOffset; // offset 0x78, size 0x8
    float nearPlane; // offset 0x80, size 0x4
    float farPlane; // offset 0x84, size 0x4
    float fogPlane; // offset 0x88, size 0x4
    float zScale; // offset 0x8C, size 0x4
    float zShift; // offset 0x90, size 0x4
    class RwFrustumPlane frustumPlanes[6]; // offset 0x94, size 0x78
    class RwBBox frustumBoundBox; // offset 0x10C, size 0x18
    class RwV3d frustumCorners[8]; // offset 0x124, size 0x60
};
// total size: 0x48
class xJSPHeaderEx : public xJSPHeader {
    // Members
public:
    class xJSPExtraInfo extraInfo; // offset 0x2C, size 0x1C
};
enum RpLightType {
    rpNALIGHTTYPE = 0,
    rpLIGHTDIRECTIONAL = 1,
    rpLIGHTAMBIENT = 2,
    rpLIGHTPOINT = 128,
    rpLIGHTSPOT = 129,
    rpLIGHTSPOTSOFT = 130,
    rpLIGHTTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x18
class xBox {
    // Members
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
};
// total size: 0x10
class xQuat {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
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
// total size: 0x34
class xMemoryManagerGeneral : public xMemoryManager {
    // Members
public:
    class FreeNode * freeStart; // offset 0x24, size 0x4
    class FreeNode * freeEnd; // offset 0x28, size 0x4
    enum Dir dir; // offset 0x2C, size 0x4
    enum Strategy strategy; // offset 0x30, size 0x4
};
// total size: 0x44
class xOneLiner {
    // Members
public:
    unsigned int m_soundGroupNameHash; // offset 0x0, size 0x4
    float m_fSoundStartDelay; // offset 0x4, size 0x4
    float m_fTimeSpan; // offset 0x8, size 0x4
    float m_fTimeLastPlayed; // offset 0xC, size 0x4
    unsigned int m_uNumPlays; // offset 0x10, size 0x4
    float m_fDelayBetweenPlays; // offset 0x14, size 0x4
    float m_fProbability; // offset 0x18, size 0x4
    float m_fDefaultDuration; // offset 0x1C, size 0x4
    float m_fLastDuration; // offset 0x20, size 0x4
    unsigned int m_uMaxPlays; // offset 0x24, size 0x4
    enum iSndGroupHandle m_soundGroupHandle; // offset 0x28, size 0x4
    class xOneLinerManager * m_pOLManager; // offset 0x2C, size 0x4
    signed short m_eventType; // offset 0x30, size 0x2
    signed short m_bPlaysInMusicChannel; // offset 0x32, size 0x2
    class BasicInform * m_pData; // offset 0x34, size 0x4
    enum ePlayerType m_playerType; // offset 0x38, size 0x4
    class testerPlayer m_testerData; // offset 0x3C, size 0x8
};
// total size: 0x22C
class xNPCPred : public RyzMemData {
    // Members
public:
    signed int histlist[64]; // offset 0x0, size 0x100
    signed int seqscore[64]; // offset 0x100, size 0x100
    signed int listcnt; // offset 0x200, size 0x4
    signed int flg_predopts; // offset 0x204, size 0x4
    signed int bestScore; // offset 0x208, size 0x4
    signed int bestGuess; // offset 0x20C, size 0x4
    signed int idx_bestTail; // offset 0x210, size 0x4
    signed int reliableThresh; // offset 0x214, size 0x4
    float adjustedThresh; // offset 0x218, size 0x4
    signed int thoughtItWasGood; // offset 0x21C, size 0x4
    signed int sum_scores; // offset 0x220, size 0x4
    float strengthRating; // offset 0x224, size 0x4
    signed int idx_strongest; // offset 0x228, size 0x4
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
// total size: 0x24
class xMemoryManager {
    // Members
public:
    void * arenaStart; // offset 0x4, size 0x4
    void * arenaEnd; // offset 0x8, size 0x4
    unsigned int size; // offset 0xC, size 0x4
    char * lastFile; // offset 0x10, size 0x4
    char * lastFunction; // offset 0x14, size 0x4
    signed int lastLine; // offset 0x18, size 0x4
    unsigned int debugDataSize; // offset 0x1C, size 0x4
    class DebugAllocationHeader * activeList; // offset 0x20, size 0x4
};
// total size: 0x14
class RwStreamCustom {
    // Members
public:
    signed int (* sfnclose)(void *); // offset 0x0, size 0x4
    unsigned int (* sfnread)(void *, void *, unsigned int); // offset 0x4, size 0x4
    signed int (* sfnwrite)(void *, void *, unsigned int); // offset 0x8, size 0x4
    signed int (* sfnskip)(void *, unsigned int); // offset 0xC, size 0x4
    void * data; // offset 0x10, size 0x4
};
// total size: 0xFC
class zPlayer : public zEnt {
    // Members
public:
    class xVec3 trigLastFramePos; // offset 0xE0, size 0xC
    signed int zPlayerFlags; // offset 0xEC, size 0x4
    unsigned int lorezModelID; // offset 0xF0, size 0x4
    class xModelInstance * lorezModel; // offset 0xF4, size 0x4
    class xModelInstance * hirezModel; // offset 0xF8, size 0x4
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
// total size: 0x10
class xMorphSeqFile {
    // Members
public:
    unsigned int Magic; // offset 0x0, size 0x4
    unsigned int Flags; // offset 0x4, size 0x4
    unsigned int TimeCount; // offset 0x8, size 0x4
    unsigned int ModelCount; // offset 0xC, size 0x4
};
// total size: 0x200
class zLasso {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    float secsTotal; // offset 0x4, size 0x4
    float secsLeft; // offset 0x8, size 0x4
    float stRadius; // offset 0xC, size 0x4
    float tgRadius; // offset 0x10, size 0x4
    float crRadius; // offset 0x14, size 0x4
    class xVec3 stCenter; // offset 0x18, size 0xC
    class xVec3 tgCenter; // offset 0x24, size 0xC
    class xVec3 crCenter; // offset 0x30, size 0xC
    class xVec3 stNormal; // offset 0x3C, size 0xC
    class xVec3 tgNormal; // offset 0x48, size 0xC
    class xVec3 crNormal; // offset 0x54, size 0xC
    class xVec3 honda; // offset 0x60, size 0xC
    float stSlack; // offset 0x6C, size 0x4
    float stSlackDist; // offset 0x70, size 0x4
    float tgSlack; // offset 0x74, size 0x4
    float tgSlackDist; // offset 0x78, size 0x4
    float crSlack; // offset 0x7C, size 0x4
    float currDist; // offset 0x80, size 0x4
    float lastDist; // offset 0x84, size 0x4
    class xVec3 lastRefs[5]; // offset 0x88, size 0x3C
    unsigned char reindex[5]; // offset 0xC4, size 0x5
    unsigned char pad[3]; // offset 0xC9, size 0x3
    class xVec3 anchor; // offset 0xCC, size 0xC
    class xModelTag tag; // offset 0xD8, size 0x20
    class xModelInstance * model; // offset 0xF8, size 0x4
    unsigned int patTongue; // offset 0xFC, size 0x4
    class RpAtomic * tipModel; // offset 0x100, size 0x4
    class xMat4x3 * tipMatrix; // offset 0x104, size 0x4
    float tipDelay; // offset 0x108, size 0x4
    float tipLerp; // offset 0x10C, size 0x4
    class xSpline3 * spl; // offset 0x110, size 0x4
    unsigned int spldata[59]; // offset 0x114, size 0xEC
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
// total size: 0x8
class CActiveEvent : public BasicInform {
    // Members
public:
    float m_fDuration; // offset 0x4, size 0x4
};
// total size: 0x10
class FreeNode {
    // Members
public:
    class FreeNode * next; // offset 0x0, size 0x4
    class FreeNode * prev; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    unsigned int pad[1]; // offset 0xC, size 0x4
};
// total size: 0x40
class xMat4x3 : public xMat3x3 {
    // Members
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
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
// total size: 0x20
class xFuncPiece {
    // Members
public:
    float coef[5]; // offset 0x0, size 0x14
    float end; // offset 0x14, size 0x4
    signed int order; // offset 0x18, size 0x4
    class xFuncPiece * next; // offset 0x1C, size 0x4
};
// total size: 0xC
class xMemBlock {
    // Members
public:
    unsigned int addr; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    signed int align; // offset 0x8, size 0x4
};
// total size: 0x14
class RwFrustumPlane {
    // Members
public:
    class RwPlane plane; // offset 0x0, size 0x10
    unsigned char closestX; // offset 0x10, size 0x1
    unsigned char closestY; // offset 0x11, size 0x1
    unsigned char closestZ; // offset 0x12, size 0x1
    unsigned char pad; // offset 0x13, size 0x1
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
// total size: 0x4
class node {
    // Members
public:
    float t; // offset 0x0, size 0x4
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
// total size: 0xA0
class xConic {
    // Members
public:
    class xMat4x3 basis; // offset 0x0, size 0x40
    class xMat4x3 invbasis; // offset 0x40, size 0x40
    float coef[5]; // offset 0x80, size 0x14
    class xVec3 coneBasisCenter; // offset 0x94, size 0xC
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
// total size: 0x8
class xJSPNodeInfo {
    // Members
public:
    signed int originalMatIndex; // offset 0x0, size 0x4
    unsigned short nodeFlags; // offset 0x4, size 0x2
    signed short sortOrder; // offset 0x6, size 0x2
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
// total size: 0x8
class xBaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
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
// total size: 0x8
class testerPlayer {
    // Members
public:
    signed int firstParam; // offset 0x0, size 0x4
    float secondParam; // offset 0x4, size 0x4
};
// total size: 0x0
class xSerial {};
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
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x4
class _tagiPad {
    // Members
public:
    signed int port; // offset 0x0, size 0x4
};
// total size: 0x4
class BasicInform {};
// total size: 0x14
class xFXFastRaster {
    // Members
public:
    class RwRaster * src; // offset 0x0, size 0x4
    class RwRaster * dst; // offset 0x4, size 0x4
    unsigned int fbmsk; // offset 0x8, size 0x4
    unsigned int test; // offset 0xC, size 0x4
    unsigned int old_alpha_1; // offset 0x10, size 0x4
};
// total size: 0x14
class xHeapState {
    // Members
public:
    unsigned int curr; // offset 0x0, size 0x4
    unsigned short blk_ct; // offset 0x4, size 0x2
    unsigned short pad; // offset 0x6, size 0x2
    unsigned int used; // offset 0x8, size 0x4
    unsigned int wasted; // offset 0xC, size 0x4
    class xMemFreeLink * free_funcs; // offset 0x10, size 0x4
};
// total size: 0x4F0
class zScene : public xScene {
    // Members
public:
    class _zPortal * pendingPortal; // offset 0x68, size 0x4
    signed int num_base; // offset 0x6C, size 0x4
    class xBase * * base; // offset 0x70, size 0x4
    unsigned int num_update_base; // offset 0x74, size 0x4
    class xBase * * update_base; // offset 0x78, size 0x4
    signed int baseCount[141]; // offset 0x7C, size 0x234
    class xBase * baseList[141]; // offset 0x2B0, size 0x234
    class _zEnv * zen; // offset 0x4E4, size 0x4
    class zSceneParameters * parameters; // offset 0x4E8, size 0x4
    unsigned char enableDrawing; // offset 0x4EC, size 0x1
};
// total size: 0x14
class xModelAlphaBucket {
    // Members
public:
    class RpAtomic * Data; // offset 0x0, size 0x4
    class xModelInstance * MInst; // offset 0x4, size 0x4
    float AlphaFade; // offset 0x8, size 0x4
    float SortValue; // offset 0xC, size 0x4
    unsigned int Layer; // offset 0x10, size 0x4
};
// total size: 0xC
class st_ELIST {
    // Members
public:
    class st_ENODE * head; // offset 0x0, size 0x4
    class st_ENODE * tail; // offset 0x4, size 0x4
    class st_ENODE * tailprev; // offset 0x8, size 0x4
};
// total size: 0x30
class DebugAllocationHeader {
    // Members
public:
    char * file; // offset 0x0, size 0x4
    signed int line; // offset 0x4, size 0x4
    char * function; // offset 0x8, size 0x4
    unsigned int size; // offset 0xC, size 0x4
    class DebugAllocationHeader * prev; // offset 0x10, size 0x4
    class DebugAllocationHeader * next; // offset 0x14, size 0x4
    class xMemoryManager * manager; // offset 0x18, size 0x4
    unsigned int magic[5]; // offset 0x1C, size 0x14
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
class xSndGroup {
    // Members
public:
    class xSndGroupHeader header; // offset 0x0, size 0x20
    class xSndGroupInfo aSndGroupInfo[]; // offset 0x20, size 0x0
};
// total size: 0x6C
class xSndVoiceInfo {
    // Members
public:
    union { // inferred
        class xSndGroup * soundGroup; // offset 0x0, size 0x4
        enum iSndGroupHandle soundGroupHandle; // offset 0x0, size 0x4
    };
    unsigned int assetID; // offset 0x4, size 0x4
    enum iSndHandle sndUniqueID; // offset 0x8, size 0x4
    class xEnt * pParent; // offset 0xC, size 0x4
    class xVec3 * pPosition; // offset 0x10, size 0x4
    unsigned int flags; // offset 0x14, size 0x4
    float vol; // offset 0x18, size 0x4
    float xpitch; // offset 0x1C, size 0x4
    float dopplerFreqCoef; // offset 0x20, size 0x4
    signed short category; // offset 0x24, size 0x2
    unsigned char bformerlyAPartOfPriority; // offset 0x26, size 0x1
    unsigned char priority; // offset 0x27, size 0x1
    class xVec3 actualPos; // offset 0x28, size 0xC
    class xVec3 playPos; // offset 0x34, size 0xC
    class xVec3 * pVelocity; // offset 0x40, size 0x4
    class xVec3 actualVelocity; // offset 0x44, size 0xC
    float distToListener; // offset 0x50, size 0x4
    float innerRadius; // offset 0x54, size 0x4
    float outerRadius; // offset 0x58, size 0x4
    class iSndInfo ps; // offset 0x5C, size 0xC
    class iSndFileInfo * pSndFileInfo; // offset 0x68, size 0x4
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
enum _zPlayerType {
    ePlayer_SB = 0,
    ePlayer_Patrick = 1,
    ePlayer_MAXTYPES = 2,
};
// total size: 0x14
class _zEnv : public xBase {
    // Members
public:
    class xEnvAsset * easset; // offset 0x10, size 0x4
};
// total size: 0x10
class st_XORDEREDARRAY {
    // Members
public:
    void * * list; // offset 0x0, size 0x4
    signed int cnt; // offset 0x4, size 0x4
    signed int max; // offset 0x8, size 0x4
    signed int warnlvl; // offset 0xC, size 0x4
};
// total size: 0x30
class CHappensXTimesWithinY : public BasicInform {
    // Members
public:
    float m_fHappenTimeCountdown[10]; // offset 0x4, size 0x28
    signed int m_nHappenedCount; // offset 0x2C, size 0x4
};
// total size: 0x34
class xMemoryManagerMarkSet : public xMemoryManager {
    // Members
public:
    void * top; // offset 0x24, size 0x4
    enum Dir dir; // offset 0x28, size 0x4
    void * lastAlloc; // offset 0x2C, size 0x4
    unsigned int lastAllocSize; // offset 0x30, size 0x4
};
// total size: 0x10C
class xMemHeap {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int hard_base; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    signed short opp_heap[2]; // offset 0xC, size 0x4
    class xHeapState state[12]; // offset 0x10, size 0xF0
    unsigned short state_idx; // offset 0x100, size 0x2
    unsigned short max_blks; // offset 0x102, size 0x2
    class xMemBlock * blk; // offset 0x104, size 0x4
    class xMemBlock * lastblk; // offset 0x108, size 0x4
};
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
class xAnimPhysicsData {
    // Members
public:
    class xVec3 * tranTable; // offset 0x0, size 0x4
    float * yawTable; // offset 0x4, size 0x4
    signed int tranCount; // offset 0x8, size 0x4
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
// total size: 0x8
class TempSplitChild {
    // Members
public:
    signed int node; // offset 0x0, size 0x4
    signed int type; // offset 0x4, size 0x4
};
// total size: 0xC0
class rwPDS_HICloneArray {
    // Members
public:
    float mat1X; // offset 0x0, size 0x4
    float mat1Y; // offset 0x4, size 0x4
    signed int cloneFlag; // offset 0x8, size 0x4
    float mat1W; // offset 0xC, size 0x4
    float mat2X; // offset 0x10, size 0x4
    float mat2Y; // offset 0x14, size 0x4
    signed int UNUSED1; // offset 0x18, size 0x4
    float mat2W; // offset 0x1C, size 0x4
    float mat3X; // offset 0x20, size 0x4
    float mat3Y; // offset 0x24, size 0x4
    signed int UNUSED2; // offset 0x28, size 0x4
    float mat3W; // offset 0x2C, size 0x4
    float mat4X; // offset 0x30, size 0x4
    float mat4Y; // offset 0x34, size 0x4
    float mat4Z; // offset 0x38, size 0x4
    float mat4W; // offset 0x3C, size 0x4
    float colScale[4]; // offset 0x40, size 0x10
    class RwV3d lmat1; // offset 0x50, size 0xC
    float lmatposX; // offset 0x5C, size 0x4
    class RwV3d lmat2; // offset 0x60, size 0xC
    float lmatposY; // offset 0x6C, size 0x4
    class RwV3d lmat3; // offset 0x70, size 0xC
    float lmatposZ; // offset 0x7C, size 0x4
    float bonusLt0_color[3]; // offset 0x80, size 0xC
    signed int UNUSED3; // offset 0x8C, size 0x4
    class RwV3d bonusLt0_dir; // offset 0x90, size 0xC
    float bonusLt0_rad; // offset 0x9C, size 0x4
    float bonusLt1_color[3]; // offset 0xA0, size 0xC
    signed int UNUSED4; // offset 0xAC, size 0x4
    class RwV3d bonusLt1_dir; // offset 0xB0, size 0xC
    float bonusLt1_rad; // offset 0xBC, size 0x4
};
// total size: 0x10
class xVec4 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
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
// total size: 0x30
class xMovePoint : public xBase {
    // Members
public:
    class xMovePointAsset * asset; // offset 0x10, size 0x4
    class xVec3 * pos; // offset 0x14, size 0x4
    class xMovePoint * * nodes; // offset 0x18, size 0x4
    class xMovePoint * prev; // offset 0x1C, size 0x4
    unsigned int node_wt_sum; // offset 0x20, size 0x4
    unsigned char on; // offset 0x24, size 0x1
    unsigned char pad[3]; // offset 0x25, size 0x3
    float delay; // offset 0x28, size 0x4
    class xSpline3 * spl; // offset 0x2C, size 0x4
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
// total size: 0x10
class DebugAllocationTrailer {
    // Members
public:
    unsigned int magic[4]; // offset 0x0, size 0x10
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
// total size: 0x4
class iSndVol {
    // Members
public:
    signed short volL; // offset 0x0, size 0x2
    signed short volR; // offset 0x2, size 0x2
};
// total size: 0x8
class xAnimMultiFileEntry {
    // Members
public:
    unsigned int ID; // offset 0x0, size 0x4
    class xAnimFile * File; // offset 0x4, size 0x4
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
// total size: 0x20
class xJSPNodeTreeLeaf {
    // Members
public:
    signed int nodeIndex; // offset 0x0, size 0x4
    signed int leafCount; // offset 0x4, size 0x4
    class RwBBox box; // offset 0x8, size 0x18
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
// total size: 0x30
class xCoef3 {
    // Members
public:
    class xCoef x; // offset 0x0, size 0x10
    class xCoef y; // offset 0x10, size 0x10
    class xCoef z; // offset 0x20, size 0x10
};
// total size: 0x14
struct /* @anon0 */ {};
// total size: 0x14
class xLightVolumeModel : public xLightVolume {
    // Members
public:
    class xModelInstance * model; // offset 0x8, size 0x4
    class xColor_tag color; // offset 0xC, size 0x4
    unsigned char inside; // offset 0x10, size 0x1
    unsigned char single; // offset 0x11, size 0x1
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
enum ePlayerType {
    eALWAYS = 0,
    eCOUNTER = 1,
    eCHECKER = 2,
    eTESTER = 3,
    ePLAYER_TYPE_SIZE = 4,
};
// total size: 0x18
class RwBBox {
    // Members
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
};
// total size: 0x8
class xLightVolume {
    // Members
public:
    class activity_type * activity; // offset 0x4, size 0x4
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
// total size: 0x120
class xCamGroup {
    // Members
public:
    class xMat4x3 mat; // offset 0x0, size 0x40
    class xVec3 vel; // offset 0x40, size 0xC
    float fov; // offset 0x4C, size 0x4
    float fov_default; // offset 0x50, size 0x4
    signed int flags; // offset 0x54, size 0x4
    class xCam * primary; // offset 0x58, size 0x4
    class analog_data analog; // offset 0x5C, size 0x18
    class xCam * owned[32]; // offset 0x74, size 0x80
    signed int size; // offset 0xF4, size 0x4
    signed int primary_index; // offset 0xF8, size 0x4
    signed int child_flags; // offset 0xFC, size 0x4
    signed int child_flags_mask; // offset 0x100, size 0x4
    class xCamBlend * blend_cam[4]; // offset 0x104, size 0x10
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
// total size: 0x28
class xMovePointAsset : public xBaseAsset {
    // Members
public:
    class xVec3 pos; // offset 0x8, size 0xC
    unsigned short wt; // offset 0x14, size 0x2
    unsigned char on; // offset 0x16, size 0x1
    unsigned char bezIndex; // offset 0x17, size 0x1
    unsigned char flg_props; // offset 0x18, size 0x1
    unsigned char pad; // offset 0x19, size 0x1
    unsigned short numPoints; // offset 0x1A, size 0x2
    float delay; // offset 0x1C, size 0x4
    float zoneRadius; // offset 0x20, size 0x4
    float arenaRadius; // offset 0x24, size 0x4
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
// total size: 0xC
class CUniqueAmountLessThanX : public BasicInform {
    // Members
public:
    float m_fDuration; // offset 0x4, size 0x4
    signed int m_nUniqueAmount; // offset 0x8, size 0x4
};
// total size: 0x8
class RwV2d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x24
class RpHAnimHierarchy {
    // Members
public:
    signed int flags; // offset 0x0, size 0x4
    signed int numNodes; // offset 0x4, size 0x4
    class RwMatrixTag * pMatrixArray; // offset 0x8, size 0x4
    void * pMatrixArrayUnaligned; // offset 0xC, size 0x4
    class RpHAnimNodeInfo * pNodeInfo; // offset 0x10, size 0x4
    class RwFrame * parentFrame; // offset 0x14, size 0x4
    class RpHAnimHierarchy * parentHierarchy; // offset 0x18, size 0x4
    signed int rootParentOffset; // offset 0x1C, size 0x4
    class RtAnimInterpolator * currentAnim; // offset 0x20, size 0x4
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
// total size: 0x1C
struct /* @anon1 */ {};
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
// total size: 0x10
class RwPlane {
    // Members
public:
    class RwV3d normal; // offset 0x0, size 0xC
    float distance; // offset 0xC, size 0x4
};
// total size: 0x1C
class zCheckPoint {
    // Members
public:
    class xVec3 pos; // offset 0x0, size 0xC
    float rot; // offset 0xC, size 0x4
    unsigned int initCamID; // offset 0x10, size 0x4
    unsigned char * jsp_active; // offset 0x14, size 0x4
    enum xSndEffect currentEffect; // offset 0x18, size 0x4
};
enum xCamOrientType {
    XCAM_ORIENT_INVALID = -1,
    XCAM_ORIENT_QUAT = 0,
    XCAM_ORIENT_EULER = 1,
    XCAM_ORIENT_MAX = 2,
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
// total size: 0x0
class xFFX {};
// total size: 0x10
class AllocatedNode {
    // Members
public:
    unsigned int size; // offset 0x0, size 0x4
    unsigned int pad[3]; // offset 0x4, size 0xC
};
// total size: 0xC
class RxOutputSpec {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
};
// total size: 0x30
class xShadowSimplePoly {
    // Members
public:
    class xVec3 vert[3]; // offset 0x0, size 0x24
    class xVec3 norm; // offset 0x24, size 0xC
};
// total size: 0x8A0
class xGlobals {
    // Members
public:
    class xCamera oldSkoolCamera; // offset 0x0, size 0x340
    class xCamGroup * cam; // offset 0x340, size 0x4
    class xCamScreen * screen; // offset 0x344, size 0x4
    class xVec4 frustplane[12]; // offset 0x350, size 0xC0
    union { // inferred
        struct { // inferred
            class _tagxPad * pad0; // offset 0x410, size 0x4
            class _tagxPad * pad1; // offset 0x414, size 0x4
            class _tagxPad * pad2; // offset 0x418, size 0x4
            class _tagxPad * pad3; // offset 0x41C, size 0x4
        };
        class _tagxPad * pad[4]; // offset 0x410, size 0x10
    };
    signed int profile; // offset 0x420, size 0x4
    char profFunc[6][128]; // offset 0x424, size 0x300
    class xUpdateCullMgr * updateMgr; // offset 0x724, size 0x4
    signed int sceneFirst; // offset 0x728, size 0x4
    char sceneStart[32]; // offset 0x72C, size 0x20
    class RpWorld * currWorld; // offset 0x74C, size 0x4
    class iFogParams fog; // offset 0x750, size 0x1C
    class iFogParams fogA; // offset 0x76C, size 0x1C
    class iFogParams fogB; // offset 0x788, size 0x1C
    signed long fog_t0; // offset 0x7A8, size 0x4
    signed long fog_t1; // offset 0x7B0, size 0x4
    signed int option_vibration; // offset 0x7B8, size 0x4
    signed int option_subtitles; // offset 0x7BC, size 0x4
    unsigned int slowdown; // offset 0x7C0, size 0x4
    float update_dt; // offset 0x7C4, size 0x4
    signed short ForceCinematic; // offset 0x7C8, size 0x2
    signed short ForceAllCinematics; // offset 0x7CA, size 0x2
    signed int useHIPHOP; // offset 0x7CC, size 0x4
    unsigned char NoMusic; // offset 0x7D0, size 0x1
    unsigned char NoCutscenes; // offset 0x7D1, size 0x1
    unsigned char NoPadCheck; // offset 0x7D2, size 0x1
    char currentActivePad; // offset 0x7D3, size 0x1
    unsigned char firstStartPressed; // offset 0x7D4, size 0x1
    unsigned char fromLauncher; // offset 0x7D5, size 0x1
    unsigned char FlashWIP; // offset 0x7D6, size 0x1
    unsigned char inLoadingScreen; // offset 0x7D7, size 0x1
    unsigned char LoadingScene; // offset 0x7D8, size 0x1
    unsigned char InitializingLoadingScreen; // offset 0x7D9, size 0x1
    unsigned char ForceMono; // offset 0x7DA, size 0x1
    unsigned int minVSyncCnt; // offset 0x7DC, size 0x4
    unsigned char dontShowPadMessageDuringLoadingOrCutScene; // offset 0x7E0, size 0x1
    unsigned char autoSaveFeature; // offset 0x7E1, size 0x1
    signed int asyncLoadingScreen; // offset 0x7E4, size 0x4
    signed int asyncLoadingFlags; // offset 0x7E8, size 0x4
    char fromLauncherUser[32]; // offset 0x7EC, size 0x20
    class zPlayer * ___player_ent_dont_use_directly; // offset 0x80C, size 0x4
    class zScene * sceneCur; // offset 0x810, size 0x4
    class zScene * scenePreload; // offset 0x814, size 0x4
    class PS2DemoGlobals * PS2demo; // offset 0x818, size 0x4
    char watermark[127]; // offset 0x81C, size 0x7F
    unsigned char watermarkAlpha; // offset 0x89B, size 0x1
    float watermarkSize; // offset 0x89C, size 0x4
};
// total size: 0x38
class xModelAssetInst {
    // Members
public:
    unsigned int ModelID; // offset 0x0, size 0x4
    unsigned short Flags; // offset 0x4, size 0x2
    unsigned char Parent; // offset 0x6, size 0x1
    unsigned char Bone; // offset 0x7, size 0x1
    float MatRight[3]; // offset 0x8, size 0xC
    float MatUp[3]; // offset 0x14, size 0xC
    float MatAt[3]; // offset 0x20, size 0xC
    float MatPos[3]; // offset 0x2C, size 0xC
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
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0xC
class CUniqueAmountGreaterThanX : public BasicInform {
    // Members
public:
    float m_fDuration; // offset 0x4, size 0x4
    signed int m_nUniqueAmount; // offset 0x8, size 0x4
};
// total size: 0x2C
class xIsect {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    float penned; // offset 0x4, size 0x4
    float contained; // offset 0x8, size 0x4
    float lapped; // offset 0xC, size 0x4
    class xVec3 point; // offset 0x10, size 0xC
    class xVec3 norm; // offset 0x1C, size 0xC
    float dist; // offset 0x28, size 0x4
};
// total size: 0x4
class FixedHeader {
    // Members
public:
    class FixedHeader * next; // offset 0x0, size 0x4
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
// total size: 0x10
class xUpdateCullEnt {
    // Members
public:
    unsigned short index; // offset 0x0, size 0x2
    signed short groupIndex; // offset 0x2, size 0x2
    unsigned int (* update_cull_cb)(void *, void *); // offset 0x4, size 0x4
    void * cbdata; // offset 0x8, size 0x4
    class xUpdateCullEnt * nextInGroup; // offset 0xC, size 0x4
};
// total size: 0x4
class /* @class */ {
    // Members
public:
    class xVec3 * verts; // offset 0x0, size 0x4
};
// total size: 0x24
class TempSplit {
    // Members
public:
    class TempSplitChild leftChild; // offset 0x0, size 0x8
    class TempSplitChild rightChild; // offset 0x8, size 0x8
    signed int leftCount; // offset 0x10, size 0x4
    signed int rightCount; // offset 0x14, size 0x4
    signed int axis; // offset 0x18, size 0x4
    float leftValue; // offset 0x1C, size 0x4
    float rightValue; // offset 0x20, size 0x4
};
// total size: 0xC
class RpMaterialList {
    // Members
public:
    class RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
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
// total size: 0x20
class /* @class */ {
    // Members
public:
    union { // inferred
        class xVec3 cart; // offset 0x0, size 0xC
        class xCamCoordCylinder cylinder; // offset 0x0, size 0x18
        class xCamCoordSphere sphere; // offset 0x0, size 0x20
    };
};
// total size: 0x30
class xMemoryManagerFixed : public xMemoryManager {
    // Members
public:
    class FixedHeader * freeList; // offset 0x24, size 0x4
    unsigned int elements; // offset 0x28, size 0x4
    unsigned int elementSize; // offset 0x2C, size 0x4
};
// total size: 0xC
class xMemFreeLink {
    // Members
public:
    class xMemFreeLink * next; // offset 0x0, size 0x4
    void (* func)(void *); // offset 0x4, size 0x4
    void * param; // offset 0x8, size 0x4
};
// total size: 0x10
class xSphere {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
// total size: 0xD0
class xCam {
    // Members
public:
    class xMat4x3 mat; // offset 0x0, size 0x40
    float fov; // offset 0x40, size 0x4
    signed int flags; // offset 0x44, size 0x4
    unsigned int owner; // offset 0x48, size 0x4
    class xCamGroup * group; // offset 0x4C, size 0x4
    class analog_data analog; // offset 0x50, size 0x18
    float motion_factor; // offset 0x68, size 0x4
    enum xCamCoordType coord_type; // offset 0x6C, size 0x4
    enum xCamOrientType orient_type; // offset 0x70, size 0x4
    // total size: 0x20
    class /* @class */ {
        // Members
    public:
        union { // inferred
            class xVec3 cart; // offset 0x0, size 0xC
            class xCamCoordCylinder cylinder; // offset 0x0, size 0x18
            class xCamCoordSphere sphere; // offset 0x0, size 0x20
        };
    } coord; // offset 0x80, size 0x20
    // total size: 0x10
    class /* @class */ {
        // Members
    public:
        union { // inferred
            class xQuat quat; // offset 0x0, size 0x10
            class xCamOrientEuler euler; // offset 0x0, size 0xC
        };
    } orient; // offset 0xA0, size 0x10
    class xCamConfigCommon cfg_common; // offset 0xB0, size 0x8
    signed int group_index; // offset 0xBC, size 0x4
    signed int group_flags; // offset 0xC0, size 0x4
    class xCamBlend * blender; // offset 0xC4, size 0x4
};
enum iSndGroupHandle {
};
// total size: 0x20
class xModelTag {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    unsigned int matidx; // offset 0xC, size 0x4
    float wt[4]; // offset 0x10, size 0x10
};
// total size: 0x8
class st_ENODE {
    // Members
public:
    class st_ENODE * next; // offset 0x0, size 0x4
    class st_ENODE * prev; // offset 0x4, size 0x4
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
// total size: 0xC
class RpMesh {
    // Members
public:
    unsigned short * indices; // offset 0x0, size 0x4
    unsigned int numIndices; // offset 0x4, size 0x4
    class RpMaterial * material; // offset 0x8, size 0x4
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
// total size: 0x4C
class RtAnimInterpolator {
    // Members
public:
    class RtAnimAnimation * pCurrentAnim; // offset 0x0, size 0x4
    float currentTime; // offset 0x4, size 0x4
    void * pNextFrame; // offset 0x8, size 0x4
    class RtAnimInterpolator * (* pAnimCallBack)(class RtAnimInterpolator *, void *); // offset 0xC, size 0x4
    void * pAnimCallBackData; // offset 0x10, size 0x4
    float animCallBackTime; // offset 0x14, size 0x4
    class RtAnimInterpolator * (* pAnimLoopCallBack)(class RtAnimInterpolator *, void *); // offset 0x18, size 0x4
    void * pAnimLoopCallBackData; // offset 0x1C, size 0x4
    signed int maxInterpKeyFrameSize; // offset 0x20, size 0x4
    signed int currentInterpKeyFrameSize; // offset 0x24, size 0x4
    signed int currentAnimKeyFrameSize; // offset 0x28, size 0x4
    signed int numNodes; // offset 0x2C, size 0x4
    signed int isSubInterpolator; // offset 0x30, size 0x4
    signed int offsetInParent; // offset 0x34, size 0x4
    class RtAnimInterpolator * parentAnimation; // offset 0x38, size 0x4
    void (* keyFrameApplyCB)(void *, void *); // offset 0x3C, size 0x4
    void (* keyFrameBlendCB)(void *, void *, void *, float); // offset 0x40, size 0x4
    void (* keyFrameInterpolateCB)(void *, void *, void *, float, void *); // offset 0x44, size 0x4
    void (* keyFrameAddCB)(void *, void *, void *); // offset 0x48, size 0x4
};
// total size: 0x4
class xAnimMultiFileBase {
    // Members
public:
    unsigned int Count; // offset 0x0, size 0x4
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
// total size: 0xC
class xJSPMiniLightTie {
    // Members
public:
    class RwLLLink lightInWorldSector; // offset 0x0, size 0x8
    class RpLight * light; // offset 0x8, size 0x4
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
enum iSndHandle {
};
// total size: 0x2C
class xSpline3 {
    // Members
public:
    unsigned short type; // offset 0x0, size 0x2
    unsigned short flags; // offset 0x2, size 0x2
    unsigned int N; // offset 0x4, size 0x4
    unsigned int allocN; // offset 0x8, size 0x4
    class xVec3 * points; // offset 0xC, size 0x4
    float * time; // offset 0x10, size 0x4
    class xVec3 * p12; // offset 0x14, size 0x4
    class xVec3 * bctrl; // offset 0x18, size 0x4
    float * knot; // offset 0x1C, size 0x4
    class xCoef3 * coef; // offset 0x20, size 0x4
    unsigned int arcSample; // offset 0x24, size 0x4
    float * arcLength; // offset 0x28, size 0x4
};
// total size: 0x10
class xRot {
    // Members
public:
    class xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
};
// total size: 0x10
class xResponseCurve {
    // Members
public:
    unsigned int _values; // offset 0x0, size 0x4
    class inode * curve; // offset 0x4, size 0x4
    unsigned int _nodes; // offset 0x8, size 0x4
    unsigned int active_node; // offset 0xC, size 0x4
};
// total size: 0x8
class xCamScreen {
    // Members
public:
    class RwCamera * icam; // offset 0x0, size 0x4
    float fov; // offset 0x4, size 0x4
};
// total size: 0x4
class activity_type {
    // Members
public:
    class xLightVolume * owner; // offset 0x0, size 0x4
};
// total size: 0x4
class RwStreamFile {
    // Members
public:
    union { // inferred
        void * fpFile; // offset 0x0, size 0x4
        void * constfpFile; // offset 0x0, size 0x4
    };
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
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xE0
class xCamBlend : public xCam {
    // Members
public:
    class xCam * src; // offset 0xD0, size 0x4
    class xCam * dst; // offset 0xD4, size 0x4
    float time; // offset 0xD8, size 0x4
};
// total size: 0x14
class xCylinder {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
// total size: 0x24
class xOneLinerManager {
    // Members
public:
    class xOneLiner * m_aOneLinerPlayers; // offset 0x0, size 0x4
    signed int m_iNextSound; // offset 0x4, size 0x4
    enum iSndGroupHandle m_currentSoundID; // offset 0x8, size 0x4
    float m_pauseBetweenSounds; // offset 0xC, size 0x4
    float m_lastUpdateTime; // offset 0x10, size 0x4
    float m_lastPlayedTime; // offset 0x14, size 0x4
    float m_queuedSoundTimer; // offset 0x18, size 0x4
    unsigned short m_NumEventTypes; // offset 0x1C, size 0x2
    unsigned short m_NumOLPlayers; // offset 0x1E, size 0x2
    unsigned short m_nextSoundPriority; // offset 0x20, size 0x2
    unsigned short m_priorityFilter; // offset 0x22, size 0x2
};
// total size: 0x4
class RpSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
};
// total size: 0xC
class xCamOrientEuler {
    // Members
public:
    float yaw; // offset 0x0, size 0x4
    float pitch; // offset 0x4, size 0x4
    float roll; // offset 0x8, size 0x4
};
// total size: 0x58
class CXNumUniqueWithinY : public BasicInform {
    // Members
public:
    void * m_Uniqueness[10]; // offset 0x4, size 0x28
    float m_fHitTimeCountdown[10]; // offset 0x2C, size 0x28
    signed int m_nUniqueCount; // offset 0x54, size 0x4
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
class __rwMark {
    // Members
public:
    unsigned int type; // offset 0x0, size 0x4
    unsigned int length; // offset 0x4, size 0x4
    unsigned int libraryID; // offset 0x8, size 0x4
};
// total size: 0xC
class CTrueForYLong : public BasicInform {
    // Members
public:
    float m_fTruthStartTime; // offset 0x4, size 0x4
    void * m_Uniqueness; // offset 0x8, size 0x4
};
enum xSndMode {
    xSndMode_Mono = 0,
    xSndMode_Stereo = 1,
    xSndMode_Dolby = 2,
    xSndMode_Count = 3,
};
// total size: 0x0
class zPlatform {};
// total size: 0x1C
class iSndFileInfo {
    // Members
public:
    enum iSndHandle ID; // offset 0x0, size 0x4
    unsigned int assetID; // offset 0x4, size 0x4
    unsigned short sample_rate; // offset 0x8, size 0x2
    unsigned char is_streamed; // offset 0xA, size 0x1
    unsigned char is_looped; // offset 0xB, size 0x1
    union { // inferred
        // total size: 0x8
        class /* @class */ {
            // Members
        public:
            unsigned int address; // offset 0x0, size 0x4
            unsigned int size; // offset 0x4, size 0x4
        } nonstream; // offset 0xC, size 0x8
        // total size: 0x10
        class /* @class */ {
            // Members
        public:
            signed int file_index; // offset 0x0, size 0x4
            unsigned int lsn; // offset 0x4, size 0x4
            unsigned int data_size; // offset 0x8, size 0x4
            unsigned short stream_interleave_size; // offset 0xC, size 0x2
            unsigned short stream_interleave_count; // offset 0xE, size 0x2
        } stream; // offset 0xC, size 0x10
    };
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
// total size: 0x20
class xMorphTargetFile {
    // Members
public:
    unsigned int Magic; // offset 0x0, size 0x4
    unsigned short NumTargets; // offset 0x4, size 0x2
    unsigned short NumVerts; // offset 0x6, size 0x2
    unsigned int Flags; // offset 0x8, size 0x4
    float Scale; // offset 0xC, size 0x4
    class xVec3 Center; // offset 0x10, size 0xC
    float Radius; // offset 0x1C, size 0x4
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
// total size: 0x4
class xClumpCollBSPVertInfo {
    // Members
public:
    unsigned short atomIndex; // offset 0x0, size 0x2
    unsigned short meshVertIndex; // offset 0x2, size 0x2
};
// total size: 0x8
class inode : public node {
    // Members
public:
    float value[1]; // offset 0x4, size 0x4
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
class RpMeshHeader {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned short numMeshes; // offset 0x4, size 0x2
    unsigned short serialNum; // offset 0x6, size 0x2
    unsigned int totalIndicesInMesh; // offset 0x8, size 0x4
    unsigned int firstMeshOffset; // offset 0xC, size 0x4
};
// total size: 0x8
class RxPipelineCluster {
    // Members
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
// total size: 0x10
class /* @class */ {
    // Members
public:
    union { // inferred
        class xQuat quat; // offset 0x0, size 0x10
        class xCamOrientEuler euler; // offset 0x0, size 0xC
    };
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
// total size: 0x14
class xModelAssetInfo {
    // Members
public:
    unsigned int Magic; // offset 0x0, size 0x4
    unsigned int NumModelInst; // offset 0x4, size 0x4
    unsigned int AnimTableID; // offset 0x8, size 0x4
    unsigned int CombatID; // offset 0xC, size 0x4
    unsigned int BrainID; // offset 0x10, size 0x4
};
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
class xAnimMultiFile : public xAnimMultiFileBase {
    // Members
public:
    class xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
};
// total size: 0xC
class RwStreamMemory {
    // Members
public:
    unsigned int position; // offset 0x0, size 0x4
    unsigned int nSize; // offset 0x4, size 0x4
    unsigned char * memBlock; // offset 0x8, size 0x4
};
// total size: 0xC
class RxClusterRef {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
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
// total size: 0x8
class xModelPipe {
    // Members
public:
    unsigned int Flags; // offset 0x0, size 0x4
    unsigned char Layer; // offset 0x4, size 0x1
    unsigned char AlphaDiscard; // offset 0x5, size 0x1
    unsigned short PipePad; // offset 0x6, size 0x2
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
// total size: 0x18
class xPortalAsset : public xBaseAsset {
    // Members
public:
    unsigned int assetCameraID; // offset 0x8, size 0x4
    unsigned int assetMarkerID; // offset 0xC, size 0x4
    float ang; // offset 0x10, size 0x4
    unsigned int sceneID; // offset 0x14, size 0x4
};
// total size: 0x1C
struct /* @anon2 */ {};
enum xSndListener {
    xSndListener_CAMERA = 0,
    xSndListener_PLAYER = 1,
    xSndListener_MAX_TYPES = 2,
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
class xCamConfigCommon {
    // Members
public:
    unsigned char priority; // offset 0x0, size 0x1
    unsigned char pad1; // offset 0x1, size 0x1
    unsigned char pad2; // offset 0x2, size 0x1
    unsigned char pad3; // offset 0x3, size 0x1
    float blend_time; // offset 0x4, size 0x4
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
// total size: 0x24
class RwStream {
    // Members
public:
    enum RwStreamType type; // offset 0x0, size 0x4
    enum RwStreamAccessType accessType; // offset 0x4, size 0x4
    signed int position; // offset 0x8, size 0x4
    class RwStreamUnion Type; // offset 0xC, size 0x14
    signed int rwOwned; // offset 0x20, size 0x4
};
enum zGlobalDemoType {
    zDT_NONE = 0,
    zDT_E3 = 1,
    zDT_PUBLICITY = 2,
    zDT_OPM = 3,
    zDT_LAST = 4,
};
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
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
// total size: 0x8
class RwMemory {
    // Members
public:
    unsigned char * start; // offset 0x0, size 0x4
    unsigned int length; // offset 0x4, size 0x4
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
// total size: 0x160
class zGlobalSettings {
    // Members
public:
    unsigned short AnalogMin; // offset 0x0, size 0x2
    unsigned short AnalogMax; // offset 0x2, size 0x2
    float SundaeTime; // offset 0x4, size 0x4
    float SundaeMult; // offset 0x8, size 0x4
    unsigned int InitialShinyCount; // offset 0xC, size 0x4
    unsigned int InitialSpatulaCount; // offset 0x10, size 0x4
    signed int ShinyValuePurple; // offset 0x14, size 0x4
    signed int ShinyValueBlue; // offset 0x18, size 0x4
    signed int ShinyValueGreen; // offset 0x1C, size 0x4
    signed int ShinyValueYellow; // offset 0x20, size 0x4
    signed int ShinyValueRed; // offset 0x24, size 0x4
    signed int ShinyValueCombo0; // offset 0x28, size 0x4
    signed int ShinyValueCombo1; // offset 0x2C, size 0x4
    signed int ShinyValueCombo2; // offset 0x30, size 0x4
    signed int ShinyValueCombo3; // offset 0x34, size 0x4
    signed int ShinyValueCombo4; // offset 0x38, size 0x4
    signed int ShinyValueCombo5; // offset 0x3C, size 0x4
    signed int ShinyValueCombo6; // offset 0x40, size 0x4
    signed int ShinyValueCombo7; // offset 0x44, size 0x4
    signed int ShinyValueCombo8; // offset 0x48, size 0x4
    signed int ShinyValueCombo9; // offset 0x4C, size 0x4
    signed int ShinyValueCombo10; // offset 0x50, size 0x4
    signed int ShinyValueCombo11; // offset 0x54, size 0x4
    signed int ShinyValueCombo12; // offset 0x58, size 0x4
    signed int ShinyValueCombo13; // offset 0x5C, size 0x4
    signed int ShinyValueCombo14; // offset 0x60, size 0x4
    signed int ShinyValueCombo15; // offset 0x64, size 0x4
    float ComboTimer; // offset 0x68, size 0x4
    unsigned int Initial_Specials; // offset 0x6C, size 0x4
    unsigned int TakeDamage; // offset 0x70, size 0x4
    float DamageTimeHit; // offset 0x74, size 0x4
    float DamageTimeSurface; // offset 0x78, size 0x4
    float DamageTimeEGen; // offset 0x7C, size 0x4
    float DamageSurfKnock; // offset 0x80, size 0x4
    float DamageGiveHealthKnock; // offset 0x84, size 0x4
    unsigned int CheatSpongeball; // offset 0x88, size 0x4
    unsigned int CheatPlayerSwitch; // offset 0x8C, size 0x4
    unsigned int CheatAlwaysPortal; // offset 0x90, size 0x4
    unsigned int CheatFlyToggle; // offset 0x94, size 0x4
    unsigned int FriendlySelectMode; // offset 0x98, size 0x4
    float RotMatchMaxAngle; // offset 0x9C, size 0x4
    float RotMatchMatchTime; // offset 0xA0, size 0x4
    float RotMatchRelaxTime; // offset 0xA4, size 0x4
    float Gravity; // offset 0xA8, size 0x4
    float BBashTime; // offset 0xAC, size 0x4
    float BBashHeight; // offset 0xB0, size 0x4
    float BBashDelay; // offset 0xB4, size 0x4
    float BBashCVTime; // offset 0xB8, size 0x4
    float BBounceSpeed; // offset 0xBC, size 0x4
    float BBashGauntletDelay; // offset 0xC0, size 0x4
    float BBashGauntletBlastRadius; // offset 0xC4, size 0x4
    float BSpinMinFrame; // offset 0xC8, size 0x4
    float BSpinMaxFrame; // offset 0xCC, size 0x4
    float BSpinRadius; // offset 0xD0, size 0x4
    float BSpinReach; // offset 0xD4, size 0x4
    float BSpinReachUpgrade; // offset 0xD8, size 0x4
    float CartwheelDamageSize; // offset 0xDC, size 0x4
    float BubbleBowlTimeDelay; // offset 0xE0, size 0x4
    float BubbleBowlLaunchPosLeft; // offset 0xE4, size 0x4
    float BubbleBowlLaunchPosUp; // offset 0xE8, size 0x4
    float BubbleBowlLaunchPosAt; // offset 0xEC, size 0x4
    float BubbleBowlLaunchVelLeft; // offset 0xF0, size 0x4
    float BubbleBowlLaunchVelUp; // offset 0xF4, size 0x4
    float BubbleBowlLaunchVelAt; // offset 0xF8, size 0x4
    float BubbleBowlPercentIncrease; // offset 0xFC, size 0x4
    float BubbleBowlMinSpeed; // offset 0x100, size 0x4
    float BubbleBowlMinRecoverTime; // offset 0x104, size 0x4
    float SlideAccelVelMin; // offset 0x108, size 0x4
    float SlideAccelVelMax; // offset 0x10C, size 0x4
    float SlideAccelStart; // offset 0x110, size 0x4
    float SlideAccelEnd; // offset 0x114, size 0x4
    float SlideAccelPlayerFwd; // offset 0x118, size 0x4
    float SlideAccelPlayerBack; // offset 0x11C, size 0x4
    float SlideAccelPlayerSide; // offset 0x120, size 0x4
    float SlideVelMaxStart; // offset 0x124, size 0x4
    float SlideVelMaxEnd; // offset 0x128, size 0x4
    float SlideVelMaxIncTime; // offset 0x12C, size 0x4
    float SlideVelMaxIncAccel; // offset 0x130, size 0x4
    float SlideAirHoldTime; // offset 0x134, size 0x4
    float SlideAirSlowTime; // offset 0x138, size 0x4
    float SlideAirDblHoldTime; // offset 0x13C, size 0x4
    float SlideAirDblSlowTime; // offset 0x140, size 0x4
    float SlideVelDblBoost; // offset 0x144, size 0x4
    unsigned char SlideApplyPhysics; // offset 0x148, size 0x1
    unsigned char PowerUp[10]; // offset 0x149, size 0xA
    unsigned char InitialPowerUp[10]; // offset 0x153, size 0xA
    unsigned char AttractModeDuringGameplay; // offset 0x15D, size 0x1
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
// total size: 0x14
struct /* @anon3 */ {};
// total size: 0x18
class _xMat3x2 {
    // Members
public:
    class xVec2 right; // offset 0x0, size 0x8
    class xVec2 up; // offset 0x8, size 0x8
    class xVec2 pos; // offset 0x10, size 0x8
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
// total size: 0xC
class xJawDataTable {
    // Members
public:
    unsigned int soundHashID; // offset 0x0, size 0x4
    unsigned int dataStart; // offset 0x4, size 0x4
    unsigned int dataLength; // offset 0x8, size 0x4
};
enum xSndEffect {
    xSndEffect_NONE = 0,
    xSndEffect_CAVE = 1,
    xSndEffect_MAX_TYPES = 2,
};
enum RwStreamAccessType {
    rwNASTREAMACCESS = 0,
    rwSTREAMREAD = 1,
    rwSTREAMWRITE = 2,
    rwSTREAMAPPEND = 3,
    rwSTREAMACCESSTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x20C
class zPlayerLassoInfo {
    // Members
public:
    float dist; // offset 0x0, size 0x4
    class xEnt * swingTarget; // offset 0x4, size 0x4
    class xEnt * releasedSwing; // offset 0x8, size 0x4
    class zLasso lasso; // offset 0xC, size 0x200
};
enum Dir {
    Up = 0,
    Down = 1,
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
// total size: 0x380
class zLedgeGrabParams {
    // Members
public:
    float animGrab; // offset 0x0, size 0x4
    float zdist; // offset 0x4, size 0x4
    class xVec3 tranTable[60]; // offset 0x8, size 0x2D0
    signed int tranCount; // offset 0x2D8, size 0x4
    class xEnt * optr; // offset 0x2DC, size 0x4
    class xMat4x3 omat; // offset 0x2E0, size 0x40
    float y0det; // offset 0x320, size 0x4
    float dydet; // offset 0x324, size 0x4
    float r0det; // offset 0x328, size 0x4
    float drdet; // offset 0x32C, size 0x4
    float thdet; // offset 0x330, size 0x4
    float rtime; // offset 0x334, size 0x4
    float ttime; // offset 0x338, size 0x4
    float tmr; // offset 0x33C, size 0x4
    class xVec3 spos; // offset 0x340, size 0xC
    class xVec3 epos; // offset 0x34C, size 0xC
    class xVec3 tpos; // offset 0x358, size 0xC
    signed int nrays; // offset 0x364, size 0x4
    signed int rrand; // offset 0x368, size 0x4
    float startrot; // offset 0x36C, size 0x4
    float endrot; // offset 0x370, size 0x4
};
// total size: 0xC
class xGroupAsset : public xBaseAsset {
    // Members
public:
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
};
// total size: 0x0
class anim_coll_data {};
// total size: 0x10
class xCoef {
    // Members
public:
    float a[4]; // offset 0x0, size 0x10
};
// total size: 0x10
class xModelPipeTable {
    // Members
public:
    unsigned int ModelHashID; // offset 0x0, size 0x4
    unsigned int SubObjectBits; // offset 0x4, size 0x4
    class xModelPipe Pipe; // offset 0x8, size 0x8
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
// total size: 0x1C
struct /* @anon4 */ {};
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
// total size: 0x0
class zRewardsMgr {};
enum RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
};
enum RwStreamType {
    rwNASTREAM = 0,
    rwSTREAMFILE = 1,
    rwSTREAMFILENAME = 2,
    rwSTREAMMEMORY = 3,
    rwSTREAMCUSTOM = 4,
    rwSTREAMTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x18
class RtAnimAnimation {
    // Members
public:
    class RtAnimInterpolatorInfo * interpInfo; // offset 0x0, size 0x4
    signed int numFrames; // offset 0x4, size 0x4
    signed int flags; // offset 0x8, size 0x4
    float duration; // offset 0xC, size 0x4
    void * pFrames; // offset 0x10, size 0x4
    void * customData; // offset 0x14, size 0x4
};
enum Strategy {
    FirstFit = 0,
    BestFit = 1,
};
// total size: 0x2970
class xSndGlobals {
    // Members
public:
    class xSndVoiceInfo voice[96]; // offset 0x0, size 0x2880
    class xMat4x3 listenerMat[2]; // offset 0x2880, size 0x80
    class xVec3 listenerVel[2]; // offset 0x2900, size 0x18
    class xVec3 right; // offset 0x2918, size 0xC
    class xVec3 up; // offset 0x2924, size 0xC
    class xVec3 at; // offset 0x2930, size 0xC
    class xVec3 pos; // offset 0x293C, size 0xC
    class xVec3 velocity; // offset 0x2948, size 0xC
    unsigned int m_uSndMgrFlags; // offset 0x2954, size 0x4
    enum xSndMode sndMode; // offset 0x2958, size 0x4
    unsigned int SndCount; // offset 0x295C, size 0x4
    enum xSndListener listenerMode; // offset 0x2960, size 0x4
};
// total size: 0x8
class xVec2 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x10
class RpHAnimNodeInfo {
    // Members
public:
    signed int nodeID; // offset 0x0, size 0x4
    signed int nodeIndex; // offset 0x4, size 0x4
    signed int flags; // offset 0x8, size 0x4
    class RwFrame * pFrame; // offset 0xC, size 0x4
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
// total size: 0x2410
class zGlobals : public xGlobals {
    // Members
public:
    unsigned int playerTag; // offset 0x8A0, size 0x4
    unsigned int playerLoaded; // offset 0x8A4, size 0x4
    unsigned int playerLoadOrder[8]; // offset 0x8A8, size 0x20
    unsigned char invertJoystick; // offset 0x8C8, size 0x1
    class zPlayerGlobals player; // offset 0x8D0, size 0x1B00
    class zAssetPickupTable * pickupTable; // offset 0x23D0, size 0x4
    class zCutsceneMgr * cmgr; // offset 0x23D4, size 0x4
    class zCutsceneMgr * DisabledCutsceneDoneMgr; // offset 0x23D8, size 0x4
    char startDebugMode[32]; // offset 0x23DC, size 0x20
    unsigned int noMovies; // offset 0x23FC, size 0x4
    unsigned int boundUpdateTime; // offset 0x2400, size 0x4
    unsigned char draw_player_after_fx; // offset 0x2404, size 0x1
    enum zGlobalDemoType demoType; // offset 0x2408, size 0x4
};
// total size: 0x1C
class xMemBlkInfo {
    // Members
public:
    class xMemBlock * header; // offset 0x0, size 0x4
    unsigned int pre; // offset 0x4, size 0x4
    unsigned int block; // offset 0x8, size 0x4
    unsigned int post; // offset 0xC, size 0x4
    unsigned int curr; // offset 0x10, size 0x4
    unsigned int waste; // offset 0x14, size 0x4
    unsigned int total; // offset 0x18, size 0x4
};
// total size: 0x8
class xAnimTransitionList {
    // Members
public:
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
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
// total size: 0x14
class RwObjectHasFrame {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
};
// total size: 0x10
struct /* @anon5 */ {};
enum Dir {
    Up = 0,
    Down = 1,
};
enum _zPlayerWallJumpState {
    k_WALLJUMP_NOT = 0,
    k_WALLJUMP_LAUNCH = 1,
    k_WALLJUMP_FLIGHT = 2,
    k_WALLJUMP_LAND = 3,
    k_WALLJUMP_STUCK = 4,
    k_WALLJUMP_FALL = 5,
};
// total size: 0x14
struct /* @anon6 */ {};
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x24
class xBBox {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    class xBox box; // offset 0xC, size 0x18
};
// total size: 0x10
class zJumpParam {
    // Members
public:
    float PeakHeight; // offset 0x0, size 0x4
    float TimeGravChange; // offset 0x4, size 0x4
    float TimeHold; // offset 0x8, size 0x4
    float ImpulseVel; // offset 0xC, size 0x4
};
// total size: 0x14
class _zPortal : public xBase {
    // Members
public:
    class xPortalAsset * passet; // offset 0x10, size 0x4
};
// total size: 0xC
class RwSurfaceProperties {
    // Members
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
enum xCamCoordType {
    XCAM_COORD_INVALID = -1,
    XCAM_COORD_CART = 0,
    XCAM_COORD_CYLINDER = 1,
    XCAM_COORD_SPHERE = 2,
    XCAM_COORD_MAX = 3,
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
// total size: 0x70
class xEnv {
    // Members
public:
    class iEnv * geom; // offset 0x0, size 0x4
    class iEnv ienv; // offset 0x10, size 0x50
    class xLightKit * lightKit; // offset 0x60, size 0x4
};
// total size: 0xC0
class xEntDrive {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    float otm; // offset 0x4, size 0x4
    float otmr; // offset 0x8, size 0x4
    float os; // offset 0xC, size 0x4
    float tm; // offset 0x10, size 0x4
    float tmr; // offset 0x14, size 0x4
    float s; // offset 0x18, size 0x4
    class xEnt * old_driver; // offset 0x1C, size 0x4
    class xEnt * driver; // offset 0x20, size 0x4
    class xEnt * driven; // offset 0x24, size 0x4
    class xVec3 driven_pos_in_old_driver; // offset 0x28, size 0xC
    class xVec3 driven_pos_in_driver; // offset 0x34, size 0xC
    class xVec3 last_driven_pos; // offset 0x40, size 0xC
    float yaw_in_driver; // offset 0x4C, size 0x4
    class xVec3 dloc; // offset 0x50, size 0xC
    class tri_data tri; // offset 0x60, size 0x60
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
// total size: 0x30
class xMorphFrame {
    // Members
public:
    class RpAtomic * Model; // offset 0x0, size 0x4
    float RecipTime; // offset 0x4, size 0x4
    float Scale; // offset 0x8, size 0x4
    unsigned short Flags; // offset 0xC, size 0x2
    unsigned short NumVerts; // offset 0xE, size 0x2
    signed short * Targets[4]; // offset 0x10, size 0x10
    signed short WeightStart[4]; // offset 0x20, size 0x8
    signed short WeightEnd[4]; // offset 0x28, size 0x8
};
// total size: 0x14
struct /* @anon7 */ {};
// total size: 0xC
class xModelPipeLookup {
    // Members
public:
    class RpAtomic * model; // offset 0x0, size 0x4
    class xModelPipe Pipe; // offset 0x4, size 0x8
};
// total size: 0x30
class RtAnimInterpolatorInfo {
    // Members
public:
    signed int typeID; // offset 0x0, size 0x4
    signed int interpKeyFrameSize; // offset 0x4, size 0x4
    signed int animKeyFrameSize; // offset 0x8, size 0x4
    void (* keyFrameApplyCB)(void *, void *); // offset 0xC, size 0x4
    void (* keyFrameBlendCB)(void *, void *, void *, float); // offset 0x10, size 0x4
    void (* keyFrameInterpolateCB)(void *, void *, void *, float, void *); // offset 0x14, size 0x4
    void (* keyFrameAddCB)(void *, void *, void *); // offset 0x18, size 0x4
    void (* keyFrameMulRecipCB)(void *, void *); // offset 0x1C, size 0x4
    class RtAnimAnimation * (* keyFrameStreamReadCB)(class RwStream *, class RtAnimAnimation *); // offset 0x20, size 0x4
    signed int (* keyFrameStreamWriteCB)(class RtAnimAnimation *, class RwStream *); // offset 0x24, size 0x4
    signed int (* keyFrameStreamGetSizeCB)(class RtAnimAnimation *); // offset 0x28, size 0x4
    signed int customDataSize; // offset 0x2C, size 0x4
};
// total size: 0x1C
class xCapsule {
    // Members
public:
    class xVec3 start; // offset 0x0, size 0xC
    class xVec3 end; // offset 0xC, size 0xC
    float r; // offset 0x18, size 0x4
};
// total size: 0x0
class zAssetPickupTable {};
// total size: 0x1
class RyzMemData {};
// total size: 0x1B00
class zPlayerGlobals {
    // Members
public:
    class xEntShadow entShadow_embedded; // offset 0x0, size 0x2C
    class xShadowSimpleCache simpShadow_embedded; // offset 0x2C, size 0xA4
    class zGlobalSettings g; // offset 0xD0, size 0x160
    class zPlayerSettings * s; // offset 0x230, size 0x4
    class zPlayerSettings sb; // offset 0x240, size 0x470
    class zPlayerSettings patrick; // offset 0x6B0, size 0x470
    class zPlayerSettings spongepat; // offset 0xB20, size 0x470
    class xLightKit * pPlayerLightKit; // offset 0xF90, size 0x4
    class xModelInstance * model_spongebob; // offset 0xF94, size 0x4
    class xModelInstance * model_patrick; // offset 0xF98, size 0x4
    class xModelInstance * model_spongepat; // offset 0xF9C, size 0x4
    class xModelInstance * model_car; // offset 0xFA0, size 0x4
    unsigned int Visible; // offset 0xFA4, size 0x4
    signed int Speed; // offset 0xFA8, size 0x4
    float SpeedMult; // offset 0xFAC, size 0x4
    signed int Sneak; // offset 0xFB0, size 0x4
    signed int Teeter; // offset 0xFB4, size 0x4
    float SlipFadeTimer; // offset 0xFB8, size 0x4
    signed int Slide; // offset 0xFBC, size 0x4
    float SlideTimer; // offset 0xFC0, size 0x4
    signed int Stepping; // offset 0xFC4, size 0x4
    signed int JumpState; // offset 0xFC8, size 0x4
    signed int LastJumpState; // offset 0xFCC, size 0x4
    float JumpTimer; // offset 0xFD0, size 0x4
    float LookAroundTimer; // offset 0xFD4, size 0x4
    unsigned int LookAroundRand; // offset 0xFD8, size 0x4
    unsigned int LastProjectile; // offset 0xFDC, size 0x4
    float DecelRun; // offset 0xFE0, size 0x4
    float DecelRunSpeed; // offset 0xFE4, size 0x4
    float HotsauceTimer; // offset 0xFE8, size 0x4
    float LeanLerp; // offset 0xFEC, size 0x4
    float ScareTimer; // offset 0xFF0, size 0x4
    class xBase * ScareSource; // offset 0xFF4, size 0x4
    float CowerTimer; // offset 0xFF8, size 0x4
    float DamageTimer; // offset 0xFFC, size 0x4
    float SundaeTimer; // offset 0x1000, size 0x4
    float ControlOffTimer; // offset 0x1004, size 0x4
    float HelmetTimer; // offset 0x1008, size 0x4
    unsigned int WorldDisguise; // offset 0x100C, size 0x4
    unsigned int Bounced; // offset 0x1010, size 0x4
    float FallDeathTimer; // offset 0x1014, size 0x4
    float HeadbuttVel; // offset 0x1018, size 0x4
    float HeadbuttTimer; // offset 0x101C, size 0x4
    unsigned int DoMeleeCheck; // offset 0x1020, size 0x4
    float ForceSlipperyTimer; // offset 0x1024, size 0x4
    float ForceSlipperyFriction; // offset 0x1028, size 0x4
    float ShockRadius; // offset 0x102C, size 0x4
    float ShockRadiusOld; // offset 0x1030, size 0x4
    float Face_ScareTimer; // offset 0x1034, size 0x4
    unsigned int Face_ScareRandom; // offset 0x1038, size 0x4
    unsigned int Face_Event; // offset 0x103C, size 0x4
    float Face_EventTimer; // offset 0x1040, size 0x4
    float Face_PantTimer; // offset 0x1044, size 0x4
    unsigned int Face_AnimSpecific; // offset 0x1048, size 0x4
    unsigned int IdleRand; // offset 0x104C, size 0x4
    float IdleMinorTimer; // offset 0x1050, size 0x4
    float IdleMajorTimer; // offset 0x1054, size 0x4
    float IdleSitTimer; // offset 0x1058, size 0x4
    signed int Transparent; // offset 0x105C, size 0x4
    class zEnt * FireTarget; // offset 0x1060, size 0x4
    unsigned int PlayerIsFrozen; // offset 0x1064, size 0x4
    unsigned int ControlOff; // offset 0x1068, size 0x4
    unsigned int ControlOnEvent; // offset 0x106C, size 0x4
    unsigned int AutoMoveSpeed; // offset 0x1070, size 0x4
    float AutoMoveDist; // offset 0x1074, size 0x4
    class xVec3 AutoMoveTarget; // offset 0x1078, size 0xC
    class xBase * AutoMoveObject; // offset 0x1084, size 0x4
    class zEnt * Diggable; // offset 0x1088, size 0x4
    float DigTimer; // offset 0x108C, size 0x4
    class zPlayerCarryInfo carry; // offset 0x1090, size 0xF0
    class zPlayerLassoInfo lassoInfo; // offset 0x1180, size 0x20C
    class xModelTag BubbleWandTag[2]; // offset 0x138C, size 0x40
    class xModelInstance * model_wand; // offset 0x13CC, size 0x4
    class xEntBoulder * bubblebowl[2]; // offset 0x13D0, size 0x8
    float bbowlInitVel; // offset 0x13D8, size 0x4
    class zEntHangable * HangFound; // offset 0x13DC, size 0x4
    class zEntHangable * HangEnt; // offset 0x13E0, size 0x4
    class zEntHangable * HangEntLast; // offset 0x13E4, size 0x4
    class xVec3 HangPivot; // offset 0x13E8, size 0xC
    class xVec3 HangVel; // offset 0x13F4, size 0xC
    float HangLength; // offset 0x1400, size 0x4
    class xVec3 HangStartPos; // offset 0x1404, size 0xC
    float HangStartLerp; // offset 0x1410, size 0x4
    class xModelTag HangPawTag[4]; // offset 0x1414, size 0x80
    float HangPawOffset; // offset 0x1494, size 0x4
    float HangElapsed; // offset 0x1498, size 0x4
    float Jump_CurrGravity; // offset 0x149C, size 0x4
    float Jump_HoldTimer; // offset 0x14A0, size 0x4
    float Jump_ChangeTimer; // offset 0x14A4, size 0x4
    signed int Jump_CanDouble; // offset 0x14A8, size 0x4
    signed int Jump_CanFloat; // offset 0x14AC, size 0x4
    signed int Jump_SpringboardStart; // offset 0x14B0, size 0x4
    class zPlatform * Jump_Springboard; // offset 0x14B4, size 0x4
    signed int CanJump; // offset 0x14B8, size 0x4
    signed int CanBubbleSpin; // offset 0x14BC, size 0x4
    signed int CanBubbleBounce; // offset 0x14C0, size 0x4
    signed int CanBubbleBash; // offset 0x14C4, size 0x4
    signed int IsJumping; // offset 0x14C8, size 0x4
    signed int IsDJumping; // offset 0x14CC, size 0x4
    signed int IsBubbleSpinning; // offset 0x14D0, size 0x4
    signed int IsBubbleBouncing; // offset 0x14D4, size 0x4
    signed int IsBubbleBashing; // offset 0x14D8, size 0x4
    signed int IsBubbleBowling; // offset 0x14DC, size 0x4
    signed int WasDJumping; // offset 0x14E0, size 0x4
    enum _zPlayerWallJumpState WallJumpState; // offset 0x14E4, size 0x4
    signed int cheat_mode; // offset 0x14E8, size 0x4
    class zRewardsMgr * rewardsMgr; // offset 0x14EC, size 0x4
    unsigned int ManlinessPointsCurrentRange; // offset 0x14F0, size 0x4
    unsigned int InvManlinessPoints; // offset 0x14F4, size 0x4
    unsigned int InvManlinessPointsMultiplier; // offset 0x14F8, size 0x4
    unsigned int InvGoofyGoober; // offset 0x14FC, size 0x4
    unsigned int InvTreasureChest[20]; // offset 0x1500, size 0x50
    unsigned int InvTreasureChestMax[20]; // offset 0x1550, size 0x50
    unsigned int InvTreasureChestCurrentLevel; // offset 0x15A0, size 0x4
    unsigned int InvLevelPickups[20]; // offset 0x15A4, size 0x50
    unsigned int InvLevelPickupsCurrentLevel; // offset 0x15F4, size 0x4
    unsigned int InvTreasureChestTotal; // offset 0x15F8, size 0x4
    unsigned int InvTreasureChestOpened; // offset 0x15FC, size 0x4
    unsigned int CurrentSkillLevel; // offset 0x1600, size 0x4
    unsigned int InitialUnusedSkillPoints; // offset 0x1604, size 0x4
    signed short CurrentUnusedSkillPoints; // offset 0x1608, size 0x2
    signed short CurrentSpentSkillPoints; // offset 0x160A, size 0x2
    class xModelTag BubbleTag; // offset 0x160C, size 0x20
    class xEntDrive drv; // offset 0x1630, size 0xC0
    class xSurface * floor_surf; // offset 0x16F0, size 0x4
    class xVec3 floor_norm; // offset 0x16F4, size 0xC
    signed int slope; // offset 0x1700, size 0x4
    class xCollis earc_coll; // offset 0x1704, size 0x54
    class xSphere head_sph; // offset 0x1758, size 0x10
    class xModelTag center_tag; // offset 0x1768, size 0x20
    class xModelTag head_tag; // offset 0x1788, size 0x20
    unsigned int TongueFlags[2]; // offset 0x17A8, size 0x8
    class xVec3 RootUp; // offset 0x17B0, size 0xC
    class xVec3 RootUpTarget; // offset 0x17BC, size 0xC
    class zCheckPoint checkpoint; // offset 0x17C8, size 0x1C
    unsigned int SlideTrackSliding; // offset 0x17E4, size 0x4
    unsigned int SlideTrackCount; // offset 0x17E8, size 0x4
    class xEnt * SlideTrackEnt[161]; // offset 0x17EC, size 0x284
    unsigned int SlideNotGroundedSinceSlide; // offset 0x1A70, size 0x4
    class xVec3 SlideTrackDir; // offset 0x1A74, size 0xC
    class xVec3 SlideTrackVel; // offset 0x1A80, size 0xC
    float SlideTrackDecay; // offset 0x1A8C, size 0x4
    float SlideTrackLean; // offset 0x1A90, size 0x4
    float SlideTrackLand; // offset 0x1A94, size 0x4
    unsigned char * sb_model_indices; // offset 0x1A98, size 0x4
    class xModelInstance * sb_models[11]; // offset 0x1A9C, size 0x2C
    unsigned int currentPlayer; // offset 0x1AC8, size 0x4
    class xVec3 PredictRotate; // offset 0x1ACC, size 0xC
    class xVec3 PredictTranslate; // offset 0x1AD8, size 0xC
    float PredictAngV; // offset 0x1AE4, size 0x4
    class xVec3 PredictCurrDir; // offset 0x1AE8, size 0xC
    float PredictCurrVel; // offset 0x1AF4, size 0x4
    float KnockBackTimer; // offset 0x1AF8, size 0x4
    float KnockIntoAirTimer; // offset 0x1AFC, size 0x4
};
// total size: 0xDC
class zEnt : public xEnt {
    // Members
public:
    class xAnimTable * atbl; // offset 0xD8, size 0x4
};
// total size: 0x0
class zCutsceneMgr {};
enum RpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x0
class xGrid {};
// total size: 0xF0
class zPlayerCarryInfo {
    // Members
public:
    class xEnt * grabbed; // offset 0x0, size 0x4
    unsigned int grabbedModelID; // offset 0x4, size 0x4
    class xMat4x3 spin; // offset 0x10, size 0x40
    class xEnt * throwTarget; // offset 0x50, size 0x4
    class xEnt * flyingToTarget; // offset 0x54, size 0x4
    float minDist; // offset 0x58, size 0x4
    float maxDist; // offset 0x5C, size 0x4
    float minHeight; // offset 0x60, size 0x4
    float maxHeight; // offset 0x64, size 0x4
    float maxCosAngle; // offset 0x68, size 0x4
    float throwMinDist; // offset 0x6C, size 0x4
    float throwMaxDist; // offset 0x70, size 0x4
    float throwHammerMinDist; // offset 0x74, size 0x4
    float throwHammerMaxDist; // offset 0x78, size 0x4
    float throwMinHeight; // offset 0x7C, size 0x4
    float throwMaxHeight; // offset 0x80, size 0x4
    float throwMaxStack; // offset 0x84, size 0x4
    float throwMaxCosAngle; // offset 0x88, size 0x4
    float throwTargetRotRate; // offset 0x8C, size 0x4
    float targetRot; // offset 0x90, size 0x4
    unsigned int grabTarget; // offset 0x94, size 0x4
    class xVec3 grabOffset; // offset 0x98, size 0xC
    float grabLerpMin; // offset 0xA4, size 0x4
    float grabLerpMax; // offset 0xA8, size 0x4
    float grabLerpLast; // offset 0xAC, size 0x4
    unsigned int grabYclear; // offset 0xB0, size 0x4
    float throwGravity; // offset 0xB4, size 0x4
    float throwHeight; // offset 0xB8, size 0x4
    float throwDistance; // offset 0xBC, size 0x4
    float throwPowerAddDistance; // offset 0xC0, size 0x4
    float fruitFloorDecayMin; // offset 0xC4, size 0x4
    float fruitFloorDecayMax; // offset 0xC8, size 0x4
    float fruitFloorBounce; // offset 0xCC, size 0x4
    float fruitFloorFriction; // offset 0xD0, size 0x4
    float fruitCeilingBounce; // offset 0xD4, size 0x4
    float fruitWallBounce; // offset 0xD8, size 0x4
    float fruitLifetime; // offset 0xDC, size 0x4
    class xEnt * patLauncher; // offset 0xE0, size 0x4
};
// total size: 0xC
class RxPipelineNodeTopSortData {
    // Members
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class rxReq * req; // offset 0x8, size 0x4
};
// total size: 0x470
class zPlayerSettings {
    // Members
public:
    enum _zPlayerType pcType; // offset 0x0, size 0x4
    float MoveSpeed[6]; // offset 0x4, size 0x18
    float AnimSneak[3]; // offset 0x1C, size 0xC
    float AnimWalk[3]; // offset 0x28, size 0xC
    float AnimRun[3]; // offset 0x34, size 0xC
    float JumpGravity; // offset 0x40, size 0x4
    float GravSmooth; // offset 0x44, size 0x4
    float FloatSpeed; // offset 0x48, size 0x4
    float ButtsmashSpeed; // offset 0x4C, size 0x4
    class zJumpParam Jump; // offset 0x50, size 0x10
    class zJumpParam Bounce; // offset 0x60, size 0x10
    class zJumpParam Spring; // offset 0x70, size 0x10
    class zJumpParam Wall; // offset 0x80, size 0x10
    class zJumpParam Double; // offset 0x90, size 0x10
    class zJumpParam SlideDouble; // offset 0xA0, size 0x10
    class zJumpParam SlideJump; // offset 0xB0, size 0x10
    float WallJumpVelocity; // offset 0xC0, size 0x4
    class zLedgeGrabParams ledge; // offset 0xD0, size 0x380
    float spin_damp_xz; // offset 0x450, size 0x4
    float spin_damp_y; // offset 0x454, size 0x4
    unsigned char talk_anims; // offset 0x458, size 0x1
    unsigned char talk_filter_size; // offset 0x459, size 0x1
    unsigned char talk_filter[4]; // offset 0x45A, size 0x4
    unsigned int Health; // offset 0x460, size 0x4
    unsigned int MaxHealth; // offset 0x464, size 0x4
};
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_DisabledError = 1,
    ePad_Enabled = 2,
    ePad_Missing = 3,
    ePad_Total = 4,
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
// total size: 0x8
class nodeInfo {
    // Members
public:
    unsigned int type; // offset 0x0, size 0x4
    unsigned int index; // offset 0x4, size 0x4
};
// total size: 0x18
class xCamCoordCylinder {
    // Members
public:
    class xVec3 origin; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    float height; // offset 0x10, size 0x4
    float theta; // offset 0x14, size 0x4
};
// total size: 0x0
class xEntBoulder {};
// total size: 0x14
struct /* @anon8 */ {};
// total size: 0x10
class xSndGroupInfo {
    // Members
public:
    unsigned int uSoundNameHash; // offset 0x0, size 0x4
    float fVolume; // offset 0x4, size 0x4
    float fMinPitchMult; // offset 0x8, size 0x4
    float fMaxPitchMult; // offset 0xC, size 0x4
};
// total size: 0xC
class xMemArea {
    // Members
public:
    unsigned int addr; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    unsigned int flags; // offset 0x8, size 0x4
};
enum RwFrustumTestResult {
    rwSPHEREOUTSIDE = 0,
    rwSPHEREBOUNDARY = 1,
    rwSPHEREINSIDE = 2,
    rwFRUSTUMTESTRESULTFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x8
class RxPipelineNodeParam {
    // Members
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
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
struct /* @anon9 */ {};
// total size: 0x10
class xDynAsset : public xBaseAsset {
    // Members
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
// total size: 0x0
class xSurface {};
// total size: 0x0
class rxReq {};
// total size: 0x8
class /* @class */ {
    // Members
public:
    unsigned int address; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};
// total size: 0x1C
class xJSPExtraInfo {
    // Members
public:
    char idtag[4]; // offset 0x0, size 0x4
    class xBox bounds; // offset 0x4, size 0x18
};
// total size: 0xC
class tri_data {
    // Members
public:
    unsigned int index; // offset 0x0, size 0x4
    float r; // offset 0x4, size 0x4
    float d; // offset 0x8, size 0x4
};
// total size: 0x14
struct /* @anon10 */ {};
// total size: 0x48
class xOneLinerAsset {
    // Members
public:
    unsigned int oneLinerPlayerCount; // offset 0x0, size 0x4
    class xOneLiner player; // offset 0x4, size 0x44
};
// total size: 0xC
class iSndInfo {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    class iSndVol vol; // offset 0x4, size 0x4
    signed int lastStreamBuffer; // offset 0x8, size 0x4
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
// total size: 0x14
struct /* @anon11 */ {};
// total size: 0x2
class _tagPadAnalog {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
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
// total size: 0x60
class tri_data : public tri_data {
    // Members
public:
    class xVec3 loc; // offset 0xC, size 0xC
    float yaw; // offset 0x18, size 0x4
    class xCollis * coll; // offset 0x1C, size 0x4
    class xMat4x3 trioldmat; // offset 0x20, size 0x40
};
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0x20
class xCamCoordSphere {
    // Members
public:
    class xVec3 origin; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    class xQuat dir; // offset 0x10, size 0x10
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
// total size: 0x18
class RwVideoMode {
    // Members
public:
    signed int width; // offset 0x0, size 0x4
    signed int height; // offset 0x4, size 0x4
    signed int depth; // offset 0x8, size 0x4
    enum RwVideoModeFlag flags; // offset 0xC, size 0x4
    signed int refRate; // offset 0x10, size 0x4
    signed int format; // offset 0x14, size 0x4
};
// total size: 0x0
class RpSkin {};
// total size: 0x24
class xMemInfo {
    // Members
public:
    class xMemArea system; // offset 0x0, size 0xC
    class xMemArea stack; // offset 0xC, size 0xC
    class xMemArea DRAM; // offset 0x18, size 0xC
};
// total size: 0x14
class RwStreamUnion {
    // Members
public:
    union { // inferred
        class RwStreamMemory memory; // offset 0x0, size 0xC
        class RwStreamFile file; // offset 0x0, size 0x4
        class RwStreamCustom custom; // offset 0x0, size 0x14
    };
};
// total size: 0x340
class xCamera : public xBase {
    // Members
public:
    class RwCamera * lo_cam; // offset 0x10, size 0x4
    class xMat4x3 mat; // offset 0x20, size 0x40
    class xMat4x3 omat; // offset 0x60, size 0x40
    class xMat3x3 mbasis; // offset 0xA0, size 0x30
    class xBound bound; // offset 0xD0, size 0x4C
    class xMat4x3 * tgt_mat; // offset 0x11C, size 0x4
    class xMat4x3 * tgt_omat; // offset 0x120, size 0x4
    class xBound * tgt_bound; // offset 0x124, size 0x4
    class xVec3 focus; // offset 0x128, size 0xC
    class xScene * sc; // offset 0x134, size 0x4
    class xVec3 tran_accum; // offset 0x138, size 0xC
    float fov; // offset 0x144, size 0x4
    unsigned int flags; // offset 0x148, size 0x4
    float tmr; // offset 0x14C, size 0x4
    float tm_acc; // offset 0x150, size 0x4
    float tm_dec; // offset 0x154, size 0x4
    float ltmr; // offset 0x158, size 0x4
    float ltm_acc; // offset 0x15C, size 0x4
    float ltm_dec; // offset 0x160, size 0x4
    float dmin; // offset 0x164, size 0x4
    float dmax; // offset 0x168, size 0x4
    float dcur; // offset 0x16C, size 0x4
    float dgoal; // offset 0x170, size 0x4
    float hmin; // offset 0x174, size 0x4
    float hmax; // offset 0x178, size 0x4
    float hcur; // offset 0x17C, size 0x4
    float hgoal; // offset 0x180, size 0x4
    float pmin; // offset 0x184, size 0x4
    float pmax; // offset 0x188, size 0x4
    float pcur; // offset 0x18C, size 0x4
    float pgoal; // offset 0x190, size 0x4
    float depv; // offset 0x194, size 0x4
    float hepv; // offset 0x198, size 0x4
    float pepv; // offset 0x19C, size 0x4
    float orn_epv; // offset 0x1A0, size 0x4
    float yaw_epv; // offset 0x1A4, size 0x4
    float pitch_epv; // offset 0x1A8, size 0x4
    float roll_epv; // offset 0x1AC, size 0x4
    class xQuat orn_cur; // offset 0x1B0, size 0x10
    class xQuat orn_goal; // offset 0x1C0, size 0x10
    class xQuat orn_diff; // offset 0x1D0, size 0x10
    float yaw_cur; // offset 0x1E0, size 0x4
    float yaw_goal; // offset 0x1E4, size 0x4
    float pitch_cur; // offset 0x1E8, size 0x4
    float pitch_goal; // offset 0x1EC, size 0x4
    float roll_cur; // offset 0x1F0, size 0x4
    float roll_goal; // offset 0x1F4, size 0x4
    float dct; // offset 0x1F8, size 0x4
    float dcd; // offset 0x1FC, size 0x4
    float dccv; // offset 0x200, size 0x4
    float dcsv; // offset 0x204, size 0x4
    float hct; // offset 0x208, size 0x4
    float hcd; // offset 0x20C, size 0x4
    float hccv; // offset 0x210, size 0x4
    float hcsv; // offset 0x214, size 0x4
    float pct; // offset 0x218, size 0x4
    float pcd; // offset 0x21C, size 0x4
    float pccv; // offset 0x220, size 0x4
    float pcsv; // offset 0x224, size 0x4
    float orn_ct; // offset 0x228, size 0x4
    float orn_cd; // offset 0x22C, size 0x4
    float orn_ccv; // offset 0x230, size 0x4
    float orn_csv; // offset 0x234, size 0x4
    float yaw_ct; // offset 0x238, size 0x4
    float yaw_cd; // offset 0x23C, size 0x4
    float yaw_ccv; // offset 0x240, size 0x4
    float yaw_csv; // offset 0x244, size 0x4
    float pitch_ct; // offset 0x248, size 0x4
    float pitch_cd; // offset 0x24C, size 0x4
    float pitch_ccv; // offset 0x250, size 0x4
    float pitch_csv; // offset 0x254, size 0x4
    float roll_ct; // offset 0x258, size 0x4
    float roll_cd; // offset 0x25C, size 0x4
    float roll_ccv; // offset 0x260, size 0x4
    float roll_csv; // offset 0x264, size 0x4
    class xVec4 frustplane[12]; // offset 0x270, size 0xC0
    float smoothOutwardSlidePos; // offset 0x330, size 0x4
};
// total size: 0x10
class /* @class */ {
    // Members
public:
    signed int file_index; // offset 0x0, size 0x4
    unsigned int lsn; // offset 0x4, size 0x4
    unsigned int data_size; // offset 0x8, size 0x4
    unsigned short stream_interleave_size; // offset 0xC, size 0x2
    unsigned short stream_interleave_count; // offset 0xE, size 0x2
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
// total size: 0x20
class xSndGroupHeader : public xBaseAsset {
    // Members
public:
    unsigned int uPlayedMask; // offset 0x8, size 0x4
    unsigned char uInfoCount; // offset 0xC, size 0x1
    unsigned char uSetBits; // offset 0xD, size 0x1
    signed char nMaxPlays; // offset 0xE, size 0x1
    unsigned char uPriority; // offset 0xF, size 0x1
    unsigned char uFlags; // offset 0x10, size 0x1
    unsigned char eSoundCategory; // offset 0x11, size 0x1
    unsigned char ePlayRule; // offset 0x12, size 0x1
    unsigned char uInfoPad0; // offset 0x13, size 0x1
    float fInnerRadius; // offset 0x14, size 0x4
    float fOuterRadius; // offset 0x18, size 0x4
    char * pszGroupName; // offset 0x1C, size 0x4
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
class RpTriangle {
    // Members
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    unsigned short matIndex; // offset 0x6, size 0x2
};
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
enum RwVideoModeFlag {
    rwVIDEOMODEEXCLUSIVE = 1,
    rwVIDEOMODEINTERLACE = 2,
    rwVIDEOMODEFFINTERLACE = 4,
    rwVIDEOMODE_PS2_FSAASHRINKBLIT = 256,
    rwVIDEOMODE_PS2_FSAAREADCIRCUIT = 512,
    rwVIDEOMODE_XBOX_WIDESCREEN = 256,
    rwVIDEOMODE_XBOX_PROGRESSIVE = 512,
    rwVIDEOMODE_XBOX_FIELD = 1024,
    rwVIDEOMODE_XBOX_10X11PIXELASPECT = 2048,
    rwVIDEOMODEFLAGFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
class /* @class */ {
    // Members
public:
    float t; // offset 0x0, size 0x4
    float u; // offset 0x4, size 0x4
    float v; // offset 0x8, size 0x4
};
// total size: 0x8
class rxHeapFreeBlock {
    // Members
public:
    unsigned int size; // offset 0x0, size 0x4
    class rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
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

