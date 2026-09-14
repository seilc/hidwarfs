/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int g_prj_init; // size: 0x4, address: 0x358608
static class st_PROJECTILE_DEPOT g_prjdepot; // size: 0x2C, address: 0x2FD9B0
static class st_ZPRJ_CATEGORY_FUNCS g_catFuncs[13]; // size: 0x208, address: 0x2FD9E0
static class st_ZPRJ_CATEGORY_PROPS g_iniProps[13]; // size: 0x9C, address: 0x2FDBF0
static class _zParEmitter * g_paremit[32]; // size: 0x80, address: 0x2FDC90
static char * g_parname[32]; // size: 0x80, address: 0x2FDD10
static class zSFX * g_sounds[1]; // size: 0x4, address: 0x357B88
static char * g_sfxnames[1]; // size: 0x4, address: 0x357B8C
class zGlobals globals; // size: 0x3330, address: 0x362FD0
float ZPRJ_newt_dzfunc_tdy(float, void *); // size: 0x0, address: 0x0
float ZPRJ_newt_zfunc_ty(float, void *); // size: 0x0, address: 0x0
class _xVec3 g_Y3; // size: 0xC, address: 0x342E38
void zGustUpdateEnt(class _xEnt *, class _xScene *, float, void *); // size: 0x0, address: 0x1A6250
void ZPRJ_wrap_bupdate(class _xEnt *, class _xVec3 *); // size: 0x0, address: 0x26E460
class _xVec3 g_NY3; // size: 0xC, address: 0x342E58
unsigned int gActiveHeap; // size: 0x4, address: 0x357CAC
signed int zEntProjectile_gen_render(class zEntProjectile *); // size: 0x0, address: 0x26DDE0
// total size: 0x60
class xAnimPlay {
    // Members
public:
    class xAnimPlay * Next; // offset 0x0, size 0x4
    unsigned short NumSingle; // offset 0x4, size 0x2
    unsigned short BoneCount; // offset 0x6, size 0x2
    class xAnimSingle * Single; // offset 0x8, size 0x4
    void * Object; // offset 0xC, size 0x4
    class xAnimTable * Table; // offset 0x10, size 0x4
    class _xVec3 Translate[2]; // offset 0x14, size 0x18
    unsigned int pad1; // offset 0x2C, size 0x4
    class _xQuat Quat[2]; // offset 0x30, size 0x20
    float Yaw; // offset 0x50, size 0x4
    class xMemPool * Pool; // offset 0x54, size 0x4
    class xModelInstance * ModelInst; // offset 0x58, size 0x4
    unsigned int pad2; // offset 0x5C, size 0x4
};
// total size: 0xEC
class _zEnt : public _xEnt {
    // Members
public:
    class xAnimTable * atbl; // offset 0xE8, size 0x4
};
// total size: 0x18
class _xEntShadow {
    // Members
public:
    class _xVec3 pos; // offset 0x0, size 0xC
    class _xVec3 vec; // offset 0xC, size 0xC
};
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_DisabledError = 1,
    ePad_Enabled = 2,
    ePad_Missing = 3,
    ePad_Total = 4,
};
// total size: 0x28
class st_ZPRJ_CATEGORY_FUNCS {
    // Members
public:
    signed int flg_cback; // offset 0x0, size 0x4
    signed int (* attach)(class zEntProjectile *); // offset 0x4, size 0x4
    void (* detach)(class zEntProjectile *); // offset 0x8, size 0x4
    signed int (* logix)(class zEntProjectile *, float, class zScene *, class _xEntFrame *); // offset 0xC, size 0x4
    signed int (* calcmove)(class zEntProjectile *, float, class zScene *, class _xEntFrame *); // offset 0x10, size 0x4
    signed int (* notify)(class zEntProjectile *, enum en_PROJECTILE_EVENT, void *); // offset 0x14, size 0x4
    signed int (* render)(class zEntProjectile *); // offset 0x18, size 0x4
    signed int (* aimer)(class zEntProjectile *, class ST_CAT_AIMDATA *, signed int); // offset 0x1C, size 0x4
    signed int (* collide)(class zEntProjectile *, class zScene *, float); // offset 0x20, size 0x4
    void (* dbgUpdate)(class zEntProjectile *, signed int); // offset 0x24, size 0x4
};
// total size: 0x44
class _xCollis {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int oid; // offset 0x4, size 0x4
    void * optr; // offset 0x8, size 0x4
    float dist; // offset 0xC, size 0x4
    class _xVec3 norm; // offset 0x10, size 0xC
    class _xVec3 tohit; // offset 0x1C, size 0xC
    class _xVec3 depen; // offset 0x28, size 0xC
    class _xVec3 hdng; // offset 0x34, size 0xC
    class _iCollis ixtra; // offset 0x40, size 0x4
};
// total size: 0x330
class zEntProjectile : public _xEnt {
    // Members
public:
    signed int flg_prop; // offset 0xE8, size 0x4
    signed int flg_categ; // offset 0xEC, size 0x4
    unsigned char flg_chk; // offset 0xF0, size 0x1
    unsigned char flg_pen; // offset 0xF1, size 0x1
    unsigned char pad[2]; // offset 0xF2, size 0x2
    void * owner; // offset 0xF4, size 0x4
    void * ownerContext; // offset 0xF8, size 0x4
    signed int (* ownerNotify)(class zEntProjectile *, enum en_PROJECTILE_EVENT, void *); // offset 0xFC, size 0x4
    signed int (* ownerDoCollide)(class zEntProjectile *, class zScene *, float); // offset 0x100, size 0x4
    float tmr_alive; // offset 0x104, size 0x4
    float tmr_curstate; // offset 0x108, size 0x4
    class _xVec3 pos_home; // offset 0x10C, size 0xC
    float tym_maxlife; // offset 0x118, size 0x4
    float ds2_maxlife; // offset 0x11C, size 0x4
    class st_ZPRJ_COMMON common; // offset 0x120, size 0x3C
    class st_ZPRJ_CATDATA cat_data; // offset 0x15C, size 0x24
    void * xtradata; // offset 0x180, size 0x4
    class _xCollis * plyr_colrec; // offset 0x184, size 0x4
    class st_ZPRJ_LINKNODE linknode; // offset 0x188, size 0xC
    enum en_ZPRJ_STATES state; // offset 0x194, size 0x4
    signed int flg_stat; // offset 0x198, size 0x4
    float pct_docol; // offset 0x19C, size 0x4
    float tmr_coldelay; // offset 0x1A0, size 0x4
    enum en_ZPRJ_CATEGORY cat_proj; // offset 0x1A4, size 0x4
    class st_ZPRJ_TYPERECORD * ptype; // offset 0x1A8, size 0x4
    float tmr_emit; // offset 0x1AC, size 0x4
    class _xEntFrame raw_frame; // offset 0x1B0, size 0xF0
    class p2EntAsset raw_asset; // offset 0x2A0, size 0x50
    class _xEntShadow raw_shadow; // offset 0x2F0, size 0x18
    class zGustData raw_gust; // offset 0x308, size 0x24
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
enum en_ZPRJ_STATES {
    ZPRJ_STATE_UNUSED = 0,
    ZPRJ_STATE_STANDBY = 1,
    ZPRJ_STATE_ACTIVE = 2,
    ZPRJ_STATE_DEAD = 3,
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
class xBase {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    class p2LinkAsset * link; // offset 0x8, size 0x4
    signed int (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *); // offset 0xC, size 0x4
};
// total size: 0x4
class _tagEmitSphere {
    // Members
public:
    float radius; // offset 0x0, size 0x4
};
// total size: 0x30
class iEnv {
    // Members
public:
    class RpWorld * world; // offset 0x0, size 0x4
    class RpWorld * collision; // offset 0x4, size 0x4
    class RpWorld * fx; // offset 0x8, size 0x4
    class RpWorld * camera; // offset 0xC, size 0x4
    class RpLight * light[2]; // offset 0x10, size 0x8
    class RwFrame * light_frame[2]; // offset 0x18, size 0x8
    signed int memlvl; // offset 0x20, size 0x4
};
// total size: 0x4
class _tagiPad {
    // Members
public:
    signed int port; // offset 0x0, size 0x4
};
// total size: 0xC
class rxHeapSuperBlockDescriptor {
    // Members
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
// total size: 0xC
class st_ZPRJ_CATEGORY_PROPS {
    // Members
public:
    signed int flg_props; // offset 0x0, size 0x4
    unsigned char flg_physics; // offset 0x4, size 0x1
    unsigned char flg_chk; // offset 0x5, size 0x1
    unsigned char flg_pen; // offset 0x6, size 0x1
    unsigned char pad; // offset 0x7, size 0x1
    signed int flg_categ; // offset 0x8, size 0x4
};
// total size: 0x50
class _zParEmitter : public xBase {
    // Members
public:
    class zParEmitterAsset * tasset; // offset 0x10, size 0x4
    class xParGroup * group; // offset 0x14, size 0x4
    unsigned char emit_flags; // offset 0x18, size 0x1
    unsigned char emit_pad[3]; // offset 0x19, size 0x3
    float emit_interval_current; // offset 0x1C, size 0x4
    unsigned char rot[3]; // offset 0x20, size 0x3
    class iModelTag tag; // offset 0x24, size 0x20
    void * attachTo; // offset 0x44, size 0x4
    void * parSys; // offset 0x48, size 0x4
    void * emit_volume; // offset 0x4C, size 0x4
};
// total size: 0xE8
class _xEnt : public xBase {
    // Members
public:
    class p2EntAsset * asset; // offset 0x10, size 0x4
    unsigned char flags; // offset 0x14, size 0x1
    unsigned char subType; // offset 0x15, size 0x1
    unsigned char pflags; // offset 0x16, size 0x1
    unsigned char moreFlags; // offset 0x17, size 0x1
    unsigned char pad0[3]; // offset 0x18, size 0x3
    unsigned char num_ffx; // offset 0x1B, size 0x1
    unsigned short idx; // offset 0x1C, size 0x2
    unsigned short num_updates; // offset 0x1E, size 0x2
    float material_alpha; // offset 0x20, size 0x4
    float fade_tmr; // offset 0x24, size 0x4
    unsigned char collType; // offset 0x28, size 0x1
    unsigned char collLev; // offset 0x29, size 0x1
    unsigned char chkby; // offset 0x2A, size 0x1
    unsigned char penby; // offset 0x2B, size 0x1
    class xModelInstance * model; // offset 0x2C, size 0x4
    void (* update)(class _xEnt *, class _xScene *, float); // offset 0x30, size 0x4
    void (* bupdate)(class _xEnt *, class _xVec3 *); // offset 0x34, size 0x4
    void (* move)(class _xEnt *, class _xScene *, float, class _xEntFrame *); // offset 0x38, size 0x4
    void (* render)(class _xEnt *); // offset 0x3C, size 0x4
    class _xEntFrame * frame; // offset 0x40, size 0x4
    class _xEntCollis * collis; // offset 0x44, size 0x4
    class _xBound bound; // offset 0x48, size 0x38
    float updateTimer; // offset 0x80, size 0x4
    float updateAcc; // offset 0x84, size 0x4
    void (* updateTimerFunc)(class _xEnt *); // offset 0x88, size 0x4
    void (* transl)(class _xEnt *, class _xVec3 *); // offset 0x8C, size 0x4
    class iShadowCache ishadow; // offset 0x90, size 0x48
    class xSurface * surf; // offset 0xD8, size 0x4
    class xFFX * ffx; // offset 0xDC, size 0x4
    class _xEnt * driver; // offset 0xE0, size 0x4
    class _xEntShadow * ent_shadow; // offset 0xE4, size 0x4
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
// total size: 0x3
class RpCollSector {
    // Members
public:
    unsigned char cType; // offset 0x0, size 0x1
    unsigned char vertex; // offset 0x1, size 0x1
    unsigned char start; // offset 0x2, size 0x1
};
// total size: 0x4
class st_ZPRJ_CAT_PICKUP {
    // Members
public:
    signed int nada; // offset 0x0, size 0x4
};
// total size: 0x18
class _xBox {
    // Members
public:
    class _xVec3 upper; // offset 0x0, size 0xC
    class _xVec3 lower; // offset 0xC, size 0xC
};
// total size: 0x8
class RxPipelineNodeParam {
    // Members
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
};
// total size: 0x14
class st_ZPRJ_TYPERECORD {
    // Members
public:
    unsigned int aid_ptype; // offset 0x0, size 0x4
    class zProjectileTypeAsset * src_ptype; // offset 0x4, size 0x4
    enum en_ZPRJ_CATEGORY categ; // offset 0x8, size 0x4
    class RpAtomic * mdlFile[2]; // offset 0xC, size 0x8
};
// total size: 0x14
class st_NEWT_USERDATA {
    // Members
public:
    float g; // offset 0x0, size 0x4
    float g_2; // offset 0x4, size 0x4
    float y_y0; // offset 0x8, size 0x4
    float v0; // offset 0xC, size 0x4
    signed int cnt_iter; // offset 0x10, size 0x4
};
// total size: 0xC
class RxPipelineNodeTopSortData {
    // Members
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class rxReq * req; // offset 0x8, size 0x4
};
// total size: 0xC
class _xVec3 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x2C
class st_PROJECTILE_DEPOT {
    // Members
public:
    signed int typecnt; // offset 0x0, size 0x4
    class st_ZPRJ_TYPERECORD * typetable; // offset 0x4, size 0x4
    signed int typeidx; // offset 0x8, size 0x4
    signed int rawcnt; // offset 0xC, size 0x4
    class zEntProjectile * rawpool; // offset 0x10, size 0x4
    class st_ELIST prjpool; // offset 0x14, size 0xC
    class st_ELIST prjinuse; // offset 0x20, size 0xC
};
// total size: 0xC
class _tagxCamPathAsset {
    // Members
public:
    unsigned int assetID; // offset 0x0, size 0x4
    float time_end; // offset 0x4, size 0x4
    float time_delay; // offset 0x8, size 0x4
};
// total size: 0x48
class iShadowCache {
    // Members
public:
    class _xVec3 pos; // offset 0x0, size 0xC
    class _xVec3 right; // offset 0xC, size 0xC
    class _xVec3 corner[4]; // offset 0x18, size 0x30
};
// total size: 0x4
class _tagp2CamStaticFollowAsset {
    // Members
public:
    float rubber_band; // offset 0x0, size 0x4
};
enum RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xF0
class _xEntFrame {
    // Members
public:
    class _xMat4x3 mat; // offset 0x0, size 0x40
    class _xMat4x3 dmat; // offset 0x40, size 0x40
    class _xVec3 oldpos; // offset 0x80, size 0xC
    class _xVec3 oldvel; // offset 0x8C, size 0xC
    class _xRot oldrot; // offset 0x98, size 0x10
    class _xRot drot; // offset 0xA8, size 0x10
    class _xRot rot; // offset 0xB8, size 0x10
    class _xVec3 dpos; // offset 0xC8, size 0xC
    class _xVec3 dvel; // offset 0xD4, size 0xC
    class _xVec3 vel; // offset 0xE0, size 0xC
    unsigned int mode; // offset 0xEC, size 0x4
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
class xAnimActiveEffect {
    // Members
public:
    class xAnimEffect * Effect; // offset 0x0, size 0x4
    unsigned int Handle; // offset 0x4, size 0x4
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
// total size: 0xA4
class st_ZPRJ_AUTOCALC_INFO {
    // Members
public:
    enum en_ZPRJ_SOLVER_METHODS method; // offset 0x0, size 0x4
    union { // inferred
        class st_ZPRJ_SOLV_METHOD_A metha; // offset 0x4, size 0x40
        class st_ZPRJ_SOLV_METHOD_B methb; // offset 0x4, size 0xA0
        class st_ZPRJ_SOLV_METHOD_C methc; // offset 0x4, size 0x2C
    };
};
// total size: 0x18
class zPortalAsset : public p2BaseAsset {
    // Members
public:
    unsigned int assetCameraID; // offset 0x8, size 0x4
    unsigned int assetMarkerID; // offset 0xC, size 0x4
    float ang; // offset 0x10, size 0x4
    unsigned int sceneID; // offset 0x14, size 0x4
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
// total size: 0x14
class RwObjectHasFrame {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
};
// total size: 0xC0
class tag_xFile {
    // Members
public:
    char relname[16]; // offset 0x0, size 0x10
    class tag_iFile ps; // offset 0x10, size 0xB0
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
// total size: 0x8
class RxPipelineCluster {
    // Members
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
// total size: 0x34
class ST_CAT_AIMDATA {
    // Members
public:
    enum en_ZPRJ_CATAIM_FORM idx_caim; // offset 0x0, size 0x4
    float spd_base; // offset 0x4, size 0x4
    class _xVec3 dir_base; // offset 0x8, size 0xC
    union { // inferred
        class st_CAT_AIMARROW arrow; // offset 0x14, size 0x18
        class st_CAT_AIMGRAV grav; // offset 0x14, size 0x20
    };
};
// total size: 0x60
class RwTexture {
    // Members
public:
    class RwRaster * raster; // offset 0x0, size 0x4
    class RwTexDictionary * dict; // offset 0x4, size 0x4
    class RwLLLink lInDictionary; // offset 0x8, size 0x8
    char name[32]; // offset 0x10, size 0x20
    char mask[32]; // offset 0x30, size 0x20
    signed int refCount; // offset 0x50, size 0x4
    enum RwTextureFilterMode filtering; // offset 0x54, size 0x4
    enum RwTextureAddressMode addressingU; // offset 0x58, size 0x4
    enum RwTextureAddressMode addressingV; // offset 0x5C, size 0x4
};
// total size: 0x50
class xCutsceneInfo {
    // Members
public:
    unsigned int Magic; // offset 0x0, size 0x4
    unsigned int AssetID; // offset 0x4, size 0x4
    unsigned int NumData; // offset 0x8, size 0x4
    unsigned int NumTime; // offset 0xC, size 0x4
    unsigned int MaxModel; // offset 0x10, size 0x4
    unsigned int MaxBufEven; // offset 0x14, size 0x4
    unsigned int MaxBufOdd; // offset 0x18, size 0x4
    unsigned int HeaderSize; // offset 0x1C, size 0x4
    unsigned int VisCount; // offset 0x20, size 0x4
    unsigned int VisSize; // offset 0x24, size 0x4
    unsigned int BreakCount; // offset 0x28, size 0x4
    unsigned int pad; // offset 0x2C, size 0x4
    char SoundLeft[16]; // offset 0x30, size 0x10
    char SoundRight[16]; // offset 0x40, size 0x10
};
// total size: 0x50
class p2EntAsset : public p2BaseAsset {
    // Members
public:
    unsigned char flags; // offset 0x8, size 0x1
    unsigned char subtype; // offset 0x9, size 0x1
    unsigned char pflags; // offset 0xA, size 0x1
    unsigned char moreFlags; // offset 0xB, size 0x1
    unsigned int surfaceID; // offset 0xC, size 0x4
    class _xVec3 ang; // offset 0x10, size 0xC
    class _xVec3 pos; // offset 0x1C, size 0xC
    class _xVec3 scale; // offset 0x28, size 0xC
    float redMult; // offset 0x34, size 0x4
    float greenMult; // offset 0x38, size 0x4
    float blueMult; // offset 0x3C, size 0x4
    float seeThru; // offset 0x40, size 0x4
    float seeThruSpeed; // offset 0x44, size 0x4
    unsigned int modelInfoID; // offset 0x48, size 0x4
    unsigned int animListID; // offset 0x4C, size 0x4
};
enum en_PROJECTILE_EVENT {
    ZPRJ_EVNT_ACTIVE = 0,
    ZPRJ_EVNT_TRANSTATE = 1,
    ZPRJ_EVNT_NEWTIME = 2,
    ZPRJ_EVNT_ENDTIME = 3,
    ZPRJ_EVNT_ABORT = 4,
    ZPRJ_EVNT_HITPLYR = 5,
    ZPRJ_EVNT_LAUNCH = 6,
    ZPRJ_EVNT_INFLIGHT = 7,
    ZPRJ_EVNT_ATREST = 8,
    ZPRJ_EVNT_HITSTUFF = 9,
    ZPRJ_EVNT_DETONATE = 10,
    ZPRJ_EVNT_SELFDESTRUCT = 11,
    ZPRJ_EVNT_DEATH = 12,
    ZPRJ_EVNT_STARTRESTING = 13,
    ZPRJ_EVNT_BOUNCE = 14,
    ZPRJ_EVNT_VIL_BUILDUP = 15,
    ZPRJ_EVNT_VIL_AFTERMATH = 16,
    ZPRJ_EVNT_NOMORE = 17,
};
// total size: 0x24
class sceCdlFILE {
    // Members
public:
    unsigned int lsn; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    char name[16]; // offset 0x8, size 0x10
    unsigned char date[8]; // offset 0x18, size 0x8
    unsigned int flag; // offset 0x20, size 0x4
};
// total size: 0x4
class _iCollis {
    // Members
public:
    signed int unknown; // offset 0x0, size 0x4
};
// total size: 0x20
class _zCutsceneMgr : public xBase {
    // Members
public:
    class zCutsceneMgrAsset * tasset; // offset 0x10, size 0x4
    class xCutscene * csn; // offset 0x14, size 0x4
    unsigned int stop; // offset 0x18, size 0x4
    class zCutsceneZbufferHack * zhack; // offset 0x1C, size 0x4
};
// total size: 0xE8
class zShaggy1Globals {
    // Members
public:
    class _zEnt * GrabTry; // offset 0x0, size 0x4
    class _zEnt * Grab; // offset 0x4, size 0x4
    float GrabRot; // offset 0x8, size 0x4
    float GrabOffset; // offset 0xC, size 0x4
    float GrabTimer; // offset 0x10, size 0x4
    class _xVec3 ReleaseTrans; // offset 0x14, size 0xC
    class _xVec3 HangTrans; // offset 0x20, size 0xC
    class _xVec3 LastDelta; // offset 0x2C, size 0xC
    unsigned int ThrowEnded; // offset 0x38, size 0x4
    float ExtraTransY; // offset 0x3C, size 0x4
    class _xVec3 ThrowPos; // offset 0x40, size 0xC
    class _xVec3 ThrowVel; // offset 0x4C, size 0xC
    unsigned int CatchMe; // offset 0x58, size 0x4
    unsigned int CatchYou; // offset 0x5C, size 0x4
    class _zEnt * HangTarget; // offset 0x60, size 0x4
    float ThrowTimer; // offset 0x64, size 0x4
    class _xVec3 HangStart; // offset 0x68, size 0xC
    class _xVec3 HangRelative; // offset 0x74, size 0xC
    unsigned int SetDown; // offset 0x80, size 0x4
    unsigned int GrabOn; // offset 0x84, size 0x4
    unsigned int ThrowState; // offset 0x88, size 0x4
    float ThrowRot; // offset 0x8C, size 0x4
    float CatchHeight; // offset 0x90, size 0x4
    float CatchVel; // offset 0x94, size 0x4
    class xBase * ThrowTgt; // offset 0x98, size 0x4
    float ThrowTgtAngle; // offset 0x9C, size 0x4
    float ThrowTgtPeak; // offset 0xA0, size 0x4
    float ThrowTgtOffset; // offset 0xA4, size 0x4
    unsigned int ThrowTgtAdjust; // offset 0xA8, size 0x4
    class _xVec3 ThrowTgtVec; // offset 0xAC, size 0xC
    float ThrowTgtSpeed; // offset 0xB8, size 0x4
    float ThrowAccel; // offset 0xBC, size 0x4
    class _zEnt * Hangable[10]; // offset 0xC0, size 0x28
};
// total size: 0x40
class _xMat4x3 {
    // Members
public:
    class _xVec3 right; // offset 0x0, size 0xC
    signed int flags; // offset 0xC, size 0x4
    class _xVec3 up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class _xVec3 at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
    class _xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x8
class _tagEmitRect {
    // Members
public:
    float x_len; // offset 0x0, size 0x4
    float z_len; // offset 0x4, size 0x4
};
// total size: 0x2
class _tagPadAnalog {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
};
// total size: 0x8
class zAssetPickupTable {
    // Members
public:
    unsigned int Magic; // offset 0x0, size 0x4
    unsigned int Count; // offset 0x4, size 0x4
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
// total size: 0x6C
class _xScene {
    // Members
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short num_ents; // offset 0x2, size 0x2
    unsigned short num_trigs; // offset 0x4, size 0x2
    unsigned short num_stats; // offset 0x6, size 0x2
    unsigned short num_dyns; // offset 0x8, size 0x2
    unsigned short num_npcs; // offset 0xA, size 0x2
    unsigned short num_act_ents; // offset 0xC, size 0x2
    unsigned short num_nact_ents; // offset 0xE, size 0x2
    float gravity; // offset 0x10, size 0x4
    float drag; // offset 0x14, size 0x4
    float friction; // offset 0x18, size 0x4
    unsigned short num_ents_allocd; // offset 0x1C, size 0x2
    unsigned short num_trigs_allocd; // offset 0x1E, size 0x2
    unsigned short num_stats_allocd; // offset 0x20, size 0x2
    unsigned short num_dyns_allocd; // offset 0x22, size 0x2
    unsigned short num_npcs_allocd; // offset 0x24, size 0x2
    class _xEnt * * trigs; // offset 0x28, size 0x4
    class _xEnt * * stats; // offset 0x2C, size 0x4
    class _xEnt * * dyns; // offset 0x30, size 0x4
    class _xEnt * * npcs; // offset 0x34, size 0x4
    class _xEnt * * act_ents; // offset 0x38, size 0x4
    class _xEnt * * nact_ents; // offset 0x3C, size 0x4
    class _xEnv * env; // offset 0x40, size 0x4
    class xMemPool mempool; // offset 0x44, size 0x1C
    class xBase * (* resolvID)(unsigned int); // offset 0x60, size 0x4
    char * (* base2Name)(class xBase *); // offset 0x64, size 0x4
    char * (* id2Name)(unsigned int); // offset 0x68, size 0x4
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
// total size: 0xC8
class zCutsceneMgrAsset : public p2BaseAsset {
    // Members
public:
    unsigned int cutsceneAssetID; // offset 0x8, size 0x4
    unsigned int flags; // offset 0xC, size 0x4
    float interpSpeed; // offset 0x10, size 0x4
    float startTime[15]; // offset 0x14, size 0x3C
    float endTime[15]; // offset 0x50, size 0x3C
    unsigned int emitID[15]; // offset 0x8C, size 0x3C
};
// total size: 0x138
class xCutscene {
    // Members
public:
    class xCutsceneInfo * Info; // offset 0x0, size 0x4
    class xCutsceneData * Data; // offset 0x4, size 0x4
    unsigned int * TimeChunkOffs; // offset 0x8, size 0x4
    unsigned int * Visibility; // offset 0xC, size 0x4
    class xCutsceneBreak * BreakList; // offset 0x10, size 0x4
    class xCutsceneTime * Play; // offset 0x14, size 0x4
    class xCutsceneTime * Stream; // offset 0x18, size 0x4
    unsigned int Waiting; // offset 0x1C, size 0x4
    void * RawBuf; // offset 0x20, size 0x4
    void * AlignBuf; // offset 0x24, size 0x4
    float Time; // offset 0x28, size 0x4
    float CamTime; // offset 0x2C, size 0x4
    unsigned int PlayIndex; // offset 0x30, size 0x4
    unsigned int Ready; // offset 0x34, size 0x4
    signed int DataLoading; // offset 0x38, size 0x4
    unsigned int GotData; // offset 0x3C, size 0x4
    unsigned int ShutDownWait; // offset 0x40, size 0x4
    float PlaybackSpeed; // offset 0x44, size 0x4
    unsigned int Opened; // offset 0x48, size 0x4
    class tag_xFile File; // offset 0x4C, size 0xC0
    unsigned int CurrSector; // offset 0x10C, size 0x4
    void * MemBuf; // offset 0x110, size 0x4
    void * MemCurr; // offset 0x114, size 0x4
    unsigned int SndStarted; // offset 0x118, size 0x4
    unsigned int SndNumChannel; // offset 0x11C, size 0x4
    unsigned int SndChannelReq[2]; // offset 0x120, size 0x8
    unsigned int SndAssetID[2]; // offset 0x128, size 0x8
    unsigned int SndHandle[2]; // offset 0x130, size 0x8
};
// total size: 0x8
class RpTriangle {
    // Members
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    signed short matIndex; // offset 0x6, size 0x2
};
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0xB0
class _tagxCam : public xBase {
    // Members
public:
    unsigned int valid_flags; // offset 0x10, size 0x4
    enum _tagCamType cam_type; // offset 0x14, size 0x4
    unsigned int flags; // offset 0x18, size 0x4
    class _xMat4x3 mat; // offset 0x20, size 0x40
    class _xQuat rot; // offset 0x60, size 0x10
    float fov; // offset 0x70, size 0x4
    float trans_time; // offset 0x74, size 0x4
    enum _tagTransType trans_type; // offset 0x78, size 0x4
    class _xVec3 view_offset; // offset 0x7C, size 0xC
    class _tagCamInfo u; // offset 0x88, size 0x18
    class xCamAsset * asset; // offset 0xA0, size 0x4
};
// total size: 0x8
class rxHeapFreeBlock {
    // Members
public:
    unsigned int size; // offset 0x0, size 0x4
    class rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
// total size: 0x68
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
    class _tagxRumble rumble_head; // offset 0x44, size 0x10
    signed short port; // offset 0x54, size 0x2
    signed short slot; // offset 0x56, size 0x2
    class _tagiPad context; // offset 0x58, size 0x4
    float al2d_timer; // offset 0x5C, size 0x4
    float ar2d_timer; // offset 0x60, size 0x4
    float d_timer; // offset 0x64, size 0x4
};
// total size: 0x24
class st_ZPRJ_CATDATA {
    // Members
public:
    enum en_ZPRJ_CATDATA_FORM idx_cdat; // offset 0x0, size 0x4
    union { // inferred
        class st_ZPRJ_CAT_ARROW arrow; // offset 0x4, size 0x18
        class st_ZPRJ_CAT_GRAVBALL gravball; // offset 0x4, size 0x4
        class st_ZPRJ_CAT_BOUNCEBALL bounce; // offset 0x4, size 0x20
        class st_ZPRJ_CAT_PICKUP pickup; // offset 0x4, size 0x4
    };
};
// total size: 0xB0
class tag_iFile {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    char path[128]; // offset 0x4, size 0x80
    signed int fd; // offset 0x84, size 0x4
    class sceCdlFILE file; // offset 0x88, size 0x24
    void (* cb)(signed int); // offset 0xAC, size 0x4
};
// total size: 0x14
class zCheckPoint {
    // Members
public:
    class _xVec3 pos; // offset 0x0, size 0xC
    float rot; // offset 0xC, size 0x4
    unsigned int initCamID; // offset 0x10, size 0x4
};
// total size: 0x14
class _tagxCamShoulder {
    // Members
public:
    float distance; // offset 0x0, size 0x4
    float height; // offset 0x4, size 0x4
    float realign_speed; // offset 0x8, size 0x4
    float realign_delay; // offset 0xC, size 0x4
    signed int state; // offset 0x10, size 0x4
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
// total size: 0xC
class st_ZPRJ_LINKNODE {
    // Members
public:
    class st_ENODE node; // offset 0x0, size 0x8
    class zEntProjectile * backref; // offset 0x8, size 0x4
};
// total size: 0x38
class _xBound {
    // Members
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char pad[3]; // offset 0x1, size 0x3
    union { // inferred
        class _xSphere sph; // offset 0x4, size 0x10
        class _xBBox box; // offset 0x4, size 0x24
        class _xCylinder cyl; // offset 0x4, size 0x14
    };
    class _xMat4x3 * mat; // offset 0x28, size 0x4
    class xQCData qcd; // offset 0x2C, size 0xC
};
// total size: 0x94
class RpWorldSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
    class RpPolygon * polygons; // offset 0x4, size 0x4
    class RwV3d * vertices; // offset 0x8, size 0x4
    class RpVertexNormal * normals; // offset 0xC, size 0x4
    class RwTexCoords * texCoords[8]; // offset 0x10, size 0x20
    class RwRGBA * preLitLum; // offset 0x30, size 0x4
    class RwResEntry * repEntry; // offset 0x34, size 0x4
    class RwLinkList collAtomicsInWorldSector; // offset 0x38, size 0x8
    class RwLinkList noCollAtomicsInWorldSector; // offset 0x40, size 0x8
    class RwLinkList lightsInWorldSector; // offset 0x48, size 0x8
    class RwBBox boundingBox; // offset 0x50, size 0x18
    class RwBBox tightBoundingBox; // offset 0x68, size 0x18
    class RpCollSector * colSectorRoot; // offset 0x80, size 0x4
    class RpMeshHeader * mesh; // offset 0x84, size 0x4
    class RxPipeline * pipeline; // offset 0x88, size 0x4
    unsigned short matListWindowBase; // offset 0x8C, size 0x2
    unsigned short numVertices; // offset 0x8E, size 0x2
    unsigned short numPolygons; // offset 0x90, size 0x2
    unsigned short pad; // offset 0x92, size 0x2
};
// total size: 0x30
class _xMat3x3 {
    // Members
public:
    class _xVec3 right; // offset 0x0, size 0xC
    signed int flags; // offset 0xC, size 0x4
    class _xVec3 up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class _xVec3 at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
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
class xAnimTransitionList {
    // Members
public:
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
};
// total size: 0xC
class xModelPool {
    // Members
public:
    class xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
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
// total size: 0x8
class RwTexCoords {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0x44
class zCutsceneZbufferHack {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    class zCutsceneZbuffer times[4]; // offset 0x4, size 0x40
};
// total size: 0x78
class zParEmitterAsset : public p2BaseAsset {
    // Members
public:
    unsigned char emit_flags; // offset 0x8, size 0x1
    unsigned char emit_type; // offset 0x9, size 0x1
    unsigned char count; // offset 0xA, size 0x1
    unsigned char count_variation; // offset 0xB, size 0x1
    float interval; // offset 0xC, size 0x4
    union { // inferred
        class _tagEmitCircle e_circle; // offset 0x10, size 0x8
        class _tagEmitSphere e_sphere; // offset 0x10, size 0x4
        class _tagEmitRect e_rect; // offset 0x10, size 0x8
        class _tagEmitLine e_line; // offset 0x10, size 0x1C
        class _tagEmitVolume e_volume; // offset 0x10, size 0x4
        class _tagEmitOffsetPoint e_offsetp; // offset 0x10, size 0xC
    };
    unsigned int attachToID; // offset 0x2C, size 0x4
    unsigned int parSysID; // offset 0x30, size 0x4
    class _xVec3 pos; // offset 0x34, size 0xC
    class _xVec3 vel; // offset 0x40, size 0xC
    float vel_angle_variation; // offset 0x4C, size 0x4
    unsigned char color_birth[4]; // offset 0x50, size 0x4
    unsigned char color_death[4]; // offset 0x54, size 0x4
    float size_birth; // offset 0x58, size 0x4
    float size_birth_variation; // offset 0x5C, size 0x4
    float size_death; // offset 0x60, size 0x4
    float life; // offset 0x64, size 0x4
    float life_variation; // offset 0x68, size 0x4
    unsigned char pad_emit[2]; // offset 0x6C, size 0x2
    unsigned char cull_mode; // offset 0x6E, size 0x1
    float cull_dist_sqr; // offset 0x70, size 0x4
    unsigned char max_emit; // offset 0x74, size 0x1
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
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
class RxPipelineRequiresCluster {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
// total size: 0x44
class xAnimFile {
    // Members
public:
    class xAnimFile * Next; // offset 0x0, size 0x4
    char * Name; // offset 0x4, size 0x4
    unsigned int ID; // offset 0x8, size 0x4
    unsigned int FileFlags; // offset 0xC, size 0x4
    float Duration; // offset 0x10, size 0x4
    float TimeOffset; // offset 0x14, size 0x4
    float PhysBase[4]; // offset 0x18, size 0x10
    float PhysDelta[4]; // offset 0x28, size 0x10
    unsigned short BoneCount; // offset 0x38, size 0x2
    unsigned char NumAnims[2]; // offset 0x3A, size 0x2
    void * * RawData; // offset 0x3C, size 0x4
    void * Physics; // offset 0x40, size 0x4
};
// total size: 0x20
class st_ZPRJ_CAT_BOUNCEBALL : public st_ZPRJ_CAT_GRAVBALL {
    // Members
public:
    signed int atRest; // offset 0x4, size 0x4
    float tym_atrest; // offset 0x8, size 0x4
    signed int cnt_curBounce; // offset 0xC, size 0x4
    signed int cnt_maxBounce; // offset 0x10, size 0x4
    float fac_elastic; // offset 0x14, size 0x4
    float pct_randKick; // offset 0x18, size 0x4
    signed int skip_next_bounce; // offset 0x1C, size 0x4
};
// total size: 0x24
class xParGroup {
    // Members
public:
    class xPar * m_root; // offset 0x0, size 0x4
    class xPar * m_dead; // offset 0x4, size 0x4
    signed int m_num_of_particles; // offset 0x8, size 0x4
    unsigned char m_alive; // offset 0xC, size 0x1
    unsigned char m_killWhenDead; // offset 0xD, size 0x1
    unsigned char m_active; // offset 0xE, size 0x1
    unsigned char m_visible; // offset 0xF, size 0x1
    unsigned char m_culled; // offset 0x10, size 0x1
    unsigned char m_priority; // offset 0x11, size 0x1
    unsigned char m_flags; // offset 0x12, size 0x1
    unsigned char m_regidx; // offset 0x13, size 0x1
    class xParGroup * m_next; // offset 0x14, size 0x4
    class xParGroup * m_prev; // offset 0x18, size 0x4
    void (* draw)(void *, class xParGroup *); // offset 0x1C, size 0x4
    class xParCmdTex * m_cmdTex; // offset 0x20, size 0x4
};
// total size: 0x30
class xModelInstance {
    // Members
public:
    class xModelInstance * Next; // offset 0x0, size 0x4
    class xModelInstance * Parent; // offset 0x4, size 0x4
    class xModelPool * Pool; // offset 0x8, size 0x4
    class xAnimPlay * Anim; // offset 0xC, size 0x4
    class RpAtomic * Data; // offset 0x10, size 0x4
    void * Object; // offset 0x14, size 0x4
    unsigned short Flags; // offset 0x18, size 0x2
    unsigned char BoneCount; // offset 0x1A, size 0x1
    unsigned char BoneIndex; // offset 0x1B, size 0x1
    unsigned char * BoneRemap; // offset 0x1C, size 0x4
    class RwMatrixTag * Mat; // offset 0x20, size 0x4
    class _xVec3 Scale; // offset 0x24, size 0xC
};
// total size: 0x10
class _tagxRumble {
    // Members
public:
    enum _tagRumbleType type; // offset 0x0, size 0x4
    float seconds; // offset 0x4, size 0x4
    class _tagxRumble * next; // offset 0x8, size 0x4
    signed short active; // offset 0xC, size 0x2
    unsigned short fxflags; // offset 0xE, size 0x2
};
// total size: 0xD0
class zGlobalGameStats {
    // Members
public:
    float gameTime; // offset 0x0, size 0x4
    unsigned int visited; // offset 0x4, size 0x4
    float levelTime; // offset 0x8, size 0x4
    float levelTime_sum; // offset 0xC, size 0x4
    float areaTime; // offset 0x10, size 0x4
    float areaTime_sum; // offset 0x14, size 0x4
    float roomTime; // offset 0x18, size 0x4
    float roomTime_sum; // offset 0x1C, size 0x4
    float timeRunning; // offset 0x20, size 0x4
    float timeRunning_sum; // offset 0x24, size 0x4
    float timeWalking; // offset 0x28, size 0x4
    float timeWalking_sum; // offset 0x2C, size 0x4
    unsigned int scares; // offset 0x30, size 0x4
    unsigned int scares_sum; // offset 0x34, size 0x4
    unsigned int deaths; // offset 0x38, size 0x4
    unsigned int deaths_sum; // offset 0x3C, size 0x4
    unsigned int singleJumps; // offset 0x40, size 0x4
    unsigned int singleJumps_sum; // offset 0x44, size 0x4
    unsigned int doubleJumps; // offset 0x48, size 0x4
    unsigned int doubleJumps_sum; // offset 0x4C, size 0x4
    unsigned int gumShot; // offset 0x50, size 0x4
    unsigned int gumShot_sum; // offset 0x54, size 0x4
    unsigned int gumHit; // offset 0x58, size 0x4
    unsigned int gumHit_sum; // offset 0x5C, size 0x4
    unsigned int gumEmpty; // offset 0x60, size 0x4
    unsigned int gumEmpty_sum; // offset 0x64, size 0x4
    unsigned int soapShot; // offset 0x68, size 0x4
    unsigned int soapShot_sum; // offset 0x6C, size 0x4
    unsigned int soapHit; // offset 0x70, size 0x4
    unsigned int soapHit_sum; // offset 0x74, size 0x4
    unsigned int soapEmpty; // offset 0x78, size 0x4
    unsigned int soapEmpty_sum; // offset 0x7C, size 0x4
    unsigned int food; // offset 0x80, size 0x4
    unsigned int food_sum; // offset 0x84, size 0x4
    unsigned int snackBoxes; // offset 0x88, size 0x4
    unsigned int snackBoxes_sum; // offset 0x8C, size 0x4
    unsigned int enemyKills; // offset 0x90, size 0x4
    unsigned int enemyKills_sum; // offset 0x94, size 0x4
    unsigned int enemyCount; // offset 0x98, size 0x4
    unsigned int enemyCount_sum; // offset 0x9C, size 0x4
    unsigned int specials; // offset 0xA0, size 0x4
    unsigned int specials_tot; // offset 0xA4, size 0x4
    unsigned int tokens; // offset 0xA8, size 0x4
    unsigned int tokens_tot; // offset 0xAC, size 0x4
    unsigned int snacks; // offset 0xB0, size 0x4
    unsigned int snacks_tot; // offset 0xB4, size 0x4
    unsigned int chances; // offset 0xB8, size 0x4
    unsigned int chances_tot; // offset 0xBC, size 0x4
    unsigned int keys; // offset 0xC0, size 0x4
    unsigned int keys_tot; // offset 0xC4, size 0x4
    unsigned int clues; // offset 0xC8, size 0x4
    unsigned int clues_tot; // offset 0xCC, size 0x4
};
// total size: 0x8
class RpPolygon {
    // Members
public:
    unsigned short matIndex; // offset 0x0, size 0x2
    unsigned short vertIndex[3]; // offset 0x2, size 0x6
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
// total size: 0x44
class zProjectileTypeAsset : public p2BaseAsset {
    // Members
public:
    signed int efxType; // offset 0x8, size 0x4
    unsigned int modelID; // offset 0xC, size 0x4
    unsigned int animID; // offset 0x10, size 0x4
    unsigned int atRestModelID; // offset 0x14, size 0x4
    unsigned int atRestAnimID; // offset 0x18, size 0x4
    signed int destructEnabled; // offset 0x1C, size 0x4
    float destructTime; // offset 0x20, size 0x4
    float destructDist; // offset 0x24, size 0x4
    signed int oriented; // offset 0x28, size 0x4
    signed int extra_space[6]; // offset 0x2C, size 0x18
};
// total size: 0x8
class RwV2d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x3C
class st_ZPRJ_COMMON {
    // Members
public:
    class _xVec3 vec_flex; // offset 0x0, size 0xC
    class _xMat3x3 mat_flex; // offset 0xC, size 0x30
};
// total size: 0xA0
class st_ZPRJ_SOLV_METHOD_B {
    // Members
public:
    signed int flg_stat; // offset 0x0, size 0x4
    class _xVec3 vel_launch; // offset 0x4, size 0xC
    class _xVec3 acc_gravity; // offset 0x10, size 0xC
    class _xVec3 pos_base; // offset 0x1C, size 0xC
    float spd_base; // offset 0x28, size 0x4
    class _xVec3 dir_base; // offset 0x2C, size 0xC
    class _xVec3 pos_tgt; // offset 0x38, size 0xC
    class _xVec3 vel_tgt; // offset 0x44, size 0xC
    float dst_tgtXZ; // offset 0x50, size 0x4
    float spd_max; // offset 0x54, size 0x4
    float spd_min; // offset 0x58, size 0x4
    signed int cnt_subspd; // offset 0x5C, size 0x4
    float ang_thmax; // offset 0x60, size 0x4
    float ang_thmin; // offset 0x64, size 0x4
    signed int cnt_subang; // offset 0x68, size 0x4
    float acc_maxgrav; // offset 0x6C, size 0x4
    float acc_mingrav; // offset 0x70, size 0x4
    signed int cnt_subgrav; // offset 0x74, size 0x4
    signed int is_winner; // offset 0x78, size 0x4
    signed int cnt_pause; // offset 0x7C, size 0x4
    float last_speed; // offset 0x80, size 0x4
    float last_angle; // offset 0x84, size 0x4
    float last_grav; // offset 0x88, size 0x4
    class st_NEWT_USERDATA newtdata; // offset 0x8C, size 0x14
};
// total size: 0x144
class _zEntHangable : public _zEnt {
    // Members
public:
    class p2EntHangableAsset * hangInfo; // offset 0xEC, size 0x4
    class _xVec3 pivot; // offset 0xF0, size 0xC
    class _xVec3 endpos; // offset 0xFC, size 0xC
    class _xVec3 vel; // offset 0x108, size 0xC
    class _xVec3 swingplane; // offset 0x114, size 0xC
    float grabTimer; // offset 0x120, size 0x4
    float spin; // offset 0x124, size 0x4
    unsigned int state; // offset 0x128, size 0x4
    class _zEnt * shaggy; // offset 0x12C, size 0x4
    signed int enabled; // offset 0x130, size 0x4
    class _zEnt * follow; // offset 0x134, size 0x4
    signed int moving; // offset 0x138, size 0x4
    float candle_timer; // offset 0x13C, size 0x4
    signed int candle_state; // offset 0x140, size 0x4
};
// total size: 0x1DC
class zScene : public _xScene {
    // Members
public:
    unsigned int sceneID; // offset 0x6C, size 0x4
    class _zPortal * pendingPortal; // offset 0x70, size 0x4
    union { // inferred
        unsigned int num_ents; // offset 0x74, size 0x4
        unsigned int num_base; // offset 0x74, size 0x4
    };
    union { // inferred
        class xBase * * base; // offset 0x78, size 0x4
        class _zEnt * * ents; // offset 0x78, size 0x4
    };
    unsigned int baseCount[43]; // offset 0x7C, size 0xAC
    class xBase * baseList[43]; // offset 0x128, size 0xAC
    unsigned int num_bubbles; // offset 0x1D4, size 0x4
    class _zEnt * * bubbles; // offset 0x1D8, size 0x4
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x88
class xCamAsset : public p2BaseAsset {
    // Members
public:
    class _xVec3 pos; // offset 0x8, size 0xC
    class _xVec3 at; // offset 0x14, size 0xC
    class _xVec3 up; // offset 0x20, size 0xC
    class _xVec3 right; // offset 0x2C, size 0xC
    class _xVec3 view_offset; // offset 0x38, size 0xC
    signed short offset_start_frames; // offset 0x44, size 0x2
    signed short offset_end_frames; // offset 0x46, size 0x2
    float fov; // offset 0x48, size 0x4
    float trans_time; // offset 0x4C, size 0x4
    enum _tagTransType trans_type; // offset 0x50, size 0x4
    unsigned int flags; // offset 0x54, size 0x4
    float fade_up; // offset 0x58, size 0x4
    float fade_down; // offset 0x5C, size 0x4
    union { // inferred
        class _tagxCamFollowAsset cam_follow; // offset 0x60, size 0x18
        class _tagxCamShoulderAsset cam_shoulder; // offset 0x60, size 0x10
        class _tagp2CamStaticAsset cam_static; // offset 0x60, size 0x4
        class _tagxCamPathAsset cam_path; // offset 0x60, size 0xC
        class _tagp2CamStaticFollowAsset cam_staticFollow; // offset 0x60, size 0x4
    };
    unsigned int valid_flags; // offset 0x78, size 0x4
    unsigned int markerid[2]; // offset 0x7C, size 0x8
    unsigned char cam_type; // offset 0x84, size 0x1
    unsigned char pad[3]; // offset 0x85, size 0x3
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
class RpVertexNormal {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
    signed char z; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
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
// total size: 0x1C
class _tagEmitLine {
    // Members
public:
    class _xVec3 pos1; // offset 0x0, size 0xC
    class _xVec3 pos2; // offset 0xC, size 0xC
    float radius; // offset 0x18, size 0x4
};
// total size: 0x10
class xFFX {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    void (* doEffect)(class _xEnt *, class _xScene *, float, void *); // offset 0x4, size 0x4
    void * fdata; // offset 0x8, size 0x4
    class xFFX * next; // offset 0xC, size 0x4
};
// total size: 0x24
class xParCmdTex : public xParCmdAsset {
    // Members
public:
    float x1; // offset 0x8, size 0x4
    float y1; // offset 0xC, size 0x4
    float x2; // offset 0x10, size 0x4
    float y2; // offset 0x14, size 0x4
    unsigned char birthMode; // offset 0x18, size 0x1
    unsigned char rows; // offset 0x19, size 0x1
    unsigned char cols; // offset 0x1A, size 0x1
    unsigned char unit_count; // offset 0x1B, size 0x1
    float unit_width; // offset 0x1C, size 0x4
    float unit_height; // offset 0x20, size 0x4
};
// total size: 0x60
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
    class xAnimActiveEffect * ActiveList; // offset 0x20, size 0x4
    class xAnimPlay * Play; // offset 0x24, size 0x4
    float LastTime; // offset 0x28, size 0x4
    class _xVec3 LastTranslation; // offset 0x2C, size 0xC
    float LastYaw; // offset 0x38, size 0x4
    unsigned int pad; // offset 0x3C, size 0x4
    class _xQuat LastQuat; // offset 0x40, size 0x10
    class xAnimTransition * Sync; // offset 0x50, size 0x4
    class xAnimTransition * Tran; // offset 0x54, size 0x4
    class xAnimSingle * Blend; // offset 0x58, size 0x4
    float BlendFactor; // offset 0x5C, size 0x4
};
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
    unsigned short renderFrame; // offset 0x94, size 0x2
    unsigned short pad; // offset 0x96, size 0x2
    class RwFrustumPlane frustumPlanes[6]; // offset 0x98, size 0x78
    class RwBBox frustumBoundBox; // offset 0x110, size 0x18
    class RwV3d frustumCorners[8]; // offset 0x128, size 0x60
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
// total size: 0x18
class st_CAT_AIMARROW {
    // Members
public:
    class _xVec3 pos_src; // offset 0x0, size 0xC
    class _xVec3 pos_tgt; // offset 0xC, size 0xC
};
// total size: 0x14
class _zPortal : public xBase {
    // Members
public:
    class zPortalAsset * passet; // offset 0x10, size 0x4
};
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x18
class zSFX : public xBase {
    // Members
public:
    class zSFXAsset * asset; // offset 0x10, size 0x4
    unsigned int sndID; // offset 0x14, size 0x4
};
// total size: 0x38
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
// total size: 0x4FC
class _xEntCollis {
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
    unsigned char trig_idx; // offset 0xA, size 0x1
    unsigned char idx; // offset 0xB, size 0x1
    class _xCollis colls[18]; // offset 0xC, size 0x4C8
    void (* post)(class _xEnt *, class _xScene *, float, class _xEntCollis *); // offset 0x4D4, size 0x4
    unsigned int (* depenq)(class _xEnt *, class _xEnt *, class _xScene *, float, class _xCollis *); // offset 0x4D8, size 0x4
    unsigned char trigs_cur[8]; // offset 0x4DC, size 0x8
    unsigned char trigs_prev[8]; // offset 0x4E4, size 0x8
    unsigned char trigs_entered[8]; // offset 0x4EC, size 0x8
    unsigned char trigs_exited[8]; // offset 0x4F4, size 0x8
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
// total size: 0x20
class st_CAT_AIMGRAV {
    // Members
public:
    class _xVec3 pos_src; // offset 0x0, size 0xC
    class _xVec3 pos_tgt; // offset 0xC, size 0xC
    float fac_arcness; // offset 0x18, size 0x4
    float acc_gravity; // offset 0x1C, size 0x4
};
// total size: 0x10
class xCutsceneTime {
    // Members
public:
    float StartTime; // offset 0x0, size 0x4
    float EndTime; // offset 0x4, size 0x4
    unsigned int NumData; // offset 0x8, size 0x4
    unsigned int ChunkIndex; // offset 0xC, size 0x4
};
// total size: 0x40
class st_ZPRJ_SOLV_METHOD_A {
    // Members
public:
    class _xVec3 vel_launch; // offset 0x0, size 0xC
    class _xVec3 dir_launch; // offset 0xC, size 0xC
    float spd_muzzle; // offset 0x18, size 0x4
    class _xVec3 pos_launch; // offset 0x1C, size 0xC
    class _xVec3 pos_target; // offset 0x28, size 0xC
    float acc_gravity; // offset 0x34, size 0x4
    float fac_arcness; // offset 0x38, size 0x4
    float dst_range; // offset 0x3C, size 0x4
};
// total size: 0x30
class zSFXAsset : public p2BaseAsset {
    // Members
public:
    unsigned short flagsSFX; // offset 0x8, size 0x2
    unsigned short freq; // offset 0xA, size 0x2
    float freqm; // offset 0xC, size 0x4
    unsigned int soundAssetID; // offset 0x10, size 0x4
    unsigned int attachID; // offset 0x14, size 0x4
    unsigned char loopCount; // offset 0x18, size 0x1
    unsigned char priority; // offset 0x19, size 0x1
    unsigned char volume; // offset 0x1A, size 0x1
    unsigned char pad; // offset 0x1B, size 0x1
    class _xVec3 pos; // offset 0x1C, size 0xC
    float range; // offset 0x28, size 0x4
    float range_falloff; // offset 0x2C, size 0x4
};
// total size: 0x4
class _tagxCamStatic {
    // Members
public:
    unsigned int unused; // offset 0x0, size 0x4
};
// total size: 0x18
class RwTexDictionary {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0x3330
class zGlobals {
    // Members
public:
    class _tagxCamFrame camera; // offset 0x0, size 0x220
    class _tagxPad * pad0; // offset 0x220, size 0x4
    class _tagxPad * pad1; // offset 0x224, size 0x4
    class zPlayerGlobals player; // offset 0x228, size 0x660
    class zAssetPickupTable * pickupTable; // offset 0x888, size 0x4
    signed int profile; // offset 0x88C, size 0x4
    class _zCutsceneMgr * cmgr; // offset 0x890, size 0x4
    char profFunc[6][128]; // offset 0x894, size 0x300
    class zScene * sceneCur; // offset 0xB94, size 0x4
    class zScene * scenePreload; // offset 0xB98, size 0x4
    signed int sceneFirst; // offset 0xB9C, size 0x4
    char sceneStart[32]; // offset 0xBA0, size 0x20
    class iFogParams fog; // offset 0xBC0, size 0x1C
    class iFogParams fogA; // offset 0xBDC, size 0x1C
    class iFogParams fogB; // offset 0xBF8, size 0x1C
    signed long fog_t0; // offset 0xC18, size 0x4
    signed long fog_t1; // offset 0xC20, size 0x4
    class zGlobalGameStats stats; // offset 0xC28, size 0xD0
    class zGlobalGameStats areaStats[30]; // offset 0xCF8, size 0x1860
    class zGlobalGameStats levelStats[13]; // offset 0x2558, size 0xA90
    class zGlobalGameStats worldStats[4]; // offset 0x2FE8, size 0x340
    signed int option_vibration; // offset 0x3328, size 0x4
    float update_dt; // offset 0x332C, size 0x4
};
// total size: 0x18
class st_ZPRJ_CAT_ARROW {
    // Members
public:
    float acc_gravity; // offset 0x0, size 0x4
    signed int amStuck; // offset 0x4, size 0x4
    class _xEnt * ent_stuck; // offset 0x8, size 0x4
    class _xVec3 pos_stuck; // offset 0xC, size 0xC
};
// total size: 0x24
class _zGust : public xBase {
    // Members
public:
    unsigned int flags; // offset 0x10, size 0x4
    class zGustAsset * asset; // offset 0x14, size 0x4
    class _zVolume * volume; // offset 0x18, size 0x4
    class _zVolume * fx_volume; // offset 0x1C, size 0x4
    float debris_timer; // offset 0x20, size 0x4
};
// total size: 0x20
class RpClump {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList atomicList; // offset 0x8, size 0x8
    class RwLLLink inWorldLink; // offset 0x10, size 0x8
    class RpClump * (* callback)(class RpClump *, void *); // offset 0x18, size 0x4
    unsigned short renderFrame; // offset 0x1C, size 0x2
    unsigned short pad; // offset 0x1E, size 0x2
};
// total size: 0x10
class RwPlane {
    // Members
public:
    class RwV3d normal; // offset 0x0, size 0xC
    float distance; // offset 0xC, size 0x4
};
// total size: 0x18
class _tagxCamFollowAsset {
    // Members
public:
    float rotation; // offset 0x0, size 0x4
    float distance; // offset 0x4, size 0x4
    float height; // offset 0x8, size 0x4
    float rubber_band; // offset 0xC, size 0x4
    float start_speed; // offset 0x10, size 0x4
    float end_speed; // offset 0x14, size 0x4
};
// total size: 0x10
class _xQuat {
    // Members
public:
    class _xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
enum RpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x50
class xPar {
    // Members
public:
    class xPar * m_next; // offset 0x0, size 0x4
    class xPar * m_prev; // offset 0x4, size 0x4
    float m_lifetime; // offset 0x8, size 0x4
    unsigned char m_c[4]; // offset 0xC, size 0x4
    class _xVec3 m_pos; // offset 0x10, size 0xC
    float m_size; // offset 0x1C, size 0x4
    class _xVec3 m_vel; // offset 0x20, size 0xC
    float m_sizeVel; // offset 0x2C, size 0x4
    unsigned char m_flag; // offset 0x30, size 0x1
    unsigned char m_mode; // offset 0x31, size 0x1
    unsigned char m_texIdx[2]; // offset 0x32, size 0x2
    unsigned char m_rotdeg[3]; // offset 0x34, size 0x3
    unsigned char pad8; // offset 0x37, size 0x1
    unsigned int pad32; // offset 0x38, size 0x4
    class zParEmitterAsset * m_asset; // offset 0x3C, size 0x4
    float m_cvel[4]; // offset 0x40, size 0x10
};
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
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
// total size: 0x18
class xAnimTable {
    // Members
public:
    class xAnimTable * Next; // offset 0x0, size 0x4
    char * Name; // offset 0x4, size 0x4
    class xAnimTransition * TransitionList; // offset 0x8, size 0x4
    class xAnimState * StateList; // offset 0xC, size 0x4
    unsigned int AnimIndex; // offset 0x10, size 0x4
    unsigned int MorphIndex; // offset 0x14, size 0x4
};
// total size: 0x8
class xParCmdAsset {
    // Members
public:
    unsigned int type; // offset 0x0, size 0x4
    unsigned char enabled; // offset 0x4, size 0x1
    unsigned char mode; // offset 0x5, size 0x1
    unsigned char pad[2]; // offset 0x6, size 0x2
};
// total size: 0x4
class _tagEmitVolume {
    // Members
public:
    unsigned int emit_volumeID; // offset 0x0, size 0x4
};
// total size: 0x220
class _tagxCamFrame {
    // Members
public:
    class RwCamera * lo_cam; // offset 0x0, size 0x4
    class _tagxCam orig_cam; // offset 0x10, size 0xB0
    class _tagxCam hi_cam; // offset 0xC0, size 0xB0
    class _xVec4 frustplane[8]; // offset 0x170, size 0x80
    class _tagxCam * t_cam; // offset 0x1F0, size 0x4
    float t_time; // offset 0x1F4, size 0x4
    float g_time; // offset 0x1F8, size 0x4
    class _xEnv * env; // offset 0x1FC, size 0x4
    class _xVec3 * target_pos; // offset 0x200, size 0x4
    class _xMat4x3 * target_frame; // offset 0x204, size 0x4
    class _xVec3 pre_align_dir; // offset 0x208, size 0xC
    class _tagxCam * * cameras; // offset 0x214, size 0x4
    unsigned int total_cameras; // offset 0x218, size 0x4
};
enum _tagRumbleType {
    eRumble_Off = 0,
    eRumble_VeryLightHi = 1,
    eRumble_VeryLight = 2,
    eRumble_LightHi = 3,
    eRumble_Light = 4,
    eRumble_MediumHi = 5,
    eRumble_Medium = 6,
    eRumble_HeavyHi = 7,
    eRumble_Heavy = 8,
    eRumble_VeryHeavyHi = 9,
    eRumble_VeryHeavy = 10,
    eRumble_Total = 11,
    eRumbleForceU32 = 2147483647,
};
// total size: 0x0
class zGustAsset {};
// total size: 0x20
class p2LinkAsset {
    // Members
public:
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
// total size: 0x18
class RwBBox {
    // Members
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
};
enum _tagCamType {
    eCamType_Follow = 0,
    eCamType_FollowWithOffset = 1,
    eCamType_Static = 2,
    eCamType_Path = 3,
    eCamType_StaticFollow = 4,
    eCamType_Shoulder = 5,
    eCamType_Total = 6,
};
// total size: 0x10
class xCutsceneData {
    // Members
public:
    unsigned int DataType; // offset 0x0, size 0x4
    unsigned int AssetID; // offset 0x4, size 0x4
    unsigned int ChunkSize; // offset 0x8, size 0x4
    union { // inferred
        unsigned int FileOffset; // offset 0xC, size 0x4
        void * DataPtr; // offset 0xC, size 0x4
    };
};
// total size: 0x10
class _xVec4 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
// total size: 0x0
class rxReq {};
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x4
class st_ZPRJ_CAT_GRAVBALL {
    // Members
public:
    float acc_gravity; // offset 0x0, size 0x4
};
// total size: 0x13C
class zPlayerStatic {
    // Members
public:
    unsigned short AnalogMin; // offset 0x0, size 0x2
    unsigned short AnalogMax; // offset 0x2, size 0x2
    float SpeedSneak[4]; // offset 0x4, size 0x10
    float SpeedWalk[4]; // offset 0x14, size 0x10
    float SpeedRun[4]; // offset 0x24, size 0x10
    float SpeedAir[4]; // offset 0x34, size 0x10
    float SpeedHotsauce[4]; // offset 0x44, size 0x10
    float AnimSneak[3]; // offset 0x54, size 0xC
    float AnimWalk[3]; // offset 0x60, size 0xC
    float Gravity; // offset 0x6C, size 0x4
    float JumpGravity; // offset 0x70, size 0x4
    float GravSmooth; // offset 0x74, size 0x4
    float FloatSpeed; // offset 0x78, size 0x4
    float ButtsmashSpeed; // offset 0x7C, size 0x4
    class zJumpParam Jump; // offset 0x80, size 0x10
    class zJumpParam Double; // offset 0x90, size 0x10
    class zJumpParam Bounce; // offset 0xA0, size 0x10
    class zJumpParam Spring; // offset 0xB0, size 0x10
    class zJumpParam Toss; // offset 0xC0, size 0x10
    float HeadbuttSpeedMin; // offset 0xD0, size 0x4
    float HeadbuttSpeedMax; // offset 0xD4, size 0x4
    float HeadbuttAccel; // offset 0xD8, size 0x4
    float HeadbuttTimeMin; // offset 0xDC, size 0x4
    float HeadbuttTimeMax; // offset 0xE0, size 0x4
    float HeadbuttTurn; // offset 0xE4, size 0x4
    float FireDelay; // offset 0xE8, size 0x4
    float FireRepeat; // offset 0xEC, size 0x4
    float FirePress; // offset 0xF0, size 0x4
    float FireTargetYaw; // offset 0xF4, size 0x4
    float FireTargetPitch; // offset 0xF8, size 0x4
    float FireTargetDist; // offset 0xFC, size 0x4
    float FireTargetRadius; // offset 0x100, size 0x4
    float FireTrack; // offset 0x104, size 0x4
    float FireGumSpeed; // offset 0x108, size 0x4
    float FireSoapSpeed; // offset 0x10C, size 0x4
    float FireGumTimer; // offset 0x110, size 0x4
    float FireSoapTimer; // offset 0x114, size 0x4
    unsigned int Initial_Specials; // offset 0x118, size 0x4
    unsigned int TakeDamage; // offset 0x11C, size 0x4
    float StartSlideAngle; // offset 0x120, size 0x4
    float StopSlideAngle; // offset 0x124, size 0x4
    float RotMatchMaxAngle; // offset 0x128, size 0x4
    float RotMatchMatchTime; // offset 0x12C, size 0x4
    float RotMatchRelaxTime; // offset 0x130, size 0x4
    unsigned short AmmoCapacityGum; // offset 0x134, size 0x2
    unsigned short AmmoCapacitySoap; // offset 0x136, size 0x2
    unsigned short AmmoSceneGum; // offset 0x138, size 0x2
    unsigned short AmmoSceneSoap; // offset 0x13A, size 0x2
};
// total size: 0x0
class _zVolume {};
enum en_ZPRJ_FX_TYPE {
    ZPRJ_FXTYPE_NONE = 0,
    ZPRJ_FXTYPE_SMOKE = 1,
    ZPRJ_FXTYPE_WOOD = 2,
    ZPRJ_FXTYPE_TAR = 3,
    ZPRJ_FXTYPE_FIREBALL = 4,
    ZPRJ_FXTYPE_NODAMAGE_FIREBALL = 5,
    ZPRJ_FXTYPE_ICE = 6,
    ZPRJ_FXTYPE_BLACKKNIGHT = 7,
    ZPRJ_FXTYPE_WITCHDOCTOR = 8,
    ZPRJ_FXTYPE_REDBEARD = 9,
    ZPRJ_FXTYPE_MASTERMIND_RED = 10,
    ZPRJ_FXTYPE_MASTERMIND_GREEN = 11,
    ZPRJ_FXTYPE_MASTERMIND_BLACK = 12,
    ZPRJ_FXTYPE_UNUSED3 = 13,
    ZPRJ_FXTYPE_UNUSED4 = 14,
    ZPRJ_FXTYPE_UNUSED5 = 15,
    ZPRJ_FXTYPE_TOTAL = 16,
};
enum en_ZPRJ_MODEL_INDEX {
    ZPRJ_MDLIDX_STD = 0,
    ZPRJ_MDLIDX_POSTHIT = 1,
    ZPRJ_MDLIDX_NOMORE = 2,
};
// total size: 0x4
class _tagxCamStaticFollow {
    // Members
public:
    float rubber_band; // offset 0x0, size 0x4
};
// total size: 0x10
class _xRot {
    // Members
public:
    class _xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
};
// total size: 0xC
class RxOutputSpec {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
};
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
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
// total size: 0xC
class _tagEmitOffsetPoint {
    // Members
public:
    class _xVec3 offset; // offset 0x0, size 0xC
};
// total size: 0x7C
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
    class RwSurfaceProperties surfaceProps; // offset 0x68, size 0xC
    class RpWorldSector * (* renderCallBack)(class RpWorldSector *); // offset 0x74, size 0x4
    class RxPipeline * pipeline; // offset 0x78, size 0x4
};
enum en_ZPRJ_DOCOL_HEURISTICS {
    ZPRJ_DOCOL_CUSTOWNER = 0,
    ZPRJ_DOCOL_CUSTCAT = 1,
    ZPRJ_DOCOL_ALWAYS = 2,
    ZPRJ_DOCOL_RANDPCT = 3,
    ZPRJ_DOCOL_SINE = 4,
    ZPRJ_DOCOL_TOGGLE = 5,
    ZPRJ_DOCOL_VELBOUND = 6,
    ZPRJ_DOCOL_NOMORE = 7,
};
// total size: 0xC
class RxClusterRef {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
// total size: 0x40
class _xEnv {
    // Members
public:
    class iEnv * geom; // offset 0x0, size 0x4
    class iEnv ienv; // offset 0x10, size 0x30
};
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x0
class _zPlatform {};
// total size: 0x8
class st_ENODE {
    // Members
public:
    class st_ENODE * next; // offset 0x0, size 0x4
    class st_ENODE * prev; // offset 0x4, size 0x4
};
// total size: 0x6C
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
    class RwSurfaceProperties ignoredSurfaceProps; // offset 0x54, size 0xC
    class RpMeshHeader * mesh; // offset 0x60, size 0x4
    class RwResEntry * repEntry; // offset 0x64, size 0x4
    class RpMorphTarget * morphTarget; // offset 0x68, size 0x4
};
enum en_ZPRJ_CATEGORY {
    ZPRJ_CAT_UNKNOWN = 0,
    ZPRJ_CAT_ARROW = 1,
    ZPRJ_CAT_GRAVBALL = 2,
    ZPRJ_CAT_BOUNCEBALL = 3,
    ZPRJ_CAT_BUBSOAP = 4,
    ZPRJ_CAT_BUBGUM = 5,
    ZPRJ_CAT_BKAXE = 6,
    ZPRJ_CAT_GGSHOCK = 7,
    ZPRJ_CAT_RBSWORD = 8,
    ZPRJ_CAT_MMFLASK = 9,
    ZPRJ_CAT_PICKUP = 10,
    ZPRJ_CAT_STDDEBRIS = 11,
    ZPRJ_CAT_BANGDEBRIS = 12,
    ZPRJ_CAT_NOMORE = 13,
};
// total size: 0x8
class xCutsceneBreak {
    // Members
public:
    float Time; // offset 0x0, size 0x4
    signed int Index; // offset 0x4, size 0x4
};
// total size: 0x28
class xSurface : public xBase {
    // Members
public:
    unsigned int idx; // offset 0x10, size 0x4
    unsigned int type; // offset 0x14, size 0x4
    union { // inferred
        unsigned int mat_idx; // offset 0x18, size 0x4
        class _xEnt * ent; // offset 0x18, size 0x4
        void * obj; // offset 0x18, size 0x4
    };
    float friction; // offset 0x1C, size 0x4
    unsigned char state; // offset 0x20, size 0x1
    unsigned char pad[3]; // offset 0x21, size 0x3
    void * moprops; // offset 0x24, size 0x4
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
class _tagxCamShoulderAsset {
    // Members
public:
    float distance; // offset 0x0, size 0x4
    float height; // offset 0x4, size 0x4
    float realign_speed; // offset 0x8, size 0x4
    float realign_delay; // offset 0xC, size 0x4
};
// total size: 0xC
class RpMaterialList {
    // Members
public:
    class RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
};
enum _tagTransType {
    eTransType_None = 0,
    eTransType_Interp1 = 1,
    eTransType_Interp2 = 2,
    eTransType_Interp3 = 3,
    eTransType_Interp4 = 4,
    eTransType_Linear = 5,
    eTransType_Interp1Rev = 6,
    eTransType_Interp2Rev = 7,
    eTransType_Interp3Rev = 8,
    eTransType_Interp4Rev = 9,
    eTransType_Total = 10,
};
// total size: 0xC
class xQCData {
    // Members
public:
    unsigned int xmask; // offset 0x0, size 0x4
    unsigned int ymask; // offset 0x4, size 0x4
    unsigned int zmask; // offset 0x8, size 0x4
};
// total size: 0x8
class _tagxCamPath {
    // Members
public:
    unsigned int assetID; // offset 0x0, size 0x4
    float time_end; // offset 0x4, size 0x4
};
// total size: 0x4
class RpSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
};
enum en_ZPRJ_CATDATA_FORM {
    ZPRJ_CDAT_ARROW = 0,
    ZPRJ_CDAT_GRAVBALL = 1,
    ZPRJ_CDAT_BOUNCE = 2,
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
// total size: 0x24
class zGustData {
    // Members
public:
    unsigned int gust_on; // offset 0x0, size 0x4
    class _zGust * g[4]; // offset 0x4, size 0x10
    float lerp[4]; // offset 0x14, size 0x10
};
// total size: 0x24
class _xBBox {
    // Members
public:
    class _xVec3 center; // offset 0x0, size 0xC
    class _xBox box; // offset 0xC, size 0x18
};
// total size: 0x54
class _zParEmitterCustomSettings {
    // Members
public:
    unsigned int custom_flags; // offset 0x0, size 0x4
    unsigned char count; // offset 0x4, size 0x1
    unsigned char count_variation; // offset 0x5, size 0x1
    float interval; // offset 0x8, size 0x4
    unsigned int attachToID; // offset 0xC, size 0x4
    class _xVec3 pos; // offset 0x10, size 0xC
    class _xVec3 vel; // offset 0x1C, size 0xC
    float vel_angle_variation; // offset 0x28, size 0x4
    unsigned char color_birth[4]; // offset 0x2C, size 0x4
    unsigned char color_death[4]; // offset 0x30, size 0x4
    float size_birth; // offset 0x34, size 0x4
    float size_birth_variation; // offset 0x38, size 0x4
    float size_death; // offset 0x3C, size 0x4
    float life; // offset 0x40, size 0x4
    float life_variation; // offset 0x44, size 0x4
    unsigned char rot[3]; // offset 0x48, size 0x3
    float xzcircle_radius; // offset 0x4C, size 0x4
    float emit_interval_current; // offset 0x50, size 0x4
};
// total size: 0xC
class st_ELIST {
    // Members
public:
    class st_ENODE * head; // offset 0x0, size 0x4
    class st_ENODE * tail; // offset 0x4, size 0x4
    class st_ENODE * tailprev; // offset 0x8, size 0x4
};
// total size: 0xC
class RwSurfaceProperties {
    // Members
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
// total size: 0x10
class zCutsceneZbuffer {
    // Members
public:
    float start; // offset 0x0, size 0x4
    float end; // offset 0x4, size 0x4
    float near; // offset 0x8, size 0x4
    float far; // offset 0xC, size 0x4
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
// total size: 0x20
class p2EntHangableAsset {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    float pivotOffset; // offset 0x4, size 0x4
    float leverArm; // offset 0x8, size 0x4
    float gravity; // offset 0xC, size 0x4
    float accel; // offset 0x10, size 0x4
    float decay; // offset 0x14, size 0x4
    float grabDelay; // offset 0x18, size 0x4
    float stopDecel; // offset 0x1C, size 0x4
};
enum en_ZPRJ_CATAIM_FORM {
    ZPRJ_CAIM_ARROW = 0,
    ZPRJ_CAIM_GRAVBALL = 1,
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
class _tagEmitCircle {
    // Members
public:
    float radius; // offset 0x0, size 0x4
    float deflection; // offset 0x4, size 0x4
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
// total size: 0x10
class _xSphere {
    // Members
public:
    class _xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
// total size: 0x50
class _xEntDrive {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    float otm; // offset 0x4, size 0x4
    float otmr; // offset 0x8, size 0x4
    float os; // offset 0xC, size 0x4
    float tm; // offset 0x10, size 0x4
    float tmr; // offset 0x14, size 0x4
    float s; // offset 0x18, size 0x4
    class _xEnt * odriver; // offset 0x1C, size 0x4
    class _xEnt * driver; // offset 0x20, size 0x4
    class _xEnt * driven; // offset 0x24, size 0x4
    class _xVec3 op; // offset 0x28, size 0xC
    class _xVec3 p; // offset 0x34, size 0xC
    class _xVec3 q; // offset 0x40, size 0xC
    float yaw; // offset 0x4C, size 0x4
};
// total size: 0x8
class p2BaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x2C
class st_ZPRJ_SOLV_METHOD_C {
    // Members
public:
    class _xVec3 vel_launch; // offset 0x0, size 0xC
    float spd_muzzle; // offset 0xC, size 0x4
    float acc_gravity; // offset 0x10, size 0x4
    class _xVec3 pos_launch; // offset 0x14, size 0xC
    class _xVec3 pos_target; // offset 0x20, size 0xC
};
// total size: 0x18
class _tagCamInfo {
    // Members
public:
    union { // inferred
        class _tagxCamFollow f; // offset 0x0, size 0x18
        class _tagxCamStatic s; // offset 0x0, size 0x4
        class _tagxCamShoulder sh; // offset 0x0, size 0x14
        class _tagxCamPath p; // offset 0x0, size 0x8
        class _tagxCamStaticFollow sf; // offset 0x0, size 0x4
    };
};
// total size: 0x4
class _tagp2CamStaticAsset {
    // Members
public:
    unsigned int unused; // offset 0x0, size 0x4
};
// total size: 0x20
class iModelTag {
    // Members
public:
    class _xVec3 v; // offset 0x0, size 0xC
    unsigned int matidx; // offset 0xC, size 0x4
    float wt[4]; // offset 0x10, size 0x10
};
enum en_ZPRJ_SOLVER_METHODS {
    ZPRJ_ATGTSOLV_METHA = 0,
    ZPRJ_ATGTSOLV_METHB = 1,
    ZPRJ_ATGTSOLV_METHC = 2,
};
// total size: 0x10
class RwSphere {
    // Members
public:
    class RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
// total size: 0x660
class zPlayerGlobals {
    // Members
public:
    class _zEnt ent; // offset 0x0, size 0xEC
    unsigned int Visible; // offset 0xEC, size 0x4
    unsigned int Health; // offset 0xF0, size 0x4
    signed int Speed; // offset 0xF4, size 0x4
    signed int Sneak; // offset 0xF8, size 0x4
    signed int Teeter; // offset 0xFC, size 0x4
    signed int CanSlip; // offset 0x100, size 0x4
    float SlipFadeTimer; // offset 0x104, size 0x4
    signed int Slide; // offset 0x108, size 0x4
    float SlideTimer; // offset 0x10C, size 0x4
    signed int Stepping; // offset 0x110, size 0x4
    signed int JumpState; // offset 0x114, size 0x4
    signed int LastJumpState; // offset 0x118, size 0x4
    float JumpTimer; // offset 0x11C, size 0x4
    float LookAroundTimer; // offset 0x120, size 0x4
    unsigned int LookAroundRand; // offset 0x124, size 0x4
    unsigned int LastProjectile; // offset 0x128, size 0x4
    float DecelRun; // offset 0x12C, size 0x4
    float DecelRunSpeed; // offset 0x130, size 0x4
    float HotsauceTimer; // offset 0x134, size 0x4
    float LeanLerp; // offset 0x138, size 0x4
    unsigned int HeadbuttHit; // offset 0x13C, size 0x4
    float ScareTimer; // offset 0x140, size 0x4
    class xBase * ScareSource; // offset 0x144, size 0x4
    unsigned int ScareShaggy; // offset 0x148, size 0x4
    float CowerTimer; // offset 0x14C, size 0x4
    float DamageTimer; // offset 0x150, size 0x4
    float ControlOffTimer; // offset 0x154, size 0x4
    float HelmetTimer; // offset 0x158, size 0x4
    unsigned int WorldDisguise; // offset 0x15C, size 0x4
    unsigned int Bounced; // offset 0x160, size 0x4
    float FallDeathTimer; // offset 0x164, size 0x4
    float HeadbuttVel; // offset 0x168, size 0x4
    float HeadbuttTimer; // offset 0x16C, size 0x4
    unsigned int SpecialReceived; // offset 0x170, size 0x4
    class _xEnt * MountChimney; // offset 0x174, size 0x4
    float MountChimOldY; // offset 0x178, size 0x4
    float ShockRadius; // offset 0x17C, size 0x4
    float ShockRadiusOld; // offset 0x180, size 0x4
    float Face_ScareTimer; // offset 0x184, size 0x4
    unsigned int Face_ScareRandom; // offset 0x188, size 0x4
    unsigned int Face_Event; // offset 0x18C, size 0x4
    float Face_EventTimer; // offset 0x190, size 0x4
    float Face_PantTimer; // offset 0x194, size 0x4
    unsigned int Face_AnimSpecific; // offset 0x198, size 0x4
    unsigned int IdleRand; // offset 0x19C, size 0x4
    float IdleMinorTimer; // offset 0x1A0, size 0x4
    float IdleMajorTimer; // offset 0x1A4, size 0x4
    float IdleSitTimer; // offset 0x1A8, size 0x4
    signed int Transparent; // offset 0x1AC, size 0x4
    class _zEnt * FireTarget; // offset 0x1B0, size 0x4
    class _zEnt * DamageSource; // offset 0x1B4, size 0x4
    unsigned int ControlOn; // offset 0x1B8, size 0x4
    unsigned int ControlOnEvent; // offset 0x1BC, size 0x4
    unsigned int AutoMoveSpeed; // offset 0x1C0, size 0x4
    float AutoMoveDist; // offset 0x1C4, size 0x4
    class _xVec3 AutoMoveTarget; // offset 0x1C8, size 0xC
    class xBase * AutoMoveObject; // offset 0x1D4, size 0x4
    class _zEnt * Diggable; // offset 0x1D8, size 0x4
    float DigTimer; // offset 0x1DC, size 0x4
    class zShaggy1Globals Shaggy1; // offset 0x1E0, size 0xE8
    class _zEnt * Shaggy8Call; // offset 0x2C8, size 0x4
    float Shaggy8CallTimer; // offset 0x2CC, size 0x4
    class _zEntHangable * HangFound; // offset 0x2D0, size 0x4
    class _zEntHangable * HangEnt; // offset 0x2D4, size 0x4
    class _zEntHangable * HangEntLast; // offset 0x2D8, size 0x4
    class _xVec3 HangPivot; // offset 0x2DC, size 0xC
    class _xVec3 HangVel; // offset 0x2E8, size 0xC
    float HangLength; // offset 0x2F4, size 0x4
    class _xVec3 HangStartPos; // offset 0x2F8, size 0xC
    float HangStartLerp; // offset 0x304, size 0x4
    class iModelTag HangPawTag[4]; // offset 0x308, size 0x80
    float HangPawOffset; // offset 0x388, size 0x4
    float HangElapsed; // offset 0x38C, size 0x4
    float Jump_CurrGravity; // offset 0x390, size 0x4
    float Jump_HoldTimer; // offset 0x394, size 0x4
    float Jump_ChangeTimer; // offset 0x398, size 0x4
    signed int Jump_CanDouble; // offset 0x39C, size 0x4
    signed int Jump_CanFloat; // offset 0x3A0, size 0x4
    signed int Jump_SpringboardStart; // offset 0x3A4, size 0x4
    class _zPlatform * Jump_Springboard; // offset 0x3A8, size 0x4
    signed int cheat_mode; // offset 0x3AC, size 0x4
    unsigned int Inv_Clue; // offset 0x3B0, size 0x4
    unsigned int Inv_Key; // offset 0x3B4, size 0x4
    unsigned int Inv_Chances; // offset 0x3B8, size 0x4
    unsigned int Inv_ScoobySnacks; // offset 0x3BC, size 0x4
    unsigned int Inv_Specials; // offset 0x3C0, size 0x4
    unsigned int Inv_Mtokens[1]; // offset 0x3C4, size 0x4
    signed int Inv_Ammo[2]; // offset 0x3C8, size 0x8
    signed int Inv_AmmoMax[2]; // offset 0x3D0, size 0x8
    class iModelTag BubbleTag; // offset 0x3D8, size 0x20
    class _xEntDrive drv; // offset 0x3F8, size 0x50
    class xSurface * floor_surf; // offset 0x448, size 0x4
    class _xVec3 floor_norm; // offset 0x44C, size 0xC
    signed int slope; // offset 0x458, size 0x4
    class _xCollis earc_coll; // offset 0x45C, size 0x44
    class _xSphere head_sph; // offset 0x4A0, size 0x10
    class iModelTag center_tag; // offset 0x4B0, size 0x20
    class iModelTag head_tag; // offset 0x4D0, size 0x20
    unsigned int TongueFlags[2]; // offset 0x4F0, size 0x8
    class _xVec3 RootUp; // offset 0x4F8, size 0xC
    class _xVec3 RootUpTarget; // offset 0x504, size 0xC
    class zPlayerStatic s; // offset 0x510, size 0x13C
    class zCheckPoint cp; // offset 0x64C, size 0x14
};
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x18
class _tagxCamFollow {
    // Members
public:
    float rotation; // offset 0x0, size 0x4
    float distance; // offset 0x4, size 0x4
    float height; // offset 0x8, size 0x4
    float rubber_band; // offset 0xC, size 0x4
    float start_speed; // offset 0x10, size 0x4
    float end_speed; // offset 0x14, size 0x4
};
// total size: 0x14
class _xCylinder {
    // Members
public:
    class _xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
enum RwTextureAddressMode {
    rwTEXTUREADDRESSNATEXTUREADDRESS = 0,
    rwTEXTUREADDRESSWRAP = 1,
    rwTEXTUREADDRESSMIRROR = 2,
    rwTEXTUREADDRESSCLAMP = 3,
    rwTEXTUREADDRESSBORDER = 4,
    rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 2147483647,
};

/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026C4A0 -> 0x0026C5CC
*/
// Range: 0x26C4A0 -> 0x26C5CC
// this: r2
void zEntProjectile::PEFX_flight(enum en_ZPRJ_FX_TYPE fxtyp /* r2 */, float dt /* r29+0x70 */) {
    /* anonymous block */ {
        // Range: 0x26C4A0 -> 0x26C5CC
        class _zParEmitterCustomSettings info; // r29+0x10
        class _zParEmitter * emit; // r6
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026C5D0 -> 0x0026C620
*/
// Range: 0x26C5D0 -> 0x26C620
// this: r2
void zEntProjectile::DoEffects(enum en_PROJECTILE_EVENT event /* r2 */, float dt /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x26C5D0 -> 0x26C620
        enum en_ZPRJ_FX_TYPE fxtyp; // r5
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026C620 -> 0x0026C948
*/
// Range: 0x26C620 -> 0x26C948
static signed int ZPRJ_solv_velvec(float grav /* r25 */, float arc_factor /* r24 */, float spd_limit /* r23 */, float dst_range /* r22 */, class _xVec3 * vec_vel /* r19 */) {
    /* anonymous block */ {
        // Range: 0x26C620 -> 0x26C948
        class _xVec3 vec_tmp; // r29+0xB0
        float tym_limit; // r21
        float tym_ariv; // r29+0xC0
        signed int limit_tally; // r16
        unsigned int solcnt; // r2
        float sol[2]; // r29+0xA8
        float c; // r29+0xC0
        float b; // r20
        class _xVec3 vec_tgt; // r29+0x98
        float dst_tgt; // r29+0xC0
        class _xVec3 vec_tgtOrig; // r29+0x88
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026C950 -> 0x0026CCBC
*/
// Range: 0x26C950 -> 0x26CCBC
signed int zEntProjectile_gen_aimer(class zEntProjectile * prj /* r21 */, class ST_CAT_AIMDATA * info /* r20 */, signed int apply /* r19 */) {
    /* anonymous block */ {
        // Range: 0x26C950 -> 0x26CCBC
        class st_ZPRJ_SOLV_METHOD_A * metha; // r17
        class st_ZPRJ_AUTOCALC_INFO autinf; // r29+0x70
        class st_CAT_AIMGRAV * grav; // r16
        class st_CAT_AIMARROW * arrow; // r16
        signed int didit; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026CCC0 -> 0x0026CEE8
*/
// Range: 0x26CCC0 -> 0x26CEE8
void zEntProjectile_softReflect(class _xVec3 * dir_new /* r2 */, class _xVec3 * dir_cur /* r2 */, class _xVec3 * oppose /* r2 */, float scaleMag /* r29 */) {
    /* anonymous block */ {
        // Range: 0x26CCC0 -> 0x26CEE8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026CEF0 -> 0x0026D2E0
*/
// Range: 0x26CEF0 -> 0x26D2E0
float zEntProjectile_colAccum(class zEntProjectile * prj /* r2 */, class _xVec3 * dir_away /* r17 */) {
    /* anonymous block */ {
        // Range: 0x26CEF0 -> 0x26D2E0
        class _xVec3 vec_accum; // r29+0x50
        signed int hit_something; // r16
        float mag_hit; // r29+0x60
        class _xCollis * colrec; // r3
        signed int i; // r3
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026D2E0 -> 0x0026D3E0
*/
// Range: 0x26D2E0 -> 0x26D3E0
static signed int ZPRJ_bounce_calcmove(class zEntProjectile * prj /* r4 */, float dt /* r29+0x20 */, class _xEntFrame * frame /* r16 */) {
    /* anonymous block */ {
        // Range: 0x26D2E0 -> 0x26D3E0
        class st_ZPRJ_CAT_BOUNCEBALL * bounce; // r5
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026D3E0 -> 0x0026D7C0
*/
// Range: 0x26D3E0 -> 0x26D7C0
static signed int ZPRJ_bounce_logix(class zEntProjectile * prj /* r18 */, float dt /* r21 */, class _xEntFrame * frame /* r17 */) {
    /* anonymous block */ {
        // Range: 0x26D3E0 -> 0x26D7C0
        float elastic; // r20
        class _xVec3 vec_accum; // r29+0x50
        class st_ZPRJ_CAT_BOUNCEBALL * bounce; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026D7C0 -> 0x0026D7F8
*/
// Range: 0x26D7C0 -> 0x26D7F8
static signed int ZPRJ_bounce_attach(class zEntProjectile * prj /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26D7C0 -> 0x26D7F8
        class st_ZPRJ_CAT_BOUNCEBALL * bounce; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026D800 -> 0x0026D864
*/
// Range: 0x26D800 -> 0x26D864
static signed int ZPRJ_grav_calcmove(class zEntProjectile * prj /* r2 */, float dt /* r29 */, class _xEntFrame * frame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26D800 -> 0x26D864
        class st_ZPRJ_CAT_GRAVBALL * grav; // r3
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026D870 -> 0x0026D9C8
*/
// Range: 0x26D870 -> 0x26D9C8
static signed int ZPRJ_grav_logix(class zEntProjectile * prj /* r16 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x26D870 -> 0x26D9C8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026D9D0 -> 0x0026D9E4
*/
// Range: 0x26D9D0 -> 0x26D9E4
static signed int ZPRJ_grav_attach(class zEntProjectile * prj /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26D9D0 -> 0x26D9E4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026D9F0 -> 0x0026DDC4
*/
// Range: 0x26D9F0 -> 0x26DDC4
static signed int ZPRJ_arrow_logix(class zEntProjectile * prj /* r17 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x26D9F0 -> 0x26DDC4
        class st_ZPRJ_CAT_ARROW * arrow; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026DDD0 -> 0x0026DDDC
*/
// Range: 0x26DDD0 -> 0x26DDDC
static signed int ZPRJ_arrow_attach(class zEntProjectile * prj /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26DDD0 -> 0x26DDDC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026DDE0 -> 0x0026DE18
*/
// Range: 0x26DDE0 -> 0x26DE18
signed int zEntProjectile_gen_render(class zEntProjectile * prj /* r16 */) {
    /* anonymous block */ {
        // Range: 0x26DDE0 -> 0x26DE18
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026DE20 -> 0x0026DF08
*/
// Range: 0x26DE20 -> 0x26DF08
signed int zEntProjectile_gen_logix(class zEntProjectile * prj /* r16 */, float dt /* r29+0x30 */, class _xEntFrame * frame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26DE20 -> 0x26DF08
        class _xVec3 vec_home; // r29+0x20
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026DF10 -> 0x0026DF5C
*/
// Range: 0x26DF10 -> 0x26DF5C
signed int zEntProjectile_gen_attach(class zEntProjectile * prj /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26DF10 -> 0x26DF5C
        class st_ZPRJ_CATDATA * catd; // r5
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026DF60 -> 0x0026E228
*/
// Range: 0x26DF60 -> 0x26E228
// this: r19
signed int zEntProjectile::LookForFloorRoof() {
    /* anonymous block */ {
        // Range: 0x26DF60 -> 0x26E228
        signed int i; // r4
        class _xCollis * best; // r2
        class _xCollis * cur_rec; // r18
        class _xCollis * ceil; // r17
        class _xCollis * flor; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026E230 -> 0x0026E458
*/
// Range: 0x26E230 -> 0x26E458
// this: r16
signed int zEntProjectile::ZPRJ_render() {
    /* anonymous block */ {
        // Range: 0x26E230 -> 0x26E458
        class _xVec3 vec_tmp; // r29+0x20
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026E460 -> 0x0026E488
*/
// Range: 0x26E460 -> 0x26E488
void ZPRJ_wrap_bupdate(class _xEnt * prjent /* r2 */, class _xVec3 * pos /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26E460 -> 0x26E488
        class zEntProjectile * prj; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026E490 -> 0x0026E678
*/
// Range: 0x26E490 -> 0x26E678
// this: r16
signed int zEntProjectile::DoColCheck(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x26E490 -> 0x26E678
        class st_ZPRJ_CATEGORY_FUNCS * catf; // r5
        signed int doit; // r2
        enum en_ZPRJ_DOCOL_HEURISTICS use_heur; // @ 0x0035861C
        signed char init; // @ 0x00358620
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026E680 -> 0x0026EAAC
*/
// Range: 0x26E680 -> 0x26EAAC
// this: r19
signed int zEntProjectile::ZPRJ_update(class zScene * scn /* r18 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x26E680 -> 0x26EAAC
        signed int rc; // r2
        class _xCollis lcl_xcollis_plyr; // r29+0x560
        class _xEntCollis lcl_xentcollis; // r29+0x60
        class st_ZPRJ_CATEGORY_FUNCS * catf; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026EAB0 -> 0x0026EC0C
*/
// Range: 0x26EAB0 -> 0x26EC0C
// this: r2
void zEntProjectile::OrientToPath(class _xEntFrame * frame /* r16 */, signed int flg_orient /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26EAB0 -> 0x26EC0C
        class _xVec3 * camera_pos; // r2
        signed int opt_orient; // r2
        class _xVec3 vec_tmp; // r29+0x20
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026EC10 -> 0x0026EC34
*/
// Range: 0x26EC10 -> 0x26EC34
// this: r2
void zEntProjectile::OrientSet(signed int orient /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26EC10 -> 0x26EC34
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026EC40 -> 0x0026EE70
*/
// Range: 0x26EC40 -> 0x26EE70
// this: r18
signed int zEntProjectile::SetupFrame(class _xVec3 * pos /* r17 */, class _xVec3 * veloc /* r16 */) {
    /* anonymous block */ {
        // Range: 0x26EC40 -> 0x26EE70
        class _xMat4x3 initmat; // r29+0x40
        class _xVec3 vel_dflt; // r29+0x90
        class _xVec3 pos_dflt; // r29+0x80
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026EE70 -> 0x0026EFB4
*/
// Range: 0x26EE70 -> 0x26EFB4
// this: r17
signed int zEntProjectile::Setup_xEnt() {
    /* anonymous block */ {
        // Range: 0x26EE70 -> 0x26EFB4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026EFC0 -> 0x0026F0DC
*/
// Range: 0x26EFC0 -> 0x26F0DC
// this: r17
signed int zEntProjectile::SetupPrelim(enum en_ZPRJ_CATEGORY cat /* r2 */, unsigned int ptaid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26EFC0 -> 0x26F0DC
        class st_ZPRJ_CATEGORY_PROPS * prop; // r5
        class st_ZPRJ_TYPERECORD * ptype; // r2
        signed int isok; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026F0E0 -> 0x0026F298
*/
// Range: 0x26F0E0 -> 0x26F298
// this: r18
signed int zEntProjectile::Init(enum en_ZPRJ_CATEGORY cat /* r2 */, unsigned int ptypeID /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26F0E0 -> 0x26F298
        signed int rc; // r2
        signed int status; // r17
        class st_ZPRJ_CATEGORY_FUNCS * catf; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026F2A0 -> 0x0026F364
*/
// Range: 0x26F2A0 -> 0x26F364
// this: r16
void zEntProjectile::Recycle() {
    /* anonymous block */ {
        // Range: 0x26F2A0 -> 0x26F364
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026F370 -> 0x0026F408
*/
// Range: 0x26F370 -> 0x26F408
class zEntProjectile * ZPRJ_getNextAvail() {
    /* anonymous block */ {
        // Range: 0x26F370 -> 0x26F408
        class st_PROJECTILE_DEPOT * depot; // r3
        class st_ZPRJ_LINKNODE * link; // r2
        class zEntProjectile * prj; // r16
        signed int warned; // @ 0x0035860C
        signed char init; // @ 0x00358610
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026F410 -> 0x0026F454
*/
// Range: 0x26F410 -> 0x26F454
// this: r2
signed int zEntProjectile::AimAtTarget(class ST_CAT_AIMDATA * info /* r2 */, signed int apply /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26F410 -> 0x26F454
        signed int result; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026F460 -> 0x0026F540
*/
// Range: 0x26F460 -> 0x26F540
// this: r18
signed int zEntProjectile::AssignModel(enum en_ZPRJ_MODEL_INDEX midx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26F460 -> 0x26F540
        signed int have_copy; // r16
        class _xMat4x3 mat_copy; // r29+0x40
        class st_ZPRJ_TYPERECORD * ptype; // r4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026F540 -> 0x0026F5C8
*/
// Range: 0x26F540 -> 0x26F5C8
// this: r2
void zEntProjectile::FlexMatSet(class _xVec3 * rot_euler /* r2 */, float dt /* r29+0x20 */) {
    /* anonymous block */ {
        // Range: 0x26F540 -> 0x26F5C8
        class _xVec3 ang; // r29+0x10
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026F5D0 -> 0x0026F5EC
*/
// Range: 0x26F5D0 -> 0x26F5EC
// this: r2
void zEntProjectile::FlexVecSet(class _xVec3 * vec_flex /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26F5D0 -> 0x26F5EC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026F5F0 -> 0x0026F6C4
*/
// Range: 0x26F5F0 -> 0x26F6C4
// this: r20
signed int zEntProjectile::SendEvent(enum en_PROJECTILE_EVENT event /* r19 */, float dt /* r20 */, void * edata /* r18 */, signed int * res_user /* r17 */) {
    /* anonymous block */ {
        // Range: 0x26F5F0 -> 0x26F6C4
        signed int rc; // r2
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026F6D0 -> 0x0026F780
*/
// Range: 0x26F6D0 -> 0x26F780
// this: r18
signed int zEntProjectile::SendEvent(enum en_PROJECTILE_EVENT event /* r17 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x26F6D0 -> 0x26F780
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026F780 -> 0x0026F834
*/
// Range: 0x26F780 -> 0x26F834
// this: r18
signed int zEntProjectile::SendEvent(enum en_PROJECTILE_EVENT event /* r17 */) {
    /* anonymous block */ {
        // Range: 0x26F780 -> 0x26F834
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026F840 -> 0x0026F918
*/
// Range: 0x26F840 -> 0x26F918
// this: r16
void zEntProjectile::SyncFrame(signed int applyToModel /* r17 */) {
    /* anonymous block */ {
        // Range: 0x26F840 -> 0x26F918
        class _xVec3 * upos; // r2
        class _xVec3 * mpos; // r2
        class _xEnt * ent; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026F920 -> 0x0026F974
*/
// Range: 0x26F920 -> 0x26F974
// this: r16
void zEntProjectile::Abort() {
    /* anonymous block */ {
        // Range: 0x26F920 -> 0x26F974
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026F980 -> 0x0026F9C0
*/
// Range: 0x26F980 -> 0x26F9C0
// this: r2
void zEntProjectile::ColDelaySet(float tym /* r29 */, signed int addto /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26F980 -> 0x26F9C0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026F9C0 -> 0x0026FB20
*/
// Range: 0x26F9C0 -> 0x26FB20
// this: r18
enum en_ZPRJ_STATES zEntProjectile::StateSet(enum en_ZPRJ_STATES state /* r17 */) {
    /* anonymous block */ {
        // Range: 0x26F9C0 -> 0x26FB20
        enum en_ZPRJ_STATES oldstate; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026FB20 -> 0x0026FBD8
*/
// Range: 0x26FB20 -> 0x26FBD8
class zEntProjectile * zEntProjectile_acquire(enum en_ZPRJ_CATEGORY cat /* r19 */, unsigned int ptypeID /* r18 */) {
    /* anonymous block */ {
        // Range: 0x26FB20 -> 0x26FBD8
        signed int rc; // r2
        signed int status; // r17
        class zEntProjectile * prj; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026FBE0 -> 0x0026FC20
*/
// Range: 0x26FBE0 -> 0x26FC20
enum en_ZPRJ_CATEGORY zEntProjectile_catFromPrjType(unsigned int ptypeID /* r2 */, enum en_ZPRJ_CATEGORY prefer /* r16 */) {
    /* anonymous block */ {
        // Range: 0x26FBE0 -> 0x26FC20
        class st_ZPRJ_TYPERECORD * ptype; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026FC20 -> 0x0026FC70
*/
// Range: 0x26FC20 -> 0x26FC70
static class st_ZPRJ_TYPERECORD * ZPRJ_findType(unsigned int aid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26FC20 -> 0x26FC70
        class st_PROJECTILE_DEPOT * depot; // r2
        signed int i; // r5
        class st_ZPRJ_TYPERECORD * da_type; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026FC70 -> 0x0026FD0C
*/
// Range: 0x26FC70 -> 0x26FD0C
static void ZPRJ_insertType(class zProjectileTypeAsset * ptype /* r16 */) {
    /* anonymous block */ {
        // Range: 0x26FC70 -> 0x26FD0C
        signed int idx; // r2
        class st_PROJECTILE_DEPOT * depot; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026FD10 -> 0x0026FDA4
*/
// Range: 0x26FD10 -> 0x26FDA4
void zEntProjectile_poolRender(enum en_ZPRJ_CATEGORY cat /* r18 */) {
    /* anonymous block */ {
        // Range: 0x26FD10 -> 0x26FDA4
        class zEntProjectile * tmpprj; // r17
        class st_ZPRJ_LINKNODE * tmplink; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026FDB0 -> 0x0026FE98
*/
// Range: 0x26FDB0 -> 0x26FE98
signed int zEntProjectile_poolUpdate(class zScene * scn /* r19 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x26FDB0 -> 0x26FE98
        class st_ELIST holdlist; // r29+0x60
        signed int cnt; // r16
        class zEntProjectile * tmpprj; // r2
        class st_ZPRJ_LINKNODE * tmplink; // r18
        class st_PROJECTILE_DEPOT * depot; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026FEA0 -> 0x00270090
*/
// Range: 0x26FEA0 -> 0x270090
void zEntProjectile_prepSystem(signed int num_ptype /* r16 */) {
    /* anonymous block */ {
        // Range: 0x26FEA0 -> 0x270090
        signed int i; // r18
        class st_PROJECTILE_DEPOT * depot; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00270090 -> 0x002700DC
*/
// Range: 0x270090 -> 0x2700DC
void zEntProjectile_sceneFinish() {
    /* anonymous block */ {
        // Range: 0x270090 -> 0x2700DC
        class st_PROJECTILE_DEPOT * depot; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002700E0 -> 0x00270128
*/
// Range: 0x2700E0 -> 0x270128
void zEntProjectile_sceneReset() {
    /* anonymous block */ {
        // Range: 0x2700E0 -> 0x270128
        class st_ZPRJ_LINKNODE * link; // r2
        class st_PROJECTILE_DEPOT * depot; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00270130 -> 0x00270190
*/
// Range: 0x270130 -> 0x270190
void zEntProjectile_scenePrepare() {
    /* anonymous block */ {
        // Range: 0x270130 -> 0x270190
        class st_PROJECTILE_DEPOT * depot; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00270190 -> 0x00270198
*/
// Range: 0x270190 -> 0x270198
void zEntProjectile_registerType(class zProjectileTypeAsset * ptype /* r2 */) {
    /* anonymous block */ {
        // Range: 0x270190 -> 0x270198
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002701A0 -> 0x002701F4
*/
// Range: 0x2701A0 -> 0x2701F4
signed int zEntProjectile_addProps(enum en_ZPRJ_CATEGORY cat /* r2 */, class st_ZPRJ_CATEGORY_PROPS * props /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2701A0 -> 0x2701F4
        signed int isok; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00270200 -> 0x00270288
*/
// Range: 0x270200 -> 0x270288
signed int zEntProjectile_addCat(enum en_ZPRJ_CATEGORY cat /* r2 */, class st_ZPRJ_CATEGORY_FUNCS * funcs /* r2 */) {
    /* anonymous block */ {
        // Range: 0x270200 -> 0x270288
        class st_ZPRJ_CATEGORY_FUNCS * catmap; // r17
        signed int isok; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00270290 -> 0x00270298
*/
// Range: 0x270290 -> 0x270298
void zEntProjectile_Shutdown() {
    /* anonymous block */ {
        // Range: 0x270290 -> 0x270298
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntProjectile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002702A0 -> 0x00270430
*/
// Range: 0x2702A0 -> 0x270430
void zEntProjectile_Startup() {
    /* anonymous block */ {
        // Range: 0x2702A0 -> 0x270430
        class st_ZPRJ_CATEGORY_PROPS prop_bounce; // r29+0x110
        class st_ZPRJ_CATEGORY_PROPS prop_grav; // r29+0x100
        class st_ZPRJ_CATEGORY_PROPS prop_arrow; // r29+0xF0
        class st_ZPRJ_CATEGORY_PROPS prop_gen; // r29+0xE0
        class st_ZPRJ_CATEGORY_FUNCS fmap_bounce; // r29+0xB0
        class st_ZPRJ_CATEGORY_FUNCS fmap_grav; // r29+0x80
        class st_ZPRJ_CATEGORY_FUNCS fmap_arrow; // r29+0x50
        class st_ZPRJ_CATEGORY_FUNCS fmap_gen; // r29+0x20
    }
}


