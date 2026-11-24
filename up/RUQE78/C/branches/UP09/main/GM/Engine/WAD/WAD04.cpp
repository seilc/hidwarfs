/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802920B0 -> 0x802CCAF8
*/
// total size: 0x20
class PlayerAICommandGroup : public xBaseScene {
    // Members
    class uid Trigger; // offset 0x10, size 0x8
    class __Commands__ Commands; // offset 0x18, size 0x8
};
// total size: 0x8
class __Commands__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x20
class StringReference : public xBaseScene {
    // Members
    unsigned int text; // offset 0x10, size 0x4
    class LinkAsset EventLinksNew; // offset 0x14, size 0x8
};
// total size: 0x320
class UI_Box : public zUI {
    // Members
    class BoxPart cornerUL; // offset 0xB0, size 0x40
    class BoxPart cornerUR; // offset 0xF0, size 0x40
    class BoxPart cornerLL; // offset 0x130, size 0x40
    class BoxPart cornerLR; // offset 0x170, size 0x40
    class BoxPart sideL; // offset 0x1B0, size 0x40
    class BoxPart sideR; // offset 0x1F0, size 0x40
    class BoxPart sideT; // offset 0x230, size 0x40
    class BoxPart sideB; // offset 0x270, size 0x40
    class BoxPart center; // offset 0x2B0, size 0x40
    float borderWidth; // offset 0x2F0, size 0x4
    float borderHeight; // offset 0x2F4, size 0x4
    float widthPerUV; // offset 0x2F8, size 0x4
    float heightPerUV; // offset 0x2FC, size 0x4
    float centerWidthPerUV; // offset 0x300, size 0x4
    float centerHeightPerUV; // offset 0x304, size 0x4
    bool scaleHSideUV; // offset 0x308, size 0x1
    bool scaleVSideUV; // offset 0x309, size 0x1
    bool scaleCenterUV; // offset 0x30A, size 0x1
    bool stretchUVsOnMotionScale; // offset 0x30B, size 0x1
    bool forceAlphaWrite; // offset 0x30C, size 0x1
    class LinkAsset EventLinksNew; // offset 0x310, size 0x8
};
// total size: 0x40
class BoxPart {
    // Members
    class ImmediateInstanceAsset ImmediateData; // offset 0x0, size 0x10
    unsigned int color; // offset 0x10, size 0x4
    float u1; // offset 0x14, size 0x4
    float v1; // offset 0x18, size 0x4
    float u2; // offset 0x1C, size 0x4
    float v2; // offset 0x20, size 0x4
    float u3; // offset 0x24, size 0x4
    float v3; // offset 0x28, size 0x4
    float u4; // offset 0x2C, size 0x4
    float v4; // offset 0x30, size 0x4
    enum RotationType rotation; // offset 0x34, size 0x4
    bool enabled; // offset 0x38, size 0x1
    unsigned char bpad1; // offset 0x39, size 0x1
    unsigned char bpad2; // offset 0x3A, size 0x1
    unsigned char bpad3; // offset 0x3B, size 0x1
};
enum RotationType {
    None = 0,
    Ninety = 1,
    OneEighty = 2,
    TwoSeventy = 3,
    END_RotationTypeENUM = 4,
};
// total size: 0x20
class zUIHintBoxAsset : public xBaseScene {
    // Members
    class Pointer32 Text; // offset 0x10, size 0x4
    class LinkAsset EventLinksNew; // offset 0x14, size 0x8
};
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
// total size: 0x30
class Font : public Entity {
    // Members
    class EntityHandle * assetHandle; // offset 0x1C, size 0x4
    class EntityHandle * textureHandle; // offset 0x20, size 0x4
    float padTop; // offset 0x24, size 0x4
    float padBottom; // offset 0x28, size 0x4
    float yAdvance; // offset 0x2C, size 0x4
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
// total size: 0x568
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
    unsigned long long * includedEnt; // offset 0x508, size 0x4
    unsigned long long * excludedEnt; // offset 0x50C, size 0x4
    unsigned int includedEntCount; // offset 0x510, size 0x4
    unsigned int excludedEntCount; // offset 0x514, size 0x4
    bool enabled; // offset 0x518, size 0x1
    class xBase * dotTargetList[8]; // offset 0x51C, size 0x20
    float dotTimerList[8]; // offset 0x53C, size 0x20
    int dotTargetCount; // offset 0x55C, size 0x4
    bool formSwitch; // offset 0x560, size 0x1
    unsigned int playersEnteredFlag; // offset 0x564, size 0x4
};
// total size: 0x20
class CommandActionSet {
    // Members
    int priority; // offset 0x0, size 0x4
    int currentAction; // offset 0x4, size 0x4
    int actionCount; // offset 0x8, size 0x4
    int conditionCount; // offset 0xC, size 0x4
    class CommandCondition * * conditions; // offset 0x10, size 0x4
    class CommandAction * * actions; // offset 0x14, size 0x4
    class CommandActionIdle idleAction; // offset 0x18, size 0x8
};
// total size: 0xC
class CommandCondition {
    // Members
    enum ePlayerName playerName; // offset 0x0, size 0x4
    bool negate; // offset 0x4, size 0x1
};
// total size: 0x8
class CommandAction {
    // Members
    class zCommonPlayer * thePlayer; // offset 0x0, size 0x4
};
// total size: 0x8
class CommandActionIdle : public CommandAction {};
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
enum ForceEvent {
    FE_YES = 0,
    FE_NO = 1,
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
// total size: 0x8
class Dispatcher_SubtitlesOn : public EventActionNoParams {
    // Members
    class uid paramSubtitles; // offset 0x0, size 0x8
};
// total size: 0x1
class EventActionNoParams : public EventActionNew {};
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
enum movieSkippable {
    eNotSkippable = 0,
    eSkippableAfterFirstViewing = 1,
    eAlwaysSkippable = 2,
};
// total size: 0x4
class EventActionAwardAchievement : public EventActionNew {
    // Members
    unsigned int param0; // offset 0x0, size 0x4
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
    class LightKitEntity * lightKits[5]; // offset 0x1C, size 0x14
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
// total size: 0x1
class EventActionOnOff : public EventActionNew {
    // Members
    unsigned char param0; // offset 0x0, size 0x1
};
// total size: 0x8
class EventActionSetFollowDistances : public EventActionNew {
    // Members
    float StartFollowDist; // offset 0x0, size 0x4
    float StopFollowDist; // offset 0x4, size 0x4
};
// total size: 0x38
class EventActionGetBadge : public EventActionNew {
    // Members
    class uid SpawnerRef; // offset 0x0, size 0x8
    class vec3 Position; // offset 0x8, size 0xC
    class uid BadgePointRef; // offset 0x18, size 0x8
    int Gold; // offset 0x20, size 0x4
    int Silver; // offset 0x24, size 0x4
    int Bronze; // offset 0x28, size 0x4
    int Health; // offset 0x2C, size 0x4
    float Probability; // offset 0x30, size 0x4
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
// total size: 0x1
class EventActionScaleformFadeOut : public EventActionNew {
    // Members
    bool isFadeOutSound; // offset 0x0, size 0x1
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
// total size: 0x8
class LevelHintTable {
    // Members
    char * tip; // offset 0x0, size 0x4
    char * header; // offset 0x4, size 0x4
};
enum CustomTextHAlignment {
    CustomText_HAlign_Left = 0,
    CustomText_HAlign_Right = 1,
    CustomText_HAlign_Center = 2,
    CustomText_HAlign_Justify = 3,
};
enum CustomTextVAlignment {
    CustomText_VAlign_Top = 0,
    CustomText_VAlign_Center = 1,
    CustomText_VAlign_Bottom = 2,
};
// total size: 0x10
class xFRect {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
// total size: 0xB8
class ScaleformModule : public Module, public ScaleformListener {
    // Members
    class Coordinator * coordinator; // offset 0x9C, size 0x4
    class CustomCommandHandler * fsHandler; // offset 0xA0, size 0x4
    class ExternalInterfaceHandler * eiHandler; // offset 0xA4, size 0x4
    enum eSFPlayerState curState; // offset 0xA8, size 0x4
    class ScreenRenderTargetWii * target; // offset 0xAC, size 0x4
    bool firstFrame; // offset 0xB0, size 0x1
    bool stopped; // offset 0xB1, size 0x1
    char levelName[5]; // offset 0xB2, size 0x5
};
// total size: 0x4
class ScaleformListener {};
// total size: 0x1CC
class Coordinator {
    // Members
    class PoolList pMovieDefs; // offset 0x0, size 0x1C
    class PoolList pTextures; // offset 0x1C, size 0x1C
    class PoolList pMovieViews; // offset 0x38, size 0x1C
    class PoolList listeners; // offset 0x54, size 0x1C
    class Iterator viewIterRend; // offset 0x70, size 0x4
    class Iterator viewTail; // offset 0x74, size 0x4
    class HeapAllocator mBlockAllocator; // offset 0x78, size 0x9C
    class ScaleformInternalEntity * sfIntEnt; // offset 0x114, size 0x4
    class GFxLoader * mLoader; // offset 0x118, size 0x4
    class GFxActionControl mActionControl; // offset 0x11C, size 0x18
    class CustomTextRenderer * customTextRenderer; // offset 0x134, size 0x4
    class GPtr pFileOpener; // offset 0x138, size 0x4
    class GPtr fsHandler; // offset 0x13C, size 0x4
    class GPtr eiHandler; // offset 0x140, size 0x4
    class GPtr strTranslator; // offset 0x144, size 0x4
    class GPtr pFontMap[6]; // offset 0x148, size 0x18
    class TextureConfig fontCacheConfig; // offset 0x160, size 0x1C
    class GMatrix2D mat; // offset 0x17C, size 0x18
    class GPtr pRenderer; // offset 0x194, size 0x4
    class GPtr pRenderConfig; // offset 0x198, size 0x4
    class GPtr pImageCreator; // offset 0x19C, size 0x4
    int * pDevice; // offset 0x1A0, size 0x4
    class ScaleformAsset * * updULMovies; // offset 0x1A4, size 0x4
    class ScaleformAsset * * rendULMovies; // offset 0x1A8, size 0x4
    char prevLangCode[6]; // offset 0x1AC, size 0x6
    unsigned int numUpdULMovies; // offset 0x1B4, size 0x4
    unsigned int numRendULMovies; // offset 0x1B8, size 0x4
    unsigned int updArraySize; // offset 0x1BC, size 0x4
    unsigned int rendArraySize; // offset 0x1C0, size 0x4
    bool firstPlay : 1; // offset 0x1C4, size 0x1, bit offset 0
    bool texturesLoaded : 1; // offset 0x1C4, size 0x1, bit offset 1
    bool moviesStopped : 1; // offset 0x1C4, size 0x1, bit offset 2
    bool firstMovie : 1; // offset 0x1C4, size 0x1, bit offset 3
    bool isWidescreen : 1; // offset 0x1C4, size 0x1, bit offset 4
    bool sfEnabled : 1; // offset 0x1C4, size 0x1, bit offset 5
    unsigned int pad : 23; // offset 0x1C4, size 0x4, bit offset 6
};
// total size: 0x4
class Iterator : public ConstIterator {};
// total size: 0x4
class ConstIterator {
    // Members
    class NodeHeader * node; // offset 0x0, size 0x4
};
// total size: 0x9C
class HeapAllocator : public GAllocator {
    // Members
    unsigned char * fixedBuffer[8]; // offset 0x4, size 0x20
    unsigned char * debugBuffer[8]; // offset 0x24, size 0x20
    class FixedAllocator * falloc[8]; // offset 0x44, size 0x20
    class MemTracker * memTracker; // offset 0x64, size 0x4
    enum GlobalHeapEnum mHeap; // offset 0x68, size 0x4
    enum eMemMgrTag mTag; // offset 0x6C, size 0x4
    bool mSpam; // offset 0x70, size 0x1
    class FixedAllocator * staticAllocator; // offset 0x74, size 0x4
    class MemHandle * staticAllocatorHandle; // offset 0x78, size 0x4
    class CriticalSection heapLock; // offset 0x7C, size 0x20
};
// total size: 0x4
class GAllocator {};
// total size: 0x38
class FixedAllocator {
    // Members
    class CriticalSection memMutex; // offset 0x0, size 0x20
    class FixedHeader * freeList; // offset 0x20, size 0x4
    bool selfDestruct; // offset 0x24, size 0x1
    bool beThreadSafe; // offset 0x25, size 0x1
    int numBlocks; // offset 0x28, size 0x4
    int blockSize; // offset 0x2C, size 0x4
    unsigned char * bufferStart; // offset 0x30, size 0x4
    unsigned char * bufferEnd; // offset 0x34, size 0x4
};
// total size: 0x4
class FixedHeader {
    // Members
    class FixedHeader * next; // offset 0x0, size 0x4
};
// total size: 0xAB8
class MemTracker {
    // Members
    int totalSize; // offset 0x0, size 0x4
    int sizePerTag[150]; // offset 0x4, size 0x258
    int sizePerDept[5]; // offset 0x25C, size 0x14
    class File trckLog; // offset 0x270, size 0x4
    unsigned int tagStack[8]; // offset 0x274, size 0x20
    char logFileName[2048]; // offset 0x294, size 0x800
    int topLine; // offset 0xA94, size 0x4
    class CriticalSection trackerMutex; // offset 0xA98, size 0x20
};
// total size: 0xC
class ScaleformInternalEntity : public Node {};
// total size: 0xC
class GFxLoader : public GFxSharedState {
    // Members
    class GFxLoaderImpl * pImpl; // offset 0x4, size 0x4
    class GFxResourceLib * pStrongResourceLib; // offset 0x8, size 0x4
};
// total size: 0x4
class GFxSharedState : public GFxFileConstants {};
// total size: 0x1
class GFxFileConstants {};
// total size: 0x0
class GFxLoaderImpl {};
// total size: 0x18
class GFxResourceLib : public GRefCountBase {
    // Members
    class GFxResourceWeakLib * pWeakLib; // offset 0x10, size 0x4
    class ghash_set_uncached PinSet; // offset 0x14, size 0x4
};
// total size: 0x10
class GRefCountBase : public GRefCountBaseImpl {};
// total size: 0x10
class GRefCountBaseImpl {
    // Members
    int RefCount; // offset 0x0, size 0x4
    class GRefCountImpl * pRefCountImpl; // offset 0x4, size 0x4
    class GWeakPtrProxy * pWeakProxy; // offset 0x8, size 0x4
};
// total size: 0x8
class GRefCountImpl {
    // Members
    void (* pAddRef)(class GRefCountBaseImpl * pbase); // offset 0x0, size 0x4
    void (* pRelease)(class GRefCountBaseImpl * pbase, unsigned int flags); // offset 0x4, size 0x4
};
// total size: 0x8
class GWeakPtrProxy : public GNewOverrideBase {
    // Members
    int RefCount; // offset 0x0, size 0x4
    bool Alive; // offset 0x4, size 0x1
};
// total size: 0x1
class GNewOverrideBase {};
// total size: 0x1C
class GFxResourceWeakLib : public GFxResourceLibBase {
    // Members
    class GFxResourceLib * pStrongLib; // offset 0x10, size 0x4
    class GLock ResourceLock; // offset 0x14, size 0x1
    class ghash_set Resources; // offset 0x18, size 0x4
};
// total size: 0x10
class GFxResourceLibBase : public GRefCountBase {};
// total size: 0x1
class GLock {};
// total size: 0x4
class ghash_set {
    // Members
    class table * pTable; // offset 0x0, size 0x4
};
// total size: 0x0
class table {};
// total size: 0x4
class ghash_set_uncached : public ghash_set {};
// total size: 0x18
class GFxActionControl : public GFxState {
    // Members
    unsigned int ActionFlags; // offset 0x14, size 0x4
};
// total size: 0x14
class GFxState : public GRefCountBase {
    // Members
    enum StateType SType; // offset 0x10, size 0x4
};
enum StateType {
    State_None = 0,
    State_RenderConfig = 1,
    State_RenderStats = 2,
    State_Translator = 3,
    State_Log = 4,
    State_ImageLoader = 5,
    State_ActionControl = 6,
    State_UserEventHandler = 7,
    State_FSCommandHandler = 8,
    State_ExternalInterface = 9,
    State_FileOpener = 10,
    State_URLBuilder = 11,
    State_ImageCreator = 12,
    State_ParseControl = 13,
    State_ProgressHandler = 14,
    State_ImportVisitor = 15,
    State_FontPackParams = 16,
    State_FontCacheManager = 17,
    State_FontLib = 18,
    State_FontProvider = 19,
    State_FontMap = 20,
    State_GradientParams = 21,
    State_TaskManager = 22,
    State_TextClipboard = 23,
    State_TextKeyMap = 24,
    State_PreprocessParams = 25,
    State_IMEManager = 26,
    State_XMLSupport = 27,
    State_JpegSupport = 28,
    State_ZlibSupport = 29,
    State_FontCompactorParams = 30,
    State_PNGSupport = 31,
    State_TestStream = 32,
};
// total size: 0x469C
class CustomTextRenderer {
    // Members
    class CustomTextRenderInfo customTextRenderInfo[16]; // offset 0x0, size 0x2340
    class CustomTextRenderInfo customTextRenderInfoNextFrame[16]; // offset 0x2340, size 0x2340
    unsigned int textCount; // offset 0x4680, size 0x4
    unsigned int nextFrameTextCount; // offset 0x4684, size 0x4
    bool textChanged; // offset 0x4688, size 0x1
    class GPtr drawTextMgr; // offset 0x468C, size 0x4
    class GViewport * vp; // offset 0x4690, size 0x4
    float viewPortWidth; // offset 0x4694, size 0x4
    float viewPortHeight; // offset 0x4698, size 0x4
};
// total size: 0x234
class CustomTextRenderInfo {
    // Members
    char renderedText[512]; // offset 0x0, size 0x200
    float posX; // offset 0x200, size 0x4
    float posY; // offset 0x204, size 0x4
    float posX2; // offset 0x208, size 0x4
    float posY2; // offset 0x20C, size 0x4
    enum CustomTextHAlignment hAlignment; // offset 0x210, size 0x4
    enum CustomTextVAlignment vAlignment; // offset 0x214, size 0x4
    float pixelOffsetX; // offset 0x218, size 0x4
    float pixelOffsetY; // offset 0x21C, size 0x4
    class CustomTextRendererFontParams fontParams; // offset 0x220, size 0x14
};
// total size: 0x4
class GPtr {
    // Members
    class GFxDrawTextManager * pObject; // offset 0x0, size 0x4
};
// total size: 0x18
class GFxDrawTextManager : public GRefCountBase, public GFxSharedState {
    // Members
    class GFxDrawTextManagerImpl * pImpl; // offset 0x14, size 0x4
};
// total size: 0x0
class GFxDrawTextManagerImpl {};
// total size: 0x34
class GViewport {
    // Members
    int BufferWidth; // offset 0x0, size 0x4
    int BufferHeight; // offset 0x4, size 0x4
    int Left; // offset 0x8, size 0x4
    int Top; // offset 0xC, size 0x4
    int Width; // offset 0x10, size 0x4
    int Height; // offset 0x14, size 0x4
    int ScissorLeft; // offset 0x18, size 0x4
    int ScissorTop; // offset 0x1C, size 0x4
    int ScissorWidth; // offset 0x20, size 0x4
    int ScissorHeight; // offset 0x24, size 0x4
    float Scale; // offset 0x28, size 0x4
    float AspectRatio; // offset 0x2C, size 0x4
    unsigned int Flags; // offset 0x30, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class FileOpener * pObject; // offset 0x0, size 0x4
};
// total size: 0x34
class FileOpener : public GFxFileOpener {
    // Members
    class PoolList fileList; // offset 0x14, size 0x1C
    bool mSpam; // offset 0x30, size 0x1
};
// total size: 0x14
class GFxFileOpener : public GFxFileOpenerBase {};
// total size: 0x14
class GFxFileOpenerBase : public GFxState {};
// total size: 0x4
class GPtr {
    // Members
    class CustomCommandHandler * pObject; // offset 0x0, size 0x4
};
// total size: 0x18
class CustomCommandHandler : public GFxFSCommandHandler {
    // Members
    class Coordinator * coord; // offset 0x14, size 0x4
};
// total size: 0x14
class GFxFSCommandHandler : public GFxState {};
// total size: 0x4
class GPtr {
    // Members
    class ExternalInterfaceHandler * pObject; // offset 0x0, size 0x4
};
// total size: 0x18
class ExternalInterfaceHandler : public GFxExternalInterface {
    // Members
    class Coordinator * coord; // offset 0x14, size 0x4
};
// total size: 0x14
class GFxExternalInterface : public GFxState {};
// total size: 0x4
class GPtr {
    // Members
    class CustomTranslator * pObject; // offset 0x0, size 0x4
};
// total size: 0x18
class CustomTranslator : public GFxTranslator {};
// total size: 0x18
class GFxTranslator : public GFxState {
    // Members
    unsigned int WWMode; // offset 0x14, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxFontMap * pObject; // offset 0x0, size 0x4
};
// total size: 0x18
class GFxFontMap : public GFxState {
    // Members
    class GFxFontMapImpl * pImpl; // offset 0x14, size 0x4
};
// total size: 0x0
class GFxFontMapImpl {};
// total size: 0x1C
class TextureConfig {
    // Members
    unsigned int TextureWidth; // offset 0x0, size 0x4
    unsigned int TextureHeight; // offset 0x4, size 0x4
    unsigned int MaxNumTextures; // offset 0x8, size 0x4
    unsigned int MaxSlotHeight; // offset 0xC, size 0x4
    unsigned int SlotPadding; // offset 0x10, size 0x4
    unsigned int TexUpdWidth; // offset 0x14, size 0x4
    unsigned int TexUpdHeight; // offset 0x18, size 0x4
};
// total size: 0x18
class GMatrix2D {
    // Members
    float M_[2][3]; // offset 0x0, size 0x18
};
// total size: 0x4
class GPtr {
    // Members
    class GRendererWii * pObject; // offset 0x0, size 0x4
};
// total size: 0x10
class GRendererWii : public GRenderer {};
// total size: 0x10
class GRenderer : public GRefCountBase {};
// total size: 0x4
class GPtr {
    // Members
    class GFxRenderConfig * pObject; // offset 0x0, size 0x4
};
// total size: 0x2C
class GFxRenderConfig : public GFxState {
    // Members
    class GPtr pRenderer; // offset 0x14, size 0x4
    float MaxCurvePixelError; // offset 0x18, size 0x4
    unsigned long RenderFlags; // offset 0x1C, size 0x4
    float StrokerAAWidth; // offset 0x20, size 0x4
    unsigned long RendererCapBits; // offset 0x24, size 0x4
    unsigned long RendererVtxFmts; // offset 0x28, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GRenderer * pObject; // offset 0x0, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class CustomImageCreator * pObject; // offset 0x0, size 0x4
};
// total size: 0x18
class CustomImageCreator : public GFxImageCreator {};
// total size: 0x18
class GFxImageCreator : public GFxState {
    // Members
    bool KeepImageBindData; // offset 0x14, size 0x1
};
enum eSFPlayerState {
    eState_Stopped = 0,
    eState_Started = 1,
    eState_Unloading = 2,
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
// total size: 0x20
class LoadingScreenElement {
    // Members
    class ImmediateInstanceAsset image; // offset 0x0, size 0x10
    enum FMVIdentifier fmv; // offset 0x10, size 0x4
};
// total size: 0x50
class zUIHintBox : public xOGEntity {
    // Members
    char * text; // offset 0x3C, size 0x4
    class zUIHintBoxAsset * asset; // offset 0x40, size 0x4
    class zScaleform * hintBoxPlayer; // offset 0x44, size 0x4
    bool boxVisible; // offset 0x48, size 0x1
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
enum eNPCBugType {
    eNPCBugType_Crawler = 0,
    eNPCBugType_Flyer = 1,
    eNPCBugType_Count = 2,
    END_eNPCBugType_ENUM = 3,
};
enum eNPCBugColor {
    eNPCBugColor_Red = 0,
    eNPCBugColor_Blue = 1,
    eNPCBugColor_Yellow = 2,
    eNPCBugColor_Green = 3,
    eNPCBugColor_Purple = 4,
    eNPCBugColor_Orange = 5,
    eNPCBugColor_YellowStriped = 6,
    eNPCBugColor_Count = 7,
    END_eNPCBugColor_ENUM = 8,
};
enum eQuestCardConditionType {
    eQCCT_LevelRequiredSKA1 = 0,
    eQCCT_Cockroach = 1,
    eQCCT_DioRed = 2,
    eQCCT_DioBlue = 3,
    eQCCT_DioGreen = 4,
    eQCCT_DioOrange = 5,
    eQCCT_DioPurple = 6,
    eQCCT_DioYellow = 7,
    eQCCT_DioYellowStriped = 8,
    eQCCT_ButterflyRed = 9,
    eQCCT_ButterflyBlue = 10,
    eQCCT_ButterflyGreen = 11,
    eQCCT_ButterflyOrange = 12,
    eQCCT_ButterflyPurple = 13,
    eQCCT_ButterflyYellow = 14,
    eQCCT_ButterflyYellowStriped = 15,
    eQCCT_MuseumSilver1 = 16,
    eQCCT_MuseumSilver2 = 17,
    eQCCT_MuseumSilver3 = 18,
    eQCCT_MuseumSilver4 = 19,
    eQCCT_MuseumSilver5 = 20,
    eQCCT_MuseumSilver6 = 21,
    eQCCT_MuseumSilver7 = 22,
    eQCCT_MuseumGold1 = 23,
    eQCCT_MuseumGold2 = 24,
    eQCCT_MuseumGold3 = 25,
    eQCCT_MuseumGold4 = 26,
    eQCCT_MuseumGold5 = 27,
    eQCCT_MuseumGold6 = 28,
    eQCCT_MuseumGold7 = 29,
    eQCCT_Memento1 = 30,
    eQCCT_Memento2 = 31,
    eQCCT_Memento3 = 32,
    eQCCT_Memento4 = 33,
    eQCCT_Memento5 = 34,
    eQCCT_Memento6 = 35,
    eQCCT_Memento7 = 36,
    eQCCT_MuseumBronze1 = 37,
    eQCCT_MuseumBronze2 = 38,
    eQCCT_MuseumBronze3 = 39,
    eQCCT_MuseumBronze4 = 40,
    eQCCT_MuseumBronze5 = 41,
    eQCCT_MuseumBronze6 = 42,
    eQCCT_MuseumBronze7 = 43,
    eQCCT_Dirigible1 = 44,
    eQCCT_Dirigible2 = 45,
    eQCCT_Dirigible3 = 46,
    eQCCT_Unknown = 47,
};
// total size: 0x6F0
class zViewport {
    // Members
    class Viewport viewport3D; // offset 0x0, size 0x24C
    class Viewport viewportUI; // offset 0x24C, size 0x24C
    class zCam zcam; // offset 0x498, size 0x254
    bool isActive; // offset 0x6EC, size 0x1
    bool invertCameraControlVertical; // offset 0x6ED, size 0x1
    bool invertCameraControlHorizontal; // offset 0x6EE, size 0x1
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
// total size: 0x10
class GFxValue {
    // Members
    enum ValueType Type; // offset 0x0, size 0x4
    class ValueUnion Value; // offset 0x8, size 0x8
};
enum ValueType {
    VT_Undefined = 0,
    VT_Null = 1,
    VT_Boolean = 2,
    VT_Number = 3,
    VT_String = 4,
    VT_StringW = 5,
    VT_ConvertBit = 16,
    VT_ConvertBoolean = 18,
    VT_ConvertNumber = 19,
    VT_ConvertString = 20,
    VT_ConvertStringW = 21,
};
// total size: 0x8
class ValueUnion {
    // Members
    double NValue; // offset 0x0, size 0x8
    bool BValue; // offset 0x0, size 0x1
    char * pString; // offset 0x0, size 0x4
    unsigned short * pStringW; // offset 0x0, size 0x4
};
// total size: 0x10
class LeverLaunch {
    // Members
    unsigned char onSide; // offset 0x0, size 0x1
    unsigned char rotateTo; // offset 0x1, size 0x1
    unsigned char player; // offset 0x2, size 0x1
    class uid target; // offset 0x8, size 0x8
};
enum eRotateDir {
    eRTNone = 0,
    eRTLaunchDirection = 1,
    eRTTargetDirection = 2,
    END_eRTENUM = 3,
};
// total size: 0x8
class zLeverCollisionListener : public hkpCollisionListener, public hkpEntityListener {};
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
// total size: 0x10
class IdleRayHitCollector : public hkpRayHitCollector {
    // Members
    class zPlayer * owner; // offset 0x8, size 0x4
    bool checkNormal; // offset 0xC, size 0x1
    bool hit; // offset 0xD, size 0x1
};
// total size: 0x1
class Action_Idle : public ActionBase {
    // Members
    bool Rigid; // offset 0x0, size 0x1
};
// total size: 0x1C
class MoveToSwingHelper {
    // Members
    class zCommonPlayer * player; // offset 0x0, size 0x4
    bool jumped; // offset 0x4, size 0x1
    bool jumpPressed; // offset 0x5, size 0x1
    class zSwingVine * vine; // offset 0x8, size 0x4
    class xVec3 toGoal; // offset 0xC, size 0xC
    enum eStates currState; // offset 0x18, size 0x4
};
enum eStates {
    eStates_Init = 0,
    eStates_WaitFirstJump = 1,
    eStates_FirstJump = 2,
    eStates_Swing = 3,
    eStates_SwingJump = 4,
    eStates_Land = 5,
};
// total size: 0x10
class StuckInfo {
    // Members
    bool mUseAvoidPos; // offset 0x0, size 0x1
    class xVec3 mAvoidPos; // offset 0x4, size 0xC
};
// total size: 0xC
class Action_PlayerAI_Write_PlayerPos : public ActionBase {
    // Members
    class @class __anon; // offset 0x0, size 0x1
    class ClosestHumanPlayerStruct ClosestHumanPlayer; // offset 0x0, size 0x1
    class SpecificPlayerStruct SpecificPlayer; // offset 0x0, size 0x1
    unsigned int TargetType; // offset 0x4, size 0x4
    float UpdatePeriod; // offset 0x8, size 0x4
};
// total size: 0x1
class @class {
    // Members
    class ClosestHumanPlayerStruct ClosestHumanPlayer; // offset 0x0, size 0x1
    class SpecificPlayerStruct SpecificPlayer; // offset 0x0, size 0x1
};
// total size: 0x1
class ClosestHumanPlayerStruct {};
// total size: 0x1
class SpecificPlayerStruct {
    // Members
    unsigned char Player; // offset 0x0, size 0x1
};
// total size: 0x18
class FleeFromNPCAccumulator {
    // Members
    class xVec3 ownerPos; // offset 0x0, size 0xC
    class xVec3 dir; // offset 0xC, size 0xC
};
// total size: 0x10
class CommandConditionCheckInTrigger : public CommandCondition {
    // Members
    class zTrigger * trigger; // offset 0xC, size 0x4
};
// total size: 0x18
class CommandConditionCheckPlayerMount : public CommandCondition {
    // Members
    unsigned long long objectID; // offset 0x10, size 0x8
};
// total size: 0x18
class CommandConditionCheckPlayerInteraction : public CommandCondition {
    // Members
    unsigned long long interactionID; // offset 0x10, size 0x8
};
// total size: 0x58
class zPlayerAICommandGroup : public xOGEntity {
    // Members
    class PlayerAICommandGroup * asset; // offset 0x3C, size 0x4
    class zTrigger * zone; // offset 0x40, size 0x4
    int commandCount; // offset 0x44, size 0x4
    class zPlayerAICommand * * commands; // offset 0x48, size 0x4
    class zDelegateP2 observer; // offset 0x4C, size 0x8
};
// total size: 0xC
class zPlayerAIBTConditionBuilder : public zBTConditionBuilder {
    // Members
    class zCommonPlayer * player; // offset 0x8, size 0x4
};
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
// total size: 0x64
class zSearchManager : public zModule {
    // Members
    class zSearchMapDepot mapDepot; // offset 0x18, size 0x10
    class zScheduler scheduler; // offset 0x28, size 0x3C
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
    class zDelegateP0 * observer; // offset 0x8, size 0x4
};
// total size: 0x8
class zSearchTask : public zSchedulerTask {
    // Members
    class zSearchStrategy * strategy; // offset 0x4, size 0x4
};
// total size: 0x1
class zStoryMoment {
    // Members
    bool active; // offset 0x0, size 0x1
};
// total size: 0x1
class zXmonSupport {};
// total size: 0xC
class CommandActionDugDig : public CommandAction {
    // Members
    class zInteractionUP * dig; // offset 0x8, size 0x4
};
// total size: 0xC
class CommandActionJumpTo : public CommandAction {
    // Members
    class zDirection * direction; // offset 0x8, size 0x4
};
// total size: 0xC
class CommandActionMoveTo : public CommandAction {
    // Members
    class zDirection * direction; // offset 0x8, size 0x4
};
// total size: 0x14
class IdlePlayerCollisionListener : public zPlayerCharacterProxyCollisionListener {
    // Members
    class zPlayerAIActionIdle * idleAction; // offset 0xC, size 0x4
    class zPlayer * player; // offset 0x10, size 0x4
};
// total size: 0x2D0
class SaveData {
    // Members
    class SaveDataHeader headerData[3]; // offset 0x0, size 0x24
    int curFileCount; // offset 0x24, size 0x4
    void (* curCB)(int result); // offset 0x28, size 0x4
    int lastRequest; // offset 0x2C, size 0x4
    void * curBuffer; // offset 0x30, size 0x4
    int curBufferSize; // offset 0x34, size 0x4
    char * internalBuffer; // offset 0x38, size 0x4
    int internalBuffSize; // offset 0x3C, size 0x4
    int curRequest; // offset 0x40, size 0x4
    bool isSaving; // offset 0x44, size 0x1
    bool isCopying; // offset 0x45, size 0x1
    int userCancelled; // offset 0x48, size 0x4
    bool lastRequestSucceeded; // offset 0x4C, size 0x1
    class SaveDataHeader curHeader; // offset 0x50, size 0xC
    void * callBackData; // offset 0x5C, size 0x4
    int curSlot; // offset 0x60, size 0x4
    char filePath[64]; // offset 0x64, size 0x40
    char bannerPath[64]; // offset 0xA4, size 0x40
    char destPath[64]; // offset 0xE4, size 0x40
    class NANDCommandBlock block; // offset 0x124, size 0xBC
    class NANDFileInfo fileInfo; // offset 0x1E0, size 0x8C
    void * bannerImage; // offset 0x26C, size 0x4
    void * bannerIcon[1]; // offset 0x270, size 0x4
    class Time lastSaveTime; // offset 0x278, size 0x8
    unsigned char dummyVar8; // offset 0x280, size 0x1
    unsigned long dummyVar32; // offset 0x284, size 0x4
    bool savingBanner; // offset 0x288, size 0x1
    bool needToSaveBanner; // offset 0x289, size 0x1
    bool stepDone; // offset 0x28A, size 0x1
    int copyBufferSize; // offset 0x28C, size 0x4
    char * copyBuffer; // offset 0x290, size 0x4
    class SaveErrorMsgBox saveErrorMsgBox; // offset 0x294, size 0x38
};
// total size: 0xBC
class NANDCommandBlock {
    // Members
    void * userData; // offset 0x0, size 0x4
    void * callback; // offset 0x4, size 0x4
    void * fileInfo; // offset 0x8, size 0x4
    void * bytes; // offset 0xC, size 0x4
    void * inodes; // offset 0x10, size 0x4
    void * status; // offset 0x14, size 0x4
    unsigned long ownerId; // offset 0x18, size 0x4
    unsigned short groupId; // offset 0x1C, size 0x2
    unsigned char nextStage; // offset 0x1E, size 0x1
    unsigned long attr; // offset 0x20, size 0x4
    unsigned long ownerAcc; // offset 0x24, size 0x4
    unsigned long groupAcc; // offset 0x28, size 0x4
    unsigned long othersAcc; // offset 0x2C, size 0x4
    unsigned long num; // offset 0x30, size 0x4
    char absPath[64]; // offset 0x34, size 0x40
    unsigned long * length; // offset 0x74, size 0x4
    unsigned long * pos; // offset 0x78, size 0x4
    int state; // offset 0x7C, size 0x4
    void * copyBuf; // offset 0x80, size 0x4
    unsigned long bufLength; // offset 0x84, size 0x4
    unsigned char * type; // offset 0x88, size 0x4
    unsigned long uniqNo; // offset 0x8C, size 0x4
    unsigned long reqBlocks; // offset 0x90, size 0x4
    unsigned long reqInodes; // offset 0x94, size 0x4
    unsigned long * answer; // offset 0x98, size 0x4
    unsigned long homeBlocks; // offset 0x9C, size 0x4
    unsigned long homeInodes; // offset 0xA0, size 0x4
    unsigned long userBlocks; // offset 0xA4, size 0x4
    unsigned long userInodes; // offset 0xA8, size 0x4
    unsigned long workBlocks; // offset 0xAC, size 0x4
    unsigned long workInodes; // offset 0xB0, size 0x4
    char * * dir; // offset 0xB4, size 0x4
    int simpleFlag; // offset 0xB8, size 0x4
};
// total size: 0x8C
class NANDFileInfo {
    // Members
    long fileDescriptor; // offset 0x0, size 0x4
    long origFd; // offset 0x4, size 0x4
    char origPath[64]; // offset 0x8, size 0x40
    char tmpPath[64]; // offset 0x48, size 0x40
    unsigned char accType; // offset 0x88, size 0x1
    unsigned char stage; // offset 0x89, size 0x1
    unsigned char mark; // offset 0x8A, size 0x1
};
// total size: 0x38
class SaveErrorMsgBox : public TRCMsgBox {
    // Members
    enum eSaveErrorMsgBoxType type; // offset 0x34, size 0x4
};
enum eSaveErrorMsgBoxType {
    eSEMBT_NAND02 = 0,
    eSEMBT_NAND03 = 1,
    eSEMBT_NAND05 = 2,
    eSEMBT_NAND06 = 3,
    eSEMBT_NAND07 = 4,
    eSEMBT_NAND08 = 5,
    eSEMBT_NAND11 = 6,
};
