/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char * g_xCollis_FMT; // size: 0x4, address: 0x0
static signed int sCollidingJSP; // size: 0x4, address: 0x60897C
static class xCapsule * cb_capsule; // size: 0x4, address: 0x608980
static float cb_dist; // size: 0x4, address: 0x0
static class xCapsule * cb_cap; // size: 0x4, address: 0x0
signed int xcollide_docam; // size: 0x4, address: 0x0
static class xRay3 cbray; // size: 0x24, address: 0x627470
static unsigned char cbnumcs; // size: 0x1, address: 0x608984
static unsigned char cbmaxcs; // size: 0x1, address: 0x608988
static unsigned char FLOOR; // size: 0x1, address: 0x60898C
static unsigned char NEXT2; // size: 0x1, address: 0x608990
static unsigned char OTHER; // size: 0x1, address: 0x608994
static class RpIntersection cbisx_local; // size: 0x1C, address: 0x6274A0
static float cbath; // size: 0x4, address: 0x608998
static class xMat3x3 * cbmat; // size: 0x4, address: 0x0
class RpCollisionTriangle * sphereHitsEnvCB(class RpIntersection *, class RpWorldSector *, class RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x17AD30
class RpCollisionTriangle * sphereHitsEnv3CB(class RpIntersection *, class RpWorldSector *, class RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x174430
class RpCollisionTriangle * sphereHitsEnv4CB(class RpIntersection *, class RpWorldSector *, class RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x0
class RpMorphTarget anim_coll_old_mt; // size: 0x1C, address: 0x648270
class RpCollisionTriangle * sphereHitsModel3CB(class RpIntersection *, class RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x174410
class RpCollisionTriangle * rayHitsEnvCB(class RpIntersection *, class RpWorldSector *, class RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x1752D0
class RpCollisionTriangle * rayHitsModelBackwardCB(class RpIntersection *, class RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x175400
class RpCollisionTriangle * rayHitsModelCB(class RpIntersection *, class RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x1752B0
class xVec3 m_UnitAxisY; // size: 0xC, address: 0x5E7C60
class xVec3 m_Null; // size: 0xC, address: 0x5E7C40
class xMat4x3 g_I3; // size: 0x40, address: 0x643E60
class xVec3 g_O3; // size: 0xC, address: 0x5E77C0
void xCapsuleHitsEnt(class xScene *, class xRay3 *, class xQCData *, class xEnt *, void *); // size: 0x0, address: 0x0
class xGrid colls_oso_grid; // size: 0x38, address: 0x66BC20
class xGrid colls_grid; // size: 0x38, address: 0x66BBE0
class xQCControl xqc_def_ctrl; // size: 0x3C, address: 0x653BA0
signed int LeafNodeCapsuleIntersect(class xClumpCollBSPTriangle *, void *); // size: 0x0, address: 0x179920
class RpCollisionTriangle * CapsuleEnvClosestToStartCB(class RpIntersection *, class RpWorldSector *, class RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x0
class RpCollisionTriangle * CapsuleEnvClosestToLineCB(class RpIntersection *, class RpWorldSector *, class RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x179B60
class RpCollisionTriangle * CapsuleModelClosestToLineCB(class RpIntersection *, class RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x179B40
unsigned char xClumpColl_FilterFlagsAllMask; // size: 0x1, address: 0x608C3C
unsigned char xClumpColl_FilterFlagsAllEqual; // size: 0x1, address: 0x607844
unsigned char xClumpColl_FilterFlags; // size: 0x1, address: 0x607840
signed int xParabolaEnvCB(class xClumpCollBSPTriangle *, void *); // size: 0x0, address: 0x17A220
class RpCollisionTriangle * sphereHitsModelCB(class RpIntersection *, class RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x17AD10
// total size: 0x14
class xCylinder {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
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
// total size: 0x18
class xBox {
    // Members
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
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
// total size: 0x40
class xMat4x3 : public xMat3x3 {
    // Members
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
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
// total size: 0x1C
class RpMorphTarget {
    // Members
public:
    class RpGeometry * parentGeom; // offset 0x0, size 0x4
    class RwSphere boundingSphere; // offset 0x4, size 0x10
    class RwV3d * verts; // offset 0x14, size 0x4
    class RwV3d * normals; // offset 0x18, size 0x4
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
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x3C
class xQCControl {
    // Members
public:
    float world_xmin; // offset 0x0, size 0x4
    float world_ymin; // offset 0x4, size 0x4
    float world_zmin; // offset 0x8, size 0x4
    float world_xmax; // offset 0xC, size 0x4
    float world_ymax; // offset 0x10, size 0x4
    float world_zmax; // offset 0x14, size 0x4
    float world_xsz; // offset 0x18, size 0x4
    float world_ysz; // offset 0x1C, size 0x4
    float world_zsz; // offset 0x20, size 0x4
    float scale_x; // offset 0x24, size 0x4
    float scale_y; // offset 0x28, size 0x4
    float scale_z; // offset 0x2C, size 0x4
    float center_x; // offset 0x30, size 0x4
    float center_y; // offset 0x34, size 0x4
    float center_z; // offset 0x38, size 0x4
};
// total size: 0x24
class xBBox {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    class xBox box; // offset 0xC, size 0x18
};
// total size: 0x4
class IntersectionCallBack {
    // Members
public:
    union { // inferred
        class RpWorldSector * (* sectorCB)(class RpIntersection *, class RpWorldSector *, void *); // offset 0x0, size 0x4
        class RpCollisionTriangle * (* worldCB)(class RpIntersection *, class RpWorldSector *, class RpCollisionTriangle *, float, void *); // offset 0x0, size 0x4
        class RpAtomic * (* atomicCB)(class RpIntersection *, class RpWorldSector *, class RpAtomic *, float, void *); // offset 0x0, size 0x4
    };
};
// total size: 0x18
class xClumpCollV3dGradient {
    // Members
public:
    float dydx; // offset 0x0, size 0x4
    float dzdx; // offset 0x4, size 0x4
    float dxdy; // offset 0x8, size 0x4
    float dzdy; // offset 0xC, size 0x4
    float dxdz; // offset 0x10, size 0x4
    float dydz; // offset 0x14, size 0x4
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
// total size: 0x28
class RpCollisionTriangle {
    // Members
public:
    class RwV3d normal; // offset 0x0, size 0xC
    class RwV3d point; // offset 0xC, size 0xC
    signed int index; // offset 0x18, size 0x4
    class RwV3d * vertices[3]; // offset 0x1C, size 0xC
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
// total size: 0x1C
class RpIntersection {
    // Members
public:
    class RpIntersectData t; // offset 0x0, size 0x18
    enum RpIntersectType type; // offset 0x18, size 0x4
};
// total size: 0x8
class xAnimTransitionList {
    // Members
public:
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
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
// total size: 0x18
class RwBBox {
    // Members
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
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
// total size: 0xC
class tri_data {
    // Members
public:
    unsigned int index; // offset 0x0, size 0x4
    float r; // offset 0x4, size 0x4
    float d; // offset 0x8, size 0x4
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
class xSphere {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
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
// total size: 0x20
class xSphereHitsModel_context {
    // Members
public:
    class xCollis * coll; // offset 0x0, size 0x4
    class RpIntersection localx; // offset 0x4, size 0x1C
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
// total size: 0x24
class xParabola {
    // Members
public:
    class xVec3 initPos; // offset 0x0, size 0xC
    class xVec3 initVel; // offset 0xC, size 0xC
    float gravity; // offset 0x18, size 0x4
    float minTime; // offset 0x1C, size 0x4
    float maxTime; // offset 0x20, size 0x4
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
// total size: 0xC
class RxOutputSpec {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
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
// total size: 0x38
class xGrid {
    // Members
public:
    unsigned char ingrid_id; // offset 0x0, size 0x1
    unsigned char pad[3]; // offset 0x1, size 0x3
    unsigned short nx; // offset 0x4, size 0x2
    unsigned short nz; // offset 0x6, size 0x2
    float minx; // offset 0x8, size 0x4
    float minz; // offset 0xC, size 0x4
    float maxx; // offset 0x10, size 0x4
    float maxz; // offset 0x14, size 0x4
    float csizex; // offset 0x18, size 0x4
    float csizez; // offset 0x1C, size 0x4
    float inv_csizex; // offset 0x20, size 0x4
    float inv_csizez; // offset 0x24, size 0x4
    float maxr; // offset 0x28, size 0x4
    class xGridBound * * cells; // offset 0x2C, size 0x4
    class xGridBound * other; // offset 0x30, size 0x4
    signed int iter_active; // offset 0x34, size 0x4
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
// total size: 0x4
class /* @class */ {
    // Members
public:
    class xVec3 * verts; // offset 0x0, size 0x4
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
// total size: 0x70
class xEnv {
    // Members
public:
    class iEnv * geom; // offset 0x0, size 0x4
    class iEnv ienv; // offset 0x10, size 0x50
    class xLightKit * lightKit; // offset 0x60, size 0x4
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
// total size: 0x10
class RwSphere {
    // Members
public:
    class RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
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
// total size: 0x8
class xAnimMultiFileEntry {
    // Members
public:
    unsigned int ID; // offset 0x0, size 0x4
    class xAnimFile * File; // offset 0x4, size 0x4
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
// total size: 0x18
class RwLine {
    // Members
public:
    class RwV3d start; // offset 0x0, size 0xC
    class RwV3d end; // offset 0xC, size 0xC
};
// total size: 0x4
class RpSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
};
// total size: 0x8
class xJSPNodeInfo {
    // Members
public:
    signed int originalMatIndex; // offset 0x0, size 0x4
    unsigned short nodeFlags; // offset 0x4, size 0x2
    signed short sortOrder; // offset 0x6, size 0x2
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
// total size: 0x18
class ParabolaCBData {
    // Members
public:
    class xParabola * p; // offset 0x0, size 0x4
    class xVec3 N; // offset 0x4, size 0xC
    float d; // offset 0x10, size 0x4
    class xCollis * colls; // offset 0x14, size 0x4
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
// total size: 0x20
class xJSPNodeTreeLeaf {
    // Members
public:
    signed int nodeIndex; // offset 0x0, size 0x4
    signed int leafCount; // offset 0x4, size 0x4
    class RwBBox box; // offset 0x8, size 0x18
};
enum Dimension {
    XDIM = 0,
    YDIM = 1,
    ZDIM = 2,
};
// total size: 0x8
class RxPipelineCluster {
    // Members
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
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
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
// total size: 0xC
class RxClusterRef {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
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
class CallBackParam {
    // Members
public:
    class RpIntersection * intersection; // offset 0x0, size 0x4
    class IntersectionCallBack u; // offset 0x4, size 0x4
    void * data; // offset 0x8, size 0x4
};
// total size: 0x1C
class xCapsule {
    // Members
public:
    class xVec3 start; // offset 0x0, size 0xC
    class xVec3 end; // offset 0xC, size 0xC
    float r; // offset 0x18, size 0x4
};
// total size: 0x4
class xAnimMultiFileBase {
    // Members
public:
    unsigned int Count; // offset 0x0, size 0x4
};
// total size: 0x8
class xVec2 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x30
class xShadowSimplePoly {
    // Members
public:
    class xVec3 vert[3]; // offset 0x0, size 0x24
    class xVec3 norm; // offset 0x24, size 0xC
};
// total size: 0xC
class xModelPool {
    // Members
public:
    class xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
};
// total size: 0xC
class xJSPMiniLightTie {
    // Members
public:
    class RwLLLink lightInWorldSector; // offset 0x0, size 0x8
    class RpLight * light; // offset 0x8, size 0x4
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
class xModelPipe {
    // Members
public:
    unsigned int Flags; // offset 0x0, size 0x4
    unsigned char Layer; // offset 0x4, size 0x1
    unsigned char AlphaDiscard; // offset 0x5, size 0x1
    unsigned short PipePad; // offset 0x6, size 0x2
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
// total size: 0x24
class xRay3 {
    // Members
public:
    class xVec3 origin; // offset 0x0, size 0xC
    class xVec3 dir; // offset 0xC, size 0xC
    float min_t; // offset 0x18, size 0x4
    float max_t; // offset 0x1C, size 0x4
    signed int flags; // offset 0x20, size 0x4
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
// total size: 0xC
class /* @class */ {
    // Members
public:
    float t; // offset 0x0, size 0x4
    float u; // offset 0x4, size 0x4
    float v; // offset 0x8, size 0x4
};
// total size: 0xC
class xAnimMultiFile : public xAnimMultiFileBase {
    // Members
public:
    class xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
};
// total size: 0x4
class xClumpCollBSPVertInfo {
    // Members
public:
    unsigned short atomIndex; // offset 0x0, size 0x2
    unsigned short meshVertIndex; // offset 0x2, size 0x2
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
// total size: 0x10
class xClumpCollBSPTree {
    // Members
public:
    signed int numBranchNodes; // offset 0x0, size 0x4
    class xClumpCollBSPBranchNode * branchNodes; // offset 0x4, size 0x4
    signed int numTriangles; // offset 0x8, size 0x4
    class xClumpCollBSPTriangle * triangles; // offset 0xC, size 0x4
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
class RpTriangle {
    // Members
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    unsigned short matIndex; // offset 0x6, size 0x2
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
class RwResEntry {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
    signed int size; // offset 0x8, size 0x4
    void * owner; // offset 0xC, size 0x4
    class RwResEntry * * ownerRef; // offset 0x10, size 0x4
    void (* destroyNotify)(class RwResEntry *); // offset 0x14, size 0x4
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
// total size: 0x10
class xClumpCollBSPBranchNode {
    // Members
public:
    unsigned int leftInfo; // offset 0x0, size 0x4
    unsigned int rightInfo; // offset 0x4, size 0x4
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
// total size: 0xC
class RwSurfaceProperties {
    // Members
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
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
enum iSndHandle {
};
// total size: 0x10
class xQuat {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
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
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
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
// total size: 0x0
class anim_coll_data {};
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
// total size: 0xC
class RxPipelineNodeTopSortData {
    // Members
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class rxReq * req; // offset 0x8, size 0x4
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
enum _xCollsIdx {
    k_XCOLLS_IDX_FLOOR = 0,
    k_XCOLLS_IDX_CEIL = 1,
    k_XCOLLS_IDX_FRONT = 2,
    k_XCOLLS_IDX_LEFT = 3,
    k_XCOLLS_IDX_REAR = 4,
    k_XCOLLS_IDX_RIGHT = 5,
    k_XCOLLS_IDX_COUNT = 6,
};
// total size: 0x0
class rxReq {};
enum RpIntersectType {
    rpINTERSECTNONE = 0,
    rpINTERSECTLINE = 1,
    rpINTERSECTPOINT = 2,
    rpINTERSECTSPHERE = 3,
    rpINTERSECTBOX = 4,
    rpINTERSECTATOMIC = 5,
    rpINTERSECTTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x0
class xSurface {};
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
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
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
// total size: 0x10
class xRot {
    // Members
public:
    class xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
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
// total size: 0x18
class RpIntersectData {
    // Members
public:
    union { // inferred
        class RwLine line; // offset 0x0, size 0x18
        class RwV3d point; // offset 0x0, size 0xC
        class RwSphere sphere; // offset 0x0, size 0x10
        class RwBBox box; // offset 0x0, size 0x18
        void * object; // offset 0x0, size 0x4
    };
};

/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001739D0 -> 0x00173B4C
*/
// Range: 0x1739D0 -> 0x173B4C
unsigned int xSphereHitsEnv(class xSphere * b /* r21 */, class xEnv * env /* r20 */, class xCollis * coll /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1739D0 -> 0x173B4C
        class RpIntersection isx; // r29+0x70
        signed int i; // r18
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00173B50 -> 0x00173EF4
*/
// Range: 0x173B50 -> 0x173EF4
signed int xSphereHitsEnv3(class xSphere * b /* r30 */, class xEnv * env /* r21 */, class xCollis * colls /* r20 */, unsigned char ncolls /* r16 */, float sth /* r20 */) {
    /* anonymous block */ {
        // Range: 0x173B50 -> 0x173EF4
        class RpIntersection isx; // r29+0xC0
        unsigned char idx; // r6
        signed int i; // r22
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00173F00 -> 0x0017440C
*/
// Range: 0x173F00 -> 0x17440C
signed int xSphereHitsModel3(class xSphere * b /* r20 */, class xModelInstance * m /* r19 */, class xCollis * colls /* r18 */, unsigned char ncolls /* r21 */, float sth /* r21 */) {
    /* anonymous block */ {
        // Range: 0x173F00 -> 0x17440C
        class RpIntersection isx; // r29+0xB0
        unsigned char idx; // r6
        unsigned char i; // r5
        class xMat4x3 * mat; // r17
        class RwFrame * frame; // r2
        float mscale; // r20
        class xMat3x3 mnormal; // r29+0x80
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00174410 -> 0x00174428
*/
// Range: 0x174410 -> 0x174428
static class RpCollisionTriangle * sphereHitsModel3CB(class RpCollisionTriangle * tri /* r5 */, float dist /* r29 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x174410 -> 0x174428
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00174430 -> 0x00174AA0
*/
// Range: 0x174430 -> 0x174AA0
static class RpCollisionTriangle * sphereHitsEnv3CB(class RpIntersection * isx /* r2 */, class RpWorldSector * sector /* r18 */, class RpCollisionTriangle * tri /* r17 */, float dist /* r29+0x5C */, void * data /* r16 */) {
    /* anonymous block */ {
        // Range: 0x174430 -> 0x174AA0
        unsigned char NEXT2'247; // r2
        class xCollis * colls; // r2
        float radius; // r20
        class xVec3 tohit; // r29+0x60
        unsigned char idx; // r5
        float scale; // r29+0x70
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00174AA0 -> 0x00174E28
*/
// Range: 0x174AA0 -> 0x174E28
unsigned int xRayHitsEnv(class xRay3 * r /* r20 */, class xEnv * env /* r19 */, class xCollis * coll /* r18 */) {
    /* anonymous block */ {
        // Range: 0x174AA0 -> 0x174E28
        class RpIntersection isx; // r29+0xB0
        float len; // r29+0xD0
        signed int i; // r17
        class xIsect iBoxIsect; // r29+0x80
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00174E30 -> 0x001752AC
*/
// Range: 0x174E30 -> 0x1752AC
unsigned int xRayHitsModel(class xRay3 * r /* r19 */, class xModelInstance * m /* r18 */, class xCollis * coll /* r17 */) {
    /* anonymous block */ {
        // Range: 0x174E30 -> 0x1752AC
        class RpIntersection isx; // r29+0x60
        float len; // r29+0xA0
        class xMat4x3 * mat; // r2
        class xVec3 center; // r29+0x90
        class xVec3 heading; // r29+0x80
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001752B0 -> 0x001752C4
*/
// Range: 0x1752B0 -> 0x1752C4
static class RpCollisionTriangle * rayHitsModelCB(class RpIntersection * isx /* r2 */, class RpCollisionTriangle * tri /* r2 */, float dist /* r29 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1752B0 -> 0x1752C4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001752D0 -> 0x001753F4
*/
// Range: 0x1752D0 -> 0x1753F4
static class RpCollisionTriangle * rayHitsEnvCB(class RpWorldSector * sector /* r2 */, class RpCollisionTriangle * tri /* r2 */, float dist /* r29 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1752D0 -> 0x1753F4
        class xCollis * coll; // r2
        unsigned char flags; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00175400 -> 0x00175414
*/
// Range: 0x175400 -> 0x175414
static class RpCollisionTriangle * rayHitsModelBackwardCB(class RpIntersection * isx /* r2 */, class RpCollisionTriangle * tri /* r2 */, float dist /* r29 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x175400 -> 0x175414
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00175420 -> 0x001754C0
*/
// Range: 0x175420 -> 0x1754C0
static class RpCollisionTriangle * rayHitsEnvBackwardCB(class RpWorldSector * sector /* r2 */, class RpCollisionTriangle * tri /* r2 */, float dist /* r29 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x175420 -> 0x1754C0
        class xCollis * coll; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001754C0 -> 0x00175668
*/
// Range: 0x1754C0 -> 0x175668
void xSphereForModel(class xSphere & o /* r21 */, class xModelInstance * model /* r22 */, unsigned char childModels /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1754C0 -> 0x175668
        class RpAtomic * imodel; // r2
        class RpGeometry * geom; // r20
        class RpMorphTarget * mtgt; // r19
        unsigned short idx; // r18
        class xModelInstance * cur_model; // r17
        class xSphere s; // r29+0xA0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00175670 -> 0x00175918
*/
// Range: 0x175670 -> 0x175918
void xBoxForModelLocal(class xBox & o /* r21 */, class xModelInstance * m /* r22 */, unsigned char childModels /* r23 */) {
    /* anonymous block */ {
        // Range: 0x175670 -> 0x175918
        class RpAtomic * imodel; // r2
        class RpGeometry * geom; // r2
        class RpMorphTarget * mtgt; // r20
        unsigned short idx; // r19
        class xModelInstance * curModel; // r18
        class xVec3 lower; // r29+0xB0
        class xVec3 upper; // r29+0xA0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00175920 -> 0x001759B4
*/
// Range: 0x175920 -> 0x1759B4
void xBoxForModel(class xBox & o /* r17 */, class xModelInstance * m /* r16 */, unsigned char childModels /* r2 */) {
    /* anonymous block */ {
        // Range: 0x175920 -> 0x1759B4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001759C0 -> 0x00175AF0
*/
// Range: 0x1759C0 -> 0x175AF0
void xBoxForTriangle(class xBox & box /* r2 */, class xVec3 & p0 /* r2 */, class xVec3 & p1 /* r2 */, class xVec3 & p2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1759C0 -> 0x175AF0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00175AF0 -> 0x00175E60
*/
// Range: 0x175AF0 -> 0x175E60
unsigned char xSphereHitsCone(class xVec3 & center /* r2 */, float radius /* r23 */, class xVec3 & kv0 /* r2 */, float kr0 /* r22 */, class xVec3 & kv1 /* r2 */, float kr1 /* r21 */) {
    /* anonymous block */ {
        // Range: 0x175AF0 -> 0x175E60
        class xMat4x3 mat; // r29+0x30
        class xVec3 C; // r29+0x70
        float Cx; // r29+0x80
        float Cy; // r29+0x80
        float Dx; // r29+0x80
        float Ex; // r29+0x80
        float Ey; // r29+0x80
        float a; // r29+0x80
        float b; // r29+0x80
        float i2a; // r29+0x80
        float t0; // r3
        float t1; // r1
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00175E60 -> 0x00175F7C
*/
// Range: 0x175E60 -> 0x175F7C
unsigned char xSphereHitsVCircle(class xVec3 & sc /* r2 */, float sr /* r29+0x20 */, class xVec3 & cc /* r2 */, float cr /* r29+0x20 */) {
    /* anonymous block */ {
        // Range: 0x175E60 -> 0x175F7C
        float ydist; // r29+0x20
        class xVec2 xzloc1; // r29+0x18
        class xVec2 xzloc2; // r29+0x10
        float max_xzdist; // r29+0x20
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00175F80 -> 0x00176330
*/
// Range: 0x175F80 -> 0x176330
unsigned int xCylinderHitsSphere(class xCylinder * cyl /* r2 */, class xSphere * sph /* r2 */, class xCollis * coll /* r2 */) {
    /* anonymous block */ {
        // Range: 0x175F80 -> 0x176330
        float sr; // r6
        float ydist; // r1
        class xVec2 xzloc1; // r29+0x78
        class xVec2 xzloc2; // r29+0x70
        float max_xzdist; // r29+0x80
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00176330 -> 0x001766DC
*/
// Range: 0x176330 -> 0x1766DC
unsigned int xSphereHitsVCylinder(class xSphere * sph /* r2 */, class xCylinder * cyl /* r2 */, class xCollis * coll /* r2 */) {
    /* anonymous block */ {
        // Range: 0x176330 -> 0x1766DC
        float sr; // r2
        float ydist; // r1
        class xVec2 xzloc1; // r29+0x78
        class xVec2 xzloc2; // r29+0x70
        float max_xzdist; // r29+0x80
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001766E0 -> 0x0017684C
*/
// Range: 0x1766E0 -> 0x17684C
unsigned char xSphereHitsVCylinder(class xVec3 & sc /* r2 */, float sr /* r29+0x20 */, class xVec3 & cc /* r2 */, float cr /* r29+0x20 */, float ch /* r29+0x20 */) {
    /* anonymous block */ {
        // Range: 0x1766E0 -> 0x17684C
        float ydist; // r29+0x20
        class xVec2 xzloc1; // r29+0x18
        class xVec2 xzloc2; // r29+0x10
        float max_xzdist; // r29+0x20
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00176850 -> 0x00176870
*/
// Range: 0x176850 -> 0x176870
unsigned char xOBBHitsOBB(class xBox & a /* r2 */, class xMat4x3 & amat /* r2 */, class xBox & b /* r2 */, class xMat4x3 & bmat /* r2 */) {
    /* anonymous block */ {
        // Range: 0x176850 -> 0x176870
        float ax; // r29+0xB0
        float ay; // r29+0xB0
        float az; // r29+0xB0
        float bx; // r29+0xB0
        float by; // r29+0xB0
        float bz; // r29+0xB0
        class xVec3 acenter; // r29+0xA0
        class xVec3 bcenter; // r29+0x90
        class xVec3 offset; // r29+0x80
        class xVec3 aoffset; // r29+0x70
        class xMat3x3 xmat; // r29+0x40
        class xMat3x3 axmat; // r29+0x10
        float ar; // r29+0xB0
        float br; // r29+0xB0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00176870 -> 0x00176A18
*/
// Range: 0x176870 -> 0x176A18
unsigned char xSphereHitsBox(class xVec3 & c /* r2 */, float r /* r29 */, class xBox & b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x176870 -> 0x176A18
        float ex; // r29
        float ey; // r29
        float ez; // r29
        float dx; // r29
        float dy; // r29
        float dz; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00176A20 -> 0x00177428
*/
// Range: 0x176A20 -> 0x177428
class xVec3 xCollisTriHit(class tri_data & tri /* r2 */, class xModelInstance & model /* r2 */) {
    /* anonymous block */ {
        // Range: 0x176A20 -> 0x177428
        class xMat4x3 & m; // r2
        class xVec3 v[3]; // r29+0xB0
        class RpGeometry * geom; // r8
        class xVec3 * verts; // r7
        class RpMorphTarget * mt; // r2
        class RpTriangle & t; // r2
        signed int i; // r6
        class xVec3 r[2]; // r29+0x90
        class xVec3 d; // r29+0x340
        class xVec3 A; // r29+0x330
        class xVec3 B; // r29+0x320
        class xVec3 C; // r29+0x310
        class xVec3 AxB; // r29+0x300
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00177430 -> 0x00178244
*/
// Range: 0x177430 -> 0x178244
void xCollideCalcTri(class tri_data & tri /* r2 */, class xModelInstance & model /* r2 */, class xVec3 & center /* r2 */, class xVec3 & heading /* r2 */) {
    /* anonymous block */ {
        // Range: 0x177430 -> 0x178244
        class xVec3 v[3]; // r29+0xA0
        class RpGeometry * geom; // r5
        class xVec3 * verts; // r11
        class RpTriangle & t; // r2
        class xVec3 p; // r29+0x370
        float num; // r18
        class xVec3 b; // r29+0x360
        class xVec3 A; // r29+0x350
        class xVec3 d; // r29+0x340
        class xVec3 ad; // r29+0x330
        class xVec3 d; // r29+0x320
        class xVec3 ad; // r29+0x310
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00178250 -> 0x001782B8
*/
// Range: 0x178250 -> 0x1782B8
unsigned int xBoxHitsObb(class xBox * a /* r2 */, class xBox * b /* r5 */, class xMat4x3 * mat /* r2 */, class xCollis * coll /* r16 */) {
    /* anonymous block */ {
        // Range: 0x178250 -> 0x1782B8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001782C0 -> 0x00178314
*/
// Range: 0x1782C0 -> 0x178314
unsigned int xObbHitsObb(class xBox * a /* r2 */, class xMat4x3 * a_mat /* r2 */, class xBox * b /* r2 */, class xMat4x3 * b_mat /* r2 */, class xCollis * coll /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1782C0 -> 0x178314
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00178320 -> 0x00178FC0
*/
// Range: 0x178320 -> 0x178FC0
static unsigned int Mgc_BoxBoxTest(class xBox * a /* r2 */, class xMat4x3 * matA /* r2 */, class xBox * b /* r2 */, class xMat4x3 * matB /* r2 */) {
    /* anonymous block */ {
        // Range: 0x178320 -> 0x178FC0
        class xVec3 akA[3]; // r29+0x130
        class xVec3 akB[3]; // r29+0x100
        float afEA[3]; // r29+0x190
        float afEB[3]; // r29+0x180
        float _mag; // r29+0x1A0
        float _mag; // r29+0x1A0
        float _mag; // r29+0x1A0
        float _mag; // r29+0x1A0
        float _mag; // r29+0x1A0
        float _mag; // r29+0x1A0
        class xVec3 centA; // r29+0x170
        class xVec3 centB; // r29+0x160
        float fR0; // r29+0x1A0
        float fR1; // r29+0x1A0
        float fR01; // r29+0x1A0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00178FC0 -> 0x00179158
*/
// Range: 0x178FC0 -> 0x179158
unsigned int xBoxHitsSphere(class xBox * a /* r2 */, class xSphere * b /* r2 */, class xCollis * coll /* r16 */) {
    /* anonymous block */ {
        // Range: 0x178FC0 -> 0x179158
        class xIsect isx; // r29+0x20
        float scale; // r29+0x50
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00179160 -> 0x00179430
*/
// Range: 0x179160 -> 0x179430
signed int xCapsuleIsectsEnvClosestToLine(class xCapsule * c /* r20 */, class xEnv * env /* r19 */, class xCollis * colls /* r18 */) {
    /* anonymous block */ {
        // Range: 0x179160 -> 0x179430
        class xClumpCollV3dGradient grad; // r29+0x60
        class CallBackParam param; // r29+0x80
        signed int i; // r17
        float s; // r29+0x90
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00179430 -> 0x0017991C
*/
// Range: 0x179430 -> 0x17991C
signed int xCapsuleIsectsModelClosestToLine(class xCapsule * c /* r19 */, class xModelInstance * model /* r18 */, class xCollis * colls /* r17 */) {
    /* anonymous block */ {
        // Range: 0x179430 -> 0x17991C
        class RpIntersection isx; // r29+0xC0
        class xSphere cbound; // r29+0xB0
        float dx__; // r29+0xE0
        float dy__; // r29+0xE0
        float dz__; // r29+0xE0
        class xMat4x3 & mat; // r16
        class xMat3x3 old_mat; // r29+0x80
        float mscale; // r29+0xE0
        class RwFrame * frame; // r2
        class xCapsule lcap; // r29+0x60
        float s; // r29+0xE0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00179920 -> 0x00179B40
*/
// Range: 0x179920 -> 0x179B40
static signed int LeafNodeCapsuleIntersect(class xClumpCollBSPTriangle * triangles /* r20 */, void * data /* r19 */) {
    /* anonymous block */ {
        // Range: 0x179920 -> 0x179B40
        class CallBackParam * cbParam; // r2
        class RwV3d * v1; // r5
        class RwV3d * v2; // r4
        class RpCollisionTriangle collisionTri; // r29+0xA0
        float lengthSq; // r29+0xD0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00179B40 -> 0x00179B54
*/
// Range: 0x179B40 -> 0x179B54
static class RpCollisionTriangle * CapsuleModelClosestToLineCB(class RpCollisionTriangle * tri /* r5 */, float dist /* r29 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x179B40 -> 0x179B54
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00179B60 -> 0x00179E38
*/
// Range: 0x179B60 -> 0x179E38
static class RpCollisionTriangle * CapsuleEnvClosestToLineCB(class RpCollisionTriangle * tri /* r20 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x179B60 -> 0x179E38
        class xCollis * colls; // r19
        class xVec3 * p2; // r22
        class xVec3 * v0; // r18
        class xVec3 * v1; // r17
        class xVec3 * v2; // r16
        float t; // r29+0x8C
        float u; // r29+0x88
        float v; // r29+0x84
        float tri_ptx; // r29+0x90
        float tri_pty; // r29+0x90
        float tri_ptz; // r29+0x90
        float tohitx; // r4
        float tohity; // r3
        float tohitz; // r2
        float d2; // r29+0x90
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00179E40 -> 0x0017A220
*/
// Range: 0x179E40 -> 0x17A220
signed int xParabolaHitsEnv(class xParabola * p /* r2 */, class xEnv * env /* r20 */, class xCollis * colls /* r19 */) {
    /* anonymous block */ {
        // Range: 0x179E40 -> 0x17A220
        class RwBBox xb; // r29+0x80
        float extremumT; // r29+0xA0
        float extremum; // r29+0xA0
        class ParabolaCBData data; // r29+0x60
        signed int i; // r18
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0017A220 -> 0x0017A8A8
*/
// Range: 0x17A220 -> 0x17A8A8
static signed int xParabolaEnvCB(class xClumpCollBSPTriangle * triangles /* r20 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x17A220 -> 0x17A8A8
        class ParabolaCBData * pd; // r19
        class xParabola * p; // r18
        class xCollis * colls; // r2
        class xVec3 * v0; // r17
        class xVec3 * v1; // r4
        class xVec3 * v2; // r3
        unsigned char tester; // r2
        float a; // r7
        float b; // r6
        float c; // r1
        float det; // r29+0xB0
        class xVec3 N; // r29+0xA0
        float t1; // r27
        float t2; // r26
        float c1; // r29+0xB0
        float c2; // r29+0xB0
        float c0; // r29+0xB0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0017A8B0 -> 0x0017A93C
*/
// Range: 0x17A8B0 -> 0x17A93C
void xParabolaRecenter(class xParabola * p /* r2 */, float newZeroT /* r29 */) {
    /* anonymous block */ {
        // Range: 0x17A8B0 -> 0x17A93C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0017A940 -> 0x0017AD10
*/
// Range: 0x17A940 -> 0x17AD10
unsigned int xSphereHitsModel(class xSphere * b /* r20 */, class xModelInstance * m /* r19 */, class xCollis * coll /* r18 */) {
    /* anonymous block */ {
        // Range: 0x17A940 -> 0x17AD10
        class RpIntersection isx; // r29+0x90
        class xSphereHitsModel_context context; // r29+0x70
        class xMat4x3 * mat; // r17
        class RwFrame * frame; // r2
        float mscale; // r20
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0017AD10 -> 0x0017AD2C
*/
// Range: 0x17AD10 -> 0x17AD2C
static class RpCollisionTriangle * sphereHitsModelCB(class RpCollisionTriangle * tri /* r3 */, float dist /* r29 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x17AD10 -> 0x17AD2C
        class xSphereHitsModel_context * context; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0017AD30 -> 0x0017AF64
*/
// Range: 0x17AD30 -> 0x17AF64
static class RpCollisionTriangle * sphereHitsEnvCB(class RpIntersection * isx /* r2 */, class RpWorldSector * sector /* r18 */, class RpCollisionTriangle * tri /* r17 */, float dist /* r29+0x5C */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x17AD30 -> 0x17AF64
        class xCollis * coll; // r16
        float radius; // r20
        class xVec3 * center; // r2
        class xVec3 tohit; // r29+0x60
        float scale; // r29+0x70
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0017AF70 -> 0x0017B184
*/
// Range: 0x17AF70 -> 0x17B184
static void properSphereIsectTri(class xVec3 * center /* r21 */, float radius /* r22 */, class xVec3 * tohit /* r20 */, float * dist_ptr /* r23 */, class RpCollisionTriangle * tri /* r19 */) {
    /* anonymous block */ {
        // Range: 0x17AF70 -> 0x17B184
        class xVec3 projPoint; // r29+0xB0
        float dist2plane; // r21
        float dist; // r29+0xC0
        float dist2; // r20
        float radius2; // r21
        unsigned int i; // r18
        class xVec3 vertClosestPoint; // r29+0xA0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0017B190 -> 0x0017B264
*/
// Range: 0x17B190 -> 0x17B264
static void FindNearestPointOnLine(class xVec3 * result /* r2 */, class xVec3 * point /* r2 */, class xVec3 * start /* r2 */, class xVec3 * end /* r2 */) {
    /* anonymous block */ {
        // Range: 0x17B190 -> 0x17B264
        float mu; // r29
        float lineLength2; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0017B270 -> 0x0017B558
*/
// Range: 0x17B270 -> 0x17B558
static signed int PointWithinTriangle(class xVec3 * _pt /* r2 */, class xVec3 * * _tri /* r2 */, class xVec3 * _normal /* r2 */) {
    /* anonymous block */ {
        // Range: 0x17B270 -> 0x17B558
        class RwV3d * pt; // r2
        class RwV3d * * tri; // r2
        class RwV3d * normal; // r2
        enum Dimension dimension; // r2
        signed int inside; // r2
        signed int i; // r10
        signed int j; // r3
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0017B560 -> 0x0017B9DC
*/
// Range: 0x17B560 -> 0x17B9DC
unsigned int xSphereHitsOBB_nu(class xSphere * s /* r17 */, class xBox * b /* r2 */, class xMat4x3 * m /* r2 */, class xCollis * coll /* r16 */) {
    /* anonymous block */ {
        // Range: 0x17B560 -> 0x17B9DC
        class xSphere xfs; // r29+0x90
        class xVec3 scale; // r29+0xA0
        class xMat4x3 mnormal; // r29+0x50
        float len2; // r29+0xB0
        float len_inv; // r29+0xB0
        float len2; // r29+0xB0
        float len_inv; // r29+0xB0
        float len2; // r29+0xB0
        float len_inv; // r29+0xB0
        class xBox sbox; // r29+0x30
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0017B9E0 -> 0x0017BB84
*/
// Range: 0x17B9E0 -> 0x17BB84
unsigned int xSphereHitsBox(class xSphere * a /* r2 */, class xBox * b /* r2 */, class xCollis * coll /* r16 */) {
    /* anonymous block */ {
        // Range: 0x17B9E0 -> 0x17BB84
        class xIsect isx; // r29+0x20
        float scale; // r29+0x50
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0017BB90 -> 0x0017BD94
*/
// Range: 0x17BB90 -> 0x17BD94
unsigned int xSphereHitsSphere(class xSphere * a /* r17 */, class xSphere * b /* r2 */, class xCollis * coll /* r16 */) {
    /* anonymous block */ {
        // Range: 0x17BB90 -> 0x17BD94
        class xIsect isx; // r29+0x30
        float scale; // r29+0x60
        float scale; // r29+0x60
    }
}


