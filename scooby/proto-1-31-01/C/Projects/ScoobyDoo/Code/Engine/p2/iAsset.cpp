/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
signed int g_BossAnimationsCount; // size: 0x4, address: 0x4A4EA4
class tagXAnimSet g_BossAnimations[]; // size: 0x0, address: 0xAACBC0
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
signed int g_BossSkeletonCount; // size: 0x4, address: 0x4A4CB8
class xSkel g_BossSkeleton[]; // size: 0x0, address: 0x4B5300
signed int g_BossModelCount; // size: 0x4, address: 0x4A4D3C
class _xModel g_BossModel[]; // size: 0x0, address: 0x4E0400
signed int g_RTObjModelCount; // size: 0x4, address: 0x4A4D34
class _xModel g_RTObjModel[]; // size: 0x0, address: 0x4E0080
class _xSndMgrData gSndMgr; // size: 0x33F8, address: 0x4B1F00
class xScene * xScene_current; // size: 0x4, address: 0x4A4E08
class xScene * xScene_preload; // size: 0x4, address: 0x4A4E0C
class xScene * xScene_sceneBuffer[2]; // size: 0x8, address: 0xAA67F0
signed int g_DNPCAnimationsCount; // size: 0x4, address: 0x4A4EAC
class tagXAnimSet g_DNPCAnimations[]; // size: 0x0, address: 0xAACC60
signed int g_DNPCSkeletonCount; // size: 0x4, address: 0x4A4CC0
class xSkel g_DNPCSkeleton[]; // size: 0x0, address: 0x4B5340
signed int g_DNPCModelCount; // size: 0x4, address: 0x4A4D44
class _xModel g_DNPCModel[]; // size: 0x0, address: 0x4E0440
signed int g_SNPCAnimationsCount; // size: 0x4, address: 0x4A4EA8
class tagXAnimSet g_SNPCAnimations[]; // size: 0x0, address: 0xAACBF0
signed int g_SNPCSkeletonCount; // size: 0x4, address: 0x4A4CBC
class xSkel g_SNPCSkeleton[]; // size: 0x0, address: 0x4B5310
signed int g_SNPCModelCount; // size: 0x4, address: 0x4A4D40
class _xModel g_SNPCModel[]; // size: 0x0, address: 0x4E0410
signed int g_AshAnimationsCount; // size: 0x4, address: 0x4A4EA0
class tagXAnimSet g_AshAnimations[]; // size: 0x0, address: 0xAACBA0
signed int g_AshSkeletonCount; // size: 0x4, address: 0x4A4CB4
class xSkel g_AshSkeleton[]; // size: 0x0, address: 0x4B52F8
signed int g_AshModelCount; // size: 0x4, address: 0x4A4D38
class _xModel g_AshModel[]; // size: 0x0, address: 0x4E03F0
// total size: 0x8
class iConditionRuntime {
    // Members
public:
    class xCondition * m_operand; // offset 0x0, size 0x4
    unsigned short m_match; // offset 0x4, size 0x2
    unsigned short m_trigger; // offset 0x6, size 0x2
};
// total size: 0x3E84
class tagXStreamMDSDirectory {
    // Members
public:
    unsigned int count; // offset 0x0, size 0x4
    class tagXStreamDirectoryEntry directory[1000]; // offset 0x4, size 0x3E80
};
// total size: 0xC
class _rxHeapSuperBlockDescriptor {
    // Members
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class _rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
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
// total size: 0x4
class xTrigger {
    // Members
public:
    class iTriggerResource * m_resource; // offset 0x0, size 0x4
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
// total size: 0x8
class xMarker {
    // Members
public:
    class iMarkerResource * m_resource; // offset 0x0, size 0x4
    void * * m_runtime; // offset 0x4, size 0x4
};
// total size: 0xC
class tagP2MeshVertex {
    // Members
public:
    float m_x; // offset 0x0, size 0x4
    float m_y; // offset 0x4, size 0x4
    float m_z; // offset 0x8, size 0x4
};
// total size: 0x50
class tagiJointResource {
    // Members
public:
    class tagMATRIX m_orientMatrix; // offset 0x0, size 0x40
    class Vector3D m_home; // offset 0x40, size 0xC
    unsigned int m_parent; // offset 0x4C, size 0x4
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
// total size: 0x4
class tagiModelRuntime {
    // Members
public:
    signed int placeholder; // offset 0x0, size 0x4
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
class xCondition {
    // Members
public:
    class iConditionResource * m_resource; // offset 0x0, size 0x4
    class iConditionRuntime * m_runtime; // offset 0x4, size 0x4
};
// total size: 0xC
class iMarkerResource {
    // Members
public:
    class Vector3D m_pos; // offset 0x0, size 0xC
};
enum _RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x8
class _rxHeapFreeBlock {
    // Members
public:
    unsigned int size; // offset 0x0, size 0x4
    class _rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
// total size: 0x28
class XStream {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    signed int currentOffset; // offset 0x4, size 0x4
    unsigned int * data; // offset 0x8, size 0x4
    unsigned int length; // offset 0xC, size 0x4
    unsigned int offset; // offset 0x10, size 0x4
    unsigned int done; // offset 0x14, size 0x4
    unsigned int assetID; // offset 0x18, size 0x4
    class tagXStreamDirectoryEntry * dir; // offset 0x1C, size 0x4
    unsigned int count; // offset 0x20, size 0x4
    unsigned int index; // offset 0x24, size 0x4
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
// total size: 0x8
class xLight {
    // Members
public:
    class iLightResource * m_resource; // offset 0x0, size 0x4
    class _iLightRuntime * m_runtime; // offset 0x4, size 0x4
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
// total size: 0x20
class _iGeomInfo {
    // Members
public:
    unsigned int vertexCount; // offset 0x0, size 0x4
    unsigned int jointAssignmentCount; // offset 0x4, size 0x4
    unsigned int facesCount; // offset 0x8, size 0x4
    void * p2vertex; // offset 0xC, size 0x4
    void * normals; // offset 0x10, size 0x4
    void * vertex; // offset 0x14, size 0x4
    void * assignments; // offset 0x18, size 0x4
    void * faces; // offset 0x1C, size 0x4
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
// total size: 0x54
class _iWAV {
    // Members
public:
    unsigned char m_used; // offset 0x0, size 0x1
    unsigned char m_bank; // offset 0x1, size 0x1
    unsigned short m_pad; // offset 0x2, size 0x2
    signed int m_idx; // offset 0x4, size 0x4
    char m_name[32]; // offset 0x8, size 0x20
    unsigned int m_assetID; // offset 0x28, size 0x4
    unsigned int m_size; // offset 0x2C, size 0x4
    unsigned int m_samples; // offset 0x30, size 0x4
    unsigned int m_age; // offset 0x34, size 0x4
    unsigned int m_addr; // offset 0x38, size 0x4
    unsigned int m_sramsize; // offset 0x3C, size 0x4
    unsigned int m_freq; // offset 0x40, size 0x4
    unsigned int m_type; // offset 0x44, size 0x4
    unsigned int m_locked; // offset 0x48, size 0x4
    unsigned int m_pitch; // offset 0x4C, size 0x4
    class _iWAV * m_next; // offset 0x50, size 0x4
};
enum _rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x3
class _RpCollSector {
    // Members
public:
    unsigned char cType; // offset 0x0, size 0x1
    unsigned char vertex; // offset 0x1, size 0x1
    unsigned char start; // offset 0x2, size 0x1
};
// total size: 0x4
class tagiSkelRuntime {
    // Members
public:
    class tagiJointRuntime * m_joints; // offset 0x0, size 0x4
};
// total size: 0x14
class _tagiEnvRuntime {
    // Members
public:
    class _RpWorld * world; // offset 0x0, size 0x4
    class Vector3D world_origin; // offset 0x4, size 0xC
    class _RwTexDictionary * tex_dict; // offset 0x10, size 0x4
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
// total size: 0xC
class tagiModelResource {
    // Members
public:
    unsigned int m_assetID; // offset 0x0, size 0x4
    signed int m_meshCount; // offset 0x4, size 0x4
    class tagP2Mesh * m_mesh; // offset 0x8, size 0x4
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
// total size: 0xA4
class tagiJointRuntime {
    // Members
public:
    float m_tx; // offset 0x0, size 0x4
    float m_ty; // offset 0x4, size 0x4
    float m_tz; // offset 0x8, size 0x4
    float m_rx; // offset 0xC, size 0x4
    float m_ry; // offset 0x10, size 0x4
    float m_rz; // offset 0x14, size 0x4
    class Vector3D m_worldHome; // offset 0x18, size 0xC
    class tagMATRIX m_localMatrix; // offset 0x24, size 0x40
    class tagMATRIX m_worldMatrix; // offset 0x64, size 0x40
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
// total size: 0x8
class xCamera {
    // Members
public:
    class iCameraResource * m_resource; // offset 0x0, size 0x4
    void * * m_runtime; // offset 0x4, size 0x4
};
// total size: 0xC
class _RwSurfaceProperties {
    // Members
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
// total size: 0x4
class iActionRuntime {
    // Members
public:
    class xAction * m_and; // offset 0x0, size 0x4
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
// total size: 0x8
class xRule {
    // Members
public:
    class iRuleResource * m_resource; // offset 0x0, size 0x4
    void * m_runtime; // offset 0x4, size 0x4
};
// total size: 0xC
class tagP2Weight {
    // Members
public:
    unsigned short m_joint0; // offset 0x0, size 0x2
    unsigned short m_joint1; // offset 0x2, size 0x2
    float m_weight0; // offset 0x4, size 0x4
    float m_weight1; // offset 0x8, size 0x4
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
// total size: 0xC
class Vector3D {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x20
class _iTexResource {
    // Members
public:
    unsigned int m_assetID; // offset 0x0, size 0x4
    unsigned int pad[3]; // offset 0x4, size 0xC
    class _PVRheader header; // offset 0x10, size 0x10
};
// total size: 0x8
class tagXAnim {
    // Members
public:
    class tagiAnimResource * m_resource; // offset 0x0, size 0x4
    class tagiAnimRuntime * m_runtime; // offset 0x4, size 0x4
};
// total size: 0xC
class _RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x18
class tagiAnimFrame {
    // Members
public:
    float * m_tx; // offset 0x0, size 0x4
    float * m_ty; // offset 0x4, size 0x4
    float * m_tz; // offset 0x8, size 0x4
    float * m_rx; // offset 0xC, size 0x4
    float * m_ry; // offset 0x10, size 0x4
    float * m_rz; // offset 0x14, size 0x4
};
// total size: 0x8
class tagiFloorTri {
    // Members
public:
    unsigned short m_v[3]; // offset 0x0, size 0x6
    unsigned short m_n; // offset 0x6, size 0x2
};
// total size: 0x8
class xSkel {
    // Members
public:
    class tagiSkelResource * m_resource; // offset 0x0, size 0x4
    class tagiSkelRuntime * m_runtime; // offset 0x4, size 0x4
};
// total size: 0xC
class _RxPipelineRequiresCluster {
    // Members
public:
    class _RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum _RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
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
// total size: 0x28
class tagiAnimResource {
    // Members
public:
    unsigned int m_assetID; // offset 0x0, size 0x4
    unsigned int m_flags; // offset 0x4, size 0x4
    unsigned short m_loopStart; // offset 0x8, size 0x2
    unsigned short m_loopEnd; // offset 0xA, size 0x2
    unsigned short m_introStart; // offset 0xC, size 0x2
    unsigned short m_introEnd; // offset 0xE, size 0x2
    unsigned short m_exitStart; // offset 0x10, size 0x2
    unsigned short m_exitEnd; // offset 0x12, size 0x2
    unsigned short m_frameCount; // offset 0x14, size 0x2
    unsigned short m_jointCount; // offset 0x16, size 0x2
    unsigned short m_vfxCount; // offset 0x18, size 0x2
    unsigned short m_sfxCount; // offset 0x1A, size 0x2
    class tagiAnimFrame * m_joints; // offset 0x1C, size 0x4
    class _iVFXResource * m_vfx; // offset 0x20, size 0x4
    class _iSFXResource * m_sfx; // offset 0x24, size 0x4
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
// total size: 0xC
class tagiSkelResource {
    // Members
public:
    unsigned int m_assetID; // offset 0x0, size 0x4
    unsigned int m_jointCount; // offset 0x4, size 0x4
    class tagiJointResource * m_joints; // offset 0x8, size 0x4
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
// total size: 0x8
class tagiAnimRuntime {
    // Members
public:
    void * m_sfx; // offset 0x0, size 0x4
    void * m_vfx; // offset 0x4, size 0x4
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
// total size: 0x10
class iRuleResource {
    // Members
public:
    unsigned int m_actionCount; // offset 0x0, size 0x4
    class xAction * m_action; // offset 0x4, size 0x4
    unsigned int m_conditionCount; // offset 0x8, size 0x4
    class xCondition * m_condition; // offset 0xC, size 0x4
};
// total size: 0x0
class _rxReq {};
// total size: 0x1C
class p2Camera {
    // Members
public:
    class Vector3D m_pos; // offset 0x0, size 0xC
    class Vector3D m_rot; // offset 0xC, size 0xC
    float m_fov; // offset 0x18, size 0x4
};
// total size: 0x4
class _iEntryPointRuntime {
    // Members
public:
    unsigned int m_enabled; // offset 0x0, size 0x4
};
// total size: 0x10
class Vector4D {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float t; // offset 0xC, size 0x4
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
class _RwObject {
    // Members
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};
// total size: 0x808
class _i3DObjInfo {
    // Members
public:
    unsigned int count; // offset 0x0, size 0x4
    class _iGeomInfo geom[64]; // offset 0x4, size 0x800
    class tagP2Mesh * meshBuffer; // offset 0x804, size 0x4
};
// total size: 0x4
class _RpSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
};
enum _rpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x6
class _FCinfo {
    // Members
public:
    unsigned short nidx[3]; // offset 0x0, size 0x6
};
// total size: 0x8
class xEntryPoint {
    // Members
public:
    class iEntryPointResource * m_resource; // offset 0x0, size 0x4
    class _iEntryPointRuntime * m_runtime; // offset 0x4, size 0x4
};
// total size: 0xC
class _RxOutputSpec {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum _RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum _RxClusterValid allOtherClusters; // offset 0x8, size 0x4
};
// total size: 0x38
class tagP2Mesh {
    // Members
public:
    signed int m_vertexCount; // offset 0x0, size 0x4
    class tagP2VERTEX * m_vertex; // offset 0x4, size 0x4
    class tagP2VERTEX * m_neutralPose0; // offset 0x8, size 0x4
    class tagP2MeshVertex * m_neutralPose1; // offset 0xC, size 0x4
    class tagP2Weight * m_joints; // offset 0x10, size 0x4
    signed int m_indexCount; // offset 0x14, size 0x4
    unsigned short * m_index; // offset 0x18, size 0x4
    signed int m_visible; // offset 0x1C, size 0x4
    class _FCinfo * fc; // offset 0x20, size 0x4
    class Vector3D * fnorm; // offset 0x24, size 0x4
    class Vector3D * m_vnorm; // offset 0x28, size 0x4
    class Vector4D * m_vtnorm; // offset 0x2C, size 0x4
    class tagiMesh * m_next; // offset 0x30, size 0x4
    signed int m_normalsBuilt; // offset 0x34, size 0x4
};
// total size: 0x4
class _tagxEnv {
    // Members
public:
    class _tagiEnvRuntime * m_runtime; // offset 0x0, size 0x4
};
// total size: 0x8
class _RpPolygon {
    // Members
public:
    unsigned short matIndex; // offset 0x0, size 0x2
    unsigned short vertIndex[3]; // offset 0x2, size 0x6
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
// total size: 0x18
class _RwBBox {
    // Members
public:
    class _RwV3d sup; // offset 0x0, size 0xC
    class _RwV3d inf; // offset 0xC, size 0xC
};
// total size: 0xC
class _RxClusterRef {
    // Members
public:
    class _RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum _RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
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
// total size: 0x8
class _RwLLLink {
    // Members
public:
    class _RwLLLink * next; // offset 0x0, size 0x4
    class _RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x8
class _xTex {
    // Members
public:
    class _iTexResource * m_resource; // offset 0x0, size 0x4
    class _iTexRuntime * m_runtime; // offset 0x4, size 0x4
};
// total size: 0x8
class _iTexRuntime {
    // Members
public:
    void * surface; // offset 0x0, size 0x4
    unsigned int m_flags; // offset 0x4, size 0x4
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
// total size: 0x14
class tagXAnimSet {
    // Members
public:
    unsigned int m_assetID; // offset 0x0, size 0x4
    unsigned int m_animationCount; // offset 0x4, size 0x4
    class tagXAnim * m_animations; // offset 0x8, size 0x4
    unsigned int m_readyCount; // offset 0xC, size 0x4
    class tagXAnim * m_ready; // offset 0x10, size 0x4
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
// total size: 0x14
class tagP2VERTEX {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float tu; // offset 0xC, size 0x4
    float tv; // offset 0x10, size 0x4
};
// total size: 0x40
class tagMATRIX {
    // Members
public:
    float _11; // offset 0x0, size 0x4
    float _12; // offset 0x4, size 0x4
    float _13; // offset 0x8, size 0x4
    float _14; // offset 0xC, size 0x4
    float _21; // offset 0x10, size 0x4
    float _22; // offset 0x14, size 0x4
    float _23; // offset 0x18, size 0x4
    float _24; // offset 0x1C, size 0x4
    float _31; // offset 0x20, size 0x4
    float _32; // offset 0x24, size 0x4
    float _33; // offset 0x28, size 0x4
    float _34; // offset 0x2C, size 0x4
    float _41; // offset 0x30, size 0x4
    float _42; // offset 0x34, size 0x4
    float _43; // offset 0x38, size 0x4
    float _44; // offset 0x3C, size 0x4
};
enum _RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x50
class _iSFX {
    // Members
public:
    signed int m_idx; // offset 0x0, size 0x4
    signed int m_wavIdx; // offset 0x4, size 0x4
    unsigned int m_flags; // offset 0x8, size 0x4
    unsigned int m_soundPriority; // offset 0xC, size 0x4
    void * m_callback; // offset 0x10, size 0x4
    unsigned int m_callbackData; // offset 0x14, size 0x4
    class Vector3D m_position; // offset 0x18, size 0xC
    class Vector3D m_velocity; // offset 0x24, size 0xC
    float m_radius; // offset 0x30, size 0x4
    unsigned short m_playChunk; // offset 0x34, size 0x2
    unsigned short m_playChunkCount; // offset 0x36, size 0x2
    unsigned int m_volC[2]; // offset 0x38, size 0x8
    unsigned int m_vol; // offset 0x40, size 0x4
    unsigned int m_pan; // offset 0x44, size 0x4
    signed short m_loopCount; // offset 0x48, size 0x2
    unsigned short m_freq; // offset 0x4A, size 0x2
    unsigned short m_pitch; // offset 0x4C, size 0x2
    unsigned short m_userRef; // offset 0x4E, size 0x2
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
// total size: 0x8
class _xModel {
    // Members
public:
    class tagiModelResource * m_resource; // offset 0x0, size 0x4
    class tagiModelRuntime * m_runtime; // offset 0x4, size 0x4
};
// total size: 0x24
class _iVFXResource {
    // Members
public:
    unsigned short m_frame; // offset 0x0, size 0x2
    unsigned char m_id; // offset 0x2, size 0x1
    unsigned char m_valid; // offset 0x3, size 0x1
    unsigned int m_joint; // offset 0x4, size 0x4
    class Vector3D m_a; // offset 0x8, size 0xC
    class Vector3D m_b; // offset 0x14, size 0xC
    unsigned char m_flag; // offset 0x20, size 0x1
    unsigned char m_pad[3]; // offset 0x21, size 0x3
};
enum _RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x33F8
class _xSndMgrData {
    // Members
public:
    class _iSFX m_voice[64]; // offset 0x0, size 0x1400
    class _iWAV m_id[96]; // offset 0x1400, size 0x1F80
    class Vector3D m_listenPos; // offset 0x3380, size 0xC
    class Vector3D m_listenRot; // offset 0x338C, size 0xC
    unsigned char m_masterVolume; // offset 0x3398, size 0x1
    unsigned char m_isPaused; // offset 0x3399, size 0x1
    unsigned char m_inStereo; // offset 0x339A, size 0x1
    unsigned char m_pad; // offset 0x339B, size 0x1
    float m_listenRad; // offset 0x339C, size 0x4
    unsigned short m_pad2; // offset 0x33A0, size 0x2
    unsigned char m_listenTouch; // offset 0x33A2, size 0x1
    unsigned char m_initialized; // offset 0x33A3, size 0x1
    unsigned short m_lastRef; // offset 0x33A4, size 0x2
    unsigned char m_paused; // offset 0x33A6, size 0x1
    unsigned char m_activeBank; // offset 0x33A7, size 0x1
    unsigned int m_bankMaxAddr[5]; // offset 0x33A8, size 0x14
    unsigned int m_bankMinAddr[5]; // offset 0x33BC, size 0x14
    unsigned int m_bankIdxAddr[5]; // offset 0x33D0, size 0x14
    class _iWAV * m_bankList[5]; // offset 0x33E4, size 0x14
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
// total size: 0x14
class _iSFXResource {
    // Members
public:
    unsigned int m_id; // offset 0x0, size 0x4
    unsigned int m_joint; // offset 0x4, size 0x4
    unsigned char m_frame; // offset 0x8, size 0x1
    unsigned char m_vol; // offset 0x9, size 0x1
    unsigned char m_freq; // offset 0xA, size 0x1
    unsigned char m_valid; // offset 0xB, size 0x1
    unsigned int m_sndID; // offset 0xC, size 0x4
    unsigned char m_flag; // offset 0x10, size 0x1
    unsigned char m_pad[3]; // offset 0x11, size 0x3
};
enum _RwTextureAddressMode {
    rwTEXTUREADDRESSNATEXTUREADDRESS = 0,
    rwTEXTUREADDRESSWRAP = 1,
    rwTEXTUREADDRESSMIRROR = 2,
    rwTEXTUREADDRESSCLAMP = 3,
    rwTEXTUREADDRESSBORDER = 4,
    rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
class _RpMaterialList {
    // Members
public:
    class _RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
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
// total size: 0x8
class _RwTexCoords {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0x0
class tagiMesh {};
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

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038AF30 -> 0x0038AF58
*/
// Range: 0x38AF30 -> 0x38AF58
void iEnvTextInit(class XStream * stream /* r2 */) {
    /* anonymous block */ {
        // Range: 0x38AF30 -> 0x38AF58
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038AF60 -> 0x0038B084
*/
// Range: 0x38AF60 -> 0x38B084
void iCharBossAnimAllInit(class XStream * stream /* r16 */) {
    /* anonymous block */ {
        // Range: 0x38AF60 -> 0x38B084
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038B090 -> 0x0038B1A8
*/
// Range: 0x38B090 -> 0x38B1A8
void iCharBossAnimReadyInit(class XStream * stream /* r16 */) {
    /* anonymous block */ {
        // Range: 0x38B090 -> 0x38B1A8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038B1B0 -> 0x0038B1F4
*/
// Range: 0x38B1B0 -> 0x38B1F4
void iCharBossSkeletonInstance(unsigned int assetID /* r2 */, void * resource /* r2 */, void * runtime /* r16 */) {
    /* anonymous block */ {
        // Range: 0x38B1B0 -> 0x38B1F4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038B200 -> 0x0038B254
*/
// Range: 0x38B200 -> 0x38B254
void iCharBossSkeletonInit(class XStream * stream /* r2 */) {
    /* anonymous block */ {
        // Range: 0x38B200 -> 0x38B254
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038B260 -> 0x0038B268
*/
// Range: 0x38B260 -> 0x38B268
void iCharBossGeometryInstance() {
    /* anonymous block */ {
        // Range: 0x38B260 -> 0x38B268
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038B270 -> 0x0038B428
*/
// Range: 0x38B270 -> 0x38B428
void iCharBossGeometryInit(class XStream * stream /* r16 */) {
    /* anonymous block */ {
        // Range: 0x38B270 -> 0x38B428
        class _i3DObjInfo info; // r29+0x40
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038B430 -> 0x0038B504
*/
// Range: 0x38B430 -> 0x38B504
void iCharTextureInit(class XStream * s /* r17 */) {
    /* anonymous block */ {
        // Range: 0x38B430 -> 0x38B504
        class _xTex * next; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038B510 -> 0x0038B530
*/
// Range: 0x38B510 -> 0x38B530
void iEnvPlateInit(class XStream * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x38B510 -> 0x38B530
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038B530 -> 0x0038B5E0
*/
// Range: 0x38B530 -> 0x38B5E0
void iEnvFrameInit() {
    /* anonymous block */ {
        // Range: 0x38B530 -> 0x38B5E0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038B5E0 -> 0x0038B690
*/
// Range: 0x38B5E0 -> 0x38B690
void iSpriteInit() {
    /* anonymous block */ {
        // Range: 0x38B5E0 -> 0x38B690
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038B690 -> 0x0038B740
*/
// Range: 0x38B690 -> 0x38B740
void iEnvColormapInit() {
    /* anonymous block */ {
        // Range: 0x38B690 -> 0x38B740
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038B740 -> 0x0038B7F0
*/
// Range: 0x38B740 -> 0x38B7F0
void iCharColormapInit() {
    /* anonymous block */ {
        // Range: 0x38B740 -> 0x38B7F0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038B7F0 -> 0x0038B7F8
*/
// Range: 0x38B7F0 -> 0x38B7F8
void iCharRTObjGeometryInstance() {
    /* anonymous block */ {
        // Range: 0x38B7F0 -> 0x38B7F8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038B800 -> 0x0038B8D8
*/
// Range: 0x38B800 -> 0x38B8D8
void iCharRTObjGeometryInit(class XStream * stream /* r16 */) {
    /* anonymous block */ {
        // Range: 0x38B800 -> 0x38B8D8
        class _i3DObjInfo info; // r29+0x20
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038B8E0 -> 0x0038BAF8
*/
// Range: 0x38B8E0 -> 0x38BAF8
void iCharRTObjTextureInit(class XStream * s /* r17 */) {
    /* anonymous block */ {
        // Range: 0x38B8E0 -> 0x38BAF8
        class _xTex * next; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038BB00 -> 0x0038BBB0
*/
// Range: 0x38BB00 -> 0x38BBB0
void iEnvMIDIDataInit() {
    /* anonymous block */ {
        // Range: 0x38BB00 -> 0x38BBB0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038BBB0 -> 0x0038BC60
*/
// Range: 0x38BBB0 -> 0x38BC60
void iEnvLightListInit() {
    /* anonymous block */ {
        // Range: 0x38BBB0 -> 0x38BC60
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038BC60 -> 0x0038BD10
*/
// Range: 0x38BC60 -> 0x38BD10
void iEnvScriptInit() {
    /* anonymous block */ {
        // Range: 0x38BC60 -> 0x38BD10
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038BD10 -> 0x0038BDC0
*/
// Range: 0x38BD10 -> 0x38BDC0
void iCharRTObjAnimReadyInit() {
    /* anonymous block */ {
        // Range: 0x38BD10 -> 0x38BDC0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038BDC0 -> 0x0038BE70
*/
// Range: 0x38BDC0 -> 0x38BE70
void iCharRTObjAnimAllInit() {
    /* anonymous block */ {
        // Range: 0x38BDC0 -> 0x38BE70
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038BE70 -> 0x0038BF20
*/
// Range: 0x38BE70 -> 0x38BF20
void iCharMIDIDataInit() {
    /* anonymous block */ {
        // Range: 0x38BE70 -> 0x38BF20
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038BF20 -> 0x0038C064
*/
// Range: 0x38BF20 -> 0x38C064
void iCharSoundBankInit(class XStream * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x38BF20 -> 0x38C064
        unsigned int i; // r23
        unsigned char * sample; // r22
        unsigned char * base; // r21
        unsigned int * u32ptr; // r20
        signed int soundID; // r2
        unsigned short nextRate; // r19
        unsigned short nextSize; // r18
        unsigned int nextOffset; // r2
        unsigned int nextID; // r17
        unsigned int count; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038C070 -> 0x0038C1B4
*/
// Range: 0x38C070 -> 0x38C1B4
void iEnvSoundBankInit(class XStream * stream /* r2 */) {
    /* anonymous block */ {
        // Range: 0x38C070 -> 0x38C1B4
        unsigned int i; // r23
        unsigned char * sample; // r22
        unsigned char * base; // r21
        unsigned int * u32ptr; // r20
        signed int soundID; // r2
        unsigned short nextRate; // r19
        unsigned short nextSize; // r18
        unsigned int nextOffset; // r2
        unsigned int nextID; // r17
        unsigned int count; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038C1C0 -> 0x0038C888
*/
// Range: 0x38C1C0 -> 0x38C888
void iEnvSceneInit(class XStream * stream /* r29+0x18C */) {
    /* anonymous block */ {
        // Range: 0x38C1C0 -> 0x38C888
        signed int offset; // r6
        signed int i; // r3
        class xNavLink * xnavlink; // r21
        class xNavPoint * xnavpoint; // r5
        class xLight * xlight; // r5
        class xMarker * xmarker; // r5
        class xCamera * xcamera; // r6
        class xEntryPoint * xentryPoint; // r5
        class xCondition * xcondition; // r20
        class xAction * xaction; // r19
        class xRule * xrule; // r22
        class xTrigger * xtrigger; // r5
        class xLight * lightBuffer; // r2
        class xEntryPoint * entryPointBuffer; // r29+0x188
        class xMarker * markerBuffer; // r29+0x184
        class xCamera * cameraBuffer; // r29+0x180
        class xCondition * conditionBuffer; // r2
        class xAction * actionBuffer; // r2
        class xRule * ruleBuffer; // r2
        class iLightResource * light; // r23
        class iEntryPointResource * entryPoint; // r30
        class iMarkerResource * marker; // r29+0x170
        class iCameraResource * camera; // r18
        class iConditionResource * condition; // r29+0x160
        class iActionResource * action; // r29+0x150
        class iRuleResource * rule; // r17
        class iTriggerResource * trigger; // r16
        unsigned char * lightPointer; // r2
        unsigned char * markerPointer; // r2
        unsigned char * cameraPointer; // r2
        unsigned char * navLinkPointer; // r2
        unsigned char * navPointPointer; // r29+0x140
        unsigned char * entryPointPointer; // r2
        unsigned char * conditionPointer; // r2
        unsigned char * actionPointer; // r2
        unsigned char * rulePointer; // r2
        unsigned char * triggerPointer; // r2
        unsigned char * floorPointer; // r19
        unsigned char * pU8; // r4
        unsigned int * pU32; // r3
        signed int lightOffset; // r3
        signed int lightCount; // r29+0x130
        signed int markerOffset; // r5
        signed int markerCount; // r29+0x120
        signed int cameraOffset; // r5
        signed int cameraCount; // r29+0x110
        signed int navLinkOffset; // r5
        signed int navLinkCount; // r29+0x100
        signed int navPointOffset; // r5
        signed int navPointCount; // r29+0xF0
        signed int entryPointOffset; // r5
        signed int entryPointCount; // r29+0xE0
        signed int conditionOffset; // r5
        signed int conditionCount; // r29+0xD0
        signed int actionOffset; // r5
        signed int actionCount; // r29+0xC0
        signed int ruleOffset; // r5
        signed int ruleCount; // r29+0xB0
        signed int triggerOffset; // r5
        signed int triggerCount; // r29+0xA0
        signed int floorOffset; // r5
        signed int floorSize; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038C890 -> 0x0038C9B4
*/
// Range: 0x38C890 -> 0x38C9B4
void iCharDNPCAnimAllInit(class XStream * stream /* r16 */) {
    /* anonymous block */ {
        // Range: 0x38C890 -> 0x38C9B4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038C9C0 -> 0x0038CAD8
*/
// Range: 0x38C9C0 -> 0x38CAD8
void iCharDNPCAnimReadyInit(class XStream * stream /* r16 */) {
    /* anonymous block */ {
        // Range: 0x38C9C0 -> 0x38CAD8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038CAE0 -> 0x0038CB24
*/
// Range: 0x38CAE0 -> 0x38CB24
void iCharDNPCSkeletonInstance(unsigned int assetID /* r2 */, void * resource /* r2 */, void * runtime /* r16 */) {
    /* anonymous block */ {
        // Range: 0x38CAE0 -> 0x38CB24
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038CB30 -> 0x0038CB84
*/
// Range: 0x38CB30 -> 0x38CB84
void iCharDNPCSkeletonInit(class XStream * stream /* r2 */) {
    /* anonymous block */ {
        // Range: 0x38CB30 -> 0x38CB84
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038CB90 -> 0x0038CB98
*/
// Range: 0x38CB90 -> 0x38CB98
void iCharDNPCGeometryInstance() {
    /* anonymous block */ {
        // Range: 0x38CB90 -> 0x38CB98
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038CBA0 -> 0x0038CD58
*/
// Range: 0x38CBA0 -> 0x38CD58
void iCharDNPCGeometryInit(class XStream * stream /* r16 */) {
    /* anonymous block */ {
        // Range: 0x38CBA0 -> 0x38CD58
        class _i3DObjInfo info; // r29+0x40
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038CD60 -> 0x0038CE84
*/
// Range: 0x38CD60 -> 0x38CE84
void iCharSNPCAnimAllInit(class XStream * stream /* r16 */) {
    /* anonymous block */ {
        // Range: 0x38CD60 -> 0x38CE84
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038CE90 -> 0x0038CFA8
*/
// Range: 0x38CE90 -> 0x38CFA8
void iCharSNPCAnimReadyInit(class XStream * stream /* r16 */) {
    /* anonymous block */ {
        // Range: 0x38CE90 -> 0x38CFA8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038CFB0 -> 0x0038CFF4
*/
// Range: 0x38CFB0 -> 0x38CFF4
void iCharSNPCSkeletonInstance(unsigned int assetID /* r2 */, void * resource /* r2 */, void * runtime /* r16 */) {
    /* anonymous block */ {
        // Range: 0x38CFB0 -> 0x38CFF4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038D000 -> 0x0038D054
*/
// Range: 0x38D000 -> 0x38D054
void iCharSNPCSkeletonInit(class XStream * stream /* r2 */) {
    /* anonymous block */ {
        // Range: 0x38D000 -> 0x38D054
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038D060 -> 0x0038D068
*/
// Range: 0x38D060 -> 0x38D068
void iCharSNPCGeometryInstance() {
    /* anonymous block */ {
        // Range: 0x38D060 -> 0x38D068
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038D070 -> 0x0038D228
*/
// Range: 0x38D070 -> 0x38D228
void iCharSNPCGeometryInit(class XStream * stream /* r16 */) {
    /* anonymous block */ {
        // Range: 0x38D070 -> 0x38D228
        class _i3DObjInfo info; // r29+0x40
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038D230 -> 0x0038D350
*/
// Range: 0x38D230 -> 0x38D350
void iCharAshAnimAllInit(class XStream * stream /* r16 */) {
    /* anonymous block */ {
        // Range: 0x38D230 -> 0x38D350
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038D350 -> 0x0038D464
*/
// Range: 0x38D350 -> 0x38D464
void iCharAshAnimReadyInit(class XStream * stream /* r16 */) {
    /* anonymous block */ {
        // Range: 0x38D350 -> 0x38D464
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038D470 -> 0x0038D4B4
*/
// Range: 0x38D470 -> 0x38D4B4
void iCharAshSkeletonInstance(unsigned int assetID /* r2 */, void * resource /* r2 */, void * runtime /* r16 */) {
    /* anonymous block */ {
        // Range: 0x38D470 -> 0x38D4B4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038D4C0 -> 0x0038D514
*/
// Range: 0x38D4C0 -> 0x38D514
void iCharAshSkeletonInit(class XStream * stream /* r2 */) {
    /* anonymous block */ {
        // Range: 0x38D4C0 -> 0x38D514
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038D520 -> 0x0038D528
*/
// Range: 0x38D520 -> 0x38D528
void iCharAshGeometryInstance() {
    /* anonymous block */ {
        // Range: 0x38D520 -> 0x38D528
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038D530 -> 0x0038D6E4
*/
// Range: 0x38D530 -> 0x38D6E4
void iCharAshGeometryInit(class XStream * stream /* r16 */) {
    /* anonymous block */ {
        // Range: 0x38D530 -> 0x38D6E4
        class _i3DObjInfo info; // r29+0x40
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038D6F0 -> 0x0038D984
*/
// Range: 0x38D6F0 -> 0x38D984
void iGetAnimations(class XStream * stream /* r23 */, unsigned int * count /* r2 */, class tagXAnim * * anims /* r17 */) {
    /* anonymous block */ {
        // Range: 0x38D6F0 -> 0x38D984
        class tagiAnimFrame * joint; // r4
        class tagiAnimResource * ar; // r22
        float * data; // r21
        signed int frameCount; // r20
        signed int a; // r19
        unsigned int j; // r18
        class tagXAnim * xa; // r17
        signed int animCount; // r16
        unsigned int * pCount; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038D990 -> 0x0038DBA0
*/
// Range: 0x38D990 -> 0x38DBA0
void iGet3DObjInfo(class XStream * stream /* r2 */, class _i3DObjInfo * info /* r20 */) {
    /* anonymous block */ {
        // Range: 0x38D990 -> 0x38DBA0
        unsigned char * gData; // r3
        signed int softSkin; // r8
        class _iGeomInfo * geom; // r19
        class tagP2Mesh * next; // r2
        class tagP2Mesh * curr; // r18
        class tagP2Mesh * meshBuffer; // r17
        unsigned int * ptr; // r3
        unsigned int i; // r16
        char * data; // r2
    }
}


