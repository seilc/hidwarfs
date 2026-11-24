/*
    Compile unit: C:\RT\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801DEF30 -> 0x8022C698
*/
extern struct {} __vt__25hkpAllCdBodyPairCollector; // size: 0x10
// total size: 0x10
class SimpleFontCache {
    // Members
    unsigned long long fontUID; // offset 0x0, size 0x8
    class EntityHandle * fontHandle; // offset 0x8, size 0x4
};
// total size: 0x14
class EntityHandle : public EntityHandleBase {};
// total size: 0x10
class model_cache_entry {
    // Members
    unsigned long long id; // offset 0x0, size 0x8
    unsigned int order; // offset 0x8, size 0x4
    class xModelInstance * model; // offset 0xC, size 0x4
};
// total size: 0x24
class Font : public Entity {
    // Members
    class EntityHandle * assetHandle; // offset 0x10, size 0x4
    class EntityHandle * textureHandle; // offset 0x14, size 0x4
    float padTop; // offset 0x18, size 0x4
    float padBottom; // offset 0x1C, size 0x4
    float yAdvance; // offset 0x20, size 0x4
};
// total size: 0x64
class RenderTextArgs {
    // Members
    enum WrapMode wrap; // offset 0x0, size 0x4
    enum XJustifyMode xjustify; // offset 0x4, size 0x4
    enum YJustifyMode yjustify; // offset 0x8, size 0x4
    class Font * font; // offset 0xC, size 0x4
    class TextState * state; // offset 0x10, size 0x4
    class TextBackground * background; // offset 0x14, size 0x4
    class Rect boundRect; // offset 0x18, size 0x10
    class Rect clipRect; // offset 0x28, size 0x10
    float xScale; // offset 0x38, size 0x4
    float yScale; // offset 0x3C, size 0x4
    float xSpace; // offset 0x40, size 0x4
    float ySpace; // offset 0x44, size 0x4
    float slant; // offset 0x48, size 0x4
    class ColorF color; // offset 0x4C, size 0x10
    unsigned char brightness; // offset 0x5C, size 0x1
    unsigned char pad[3]; // offset 0x5D, size 0x3
    float z; // offset 0x60, size 0x4
};
enum WrapMode {
    WRAP_NONE = 0,
    WRAP_CHAR = 1,
    WRAP_WORD = 2,
    MAX_WRAP = 3,
};
enum XJustifyMode {
    XJUSTIFY_LEFT = 0,
    XJUSTIFY_CENTER = 1,
    XJUSTIFY_RIGHT = 2,
    MAX_XJUSTIFY = 3,
};
enum YJustifyMode {
    YJUSTIFY_TOP = 0,
    YJUSTIFY_CENTER = 1,
    YJUSTIFY_BOTTOM = 2,
    MAX_YJUSTIFY = 3,
};
// total size: 0x0
class TextState {};
// total size: 0x0
class TextBackground {};
// total size: 0x10
class Rect {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
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
// total size: 0x8
class tag_entry_list {
    // Members
    class tag_entry * entries; // offset 0x0, size 0x4
    unsigned long size; // offset 0x4, size 0x4
};
// total size: 0x14
class tag_entry {
    // Members
    class substr name; // offset 0x0, size 0x8
    char op; // offset 0x8, size 0x1
    class substr * args; // offset 0xC, size 0x4
    unsigned long args_size; // offset 0x10, size 0x4
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
// total size: 0x10
class _OGTriggerPhantomEntity : public xOGEntity {};
// total size: 0x18
class _OGTriggerPhantomSchema : public Schema {};
// total size: 0x590
class TriggerPhantom : public xBase {
    // Members
    class hkpShape * shape; // offset 0x20, size 0x4
    class hkpPhantom * collector; // offset 0x24, size 0x4
    class hkpRigidBody * rigidBody; // offset 0x28, size 0x4
    class TriggerPhantomAsset * Asset; // offset 0x2C, size 0x4
    class hkpCollidable * penetrationList[100]; // offset 0x30, size 0x190
    float weightList[100]; // offset 0x1C0, size 0x190
    unsigned int baseTypeList[100]; // offset 0x350, size 0x190
    int penetrationCount; // offset 0x4E0, size 0x4
    float penetrationWeight; // offset 0x4E4, size 0x4
    float prevPenetrationWeight; // offset 0x4E8, size 0x4
    unsigned long long * includedEnt; // offset 0x4EC, size 0x4
    unsigned long long * excludedEnt; // offset 0x4F0, size 0x4
    unsigned int includedEntCount; // offset 0x4F4, size 0x4
    unsigned int excludedEntCount; // offset 0x4F8, size 0x4
    class xEnt * driver; // offset 0x4FC, size 0x4
    class xMat4x3 driveInfoMat; // offset 0x500, size 0x40
    signed char driveMode; // offset 0x540, size 0x1
    bool enabled; // offset 0x541, size 0x1
    class xBase * dotTargetList[8]; // offset 0x544, size 0x20
    float dotTimerList[8]; // offset 0x564, size 0x20
    int dotTargetCount; // offset 0x584, size 0x4
    bool formSwitch; // offset 0x588, size 0x1
    unsigned int playersEnteredFlag; // offset 0x58C, size 0x4
};
// total size: 0xE0
class AabbPhantomCollector : public hkpAabbPhantom {
    // Members
    unsigned int overlapCount; // offset 0xCC, size 0x4
    class TriggerPhantom * owner; // offset 0xD0, size 0x4
};
// total size: 0x170
class SimpleShapePhantomCollector : public hkpSimpleShapePhantom {
    // Members
    unsigned int type; // offset 0x15C, size 0x4
    unsigned int overlapCount; // offset 0x160, size 0x4
    class TriggerPhantom * owner; // offset 0x164, size 0x4
};
// total size: 0x114
class hkpAllCdBodyPairCollector : public hkpCdBodyPairCollector {
    // Members
    class hkInplaceArray m_hits; // offset 0x8, size 0x10C
};
// total size: 0x10C
class hkInplaceArray : public hkArray {
    // Members
    class hkpRootCdBodyPair m_storage[16]; // offset 0xC, size 0x100
};
// total size: 0xC
class hkArray {
    // Members
    class hkpRootCdBodyPair * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x10
class hkpRootCdBodyPair {
    // Members
    class hkpCollidable * m_rootCollidableA; // offset 0x0, size 0x4
    unsigned int m_shapeKeyA; // offset 0x4, size 0x4
    class hkpCollidable * m_rootCollidableB; // offset 0x8, size 0x4
    unsigned int m_shapeKeyB; // offset 0xC, size 0x4
};
// total size: 0x10
class _OGAnimListEntity : public xOGEntity {};
// total size: 0x18
class _OGAnimListSchema : public Schema {};
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
// total size: 0x18
class xOGSchema : public Schema {};
// total size: 0x1A8
class zBombObject : public zCarryableObject {
    // Members
    class zFXScript * fxScript; // offset 0x184, size 0x4
    class zFXScriptSpawnPt * fxSpawn; // offset 0x188, size 0x4
    float time; // offset 0x18C, size 0x4
    float fuseTime; // offset 0x190, size 0x4
    float flashPeriod; // offset 0x194, size 0x4
    float flashWait; // offset 0x198, size 0x4
    bool glowOn; // offset 0x19C, size 0x1
    bool ignited; // offset 0x19D, size 0x1
    bool doDamage; // offset 0x19E, size 0x1
    unsigned short pulseScaleHandle; // offset 0x1A0, size 0x2
};
// total size: 0x48
class zCarryableBombUseProperty : public zCarryableProperty {
    // Members
    float time; // offset 0x30, size 0x4
    unsigned int RadiusType; // offset 0x34, size 0x4
    unsigned long long BombFXID; // offset 0x38, size 0x8
    unsigned long long bombEffect; // offset 0x40, size 0x8
};
// total size: 0x8
class _Timing {
    // Members
    float on; // offset 0x0, size 0x4
    float off; // offset 0x4, size 0x4
};
// total size: 0x1A0
class zGlideObject : public zCarryableObject {
    // Members
    float time; // offset 0x184, size 0x4
    float fuelTank; // offset 0x188, size 0x4
    float leanAngle; // offset 0x18C, size 0x4
    class xVec3 pivot; // offset 0x190, size 0xC
};
// total size: 0x38
class zCarryableGlideUseProperty : public zCarryableProperty {
    // Members
    unsigned int DirectionOfFlight; // offset 0x30, size 0x4
    float timer; // offset 0x34, size 0x4
};
// total size: 0x4
class PipeContext : public xOGEntityContext {
    // Members
    class zContextObjectPipe * widget; // offset 0x0, size 0x4
};
// total size: 0x10
class _OGPointJumpEntity : public xOGEntity {};
// total size: 0x18
class _OGPointJumpSchema : public Schema {};
// total size: 0x48
class zContextObjectPointJump : public zContextObject {
    // Members
    class zContextObjectPointJumpAsset * asset; // offset 0x24, size 0x4
    class xVec3 position; // offset 0x28, size 0xC
    class xEnt * driver; // offset 0x34, size 0x4
    class xEntDriveInfo * driveInfo; // offset 0x38, size 0x4
    class xVec3 driveOffset; // offset 0x3C, size 0xC
};
// total size: 0x28
class zContextObjectPointJumpAsset : public xBaseAsset {
    // Members
    class vec3 location; // offset 0x10, size 0xC
    class LinkAsset EventLinksNew; // offset 0x1C, size 0x8
};
// total size: 0x10
class _OGDynaLightSpawnPtAssetEntity : public xOGEntity {};
// total size: 0x18
class _OGDynaLightSpawnPtAssetSchema : public Schema {};
// total size: 0xC4
class SimpleObjectEntity : public xOGEntityWithModel {
    // Members
    int textureNum; // offset 0xBC, size 0x4
    float time; // offset 0xC0, size 0x4
};
// total size: 0x8
class EventActionLightKit : public EventActionNew {
    // Members
    class uid paramWidgetAssetID; // offset 0x0, size 0x8
};
// total size: 0x10
class _OGDispatcherEntity : public xOGEntity {};
// total size: 0x18
class _OGDispatcherSchema : public Schema {};
// total size: 0x8
class st_ZDISPATCH_DEPOT {
    // Members
    class st_ZDISPATCH_DATA * raw_pool; // offset 0x0, size 0x4
    int raw_cnt; // offset 0x4, size 0x4
};
// total size: 0x30
class st_ZDISPATCH_DATA : public xBase {
    // Members
    class zDispatcherAsset * rawass; // offset 0x20, size 0x4
    int placeholder; // offset 0x24, size 0x4
    void * last_checkpoint_hit; // offset 0x28, size 0x4
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
// total size: 0x4
class LevelType {
    // Members
    char levelName[4]; // offset 0x0, size 0x4
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
// total size: 0x4
class EventActionDispatcher_PadCfg_Preset : public EventActionNew {
    // Members
    enum ePadCfg_Preset param0; // offset 0x0, size 0x4
};
enum ePadCfg_Preset {
    PAD_CFG_PRESET_A = 0,
    PAD_CFG_PRESET_B = 1,
    PAD_CFG_PRESET_C = 2,
    PAD_CFG_PRESET_D = 3,
    END_PAD_CFG_PRESET_ENUM = 4,
};
// total size: 0x4
class EventActionDispatcher_SetGameState : public EventActionNew {
    // Members
    enum eGameState param0; // offset 0x0, size 0x4
};
// total size: 0x4
class EventActionDispatcher_SetPauseType : public EventActionNew {
    // Members
    enum ePauseType param0; // offset 0x0, size 0x4
};
// total size: 0x8
class EventActionStoreCheckPoint : public EventActionNew {
    // Members
    class uid paramWidgetAssetID; // offset 0x0, size 0x8
};
// total size: 0x8
class EventActionDirection : public EventActionNew {
    // Members
    class uid paramWidgetAssetID; // offset 0x0, size 0x8
};
// total size: 0x4
class EventActionAwardAchievement : public EventActionNew {
    // Members
    unsigned int param0; // offset 0x0, size 0x4
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
// total size: 0x8
class EventActionDisableSpecialCamera : public EventActionNew {
    // Members
    unsigned int viewport; // offset 0x0, size 0x4
    unsigned int camtype; // offset 0x4, size 0x4
};
// total size: 0x8
class EventActionEnableSpecialCamera : public EventActionNew {
    // Members
    unsigned int viewport; // offset 0x0, size 0x4
    unsigned int camtype; // offset 0x4, size 0x4
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
    class LightKitEntity * lightKits[5]; // offset 0x10, size 0x14
    class LightKitSceneAsset asset; // offset 0x28, size 0x20
    class Goodie * goodie; // offset 0x48, size 0x4
};
// total size: 0x20
class LightKitSceneAsset {
    // Members
    class uid NPC; // offset 0x0, size 0x8
    class uid Player; // offset 0x8, size 0x8
    class uid Object; // offset 0x10, size 0x8
    class uid Environment; // offset 0x18, size 0x8
};
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
// total size: 0x430
class zNPCSteeringFlockingBroadPhaseCollisionCache {
    // Members
    class xBound cacheBound; // offset 0x0, size 0x2C
    class xEnt * entCache[256]; // offset 0x2C, size 0x400
    int curEntCacheSize; // offset 0x42C, size 0x4
};
// total size: 0x2C
class zSteeringFlockingDynamics {
    // Members
    class zNPCEntity * * allEnts; // offset 0x0, size 0x4
    int * needsProcess; // offset 0x4, size 0x4
    unsigned int curFlockerNum; // offset 0x8, size 0x4
    unsigned int numberOfFlockers; // offset 0xC, size 0x4
    unsigned int numberOfFlockersNeedsProcess; // offset 0x10, size 0x4
    class xVec3 * oldPos; // offset 0x14, size 0x4
    class xVec3 * pos; // offset 0x18, size 0x4
    class xVec3 * oldVel; // offset 0x1C, size 0x4
    class xVec3 * vel; // offset 0x20, size 0x4
    class xVec3 * heading; // offset 0x24, size 0x4
    float boundRadiusXZ; // offset 0x28, size 0x4
};
enum eInitGuts_Stage {
    eInitGuts_First = 0,
    eInitGuts_Init = 1,
    eInitGuts_LoadData = 2,
};
enum sSaveDataRequest {
    eSDR_NONE = 0,
    eSDR_ENUMERATION = 1,
    eSDR_ENUMERATION_PEEK_ACQUIRE = 2,
    eSDR_ENUMERATION_PEEK_READ = 3,
    eSDR_WRITE_SELECT_DEVICE = 4,
    eSDR_WRITE_ACQUIRE_DEVICE = 5,
    eSDR_WRITE = 6,
    eSDR_READ_ACQUIRE_DEVICE = 7,
    eSDR_READ = 8,
    eSDR_READ_SELECT_DEVICE = 9,
    eSDR_RUNNING = 10,
    eSDR_FREE_RESOURCES = 11,
    eSDR_SAVE_CHECK_EXISTS = 12,
    eSDR_SAVE_CHECK_SPACE = 13,
    eSDR_SAVE_DELETE = 14,
    eSDR_SAVE_CREATE = 15,
    eSDR_SAVE_OPEN = 16,
    eSDR_SAVE_WRITE = 17,
    eSDR_SAVE_CLOSE = 18,
    eSDR_SAVE_DONE = 19,
    eSDR_LOAD_CHECK_EXISTS = 20,
    eSDR_LOAD_OPEN = 21,
    eSDR_LOAD_READ = 22,
    eSDR_LOAD_CLOSE = 23,
    eSDR_LOAD_DONE = 24,
    eSDR_DELETE_DONE = 25,
    eSDR_CHKFREE_CHECK_EXISTS = 26,
    eSDR_CHKFREE_CHECK_SPACE = 27,
    eSDR_CHKFREE_DONE = 28,
    eSDR_ERR_CLEANUP = 29,
    eSDR_ERR_FAIL = 30,
};
enum eGameSetupState {
    eGameSetupInit = 0,
    ePreloadingSound = 1,
};
enum ePauseState {
    ePauseState_Pause = 0,
    ePauseState_Options = 1,
    ePauseState_DialogBox = 2,
    ePauseState_TechnicalDifficulties = 3,
    ePauseState_Count = 4,
};
// total size: 0x10
class MissionCompleteInfo {
    // Members
    unsigned int completeStoryMissions; // offset 0x0, size 0x4
    unsigned int totalStoryMissions; // offset 0x4, size 0x4
    unsigned int completeColonyMissions; // offset 0x8, size 0x4
    unsigned int totalColonyMissions; // offset 0xC, size 0x4
};
// total size: 0x10
class _OGLoadingScreenEntity : public xOGEntity {};
// total size: 0x18
class _OGLoadingScreenSchema : public Schema {};
// total size: 0x20
class LoadingScreenElement {
    // Members
    class ImmediateInstanceAsset image; // offset 0x0, size 0x10
    enum FMVIdentifier fmv; // offset 0x10, size 0x4
};
enum FMVIdentifier {
    FMV_None = 0,
    FMV_alphatst = 1,
    FMV_TEST0900 = 2,
    FMV_A = 3,
    FMV_B = 4,
    FMV_C = 5,
    FMV_Pixar = 6,
    FMV_BVG = 7,
    FMV_THQ = 8,
    FMV_HI = 9,
    FMV_Legal = 10,
    FMV_Attract = 11,
    END_FMV_ENUM = 12,
};
// total size: 0x18
class zPlayerActionWallRun : public zCommonPlayerAction {
    // Members
    float targetAngle; // offset 0xC, size 0x4
    unsigned char mountState; // offset 0x10, size 0x1
    bool fall; // offset 0x11, size 0x1
    bool facingCorrectDir; // offset 0x12, size 0x1
    unsigned int transitionFromID; // offset 0x14, size 0x4
};
// total size: 0xC
class zPlayerActionWallRunJump : public zPlayerAction {};
// total size: 0xD0
class hkpWorldCinfo : public hkReferencedObject {
    // Members
    class hkVector4 m_gravity; // offset 0x10, size 0x10
    int m_broadPhaseQuerySize; // offset 0x20, size 0x4
    float m_contactRestingVelocity; // offset 0x24, size 0x4
    class hkEnum m_broadPhaseBorderBehaviour; // offset 0x28, size 0x1
    class hkAabb m_broadPhaseWorldAabb; // offset 0x30, size 0x20
    float m_collisionTolerance; // offset 0x50, size 0x4
    class hkpCollisionFilter * m_collisionFilter; // offset 0x54, size 0x4
    class hkpConvexListFilter * m_convexListFilter; // offset 0x58, size 0x4
    float m_expectedMaxLinearVelocity; // offset 0x5C, size 0x4
    int m_sizeOfToiEventQueue; // offset 0x60, size 0x4
    float m_expectedMinPsiDeltaTime; // offset 0x64, size 0x4
    class hkWorldMemoryAvailableWatchDog * m_memoryWatchDog; // offset 0x68, size 0x4
    int m_broadPhaseNumMarkers; // offset 0x6C, size 0x4
    class hkEnum m_contactPointGeneration; // offset 0x70, size 0x1
    float m_solverTau; // offset 0x74, size 0x4
    float m_solverDamp; // offset 0x78, size 0x4
    int m_solverIterations; // offset 0x7C, size 0x4
    int m_solverMicrosteps; // offset 0x80, size 0x4
    class hkBool m_forceCoherentConstraintOrderingInSolver; // offset 0x84, size 0x1
    float m_snapCollisionToConvexEdgeThreshold; // offset 0x88, size 0x4
    float m_snapCollisionToConcaveEdgeThreshold; // offset 0x8C, size 0x4
    class hkBool m_enableToiWeldRejection; // offset 0x90, size 0x1
    class hkBool m_enableDeprecatedWelding; // offset 0x91, size 0x1
    float m_iterativeLinearCastEarlyOutDistance; // offset 0x94, size 0x4
    int m_iterativeLinearCastMaxIterations; // offset 0x98, size 0x4
    float m_highFrequencyDeactivationPeriod; // offset 0x9C, size 0x4
    float m_lowFrequencyDeactivationPeriod; // offset 0xA0, size 0x4
    unsigned char m_deactivationNumInactiveFramesSelectFlag0; // offset 0xA4, size 0x1
    unsigned char m_deactivationNumInactiveFramesSelectFlag1; // offset 0xA5, size 0x1
    unsigned char m_deactivationIntegrateCounter; // offset 0xA6, size 0x1
    class hkBool m_shouldActivateOnRigidBodyTransformChange; // offset 0xA7, size 0x1
    float m_deactivationReferenceDistance; // offset 0xA8, size 0x4
    float m_toiCollisionResponseRotateNormal; // offset 0xAC, size 0x4
    int m_maxSectorsPerCollideTask; // offset 0xB0, size 0x4
    class hkBool m_processToisMultithreaded; // offset 0xB4, size 0x1
    int m_maxEntriesPerToiCollideTask; // offset 0xB8, size 0x4
    class hkBool m_enableDeactivation; // offset 0xBC, size 0x1
    class hkEnum m_simulationType; // offset 0xBD, size 0x1
    class hkBool m_enableSimulationIslands; // offset 0xBE, size 0x1
    unsigned int m_minDesiredIslandSize; // offset 0xC0, size 0x4
    class hkBool m_processActionsInSingleThread; // offset 0xC4, size 0x1
    float m_frameMarkerPsiSnap; // offset 0xC8, size 0x4
};
// total size: 0x1
class hkEnum {
    // Members
    signed char m_storage; // offset 0x0, size 0x1
};
// total size: 0x10
class _OGUI_BoxEntity : public xOGEntity {};
// total size: 0x18
class _OGUI_BoxSchema : public Schema {};
// total size: 0x10
class _OGUI_TextEntity : public xOGEntity {};
// total size: 0x18
class _OGUI_TextSchema : public Schema {};
// total size: 0x10
class _OGStringReferenceEntity : public xOGEntity {};
// total size: 0x18
class _OGStringReferenceSchema : public Schema {};
// total size: 0x10
class _OGUI_Flash_On_Screen_TextEntity : public xOGEntity {};
// total size: 0x18
class _OGUI_Flash_On_Screen_TextSchema : public Schema {};
// total size: 0x58
class zUIFlashOnScreenText : public xBase {
    // Members
    char * text; // offset 0x20, size 0x4
    float curTimerValue; // offset 0x24, size 0x4
    short curCounterValue; // offset 0x28, size 0x2
    char minutesStr[3]; // offset 0x2A, size 0x3
    char secondsStr[3]; // offset 0x2D, size 0x3
    unsigned int totalCounterNum; // offset 0x30, size 0x4
    unsigned long long counterUID; // offset 0x38, size 0x8
    unsigned long long timerUID; // offset 0x40, size 0x8
    enum OSTType type; // offset 0x48, size 0x4
    enum TutorialAnimationType animationType; // offset 0x4C, size 0x4
    class zUIFlashOnScreenTextAsset * asset; // offset 0x50, size 0x4
};
enum OSTType {
    Tutorial = 0,
    Generic = 1,
    Objective = 2,
    Timer = 3,
    Counter = 4,
    TimerCounter = 5,
    GenericSmall = 6,
    END_OSTTypeENUM = 7,
};
enum TutorialAnimationType {
    BoxJumpTutorial = 1,
    MakeCubeTutorial = 2,
    PickupCubeTutorial = 3,
    BasicCubeTutorial = 4,
    HeavyCubeTutorial = 5,
    BoxformHitTutorial = 6,
    EveFireLaserTutorial = 7,
    LaserScanTutorial = 8,
    PowerSurgeTutorial = 9,
    StorkJumpTutorial = 10,
    WalleFireLaserTutorial = 11,
    BatteryCubeThrowTutorial = 12,
    BatteryCubeAoETutorial = 13,
    BatteryCubeThrowProximity = 14,
    MagnetCubeTutorial = 15,
    FireLaserArmTutorial = 16,
    ForcedBoxformTutorial = 17,
    WallEveFireLaserTutorial = 18,
    HealthCollectibleTutorial = 19,
    END_TutorialAnimationTypeENUM = 20,
};
// total size: 0xF0
class zUIFlashOnScreenTextAsset : public zUI {
    // Members
    enum OSTType Type; // offset 0xB8, size 0x4
    class Pointer32 Text; // offset 0xBC, size 0x4
    enum TutorialAnimationType AnimationType; // offset 0xC0, size 0x4
    class @class __anon; // offset 0xC8, size 0x18
    class OSTNone none; // offset 0xC8, size 0x1
    class OSTCounter counter; // offset 0xC8, size 0x10
    class OSTTimer timer; // offset 0xC8, size 0x8
    class OSTTimerCounter timerCounter; // offset 0xC8, size 0x18
    class LinkAsset EventLinksNew; // offset 0xE0, size 0x8
};
// total size: 0x18
class @class {
    // Members
    class OSTNone none; // offset 0x0, size 0x1
    class OSTCounter counter; // offset 0x0, size 0x10
    class OSTTimer timer; // offset 0x0, size 0x8
    class OSTTimerCounter timerCounter; // offset 0x0, size 0x18
};
// total size: 0x1
class OSTNone {};
// total size: 0x10
class OSTCounter {
    // Members
    class uid TextboxCounter; // offset 0x0, size 0x8
    unsigned int TotalCounterNum; // offset 0x8, size 0x4
};
// total size: 0x8
class OSTTimer {
    // Members
    class uid TextboxTimer; // offset 0x0, size 0x8
};
// total size: 0x18
class OSTTimerCounter {
    // Members
    class uid TextboxCounter; // offset 0x0, size 0x8
    unsigned int TotalCounterNum; // offset 0x8, size 0x4
    class uid TextboxTimer; // offset 0x10, size 0x8
};
// total size: 0x6A0
class zViewport {
    // Members
    class Viewport viewport3D; // offset 0x0, size 0x224
    class Viewport viewportUI; // offset 0x224, size 0x224
    class zCam zcam; // offset 0x448, size 0x254
    bool isActive; // offset 0x69C, size 0x1
    bool invertCameraControlVertical; // offset 0x69D, size 0x1
    bool invertCameraControlHorizontal; // offset 0x69E, size 0x1
};
enum eSplitScreenOrientation {
    HORIZONTAL = 0,
    VERTICAL = 1,
};
// total size: 0x6E0
class zWallePlayerIdle : public zPlayerIdle {
    // Members
    class ExtraIdleTableEntry extraIdleTable[24]; // offset 0x18, size 0x6C0
    int idleCount; // offset 0x6D8, size 0x4
    bool idleHeadTrack; // offset 0x6DC, size 0x1
};
// total size: 0x48
class ExtraIdleTableEntry {
    // Members
    class xAnimState * variants[15]; // offset 0x0, size 0x3C
    int numVariants; // offset 0x3C, size 0x4
    int numValid; // offset 0x40, size 0x4
    bool noRepeats; // offset 0x44, size 0x1
};
// total size: 0xC
class zWallePlayerSkidStop : public zPlayerSkidStop {};
// total size: 0x10
class zWallePlayerSlip : public zPlayerSlip {};
// total size: 0xC
class zWallePlayerWalk : public zPlayerWalk {};
// total size: 0x10
class zWallePlayerRun : public zPlayerRun {};
// total size: 0x1C
class zWallePlayerJump : public zPlayerJump {};
// total size: 0x14
class zWallePlayerFall : public zPlayerFall {};
// total size: 0x10
class zWallePlayerLand : public zPlayerLand {};
// total size: 0xC
class zWallePlayerWalkStart : public zPlayerWalkStart {};
// total size: 0x10
class zWallePlayerDash : public zCommonPlayerDash {};
// total size: 0xC
class zWallePlayerHitLaunch : public zPlayerHitLaunch {};
// total size: 0xC
class zWallePlayerShootGun : public zCommonPlayerAction {};
// total size: 0x10
class zWallePlayerThrowCube : public zCommonPlayerAction {
    // Members
    bool thrown; // offset 0xC, size 0x1
};
// total size: 0x10
class zWallePlayerSwitchCube : public zCommonPlayerAction {
    // Members
    bool thrown; // offset 0xC, size 0x1
};
// total size: 0xC
class zWallePlayerZeroPointHit : public zCommonPlayerAction {};
// total size: 0xC
class zWallePlayerZeroPointLaunch : public zCommonPlayerAction {};
// total size: 0xC
class zWallePlayerZeroPointLand : public zCommonPlayerAction {};
// total size: 0x2C
class zWallePlayerIntoCube : public zCommonPlayerAction {
    // Members
    float time; // offset 0xC, size 0x4
    float releaseVelocityModifier; // offset 0x10, size 0x4
    bool dropped; // offset 0x14, size 0x1
    float extraIdleTimer; // offset 0x18, size 0x4
    enum ezWallePlayerIntoCube_IdleType extraIdleType; // offset 0x1C, size 0x4
    int extraIdlePlayIndex; // offset 0x20, size 0x4
    int buttonReleased; // offset 0x24, size 0x4
    bool carrying; // offset 0x28, size 0x1
};
enum ezWallePlayerIntoCube_IdleType {
    eCUBEIDLETYPE_NONE = 0,
    eCUBEIDLETYPE_GROUNDED = 1,
    eCUBEIDLETYPE_AIR = 2,
    eCUBEIDLETYPE_COUNT = 3,
};
// total size: 0x10
class zWallePlayerCompactTrash : public zCommonPlayerAction {
    // Members
    class zFXScriptSpawnPt * spawnPt; // offset 0xC, size 0x4
};
// total size: 0xC
class zWallePlayerReverse : public zCommonPlayerAction {};
// total size: 0x30
class zWallePlayerStorkJump : public zCommonPlayerAction {
    // Members
    class xVec3 initialPos; // offset 0xC, size 0xC
    float yVel; // offset 0x18, size 0x4
    bool shutOffThrust; // offset 0x1C, size 0x1
    bool hopped; // offset 0x1D, size 0x1
    bool hoppedAgain; // offset 0x1E, size 0x1
    bool hopOnly; // offset 0x1F, size 0x1
    bool readyToStart; // offset 0x20, size 0x1
    float currentMaxHeight; // offset 0x24, size 0x4
    float timer; // offset 0x28, size 0x4
    float stuckTimer; // offset 0x2C, size 0x4
};
// total size: 0x10
class zWallePlayerDefeated : public zPlayerDefeated {
    // Members
    float defeatedTimer; // offset 0xC, size 0x4
};
// total size: 0xC
class zWallePlayerContextSwitchLever : public zCommonPlayerAction {};
// total size: 0xC
class zWallePlayerContextFixVendingMachine : public zCommonPlayerAction {};
// total size: 0xC
class zWallePlayerContextOverHeadGrab : public zCommonPlayerAction {};
// total size: 0xC
class zWallePlayerContextPickUpCube : public zCommonPlayerAction {};
// total size: 0xC
class zWallePlayerRegenerate : public zCommonPlayerAction {};
// total size: 0x10
class zWallePlayerMGLose : public zPlayerMGLose {
    // Members
    unsigned int randomizer; // offset 0xC, size 0x4
};
// total size: 0x10
class zWallePlayerCheat : public zPlayerCheat {};
// total size: 0x10
class _OGScaleformPlayerEntity : public xOGEntity {};
// total size: 0x18
class _OGScaleformPlayerSchema : public Schema {};
enum stickPressDir {
    stickPress_Up = 0,
    stickPress_Down = 1,
    stickPress_Left = 2,
    stickPress_Right = 3,
    stickPress_Neutral = 4,
};
enum eSFEventType {
    eSFEvent_PadPressX = 0,
    eSFEvent_PadReleaseX = 1,
    eSFEvent_PadPressSquare = 2,
    eSFEvent_PadReleaseSquare = 3,
    eSFEvent_PadPressRight = 4,
    eSFEvent_PadReleaseRight = 5,
    eSFEvent_PadPressLeft = 6,
    eSFEvent_PadReleaseLeft = 7,
    eSFEvent_PadPressUp = 8,
    eSFEvent_PadReleaseUp = 9,
    eSFEvent_PadPressDown = 10,
    eSFEvent_PadReleaseDown = 11,
    eSFEvent_PadPressO = 12,
    eSFEvent_PadReleaseO = 13,
    eSFEvent_PadPressTriangle = 14,
    eSFEvent_PadReleaseTriangle = 15,
    eSFEvent_PadPressStart = 16,
    eSFEvent_SetHealth = 17,
    eSFEvent_SetStick = 18,
    eSFEvent_SetTargetLoc = 19,
    eSFEvent_CheckStick = 20,
    eSFEvent_SetViewportNum = 21,
    eSFEvent_SetUserLoggedIn = 22,
    eSFEvent_SetStorageDeviceSelected = 23,
    eSFEvent_SetSaveFileExists = 24,
    eSFEvent_SetPlayerInControl = 25,
    eSFEvent_SetInitialValues = 26,
    eSFEvent_ToggleFPView = 27,
    eSFEvent_ToggleAimingCam = 28,
    eSFEvent_SendSavedValues = 29,
    eSFEvent_SavingStarted = 30,
    eSFEvent_SavingFinished = 31,
    eSFEvent_TextboxOn = 32,
    eSFEvent_TextboxOff = 33,
    eSFEvent_TextboxRetract = 34,
    eSFEvent_TextboxExpand = 35,
    eSFEvent_TextboxSetString = 36,
    eSFEvent_TextboxSetType = 37,
    eSFEvent_TextboxSetCounter = 38,
    eSFEvent_TextboxSetTotalCounter = 39,
    eSFEvent_TextboxSetMinutes = 40,
    eSFEvent_TextboxSetSeconds = 41,
    eSFEvent_TextboxSetAnimationType = 42,
    eSFEvent_StorkJumpSetGas = 43,
    eSFEvent_StorkJumpResetGas = 44,
    eSFEvent_StorkJumpMeterOn = 45,
    eSFEvent_StorkJumpMeterOff = 46,
    eSFEvent_StorkJumpShow = 47,
    eSFEvent_ForcedBoxformOn = 48,
    eSFEvent_ForcedBoxformOff = 49,
    eSFEvent_BoxformOn = 50,
    eSFEvent_BoxformOff = 51,
    eSFEvent_InvokeASFunc = 52,
    eSFEvent_SetASVar = 53,
    eSFEvent_SetASArray = 54,
    eSFEvent_SetMultiplayerIRMouse = 55,
    eSFEvent_Initialize = 56,
    eSFEvent_SaveLoad_Wii_NAND02 = 57,
    eSFEvent_SaveLoad_Wii_NAND03 = 58,
    eSFEvent_SaveLoad_Wii_NAND05 = 59,
    eSFEvent_SaveLoad_Wii_NAND06 = 60,
    eSFEvent_SaveLoad_Wii_NAND07 = 61,
    eSFEvent_SaveLoad_Wii_NAND08 = 62,
    eSFEvent_SaveLoad_Wii_NAND11 = 63,
    eSFEvent_Nunchuk_Disconnected = 64,
    eSFEvent_Nunchuk_Connected = 65,
    eSFEvent_MovieFinished = 66,
    eSFEvent_MovieCancelled = 67,
};
// total size: 0x10
class EventActionInvokeMultiplayerASFunc : public EventActionNew {
    // Members
    class Pointer32 param0; // offset 0x0, size 0x4
    unsigned int param1; // offset 0x4, size 0x4
    class uid param2; // offset 0x8, size 0x8
};
// total size: 0x10
class EventActionSetMultiplayerHoldTimer : public EventActionNew {
    // Members
    unsigned int param0; // offset 0x0, size 0x4
    class uid param1; // offset 0x8, size 0x8
};
// total size: 0x10
class EventActionShowMPCollectible : public EventActionNew {
    // Members
    unsigned int param0; // offset 0x0, size 0x4
    class uid param1; // offset 0x8, size 0x8
};
// total size: 0x10
class EventActionShowCACollectible : public EventActionNew {
    // Members
    unsigned int param0; // offset 0x0, size 0x4
    class uid param1; // offset 0x8, size 0x8
};
// total size: 0x4
class EventActionOneString : public EventActionNew {
    // Members
    class Pointer32 param0; // offset 0x0, size 0x4
};
// total size: 0x4
class EventActionViewport : public EventActionNew {
    // Members
    unsigned int viewport; // offset 0x0, size 0x4
};
// total size: 0x10
class _OGLeverEntity : public xOGEntity {};
// total size: 0x18
class _OGLeverSchema : public Schema {};
// total size: 0x198
class zLever : public xEnt {
    // Members
    class zLeverAsset * asset; // offset 0xB8, size 0x4
    class ModelHelperInfo * barModel; // offset 0xBC, size 0x4
    class ModelHelperInfo * fulcrumModel; // offset 0xC0, size 0x4
    class hkpRigidBody * barRigidBody; // offset 0xC4, size 0x4
    class hkpRigidBody * fulcrumRigidBody; // offset 0xC8, size 0x4
    class HavokConstraint hingeConstraint; // offset 0xCC, size 0x10
    class xEntDrive drv; // offset 0xDC, size 0xB8
};
// total size: 0x1E0
class zLeverAsset : public xBaseAsset {
    // Members
    unsigned char flags; // offset 0x10, size 0x1
    unsigned char subtype; // offset 0x11, size 0x1
    unsigned char pad; // offset 0x12, size 0x1
    unsigned char moreFlags; // offset 0x13, size 0x1
    class uid Surface; // offset 0x18, size 0x8
    class Rotation3 Orientation; // offset 0x20, size 0xC
    class vec3 Pos; // offset 0x2C, size 0xC
    class vec3 Scale; // offset 0x38, size 0xC
    class vec3 colorMult; // offset 0x44, size 0xC
    class ClearToOpaque ClearToOpaque; // offset 0x50, size 0x8
    class ModelInstanceAsset ModelInstance; // offset 0x60, size 0x40
    class uid AnimList; // offset 0xA0, size 0x8
    class PhysicsDataStruct PhysicsData; // offset 0xA8, size 0x48
    unsigned int Pad1; // offset 0xF0, size 0x4
    unsigned int Pad2; // offset 0xF4, size 0x4
    unsigned int Pad3; // offset 0xF8, size 0x4
    class vec3 barPosition; // offset 0xFC, size 0xC
    class Rotation3 barOrientation; // offset 0x108, size 0xC
    class ModelInstanceAsset barModel; // offset 0x120, size 0x40
    class vec3 pivotPosition; // offset 0x160, size 0xC
    class Rotation3 pivotOrientation; // offset 0x16C, size 0xC
    class vec3 fulcrumPosition; // offset 0x178, size 0xC
    class Rotation3 fulcrumOrientation; // offset 0x184, size 0xC
    class ModelInstanceAsset fulcrumModel; // offset 0x190, size 0x40
    class __launches__ launches; // offset 0x1D0, size 0x8
    class LinkAsset EventLinksNew; // offset 0x1D8, size 0x8
};
// total size: 0x8
class ClearToOpaque {
    // Members
    float Value; // offset 0x0, size 0x4
    float Speed; // offset 0x4, size 0x4
};
// total size: 0x8
class __launches__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x10
class HavokConstraint {
    // Members
    class hkpRigidBody * rigidBodyA; // offset 0x0, size 0x4
    class hkpRigidBody * rigidBodyB; // offset 0x4, size 0x4
    class hkpConstraintData * constraintData; // offset 0x8, size 0x4
    class hkpConstraintInstance * constraintInstance; // offset 0xC, size 0x4
};
// total size: 0x10
class _OGSurfaceGamePlayEntity : public xOGEntity {};
// total size: 0x18
class _OGSurfaceGamePlaySchema : public Schema {};
// total size: 0x8C
class zPlayerActionWallClimb : public zCommonPlayerAction {
    // Members
    class zFXScript * wallclimbFXScript; // offset 0xC, size 0x4
    float effectTimer; // offset 0x10, size 0x4
    class xQuat targetOrientation; // offset 0x14, size 0x10
    class xQuat orientation; // offset 0x24, size 0x10
    float orientationVel; // offset 0x34, size 0x4
    bool mount; // offset 0x38, size 0x1
    bool isObject; // offset 0x39, size 0x1
    bool climbUp; // offset 0x3A, size 0x1
    bool setDrive; // offset 0x3B, size 0x1
    class xVec3 refObjectLocal; // offset 0x3C, size 0xC
    class xVec3 prevRefWorld; // offset 0x48, size 0xC
    float originalAnimSpeed; // offset 0x54, size 0x4
    class xSpringyF32 xLerp; // offset 0x58, size 0x18
    class xSpringyF32 yLerp; // offset 0x70, size 0x18
    class @class __anon; // offset 0x88, size 0x4
    class xEnt * object; // offset 0x88, size 0x4
    class xJSPHeader * jsp; // offset 0x88, size 0x4
};
// total size: 0x4
class @class {
    // Members
    class xEnt * object; // offset 0x0, size 0x4
    class xJSPHeader * jsp; // offset 0x0, size 0x4
};
// total size: 0xC
class zPlayerActionWallClimbJump : public zPlayerAction {};
