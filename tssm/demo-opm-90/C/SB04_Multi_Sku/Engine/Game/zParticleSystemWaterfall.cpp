/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParticleSystemWaterfall.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
// total size: 0x14
struct /* @anon6 */ {} zParticleGeneratorWaterfallSplash::__vtable; // size: 0x14, address: 0x635FD0
signed int update_particles(unsigned char *, signed int, class ptank_pool &, float, void *); // size: 0x0, address: 0x4962A0
signed int _rpPTankAtomicDataOffset; // size: 0x4, address: 0x636558
// total size: 0x14
struct /* @anon1 */ {} zParticleGenerator::__vtable; // size: 0x14, address: 0x0
unsigned int gActiveHeap; // size: 0x4, address: 0x638090
signed int update_particles(unsigned char *, signed int, class ptank_pool &, float, void *); // size: 0x0, address: 0x497180
// total size: 0x14
struct /* @anon4 */ {} zParticleGeneratorWaterfallMist::__vtable; // size: 0x14, address: 0x636030
signed int update_particles(unsigned char *, signed int, class ptank_pool &, float, void *); // size: 0x0, address: 0x497FB0
class xColor_tag g_WHITE; // size: 0x4, address: 0x62C8A8
// total size: 0x14
struct /* @anon2 */ {} zParticleGeneratorWaterfall::__vtable; // size: 0x14, address: 0x636090
// total size: 0x34
struct /* @anon5 */ {} zParticleSystemWaterfallSplash::__vtable; // size: 0x34, address: 0x635FF0
// total size: 0x34
struct /* @anon3 */ {} zParticleSystemWaterfallMist::__vtable; // size: 0x34, address: 0x636050
// total size: 0x34
struct /* @anon0 */ {} zParticleSystemWaterfall::__vtable; // size: 0x34, address: 0x6360B0
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
// total size: 0x0
class activity_data {};
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
// total size: 0x10
class RxClusterDefinition {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    char * attributeSet; // offset 0xC, size 0x4
};
// total size: 0x68
class zParticleAsset : public xDynAsset {
    // Members
public:
    unsigned char flags; // offset 0x10, size 0x1
    unsigned char attach_flags; // offset 0x11, size 0x1
    unsigned char motion_flags; // offset 0x12, size 0x1
    unsigned char volume_flags; // offset 0x13, size 0x1
    float rate; // offset 0x14, size 0x4
    unsigned int texture; // offset 0x18, size 0x4
    unsigned char attach_type; // offset 0x1C, size 0x1
    unsigned char motion_type; // offset 0x1D, size 0x1
    unsigned char volume_type; // offset 0x1E, size 0x1
    unsigned char system_type; // offset 0x1F, size 0x1
    class xVec3 location; // offset 0x20, size 0xC
    // total size: 0xC
    class /* @class */ {
        // Members
    public:
        float yaw; // offset 0x0, size 0x4
        float pitch; // offset 0x4, size 0x4
        float roll; // offset 0x8, size 0x4
    } axis; // offset 0x2C, size 0xC
    class attach_data attach; // offset 0x38, size 0x10
    class motion_data motion; // offset 0x48, size 0x14
    class volume_data volume; // offset 0x5C, size 0xC
};
// total size: 0x3C
class zParticleGeneratorWaterfall : public zParticleGenerator {
    // Members
public:
    class zParticleSystemWaterfall * system; // offset 0x1C, size 0x4
    class xEnt * attach_to; // offset 0x20, size 0x4
    float emitted; // offset 0x24, size 0x4
    class zParticleLocator locator; // offset 0x28, size 0x4
    signed int batch_id; // offset 0x2C, size 0x4
    class xVec3 vel_dir; // offset 0x30, size 0xC
};
// total size: 0xC
class xAnimMultiFile : public xAnimMultiFileBase {
    // Members
public:
    class xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
};
// total size: 0x40
class xMat4x3 : public xMat3x3 {
    // Members
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
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
// total size: 0x4C
class asset_data {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    float width_min; // offset 0x4, size 0x4
    float width_max; // offset 0x8, size 0x4
    float vel_min; // offset 0xC, size 0x4
    float vel_max; // offset 0x10, size 0x4
    // total size: 0xC
    class /* @class */ {
        // Members
    public:
        float yaw; // offset 0x0, size 0x4
        float pitch; // offset 0x4, size 0x4
        float roll; // offset 0x8, size 0x4
    } vel_dir; // offset 0x14, size 0xC
    float vel_dir_vary; // offset 0x20, size 0x4
    float height_start_min; // offset 0x24, size 0x4
    float height_start_max; // offset 0x28, size 0x4
    float height_vel; // offset 0x2C, size 0x4
    float height_accel; // offset 0x30, size 0x4
    float height_max; // offset 0x34, size 0x4
    float intensity_min; // offset 0x38, size 0x4
    float intensity_max; // offset 0x3C, size 0x4
    class xColor_tag color; // offset 0x40, size 0x4
    float gravity; // offset 0x44, size 0x4
    float kill_yoffset; // offset 0x48, size 0x4
};
// total size: 0xC
class /* @class */ {
    // Members
public:
    float yaw; // offset 0x0, size 0x4
    float pitch; // offset 0x4, size 0x4
    float roll; // offset 0x8, size 0x4
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
// total size: 0x4
class zParticleLocator {
    // Members
public:
    class activity_data * activity; // offset 0x0, size 0x4
};
// total size: 0x34
class particle_instance {
    // Members
public:
    float age; // offset 0x0, size 0x4
    float age_rate; // offset 0x4, size 0x4
    float x; // offset 0x8, size 0x4
    float y; // offset 0xC, size 0x4
    float z; // offset 0x10, size 0x4
    float w; // offset 0x14, size 0x4
    float dx; // offset 0x18, size 0x4
    float dy; // offset 0x1C, size 0x4
    float dz; // offset 0x20, size 0x4
    float dw; // offset 0x24, size 0x4
    class xColor_tag color; // offset 0x28, size 0x4
    float rot; // offset 0x2C, size 0x4
    float rot_vel; // offset 0x30, size 0x4
};
// total size: 0x10
class xDynAsset : public xBaseAsset {
    // Members
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
// total size: 0x20
class zParticleSystemWaterfall : public zParticleSystem {
    // Members
public:
    class xParticleBatchGroup batch_group; // offset 0x18, size 0x8
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
// total size: 0x18
class xBox {
    // Members
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
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
// total size: 0x0
class xSurface {};
// total size: 0x0
class xGrid {};
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
class xQuat {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x20
class zParticleSystemWaterfallSplash : public zParticleSystem {
    // Members
public:
    class xParticleBatchGroup batch_group; // offset 0x18, size 0x8
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
// total size: 0xC
class xAnimPhysicsData {
    // Members
public:
    class xVec3 * tranTable; // offset 0x0, size 0x4
    float * yawTable; // offset 0x4, size 0x4
    signed int tranCount; // offset 0x8, size 0x4
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
class relative_ordering {
    // Members
public:
    signed int other; // offset 0x0, size 0x4
    unsigned char before_other; // offset 0x4, size 0x1
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
// total size: 0x30
class zParticleGeneratorWaterfallMist : public zParticleGenerator {
    // Members
public:
    class zParticleSystemWaterfallMist * system; // offset 0x1C, size 0x4
    class xEnt * attach_to; // offset 0x20, size 0x4
    float emitted; // offset 0x24, size 0x4
    class zParticleLocator locator; // offset 0x28, size 0x4
    signed int batch_id; // offset 0x2C, size 0x4
};
// total size: 0xC
class /* @class */ {
    // Members
public:
    float t; // offset 0x0, size 0x4
    float u; // offset 0x4, size 0x4
    float v; // offset 0x8, size 0x4
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
// total size: 0x30
class zParticleGeneratorWaterfallSplash : public zParticleGenerator {
    // Members
public:
    class zParticleSystemWaterfallSplash * system; // offset 0x1C, size 0x4
    class xEnt * attach_to; // offset 0x20, size 0x4
    float emitted; // offset 0x24, size 0x4
    class zParticleLocator locator; // offset 0x28, size 0x4
    signed int batch_id; // offset 0x2C, size 0x4
};
// total size: 0x0
class xFFX {};
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
// total size: 0x1C
class zParticleGenerator : public xBase {
    // Members
public:
    class zParticleAsset * asset; // offset 0x10, size 0x4
    signed int flags; // offset 0x14, size 0x4
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
class iEnvMatOrder {
    // Members
public:
    unsigned short jspIndex; // offset 0x0, size 0x2
    unsigned short nodeIndex; // offset 0x2, size 0x2
    signed int matGroup; // offset 0x4, size 0x4
    class RpAtomic * atomic; // offset 0x8, size 0x4
    class xJSPNodeInfo * nodeInfo; // offset 0xC, size 0x4
};
// total size: 0x8
class volume_circle_data {
    // Members
public:
    float radius; // offset 0x0, size 0x4
    float arc_length; // offset 0x4, size 0x4
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
// total size: 0x18
class RwBBox {
    // Members
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
};
// total size: 0x38
class particle_instance {
    // Members
public:
    float age; // offset 0x0, size 0x4
    float age_rate; // offset 0x4, size 0x4
    float x; // offset 0x8, size 0x4
    float y; // offset 0xC, size 0x4
    float z; // offset 0x10, size 0x4
    float w; // offset 0x14, size 0x4
    float dx; // offset 0x18, size 0x4
    float dy; // offset 0x1C, size 0x4
    float dz; // offset 0x20, size 0x4
    float dw; // offset 0x24, size 0x4
    float ay; // offset 0x28, size 0x4
    float ymin; // offset 0x2C, size 0x4
    class xColor_tag color; // offset 0x30, size 0x4
    float rot; // offset 0x34, size 0x4
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
// total size: 0x10
class xLightKit {
    // Members
public:
    unsigned int tagID; // offset 0x0, size 0x4
    unsigned int groupID; // offset 0x4, size 0x4
    unsigned int lightCount; // offset 0x8, size 0x4
    class xLightKitLight * lightList; // offset 0xC, size 0x4
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
// total size: 0x10
class xJSPNodeTree {
    // Members
public:
    signed int numBranchNodes; // offset 0x0, size 0x4
    class xJSPNodeTreeBranch * branchNodes; // offset 0x4, size 0x4
    signed int numLeafNodes; // offset 0x8, size 0x4
    class xJSPNodeTreeLeaf * leafNodes; // offset 0xC, size 0x4
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
// total size: 0xC
class /* @class */ {
    // Members
public:
    float yaw; // offset 0x0, size 0x4
    float pitch; // offset 0x4, size 0x4
    float roll; // offset 0x8, size 0x4
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
// total size: 0xC
class RxOutputSpec {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
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
class render_state {
    // Members
public:
    class RwTexture * texture; // offset 0x0, size 0x4
    unsigned int src_blend; // offset 0x4, size 0x4
    unsigned int dst_blend; // offset 0x8, size 0x4
    signed int flags; // offset 0xC, size 0x4
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
class volume_line_data {
    // Members
public:
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char pad1; // offset 0x1, size 0x1
    unsigned char pad2; // offset 0x2, size 0x1
    unsigned char pad3; // offset 0x3, size 0x1
    float radius; // offset 0x4, size 0x4
    float length; // offset 0x8, size 0x4
};
// total size: 0x20
class xJSPNodeTreeLeaf {
    // Members
public:
    signed int nodeIndex; // offset 0x0, size 0x4
    signed int leafCount; // offset 0x4, size 0x4
    class RwBBox box; // offset 0x8, size 0x18
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
// total size: 0x1
class motion_none_data {};
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
// total size: 0x20
class zParticleSystemWaterfallMist : public zParticleSystem {
    // Members
public:
    class xParticleBatchGroup batch_group; // offset 0x18, size 0x8
};
// total size: 0x10
class xSphere {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
// total size: 0x34
struct /* @anon0 */ {};
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x30
class xShadowSimplePoly {
    // Members
public:
    class xVec3 vert[3]; // offset 0x0, size 0x24
    class xVec3 norm; // offset 0x24, size 0xC
};
// total size: 0x4
class RpSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
};
// total size: 0x8
class xAnimTransitionList {
    // Members
public:
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
};
// total size: 0x34
class asset_data {
    // Members
public:
    float life_min; // offset 0x0, size 0x4
    float life_max; // offset 0x4, size 0x4
    float size_birth; // offset 0x8, size 0x4
    float size_death; // offset 0xC, size 0x4
    float size_vary; // offset 0x10, size 0x4
    float vel_min; // offset 0x14, size 0x4
    float vel_max; // offset 0x18, size 0x4
    float vel_pitch_max; // offset 0x1C, size 0x4
    float rot_vel_min; // offset 0x20, size 0x4
    float rot_vel_max; // offset 0x24, size 0x4
    float intensity_min; // offset 0x28, size 0x4
    float intensity_max; // offset 0x2C, size 0x4
    class xColor_tag color; // offset 0x30, size 0x4
};
// total size: 0x14
class xCylinder {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
// total size: 0x20
class ptank_pool {
    // Members
public:
    class render_state rs; // offset 0x0, size 0x10
    unsigned int order_group; // offset 0x10, size 0x4
    signed int order_index; // offset 0x14, size 0x4
    unsigned int used; // offset 0x18, size 0x4
    class RpAtomic * ptank; // offset 0x1C, size 0x4
};
// total size: 0x14
struct /* @anon1 */ {};
// total size: 0xC
class xJSPMiniLightTie {
    // Members
public:
    class RwLLLink lightInWorldSector; // offset 0x0, size 0x8
    class RpLight * light; // offset 0x8, size 0x4
};
// total size: 0x10
class xRot {
    // Members
public:
    class xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
};
// total size: 0x14
class motion_spiral_data {
    // Members
public:
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char points; // offset 0x1, size 0x1
    unsigned char pad1; // offset 0x2, size 0x1
    unsigned char pad2; // offset 0x3, size 0x1
    float radius_inner; // offset 0x4, size 0x4
    float radius_outer; // offset 0x8, size 0x4
    float duration; // offset 0xC, size 0x4
    float frequency; // offset 0x10, size 0x4
};
// total size: 0x8
class RxPipelineCluster {
    // Members
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
// total size: 0x4
class /* @class */ {
    // Members
public:
    class xVec3 * verts; // offset 0x0, size 0x4
};
// total size: 0x14
struct /* @anon2 */ {};
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
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
class RxClusterRef {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
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
// total size: 0x8
class xAnimMultiFileEntry {
    // Members
public:
    unsigned int ID; // offset 0x0, size 0x4
    class xAnimFile * File; // offset 0x4, size 0x4
};
// total size: 0x4
class xClumpCollBSPVertInfo {
    // Members
public:
    unsigned short atomIndex; // offset 0x0, size 0x2
    unsigned short meshVertIndex; // offset 0x2, size 0x2
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
class RpMaterialList {
    // Members
public:
    class RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
};
// total size: 0x8
class volume_model_data {
    // Members
public:
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char exclude; // offset 0x1, size 0x1
    unsigned char pad1; // offset 0x2, size 0x1
    unsigned char pad2; // offset 0x3, size 0x1
    float expand; // offset 0x4, size 0x4
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
// total size: 0x8
class xVec2 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
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
// total size: 0x30
class ptank_pool__pos_color_size_rot : public ptank_pool {
    // Members
public:
    class xVec3 * pos; // offset 0x20, size 0x4
    class xColor_tag * color; // offset 0x24, size 0x4
    class xVec2 * size; // offset 0x28, size 0x4
    float * rot; // offset 0x2C, size 0x4
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
// total size: 0x10
class xClumpCollBSPBranchNode {
    // Members
public:
    unsigned int leftInfo; // offset 0x0, size 0x4
    unsigned int rightInfo; // offset 0x4, size 0x4
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
};
enum iSndHandle {
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
// total size: 0x28
class xParticleBatchSystem {
    // Members
public:
    enum ptank_group_type pool_type; // offset 0x0, size 0x4
    class render_state rs; // offset 0x4, size 0x10
    unsigned int order_group; // offset 0x14, size 0x4
    signed int order_index; // offset 0x18, size 0x4
    signed int stride; // offset 0x1C, size 0x4
    signed int (* update)(unsigned char *, signed int, class ptank_pool &, float, void *); // offset 0x20, size 0x4
    void * context; // offset 0x24, size 0x4
};
// total size: 0x40
class particle_instance {
    // Members
public:
    class xVec3 loc; // offset 0x0, size 0xC
    float width; // offset 0xC, size 0x4
    class xColor_tag color; // offset 0x10, size 0x4
    class xVec3 vel; // offset 0x14, size 0xC
    float pad1; // offset 0x20, size 0x4
    float pad2; // offset 0x24, size 0x4
    float gravity; // offset 0x28, size 0x4
    float ymin; // offset 0x2C, size 0x4
    float height; // offset 0x30, size 0x4
    float height_vel; // offset 0x34, size 0x4
    float height_accel; // offset 0x38, size 0x4
    float height_max; // offset 0x3C, size 0x4
};
// total size: 0x4
class xAnimMultiFileBase {
    // Members
public:
    unsigned int Count; // offset 0x0, size 0x4
};
// total size: 0xC
class xModelPool {
    // Members
public:
    class xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
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
// total size: 0x14
class motion_data {
    // Members
public:
    union { // inferred
        class motion_none_data none; // offset 0x0, size 0x1
        class motion_spiral_data spiral; // offset 0x0, size 0x14
    };
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
// total size: 0x34
struct /* @anon3 */ {};
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
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
class volume_data {
    // Members
public:
    union { // inferred
        class volume_point_data point; // offset 0x0, size 0x1
        class volume_sphere_data sphere; // offset 0x0, size 0x4
        class volume_circle_data circle; // offset 0x0, size 0x8
        class volume_line_data line; // offset 0x0, size 0xC
        class volume_model_data model; // offset 0x0, size 0x8
    };
};
// total size: 0x2C
class ptank_pool__pos_color_size : public ptank_pool {
    // Members
public:
    class xVec3 * pos; // offset 0x20, size 0x4
    class xColor_tag * color; // offset 0x24, size 0x4
    class xVec2 * size; // offset 0x28, size 0x4
};
// total size: 0x0
class anim_coll_data {};
// total size: 0xC
class RwSurfaceProperties {
    // Members
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
// total size: 0x1
class attach_fixed_data {};
// total size: 0x14
struct /* @anon4 */ {};
// total size: 0x8
class xJSPNodeInfo {
    // Members
public:
    signed int originalMatIndex; // offset 0x0, size 0x4
    unsigned short nodeFlags; // offset 0x4, size 0x2
    signed short sortOrder; // offset 0x6, size 0x2
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
// total size: 0x8
class attach_entity_data {
    // Members
public:
    unsigned int entity; // offset 0x0, size 0x4
    unsigned char bone; // offset 0x4, size 0x1
    unsigned char pad1; // offset 0x5, size 0x1
    unsigned char pad2; // offset 0x6, size 0x1
    unsigned char pad3; // offset 0x7, size 0x1
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
// total size: 0x24
class xBBox {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    class xBox box; // offset 0xC, size 0x18
};
// total size: 0xC
class RxPipelineNodeTopSortData {
    // Members
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class rxReq * req; // offset 0x8, size 0x4
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
// total size: 0x8
class xParticleBatchGroup {
    // Members
public:
    unsigned char * elements; // offset 0x0, size 0x4
    signed int elements_size; // offset 0x4, size 0x4
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
// total size: 0x0
class rxReq {};
// total size: 0x8
class xBaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x34
struct /* @anon5 */ {};
// total size: 0x8
class RwTexCoords {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
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
// total size: 0xC
class RxPipelineRequiresCluster {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
// total size: 0x18
class zParticleSystem {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
    signed int need; // offset 0x4, size 0x4
    class zParticleGenerator * * generators; // offset 0x8, size 0x4
    signed int generators_size; // offset 0xC, size 0x4
    signed int generators_active; // offset 0x10, size 0x4
};
// total size: 0x10
class attach_entity_tag_data {
    // Members
public:
    unsigned int entity; // offset 0x0, size 0x4
    class xVec3 tag; // offset 0x4, size 0xC
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
// total size: 0x38
class asset_data {
    // Members
public:
    float life_min; // offset 0x0, size 0x4
    float life_max; // offset 0x4, size 0x4
    float size_birth; // offset 0x8, size 0x4
    float size_death; // offset 0xC, size 0x4
    float size_vary; // offset 0x10, size 0x4
    float vel_min; // offset 0x14, size 0x4
    float vel_max; // offset 0x18, size 0x4
    float vel_pitch_min; // offset 0x1C, size 0x4
    float vel_pitch_max; // offset 0x20, size 0x4
    float intensity_min; // offset 0x24, size 0x4
    float intensity_max; // offset 0x28, size 0x4
    class xColor_tag color; // offset 0x2C, size 0x4
    float gravity; // offset 0x30, size 0x4
    float kill_yoffset; // offset 0x34, size 0x4
};
// total size: 0x14
struct /* @anon6 */ {};
// total size: 0x1
class volume_point_data {};
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0xC
class tri_data {
    // Members
public:
    unsigned int index; // offset 0x0, size 0x4
    float r; // offset 0x4, size 0x4
    float d; // offset 0x8, size 0x4
};
enum ptank_group_type {
    PGT_COLOR_MAT = 0,
    PGT_COLOR_MAT_UV2 = 1,
    PGT_POS_COLOR_SIZE = 2,
    PGT_POS_COLOR_SIZE_UV2 = 3,
    PGT_POS_COLOR_SIZE_ROT = 4,
    PGT_POS_COLOR_SIZE_ROT_UV2 = 5,
    MAX_PGT = 6,
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
// total size: 0x8
class RpTriangle {
    // Members
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    unsigned short matIndex; // offset 0x6, size 0x2
};
// total size: 0x10
class attach_data {
    // Members
public:
    union { // inferred
        class attach_fixed_data fixed; // offset 0x0, size 0x1
        class attach_entity_data entity; // offset 0x0, size 0x8
        class attach_entity_tag_data entity_tag; // offset 0x0, size 0x10
    };
};
// total size: 0x4
class volume_sphere_data {
    // Members
public:
    float radius; // offset 0x0, size 0x4
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

/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParticleSystemWaterfall.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00495A40 -> 0x00495A6C
*/
// Range: 0x495A40 -> 0x495A6C
// this: r16
void zParticleGeneratorWaterfallSplash::deactivate() {
    /* anonymous block */ {
        // Range: 0x495A40 -> 0x495A6C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParticleSystemWaterfall.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00495A70 -> 0x00495AA4
*/
// Range: 0x495A70 -> 0x495AA4
// this: r16
void zParticleGeneratorWaterfallSplash::activate() {
    /* anonymous block */ {
        // Range: 0x495A70 -> 0x495AA4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParticleSystemWaterfall.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00495AB0 -> 0x00495B14
*/
// Range: 0x495AB0 -> 0x495B14
// this: r16
void zParticleGeneratorWaterfallSplash::reset() {
    /* anonymous block */ {
        // Range: 0x495AB0 -> 0x495B14
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParticleSystemWaterfall.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00495B20 -> 0x00495C00
*/
// Range: 0x495B20 -> 0x495C00
// this: r16
void zParticleGeneratorWaterfallSplash::create(class zParticleSystemWaterfallSplash & system /* r18 */, class zParticleAsset & asset /* r17 */) {
    /* anonymous block */ {
        // Range: 0x495B20 -> 0x495C00
        class xParticleBatchSystem batch; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParticleSystemWaterfall.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00495C00 -> 0x0049629C
*/
// Range: 0x495C00 -> 0x49629C
// this: r17
void zParticleGeneratorWaterfallSplash::update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x495C00 -> 0x49629C
        signed int emit; // r16
        class asset_data & a; // r18
        class xMat4x3 & mat; // r2
        float life_min; // r27
        float life_delta; // r26
        float size_birth; // r25
        float size_death; // r24
        float size_vary; // r29+0xCC
        float ay; // r29+0xC8
        float ymin; // r29+0xC4
        float intensity_min; // r23
        float intensity_delta; // r29+0xC0
        float red; // r29+0xBC
        float green; // r29+0xB8
        float blue; // r29+0xB4
        unsigned char alpha; // r2
        float vel_min; // r22
        float vel_delta; // r29+0xB0
        float vel_pitch_min; // r21
        float vel_pitch_delta; // r29+0xAC
        class xVec3 center; // r29+0xD0
        float cx; // r29+0xA8
        float cz; // r29+0xA4
        unsigned char * mem; // r29+0xDC
        signed int have; // r21
        class particle_instance * p; // r20
        class particle_instance * endp; // r2
        float scale; // r29+0xE0
        float intensity; // r2
        float vel; // r20
        float vel_pitch; // r28
        float dx; // r31
        float dz; // r30
        float dist2; // r29+0xE0
        float cp; // r29+0xE0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParticleSystemWaterfall.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004962A0 -> 0x004967BC
*/
// Range: 0x4962A0 -> 0x4967BC
signed int update_particles(unsigned char * mem /* r20 */, signed int count /* r2 */, class ptank_pool & apool /* r2 */, float dt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x4962A0 -> 0x4967BC
        class ptank_pool__pos_color_size_rot & pool; // r19
        class particle_instance * p; // r18
        class particle_instance * end; // r17
        float t; // r20
        float age; // r29+0xC0
        float y; // r29+0xC0
        float w; // r29+0xC0
        class xVec4 v; // r29+0x90
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParticleSystemWaterfall.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004967C0 -> 0x004967C8
*/
// Range: 0x4967C0 -> 0x4967C8
signed int get_asset_size() {
    /* anonymous block */ {
        // Range: 0x4967C0 -> 0x4967C8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParticleSystemWaterfall.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004967D0 -> 0x00496850
*/
// Range: 0x4967D0 -> 0x496850
// this: r2
void zParticleSystemWaterfallSplash::update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x4967D0 -> 0x496850
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParticleSystemWaterfall.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00496850 -> 0x00496858
*/
// Range: 0x496850 -> 0x496858
// this: r2
void zParticleSystemWaterfallSplash::scene_enter() {
    /* anonymous block */ {
        // Range: 0x496850 -> 0x496858
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParticleSystemWaterfall.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00496860 -> 0x004968CC
*/
// Range: 0x496860 -> 0x4968CC
// this: r18
class zParticleGenerator * zParticleSystemWaterfallSplash::create_generator(class zParticleAsset & asset /* r17 */) {
    /* anonymous block */ {
        // Range: 0x496860 -> 0x4968CC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParticleSystemWaterfall.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004968D0 -> 0x004968FC
*/
// Range: 0x4968D0 -> 0x4968FC
// this: r16
void zParticleGeneratorWaterfallMist::deactivate() {
    /* anonymous block */ {
        // Range: 0x4968D0 -> 0x4968FC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParticleSystemWaterfall.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00496900 -> 0x00496934
*/
// Range: 0x496900 -> 0x496934
// this: r16
void zParticleGeneratorWaterfallMist::activate() {
    /* anonymous block */ {
        // Range: 0x496900 -> 0x496934
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParticleSystemWaterfall.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00496940 -> 0x004969A4
*/
// Range: 0x496940 -> 0x4969A4
// this: r16
void zParticleGeneratorWaterfallMist::reset() {
    /* anonymous block */ {
        // Range: 0x496940 -> 0x4969A4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParticleSystemWaterfall.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004969B0 -> 0x00496A90
*/
// Range: 0x4969B0 -> 0x496A90
// this: r16
void zParticleGeneratorWaterfallMist::create(class zParticleSystemWaterfallMist & system /* r18 */, class zParticleAsset & asset /* r17 */) {
    /* anonymous block */ {
        // Range: 0x4969B0 -> 0x496A90
        class xParticleBatchSystem batch; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParticleSystemWaterfall.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00496A90 -> 0x0049717C
*/
// Range: 0x496A90 -> 0x49717C
// this: r17
void zParticleGeneratorWaterfallMist::update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x496A90 -> 0x49717C
        signed int emit; // r16
        class asset_data & a; // r2
        float life_min; // r27
        float life_delta; // r26
        float size_birth; // r25
        float size_death; // r24
        float size_vary; // r29+0xCC
        float intensity_min; // r23
        float intensity_delta; // r29+0xC8
        float red; // r29+0xC4
        float green; // r29+0xC0
        float blue; // r29+0xBC
        unsigned char alpha; // r2
        float rot_vel_min; // r22
        float rot_vel_delta; // r29+0xB8
        float vel_min; // r21
        float vel_delta; // r29+0xB4
        float vel_pitch_delta; // r29+0xB0
        class xVec3 center; // r29+0xD0
        float cx; // r29+0xAC
        float cz; // r29+0xA8
        unsigned char * mem; // r29+0xDC
        signed int have; // r21
        class particle_instance * p; // r20
        class particle_instance * endp; // r2
        float scale; // r29+0xE0
        float intensity; // r2
        float vel; // r20
        float vel_pitch; // r28
        float dx; // r31
        float dz; // r30
        float dist2; // r29+0xE0
        float cp; // r29+0xE0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParticleSystemWaterfall.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00497180 -> 0x004976A0
*/
// Range: 0x497180 -> 0x4976A0
signed int update_particles(unsigned char * mem /* r20 */, signed int count /* r2 */, class ptank_pool & apool /* r2 */, float dt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x497180 -> 0x4976A0
        class ptank_pool__pos_color_size_rot & pool; // r19
        class particle_instance * p; // r18
        class particle_instance * end; // r17
        float t; // r20
        float age; // r29+0xC0
        class xVec4 v; // r29+0x90
        float t2; // r29+0xC0
        float alpha; // r4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParticleSystemWaterfall.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004976A0 -> 0x004976A8
*/
// Range: 0x4976A0 -> 0x4976A8
signed int get_asset_size() {
    /* anonymous block */ {
        // Range: 0x4976A0 -> 0x4976A8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParticleSystemWaterfall.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004976B0 -> 0x00497730
*/
// Range: 0x4976B0 -> 0x497730
// this: r2
void zParticleSystemWaterfallMist::update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x4976B0 -> 0x497730
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParticleSystemWaterfall.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00497730 -> 0x00497738
*/
// Range: 0x497730 -> 0x497738
// this: r2
void zParticleSystemWaterfallMist::scene_enter() {
    /* anonymous block */ {
        // Range: 0x497730 -> 0x497738
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParticleSystemWaterfall.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00497740 -> 0x004977AC
*/
// Range: 0x497740 -> 0x4977AC
// this: r18
class zParticleGenerator * zParticleSystemWaterfallMist::create_generator(class zParticleAsset & asset /* r17 */) {
    /* anonymous block */ {
        // Range: 0x497740 -> 0x4977AC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParticleSystemWaterfall.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004977B0 -> 0x004977DC
*/
// Range: 0x4977B0 -> 0x4977DC
// this: r16
void zParticleGeneratorWaterfall::deactivate() {
    /* anonymous block */ {
        // Range: 0x4977B0 -> 0x4977DC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParticleSystemWaterfall.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004977E0 -> 0x00497814
*/
// Range: 0x4977E0 -> 0x497814
// this: r16
void zParticleGeneratorWaterfall::activate() {
    /* anonymous block */ {
        // Range: 0x4977E0 -> 0x497814
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParticleSystemWaterfall.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00497820 -> 0x00497884
*/
// Range: 0x497820 -> 0x497884
// this: r16
void zParticleGeneratorWaterfall::reset() {
    /* anonymous block */ {
        // Range: 0x497820 -> 0x497884
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParticleSystemWaterfall.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00497890 -> 0x004979D4
*/
// Range: 0x497890 -> 0x4979D4
// this: r17
void zParticleGeneratorWaterfall::create(class zParticleSystemWaterfall & system /* r18 */, class zParticleAsset & asset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x497890 -> 0x4979D4
        class xParticleBatchSystem batch; // r29+0x50
        class asset_data & a; // r2
        float yaw; // r29+0x80
        float pitch; // r29+0x80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParticleSystemWaterfall.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004979E0 -> 0x00497FA4
*/
// Range: 0x4979E0 -> 0x497FA4
// this: r17
void zParticleGeneratorWaterfall::update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x4979E0 -> 0x497FA4
        signed int emit; // r16
        class asset_data & a; // r2
        class xMat4x3 & mat; // r2
        class xVec3 vel_dir; // r29+0xB8
        float width_min; // r31
        float width_delta; // r30
        float vel_min; // r29
        float vel_delta; // r28
        float vel_dir_vary; // r27
        float intensity_min; // r26
        float intensity_delta; // r25
        float red; // r24
        float green; // r23
        float blue; // r22
        unsigned char alpha; // r2
        float gravity; // r21
        float ymin; // r29+0xB4
        float height_start_min; // r20
        float height_start_delta; // r29+0xB0
        float height_vel; // r29+0xAC
        float height_accel; // r29+0xA8
        float height_max; // r29+0xA4
        unsigned char * mem; // r29+0xCC
        signed int have; // r21
        class particle_instance * p; // r20
        class particle_instance * endp; // r2
        float intensity; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParticleSystemWaterfall.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00497FB0 -> 0x0049839C
*/
// Range: 0x497FB0 -> 0x49839C
signed int update_particles(unsigned char * mem /* r20 */, signed int count /* r2 */, class ptank_pool & apool /* r2 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x497FB0 -> 0x49839C
        class ptank_pool__pos_color_size & pool; // r19
        class particle_instance * p; // r18
        class particle_instance * end; // r17
        class xVec4 v; // r29+0x90
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParticleSystemWaterfall.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004983A0 -> 0x004983A8
*/
// Range: 0x4983A0 -> 0x4983A8
signed int get_asset_size() {
    /* anonymous block */ {
        // Range: 0x4983A0 -> 0x4983A8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParticleSystemWaterfall.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004983B0 -> 0x00498430
*/
// Range: 0x4983B0 -> 0x498430
// this: r2
void zParticleSystemWaterfall::update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x4983B0 -> 0x498430
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParticleSystemWaterfall.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00498430 -> 0x00498438
*/
// Range: 0x498430 -> 0x498438
// this: r2
void zParticleSystemWaterfall::scene_enter() {
    /* anonymous block */ {
        // Range: 0x498430 -> 0x498438
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParticleSystemWaterfall.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00498440 -> 0x004984AC
*/
// Range: 0x498440 -> 0x4984AC
// this: r18
class zParticleGenerator * zParticleSystemWaterfall::create_generator(class zParticleAsset & asset /* r17 */) {
    /* anonymous block */ {
        // Range: 0x498440 -> 0x4984AC
    }
}


