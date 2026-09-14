/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static char dbfont_chars[51]; // size: 0x33, address: 0x0
void (* gParDrawFunc[37])(class tagxParSys *); // size: 0x94, address: 0xAAE020
class _xTex * gParTex[37]; // size: 0x94, address: 0xAAE0C0
static signed int gColorTableInit; // size: 0x4, address: 0x4A4F04
static float gColorTable[256]; // size: 0x400, address: 0xAAE160
class _iParRingMode sRingInfo[14]; // size: 0x230, address: 0x44FA50
class _iParSphereMode sSphereMode[7]; // size: 0xC4, address: 0x44FC80
class tagParCmd_Jet * gJet; // size: 0x4, address: 0x4A4F08
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
class xParCmd * gParEmitter[37]; // size: 0x94, address: 0x4B98C0
float g_DEGTORAD; // size: 0x4, address: 0x485A58
float g_EPSILON; // size: 0x4, address: 0x485A68
float CY; // size: 0x4, address: 0x0
float CX; // size: 0x4, address: 0x0
float proj_fovr; // size: 0x4, address: 0x0
float SCALE; // size: 0x4, address: 0x0
float proj_farnear; // size: 0x4, address: 0x4A4F6C
float (* matrix_sp)[16]; // size: 0x4, address: 0x4A4F90
class xScene * xScene_current; // size: 0x4, address: 0x4A4E08
float gFloorQuickHeight[32][32]; // size: 0x1000, address: 0xAF9BA0
float g_2_PI; // size: 0x4, address: 0x485A48
float g_PI_DIV_2; // size: 0x4, address: 0x485A50
float g_PI; // size: 0x4, address: 0x485A40
class tagxParSys gParSys[37]; // size: 0x40C, address: 0x4B94B0
void iParMgrRenderParSys_TwoTriStrip(class tagxParSys *); // size: 0x0, address: 0x37F250
void iParMgrRenderParSys_Twinkle(class tagxParSys *); // size: 0x0, address: 0x37D550
void iParMgrRenderParSys_Sprite(class tagxParSys *); // size: 0x0, address: 0x37D660
void iParMgrRenderParSys_DrawRegionRain(class tagxParSys *); // size: 0x0, address: 0x37EF30
void iParMgrRenderParSys_DrawBulletStreak(class tagxParSys *); // size: 0x0, address: 0x37F060
void iParMgrRenderParSys_DrawFlatPoly(class tagxParSys *); // size: 0x0, address: 0x37ED10
void iParMgrRenderParSys_DrawLight(class tagxParSys *); // size: 0x0, address: 0x37D750
void iParMgrRenderParSys_ExpandingSphere(class tagxParSys *); // size: 0x0, address: 0x37DB80
void iParMgrRenderParSys_ExpandingRing(class tagxParSys *); // size: 0x0, address: 0x37E590
// total size: 0xC
class tagParCmd_SpawnVFX {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_vfxType; // offset 0x1, size 0x1
    unsigned char m_mode; // offset 0x2, size 0x1
    unsigned char m_delay; // offset 0x3, size 0x1
    unsigned char m_delayCount; // offset 0x4, size 0x1
    unsigned char m_spawnProbability; // offset 0x5, size 0x1
    unsigned short m_maxAge; // offset 0x6, size 0x2
    unsigned char m_displace[3]; // offset 0x8, size 0x3
    unsigned char m_pad; // offset 0xB, size 0x1
};
// total size: 0x14
class tagParCmdList {
    // Members
public:
    signed int m_numCmd; // offset 0x0, size 0x4
    class xParCmd * m_cmd; // offset 0x4, size 0x4
    class xParCmd * m_lastCmd; // offset 0x8, size 0x4
    class tagParCmdList * m_prev; // offset 0xC, size 0x4
    class tagParCmdList * m_next; // offset 0x10, size 0x4
};
// total size: 0xC
class _rxHeapSuperBlockDescriptor {
    // Members
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class _rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
// total size: 0x18
class _rwResEntryTag {
    // Members
public:
    class _RwLLLink link; // offset 0x0, size 0x8
    signed int size; // offset 0x8, size 0x4
    void * owner; // offset 0xC, size 0x4
    class _rwResEntryTag * * ownerRef; // offset 0x10, size 0x4
    void (* destroyNotify)(class _rwResEntryTag *); // offset 0x14, size 0x4
};
// total size: 0x20
class _iTexResource {
    // Members
public:
    unsigned int m_assetID; // offset 0x0, size 0x4
    unsigned int pad[3]; // offset 0x4, size 0xC
    class _PVRheader header; // offset 0x10, size 0x10
};
// total size: 0x18
class tagParCmd_Accelerate {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[3]; // offset 0x1, size 0x3
    class Vector3D m_acc; // offset 0x4, size 0xC
    unsigned int m_freq; // offset 0x10, size 0x4
    unsigned int m_freqTime; // offset 0x14, size 0x4
};
// total size: 0x20
class xNavLink {
    // Members
public:
    unsigned char m_flags; // offset 0x0, size 0x1
    unsigned char m_countLocked; // offset 0x1, size 0x1
    unsigned char m_countOccupied; // offset 0x2, size 0x1
    unsigned char m_unused2; // offset 0x3, size 0x1
    unsigned int m_unused; // offset 0x4, size 0x4
    float m_distance; // offset 0x8, size 0x4
    class Vector3D m_dir; // offset 0xC, size 0xC
    class xNavPoint * m_linkTo; // offset 0x18, size 0x4
    class xNavPoint * m_linkFrom; // offset 0x1C, size 0x4
};
// total size: 0x20
class tagParCmd_Bounce {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[2]; // offset 0x1, size 0x2
    unsigned char m_noStatic; // offset 0x3, size 0x1
    class Vector3D m_plane; // offset 0x4, size 0xC
    class Vector3D m_dampVelPercent; // offset 0x10, size 0xC
    unsigned int m_sndAssetID; // offset 0x1C, size 0x4
};
// total size: 0x74
class tagParCmd_Emitter {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned short m_emitLifeRandom; // offset 0x2, size 0x2
    unsigned char m_emitMode; // offset 0x4, size 0x1
    signed int m_emitType; // offset 0x8, size 0x4
    signed int m_emitAmount; // offset 0xC, size 0x4
    signed int m_emitAmountRangeMin; // offset 0x10, size 0x4
    signed int m_emitAmountRangeMax; // offset 0x14, size 0x4
    unsigned char m_emitCVel[4]; // offset 0x18, size 0x4
    unsigned char m_emitColor[4]; // offset 0x1C, size 0x4
    float m_emitSize; // offset 0x20, size 0x4
    float m_emitSizeRangeMin; // offset 0x24, size 0x4
    float m_emitSizeRangeMax; // offset 0x28, size 0x4
    float m_emitSizeVel; // offset 0x2C, size 0x4
    class Vector3D m_emitVel; // offset 0x30, size 0xC
    class Vector3D m_emitVelVar; // offset 0x3C, size 0xC
    class Vector3D m_origin; // offset 0x48, size 0xC
    class Vector3D m_p1; // offset 0x54, size 0xC
    class Vector3D m_p2; // offset 0x60, size 0xC
    class xParCmd * m_cmdTex; // offset 0x6C, size 0x4
    unsigned short m_delayCount; // offset 0x70, size 0x2
    unsigned short m_delay; // offset 0x72, size 0x2
};
// total size: 0x40
class tagiFloor {
    // Members
public:
    float m_x1; // offset 0x0, size 0x4
    float m_y1; // offset 0x4, size 0x4
    float m_z1; // offset 0x8, size 0x4
    float m_x2; // offset 0xC, size 0x4
    float m_y2; // offset 0x10, size 0x4
    float m_z2; // offset 0x14, size 0x4
    unsigned int m_unit; // offset 0x18, size 0x4
    float m_w; // offset 0x1C, size 0x4
    float m_h; // offset 0x20, size 0x4
    unsigned int m_vCount; // offset 0x24, size 0x4
    unsigned int m_nCount; // offset 0x28, size 0x4
    unsigned int m_tCount; // offset 0x2C, size 0x4
    class Vector3D * m_v; // offset 0x30, size 0x4
    class Vector3D * m_n; // offset 0x34, size 0x4
    class tagiFloorTri * m_t; // offset 0x38, size 0x4
    unsigned int * m_tmask; // offset 0x3C, size 0x4
};
// total size: 0x8
class _RpPolygon {
    // Members
public:
    unsigned short matIndex; // offset 0x0, size 0x2
    unsigned short vertIndex[3]; // offset 0x2, size 0x6
};
// total size: 0x14
class xParCmd {
    // Members
public:
    unsigned char m_tag; // offset 0x0, size 0x1
    unsigned char m_flag; // offset 0x1, size 0x1
    signed short m_count; // offset 0x2, size 0x2
    void * m_method; // offset 0x4, size 0x4
    void * m_data; // offset 0x8, size 0x4
    class xParCmd * m_next; // offset 0xC, size 0x4
    class xParCmd * m_prev; // offset 0x10, size 0x4
};
// total size: 0x18
class _RxHeap {
    // Members
public:
    unsigned int superBlockSize; // offset 0x0, size 0x4
    class _rxHeapSuperBlockDescriptor * head; // offset 0x4, size 0x4
    class _rxHeapBlockHeader * headBlock; // offset 0x8, size 0x4
    class _rxHeapFreeBlock * freeBlocks; // offset 0xC, size 0x4
    unsigned int entriesAlloced; // offset 0x10, size 0x4
    unsigned int entriesUsed; // offset 0x14, size 0x4
};
// total size: 0x5C
class xPar {
    // Members
public:
    class xPar * m_next; // offset 0x0, size 0x4
    class xPar * m_prev; // offset 0x4, size 0x4
    class Vector3D m_pos; // offset 0x8, size 0xC
    class Vector3D m_vel; // offset 0x14, size 0xC
    class Vector3D m_acc; // offset 0x20, size 0xC
    float m_size; // offset 0x2C, size 0x4
    float m_sizeVel; // offset 0x30, size 0x4
    signed short m_lifetime; // offset 0x34, size 0x2
    unsigned char m_flag; // offset 0x36, size 0x1
    unsigned char m_mode; // offset 0x37, size 0x1
    unsigned char m_c[4]; // offset 0x38, size 0x4
    signed char m_cvel[4]; // offset 0x3C, size 0x4
    unsigned char m_c1[4]; // offset 0x40, size 0x4
    unsigned char m_c2[4]; // offset 0x44, size 0x4
    unsigned char m_rotdeg[3]; // offset 0x48, size 0x3
    unsigned char m_texIdx; // offset 0x4B, size 0x1
    float m_uva[2]; // offset 0x4C, size 0x8
    float m_uvb[2]; // offset 0x54, size 0x8
};
// total size: 0x20
class _rxHeapBlockHeader {
    // Members
public:
    class _rxHeapBlockHeader * prev; // offset 0x0, size 0x4
    class _rxHeapBlockHeader * next; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    class _rxHeapFreeBlock * freeEntry; // offset 0xC, size 0x4
    unsigned int pad[4]; // offset 0x10, size 0x10
};
// total size: 0x8
class _iTexRuntime {
    // Members
public:
    void * surface; // offset 0x0, size 0x4
    unsigned int m_flags; // offset 0x4, size 0x4
};
// total size: 0x34
class tagParCmd_Texture {
    // Members
public:
    float m_x1; // offset 0x0, size 0x4
    float m_y1; // offset 0x4, size 0x4
    float m_x2; // offset 0x8, size 0x4
    float m_y2; // offset 0xC, size 0x4
    signed char m_texBirth; // offset 0x10, size 0x1
    unsigned char m_texType; // offset 0x11, size 0x1
    unsigned char m_texAnim; // offset 0x12, size 0x1
    unsigned char m_texDir; // offset 0x13, size 0x1
    class Vector3D m_minVel; // offset 0x14, size 0xC
    signed short m_animCount; // offset 0x20, size 0x2
    signed short m_animWait; // offset 0x22, size 0x2
    float m_unitW; // offset 0x24, size 0x4
    float m_unitH; // offset 0x28, size 0x4
    float m_unitRW; // offset 0x2C, size 0x4
    unsigned char m_pad; // offset 0x30, size 0x1
    unsigned char m_unitCount; // offset 0x31, size 0x1
    unsigned char m_columns; // offset 0x32, size 0x1
    unsigned char m_rows; // offset 0x33, size 0x1
};
// total size: 0x8
class tagParCmd_KillOld {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[3]; // offset 0x1, size 0x3
    signed int m_ageLimit; // offset 0x4, size 0x4
};
// total size: 0x8
class tagParCmd_Move {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[3]; // offset 0x1, size 0x3
    signed int m_dt; // offset 0x4, size 0x4
};
enum _RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x8
class iActionResource {
    // Members
public:
    unsigned char m_cmdType; // offset 0x0, size 0x1
    unsigned char m_cmd; // offset 0x1, size 0x1
    unsigned short pad; // offset 0x2, size 0x2
    unsigned int m_cmdParameter; // offset 0x4, size 0x4
};
// total size: 0x8
class _rxHeapFreeBlock {
    // Members
public:
    unsigned int size; // offset 0x0, size 0x4
    class _rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
// total size: 0x1C
class iDisplayCamera {
    // Members
public:
    class Vector3D m_pos; // offset 0x0, size 0xC
    class Vector3D m_rot; // offset 0xC, size 0xC
    float m_fov; // offset 0x18, size 0x4
};
// total size: 0x14
class _RxPipelineNodeTopSortData {
    // Members
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class _rxReq * req; // offset 0x8, size 0x4
    void * initialisationData; // offset 0xC, size 0x4
    unsigned int initialisationDataSize; // offset 0x10, size 0x4
};
// total size: 0x60
class _RpWorldSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
    class _RpPolygon * polygons; // offset 0x4, size 0x4
    class _RwV3d * vertices; // offset 0x8, size 0x4
    class _RpVertexNormal * normals; // offset 0xC, size 0x4
    class _RwTexCoords * vertexTexCoords; // offset 0x10, size 0x4
    class _RwRGBA * preLitLum; // offset 0x14, size 0x4
    class _rwResEntryTag * repEntry; // offset 0x18, size 0x4
    class _RwLinkList collAtomicsInWorldSector; // offset 0x1C, size 0x8
    class _RwLinkList noCollAtomicsInWorldSector; // offset 0x24, size 0x8
    class _RwLinkList lightsInWorldSector; // offset 0x2C, size 0x8
    class _RwBBox boundingBox; // offset 0x34, size 0x18
    class _RpCollSector * colSectorRoot; // offset 0x4C, size 0x4
    class _RpMeshHeader * mesh; // offset 0x50, size 0x4
    class _RxPipeline * pipeline; // offset 0x54, size 0x4
    unsigned short matListWindowBase; // offset 0x58, size 0x2
    unsigned short numVertices; // offset 0x5A, size 0x2
    unsigned short numPolygons; // offset 0x5C, size 0x2
};
// total size: 0x48
class iTriggerResource {
    // Members
public:
    unsigned char m_type; // offset 0x0, size 0x1
    unsigned char m_geomType; // offset 0x1, size 0x1
    unsigned char m_enabled; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
    class Vector3D m_p[4]; // offset 0x4, size 0x30
    unsigned int m_ruleCount; // offset 0x34, size 0x4
    class xRule * m_rule; // offset 0x38, size 0x4
    unsigned int m_floorMask; // offset 0x3C, size 0x4
    unsigned int m_flags; // offset 0x40, size 0x4
    unsigned int m_cameraLink; // offset 0x44, size 0x4
};
// total size: 0x4
class iActionRuntime {
    // Members
public:
    class xAction * m_and; // offset 0x0, size 0x4
};
// total size: 0x1C
class tagxParSys {
    // Members
public:
    unsigned int m_idx; // offset 0x0, size 0x4
    class xPar * m_root; // offset 0x4, size 0x4
    class xPar * m_dead; // offset 0x8, size 0x4
    signed int m_num_of_particles; // offset 0xC, size 0x4
    class tagParCmdList * m_cmd; // offset 0x10, size 0x4
    unsigned char m_alive; // offset 0x14, size 0x1
    unsigned char m_killWhenDead; // offset 0x15, size 0x1
    unsigned char m_active; // offset 0x16, size 0x1
    unsigned char m_visible; // offset 0x17, size 0x1
    unsigned char m_culled; // offset 0x18, size 0x1
    unsigned char m_deadGlobalPool; // offset 0x19, size 0x1
    unsigned char m_pad[2]; // offset 0x1A, size 0x2
};
// total size: 0x20
class _RxPipelineNode {
    // Members
public:
    class _RxNodeDefinition * nodeDef; // offset 0x0, size 0x4
    unsigned int numOutputs; // offset 0x4, size 0x4
    unsigned int * outputs; // offset 0x8, size 0x4
    class _RxPipelineCluster * * slotClusterRefs; // offset 0xC, size 0x4
    unsigned int * slotsContinue; // offset 0x10, size 0x4
    void * privateData; // offset 0x14, size 0x4
    unsigned int * inputToClusterSlot; // offset 0x18, size 0x4
    class _RxPipelineNodeTopSortData * topSortData; // offset 0x1C, size 0x4
};
// total size: 0x10
class _RxClusterDefinition {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    char * attributeSet; // offset 0xC, size 0x4
};
// total size: 0x2C
class xNavPoint {
    // Members
public:
    unsigned int m_linkCount; // offset 0x0, size 0x4
    class xNavLink * m_link; // offset 0x4, size 0x4
    class Vector3D m_pos; // offset 0x8, size 0xC
    float m_cost; // offset 0x14, size 0x4
    float m_heuristic; // offset 0x18, size 0x4
    float m_f; // offset 0x1C, size 0x4
    class xNavPoint * m_parent; // offset 0x20, size 0x4
    unsigned short m_flags; // offset 0x24, size 0x2
    unsigned short m_occupiedCount; // offset 0x26, size 0x2
    unsigned int m_unused; // offset 0x28, size 0x4
};
// total size: 0x8
class _RxPipelineNodeParam {
    // Members
public:
    void * dataParam; // offset 0x0, size 0x4
    class _RxHeap * heap; // offset 0x4, size 0x4
};
// total size: 0x8
class _RxPipelineCluster {
    // Members
public:
    class _RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
enum _rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x3E84
class tagXStreamMDSDirectory {
    // Members
public:
    unsigned int count; // offset 0x0, size 0x4
    class tagXStreamDirectoryEntry directory[1000]; // offset 0x4, size 0x3E80
};
// total size: 0x74
class _RpWorld {
    // Members
public:
    class _RwObject object; // offset 0x0, size 0x8
    enum _rpWorldRenderOrder renderOrder; // offset 0x8, size 0x4
    class _RpMaterialList matList; // offset 0xC, size 0xC
    class _RpSector * rootSector; // offset 0x18, size 0x4
    signed int numClumpsInWorld; // offset 0x1C, size 0x4
    class _RwLLLink * currentClumpLink; // offset 0x20, size 0x4
    class _RwLinkList clumpList; // offset 0x24, size 0x8
    class _RwLinkList lightList; // offset 0x2C, size 0x8
    class _RwLinkList directionalLightList; // offset 0x34, size 0x8
    class _RwV3d worldOrigin; // offset 0x3C, size 0xC
    class _RwBBox boundingBox; // offset 0x48, size 0x18
    class _RwSurfaceProperties surfaceProps; // offset 0x60, size 0xC
    class _RpWorldSector * (* renderCallBack)(class _RpWorldSector *); // offset 0x6C, size 0x4
    class _RxPipeline * pipeline; // offset 0x70, size 0x4
};
// total size: 0xC
class iConditionResource {
    // Members
public:
    unsigned char m_osFlags; // offset 0x0, size 0x1
    unsigned char m_onFlags; // offset 0x1, size 0x1
    unsigned char m_whoFlags; // offset 0x2, size 0x1
    unsigned char m_operator; // offset 0x3, size 0x1
    unsigned char m_cmdType; // offset 0x4, size 0x1
    unsigned char m_cmd; // offset 0x5, size 0x1
    unsigned short pad; // offset 0x6, size 0x2
    unsigned int m_cmdParameter; // offset 0x8, size 0x4
};
// total size: 0x4
class tagParCmd_KillInvis {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad; // offset 0x1, size 0x1
    signed short m_ageMin; // offset 0x2, size 0x2
};
// total size: 0x40
class _RxNodeDefinition {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    class _RxNodeMethods nodeMethods; // offset 0x4, size 0x1C
    class _RxIoSpec io; // offset 0x20, size 0x14
    unsigned int pipelineNodePrivateDataSize; // offset 0x34, size 0x4
    enum _RxNodeDefEditable editable; // offset 0x38, size 0x4
    signed int InputPipesCnt; // offset 0x3C, size 0x4
};
enum _RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x4
class xTrigger {
    // Members
public:
    class iTriggerResource * m_resource; // offset 0x0, size 0x4
};
// total size: 0x10
class _RpMeshHeader {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned short numMeshes; // offset 0x4, size 0x2
    unsigned short serialNum; // offset 0x6, size 0x2
    unsigned int totalIndicesInMesh; // offset 0x8, size 0x4
    unsigned int firstMeshOffset; // offset 0xC, size 0x4
};
// total size: 0x4
class tagParCmd_RotMove {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_rotadjust[3]; // offset 0x1, size 0x3
};
// total size: 0x8
class iConditionRuntime {
    // Members
public:
    class xCondition * m_operand; // offset 0x0, size 0x4
    unsigned short m_match; // offset 0x4, size 0x2
    unsigned short m_trigger; // offset 0x6, size 0x2
};
// total size: 0xC
class _RwSurfaceProperties {
    // Members
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
// total size: 0x10
class tagParCmd_KillPlane {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[2]; // offset 0x1, size 0x2
    unsigned char m_killBelow; // offset 0x3, size 0x1
    class Vector3D m_plane; // offset 0x4, size 0xC
};
// total size: 0x8
class xRule {
    // Members
public:
    class iRuleResource * m_resource; // offset 0x0, size 0x4
    void * m_runtime; // offset 0x4, size 0x4
};
// total size: 0x10
class tagParCmd_RandomDisplace {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_minAge; // offset 0x1, size 0x1
    unsigned char m_delayCount; // offset 0x2, size 0x1
    unsigned char m_delay; // offset 0x3, size 0x1
    class Vector3D m_vel; // offset 0x4, size 0xC
};
// total size: 0x3
class _RpCollSector {
    // Members
public:
    unsigned char cType; // offset 0x0, size 0x1
    unsigned char vertex; // offset 0x1, size 0x1
    unsigned char start; // offset 0x2, size 0x1
};
// total size: 0xC
class _RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x4
class _RpSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
};
enum _RwTextureFilterMode {
    rwFILTERNAFILTERMODE = 0,
    rwFILTERNEAREST = 1,
    rwFILTERLINEAR = 2,
    rwFILTERMIPNEAREST = 3,
    rwFILTERMIPLINEAR = 4,
    rwFILTERLINEARMIPNEAREST = 5,
    rwFILTERLINEARMIPLINEAR = 6,
    rwTEXTUREFILTERMODEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x8
class xEntryPoint {
    // Members
public:
    class iEntryPointResource * m_resource; // offset 0x0, size 0x4
    class _iEntryPointRuntime * m_runtime; // offset 0x4, size 0x4
};
// total size: 0x8
class tagiFloorTri {
    // Members
public:
    unsigned short m_v[3]; // offset 0x0, size 0x6
    unsigned short m_n; // offset 0x6, size 0x2
};
// total size: 0x48
class iEntryPointResource {
    // Members
public:
    unsigned char m_type; // offset 0x0, size 0x1
    unsigned char m_geomType; // offset 0x1, size 0x1
    unsigned char m_nextCameraID; // offset 0x2, size 0x1
    unsigned char m_nextMarkerID; // offset 0x3, size 0x1
    class Vector3D m_p[4]; // offset 0x4, size 0x30
    unsigned int m_floorMask; // offset 0x34, size 0x4
    unsigned int m_nextSceneAssetID; // offset 0x38, size 0x4
    class Vector3D m_nextAng; // offset 0x3C, size 0xC
};
// total size: 0x10
class iRuleResource {
    // Members
public:
    unsigned int m_actionCount; // offset 0x0, size 0x4
    class xAction * m_action; // offset 0x4, size 0x4
    unsigned int m_conditionCount; // offset 0x8, size 0x4
    class xCondition * m_condition; // offset 0xC, size 0x4
};
// total size: 0x4
class _iEntryPointRuntime {
    // Members
public:
    unsigned int m_enabled; // offset 0x0, size 0x4
};
// total size: 0x10
class _PVRheader {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int nTextureDataSize; // offset 0x4, size 0x4
    unsigned int nTextureType; // offset 0x8, size 0x4
    unsigned short nWidth; // offset 0xC, size 0x2
    unsigned short nHeight; // offset 0xE, size 0x2
};
// total size: 0x8
class _RwLLLink {
    // Members
public:
    class _RwLLLink * next; // offset 0x0, size 0x4
    class _RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0xC
class _RxPipelineRequiresCluster {
    // Members
public:
    class _RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum _RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
// total size: 0x4A8
class xScene {
    // Members
public:
    unsigned int m_sceneId; // offset 0x0, size 0x4
    unsigned int m_cameraCount; // offset 0x4, size 0x4
    class xCamera * m_camera; // offset 0x8, size 0x4
    class iDisplayCamera m_displayCamera; // offset 0xC, size 0x1C
    unsigned int m_lightCount; // offset 0x28, size 0x4
    class xLight * m_light; // offset 0x2C, size 0x4
    unsigned int m_triggerCount; // offset 0x30, size 0x4
    class xTrigger * m_trigger; // offset 0x34, size 0x4
    unsigned int m_triggerNoWalkCount; // offset 0x38, size 0x4
    class xTrigger * * m_triggerNoWalk; // offset 0x3C, size 0x4
    unsigned int * m_triggerNoWalkFloorMask; // offset 0x40, size 0x4
    unsigned int m_triggerWalkCount; // offset 0x44, size 0x4
    class xTrigger * * m_triggerWalk; // offset 0x48, size 0x4
    unsigned int m_triggerGenericCount; // offset 0x4C, size 0x4
    class xTrigger * * m_triggerGeneric; // offset 0x50, size 0x4
    unsigned int * m_triggerGenericFloorMask; // offset 0x54, size 0x4
    unsigned int * m_triggerGenericGameEventFlags; // offset 0x58, size 0x4
    unsigned int m_triggerConditionCount; // offset 0x5C, size 0x4
    class xCondition * m_triggerCondition; // offset 0x60, size 0x4
    unsigned int m_triggerEffectCount; // offset 0x64, size 0x4
    class xTrigger * * m_triggerEffect; // offset 0x68, size 0x4
    unsigned int m_triggerMaterialCount; // offset 0x6C, size 0x4
    class xTrigger * * m_triggerMaterial; // offset 0x70, size 0x4
    unsigned int m_markerCount; // offset 0x74, size 0x4
    class xMarker * m_marker; // offset 0x78, size 0x4
    unsigned int m_entryPointCount; // offset 0x7C, size 0x4
    class xEntryPoint * m_entryPoint; // offset 0x80, size 0x4
    unsigned int m_navPointCount; // offset 0x84, size 0x4
    class xNavPoint * m_navPoint; // offset 0x88, size 0x4
    class tagiFloor * m_floor; // offset 0x8C, size 0x4
    signed int m_cullPlayerCount; // offset 0x90, size 0x4
    class iTriggerResource * m_cullPlayer[20]; // offset 0x94, size 0x50
    signed int m_cullNPCCount; // offset 0xE4, size 0x4
    class iTriggerResource * m_cullNPC[20]; // offset 0xE8, size 0x50
    signed int m_cullRTObjCount; // offset 0x138, size 0x4
    class iTriggerResource * m_cullRTObj[20]; // offset 0x13C, size 0x50
    signed int m_cullVFXCount; // offset 0x18C, size 0x4
    class iTriggerResource * m_cullVFX[20]; // offset 0x190, size 0x50
    signed int m_cullSFXCount; // offset 0x1E0, size 0x4
    class iTriggerResource * m_cullSFX[20]; // offset 0x1E4, size 0x50
    signed int m_cullLightCount; // offset 0x234, size 0x4
    class iTriggerResource * m_cullLight[20]; // offset 0x238, size 0x50
    signed int m_visPlayerCount; // offset 0x288, size 0x4
    class iTriggerResource * m_visPlayer[20]; // offset 0x28C, size 0x50
    signed int m_visNPCCount; // offset 0x2DC, size 0x4
    class iTriggerResource * m_visNPC[20]; // offset 0x2E0, size 0x50
    signed int m_visRTObjCount; // offset 0x330, size 0x4
    class iTriggerResource * m_visRTObj[20]; // offset 0x334, size 0x50
    signed int m_visVFXCount; // offset 0x384, size 0x4
    class iTriggerResource * m_visVFX[20]; // offset 0x388, size 0x50
    signed int m_visSFXCount; // offset 0x3D8, size 0x4
    class iTriggerResource * m_visSFX[20]; // offset 0x3DC, size 0x50
    signed int m_visLightCount; // offset 0x42C, size 0x4
    class iTriggerResource * m_visLight[20]; // offset 0x430, size 0x50
    class Vector3D m_ambientLight; // offset 0x480, size 0xC
    class Vector3D m_sunColor; // offset 0x48C, size 0xC
    class Vector3D m_sunDir; // offset 0x498, size 0xC
    class _tagxEnv m_env; // offset 0x4A4, size 0x4
};
// total size: 0x28
class tagParCmd_Jet {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[3]; // offset 0x1, size 0x3
    class Vector3D m_center; // offset 0x4, size 0xC
    class Vector3D m_acc; // offset 0x10, size 0xC
    float m_gravity; // offset 0x1C, size 0x4
    float m_epsilon; // offset 0x20, size 0x4
    float m_maxRadiusSqr; // offset 0x24, size 0x4
};
// total size: 0x4698
class XStreamHeader {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int versionID; // offset 0x4, size 0x4
    unsigned char month; // offset 0x8, size 0x1
    unsigned char day; // offset 0x9, size 0x1
    unsigned char hour; // offset 0xA, size 0x1
    unsigned char minute; // offset 0xB, size 0x1
    unsigned int mdsOffset; // offset 0xC, size 0x4
    unsigned int mdsLength; // offset 0x10, size 0x4
    class tagXStreamMDSDirectory directory; // offset 0x14, size 0x3E84
    char safety[2048]; // offset 0x3E98, size 0x800
};
// total size: 0xC
class Vector3D {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x2C
class _RxPipeline {
    // Members
public:
    signed int locked; // offset 0x0, size 0x4
    unsigned int numNodes; // offset 0x4, size 0x4
    class _RxPipelineNode * nodes; // offset 0x8, size 0x4
    void * nodesBlock; // offset 0xC, size 0x4
    unsigned int packetNumClusterSlots; // offset 0x10, size 0x4
    enum _rxEmbeddedPacketState embeddedPacketState; // offset 0x14, size 0x4
    class _RxPacket * embeddedPacket; // offset 0x18, size 0x4
    unsigned int numInputRequirements; // offset 0x1C, size 0x4
    class _RxPipelineRequiresCluster * inputRequirements; // offset 0x20, size 0x4
    unsigned int * superBlock; // offset 0x24, size 0x4
    unsigned int entryPoint; // offset 0x28, size 0x4
};
// total size: 0xC
class _RpMaterialList {
    // Members
public:
    class _RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
};
// total size: 0x0
class _rxReq {};
// total size: 0x28
class _iParRingMode {
    // Members
public:
    float ring_radius; // offset 0x0, size 0x4
    float ring_radius_delta; // offset 0x4, size 0x4
    float ring_tilt; // offset 0x8, size 0x4
    float ring_tilt_delta; // offset 0xC, size 0x4
    float ring_height; // offset 0x10, size 0x4
    float ring_height_delta; // offset 0x14, size 0x4
    unsigned int ring_color[3]; // offset 0x18, size 0xC
    signed char ring_abr; // offset 0x24, size 0x1
    signed char ring_flat; // offset 0x25, size 0x1
    signed char ring_segs; // offset 0x26, size 0x1
    signed char pad; // offset 0x27, size 0x1
};
// total size: 0x8
class xCamera {
    // Members
public:
    class iCameraResource * m_resource; // offset 0x0, size 0x4
    void * * m_runtime; // offset 0x4, size 0x4
};
// total size: 0x1C
class _RpMaterial {
    // Members
public:
    class _RwTexture * texture; // offset 0x0, size 0x4
    class _RwRGBA color; // offset 0x4, size 0x4
    class _RxPipeline * pipeline; // offset 0x8, size 0x4
    class _RwSurfaceProperties surfaceProps; // offset 0xC, size 0xC
    signed short refCount; // offset 0x18, size 0x2
    signed short pad; // offset 0x1A, size 0x2
};
// total size: 0x8
class _RwObject {
    // Members
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};
// total size: 0x8
class xLight {
    // Members
public:
    class iLightResource * m_resource; // offset 0x0, size 0x4
    class _iLightRuntime * m_runtime; // offset 0x4, size 0x4
};
// total size: 0x1C
class p2Camera {
    // Members
public:
    class Vector3D m_pos; // offset 0x0, size 0xC
    class Vector3D m_rot; // offset 0xC, size 0xC
    float m_fov; // offset 0x18, size 0x4
};
// total size: 0x2C
class iLightResource {
    // Members
public:
    unsigned int m_type; // offset 0x0, size 0x4
    class Vector3D m_pos; // offset 0x4, size 0xC
    class Vector3D m_rot; // offset 0x10, size 0xC
    class Vector3D m_color; // offset 0x1C, size 0xC
    signed int m_fov; // offset 0x28, size 0x4
};
// total size: 0x74
class _iLightRuntime {
    // Members
public:
    unsigned char m_enabled; // offset 0x0, size 0x1
    unsigned char m_dir; // offset 0x1, size 0x1
    unsigned char m_mode; // offset 0x2, size 0x1
    float m_falloff[3]; // offset 0x4, size 0xC
    float m_weight; // offset 0x10, size 0x4
    signed short m_frameSpeed; // offset 0x14, size 0x2
    signed short m_frameCount; // offset 0x16, size 0x2
    float m_speed; // offset 0x18, size 0x4
    class iLightResource m_anchor[2]; // offset 0x1C, size 0x58
};
// total size: 0xC
class _RxOutputSpec {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum _RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum _RxClusterValid allOtherClusters; // offset 0x8, size 0x4
};
// total size: 0x18
class _RwTexDictionary {
    // Members
public:
    class _RwObject object; // offset 0x0, size 0x8
    class _RwLinkList texturesInDict; // offset 0x8, size 0x8
    class _RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0x8
class xAction {
    // Members
public:
    class iActionResource * m_resource; // offset 0x0, size 0x4
    class iActionRuntime * m_runtime; // offset 0x4, size 0x4
};
// total size: 0x4
class _RpVertexNormal {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
    signed char z; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
};
// total size: 0xC
class iMarkerResource {
    // Members
public:
    class Vector3D m_pos; // offset 0x0, size 0xC
};
// total size: 0x10
class tagXStreamDirectoryEntry {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int type; // offset 0x4, size 0x4
    unsigned int offset; // offset 0x8, size 0x4
    unsigned int length; // offset 0xC, size 0x4
};
// total size: 0x8
class _RwTexCoords {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0xC
class _RxClusterRef {
    // Members
public:
    class _RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum _RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
// total size: 0x8
class xMarker {
    // Members
public:
    class iMarkerResource * m_resource; // offset 0x0, size 0x4
    void * * m_runtime; // offset 0x4, size 0x4
};
// total size: 0x4
class _RwRGBA {
    // Members
public:
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// total size: 0x8
class xCondition {
    // Members
public:
    class iConditionResource * m_resource; // offset 0x0, size 0x4
    class iConditionRuntime * m_runtime; // offset 0x4, size 0x4
};
// total size: 0x10
class p2CameraVersion {
    // Members
public:
    unsigned short m_introStart; // offset 0x0, size 0x2
    unsigned short m_loopStart; // offset 0x2, size 0x2
    unsigned short m_loopEnd; // offset 0x4, size 0x2
    unsigned short m_exitEnd; // offset 0x6, size 0x2
    unsigned short m_flashFrame; // offset 0x8, size 0x2
    unsigned char m_introRate; // offset 0xA, size 0x1
    unsigned char m_loopRate; // offset 0xB, size 0x1
    unsigned char m_exitRate; // offset 0xC, size 0x1
    unsigned char m_flashRate; // offset 0xD, size 0x1
    unsigned short m_flags; // offset 0xE, size 0x2
};
// total size: 0x14
class _RxIoSpec {
    // Members
public:
    unsigned int numClustersOfInterest; // offset 0x0, size 0x4
    class _RxClusterRef * clustersOfInterest; // offset 0x4, size 0x4
    enum _RxClusterValidityReq * inputRequirements; // offset 0x8, size 0x4
    unsigned int numOutputs; // offset 0xC, size 0x4
    class _RxOutputSpec * outputs; // offset 0x10, size 0x4
};
// total size: 0x1C
class tagParCmd_OrbitPoint {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[3]; // offset 0x1, size 0x3
    class Vector3D m_center; // offset 0x4, size 0xC
    float m_gravity; // offset 0x10, size 0x4
    float m_epsilon; // offset 0x14, size 0x4
    float m_maxRadiusSqr; // offset 0x18, size 0x4
};
// total size: 0x18
class _RwBBox {
    // Members
public:
    class _RwV3d sup; // offset 0x0, size 0xC
    class _RwV3d inf; // offset 0xC, size 0xC
};
// total size: 0x1C
class _RxNodeMethods {
    // Members
public:
    signed int (* nodeBody)(class _RxPipelineNode *, class _RxPipelineNodeParam *); // offset 0x0, size 0x4
    signed int (* nodeInit)(class _RxNodeDefinition *); // offset 0x4, size 0x4
    void (* nodeTerm)(class _RxNodeDefinition *); // offset 0x8, size 0x4
    signed int (* pipelineNodeInit)(class _RxPipelineNode *); // offset 0xC, size 0x4
    void (* pipelineNodeTerm)(class _RxPipelineNode *); // offset 0x10, size 0x4
    signed int (* pipelineNodeConfig)(class _RxPipelineNode *, class _RxPipeline *); // offset 0x14, size 0x4
    unsigned int (* configMsgHandler)(class _RxPipelineNode *, unsigned int, unsigned int, void *); // offset 0x18, size 0x4
};
// total size: 0x60
class _RwTexture {
    // Members
public:
    class _RwRaster * raster; // offset 0x0, size 0x4
    class _RwTexDictionary * dict; // offset 0x4, size 0x4
    class _RwLLLink lInDictionary; // offset 0x8, size 0x8
    char name[32]; // offset 0x10, size 0x20
    char mask[32]; // offset 0x30, size 0x20
    signed int refCount; // offset 0x50, size 0x4
    enum _RwTextureFilterMode filtering; // offset 0x54, size 0x4
    enum _RwTextureAddressMode addressingU; // offset 0x58, size 0x4
    enum _RwTextureAddressMode addressingV; // offset 0x5C, size 0x4
};
// total size: 0x14
class _tagiEnvRuntime {
    // Members
public:
    class _RpWorld * world; // offset 0x0, size 0x4
    class Vector3D world_origin; // offset 0x4, size 0xC
    class _RwTexDictionary * tex_dict; // offset 0x10, size 0x4
};
enum _RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x8
class _xTex {
    // Members
public:
    class _iTexResource * m_resource; // offset 0x0, size 0x4
    class _iTexRuntime * m_runtime; // offset 0x4, size 0x4
};
// total size: 0x34
class _RwRaster {
    // Members
public:
    class _RwRaster * parent; // offset 0x0, size 0x4
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
// total size: 0x30
class _RxPacket {
    // Members
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short numClusters; // offset 0x2, size 0x2
    class _RxPipeline * pipeline; // offset 0x4, size 0x4
    unsigned int * inputToClusterSlot; // offset 0x8, size 0x4
    unsigned int * slotsContinue; // offset 0xC, size 0x4
    class _RxPipelineCluster * * slotClusterRefs; // offset 0x10, size 0x4
    class _RxCluster clusters[1]; // offset 0x14, size 0x1C
};
// total size: 0x5C
class iCameraResource {
    // Members
public:
    unsigned short m_plateOffset; // offset 0x0, size 0x2
    unsigned short m_versions; // offset 0x2, size 0x2
    class p2CameraVersion m_version[5]; // offset 0x4, size 0x50
    unsigned int m_frameCount; // offset 0x54, size 0x4
    class p2Camera * m_cameras; // offset 0x58, size 0x4
};
enum _RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x4
class _RxClusterUnion {
    // Members
public:
    union { // inferred
        class _RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
        class _RxPipelineCluster * clusterRef; // offset 0x0, size 0x4
    };
};
// total size: 0x1C
class _iParSphereMode {
    // Members
public:
    float sphere_radius; // offset 0x0, size 0x4
    float sphere_radius_delta; // offset 0x4, size 0x4
    unsigned int sphere_color[3]; // offset 0x8, size 0xC
    signed int sphere_fade; // offset 0x14, size 0x4
    signed char sphere_abr; // offset 0x18, size 0x1
    unsigned char sphere_segs; // offset 0x19, size 0x1
    signed char sphere_tex; // offset 0x1A, size 0x1
    unsigned char sphere_hemi; // offset 0x1B, size 0x1
};
// total size: 0x1C
class _RxCluster {
    // Members
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short stride; // offset 0x2, size 0x2
    void * data; // offset 0x4, size 0x4
    void * currentData; // offset 0x8, size 0x4
    unsigned int numAlloced; // offset 0xC, size 0x4
    unsigned int numUsed; // offset 0x10, size 0x4
    class _RxClusterUnion clusterUnion; // offset 0x14, size 0x4
    unsigned int attributes; // offset 0x18, size 0x4
};
// total size: 0x8
class _RwLinkList {
    // Members
public:
    class _RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0x1C
class tagParCmd_Turbulence {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[2]; // offset 0x1, size 0x2
    unsigned char m_dirSinCos; // offset 0x3, size 0x1
    float m_ageMin; // offset 0x4, size 0x4
    float m_ageMax; // offset 0x8, size 0x4
    float m_lift; // offset 0xC, size 0x4
    float m_max_swirl_radius; // offset 0x10, size 0x4
    float m_currentSpin; // offset 0x14, size 0x4
    float m_spinRate; // offset 0x18, size 0x4
};
enum _RwTextureAddressMode {
    rwTEXTUREADDRESSNATEXTUREADDRESS = 0,
    rwTEXTUREADDRESSWRAP = 1,
    rwTEXTUREADDRESSMIRROR = 2,
    rwTEXTUREADDRESSCLAMP = 3,
    rwTEXTUREADDRESSBORDER = 4,
    rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 2147483647,
};
enum _rpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x4
class _tagxEnv {
    // Members
public:
    class _tagiEnvRuntime * m_runtime; // offset 0x0, size 0x4
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00371AB0 -> 0x00371E2C
*/
// Range: 0x371AB0 -> 0x371E2C
void iParIniVFXDaggerAttack(class tagParCmdList * list /* r18 */) {
    /* anonymous block */ {
        // Range: 0x371AB0 -> 0x371E2C
        class tagParCmd_KillOld * d; // r16
        class tagParCmd_Texture * d; // r17
        class tagParCmd_Emitter * d; // r16
        class xParCmd * cmd; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00371E30 -> 0x00372628
*/
// Range: 0x371E30 -> 0x372628
void iParIniVFXFireBall(class tagParCmdList * list /* r16 */) {
    /* anonymous block */ {
        // Range: 0x371E30 -> 0x372628
        class tagParCmd_SpawnVFX * d; // r16
        class tagParCmd_SpawnVFX * d; // r17
        class tagParCmd_SpawnVFX * d; // r17
        class tagParCmd_KillPlane * d; // r17
        class tagParCmd_Move * d; // r17
        class tagParCmd_Accelerate * d; // r17
        class tagParCmd_Texture * d; // r18
        class tagParCmd_Emitter * d; // r17
        class xParCmd * cmd; // r17
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00372630 -> 0x00372A64
*/
// Range: 0x372630 -> 0x372A64
void iParIniVFXSplash(class tagParCmdList * list /* r18 */) {
    /* anonymous block */ {
        // Range: 0x372630 -> 0x372A64
        class tagParCmd_KillOld * d; // r16
        class tagParCmd_Move * d; // r16
        class tagParCmd_Texture * d; // r17
        class tagParCmd_Emitter * d; // r16
        class xParCmd * cmd; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00372A70 -> 0x00372EA4
*/
// Range: 0x372A70 -> 0x372EA4
void iParIniVFXEnergyBlow(class tagParCmdList * list /* r18 */) {
    /* anonymous block */ {
        // Range: 0x372A70 -> 0x372EA4
        class tagParCmd_KillOld * d; // r16
        class tagParCmd_Move * d; // r16
        class tagParCmd_Texture * d; // r17
        class tagParCmd_Emitter * d; // r16
        class xParCmd * cmd; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00372EB0 -> 0x003732E4
*/
// Range: 0x372EB0 -> 0x3732E4
void iParIniVFXEnergySuck(class tagParCmdList * list /* r18 */) {
    /* anonymous block */ {
        // Range: 0x372EB0 -> 0x3732E4
        class tagParCmd_KillOld * d; // r16
        class tagParCmd_Move * d; // r16
        class tagParCmd_Texture * d; // r17
        class tagParCmd_Emitter * d; // r16
        class xParCmd * cmd; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003732F0 -> 0x00373724
*/
// Range: 0x3732F0 -> 0x373724
void iParIniVFXMoltenLeadPour(class tagParCmdList * list /* r18 */) {
    /* anonymous block */ {
        // Range: 0x3732F0 -> 0x373724
        class tagParCmd_KillOld * d; // r16
        class tagParCmd_Move * d; // r16
        class tagParCmd_Texture * d; // r17
        class tagParCmd_Emitter * d; // r16
        class xParCmd * cmd; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00373730 -> 0x00373B64
*/
// Range: 0x373730 -> 0x373B64
void iParIniVFXWaterPour(class tagParCmdList * list /* r18 */) {
    /* anonymous block */ {
        // Range: 0x373730 -> 0x373B64
        class tagParCmd_KillOld * d; // r16
        class tagParCmd_Move * d; // r16
        class tagParCmd_Texture * d; // r17
        class tagParCmd_Emitter * d; // r16
        class xParCmd * cmd; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00373B70 -> 0x00373FA4
*/
// Range: 0x373B70 -> 0x373FA4
void iParIniVFXLightShaft(class tagParCmdList * list /* r18 */) {
    /* anonymous block */ {
        // Range: 0x373B70 -> 0x373FA4
        class tagParCmd_KillOld * d; // r16
        class tagParCmd_Move * d; // r16
        class tagParCmd_Texture * d; // r17
        class tagParCmd_Emitter * d; // r16
        class xParCmd * cmd; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00373FB0 -> 0x00374318
*/
// Range: 0x373FB0 -> 0x374318
void iParIniVFXExpandingRing(class tagParCmdList * list /* r18 */) {
    /* anonymous block */ {
        // Range: 0x373FB0 -> 0x374318
        class tagParCmd_KillOld * d; // r16
        class tagParCmd_Texture * d; // r17
        class tagParCmd_Emitter * d; // r16
        class xParCmd * cmd; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00374320 -> 0x00374754
*/
// Range: 0x374320 -> 0x374754
void iParIniVFXExpandingSphere(class tagParCmdList * list /* r18 */) {
    /* anonymous block */ {
        // Range: 0x374320 -> 0x374754
        class tagParCmd_KillOld * d; // r16
        class tagParCmd_Move * d; // r16
        class tagParCmd_Texture * d; // r17
        class tagParCmd_Emitter * d; // r16
        class xParCmd * cmd; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00374760 -> 0x00374BB8
*/
// Range: 0x374760 -> 0x374BB8
void iParIniVFXTwinkle(class tagParCmdList * list /* r18 */) {
    /* anonymous block */ {
        // Range: 0x374760 -> 0x374BB8
        class tagParCmd_KillOld * d; // r16
        class tagParCmd_Move * d; // r16
        class tagParCmd_Texture * d; // r17
        class tagParCmd_Emitter * d; // r16
        class xParCmd * cmd; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00374BC0 -> 0x0037502C
*/
// Range: 0x374BC0 -> 0x37502C
void iParIniVFXLight(class tagParCmdList * list /* r18 */) {
    /* anonymous block */ {
        // Range: 0x374BC0 -> 0x37502C
        class tagParCmd_KillOld * d; // r16
        class tagParCmd_Move * d; // r16
        class tagParCmd_Texture * d; // r17
        class tagParCmd_Emitter * d; // r16
        class xParCmd * cmd; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00375030 -> 0x00375490
*/
// Range: 0x375030 -> 0x375490
void iParIniVFXFootprint(class tagParCmdList * list /* r18 */) {
    /* anonymous block */ {
        // Range: 0x375030 -> 0x375490
        class tagParCmd_KillOld * d; // r16
        class tagParCmd_Move * d; // r16
        class tagParCmd_Texture * d; // r17
        class tagParCmd_Emitter * d; // r16
        class xParCmd * cmd; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00375490 -> 0x00375908
*/
// Range: 0x375490 -> 0x375908
void iParIniVFXBreath(class tagParCmdList * list /* r18 */) {
    /* anonymous block */ {
        // Range: 0x375490 -> 0x375908
        class tagParCmd_KillOld * d; // r16
        class tagParCmd_Move * d; // r16
        class tagParCmd_Texture * d; // r17
        class tagParCmd_Emitter * d; // r16
        class xParCmd * cmd; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00375910 -> 0x00375F54
*/
// Range: 0x375910 -> 0x375F54
void iParIniVFXSpark(class tagParCmdList * list /* r18 */) {
    /* anonymous block */ {
        // Range: 0x375910 -> 0x375F54
        class tagParCmd_KillOld * d; // r16
        class tagParCmd_Bounce * d; // r16
        class tagParCmd_Move * d; // r16
        class tagParCmd_Accelerate * d; // r16
        class tagParCmd_Texture * d; // r17
        class tagParCmd_Emitter * d; // r16
        class xParCmd * cmd; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00375F60 -> 0x003765CC
*/
// Range: 0x375F60 -> 0x3765CC
void iParIniVFXRegionFog(class tagParCmdList * list /* r18 */) {
    /* anonymous block */ {
        // Range: 0x375F60 -> 0x3765CC
        class tagParCmd_KillOld * d; // r16
        class tagParCmd_Bounce * d; // r16
        class tagParCmd_Move * d; // r16
        class tagParCmd_Accelerate * d; // r16
        class tagParCmd_Texture * d; // r17
        class tagParCmd_Emitter * d; // r16
        class xParCmd * cmd; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003765D0 -> 0x00376E44
*/
// Range: 0x3765D0 -> 0x376E44
void iParIniVFXRegionLeaves(class tagParCmdList * list /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3765D0 -> 0x376E44
        class tagParCmd_KillOld * d; // r16
        class tagParCmd_Bounce * d; // r17
        class tagParCmd_Move * d; // r17
        class tagParCmd_Turbulence * d; // r17
        class tagParCmd_Jet * d; // r17
        class tagParCmd_Accelerate * d; // r17
        class tagParCmd_Texture * d; // r18
        class tagParCmd_Emitter * d; // r17
        class xParCmd * cmd; // r17
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00376E50 -> 0x00377480
*/
// Range: 0x376E50 -> 0x377480
void iParIniVFXRegionDust(class tagParCmdList * list /* r18 */) {
    /* anonymous block */ {
        // Range: 0x376E50 -> 0x377480
        class tagParCmd_KillOld * d; // r16
        class tagParCmd_OrbitPoint * d; // r16
        class tagParCmd_RandomDisplace * d; // r16
        class tagParCmd_Move * d; // r16
        class tagParCmd_Texture * d; // r17
        class tagParCmd_Emitter * d; // r16
        class xParCmd * cmd; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00377480 -> 0x00377C5C
*/
// Range: 0x377480 -> 0x377C5C
void iParIniVFXRegionRain(class tagParCmdList * list /* r16 */) {
    /* anonymous block */ {
        // Range: 0x377480 -> 0x377C5C
        class tagParCmd_SpawnVFX * d; // r16
        class tagParCmd_KillPlane * d; // r17
        class tagParCmd_KillOld * d; // r17
        class tagParCmd_KillInvis * d; // r17
        class tagParCmd_Move * d; // r17
        class tagParCmd_Accelerate * d; // r17
        class tagParCmd_Texture * d; // r18
        class tagParCmd_Emitter * d; // r17
        class xParCmd * cmd; // r17
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00377C60 -> 0x003780E4
*/
// Range: 0x377C60 -> 0x3780E4
void iParIniVFXRainSplatter(class tagParCmdList * list /* r18 */) {
    /* anonymous block */ {
        // Range: 0x377C60 -> 0x3780E4
        class tagParCmd_KillOld * d; // r16
        class tagParCmd_Move * d; // r16
        class tagParCmd_Texture * d; // r17
        class tagParCmd_Emitter * d; // r16
        class xParCmd * cmd; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003780F0 -> 0x00378704
*/
// Range: 0x3780F0 -> 0x378704
void iParIniVFXMagicPortal(class tagParCmdList * list /* r18 */) {
    /* anonymous block */ {
        // Range: 0x3780F0 -> 0x378704
        class tagParCmd_KillOld * d; // r16
        class tagParCmd_SpawnVFX * d; // r16
        class tagParCmd_Move * d; // r16
        class tagParCmd_RotMove * d; // r16
        class tagParCmd_Texture * d; // r17
        class tagParCmd_Emitter * d; // r16
        class xParCmd * cmd; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00378710 -> 0x00378B90
*/
// Range: 0x378710 -> 0x378B90
void iParIniVFXBloodPool(class tagParCmdList * list /* r18 */) {
    /* anonymous block */ {
        // Range: 0x378710 -> 0x378B90
        class tagParCmd_KillOld * d; // r16
        class tagParCmd_Move * d; // r16
        class tagParCmd_Texture * d; // r17
        class tagParCmd_Emitter * d; // r16
        class xParCmd * cmd; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00378B90 -> 0x0037941C
*/
// Range: 0x378B90 -> 0x37941C
void iParIniVFXBlackVomit(class tagParCmdList * list /* r16 */) {
    /* anonymous block */ {
        // Range: 0x378B90 -> 0x37941C
        class tagParCmd_SpawnVFX * d; // r16
        class tagParCmd_KillOld * d; // r17
        class tagParCmd_RandomDisplace * d; // r17
        class tagParCmd_Bounce * d; // r17
        class tagParCmd_Move * d; // r17
        class tagParCmd_Accelerate * d; // r17
        class tagParCmd_Texture * d; // r18
        class tagParCmd_Emitter * d; // r17
        class xParCmd * cmd; // r17
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00379420 -> 0x00379C74
*/
// Range: 0x379420 -> 0x379C74
void iParIniVFXExplodingEarth(class tagParCmdList * list /* r16 */) {
    /* anonymous block */ {
        // Range: 0x379420 -> 0x379C74
        class tagParCmd_SpawnVFX * d; // r16
        class tagParCmd_KillOld * d; // r17
        class tagParCmd_Bounce * d; // r17
        class tagParCmd_Move * d; // r17
        class tagParCmd_Accelerate * d; // r17
        class tagParCmd_Texture * d; // r18
        class tagParCmd_Emitter * d; // r17
        class xParCmd * cmd; // r17
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00379C80 -> 0x0037A2BC
*/
// Range: 0x379C80 -> 0x37A2BC
void iParIniVFXBloodSlash(class tagParCmdList * list /* r18 */) {
    /* anonymous block */ {
        // Range: 0x379C80 -> 0x37A2BC
        class tagParCmd_SpawnVFX * d; // r16
        class tagParCmd_KillPlane * d; // r16
        class tagParCmd_Move * d; // r16
        class tagParCmd_Accelerate * d; // r16
        class tagParCmd_Texture * d; // r17
        class tagParCmd_Emitter * d; // r16
        class xParCmd * cmd; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0037A2C0 -> 0x0037A8FC
*/
// Range: 0x37A2C0 -> 0x37A8FC
void iParIniVFXBloodDrip(class tagParCmdList * list /* r18 */) {
    /* anonymous block */ {
        // Range: 0x37A2C0 -> 0x37A8FC
        class tagParCmd_SpawnVFX * d; // r16
        class tagParCmd_KillPlane * d; // r16
        class tagParCmd_Move * d; // r16
        class tagParCmd_Accelerate * d; // r16
        class tagParCmd_Texture * d; // r17
        class tagParCmd_Emitter * d; // r16
        class xParCmd * cmd; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0037A900 -> 0x0037AF48
*/
// Range: 0x37A900 -> 0x37AF48
void iParIniVFXBloodSpurt(class tagParCmdList * list /* r18 */) {
    /* anonymous block */ {
        // Range: 0x37A900 -> 0x37AF48
        class tagParCmd_SpawnVFX * d; // r16
        class tagParCmd_KillPlane * d; // r16
        class tagParCmd_Move * d; // r16
        class tagParCmd_Accelerate * d; // r16
        class tagParCmd_Texture * d; // r17
        class tagParCmd_Emitter * d; // r16
        class xParCmd * cmd; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0037AF50 -> 0x0037B3B8
*/
// Range: 0x37AF50 -> 0x37B3B8
void iParIniVFXFire(class tagParCmdList * list /* r18 */) {
    /* anonymous block */ {
        // Range: 0x37AF50 -> 0x37B3B8
        class tagParCmd_KillOld * d; // r16
        class tagParCmd_Move * d; // r16
        class tagParCmd_Texture * d; // r17
        class tagParCmd_Emitter * d; // r16
        class xParCmd * cmd; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0037B3C0 -> 0x0037B824
*/
// Range: 0x37B3C0 -> 0x37B824
void iParIniVFXMuzzleFlash(class tagParCmdList * list /* r18 */) {
    /* anonymous block */ {
        // Range: 0x37B3C0 -> 0x37B824
        class tagParCmd_KillOld * d; // r16
        class tagParCmd_Move * d; // r16
        class tagParCmd_Texture * d; // r17
        class tagParCmd_Emitter * d; // r16
        class xParCmd * cmd; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0037B830 -> 0x0037BF4C
*/
// Range: 0x37B830 -> 0x37BF4C
void iParIniVFXBoneFragment(class tagParCmdList * list /* r16 */) {
    /* anonymous block */ {
        // Range: 0x37B830 -> 0x37BF4C
        class tagParCmd_KillOld * d; // r16
        class tagParCmd_Bounce * d; // r17
        class tagParCmd_Move * d; // r17
        class tagParCmd_RotMove * d; // r17
        class tagParCmd_Accelerate * d; // r17
        class tagParCmd_Texture * d; // r18
        class tagParCmd_Emitter * d; // r17
        class xParCmd * cmd; // r17
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0037BF50 -> 0x0037C5D4
*/
// Range: 0x37BF50 -> 0x37C5D4
void iParIniVFXShellEject(class tagParCmdList * list /* r18 */) {
    /* anonymous block */ {
        // Range: 0x37BF50 -> 0x37C5D4
        class tagParCmd_Bounce * d; // r16
        class tagParCmd_Move * d; // r16
        class tagParCmd_Jet * d; // r16
        class tagParCmd_Accelerate * d; // r16
        class tagParCmd_Texture * d; // r17
        class tagParCmd_Emitter * d; // r16
        class xParCmd * cmd; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0037C5E0 -> 0x0037CB34
*/
// Range: 0x37C5E0 -> 0x37CB34
void iParIniVFXBulletStreak(class tagParCmdList * list /* r18 */) {
    /* anonymous block */ {
        // Range: 0x37C5E0 -> 0x37CB34
        class tagParCmd_SpawnVFX * d; // r16
        class tagParCmd_KillOld * d; // r16
        class tagParCmd_Move * d; // r16
        class tagParCmd_Texture * d; // r17
        class tagParCmd_Emitter * d; // r16
        class xParCmd * cmd; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0037CB40 -> 0x0037D0B0
*/
// Range: 0x37CB40 -> 0x37D0B0
void iParIniVFXGroundPuff(class tagParCmdList * list /* r18 */) {
    /* anonymous block */ {
        // Range: 0x37CB40 -> 0x37D0B0
        class tagParCmd_KillOld * d; // r16
        class tagParCmd_Move * d; // r16
        class tagParCmd_Accelerate * d; // r16
        class tagParCmd_Texture * d; // r17
        class tagParCmd_Emitter * d; // r16
        class xParCmd * cmd; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0037D0B0 -> 0x0037D54C
*/
// Range: 0x37D0B0 -> 0x37D54C
void iParIniVFXSmoke(class tagParCmdList * list /* r18 */) {
    /* anonymous block */ {
        // Range: 0x37D0B0 -> 0x37D54C
        class tagParCmd_KillOld * d; // r16
        class tagParCmd_Move * d; // r16
        class tagParCmd_Texture * d; // r17
        class tagParCmd_Emitter * d; // r16
        class xParCmd * cmd; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0037D550 -> 0x0037D65C
*/
// Range: 0x37D550 -> 0x37D65C
void iParMgrRenderParSys_Twinkle(class tagxParSys * ps /* r2 */) {
    /* anonymous block */ {
        // Range: 0x37D550 -> 0x37D65C
        float dy; // r29+0x20
        float dx; // r29+0x20
        float z; // r1
        float y; // r29+0x20
        float x; // r29+0x20
        class xPar * idx; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0037D660 -> 0x0037D74C
*/
// Range: 0x37D660 -> 0x37D74C
void iParMgrRenderParSys_Sprite(class tagxParSys * ps /* r2 */) {
    /* anonymous block */ {
        // Range: 0x37D660 -> 0x37D74C
        class Vector3D v[3]; // r29+0x20
        float z; // r29+0x50
        float y; // r29+0x50
        float x; // r29+0x50
        class xPar * idx; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0037D750 -> 0x0037DB74
*/
// Range: 0x37D750 -> 0x37DB74
void iParMgrRenderParSys_DrawLight(class tagxParSys * ps /* r2 */) {
    /* anonymous block */ {
        // Range: 0x37D750 -> 0x37DB74
        float plane; // r29+0x70
        signed int zbit; // r5
        signed int xbit; // r18
        float a; // r29+0x70
        float b; // r29+0x70
        float g; // r29+0x70
        float r; // r29+0x70
        float hsize; // r29+0x70
        class tagiFloor * f; // r17
        float zow; // r21
        float xow; // r20
        class xPar * idx; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0037DB80 -> 0x0037E590
*/
// Range: 0x37DB80 -> 0x37E590
void iParMgrRenderParSys_ExpandingSphere(class tagxParSys * ps /* r2 */) {
    /* anonymous block */ {
        // Range: 0x37DB80 -> 0x37E590
        float ca3; // r29+0xB0
        float sa3; // r24
        float ca2; // r29+0xB0
        float sa2; // r24
        float ca1; // r23
        float sa1; // r22
        float r2; // r23
        float r1; // r22
        float a3; // r31
        float a2; // r21
        float a1; // r20
        float h2; // r21
        float h1; // r20
        float radius; // r29+0xAC
        float alpha; // r29+0xB0
        float blue; // r29+0xB0
        float green; // r29+0xB0
        float red; // r29+0xB0
        class _iParSphereMode * o; // r19
        class xPar * p; // r18
        unsigned int j; // r17
        signed int i; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0037E590 -> 0x0037ED0C
*/
// Range: 0x37E590 -> 0x37ED0C
void iParMgrRenderParSys_ExpandingRing(class tagxParSys * ps /* r2 */) {
    /* anonymous block */ {
        // Range: 0x37E590 -> 0x37ED0C
        float cosval; // r29+0xC0
        float sinval; // r20
        float angle; // r27
        float tilt; // r20
        float height; // r29+0xBC
        float oradius; // r29+0xB8
        float radius; // r29+0xB4
        float alpha; // r29+0xC0
        float blue; // r29+0xC0
        float green; // r29+0xC0
        float red; // r29+0xC0
        class _iParRingMode * m; // r18
        class xPar * p; // r17
        signed int i; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0037ED10 -> 0x0037EF2C
*/
// Range: 0x37ED10 -> 0x37EF2C
void iParMgrRenderParSys_DrawFlatPoly(class tagxParSys * ps /* r2 */) {
    /* anonymous block */ {
        // Range: 0x37ED10 -> 0x37EF2C
        float a; // r29+0x20
        float b; // r29+0x20
        float g; // r29+0x20
        float r; // r29+0x20
        float hsize; // r29+0x20
        class xPar * idx; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0037EF30 -> 0x0037F054
*/
// Range: 0x37EF30 -> 0x37F054
void iParMgrRenderParSys_DrawRegionRain(class tagxParSys * ps /* r2 */) {
    /* anonymous block */ {
        // Range: 0x37EF30 -> 0x37F054
        class Vector3D v[3]; // r29+0x20
        float a; // r29+0x50
        float b; // r29+0x50
        float g; // r29+0x50
        float r; // r29+0x50
        class xPar * idx; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0037F060 -> 0x0037F244
*/
// Range: 0x37F060 -> 0x37F244
void iParMgrRenderParSys_DrawBulletStreak(class tagxParSys * ps /* r2 */) {
    /* anonymous block */ {
        // Range: 0x37F060 -> 0x37F244
        float a; // r29+0x20
        float b; // r29+0x20
        float g; // r29+0x20
        float r; // r29+0x20
        class xPar * idx; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0037F250 -> 0x0037F480
*/
// Range: 0x37F250 -> 0x37F480
void iParMgrRenderParSys_TwoTriStrip(class tagxParSys * ps /* r2 */) {
    /* anonymous block */ {
        // Range: 0x37F250 -> 0x37F480
        float a; // r29+0x30
        float b; // r29+0x30
        float g; // r29+0x30
        float r; // r29+0x30
        float hsize; // r20
        class xPar * idx; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0037F480 -> 0x0037F7E0
*/
// Range: 0x37F480 -> 0x37F7E0
void iParComputeUnitInfo(class tagParCmd_Texture * d /* r16 */) {
    /* anonymous block */ {
        // Range: 0x37F480 -> 0x37F7E0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0037F7E0 -> 0x0037F8B0
*/
// Range: 0x37F7E0 -> 0x37F8B0
void iParMgrRender() {
    /* anonymous block */ {
        // Range: 0x37F7E0 -> 0x37F8B0
        float m[16]; // r29+0x20
        signed int i; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0037F8B0 -> 0x0037FB60
*/
// Range: 0x37F8B0 -> 0x37FB60
void iParMgrInit() {
    /* anonymous block */ {
        // Range: 0x37F8B0 -> 0x37FB60
        unsigned int assetID; // r2
        signed int i; // r16
    }
}


