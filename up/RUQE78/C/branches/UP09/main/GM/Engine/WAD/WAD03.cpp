/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801F3180 -> 0x802920A8
*/
extern class Global * gGlobal; // size: 0x4
// total size: 0x60
class zPhysicsObject : public xBase {
    // Members
    class zPhysicsObject * nextPhysicsObject; // offset 0x38, size 0x4
    class zPOWGroup * owner; // offset 0x3C, size 0x4
    enum E_HAVOK_COLLIDE_FILTER_LAYER initialCollisionLayer; // offset 0x40, size 0x4
    float lifetime; // offset 0x44, size 0x4
    class zPhysicsObjectEntity * entity; // offset 0x48, size 0x4
    unsigned int collFilterInfo; // offset 0x4C, size 0x4
    int count; // offset 0x50, size 0x4
    class HavokSimObj havokSimObj; // offset 0x54, size 0x4
    bool killedByManager : 1; // offset 0x58, size 0x1, bit offset 0
    bool update : 1; // offset 0x58, size 0x1, bit offset 1
    bool visible : 1; // offset 0x58, size 0x1, bit offset 2
    bool collidedWithWater : 1; // offset 0x58, size 0x1, bit offset 3
    bool collidedWithWaterHandled : 1; // offset 0x58, size 0x1, bit offset 4
    bool lifetimeSet : 1; // offset 0x58, size 0x1, bit offset 5
    bool locked : 1; // offset 0x58, size 0x1, bit offset 6
    unsigned char pad : 1; // offset 0x58, size 0x1, bit offset 7
    class zSoundSourcesPhysics * soundSourcesPhysics; // offset 0x5C, size 0x4
};
// total size: 0x100
class zPOWGroup : public xOGEntity {
    // Members
    class zPOWGroupAsset * asset; // offset 0x3C, size 0x4
    class zEntSimpleObj * destObj; // offset 0x40, size 0x4
    bool collisionDisabled; // offset 0x44, size 0x1
    int countdownToActivation; // offset 0x48, size 0x4
    class xMat4x3 mat; // offset 0x4C, size 0x40
    float moveToTime; // offset 0x8C, size 0x4
    class zPhysicsObject * * objPtrs; // offset 0x90, size 0x4
    int numObjs; // offset 0x94, size 0x4
    int collidedWithPlayer; // offset 0x98, size 0x4
    int collidedWithPlayerHandled; // offset 0x9C, size 0x4
    int lifetimeSet; // offset 0xA0, size 0x4
    int infiniteLife; // offset 0xA4, size 0x4
    float autoSettleTimer; // offset 0xA8, size 0x4
    class zTrigger * * triggers; // offset 0xAC, size 0x4
    class xEnt * driver; // offset 0xB0, size 0x4
    class xMat4x3 driveInfoMat; // offset 0xB4, size 0x40
    bool driveMode; // offset 0xF4, size 0x1
    bool wasEnabled; // offset 0xF5, size 0x1
    class zPOWObjectAsset * powObjAsset; // offset 0xF8, size 0x4
};
// total size: 0x68
class zPlayerAICommand : public xOGEntity {
    // Members
    class PlayerAICommand * asset; // offset 0x3C, size 0x4
    unsigned int triggeredBy; // offset 0x40, size 0x4
    unsigned int sendTo; // offset 0x44, size 0x4
    class zTrigger * zone; // offset 0x48, size 0x4
    class zDelegateP2 observer; // offset 0x4C, size 0x8
    class zCommonPlayer * thePlayer; // offset 0x54, size 0x4
    int actionSetCount; // offset 0x58, size 0x4
    int activeSet; // offset 0x5C, size 0x4
    class CommandActionSet * * actionSets; // offset 0x60, size 0x4
};
// total size: 0x28
class PlayerAICommand : public xBaseScene {
    // Members
    bool TriggeredByCarl; // offset 0x10, size 0x1
    bool TriggeredByRussell; // offset 0x11, size 0x1
    bool TriggeredByDug; // offset 0x12, size 0x1
    bool TriggeredByKevin; // offset 0x13, size 0x1
    unsigned char SendTo; // offset 0x14, size 0x1
    class uid Trigger; // offset 0x18, size 0x8
    class __CommandActionSets__ CommandActionSets; // offset 0x20, size 0x8
};
// total size: 0x8
class __CommandActionSets__ {
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
class ImmediateInstanceArticle {
    // Members
    int rendCount; // offset 0x0, size 0x4
    int memSize; // offset 0x4, size 0x4
    class ImmediatePrototypeEntity * protoEnt; // offset 0x8, size 0x4
    class ParamCargo * paramCargos; // offset 0xC, size 0x4
    void * * paramDatas; // offset 0x10, size 0x4
    int * paramSizes; // offset 0x14, size 0x4
};
// total size: 0x78
class zPOWObjectAsset : public xBaseAsset {
    // Members
    class uid ModelInstanceReference; // offset 0x10, size 0x8
    bool InfiniteLife; // offset 0x18, size 0x1
    class PhysicsDataStruct PhysicsData; // offset 0x1C, size 0x54
    class LinkAsset EventLinksNew; // offset 0x70, size 0x8
};
// total size: 0x64
class zPhysicsObjectEntity {
    // Members
    class xOGModel * modelRenderData; // offset 0x0, size 0x4
    float boundRadius; // offset 0x4, size 0x4
    float alpha; // offset 0x8, size 0x4
    bool renderEnabled : 1; // offset 0xC, size 0x1, bit offset 0
    class xMat4x3 matrix; // offset 0x10, size 0x40
    class xVec3 origPos; // offset 0x50, size 0xC
    class ModelInstanceAsset * modelInstanceAsset; // offset 0x5C, size 0x4
    class ModelInstanceArticle * modelInstanceArticle; // offset 0x60, size 0x4
};
enum magCharge {
    Repel = 4294967295,
    Neutral = 0,
    Attract = 1,
    END_magChargeENUM = 2,
};
enum eCollisionLayer {
    eCollisionALL = 0,
    eFixedLayer = 1,
    eFixedNoCamLayer = 2,
    eKeyFrameObjLayer = 3,
    eDynamicSimpleObjLayer = 4,
    eShrapnelObjLayer = 5,
    ePOWLayer = 6,
    ePOWNoPlayerLayer = 7,
    eFlyingDebrisLayer = 8,
    eRagdollsLayer = 9,
    eNPCLayer = 10,
    eProjectilesLayer = 11,
    eProjectilesNoPlayerNoProjectilesLayer = 12,
    ePlayerLayer = 13,
    eFXParticlesLayer = 14,
    eTriggersLayer = 15,
    eCameraLayer = 16,
    eNoCollisionLayer = 31,
    eDefaultCollision = 32,
    END_ENUM = 33,
};
// total size: 0x150
class xPlatformAsset : public xEntAsset {
    // Members
    class LinkAsset EventLinksNew; // offset 0xF8, size 0x8
    class @class __anon; // offset 0x100, size 0x40
    class Spline_Type Spline; // offset 0x100, size 0x18
    class MP_Type MP; // offset 0x100, size 0x18
    class Mech_Type Mech; // offset 0x100, size 0x40
    class ConvBelt_Type ConvBelt; // offset 0x100, size 0x10
    class Teeter_Type Teeter; // offset 0x100, size 0x20
    class FM_Type FM; // offset 0x100, size 0x8
    bool CameraCollisionOff; // offset 0x140, size 0x1
    class uid Destructible; // offset 0x148, size 0x8
};
// total size: 0x40
class @class {
    // Members
    class Spline_Type Spline; // offset 0x0, size 0x18
    class MP_Type MP; // offset 0x0, size 0x18
    class Mech_Type Mech; // offset 0x0, size 0x40
    class ConvBelt_Type ConvBelt; // offset 0x0, size 0x10
    class Teeter_Type Teeter; // offset 0x0, size 0x20
    class FM_Type FM; // offset 0x0, size 0x8
};
// total size: 0x190
class zPlatform : public zEnt {
    // Members
    class xEntMotionAsset * plat_asset; // offset 0xC0, size 0x4
    class xEntMotion motion; // offset 0xC4, size 0x98
    unsigned short state; // offset 0x15C, size 0x2
    unsigned short plat_flags; // offset 0x15E, size 0x2
    float tmr; // offset 0x160, size 0x4
    int ctr; // offset 0x164, size 0x4
    class xMovePoint * src; // offset 0x168, size 0x4
    int moving; // offset 0x16C, size 0x4
    int num_updates; // offset 0x170, size 0x4
    class zPlatFMRunTime * fmrt; // offset 0x174, size 0x4
    class zDestructible * destructible; // offset 0x178, size 0x4
    float idleMax; // offset 0x17C, size 0x4
    bool idle; // offset 0x180, size 0x1
    class zPlayerJawFlapper * jawFlapper; // offset 0x184, size 0x4
};
// total size: 0x200
class zPlatFMRunTime {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    float tmrs[17]; // offset 0x4, size 0x44
    float ttms[17]; // offset 0x48, size 0x44
    float atms[17]; // offset 0x8C, size 0x44
    float dtms[17]; // offset 0xD0, size 0x44
    float vms[17]; // offset 0x114, size 0x44
    float dss[17]; // offset 0x158, size 0x44
    float total_change[17]; // offset 0x19C, size 0x44
    class xQuat startQuat; // offset 0x1E0, size 0x10
    class xQuat destQuat; // offset 0x1F0, size 0x10
};
// total size: 0x28
class EventActionJawboneAnimateOnPlatform : public EventActionNew {
    // Members
    short paramFirstBone; // offset 0x0, size 0x2
    short paramLastBone; // offset 0x2, size 0x2
    enum eJawboneSpeechType paramSpeechType; // offset 0x4, size 0x4
    float paramMinAngle; // offset 0x8, size 0x4
    float paramMaxAngle; // offset 0xC, size 0x4
    float paramSpeechPeriod; // offset 0x10, size 0x4
    class uid paramVFXAssetID; // offset 0x18, size 0x8
    int paramVFXBone; // offset 0x20, size 0x4
};
// total size: 0x4
class EventActionSetSpeed : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
};
// total size: 0x4
class EventActionChangeSpeed : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
};
enum CameraRelative {
    CAMERARELATIVE_None = 0,
    CAMERARELATIVE_Rotate = 1,
    CAMERARELATIVE_Translate = 2,
    CAMERARELATIVE_FixedScale = 4,
    CAMERARELATIVE_FaceCam = 16,
    CAMERARELATIVE_FaceCamYawOnly = 32,
    CAMERARELATIVE_FaceCamPitchOnly = 64,
    CAMERARELATIVE_FaceCamWorldUp = 128,
    CAMERARELATIVE_RotateYawOnly = 256,
    CAMERARELATIVE_TranslateLockY = 512,
    CAMERARELATIVE_TranslateLockXZ = 1024,
    CAMERARELATIVE_TranslateLockXYZ = 2048,
};
// total size: 0x8
class EventActionMovePoint : public EventActionNew {
    // Members
    class uid paramWidgetAssetID; // offset 0x0, size 0x8
};
// total size: 0x8
class EventActionLightKit : public EventActionNew {
    // Members
    class uid paramWidgetAssetID; // offset 0x0, size 0x8
};
// total size: 0x4
class EventActionSetShadowCastDepth : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
};
// total size: 0x8
class EventActionOrientToTarget : public EventActionNew {
    // Members
    class uid targetUID; // offset 0x0, size 0x8
};
// total size: 0x20
class EventActionSetTextureBlend : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
    float param1; // offset 0x4, size 0x4
    float param2; // offset 0x8, size 0x4
    class uid param3; // offset 0x10, size 0x8
    class uid param4; // offset 0x18, size 0x8
};
// total size: 0x30
class zPlayer_CollideTrigger_CB {
    // Members
    class zPlayer * player; // offset 0x0, size 0x4
    unsigned int playerMask; // offset 0x4, size 0x4
    class xVec3 start_pos; // offset 0x8, size 0xC
    class xVec3 end_pos; // offset 0x14, size 0xC
    class xVec3 frame_dir; // offset 0x20, size 0xC
    float frame_dist; // offset 0x2C, size 0x4
};
// total size: 0x4
class EventActionKill : public EventActionNew {
    // Members
    enum eKillType param0; // offset 0x0, size 0x4
};
enum eKillType {
    eKillType_Standing = 0,
    eKillType_Drowning = 1,
    eKillType_Falling = 2,
    END_eKillType_ENUM = 3,
};
enum zControlOwner {
    CONTROL_OWNER_GLOBAL = 1,
    CONTROL_OWNER_EVENT = 2,
    CONTROL_OWNER_ACTION = 4,
    CONTROL_OWNER_SHIFT3 = 8,
    CONTROL_OWNER_SHIFT4 = 16,
    CONTROL_OWNER_SHIFT5 = 32,
    CONTROL_OWNER_HEIST_STATION = 64,
    CONTROL_OWNER_SHIFT7 = 128,
    CONTROL_OWNER_SCREEN_FADE = 256,
    CONTROL_OWNER_FLY_CAM = 512,
    CONTROL_OWNER_SHIFT10 = 1024,
    CONTROL_OWNER_TURRET = 2048,
    CONTROL_OWNER_SHIFT12 = 4096,
    CONTROL_OWNER_ANY = 4294967295,
};
// total size: 0xC
class zPlayerAIBTActionBuilder : public zBTActionBuilder {
    // Members
    class zCommonPlayer * player; // offset 0x8, size 0x4
};
enum InputDirection {
    INPUT_DIR_UP = 0,
    INPUT_DIR_DOWN = 1,
    INPUT_DIR_LEFT = 2,
    INPUT_DIR_RIGHT = 3,
    INPUT_DIR_LAST = 4,
    INPUT_DIR_NONE = 4,
};
// total size: 0x8
class ButtonMap {
    // Members
    int buttonType; // offset 0x0, size 0x4
    int buttonCombo; // offset 0x4, size 0x4
};
// total size: 0x208
class zPlayerInputHuman : public zPlayerInput {
    // Members
    class Time tapHoldBaseTime; // offset 0x8, size 0x8
    unsigned int tapHoldTimerStart; // offset 0x10, size 0x4
    class Time timerBadIR; // offset 0x18, size 0x8
    class xVec2 prevIR; // offset 0x20, size 0x8
    float prevIntensity; // offset 0x28, size 0x4
    enum PadType curPadType; // offset 0x2C, size 0x4
    class Pad * curPad; // offset 0x30, size 0x4
    unsigned int curPort; // offset 0x34, size 0x4
    bool isDisabled; // offset 0x38, size 0x1
    bool disabledTypes[4]; // offset 0x39, size 0x4
    class xVec3 lastAcc; // offset 0x40, size 0xC
    class xVec3 swingVec; // offset 0x4C, size 0xC
    float swingSpeedMax; // offset 0x58, size 0x4
    class xVec3 swingDir; // offset 0x5C, size 0xC
    bool wasSwinging; // offset 0x68, size 0x1
    bool wiiClassicControllerEnabled; // offset 0x69, size 0x1
    bool shouldEnableWiiClassicController; // offset 0x6A, size 0x1
    bool shouldEnableWiiMotionPlus; // offset 0x6B, size 0x1
    bool wiiMotionPlusExtension; // offset 0x6C, size 0x1
    class ShakeRecognition shakeRecognition[5][2]; // offset 0x70, size 0x190
    bool wiiRemoteConnected; // offset 0x200, size 0x1
    bool nunchukConnected; // offset 0x201, size 0x1
};
enum PadType {
    PADTYPE_DEBUG = 0,
    PADTYPE_MENU = 1,
    PADTYPE_GAME = 2,
    PADTYPE_MISC = 3,
    PADTYPE_LAST = 4,
};
// total size: 0x28
class ShakeRecognition {
    // Members
    bool shakeInProgress; // offset 0x0, size 0x1
    class Time prevShakeTime; // offset 0x8, size 0x8
    float prevShake; // offset 0x10, size 0x4
    class Time shakeStartTime; // offset 0x18, size 0x8
    unsigned int shakeCounter; // offset 0x20, size 0x4
};
enum Action {
    MENUACTION_ACTIVATE = 0,
    MENUACTION_CANCEL = 1,
    MENUACTION_UP = 2,
    MENUACTION_DOWN = 3,
    MENUACTION_LEFT = 4,
    MENUACTION_RIGHT = 5,
    GAMEACTION_ACCEPT = 6,
    GAMEACTION_CANCEL = 7,
    GAMEACTION_JUMP = 8,
    GAMEACTION_CONTEXT = 9,
    GAMEACTION_PAUSE = 10,
    GAMEACTION_LEFT = 11,
    GAMEACTION_RIGHT = 12,
    GAMEACTION_NAVIGATION = 13,
    GAMEACTION_ACTIVITY = 14,
    GAMEACTION_SWITCH_CHARACTER = 15,
    GAMEACTION_HINT = 16,
    GAMEACTION_SPECIAL_SOUND = 17,
    GAMEACTION_SPECIAL_SUMMON = 18,
    GAMEACTION_SPECIAL_TAUNT = 19,
    GAMEACTION_SPECIAL_MISC = 20,
    GAMEACTION_JOIN_DROP = 21,
    GAMEACTION_BIPLANE_BOOST = 22,
    GAMEACTION_BIPLANE_BRAKE = 23,
    GAMEACTION_BIPLANE_VIEW_REAR = 24,
    GAMEACTION_BIPLANE_SHOOT_PRIMARY = 25,
    GAMEACTION_BIPLANE_SHOOT_SECONDARY = 26,
    GAMEACTION_BIPLANE_SPECIAL_WEAPON = 27,
    GAMEACTION_BIPLANE_SPECIAL_MANEUVER = 28,
    GAMEACTION_SLINGSHOT = 29,
    GAMEACTION_HUD = 30,
    GAMEACTION_MM_FIRE = 31,
    GAMEACTION_MM_COMMAND = 32,
    GAMEACTION_MM_ACTION = 33,
    GAMEACTION_MM_CHANGE_WEAPON = 34,
    GAMEACTION_MM_LOCK_TARGET = 35,
    GAMEACTION_MM_BOOST = 36,
    GAMEACTION_MM_BRAKE = 37,
    GAMEACTION_MM_VIEW_REAR = 38,
    GAMEACTION_MM_ZOOM = 39,
    GAMEACTION_MM_MAP = 40,
    GAMEACTION_SB_PLANKTON_GRAB = 41,
    GAMEACTION_SB_PLANKTON_A = 42,
    GAMEACTION_SB_PLANKTON_B = 43,
    GAMEACTION_CAMERA_SHIFT = 44,
    GAMEACTION_DEBUG_CAMERA_SHIFT = 45,
    GAMEACTION_FLYCHEAT_SHIFT = 46,
    GAMEACTION_FLYCHEAT_CLASSIC = 47,
    GAMEACTION_FLYCHEATAI_CLASSIC = 48,
    GAMEACTION_FLYCHEAT_DOWN_CLASSIC = 49,
    GAMEACTION_FLYCHEAT_UP_CLASSIC = 50,
    GAMEACTION_FLYCHEAT_TURBO_CLASSIC = 51,
    GAMEACTION_FLYCHEAT = 52,
    GAMEACTION_FLYCHEATAI = 53,
    GAMEACTION_FLYCHEAT_DOWN = 54,
    GAMEACTION_FLYCHEAT_UP = 55,
    GAMEACTION_FLYCHEAT_TURBO = 56,
    DEBUGACTION_PAGELEFT = 57,
    DEBUGACTION_PAGERIGHT = 58,
    DEBUGACTION_CANCEL = 59,
    DEBUGACTION_A = 60,
    DEBUGACTION_B = 61,
    DEBUGACTION_C = 62,
    DEBUGACTION_D = 63,
    DEBUGACTION_L1 = 64,
    DEBUGACTION_R1 = 65,
    DEBUGACTION_L2 = 66,
    DEBUGACTION_R2 = 67,
    DEBUGACTION_SELECT = 68,
    DEBUGACTION_START = 69,
    DEBUGACTION_RESET_VALUE = 70,
    DEBUGACTION_RESET_SCENE = 71,
    DEBUGACTION_HELP = 72,
    DEBUGACTION_HIDE = 73,
    DEBUGACTION_SUPER_SPEED = 74,
    DEBUGACTION_EXPAND_ALL = 75,
    DEBUGACTION_LSTICK = 76,
    DEBUGACTION_RSTICK = 77,
    DEBUGACTION_UP = 78,
    DEBUGACTION_DOWN = 79,
    DEBUGACTION_LEFT = 80,
    DEBUGACTION_RIGHT = 81,
    DEBUGACTION_TOGGLEDEBUGCAM = 82,
    MISCACTION_DEBUGPADMODE = 83,
    MISCACTION_SKIPASSERT = 84,
    MISCACTION_A = 85,
    MISCACTION_B = 86,
    MISCACTION_C = 87,
    MISCACTION_D = 88,
    MISCACTION_L1 = 89,
    MISCACTION_R1 = 90,
    MISCACTION_L2 = 91,
    MISCACTION_R2 = 92,
    MISCACTION_LSTICK = 93,
    MISCACTION_RSTICK = 94,
    MISCACTION_SELECT = 95,
    MISCACTION_START = 96,
    MISCACTION_UP = 97,
    MISCACTION_DOWN = 98,
    MISCACTION_LEFT = 99,
    MISCACTION_RIGHT = 100,
    MISCACTION_HOME = 101,
    MISCACTION_CRASHDUMP = 102,
    MISCACTION_ALL = 103,
};
enum TapHoldStatus {
    TapHold_Undetermined = 0,
    TapHold_Tap = 1,
    TapHold_Hold = 2,
};
enum ePadTilt {
    ePadTilt_None = 0,
    ePadTilt_Up = 1,
    ePadTilt_Down = 2,
    ePadTilt_Left = 3,
    ePadTilt_Right = 4,
    END_ePadTilt_ENUM = 5,
};
enum ePadSwing {
    ePadSwing_None = 0,
    ePadSwing_Up = 1,
    ePadSwing_Down = 2,
    ePadSwing_Left = 3,
    ePadSwing_Right = 4,
    ePadSwing_Any = 5,
    END_ePadSwing_ENUM = 6,
};
enum ePad {
    ePad_Primary = 0,
    ePad_Secondary = 1,
    END_ePad_ENUM = 2,
};
enum ePadShake {
    ePadShake_None = 0,
    ePadShake_UpDown = 1,
    ePadShake_LeftRight = 2,
    ePadShake_ForwardBack = 3,
    ePadShake_Any = 4,
    END_ePadShake_ENUM = 5,
};
// total size: 0xEC
class zPlayerInputPadMgr {
    // Members
    unsigned int joinDropWait; // offset 0x0, size 0x4
    class PadData humanPads[4]; // offset 0x4, size 0x40
    class PadData aiPads[4]; // offset 0x44, size 0x40
    class zPlayerInput * curDebugPad[4]; // offset 0x84, size 0x10
    class Pad * acquiredPads[4]; // offset 0x94, size 0x10
    bool updatePadStatus; // offset 0xA4, size 0x1
    bool resortPlayersToo; // offset 0xA5, size 0x1
    class TRCMsgBox joinDropMsgBox; // offset 0xA8, size 0x34
    int joinDropBoxInUse; // offset 0xDC, size 0x4
    class zScript * joinTextBoxScript; // offset 0xE0, size 0x4
    class zUIFlashOnScreenText * joinTextBox; // offset 0xE4, size 0x4
    class zUIFlashOnScreenText * noAchTextBox; // offset 0xE8, size 0x4
};
// total size: 0x10
class PadData {
    // Members
    class zPlayerInput * pad; // offset 0x0, size 0x4
    class zPlayer * owner; // offset 0x4, size 0x4
    unsigned int gamePort; // offset 0x8, size 0x4
    unsigned int originalPort; // offset 0xC, size 0x4
};
// total size: 0xD8
class zUIFlashOnScreenText : public xOGEntity {
    // Members
    char * defaultText; // offset 0x3C, size 0x4
    class zQueue queue; // offset 0x40, size 0x88
    float timeRemaining; // offset 0xC8, size 0x4
    bool timerEnabled; // offset 0xCC, size 0x1
    bool boxVisible; // offset 0xCD, size 0x1
    class zUIFlashOnScreenTextAsset * asset; // offset 0xD0, size 0x4
    class zScaleform * textBoxPlayer; // offset 0xD4, size 0x4
};
// total size: 0x88
class zQueue {
    // Members
    int first; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    class TextMessage data[16]; // offset 0x8, size 0x80
};
// total size: 0x8
class TextMessage {
    // Members
    char * text; // offset 0x0, size 0x4
    float displayTime; // offset 0x4, size 0x4
};
// total size: 0x30
class zUIFlashOnScreenTextAsset : public xBaseScene {
    // Members
    float x; // offset 0x10, size 0x4
    float y; // offset 0x14, size 0x4
    float width; // offset 0x18, size 0x4
    float height; // offset 0x1C, size 0x4
    class Pointer32 Text; // offset 0x20, size 0x4
    class LinkAsset EventLinksNew; // offset 0x24, size 0x8
};
// total size: 0xC
class EventActionTextboxOn : public EventActionNew {
    // Members
    class Pointer32 Text; // offset 0x0, size 0x4
    float DisplayTime; // offset 0x4, size 0x4
    bool HighPriority; // offset 0x8, size 0x1
};
// total size: 0x50
class zPlayerLocationEntConnector : public xOGEntity {
    // Members
    class Player_Location_Ent_Connector * asset; // offset 0x3C, size 0x4
    int numWidgets; // offset 0x40, size 0x4
    bool firstUpdate; // offset 0x44, size 0x1
    class xEnt * * ents; // offset 0x48, size 0x4
    class xEnt * attachEnt; // offset 0x4C, size 0x4
};
// total size: 0x30
class Player_Location_Ent_Connector : public xBaseScene {
    // Members
    class __Widgets__ Widgets; // offset 0x10, size 0x8
    class uid Player; // offset 0x18, size 0x8
    bool WalleHack; // offset 0x20, size 0x1
    unsigned char pad1; // offset 0x21, size 0x1
    unsigned char pad2; // offset 0x22, size 0x1
    unsigned char pad3; // offset 0x23, size 0x1
    class LinkAsset EventLinksNew; // offset 0x24, size 0x8
};
// total size: 0x8
class __Widgets__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x18
class zPlayerResourcesSceneEntry {
    // Members
    unsigned int sceneID; // offset 0x0, size 0x4
    unsigned int playerTypeIdxs[4]; // offset 0x4, size 0x10
    int playerCount; // offset 0x14, size 0x4
};
enum positionDestination {
    CurrentPosition = 0,
    OriginalPosition = 1,
};
// total size: 0x18
class zPOWManager : public zModule {};
// total size: 0x40
class zPOWObject : public xOGEntity {
    // Members
    class zPOWObjectAsset * asset; // offset 0x3C, size 0x4
};
// total size: 0x58
class ProjectileCollisionListener : public EntCollisionListener {
    // Members
    float dampeningFactor; // offset 0x50, size 0x4
    bool collisionFrameDampeningProcessed : 1; // offset 0x54, size 0x1, bit offset 0
    bool collisionFrameHitProcessed : 1; // offset 0x54, size 0x1, bit offset 1
    bool collisionFrameRibbonProcessed : 1; // offset 0x54, size 0x1, bit offset 2
    unsigned char pad : 5; // offset 0x54, size 0x1, bit offset 3
};
// total size: 0x54
class zProjectileHavokCreateInfo {
    // Members
    unsigned int collisionLayer; // offset 0x0, size 0x4
    class ModelInstanceAsset * projectileModel; // offset 0x4, size 0x4
    class xVec3 launchVector; // offset 0x8, size 0xC
    class xMat4x3 initialTransform; // offset 0x14, size 0x40
};
// total size: 0x18
class HitByProjectile : public EventActionHit {};
// total size: 0x1A0
class zProjectileUPPlayerThrowable : public zProjectile {
    // Members
    class zPlayer * player; // offset 0x188, size 0x4
    unsigned int bone; // offset 0x18C, size 0x4
    class xVec3 boneOffset; // offset 0x190, size 0xC
};
// total size: 0x3C
class zProjectileManager : public zModule {
    // Members
    unsigned int nextProjectileID; // offset 0x18, size 0x4
    class zProjectile * projectiles[8]; // offset 0x1C, size 0x20
};
// total size: 0x50
class ProjectileSpawner : public xBaseScene {
    // Members
    class vec3 SpawnPosition; // offset 0x10, size 0xC
    class Rotation3 LaunchVector; // offset 0x1C, size 0xC
    float ProjectileVelocity; // offset 0x28, size 0x4
    float SpawnRate; // offset 0x2C, size 0x4
    unsigned int MaxNumActiveProjectiles; // offset 0x30, size 0x4
    class uid ProjectileAsset; // offset 0x38, size 0x8
    bool DefaultOn; // offset 0x40, size 0x1
    class uid VFXSpawn; // offset 0x48, size 0x8
};
// total size: 0x68
class zProjectileSpawner : public xOGEntity {
    // Members
    bool isOn; // offset 0x3C, size 0x1
    class ProjectileSpawner * spawnerAsset; // offset 0x40, size 0x4
    class EntityHandleBase * projectileAssetHandle; // offset 0x44, size 0x4
    class hkpSimpleShapePhantom * spawnPhantom; // offset 0x48, size 0x4
    unsigned int numSpawnedActive; // offset 0x4C, size 0x4
    unsigned int numQueued; // offset 0x50, size 0x4
    float elapsedTime; // offset 0x54, size 0x4
    class xVec3 launchVector; // offset 0x58, size 0xC
};
// total size: 0x160
class hkpSimpleShapePhantom : public hkpShapePhantom {
    // Members
    class hkArray m_collisionDetails; // offset 0x150, size 0xC
};
// total size: 0xC
class hkArray {
    // Members
    class CollisionDetail * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x4
class CollisionDetail {
    // Members
    class hkpCollidable * m_collidable; // offset 0x0, size 0x4
};
enum @enum {
    ePushDir_None = 0,
    ePushDir_CW = 1,
    ePushDir_CCW = 2,
};
// total size: 0x20
class zRandomModelListAsset : public xBaseAsset {
    // Members
    class __ModelList__ ModelList; // offset 0x10, size 0x8
    class LinkAsset EventLinksNew; // offset 0x18, size 0x8
};
// total size: 0x8
class __ModelList__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x48
class zRandomModelList : public xOGEntity {
    // Members
    class zRandomModelListAsset * asset; // offset 0x3C, size 0x4
    float totalWeight; // offset 0x40, size 0x4
};
// total size: 0x20
class Reference : public xBaseScene {
    // Members
    class uid initial; // offset 0x10, size 0x8
    class LinkAsset EventLinksNew; // offset 0x18, size 0x8
};
// total size: 0x40
class zReference : public xOGEntity {
    // Members
    class xBase * current; // offset 0x3C, size 0x4
};
// total size: 0xC88
class zRippleManager {
    // Members
    float rippleLifeTime; // offset 0x0, size 0x4
    class zFXSpawn * fxAssetNormalRipple; // offset 0x4, size 0x4
    class RippleTableElement rippleTable[100]; // offset 0x8, size 0xC80
};
// total size: 0x38
class zRunEntLaserLOSChecker : public hkpRayHitCollector {
    // Members
    class xBase * ignoreStart; // offset 0x8, size 0x4
    int ignoreSize; // offset 0xC, size 0x4
    class xBase * ignoreList[4]; // offset 0x10, size 0x10
    class xBase * hitObj; // offset 0x20, size 0x4
    bool hitIt; // offset 0x24, size 0x1
    float hitFraction; // offset 0x28, size 0x4
    class xVec3 hitNormal; // offset 0x2C, size 0xC
};
// total size: 0x50
class RussellDanglePoint : public InteractionUpWithIcons {
    // Members
    bool alive; // offset 0x1C, size 0x1
    class vec3 Position; // offset 0x20, size 0xC
    class Rotation3 Rotation; // offset 0x2C, size 0xC
    class uid CarlLandingPosition; // offset 0x38, size 0x8
    class uid RussellLandingPosition; // offset 0x40, size 0x8
    class LinkAsset EventLinksNew; // offset 0x48, size 0x8
};
// total size: 0xC8
class zRussellDanglePoint : public zInteractionUP {
    // Members
    bool alive; // offset 0x50, size 0x1
    class xVec3 pos; // offset 0x54, size 0xC
    class xVec3 dir; // offset 0x60, size 0xC
    class xVec3 carlLandingPos; // offset 0x6C, size 0xC
    class xVec3 russellLandingPos; // offset 0x78, size 0xC
    class RussellDanglePoint * asset; // offset 0x84, size 0x4
    float cooldownTime; // offset 0x88, size 0x4
    class zInWorldIcon iconRussell; // offset 0x8C, size 0x30
    bool iconEnabled; // offset 0xBC, size 0x1
    bool iconEventEnabled; // offset 0xBD, size 0x1
    enum @enum dangleState; // offset 0xC0, size 0x4
};
enum @enum {
    eDangleEmpty = 0,
    eDangleRussell = 1,
    eDangleCarlAndRussell = 2,
};
// total size: 0x48
class zRussellPlayerLedgeShimmy : public zUPPlayerInterAction {
    // Members
    class zAnimPackage * currentPackage; // offset 0x14, size 0x4
    bool russellReady; // offset 0x18, size 0x1
    bool shouldLoseBalance; // offset 0x19, size 0x1
    unsigned int numButtonPresses; // offset 0x1C, size 0x4
    float loseBalanceTime; // offset 0x20, size 0x4
    float balanceDistance; // offset 0x24, size 0x4
    float shimmyBalancedTime; // offset 0x28, size 0x4
    enum @enum moveDir; // offset 0x2C, size 0x4
    class zButtonMashIcon masher; // offset 0x30, size 0x18
};
enum @enum {
    eShimmyMove_None = 0,
    eShimmyMove_Left = 1,
    eShimmyMove_Right = 2,
};
// total size: 0xA8
class zRussellPlayerIdle : public zUPHumanPlayer_Idle {};
// total size: 0x1C
class zRussellPlayerJump : public zUPHumanPlayer_Jump {};
// total size: 0x54
class zRussellPlayerAIJump : public zUPHumanPlayer_AIJump {};
// total size: 0x14
class zRussellPlayerFall : public zUPHumanPlayer_Fall {};
// total size: 0x10
class zRussellPlayerWalk : public zUPHumanPlayer_Walk {};
// total size: 0x10
class zRussellPlayerRun : public zUPHumanPlayer_Run {};
// total size: 0x10
class zRussellPlayerLand : public zUPHumanPlayer_Land {};
// total size: 0x3C
class zPlayerLeverLaunchUP : public zUPPlayerAction, public RagdollCallbackListener {
    // Members
    class xParabola path; // offset 0x14, size 0x24
    float timePassed; // offset 0x38, size 0x4
};
// total size: 0x10
class zRussellPlayerHit : public zUPHumanPlayerHit {};
// total size: 0x10
class zRussellPlayerHitLaunch : public zUPHumanPlayerHitLaunch {};
// total size: 0x1C
class zRussellPlayerCombatFinisher : public zUPHumanPlayerCombatFinisher {
    // Members
    unsigned int projectileID; // offset 0x14, size 0x4
    bool thrown; // offset 0x18, size 0x1
};
// total size: 0x14
class zRussellPlayerCaneUp : public zUPPlayerComboAction {};
// total size: 0x68
class zRussellPlayerKevinSwing : public zUPPlayerComboAction {
    // Members
    bool waitForLand; // offset 0x14, size 0x1
    bool attached; // offset 0x15, size 0x1
    class xVec3 target; // offset 0x18, size 0xC
    class xParabola path; // offset 0x24, size 0x24
    float timePassed; // offset 0x48, size 0x4
    bool releaseRussell; // offset 0x4C, size 0x1
    class zButtonMashIcon masher; // offset 0x50, size 0x18
};
// total size: 0x34
class zRussellPlayerRopeCut : public zUPPlayerInterAction {
    // Members
    int cutLoops; // offset 0x14, size 0x4
    int numPressed; // offset 0x18, size 0x4
    class zButtonMashIcon masher; // offset 0x1C, size 0x18
};
// total size: 0x18
class zRussellPlayerRussellRope : public zUPPlayerInterAction {
    // Members
    bool bAIFollowRestore; // offset 0x14, size 0x1
};
// total size: 0x10
class zRussellPlayerBugleIn : public zUPPlayerAction {};
// total size: 0x10
class zRussellPlayerBugleOut : public zUPPlayerAction {};
// total size: 0x10
class zRussellPlayerBugleIdle : public zUPPlayerAction {};
// total size: 0x10
class zRussellPlayerBugleWalk : public zUPPlayerAction {};
// total size: 0x1C
class zRussellPlayerBugleJump : public zPlayerJumpUP {};
// total size: 0x10
class zRussellPlayerBugleFall : public zUPPlayerAction {};
// total size: 0x10
class zRussellPlayerBugleLand : public zUPPlayerAction {};
// total size: 0x10
class zRussellPlayerNetIn : public zUPPlayerAction {};
// total size: 0x10
class zRussellPlayerNetOut : public zUPPlayerAction {};
// total size: 0x10
class zRussellPlayerNetIdle : public zUPPlayerAction {};
// total size: 0x10
class zRussellPlayerNetRun : public zUPPlayerAction {};
// total size: 0x1C
class zRussellPlayerNetJump : public zPlayerJumpUP {};
// total size: 0x10
class zRussellPlayerNetFall : public zUPPlayerAction {};
// total size: 0x10
class zRussellPlayerNetLand : public zUPPlayerAction {};
// total size: 0x14
class zRussellPlayerNetSwing : public zUPPlayerAction {
    // Members
    bool swingRight; // offset 0x10, size 0x1
};
// total size: 0xC
class zRussellPlayerNetSwing_CatchNPCWithinDistance_CB {
    // Members
    class xVec3 * pos; // offset 0x0, size 0x4
    float distance; // offset 0x4, size 0x4
    class zPlayer * player; // offset 0x8, size 0x4
};
// total size: 0xC
class zRussellPlayerNetSwing_CatchWithinDistance_CB {
    // Members
    class xVec3 * pos; // offset 0x0, size 0x4
    float distance; // offset 0x4, size 0x4
    class zPlayer * player; // offset 0x8, size 0x4
};
// total size: 0x10
class zRussellPlayerCanteen : public zUPPlayerAction {};
// total size: 0x60
class zRussellRopeCastCollector : public hkpClosestRayHitCollector {};
// total size: 0x60
class hkpClosestRayHitCollector : public hkpRayHitCollector {
    // Members
    class hkpWorldRayCastOutput m_rayHit; // offset 0x10, size 0x50
};
enum eSceneInitState {
    eSceneInit = 0,
    eLoadingPlayer = 1,
    eLoadingScenes = 2,
    eInitObjects = 3,
};
// total size: 0x20
class zSoundProgAsset {
    // Members
    class Event * m_pProgAssetEvent; // offset 0x4, size 0x4
    class FMOD_VECTOR m_pos; // offset 0x8, size 0xC
    char * m_pStrProject; // offset 0x14, size 0x4
    char * m_pStrGroup; // offset 0x18, size 0x4
    char * m_pStrEvent; // offset 0x1C, size 0x4
};
// total size: 0x18
class zSoundMaskAsset : public xBaseScene {
    // Members
    class __polygons__ polygons; // offset 0x10, size 0x8
};
// total size: 0x8
class __polygons__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class xUpdateCull_CollectGroup_CB {
    // Members
    class xGroup * * grpList; // offset 0x0, size 0x4
    class xGroup * * grpCurr; // offset 0x4, size 0x4
};
// total size: 0x4
class xUpdateCull_CountGroup_CB {
    // Members
    unsigned int & numGroups; // offset 0x0, size 0x4
};
// total size: 0xC
class xUpdateCull_CollectEnt_CB {
    // Members
    class xOGEntity * * list; // offset 0x0, size 0x4
    int count; // offset 0x4, size 0x4
    int allocCount; // offset 0x8, size 0x4
};
enum State {
    Off = 0,
    FadingToBlack = 1,
    Black = 2,
    FadingToGame = 3,
};
// total size: 0x88
class DependencyEntry {
    // Members
    unsigned int sceneID; // offset 0x0, size 0x4
    class SceneRecord baseScene; // offset 0x4, size 0x84
};
// total size: 0x84
class SceneRecord {
    // Members
    unsigned int sceneID; // offset 0x0, size 0x4
    char sceneLayer[128]; // offset 0x4, size 0x80
};
// total size: 0x4
class EventActionTimer : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
};
// total size: 0xF8
class zFrag : public xBase {
    // Members
    class EntityHandleBase dummyHandle; // offset 0x38, size 0x48
    class zFragInfo info; // offset 0x80, size 0x58
    float alpha; // offset 0xD8, size 0x4
    float alivetime; // offset 0xDC, size 0x4
    float lifetime; // offset 0xE0, size 0x4
    float intraFragCollisionDelay; // offset 0xE4, size 0x4
    class HavokSimObj havokSimObj; // offset 0xE8, size 0x4
    class zFXSpawn * owner; // offset 0xEC, size 0x4
    class zFrag * prev; // offset 0xF0, size 0x4
    class zFrag * next; // offset 0xF4, size 0x4
};
// total size: 0x58
class zFragInfo {
    // Members
    class zFragGroup group; // offset 0x0, size 0x54
    class zFragShrapnel shrapnel; // offset 0x0, size 0x4
    class zFragProjectile projectile; // offset 0x0, size 0x20
};
// total size: 0x54
class zFragGroup {
    // Members
    class zFrag * list[21]; // offset 0x0, size 0x54
};
// total size: 0x4
class zFragShrapnel {
    // Members
    class zFragShrapnelAsset * fasset; // offset 0x0, size 0x4
};
// total size: 0x18
class zFragShrapnelAsset : public zFragAsset {
    // Members
    unsigned long long shrapnelID; // offset 0x8, size 0x8
    class ShrapnelAssetDef * shrapAsset; // offset 0x10, size 0x4
};
// total size: 0x8
class zFragAsset {
    // Members
    float Lifetime; // offset 0x0, size 0x4
    float Delay; // offset 0x4, size 0x4
};
// total size: 0x20
class zFragProjectile {
    // Members
    class zFXSpawn * spawnPt; // offset 0x0, size 0x4
    class Projectile * fasset; // offset 0x4, size 0x4
    class xOGModel * model; // offset 0x8, size 0x4
    class ModelInstanceAsset * modelInstanceAsset; // offset 0xC, size 0x4
    class zSoundSourcesPhysics * soundSourcesPhysics; // offset 0x10, size 0x4
    float alpha; // offset 0x14, size 0x4
    unsigned long long shrapnelID; // offset 0x18, size 0x8
};
// total size: 0x128
class Projectile : public zFragAsset {
    // Members
    class uid ModelInstanceReference; // offset 0x8, size 0x8
    class PhysicsDataStruct PhysicsData; // offset 0x10, size 0x54
    bool HasCollision; // offset 0x64, size 0x1
    int MaxBounces; // offset 0x68, size 0x4
    class zFragBoneRandomized LaunchPos; // offset 0x6C, size 0x14
    unsigned int ProjectileFlags; // offset 0x80, size 0x4
    class __Velocity__ Velocity; // offset 0x84, size 0x14
    class __VelocityRange__ VelocityRange; // offset 0x98, size 0x10
    class __AngularSpeed__ AngularSpeed; // offset 0xA8, size 0x14
    class __AngularSpeedRange__ AngularSpeedRange; // offset 0xBC, size 0x10
    class __InitialRotation__ InitialRotation; // offset 0xCC, size 0x10
    int child; // offset 0xDC, size 0x4
    float minScale; // offset 0xE0, size 0x4
    float maxScale; // offset 0xE4, size 0x4
    float maxVelocity; // offset 0xE8, size 0x4
    class zFragLightInfo lightInfo; // offset 0xEC, size 0x20
    class uid fxSpawn; // offset 0x110, size 0x8
    class SoundBankSource Sound; // offset 0x118, size 0xC
};
// total size: 0x14
class zFragBoneRandomized : public zFragBone {
    // Members
    float rand_radius; // offset 0x10, size 0x4
};
// total size: 0x10
class zFragBone {
    // Members
    int Index; // offset 0x0, size 0x4
    class vec3 Vector; // offset 0x4, size 0xC
};
// total size: 0x14
class __Velocity__ {
    // Members
    enum eFieldEnable type; // offset 0x0, size 0x4
    class @class u; // offset 0x4, size 0x10
};
enum eFieldEnable {
    Enabled = 0,
    Disabled = 1,
    END_eFieldEnableENUM = 2,
};
// total size: 0x10
class @class {
    // Members
    class zFragBoneVelocity _Enabled; // offset 0x0, size 0x10
    class dummy _Disabled; // offset 0x0, size 0x1
};
// total size: 0x10
class zFragBoneVelocity : public zFragBone {};
// total size: 0x1
class dummy {};
// total size: 0x10
class __VelocityRange__ {
    // Members
    enum eFieldEnable type; // offset 0x0, size 0x4
    class @class u; // offset 0x4, size 0xC
};
// total size: 0xC
class @class {
    // Members
    class vec3 _Enabled; // offset 0x0, size 0xC
    class dummy _Disabled; // offset 0x0, size 0x1
};
// total size: 0x14
class __AngularSpeed__ {
    // Members
    enum eFieldEnable type; // offset 0x0, size 0x4
    class @class u; // offset 0x4, size 0x10
};
// total size: 0x10
class @class {
    // Members
    class zFragBoneRotationVelocity _Enabled; // offset 0x0, size 0x10
    class dummy _Disabled; // offset 0x0, size 0x1
};
// total size: 0x10
class zFragBoneRotationVelocity : public zFragBone {};
// total size: 0x10
class __AngularSpeedRange__ {
    // Members
    enum eFieldEnable type; // offset 0x0, size 0x4
    class @class u; // offset 0x4, size 0xC
};
// total size: 0x10
class __InitialRotation__ {
    // Members
    enum eFieldEnable type; // offset 0x0, size 0x4
    class @class u; // offset 0x4, size 0xC
};
// total size: 0x20
class zFragLightInfo {
    // Members
    class FloatColorRGBA lightColor; // offset 0x0, size 0x10
    float radius; // offset 0x10, size 0x4
    float fadeUpTime; // offset 0x14, size 0x4
    float fadeDownTime; // offset 0x18, size 0x4
    float duration; // offset 0x1C, size 0x4
};
// total size: 0x44
class zPlayerSlide : public zUPPlayerAction {
    // Members
    float time; // offset 0x10, size 0x4
    float y; // offset 0x14, size 0x4
    float ForwardSpeed; // offset 0x18, size 0x4
    float LeftRightSpeed; // offset 0x1C, size 0x4
    float ForwardAcceleration; // offset 0x20, size 0x4
    float LeftRightAcceleration; // offset 0x24, size 0x4
    float CurrentSpeedMult; // offset 0x28, size 0x4
    float SlowDownMeter; // offset 0x2C, size 0x4
    float RestoreLeanValue; // offset 0x30, size 0x4
    bool PlayersTakeHit; // offset 0x34, size 0x1
    float WaitingButSlidingTimer; // offset 0x38, size 0x4
    int lastStickPos; // offset 0x3C, size 0x4
    float actualLeftRightSpeed; // offset 0x40, size 0x4
};
// total size: 0x4
class EventSystem {};
// total size: 0x1
class System {};
// total size: 0x48
class FileHandleData : public DVDFileInfo {
    // Members
    long curPos; // offset 0x3C, size 0x4
    long lastResult; // offset 0x40, size 0x4
    bool done; // offset 0x44, size 0x1
};
// total size: 0x3C
class DVDFileInfo {
    // Members
    class DVDCommandBlock cb; // offset 0x0, size 0x30
    unsigned long startAddr; // offset 0x30, size 0x4
    unsigned long length; // offset 0x34, size 0x4
    void (* callback)(long result, class DVDFileInfo * fileInfo); // offset 0x38, size 0x4
};
// total size: 0x30
class DVDCommandBlock {
    // Members
    class DVDCommandBlock * next; // offset 0x0, size 0x4
    class DVDCommandBlock * prev; // offset 0x4, size 0x4
    unsigned long command; // offset 0x8, size 0x4
    long state; // offset 0xC, size 0x4
    unsigned long offset; // offset 0x10, size 0x4
    unsigned long length; // offset 0x14, size 0x4
    void * addr; // offset 0x18, size 0x4
    unsigned long currTransferSize; // offset 0x1C, size 0x4
    unsigned long transferredSize; // offset 0x20, size 0x4
    class DVDDiskID * id; // offset 0x24, size 0x4
    void (* callback)(long result, class DVDCommandBlock * block); // offset 0x28, size 0x4
    void * userData; // offset 0x2C, size 0x4
};
// total size: 0x20
class DVDDiskID {
    // Members
    char gameName[4]; // offset 0x0, size 0x4
    char company[2]; // offset 0x4, size 0x2
    unsigned char diskNumber; // offset 0x6, size 0x1
    unsigned char gameVersion; // offset 0x7, size 0x1
    unsigned char streaming; // offset 0x8, size 0x1
    unsigned char streamingBufSize; // offset 0x9, size 0x1
    unsigned char padding[14]; // offset 0xA, size 0xE
    unsigned long rvlMagic; // offset 0x18, size 0x4
    unsigned long gcMagic; // offset 0x1C, size 0x4
};
// total size: 0x4
class EventGroup {};
// total size: 0x4
class EventProject {};
// total size: 0x10
class @class {
    // Members
    unsigned long long aid; // offset 0x0, size 0x8
    char * name; // offset 0x8, size 0x4
};
// total size: 0x1
class SoundBankWrap {};
// total size: 0x2008
class zQueue {
    // Members
    int first; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    class zSoundAsset * data[2048]; // offset 0x8, size 0x2000
};
// total size: 0x40
class Thread {
    // Members
    long priority; // offset 0x0, size 0x4
    void * stackBase; // offset 0x4, size 0x4
    unsigned int startStackSize; // offset 0x8, size 0x4
    class OSThread * id; // offset 0xC, size 0x4
    class Runnable * runee; // offset 0x10, size 0x4
    char * name; // offset 0x14, size 0x4
    class SyncEvent stopEvent; // offset 0x18, size 0x24
    int extraStackSize; // offset 0x3C, size 0x4
};
// total size: 0x4
class Runnable {};
// total size: 0x24
class SyncEvent {
    // Members
    class OSCond cond; // offset 0x0, size 0x8
    class OSMutex mutex; // offset 0x8, size 0x18
    bool signalled; // offset 0x20, size 0x1
};
// total size: 0x8
class OSCond {
    // Members
    class OSThreadQueue queue; // offset 0x0, size 0x8
};
// total size: 0x4
class zSoundAssetPreloadRunnable : public Runnable {};
// total size: 0x1
class EventParameter {};
// total size: 0x30
class FMOD_EVENT_INFO {
    // Members
    int memoryused; // offset 0x0, size 0x4
    int positionms; // offset 0x4, size 0x4
    int lengthms; // offset 0x8, size 0x4
    int channelsplaying; // offset 0xC, size 0x4
    int instancesactive; // offset 0x10, size 0x4
    int maxwavebanks; // offset 0x14, size 0x4
    class FMOD_EVENT_WAVEBANKINFO * wavebankinfo; // offset 0x18, size 0x4
    unsigned int projectid; // offset 0x1C, size 0x4
    unsigned int systemid; // offset 0x20, size 0x4
    float audibility; // offset 0x24, size 0x4
    int numinstances; // offset 0x28, size 0x4
    class FMOD_EVENT * * instances; // offset 0x2C, size 0x4
};
// total size: 0x120
class FMOD_EVENT_WAVEBANKINFO {
    // Members
    char name[256]; // offset 0x0, size 0x100
    int streamrefcnt; // offset 0x100, size 0x4
    int samplerefcnt; // offset 0x104, size 0x4
    int numstreams; // offset 0x108, size 0x4
    int maxstreams; // offset 0x10C, size 0x4
    int streamsinuse; // offset 0x110, size 0x4
    unsigned int streammemory; // offset 0x114, size 0x4
    unsigned int samplememory; // offset 0x118, size 0x4
    int type; // offset 0x11C, size 0x4
};
// total size: 0x7C
class FMOD_REVERB_PROPERTIES {
    // Members
    int Instance; // offset 0x0, size 0x4
    int Environment; // offset 0x4, size 0x4
    float EnvSize; // offset 0x8, size 0x4
    float EnvDiffusion; // offset 0xC, size 0x4
    int Room; // offset 0x10, size 0x4
    int RoomHF; // offset 0x14, size 0x4
    int RoomLF; // offset 0x18, size 0x4
    float DecayTime; // offset 0x1C, size 0x4
    float DecayHFRatio; // offset 0x20, size 0x4
    float DecayLFRatio; // offset 0x24, size 0x4
    int Reflections; // offset 0x28, size 0x4
    float ReflectionsDelay; // offset 0x2C, size 0x4
    float ReflectionsPan[3]; // offset 0x30, size 0xC
    int Reverb; // offset 0x3C, size 0x4
    float ReverbDelay; // offset 0x40, size 0x4
    float ReverbPan[3]; // offset 0x44, size 0xC
    float EchoTime; // offset 0x50, size 0x4
    float EchoDepth; // offset 0x54, size 0x4
    float ModulationTime; // offset 0x58, size 0x4
    float ModulationDepth; // offset 0x5C, size 0x4
    float AirAbsorptionHF; // offset 0x60, size 0x4
    float HFReference; // offset 0x64, size 0x4
    float LFReference; // offset 0x68, size 0x4
    float RoomRolloffFactor; // offset 0x6C, size 0x4
    float Diffusion; // offset 0x70, size 0x4
    float Density; // offset 0x74, size 0x4
    unsigned int Flags; // offset 0x78, size 0x4
};
// total size: 0x940
class ReverbManager {
    // Members
    class FMOD_REVERB_PROPERTIES m_reverbProperties[16]; // offset 0x0, size 0x7C0
    class FMOD_REVERB_PROPERTIES m_reverbPropertiesAmbient; // offset 0x7C0, size 0x7C
    class FMOD_REVERB_PROPERTIES m_reverbPropertiesAmbientFadeFrom; // offset 0x83C, size 0x7C
    class FMOD_REVERB_PROPERTIES m_reverbPropertiesAmbientFadeTo; // offset 0x8B8, size 0x7C
    unsigned int m_iReverbPropertiesLoaded; // offset 0x934, size 0x4
    float m_timeFadeRemaining; // offset 0x938, size 0x4
    float m_timeFadeTotalInv; // offset 0x93C, size 0x4
};
// total size: 0x108
class zQueue {
    // Members
    int first; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    class zSoundSourcesPhysics * data[64]; // offset 0x8, size 0x100
};
// total size: 0x18
class DynamicParam {
    // Members
    class zSoundProgAsset * m_pParent; // offset 0x4, size 0x4
    class EventParameter * m_pParam; // offset 0x8, size 0x4
    float m_min; // offset 0xC, size 0x4
    float m_max; // offset 0x10, size 0x4
    float m_value; // offset 0x14, size 0x4
};
// total size: 0x48
class zSoundsNamed : public xOGEntity {
    // Members
    class zSoundsNamedAsset * asset; // offset 0x3C, size 0x4
    class zSoundNamed * m_pSounds; // offset 0x40, size 0x4
    unsigned int m_soundsQuantity; // offset 0x44, size 0x4
};
// total size: 0xA0
class zSoundNamed {
    // Members
    class SoundNamed m_asset; // offset 0x0, size 0x10
    class zSoundAsset m_soundAsset; // offset 0x10, size 0x90
};
// total size: 0x10
class SoundNamed {
    // Members
    class Pointer32 Name; // offset 0x0, size 0x4
    class SoundBankSource BankSource; // offset 0x4, size 0xC
};
// total size: 0x5C
class zSoundWalleEngine : public zSoundProgAsset {
    // Members
    class DynamicParamRPM m_dynamicParamRpm; // offset 0x20, size 0x20
    class DynamicParamLoad m_dynamicParamLoad; // offset 0x40, size 0x18
    bool m_bIsSoundRunning; // offset 0x58, size 0x1
    bool active; // offset 0x59, size 0x1
};
// total size: 0x20
class DynamicParamRPM : public DynamicParam {
    // Members
    float m_accel; // offset 0x18, size 0x4
    float m_deAccel; // offset 0x1C, size 0x4
};
// total size: 0x18
class DynamicParamLoad : public DynamicParam {};
// total size: 0x48
class zSoundWiimoteSpeaker : public xOGEntity {
    // Members
    class zSoundWiimoteSpeakerAsset * asset; // offset 0x3C, size 0x4
    short * rawSoundData; // offset 0x40, size 0x4
    int soundSize; // offset 0x44, size 0x4
};
// total size: 0x18
class zSoundWiimoteSpeakerAsset : public xBaseScene {
    // Members
    class uid SoundData; // offset 0x10, size 0x8
};
// total size: 0xE0
class zWiimoteSpeakerController {
    // Members
    class WiimoteSpeakerInfo speakerInfo[4]; // offset 0x0, size 0xB0
    class OSAlarm updateAlarm; // offset 0xB0, size 0x30
};
// total size: 0x2C
class WiimoteSpeakerInfo {
    // Members
    class WENCInfo wencinfo; // offset 0x0, size 0x20
    bool first; // offset 0x20, size 0x1
    short * SoundToPlay; // offset 0x24, size 0x4
    int SoundLength; // offset 0x28, size 0x4
};
// total size: 0x20
class WENCInfo {
    // Members
    unsigned char data[32]; // offset 0x0, size 0x20
};
// total size: 0x30
class OSAlarm {
    // Members
    void (* handler)(class OSAlarm * alarm, class OSContext * context); // offset 0x0, size 0x4
    unsigned long tag; // offset 0x4, size 0x4
    long long fire; // offset 0x8, size 0x8
    class OSAlarm * prev; // offset 0x10, size 0x4
    class OSAlarm * next; // offset 0x14, size 0x4
    long long period; // offset 0x18, size 0x8
    long long start; // offset 0x20, size 0x8
    void * userData; // offset 0x28, size 0x4
};
// total size: 0x1
class zUpWiimoteSoundHelper {};
enum eUpWiimoteSoundName {
    eBalloonBlow = 0,
    eBottledWater = 1,
    eBugle = 2,
    eBugCatch = 3,
    eBugSplat = 4,
    eButtonAccept = 5,
    eButtonDeny = 6,
    eButtonOff = 7,
    eButtonOn = 8,
    eCharacterSwitch = 9,
    eCrank = 10,
    eHearingAid = 11,
    eItemDeploy = 12,
    eItemPU = 13,
    ePlaneLowhealth = 14,
    ePry = 15,
    eRopeCut = 16,
    eSwipe = 17,
    eUpWiimoteSoundCount = 18,
};
// total size: 0x1
class Geometry {};
// total size: 0x188
class zInteractiveMusic : public xOGEntity {
    // Members
    bool (zInteractiveMusic::* ConditionFunc[10])(void * this, void * this); // offset 0x3C, size 0x78
    float CurrentValue[10]; // offset 0xB4, size 0x28
    class zInteractiveMusicAsset * asset; // offset 0xDC, size 0x4
    class zSoundAsset music; // offset 0xE0, size 0x90
    class ZoneMarker * * zone; // offset 0x170, size 0x4
    class ZoneMarker * playerInZone[4]; // offset 0x174, size 0x10
    int zoneCount; // offset 0x184, size 0x4
};
// total size: 0x30
class zInteractiveMusicAsset : public xBaseScene {
    // Members
    class SoundBankSource Music; // offset 0x10, size 0xC
    class __Tracks__ Tracks; // offset 0x1C, size 0x8
    class LinkAsset EventLinksNew; // offset 0x24, size 0x8
};
// total size: 0x8
class __Tracks__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x50
class ZoneMarker {
    // Members
    class @class uShape; // offset 0x0, size 0x30
    unsigned int Shape; // offset 0x30, size 0x4
    class myUid id; // offset 0x38, size 0x8
    class __ZoneType__ ZoneType; // offset 0x40, size 0x8
};
// total size: 0x30
class @class {
    // Members
    class sBox Box; // offset 0x0, size 0x30
    class sSphere Sphere; // offset 0x0, size 0x10
};
// total size: 0x30
class sBox {
    // Members
    class Matrix43POD Transform; // offset 0x0, size 0x30
};
// total size: 0x10
class sSphere {
    // Members
    class vec3 Center; // offset 0x0, size 0xC
    float Radius; // offset 0xC, size 0x4
};
// total size: 0x8
class __ZoneType__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x68
class Cylinder {
    // Members
    unsigned int rows; // offset 0x0, size 0x4
    unsigned int cols; // offset 0x4, size 0x4
    float radius; // offset 0x8, size 0x4
    float dradius; // offset 0xC, size 0x4
    float width; // offset 0x10, size 0x4
    unsigned int frequency; // offset 0x14, size 0x4
    class uid modelUID; // offset 0x18, size 0x8
    class FloatColorRGBA color; // offset 0x20, size 0x10
    class FloatColorRGBA colorPt2; // offset 0x30, size 0x10
    float flicker; // offset 0x40, size 0x4
    float scale; // offset 0x44, size 0x4
    float scaleVariation; // offset 0x48, size 0x4
    float timerIdle; // offset 0x4C, size 0x4
    float timerIdleVariation; // offset 0x50, size 0x4
    int lockFront; // offset 0x54, size 0x4
    int lockBack; // offset 0x58, size 0x4
    int reference; // offset 0x5C, size 0x4
    unsigned int flags; // offset 0x60, size 0x4
};
// total size: 0x78
class MappedLaser : public MappedElectricity {};
// total size: 0x6C
class ElectricSpotLight : public ElectricCylinder {
    // Members
    class ImmediatePrototypeEntity * iStencilModelFront; // offset 0x60, size 0x4
    class ImmediatePrototypeEntity * iStencilModelBack; // offset 0x64, size 0x4
    class ImmediatePrototypeEntity * iStencilModelFinal; // offset 0x68, size 0x4
};
// total size: 0x4
class EventActionToggle : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
};
// total size: 0x10
class EventAttachArcPoint : public EventActionNew {
    // Members
    unsigned int param0; // offset 0x0, size 0x4
    class uid paramWidgetAssetID; // offset 0x8, size 0x8
};
// total size: 0x18
class LOSChecker : public hkpRayHitCollector {
    // Members
    float minHitFraction; // offset 0x8, size 0x4
    class xBase * hitObj; // offset 0xC, size 0x4
    bool hitIt; // offset 0x10, size 0x1
    float hitFraction; // offset 0x14, size 0x4
};
// total size: 0x120
class ztextbox : public xOGEntity {
    // Members
    class @class flag; // offset 0x3C, size 0x1
    class asset_type * asset; // offset 0x40, size 0x4
    class xtextbox tb; // offset 0x48, size 0x88
    char * segments[16]; // offset 0xD0, size 0x40
    unsigned long segments_size; // offset 0x110, size 0x4
    class ztextbox * next; // offset 0x114, size 0x4
    class ztextbox * prev; // offset 0x118, size 0x4
};
// total size: 0x1
class @class {
    // Members
    bool active : 1; // offset 0x0, size 0x1, bit offset 0
    bool dirty : 1; // offset 0x0, size 0x1, bit offset 1
    bool show_backdrop : 1; // offset 0x0, size 0x1, bit offset 2
};
// total size: 0x88
class asset_type : public xBaseAsset {
    // Members
    unsigned int text; // offset 0x10, size 0x4
    class basic_rect bounds; // offset 0x14, size 0x10
    unsigned int flags; // offset 0x24, size 0x4
    unsigned int font; // offset 0x28, size 0x4
    class @class size; // offset 0x2C, size 0x8
    class @class space; // offset 0x34, size 0x8
    class xColor color; // offset 0x3C, size 0x4
    class @class inset; // offset 0x40, size 0x10
    enum @enum xjustify; // offset 0x50, size 0x4
    enum @enum yjustify; // offset 0x54, size 0x4
    enum @enum expand; // offset 0x58, size 0x4
    float max_height; // offset 0x5C, size 0x4
    class @class backdrop; // offset 0x60, size 0x1C
    class xColor shadowColor; // offset 0x7C, size 0x4
    float shadowOffsetX; // offset 0x80, size 0x4
    float shadowOffsetY; // offset 0x84, size 0x4
};
// total size: 0x8
class @class {
    // Members
    float width; // offset 0x0, size 0x4
    float height; // offset 0x4, size 0x4
};
// total size: 0x8
class @class {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x10
class @class {
    // Members
    float left; // offset 0x0, size 0x4
    float top; // offset 0x4, size 0x4
    float right; // offset 0x8, size 0x4
    float bottom; // offset 0xC, size 0x4
};
enum @enum {
    XJ_LEFT = 0,
    XJ_CENTER = 1,
    XJ_RIGHT = 2,
};
enum @enum {
    YJ_TOP = 0,
    YJ_CENTER = 1,
    YJ_BOTTOM = 2,
};
enum @enum {
    EX_UP = 0,
    EX_CENTER = 1,
    EX_DOWN = 2,
    MAX_EX = 3,
};
// total size: 0x1C
class @class {
    // Members
    unsigned int type; // offset 0x0, size 0x4
    class xColor color; // offset 0x4, size 0x4
    unsigned int texture; // offset 0x8, size 0x4
    float borderU; // offset 0xC, size 0x4
    float borderV; // offset 0x10, size 0x4
    float borderWidth; // offset 0x14, size 0x4
    float borderHeight; // offset 0x18, size 0x4
};
// total size: 0x4
class EventActionVisible : public EventActionNew {
    // Members
    unsigned int param0; // offset 0x0, size 0x4
};
// total size: 0x98
class text_box : public xBaseScene {
    // Members
    class Pointer32 text; // offset 0x10, size 0x4
    class _bounds bounds; // offset 0x14, size 0x10
    unsigned int flags; // offset 0x24, size 0x4
    enum FontType font; // offset 0x28, size 0x4
    class _size size; // offset 0x2C, size 0x8
    class _space space; // offset 0x34, size 0x8
    unsigned int color; // offset 0x3C, size 0x4
    class _inset inset; // offset 0x40, size 0x10
    enum JustifyX xjustify; // offset 0x50, size 0x4
    enum JustifyY yjustify; // offset 0x54, size 0x4
    enum ExpandType expand; // offset 0x58, size 0x4
    float max_height; // offset 0x5C, size 0x4
    class _backdrop backdrop; // offset 0x60, size 0x20
    unsigned int shadowColor; // offset 0x80, size 0x4
    float shadowOffsetX; // offset 0x84, size 0x4
    float shadowOffsetY; // offset 0x88, size 0x4
    class LinkAsset EventLinksNew; // offset 0x8C, size 0x8
};
// total size: 0x10
class _bounds {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
enum FontType {
    GameFont = 0,
    ArialFont = 1,
    DebugFont = 2,
    Font3 = 3,
    END_FontTypeENUM = 4,
};
// total size: 0x8
class _size {
    // Members
    float width; // offset 0x0, size 0x4
    float height; // offset 0x4, size 0x4
};
// total size: 0x8
class _space {
    // Members
    float width; // offset 0x0, size 0x4
    float height; // offset 0x4, size 0x4
};
// total size: 0x10
class _inset {
    // Members
    float left; // offset 0x0, size 0x4
    float top; // offset 0x4, size 0x4
    float right; // offset 0x8, size 0x4
    float bottom; // offset 0xC, size 0x4
};
enum JustifyX {
    JustifyX_Left = 0,
    JustifyX_Center = 1,
    JustifyX_Right = 2,
    END_JustifyXENUM = 3,
};
enum JustifyY {
    JustifyY_Top = 0,
    JustifyY_Center = 1,
    JustifyY_Bottom = 2,
    END_JustifyYENUM = 3,
};
enum ExpandType {
    Disabled = 100,
    Down = 2,
    Up = 0,
    Center = 1,
    END_ExpandTypeENUM = 2,
};
// total size: 0x20
class _backdrop {
    // Members
    enum BackgroundType type; // offset 0x0, size 0x4
    unsigned int color; // offset 0x4, size 0x4
    class uid texture; // offset 0x8, size 0x8
    float borderU; // offset 0x10, size 0x4
    float borderV; // offset 0x14, size 0x4
    float borderWidth; // offset 0x18, size 0x4
    float borderHeight; // offset 0x1C, size 0x4
};
enum BackgroundType {
    None = 100,
    Fill = 0,
    Scale = 1,
    Wrap = 2,
    Pieces = 3,
    END_BackgroundTypeENUM = 4,
};
// total size: 0x140
class zTriggerAsset : public TriggerOGBase {};
// total size: 0xF0
class zTriggerEntity : public zTrigger {
    // Members
    int threshold; // offset 0xD8, size 0x4
    int numberOfEntitiesWasInside; // offset 0xDC, size 0x4
    int numberOfBaseStatus; // offset 0xE0, size 0x4
    class zTriggerEntityStatus * baseStatus; // offset 0xE4, size 0x4
    class TriggerEntityAsset * triggerEntAsset; // offset 0xE8, size 0x4
    bool hasReplyLink : 1; // offset 0xEC, size 0x1, bit offset 0
    bool hasAnyLink : 1; // offset 0xEC, size 0x1, bit offset 1
    bool hasThresholdLink : 1; // offset 0xEC, size 0x1, bit offset 2
};
// total size: 0x8
class zTriggerEntityStatus {
    // Members
    class xBase * basePtr; // offset 0x0, size 0x4
    bool isInside : 1; // offset 0x4, size 0x1, bit offset 0
    bool crossedTrigger : 1; // offset 0x4, size 0x1, bit offset 1
};
enum ePauseType {
    PAUSE_NORMAL = 0,
    PAUSE_STATS = 1,
    PAUSE_JOIN = 2,
    PAUSE_UPGRADE = 3,
    PAUSE_MAINMENU = 4,
    END_PAUSE_ENUM = 5,
};
// total size: 0x2C
class zUIMotionFrame {
    // Members
    float offsetX; // offset 0x0, size 0x4
    float offsetY; // offset 0x4, size 0x4
    float scaleX; // offset 0x8, size 0x4
    float scaleY; // offset 0xC, size 0x4
    float textScaleX; // offset 0x10, size 0x4
    float textScaleY; // offset 0x14, size 0x4
    float rotation; // offset 0x18, size 0x4
    float offsetU; // offset 0x1C, size 0x4
    float offsetV; // offset 0x20, size 0x4
    class xColor color; // offset 0x24, size 0x4
    unsigned char brightness; // offset 0x28, size 0x1
    bool visible; // offset 0x29, size 0x1
};
// total size: 0x2C
class UIMotionCommandAsset {
    // Members
    unsigned int type; // offset 0x0, size 0x4
    float startTime; // offset 0x4, size 0x4
    float endTime; // offset 0x8, size 0x4
    float accelTime; // offset 0xC, size 0x4
    float decelTime; // offset 0x10, size 0x4
    unsigned char enabled; // offset 0x14, size 0x1
    class @class __anon; // offset 0x18, size 0x14
    class UIMotionCommandMove move; // offset 0x18, size 0x8
    class UIMotionCommandScale scale; // offset 0x18, size 0x14
    class UIMotionCommandRotate rotate; // offset 0x18, size 0xC
    class UIMotionCommandOpacity opacity; // offset 0x18, size 0x2
    class UIMotionCommandAbsoluteScale absoluteScale; // offset 0x18, size 0x14
    class UIMotionCommandBrightness brightness; // offset 0x18, size 0x2
    class UIMotionCommandColor color; // offset 0x18, size 0x6
    class UIMotionCommandUVScroll uvScroll; // offset 0x18, size 0x8
    class UIMotionCommandVisibility visibility; // offset 0x18, size 0x1
};
// total size: 0x14
class @class {
    // Members
    class UIMotionCommandMove move; // offset 0x0, size 0x8
    class UIMotionCommandScale scale; // offset 0x0, size 0x14
    class UIMotionCommandRotate rotate; // offset 0x0, size 0xC
    class UIMotionCommandOpacity opacity; // offset 0x0, size 0x2
    class UIMotionCommandAbsoluteScale absoluteScale; // offset 0x0, size 0x14
    class UIMotionCommandBrightness brightness; // offset 0x0, size 0x2
    class UIMotionCommandColor color; // offset 0x0, size 0x6
    class UIMotionCommandUVScroll uvScroll; // offset 0x0, size 0x8
    class UIMotionCommandVisibility visibility; // offset 0x0, size 0x1
};
// total size: 0x8
class UIMotionCommandMove {
    // Members
    float distX; // offset 0x0, size 0x4
    float distY; // offset 0x4, size 0x4
};
// total size: 0x14
class UIMotionCommandScale {
    // Members
    float amountX; // offset 0x0, size 0x4
    float amountY; // offset 0x4, size 0x4
    bool centerPivot; // offset 0x8, size 0x1
    float centerOffsetX; // offset 0xC, size 0x4
    float centerOffsetY; // offset 0x10, size 0x4
};
// total size: 0xC
class UIMotionCommandRotate {
    // Members
    float rotation; // offset 0x0, size 0x4
    float centerOffsetX; // offset 0x4, size 0x4
    float centerOffsetY; // offset 0x8, size 0x4
};
// total size: 0x2
class UIMotionCommandOpacity {
    // Members
    unsigned char startOpacity; // offset 0x0, size 0x1
    unsigned char endOpacity; // offset 0x1, size 0x1
};
// total size: 0x14
class UIMotionCommandAbsoluteScale {
    // Members
    float startX; // offset 0x0, size 0x4
    float startY; // offset 0x4, size 0x4
    float endX; // offset 0x8, size 0x4
    float endY; // offset 0xC, size 0x4
    bool centerPivot; // offset 0x10, size 0x1
    bool textScale; // offset 0x11, size 0x1
};
// total size: 0x2
class UIMotionCommandBrightness {
    // Members
    unsigned char startBrightness; // offset 0x0, size 0x1
    unsigned char endBrightness; // offset 0x1, size 0x1
};
// total size: 0x6
class UIMotionCommandColor {
    // Members
    unsigned char startRed; // offset 0x0, size 0x1
    unsigned char startGreen; // offset 0x1, size 0x1
    unsigned char startBlue; // offset 0x2, size 0x1
    unsigned char endRed; // offset 0x3, size 0x1
    unsigned char endGreen; // offset 0x4, size 0x1
    unsigned char endBlue; // offset 0x5, size 0x1
};
// total size: 0x8
class UIMotionCommandUVScroll {
    // Members
    float amountU; // offset 0x0, size 0x4
    float amountV; // offset 0x4, size 0x4
};
// total size: 0x1
class UIMotionCommandVisibility {
    // Members
    bool makeVisible; // offset 0x0, size 0x1
};
// total size: 0x100
class zUIController : public zUI {};
// total size: 0xB0
class UI_Controller : public zUI {
    // Members
    class LinkAsset EventLinksNew; // offset 0xA8, size 0x8
};
// total size: 0x38
class UI_Group : public zUIMessageTarget {
    // Members
    class __widgets__ widgets; // offset 0x10, size 0x8
    class __activations__ activations; // offset 0x18, size 0x8
    class __deactivations__ deactivations; // offset 0x20, size 0x8
    bool random; // offset 0x28, size 0x1
    class LinkAsset EventLinksNew; // offset 0x2C, size 0x8
};
// total size: 0x8
class __widgets__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __activations__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __deactivations__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x70
class zUIGroup : public xOGEntity {
    // Members
    class UI_Group * asset; // offset 0x3C, size 0x4
    class zUIGroupMemberInfo * items; // offset 0x40, size 0x4
    int count; // offset 0x44, size 0x4
    unsigned int flags; // offset 0x48, size 0x4
    int toPrevious; // offset 0x4C, size 0x4
    int toNext; // offset 0x50, size 0x4
    int fromNext; // offset 0x54, size 0x4
    int nextActivateTransition; // offset 0x58, size 0x4
    int nextDeactivateTransition; // offset 0x5C, size 0x4
    float deactivateTimer; // offset 0x60, size 0x4
    class zUIGroup * nextGroup; // offset 0x64, size 0x4
    class zUIGroup * previousGroup; // offset 0x68, size 0x4
};
// total size: 0x4
class zUIGroupMemberInfo {
    // Members
    class xBase * member; // offset 0x0, size 0x4
};
// total size: 0x10
class EventActionAttachUIImage : public EventActionNew {
    // Members
    class uid attachedTo; // offset 0x0, size 0x8
    unsigned int boneIdx; // offset 0x8, size 0x4
};
// total size: 0x10
class iRect {
    // Members
    int x; // offset 0x0, size 0x4
    int y; // offset 0x4, size 0x4
    int w; // offset 0x8, size 0x4
    int h; // offset 0xC, size 0x4
};
// total size: 0x1
class Referrer {};
// total size: 0x24
class ImmediateRenderUIImage {
    // Members
    class ImmediateContext immContext; // offset 0x0, size 0x20
    class Renderable3DTransform * xform; // offset 0x20, size 0x4
};
// total size: 0x30
class UICorners {
    // Members
    class UIVertex upperLeft; // offset 0x0, size 0xC
    class UIVertex lowerLeft; // offset 0xC, size 0xC
    class UIVertex lowerRight; // offset 0x18, size 0xC
    class UIVertex upperRight; // offset 0x24, size 0xC
};
// total size: 0x100
class UI_Image : public zUI {
    // Members
    class ImmediateInstanceAsset ImmediateData; // offset 0xB0, size 0x10
    class UICorners corners; // offset 0xC0, size 0x30
    class LinkAsset EventLinksNew; // offset 0xF0, size 0x8
};
// total size: 0x100
class zUIModel : public zUI {
    // Members
    class xAnimTable * atbl; // offset 0xF8, size 0x4
};
// total size: 0x100
class UI_Model : public zUI {
    // Members
    class ModelInstanceAsset ModelInstance; // offset 0xB0, size 0x40
    class uid animationList; // offset 0xF0, size 0x8
    class LinkAsset EventLinksNew; // offset 0xF8, size 0x8
};
// total size: 0x48
class zAnimList : public xOGEntity {
    // Members
    class xAnimTable * atbl; // offset 0x3C, size 0x4
    int anused; // offset 0x40, size 0x4
};
// total size: 0x1A0
class zUIUserString : public zUIText {
    // Members
    char * textBuffer; // offset 0x194, size 0x4
    int length; // offset 0x198, size 0x4
    int maxLength; // offset 0x19C, size 0x4
};
// total size: 0x1A0
class zUIText : public zUI {
    // Members
    class xColor shadowColor; // offset 0xF8, size 0x4
    char * text; // offset 0xFC, size 0x4
    bool cached; // offset 0x100, size 0x1
    bool clearLayoutCache; // offset 0x101, size 0x1
    unsigned int textID; // offset 0x104, size 0x4
    class xtextbox tb; // offset 0x108, size 0x88
    bool dirty; // offset 0x190, size 0x1
};
// total size: 0xF0
class UI_User_String : public UIText {
    // Members
    unsigned char hardMaxChars; // offset 0xD8, size 0x1
    unsigned char softMaxChars; // offset 0xD9, size 0x1
    class LinkAsset EventLinksNew; // offset 0xDC, size 0x8
};
// total size: 0x10
class zPlayerWalkStartUP : public zPlayerWalkStart {};
// total size: 0x14
class zPlayerLedgeUP : public zUPPlayerInterAction {};
// total size: 0x14
class zPlayerStepUp : public zUPPlayerInterAction {};
// total size: 0x14
class zPlayerPushPull : public zUPPlayerInterAction {};
// total size: 0x38
class zPlayerTrapped : public zUPPlayerAction {
    // Members
    class xVec3 playerMoved; // offset 0x10, size 0xC
    class zButtonMashIcon masher; // offset 0x1C, size 0x18
    float timeReleasing; // offset 0x34, size 0x4
};
// total size: 0x60
class zPlayerSwim : public zUPPlayerAction {
    // Members
    bool iconRendered; // offset 0x10, size 0x1
    float paddleTime; // offset 0x14, size 0x4
    class zInWorldIcon iconDug; // offset 0x18, size 0x30
    class zButtonMashIcon masher; // offset 0x48, size 0x18
};
// total size: 0x10
class zPlayerUntie : public zUPPlayerAction {};
// total size: 0x38
class zPlayerKevinSpringboard : public zUPPlayerAction {
    // Members
    bool constantBoost; // offset 0x10, size 0x1
    class xVec2 direction; // offset 0x14, size 0x8
    float time; // offset 0x1C, size 0x4
    float y; // offset 0x20, size 0x4
    float kevinHeight; // offset 0x24, size 0x4
    class zKevinPlayer * kevin; // offset 0x28, size 0x4
    bool persistentForce; // offset 0x2C, size 0x1
    float JUMPKSB_VELOCITY; // offset 0x30, size 0x4
    float JUMPKSB_TIME_TOTAL; // offset 0x34, size 0x4
};
// total size: 0x58
class zPlayerCrank : public zUPPlayerAction {
    // Members
    float Rotated; // offset 0x10, size 0x4
    float timeLeeway; // offset 0x14, size 0x4
    float timeSinceLastGoodTurn; // offset 0x18, size 0x4
    class zCrank * theCrank; // offset 0x1C, size 0x4
    bool attached; // offset 0x20, size 0x1
    float timer; // offset 0x24, size 0x4
    class zButtonMashIcon masher; // offset 0x28, size 0x18
    float prevInputAngVels[5]; // offset 0x40, size 0x14
    int prevInputIndex; // offset 0x54, size 0x4
};
// total size: 0x18
class zCommonPlayerSinkingSurface : public zUPPlayerAction {
    // Members
    bool isMoving; // offset 0x10, size 0x1
    bool isFalling; // offset 0x11, size 0x1
    float jumpTimer; // offset 0x14, size 0x4
};
// total size: 0x2C
class zPlayerCaveWorm : public zUPPlayerAction {
    // Members
    float buttonsMashed; // offset 0x10, size 0x4
    class zButtonMashIcon masher; // offset 0x14, size 0x18
};
// total size: 0x34
class zPlayerHouseBalloonBounce : public zUPPlayerInterAction {
    // Members
    class xVec3 impactPos; // offset 0x14, size 0xC
    float time; // offset 0x20, size 0x4
    float hackPrevYVel; // offset 0x24, size 0x4
    bool earlyApex; // offset 0x28, size 0x1
    float JUMPHBB_TIME_TOTAL; // offset 0x2C, size 0x4
    float JUMPHBB_VELOCITY; // offset 0x30, size 0x4
};
// total size: 0x14
class zPlayerHouseFloat : public zUPPlayerAction {
    // Members
    bool defaultSpeed; // offset 0x10, size 0x1
};
// total size: 0xC
class var_type {
    // Members
    class substr name; // offset 0x0, size 0x8
    char * (* get_text)(); // offset 0x8, size 0x4
};
// total size: 0x48
class xOGEntitySoundBankWrap : public xOGEntity {
    // Members
    unsigned long long assetID; // offset 0x40, size 0x8
};
// total size: 0x1C
class zPlayerInputAI : public zPlayerInput {
    // Members
    class xVec2 analog[2]; // offset 0x4, size 0x10
    int buttons; // offset 0x14, size 0x4
    int oldButtons; // offset 0x18, size 0x4
};
// total size: 0x150
class Global {
    // Members
    class SystemI * gSystemHead; // offset 0x0, size 0x4
    class MemPool * gSystemPool; // offset 0x4, size 0x4
    int gSystemInitCount; // offset 0x8, size 0x4
    unsigned int gDebugLevel; // offset 0xC, size 0x4
    enum FMOD_DEBUGMODE gDebugMode; // offset 0x10, size 0x4
    char gDebugFilename[256]; // offset 0x14, size 0x100
    class FMOD_UINT64P gDSPClock; // offset 0x118, size 0x8
    unsigned int gDSPClockTimeStamp; // offset 0x120, size 0x4
    int gFileBusy; // offset 0x124, size 0x4
    enum FMOD_RESULT (* gSystemCallback)(class FMOD_SYSTEM * system, enum FMOD_SYSTEM_CALLBACKTYPE type, void * commanddata1, void * commanddata2); // offset 0x128, size 0x4
    unsigned int gMemoryTypeFlags; // offset 0x12C, size 0x4
    class malloc_params gDLMalloc_mparams; // offset 0x130, size 0x18
    int gRandomValue; // offset 0x148, size 0x4
};
// total size: 0x0
class SystemI {};
// total size: 0x150
class MemPool {
    // Members
    unsigned char * mBitmap; // offset 0x0, size 0x4
    unsigned char * mData; // offset 0x4, size 0x4
    bool mCustomPool; // offset 0x8, size 0x1
    int mSizeBytes; // offset 0xC, size 0x4
    int mSizeBlocks; // offset 0x10, size 0x4
    int mNumBlocks; // offset 0x14, size 0x4
    int mMaxBlocks; // offset 0x18, size 0x4
    unsigned int mCurrentAllocated[33]; // offset 0x1C, size 0x84
    unsigned int mCurrentAllocatedThreadID[32]; // offset 0xA0, size 0x80
    unsigned int mMaxAllocated; // offset 0x120, size 0x4
    unsigned int mMaxAllocatedSecondary; // offset 0x124, size 0x4
    unsigned int mCurrentAllocatedSecondary; // offset 0x128, size 0x4
    int mActualMaxBytes; // offset 0x12C, size 0x4
    int mWastage; // offset 0x130, size 0x4
    int mFirstFreeBlock; // offset 0x134, size 0x4
    void * (* mAlloc)(unsigned int size, unsigned int type); // offset 0x138, size 0x4
    void * (* mRealloc)(void * ptr, unsigned int size, unsigned int type); // offset 0x13C, size 0x4
    void (* mFree)(void * ptr, unsigned int type); // offset 0x140, size 0x4
    void * mDLMallocSpace; // offset 0x144, size 0x4
    class FMOD_OS_CRITICALSECTION * mCrit; // offset 0x148, size 0x4
    int mBlockSize; // offset 0x14C, size 0x4
};
// total size: 0x0
class FMOD_OS_CRITICALSECTION {};
enum FMOD_DEBUGMODE {
    DEBUG_STDOUT = 0,
    DEBUG_FILE = 1,
};
// total size: 0x8
class FMOD_UINT64P {
    // Members
    unsigned long long mValue; // offset 0x0, size 0x8
    class @class __anon; // offset 0x0, size 0x8
    unsigned int mHi; // offset 0x0, size 0x4
    unsigned int mLo; // offset 0x4, size 0x4
};
// total size: 0x8
class @class {
    // Members
    unsigned int mHi; // offset 0x0, size 0x4
    unsigned int mLo; // offset 0x4, size 0x4
};
// total size: 0x0
class FMOD_SYSTEM {};
enum FMOD_SYSTEM_CALLBACKTYPE {
    FMOD_SYSTEM_CALLBACKTYPE_DEVICELISTCHANGED = 0,
    FMOD_SYSTEM_CALLBACKTYPE_MEMORYALLOCATIONFAILED = 1,
    FMOD_SYSTEM_CALLBACKTYPE_THREADCREATED = 2,
    FMOD_SYSTEM_CALLBACKTYPE_BADDSPCONNECTION = 3,
    FMOD_SYSTEM_CALLBACKTYPE_BADDSPLEVEL = 4,
    FMOD_SYSTEM_CALLBACKTYPE_MAX = 5,
    FMOD_SYSTEM_CALLBACKTYPE_FORCEINT = 65536,
};
// total size: 0x18
class malloc_params {
    // Members
    unsigned long magic; // offset 0x0, size 0x4
    unsigned long page_size; // offset 0x4, size 0x4
    unsigned long granularity; // offset 0x8, size 0x4
    unsigned long mmap_threshold; // offset 0xC, size 0x4
    unsigned long trim_threshold; // offset 0x10, size 0x4
    unsigned int default_mflags; // offset 0x14, size 0x4
};
// total size: 0x1C
class HDRSettings {
    // Members
    bool Enable; // offset 0x0, size 0x1
    float Threshold; // offset 0x4, size 0x4
    float BloomScale; // offset 0x8, size 0x4
    float BloomSize; // offset 0xC, size 0x4
    float BloomBrightness; // offset 0x10, size 0x4
    float StarScale; // offset 0x14, size 0x4
    float BlurScale; // offset 0x18, size 0x4
};
// total size: 0x8
class BlackAndWhiteBlendSettings {
    // Members
    bool Enabled; // offset 0x0, size 0x1
    float BlendFactor; // offset 0x4, size 0x4
};
