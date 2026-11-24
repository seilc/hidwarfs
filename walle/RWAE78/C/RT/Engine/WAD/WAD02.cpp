/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800CFAC0 -> 0x8015C1C8
*/
extern struct {} __vt__17hkpWorldRayCaster; // size: 0x10
// total size: 0x10
class _OGFloatingCollectibleEntity : public xOGEntity {};
// total size: 0x18
class _OGFloatingCollectibleSchema : public Schema {};
// total size: 0x90
class zObjectGeneratorSpawnPt : public xBase {
    // Members
    float emitted; // offset 0x20, size 0x4
    float maxEmit; // offset 0x24, size 0x4
    float forcedAgeRate; // offset 0x28, size 0x4
    bool removeObjects; // offset 0x2C, size 0x1
    class ObjGenSpawnPtAsset * asset; // offset 0x30, size 0x4
    class zObjectGenerator * pgOwner; // offset 0x34, size 0x4
    unsigned int state; // offset 0x38, size 0x4
    float cullDistance; // offset 0x3C, size 0x4
    int cullPriority; // offset 0x40, size 0x4
    class xBaseTransform baseTransform; // offset 0x44, size 0x48
    int generatorSpawnPtIdx; // offset 0x8C, size 0x4
};
// total size: 0x38
class ObjGenSpawnPtAsset : public xBaseAsset {
    // Members
    class vec3 position; // offset 0x10, size 0xC
    class Rotation3 orientation; // offset 0x1C, size 0xC
    class uid objectGenerator; // offset 0x28, size 0x8
    float cullDistance; // offset 0x30, size 0x4
    int cullPriority; // offset 0x34, size 0x4
};
// total size: 0x30
class zObjectGenerator : public xBase {
    // Members
    class object_generator * asset; // offset 0x20, size 0x4
    int flags; // offset 0x24, size 0x4
    float lifetime; // offset 0x28, size 0x4
};
// total size: 0x128
class zShrapnelSpawnPt : public xBase {
    // Members
    class zShrapnelLauncherNode launchNode; // offset 0x20, size 0x18
    class ShrapnelSpawnPtAsset * asset; // offset 0x38, size 0x4
    unsigned int state; // offset 0x3C, size 0x4
    class xBaseTransform baseTransform; // offset 0x40, size 0x48
    class xModelInstance dummyModel; // offset 0x88, size 0xA0
};
// total size: 0x18
class zShrapnelLauncherNode {
    // Members
    unsigned long long launcherID; // offset 0x0, size 0x8
    unsigned long long shrapnelAssetID; // offset 0x8, size 0x8
    class ShrapnelAssetDef * shrapnelAsset; // offset 0x10, size 0x4
};
// total size: 0x30
class ShrapnelSpawnPtAsset : public xBaseAsset {
    // Members
    class vec3 position; // offset 0x10, size 0xC
    class Rotation3 orientation; // offset 0x1C, size 0xC
    class uid shrapnelAsset; // offset 0x28, size 0x8
};
// total size: 0x4
class zCreatorI {};
// total size: 0x30
class zNPCGroupBase : public xBase {
    // Members
    class zNPCGroupType * type; // offset 0x20, size 0x4
    class NPCGroupAsset * asset; // offset 0x24, size 0x4
    class zNPCBase * * npcs; // offset 0x28, size 0x4
    unsigned int npcsNum; // offset 0x2C, size 0x4
};
// total size: 0x14
class zNPCGroupType {
    // Members
    enum eNPCGroupType npcGroupTypeEnum; // offset 0x0, size 0x4
    class zNPCGroupBase * (* allocateNPCGroupFunction)(); // offset 0x4, size 0x4
    unsigned int npcGroupTID_ID; // offset 0x8, size 0x4
    unsigned int npcGroupTID_Mask; // offset 0xC, size 0x4
};
enum eNPCGroupType {
    eNPCGroupType_Unknown = 4294967295,
    eNPCGroupType_Centipede = 0,
    eNPCGroupType_Circle = 1,
    eNPCGroupType_SpaceInvaders = 2,
    eNPCGroupTypeCount = 3,
    eNPCGroupTypeForceInt = 2147483647,
};
// total size: 0x30
class NPCGroupAsset : public xDynAsset {
    // Members
    class __NPCs__ NPCs; // offset 0x20, size 0x8
    class LinkAsset EventLinksNew; // offset 0x28, size 0x8
};
// total size: 0x8
class __NPCs__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x9C
class zNPCSteering : public zNPCComponent {
    // Members
    class zNPCSteeringCollisionHandler * steeringCollisionListener; // offset 0x8, size 0x4
    class xVec3 externalAccAccum; // offset 0xC, size 0xC
    class xVec3 externalVelocityAccum; // offset 0x18, size 0xC
    class xVec3 externalMomentumlessVelAccum; // offset 0x24, size 0xC
    class xVec3 supportVel; // offset 0x30, size 0xC
    class xVec3 wantedVel; // offset 0x3C, size 0xC
    class xVec3 wantedHeading; // offset 0x48, size 0xC
    class xSpringyAngle turnSpring; // offset 0x54, size 0x18
    class zWallNetPosition wallNetPosition; // offset 0x6C, size 0x14
    class zNPCSteeringControl * curControl; // offset 0x80, size 0x4
    float speedLimitDownY; // offset 0x84, size 0x4
    float turnSpringK; // offset 0x88, size 0x4
    float headingCalcInteropRatio; // offset 0x8C, size 0x4
    float gravity; // offset 0x90, size 0x4
    float curTurnRate; // offset 0x94, size 0x4
    int steeringNeedsUpdate; // offset 0x98, size 0x4
};
// total size: 0x14
class zNPCSteeringCollisionHandler : public hkReferencedObject, public zNPCCollisionListener {
    // Members
    int currentNumberOfUserEdgesAdded; // offset 0x10, size 0x4
};
// total size: 0x14
class zWallNetPosition {
    // Members
    class xVec3 curPos; // offset 0x0, size 0xC
    class zWallNet * curWallNet; // offset 0xC, size 0x4
    int curTriangleId; // offset 0x10, size 0x4
};
// total size: 0x28
class zWallNet : public xBase {
    // Members
    class zWallNetAsset * wallNetAsset; // offset 0x20, size 0x4
};
// total size: 0x48
class zWallNetAsset : public xBaseAsset {
    // Members
    int assetSize; // offset 0x10, size 0x4
    int numBounds; // offset 0x14, size 0x4
    int numVertices; // offset 0x18, size 0x4
    int numEdges; // offset 0x1C, size 0x4
    int numBoundEdges; // offset 0x20, size 0x4
    int numTriangles; // offset 0x24, size 0x4
    class zWallNetBound * bounds; // offset 0x28, size 0x4
    class xVec3 * vertices; // offset 0x2C, size 0x4
    class zWallNetEdge * edges; // offset 0x30, size 0x4
    class zWallNetTriangle * triangles; // offset 0x34, size 0x4
    class zWallNetTriConx * connections; // offset 0x38, size 0x4
    class zShortestPathTree shortestPathTree; // offset 0x3C, size 0x8
};
// total size: 0x4
class zWallNetBound {
    // Members
    unsigned char firstVertex; // offset 0x0, size 0x1
    unsigned char verticesNum; // offset 0x1, size 0x1
    unsigned char minZVertex; // offset 0x2, size 0x1
    unsigned char maxZVertex; // offset 0x3, size 0x1
};
// total size: 0x8
class zWallNetEdge {
    // Members
    unsigned char srcVertex; // offset 0x0, size 0x1
    unsigned char dstVertex; // offset 0x1, size 0x1
    unsigned short flags; // offset 0x2, size 0x2
    float lengthXZ; // offset 0x4, size 0x4
};
// total size: 0x8
class zWallNetTriangle {
    // Members
    unsigned short edges[3]; // offset 0x0, size 0x6
    unsigned short flags; // offset 0x6, size 0x2
};
// total size: 0x4
class zWallNetTriConx {
    // Members
    unsigned char conx[3]; // offset 0x0, size 0x3
    unsigned char extraData; // offset 0x3, size 0x1
};
// total size: 0x8
class zShortestPathTree {
    // Members
    int sptSizePerTri; // offset 0x0, size 0x4
    unsigned char * spt; // offset 0x4, size 0x4
};
// total size: 0x2C
class zNPCSteeringControl {
    // Members
    class zNPCSteering * steering; // offset 0x0, size 0x4
    class zNPCBase * npcBase; // offset 0x4, size 0x4
    enum eHeadingCalcType headingCalcType; // offset 0x8, size 0x4
    class zNPCSteeringDest customHeading; // offset 0xC, size 0x10
    float speedLimitXZ; // offset 0x1C, size 0x4
    bool gravityEnabled : 1; // offset 0x20, size 0x1, bit offset 0
    bool turnSpringEnabled : 1; // offset 0x20, size 0x1, bit offset 1
    bool ignoreYComponent : 1; // offset 0x20, size 0x1, bit offset 2
    unsigned int pad : 31; // offset 0x24, size 0x4, bit offset 0
};
enum eHeadingCalcType {
    eHeadingCalcType_UsePreviousFrameHeading = 0,
    eHeadingCalcType_UseAcc = 1,
    eHeadingCalcType_UseVel = 2,
    eHeadingCalcType_UseVelNeg = 3,
    eHeadingCalcType_UseVelAcc = 4,
    eHeadingCalcType_UsePercTarget0 = 5,
    eHeadingCalcType_UsePercTargetClosest = 6,
    eHeadingCalcType_UseCustomDir = 7,
    eHeadingCalcType_UseCustomPos = 8,
    eHeadingCalcType_UseCustomCalculation = 9,
};
// total size: 0x10
class zNPCSteeringDest {
    // Members
    class xVec3 dest; // offset 0x0, size 0xC
    class xVec3 * pDest; // offset 0xC, size 0x4
};
// total size: 0x1C
class zNPCCombat : public zNPCComponent {
    // Members
    class zNPCCombatParams * parameters; // offset 0x8, size 0x4
    float currentHP; // offset 0xC, size 0x4
    class zNPCCombatCollisionListener combatCollisionListener; // offset 0x10, size 0x8
    bool damageDisabled; // offset 0x18, size 0x1
};
// total size: 0xC
class zNPCCombatParams {
    // Members
    float hitPoints; // offset 0x0, size 0x4
    class zNPCHitReactionTable * hitReactionTable; // offset 0x4, size 0x4
    unsigned int hitReactionTableCount; // offset 0x8, size 0x4
};
// total size: 0x8
class zNPCHitReactionTable {
    // Members
    enum zHitSource hitSource; // offset 0x0, size 0x4
    enum eNPCHitReaction hitReaction; // offset 0x4, size 0x4
};
enum eNPCHitReaction {
    eNPCHitReaction_Unknown = 0,
    eNPCHitReaction_Ignore = 1,
    eNPCHitReaction_Damage = 2,
    eNPCHitReaction_InstaDeath = 3,
};
// total size: 0x8
class zNPCCombatCollisionListener : public zNPCCollisionListener {};
// total size: 0xAC
class zNPCExtraModel : public zNPCComponent {
    // Members
    class xMat4x3 curMatrix; // offset 0x8, size 0x40
    class xMat4x3 initialMatrix; // offset 0x48, size 0x40
    class xVec3 curScale; // offset 0x88, size 0xC
    class xVec3 initialScale; // offset 0x94, size 0xC
    class ModelHelperInfo * modelRenderInfo; // offset 0xA0, size 0x4
    class ModelInstanceAsset * modelInstanceAsset; // offset 0xA4, size 0x4
    bool matSet; // offset 0xA8, size 0x1
    bool scaleSet; // offset 0xA9, size 0x1
    bool enabled; // offset 0xAA, size 0x1
    bool paused; // offset 0xAB, size 0x1
};
// total size: 0x50
class zPolygonalVolume : public xBase {
    // Members
    class zPolygonalVolumeAsset * asset; // offset 0x20, size 0x4
    int vertexCount; // offset 0x24, size 0x4
    class xVec3 * vertices; // offset 0x28, size 0x4
    float minY; // offset 0x2C, size 0x4
    float height; // offset 0x30, size 0x4
    class xVec3 upper; // offset 0x34, size 0xC
    class xVec3 lower; // offset 0x40, size 0xC
};
// total size: 0x20
class zPolygonalVolumeAsset : public xBaseAsset {
    // Members
    class PVBounds Bounds; // offset 0x10, size 0x8
    float Height; // offset 0x18, size 0x4
};
// total size: 0x8
class PVBounds {
    // Members
    class __Points__ Points; // offset 0x0, size 0x8
};
// total size: 0x8
class __Points__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0xC
class zFMVFile {
    // Members
    enum eFMVFile fmvCode; // offset 0x0, size 0x4
    char * fileName; // offset 0x4, size 0x4
    unsigned int subtitleID; // offset 0x8, size 0x4
};
enum eFMVFile {
    eFMVFile_NoMovie = 0,
    eFMVFile_NEXT_GEN = 1,
    eFMVFile_TEST0900 = 2,
    eFMVFile_A = 3,
    eFMVFile_B = 4,
    eFMVFile_C = 5,
    eFMVFile_Pixar = 6,
    eFMVFile_BVG = 7,
    eFMVFile_THQ = 8,
    eFMVFile_HI = 9,
    eFMVFile_Legal = 10,
    eFMVFile_Attract = 11,
    eFMVFileCount = 12,
};
// total size: 0x10
class _OGFMVReferenceEntity : public xOGEntity {};
// total size: 0x18
class _OGFMVReferenceSchema : public Schema {};
// total size: 0x30
class zFMVReference : public xBase {
    // Members
    unsigned int fileIndex; // offset 0x20, size 0x4
    char name[8]; // offset 0x24, size 0x8
};
// total size: 0x44
class MovieData {
    // Members
    char movie[12]; // offset 0x0, size 0xC
    void * hBink; // offset 0xC, size 0x4
    void (* cbFn)(class MovieData * data); // offset 0x10, size 0x4
    class D3DRECT rect; // offset 0x14, size 0x10
    class D3DRECT dstRect; // offset 0x24, size 0x10
    int surfaceIndex; // offset 0x34, size 0x4
    int startFrameSmall; // offset 0x38, size 0x4
    int startCountdown; // offset 0x3C, size 0x4
    bool fullscreen; // offset 0x40, size 0x1
    bool skippable; // offset 0x41, size 0x1
    bool last; // offset 0x42, size 0x1
};
// total size: 0x10
class D3DRECT {
    // Members
    int x; // offset 0x0, size 0x4
    int y; // offset 0x4, size 0x4
    int w; // offset 0x8, size 0x4
    int h; // offset 0xC, size 0x4
};
// total size: 0x10
class _OGFXScriptAssetEntity : public xOGEntity {};
// total size: 0x18
class _OGFXScriptAssetSchema : public Schema {};
// total size: 0x20
class zParticleSystem {
    // Members
    int type; // offset 0x0, size 0x4
    int need; // offset 0x4, size 0x4
    class zParticleGenerator * * generators; // offset 0x8, size 0x4
    int generators_size; // offset 0xC, size 0x4
    int generators_active; // offset 0x10, size 0x4
    class zParticleGeneratorSpawnPt * * generatorspawns; // offset 0x14, size 0x4
    int genspawns_size; // offset 0x18, size 0x4
};
// total size: 0x20
class zObjectSystem {
    // Members
    int type; // offset 0x0, size 0x4
    int need; // offset 0x4, size 0x4
    class zObjectGenerator * * generators; // offset 0x8, size 0x4
    int generators_size; // offset 0xC, size 0x4
    int generators_active; // offset 0x10, size 0x4
    class zObjectGeneratorSpawnPt * * generatorspawns; // offset 0x14, size 0x4
    int genspawns_size; // offset 0x18, size 0x4
};
// total size: 0x10
class _OGFXScriptSpawnPtAssetEntity : public xOGEntity {};
// total size: 0x18
class _OGFXScriptSpawnPtAssetSchema : public Schema {};
// total size: 0x11C10
class zFXScriptSpawnPtMgr {
    // Members
    class SpawnSlot * freeSlot; // offset 0x0, size 0x4
    class SpawnSlot slotsStorage[256]; // offset 0x8, size 0x11800
    class zQueue poolSpawnPts; // offset 0x11808, size 0x408
};
// total size: 0x118
class SpawnSlot {
    // Members
    class zFXScriptSpawnPt spawnPt; // offset 0x0, size 0x110
    int freeFlag; // offset 0x110, size 0x4
};
// total size: 0x408
class zQueue {
    // Members
    int first; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    class SpawnSlot * data[256]; // offset 0x8, size 0x400
};
// total size: 0x10
class EGGItemFuncs {
    // Members
    void (* fun_update)(float dt, class EGGItem * egg); // offset 0x0, size 0x4
    void (* fun_init)(class EGGItem * egg); // offset 0x4, size 0x4
    void (* fun_reset)(class EGGItem * egg); // offset 0x8, size 0x4
    void (* fun_done)(class EGGItem * egg); // offset 0xC, size 0x4
};
// total size: 0x10
class EGGItem {
    // Members
    int (* fun_check)(class EGGItem * egg); // offset 0x0, size 0x4
    class EGGItemFuncs * funcs; // offset 0x4, size 0x4
    int enabled; // offset 0x8, size 0x4
    class EGGData eggdata; // offset 0xC, size 0x4
};
// total size: 0x4
class EGGData {
    // Members
    class @class __anon; // offset 0x0, size 0x4
    int placeholder; // offset 0x0, size 0x4
    class EGGMisc misc; // offset 0x0, size 0x4
};
// total size: 0x4
class @class {
    // Members
    int placeholder; // offset 0x0, size 0x4
    class EGGMisc misc; // offset 0x0, size 0x4
};
// total size: 0x4
class EGGMisc {
    // Members
    int other; // offset 0x0, size 0x4
};
// total size: 0x10
class GECheat {
    // Members
    unsigned int * key_code; // offset 0x0, size 0x4
    void (* fun_cheat)(); // offset 0x4, size 0x4
    int flg_keep; // offset 0x8, size 0x4
    int flg_mode; // offset 0xC, size 0x4
};
// total size: 0x4
class EventNotifyDispatcher_IntroState : public EventNotifyNew {
    // Members
    enum eIntroState param0; // offset 0x0, size 0x4
};
enum eIntroState {
    eIntroState_Sony = 0,
    eIntroState_Publisher = 1,
    eIntroState_Developer = 2,
    eIntroState_License = 3,
    END_eIntroState_ENUM = 4,
};
// total size: 0x4
class EventNotifyDispatcher_TitleState : public EventNotifyNew {
    // Members
    enum eTitleState param0; // offset 0x0, size 0x4
};
enum eTitleState {
    eTitleState_Start = 0,
    eTitleState_Attract = 1,
    END_eTitleState_ENUM = 2,
};
// total size: 0x4
class EventNotifyDispatcher_LoadState : public EventNotifyNew {
    // Members
    enum eLoadState param0; // offset 0x0, size 0x4
};
enum eLoadState {
    eLoadState_SelectMemCard = 0,
    eLoadState_SelectSlot = 1,
    eLoadState_Loading = 2,
    END_eLoadState_ENUM = 3,
};
// total size: 0x4
class EventNotifyDispatcher_PauseState : public EventNotifyNew {
    // Members
    enum ePauseState param0; // offset 0x0, size 0x4
};
enum ePauseState {
    ePauseState_Pause = 0,
    ePauseState_Options = 1,
    ePauseState_DialogBox = 2,
    ePauseState_TechnicalDifficulties = 3,
    END_ePauseState_ENUM = 4,
};
// total size: 0x4
class EventNotifyDispatcher_GameState : public EventNotifyNew {
    // Members
    enum eGameState param0; // offset 0x0, size 0x4
};
enum eGameState {
    eGameState_FirstTime = 0,
    eGameState_Play = 1,
    eGameState_LoseChance = 2,
    eGameState_GameOver = 3,
    eGameState_GameStats = 4,
    eGameState_SceneSwitch = 5,
    eGameState_Dead = 6,
    eGameState_Exit = 7,
    END_eGameState_ENUM = 8,
};
// total size: 0x30
class GradientCurve : public xBaseAsset {
    // Members
    float startVal; // offset 0x10, size 0x4
    float endVal; // offset 0x14, size 0x4
    unsigned char endInterpType; // offset 0x18, size 0x1
    class __points__ points; // offset 0x1C, size 0x8
    class LinkAsset EventLinksNew; // offset 0x24, size 0x8
};
// total size: 0x8
class __points__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x4
class Pointer32 {
    // Members
    unsigned int _p; // offset 0x0, size 0x4
};
// total size: 0x1
class less {};
// total size: 0x10
class _OGGustEntity : public xOGEntity {};
// total size: 0x18
class _OGGustSchema : public Schema {};
// total size: 0x4
class _Creator : public zNPCStateCreator {};
// total size: 0x4
class zNPCStateCreator {};
// total size: 0x10
class _OGSwitchLeverEntity : public xOGEntity {};
// total size: 0x18
class _OGSwitchLeverSchema : public Schema {};
// total size: 0x10
class _OGLaunchEntity : public xOGEntity {};
// total size: 0x18
class _OGLaunchSchema : public Schema {};
// total size: 0x40
class zTriggerInteraction : public zInteraction {
    // Members
    float logoAlpha; // offset 0x34, size 0x4
    class zTrigger * trigger; // offset 0x38, size 0x4
};
// total size: 0x30
class zTriggerInteractionAsset : public zInteractionAsset {
    // Members
    unsigned long long triggerID; // offset 0x28, size 0x8
};
// total size: 0x88
class zSwitchLeverAsset : public zTriggerInteractionAsset {
    // Members
    class xVec3 location; // offset 0x30, size 0xC
    float yaw; // offset 0x3C, size 0x4
    unsigned long long modelID; // offset 0x40, size 0x8
    unsigned long long offIdleAnimID; // offset 0x48, size 0x8
    unsigned long long onIdleAnimID; // offset 0x50, size 0x8
    unsigned long long switchOffAnimID; // offset 0x58, size 0x8
    unsigned long long switchOnAnimID; // offset 0x60, size 0x8
    unsigned long long lightID; // offset 0x68, size 0x8
    unsigned long long sparkOffID; // offset 0x70, size 0x8
    unsigned long long sparkOnID; // offset 0x78, size 0x8
    bool initiallyOn; // offset 0x80, size 0x1
};
// total size: 0x98
class zSwitchLever : public zTriggerInteraction {
    // Members
    class pointer_asset playerLocation; // offset 0x40, size 0x38
    class xLight * light; // offset 0x78, size 0x4
    enum zSwitchLeverState state; // offset 0x7C, size 0x4
    float animPercent; // offset 0x80, size 0x4
    class xEnt * lockedEntity; // offset 0x84, size 0x4
    class xBase * sparksOff; // offset 0x88, size 0x4
    class xBase * sparksOn; // offset 0x8C, size 0x4
    float collisionTempOffTimer; // offset 0x90, size 0x4
};
// total size: 0xC0
class SwitchObject : public xEnt {
    // Members
    class zSwitchLever * lever; // offset 0xB8, size 0x4
};
// total size: 0x48
class zLaunchAsset : public zInteractionAsset {
    // Members
    unsigned int launchType; // offset 0x24, size 0x4
    unsigned long long launchObject; // offset 0x28, size 0x8
    unsigned long long launchAnimSet; // offset 0x30, size 0x8
    unsigned long long targetAsset; // offset 0x38, size 0x8
    float gravity; // offset 0x40, size 0x4
    float height; // offset 0x44, size 0x4
};
// total size: 0x30
class zWallNetNav {
    // Members
    class xVec3 dir; // offset 0x0, size 0xC
    class xVec3 curDest; // offset 0xC, size 0xC
    int edgeID; // offset 0x18, size 0x4
    class zWallNet * edgeWallNet; // offset 0x1C, size 0x4
    int triID; // offset 0x20, size 0x4
    class zWallNet * triWallNet; // offset 0x24, size 0x4
    float dist; // offset 0x28, size 0x4
    bool calculateDirAndDist : 1; // offset 0x2C, size 0x1, bit offset 0
    bool validSolutionFound : 1; // offset 0x2C, size 0x1, bit offset 1
    bool destinationIsOnDirectPath : 1; // offset 0x2C, size 0x1, bit offset 2
    bool startIsOutsideOfWallNet : 1; // offset 0x2C, size 0x1, bit offset 3
    bool destIsOutsideOfWallNet : 1; // offset 0x2C, size 0x1, bit offset 4
    unsigned char pad : 3; // offset 0x2C, size 0x1, bit offset 5
};
// total size: 0x3C
class zWallNetFrustumXZ {
    // Members
    class xVec3 rightNormal; // offset 0x0, size 0xC
    class xVec3 leftNormal; // offset 0xC, size 0xC
    class xVec3 curRightLocal; // offset 0x18, size 0xC
    class xVec3 curLeftLocal; // offset 0x24, size 0xC
    class xVec3 * origin; // offset 0x30, size 0x4
    float boundRadius; // offset 0x34, size 0x4
    bool refined; // offset 0x38, size 0x1
};
// total size: 0x2C
class zWallNetDestination {
    // Members
    class zWallNetPosition wantedDestination; // offset 0x0, size 0x14
    class zWallNetPosition modifiedDestination; // offset 0x14, size 0x14
    bool isWantedModified; // offset 0x28, size 0x1
    bool isWantedReachable; // offset 0x29, size 0x1
    bool isValid; // offset 0x2A, size 0x1
};
// total size: 0xB4
class zWallNetCollis {
    // Members
    class xVec3 collisionPoints[4]; // offset 0x0, size 0x30
    class xVec3 collisionNormals[4]; // offset 0x30, size 0x30
    int triIDs[4]; // offset 0x60, size 0x10
    int edgeIDs[4]; // offset 0x70, size 0x10
    float collisionDist[4]; // offset 0x80, size 0x10
    unsigned int numberOfCollisions; // offset 0x90, size 0x4
    unsigned int closestCollision; // offset 0x94, size 0x4
    class xVec3 endPoint; // offset 0x98, size 0xC
    float sweepDist; // offset 0xA4, size 0x4
    float movableDist; // offset 0xA8, size 0x4
    class zWallNet * wallNet; // offset 0xAC, size 0x4
    bool calculateDistance : 1; // offset 0xB0, size 0x1, bit offset 0
    bool calculateNormal : 1; // offset 0xB0, size 0x1, bit offset 1
    bool calculateExactPoint : 1; // offset 0xB0, size 0x1, bit offset 2
    bool consumed : 1; // offset 0xB0, size 0x1, bit offset 3
    bool hitIt : 1; // offset 0xB0, size 0x1, bit offset 4
    unsigned char pad : 3; // offset 0xB0, size 0x1, bit offset 5
};
// total size: 0x40
class zSweptCircle {
    // Members
    class xVec2 start; // offset 0x0, size 0x8
    float radius; // offset 0x8, size 0x4
    float dist; // offset 0xC, size 0x4
    class xVec2 dir; // offset 0x10, size 0x8
    class xVec2 end; // offset 0x18, size 0x8
    class xVec2 left; // offset 0x20, size 0x8
    float curDist; // offset 0x28, size 0x4
    class xVec2 curEnd; // offset 0x2C, size 0x8
    bool hitSomething; // offset 0x34, size 0x1
    class xVec2 contactPoint; // offset 0x38, size 0x8
};
// total size: 0x10
class _OGJSP_Extra_DataEntity : public xOGEntity {};
// total size: 0x18
class _OGJSP_Extra_DataSchema : public Schema {};
// total size: 0x18
class jspGroupPair {
    // Members
    unsigned long long jspID; // offset 0x0, size 0x8
    unsigned long long groupID; // offset 0x8, size 0x8
    class xBase * pGroup; // offset 0x10, size 0x4
    class xBase * pWidget; // offset 0x14, size 0x4
};
// total size: 0x1C
class zLaserLOSChecker : public hkpRayHitCollector {
    // Members
    class xBase * ignoreStart; // offset 0x8, size 0x4
    class xBase * ignoreTarget; // offset 0xC, size 0x4
    float minHitFraction; // offset 0x10, size 0x4
    class xBase * hitObj; // offset 0x14, size 0x4
    bool hitIt; // offset 0x18, size 0x1
};
// total size: 0x4
class hkpBroadPhaseCastCollector {};
// total size: 0x20
class zLaserLOSCombinedCollector : public hkpRayHitCollector {
    // Members
    class xBase * ignoreStart; // offset 0x8, size 0x4
    class xBase * ignoreTarget; // offset 0xC, size 0x4
    float minHitFraction; // offset 0x10, size 0x4
    class xBase * hitObj; // offset 0x14, size 0x4
    bool hitIt; // offset 0x18, size 0x1
    bool * optionalHitResult; // offset 0x1C, size 0x4
};
// total size: 0x30
class hkpWorldRayCastInput {
    // Members
    class hkVector4 m_from; // offset 0x0, size 0x10
    class hkVector4 m_to; // offset 0x10, size 0x10
    class hkBool m_enableShapeCollectionFilter; // offset 0x20, size 0x1
    unsigned int m_filterInfo; // offset 0x24, size 0x4
};
// total size: 0x50
class hkpWorldRayCaster : public hkpBroadPhaseCastCollector {
    // Members
    class hkpWorldRayCastInput * m_input; // offset 0x4, size 0x4
    class hkpRayCollidableFilter * m_filter; // offset 0x8, size 0x4
    class hkpRayHitCollector * m_collectorBase; // offset 0xC, size 0x4
    int m_collectorStriding; // offset 0x10, size 0x4
    class hkpShapeRayCastInput m_shapeInput; // offset 0x20, size 0x30
};
// total size: 0x30
class hkpShapeRayCastInput {
    // Members
    class hkVector4 m_from; // offset 0x0, size 0x10
    class hkVector4 m_to; // offset 0x10, size 0x10
    unsigned int m_filterInfo; // offset 0x20, size 0x4
    class hkpRayShapeCollectionFilter * m_rayShapeCollectionFilter; // offset 0x24, size 0x4
};
// total size: 0x20
class LOSInfo {
    // Members
    class hkVector4 targetPos; // offset 0x0, size 0x10
    float myVal; // offset 0x10, size 0x4
    class xBase * targetBase; // offset 0x14, size 0x4
    float minDist; // offset 0x18, size 0x4
    bool hit; // offset 0x1C, size 0x1
    unsigned char pad[3]; // offset 0x1D, size 0x3
};
// total size: 0x28
class zLaserScanner {
    // Members
    class xEnt * owner; // offset 0x0, size 0x4
    class xVec3 originLocalOffset; // offset 0x4, size 0xC
    bool started; // offset 0x10, size 0x1
    bool collecting; // offset 0x11, size 0x1
    bool collected; // offset 0x12, size 0x1
    bool lockedOn; // offset 0x13, size 0x1
    float lockedTime; // offset 0x14, size 0x4
    class xBase * lockedObject; // offset 0x18, size 0x4
    bool sweepLeft; // offset 0x1C, size 0x1
    float sweepAngle; // offset 0x20, size 0x4
    class zFXScriptSpawnPt * spawnPt; // offset 0x24, size 0x4
};
// total size: 0x10
class _OGLensFlareEntity : public xOGEntity {};
// total size: 0x18
class _OGLensFlareSchema : public Schema {};
// total size: 0x10
class _OGLensFlareSpawnPtEntity : public xOGEntity {};
// total size: 0x18
class _OGLensFlareSpawnPtSchema : public Schema {};
// total size: 0x30
class zLensFlare : public xBase {
    // Members
    class LensFlare * asset; // offset 0x20, size 0x4
    int numSpots; // offset 0x24, size 0x4
    class sSpot * spots; // offset 0x28, size 0x4
};
// total size: 0x18
class LensFlare : public xBaseAsset {
    // Members
    class __spots__ spots; // offset 0x10, size 0x8
};
// total size: 0x8
class __spots__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0xC
class sSpot {
    // Members
    class ImmediatePrototypeEntity * ent; // offset 0x0, size 0x4
    class zGradientCurve * sizeCurve; // offset 0x4, size 0x4
    class zGradientCurve * rotCurve; // offset 0x8, size 0x4
};
// total size: 0x20
class zModuleGradientCurve : public zModule {
    // Members
    class zGradientCurve * curves; // offset 0x18, size 0x4
    unsigned int numCurves; // offset 0x1C, size 0x4
};
// total size: 0x48
class zLensFlareSpawnPt : public xBase {
    // Members
    class LensFlareSpawnPt * asset; // offset 0x20, size 0x4
    class zLensFlare * effect; // offset 0x24, size 0x4
    int numPoints; // offset 0x28, size 0x4
    class sPoint * points; // offset 0x2C, size 0x4
    class xVec2 screenPt; // offset 0x30, size 0x8
    float alpha; // offset 0x38, size 0x4
    bool visible; // offset 0x3C, size 0x1
    class zGradientCurve * alphaFalloffCurve; // offset 0x40, size 0x4
};
// total size: 0x50
class LensFlareSpawnPt : public xBaseAsset {
    // Members
    class uid effect; // offset 0x10, size 0x8
    unsigned char alphaType; // offset 0x18, size 0x1
    class vec3 center; // offset 0x1C, size 0xC
    class Rotation3 direction; // offset 0x28, size 0xC
    float radius; // offset 0x34, size 0x4
    int numPts; // offset 0x38, size 0x4
    class uid falloffCurve; // offset 0x40, size 0x8
    float falloffMin; // offset 0x48, size 0x4
    float falloffMax; // offset 0x4C, size 0x4
};
// total size: 0x10
class sPoint {
    // Members
    class xVec3 pos; // offset 0x0, size 0xC
    bool lastRayCastValue[4]; // offset 0xC, size 0x4
};
// total size: 0x10
class _OGLocatorEntity : public xOGEntity {};
// total size: 0x18
class _OGLocatorSchema : public Schema {};
// total size: 0x9C
class zMainOGModule : public Module {
    // Members
    enum eModGameState gameState; // offset 0x98, size 0x4
};
enum eModGameState {
    eNoState = 0,
    eMainInit = 1,
    eGameInit = 2,
    eSceneInit = 3,
    eSceneGameplay = 4,
    eSceneExit = 5,
    eGameShutdown = 6,
    eMainShutdown = 7,
};
// total size: 0x8
class ModuleRegistrator {
    // Members
    class Module * mod; // offset 0x0, size 0x4
    class ModuleRegistrator * next; // offset 0x4, size 0x4
};
// total size: 0x10AC
class SceneData {
    // Members
    class Scene scene; // offset 0x0, size 0x10A4
    unsigned char * sceneBuffer; // offset 0x10A4, size 0x4
    int sceneBufferSize; // offset 0x10A8, size 0x4
};
// total size: 0x20
class MaterialDepotSpace : public Space {};
// total size: 0x214
class ScreenRenderTarget : public RenderTarget {
    // Members
    class ColorF backgroundColor; // offset 0x14, size 0x10
    class TextureRenderTarget screenRenderTarget; // offset 0x24, size 0xCC
    class Texture HDRtexture[5]; // offset 0xF0, size 0xB4
    unsigned char * HDRtexData[5]; // offset 0x1A4, size 0x14
    unsigned long HDRtexDataSize[5]; // offset 0x1B8, size 0x14
    class Texture HDRtexture_BlurWork[2]; // offset 0x1CC, size 0x48
};
// total size: 0x10
class ColorF {
    // Members
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
};
// total size: 0xCC
class TextureRenderTarget : public RenderTarget {
    // Members
    class Texture texture; // offset 0x14, size 0x24
    class Texture texture2; // offset 0x38, size 0x24
    class Texture texture3; // offset 0x5C, size 0x24
    class Texture texture4; // offset 0x80, size 0x24
    unsigned int numTextures; // offset 0xA4, size 0x4
    bool msaa; // offset 0xA8, size 0x1
    bool depth; // offset 0xA9, size 0x1
    enum TEXTURE_FORMAT format; // offset 0xAC, size 0x4
    unsigned int destWidth; // offset 0xB0, size 0x4
    unsigned int destHeight; // offset 0xB4, size 0x4
    unsigned char * texData; // offset 0xB8, size 0x4
    unsigned char * texData2; // offset 0xBC, size 0x4
    unsigned char * texData3; // offset 0xC0, size 0x4
    unsigned char * texData4; // offset 0xC4, size 0x4
    unsigned long texDataSize; // offset 0xC8, size 0x4
};
enum TEXTURE_FORMAT {
    NONE = 0,
    RGBA32 = 1,
    R32F = 2,
    D24S8 = 3,
};
// total size: 0x28
class ScreenView : public View {};
// total size: 0x4
class DirtyDiscCallBack : public OGCallbacks {};
// total size: 0x4
class OGCallbacks {};
// total size: 0x20F94
class ProjectShadowView : public View {
    // Members
    class Bucket * bucketList; // offset 0x28, size 0x4
    unsigned int bucketCount; // offset 0x2C, size 0x4
    class Scene * parentScene; // offset 0x30, size 0x4
    class TextureRenderTarget myRenderTarget; // offset 0x34, size 0xCC
    class TextureRenderTarget myBlurRenderTarget; // offset 0x100, size 0xCC
    class ProjectShadowSpace mySpace; // offset 0x1CC, size 0x24
    class Viewport myViewport; // offset 0x1F0, size 0x224
    class SimpleShadow mySimpleShadows; // offset 0x414, size 0x33C
    unsigned int casterViewportCount; // offset 0x750, size 0x4
    class Viewport * casterViewportList[4]; // offset 0x754, size 0x10
    int renderTargetSize; // offset 0x764, size 0x4
    class Sampler shadowSampler; // offset 0x768, size 0xC
    class ShadowCache caches[12]; // offset 0x774, size 0x20820
};
// total size: 0x108
class Bucket {
    // Members
    unsigned int fbMask; // offset 0x0, size 0x4
    unsigned int cacheIndex; // offset 0x4, size 0x4
    unsigned int tempCasterIndex; // offset 0x8, size 0x4
    unsigned int tempRendIndex; // offset 0xC, size 0x4
    unsigned int tempCasterCount; // offset 0x10, size 0x4
    class Vector4 component; // offset 0x14, size 0x10
    class Vector4 receiveRangeBase; // offset 0x24, size 0x10
    class Vector4 receiveRange; // offset 0x34, size 0x10
    class Matrix43 receiveMatrix; // offset 0x44, size 0x30
    class Vector4 receiveColor; // offset 0x74, size 0x10
    int scissorRect[4]; // offset 0x84, size 0x10
    class Vector4 castRange; // offset 0x94, size 0x10
    class Matrix43 castMatrix; // offset 0xA4, size 0x30
    class BroadBound casterBound; // offset 0xD4, size 0x20
    float shadowCastDepth; // offset 0xF4, size 0x4
    float shadowCastStartDepth; // offset 0xF8, size 0x4
    unsigned int casterFlags; // offset 0xFC, size 0x4
    unsigned int minPixels; // offset 0x100, size 0x4
    unsigned int maxPixels; // offset 0x104, size 0x4
};
// total size: 0x24
class ProjectShadowSpace : public Space {
    // Members
    class ProjectShadowView * parent; // offset 0x20, size 0x4
};
// total size: 0x33C
class SimpleShadow {
    // Members
    class ShadowSimpleCollisionQueue sCollQueue[2]; // offset 0x0, size 0x18
    class ShadowSimpleCache * sDrawQueue[200]; // offset 0x18, size 0x320
    int nextDrawIdx; // offset 0x338, size 0x4
};
// total size: 0xC
class ShadowSimpleCollisionQueue {
    // Members
    class ShadowSimpleCache * cache; // offset 0x0, size 0x4
    unsigned int priority; // offset 0x4, size 0x4
    class Renderable3D * castRend; // offset 0x8, size 0x4
};
// total size: 0x2B58
class ShadowCache {
    // Members
    unsigned int * projectShadowCachePtr; // offset 0x0, size 0x4
    unsigned short inUse; // offset 0x4, size 0x2
    unsigned short dirtyPriority; // offset 0x6, size 0x2
    unsigned short polyCount; // offset 0x8, size 0x2
    unsigned short bucketIndex; // offset 0xA, size 0x2
    float polyRayDepth[5]; // offset 0xC, size 0x14
    float blurScale; // offset 0x20, size 0x4
    class BroadBound casterBound; // offset 0x24, size 0x20
    class BroadBound bound; // offset 0x44, size 0x20
    class BroadBound clippedBound; // offset 0x64, size 0x20
    class Vector boundCenter; // offset 0x84, size 0x10
    class Vector boundHalf; // offset 0x94, size 0x10
    class Vector boundQuarter; // offset 0xA4, size 0x10
    class Vector4 capsuleStart; // offset 0xB4, size 0x10
    class Vector capsuleEnd; // offset 0xC4, size 0x10
    class ShadowPoly poly[256]; // offset 0xD4, size 0x2400
    float polyDepth[256]; // offset 0x24D4, size 0x400
    class Renderable3DLink receiverLink[32]; // offset 0x28D4, size 0x180
    unsigned short entCount; // offset 0x2A54, size 0x2
    unsigned short entLast; // offset 0x2A56, size 0x2
    class Renderable3D * receiver[32]; // offset 0x2A58, size 0x80
    float receiverDepth[32]; // offset 0x2AD8, size 0x80
};
// total size: 0x24
class ShadowPoly {
    // Members
    class Vector3 v0; // offset 0x0, size 0xC
    class Vector3 v1; // offset 0xC, size 0xC
    class Vector3 v2; // offset 0x18, size 0xC
};
// total size: 0xC
class RelativePriority {
    // Members
    enum PriorityOrder order; // offset 0x0, size 0x4
    class Module * associate; // offset 0x4, size 0x4
    int events; // offset 0x8, size 0x4
};
enum PriorityOrder {
    PRIORITY_BEFORE = 0,
    PRIORITY_AFTER = 1,
};
enum UnloadSceneEnum {
    UNLOADSCENE_NONE = 0,
    UNLOADSCENE_SCENESWITCH = 1,
    UNLOADSCENE_QUITGAME = 2,
};
enum eGameInitState {
    eInit = 0,
    eLoadingMnls = 1,
    eLanguageSelect = 2,
    eLanguageUnload = 3,
    eLanguageDone = 4,
    eLoadingFont = 5,
    eShowingLegalScreen = 6,
    eLoadingStrap = 7,
    eShowingStrapScreen = 8,
    eDoneStrap = 9,
    eShowingNoHDDSpaceScreen = 10,
    eDoneHDDCheck = 11,
    eLoadingBulk = 12,
    eLoadingBoot = 13,
    eLoadingPlat = 14,
    eLoadingMish = 15,
    eLoadingMnui = 16,
    eFinishingMovies = 17,
};
enum _tagGameVidMode {
    eGameVidModeNTSC = 0,
    eGameVidModePAL = 1,
};
// total size: 0x18
class Game {
    // Members
    class Time time; // offset 0x0, size 0x8
    bool ran; // offset 0x8, size 0x1
    bool firstUpdate; // offset 0x9, size 0x1
    bool quitting; // offset 0xA, size 0x1
    class ReferenceCounter runrc; // offset 0xC, size 0x4
    unsigned int buildNumber; // offset 0x10, size 0x4
};
// total size: 0x98
class LegalScreenInfo {
    // Members
    float timer; // offset 0x0, size 0x4
    class Time lastTime; // offset 0x8, size 0x8
    class xtextbox textBox; // offset 0x10, size 0x88
};
// total size: 0x14
class zEmbeddedStartupIcon {
    // Members
    bool started; // offset 0x0, size 0x1
    unsigned int xPos; // offset 0x4, size 0x4
    unsigned int yPos; // offset 0x8, size 0x4
    unsigned int width; // offset 0xC, size 0x4
    unsigned int height; // offset 0x10, size 0x4
};
// total size: 0x100
class zScaleformAsset : public zUI {
    // Members
    class uid ScaleformNG; // offset 0xB8, size 0x8
    class uid Dispatcher; // offset 0xC0, size 0x8
    unsigned int Viewnum; // offset 0xC8, size 0x4
    bool CheckStick; // offset 0xCC, size 0x1
    bool CheckHealth; // offset 0xCD, size 0x1
    bool CheckTargetProj; // offset 0xCE, size 0x1
    bool CheckMultiplayerHoldTimer; // offset 0xCF, size 0x1
    bool CheckStickPress; // offset 0xD0, size 0x1
    bool StopRendering; // offset 0xD1, size 0x1
    bool Persist; // offset 0xD2, size 0x1
    class uid Sounds; // offset 0xD8, size 0x8
    class uid RumbleEmitter; // offset 0xE0, size 0x8
    bool CheckIRMouse; // offset 0xE8, size 0x1
    class LinkAsset EventLinksNew; // offset 0xEC, size 0x8
};
enum BootMenuEnum {
    BootMenu_Start = 0,
    BootMenu_Init = 1,
    BootMenu_Setup = 2,
    BootMenu_Loop = 3,
    BootMenu_Done = 4,
};
// total size: 0x4
class File {
    // Members
    class FileDevice * stream; // offset 0x0, size 0x4
};
// total size: 0x4
class FileDevice {};
// total size: 0x1
class FileError {};
// total size: 0x11
class ConsoleLanguageMapping {
    // Members
    unsigned char langCode; // offset 0x0, size 0x1
    char langName[8]; // offset 0x1, size 0x8
    char naLangName[8]; // offset 0x9, size 0x8
};
// total size: 0xF0
class UI_Text : public UIText {
    // Members
    class LinkAsset EventLinksNew; // offset 0xE8, size 0x8
};
// total size: 0xF0
class UIText : public zUI {
    // Members
    unsigned int text; // offset 0xB8, size 0x4
    class uid font; // offset 0xC0, size 0x8
    unsigned char fontSizeW; // offset 0xC8, size 0x1
    unsigned char fontSizeH; // offset 0xC9, size 0x1
    unsigned char fontSpacingX; // offset 0xCA, size 0x1
    unsigned char fontSpacingY; // offset 0xCB, size 0x1
    unsigned char textBoxInsetTop; // offset 0xCC, size 0x1
    unsigned char textBoxInsetLeft; // offset 0xCD, size 0x1
    unsigned char textBoxInsetRight; // offset 0xCE, size 0x1
    unsigned char textBoxInsetBottom; // offset 0xCF, size 0x1
    unsigned char justifyX; // offset 0xD0, size 0x1
    unsigned char justifyY; // offset 0xD1, size 0x1
    unsigned char textFlags; // offset 0xD2, size 0x1
    class shadowColor shadowColor; // offset 0xD3, size 0x4
    float shadowOffsetX; // offset 0xD8, size 0x4
    float shadowOffsetY; // offset 0xDC, size 0x4
    float textScaleX; // offset 0xE0, size 0x4
    float textScaleY; // offset 0xE4, size 0x4
};
// total size: 0x4
class shadowColor {
    // Members
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// total size: 0x10
class _OGMissionOGEntity : public xOGEntity {};
// total size: 0x18
class _OGMissionOGSchema : public Schema {};
// total size: 0x10
class _OGTaskOGEntity : public xOGEntity {};
// total size: 0x18
class _OGTaskOGSchema : public Schema {};
// total size: 0x40
class zMission : public xBase {
    // Members
    class zMissionAsset * asset; // offset 0x20, size 0x4
    class zMission * * requiredMission; // offset 0x24, size 0x4
    class zTask * * missionTask; // offset 0x28, size 0x4
    class zScript * scriptReset; // offset 0x2C, size 0x4
    class zScript * scriptCompletion; // offset 0x30, size 0x4
    class zScript * scriptFail; // offset 0x34, size 0x4
    enum LockStatus missionStatus; // offset 0x38, size 0x4
};
// total size: 0x48
class zMissionAsset : public xDynAsset {
    // Members
    class __requiredMissionUID__ requiredMissionUID; // offset 0x20, size 0x8
    unsigned int initialLockStatus; // offset 0x28, size 0x4
    unsigned int missionType; // offset 0x2C, size 0x4
    unsigned int missionPrefix; // offset 0x30, size 0x4
    class __taskUID__ taskUID; // offset 0x34, size 0x8
    class LinkAsset EventLinksNew; // offset 0x3C, size 0x8
};
// total size: 0x8
class __requiredMissionUID__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __taskUID__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x38
class zTask : public xBase {
    // Members
    class zTaskAsset * asset; // offset 0x20, size 0x4
    class zCheckpoint * checkpoint; // offset 0x24, size 0x4
    class zTask * * requiredTask; // offset 0x28, size 0x4
    enum Availability available; // offset 0x2C, size 0x4
    enum ezTaskCompletionStatus completionStatus; // offset 0x30, size 0x4
    class zMission * owner; // offset 0x34, size 0x4
};
// total size: 0x40
class zTaskAsset : public xDynAsset {
    // Members
    class uid checkpoint; // offset 0x20, size 0x8
    bool required; // offset 0x28, size 0x1
    unsigned int initialAvailability; // offset 0x2C, size 0x4
    class __requiredTask__ requiredTask; // offset 0x30, size 0x8
    class LinkAsset EventLinksNew; // offset 0x38, size 0x8
};
// total size: 0x8
class __requiredTask__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
enum Availability {
    Unavailable = 0,
    Available = 1,
    END_AvailabilityENUM = 2,
};
enum ezTaskCompletionStatus {
    eTCS_Incomplete = 0,
    eTCS_Completed = 1,
};
// total size: 0x38
class zScript : public xBase {
    // Members
    class Script * tasset; // offset 0x20, size 0x4
    int currentIndex; // offset 0x24, size 0x4
    unsigned char state; // offset 0x28, size 0x1
    unsigned char runWhenPaused; // offset 0x29, size 0x1
    unsigned char runInCinematic; // offset 0x2A, size 0x1
    unsigned char pad; // offset 0x2B, size 0x1
    float time; // offset 0x2C, size 0x4
    float scaleFactor; // offset 0x30, size 0x4
    float * absoluteEventTimes; // offset 0x34, size 0x4
};
enum LockStatus {
    Locked = 0,
    Unlocked = 1,
    Completed = 2,
    END_LockStatusENUM = 3,
};
// total size: 0x18
class xOGSchema : public Schema {};
// total size: 0x38
class zMissionBeacon : public xBase {
    // Members
    class zMissionBeaconAsset * asset; // offset 0x20, size 0x4
    int visible; // offset 0x24, size 0x4
    class zMission * mission; // offset 0x28, size 0x4
    class zDirection * position; // offset 0x2C, size 0x4
    class zPortal * portal; // offset 0x30, size 0x4
    class xModelInstance * beaconModel; // offset 0x34, size 0x4
};
// total size: 0x80
class zMissionBeaconAsset : public xBaseAsset {
    // Members
    class uid missionID; // offset 0x10, size 0x8
    class uid positionID; // offset 0x18, size 0x8
    class uid portalID; // offset 0x20, size 0x8
    class ModelInstanceAsset ModelInstance; // offset 0x30, size 0x40
    class LinkAsset EventLinksNew; // offset 0x70, size 0x8
};
// total size: 0x1C
class zMODDebugMetrics : public zModule {
    // Members
    bool isStartOfNewScene; // offset 0x18, size 0x1
};
// total size: 0x18
class zMODExample : public zModule {};
// total size: 0x10
class _OGGradientCurveEntity : public xOGEntity {};
// total size: 0x18
class _OGGradientCurveSchema : public Schema {};
// total size: 0x10
class _OGParticleSinkEntity : public xOGEntity {};
// total size: 0x18
class _OGParticleSinkSchema : public Schema {};
// total size: 0x20
class zModuleParSink : public zModule {
    // Members
    class sSink * sinks; // offset 0x18, size 0x4
    int numSinks; // offset 0x1C, size 0x4
};
// total size: 0x40
class sSink {
    // Members
    class xMat4x3 mat; // offset 0x0, size 0x40
};
// total size: 0x50
class ParticleSink : public xBaseAsset {
    // Members
    class BoxStruct Box; // offset 0x10, size 0x30
    class LinkAsset EventLinksNew; // offset 0x40, size 0x8
};
// total size: 0x30
class BoxStruct {
    // Members
    class Matrix43POD Transform; // offset 0x0, size 0x30
};
// total size: 0x80
class zNPCAnimViewer : public zNPCBase {};
// total size: 0x4
class zCreator : public zCreatorI {};
// total size: 0x80
class zNPCAxiomHuman : public zNPCBase {};
// total size: 0x4
class zNPCStateResult {
    // Members
    int data; // offset 0x0, size 0x4
};
// total size: 0x88
class zNPCHumanMainState : public zNPCPushPopControl, public zNPCCollisionListener {
    // Members
    enum HitType lastFrameHit; // offset 0x74, size 0x4
    float hitPlayerTimer; // offset 0x78, size 0x4
    int hitCount; // offset 0x7C, size 0x4
    bool awed; // offset 0x80, size 0x1
    enum eTargetBearing hitBearing; // offset 0x84, size 0x4
};
// total size: 0x6C
class zNPCPushPopControl : public zNPCControl {
    // Members
    class fixed_stack_list children; // offset 0x14, size 0x58
};
// total size: 0x58
class fixed_stack_list {
    // Members
    unsigned long _size; // offset 0x0, size 0x4
    class empty_node_type head; // offset 0x4, size 0x8
    class empty_node_type tail; // offset 0xC, size 0x8
    class node_type * stack; // offset 0x14, size 0x4
    class node_type buffer[4]; // offset 0x18, size 0x40
};
// total size: 0x8
class empty_node_type {
    // Members
    class node_type * prev; // offset 0x0, size 0x4
    class node_type * next; // offset 0x4, size 0x4
};
// total size: 0x10
class node_type : public empty_node_type {
    // Members
    class zNPCStateNode value; // offset 0x8, size 0x8
};
// total size: 0x8
class zNPCStateNode {
    // Members
    class zNPCState * state; // offset 0x0, size 0x4
    int stateID; // offset 0x4, size 0x4
};
enum HitType {
    NotHit = 0,
    HitByWalle = 1,
    HitByNPC = 2,
};
enum eTargetBearing {
    eTargetBearing_AtFront = 0,
    eTargetBearing_AtLeft = 1,
    eTargetBearing_AtRight = 2,
    eTargetBearing_AtBack = 3,
};
enum eStateResultMsg {
    eStateResultMsg_None = 0,
    eStateResultMsg_ControlForced = 1,
    eStateResultMsg_Success = 2,
    eStateResultMsg_Fail = 3,
    eStateResultMsg_Perceived = 4,
    eStateResultMsg_Arrived = 5,
    eStateResultMsg_Reachable = 6,
    eStateResultMsg_NotReachable = 7,
    eStateResultMsg_Chargable = 8,
    eStateResultMsg_NotChargable = 9,
    eStateResultMsg_Visible = 10,
    eStateResultMsg_NotVisible = 11,
    eStateResultMsg_Attackable = 12,
    eStateResultMsg_NotAttackable = 13,
    eStateResultMsg_TimerDone = 14,
    eStateResultMsg_AnimDone = 15,
    eStateResultMsg_Damaged = 16,
    eStateResultMsg_Killed = 17,
};
// total size: 0x190
class AxiomHuman : public NPCAsset {
    // Members
    unsigned int AxiomHumanType; // offset 0x180, size 0x4
    class uid PatrolNetworkMovepoint; // offset 0x188, size 0x8
};
// total size: 0x20
class zNPCActionAnim {
    // Members
    char * animationName; // offset 0x0, size 0x4
    unsigned int animStateID; // offset 0x4, size 0x4
    unsigned int backupAnimStateID; // offset 0x8, size 0x4
    float blendTime; // offset 0xC, size 0x4
    float animStartTime; // offset 0x10, size 0x4
    float leanMaxAngle; // offset 0x14, size 0x4
    float leanMinAngle; // offset 0x18, size 0x4
    bool usingLean; // offset 0x1C, size 0x1
    bool enabled; // offset 0x1D, size 0x1
};
// total size: 0x1DC
class zNPCSteeringMoveToControl : public zNPCSteeringControl {
    // Members
    class zWanderData wanderData; // offset 0x2C, size 0x1C
    class zWallAvoidanceData wallAvoidanceData; // offset 0x48, size 0x10
    class zNPCSteeringDest destination; // offset 0x58, size 0x10
    class zPIDController3 pidController; // offset 0x68, size 0x11C
    class zNPCSteeringVecLimiter moveToAccLimiter; // offset 0x184, size 0x10
    float maxAcc; // offset 0x194, size 0x4
    float arriveTolerance2; // offset 0x198, size 0x4
    int arriveToDest; // offset 0x19C, size 0x4
    class zNPCSteeringAccumulator accAccum; // offset 0x1A0, size 0x10
    class zWallNetDestination wallNetDestination; // offset 0x1B0, size 0x2C
};
// total size: 0x1C
class zWanderData {
    // Members
    class xVec3 prevWanderDir; // offset 0x0, size 0xC
    float wanderAcc; // offset 0xC, size 0x4
    float wanderFOV; // offset 0x10, size 0x4
    float wanderJitterPerSec; // offset 0x14, size 0x4
    bool enabled; // offset 0x18, size 0x1
};
// total size: 0x10
class zWallAvoidanceData {
    // Members
    float avoidanceMaxAcc; // offset 0x0, size 0x4
    float avoidanceTime; // offset 0x4, size 0x4
    float avoidanceMinDist; // offset 0x8, size 0x4
    bool enabled; // offset 0xC, size 0x1
};
// total size: 0x11C
class zPIDController3 {
    // Members
    class xVec3 errorsArray[16]; // offset 0x0, size 0xC0
    float dtArray[16]; // offset 0xC0, size 0x40
    int lastPos; // offset 0x100, size 0x4
    float kP; // offset 0x104, size 0x4
    float kI; // offset 0x108, size 0x4
    float kD; // offset 0x10C, size 0x4
    class xVec3 estimatedDestSpeed; // offset 0x110, size 0xC
};
// total size: 0x10
class zNPCSteeringVecLimiter {
    // Members
    class xVec3 limitV; // offset 0x0, size 0xC
    int isSphere; // offset 0xC, size 0x4
};
// total size: 0x10
class zNPCSteeringAccumulator {
    // Members
    class xVec3 curAccumulatedVec; // offset 0x0, size 0xC
    float curAccumulatedMag; // offset 0xC, size 0x4
};
// total size: 0x68
class zNPCOneShotAnimAction : public zNPCAction {
    // Members
    class zNPCSteeringStopControl stopControl; // offset 0x18, size 0x30
    class zNPCActionAnim actionAnim; // offset 0x48, size 0x20
};
// total size: 0x18
class zNPCAction : public zNPCState {
    // Members
    bool isActivated; // offset 0x14, size 0x1
};
// total size: 0x30
class zNPCSteeringStopControl : public zNPCSteeringControl {
    // Members
    float stopAcc; // offset 0x2C, size 0x4
};
// total size: 0xE8
class zProjectile {
    // Members
    class zProjectile * nextProjectile; // offset 0x0, size 0x4
    unsigned int uniqueID; // offset 0x4, size 0x4
    class zProjectileController * controller; // offset 0x8, size 0x4
    class zProjectileDynamicParameterData m_dynamicData; // offset 0xC, size 0x2C
    class xBase * owner; // offset 0x38, size 0x4
    unsigned long long cachedID; // offset 0x40, size 0x8
    float timeAlive; // offset 0x48, size 0x4
    float timeSinceThrow; // offset 0x4C, size 0x4
    float timeSinceDrop; // offset 0x50, size 0x4
    float timeUntilPingSpawnable; // offset 0x54, size 0x4
    float timeSinceMovedDuringCollision; // offset 0x58, size 0x4
    int numHitsPerFrame; // offset 0x5C, size 0x4
    class xVec3 trappedOldPos; // offset 0x60, size 0xC
    class zProjectileEntity * entity; // offset 0x6C, size 0x4
    class zProjectileTrajectory * trajectory; // offset 0x70, size 0x4
    class zProjectileCollDetect * collDetect; // offset 0x74, size 0x4
    class zProjectileCollHandler * collHandler; // offset 0x78, size 0x4
    class xVec3 oldPos; // offset 0x7C, size 0xC
    class xVec3 dPos; // offset 0x88, size 0xC
    class xEnt * driver; // offset 0x94, size 0x4
    class xVec3 lastDriverPos; // offset 0x98, size 0xC
    class zRibbon * ribbonEffect; // offset 0xA4, size 0x4
    class xFXRibbon * ribbon; // offset 0xA8, size 0x4
    class zFXScriptSpawnPt * auraFXAsset; // offset 0xAC, size 0x4
    class zFXScriptSpawnPt * inAirAuraFXAsset; // offset 0xB0, size 0x4
    class zFXScriptSpawnPt * timeoutFXAsset; // offset 0xB4, size 0x4
    class zFXScriptSpawnPt * explosionFXAsset; // offset 0xB8, size 0x4
    class zFXScriptSpawnPt * pingFXAsset; // offset 0xBC, size 0x4
    class zFXScriptSpawnPt * muzzleFXAsset; // offset 0xC0, size 0x4
    class zFXScriptSpawnPt * auraFXScriptSpawnPoint; // offset 0xC4, size 0x4
    class zFXScriptSpawnPt * inAirAuraFXScriptSpawnPoint; // offset 0xC8, size 0x4
    class zFXScriptSpawnPt * timeoutFXScriptSpawnPoint; // offset 0xCC, size 0x4
    class zFXScriptSpawnPt * explosionFXScriptSpawnPoint; // offset 0xD0, size 0x4
    class zFXScriptSpawnPt * pingFXScriptSpawnPoint; // offset 0xD4, size 0x4
    class zFXScriptSpawnPt * muzzleFXScriptSpawnPoint; // offset 0xD8, size 0x4
    bool killedByCollision : 1; // offset 0xDC, size 0x1, bit offset 0
    bool killedByManager : 1; // offset 0xDC, size 0x1, bit offset 1
    bool killedByTrajectory : 1; // offset 0xDC, size 0x1, bit offset 2
    bool killedBySuperProjectile : 1; // offset 0xDC, size 0x1, bit offset 3
    bool killedByTimer : 1; // offset 0xDC, size 0x1, bit offset 4
    bool update : 1; // offset 0xDC, size 0x1, bit offset 5
    bool visible : 1; // offset 0xDC, size 0x1, bit offset 6
    unsigned char pad : 2; // offset 0xDD, size 0x1, bit offset 0
    class zSoundSourcesPhysics * soundSourcesPhysics; // offset 0xE0, size 0x4
};
// total size: 0x2C
class zProjectileDynamicParameterData {
    // Members
    bool killWithCollision : 1; // offset 0x0, size 0x1, bit offset 0
    bool killedByController : 1; // offset 0x0, size 0x1, bit offset 1
    class zWallePlayer * playerOwner; // offset 0x4, size 0x4
    float antiGravity; // offset 0x8, size 0x4
    float maxParabTrajLaunchAngle; // offset 0xC, size 0x4
    float trajLaunchSpeed; // offset 0x10, size 0x4
    class xVec3 rotationSpeeds; // offset 0x14, size 0xC
    class xVec3 throwPosition; // offset 0x20, size 0xC
};
// total size: 0x118
class zProjectileEntity {
    // Members
    class ModelInstanceAsset * modelInstanceAsset; // offset 0x0, size 0x4
    class ModelHelperInfo * modelRenderInfo; // offset 0x4, size 0x4
    float boundRadius; // offset 0x8, size 0x4
    class xMat4x3 matrix; // offset 0xC, size 0x40
    class ShadowSimpleCache simpleShadowCache; // offset 0x4C, size 0xCC
};
// total size: 0x98
class zProjectileTrajectory {
    // Members
    class zProjectile * owner; // offset 0x0, size 0x4
    class zProjectileHavok * havokChild; // offset 0x4, size 0x4
    class xMat4x3 matrix; // offset 0x8, size 0x40
    class xMat4x3 prevMatrix; // offset 0x48, size 0x40
    class xEnt * attachedEnt; // offset 0x88, size 0x4
    int attachedEntBone; // offset 0x8C, size 0x4
    class ModelInstanceAsset * model; // offset 0x90, size 0x4
};
// total size: 0x40
class zProjectileHavok : public xBase {
    // Members
    class HavokSimObj havokSimObj; // offset 0x20, size 0x4
    class zProjectileTrajectory * parentTrajectory; // offset 0x24, size 0x4
    class xVec3 permenantAcceleration; // offset 0x28, size 0xC
    float gravityDelta; // offset 0x34, size 0x4
    enum eHavok_Mode havokMode; // offset 0x38, size 0x4
    class ProjectileCollisionListener * projectileCollisionListener; // offset 0x3C, size 0x4
};
// total size: 0x4
class HavokSimObj {
    // Members
    class hkpRigidBody * pRigidBody; // offset 0x0, size 0x4
};
// total size: 0x0
class zProjectileCollHandler {};
// total size: 0x1C
class zNPCGetsDamageInfo {
    // Members
    class xBase * from; // offset 0x0, size 0x4
    class zNPCEntity * npcEntity; // offset 0x4, size 0x4
    float damageHP; // offset 0x8, size 0x4
    float remainingHP; // offset 0xC, size 0x4
    enum zHitSource hitSource; // offset 0x10, size 0x4
    enum zHitTarget hitTarget; // offset 0x14, size 0x4
    enum eNPCHitReaction hitReaction; // offset 0x18, size 0x4
};
// total size: 0x14
class zNPCGivesDamageInfo {
    // Members
    class xEnt * toEnt; // offset 0x0, size 0x4
    class zNPCEntity * npcEntity; // offset 0x4, size 0x4
    float damageHP; // offset 0x8, size 0x4
    enum zHitSource hitSource; // offset 0xC, size 0x4
    enum zHitTarget hitTarget; // offset 0x10, size 0x4
};
// total size: 0x80
class zNPCCharger : public zNPCBase {};
// total size: 0xC
class hkArray {
    // Members
    class hkpWorldObject * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x7C
class zNPCChargerMainState : public zNPCPushPopControl, public zNPCCollisionListener {
    // Members
    float killTimer; // offset 0x74, size 0x4
    bool killedByCollision; // offset 0x78, size 0x1
    bool checkCollisionSeverity; // offset 0x79, size 0x1
    bool killTimerEnabled; // offset 0x7A, size 0x1
};
// total size: 0x1B0
class Charger : public NPCAsset {
    // Members
    unsigned int ChargerType; // offset 0x180, size 0x4
    class uid PatrolNetworkMovepoint; // offset 0x188, size 0x8
    float Speed; // offset 0x190, size 0x4
    float ForwardAcc; // offset 0x194, size 0x4
    float TurnAcc; // offset 0x198, size 0x4
    float BounceAmt; // offset 0x19C, size 0x4
    float KillTimer; // offset 0x1A0, size 0x4
};
// total size: 0x230
class zNPCSeekAction : public zNPCAction {
    // Members
    class zNPCSteeringMoveToControl moveToControl; // offset 0x18, size 0x1DC
    class zNPCActionAnim actionAnim; // offset 0x1F4, size 0x20
    class zNPCStateTimer timer; // offset 0x214, size 0x4
    class zNPCStuckRangeMultiplier stuckRangeMultiplier; // offset 0x218, size 0x10
    float arriveRangeMultiplier2; // offset 0x228, size 0x4
    bool popWhenArrived; // offset 0x22C, size 0x1
};
// total size: 0x4
class zNPCStateTimer {
    // Members
    float curTime; // offset 0x0, size 0x4
};
// total size: 0x10
class zNPCStuckRangeMultiplier {
    // Members
    float stuckVel2; // offset 0x0, size 0x4
    float multiplierRate; // offset 0x4, size 0x4
    float maxMultiplier; // offset 0x8, size 0x4
    float curMultiplier; // offset 0xC, size 0x4
};
// total size: 0x8
class zNPCStateFrequency {
    // Members
    float period; // offset 0x0, size 0x4
    float curTime; // offset 0x4, size 0x4
};
// total size: 0x5C
class zNPCTeleportState : public zNPCState {
    // Members
    class xMat4x3 toMat; // offset 0x14, size 0x40
    class xMovePoint * toMp; // offset 0x54, size 0x4
    float extraDistance; // offset 0x58, size 0x4
};
// total size: 0xA8
class zNPCNoMoveAction : public zNPCAction {
    // Members
    class zNPCSteeringNoMoveControl noMoveControl; // offset 0x18, size 0x2C
    class zNPCActionAnim actionAnim; // offset 0x44, size 0x20
    class zNPCStateTimer timer; // offset 0x64, size 0x4
    class xMat4x3 orientationMat; // offset 0x68, size 0x40
};
// total size: 0x2C
class zNPCSteeringNoMoveControl : public zNPCSteeringControl {};
// total size: 0xAC
class zNPCNoMoveLoop : public zNPCNoMoveAction {
    // Members
    int repeats; // offset 0xA8, size 0x4
};
// total size: 0x6C
class zNPCIdleAction : public zNPCAction {
    // Members
    class zNPCSteeringStopControl stopControl; // offset 0x18, size 0x30
    class zNPCActionAnim actionAnim; // offset 0x48, size 0x20
    class zNPCStateTimer timer; // offset 0x68, size 0x4
};
// total size: 0x68
class zNPCDamageAction : public zNPCOneShotAnimAction {};
// total size: 0xBC
class zNPCLookoutAction : public zNPCIdleAction {
    // Members
    class LookoutInfo lookoutInfos[4]; // offset 0x6C, size 0x30
    class xVec3 initialDest; // offset 0x9C, size 0xC
    float initialAngle; // offset 0xA8, size 0x4
    float stateTime; // offset 0xAC, size 0x4
    unsigned int numberOfLookoutInfos; // offset 0xB0, size 0x4
    unsigned int curLookoutInfo; // offset 0xB4, size 0x4
    bool popWhenEnded; // offset 0xB8, size 0x1
    bool initialDestSet; // offset 0xB9, size 0x1
};
// total size: 0xC
class LookoutInfo {
    // Members
    float lookoutAngle; // offset 0x0, size 0x4
    float lookoutStartTime; // offset 0x4, size 0x4
    float lookoutDuration; // offset 0x8, size 0x4
};
// total size: 0x230
class zNPCMoveToAction : public zNPCAction {
    // Members
    class zNPCSteeringMoveToControl moveToControl; // offset 0x18, size 0x1DC
    class zNPCActionAnim actionAnim; // offset 0x1F4, size 0x20
    class zNPCStateTimer timer; // offset 0x214, size 0x4
    class zNPCStuckRangeMultiplier stuckRangeMultiplier; // offset 0x218, size 0x10
    float arriveRangeMultiplier2; // offset 0x228, size 0x4
    bool popWhenArrived; // offset 0x22C, size 0x1
};
// total size: 0xA8
class zNPCWanderAction : public zNPCAction {
    // Members
    class zNPCSteeringWanderControl wanderControl; // offset 0x18, size 0x6C
    class zNPCActionAnim actionAnim; // offset 0x84, size 0x20
    class zNPCStateTimer timer; // offset 0xA4, size 0x4
};
// total size: 0x6C
class zNPCSteeringWanderControl : public zNPCSteeringControl {
    // Members
    class zWanderData wanderData; // offset 0x2C, size 0x1C
    class zWallAvoidanceData wallAvoidanceData; // offset 0x48, size 0x10
    float maxAcc; // offset 0x58, size 0x4
    class zNPCSteeringAccumulator accAccum; // offset 0x5C, size 0x10
};
// total size: 0xC8
class zNPCFleeAction : public zNPCAction {
    // Members
    class zNPCSteeringFleeControl fleeControl; // offset 0x18, size 0x8C
    class zNPCActionAnim actionAnim; // offset 0xA4, size 0x20
    class zNPCStateTimer timer; // offset 0xC4, size 0x4
};
// total size: 0x8C
class zNPCSteeringFleeControl : public zNPCSteeringControl {
    // Members
    class zWanderData wanderData; // offset 0x2C, size 0x1C
    class zWallAvoidanceData wallAvoidanceData; // offset 0x48, size 0x10
    class zNPCSteeringDest fleeDestination; // offset 0x58, size 0x10
    class zNPCSteeringVecLimiter fleeAccLimiter; // offset 0x68, size 0x10
    float maxAcc; // offset 0x78, size 0x4
    class zNPCSteeringAccumulator accAccum; // offset 0x7C, size 0x10
};
// total size: 0x5C
class zNPCIdleWithFidgetControl : public zNPCFSMControl {
    // Members
    class zNPCOneShotAnimAction * oneShotAnimAction; // offset 0x1C, size 0x4
    unsigned int fidgetWeight[4]; // offset 0x20, size 0x10
    unsigned int animStateIDs[4]; // offset 0x30, size 0x10
    float blendTimes[4]; // offset 0x40, size 0x10
    unsigned int animNumber; // offset 0x50, size 0x4
    int animNameConcatNumber; // offset 0x54, size 0x4
    unsigned int curCycleNum; // offset 0x58, size 0x4
};
// total size: 0x1C
class zNPCFSMControl : public zNPCControl {
    // Members
    class zNPCState * child; // offset 0x14, size 0x4
    int childID; // offset 0x18, size 0x4
};
// total size: 0x44
class zNPCSequencerControl : public zNPCFSMControl {
    // Members
    class zNPCState * sequencerStack[8]; // offset 0x1C, size 0x20
    unsigned int sequencerStackSize; // offset 0x3C, size 0x4
    bool loop; // offset 0x40, size 0x1
};
// total size: 0x8
class zNPCControlCommand {
    // Members
    class zNPCState * stateToPush; // offset 0x0, size 0x4
    class zNPCStateResult popResult; // offset 0x4, size 0x4
};
// total size: 0xC4
class zNPCActivePerceptionControl : public zNPCFSMControl {
    // Members
    class PercCheck checks[8]; // offset 0x1C, size 0xA0
    unsigned int numberOfChecks; // offset 0xBC, size 0x4
    class zNPCState * initialState; // offset 0xC0, size 0x4
};
// total size: 0x14
class PercCheck {
    // Members
    class zNPCControlCommand command; // offset 0x0, size 0x8
    unsigned int targetToCheckMask; // offset 0x8, size 0x4
    enum ePerceptionType perceptionTypeToCheck; // offset 0xC, size 0x4
    bool executeWhenPerceptionIsTrue; // offset 0x10, size 0x1
};
enum ePerceptionType {
    eTargetReachable = 0,
    eTargetChargable = 1,
    eTargetAttackable = 2,
    eTargetVisible = 3,
    eTargetShootable = 4,
    END_eENUM = 5,
};
// total size: 0x6A8
class zNPCShootLaserControl : public zNPCFSMControl {
    // Members
    class ShootInfo shootInfo[4]; // offset 0x1C, size 0x110
    class zRunEntLaser lasersBase[4]; // offset 0x130, size 0x560
    bool shot[4]; // offset 0x690, size 0x4
    class zNPCStateTimer timer; // offset 0x694, size 0x4
    class zNPCState * decoratedState; // offset 0x698, size 0x4
    unsigned int numberOfShots; // offset 0x69C, size 0x4
    float stateTime; // offset 0x6A0, size 0x4
};
// total size: 0x44
class ShootInfo {
    // Members
    class zRuntimeEntityCreateInfo * laserCI; // offset 0x0, size 0x4
    class xEnt * target; // offset 0x4, size 0x4
    class xVec3 shootStartOffset; // offset 0x8, size 0xC
    float shootTime; // offset 0x14, size 0x4
    float calcTime; // offset 0x18, size 0x4
    class xVec2 shootEndOffset; // offset 0x1C, size 0x8
    class xVec2 shootEndErrorRange; // offset 0x24, size 0x8
    class xVec2 shootEndErrorBeta; // offset 0x2C, size 0x8
    float laserDamage; // offset 0x34, size 0x4
    enum zHitSource hitSource; // offset 0x38, size 0x4
    enum zHitTarget hitTarget; // offset 0x3C, size 0x4
    float speed; // offset 0x40, size 0x4
};
// total size: 0x30
class zNPCFollowMPPathControl : public zNPCFSMControl {
    // Members
    class zNPCMoveToAction * moveToAction; // offset 0x1C, size 0x4
    class zNPCIdleAction * idleAction; // offset 0x20, size 0x4
    class xMovePoint * curMovePoint; // offset 0x24, size 0x4
    class xMovePoint * lastArrivedMovePoint; // offset 0x28, size 0x4
    bool goToClosestInNetwork; // offset 0x2C, size 0x1
    bool popWhenArrived; // offset 0x2D, size 0x1
    bool useMovePointInfoNode; // offset 0x2E, size 0x1
    bool arriveLastMP; // offset 0x2F, size 0x1
};
// total size: 0x18
class zNPCInfoNodePathInfo : public zNPCInfoNode {
    // Members
    class xMovePoint * * pathMovepoint; // offset 0x10, size 0x4
    class xMovePoint * lastValidMP; // offset 0x14, size 0x4
};
// total size: 0x14
class zNPCInfoNodeMovePointSave : public zNPCInfoNode {
    // Members
    class xMovePoint * movePoint; // offset 0x10, size 0x4
};
// total size: 0x24C
class zNPCFollowNPCOnPathControl : public zNPCMoveToAction {
    // Members
    class zNPCBase * destNPC; // offset 0x230, size 0x4
    class xMovePoint * curMovePoint; // offset 0x234, size 0x4
    class xMovePoint * lastMovePoint; // offset 0x238, size 0x4
    class xMovePoint * foundMP; // offset 0x23C, size 0x4
    float foundPathLength; // offset 0x240, size 0x4
    float followerDist; // offset 0x244, size 0x4
    bool updateOrientation; // offset 0x248, size 0x1
};
// total size: 0x244
class zNPCFollowEntControl : public zNPCMoveToAction {
    // Members
    class xEnt * destEnt; // offset 0x230, size 0x4
    class xVec3 offsetFromEnt; // offset 0x234, size 0xC
    bool updateOrientation; // offset 0x240, size 0x1
};
// total size: 0x5C
class zNPCFollowEntWithFidgetControl : public zNPCFSMControl {
    // Members
    class zNPCFollowEntControl * followEntControl; // offset 0x1C, size 0x4
    unsigned int fidgetWeight[4]; // offset 0x20, size 0x10
    unsigned int animStateIDs[4]; // offset 0x30, size 0x10
    float blendTimes[4]; // offset 0x40, size 0x10
    unsigned int animNumber; // offset 0x50, size 0x4
    int animNameConcatNumber; // offset 0x54, size 0x4
    unsigned int curCycleNum; // offset 0x58, size 0x4
};
// total size: 0x44C
class zNPCFollowPlayerControl : public zNPCMoveToAction {
    // Members
    class zNPCSteeringFollowPlayerControl followPlayerSteeringControl; // offset 0x230, size 0x1F8
    class zCommonPlayer * destPlayer; // offset 0x428, size 0x4
    bool updateOrientation; // offset 0x42C, size 0x1
    float speedLimit; // offset 0x430, size 0x4
    float minRadius; // offset 0x434, size 0x4
    float maxRadius; // offset 0x438, size 0x4
    float offsetUp; // offset 0x43C, size 0x4
    float losAvoidanceAngle; // offset 0x440, size 0x4
    float cameraAvoidanceAngle; // offset 0x444, size 0x4
    bool losAvoidanceEnabled; // offset 0x448, size 0x1
    bool cameraAvoidanceEnabled; // offset 0x449, size 0x1
};
// total size: 0x1F8
class zNPCSteeringFollowPlayerControl : public zNPCSteeringMoveToControl {
    // Members
    class zPlayer * player; // offset 0x1DC, size 0x4
    class zObjectAvoidanceData objectAvoidanceData; // offset 0x1E0, size 0x18
};
// total size: 0x18
class zObjectAvoidanceData {
    // Members
    float avoidanceMinAcc; // offset 0x0, size 0x4
    float avoidanceMaxAcc; // offset 0x4, size 0x4
    float avoidanceTime; // offset 0x8, size 0x4
    float avoidanceMinDist; // offset 0xC, size 0x4
    float avoidanceSphereRad; // offset 0x10, size 0x4
    bool enabled; // offset 0x14, size 0x1
};
// total size: 0x5C
class zNPCFollowPlayerWithFidgetControl : public zNPCFSMControl {
    // Members
    class zNPCFollowPlayerControl * followPlayerControl; // offset 0x1C, size 0x4
    unsigned int fidgetWeight[4]; // offset 0x20, size 0x10
    unsigned int animStateIDs[4]; // offset 0x30, size 0x10
    float blendTimes[4]; // offset 0x40, size 0x10
    unsigned int animNumber; // offset 0x50, size 0x4
    int animNameConcatNumber; // offset 0x54, size 0x4
    unsigned int curCycleNum; // offset 0x58, size 0x4
};
// total size: 0x8
class NPCNGEntityContext : public xOGEntityModelContext {
    // Members
    class zNPCEntity * npcOGEntity; // offset 0x4, size 0x4
};
// total size: 0x80
class hkpCharacterProxyCinfo {
    // Members
    class hkVector4 m_position; // offset 0x0, size 0x10
    class hkVector4 m_velocity; // offset 0x10, size 0x10
    float m_dynamicFriction; // offset 0x20, size 0x4
    float m_staticFriction; // offset 0x24, size 0x4
    float m_keepContactTolerance; // offset 0x28, size 0x4
    class hkVector4 m_up; // offset 0x30, size 0x10
    float m_extraUpStaticFriction; // offset 0x40, size 0x4
    float m_extraDownStaticFriction; // offset 0x44, size 0x4
    class hkpShapePhantom * m_shapePhantom; // offset 0x48, size 0x4
    float m_keepDistance; // offset 0x4C, size 0x4
    float m_contactAngleSensitivity; // offset 0x50, size 0x4
    unsigned int m_userPlanes; // offset 0x54, size 0x4
    float m_maxCharacterSpeedForSolver; // offset 0x58, size 0x4
    float m_characterStrength; // offset 0x5C, size 0x4
    float m_characterMass; // offset 0x60, size 0x4
    float m_maxSlope; // offset 0x64, size 0x4
    float m_penetrationRecoverySpeed; // offset 0x68, size 0x4
    int m_maxCastIterations; // offset 0x6C, size 0x4
    bool m_refreshManifoldInCheckSupport; // offset 0x70, size 0x1
};
// total size: 0x1C0
class NPCChargerPointCollector : public hkpAllCdPointCollector {
    // Members
    class hkArray m_objectsWeHit; // offset 0x1A0, size 0xC
    class hkArray m_contacts; // offset 0x1AC, size 0xC
};
// total size: 0xC
class hkArray {
    // Members
    class hkContactPoint * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x1C0
class NPCEvePointCollector : public hkpAllCdPointCollector {
    // Members
    class hkArray m_objectsWeHit; // offset 0x1A0, size 0xC
    class hkArray m_contacts; // offset 0x1AC, size 0xC
};
// total size: 0x14
class zNPCEveLOSHitCollector : public hkpRayHitCollector {
    // Members
    bool hitIt; // offset 0x8, size 0x1
    class xBase * source; // offset 0xC, size 0x4
    class xBase * target; // offset 0x10, size 0x4
};
// total size: 0x2C
class zNPCEveMainState : public zNPCFSMControl, public zNPCCollisionListener {
    // Members
    class zNPCFollowPlayerControl * followPlayerControl; // offset 0x24, size 0x4
    float laserPutawayTimer; // offset 0x28, size 0x4
};
enum HitDirection {
    Front = 0,
    Back = 1,
    Left = 2,
    Right = 3,
};
// total size: 0x80
class zNPCEveStorkJumpStartState : public zNPCOneShotAnimAction {
    // Members
    float ARRIVED_THRESHOLD; // offset 0x68, size 0x4
    float ARRIVED_THRESHOLD_FOR_TURN2; // offset 0x6C, size 0x4
    float TIME_TO_REACH; // offset 0x70, size 0x4
    float TURNSPRING_K; // offset 0x74, size 0x4
    bool arrived; // offset 0x78, size 0x1
    float timer; // offset 0x7C, size 0x4
};
// total size: 0x68
class zNPCEveStorkJumpIdleState : public zNPCOneShotAnimAction {};
// total size: 0x44C
class zNPCEveDamageState : public zNPCFollowPlayerControl {};
// total size: 0x228
class zNPCEveFollowPlayerWithFidgetControl : public zNPCFSMControl {
    // Members
    class zNPCFollowPlayerControl * followPlayerControl; // offset 0x1C, size 0x4
    class NPCEveExtraIdleTableEntry extraIdleTable[3][2]; // offset 0x20, size 0x1F8
    unsigned int rarity[3]; // offset 0x218, size 0xC
    unsigned int curCycleNum; // offset 0x224, size 0x4
};
// total size: 0x54
class NPCEveExtraIdleTableEntry {
    // Members
    unsigned int variants[10]; // offset 0x0, size 0x28
    float blendTimes[10]; // offset 0x28, size 0x28
    int numVariants; // offset 0x50, size 0x4
};
// total size: 0x7C
class zNPCEveAimState : public zNPCOneShotAnimAction {
    // Members
    bool strafe; // offset 0x68, size 0x1
    float LEAN_BLEND_SPEED; // offset 0x6C, size 0x4
    float leanLerp; // offset 0x70, size 0x4
    float driveLerp; // offset 0x74, size 0x4
    float aimLerp; // offset 0x78, size 0x4
};
// total size: 0x228
class zNPCEveAimWithFidgetControl : public zNPCFSMControl {
    // Members
    class zNPCOneShotAnimAction * animAction; // offset 0x1C, size 0x4
    class NPCEveExtraIdleTableEntry extraIdleTable[3][2]; // offset 0x20, size 0x1F8
    unsigned int rarity[3]; // offset 0x218, size 0xC
    unsigned int curCycleNum; // offset 0x224, size 0x4
};
// total size: 0x8
class zNPCFXTypeInfo {
    // Members
    enum FXType type; // offset 0x0, size 0x4
    class zNPCFXNode * (* fxNodeCreator)(class zFactory * factory); // offset 0x4, size 0x4
};
// total size: 0x14
class zNPCFXOneShotFXScript : public zNPCFXNode {
    // Members
    class FXTypeFXScript * asset; // offset 0xC, size 0x4
    class zFXScript * script; // offset 0x10, size 0x4
};
// total size: 0x28
class FXTypeFXScript {
    // Members
    int AttachedBone; // offset 0x0, size 0x4
    class vec3 AttachOffset; // offset 0x4, size 0xC
    class Rotation3 AttachOrientation; // offset 0x10, size 0xC
    class uid FXScript; // offset 0x20, size 0x8
};
// total size: 0x18
class zNPCFXLoopFXScript : public zNPCFXNode {
    // Members
    class FXTypeFXScript * asset; // offset 0xC, size 0x4
    class zFXScript * script; // offset 0x10, size 0x4
    class zFXScriptSpawnPt * spawnPoint; // offset 0x14, size 0x4
};
// total size: 0x2C
class zNPCFXLoopStunned : public zNPCFXNode {
    // Members
    class FXTypeImmediateInstance * asset; // offset 0xC, size 0x4
    class ImmediatePrototypeEntity * textures[4]; // offset 0x10, size 0x10
    unsigned int numberOfTextures; // offset 0x20, size 0x4
    float curFXAngle; // offset 0x24, size 0x4
    float curFXTime; // offset 0x28, size 0x4
};
// total size: 0x40
class FXTypeImmediateInstance {
    // Members
    class ImmediateInstanceAsset Texture1; // offset 0x0, size 0x10
    class ImmediateInstanceAsset Texture2; // offset 0x10, size 0x10
    class ImmediateInstanceAsset Texture3; // offset 0x20, size 0x10
    class ImmediateInstanceAsset Texture4; // offset 0x30, size 0x10
};
// total size: 0x10
class ImmediateInstanceAsset {
    // Members
    unsigned long long immediatePrototypeID; // offset 0x0, size 0x8
    unsigned short rendCount; // offset 0x8, size 0x2
    unsigned short pad; // offset 0xA, size 0x2
    class Pointer32 rendSettings; // offset 0xC, size 0x4
};
// total size: 0x2C
class ScadMgr {
    // Members
    class PoolList goodieList; // offset 0x0, size 0x1C
    bool dirtySort; // offset 0x1C, size 0x1
    class PoolArray goodieSortedArray; // offset 0x20, size 0xC
};
// total size: 0x1C
class PoolList : public PoolListBase {};
// total size: 0x1C
class PoolListBase {
    // Members
    int size; // offset 0x0, size 0x4
    class NodeHeader tail; // offset 0x4, size 0x8
    class NodeHeader * freeList; // offset 0xC, size 0x4
    class NodeHeader * poolHead; // offset 0x10, size 0x4
    int poolSize; // offset 0x14, size 0x4
    int peakSize; // offset 0x18, size 0x4
};
// total size: 0x8
class NodeHeader {
    // Members
    class NodeHeader * prev; // offset 0x0, size 0x4
    class NodeHeader * next; // offset 0x4, size 0x4
};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class GoodieSortedEntry * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x8
class GoodieSortedEntry {
    // Members
    class @class __anon; // offset 0x0, size 0x8
    unsigned long long key; // offset 0x0, size 0x8
    class GoodiePad gp; // offset 0x0, size 0x8
};
// total size: 0x8
class @class {
    // Members
    unsigned long long key; // offset 0x0, size 0x8
    class GoodiePad gp; // offset 0x0, size 0x8
};
// total size: 0x8
class GoodiePad {
    // Members
    int pad; // offset 0x0, size 0x4
    class Goodie * goodie; // offset 0x4, size 0x4
};
// total size: 0x14
class EntityHandle : public EntityHandleBase {};
// total size: 0x18
class zNPCStateOld {
    // Members
    int stateEnum; // offset 0x0, size 0x4
    class zNPCStateMachine * stateMachine; // offset 0x4, size 0x4
    enum eStateStatus status; // offset 0x8, size 0x4
    class zNPCStateOld * prevState; // offset 0xC, size 0x4
    class zNPCStateOld * nextState; // offset 0x10, size 0x4
};
// total size: 0x2C
class zNPCStateMachine : public zNPCLogic {
    // Members
    class zNPCStateTransEventFIFO eventsBuffer; // offset 0x8, size 0x14
    class zNPCStateMachineTable * stateTable; // offset 0x1C, size 0x4
    int numberOfStates; // offset 0x20, size 0x4
    class zNPCStateOld * * states; // offset 0x24, size 0x4
    class zNPCStateOld * currentState; // offset 0x28, size 0x4
};
// total size: 0x14
class zNPCStateTransEventFIFO {
    // Members
    class zNPCStateTransEvent * eventsPool; // offset 0x0, size 0x4
    int poolSize; // offset 0x4, size 0x4
    int poolUsed; // offset 0x8, size 0x4
    int front; // offset 0xC, size 0x4
    int end; // offset 0x10, size 0x4
};
// total size: 0x10
class zNPCStateTransEvent {
    // Members
    class zNPCStateOld * fromState; // offset 0x0, size 0x4
    class zNPCStateOld * toState; // offset 0x4, size 0x4
    enum eStateTransitionType transitionType; // offset 0x8, size 0x4
    enum eStatePopMsg popMsg; // offset 0xC, size 0x4
};
enum eStateTransitionType {
    eStateTransType_Switch = 0,
    eStateTransType_Push = 1,
    eStateTransType_Pop = 2,
    eStateTransType_PopStack = 3,
    eStateTransType_SwitchChild = 4,
    eStateTransType_PopAllStack = 5,
    eStateTestTypeForceInt = 2147483647,
};
enum eStatePopMsg {
    eStatePopMsg_Unknown = 0,
    eStatePopMsg_ParentInterrupt = 1,
    eStatePopMsg_Perceived = 2,
    eStatePopMsg_Sensed = 3,
    eStatePopMsg_Giveup = 4,
    eStatePopMsg_Arrived = 5,
    eStatePopMsg_CantReach = 6,
    eStatePopMsg_CanReach = 7,
    eStatePopMsg_AlreadyThere = 8,
    eStatePopMsg_Fled = 9,
    eStatePopMsg_Stuck = 10,
    eStatePopMsg_CantReachAlreadyThere = 11,
    eStatePopMsg_TimeEnd = 12,
    eStatePopMsg_OutOfRange = 13,
    eStatePopMsg_InRange = 14,
    eStatePopMsg_GiveDamage = 15,
    eStatePopMsg_GotDamage = 16,
    eStatePopMsg_Stunned = 17,
    eStatePopMsg_KIA = 18,
    eStatePopMsg_Alarmed = 19,
    eStatePopMsg_PassedPlayer = 20,
    eStataPopMsg_HitWall = 21,
    eStatePopMsg_InterestedObject = 22,
    eStatePopMsg_Unsuccessful = 23,
    eStatePopMsg_ObjectLost = 24,
    eStatePopMsg_ObjectDropped = 25,
    eStatePopMsg_ObjectKilled = 26,
    eStatePopMsg_InstaKillEarlyKill = 27,
    eStatePopMsgForceInt = 2147483647,
};
// total size: 0x10
class zNPCStateMachineTable {
    // Members
    int stateEnum; // offset 0x0, size 0x4
    int priority; // offset 0x4, size 0x4
    class zNPCStateOld * (* newStateFunction)(class zNPCStateMachine * stateMachine); // offset 0x8, size 0x4
    int stateSize; // offset 0xC, size 0x4
};
enum eStateStatus {
    eStateStatus_NotActive = 0,
    eStateStatus_PreActive = 1,
    eStateStatus_Active = 2,
};
// total size: 0x54
class zGenericAnimStateWSteering : public zNPCStateOld {
    // Members
    unsigned int animStateID; // offset 0x18, size 0x4
    float blendTime; // offset 0x1C, size 0x4
    float animStartTime; // offset 0x20, size 0x4
    class zGenericStatesLeanData * leanData; // offset 0x24, size 0x4
    class zNPCSteeringGenericParams * steeringParams; // offset 0x28, size 0x4
    class xVec3 destination; // offset 0x2C, size 0xC
    class xVec3 facing; // offset 0x38, size 0xC
    class xVec3 * pDestination; // offset 0x44, size 0x4
    class xVec3 * pFacing; // offset 0x48, size 0x4
    class xVec3 * pDestinationVel; // offset 0x4C, size 0x4
    unsigned int stateFlags; // offset 0x50, size 0x4
};
// total size: 0x8
class zGenericStatesLeanData {
    // Members
    float leanMaxTurnRate; // offset 0x0, size 0x4
    float leanMinTurnRate; // offset 0x4, size 0x4
};
// total size: 0x58
class zNPCSteeringGenericParams : public zNPCSteeringParams {
    // Members
    enum eSteeringType steeringType; // offset 0x4, size 0x4
    float maxAcc; // offset 0x8, size 0x4
    float maxSpeedXZ; // offset 0xC, size 0x4
    float maxSpeedDownY; // offset 0x10, size 0x4
    float turnSpringK; // offset 0x14, size 0x4
    float gravity; // offset 0x18, size 0x4
    float avoidanceTime; // offset 0x1C, size 0x4
    float wanderRatio; // offset 0x20, size 0x4
    float wanderFOV; // offset 0x24, size 0x4
    float wanderJitterPerSec; // offset 0x28, size 0x4
    float frictionK; // offset 0x2C, size 0x4
    float maxPredictionTime; // offset 0x30, size 0x4
    float initialSpeed; // offset 0x34, size 0x4
    float facingAccVelRatio; // offset 0x38, size 0x4
    float PIDControllerP; // offset 0x3C, size 0x4
    float PIDControllerI; // offset 0x40, size 0x4
    float PIDControllerD; // offset 0x44, size 0x4
    enum eSweptSphereHackIgnore sweepIgnoreFlags; // offset 0x48, size 0x4
    unsigned char collisionChk; // offset 0x4C, size 0x1
    bool wallAvoidanceOn; // offset 0x4D, size 0x1
    bool circleAvoidanceOn; // offset 0x4E, size 0x1
    bool wanderOn; // offset 0x4F, size 0x1
    bool frictionOn; // offset 0x50, size 0x1
    bool gravityOn; // offset 0x51, size 0x1
    bool forceInitialSpeed; // offset 0x52, size 0x1
    bool collisionsOn; // offset 0x53, size 0x1
};
// total size: 0x4
class zNPCSteeringParams {
    // Members
    enum eType type; // offset 0x0, size 0x4
};
enum eType {
    eSteeringParamsType_Generic = 0,
    eSteeringParamsType_Flocking = 1,
};
enum eSteeringType {
    eSteeringType_Straight = 0,
    eSteeringType_Turn = 1,
    eSteeringType_TurnDir = 2,
    eSteeringType_Seek = 3,
    eSteeringType_Pursuit = 4,
    eSteeringType_Stop = 5,
    eSteeringType_FleeBackwards = 6,
    eSteeringType_Flee = 7,
    eSteeringType_Arrive = 8,
    eSteeringType_SeekDir = 9,
    eSteeringType_JumpToDest = 10,
};
enum eSteeringResultOld {
    eSteeringResultOld_Unknown = 0,
    eSteeringResultOld_Arrived = 1,
};
// total size: 0x54
class zGenericMoveToState : public zGenericAnimStateWSteering {};
enum eCheckTrasitionStatus {
    eCheckTrasitionStatus_AfterUpdate = 0,
    eCheckTrasitionStatus_AfterEnter = 1,
    eCheckTrasitionStatus_AfterResume = 2,
};
// total size: 0x6C
class zGenericAlignState : public zGenericAnimStateWSteering {
    // Members
    float range; // offset 0x54, size 0x4
    float turnRange; // offset 0x58, size 0x4
    float tolerance; // offset 0x5C, size 0x4
    class xVec3 alignDest; // offset 0x60, size 0xC
};
// total size: 0x5C
class zGenericMoveToRangeState : public zGenericAnimStateWSteering {
    // Members
    float range; // offset 0x54, size 0x4
    bool rangeFromBound; // offset 0x58, size 0x1
};
// total size: 0x54
class zGenericTurnState : public zGenericAnimStateWSteering {};
// total size: 0x54
class zGenericOneShotAnimationState : public zGenericAnimStateWSteering {};
// total size: 0x5C
class zGenericNShotAnimationState : public zGenericAnimStateWSteering {
    // Members
    unsigned int totalRepeats; // offset 0x54, size 0x4
    unsigned int curRepeats; // offset 0x58, size 0x4
};
// total size: 0x5C
class zGenericTimerState : public zGenericAnimStateWSteering {
    // Members
    float stateTime; // offset 0x54, size 0x4
    float stateEndTime; // offset 0x58, size 0x4
};
// total size: 0x4C
class zGenericDistanceSwitchState : public zNPCStateOld {
    // Members
    class xEnt * toEnt; // offset 0x18, size 0x4
    float distanceArray[3]; // offset 0x1C, size 0xC
    int closeStateEnum; // offset 0x28, size 0x4
    int mediumStateEnum; // offset 0x2C, size 0x4
    int farStateEnum; // offset 0x30, size 0x4
    int farToMediumTrans; // offset 0x34, size 0x4
    int mediumToCloseTrans; // offset 0x38, size 0x4
    int closeToMediumTrans; // offset 0x3C, size 0x4
    int mediumToFarTrans; // offset 0x40, size 0x4
    enum eDistanceLinguistic lastDistance; // offset 0x44, size 0x4
    bool closeWaitForFinish; // offset 0x48, size 0x1
    bool mediumWaitForFinish; // offset 0x49, size 0x1
    bool farWaitForFinish; // offset 0x4A, size 0x1
    bool pad; // offset 0x4B, size 0x1
};
enum eDistanceLinguistic {
    eDistanceLinguistic_Unknown = 4294967295,
    eDistanceLinguistic_VeryClose = 0,
    eDistanceLinguistic_Close = 1,
    eDistanceLinguistic_Medium = 2,
    eDistanceLinguistic_Far = 3,
    eDistanceLinguistic_VeryFar = 4,
};
// total size: 0x40
class zGenericJumpToDestState : public zNPCStateOld {
    // Members
    unsigned int jumpStartAnimStateID; // offset 0x18, size 0x4
    unsigned int jumpInAirAnimStateID; // offset 0x1C, size 0x4
    unsigned int jumpLandAnimStateID; // offset 0x20, size 0x4
    class xVec3 destination; // offset 0x24, size 0xC
    class xVec3 facing; // offset 0x30, size 0xC
    unsigned char curStatus; // offset 0x3C, size 0x1
    bool animSetup : 1; // offset 0x3D, size 0x1, bit offset 0
    bool destinationSetup : 1; // offset 0x3D, size 0x1, bit offset 1
    bool facingSetup : 1; // offset 0x3D, size 0x1, bit offset 2
    unsigned char pad : 5; // offset 0x3D, size 0x1, bit offset 3
};
// total size: 0x50
class zGenericLookoutState : public zNPCStateOld {
    // Members
    int stopStateEnum; // offset 0x18, size 0x4
    int gotoStateEnum; // offset 0x1C, size 0x4
    int idleStateEnum; // offset 0x20, size 0x4
    float initialAtAngle; // offset 0x24, size 0x4
    bool isSubStatesSetup; // offset 0x28, size 0x1
    bool isLookoutSetup; // offset 0x29, size 0x1
    class zGenericLookoutStateParams * lookoutParams; // offset 0x2C, size 0x4
    class xVec3 lookoutDir; // offset 0x30, size 0xC
    class xVec3 lookoutPos; // offset 0x3C, size 0xC
    int totalNumberOfLookouts; // offset 0x48, size 0x4
    int curLookoutNum; // offset 0x4C, size 0x4
};
// total size: 0x20
class zGenericLookoutStateParams {
    // Members
    int minChangeDirNumber; // offset 0x0, size 0x4
    int maxChangeDirNumber; // offset 0x4, size 0x4
    float minChangeDirTime; // offset 0x8, size 0x4
    float maxChangeDirTime; // offset 0xC, size 0x4
    float lookoutCheckRange; // offset 0x10, size 0x4
    float lookoutCircleR; // offset 0x14, size 0x4
    float lookoutAngleRange; // offset 0x18, size 0x4
    bool lookoutSides; // offset 0x1C, size 0x1
    bool persistant; // offset 0x1D, size 0x1
};
// total size: 0x118
class zAnimSignalerFXInfoNode : public zNPCInfoNode {
    // Members
    unsigned int animIDs[16]; // offset 0x10, size 0x40
    float * animTimeArrays[16]; // offset 0x50, size 0x40
    int animTimeArrayLengths[16]; // offset 0x90, size 0x40
    enum FXType fxTypes[16]; // offset 0xD0, size 0x40
    float prevAnimtime; // offset 0x110, size 0x4
    int registeredAnimsNum; // offset 0x114, size 0x4
};
// total size: 0x58
class zNPCGroupCentipede : public zNPCGroupBase {
    // Members
    int * followedBy; // offset 0x30, size 0x4
    int activeHead; // offset 0x34, size 0x4
    int passiveHead; // offset 0x38, size 0x4
    int deadHead; // offset 0x3C, size 0x4
    class xMovePoint * centipedePathMP; // offset 0x40, size 0x4
    class zNPCStateFrequency spawnFrequency; // offset 0x44, size 0x8
    int maxActiveNPCs; // offset 0x4C, size 0x4
    bool activated; // offset 0x50, size 0x1
};
// total size: 0x40
class NPCGroupCentipede : public NPCGroupAsset {
    // Members
    class uid PatrolNetworkMovepoint; // offset 0x30, size 0x8
    float SpawnPeriod; // offset 0x38, size 0x4
    int MaxActiveNPCs; // offset 0x3C, size 0x4
};
// total size: 0x80
class zNPCStewardMainState : public zNPCPushPopControl {
    // Members
    class zNPCFollowNPCOnPathControl * moveControl; // offset 0x6C, size 0x4
    int currentDisplayScreen; // offset 0x70, size 0x4
    bool activateCheckPerformed; // offset 0x74, size 0x1
    class zFXScriptSpawnPt * spawnPt_Asset; // offset 0x78, size 0x4
    class zFXScriptSpawnPt * spawnPt; // offset 0x7C, size 0x4
};
// total size: 0x140
class zNPCManager : public zModule {
    // Members
    class xAnimTable * animTables; // offset 0x18, size 0x4
    int numberOfAllNPCs; // offset 0x1C, size 0x4
    class zNPCBase * * AllNPCs; // offset 0x20, size 0x4
    class zNPCUpdateLOD * NPCUpdateLODs; // offset 0x24, size 0x4
    int numberOfNPCs[31]; // offset 0x28, size 0x7C
    class zNPCBase * * NPCs[31]; // offset 0xA4, size 0x7C
    int numberOfAllNPCGroups; // offset 0x120, size 0x4
    class zNPCGroupBase * * AllNPCGroups; // offset 0x124, size 0x4
    int numberOfNPCGroups[3]; // offset 0x128, size 0xC
    class zNPCGroupBase * * NPCGroups[3]; // offset 0x134, size 0xC
};
// total size: 0xC
class zNPCUpdateLOD {
    // Members
    enum eNPCLODType lodType; // offset 0x0, size 0x4
    class LODTypeCylinder * lodCylinder; // offset 0x4, size 0x4
    class zNPCBase * npcBase; // offset 0x8, size 0x4
};
enum eNPCLODType {
    eNPCLODType_LODAlwaysUpdate = 0,
    eNPCLODType_LODCylinder = 1,
    END_eNPCLODType_ENUM = 2,
};
// total size: 0x4
class zNPCUpdateLODResult {
    // Members
    unsigned char result; // offset 0x0, size 0x1
    bool callDeactivate : 1; // offset 0x1, size 0x1, bit offset 0
    bool callActivate : 1; // offset 0x1, size 0x1, bit offset 1
    bool callPause : 1; // offset 0x1, size 0x1, bit offset 2
    bool callResume : 1; // offset 0x1, size 0x1, bit offset 3
    bool callUpdate : 1; // offset 0x1, size 0x1, bit offset 4
    unsigned char pad1 : 3; // offset 0x1, size 0x1, bit offset 5
    unsigned short pad2; // offset 0x2, size 0x2
};
// total size: 0x80
class zNPCMowbot : public zNPCBase {};
// total size: 0x70
class zNPCMowbotMainState : public zNPCPushPopControl {
    // Members
    class zProjectile * targetCube; // offset 0x6C, size 0x4
};
// total size: 0x20
class zNPCMowbotEngageMainState : public zNPCFSMControl {
    // Members
    int numberOfSuccessfulAttacks; // offset 0x1C, size 0x4
};
// total size: 0x238
class zNPCMowbotCleanState : public zNPCSeekAction, public zNPCCollisionListener {};
// total size: 0x240
class zNPCMowbotAttackState : public zNPCSeekAction, public zNPCCollisionListener {
    // Members
    bool attackSuccesful; // offset 0x238, size 0x1
    bool pushSuccesful; // offset 0x239, size 0x1
    bool isHeavy; // offset 0x23A, size 0x1
    class zFXScriptSpawnPt * spawnPt; // offset 0x23C, size 0x4
};
// total size: 0x40
class hkpCharacterObjectInteractionEvent {
    // Members
    class hkVector4 m_position; // offset 0x0, size 0x10
    class hkVector4 m_normal; // offset 0x10, size 0x10
    float m_objectImpulse; // offset 0x20, size 0x4
    float m_timestep; // offset 0x24, size 0x4
    float m_projectedVelocity; // offset 0x28, size 0x4
    float m_objectMassInv; // offset 0x2C, size 0x4
    class hkpRigidBody * m_body; // offset 0x30, size 0x4
};
// total size: 0x10
class _OGSwarmMeanEntity : public xOGEntity {};
// total size: 0x18
class _OGSwarmMeanSchema : public Schema {};
// total size: 0x10
class _OGNPCGroupCentipedeEntity : public xOGEntity {};
// total size: 0x18
class _OGNPCGroupCentipedeSchema : public Schema {};
// total size: 0x10
class _OGNPCGroupCircleEntity : public xOGEntity {};
// total size: 0x18
class _OGNPCGroupCircleSchema : public Schema {};
// total size: 0x10
class _OGNPCGroupSpaceInvadersEntity : public xOGEntity {};
// total size: 0x18
class _OGNPCGroupSpaceInvadersSchema : public Schema {};
// total size: 0x238
class zNPCNinjaManager : public zModule {
    // Members
    class fixed_stack_list waitingQueue; // offset 0x18, size 0x218
    class zNPCBase * curAttacker; // offset 0x230, size 0x4
    float remainingAttackTime; // offset 0x234, size 0x4
};
// total size: 0x218
class fixed_stack_list {
    // Members
    unsigned long _size; // offset 0x0, size 0x4
    class empty_node_type head; // offset 0x4, size 0x8
    class empty_node_type tail; // offset 0xC, size 0x8
    class node_type * stack; // offset 0x14, size 0x4
    class node_type buffer[32]; // offset 0x18, size 0x200
};
// total size: 0x10
class node_type : public empty_node_type {
    // Members
    class NinjaSlot value; // offset 0x8, size 0x8
};
// total size: 0x8
class NinjaSlot {
    // Members
    class zNPCBase * requestor; // offset 0x0, size 0x4
    unsigned int requestedThisFrame; // offset 0x4, size 0x4
};
// total size: 0x8
class NinjaSortData {
    // Members
    class zNPCBase * requestor; // offset 0x0, size 0x4
    float distanceSq; // offset 0x4, size 0x4
};
// total size: 0x10
class _OGNPC_PerceptionEntity : public xOGEntity {};
// total size: 0x18
class _OGNPC_PerceptionSchema : public Schema {};
// total size: 0x20
class PerceptionNode {
    // Members
    unsigned char Shape; // offset 0x0, size 0x1
    class @class __anon; // offset 0x4, size 0x14
    class PercShapeSphere Sphere; // offset 0x4, size 0x4
    class PercShapeSoundSphere SoundSphere; // offset 0x4, size 0x8
    class PercShapeCylinder Cylinder; // offset 0x4, size 0xC
    class PercShapeAngularSphere AngularSphere; // offset 0x4, size 0xC
    class PercShapeAngularCylinder AngularCylinder; // offset 0x4, size 0x14
    class PercShapeNPCWalls InNPCWalls; // offset 0x4, size 0x8
    unsigned int flags; // offset 0x18, size 0x4
    float HysteresisRatio; // offset 0x1C, size 0x4
};
// total size: 0x14
class @class {
    // Members
    class PercShapeSphere Sphere; // offset 0x0, size 0x4
    class PercShapeSoundSphere SoundSphere; // offset 0x0, size 0x8
    class PercShapeCylinder Cylinder; // offset 0x0, size 0xC
    class PercShapeAngularSphere AngularSphere; // offset 0x0, size 0xC
    class PercShapeAngularCylinder AngularCylinder; // offset 0x0, size 0x14
    class PercShapeNPCWalls InNPCWalls; // offset 0x0, size 0x8
};
// total size: 0x4
class PercShapeSphere {
    // Members
    float Radius; // offset 0x0, size 0x4
};
// total size: 0x8
class PercShapeSoundSphere {
    // Members
    float Radius; // offset 0x0, size 0x4
    float SoundSphereDetectionNoise; // offset 0x4, size 0x4
};
// total size: 0xC
class PercShapeCylinder {
    // Members
    float Radius; // offset 0x0, size 0x4
    float HeightUp; // offset 0x4, size 0x4
    float HeightDown; // offset 0x8, size 0x4
};
// total size: 0xC
class PercShapeAngularSphere {
    // Members
    float Radius; // offset 0x0, size 0x4
    float Angle; // offset 0x4, size 0x4
    float tanHAngle; // offset 0x8, size 0x4
};
// total size: 0x14
class PercShapeAngularCylinder {
    // Members
    float Radius; // offset 0x0, size 0x4
    float HeightUp; // offset 0x4, size 0x4
    float HeightDown; // offset 0x8, size 0x4
    float Angle; // offset 0xC, size 0x4
    float tanHAngle; // offset 0x10, size 0x4
};
// total size: 0x8
class PercShapeNPCWalls {
    // Members
    float HeightUp; // offset 0x0, size 0x4
    float HeightDown; // offset 0x4, size 0x4
};
// total size: 0x8
class EventActionSwitchWallNet : public EventActionNew {
    // Members
    class uid paramWidgetAssetID; // offset 0x0, size 0x8
};
// total size: 0x14
class zNPCPerceptionLOSChecker : public hkpRayHitCollector {
    // Members
    class zNPCEntity * ignoreStart; // offset 0x8, size 0x4
    class xEnt * ignoreEnd; // offset 0xC, size 0x4
    bool hitIt; // offset 0x10, size 0x1
};
// total size: 0x80
class zNPCPuppet : public zNPCBase {};
// total size: 0x80
class zNPCPuppetMainState : public zNPCPushPopControl {
    // Members
    float speed; // offset 0x6C, size 0x4
    unsigned int curIdleAnimNum; // offset 0x70, size 0x4
    class xVec3 * lookAt; // offset 0x74, size 0x4
    bool queryAnimEndSet; // offset 0x78, size 0x1
    float prevAnimTime; // offset 0x7C, size 0x4
};
// total size: 0x8
class EventActionFollowPath : public EventActionNew {
    // Members
    class uid paramWidgetAssetID; // offset 0x0, size 0x8
};
// total size: 0x8
class EventActionMovePoint : public EventActionNew {
    // Members
    class uid paramWidgetAssetID; // offset 0x0, size 0x8
};
// total size: 0x3C
class Type : public zNPCType {};
// total size: 0x1
class zNPCRegistry {};
// total size: 0xB8
class zNPCStateStandardAnimWithSteering : public zNPCStateStandardBase {
    // Members
    unsigned int animStateID; // offset 0x1C, size 0x4
    float blendTime; // offset 0x20, size 0x4
    float animStartTime; // offset 0x24, size 0x4
    class zStandardStatesLeanData leanData; // offset 0x28, size 0x8
    class zNPCSteeringGenericParams steeringParams; // offset 0x30, size 0x58
    class xVec3 destination; // offset 0x88, size 0xC
    class xVec3 facing; // offset 0x94, size 0xC
    class xVec3 destinationVel; // offset 0xA0, size 0xC
    class xVec3 * pDestination; // offset 0xAC, size 0x4
    class xVec3 * pFacing; // offset 0xB0, size 0x4
    class xVec3 * pDestinationVel; // offset 0xB4, size 0x4
};
// total size: 0x1C
class zNPCStateStandardBase : public zNPCStateOld {
    // Members
    unsigned int stateFlags; // offset 0x18, size 0x4
};
// total size: 0x8
class zStandardStatesLeanData {
    // Members
    float leanMaxTurnRate; // offset 0x0, size 0x4
    float leanMinTurnRate; // offset 0x4, size 0x4
};
// total size: 0xD8
class zNPCStateStandardMove : public zNPCStateStandardAnimWithSteering {
    // Members
    float stopRange; // offset 0xB8, size 0x4
    float stopTolerance; // offset 0xBC, size 0x4
    class xVec3 requestedDestination; // offset 0xC0, size 0xC
    class xVec3 * pRequestedDestination; // offset 0xCC, size 0x4
    float faceRange; // offset 0xD0, size 0x4
    float faceTolerance; // offset 0xD4, size 0x4
};
// total size: 0xDC
class zNPCStateStandardFollowPath : public zNPCStateStandardMove {
    // Members
    class xMovePoint * pathPoint; // offset 0xD8, size 0x4
};
// total size: 0xB8
class zNPCStateStandardAnimateOnce : public zNPCStateStandardAnimWithSteering {};
// total size: 0xF4
class zNPCStateStandardJumpTo : public zNPCStateStandardBase {
    // Members
    class zNPCSteeringGenericParams jumpStartEndSteeringParams; // offset 0x1C, size 0x58
    class zNPCSteeringGenericParams jumpInAirSteeringParams; // offset 0x74, size 0x58
    unsigned int jumpStartAnimStateID; // offset 0xCC, size 0x4
    unsigned int jumpInAirAnimStateID; // offset 0xD0, size 0x4
    unsigned int jumpLandAnimStateID; // offset 0xD4, size 0x4
    class xVec3 destination; // offset 0xD8, size 0xC
    class xVec3 facing; // offset 0xE4, size 0xC
    enum JumpState curStatus; // offset 0xF0, size 0x4
};
enum JumpState {
    eJumpUnknown = 0,
    eJumpGround = 1,
    eJumpLaunch = 2,
    eJumpFly = 3,
    eJumpLand = 4,
    eJumpFinished = 5,
};
// total size: 0xF8
class zNPCStateStandardJumpPath : public zNPCStateStandardJumpTo {
    // Members
    class xMovePoint * pathPoint; // offset 0xF4, size 0x4
};
// total size: 0xB8
class zNPCStateStandardCustomAnimation : public zNPCStateStandardAnimateOnce {};
// total size: 0xF8
class zNPCStateStandardCustomSequence : public zNPCStateStandardAnimateOnce {
    // Members
    char sequenceEnter[20]; // offset 0xB8, size 0x14
    char sequenceLoop[20]; // offset 0xCC, size 0x14
    char sequenceExit[20]; // offset 0xE0, size 0x14
    int currentPhase; // offset 0xF4, size 0x4
};
// total size: 0xE0
class zNPCStateStandardIdle : public zNPCStateStandardAnimWithSteering {
    // Members
    unsigned int idleAnimStateID; // offset 0xB8, size 0x4
    unsigned int commonFidgetAnimStateID; // offset 0xBC, size 0x4
    unsigned int rareFidgetAnimStateIDs[4]; // offset 0xC0, size 0x10
    unsigned int cycleCount; // offset 0xD0, size 0x4
    int rareFidgetCount; // offset 0xD4, size 0x4
    float blendTime; // offset 0xD8, size 0x4
    float animStartTime; // offset 0xDC, size 0x4
};
// total size: 0x10
class zNPCMainStateHandler : public zNPCLogic {
    // Members
    class zNPCState * mainState; // offset 0x8, size 0x4
    class zNPCStateCreator * mainStateCreator; // offset 0xC, size 0x4
};
// total size: 0x10
class zNPCSteeringVec {
    // Members
    class xVec3 dir; // offset 0x0, size 0xC
    float mag; // offset 0xC, size 0x4
};
// total size: 0x50
class zNPCSteeringFollowPlayerClosestHitCollector : public hkpClosestCdPointCollector {
    // Members
    class xBase * ignoreStart; // offset 0x40, size 0x4
    class xBase * ignoreBase; // offset 0x44, size 0x4
};
// total size: 0x40
class hkpClosestCdPointCollector : public hkpCdPointCollector {
    // Members
    class hkpRootCdPoint m_hitPoint; // offset 0x10, size 0x30
};
// total size: 0x364
class zNPCSteeringGeneric : public zNPCSteeringOld {
    // Members
    class zWallNetPosition wallNetPosition; // offset 0x8, size 0x14
    class zWallNetDestination wallNetDestination; // offset 0x1C, size 0x2C
    class zWallNetNav wallNetNav; // offset 0x48, size 0x30
    class zNPCSteeringCollRecord collisionRecord; // offset 0x78, size 0x144
    class zPIDController3 PIDController; // offset 0x1BC, size 0x11C
    class xParabola parabola; // offset 0x2D8, size 0x24
    class xVec3 prevWanderDir; // offset 0x2FC, size 0xC
    class xVec3 prevRandomizerDir; // offset 0x308, size 0xC
    class xVec3 bestReachablePosDynamic; // offset 0x314, size 0xC
    class zNPCSteeringGenericParams * steeringParameters; // offset 0x320, size 0x4
    class xSpringyAngle turnSpring; // offset 0x324, size 0x18
    class xVec3 acc; // offset 0x33C, size 0xC
    class xVec3 oldAcc; // offset 0x348, size 0xC
    class xVec3 * destination; // offset 0x354, size 0x4
    class xVec3 * facingPos; // offset 0x358, size 0x4
    class xVec3 * destinationVel; // offset 0x35C, size 0x4
    bool steeringParametersChanged : 1; // offset 0x360, size 0x1, bit offset 0
    bool isDestinationReachableDynamic : 1; // offset 0x360, size 0x1, bit offset 1
    bool jumpParabolaInit : 1; // offset 0x360, size 0x1, bit offset 2
    bool pad : 5; // offset 0x360, size 0x1, bit offset 3
};
// total size: 0x144
class zNPCSteeringCollRecord {
    // Members
    int numberOfResults; // offset 0x0, size 0x4
    class zSteeringGenericSweepResult sweepResults[6]; // offset 0x4, size 0x138
    class zSteeringGenericSweepResult * floorColl; // offset 0x13C, size 0x4
    class zSteeringGenericSweepResult * wallColl; // offset 0x140, size 0x4
};
// total size: 0x34
class zSteeringGenericSweepResult {
    // Members
    class xVec3 endPos; // offset 0x0, size 0xC
    class xVec3 collNormal; // offset 0xC, size 0xC
    class xVec3 collTangent; // offset 0x18, size 0xC
    class xVec3 collPos; // offset 0x24, size 0xC
    float sweepDist; // offset 0x30, size 0x4
};
// total size: 0x20
class zSteeringGenericDynamics {
    // Members
    class zNPCEntity * npcEnt; // offset 0x0, size 0x4
    class xVec3 * oldPos; // offset 0x4, size 0x4
    class xVec3 * pos; // offset 0x8, size 0x4
    class xVec3 * oldVel; // offset 0xC, size 0x4
    class xVec3 * vel; // offset 0x10, size 0x4
    class xVec3 * heading; // offset 0x14, size 0x4
    float boundRadiusXZ; // offset 0x18, size 0x4
    enum eSteeringResultOld curResult; // offset 0x1C, size 0x4
};
// total size: 0x120
class zZeroPointPullAction : public zNPCNoMoveAction {
    // Members
    class ZeroPointVFX vfx; // offset 0xA8, size 0x2C
    class zZeroPointPullActionInfo info; // offset 0xD4, size 0x14
    class xVec3 pullOffset; // offset 0xE8, size 0xC
    class xQuat startOrientation; // offset 0xF4, size 0x10
    class xQuat endOrientation; // offset 0x104, size 0x10
    float totalDistance; // offset 0x114, size 0x4
    float currentDistance; // offset 0x118, size 0x4
    bool facingTowards; // offset 0x11C, size 0x1
};
// total size: 0x2C
class ZeroPointVFX {
    // Members
    class zFXScriptSpawnPt * spawnPt; // offset 0x0, size 0x4
    class zFXScriptSpawnPt * spawnPtAsset; // offset 0x4, size 0x4
    class xVec3 oldPos; // offset 0x8, size 0xC
    class xVec3 newPos; // offset 0x14, size 0xC
    class xVec3 dpos; // offset 0x20, size 0xC
};
// total size: 0x14
class zZeroPointPullActionInfo {
    // Members
    class xVec3 pullPoint; // offset 0x0, size 0xC
    float velocity; // offset 0xC, size 0x4
    class zCommonPlayer * target; // offset 0x10, size 0x4
};
// total size: 0x1C0
class Steward : public NPCAsset {
    // Members
    unsigned int StewardType; // offset 0x180, size 0x4
    class ZeroPointInfo ZeroPointData; // offset 0x184, size 0x28
    bool UseZeroPoint; // offset 0x1AC, size 0x1
    float SpeedAdjustment; // offset 0x1B0, size 0x4
};
// total size: 0x28
class ZeroPointInfo {
    // Members
    float BeamRange; // offset 0x0, size 0x4
    float FireTime; // offset 0x4, size 0x4
    float PullSpeed; // offset 0x8, size 0x4
    float HoldTime; // offset 0xC, size 0x4
    float ThrowDistance; // offset 0x10, size 0x4
    enum ThrowTypes ThrowType; // offset 0x14, size 0x4
    class vec3 ThrowDirection; // offset 0x18, size 0xC
    enum ThrowDirectionTypes ThrowDirectionType; // offset 0x24, size 0x4
};
enum ThrowTypes {
    Set = 0,
    Random = 1,
    END_ThrowTypesENUM = 2,
};
enum ThrowDirectionTypes {
    Relative = 0,
    Absolute = 1,
    END_ThrowDirectionTypesENUM = 2,
};
// total size: 0x20
class zZeroPointFireActionInfo {
    // Members
    class xVec3 sourcePos; // offset 0x0, size 0xC
    float velocity; // offset 0xC, size 0x4
    float range; // offset 0x10, size 0x4
    float closeDistance; // offset 0x14, size 0x4
    float damage; // offset 0x18, size 0x4
    class xEnt * target; // offset 0x1C, size 0x4
};
// total size: 0x10
class zZeroPointHoldActionInfo {
    // Members
    class xVec3 pos; // offset 0x0, size 0xC
    class zCommonPlayer * target; // offset 0xC, size 0x4
};
// total size: 0x14
class zZeroPointThrowActionInfo {
    // Members
    class xVec3 throwDirection; // offset 0x0, size 0xC
    float throwDistance; // offset 0xC, size 0x4
    class zCommonPlayer * target; // offset 0x10, size 0x4
};
// total size: 0x70
class zNPCStewardBombMainState : public zNPCPushPopControl {
    // Members
    int currentDisplayScreen; // offset 0x6C, size 0x4
};
// total size: 0x230
class zNPCStewardBombChargeState : public zNPCSeekAction {};
// total size: 0x8C
class zNPCSteeringFlockingParams : public zNPCSteeringParams {
    // Members
    float seperationMultiplier; // offset 0x4, size 0x4
    float seperationNeighbourRadius; // offset 0x8, size 0x4
    float playerAvoidanceMultiplier; // offset 0xC, size 0x4
    float playerAvoidanceRadius; // offset 0x10, size 0x4
    float playerAvoidanceAccLimit; // offset 0x14, size 0x4
    float alignmentMultiplier; // offset 0x18, size 0x4
    float cohesionMultiplier; // offset 0x1C, size 0x4
    float maxAcc; // offset 0x20, size 0x4
    float maxSpeedXZ; // offset 0x24, size 0x4
    float maxSpeedDownY; // offset 0x28, size 0x4
    float turnSpringK; // offset 0x2C, size 0x4
    float mass; // offset 0x30, size 0x4
    float maxHeight; // offset 0x34, size 0x4
    float minHeight; // offset 0x38, size 0x4
    float wallAvoidanceMultiplier; // offset 0x3C, size 0x4
    float wallAvoidanceAccMax; // offset 0x40, size 0x4
    float wallFeelerLength; // offset 0x44, size 0x4
    float sphereAvoidanceMultiplier; // offset 0x48, size 0x4
    float sphereAvoidanceRange; // offset 0x4C, size 0x4
    float sphereAvoidanceBreakRatio; // offset 0x50, size 0x4
    float wanderMultiplier; // offset 0x54, size 0x4
    float wanderJitterPerSec; // offset 0x58, size 0x4
    float wanderRadius; // offset 0x5C, size 0x4
    float wanderDist; // offset 0x60, size 0x4
    float seekMultiplier; // offset 0x64, size 0x4
    float seekRadius; // offset 0x68, size 0x4
    float fleeMultiplier; // offset 0x6C, size 0x4
    float fleeRadius; // offset 0x70, size 0x4
    float frictionK; // offset 0x74, size 0x4
    unsigned char collisionChk; // offset 0x78, size 0x1
    bool wallAvoidanceOn; // offset 0x79, size 0x1
    bool circleAvoidanceOn; // offset 0x7A, size 0x1
    bool wanderOn; // offset 0x7B, size 0x1
    bool seekOn; // offset 0x7C, size 0x1
    bool fleeOn; // offset 0x7D, size 0x1
    bool arriveOn; // offset 0x7E, size 0x1
    bool seperationOn; // offset 0x7F, size 0x1
    bool playerAvoianceOn; // offset 0x80, size 0x1
    bool alignmentOn; // offset 0x81, size 0x1
    bool cohesionOn; // offset 0x82, size 0x1
    bool gravityOn; // offset 0x83, size 0x1
    bool frictionOn; // offset 0x84, size 0x1
    bool floorDepenOn; // offset 0x85, size 0x1
};
// total size: 0x7C0
class zNPCSwarmMean : public zNPCBase {
    // Members
    class zNPCEntity * entities[64]; // offset 0x7C, size 0x100
    class zNPCExtraModel * extraModel1[64]; // offset 0x17C, size 0x100
    class zNPCExtraModel * extraModel2[64]; // offset 0x27C, size 0x100
    class zNPCFX * entFXs[64]; // offset 0x37C, size 0x100
    int memberStatus[64]; // offset 0x47C, size 0x100
    float moveAccumulator[64]; // offset 0x57C, size 0x100
    int extraCarryObjectNum[64]; // offset 0x67C, size 0x100
    int numberOfSwarmers; // offset 0x77C, size 0x4
    class zNPCExtraModel * extraCarryObjects[8]; // offset 0x780, size 0x20
    int numberOfExtraCarryObjects; // offset 0x7A0, size 0x4
    float memberSpawnTimeAcc; // offset 0x7A4, size 0x4
    float avgMemberSpawnPeriod; // offset 0x7A8, size 0x4
    float nextMemberSpawnPeriod; // offset 0x7AC, size 0x4
    int remainingSpawns; // offset 0x7B0, size 0x4
    class zWallNet * npcWallNet; // offset 0x7B4, size 0x4
    bool hasFX; // offset 0x7B8, size 0x1
    bool initialized; // offset 0x7B9, size 0x1
};
// total size: 0x187C
class zNPCSteeringFlocking : public zNPCSteeringOld {
    // Members
    enum eNPCSteeringFlockingType flockingSteeringType; // offset 0x8, size 0x4
    class zNPCSteeringFlockingParams * flockingParameters; // offset 0xC, size 0x4
    class SwarmAttractorRepeller * attractors; // offset 0x10, size 0x4
    int numberOfAttractors; // offset 0x14, size 0x4
    class xVec3 * attractorV; // offset 0x18, size 0x4
    class xEnt * extraAttractors[4]; // offset 0x1C, size 0x10
    int numberOfExtraAttractors; // offset 0x2C, size 0x4
    class SwarmAttractorRepeller * repellers; // offset 0x30, size 0x4
    int numberOfRepellers; // offset 0x34, size 0x4
    class xVec3 * repellerV; // offset 0x38, size 0x4
    class xEnt * extraRepellers[4]; // offset 0x3C, size 0x10
    int numberOfExtraRepellers; // offset 0x4C, size 0x4
    int flockCenterValid; // offset 0x50, size 0x4
    class xVec3 flockingCenter; // offset 0x54, size 0xC
    class xVec3 flockingAlignment; // offset 0x60, size 0xC
    class zWallNetPosition wallNetPosition[64]; // offset 0x6C, size 0x500
    class xVec3 wanderTarget[64]; // offset 0x56C, size 0x300
    class xSpringyAngle turnSpring[64]; // offset 0x86C, size 0x600
    class xVec3 acc[64]; // offset 0xE6C, size 0x300
    class xVec3 oldAcc[64]; // offset 0x116C, size 0x300
    float flockingHeightMax; // offset 0x146C, size 0x4
    float flockingHeightMin; // offset 0x1470, size 0x4
    int isFlying; // offset 0x1474, size 0x4
    float simpleMotionTimer; // offset 0x1478, size 0x4
    int initialChildStatus[64]; // offset 0x147C, size 0x100
    class xVec3 swarmerSavedDir[64]; // offset 0x157C, size 0x300
};
enum eNPCSteeringFlockingType {
    eNPCSteeringFlockingType_Normal = 0,
    eNPCSteeringFlockingType_TransitioningToNormal = 1,
    eNPCSteeringFlockingType_TransitioningToBasic = 2,
    eNPCSteeringFlockingType_Basic = 3,
    eNPCSteeringFlockingTypeForceInt = 2147483647,
};
// total size: 0x18
class SwarmAttractorRepeller {
    // Members
    class uid Entity; // offset 0x0, size 0x8
    float Radius; // offset 0x8, size 0x4
    float Force; // offset 0xC, size 0x4
    unsigned int flags; // offset 0x10, size 0x4
    int HackBasePtr; // offset 0x14, size 0x4
};
// total size: 0x1C0
class TrapProjectile : public NPCAsset {
    // Members
    enum TrapProjectileTypes TurretType; // offset 0x180, size 0x4
    class @class __anon; // offset 0x184, size 0x28
    class DamageInfo DamageData; // offset 0x184, size 0xC
    class ZeroPointInfo ZeroPointData; // offset 0x184, size 0x28
    bool TargetWalle; // offset 0x1AC, size 0x1
    bool TargetEve; // offset 0x1AD, size 0x1
    float ChargeUpTime; // offset 0x1B0, size 0x4
    float WaitBetweenSalvos; // offset 0x1B4, size 0x4
    unsigned int HitPoints; // offset 0x1B8, size 0x4
};
enum TrapProjectileTypes {
    DamageTurretType = 0,
    ZeroPointTurretType = 1,
    END_TrapProjectileTypesENUM = 2,
};
// total size: 0x28
class @class {
    // Members
    class DamageInfo DamageData; // offset 0x0, size 0xC
    class ZeroPointInfo ZeroPointData; // offset 0x0, size 0x28
};
// total size: 0xC
class DamageInfo {
    // Members
    unsigned int ShotsPerSalvo; // offset 0x0, size 0x4
    float WaitBetweenShots; // offset 0x4, size 0x4
    unsigned int Damage; // offset 0x8, size 0x4
};
// total size: 0x38
class zNPCTrapProjectileMainState : public zNPCFSMControl, public zNPCCollisionListener {
    // Members
    int shotsPerSalvo; // offset 0x24, size 0x4
    float waitBetweenShots; // offset 0x28, size 0x4
    float waitBetweenSalvos; // offset 0x2C, size 0x4
    float chargeUpTime; // offset 0x30, size 0x4
    float damage; // offset 0x34, size 0x4
};
// total size: 0x104
class zZeroPointFireAction : public zNPCNoMoveAction {
    // Members
    class ZeroPointVFX vfx; // offset 0xA8, size 0x2C
    class zZeroPointFireActionInfo info; // offset 0xD4, size 0x20
    class xVec3 fireDirection; // offset 0xF4, size 0xC
    float beamDistance; // offset 0x100, size 0x4
};
// total size: 0xE4
class zZeroPointHoldAction : public zNPCNoMoveAction {
    // Members
    class ZeroPointVFX vfx; // offset 0xA8, size 0x2C
    class zZeroPointHoldActionInfo info; // offset 0xD4, size 0x10
};
// total size: 0xF4
class zZeroPointThrowAction : public zNPCNoMoveAction {
    // Members
    class ZeroPointVFX vfx; // offset 0xA8, size 0x2C
    class zZeroPointThrowActionInfo info; // offset 0xD4, size 0x14
    class xVec3 holdPos; // offset 0xE8, size 0xC
};
// total size: 0x10
class _OGOneLinerEntity : public xOGEntity {};
// total size: 0x18
class _OGOneLinerSchema : public Schema {};
// total size: 0x98
class OneLinerModule : public Module {};
// total size: 0x10
class _OGOptionEntity : public xOGEntity {};
// total size: 0x18
class _OGOptionSchema : public Schema {};
// total size: 0x58
class zOption : private xBase {
    // Members
    class Option data; // offset 0x20, size 0x38
};
// total size: 0x38
class Option : public xDynAsset {
    // Members
    class LinkAsset EventLinksNew; // offset 0x20, size 0x8
    class @class __anon; // offset 0x28, size 0xC
    class CameraXAxisStruct xAxis; // offset 0x28, size 0x4
    class CameraYAxisStruct yAxis; // offset 0x28, size 0x4
    class MusicVolumeStruct musicVolume; // offset 0x28, size 0xC
    class SFXVolumeStruct sfxVolume; // offset 0x28, size 0xC
    class SoundModeStruct soundMode; // offset 0x28, size 0x4
    class VibrationStruct vibration; // offset 0x28, size 0x8
    class ControlConfigStruct controlConfig; // offset 0x28, size 0x4
    class SubtitlesStruct subtitles; // offset 0x28, size 0x4
    class TiltStruct tilt; // offset 0x28, size 0x4
    unsigned char optionType; // offset 0x34, size 0x1
};
// total size: 0xC
class @class {
    // Members
    class CameraXAxisStruct xAxis; // offset 0x0, size 0x4
    class CameraYAxisStruct yAxis; // offset 0x0, size 0x4
    class MusicVolumeStruct musicVolume; // offset 0x0, size 0xC
    class SFXVolumeStruct sfxVolume; // offset 0x0, size 0xC
    class SoundModeStruct soundMode; // offset 0x0, size 0x4
    class VibrationStruct vibration; // offset 0x0, size 0x8
    class ControlConfigStruct controlConfig; // offset 0x0, size 0x4
    class SubtitlesStruct subtitles; // offset 0x0, size 0x4
    class TiltStruct tilt; // offset 0x0, size 0x4
};
// total size: 0x4
class CameraXAxisStruct {
    // Members
    enum InversionOption value; // offset 0x0, size 0x4
};
enum InversionOption {
    InversionNormal = 0,
    InversionInverted = 1,
    END_InversionENUM = 2,
};
// total size: 0x4
class CameraYAxisStruct {
    // Members
    enum InversionOption value; // offset 0x0, size 0x4
};
// total size: 0xC
class MusicVolumeStruct {
    // Members
    unsigned int value; // offset 0x0, size 0x4
    unsigned int min; // offset 0x4, size 0x4
    unsigned int max; // offset 0x8, size 0x4
};
// total size: 0xC
class SFXVolumeStruct {
    // Members
    unsigned int value; // offset 0x0, size 0x4
    unsigned int min; // offset 0x4, size 0x4
    unsigned int max; // offset 0x8, size 0x4
};
// total size: 0x4
class SoundModeStruct {
    // Members
    enum SoundModeOption value; // offset 0x0, size 0x4
};
enum SoundModeOption {
    SoundModeMono = 0,
    SoundModeStereo = 1,
    SoundModeSurround = 2,
    END_SoundModeENUM = 3,
};
// total size: 0x8
class VibrationStruct {
    // Members
    enum ToggleOption value; // offset 0x0, size 0x4
    enum PlayerEnum player; // offset 0x4, size 0x4
};
enum ToggleOption {
    ToggleOff = 0,
    ToggleOn = 1,
    END_ToggleENUM = 2,
};
enum PlayerEnum {
    FirstPlayer = 0,
    SecondPlayer = 1,
    ThirdPlayer = 2,
    FourthPlayer = 3,
    END_ENUM = 4,
};
// total size: 0x4
class ControlConfigStruct {
    // Members
    enum ToggleOption value; // offset 0x0, size 0x4
};
// total size: 0x4
class SubtitlesStruct {
    // Members
    enum ToggleOption value; // offset 0x0, size 0x4
};
// total size: 0x4
class TiltStruct {
    // Members
    enum ToggleOption value; // offset 0x0, size 0x4
};
// total size: 0x10
class _OGPointerEntity : public xOGEntity {};
// total size: 0x18
class _OGPointerSchema : public Schema {};
// total size: 0x10
class _OGRawAssetEntity : public xOGEntity {};
// total size: 0x18
class _OGRawAssetSchema : public Schema {};
// total size: 0x10
class _OGMarkerEntity : public xOGEntity {};
// total size: 0x18
class _OGMarkerSchema : public Schema {};
// total size: 0x10
class _OGparticle_generatorEntity : public xOGEntity {};
// total size: 0x18
class _OGparticle_generatorSchema : public Schema {};
// total size: 0x8
class zParticleLocator {
    // Members
    class activity_data * activity; // offset 0x0, size 0x4
    class xEnt * ent; // offset 0x4, size 0x4
};
// total size: 0xF0
class activity_data {
    // Members
    class zParticleLocator * owner; // offset 0x0, size 0x4
    class particle_generator * asset; // offset 0x4, size 0x4
    class zParticleGeneratorSpawnPt * spt; // offset 0x8, size 0x4
    void (* update_attach)(class activity_data * activity, float dt); // offset 0xC, size 0x4
    void (* get_offset)(class xVec3 * offset, class volume_data * data); // offset 0x10, size 0x4
    class attach_data attach; // offset 0x14, size 0x44
    class volume_data volume; // offset 0x58, size 0x4C
    class xEnt * attach_to; // offset 0xA4, size 0x4
    class xMat4x3 buffer_mat; // offset 0xA8, size 0x40
    class xMat4x3 * attach_mat; // offset 0xE8, size 0x4
    bool edge_only; // offset 0xEC, size 0x1
};
// total size: 0x4C
class volume_data {
    // Members
    float radius; // offset 0x0, size 0x4
    class @class __anon; // offset 0x4, size 0x48
    class @class circle; // offset 0x4, size 0x10
    class @class line; // offset 0x4, size 0x10
    class @class model_vert; // offset 0x4, size 0x48
    class @class box; // offset 0x4, size 0x18
    class @class curve; // offset 0x4, size 0x4
};
// total size: 0x48
class @class {
    // Members
    class @class circle; // offset 0x0, size 0x10
    class @class line; // offset 0x0, size 0x10
    class @class model_vert; // offset 0x0, size 0x48
    class @class box; // offset 0x0, size 0x18
    class @class curve; // offset 0x0, size 0x4
};
// total size: 0x10
class @class {
    // Members
    float xRadius; // offset 0x0, size 0x4
    float yRadius; // offset 0x4, size 0x4
    float ang_delta; // offset 0x8, size 0x4
    float height; // offset 0xC, size 0x4
};
// total size: 0x10
class @class {
    // Members
    float xRadius; // offset 0x0, size 0x4
    float yRadius; // offset 0x4, size 0x4
    float length; // offset 0x8, size 0x4
    unsigned int cap_weight; // offset 0xC, size 0x4
};
// total size: 0x48
class @class {
    // Members
    int vertices[8]; // offset 0x0, size 0x20
    class ModelInstanceAsset * models[8]; // offset 0x20, size 0x20
    int models_size; // offset 0x40, size 0x4
    int total_vertices; // offset 0x44, size 0x4
};
// total size: 0x18
class @class {
    // Members
    class xVec3 dim; // offset 0x0, size 0xC
    class xVec3 halfDim; // offset 0xC, size 0xC
};
// total size: 0x4
class @class {
    // Members
    class xNurbs * curve; // offset 0x0, size 0x4
};
// total size: 0x44
class attach_data {
    // Members
    class @class __anon; // offset 0x0, size 0x44
    class @class entity; // offset 0x0, size 0x44
};
// total size: 0x44
class @class {
    // Members
    class @class entity; // offset 0x0, size 0x44
};
// total size: 0x44
class @class {
    // Members
    class xMat4x3 mat; // offset 0x0, size 0x40
    int bone; // offset 0x40, size 0x4
};
// total size: 0x10
class _OGPartGenSpawnPtAssetEntity : public xOGEntity {};
// total size: 0x18
class _OGPartGenSpawnPtAssetSchema : public Schema {};
// total size: 0x10
class _OGobject_generatorEntity : public xOGEntity {};
// total size: 0x18
class _OGobject_generatorSchema : public Schema {};
// total size: 0x8
class zObjectLocator {
    // Members
    class activity_data * activity; // offset 0x0, size 0x4
    class xEnt * ent; // offset 0x4, size 0x4
};
// total size: 0xF0
class activity_data {
    // Members
    class zObjectLocator * owner; // offset 0x0, size 0x4
    class object_generator * asset; // offset 0x4, size 0x4
    class zObjectGeneratorSpawnPt * spt; // offset 0x8, size 0x4
    void (* update_attach)(class activity_data * activity, float dt); // offset 0xC, size 0x4
    void (* get_offset)(class xVec3 * offset, class obj_volume_data * data); // offset 0x10, size 0x4
    class attach_data attach; // offset 0x14, size 0x44
    class obj_volume_data volume; // offset 0x58, size 0x4C
    class xEnt * attach_to; // offset 0xA4, size 0x4
    class xMat4x3 buffer_mat; // offset 0xA8, size 0x40
    class xMat4x3 * attach_mat; // offset 0xE8, size 0x4
    bool edge_only; // offset 0xEC, size 0x1
};
// total size: 0x4C
class obj_volume_data {
    // Members
    float radius; // offset 0x0, size 0x4
    class @class __anon; // offset 0x4, size 0x48
    class @class circle; // offset 0x4, size 0x10
    class @class line; // offset 0x4, size 0x10
    class @class model_vert; // offset 0x4, size 0x48
    class @class box; // offset 0x4, size 0x18
    class @class curve; // offset 0x4, size 0x4
};
// total size: 0x48
class @class {
    // Members
    int vertices[8]; // offset 0x0, size 0x20
    class xModelInstance * models[8]; // offset 0x20, size 0x20
    int models_size; // offset 0x40, size 0x4
    int total_vertices; // offset 0x44, size 0x4
};
// total size: 0x10
class _OGObjGenSpawnPtAssetEntity : public xOGEntity {};
// total size: 0x18
class _OGObjGenSpawnPtAssetSchema : public Schema {};
// total size: 0x234
class zNPCMowbotCleanCubeState : public zNPCSeekAction {
    // Members
    class zProjectile * targetCube; // offset 0x230, size 0x4
};
// total size: 0x234
class zNPCMowbotGoToCubeState : public zNPCMoveToAction {
    // Members
    class zProjectile * targetCube; // offset 0x230, size 0x4
};
// total size: 0x230
class zNPCMowbotCantReachState : public zNPCMoveToAction {};
// total size: 0x8
class relative_ordering {
    // Members
    int other; // offset 0x0, size 0x4
    bool before_other; // offset 0x4, size 0x1
};
// total size: 0xC0
class NPCNGEntity : public xOGEntityWithModel {
    // Members
    class zNPCEntity * npcOGEntity; // offset 0xBC, size 0x4
};
// total size: 0x1F0
class zNGLoadingScreen {
    // Members
    class LoadingScreen * mAsset; // offset 0x0, size 0x4
    class ScaleformBlobEntity * mSfEntity; // offset 0x4, size 0x4
    class zScaleformAsset * mSfAsset; // offset 0x8, size 0x4
    class zScaleform mSfObj; // offset 0x10, size 0x170
    bool mIsFlash; // offset 0x180, size 0x1
    unsigned int currentIndex; // offset 0x184, size 0x4
    unsigned long long nextLoadingScreenID; // offset 0x188, size 0x8
    float width; // offset 0x190, size 0x4
    float height; // offset 0x194, size 0x4
    float xPos; // offset 0x198, size 0x4
    float yPos; // offset 0x19C, size 0x4
    class ColorF oldBackgroundColor; // offset 0x1A0, size 0x10
    bool cleaned; // offset 0x1B0, size 0x1
    void * immediatePrototypePointer; // offset 0x1B4, size 0x4
    class ImmediateInstanceArticle * immediateArticlePointer; // offset 0x1B8, size 0x4
    void * uiElementBuffer; // offset 0x1BC, size 0x4
    unsigned int uiElementBufferSize; // offset 0x1C0, size 0x4
    class zUI * * uiElements; // offset 0x1C4, size 0x4
    class zUIGroup * * uiGroups; // offset 0x1C8, size 0x4
    unsigned int uiElementCount; // offset 0x1CC, size 0x4
    unsigned int uiGroupCount; // offset 0x1D0, size 0x4
    float timer; // offset 0x1D4, size 0x4
    class Time thisTime; // offset 0x1D8, size 0x8
    class Time lastTime; // offset 0x1E0, size 0x8
    bool showingFMV; // offset 0x1E8, size 0x1
};
// total size: 0x50
class LoadingScreen : public xDynAsset {
    // Members
    class __uiElements__ uiElements; // offset 0x20, size 0x8
    class __elements__ elements; // offset 0x28, size 0x8
    unsigned int clearColor; // offset 0x30, size 0x4
    float delay; // offset 0x34, size 0x4
    enum AspectRatioAdjust aspectRatioAdjustment; // offset 0x38, size 0x4
    bool random; // offset 0x3C, size 0x1
    class uid scaleformPlayerId; // offset 0x40, size 0x8
    class LinkAsset EventLinksNew; // offset 0x48, size 0x8
};
// total size: 0x8
class __uiElements__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __elements__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
enum AspectRatioAdjust {
    Crop = 0,
    CropLeft = 1,
    CropRight = 2,
    CropTop = 3,
    CropBottom = 4,
    Scale = 5,
    END_AspectRatioAdjustENUM = 6,
};
// total size: 0x3C
class StartupConfig {
    // Members
    class @class mem; // offset 0x0, size 0x20
    class @class io; // offset 0x20, size 0x8
    class @class loader; // offset 0x28, size 0x10
    class @class wiiDebug; // offset 0x38, size 0x4
};
// total size: 0x20
class @class {
    // Members
    class @class system; // offset 0x0, size 0x8
    class @class graphics; // offset 0x8, size 0x18
};
// total size: 0x8
class @class {
    // Members
    int threadStack; // offset 0x0, size 0x4
    int debugThreadStack; // offset 0x4, size 0x4
};
// total size: 0x18
class @class {
    // Members
    int sysStack; // offset 0x0, size 0x4
    int threadStack; // offset 0x4, size 0x4
    int debugThreadStack; // offset 0x8, size 0x4
    int channel; // offset 0xC, size 0x4
    int postRenderChannel; // offset 0x10, size 0x4
    int limbo; // offset 0x14, size 0x4
};
// total size: 0x8
class @class {
    // Members
    class @class mediaIO; // offset 0x0, size 0x8
};
// total size: 0x8
class @class {
    // Members
    char * contentRoot; // offset 0x0, size 0x4
    char pathDelim; // offset 0x4, size 0x1
};
// total size: 0x10
class @class {
    // Members
    char * bootINIFile; // offset 0x0, size 0x4
    char * domainPathDB; // offset 0x4, size 0x4
    char * configWidgetPF; // offset 0x8, size 0x4
    int maxPackBlobs; // offset 0xC, size 0x4
};
// total size: 0x4
class @class {
    // Members
    enum WiiHIO2Tool wiiHIO2Tool; // offset 0x0, size 0x4
};
enum WiiHIO2Tool {
    WII_NONE = 0,
    WII_TTY = 1,
    WII_SCREENSHOT = 2,
    WII_HVDB = 3,
};
