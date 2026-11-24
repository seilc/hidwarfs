/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80189AF0 -> 0x801ABA98
*/
// total size: 0x10
class SimpleFontCache {
    // Members
    unsigned long long fontUID; // offset 0x0, size 0x8
    class EntityHandle * fontHandle; // offset 0x8, size 0x4
};
// total size: 0x48
class EntityHandle : public EntityHandleBase {};
// total size: 0x10
class model_cache_entry {
    // Members
    unsigned long long id; // offset 0x0, size 0x8
    unsigned int order; // offset 0x8, size 0x4
    class xModelInstance * model; // offset 0xC, size 0x4
};
// total size: 0x2C
class Font : public Entity {
    // Members
    class EntityHandle * assetHandle; // offset 0x18, size 0x4
    class EntityHandle * textureHandle; // offset 0x1C, size 0x4
    float padTop; // offset 0x20, size 0x4
    float padBottom; // offset 0x24, size 0x4
    float yAdvance; // offset 0x28, size 0x4
};
// total size: 0xC
class Glyph {
    // Members
    short offset; // offset 0x0, size 0x2
    short width; // offset 0x2, size 0x2
    short advance; // offset 0x4, size 0x2
    short height; // offset 0x6, size 0x2
    short base; // offset 0x8, size 0x2
    short pad; // offset 0xA, size 0x2
};
// total size: 0x38
class tex_args {
    // Members
    unsigned long long textureID; // offset 0x0, size 0x8
    float rot; // offset 0x8, size 0x4
    class basic_rect src; // offset 0xC, size 0x10
    class basic_rect dst; // offset 0x1C, size 0x10
    class xVec2 off; // offset 0x2C, size 0x8
    enum @enum scale; // offset 0x34, size 0x4
};
enum @enum {
    SCALE_FONT = 0,
    SCALE_SCREEN = 1,
    SCALE_SIZE = 2,
    SCALE_FONT_WIDTH = 3,
    SCALE_FONT_HEIGHT = 4,
    SCALE_SCREEN_WIDTH = 5,
    SCALE_SCREEN_HEIGHT = 6,
};
// total size: 0x2C
class model_args {
    // Members
    class xModelInstance * model; // offset 0x0, size 0x4
    class xVec3 rot; // offset 0x4, size 0xC
    class basic_rect dst; // offset 0x10, size 0x10
    class xVec2 off; // offset 0x20, size 0x8
    enum @enum scale; // offset 0x28, size 0x4
};
enum @enum {
    SCALE_FONT = 0,
    SCALE_SCREEN = 1,
    SCALE_SIZE = 2,
};
// total size: 0x130
class tl_cache_entry {
    // Members
    bool hasData; // offset 0x0, size 0x1
    class Time last_used; // offset 0x8, size 0x8
    class layout tl; // offset 0x10, size 0x120
};
// total size: 0x14
class tag_entry {
    // Members
    class substr name; // offset 0x0, size 0x8
    char op; // offset 0x8, size 0x1
    class substr * args; // offset 0xC, size 0x4
    unsigned long args_size; // offset 0x10, size 0x4
};
// total size: 0x8
class tag_entry_list {
    // Members
    class tag_entry * entries; // offset 0x0, size 0x4
    unsigned long size; // offset 0x4, size 0x4
};
// total size: 0x8
class @class {
    // Members
    char * s; // offset 0x0, size 0x4
    char * end; // offset 0x4, size 0x4
};
// total size: 0x30
class model_tag_context {
    // Members
    class xModelInstance * model; // offset 0x0, size 0x4
    class xVec3 rot; // offset 0x4, size 0xC
    class basic_rect dst; // offset 0x10, size 0x10
    class xSphere o; // offset 0x20, size 0x10
};
// total size: 0x30
class tex_tag_context {
    // Members
    class EntityHandle * textureHandle; // offset 0x0, size 0x4
    class EntityHandle * immediatePrototypeHandle; // offset 0x4, size 0x4
    float rotCos; // offset 0x8, size 0x4
    float rotSin; // offset 0xC, size 0x4
    class basic_rect src; // offset 0x10, size 0x10
    class basic_rect dst; // offset 0x20, size 0x10
};
// total size: 0x5A8
class TriggerPhantom : public xOGEntity {
    // Members
    class hkpShape * shape; // offset 0x3C, size 0x4
    class hkpPhantom * collector; // offset 0x40, size 0x4
    class hkpRigidBody * rigidBody; // offset 0x44, size 0x4
    class TriggerPhantomAsset * Asset; // offset 0x48, size 0x4
    class hkpCollidable * penetrationList[100]; // offset 0x4C, size 0x190
    float weightList[100]; // offset 0x1DC, size 0x190
    unsigned int baseTypeList[100]; // offset 0x36C, size 0x190
    int penetrationCount; // offset 0x4FC, size 0x4
    float penetrationWeight; // offset 0x500, size 0x4
    float prevPenetrationWeight; // offset 0x504, size 0x4
    unsigned int includedEntCount; // offset 0x508, size 0x4
    unsigned int excludedEntCount; // offset 0x50C, size 0x4
    class xBase * * includedEnt; // offset 0x510, size 0x4
    class xBase * * excludedEnt; // offset 0x514, size 0x4
    bool enabled; // offset 0x518, size 0x1
    class xBase * dotTargetList[8]; // offset 0x51C, size 0x20
    float dotTimerList[8]; // offset 0x53C, size 0x20
    int dotTargetCount; // offset 0x55C, size 0x4
    class xMat4x3 driveCurMat; // offset 0x560, size 0x40
    bool formSwitch; // offset 0x5A0, size 0x1
    unsigned int playersEnteredFlag; // offset 0x5A4, size 0x4
};
// total size: 0xE0
class AabbPhantomCollector : public hkpAabbPhantom {
    // Members
    unsigned int overlapCount; // offset 0xD0, size 0x4
    class TriggerPhantom * owner; // offset 0xD4, size 0x4
};
// total size: 0x170
class SimpleShapePhantomCollector : public hkpSimpleShapePhantom {
    // Members
    unsigned int type; // offset 0x160, size 0x4
    unsigned int overlapCount; // offset 0x164, size 0x4
    class TriggerPhantom * owner; // offset 0x168, size 0x4
};
// total size: 0x8
class AnimList {
    // Members
    class __EntryList__ EntryList; // offset 0x0, size 0x8
};
// total size: 0x8
class __EntryList__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x4
class Pointer32 {
    // Members
    unsigned int _p; // offset 0x0, size 0x4
};
// total size: 0x14
class zEntEventAllOfType_CB {
    // Members
    class xBase * from; // offset 0x0, size 0x4
    unsigned int fromEvent; // offset 0x4, size 0x4
    unsigned int toEvent; // offset 0x8, size 0x4
    class EventAny * params; // offset 0xC, size 0x4
    enum ForceEvent forceEvent; // offset 0x10, size 0x4
};
// total size: 0x20
class EventActionAnimRefModelPlay : public EventActionNew {
    // Members
    class uid refModelID; // offset 0x0, size 0x8
    class uid animationAssetID; // offset 0x8, size 0x8
    unsigned int firstInstance; // offset 0x10, size 0x4
    int numInstances; // offset 0x14, size 0x4
    bool looping; // offset 0x18, size 0x1
    bool randomizeStart; // offset 0x19, size 0x1
};
// total size: 0x10
class EventActionAnimRefModelStop : public EventActionNew {
    // Members
    class uid refModelID; // offset 0x0, size 0x8
    unsigned int firstInstance; // offset 0x8, size 0x4
    int numInstances; // offset 0xC, size 0x4
};
// total size: 0xC
class EventActionAnimPlayRandom : public EventActionNew {
    // Members
    unsigned int param0; // offset 0x0, size 0x4
    unsigned int param1; // offset 0x4, size 0x4
    float param3; // offset 0x8, size 0x4
};
// total size: 0xC
class EventActionAnimPlayMaybe : public EventActionNew {
    // Members
    unsigned int param0; // offset 0x0, size 0x4
    float param1; // offset 0x4, size 0x4
    float param3; // offset 0x8, size 0x4
};
// total size: 0x10
class zEntSimpleObj_MgrInitCB {
    // Members
    class zEntSimpleObj * * tempEntList; // offset 0x0, size 0x4
    int totEntCount; // offset 0x4, size 0x4
    int mgrEntCount; // offset 0x8, size 0x4
    int custEntCount; // offset 0xC, size 0x4
};
enum SimpObjOrientationType {
    Default = 0,
    FaceCamera = 1,
    FaceCameraYawOnly = 2,
    FaceCameraWorldUp = 3,
    FaceCameraPitchOnly = 4,
    FaceCameraPlane = 5,
    FaceCameraPlaneYawOnly = 6,
    FacePlayer = 7,
    END_SimpObjOrientationTypeENUM = 8,
};
// total size: 0x3E
class WorldType {
    // Members
    char prefix[2]; // offset 0x0, size 0x2
    class @class tasks[10]; // offset 0x2, size 0x3C
};
// total size: 0x6
class @class {
    // Members
    char id[4]; // offset 0x0, size 0x4
    char startPointer[2]; // offset 0x4, size 0x2
};
// total size: 0x44
class LevelType {
    // Members
    char levelName[64]; // offset 0x0, size 0x40
    unsigned int levelID; // offset 0x40, size 0x4
};
// total size: 0x48
class zDispatcherData : public xOGEntity {
    // Members
    class zDispatcherAsset * rawass; // offset 0x3C, size 0x4
    int placeholder; // offset 0x40, size 0x4
    void * last_checkpoint_hit; // offset 0x44, size 0x4
};
// total size: 0x10
class st_ZDISPATCH_CONTEXT {
    // Members
    enum en_DISPATCH_COMMAND cmd; // offset 0x0, size 0x4
    void * indata; // offset 0x4, size 0x4
    void * inxtra; // offset 0x8, size 0x4
    void * result; // offset 0xC, size 0x4
};
enum en_DISPATCH_COMMAND {
    ZDSP_CMD_INITDFLT = 4294967295,
    ZDSP_CMD_CTRL_CFGGET = 0,
    ZDSP_CMD_CTRL_CFGSET = 1,
    ZDSP_CMD_CTRL_SUBTGET = 2,
    ZDSP_CMD_CTRL_SUBTSET = 3,
    ZDSP_CMD_GSTATE_GET = 4,
    ZDSP_CMD_GSTATE_SET = 5,
    ZDSP_CMD_GMODE_GET = 6,
    ZDSP_CMD_GMODE_SET = 7,
    ZDSP_CHECKPNT_SET = 8,
    ZDSP_CMD_CTRL_VIBE_P2_GET = 9,
    ZDSP_CMD_CTRL_VIBE_P2_SET = 10,
    ZDSP_CMD_NOMORE = 11,
};
// total size: 0x8
class Dispatcher_SubtitlesOn : public EventActionNoParams {
    // Members
    class uid paramSubtitles; // offset 0x0, size 0x8
};
// total size: 0x1
class EventActionNoParams : public EventActionNew {};
// total size: 0x8
class EventActionStoreCheckPoint : public EventActionNew {
    // Members
    class uid paramWidgetAssetID; // offset 0x0, size 0x8
};
enum movieSkippable {
    eNotSkippable = 0,
    eSkippableAfterFirstViewing = 1,
    eAlwaysSkippable = 2,
};
// total size: 0x8
class EventActionSetZPlaneParams : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
    float param1; // offset 0x4, size 0x4
};
// total size: 0xC
class EventActionSetFogStartEnd : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
    float param1; // offset 0x4, size 0x4
    enum FogInterpolationMode fogMode; // offset 0x8, size 0x4
};
// total size: 0xC
class EventActionSetFogColor : public EventActionNew {
    // Members
    unsigned int param0; // offset 0x0, size 0x4
    unsigned int param1; // offset 0x4, size 0x4
    unsigned int param2; // offset 0x8, size 0x4
};
// total size: 0x10
class EventActionSaveInfoToTextDepot : public EventActionNew {
    // Members
    unsigned int param0; // offset 0x0, size 0x4
    unsigned int param1; // offset 0x4, size 0x4
    unsigned int param2; // offset 0x8, size 0x4
    unsigned int param3; // offset 0xC, size 0x4
};
// total size: 0x10
class EventActionDispatcher_SetPlayerCharacter : public EventActionNew {
    // Members
    unsigned int param0; // offset 0x0, size 0x4
    class uid paramWidgetAssetID; // offset 0x8, size 0x8
};
// total size: 0x8
class EventActionPortal : public EventActionNew {
    // Members
    class uid paramWidgetAssetID; // offset 0x0, size 0x8
};
// total size: 0x1
class EventActionAllowAllPadActiveOnPressStart : public EventActionNew {
    // Members
    bool param0; // offset 0x0, size 0x1
};
// total size: 0x4
class EventActionResetPadStatus : public EventActionNew {
    // Members
    unsigned int param0; // offset 0x0, size 0x4
};
// total size: 0x1
class EventActionAllowDeviceLostSelection : public EventActionNew {
    // Members
    bool param0; // offset 0x0, size 0x1
};
// total size: 0xC
class EventActionSetGravity : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
    float param1; // offset 0x4, size 0x4
    float param2; // offset 0x8, size 0x4
};
// total size: 0x8
class EventActionSetSplitScreenMode : public EventActionNew {
    // Members
    unsigned int param0; // offset 0x0, size 0x4
    unsigned int param1; // offset 0x4, size 0x4
};
// total size: 0x10
class EventActionLightKitScene : public EventActionNew {
    // Members
    class uid LightKitAssetID; // offset 0x0, size 0x8
    bool NPC; // offset 0x8, size 0x1
    bool Player; // offset 0x9, size 0x1
    bool Object; // offset 0xA, size 0x1
    bool Environment; // offset 0xB, size 0x1
};
// total size: 0x50
class LightKitSceneEntity : public Entity {
    // Members
    class LightKitEntity * lightKits[5]; // offset 0x18, size 0x14
    class LightKitSceneAsset asset; // offset 0x30, size 0x20
};
// total size: 0x20
class LightKitSceneAsset {
    // Members
    class uid NPC; // offset 0x0, size 0x8
    class uid Player; // offset 0x8, size 0x8
    class uid Object; // offset 0x10, size 0x8
    class uid Environment; // offset 0x18, size 0x8
};
// total size: 0x1C
class EntityManager {
    // Members
    class PoolList handleList; // offset 0x0, size 0x1C
};
// total size: 0x1C
class PoolList : public PoolListBase {};
// total size: 0x18
class EventActionSetDoF : public EventActionNew {
    // Members
    bool Enabled; // offset 0x0, size 0x1
    float Blur; // offset 0x4, size 0x4
    float NearFocusPoint; // offset 0x8, size 0x4
    float NearFocusFalloff; // offset 0xC, size 0x4
    float FarFocusPoint; // offset 0x10, size 0x4
    float FarFocusFalloff; // offset 0x14, size 0x4
};
// total size: 0x10
class EventActionEndOfLevel : public EventActionNew {
    // Members
    class uid portal; // offset 0x0, size 0x8
    class uid upOnlyScript; // offset 0x8, size 0x8
};
// total size: 0x10
class EventActionSetNearFar : public EventActionNew {
    // Members
    bool changeNear; // offset 0x0, size 0x1
    float nearValue; // offset 0x4, size 0x4
    bool changeFar; // offset 0x8, size 0x1
    float farValue; // offset 0xC, size 0x4
};
// total size: 0x8
class EventActionSwitchToBW : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
    bool param1; // offset 0x4, size 0x1
};
enum eInitGuts_Stage {
    eInitGuts_First = 0,
    eInitGuts_Init = 1,
    eInitGuts_LoadData = 2,
};
enum eGameSetupState {
    eGameSetupInit = 0,
    ePreloadingSound = 1,
};
enum pause_ability {
    PA_NONE = 0,
    PA_MENU = 1,
    PA_STALL = 2,
};
// total size: 0x210
class zUIBox : public zUI {
    // Members
    void * cachedImmediateProtoHandle[9]; // offset 0xF8, size 0x24
    class ImmediateInstanceArticle * cachedImmediateArticle[9]; // offset 0x11C, size 0x24
    class Material * material[9]; // offset 0x140, size 0x24
    bool overrideTexture[9]; // offset 0x164, size 0x9
    unsigned short textureParamHandle[9]; // offset 0x16E, size 0x12
    class Sampler overrideSamplerData[9]; // offset 0x180, size 0x6C
    class RenderMode * brightRenderMode[9]; // offset 0x1EC, size 0x24
};
// total size: 0xE0
class hkpWorldCinfo : public hkReferencedObject {
    // Members
    class hkVector4 m_gravity; // offset 0x10, size 0x10
    int m_broadPhaseQuerySize; // offset 0x20, size 0x4
    float m_contactRestingVelocity; // offset 0x24, size 0x4
    class hkEnum m_broadPhaseBorderBehaviour; // offset 0x28, size 0x1
    class hkAabb m_broadPhaseWorldAabb; // offset 0x30, size 0x20
    class hkBool m_useKdTree; // offset 0x50, size 0x1
    class hkBool m_autoUpdateKdTree; // offset 0x51, size 0x1
    float m_collisionTolerance; // offset 0x54, size 0x4
    class hkRefPtr m_collisionFilter; // offset 0x58, size 0x4
    class hkRefPtr m_convexListFilter; // offset 0x5C, size 0x4
    float m_expectedMaxLinearVelocity; // offset 0x60, size 0x4
    int m_sizeOfToiEventQueue; // offset 0x64, size 0x4
    float m_expectedMinPsiDeltaTime; // offset 0x68, size 0x4
    class hkRefPtr m_memoryWatchDog; // offset 0x6C, size 0x4
    int m_broadPhaseNumMarkers; // offset 0x70, size 0x4
    class hkEnum m_contactPointGeneration; // offset 0x74, size 0x1
    class hkBool m_allowToSkipConfirmedCallbacks; // offset 0x75, size 0x1
    float m_solverTau; // offset 0x78, size 0x4
    float m_solverDamp; // offset 0x7C, size 0x4
    int m_solverIterations; // offset 0x80, size 0x4
    int m_solverMicrosteps; // offset 0x84, size 0x4
    class hkBool m_forceCoherentConstraintOrderingInSolver; // offset 0x88, size 0x1
    float m_snapCollisionToConvexEdgeThreshold; // offset 0x8C, size 0x4
    float m_snapCollisionToConcaveEdgeThreshold; // offset 0x90, size 0x4
    class hkBool m_enableToiWeldRejection; // offset 0x94, size 0x1
    class hkBool m_enableDeprecatedWelding; // offset 0x95, size 0x1
    float m_iterativeLinearCastEarlyOutDistance; // offset 0x98, size 0x4
    int m_iterativeLinearCastMaxIterations; // offset 0x9C, size 0x4
    unsigned char m_deactivationNumInactiveFramesSelectFlag0; // offset 0xA0, size 0x1
    unsigned char m_deactivationNumInactiveFramesSelectFlag1; // offset 0xA1, size 0x1
    unsigned char m_deactivationIntegrateCounter; // offset 0xA2, size 0x1
    class hkBool m_shouldActivateOnRigidBodyTransformChange; // offset 0xA3, size 0x1
    float m_deactivationReferenceDistance; // offset 0xA4, size 0x4
    float m_toiCollisionResponseRotateNormal; // offset 0xA8, size 0x4
    int m_maxSectorsPerCollideTask; // offset 0xAC, size 0x4
    class hkBool m_processToisMultithreaded; // offset 0xB0, size 0x1
    int m_maxEntriesPerToiCollideTask; // offset 0xB4, size 0x4
    float m_numToisTillAllowedPenetrationSimplifiedToi; // offset 0xB8, size 0x4
    float m_numToisTillAllowedPenetrationToi; // offset 0xBC, size 0x4
    float m_numToisTillAllowedPenetrationToiHigher; // offset 0xC0, size 0x4
    float m_numToisTillAllowedPenetrationToiForced; // offset 0xC4, size 0x4
    class hkBool m_enableDeactivation; // offset 0xC8, size 0x1
    class hkEnum m_simulationType; // offset 0xC9, size 0x1
    class hkBool m_enableSimulationIslands; // offset 0xCA, size 0x1
    unsigned int m_minDesiredIslandSize; // offset 0xCC, size 0x4
    class hkBool m_processActionsInSingleThread; // offset 0xD0, size 0x1
    float m_frameMarkerPsiSnap; // offset 0xD4, size 0x4
};
// total size: 0x1
class hkEnum {
    // Members
    signed char m_storage; // offset 0x0, size 0x1
};
// total size: 0x4
class hkRefPtr {
    // Members
    class hkpCollisionFilter * m_pntr; // offset 0x0, size 0x4
};
// total size: 0x4
class hkRefPtr {
    // Members
    class hkpConvexListFilter * m_pntr; // offset 0x0, size 0x4
};
// total size: 0x4
class hkRefPtr {
    // Members
    class hkWorldMemoryAvailableWatchDog * m_pntr; // offset 0x0, size 0x4
};
// total size: 0x4
class hkVector4Comparison {
    // Members
    int m_mask; // offset 0x0, size 0x4
};
// total size: 0xC
class EventActionTextboxOn : public EventActionNew {
    // Members
    class Pointer32 Text; // offset 0x0, size 0x4
    float DisplayTime; // offset 0x4, size 0x4
    bool HighPriority; // offset 0x8, size 0x1
};
// total size: 0x10
class GestureData {
    // Members
    enum ePadInput inputType; // offset 0x0, size 0x4
    class @class __anon; // offset 0x4, size 0xC
    class @class buttonData; // offset 0x4, size 0x8
    class @class tiltData; // offset 0x4, size 0xC
    class @class swingData; // offset 0x4, size 0xC
    class @class shakeSpeedData; // offset 0x4, size 0xC
    class @class shakeCountData; // offset 0x4, size 0x8
};
enum ePadInput {
    ePadInput_None = 0,
    ePadInput_Button = 1,
    ePadInput_Tilt = 2,
    ePadInput_Swing = 3,
    ePadInput_ShakeSpeed = 4,
    ePadInput_ShakeCount = 5,
    END_ePadInput_ENUM = 6,
};
// total size: 0xC
class @class {
    // Members
    class @class buttonData; // offset 0x0, size 0x8
    class @class tiltData; // offset 0x0, size 0xC
    class @class swingData; // offset 0x0, size 0xC
    class @class shakeSpeedData; // offset 0x0, size 0xC
    class @class shakeCountData; // offset 0x0, size 0x8
};
// total size: 0x8
class @class {
    // Members
    enum ePadButton button; // offset 0x0, size 0x4
    enum ePadButtonType buttonType; // offset 0x4, size 0x4
};
enum ePadButton {
    ePadButton_DpadUp = 0,
    ePadButton_DpadDown = 1,
    ePadButton_DpadLeft = 2,
    ePadButton_DpadRight = 3,
    ePadButton_A = 4,
    ePadButton_B = 5,
    ePadButton_C = 6,
    ePadButton_D = 7,
    ePadButton_L1 = 8,
    ePadButton_L2 = 9,
    ePadButton_LStick = 10,
    ePadButton_R1 = 11,
    ePadButton_R2 = 12,
    ePadButton_RStick = 13,
    ePadButton_Select = 14,
    ePadButton_Start = 15,
    ePadButton_None = 16,
    END_ePadButton_ENUM = 17,
};
enum ePadButtonType {
    ePadButtonType_Press = 0,
    ePadButtonType_Release = 1,
    ePadButtonType_On = 2,
    END_ePadButtonType_ENUM = 3,
};
// total size: 0xC
class @class {
    // Members
    enum ePad pad; // offset 0x0, size 0x4
    enum ePadTilt tilt; // offset 0x4, size 0x4
    float tiltAngle; // offset 0x8, size 0x4
};
// total size: 0xC
class @class {
    // Members
    enum ePad pad; // offset 0x0, size 0x4
    enum ePadSwing swing; // offset 0x4, size 0x4
    float swingMag; // offset 0x8, size 0x4
};
// total size: 0xC
class @class {
    // Members
    enum ePad pad; // offset 0x0, size 0x4
    enum ePadShake shake; // offset 0x4, size 0x4
    float shakeSpeed; // offset 0x8, size 0x4
};
// total size: 0x8
class @class {
    // Members
    enum ePad pad; // offset 0x0, size 0x4
    unsigned int shakeCount; // offset 0x4, size 0x4
};
// total size: 0x8
class InputMappingAsset {
    // Members
    class __ActionsArray__ ActionsArray; // offset 0x0, size 0x8
};
// total size: 0x8
class __ActionsArray__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x2
class Button {
    // Members
    unsigned char ButtonID; // offset 0x0, size 0x1
    unsigned char ButtonType; // offset 0x1, size 0x1
};
// total size: 0x8
class Tilt {
    // Members
    unsigned char TiltPad; // offset 0x0, size 0x1
    unsigned char TiltDir; // offset 0x1, size 0x1
    float TiltAngle; // offset 0x4, size 0x4
};
// total size: 0x8
class Swing {
    // Members
    unsigned char SwingPad; // offset 0x0, size 0x1
    unsigned char SwingDir; // offset 0x1, size 0x1
    float SwingMag; // offset 0x4, size 0x4
};
// total size: 0x8
class ShakeSpeed {
    // Members
    unsigned char ShakePad; // offset 0x0, size 0x1
    unsigned char ShakeDir; // offset 0x1, size 0x1
    float ShakeSpeedNum; // offset 0x4, size 0x4
};
// total size: 0x8
class ShakeCount {
    // Members
    unsigned char ShakePad; // offset 0x0, size 0x1
    int ShakeCountNum; // offset 0x4, size 0x4
};
// total size: 0x8
class EventActionHudContextAction : public EventActionNew {
    // Members
    enum ePlayerTypeUp player; // offset 0x0, size 0x4
    unsigned char action; // offset 0x4, size 0x1
};
// total size: 0x810
class zViewport {
    // Members
    class Viewport viewport3D; // offset 0x0, size 0x2DC
    class Viewport viewportUI; // offset 0x2DC, size 0x2DC
    class zCam zcam; // offset 0x5B8, size 0x254
    bool isActive; // offset 0x80C, size 0x1
    bool invertCameraControlVertical; // offset 0x80D, size 0x1
    bool invertCameraControlHorizontal; // offset 0x80E, size 0x1
};
enum eSplitScreenOrientation {
    HORIZONTAL = 0,
    VERTICAL = 1,
};
// total size: 0x4
class EventActionPointerControl : public EventActionNew {
    // Members
    unsigned int Pointers; // offset 0x0, size 0x4
};
// total size: 0x4
class EventActionOneString : public EventActionNew {
    // Members
    class Pointer32 param0; // offset 0x0, size 0x4
};
// total size: 0x14
class Step {
    // Members
    class xVec3 destination; // offset 0x0, size 0xC
    class zNavLink * navLink; // offset 0xC, size 0x4
    enum eNavLinkActionCode action; // offset 0x10, size 0x4
};
// total size: 0x58
class zNavMarker : public xOGEntity {
    // Members
    class NavMarker * asset; // offset 0x3C, size 0x4
    class xVec3 pos; // offset 0x40, size 0xC
    class zWallNet * wallNet; // offset 0x4C, size 0x4
    int triID; // offset 0x50, size 0x4
};
// total size: 0x28
class NavMarker : public xBaseScene {
    // Members
    class vec3 Pos; // offset 0x10, size 0xC
    float Radius; // offset 0x1C, size 0x4
    bool DrivenBy; // offset 0x20, size 0x1
};
// total size: 0x1
class zPathFinderNodeFinder {};
// total size: 0xC
class FindWallNetGroup {
    // Members
    class zWallNet * wn1; // offset 0x0, size 0x4
    class zWallNet * wn2; // offset 0x4, size 0x4
    class zWallNetGroup * g; // offset 0x8, size 0x4
};
// total size: 0xC
class ConstIterator {
    // Members
    class Entry * * pool; // offset 0x0, size 0x4
    unsigned int it; // offset 0x4, size 0x4
    unsigned int mask; // offset 0x8, size 0x4
};
// total size: 0xC
class Iterator : public ConstIterator {};
// total size: 0x8
class zSearchMapCreatorNavMesh : public zDepotItemCreator {};
// total size: 0x8
class zDepotItemCreator : public zDepotItemCreatorBase {
    // Members
    class zSearchMap * item; // offset 0x4, size 0x4
};
// total size: 0x10
class zSearchMapCreatorNavMesh_CreateMapCB {
    // Members
    class zWallNet * wn; // offset 0x0, size 0x4
    class LinkRecord * records; // offset 0x4, size 0x4
    int nodeID; // offset 0x8, size 0x4
    class zSearchMapNode * node; // offset 0xC, size 0x4
};
// total size: 0x8
class LinkRecord {
    // Members
    bool link; // offset 0x0, size 0x1
    class xBase * linkData; // offset 0x4, size 0x4
};
// total size: 0x8
class zSearchMapCreatorNavMeshGroup : public zDepotItemCreator {};
// total size: 0xC
class ConnectionFinder {
    // Members
    class zNavLink * * connections; // offset 0x0, size 0x4
    int count; // offset 0x4, size 0x4
    class zWallNetGroup * wng; // offset 0x8, size 0x4
};
// total size: 0x5C
class zSearchManager : public zModule {
    // Members
    class zSearchMapDepot mapDepot; // offset 0x18, size 0x10
    class zScheduler scheduler; // offset 0x28, size 0x34
};
// total size: 0x10
class zSearchMapDepot : public zDepot {};
// total size: 0x10
class zDepot {
    // Members
    class ItemEntry * items; // offset 0x0, size 0x4
    int itemCount; // offset 0x4, size 0x4
    class zDepotItemCreator * * creators; // offset 0x8, size 0x4
    int creatorCount; // offset 0xC, size 0x4
};
// total size: 0x10
class ItemEntry {
    // Members
    class zSearchMap * item; // offset 0x0, size 0x4
    unsigned long long sourceID; // offset 0x8, size 0x8
};
// total size: 0xC
class SearchTaskEntry {
    // Members
    class zSearchTask task; // offset 0x0, size 0x8
    class DelegateP0 * observer; // offset 0x8, size 0x4
};
// total size: 0x8
class zSearchTask : public zSchedulerTask {
    // Members
    class zSearchStrategy * strategy; // offset 0x4, size 0x4
};
// total size: 0x14
class zPlayerAISearchMapLinkCostCalculator : public zPathFinderSearchMapLinkCostCalculator {
    // Members
    class zCommonPlayer * thePlayer; // offset 0x10, size 0x4
};
// total size: 0x1
class zStoryMoment {
    // Members
    bool active; // offset 0x0, size 0x1
};
// total size: 0x1
class zXmonSupport {};
