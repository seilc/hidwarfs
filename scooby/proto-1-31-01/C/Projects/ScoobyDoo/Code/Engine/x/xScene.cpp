/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
signed int theGlobalTriggerNumber; // size: 0x4, address: 0x4A4CC4
signed int theGlobalTriggerDisplay; // size: 0x4, address: 0x4A3E90
signed int gLastCameraIndex; // size: 0x4, address: 0x4A3E94
signed int nextCameraCounter; // size: 0x4, address: 0x4A3E98
static signed int sDisableCameraChange; // size: 0x4, address: 0x4A4CC8
static signed int sLastRejectedCameraIndex; // size: 0x4, address: 0x0
static signed int sLastRejectedCameraCommand; // size: 0x4, address: 0x0
static signed int sLastRejectedCameraVersion; // size: 0x4, address: 0x0
static signed int sLastRejectedCameraStart; // size: 0x4, address: 0x0
static signed int sLastRejectedCameraEnd; // size: 0x4, address: 0x0
static signed int sLastEvaluateCamera; // size: 0x4, address: 0x4A3E9C
signed int g_sceneSwapPending; // size: 0x4, address: 0x4A4CCC
unsigned int g_scenePendingScene; // size: 0x4, address: 0x4A4CD0
signed int g_scenePendingCamera; // size: 0x4, address: 0x4A4CD4
signed int g_scenePendingMarker; // size: 0x4, address: 0x4A4CD8
class Vector3D g_scenePendingAng; // size: 0xC, address: 0x4B5378
signed int gDebugLight; // size: 0x4, address: 0x4A4CDC
static unsigned int interpreterMethod; // size: 0x4, address: 0x4A4CE0
static signed int sDefaultCameraChangeInProgress; // size: 0x4, address: 0x4A4CE4
static signed int sDefaultCameraCommand; // size: 0x4, address: 0x4A4CE8
static signed int sDefaultCameraIndex; // size: 0x4, address: 0x4A4CEC
static signed int sDefaultCameraVersion; // size: 0x4, address: 0x4A4CF0
static signed int sDefaultCameraStart; // size: 0x4, address: 0x4A4CF4
static signed int sDefaultCameraEnd; // size: 0x4, address: 0x4A4CF8
unsigned char gDisableCameraTriggers; // size: 0x1, address: 0x4A4CFC
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
class tag_xCameraControl gCamera; // size: 0x2C, address: 0xAA67C0
class xScene * xScene_current; // size: 0x4, address: 0x4A4E08
signed int gBossBattle; // size: 0x4, address: 0x4A4F70
signed int gGameState; // size: 0x4, address: 0x4A4640
signed int gDebugDrawDebugInfo; // size: 0x4, address: 0x4A4E1C
signed int gPlayerType; // size: 0x4, address: 0x4A4E00
class tagxActorDBData * gadb; // size: 0x4, address: 0x4A4658
signed int gPlayerID; // size: 0x4, address: 0x4A4E04
class tagxObjDBData * godb; // size: 0x4, address: 0x4A3FAC
signed int g_DNPCAnimationsCount; // size: 0x4, address: 0x4A4EAC
signed int g_DNPCSkeletonCount; // size: 0x4, address: 0x4A4CC0
signed int g_DNPCModelCount; // size: 0x4, address: 0x4A4D44
signed int g_BossAnimationsCount; // size: 0x4, address: 0x4A4EA4
signed int g_BossSkeletonCount; // size: 0x4, address: 0x4A4CB8
signed int g_BossModelCount; // size: 0x4, address: 0x4A4D3C
unsigned char gAudioStatus; // size: 0x1, address: 0x4A4E34
signed int gDebugGameEventCounter; // size: 0x4, address: 0x4A4C84
signed int xSceneScriptIsNPCInVisArea(signed int, signed int); // size: 0x0, address: 0x3393F0
signed int xSceneScriptIsNPCMarkerVisible(signed int); // size: 0x0, address: 0x339100
signed int xSceneScriptIsObjMarkerVisible(signed int); // size: 0x0, address: 0x339510
signed int xSceneScriptGetMarkerCount(); // size: 0x0, address: 0x339800
signed int xSceneScriptGetNavPointCount(); // size: 0x0, address: 0x3398D0
void xSceneScriptEntryPointEnable(signed int, signed int); // size: 0x0, address: 0x337240
void xSceneScriptTriggerEnable(signed int, signed int); // size: 0x0, address: 0x337350
void xSceneScriptLightSetSunDirection(signed int, signed int); // size: 0x0, address: 0x3375B0
void xSceneScriptLightSetSunColor(signed int, signed int, signed int); // size: 0x0, address: 0x337460
void xSceneScriptLightSetAmbient(signed int, signed int, signed int); // size: 0x0, address: 0x3379F0
void xSceneScriptLightSetColor(signed int, signed int, signed int, signed int, signed int); // size: 0x0, address: 0x337B40
void xSceneScriptLightSetPositionMarker(signed int, signed int, signed int); // size: 0x0, address: 0x337E60
void xSceneScriptLightSetRange(signed int, signed int, signed int); // size: 0x0, address: 0x338200
void xSceneScriptLightSetFalloff(signed int, signed int, signed int); // size: 0x0, address: 0x3384D0
void xSceneScriptLightSetEnable(signed int, signed int); // size: 0x0, address: 0x338880
void xSceneScriptLightSetWeight(signed int, signed int); // size: 0x0, address: 0x338DA0
void xSceneScriptLightSetFrameSpeed(signed int, signed int); // size: 0x0, address: 0x338A20
void xSceneScriptLightSetSpeed(signed int, signed int); // size: 0x0, address: 0x338BE0
void xSceneScriptLightSetMode(signed int, signed int); // size: 0x0, address: 0x338F60
// total size: 0x3E84
class tagXStreamMDSDirectory {
    // Members
public:
    unsigned int count; // offset 0x0, size 0x4
    class tagXStreamDirectoryEntry directory[1000]; // offset 0x4, size 0x3E80
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
// total size: 0xC
class _rxHeapSuperBlockDescriptor {
    // Members
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class _rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
// total size: 0x8
class tagXAnimTrigger {
    // Members
public:
    unsigned short m_frame; // offset 0x0, size 0x2
    unsigned short m_type; // offset 0x2, size 0x2
    unsigned int m_data; // offset 0x4, size 0x4
};
// total size: 0xC
class Vector3D {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
class xEntryPoint {
    // Members
public:
    class iEntryPointResource * m_resource; // offset 0x0, size 0x4
    class _iEntryPointRuntime * m_runtime; // offset 0x4, size 0x4
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
class _tagxEnv {
    // Members
public:
    class _tagiEnvRuntime * m_runtime; // offset 0x0, size 0x4
};
enum _RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
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
class _rxHeapFreeBlock {
    // Members
public:
    unsigned int size; // offset 0x0, size 0x4
    class _rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
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
// total size: 0xC
class tagP2Weight {
    // Members
public:
    unsigned short m_joint0; // offset 0x0, size 0x2
    unsigned short m_joint1; // offset 0x2, size 0x2
    float m_weight0; // offset 0x4, size 0x4
    float m_weight1; // offset 0x8, size 0x4
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
class _tagiEnvRuntime {
    // Members
public:
    class _RpWorld * world; // offset 0x0, size 0x4
    class Vector3D world_origin; // offset 0x4, size 0xC
    class _RwTexDictionary * tex_dict; // offset 0x10, size 0x4
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
// total size: 0x8
class xRule {
    // Members
public:
    class iRuleResource * m_resource; // offset 0x0, size 0x4
    void * m_runtime; // offset 0x4, size 0x4
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
class iConditionRuntime {
    // Members
public:
    class xCondition * m_operand; // offset 0x0, size 0x4
    unsigned short m_match; // offset 0x4, size 0x2
    unsigned short m_trigger; // offset 0x6, size 0x2
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
enum _rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x4
class tagxStateLink {
    // Members
public:
    unsigned char m_command; // offset 0x0, size 0x1
    unsigned char m_flags; // offset 0x1, size 0x1
    unsigned short m_state; // offset 0x2, size 0x2
};
// total size: 0x8
class tagiAnimRuntime {
    // Members
public:
    void * m_sfx; // offset 0x0, size 0x4
    void * m_vfx; // offset 0x4, size 0x4
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
// total size: 0x8
class tagiFloorTri {
    // Members
public:
    unsigned short m_v[3]; // offset 0x0, size 0x6
    unsigned short m_n; // offset 0x6, size 0x2
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
class iRuleResource {
    // Members
public:
    unsigned int m_actionCount; // offset 0x0, size 0x4
    class xAction * m_action; // offset 0x4, size 0x4
    unsigned int m_conditionCount; // offset 0x8, size 0x4
    class xCondition * m_condition; // offset 0xC, size 0x4
};
// total size: 0x3
class _RpCollSector {
    // Members
public:
    unsigned char cType; // offset 0x0, size 0x1
    unsigned char vertex; // offset 0x1, size 0x1
    unsigned char start; // offset 0x2, size 0x1
};
// total size: 0x8
class tagXAnim {
    // Members
public:
    class tagiAnimResource * m_resource; // offset 0x0, size 0x4
    class tagiAnimRuntime * m_runtime; // offset 0x4, size 0x4
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
class _RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x4
class xTrigger {
    // Members
public:
    class iTriggerResource * m_resource; // offset 0x0, size 0x4
};
// total size: 0x4
class _RpSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
};
// total size: 0x1C
class p2Camera {
    // Members
public:
    class Vector3D m_pos; // offset 0x0, size 0xC
    class Vector3D m_rot; // offset 0xC, size 0xC
    float m_fov; // offset 0x18, size 0x4
};
// total size: 0xC
class _RxPipelineRequiresCluster {
    // Members
public:
    class _RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum _RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
// total size: 0x4
class _iEntryPointRuntime {
    // Members
public:
    unsigned int m_enabled; // offset 0x0, size 0x4
};
// total size: 0x8
class _RwLLLink {
    // Members
public:
    class _RwLLLink * next; // offset 0x0, size 0x4
    class _RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x6
class _FCinfo {
    // Members
public:
    unsigned short nidx[3]; // offset 0x0, size 0x6
};
// total size: 0xC
class _RpMaterialList {
    // Members
public:
    class _RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
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
class _RwTexDictionary {
    // Members
public:
    class _RwObject object; // offset 0x0, size 0x8
    class _RwLinkList texturesInDict; // offset 0x8, size 0x8
    class _RwLLLink lInInstance; // offset 0x10, size 0x8
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
class iMarkerResource {
    // Members
public:
    class Vector3D m_pos; // offset 0x0, size 0xC
};
// total size: 0x0
class _rxReq {};
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
// total size: 0x10
class Vector4D {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float t; // offset 0xC, size 0x4
};
// total size: 0x8
class xAction {
    // Members
public:
    class iActionResource * m_resource; // offset 0x0, size 0x4
    class iActionRuntime * m_runtime; // offset 0x4, size 0x4
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
// total size: 0x8
class _RpPolygon {
    // Members
public:
    unsigned short matIndex; // offset 0x0, size 0x2
    unsigned short vertIndex[3]; // offset 0x2, size 0x6
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
// total size: 0x8
class xCamera {
    // Members
public:
    class iCameraResource * m_resource; // offset 0x0, size 0x4
    void * * m_runtime; // offset 0x4, size 0x4
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
class _RxOutputSpec {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum _RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum _RxClusterValid allOtherClusters; // offset 0x8, size 0x4
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
// total size: 0x8
class xLight {
    // Members
public:
    class iLightResource * m_resource; // offset 0x0, size 0x4
    class _iLightRuntime * m_runtime; // offset 0x4, size 0x4
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
class xCondition {
    // Members
public:
    class iConditionResource * m_resource; // offset 0x0, size 0x4
    class iConditionRuntime * m_runtime; // offset 0x4, size 0x4
};
// total size: 0x8
class _RwTexCoords {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
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
// total size: 0x288
class tagxObjDBData {
    // Members
public:
    class _xObj m_o[32]; // offset 0x0, size 0x280
    signed int m_staticObjects; // offset 0x280, size 0x4
    signed int m_staticAssets; // offset 0x284, size 0x4
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
// total size: 0x20
class _p2Geom {
    // Members
public:
    unsigned int m_meshCount; // offset 0x0, size 0x4
    class tagP2Mesh * m_mesh; // offset 0x4, size 0x4
    class _iRenderEffects effects; // offset 0x8, size 0x14
    class _RpClump * m_clump; // offset 0x1C, size 0x4
};
// total size: 0x18
class _RwBBox {
    // Members
public:
    class _RwV3d sup; // offset 0x0, size 0xC
    class _RwV3d inf; // offset 0xC, size 0xC
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
// total size: 0xC
class _RxClusterRef {
    // Members
public:
    class _RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum _RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
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
// total size: 0x8
class xMarker {
    // Members
public:
    class iMarkerResource * m_resource; // offset 0x0, size 0x4
    void * * m_runtime; // offset 0x4, size 0x4
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
enum _RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x0
class tagiMesh {};
// total size: 0x4
class _RxClusterUnion {
    // Members
public:
    union { // inferred
        class _RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
        class _RxPipelineCluster * clusterRef; // offset 0x0, size 0x4
    };
};
// total size: 0x4
class iActionRuntime {
    // Members
public:
    class xAction * m_and; // offset 0x0, size 0x4
};
enum _RwTextureAddressMode {
    rwTEXTUREADDRESSNATEXTUREADDRESS = 0,
    rwTEXTUREADDRESSWRAP = 1,
    rwTEXTUREADDRESSMIRROR = 2,
    rwTEXTUREADDRESSCLAMP = 3,
    rwTEXTUREADDRESSBORDER = 4,
    rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 2147483647,
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
class iActionResource {
    // Members
public:
    unsigned char m_cmdType; // offset 0x0, size 0x1
    unsigned char m_cmd; // offset 0x1, size 0x1
    unsigned short pad; // offset 0x2, size 0x2
    unsigned int m_cmdParameter; // offset 0x4, size 0x4
};
// total size: 0x2C
class tag_xCameraControl {
    // Members
public:
    signed int m_sceneID; // offset 0x0, size 0x4
    signed int m_camera; // offset 0x4, size 0x4
    signed int m_version; // offset 0x8, size 0x4
    signed int m_command; // offset 0xC, size 0x4
    signed int m_startLoc; // offset 0x10, size 0x4
    signed int m_startFrame; // offset 0x14, size 0x4
    signed int m_speed; // offset 0x18, size 0x4
    signed int m_endLoc; // offset 0x1C, size 0x4
    signed int m_endFrame; // offset 0x20, size 0x4
    signed int m_actualFrame; // offset 0x24, size 0x4
    signed int m_animFrame; // offset 0x28, size 0x4
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
enum _rpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x1C
class iDisplayCamera {
    // Members
public:
    class Vector3D m_pos; // offset 0x0, size 0xC
    class Vector3D m_rot; // offset 0xC, size 0xC
    float m_fov; // offset 0x18, size 0x4
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

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00332D80 -> 0x00332F48
*/
// Range: 0x332D80 -> 0x332F48
void xSceneAnimateCamera() {
    /* anonymous block */ {
        // Range: 0x332D80 -> 0x332F48
        signed int nextFrame; // r16
        class iCameraResource * cam; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00332F50 -> 0x0033341C
*/
// Range: 0x332F50 -> 0x33341C
void xSceneControlCamera(signed int cmd /* r29+0xCC */, signed int theCamera /* r30 */, signed int version /* r21 */, signed int start /* r20 */, signed int end /* r19 */) {
    /* anonymous block */ {
        // Range: 0x332F50 -> 0x33341C
        class tag_xCameraControl next; // r29+0xD0
        signed int nextFrame; // r22
        signed int nextSpeed; // r18
        signed int nextEnd; // r23
        signed int nextStart; // r17
        class iCameraResource * cam; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00333420 -> 0x00333500
*/
// Range: 0x333420 -> 0x333500
void xSceneScriptControlCamera(signed int cmd /* r2 */, signed int theCamera /* r16 */, signed int version /* r2 */, signed int start /* r2 */, signed int end /* r2 */) {
    /* anonymous block */ {
        // Range: 0x333420 -> 0x333500
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00333500 -> 0x003335C4
*/
// Range: 0x333500 -> 0x3335C4
void xSceneSetCamera(signed int c /* r16 */, signed int v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x333500 -> 0x3335C4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003335D0 -> 0x00333720
*/
// Range: 0x3335D0 -> 0x333720
signed int xSceneVFXVisible(class xScene * s /* r20 */, class Vector3D * p /* r19 */) {
    /* anonymous block */ {
        // Range: 0x3335D0 -> 0x333720
        unsigned int mask; // r3
        class iTriggerResource * t; // r2
        unsigned int pmasklo; // r18
        unsigned int pmaskhi; // r17
        unsigned int pmask; // r2
        signed int i; // r16
        signed int vis; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00333720 -> 0x00333870
*/
// Range: 0x333720 -> 0x333870
signed int xSceneRTObjVisible(class xScene * s /* r20 */, class Vector3D * p /* r19 */) {
    /* anonymous block */ {
        // Range: 0x333720 -> 0x333870
        unsigned int mask; // r3
        class iTriggerResource * t; // r2
        unsigned int pmasklo; // r18
        unsigned int pmaskhi; // r17
        unsigned int pmask; // r2
        signed int i; // r16
        signed int vis; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00333870 -> 0x003339C0
*/
// Range: 0x333870 -> 0x3339C0
signed int xSceneNPCVisible(class xScene * s /* r20 */, class Vector3D * p /* r19 */) {
    /* anonymous block */ {
        // Range: 0x333870 -> 0x3339C0
        unsigned int mask; // r3
        class iTriggerResource * t; // r2
        unsigned int pmasklo; // r18
        unsigned int pmaskhi; // r17
        unsigned int pmask; // r2
        signed int i; // r16
        signed int vis; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003339C0 -> 0x00333B10
*/
// Range: 0x3339C0 -> 0x333B10
signed int xSceneLightVisible(class xScene * s /* r20 */, class Vector3D * p /* r19 */) {
    /* anonymous block */ {
        // Range: 0x3339C0 -> 0x333B10
        unsigned int mask; // r3
        class iTriggerResource * t; // r2
        unsigned int pmasklo; // r18
        unsigned int pmaskhi; // r17
        unsigned int pmask; // r2
        signed int i; // r16
        signed int vis; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00333B10 -> 0x00333C60
*/
// Range: 0x333B10 -> 0x333C60
signed int xScenePlayerVisible(class xScene * s /* r20 */, class Vector3D * p /* r19 */) {
    /* anonymous block */ {
        // Range: 0x333B10 -> 0x333C60
        unsigned int mask; // r3
        class iTriggerResource * t; // r2
        unsigned int pmasklo; // r18
        unsigned int pmaskhi; // r17
        unsigned int pmask; // r2
        signed int i; // r16
        signed int vis; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00333C60 -> 0x00333E4C
*/
// Range: 0x333C60 -> 0x333E4C
void xSceneEvaluateTriggers(class xScene * s /* r18 */) {
    /* anonymous block */ {
        // Range: 0x333C60 -> 0x333E4C
        unsigned int tflags; // r17
        signed int camerachange; // r2
        class xTrigger * t; // r2
        unsigned int i; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00333E50 -> 0x003340A4
*/
// Range: 0x333E50 -> 0x3340A4
void xSceneCheckTriggerHitPlayer(class xScene * s /* r20 */) {
    /* anonymous block */ {
        // Range: 0x333E50 -> 0x3340A4
        class iActorRuntime * r; // r3
        unsigned int * maskp; // r19
        unsigned int mask; // r4
        unsigned int pmasklo; // r18
        unsigned int pmaskhi; // r17
        unsigned int pmask; // r2
        class Vector3D p; // r29+0x80
        unsigned int i; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003340B0 -> 0x00334408
*/
// Range: 0x3340B0 -> 0x334408
signed int xSceneGetTriggerMaterials(class xScene * s /* r20 */, class Vector3D * p /* r19 */, unsigned char * mat /* r18 */, unsigned int maxMat /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3340B0 -> 0x334408
        unsigned char val; // r4
        unsigned int flags; // r3
        unsigned int mask; // r3
        unsigned int count; // r16
        unsigned int pmasklo; // r23
        unsigned int pmaskhi; // r30
        unsigned int pmask; // r2
        class xTrigger * t; // r22
        unsigned int i; // r21
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00334410 -> 0x00334588
*/
// Range: 0x334410 -> 0x334588
void xSceneDebugLights(class xScene * s /* r17 */) {
    /* anonymous block */ {
        // Range: 0x334410 -> 0x334588
        class Vector3D b; // r29+0x40
        class Vector3D a; // r29+0x30
        unsigned int i; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00334590 -> 0x00334708
*/
// Range: 0x334590 -> 0x334708
void xSceneDebugDrawTriggers(class xScene * s /* r17 */) {
    /* anonymous block */ {
        // Range: 0x334590 -> 0x334708
        signed int b; // r2
        signed int g; // r2
        signed int r; // r2
        class Vector3D * v; // r2
        class xTrigger * t; // r10
        unsigned int i; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00334710 -> 0x003347BC
*/
// Range: 0x334710 -> 0x3347BC
void xSceneDebugDrawEntryPoints(class xEntryPoint * e /* r2 */) {
    /* anonymous block */ {
        // Range: 0x334710 -> 0x3347BC
        signed int b; // r2
        signed int g; // r2
        signed int r; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003347C0 -> 0x00334B84
*/
// Range: 0x3347C0 -> 0x334B84
void xSceneCheckEntryHitPlayer(class xScene * s /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3347C0 -> 0x334B84
        class xEntryPoint * e; // r21
        class iActorRuntime * r; // r3
        unsigned int pmask; // r3
        unsigned int maskHi; // r20
        unsigned int maskLo; // r19
        unsigned int mask; // r2
        class Vector3D * ppos; // r18
        unsigned int i; // r17
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00334B90 -> 0x003350D0
*/
// Range: 0x334B90 -> 0x3350D0
void xSceneActivate() {
    /* anonymous block */ {
        // Range: 0x334B90 -> 0x3350D0
        unsigned char * resetPointer; // r18
        signed int i; // r17
        signed int t; // r16
        class XStream stream; // r29+0x40
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003350D0 -> 0x0033552C
*/
// Range: 0x3350D0 -> 0x33552C
void xSceneSwitch(class xScene * s /* r2 */, unsigned int sceneID /* r19 */, unsigned int cameraID /* r18 */, unsigned int markerID /* r17 */, class Vector3D * ang /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3350D0 -> 0x33552C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00335530 -> 0x0033573C
*/
// Range: 0x335530 -> 0x33573C
void xSceneIdle(class xScene * s /* r17 */) {
    /* anonymous block */ {
        // Range: 0x335530 -> 0x33573C
        class xCondition * c; // r5
        unsigned int i; // r16
        class xCondition * cend; // r4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00335740 -> 0x00335ADC
*/
// Range: 0x335740 -> 0x335ADC
void xSceneDebugDrawGeom(signed int type /* r20 */, class Vector3D * v /* r19 */, signed int red /* r18 */, signed int green /* r17 */, signed int blue /* r16 */) {
    /* anonymous block */ {
        // Range: 0x335740 -> 0x335ADC
        class Vector3D a; // r29+0x110
        class Vector3D c; // r29+0x100
        class Vector3D b; // r29+0xF0
        class Vector3D a; // r29+0xE0
        class Vector3D d; // r29+0xD0
        class Vector3D c; // r29+0xC0
        class Vector3D b; // r29+0xB0
        class Vector3D a; // r29+0xA0
        class Vector3D d; // r29+0x90
        class Vector3D c; // r29+0x80
        class Vector3D b; // r29+0x70
        class Vector3D a; // r29+0x60
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00335AE0 -> 0x00337240
*/
// Range: 0x335AE0 -> 0x337240
void xSceneInit(class xScene * s /* r21 */, unsigned int sceneId /* r16 */) {
    /* anonymous block */ {
        // Range: 0x335AE0 -> 0x337240
        signed int cmd; // r3
        signed int onflags; // r4
        class xTrigger * t; // r20
        class xEntryPoint * idx; // r16
        class xTrigger * trigger; // r20
        class Vector3D d; // r29+0xE0
        class xRule * r; // r18
        class xCondition * c; // r19
        unsigned int idxMaterial; // r30
        unsigned int idxEffect; // r29+0xD0
        unsigned int idxGeneric; // r18
        unsigned int idxWalk; // r29+0xC0
        unsigned int idxNoWalk; // r23
        unsigned int k; // r17
        unsigned int j; // r16
        unsigned int i; // r22
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00337240 -> 0x00337350
*/
// Range: 0x337240 -> 0x337350
void xSceneScriptEntryPointEnable(signed int id /* r17 */, signed int state /* r16 */) {
    /* anonymous block */ {
        // Range: 0x337240 -> 0x337350
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00337350 -> 0x00337460
*/
// Range: 0x337350 -> 0x337460
void xSceneScriptTriggerEnable(signed int id /* r17 */, signed int state /* r16 */) {
    /* anonymous block */ {
        // Range: 0x337350 -> 0x337460
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00337460 -> 0x003375AC
*/
// Range: 0x337460 -> 0x3375AC
void xSceneScriptLightSetSunColor(signed int r /* r18 */, signed int g /* r17 */, signed int b /* r16 */) {
    /* anonymous block */ {
        // Range: 0x337460 -> 0x3375AC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003375B0 -> 0x003379E8
*/
// Range: 0x3375B0 -> 0x3379E8
void xSceneScriptLightSetSunDirection(signed int m1 /* r17 */, signed int m2 /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3375B0 -> 0x3379E8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003379F0 -> 0x00337B3C
*/
// Range: 0x3379F0 -> 0x337B3C
void xSceneScriptLightSetAmbient(signed int r /* r18 */, signed int g /* r17 */, signed int b /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3379F0 -> 0x337B3C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00337B40 -> 0x00337E54
*/
// Range: 0x337B40 -> 0x337E54
void xSceneScriptLightSetColor(signed int idx /* r20 */, signed int r /* r19 */, signed int g /* r18 */, signed int b /* r17 */, signed int anchorIdx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x337B40 -> 0x337E54
        class iLightResource * rsrc; // r4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00337E60 -> 0x003381FC
*/
// Range: 0x337E60 -> 0x3381FC
void xSceneScriptLightSetPositionMarker(signed int idx /* r18 */, signed int midx /* r17 */, signed int anchorIdx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x337E60 -> 0x3381FC
        class iLightResource * r; // r5
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00338200 -> 0x003384C4
*/
// Range: 0x338200 -> 0x3384C4
void xSceneScriptLightSetRange(signed int idx /* r18 */, signed int range /* r17 */, signed int anchorIdx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x338200 -> 0x3384C4
        class iLightResource * r; // r4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003384D0 -> 0x0033887C
*/
// Range: 0x3384D0 -> 0x33887C
void xSceneScriptLightSetFalloff(signed int idx /* r18 */, signed int falloff /* r17 */, signed int anchorIdx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3384D0 -> 0x33887C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00338880 -> 0x00338A20
*/
// Range: 0x338880 -> 0x338A20
void xSceneScriptLightSetEnable(signed int idx /* r17 */, signed int enabled /* r16 */) {
    /* anonymous block */ {
        // Range: 0x338880 -> 0x338A20
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00338A20 -> 0x00338BD8
*/
// Range: 0x338A20 -> 0x338BD8
void xSceneScriptLightSetFrameSpeed(signed int idx /* r17 */, signed int rate /* r16 */) {
    /* anonymous block */ {
        // Range: 0x338A20 -> 0x338BD8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00338BE0 -> 0x00338D9C
*/
// Range: 0x338BE0 -> 0x338D9C
void xSceneScriptLightSetSpeed(signed int idx /* r17 */, signed int speed /* r16 */) {
    /* anonymous block */ {
        // Range: 0x338BE0 -> 0x338D9C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00338DA0 -> 0x00338F5C
*/
// Range: 0x338DA0 -> 0x338F5C
void xSceneScriptLightSetWeight(signed int idx /* r17 */, signed int weight /* r16 */) {
    /* anonymous block */ {
        // Range: 0x338DA0 -> 0x338F5C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00338F60 -> 0x00339100
*/
// Range: 0x338F60 -> 0x339100
void xSceneScriptLightSetMode(signed int idx /* r17 */, signed int mode /* r16 */) {
    /* anonymous block */ {
        // Range: 0x338F60 -> 0x339100
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00339100 -> 0x003393E8
*/
// Range: 0x339100 -> 0x3393E8
signed int xSceneScriptIsNPCMarkerVisible(signed int markerID /* r16 */) {
    /* anonymous block */ {
        // Range: 0x339100 -> 0x3393E8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003393F0 -> 0x00339510
*/
// Range: 0x3393F0 -> 0x339510
signed int xSceneScriptIsNPCInVisArea(signed int type /* r2 */, signed int id /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3393F0 -> 0x339510
        class _xActor * a; // r16
        class Vector3D pos; // r29+0x40
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00339510 -> 0x003397F8
*/
// Range: 0x339510 -> 0x3397F8
signed int xSceneScriptIsObjMarkerVisible(signed int markerID /* r16 */) {
    /* anonymous block */ {
        // Range: 0x339510 -> 0x3397F8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00339800 -> 0x003398C4
*/
// Range: 0x339800 -> 0x3398C4
signed int xSceneScriptGetMarkerCount() {
    /* anonymous block */ {
        // Range: 0x339800 -> 0x3398C4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003398D0 -> 0x00339994
*/
// Range: 0x3398D0 -> 0x339994
signed int xSceneScriptGetNavPointCount() {
    /* anonymous block */ {
        // Range: 0x3398D0 -> 0x339994
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003399A0 -> 0x003399AC
*/
// Range: 0x3399A0 -> 0x3399AC
void xSceneReInitializeInterpreter() {
    /* anonymous block */ {
        // Range: 0x3399A0 -> 0x3399AC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003399B0 -> 0x00339BDC
*/
// Range: 0x3399B0 -> 0x339BDC
void xSceneRegisterScriptCalls() {
    /* anonymous block */ {
        // Range: 0x3399B0 -> 0x339BDC
    }
}


