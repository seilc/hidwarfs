/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iPhyObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned int bonk_threshold; // size: 0x4, address: 0x0
signed int bonk_shift; // size: 0x4, address: 0x0
class xScene * xScene_current; // size: 0x4, address: 0x4A4E08
class tagxObjDBData * godb; // size: 0x4, address: 0x4A3FAC
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
class tagxActorDBData * gadb; // size: 0x4, address: 0x4A4658
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
// total size: 0x18
class tagxState {
    // Members
public:
    unsigned int m_assetID; // offset 0x0, size 0x4
    signed int m_animState; // offset 0x4, size 0x4
    unsigned char * m_activeJoints; // offset 0x8, size 0x4
    signed short m_calloutNumber; // offset 0xC, size 0x2
    unsigned char m_enterEvent; // offset 0xE, size 0x1
    unsigned char m_exitEvent; // offset 0xF, size 0x1
    signed int m_linkCount; // offset 0x10, size 0x4
    class tagxStateLink * m_links; // offset 0x14, size 0x4
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
// total size: 0x4
class xTrigger {
    // Members
public:
    class iTriggerResource * m_resource; // offset 0x0, size 0x4
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
// total size: 0xC
class tagP2MeshVertex {
    // Members
public:
    float m_x; // offset 0x0, size 0x4
    float m_y; // offset 0x4, size 0x4
    float m_z; // offset 0x8, size 0x4
};
// total size: 0x30
class tagXAnimControl {
    // Members
public:
    unsigned short m_active; // offset 0x0, size 0x2
    unsigned char m_state; // offset 0x2, size 0x1
    unsigned char m_chainState; // offset 0x3, size 0x1
    class tagXAnimControl * m_chainFrom; // offset 0x4, size 0x4
    class tagXAnim * m_anim; // offset 0x8, size 0x4
    void * m_char; // offset 0xC, size 0x4
    signed short m_prevFrame; // offset 0x10, size 0x2
    signed short m_frame; // offset 0x12, size 0x2
    signed short m_incr; // offset 0x14, size 0x2
    signed short m_doneHandled; // offset 0x16, size 0x2
    unsigned char * m_activeJoints; // offset 0x18, size 0x4
    class Vector3D m_startPosition; // offset 0x1C, size 0xC
    class tagXAnimControl * m_next; // offset 0x28, size 0x4
    unsigned char m_startEvent; // offset 0x2C, size 0x1
    unsigned char m_endEvent; // offset 0x2D, size 0x1
    unsigned char m_loopEvent; // offset 0x2E, size 0x1
    unsigned char pad; // offset 0x2F, size 0x1
};
// total size: 0x18
class _xActor {
    // Members
public:
    void * m_resource; // offset 0x0, size 0x4
    class iActorRuntime * m_runtime; // offset 0x4, size 0x4
    unsigned int m_flags; // offset 0x8, size 0x4
    class tagxStateMgr * m_state; // offset 0xC, size 0x4
    unsigned short m_objectType; // offset 0x10, size 0x2
    unsigned short m_actorID; // offset 0x12, size 0x2
    void * m_texture; // offset 0x14, size 0x4
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
// total size: 0xC
class _RxPipelineRequiresCluster {
    // Members
public:
    class _RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum _RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
// total size: 0x88
class tagxPhysicsObject {
    // Members
public:
    class Vector3D m_ang; // offset 0x0, size 0xC
    class Vector3D m_angVel; // offset 0xC, size 0xC
    class Vector3D m_pos; // offset 0x18, size 0xC
    class Vector3D m_vel; // offset 0x24, size 0xC
    class Vector3D m_acc; // offset 0x30, size 0xC
    class Vector3D m_vel_inst; // offset 0x3C, size 0xC
    class Vector3D m_scale; // offset 0x48, size 0xC
    class Vector3D m_motion; // offset 0x54, size 0xC
    float m_cbradius; // offset 0x60, size 0x4
    unsigned char m_flag; // offset 0x64, size 0x1
    unsigned char m_hitResult; // offset 0x65, size 0x1
    unsigned short m_shadow_radius; // offset 0x66, size 0x2
    unsigned char m_type; // offset 0x68, size 0x1
    unsigned char m_hitFlags; // offset 0x69, size 0x1
    unsigned short m_hitTriggerNoWalkID; // offset 0x6A, size 0x2
    class Vector3D m_hitVector; // offset 0x6C, size 0xC
    unsigned char m_hitActorType; // offset 0x78, size 0x1
    unsigned char m_hitTriggerWalkID; // offset 0x79, size 0x1
    unsigned char m_hitActorID; // offset 0x7A, size 0x1
    unsigned char m_hitObjectID; // offset 0x7B, size 0x1
    float m_floorHeight; // offset 0x7C, size 0x4
    unsigned int m_floorIdx; // offset 0x80, size 0x4
    unsigned int m_floorMask; // offset 0x84, size 0x4
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
// total size: 0x4
class _RpSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
};
// total size: 0xC
class Vector3D {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
// total size: 0x14
class _xObj {
    // Members
public:
    void * m_resource; // offset 0x0, size 0x4
    class iObjRuntime * m_runtime; // offset 0x4, size 0x4
    unsigned int m_modelID; // offset 0x8, size 0x4
    void * m_texture; // offset 0xC, size 0x4
    signed short m_objType; // offset 0x10, size 0x2
    signed short m_objID; // offset 0x12, size 0x2
};
// total size: 0x8
class xMarker {
    // Members
public:
    class iMarkerResource * m_resource; // offset 0x0, size 0x4
    void * * m_runtime; // offset 0x4, size 0x4
};
// total size: 0x1C
class xSpan {
    // Members
public:
    float m_a; // offset 0x0, size 0x4
    float m_b; // offset 0x4, size 0x4
    float m_a2; // offset 0x8, size 0x4
    float m_b2; // offset 0xC, size 0x4
    signed int m_userData; // offset 0x10, size 0x4
    class xSpan * m_next; // offset 0x14, size 0x4
    class xSpan * m_prev; // offset 0x18, size 0x4
};
// total size: 0x8
class iConditionRuntime {
    // Members
public:
    class xCondition * m_operand; // offset 0x0, size 0x4
    unsigned short m_match; // offset 0x4, size 0x2
    unsigned short m_trigger; // offset 0x6, size 0x2
};
enum _rpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x0
class _rxReq {};
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
class tagiFloorTri {
    // Members
public:
    unsigned short m_v[3]; // offset 0x0, size 0x6
    unsigned short m_n; // offset 0x6, size 0x2
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
class xCondition {
    // Members
public:
    class iConditionResource * m_resource; // offset 0x0, size 0x4
    class iConditionRuntime * m_runtime; // offset 0x4, size 0x4
};
// total size: 0x8
class xEntryPoint {
    // Members
public:
    class iEntryPointResource * m_resource; // offset 0x0, size 0x4
    class _iEntryPointRuntime * m_runtime; // offset 0x4, size 0x4
};
// total size: 0x8
class _RpPolygon {
    // Members
public:
    unsigned short matIndex; // offset 0x0, size 0x2
    unsigned short vertIndex[3]; // offset 0x2, size 0x6
};
// total size: 0x4
class _tagxEnv {
    // Members
public:
    class _tagiEnvRuntime * m_runtime; // offset 0x0, size 0x4
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
// total size: 0x14
class _tagiEnvRuntime {
    // Members
public:
    class _RpWorld * world; // offset 0x0, size 0x4
    class Vector3D world_origin; // offset 0x4, size 0xC
    class _RwTexDictionary * tex_dict; // offset 0x10, size 0x4
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
// total size: 0xC
class _RxOutputSpec {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum _RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum _RxClusterValid allOtherClusters; // offset 0x8, size 0x4
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
// total size: 0xC
class tagP2Weight {
    // Members
public:
    unsigned short m_joint0; // offset 0x0, size 0x2
    unsigned short m_joint1; // offset 0x2, size 0x2
    float m_weight0; // offset 0x4, size 0x4
    float m_weight1; // offset 0x8, size 0x4
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
class _RxPipelineCluster {
    // Members
public:
    class _RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
// total size: 0x4
class iActionRuntime {
    // Members
public:
    class xAction * m_and; // offset 0x0, size 0x4
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
class _RxClusterRef {
    // Members
public:
    class _RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum _RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
// total size: 0x8
class tagXAnim {
    // Members
public:
    class tagiAnimResource * m_resource; // offset 0x0, size 0x4
    class tagiAnimRuntime * m_runtime; // offset 0x4, size 0x4
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
class tagXAnimTrigger {
    // Members
public:
    unsigned short m_frame; // offset 0x0, size 0x2
    unsigned short m_type; // offset 0x2, size 0x2
    unsigned int m_data; // offset 0x4, size 0x4
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
// total size: 0x134
class iActorRuntime {
    // Members
public:
    class tagXAnimControl * m_active; // offset 0x0, size 0x4
    signed int m_available; // offset 0x4, size 0x4
    float m_fovr; // offset 0x8, size 0x4
    float m_bradius; // offset 0xC, size 0x4
    unsigned char m_onMaterial[4]; // offset 0x10, size 0x4
    signed int m_routeID; // offset 0x14, size 0x4
    signed int m_routePosition; // offset 0x18, size 0x4
    class xNavPoint * m_routeNavPoint; // offset 0x1C, size 0x4
    signed int m_health; // offset 0x20, size 0x4
    signed int m_sightFOV; // offset 0x24, size 0x4
    signed int m_sight; // offset 0x28, size 0x4
    signed int m_quiet; // offset 0x2C, size 0x4
    signed int m_canFly; // offset 0x30, size 0x4
    signed int m_canStrafe; // offset 0x34, size 0x4
    class Vector3D m_memPosition[5]; // offset 0x38, size 0x3C
    signed int m_groupID; // offset 0x74, size 0x4
    signed int m_groupIgnore; // offset 0x78, size 0x4
    class _p2Geom m_geom; // offset 0x7C, size 0x20
    void * m_skeleton; // offset 0x9C, size 0x4
    void * m_data; // offset 0xA0, size 0x4
    class tagxPhysicsObject m_phys; // offset 0xA4, size 0x88
    float m_lookat; // offset 0x12C, size 0x4
    signed int m_haveSpottedAsh; // offset 0x130, size 0x4
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
enum _RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x8
class _rxHeapFreeBlock {
    // Members
public:
    unsigned int size; // offset 0x0, size 0x4
    class _rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
// total size: 0x8
class xAction {
    // Members
public:
    class iActionResource * m_resource; // offset 0x0, size 0x4
    class iActionRuntime * m_runtime; // offset 0x4, size 0x4
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
// total size: 0x8
class _RwLLLink {
    // Members
public:
    class _RwLLLink * next; // offset 0x0, size 0x4
    class _RwLLLink * prev; // offset 0x4, size 0x4
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
// total size: 0x20C
class tagxStateMgr {
    // Members
public:
    signed int m_animationBasedMovement; // offset 0x0, size 0x4
    signed int m_player; // offset 0x4, size 0x4
    class tagxState * m_states; // offset 0x8, size 0x4
    class tagxState * m_current; // offset 0xC, size 0x4
    void (* m_triggerFunc)(class _xActor *, signed int, class tagXAnim *, class tagXAnimTrigger *); // offset 0x10, size 0x4
    signed int m_threadActive[7]; // offset 0x14, size 0x1C
    class tagxStateThread m_thread[7]; // offset 0x30, size 0x1DC
};
// total size: 0x3
class _RpCollSector {
    // Members
public:
    unsigned char cType; // offset 0x0, size 0x1
    unsigned char vertex; // offset 0x1, size 0x1
    unsigned char start; // offset 0x2, size 0x1
};
// total size: 0x1C
class p2Camera {
    // Members
public:
    class Vector3D m_pos; // offset 0x0, size 0xC
    class Vector3D m_rot; // offset 0xC, size 0xC
    float m_fov; // offset 0x18, size 0x4
};
// total size: 0x18
class _RwBBox {
    // Members
public:
    class _RwV3d sup; // offset 0x0, size 0xC
    class _RwV3d inf; // offset 0xC, size 0xC
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
// total size: 0x4
class _RwRGBA {
    // Members
public:
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// total size: 0xC
class _rxHeapSuperBlockDescriptor {
    // Members
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class _rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
// total size: 0x24
class xSpanBuffer {
    // Members
public:
    class xSpan * m_head; // offset 0x0, size 0x4
    class xSpan * m_tail; // offset 0x4, size 0x4
    class xSpan m_span[1]; // offset 0x8, size 0x1C
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
enum _RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x4
class tagxStateLink {
    // Members
public:
    unsigned char m_command; // offset 0x0, size 0x1
    unsigned char m_flags; // offset 0x1, size 0x1
    unsigned short m_state; // offset 0x2, size 0x2
};
// total size: 0x24
class xLine2D {
    // Members
public:
    class _RwV2d m_p[2]; // offset 0x0, size 0x10
    class _RwV2d m_i[2]; // offset 0x10, size 0x10
    signed int m_iCount; // offset 0x20, size 0x4
};
// total size: 0x8
class tagiAnimRuntime {
    // Members
public:
    void * m_sfx; // offset 0x0, size 0x4
    void * m_vfx; // offset 0x4, size 0x4
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
// total size: 0xC
class _RpMaterialList {
    // Members
public:
    class _RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
};
// total size: 0x4
class _iEntryPointRuntime {
    // Members
public:
    unsigned int m_enabled; // offset 0x0, size 0x4
};
// total size: 0x6
class _FCinfo {
    // Members
public:
    unsigned short nidx[3]; // offset 0x0, size 0x6
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
// total size: 0x1C
class iDisplayCamera {
    // Members
public:
    class Vector3D m_pos; // offset 0x0, size 0xC
    class Vector3D m_rot; // offset 0xC, size 0xC
    float m_fov; // offset 0x18, size 0x4
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
enum _RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x20
class _RpClump {
    // Members
public:
    class _RwObject object; // offset 0x0, size 0x8
    class _RwLinkList atomicList; // offset 0x8, size 0x8
    class _RwLLLink inWorldLink; // offset 0x10, size 0x8
    class _RpClump * (* callback)(class _RpClump *, void *); // offset 0x18, size 0x4
    unsigned short renderFrame; // offset 0x1C, size 0x2
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
class _RxPipelineNodeTopSortData {
    // Members
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class _rxReq * req; // offset 0x8, size 0x4
    void * initialisationData; // offset 0xC, size 0x4
    unsigned int initialisationDataSize; // offset 0x10, size 0x4
};
// total size: 0x14
class _iRenderEffects {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned char colorA[4]; // offset 0x4, size 0x4
    unsigned char colorB[4]; // offset 0x8, size 0x4
    unsigned char litcolor[4]; // offset 0xC, size 0x4
    signed char abr; // offset 0x10, size 0x1
    signed char abrB; // offset 0x11, size 0x1
    unsigned char fadetime; // offset 0x12, size 0x1
    unsigned char fadectr; // offset 0x13, size 0x1
};
// total size: 0x8
class xCamera {
    // Members
public:
    class iCameraResource * m_resource; // offset 0x0, size 0x4
    void * * m_runtime; // offset 0x4, size 0x4
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
// total size: 0x8
class xLight {
    // Members
public:
    class iLightResource * m_resource; // offset 0x0, size 0x4
    class _iLightRuntime * m_runtime; // offset 0x4, size 0x4
};
// total size: 0xC
class _RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
// total size: 0x8
class xRule {
    // Members
public:
    class iRuleResource * m_resource; // offset 0x0, size 0x4
    void * m_runtime; // offset 0x4, size 0x4
};
// total size: 0x8
class _RwLinkList {
    // Members
public:
    class _RwLLLink link; // offset 0x0, size 0x8
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
class _RwTexCoords {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0x94
class iObjRuntime {
    // Members
public:
    signed short m_flag; // offset 0x0, size 0x2
    signed short m_pad; // offset 0x2, size 0x2
    class _p2Geom * m_geom; // offset 0x4, size 0x4
    float m_bradius; // offset 0x8, size 0x4
    class tagxPhysicsObject m_phys; // offset 0xC, size 0x88
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
// total size: 0x288
class tagxObjDBData {
    // Members
public:
    class _xObj m_o[32]; // offset 0x0, size 0x280
    signed int m_staticObjects; // offset 0x280, size 0x4
    signed int m_staticAssets; // offset 0x284, size 0x4
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
// total size: 0x10
class iRuleResource {
    // Members
public:
    unsigned int m_actionCount; // offset 0x0, size 0x4
    class xAction * m_action; // offset 0x4, size 0x4
    unsigned int m_conditionCount; // offset 0x8, size 0x4
    class xCondition * m_condition; // offset 0xC, size 0x4
};
// total size: 0x20
class _p2Geom {
    // Members
public:
    unsigned int m_meshCount; // offset 0x0, size 0x4
    class tagP2Mesh * m_mesh; // offset 0x4, size 0x4
    class _iRenderEffects effects; // offset 0x8, size 0x14
    class _RpClump * m_clump; // offset 0x1C, size 0x4
};
// total size: 0x96C
class tagxActorDBData {
    // Members
public:
    class _xActor m_ash[1]; // offset 0x0, size 0x18
    class _xActor m_skullBat[4]; // offset 0x18, size 0x60
    class _xActor m_deadite[4]; // offset 0x78, size 0x60
    class _xActor m_treeBoss[1]; // offset 0xD8, size 0x18
    class _xActor m_skeleton[4]; // offset 0xF0, size 0x60
    class _xActor m_troopKnife[4]; // offset 0x150, size 0x60
    class _xActor m_troopClaw[4]; // offset 0x1B0, size 0x60
    class _xActor m_troopRange[4]; // offset 0x210, size 0x60
    class _xActor m_troopLeaderBoss[1]; // offset 0x270, size 0x18
    class _xActor m_hellbillyFat[4]; // offset 0x288, size 0x60
    class _xActor m_hellbillyThin[4]; // offset 0x2E8, size 0x60
    class _xActor m_demonPig[4]; // offset 0x348, size 0x60
    class _xActor m_matriarchBoss[1]; // offset 0x3A8, size 0x18
    class _xActor m_grandma[1]; // offset 0x3C0, size 0x18
    class _xActor m_allard[1]; // offset 0x3D8, size 0x18
    class _xActor m_deadAshBoss[1]; // offset 0x3F0, size 0x18
    class _xActor m_annieZombieBoss[1]; // offset 0x408, size 0x18
    class _xActor m_badAsh[1]; // offset 0x420, size 0x18
    class _xActor m_jenny[1]; // offset 0x438, size 0x18
    class _xActor m_evilHand[1]; // offset 0x450, size 0x18
    class _xActor m_warriorCultist[4]; // offset 0x468, size 0x60
    class _xActor m_guildMember[4]; // offset 0x4C8, size 0x60
    class _xActor m_merchant[4]; // offset 0x528, size 0x60
    class _xActor m_alzeez[1]; // offset 0x588, size 0x18
    class _xActor m_wizardBoss[1]; // offset 0x5A0, size 0x18
    class _xActor m_mudGolemBoss[1]; // offset 0x5B8, size 0x18
    class _xActor m_armorySkeleton[4]; // offset 0x5D0, size 0x60
    class _xActor m_armoryBoss[1]; // offset 0x630, size 0x18
    class _xActor m_invisibleMen[4]; // offset 0x648, size 0x60
    class _xActor m_netherPet[4]; // offset 0x6A8, size 0x60
    class _xActor m_elderBeast[2]; // offset 0x708, size 0x30
    class _xActor m_cthulhuBoss[1]; // offset 0x738, size 0x18
    class _xActor m_treeArm[1]; // offset 0x750, size 0x18
    class _xActor m_headlessSkeleton[1]; // offset 0x768, size 0x18
    class _xActor m_netherPet2[4]; // offset 0x780, size 0x60
    class _xActor m_netherPet3[4]; // offset 0x7E0, size 0x60
    class _xActor m_captain[1]; // offset 0x840, size 0x18
    class _xActor m_pumpKeeper[1]; // offset 0x858, size 0x18
    class _xActor * m_p[40]; // offset 0x870, size 0xA0
    signed char m_plimit[40]; // offset 0x910, size 0x28
    class _xActor * m_active[13]; // offset 0x938, size 0x34
};
enum _RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
class iMarkerResource {
    // Members
public:
    class Vector3D m_pos; // offset 0x0, size 0xC
};
enum _RwTextureAddressMode {
    rwTEXTUREADDRESSNATEXTUREADDRESS = 0,
    rwTEXTUREADDRESSWRAP = 1,
    rwTEXTUREADDRESSMIRROR = 2,
    rwTEXTUREADDRESSCLAMP = 3,
    rwTEXTUREADDRESSBORDER = 4,
    rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x8
class _RwV2d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0xC
class tagxPadAction {
    // Members
public:
    unsigned int m_action; // offset 0x0, size 0x4
    unsigned short m_button; // offset 0x4, size 0x2
    unsigned short m_status; // offset 0x6, size 0x2
    unsigned char pad; // offset 0x8, size 0x1
    unsigned char m_analogActive; // offset 0x9, size 0x1
    signed char m_analogXValue; // offset 0xA, size 0x1
    signed char m_analogYValue; // offset 0xB, size 0x1
};
// total size: 0x8
class _RxPipelineNodeParam {
    // Members
public:
    void * dataParam; // offset 0x0, size 0x4
    class _RxHeap * heap; // offset 0x4, size 0x4
};
enum _rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x0
class tagiMesh {};
// total size: 0x3E84
class tagXStreamMDSDirectory {
    // Members
public:
    unsigned int count; // offset 0x0, size 0x4
    class tagXStreamDirectoryEntry directory[1000]; // offset 0x4, size 0x3E80
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
// total size: 0xC
class _RwSurfaceProperties {
    // Members
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
// total size: 0x44
class tagxStateThread {
    // Members
public:
    class tagxState * m_state; // offset 0x0, size 0x4
    class tagXAnimControl * m_animCtl; // offset 0x4, size 0x4
    signed int m_deferredWaiting; // offset 0x8, size 0x4
    class tagxPadAction m_deferred; // offset 0xC, size 0xC
    signed int m_rbp; // offset 0x18, size 0x4
    class tagxState * m_ring[10]; // offset 0x1C, size 0x28
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iPhyObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00370570 -> 0x0037090C
*/
// Range: 0x370570 -> 0x37090C
unsigned int iPhysicsTrace2D_OBJECT(class tagxPhysicsObject * o /* r21 */, class Vector3D * a /* r20 */, class Vector3D * b /* r16 */, class Vector3D * c /* r19 */, float * ct /* r18 */) {
    /* anonymous block */ {
        // Range: 0x370570 -> 0x37090C
        class Vector3D sc; // r29+0x100
        class Vector3D sb; // r29+0xF0
        class Vector3D sa; // r29+0xE0
        float bradSquared; // r29+0x110
        float newDistSquared; // r4
        float distSquared; // r3
        unsigned int lineFloorMaskLo; // r22
        unsigned int lineFloorMaskHi; // r23
        unsigned int lineFloorMask; // r2
        class xLine2D line; // r29+0xB0
        signed int i; // r17
        signed int hit; // r2
        class iObjRuntime * r; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iPhyObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00370910 -> 0x00370C20
*/
// Range: 0x370910 -> 0x370C20
unsigned int iPhysicsTrace2D_ACTOR(class tagxPhysicsObject * o /* r19 */, class Vector3D * a /* r18 */, class Vector3D * b /* r6 */, class Vector3D * c /* r17 */, float * ct /* r16 */) {
    /* anonymous block */ {
        // Range: 0x370910 -> 0x370C20
        class Vector3D sc; // r29+0xA0
        class Vector3D sb; // r29+0x90
        class Vector3D sa; // r29+0x80
        float bradSquared; // r29+0xB0
        float newDistSquared; // r4
        float distSquared; // r3
        class _xActor * actor; // r5
        signed int i; // r4
        signed int hit; // r2
        class iActorRuntime * r; // r3
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iPhyObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00370C20 -> 0x003710F0
*/
// Range: 0x370C20 -> 0x3710F0
unsigned int iPhysicsTrace2D_NOWALKTRIGGER(class tagxPhysicsObject * o /* r21 */, class Vector3D * a /* r20 */, class Vector3D * b /* r19 */, class Vector3D * c /* r29+0xDC */, float * ct /* r29+0xD8 */) {
    /* anonymous block */ {
        // Range: 0x370C20 -> 0x3710F0
        unsigned int * maskp; // r22
        unsigned int mask; // r3
        unsigned int lineFloorMaskLo; // r23
        unsigned int lineFloorMaskHi; // r30
        unsigned int lineFloorMask; // r2
        class _RwV2d lineHitVector[2]; // r29+0x110
        signed int hittrigger; // r18
        signed int j; // r2
        signed int i; // r17
        signed int hit; // r16
        class xTrigger * idx; // r2
        class xLine2D line; // r29+0xE0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iPhyObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003710F0 -> 0x00371724
*/
// Range: 0x3710F0 -> 0x371724
unsigned int iPhysicsTrace2D_WALKTRIGGER(class tagxPhysicsObject * o /* r21 */, class Vector3D * a /* r20 */, class Vector3D * b /* r29+0xBC */, class Vector3D * c /* r22 */, float * ct /* r29+0xB8 */) {
    /* anonymous block */ {
        // Range: 0x3710F0 -> 0x371724
        class Vector3D p2d; // r29+0x140
        class Vector3D p2d; // r29+0x130
        unsigned int mask; // r3
        unsigned int lineFloorMaskLo; // r23
        unsigned int lineFloorMaskHi; // r30
        unsigned int lineFloorMask; // r2
        class _RwV2d lineHitVector[2]; // r29+0x120
        unsigned int i; // r19
        signed int vis; // r2
        class xSpan * span; // r3
        class xSpanBuffer sb; // r29+0xF0
        class xTrigger * idx; // r18
        class xTrigger * end; // r17
        class xTrigger * start; // r16
        class xLine2D line; // r29+0xC0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iPhyObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00371730 -> 0x00371968
*/
// Range: 0x371730 -> 0x371968
unsigned int iPhysicsTrace2D(class tagxPhysicsObject * o /* r20 */, class Vector3D * a /* r19 */, class Vector3D * b /* r18 */, class Vector3D * c /* r17 */, float * ct /* r16 */) {
    /* anonymous block */ {
        // Range: 0x371730 -> 0x371968
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iPhyObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00371970 -> 0x00371AB0
*/
// Range: 0x371970 -> 0x371AB0
void iPhysicsObjectInitialize(class tagxPhysicsObject * p /* r16 */) {
    /* anonymous block */ {
        // Range: 0x371970 -> 0x371AB0
    }
}


