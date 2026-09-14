/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Game\z\zCharacter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int cur_point; // size: 0x4, address: 0x4A5048
static unsigned char was_active_last_frame; // size: 0x1, address: 0x4A504C
static class _SkinData zSkinData; // size: 0xC, address: 0x4502E0
// total size: 0x20
struct /* @anon0 */ {} zCharacter::__vtable; // size: 0x20, address: 0x4A2820
class _rpAtomic * zSkinAnimSetupAtomicCallback(class _rpAtomic *, void *); // size: 0x0, address: 0x3F0870
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
class xAnimMgr * gAnimMgr; // size: 0x4, address: 0x4A5060
unsigned int anim_ID_walk; // size: 0x4, address: 0x4A501C
unsigned int anim_ID_walk_back; // size: 0x4, address: 0x4A5028
unsigned int anim_ID_run; // size: 0x4, address: 0x4A5018
float g_DEGTORAD; // size: 0x4, address: 0x485A58
unsigned int anim_ID_jump; // size: 0x4, address: 0x4A5010
unsigned int anim_ID_idle_scared; // size: 0x4, address: 0x4A5024
unsigned int anim_ID_idle; // size: 0x4, address: 0x4A500C
unsigned int anim_ID_extra_scratch; // size: 0x4, address: 0x4A5020
unsigned int anim_ID_ouch; // size: 0x4, address: 0x4A5014
class xScene * xScene_current; // size: 0x4, address: 0x4A4E08
class Vector3D * gBSPOffset; // size: 0x4, address: 0x4A4FA4
float g_RADTODEG; // size: 0x4, address: 0x485A60
class _rpAtomic * hackUpdateSkinAtomic(class _rpAtomic *, void *); // size: 0x0, address: 0x3F0340
float deltaFrame; // size: 0x4, address: 0x4A4C88
class zCharacter * bad_guy; // size: 0x4, address: 0x4A503C
class _rpAtomic * zSkinSetupAtomicCallback(class _rpAtomic *, void *); // size: 0x0, address: 0x3F0BB0
class _RwFrame * _animClumpForAllFramesAddSequencesCallBack(class _RwFrame *, void *); // size: 0x0, address: 0x0
class _RpAnimSequence * _clumpAddSequence(class _RpAnimSequence *, void *); // size: 0x0, address: 0x0
// total size: 0x1C
class iDisplayCamera {
    // Members
public:
    class Vector3D m_pos; // offset 0x0, size 0xC
    class Vector3D m_rot; // offset 0xC, size 0xC
    float m_fov; // offset 0x18, size 0x4
};
// total size: 0x8
class _RwTexCoords {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0xC
class _rxHeapSuperBlockDescriptor {
    // Members
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class _rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
// total size: 0xB0
class _RwFrame {
    // Members
public:
    class _RwObject object; // offset 0x0, size 0x8
    class _RwMatrix modelling; // offset 0x10, size 0x40
    class _RwMatrix ltm; // offset 0x50, size 0x40
    class _RwLLLink inDirtyListLink; // offset 0x90, size 0x8
    class _RwLinkList objectList; // offset 0x98, size 0x8
    class _RwFrame * child; // offset 0xA0, size 0x4
    class _RwFrame * next; // offset 0xA4, size 0x4
    class _RwFrame * root; // offset 0xA8, size 0x4
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
class _tagxEnv {
    // Members
public:
    class _tagiEnvRuntime * m_runtime; // offset 0x0, size 0x4
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
// total size: 0x10
class _RpSkinAnim {
    // Members
public:
    signed int numFrames; // offset 0x0, size 0x4
    signed int flags; // offset 0x4, size 0x4
    float duration; // offset 0x8, size 0x4
    class _RpSkinFrame * pFrames; // offset 0xC, size 0x4
};
// total size: 0x4
class compressed_pair_imp : private allocator {
    // Members
public:
    unsigned int second_; // offset 0x0, size 0x4
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
// total size: 0xC
class _RxClusterRef {
    // Members
public:
    class _RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum _RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
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
enum _RwTextureAddressMode {
    rwTEXTUREADDRESSNATEXTUREADDRESS = 0,
    rwTEXTUREADDRESSWRAP = 1,
    rwTEXTUREADDRESSMIRROR = 2,
    rwTEXTUREADDRESSCLAMP = 3,
    rwTEXTUREADDRESSBORDER = 4,
    rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xFC
class zCharacter : public xGameCharacter {
    // Members
public:
    signed int chris_hack_value; // offset 0xCC, size 0x4
    signed int snack_delay; // offset 0xD0, size 0x4
    signed int m_currentState; // offset 0xD4, size 0x4
    signed int m_jumping; // offset 0xD8, size 0x4
    signed int m_doublejumping; // offset 0xDC, size 0x4
    float m_gradient; // offset 0xE0, size 0x4
    signed int m_player; // offset 0xE4, size 0x4
    unsigned int current_animation_ID; // offset 0xE8, size 0x4
    class xAnimData * current_anim; // offset 0xEC, size 0x4
    signed int m_health; // offset 0xF0, size 0x4
    float m_storedHeight; // offset 0xF4, size 0x4
    signed int m_resetTimer; // offset 0xF8, size 0x4
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
enum _RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x4
class xTrigger {
    // Members
public:
    class iTriggerResource * m_resource; // offset 0x0, size 0x4
};
// total size: 0xC
class __vector_imp : private __vector_pod, private compile_assert {};
enum _RpAnimType {
    rpERR = 0,
    rpTRANSLATE = 1,
    rpROTATE = 2,
    rpANIMTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x4
class _RpSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
};
// total size: 0x8
class iConditionRuntime {
    // Members
public:
    class xCondition * m_operand; // offset 0x0, size 0x4
    unsigned short m_match; // offset 0x4, size 0x2
    unsigned short m_trigger; // offset 0x6, size 0x2
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
// total size: 0xC
class _RxOutputSpec {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum _RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum _RxClusterValid allOtherClusters; // offset 0x8, size 0x4
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
// total size: 0x4
class _RwStreamFile {
    // Members
public:
    void * fpFile; // offset 0x0, size 0x4
};
// total size: 0xC
class Vector3D {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x1
class compile_assert {};
enum _rpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x24
class _RpSkinFrame {
    // Members
public:
    class _RtQuat q; // offset 0x0, size 0x10
    class _RwV3d t; // offset 0x10, size 0xC
    float time; // offset 0x1C, size 0x4
    class _RpSkinFrame * prevFrame; // offset 0x20, size 0x4
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
// total size: 0x8
class xRule {
    // Members
public:
    class iRuleResource * m_resource; // offset 0x0, size 0x4
    void * m_runtime; // offset 0x4, size 0x4
};
// total size: 0x8
class _rxHeapFreeBlock {
    // Members
public:
    unsigned int size; // offset 0x0, size 0x4
    class _rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
// total size: 0x6
class _FCinfo {
    // Members
public:
    unsigned short nidx[3]; // offset 0x0, size 0x6
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
class _RpPolygon {
    // Members
public:
    unsigned short matIndex; // offset 0x0, size 0x2
    unsigned short vertIndex[3]; // offset 0x2, size 0x6
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
// total size: 0x40
class _RwMatrix {
    // Members
public:
    class _RwV3d right; // offset 0x0, size 0xC
    unsigned int flags; // offset 0xC, size 0x4
    class _RwV3d up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class _RwV3d at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
    class _RwV3d pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x4
class _iEntryPointRuntime {
    // Members
public:
    unsigned int m_enabled; // offset 0x0, size 0x4
};
// total size: 0x10
class _RtQuat {
    // Members
public:
    class _RwV3d imag; // offset 0x0, size 0xC
    float real; // offset 0xC, size 0x4
};
// total size: 0x8
class tagiFloorTri {
    // Members
public:
    unsigned short m_v[3]; // offset 0x0, size 0x6
    unsigned short m_n; // offset 0x6, size 0x2
};
// total size: 0x8
class _RpTriangle {
    // Members
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    signed short matIndex; // offset 0x6, size 0x2
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
// total size: 0x4C
class xAnimMgr : public xModule {
    // Members
public:
    class vector anims; // offset 0x30, size 0xC
    class vector ress; // offset 0x3C, size 0xC
    unsigned int ID_counter; // offset 0x48, size 0x4
};
// total size: 0x8
class _RxPipelineNodeParam {
    // Members
public:
    void * dataParam; // offset 0x0, size 0x4
    class _RxHeap * heap; // offset 0x4, size 0x4
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
// total size: 0x20
class _p2Geom {
    // Members
public:
    unsigned int m_meshCount; // offset 0x0, size 0x4
    class tagP2Mesh * m_mesh; // offset 0x4, size 0x4
    class _iRenderEffects effects; // offset 0x8, size 0x14
    class _RpClump * m_clump; // offset 0x1C, size 0x4
};
// total size: 0xC
class _RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
// total size: 0x70
class _rpAtomic {
    // Members
public:
    class _RwObjectHasFrame object; // offset 0x0, size 0x14
    class _rwResEntryTag * repEntry; // offset 0x14, size 0x4
    class _RpGeometry * geometry; // offset 0x18, size 0x4
    class _RwSphere boundingSphere; // offset 0x1C, size 0x10
    class _RwSphere worldBoundingSphere; // offset 0x2C, size 0x10
    class _RpClump * clump; // offset 0x3C, size 0x4
    class _RwLLLink inClumpLink; // offset 0x40, size 0x8
    class _rpAtomic * (* renderCallBack)(class _rpAtomic *); // offset 0x48, size 0x4
    class _rpInterpolator interpolator; // offset 0x4C, size 0x14
    unsigned short renderFrame; // offset 0x60, size 0x2
    unsigned short collisionFrame; // offset 0x62, size 0x2
    class _RwLinkList llWorldSectorsInAtomic; // offset 0x64, size 0x8
    class _RxPipeline * pipeline; // offset 0x6C, size 0x4
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
// total size: 0x14
class xAnimData : private iAnimInstance {
    // Members
public:
    unsigned int m_assetID; // offset 0x8, size 0x4
    unsigned int m_ID; // offset 0xC, size 0x4
    class iAnimData * m_resource; // offset 0x10, size 0x4
};
enum _RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x3E84
class tagXStreamMDSDirectory {
    // Members
public:
    unsigned int count; // offset 0x0, size 0x4
    class tagXStreamDirectoryEntry directory[1000]; // offset 0x4, size 0x3E80
};
// total size: 0x8
class xCamera {
    // Members
public:
    class iCameraResource * m_resource; // offset 0x0, size 0x4
    void * * m_runtime; // offset 0x4, size 0x4
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
// total size: 0x60
class _RpSkinBoneInfo {
    // Members
public:
    signed int boneTag; // offset 0x0, size 0x4
    signed int boneIndex; // offset 0x4, size 0x4
    signed int flags; // offset 0x8, size 0x4
    class _RwMatrix boneToSkinMat; // offset 0x10, size 0x40
    class _RwFrame * pFrame; // offset 0x50, size 0x4
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
// total size: 0xC
class _RwSurfaceProperties {
    // Members
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
// total size: 0xC
class __vector_imp : private __vector_pod, private compile_assert {};
// total size: 0x8
class xLight {
    // Members
public:
    class iLightResource * m_resource; // offset 0x0, size 0x4
    class _iLightRuntime * m_runtime; // offset 0x4, size 0x4
};
// total size: 0x1C
class _RpMorphTarget {
    // Members
public:
    class _RpGeometry * parentGeom; // offset 0x0, size 0x4
    class _RwSphere boundingSphere; // offset 0x4, size 0x10
    class _RwV3d * verts; // offset 0x14, size 0x4
    class _RwV3d * normals; // offset 0x18, size 0x4
};
// total size: 0x4
class compressed_pair : private compressed_pair_imp {};
// total size: 0xC
class vector : private __vector_imp {};
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
// total size: 0x14
class _rpInterpolator {
    // Members
public:
    signed int flags; // offset 0x0, size 0x4
    signed short startMorphTarget; // offset 0x4, size 0x2
    signed short endMorphTarget; // offset 0x6, size 0x2
    float time; // offset 0x8, size 0x4
    float recipTime; // offset 0xC, size 0x4
    float position; // offset 0x10, size 0x4
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
// total size: 0x14
class _RwObjectHasFrame {
    // Members
public:
    class _RwObject object; // offset 0x0, size 0x8
    class _RwLLLink lFrame; // offset 0x8, size 0x8
    class _RwObjectHasFrame * (* sync)(class _RwObjectHasFrame *); // offset 0x10, size 0x4
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
// total size: 0x1C
class p2Camera {
    // Members
public:
    class Vector3D m_pos; // offset 0x0, size 0xC
    class Vector3D m_rot; // offset 0xC, size 0xC
    float m_fov; // offset 0x18, size 0x4
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
// total size: 0x1
class allocator {};
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
// total size: 0x8
class xAction {
    // Members
public:
    class iActionResource * m_resource; // offset 0x0, size 0x4
    class iActionRuntime * m_runtime; // offset 0x4, size 0x4
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
class _RxPipelineRequiresCluster {
    // Members
public:
    class _RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum _RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
// total size: 0x1C
class _RpAnimSequence {
    // Members
public:
    signed int refCnt; // offset 0x0, size 0x4
    char * name; // offset 0x4, size 0x4
    enum _RpAnimType type; // offset 0x8, size 0x4
    signed int numKeys; // offset 0xC, size 0x4
    void * keys; // offset 0x10, size 0x4
    signed int numInterpolators; // offset 0x14, size 0x4
    class _rpAnimInterpolator * interps; // offset 0x18, size 0x4
};
// total size: 0x2C
class _RpSkinSkeleton {
    // Members
public:
    signed int numBones; // offset 0x0, size 0x4
    class _RpSkinAnim * pCurrentAnim; // offset 0x4, size 0x4
    float currentTime; // offset 0x8, size 0x4
    class _RpSkinFrame * pNextFrame; // offset 0xC, size 0x4
    class _RpSkinSkeleton * (* pAnimCallBack)(class _RpSkinSkeleton *, void *); // offset 0x10, size 0x4
    void * pAnimCallBackData; // offset 0x14, size 0x4
    float animCallBackTime; // offset 0x18, size 0x4
    class _RpSkinSkeleton * (* pAnimLoopCallBack)(class _RpSkinSkeleton *, void *); // offset 0x1C, size 0x4
    void * pAnimLoopCallBackData; // offset 0x20, size 0x4
    class _RwMatrix * pMatrixArray; // offset 0x24, size 0x4
    void * pMatrixArrayUnaligned; // offset 0x28, size 0x4
};
// total size: 0xC
class tagP2MeshVertex {
    // Members
public:
    float m_x; // offset 0x0, size 0x4
    float m_y; // offset 0x4, size 0x4
    float m_z; // offset 0x8, size 0x4
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
class iMarkerResource {
    // Members
public:
    class Vector3D m_pos; // offset 0x0, size 0xC
};
// total size: 0xC
class vector : private __vector_imp {};
// total size: 0xCC
class xGameObj {
    // Members
public:
    unsigned int m_objFlags; // offset 0x0, size 0x4
    unsigned int m_objID; // offset 0x4, size 0x4
    unsigned int m_objType; // offset 0x8, size 0x4
    class xFSMData m_fsmData; // offset 0xC, size 0xC
    class _p2Geom m_geom; // offset 0x18, size 0x20
    class xGameObj * m_next; // offset 0x38, size 0x4
    class xGameObj * m_prev; // offset 0x3C, size 0x4
    class tagxPhysicsObject m_phys; // offset 0x40, size 0x88
};
// total size: 0x8
class xMarker {
    // Members
public:
    class iMarkerResource * m_resource; // offset 0x0, size 0x4
    void * * m_runtime; // offset 0x4, size 0x4
};
// total size: 0x8
class xCondition {
    // Members
public:
    class iConditionResource * m_resource; // offset 0x0, size 0x4
    class iConditionRuntime * m_runtime; // offset 0x4, size 0x4
};
// total size: 0x0
class _rxReq {};
// total size: 0x8
class _RwLLLink {
    // Members
public:
    class _RwLLLink * next; // offset 0x0, size 0x4
    class _RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0xC
class __vector_pod {
    // Members
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    unsigned int * data_; // offset 0x8, size 0x4
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
// total size: 0xCC
class xGameCharacter : public xGameObj {};
// total size: 0x10
class iAnimData {
    // Members
public:
    class _RpSkinAnim * skin_anim; // offset 0x0, size 0x4
    char * m_name; // offset 0x4, size 0x4
    float duration; // offset 0x8, size 0x4
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
// total size: 0xC
class _RpMaterialList {
    // Members
public:
    class _RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
};
// total size: 0x8
class iAnimInstance {
    // Members
public:
    float time; // offset 0x0, size 0x4
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
class _RwStreamCustom {
    // Members
public:
    signed int (* sfnclose)(void *); // offset 0x0, size 0x4
    unsigned int (* sfnread)(void *, void *, unsigned int); // offset 0x4, size 0x4
    signed int (* sfnwrite)(void *, void *, unsigned int); // offset 0x8, size 0x4
    signed int (* sfnskip)(void *, unsigned int); // offset 0xC, size 0x4
    void * data; // offset 0x10, size 0x4
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
struct /* @anon0 */ {};
// total size: 0x10
class _RwMatrixWeights {
    // Members
public:
    float w0; // offset 0x0, size 0x4
    float w1; // offset 0x4, size 0x4
    float w2; // offset 0x8, size 0x4
    float w3; // offset 0xC, size 0x4
};
// total size: 0xC
class _rpAnimInterpolator {
    // Members
public:
    signed int startKeyFrame; // offset 0x0, size 0x4
    signed int endKeyFrame; // offset 0x4, size 0x4
    float time; // offset 0x8, size 0x4
};
// total size: 0x14
class _tagiEnvRuntime {
    // Members
public:
    class _RpWorld * world; // offset 0x0, size 0x4
    class Vector3D world_origin; // offset 0x4, size 0xC
    class _RwTexDictionary * tex_dict; // offset 0x10, size 0x4
};
// total size: 0x24
class _RwStream {
    // Members
public:
    enum _RwStreamType type; // offset 0x0, size 0x4
    enum _RwStreamAccessType accessType; // offset 0x4, size 0x4
    signed int position; // offset 0x8, size 0x4
    class _RwStreamUnion Type; // offset 0xC, size 0x14
    signed int rwOwned; // offset 0x20, size 0x4
};
// total size: 0x18
class _RwTexDictionary {
    // Members
public:
    class _RwObject object; // offset 0x0, size 0x8
    class _RwLinkList texturesInDict; // offset 0x8, size 0x8
    class _RwLLLink lInInstance; // offset 0x10, size 0x8
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
// total size: 0x20
class _RpSkin {
    // Members
public:
    signed int numBones; // offset 0x0, size 0x4
    class _RpSkinBoneInfo * pBoneInfo; // offset 0x4, size 0x4
    signed int totalVertices; // offset 0x8, size 0x4
    class _RpGeometry * pGeometry; // offset 0xC, size 0x4
    class _RpSkinSkeleton * pCurrentSkeleton; // offset 0x10, size 0x4
    unsigned int * pMatrixIndexMap; // offset 0x14, size 0x4
    class _RwMatrixWeights * pMatrixWeightsMap; // offset 0x18, size 0x4
    void * pPlatformData; // offset 0x1C, size 0x4
};
enum _RwStreamType {
    rwNASTREAM = 0,
    rwSTREAMFILE = 1,
    rwSTREAMFILENAME = 2,
    rwSTREAMMEMORY = 3,
    rwSTREAMCUSTOM = 4,
    rwSTREAMTYPEFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x0
class tagiMesh {};
// total size: 0x4
class _RpVertexNormal {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
    signed char z; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
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
// total size: 0x10
class _RwSphere {
    // Members
public:
    class _RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
// total size: 0x44
class _RpGeometry {
    // Members
public:
    class _RwObject object; // offset 0x0, size 0x8
    unsigned short lockedSinceLastInst; // offset 0x8, size 0x2
    signed short refCount; // offset 0xA, size 0x2
    class _RpMaterialList matList; // offset 0xC, size 0xC
    signed int numTriangles; // offset 0x18, size 0x4
    signed int numVertices; // offset 0x1C, size 0x4
    signed int numMorphTargets; // offset 0x20, size 0x4
    class _RpTriangle * triangles; // offset 0x24, size 0x4
    class _RwRGBA * preLitLum; // offset 0x28, size 0x4
    class _RwTexCoords * vertexTexCoords; // offset 0x2C, size 0x4
    class _RwSurfaceProperties ignoredSurfaceProps; // offset 0x30, size 0xC
    class _RpMeshHeader * mesh; // offset 0x3C, size 0x4
    class _RpMorphTarget * morphTarget; // offset 0x40, size 0x4
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
class _RwStreamUnion {
    // Members
public:
    union { // inferred
        class _RwStreamMemory memory; // offset 0x0, size 0xC
        class _RwStreamFile file; // offset 0x0, size 0x4
        class _RwStreamCustom custom; // offset 0x0, size 0x14
    };
};
enum _RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x4
class iActionRuntime {
    // Members
public:
    class xAction * m_and; // offset 0x0, size 0x4
};
enum _RwStreamAccessType {
    rwNASTREAMACCESS = 0,
    rwSTREAMREAD = 1,
    rwSTREAMWRITE = 2,
    rwSTREAMAPPEND = 3,
    rwSTREAMACCESSTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x18
class _RwBBox {
    // Members
public:
    class _RwV3d sup; // offset 0x0, size 0xC
    class _RwV3d inf; // offset 0xC, size 0xC
};
// total size: 0xC
class xFSMData {
    // Members
public:
    unsigned short m_fsmType; // offset 0x0, size 0x2
    unsigned short m_fsmState; // offset 0x2, size 0x2
    unsigned short m_fsmNextState; // offset 0x4, size 0x2
    signed int m_fsmForceChange; // offset 0x8, size 0x4
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
// total size: 0x8
class iActionResource {
    // Members
public:
    unsigned char m_cmdType; // offset 0x0, size 0x1
    unsigned char m_cmd; // offset 0x1, size 0x1
    unsigned short pad; // offset 0x2, size 0x2
    unsigned int m_cmdParameter; // offset 0x4, size 0x4
};
// total size: 0xC
class _SkinData {
    // Members
public:
    class _RpSkin * skin; // offset 0x0, size 0x4
    class _rpAtomic * atomic; // offset 0x4, size 0x4
    float angle; // offset 0x8, size 0x4
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
// total size: 0xC
class _RwStreamMemory {
    // Members
public:
    unsigned int position; // offset 0x0, size 0x4
    unsigned int nSize; // offset 0x4, size 0x4
    unsigned char * memBlock; // offset 0x8, size 0x4
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
// total size: 0x30
class xModule {
    // Members
public:
    signed int m_type; // offset 0x0, size 0x4
    char m_name[32]; // offset 0x4, size 0x20
    signed int m_init; // offset 0x24, size 0x4
    signed int m_state; // offset 0x28, size 0x4
};
// total size: 0x40
class tagCollideInfo {
    // Members
public:
    class _tagxEnv * env; // offset 0x0, size 0x4
    class Vector3D orig; // offset 0x4, size 0xC
    class Vector3D direction; // offset 0x10, size 0xC
    float max_dist; // offset 0x1C, size 0x4
    unsigned int flags; // offset 0x20, size 0x4
    class Vector3D hit_pos; // offset 0x24, size 0xC
    float hit_distance; // offset 0x30, size 0x4
    class Vector3D hit_normal; // offset 0x34, size 0xC
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Game\z\zCharacter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003EE840 -> 0x003EE84C
*/
// Range: 0x3EE840 -> 0x3EE84C
// this: r2
void zCharacter::SetPlayerFlag(signed int val /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3EE840 -> 0x3EE84C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Game\z\zCharacter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003EE850 -> 0x003EE884
*/
// Range: 0x3EE850 -> 0x3EE884
// this: r2
void zCharacter::getHurt() {
    /* anonymous block */ {
        // Range: 0x3EE850 -> 0x3EE884
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Game\z\zCharacter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003EE890 -> 0x003EF004
*/
// Range: 0x3EE890 -> 0x3EF004
// this: r18
void zCharacter::MoveForward(float delta /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3EE890 -> 0x3EF004
        signed int newState; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Game\z\zCharacter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003EF010 -> 0x003EF4A0
*/
// Range: 0x3EF010 -> 0x3EF4A0
// this: r17
void zCharacter::Turn(float delta /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3EF010 -> 0x3EF4A0
        signed int newState; // r7
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Game\z\zCharacter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003EF4A0 -> 0x003EF738
*/
// Range: 0x3EF4A0 -> 0x3EF738
// this: r18
void zCharacter::Jump() {
    /* anonymous block */ {
        // Range: 0x3EF4A0 -> 0x3EF738
        signed int newState; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Game\z\zCharacter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003EF740 -> 0x003EF748
*/
// Range: 0x3EF740 -> 0x3EF748
void render() {
    /* anonymous block */ {
        // Range: 0x3EF740 -> 0x3EF748
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Game\z\zCharacter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003EF750 -> 0x003EF8EC
*/
// Range: 0x3EF750 -> 0x3EF8EC
// this: r17
void zCharacter::setState(signed int state /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3EF750 -> 0x3EF8EC
        signed int idleCountDown; // @ 0x004A5058
        signed char init; // @ 0x004A505C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Game\z\zCharacter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003EF8F0 -> 0x003F016C
*/
// Range: 0x3EF8F0 -> 0x3F016C
// this: r18
void zCharacter::nextFrame() {
    /* anonymous block */ {
        // Range: 0x3EF8F0 -> 0x3F016C
        unsigned char mats[10]; // r29+0x138
        signed int total; // r2
        class Vector3D no_bsp_pos; // r29+0x128
        class _RwMatrix * m; // r20
        class _RwFrame * f; // r19
        class _RwV3d up; // r29+0x118
        class _RwV3d * rw_local_z; // r2
        class _RwMatrix * matrix; // r2
        class Vector3D motion_2d; // r29+0x108
        class tagCollideInfo collision; // r29+0x80
        class Vector3D nn; // r29+0xF8
        class Vector3D n; // r29+0xE8
        unsigned char res; // r2
        unsigned char mater[4]; // r29+0x14C
        class Vector3D ppp; // r29+0xD8
        float delta; // r29+0x148
        class Vector3D * orig; // r17
        class Vector3D * pos; // r16
        class _RwV3d p; // r29+0xC8
        signed char init; // @ 0x004A5054
        float scared_anim_time; // @ 0x004A5050
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Game\z\zCharacter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F0170 -> 0x003F01C0
*/
// Range: 0x3F0170 -> 0x3F01C0
// this: r16
void zCharacter::StoreCurrentHeight() {
    /* anonymous block */ {
        // Range: 0x3F0170 -> 0x3F01C0
        class _RwV3d * pos; // r2
        class _RwMatrix * m; // r2
        class _RwFrame * f; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Game\z\zCharacter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F01C0 -> 0x003F0334
*/
// Range: 0x3F01C0 -> 0x3F0334
// this: r17
void zCharacter::calcFloorHeight() {
    /* anonymous block */ {
        // Range: 0x3F01C0 -> 0x3F0334
        class tagCollideInfo stab_collision; // r29+0x30
        class Vector3D * pos; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Game\z\zCharacter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F0340 -> 0x003F03A0
*/
// Range: 0x3F0340 -> 0x3F03A0
static class _rpAtomic * hackUpdateSkinAtomic(class _rpAtomic * atomic /* r16 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3F0340 -> 0x3F03A0
        class _RpSkin * skin; // r2
        float delta; // r20
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Game\z\zCharacter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F03A0 -> 0x003F0464
*/
// Range: 0x3F03A0 -> 0x3F0464
// this: r16
void zCharacter::restart() {
    /* anonymous block */ {
        // Range: 0x3F03A0 -> 0x3F0464
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Game\z\zCharacter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F0470 -> 0x003F0478
*/
// Range: 0x3F0470 -> 0x3F0478
void kill() {
    /* anonymous block */ {
        // Range: 0x3F0470 -> 0x3F0478
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Game\z\zCharacter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F0480 -> 0x003F0530
*/
// Range: 0x3F0480 -> 0x3F0530
void init() {
    /* anonymous block */ {
        // Range: 0x3F0480 -> 0x3F0530
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Game\z\zCharacter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F0530 -> 0x003F0754
*/
// Range: 0x3F0530 -> 0x3F0754
// this: r16
void zCharacter::init(char * filename /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3F0530 -> 0x3F0754
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Game\z\zCharacter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F0760 -> 0x003F0864
*/
// Range: 0x3F0760 -> 0x3F0864
// this: r18
void zCharacter::SetCurrentAnim(class xAnimData * pAnimData /* r17 */, unsigned int aid /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3F0760 -> 0x3F0864
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Game\z\zCharacter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F0870 -> 0x003F08DC
*/
// Range: 0x3F0870 -> 0x3F08DC
static class _rpAtomic * zSkinAnimSetupAtomicCallback(class _rpAtomic * atomic /* r17 */, void * data /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3F0870 -> 0x3F08DC
        class _RpSkinAnim * ska; // r2
        class _RpSkin * sk; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Game\z\zCharacter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F08E0 -> 0x003F094C
*/
// Range: 0x3F08E0 -> 0x3F094C
class _RpClump * LoadHackModel(char * filename /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3F08E0 -> 0x3F094C
        class _RpClump * clump; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Game\z\zCharacter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F0950 -> 0x003F0BAC
*/
// Range: 0x3F0950 -> 0x3F0BAC
class _RpClump * DffLoad(char * filename /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3F0950 -> 0x3F0BAC
        signed int res; // r2
        class _RpClump * clump; // r17
        class _RwStream * stream; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Game\z\zCharacter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F0BB0 -> 0x003F0C14
*/
// Range: 0x3F0BB0 -> 0x3F0C14
class _rpAtomic * zSkinSetupAtomicCallback(class _rpAtomic * atomic /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3F0BB0 -> 0x3F0C14
        class _RpSkin * skin; // r16
    }
}


