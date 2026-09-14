/*
    Compile unit: E:\SD2\Game\flat\iFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static float sinRangePoint5[8]; // size: 0x20, address: 0x2FC850
float xFXWarbleParam[8]; // size: 0x20, address: 0x3B19F0
class _xEnt * warbEnt; // size: 0x4, address: 0x358590
static float warbc[4]; // size: 0x10, address: 0x2FC870
static class _xVec3 * vbuf; // size: 0x4, address: 0x358594
static class _xVec3 * nbuf; // size: 0x4, address: 0x358598
static unsigned int warbMode; // size: 0x4, address: 0x35859C
static float warbTime; // size: 0x4, address: 0x3585A0
unsigned int gActiveHeap; // size: 0x4, address: 0x357CAC
signed long FXanimUVPRS; // size: 0x4, address: 0x2839A0
signed int iFXanimUVInstanceCallBack(void * *, unsigned int); // size: 0x0, address: 0x24D110
class RxClusterDefinition RxClPS2normal; // size: 0x10, address: 0x2FC7F0
class RxClusterDefinition RxClPS2rgba; // size: 0x10, address: 0x2FC7E0
class RxClusterDefinition RxClPS2uv; // size: 0x10, address: 0x2FC7C0
class RxClusterDefinition RxClPS2xyz; // size: 0x10, address: 0x2FC7B0
float xFXanimUVScale[2]; // size: 0x8, address: 0x357678
float xFXanimUVTrans[2]; // size: 0x8, address: 0x357670
float xFXanimUVRotMat1[2]; // size: 0x8, address: 0x357668
float xFXanimUVRotMat0[2]; // size: 0x8, address: 0x357660
float xFXanimUV2PScale[2]; // size: 0x8, address: 0x357698
float xFXanimUV2PTrans[2]; // size: 0x8, address: 0x357690
float xFXanimUV2PRotMat1[2]; // size: 0x8, address: 0x357688
float xFXanimUV2PRotMat0[2]; // size: 0x8, address: 0x357680
__int128 * sweLocalPacket; // size: 0x4, address: 0x357754
class RwTexture * xFXanimUV2PTexture; // size: 0x4, address: 0x358434
// total size: 0xC
class rxHeapSuperBlockDescriptor {
    // Members
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
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
// total size: 0x8
class RxPipelineNodeParam {
    // Members
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
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
class _xVec3 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
// total size: 0xC
class RxPipelineNodeTopSortData {
    // Members
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class rxReq * req; // offset 0x8, size 0x4
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
// total size: 0x10
class RwRGBAReal {
    // Members
public:
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
};
// total size: 0x10
class _xRot {
    // Members
public:
    class _xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
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
// total size: 0x8
class xAnimTransitionList {
    // Members
public:
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
};
// total size: 0x8
class RxPipelineCluster {
    // Members
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
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
// total size: 0x4
class RpVertexNormal {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
    signed char z; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
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
class RpMaterialList {
    // Members
public:
    class RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
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
class xModelPool {
    // Members
public:
    class xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
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
// total size: 0x18
class RwTexDictionary {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0x4
class RpSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
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
// total size: 0xC
class RxPipelineRequiresCluster {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
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
// total size: 0x40
class _xEnv {
    // Members
public:
    class iEnv * geom; // offset 0x0, size 0x4
    class iEnv ienv; // offset 0x10, size 0x30
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
// total size: 0x4
class RwRGBA {
    // Members
public:
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// total size: 0x8
class RpPolygon {
    // Members
public:
    unsigned short matIndex; // offset 0x0, size 0x2
    unsigned short vertIndex[3]; // offset 0x2, size 0x6
};
// total size: 0x18
class RwBBox {
    // Members
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
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
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x8
class RwTexCoords {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
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
// total size: 0x8
class RpTriangle {
    // Members
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    signed short matIndex; // offset 0x6, size 0x2
};
// total size: 0x10
class _xSphere {
    // Members
public:
    class _xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
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
class _xCylinder {
    // Members
public:
    class _xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
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
// total size: 0x3
class RpCollSector {
    // Members
public:
    unsigned char cType; // offset 0x0, size 0x1
    unsigned char vertex; // offset 0x1, size 0x1
    unsigned char start; // offset 0x2, size 0x1
};
// total size: 0x0
class rxReq {};
// total size: 0x0
class xSurface {};
// total size: 0x18
class _xBox {
    // Members
public:
    class _xVec3 upper; // offset 0x0, size 0xC
    class _xVec3 lower; // offset 0xC, size 0xC
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
// total size: 0xC
class xQCData {
    // Members
public:
    unsigned int xmask; // offset 0x0, size 0x4
    unsigned int ymask; // offset 0x4, size 0x4
    unsigned int zmask; // offset 0x8, size 0x4
};
// total size: 0xC
class RxOutputSpec {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
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
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
class RxClusterRef {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
// total size: 0x24
class _xBBox {
    // Members
public:
    class _xVec3 center; // offset 0x0, size 0xC
    class _xBox box; // offset 0xC, size 0x18
};
// total size: 0x14
class RxPS2DMASessionRecord {
    // Members
public:
    enum RxPS2ObjectType objType; // offset 0x0, size 0x4
    class RxObjUnion sourceObject; // offset 0x4, size 0x4
    enum RwFrustumTestResult inFrustum; // offset 0x8, size 0x4
    unsigned short serialNum; // offset 0xC, size 0x2
    unsigned char vu1CodeIndex; // offset 0xE, size 0x1
    unsigned char primType; // offset 0xF, size 0x1
    enum RxSkyTransTypeFlags transType; // offset 0x10, size 0x4
};
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x18
class _xEntShadow {
    // Members
public:
    class _xVec3 pos; // offset 0x0, size 0xC
    class _xVec3 vec; // offset 0xC, size 0xC
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
enum RxPS2ObjectType {
    rxOBJTYPE_WORLDSECTOR = 0,
    rxOBJTYPE_ATOMIC = 1,
    rxOBJTYPE_IM3D = 2,
    rxOBJTYPEFORCEENUMSIZEINT = 2147483647,
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
class RwSphere {
    // Members
public:
    class RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
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
// total size: 0x4
class _iCollis {
    // Members
public:
    signed int unknown; // offset 0x0, size 0x4
};
// total size: 0x4
class RxObjUnion {
    // Members
public:
    union { // inferred
        class RpWorldSector * worldSector; // offset 0x0, size 0x4
        class RpAtomic * atomic; // offset 0x0, size 0x4
        void * agnostic; // offset 0x0, size 0x4
    };
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
class p2BaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
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
// total size: 0x14
class RwObjectHasFrame {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
};
// total size: 0x48
class iShadowCache {
    // Members
public:
    class _xVec3 pos; // offset 0x0, size 0xC
    class _xVec3 right; // offset 0xC, size 0xC
    class _xVec3 corner[4]; // offset 0x18, size 0x30
};
enum RpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
};
enum RwTextureAddressMode {
    rwTEXTUREADDRESSNATEXTUREADDRESS = 0,
    rwTEXTUREADDRESSWRAP = 1,
    rwTEXTUREADDRESSMIRROR = 2,
    rwTEXTUREADDRESSCLAMP = 3,
    rwTEXTUREADDRESSBORDER = 4,
    rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 2147483647,
};
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x10
class _xQuat {
    // Members
public:
    class _xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
enum RwFrustumTestResult {
    rwSPHEREOUTSIDE = 0,
    rwSPHEREBOUNDARY = 1,
    rwSPHEREINSIDE = 2,
    rwFRUSTUMTESTRESULTFORCEENUMSIZEINT = 2147483647,
};
enum RxSkyTransTypeFlags {
    rxSKYTRANSTYPENATRANSTYPE = 0,
    rxSKYTRANSTYPEFOG = 1,
    rxSKYTRANSTYPECLIP = 2,
    rxSKYTRANSTYPELIST = 4,
    rxSKYTRANSTYPEISO = 8,
    rxSKYTRANSTYPELINE = 16,
    rxSKYTRANSTYPECULL = 32,
    rxSKYTRANSTYPEFLAGSFORCEENUMSIZEINT = 2147483647,
};
enum iFXWarbModes {
    IFX_WARB_NONE = 0,
    IFX_WARB_WATER_WAVE = 1,
    IFX_WARB_WATER_RIPPLE = 2,
    IFX_WARB_DAN1 = 3,
    IFX_WARB_DAN2 = 4,
    IFX_WARB_TREE = 5,
    IFX_WARB_WEB = 6,
};

/*
    Compile unit: E:\SD2\Game\flat\iFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0024C6D0 -> 0x0024CDBC
*/
// Range: 0x24C6D0 -> 0x24CDBC
static void iFXwarb(class _xVec3 * orig_verts /* r17 */, class RpGeometry * geom /* r16 */) {
    /* anonymous block */ {
        // Range: 0x24C6D0 -> 0x24CDBC
        float b; // r29+0xB0
        float a; // r29+0xB0
        float x; // r29+0xB0
        float percent; // r29+0xB0
        float mul; // r29+0xB0
        float b; // r29+0xB0
        float a; // r29+0xB0
        float x; // r29+0xB0
        float mul; // r26
        float ooy; // r20
        float b; // r29+0xB0
        float a; // r29+0xB0
        float x; // r29+0xB0
        float b; // r29+0xB0
        float a; // r29+0xB0
        float x; // r29+0xB0
        float b; // r29+0xB0
        float a; // r29+0xB0
        float y; // r29+0xB0
        float x; // r1
        float b; // r23
        float a; // r29+0xB0
        float y; // r29+0xB0
        float x; // r2
        class _xVec3 * nv; // r20
        class _xVec3 * ov; // r2
        float t; // r20
        signed int i; // r17
        float maxy; // r29+0xB0
        float miny; // r29+0xB0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0024CDC0 -> 0x0024CE24
*/
// Range: 0x24CDC0 -> 0x24CE24
void iFXWarbUpdate(float dt /* r29+0x20 */) {
    /* anonymous block */ {
        // Range: 0x24CDC0 -> 0x24CE24
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0024CE30 -> 0x0024CE70
*/
// Range: 0x24CE30 -> 0x24CE70
void iFXWarbSetParams(unsigned int mode /* r2 */, float * val /* r2 */) {
    /* anonymous block */ {
        // Range: 0x24CE30 -> 0x24CE70
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0024CE70 -> 0x0024CF6C
*/
// Range: 0x24CE70 -> 0x24CF6C
void iFXWarbInit(void * vp_ent /* r2 */, enum iFXWarbModes warb_mode /* r18 */) {
    /* anonymous block */ {
        // Range: 0x24CE70 -> 0x24CF6C
        float coeffs[4]; // r29+0x50
        class _xVec3 * verts; // r17
        class RpGeometry * geom; // r3
        class _xEnt * ent; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0024CF70 -> 0x0024CFC0
*/
// Range: 0x24CF70 -> 0x24CFC0
class RxPipeline * iFXanimUVCreatePipe() {
    /* anonymous block */ {
        // Range: 0x24CF70 -> 0x24CFC0
        class RxPipeline * lockedPipe; // r16
        class RxPipeline * newPipe; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0024CFC0 -> 0x0024D110
*/
// Range: 0x24CFC0 -> 0x24D110
static class RxPipeline * iFXanimUVManagerNodeSetup(class RxPipeline * lockedPipe /* r16 */) {
    /* anonymous block */ {
        // Range: 0x24CFC0 -> 0x24D110
        class RxPipelineNode * managerNode; // r18
        class RxNodeDefinition * manager; // r17
        void * VUCodeArray[32]; // @ 0x002FC880
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0024D110 -> 0x0024D530
*/
// Range: 0x24D110 -> 0x24D530
static signed int iFXanimUVInstanceCallBack(void * * clusterData /* r2 */) {
    /* anonymous block */ {
        // Range: 0x24D110 -> 0x24D530
        __int128 ___ltmp; // r6
        __int128 ___ltmp; // r5
        __int128 ___ltmp; // r5
        __int128 ___ltmp; // r5
        __int128 ___ltmp; // r7
        __int128 ___ltmp; // r7
        __int128 ___ltmp; // r4
        __int128 ___ltmp; // r4
        __int128 ___ltmp; // r6
        __int128 ___ltmp; // r6
        __int128 ___ltmp; // r6
        __int128 ___ltmp; // r6
        __int128 ___ltmp; // r7
        __int128 ltmp; // r4
        unsigned long long tmp1; // r6
        unsigned long long tmp; // r2
        unsigned int fogSwitch; // r18
        unsigned int primSwitch; // r17
        class RxPS2DMASessionRecord * dmaSesRec; // r16
    }
}


