/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80103F90 -> 0x80189AE8
*/
extern class Global * gGlobal; // size: 0x4
extern class hkQuaternion hkQuaternionIdentity; // size: 0x10
extern struct {} __vt__25hkpClosestRayHitCollector; // size: 0x10
extern struct {} __vt__27hkpFirstCdBodyPairCollector; // size: 0x14
// total size: 0x60
class zPhysicsObject : public xBase {
    // Members
    class zPhysicsObject * nextPhysicsObject; // offset 0x34, size 0x4
    class zPOWGroup * owner; // offset 0x38, size 0x4
    enum E_HAVOK_COLLIDE_FILTER_LAYER initialCollisionLayer; // offset 0x3C, size 0x4
    float lifetime; // offset 0x40, size 0x4
    class zPhysicsObjectEntity * entity; // offset 0x44, size 0x4
    unsigned int collFilterInfo; // offset 0x48, size 0x4
    int count; // offset 0x4C, size 0x4
    class HavokSimObj havokSimObj; // offset 0x50, size 0x4
    bool killedByManager : 1; // offset 0x54, size 0x1, bit offset 0
    bool update : 1; // offset 0x54, size 0x1, bit offset 1
    bool visible : 1; // offset 0x54, size 0x1, bit offset 2
    bool collidedWithWater : 1; // offset 0x54, size 0x1, bit offset 3
    bool collidedWithWaterHandled : 1; // offset 0x54, size 0x1, bit offset 4
    bool lifetimeSet : 1; // offset 0x54, size 0x1, bit offset 5
    bool locked : 1; // offset 0x54, size 0x1, bit offset 6
    unsigned char pad : 1; // offset 0x54, size 0x1, bit offset 7
    class zSoundSourcesPhysics * soundSourcesPhysics; // offset 0x58, size 0x4
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
class zPolygonalVolume : public xOGEntity {
    // Members
    class zPolygonalVolumeAsset * asset; // offset 0x3C, size 0x4
    int vertexCount; // offset 0x40, size 0x4
    class xVec3 * vertices; // offset 0x44, size 0x4
    float minY; // offset 0x48, size 0x4
    float height; // offset 0x4C, size 0x4
    class xVec3 upper; // offset 0x50, size 0xC
    class xVec3 lower; // offset 0x5C, size 0xC
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
// total size: 0x1C
class zPlayerIdlePlankton : public zPlayerAction {
    // Members
    class xAnimState * talkState[2]; // offset 0x10, size 0x8
    unsigned char nextTalkState; // offset 0x18, size 0x1
};
// total size: 0x18
class hkpFirstCdBodyPairCollector : public hkpCdBodyPairCollector {
    // Members
    class hkpRootCdBodyPair m_cdBodyPair; // offset 0x8, size 0x10
};
// total size: 0x18
class EventActionSBPlayCustomAnim : public EventActionNew {
    // Members
    class __AnimTypeUnion__ AnimTypeUnion; // offset 0x0, size 0x18
};
// total size: 0x18
class __AnimTypeUnion__ {
    // Members
    enum eSBCustomAnimType type; // offset 0x0, size 0x4
    class @class u; // offset 0x8, size 0x10
};
enum eSBCustomAnimType {
    eSBCustomAnimType_Single = 0,
    eSBCustomAnimType_AnimPackage = 1,
    END_eSBCustomAnimType_ENUM = 2,
};
// total size: 0x10
class @class {
    // Members
    class SBPlayAnim_Single _Single; // offset 0x0, size 0x8
    class SBPlayAnim_AnimPackage _AnimPackage; // offset 0x0, size 0x10
};
// total size: 0x8
class SBPlayAnim_Single {
    // Members
    class uid Animation; // offset 0x0, size 0x8
};
// total size: 0x10
class SBPlayAnim_AnimPackage {
    // Members
    class uid AnimPackage; // offset 0x0, size 0x8
    unsigned int AnimIndex; // offset 0x8, size 0x4
};
// total size: 0x160
class PlanktonSimpleShapePhantom : public hkpSimpleShapePhantom {};
// total size: 0x160
class hkpSimpleShapePhantom : public hkpShapePhantom {
    // Members
    class hkArray m_collisionDetails; // offset 0x150, size 0xC
    class hkBool m_orderDirty; // offset 0x15C, size 0x1
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
// total size: 0x4
class PlantWasDestroyed : public EventNotifyNew {
    // Members
    enum eDestroyedBy destroyedBy; // offset 0x0, size 0x4
};
enum eDestroyedBy {
    eDestroyedBy_Other = 0,
    eDestroyedBy_SpinPowerup = 1,
    eDestroyedBy_Event = 2,
    END_eDestroyedBy_ENUM = 3,
};
// total size: 0x20
class zSBKelpTrapBehavior : public CustomBehavior {
    // Members
    float squeezeTimer; // offset 0x18, size 0x4
    class zFXSpawn * mowFXScriptSpawnPoint; // offset 0x1C, size 0x4
};
// total size: 0x10
class EventActionPlatformMotion : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
    float param1; // offset 0x4, size 0x4
    float param2; // offset 0x8, size 0x4
    float param3; // offset 0xC, size 0x4
};
// total size: 0x18
class EventActionTransToAbsoluteDirection : public EventActionNew {
    // Members
    float param1; // offset 0x0, size 0x4
    float param2; // offset 0x4, size 0x4
    float param3; // offset 0x8, size 0x4
    class uid paramWidgetAssetID; // offset 0x10, size 0x8
};
// total size: 0xC
class EventActionRotSetOrientation : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
    float param1; // offset 0x4, size 0x4
    float param2; // offset 0x8, size 0x4
};
// total size: 0x18
class EventActionRotGotoOrientation : public EventActionNew {
    // Members
    float pitch; // offset 0x0, size 0x4
    float yaw; // offset 0x4, size 0x4
    float roll; // offset 0x8, size 0x4
    float param0; // offset 0xC, size 0x4
    float param1; // offset 0x10, size 0x4
    float param2; // offset 0x14, size 0x4
};
// total size: 0x20
class EventActionJawboneAnimateOnPlatform : public EventActionNew {
    // Members
    short paramFirstBone; // offset 0x0, size 0x2
    short paramLastBone; // offset 0x2, size 0x2
    enum eJawboneSpeechType paramSpeechType; // offset 0x4, size 0x4
    float paramMinAngle; // offset 0x8, size 0x4
    float paramMaxAngle; // offset 0xC, size 0x4
    class uid paramVFXAssetID; // offset 0x10, size 0x8
    int paramVFXBone; // offset 0x18, size 0x4
    float paramSpeechPeriod; // offset 0x1C, size 0x4
};
// total size: 0x8
class EventActionAccelerate : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
    float param1; // offset 0x4, size 0x4
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
// total size: 0x2
class EventActionSetSkyDome : public EventActionNew {
    // Members
    bool param0; // offset 0x0, size 0x1
    bool param1; // offset 0x1, size 0x1
};
// total size: 0x8
class EventActionMovePoint : public EventActionNew {
    // Members
    class uid paramWidgetAssetID; // offset 0x0, size 0x8
};
// total size: 0x4
class EventActionSetShadowCastDepth : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
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
// total size: 0xC
class EventActionSetColorMultiplier : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
    float param1; // offset 0x4, size 0x4
    float param2; // offset 0x8, size 0x4
};
// total size: 0x8
class EventActionHudSetPlayer : public EventActionNew {
    // Members
    int playerIdx; // offset 0x0, size 0x4
    enum ePlayerTypeUp characterID; // offset 0x4, size 0x4
};
enum ePlayerTypeUp {
    ePlayerTypeUp_None = 4294967295,
    ePlayerTypeUp_Carl = 0,
    ePlayerTypeUp_Russell = 1,
    ePlayerTypeUp_Dug = 2,
    ePlayerTypeUp_Kevin = 3,
    END_ePlayerTypeUp_ENUM = 4,
};
// total size: 0x34
class zPlayer_CollideTrigger_CB {
    // Members
    class zPlayer * player; // offset 0x0, size 0x4
    unsigned int playerMask; // offset 0x4, size 0x4
    class xVec3 start_pos; // offset 0x8, size 0xC
    class xVec3 end_pos; // offset 0x14, size 0xC
    class xVec3 frame_dir; // offset 0x20, size 0xC
    float frame_dist; // offset 0x2C, size 0x4
    float frame_dist2; // offset 0x30, size 0x4
};
// total size: 0x5
class EventActionControlOff : public EventActionNew {
    // Members
    bool showLetterbox; // offset 0x0, size 0x1
    bool eventSkippable; // offset 0x1, size 0x1
    bool idleExtraOff; // offset 0x2, size 0x1
    bool allDialogOff; // offset 0x3, size 0x1
    bool disablePause; // offset 0x4, size 0x1
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
    CONTROL_OWNER_UNUSED_2 = 4,
    CONTROL_OWNER_UNUSED_3 = 8,
    CONTROL_OWNER_UNUSED_4 = 16,
    CONTROL_OWNER_UNUSED_5 = 32,
    CONTROL_OWNER_UNUSED_6 = 64,
    CONTROL_OWNER_UNUSED_7 = 128,
    CONTROL_OWNER_SCREEN_FADE = 256,
    CONTROL_OWNER_FLY_CAM = 512,
    CONTROL_OWNER_UNUSED_10 = 1024,
    CONTROL_OWNER_TURRET = 2048,
    CONTROL_OWNER_UNUSED_12 = 4096,
    CONTROL_OWNER_UI = 8192,
    CONTROL_OWNER_ANY = 4294967295,
};
// total size: 0x1D0
class TriggerIdentifyingPointCollectorNoShrapnel : public TriggerIdentifyingPointCollector {
    // Members
    class hkArray m_shrapnelObjectsWeHit; // offset 0x1B8, size 0xC
    class hkArray m_floatingObjectsWeHit; // offset 0x1C4, size 0xC
};
// total size: 0xC
class hkArray {
    // Members
    class ShrapnelContactData * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x30
class ShrapnelContactData {
    // Members
    class hkpRigidBody * rBody; // offset 0x0, size 0x4
    class hkContactPoint contact; // offset 0x10, size 0x20
};
// total size: 0x1C
class zPlayerInputAI : public zPlayerInput {
    // Members
    class xVec2 analog[2]; // offset 0x4, size 0x10
    int buttons; // offset 0x14, size 0x4
    int oldButtons; // offset 0x18, size 0x4
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
// total size: 0x218
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
    bool disabledTypes[5]; // offset 0x39, size 0x5
    class xVec3 lastAcc; // offset 0x40, size 0xC
    class xVec3 swingVec; // offset 0x4C, size 0xC
    float swingSpeedMax; // offset 0x58, size 0x4
    class xVec3 swingDir; // offset 0x5C, size 0xC
    bool wasSwinging; // offset 0x68, size 0x1
    enum pendingConnectStatus shouldEnableWiiClassicController; // offset 0x6C, size 0x4
    enum pendingConnectStatus shouldEnableGamecubeController; // offset 0x70, size 0x4
    enum pendingConnectStatus shouldEnableWiiMotionPlus; // offset 0x74, size 0x4
    bool wiiClassicControllerEnabled; // offset 0x78, size 0x1
    bool gamecubeControllerEnabled; // offset 0x79, size 0x1
    bool wiiMotionPlusExtension; // offset 0x7A, size 0x1
    bool allowedPorts[4]; // offset 0x7B, size 0x4
    class ShakeRecognition shakeRecognition[5][2]; // offset 0x80, size 0x190
    bool wiiRemoteConnected; // offset 0x210, size 0x1
    bool nunchukConnected; // offset 0x211, size 0x1
    bool wiiClassicControllerConnected; // offset 0x212, size 0x1
};
enum PadType {
    PADTYPE_DEBUG = 0,
    PADTYPE_MENU = 1,
    PADTYPE_GAME = 2,
    PADTYPE_MISC = 3,
    PADTYPE_PAUSE = 4,
    PADTYPE_LAST = 5,
};
enum pendingConnectStatus {
    Connect_None = 0,
    Connect_Enable = 1,
    Connect_Disable = 2,
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
    GAMEACTION_BIPLANE_VIEW_COCKPIT = 25,
    GAMEACTION_BIPLANE_SHOOT_PRIMARY = 26,
    GAMEACTION_BIPLANE_SHOOT_SECONDARY = 27,
    GAMEACTION_BIPLANE_SPECIAL_WEAPON = 28,
    GAMEACTION_BIPLANE_SPECIAL_MANEUVER = 29,
    GAMEACTION_SLINGSHOT = 30,
    GAMEACTION_HUD = 31,
    GAMEACTION_MM_FIRE = 32,
    GAMEACTION_MM_COMMAND = 33,
    GAMEACTION_MM_ACTION = 34,
    GAMEACTION_MM_CHANGE_WEAPON = 35,
    GAMEACTION_MM_LOCK_TARGET = 36,
    GAMEACTION_MM_BOOST = 37,
    GAMEACTION_MM_JUMP = 38,
    GAMEACTION_MM_SPEED_BOOST = 39,
    GAMEACTION_MM_BRAKE = 40,
    GAMEACTION_MM_VIEW_REAR = 41,
    GAMEACTION_MM_ZOOM = 42,
    GAMEACTION_MM_MAP = 43,
    GAMEACTION_SB_PLANKTON_GRAB = 44,
    GAMEACTION_SB_PLANKTON_A = 45,
    GAMEACTION_SB_PLANKTON_B = 46,
    GAMEACTION_SB_PLANKTON_CHANGE_WEAPON = 47,
    GAMEACTION_SB_CENTERCAMERA = 48,
    GAMEACTION_SB_STRAFECAMERA = 49,
    GAMEACTION_CAMERA_SHIFT = 50,
    GAMEACTION_DEBUG_CAMERA_SHIFT = 51,
    GAMEACTION_FLYCHEAT_SHIFT = 52,
    GAMEACTION_FLYCHEAT_CLASSIC = 53,
    GAMEACTION_FLYCHEATAI_CLASSIC = 54,
    GAMEACTION_FLYCHEAT_DOWN_CLASSIC = 55,
    GAMEACTION_FLYCHEAT_UP_CLASSIC = 56,
    GAMEACTION_FLYCHEAT_TURBO_CLASSIC = 57,
    GAMEACTION_FLYCHEAT_SHIFT_GAMECUBE = 58,
    GAMEACTION_FLYCHEATAI_GAMECUBE = 59,
    GAMEACTION_FLYCHEAT = 60,
    GAMEACTION_FLYCHEATAI = 61,
    GAMEACTION_FLYCHEAT_DOWN = 62,
    GAMEACTION_FLYCHEAT_UP = 63,
    GAMEACTION_FLYCHEAT_TURBO = 64,
    DEBUGACTION_PAGELEFT = 65,
    DEBUGACTION_PAGERIGHT = 66,
    DEBUGACTION_CANCEL = 67,
    DEBUGACTION_A = 68,
    DEBUGACTION_B = 69,
    DEBUGACTION_C = 70,
    DEBUGACTION_D = 71,
    DEBUGACTION_L1 = 72,
    DEBUGACTION_R1 = 73,
    DEBUGACTION_L2 = 74,
    DEBUGACTION_R2 = 75,
    DEBUGACTION_SELECT = 76,
    DEBUGACTION_START = 77,
    DEBUGACTION_RESET_VALUE = 78,
    DEBUGACTION_RESET_SCENE = 79,
    DEBUGACTION_HELP = 80,
    DEBUGACTION_HIDE = 81,
    DEBUGACTION_SUPER_SPEED = 82,
    DEBUGACTION_EXPAND_ALL = 83,
    DEBUGACTION_LSTICK = 84,
    DEBUGACTION_RSTICK = 85,
    DEBUGACTION_UP = 86,
    DEBUGACTION_DOWN = 87,
    DEBUGACTION_LEFT = 88,
    DEBUGACTION_RIGHT = 89,
    DEBUGACTION_TOGGLEDEBUGCAM = 90,
    MISCACTION_DEBUGPADMODE = 91,
    MISCACTION_SKIPASSERT = 92,
    MISCACTION_SKIPASSERTEXTRA = 93,
    MISCACTION_A = 94,
    MISCACTION_B = 95,
    MISCACTION_C = 96,
    MISCACTION_D = 97,
    MISCACTION_L1 = 98,
    MISCACTION_R1 = 99,
    MISCACTION_L2 = 100,
    MISCACTION_R2 = 101,
    MISCACTION_LSTICK = 102,
    MISCACTION_RSTICK = 103,
    MISCACTION_SELECT = 104,
    MISCACTION_START = 105,
    MISCACTION_UP = 106,
    MISCACTION_DOWN = 107,
    MISCACTION_LEFT = 108,
    MISCACTION_RIGHT = 109,
    MISCACTION_HOME = 110,
    MISCACTION_CRASHDUMP = 111,
    MISCACTION_ALL = 112,
};
enum ePad {
    ePad_Primary = 0,
    ePad_Secondary = 1,
    END_ePad_ENUM = 2,
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
enum ePadShake {
    ePadShake_None = 0,
    ePadShake_UpDown = 1,
    ePadShake_LeftRight = 2,
    ePadShake_ForwardBack = 3,
    ePadShake_Any = 4,
    END_ePadShake_ENUM = 5,
};
// total size: 0x12C
class zPlayerInputPadMgr {
    // Members
    unsigned int joinDropWait; // offset 0x0, size 0x4
    float dropDelay; // offset 0x4, size 0x4
    class PadData humanPads[4]; // offset 0x8, size 0x40
    class PadData aiPads[4]; // offset 0x48, size 0x40
    class zPlayerInput * curDebugPad[4]; // offset 0x88, size 0x10
    class Pad * acquiredPads[4]; // offset 0x98, size 0x10
    bool updatePadStatus; // offset 0xA8, size 0x1
    bool resortPlayersToo; // offset 0xA9, size 0x1
    class TRCMsgBox joinDropMsgBox; // offset 0xAC, size 0x34
    int joinDropBoxInUse; // offset 0xE0, size 0x4
    class zScript * joinTextBoxScript; // offset 0xE4, size 0x4
    class zUIFlashOnScreenText * joinTextBox; // offset 0xE8, size 0x4
    class zUIFlashOnScreenText * noAchTextBox; // offset 0xEC, size 0x4
    bool firstJoin; // offset 0xF0, size 0x1
    class TRCMsgBox planktonTutorialMsgBox; // offset 0xF4, size 0x34
    int planktonTutorialBoxInUse; // offset 0x128, size 0x4
};
// total size: 0x10
class PadData {
    // Members
    class zPlayerInput * pad; // offset 0x0, size 0x4
    class zPlayer * owner; // offset 0x4, size 0x4
    unsigned int gamePort; // offset 0x8, size 0x4
    unsigned int originalPort; // offset 0xC, size 0x4
};
// total size: 0x58
class zScript : public xOGEntity {
    // Members
    class Script * tasset; // offset 0x3C, size 0x4
    int currentIndex; // offset 0x40, size 0x4
    unsigned char state; // offset 0x44, size 0x1
    unsigned char runWhenPaused; // offset 0x45, size 0x1
    unsigned char runInCinematic; // offset 0x46, size 0x1
    unsigned char pad; // offset 0x47, size 0x1
    float time; // offset 0x48, size 0x4
    float scaleFactor; // offset 0x4C, size 0x4
    float * absoluteEventTimes; // offset 0x50, size 0x4
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
enum eCostumedCharacter {
    eCharacter_SpongeBob = 0,
    eCharacter_Patrick = 1,
    eCharacter_Sandy = 2,
    eCharacter_Squidward = 3,
    eCharacter_MrKrabs = 4,
    eCharacter_Gary = 5,
};
// total size: 0x60
class zPlayerLocationEntConnector : public xOGEntity {
    // Members
    class Player_Location_Ent_Connector * asset; // offset 0x3C, size 0x4
    int numWidgets; // offset 0x40, size 0x4
    bool continuousUpdate; // offset 0x44, size 0x1
    bool active; // offset 0x45, size 0x1
    class xVec3 vectorOffset; // offset 0x48, size 0xC
    bool useAssetOffset; // offset 0x54, size 0x1
    class xEnt * * ents; // offset 0x58, size 0x4
    class xEnt * attachEnt; // offset 0x5C, size 0x4
};
// total size: 0x18
class zPlayerResourcesSceneEntry {
    // Members
    unsigned int sceneID; // offset 0x0, size 0x4
    unsigned int playerTypeIdxs[4]; // offset 0x4, size 0x10
    int playerCount; // offset 0x14, size 0x4
};
// total size: 0x2
class EventActionTeleportPlayer : public EventActionNew {
    // Members
    bool ForceSameScene; // offset 0x0, size 0x1
    bool SameScene; // offset 0x1, size 0x1
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
// total size: 0x54
class zProjectileHavokCreateInfo {
    // Members
    unsigned int collisionLayer; // offset 0x0, size 0x4
    class ModelInstanceAsset * projectileModel; // offset 0x4, size 0x4
    class xVec3 launchVector; // offset 0x8, size 0xC
    class xMat4x3 initialTransform; // offset 0x14, size 0x40
};
// total size: 0x50
class hkpMassProperties {
    // Members
    float m_volume; // offset 0x0, size 0x4
    float m_mass; // offset 0x4, size 0x4
    class hkVector4 m_centerOfMass; // offset 0x10, size 0x10
    class hkMatrix3 m_inertiaTensor; // offset 0x20, size 0x30
};
// total size: 0x4
class iterator {
    // Members
    class node_type * n; // offset 0x0, size 0x4
};
// total size: 0x4
class EventProjectileApproach : public EventActionNew {
    // Members
    unsigned int projID; // offset 0x0, size 0x4
};
// total size: 0x1B0
class zProjectileSBClarinet : public zProjectile {
    // Members
    class zFXSpawn * activeFXAsset; // offset 0x198, size 0x4
    class zFXSpawn * activeFXSpawn; // offset 0x19C, size 0x4
    class xVec3 targetPos; // offset 0x1A0, size 0xC
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
// total size: 0x70
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
    class xVec3 pos; // offset 0x64, size 0xC
};
// total size: 0x8
class hkSpawnerCdBodyPairCollector : public hkpCdBodyPairCollector {};
// total size: 0x18
class SpawnProjectile : public EventActionNew {
    // Members
    class __aimUnion__ aimUnion; // offset 0x0, size 0x18
};
// total size: 0x18
class __aimUnion__ {
    // Members
    enum eAimType type; // offset 0x0, size 0x4
    class @class u; // offset 0x8, size 0x10
};
enum eAimType {
    HitTargetWidget = 0,
    InDirectionToTarget = 1,
    InDirectionOfSpawner = 2,
    END_eAimTypeENUM = 3,
};
// total size: 0x10
class @class {
    // Members
    class HitTargetWidget_Struct _HitTargetWidget; // offset 0x0, size 0x10
    class InDirectionToTarget_Struct _InDirectionToTarget; // offset 0x0, size 0x8
    class InDirectionOfSpawner_Struct _InDirectionOfSpawner; // offset 0x0, size 0x1
};
// total size: 0x10
class HitTargetWidget_Struct {
    // Members
    class uid targetWidgetID; // offset 0x0, size 0x8
    float time; // offset 0x8, size 0x4
};
// total size: 0x8
class InDirectionToTarget_Struct {
    // Members
    class uid targetWidgetID; // offset 0x0, size 0x8
};
// total size: 0x1
class InDirectionOfSpawner_Struct {};
// total size: 0x48
class zRandomModelList : public xOGEntity {
    // Members
    class zRandomModelListAsset * asset; // offset 0x3C, size 0x4
    float totalWeight; // offset 0x40, size 0x4
};
// total size: 0x40
class zReference : public xOGEntity {
    // Members
    class xBase * current; // offset 0x3C, size 0x4
};
// total size: 0x290
class zRubberBand : public xOGEntity {
    // Members
    class zRubberBandAsset * asset; // offset 0x3C, size 0x4
    class zRubberCylinder renderCylinder; // offset 0x40, size 0x4C
    class zRubberCollision collisionCylinder; // offset 0x90, size 0x60
    class zRubberAttachedObject attachedObject; // offset 0xF0, size 0x34
    class ShadowCachePtr * shadowCacheEntry; // offset 0x124, size 0x4
    float stretchAmount; // offset 0x128, size 0x4
    class zSoundAsset soundStretchOut; // offset 0x130, size 0x48
    class zSoundAsset soundStretchReturn; // offset 0x178, size 0x48
    class zSoundAsset soundSnapReturn; // offset 0x1C0, size 0x48
    enum SoundState soundState; // offset 0x208, size 0x4
    class xMat4x3 mat; // offset 0x20C, size 0x40
    class xMat4x3 driveOffMat; // offset 0x24C, size 0x40
};
// total size: 0x4C
class zRubberCylinder : public CylinderRenderable {
    // Members
    class zRubberBand * owner; // offset 0xC, size 0x4
    class ImmediatePrototypeEntity * im; // offset 0x10, size 0x4
    class xVec3 start; // offset 0x14, size 0xC
    class xVec3 end; // offset 0x20, size 0xC
    class xVec3 unitDir; // offset 0x2C, size 0xC
    float height; // offset 0x38, size 0x4
    unsigned char controlSegment; // offset 0x3C, size 0x1
    class xVec3 controlLastPos; // offset 0x40, size 0xC
};
// total size: 0x60
class zRubberCollision {
    // Members
    class hkpCylinderShape * shape; // offset 0x0, size 0x4
    class hkTransform transform; // offset 0x10, size 0x40
    class zRubberBand * owner; // offset 0x50, size 0x4
    float height; // offset 0x54, size 0x4
};
// total size: 0x34
class zRubberAttachedObject {
    // Members
    class zRubberBand * owner; // offset 0x0, size 0x4
    class xBase * current; // offset 0x4, size 0x4
    class xVec3 offset; // offset 0x8, size 0xC
    class xVec3 initialAttachPos; // offset 0x14, size 0xC
    enum CylSide side; // offset 0x20, size 0x4
    float yawRange; // offset 0x24, size 0x4
    class xVec3 cylNormal; // offset 0x28, size 0xC
};
enum CylSide {
    SIDE_RIGHT = 0,
    SIDE_LEFT = 1,
    SIDE_NONE = 2,
};
// total size: 0x4
class ShadowCachePtr {
    // Members
    unsigned int projectShadowCache; // offset 0x0, size 0x4
};
enum SoundState {
    IDLE = 0,
    STRETCH_OUT = 1,
    STRETCH_RETURN = 2,
    SNAP_RETURN = 3,
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
// total size: 0x10
class zPlayerIdleHub : public zSBPlayerAction {};
// total size: 0x10
class zSBPlayerAction : public zCommonPlayerAction {};
// total size: 0xC20
class zSBHubPlayer : public zCommonPlayer {
    // Members
    class zPlanktonPlayerShakeHelper shakeHelper; // offset 0x898, size 0x388
};
// total size: 0x20
class zPlayerSingleCustomAnimSB : public zSBPlayerAction {
    // Members
    bool startAnimation; // offset 0x10, size 0x1
    bool stopAnimation; // offset 0x11, size 0x1
    class xAnimState * aState[2]; // offset 0x14, size 0x8
    unsigned char nextState; // offset 0x1C, size 0x1
};
// total size: 0x2
class EventActionSBTurnAttackOnOrOff : public EventActionNew {
    // Members
    unsigned char attack; // offset 0x0, size 0x1
    unsigned char enabled; // offset 0x1, size 0x1
};
// total size: 0x2
class EventActionSBBungeeReturn : public EventActionNew {
    // Members
    bool PlayFX; // offset 0x0, size 0x1
    bool ForceReturn; // offset 0x1, size 0x1
};
// total size: 0x20
class zSBPlayerSpinAttack : public zSBPlayerAction {
    // Members
    int numSpinsQueued; // offset 0x10, size 0x4
    int numSpinsExecuted; // offset 0x14, size 0x4
    float rotationOffset; // offset 0x18, size 0x4
    bool nullInterrupt; // offset 0x1C, size 0x1
    bool swingGestureComplete; // offset 0x1D, size 0x1
};
// total size: 0x210
class zPlayerIdleSB : public zSBPlayerAction {
    // Members
    enum SBExtraIdleFacingState facing; // offset 0x10, size 0x4
    class xVec3 targetFacing; // offset 0x14, size 0xC
    float turnSpeed; // offset 0x20, size 0x4
    signed char numExtraIdlesUntilTurn; // offset 0x24, size 0x1
    signed char numExtraIdlesUntilAging; // offset 0x25, size 0x1
    float agingIdleTimer; // offset 0x28, size 0x4
    class ExtraIdleTableEntry extraIdleTable[6]; // offset 0x2C, size 0x1E0
    float extraIdleTimer; // offset 0x20C, size 0x4
};
enum SBExtraIdleFacingState {
    eIdle_None = 0,
    eIdle_TurnNextTime = 1,
    eIdle_TurningLeft = 2,
    eIdle_TurningRight = 3,
    eIdle_FacingCamera = 4,
    eIdle_AgingIdle = 5,
    eIdle_Count = 6,
};
// total size: 0x50
class ExtraIdleTableEntry {
    // Members
    class xAnimState * variants[17]; // offset 0x0, size 0x44
    int numVariants; // offset 0x44, size 0x4
    int numValid; // offset 0x48, size 0x4
    bool noRepeats; // offset 0x4C, size 0x1
};
// total size: 0x10
class zPlayerWalkSB : public zSBPlayerAction {};
// total size: 0x10
class zPlayerRunSB : public zSBPlayerAction {};
// total size: 0x20
class zPlayerTurn180SB : public zSBPlayerAction {
    // Members
    class xVec3 targetVector; // offset 0x10, size 0xC
    bool turn180Done; // offset 0x1C, size 0x1
};
// total size: 0x3C
class zPlayerJumpSB : public zSBPlayerAction {
    // Members
    float time; // offset 0x10, size 0x4
    float y; // offset 0x14, size 0x4
    float JUMP_TIME_TOTAL_PARAM; // offset 0x18, size 0x4
    float scaleJump; // offset 0x1C, size 0x4
    float Jump_Time_Total; // offset 0x20, size 0x4
    float Jump_Time_Decel; // offset 0x24, size 0x4
    float Jump_Height; // offset 0x28, size 0x4
    float Jump_Float; // offset 0x2C, size 0x4
    float Jump_Velocity; // offset 0x30, size 0x4
    float Jump_Decel; // offset 0x34, size 0x4
    float Jump_Time_Const; // offset 0x38, size 0x4
};
// total size: 0x10
class zPlayerFluidSpraySB : public zSBPlayerAction {};
// total size: 0x20
class zPlayerSlamStartSB : public zSBPlayerAction {
    // Members
    float time; // offset 0x10, size 0x4
    float AIRTIME; // offset 0x14, size 0x4
    float ACCELERATION; // offset 0x18, size 0x4
    float VELTHRESHOLD; // offset 0x1C, size 0x4
};
// total size: 0x20
class zPlayerSlamFallSB : public zSBPlayerAction {
    // Members
    float radius; // offset 0x10, size 0x4
    float damage; // offset 0x14, size 0x4
    float awayKnockback; // offset 0x18, size 0x4
    float upKnockback; // offset 0x1C, size 0x4
};
// total size: 0x10
class zPlayerSlamLandSB : public zSBPlayerAction {};
// total size: 0x20
class zPlayerFluidBurstSB : public zSBPlayerAction {
    // Members
    float radius; // offset 0x10, size 0x4
    float damage; // offset 0x14, size 0x4
    float awayKnockback; // offset 0x18, size 0x4
    float upKnockback; // offset 0x1C, size 0x4
};
// total size: 0x14
class zPlayerFallSB : public zSBPlayerAction {
    // Members
    float fallYPos; // offset 0x10, size 0x4
};
// total size: 0x10
class zPlayerLandSB : public zSBPlayerAction {};
// total size: 0x10
class zPlayerLandHighSB : public zPlayerLandSB {};
// total size: 0x18
class zPlayerDoubleJumpSB : public zSBPlayerAction {
    // Members
    float timer; // offset 0x10, size 0x4
    float y; // offset 0x14, size 0x4
};
// total size: 0x10
class zPlayerSpringboardSB : public zSBPlayerAction {};
// total size: 0x1C
class zSBPlayerHammerAttack : public zSBPlayerAction {
    // Members
    enum interruptLevel interrupt; // offset 0x10, size 0x4
    bool airHammer; // offset 0x14, size 0x1
    float sideAmount; // offset 0x18, size 0x4
};
enum interruptLevel {
    eHammerInterrupt_None = 0,
    eHammerInterrupt_High = 1,
    eHammerInterrupt_Med = 2,
    eHammerInterrupt_DontRecoil = 3,
    eHammerInterrupt_Count = 4,
};
// total size: 0x114
class hkpHammerRecoilCdBodyPairCollector : public hkpAllCdBodyPairCollector {};
// total size: 0x30
class zSBPlayerPuckAttack : public zSBPlayerAction {
    // Members
    float lastTurnSpeed; // offset 0x10, size 0x4
    float pastConstSpeedPercTimer; // offset 0x14, size 0x4
    float chargingTimer; // offset 0x18, size 0x4
    bool charging; // offset 0x1C, size 0x1
    enum eFacingState facingState; // offset 0x20, size 0x4
    class xVec3 cameraFacing; // offset 0x24, size 0xC
};
enum eFacingState {
    PUCK_Wait = 0,
    PUCK_Turning = 1,
    PUCK_FacingCam = 2,
};
// total size: 0x60
class zPlayerLedgeSB : public zCommonPlayerInterAction {
    // Members
    class xMat4x3 startUpMat; // offset 0x14, size 0x40
    class xVec3 curveStart; // offset 0x54, size 0xC
};
// total size: 0x60
class zPlayerHitSB : public zPlayerHit {
    // Members
    float hitHammerTimer; // offset 0x10, size 0x4
    float hitElectricityTimer; // offset 0x14, size 0x4
    class xAnimState * variants[15]; // offset 0x18, size 0x3C
    int numVariants; // offset 0x54, size 0x4
    int numValid; // offset 0x58, size 0x4
    bool noRepeats; // offset 0x5C, size 0x1
};
// total size: 0x10
class zPlayerHitLaunchSB : public zPlayerHitLaunch {};
// total size: 0x20
class zSBPlayerFillWithGoo : public zSBPlayerAction {
    // Members
    class xVec3 targetVector; // offset 0x10, size 0xC
    bool turnDone; // offset 0x1C, size 0x1
};
// total size: 0x10
class zSBPlayerDrainGoo : public zSBPlayerAction {};
// total size: 0x10
class zSBPlayerGainPowerup : public zSBPlayerAction {};
// total size: 0x10
class zSBPlayerSpinPowerupAttack : public zSBPlayerAction {};
// total size: 0x10
class zSBPlayerHammerPowerupAttack : public zSBPlayerAction {};
// total size: 0x10
class zSBPlayerPuckPowerupAttack : public zSBPlayerAction {};
// total size: 0x10
class zSBPlayerLosePowerup : public zSBPlayerAction {};
// total size: 0x10
class zSBPlayerCandy : public zSBPlayerAction {};
// total size: 0x18
class zSBPlayerQuicksandJump : public zSBPlayerAction {
    // Members
    float time; // offset 0x10, size 0x4
    float distance; // offset 0x14, size 0x4
};
// total size: 0x10
class zSBPlayerQuicksandStuck : public zSBPlayerAction {};
// total size: 0x20
class zSBPlayerBungeeBall : public zSBPlayerAction {
    // Members
    float lastTurnSpeed; // offset 0x10, size 0x4
    float pastConstSpeedPercTimer; // offset 0x14, size 0x4
    float lastYaw; // offset 0x18, size 0x4
    bool bungeeBallTransfer; // offset 0x1C, size 0x1
};
// total size: 0x14
class zSBPlayerBombRoll : public zSBPlayerAction {
    // Members
    float lastYaw; // offset 0x10, size 0x4
};
// total size: 0x10
class zPlayerCheatSB : public zPlayerCheat {};
// total size: 0x14
class zSBPlayerKelpTrap : public zSBPlayerAction {
    // Members
    float buttonsMashed; // offset 0x10, size 0x4
};
// total size: 0x6C
class zPlayerDefeatedSB : public zSBPlayerAction {
    // Members
    float timer; // offset 0x10, size 0x4
    float resetTime; // offset 0x14, size 0x4
    float screenFadeTimer; // offset 0x18, size 0x4
    bool screenFadeStarted; // offset 0x1C, size 0x1
    class xAnimState * variants[3]; // offset 0x20, size 0xC
    int numVariants; // offset 0x2C, size 0x4
    int numValid; // offset 0x30, size 0x4
    class xAnimState * lavaVariants[3]; // offset 0x34, size 0xC
    int numLavaVariants; // offset 0x40, size 0x4
    int numLavaValid; // offset 0x44, size 0x4
    class xAnimState * gooVariants[2]; // offset 0x48, size 0x8
    int numGooVariants; // offset 0x50, size 0x4
    int numGooValid; // offset 0x54, size 0x4
    class xAnimState * acidVariants[2]; // offset 0x58, size 0x8
    int numAcidVariants; // offset 0x60, size 0x4
    int numAcidValid; // offset 0x64, size 0x4
    float frozenVentCurSpeed; // offset 0x68, size 0x4
};
// total size: 0x14
class zPlayerFallToDeathSB : public zPlayerFallToDeath {};
// total size: 0x10
class zPlayerCelebrationSB : public zSBPlayerAction {};
// total size: 0x2C
class MappedLaser : public MappedElectricity {};
// total size: 0x2C
class MappedElectricity : public Electricity {
    // Members
    class xVec3 * refRowsOffset; // offset 0x18, size 0x4
    class xVec3 * refRowsOffsetNew; // offset 0x1C, size 0x4
    int * refRowsSet; // offset 0x20, size 0x4
    int mappedRows; // offset 0x24, size 0x4
    float * rowsAlphaScale; // offset 0x28, size 0x4
};
// total size: 0x18
class Electricity : public CylinderRenderable {
    // Members
    class xVec3 * rowsOffset; // offset 0xC, size 0x4
    int framecounters[2]; // offset 0x10, size 0x8
};
// total size: 0x18
class LOSChecker : public hkpRayHitCollector {
    // Members
    float minHitFraction; // offset 0x8, size 0x4
    class xBase * hitObj; // offset 0xC, size 0x4
    bool hitIt; // offset 0x10, size 0x1
    float hitFraction; // offset 0x14, size 0x4
};
// total size: 0xC
class EventActionAnimPlay : public EventActionNew {
    // Members
    unsigned int param0; // offset 0x0, size 0x4
    float param2; // offset 0x4, size 0x4
    float param3; // offset 0x8, size 0x4
};
// total size: 0x10
class zPlayerIdleShooting : public zPlayerAction {};
// total size: 0xBB0
class zShootingPlayer : public zCommonPlayer {
    // Members
    enum shootingState currentState; // offset 0x898, size 0x4
    class hkpShapePhantom * phantomShooting; // offset 0x89C, size 0x4
    bool appear; // offset 0x8A0, size 0x1
    float appearBlend; // offset 0x8A4, size 0x4
    bool appearing; // offset 0x8A8, size 0x1
    bool disappearing; // offset 0x8A9, size 0x1
    bool usingMirrorHoverPosition; // offset 0x8AA, size 0x1
    bool forceHoverPosition; // offset 0x8AB, size 0x1
    float yOffsetFromPlayer; // offset 0x8AC, size 0x4
    class ElectricArc * stunElectricArc; // offset 0x8B0, size 0x4
    class ElectricArc * damageElectricArc; // offset 0x8B4, size 0x4
    class ElectricArc * shakeElectricArc; // offset 0x8B8, size 0x4
    enum OwnerType currentOwnerType; // offset 0x8BC, size 0x4
    class zShootingPlayerShakeHelper shakeHelper; // offset 0x8C0, size 0x2C0
    class xVec3 emitterPos; // offset 0xB80, size 0xC
    class xVec3 lookAtPos; // offset 0xB8C, size 0xC
    class xVec3 emitterLookAtDir; // offset 0xB98, size 0xC
};
enum shootingState {
    SHOOTING_Hidden = 0,
    SHOOTING_Idle = 1,
    SHOOTING_Enter = 2,
    SHOOTING_Exit = 3,
    SHOOTING_Talk = 4,
    SHOOTING_Shake = 5,
    SHOOTING_ShakeMiss = 6,
    SHOOTING_ZapStun = 7,
    SHOOTING_ZapHurt = 8,
    SHOOTING_ZapMiss = 9,
};
// total size: 0x2C0
class zShootingPlayerShakeHelper {
    // Members
    class TweakParams tweakParams; // offset 0x0, size 0x74
    class xEnt * shakeEnt; // offset 0x74, size 0x4
    class xBase * targettedBase; // offset 0x78, size 0x4
    class xVec3 targettedPosition; // offset 0x7C, size 0xC
    class zFloatingCollectible * targettedCollectible; // offset 0x88, size 0x4
    float collectibleGrabTimer; // offset 0x8C, size 0x4
    bool hideReticle; // offset 0x90, size 0x1
    bool prevHideReticle; // offset 0x91, size 0x1
    bool reticleOffScreen; // offset 0x92, size 0x1
    class xVec3 grabPos; // offset 0x94, size 0xC
    float grabTime; // offset 0xA0, size 0x4
    float grabOffscreenTime; // offset 0xA4, size 0x4
    float grabOutOfRangeTime; // offset 0xA8, size 0x4
    float energyShake; // offset 0xAC, size 0x4
    float energyShakeDelayTime; // offset 0xB0, size 0x4
    float energyStun; // offset 0xB4, size 0x4
    float energyStunDelayTime; // offset 0xB8, size 0x4
    int zapAmmo; // offset 0xBC, size 0x4
    float zapDelayTime; // offset 0xC0, size 0x4
    bool inDamageMode; // offset 0xC4, size 0x1
    class xVec2 reticleActualPos; // offset 0xC8, size 0x8
    class xVec2 reticleGoalPos; // offset 0xD0, size 0x8
    class xVec2 reticleAssistedPos; // offset 0xD8, size 0x8
    class ElectricArc * stunElectricArc; // offset 0xE0, size 0x4
    float stunElectricArcTimer; // offset 0xE4, size 0x4
    class ElectricArc * damageElectricArc; // offset 0xE8, size 0x4
    float damageElectricArcTimer; // offset 0xEC, size 0x4
    class ElectricArc * shakeElectricArc; // offset 0xF0, size 0x4
    class zFXSpawn * shakeEffectSpawnPt; // offset 0xF4, size 0x4
    class zFXSpawn * shakeEffectFXScript; // offset 0xF8, size 0x4
    class zShootingSwingGesture swingGesture; // offset 0xFC, size 0x50
    class zShootingShakeGesture shakeGesture; // offset 0x150, size 0x170
};
// total size: 0x74
class TweakParams {
    // Members
    float GrabTimeLimit; // offset 0x0, size 0x4
    float GrabMaxDistFromPlayer; // offset 0x4, size 0x4
    float GrabOffscreenTimeLimit; // offset 0x8, size 0x4
    float GrabOutOfRangeTimeLimit; // offset 0xC, size 0x4
    float GrabCollectibleGrabTime; // offset 0x10, size 0x4
    unsigned int GrabSwingStability; // offset 0x14, size 0x4
    unsigned int GrabSlamStability; // offset 0x18, size 0x4
    float GrabSlamThreshold; // offset 0x1C, size 0x4
    float EnergyShakeDrainRate; // offset 0x20, size 0x4
    float EnergyShakeRestoreDelay; // offset 0x24, size 0x4
    float EnergyShakeRestoreRate; // offset 0x28, size 0x4
    float EnergyStunRestoreDelay; // offset 0x2C, size 0x4
    float EnergyStunRestoreRate; // offset 0x30, size 0x4
    float ZapDamageDelay; // offset 0x34, size 0x4
    float ZapDamageAmount; // offset 0x38, size 0x4
    int ZapDamageMaxAmmo; // offset 0x3C, size 0x4
    float StunElectricArcTime; // offset 0x40, size 0x4
    float DamageElectricArcTime; // offset 0x44, size 0x4
    float StunDelayTime; // offset 0x48, size 0x4
    float DamageDelayTime; // offset 0x4C, size 0x4
    float ZapIneffectiveArcRange; // offset 0x50, size 0x4
    float AimAssistCastDistanceFromCamera; // offset 0x54, size 0x4
    float AimAssistCastRadius; // offset 0x58, size 0x4
    float AimAssistMaxScreenSpaceDistance; // offset 0x5C, size 0x4
    float AimAssistTrackingRate; // offset 0x60, size 0x4
    float MaxRayCastDistance; // offset 0x64, size 0x4
    float StickSensitivity; // offset 0x68, size 0x4
    float StickSensitivityLeftMultiplier; // offset 0x6C, size 0x4
    float StickSensitivityRightMultiplier; // offset 0x70, size 0x4
};
// total size: 0x50
class zShootingSwingGesture {
    // Members
    class xVec3 lastAcc; // offset 0x0, size 0xC
    class xVec3 deltaAcc; // offset 0xC, size 0xC
    class xVec3 dirVec2; // offset 0x18, size 0xC
    float dirSpeedMax2; // offset 0x24, size 0x4
    class xVec2 swing2D; // offset 0x28, size 0x8
    int swing2Stability; // offset 0x30, size 0x4
    bool firstUpdate; // offset 0x34, size 0x1
    float ACC_MAX; // offset 0x38, size 0x4
    float ACC_DAMP; // offset 0x3C, size 0x4
    float DIR_VEC_DAMP; // offset 0x40, size 0x4
    float DIR_SPEED_DAMP; // offset 0x44, size 0x4
    float DIR_SPEED_MIN; // offset 0x48, size 0x4
    float DIR_VEC_CLAMP; // offset 0x4C, size 0x4
};
// total size: 0x170
class zShootingShakeGesture {
    // Members
    class TweakParams tweakParams; // offset 0x0, size 0x8
    class Time swingTimes[2][20]; // offset 0x8, size 0x140
    unsigned int swingFirstIndex[2]; // offset 0x148, size 0x8
    unsigned int swingCount[2]; // offset 0x150, size 0x8
    float swingLastDir[2]; // offset 0x158, size 0x8
    class xVec3 filteredAcc; // offset 0x160, size 0xC
};
// total size: 0x8
class TweakParams {
    // Members
    float ShakeAccelFilter; // offset 0x0, size 0x4
    float ShakeThreshold; // offset 0x4, size 0x4
};
// total size: 0x4
class EventActionOn : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
};
// total size: 0x34
class zShootingShakeState {
    // Members
    class xVec3 lookAtPoint; // offset 0x0, size 0xC
    class xVec2 swingPos; // offset 0xC, size 0x8
    class xVec2 swingVel; // offset 0x14, size 0x8
    float x; // offset 0x1C, size 0x4
    float y; // offset 0x20, size 0x4
    int shakeCountX; // offset 0x24, size 0x4
    int shakeCountY; // offset 0x28, size 0x4
    bool performSlam; // offset 0x2C, size 0x1
    bool performingAutoShake; // offset 0x2D, size 0x1
    float autoShakeDelay; // offset 0x30, size 0x4
};
enum eSceneInitState {
    eSceneInit = 0,
    eLoadingPlayer = 1,
    eLoadingScenes = 2,
    eInitObjects = 3,
};
// total size: 0x560
class zSoundModule : public Module {
    // Members
    float masterVolumeMusic; // offset 0x98, size 0x4
    float masterVolumeSFX; // offset 0x9C, size 0x4
    float masterVolumeCine; // offset 0xA0, size 0x4
    float masterVolumeDialog; // offset 0xA4, size 0x4
    bool masterVolumeChanged; // offset 0xA8, size 0x1
    char spuProgram[256]; // offset 0xA9, size 0x100
    char spuProgramMpeg[256]; // offset 0x1A9, size 0x100
    char mediaPath[256]; // offset 0x2A9, size 0x100
    void * soundMemory; // offset 0x3AC, size 0x4
    float fadeFraction; // offset 0x3B0, size 0x4
    float fadeCurrentTime; // offset 0x3B4, size 0x4
    float fadeTotalTime; // offset 0x3B8, size 0x4
    bool isFadeIn; // offset 0x3BC, size 0x1
    float beforeFadeInTime; // offset 0x3C0, size 0x4
    int unPauseFromSystemCount; // offset 0x3C4, size 0x4
    class zQueue loadingEventList; // offset 0x3C8, size 0x198
};
// total size: 0x198
class zQueue {
    // Members
    int first; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    class Event * data[100]; // offset 0x8, size 0x190
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
// total size: 0x10
class PolygonMask {
    // Members
    class __vertices__ vertices; // offset 0x0, size 0x8
    float directOcclusion; // offset 0x8, size 0x4
    float reverbOcclusion; // offset 0xC, size 0x4
};
// total size: 0x8
class __vertices__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x20
class Iterator {
    // Members
    class Iterator itObj; // offset 0x0, size 0xC
    class Iterator itUpd; // offset 0xC, size 0xC
    int idx; // offset 0x18, size 0x4
    class OGUpdateList * owner; // offset 0x1C, size 0x4
};
// total size: 0xC
class Iterator : public ConstIterator {};
// total size: 0xC
class ConstIterator {
    // Members
    class xBase * * it; // offset 0x0, size 0x4
    class Block * block; // offset 0x4, size 0x4
    class BlockAllocatorArray * owner; // offset 0x8, size 0x4
};
// total size: 0xC
class ConstIterator {
    // Members
    unsigned int * it; // offset 0x0, size 0x4
    class Block * block; // offset 0x4, size 0x4
    class BlockAllocatorArray * owner; // offset 0x8, size 0x4
};
// total size: 0x8
class zTransparentCheckingHitCollector : public hkpRayHitCollector {};
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
// total size: 0x58
class ScreenWarp : public xOGEntity {
    // Members
    class ScreenWarp * mAsset; // offset 0x3C, size 0x4
    class xVec3 * mLocationOG; // offset 0x40, size 0x4
    class Vector2 mLocation; // offset 0x44, size 0x8
    class Warp * mWarp; // offset 0x4C, size 0x4
    unsigned short mScreenWarpFlags; // offset 0x50, size 0x2
};
// total size: 0x4
class EventActionTimer : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
};
// total size: 0xE0
class zFrag : public xBase {
    // Members
    class EntityHandleBase dummyHandle; // offset 0x38, size 0x48
    class zFragInfo info; // offset 0x80, size 0x40
    float alpha; // offset 0xC0, size 0x4
    float alivetime; // offset 0xC4, size 0x4
    float lifetime; // offset 0xC8, size 0x4
    float intraFragCollisionDelay; // offset 0xCC, size 0x4
    class HavokSimObj havokSimObj; // offset 0xD0, size 0x4
    class zFXSpawn * owner; // offset 0xD4, size 0x4
    class zFrag * prev; // offset 0xD8, size 0x4
    class zFrag * next; // offset 0xDC, size 0x4
};
// total size: 0x40
class zFragInfo {
    // Members
    class zFragProjectile projectile; // offset 0x0, size 0x40
};
// total size: 0x40
class zFragProjectile {
    // Members
    class zFXSpawn * spawnPt; // offset 0x0, size 0x4
    class Projectile * fasset; // offset 0x4, size 0x4
    class xOGModelHandle model; // offset 0x8, size 0x8
    class ModelInstanceAsset * modelInstanceAsset; // offset 0x10, size 0x4
    class zSoundSourcesPhysics soundSourcesPhysics; // offset 0x18, size 0x18
    float alpha; // offset 0x30, size 0x4
    unsigned long long shrapnelID; // offset 0x38, size 0x8
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
    class vec3 scale; // offset 0xE0, size 0xC
    float maxVelocity; // offset 0xEC, size 0x4
    class zFragLightInfo lightInfo; // offset 0xF0, size 0x20
    class uid fxSpawn; // offset 0x110, size 0x8
    class SoundBankSource Sound; // offset 0x118, size 0xC
};
// total size: 0x8
class zFragAsset {
    // Members
    float Lifetime; // offset 0x0, size 0x4
    float Delay; // offset 0x4, size 0x4
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
// total size: 0x4
class EventSystem {};
// total size: 0x1
class System {};
// total size: 0x4
class MusicSystem {};
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
// total size: 0xC
class FMOD_WII_INFO {
    // Members
    int dvdreadpriority; // offset 0x0, size 0x4
    int muteremotespeakerifnosound; // offset 0x4, size 0x4
    int audiolibsinitialized; // offset 0x8, size 0x4
};
// total size: 0x4
class EventGroup {};
// total size: 0x4
class EventProject {};
// total size: 0x18
class FMOD_EVENT_SYSTEMINFO {
    // Members
    int numevents; // offset 0x0, size 0x4
    int numinstances; // offset 0x4, size 0x4
    int maxwavebanks; // offset 0x8, size 0x4
    class FMOD_EVENT_WAVEBANKINFO * wavebankinfo; // offset 0xC, size 0x4
    int numplayingevents; // offset 0x10, size 0x4
    class FMOD_EVENT * * playingevents; // offset 0x14, size 0x4
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
// total size: 0x4
class EventCategory {};
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
// total size: 0x34
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
    class FMOD_GUID * guid; // offset 0x30, size 0x4
};
// total size: 0x10
class FMOD_GUID {
    // Members
    unsigned int Data1; // offset 0x0, size 0x4
    unsigned short Data2; // offset 0x4, size 0x2
    unsigned short Data3; // offset 0x6, size 0x2
    unsigned char Data4[8]; // offset 0x8, size 0x8
};
// total size: 0x20
class NodeType : public NodeHeader {
    // Members
    class EventInstance value; // offset 0x8, size 0x18
};
// total size: 0x18
class EventInstance {
    // Members
    unsigned long long owner; // offset 0x0, size 0x8
    class Event * event; // offset 0x8, size 0x4
    class FMOD_VECTOR * position; // offset 0xC, size 0x4
    float max3Ddistance; // offset 0x10, size 0x4
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
// total size: 0x58
class zSoundNamed {
    // Members
    class SoundNamed m_asset; // offset 0x0, size 0x10
    class zSoundAsset m_soundAsset; // offset 0x10, size 0x48
};
// total size: 0x10
class SoundNamed {
    // Members
    class Pointer32 Name; // offset 0x0, size 0x4
    class SoundBankSource BankSource; // offset 0x4, size 0xC
};
// total size: 0x48
class zSoundsNamed : public xOGEntity {
    // Members
    class zSoundsNamedAsset * asset; // offset 0x3C, size 0x4
    class zSoundNamed * m_pSounds; // offset 0x40, size 0x4
    unsigned int m_soundsQuantity; // offset 0x44, size 0x4
};
// total size: 0x48
class zSoundWiimoteSpeakerList : public xOGEntity {
    // Members
    class zSoundWiimoteSpeakerListAsset * asset; // offset 0x3C, size 0x4
    class zSoundAsset * soundAssetList; // offset 0x40, size 0x4
    int soundCount; // offset 0x44, size 0x4
};
// total size: 0x1
class Geometry {};
// total size: 0x140
class zInteractiveMusic : public xOGEntity {
    // Members
    bool (zInteractiveMusic::* ConditionFunc[10])(void * this, void * this); // offset 0x3C, size 0x78
    float CurrentValue[10]; // offset 0xB4, size 0x28
    class zInteractiveMusicAsset * asset; // offset 0xDC, size 0x4
    class zSoundAsset music; // offset 0xE0, size 0x48
    class ZoneMarker * * zone; // offset 0x128, size 0x4
    class ZoneMarker * playerInZone[4]; // offset 0x12C, size 0x10
    int zoneCount; // offset 0x13C, size 0x4
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
// total size: 0x4
class Pointer32 {
    // Members
    unsigned int _p; // offset 0x0, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    class hkpShape * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x8
class zTikiCollisionListener : public hkpCollisionListener {
    // Members
    class zTiki * owner; // offset 0x4, size 0x4
};
// total size: 0xA0
class zTiki : public xEffectAttachIntf {
    // Members
    enum enState state; // offset 0x3C, size 0x4
    float sqrDistActivation; // offset 0x40, size 0x4
    float sqrDistExplosionActivation; // offset 0x44, size 0x4
    enum TikiType type; // offset 0x48, size 0x4
    class zDestructible * destructible; // offset 0x4C, size 0x4
    float explodeCountdown; // offset 0x50, size 0x4
    class zTikiAsset * asset; // offset 0x54, size 0x4
    class xVec3 accumRelPos; // offset 0x58, size 0xC
    float fallWaitTimer; // offset 0x64, size 0x4
    float ySpeed; // offset 0x68, size 0x4
    float depen; // offset 0x6C, size 0x4
    class xVec3 depenEntitySurfaceVel; // offset 0x70, size 0xC
    class xOGEntity * depenEntity; // offset 0x7C, size 0x4
    class xOGEntity * driverEntity; // offset 0x80, size 0x4
    bool settled; // offset 0x84, size 0x1
    bool isOnDamageSurface; // offset 0x85, size 0x1
    bool isHovering; // offset 0x86, size 0x1
    bool destroyedByPlankton; // offset 0x87, size 0x1
    bool tikiCollisionOn; // offset 0x88, size 0x1
    bool bspOn; // offset 0x89, size 0x1
    bool visible; // offset 0x8A, size 0x1
    bool requiresPhysicsFreeze; // offset 0x8B, size 0x1
    bool isDriving; // offset 0x8C, size 0x1
    bool deactivatedOnce; // offset 0x8D, size 0x1
    class hkpRigidBody * physicsObject; // offset 0x90, size 0x4
    class zTikiCollisionListener tikiListener; // offset 0x94, size 0x8
    float hitTimer; // offset 0x9C, size 0x4
};
enum enState {
    Idle = 0,
    IdleActive = 1,
    Hit = 2,
    Death = 3,
    FluidFill = 4,
    Unactive = 5,
};
// total size: 0x18
class ElectricSpotLight : public CylinderRenderable {
    // Members
    class ImmediatePrototypeEntity * iStencilModelFront; // offset 0xC, size 0x4
    class ImmediatePrototypeEntity * iStencilModelBack; // offset 0x10, size 0x4
    class ImmediatePrototypeEntity * iStencilModelFinal; // offset 0x14, size 0x4
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
// total size: 0xD0
class zSpringboard : public xEnt {
    // Members
    class Springboard * asset; // offset 0xBC, size 0x4
    enum State state; // offset 0xC0, size 0x4
    float anglePitch; // offset 0xC4, size 0x4
    float angleYaw; // offset 0xC8, size 0x4
};
enum State {
    Idle = 0,
    Compressing = 1,
    Compressed = 2,
    Launching = 3,
    Failed = 4,
};
// total size: 0x88
class zSinkingSurface : public zInteractionUP {
    // Members
    class zSinkingSurfaceAsset * asset; // offset 0x50, size 0x4
    bool Alive; // offset 0x54, size 0x1
    bool canJump; // offset 0x55, size 0x1
    bool hasSurfaceLevelSet; // offset 0x56, size 0x1
    bool deathUseCharHeight; // offset 0x57, size 0x1
    class zTrigger * * triggers; // offset 0x58, size 0x4
    float sinkingSpeed; // offset 0x5C, size 0x4
    float surfaceSpeed; // offset 0x60, size 0x4
    float submergedSpeed; // offset 0x64, size 0x4
    float jumpSpeed; // offset 0x68, size 0x4
    float jumpTimerMax; // offset 0x6C, size 0x4
    float surfaceYValue; // offset 0x70, size 0x4
    float deathDepth; // offset 0x74, size 0x4
    class zAnimPackage * dugAnimSink; // offset 0x78, size 0x4
    class zAnimPackage * carlAnimSink; // offset 0x7C, size 0x4
    class zAnimPackage * russellAnimSink; // offset 0x80, size 0x4
    class zAnimPackage * kevinAnimSink; // offset 0x84, size 0x4
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
// total size: 0x1
class zTriggerSetup_CB {};
// total size: 0xF0
class zTriggerEntity : public zTrigger {
    // Members
    int threshold; // offset 0xCC, size 0x4
    int numberOfEntitiesWasInside; // offset 0xD0, size 0x4
    int numberOfBaseStatus; // offset 0xD4, size 0x4
    class zTriggerEntityStatus * baseStatus; // offset 0xD8, size 0x4
    class TriggerEntityAsset * triggerEntAsset; // offset 0xDC, size 0x4
    bool hasReplyLink : 1; // offset 0xE0, size 0x1, bit offset 0
    bool hasAnyLink : 1; // offset 0xE0, size 0x1, bit offset 1
    bool hasThresholdLink : 1; // offset 0xE0, size 0x1, bit offset 2
    bool hasDynamicGroups : 1; // offset 0xE0, size 0x1, bit offset 3
};
// total size: 0x8
class zTriggerEntityStatus {
    // Members
    class xBase * basePtr; // offset 0x0, size 0x4
    bool isInside : 1; // offset 0x4, size 0x1, bit offset 0
    bool crossedTrigger : 1; // offset 0x4, size 0x1, bit offset 1
    bool isDynamicGroup : 1; // offset 0x4, size 0x1, bit offset 2
    bool stillInDynamicGroup : 1; // offset 0x4, size 0x1, bit offset 3
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
// total size: 0x18
class EventActionPlayMovie : public EventActionNew {
    // Members
    unsigned int param0; // offset 0x0, size 0x4
    unsigned int paramSkippable; // offset 0x4, size 0x4
    class uid paramWidgetAssetID; // offset 0x8, size 0x8
    class uid paramSubtitles; // offset 0x10, size 0x8
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
// total size: 0x30
class ImmediateRenderUIImage {
    // Members
    class ImmediateContext immContext; // offset 0x0, size 0x2C
    class Renderable3DTransform * xform; // offset 0x2C, size 0x4
};
// total size: 0x1
class zUIMgrInit_FindElementsCB {};
// total size: 0x1
class ElementCompare {};
// total size: 0x100
class zUIModel : public zUI {
    // Members
    class xAnimTable * atbl; // offset 0xF8, size 0x4
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
// total size: 0xC
class var_type {
    // Members
    class substr name; // offset 0x0, size 0x8
    char * (* get_text)(); // offset 0x8, size 0x4
};
// total size: 0xA8
class zWaterWheel : public xOGEntity {
    // Members
    class zWaterWheelAsset * asset; // offset 0x3C, size 0x4
    class hkpRigidBody * rigidBody; // offset 0x40, size 0x4
    float torqueAccum; // offset 0x44, size 0x4
    float angularVelocity; // offset 0x48, size 0x4
    float angle; // offset 0x4C, size 0x4
    int numSpins; // offset 0x50, size 0x4
    float ballastAngle; // offset 0x54, size 0x4
    float extraWobblePhase; // offset 0x58, size 0x4
    float extraWobbleMagnitude; // offset 0x5C, size 0x4
    float extraWobbleAccum; // offset 0x60, size 0x4
    class xMat4x3 baseMat; // offset 0x64, size 0x40
    bool isTurning; // offset 0xA4, size 0x1
    bool wasActivated; // offset 0xA5, size 0x1
};
// total size: 0x48
class xOGEntitySoundBankWrap : public xOGEntity {
    // Members
    unsigned long long assetID; // offset 0x40, size 0x8
};
// total size: 0x58
class Global {
    // Members
    class SystemI * gSystemHead; // offset 0x0, size 0x4
    class MemPool * gSystemPool; // offset 0x4, size 0x4
    int gSystemInitCount; // offset 0x8, size 0x4
    class FMOD_UINT64P gDSPClock; // offset 0x10, size 0x8
    unsigned int gDSPClockTimeStamp; // offset 0x18, size 0x4
    int gFileBusy; // offset 0x1C, size 0x4
    enum FMOD_RESULT (* gSystemCallback)(class FMOD_SYSTEM * system, enum FMOD_SYSTEM_CALLBACKTYPE type, void * commanddata1, void * commanddata2); // offset 0x20, size 0x4
    unsigned int gMemoryTypeFlags; // offset 0x24, size 0x4
    class LinkedListNode gFileThreadHead; // offset 0x28, size 0xC
    class FMOD_OS_CRITICALSECTION * gFileCrit; // offset 0x34, size 0x4
    class malloc_params gDLMalloc_mparams; // offset 0x38, size 0x18
    int gRandomValue; // offset 0x50, size 0x4
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
// total size: 0xC
class LinkedListNode {
    // Members
    class LinkedListNode * mNodeNext; // offset 0x0, size 0x4
    class LinkedListNode * mNodePrev; // offset 0x4, size 0x4
    void * mNodeData; // offset 0x8, size 0x4
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
// total size: 0x8
class BlackAndWhiteBlendSettings {
    // Members
    bool Enabled; // offset 0x0, size 0x1
    float BlendFactor; // offset 0x4, size 0x4
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
// total size: 0x98
class ScreenWarpManager : public Module {
    // Members
    bool mInitialized; // offset 0x95, size 0x1
};
// total size: 0x2F0
class SaveData {
    // Members
    class SaveDataHeader headerData[3]; // offset 0x0, size 0x3C
    int curFileCount; // offset 0x3C, size 0x4
    void (* curCB)(int result); // offset 0x40, size 0x4
    int lastRequest; // offset 0x44, size 0x4
    void * curBuffer; // offset 0x48, size 0x4
    int curBufferSize; // offset 0x4C, size 0x4
    char * internalBuffer; // offset 0x50, size 0x4
    int internalBuffSize; // offset 0x54, size 0x4
    int curRequest; // offset 0x58, size 0x4
    bool isSaving; // offset 0x5C, size 0x1
    bool isCopying; // offset 0x5D, size 0x1
    int userCancelled; // offset 0x60, size 0x4
    bool lastRequestSucceeded; // offset 0x64, size 0x1
    class SaveDataHeader curHeader; // offset 0x68, size 0x14
    void * callBackData; // offset 0x7C, size 0x4
    int curSlot; // offset 0x80, size 0x4
    char filePath[64]; // offset 0x84, size 0x40
    char bannerPath[64]; // offset 0xC4, size 0x40
    char destPath[64]; // offset 0x104, size 0x40
    class NANDCommandBlock block; // offset 0x144, size 0xBC
    class NANDFileInfo fileInfo; // offset 0x200, size 0x8C
    void * bannerImage; // offset 0x28C, size 0x4
    void * bannerIcon[1]; // offset 0x290, size 0x4
    class Time lastSaveTime; // offset 0x298, size 0x8
    unsigned char dummyVar8; // offset 0x2A0, size 0x1
    unsigned long dummyVar32; // offset 0x2A4, size 0x4
    bool savingBanner; // offset 0x2A8, size 0x1
    bool needToSaveBanner; // offset 0x2A9, size 0x1
    bool stepDone; // offset 0x2AA, size 0x1
    int copyBufferSize; // offset 0x2AC, size 0x4
    char * copyBuffer; // offset 0x2B0, size 0x4
    class SaveErrorMsgBox saveErrorMsgBox; // offset 0x2B4, size 0x38
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
