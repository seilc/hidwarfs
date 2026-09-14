/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCSwarmBug.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C4A2C -> 0x801C4BBC
*/
// total size: 0x68
class zNPCSwarmBug : public zNPCBase {
    // Functions
    unsigned char Activate();

    void Deactivate();

    void Update(struct xScene * xscn, float dt);

    void UpdateNPCBaseData();

    void Render();
};
// Range: 0x801C4A2C -> 0x801C4A34
int zNPCSwarmBug::CountChildrenInAsset(const struct xDynAsset * dynAsset /* r3 */) {}

signed char zComponentPool<zCompLogicSwarmBug, zICompLogic, zNPCBase>::GetComponentPool()::localstatic4 guard; // size: 0x1, address: 0x803C3D30
enum eStateTranstitionType {
    eStateTransType_Switch = 0,
    eStateTransType_Push = 1,
    eStateTransType_Pop = 2,
    eStateTransType_SwitchLast = 3,
    eStateTransType_PushOnLast = 4,
    eStateTestTypeForceInt = 2147483647,
};
// total size: 0x18
struct zCompStateTest {
    // Members
    class zCompState * toState; // offset 0x0, size 0x4
    unsigned char (* testFunction)(class zNPCBase *, class zCompState *, class zCompState *); // offset 0x4, size 0x4
    float period; // offset 0x8, size 0x4
    enum eStateTranstitionType transtitionType; // offset 0xC, size 0x4
    struct zCompStateTest * next; // offset 0x10, size 0x4
    float remainingTime; // offset 0x14, size 0x4
};
// total size: 0x14
class zCompState {
    // Members
    int stateEnum; // offset 0x0, size 0x4
    class zCompStateMachine * stateMachine; // offset 0x4, size 0x4
    class zCompState * prevState; // offset 0x8, size 0x4
    struct zCompStateTest * tests; // offset 0xC, size 0x4
public:
    void * __vptr$; // offset 0x10, size 0x4
};
// total size: 0x8
struct zCompStateMachineTable {
    // Members
    int stateEnum; // offset 0x0, size 0x4
    class zCompState * (* const newStateFunction)(int &); // offset 0x4, size 0x4
};
// total size: 0xC
struct zCompStateTransEvent {
    // Members
    enum eStateTranstitionType transtitionType; // offset 0x0, size 0x4
    class zCompState * fromState; // offset 0x4, size 0x4
    class zCompState * toState; // offset 0x8, size 0x4
};
// total size: 0x14
class zCompStateTransEventFIFO {
    // Members
    struct zCompStateTransEvent * eventsPool; // offset 0x0, size 0x4
    int poolSize; // offset 0x4, size 0x4
    int poolUsed; // offset 0x8, size 0x4
    int front; // offset 0xC, size 0x4
    int end; // offset 0x10, size 0x4
};
// total size: 0x34
class zCompStateMachine : public zICompLogic {
    // Members
    struct zCompStateMachineTable * stateTable; // offset 0x8, size 0x4
    int numberOfStates; // offset 0xC, size 0x4
    class zCompState * * states; // offset 0x10, size 0x4
    class zCompState * globalState; // offset 0x14, size 0x4
    class zCompState * currentState; // offset 0x18, size 0x4
    class zCompStateTransEventFIFO eventsBuffer; // offset 0x1C, size 0x14
    class zCompState * defaultState; // offset 0x30, size 0x4
};
// total size: 0x34
class zCompLogicSwarmBug : public zCompStateMachine {};
// total size: 0xC
class zComponentPool {
    // Members
    int extraComponentMemUsage; // offset 0x0, size 0x4
    int poolSize; // offset 0x4, size 0x4
    class zCompLogicSwarmBug * components; // offset 0x8, size 0x4
};
class zComponentPool zComponentPool<zCompLogicSwarmBug, zICompLogic, zNPCBase>::GetComponentPool()::_componentPool; // size: 0xC, address: 0x803C3D34
signed char zComponentPool<zCompSteeringFlockingBrain, zICompSteering, zNPCBase>::GetComponentPool()::localstatic4 guard; // size: 0x1, address: 0x803C3D40
// total size: 0xC
class zComponentPool {
    // Members
    int extraComponentMemUsage; // offset 0x0, size 0x4
    int poolSize; // offset 0x4, size 0x4
    class zCompSteeringFlockingBrain * components; // offset 0x8, size 0x4
};
class zComponentPool zComponentPool<zCompSteeringFlockingBrain, zICompSteering, zNPCBase>::GetComponentPool()::_componentPool; // size: 0xC, address: 0x803C3D44
signed char zComponentPool<zCompSound, zICompSound, zNPCBase>::GetComponentPool()::localstatic4 guard; // size: 0x1, address: 0x803C3D50
enum iSndGroupHandle {
};
// total size: 0x1C
class zCompSoundParams : public zCompParameters {
    // Members
public:
    enum iSndGroupHandle loopingSoundGroup; // offset 0x0, size 0x4
    enum iSndGroupHandle oneShotSoundGroup; // offset 0x4, size 0x4
    float oneShotMinTime; // offset 0x8, size 0x4
    float oneShotMaxTime; // offset 0xC, size 0x4
    const struct xVec3 * loopingSoundPosition; // offset 0x10, size 0x4
    const struct xVec3 * oneShotSoundPosition; // offset 0x14, size 0x4
    void * __vptr$; // offset 0x18, size 0x4
};
// total size: 0x14
class zCompSound : public zICompSound {
    // Members
    const class zCompSoundParams * parameters; // offset 0x8, size 0x4
    enum iSndGroupHandle loopingSoundGroupPlaying; // offset 0xC, size 0x4
    enum xSndHandle loopingSoundPlaying; // offset 0x10, size 0x4
};
// total size: 0xC
class zComponentPool {
    // Members
    int extraComponentMemUsage; // offset 0x0, size 0x4
    int poolSize; // offset 0x4, size 0x4
    class zCompSound * components; // offset 0x8, size 0x4
};
class zComponentPool zComponentPool<zCompSound, zICompSound, zNPCBase>::GetComponentPool()::_componentPool; // size: 0xC, address: 0x803C3D54
// Range: 0x801C4A34 -> 0x801C4ACC
// this: r31
unsigned char zNPCSwarmBug::Activate() {}

enum eCompType {
    eCompType_Unknown = -1,
    eCompType_Logic_Alarmer = 0,
    eCompType_Logic_Thief = 1,
    eCompType_Logic_SwarmMember = 2,
    eCompType_Logic_Waiter = 3,
    eCompType_Logic_StirringPlayer = 4,
    eCompType_Logic_StirringRemy = 5,
    eCompType_Logic_LeftArm = 6,
    eCompType_Logic_RightArm = 7,
    eCompType_Logic_PourNSwirl = 8,
    eCompType_Logic_SpringBoard = 9,
    eCompType_Logic_ContextSensitive = 10,
    eCompType_Logic_AnimViewer = 11,
    eCompType_Logic_SwarmBug = 12,
    eCompType_Logic_SwarmOwl = 13,
    eCompType_Logic_Simpleton = 14,
    eCompType_Logic_InstaKill = 15,
    eCompType_NPCEntity_Default = 16,
    eCompType_Steering_Basic = 17,
    eCompType_Steering_Flocking = 18,
    eCompType_Steering_FlockingBrain = 19,
    eCompType_Steering_Generic = 20,
    eCompType_Perception = 21,
    eCompType_Sound_Basic = 22,
    eCompType_Combat_Default = 23,
    eCompCount = 24,
};
enum eCompInterfaceType {
    eCompInterfaceType_Unknown = -1,
    eCompInterfaceType_First = 0,
    eCompInterfaceType_Logic = 0,
    eCompInterfaceType_NPCEntity = 1,
    eCompInterfaceType_Steering = 2,
    eCompInterfaceType_Perception = 3,
    eCompInterfaceType_Sound = 4,
    eCompInterfaceType_Combat = 5,
    eCompInterfaceTypeCount = 6,
};
// total size: 0x1
class zCompParameters {};
// total size: 0x0
struct xScene {};
// total size: 0x8
class zIComponent {
    // Members
public:
    class zNPCBase * owner; // offset 0x0, size 0x4
    void * __vptr$; // offset 0x4, size 0x4
};
// Range: 0x801C4ACC -> 0x801C4AEC
// this: r0
void zNPCSwarmBug::Deactivate() {}

// Range: 0x801C4AEC -> 0x801C4B60
// this: r30
void zNPCSwarmBug::Update(struct xScene * xscn /* r31 */, float dt /* f31 */) {
    // Local variables
    class zICompLogic * logicComponent; // r0
}

// total size: 0x20
struct xLinkAsset {
    // Members
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
// total size: 0x10
struct xBase {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    const struct xLinkAsset * link; // offset 0x8, size 0x4
    void (* eventFunc)(struct xBase *, struct xBase *, unsigned int, float *, struct xBase *, unsigned int); // offset 0xC, size 0x4
};
// total size: 0xC
struct RwV3d {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0xC
struct xVec3 {
    // Static members
    static struct xVec3 m_NegDoubleVec; // size: 0xC
    static struct xVec3 m_DoubleVec; // size: 0xC
    static struct xVec3 m_NegHalfVec; // size: 0xC
    static struct xVec3 m_HalfVec; // size: 0xC
    static struct xVec3 m_UnitAxisZ; // size: 0xC
    static struct xVec3 m_UnitAxisY; // size: 0xC
    static struct xVec3 m_UnitAxisX; // size: 0xC
    static struct xVec3 m_NegOnes; // size: 0xC
    static struct xVec3 m_Ones; // size: 0xC
    static struct xVec3 m_Null; // size: 0xC

    // Members
    union { // inferred
        struct RwV3d m_RwV3d; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
        float a[3]; // offset 0x0, size 0xC
    };
};
enum eNPCType {
    eNPCType_None = -1,
    eNPCType_Unknown = -1,
    eNPCType_First = 0,
    eNPCType_SwarmMember = 0,
    eNPCType_Swarm_Owl = 1,
    eNPCType_Swarm_Bug = 2,
    eNPCType_Thief = 3,
    eNPCType_Simpleton = 4,
    eNPCType_Alarmer = 5,
    eNPCType_Waiter = 6,
    eNPCType_CMG_StirringPlayer = 7,
    eNPCType_CMG_StirringRemy = 8,
    eNPCType_CMG_LeftArm = 9,
    eNPCType_CMG_RightArm = 10,
    eNPCType_CMG_PourNSwirl = 11,
    eNPCType_SpringBoard = 12,
    eNPCType_ContextSensitive = 13,
    eNPCType_AnimViewer = 14,
    eNPCType_InstaKill = 15,
    eNPCTypeCount = 16,
    eNPCTypeForceInt = 2147483647,
};
// total size: 0x8
struct xBaseAsset {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x10
struct xDynAsset : public xBaseAsset {
    // Members
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
// total size: 0x50
struct xEntAsset : public xBaseAsset {
    // Members
    unsigned char flags; // offset 0x8, size 0x1
    unsigned char subtype; // offset 0x9, size 0x1
    unsigned char pflags; // offset 0xA, size 0x1
    unsigned char moreFlags; // offset 0xB, size 0x1
    unsigned int surfaceID; // offset 0xC, size 0x4
    struct xVec3 ang; // offset 0x10, size 0xC
    struct xVec3 pos; // offset 0x1C, size 0xC
    struct xVec3 scale; // offset 0x28, size 0xC
    float redMult; // offset 0x34, size 0x4
    float greenMult; // offset 0x38, size 0x4
    float blueMult; // offset 0x3C, size 0x4
    float seeThru; // offset 0x40, size 0x4
    float seeThruSpeed; // offset 0x44, size 0x4
    unsigned int modelInfoID; // offset 0x48, size 0x4
    unsigned int animListID; // offset 0x4C, size 0x4
};
// total size: 0x74
struct zNPCAssetRATS : public xDynAsset {
    // Members
    struct xEntAsset ent_asset; // offset 0x10, size 0x50
    unsigned int lightKitID; // offset 0x60, size 0x4
    unsigned int npcWalls; // offset 0x64, size 0x4
    unsigned int npcPerception; // offset 0x68, size 0x4
    float updateDistance; // offset 0x6C, size 0x4
    unsigned int flags; // offset 0x70, size 0x4
};
// total size: 0x14
struct xModelAssetInfo {
    // Members
    unsigned int Magic; // offset 0x0, size 0x4
    unsigned int NumModelInst; // offset 0x4, size 0x4
    unsigned int AnimTableID; // offset 0x8, size 0x4
    unsigned int CombatID; // offset 0xC, size 0x4
    unsigned int BrainID; // offset 0x10, size 0x4
};
// total size: 0xC
struct xAnimPhysicsData {
    // Members
    struct xVec3 * tranTable; // offset 0x0, size 0x4
    float * yawTable; // offset 0x4, size 0x4
    int tranCount; // offset 0x8, size 0x4
};
// total size: 0x24
struct xAnimFile {
    // Members
    struct xAnimFile * Next; // offset 0x0, size 0x4
    const char * Name; // offset 0x4, size 0x4
    unsigned int ID; // offset 0x8, size 0x4
    unsigned int FileFlags; // offset 0xC, size 0x4
    float Duration; // offset 0x10, size 0x4
    float TimeOffset; // offset 0x14, size 0x4
    unsigned short BoneCount; // offset 0x18, size 0x2
    unsigned char NumAnims[2]; // offset 0x1A, size 0x2
    void * RawData; // offset 0x1C, size 0x4
    struct xAnimPhysicsData * PhysicsData; // offset 0x20, size 0x4
};
enum xSndHandle {
};
// total size: 0x8
struct xAnimActiveEffect {
    // Members
    struct xAnimEffect * Effect; // offset 0x0, size 0x4
    union { // inferred
        unsigned int Handle; // offset 0x4, size 0x4
        enum xSndHandle SndHandle; // offset 0x4, size 0x4
    };
};
// total size: 0x18
struct xAnimTable {
    // Members
    const char * Name; // offset 0x0, size 0x4
    struct xAnimTransition * TransitionList; // offset 0x4, size 0x4
    struct xAnimState * StateList; // offset 0x8, size 0x4
    unsigned int AnimIndex; // offset 0xC, size 0x4
    unsigned int MorphIndex; // offset 0x10, size 0x4
    unsigned int UserFlags; // offset 0x14, size 0x4
};
// total size: 0x1C
struct xMemPool {
    // Members
    void * FreeList; // offset 0x0, size 0x4
    unsigned short NextOffset; // offset 0x4, size 0x2
    unsigned short Flags; // offset 0x6, size 0x2
    void * UsedList; // offset 0x8, size 0x4
    void (* InitCB)(struct xMemPool *, void *); // offset 0xC, size 0x4
    void * Buffer; // offset 0x10, size 0x4
    unsigned short Size; // offset 0x14, size 0x2
    unsigned short NumRealloc; // offset 0x16, size 0x2
    unsigned int Total; // offset 0x18, size 0x4
};
// total size: 0x0
struct xModelInstance {};
// total size: 0x10
struct xQuat {
    // Members
    struct xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
// total size: 0x20
struct xAnimPlay {
    // Members
    struct xAnimPlay * Next; // offset 0x0, size 0x4
    unsigned short NumSingle; // offset 0x4, size 0x2
    unsigned short BoneCount; // offset 0x6, size 0x2
    struct xAnimSingle * Single; // offset 0x8, size 0x4
    void * Object; // offset 0xC, size 0x4
    struct xAnimTable * Table; // offset 0x10, size 0x4
    struct xMemPool * Pool; // offset 0x14, size 0x4
    struct xModelInstance * ModelInst; // offset 0x18, size 0x4
    void (* BeforeAnimMatrices)(struct xAnimPlay *, struct xQuat *, struct xVec3 *, int); // offset 0x1C, size 0x4
};
// total size: 0x50
struct xAnimSingle {
    // Members
    unsigned int SingleFlags; // offset 0x0, size 0x4
    struct xAnimState * State; // offset 0x4, size 0x4
    float Time; // offset 0x8, size 0x4
    float CurrentSpeed; // offset 0xC, size 0x4
    float BilinearLerp[2]; // offset 0x10, size 0x8
    struct xAnimEffect * Effect; // offset 0x18, size 0x4
    unsigned int ActiveCount; // offset 0x1C, size 0x4
    float LastTime; // offset 0x20, size 0x4
    struct xAnimActiveEffect * ActiveList; // offset 0x24, size 0x4
    struct xAnimPlay * Play; // offset 0x28, size 0x4
    struct xAnimTransition * Sync; // offset 0x2C, size 0x4
    struct xAnimTransition * Tran; // offset 0x30, size 0x4
    struct xAnimSingle * Blend; // offset 0x34, size 0x4
    float BlendFactor; // offset 0x38, size 0x4
    struct xVec3 PhysDisp; // offset 0x3C, size 0xC
    float YawDisp; // offset 0x48, size 0x4
    unsigned int pad[1]; // offset 0x4C, size 0x4
};
// total size: 0x14
struct xAnimEffect {
    // Members
    struct xAnimEffect * Next; // offset 0x0, size 0x4
    unsigned short Flags; // offset 0x4, size 0x2
    unsigned short Probability; // offset 0x6, size 0x2
    float StartTime; // offset 0x8, size 0x4
    float EndTime; // offset 0xC, size 0x4
    unsigned int (* Callback)(unsigned int, struct xAnimActiveEffect *, struct xAnimSingle *, void *); // offset 0x10, size 0x4
};
// total size: 0x8
struct xAnimTransitionList {
    // Members
    struct xAnimTransitionList * Next; // offset 0x0, size 0x4
    struct xAnimTransition * T; // offset 0x4, size 0x4
};
// total size: 0x4
struct xAnimMultiFileBase {
    // Members
    unsigned int Count; // offset 0x0, size 0x4
};
// total size: 0x8
struct xAnimMultiFileEntry {
    // Members
    unsigned int ID; // offset 0x0, size 0x4
    struct xAnimFile * File; // offset 0x4, size 0x4
};
// total size: 0xC
struct xAnimMultiFile : public xAnimMultiFileBase {
    // Members
    struct xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
};
// total size: 0x4C
struct xAnimState {
    // Members
    struct xAnimState * Next; // offset 0x0, size 0x4
    const char * Name; // offset 0x4, size 0x4
    unsigned int ID; // offset 0x8, size 0x4
    unsigned int Flags; // offset 0xC, size 0x4
    unsigned int UserFlags; // offset 0x10, size 0x4
    float Speed; // offset 0x14, size 0x4
    struct xAnimFile * Data; // offset 0x18, size 0x4
    struct xAnimEffect * Effects; // offset 0x1C, size 0x4
    struct xAnimTransitionList * Default; // offset 0x20, size 0x4
    struct xAnimTransitionList * List; // offset 0x24, size 0x4
    float * BoneBlend; // offset 0x28, size 0x4
    float * TimeSnap; // offset 0x2C, size 0x4
    float FadeRecip; // offset 0x30, size 0x4
    unsigned short * FadeOffset; // offset 0x34, size 0x4
    void * CallbackData; // offset 0x38, size 0x4
    struct xAnimMultiFile * MultiFile; // offset 0x3C, size 0x4
    void (* BeforeEnter)(struct xAnimPlay *, struct xAnimState *, void *); // offset 0x40, size 0x4
    void (* StateCallback)(struct xAnimState *, struct xAnimSingle *, void *); // offset 0x44, size 0x4
    void (* BeforeAnimMatrices)(struct xAnimPlay *, struct xQuat *, struct xVec3 *, int); // offset 0x48, size 0x4
};
// total size: 0x2C
struct xAnimTransition {
    // Members
    struct xAnimTransition * Next; // offset 0x0, size 0x4
    struct xAnimState * Dest; // offset 0x4, size 0x4
    unsigned int (* Conditional)(struct xAnimTransition *, struct xAnimSingle *, void *); // offset 0x8, size 0x4
    unsigned int (* Callback)(struct xAnimTransition *, struct xAnimSingle *, void *); // offset 0xC, size 0x4
    unsigned int Flags; // offset 0x10, size 0x4
    unsigned int UserFlags; // offset 0x14, size 0x4
    float SrcTime; // offset 0x18, size 0x4
    float DestTime; // offset 0x1C, size 0x4
    unsigned short Priority; // offset 0x20, size 0x2
    unsigned short QueuePriority; // offset 0x22, size 0x2
    float BlendRecip; // offset 0x24, size 0x4
    unsigned short * BlendOffset; // offset 0x28, size 0x4
};
// total size: 0x0
struct xEnt {};
// total size: 0x0
struct zCombatDamageInfo {};
// total size: 0x0
struct SphereCollisionResults {};
// total size: 0x8
class zICompLogic : public zIComponent {};
// total size: 0x0
class zICompNPCEntity {};
// total size: 0x8
class zICompSteering : public zIComponent {};
// total size: 0x0
class zICompPerception {};
// total size: 0x8
class zICompSound : public zIComponent {};
// total size: 0x0
class zICompCombat {};
// total size: 0x68
class zNPCBase : public xBase {
    // Members
protected:
    struct xVec3 lastPos; // offset 0x10, size 0xC
    struct xVec3 lastOrientation; // offset 0x1C, size 0xC
    float updateCullDistance; // offset 0x28, size 0x4
    enum eNPCType type; // offset 0x2C, size 0x4
    struct zNPCAssetRATS * npcAsset; // offset 0x30, size 0x4
    unsigned int npcAssetSize; // offset 0x34, size 0x4
    const struct xModelAssetInfo * modelAsset; // offset 0x38, size 0x4
    class zNPCBase * children; // offset 0x3C, size 0x4
    class zNPCBase * parent; // offset 0x40, size 0x4
    int numChildren; // offset 0x44, size 0x4
    unsigned char activated : 1; // offset 0x48, size 0x1
    unsigned char alive : 1; // offset 0x48, size 0x1
    unsigned char inUpdateDistance : 1; // offset 0x48, size 0x1
    unsigned char crossingUpdateDistance : 1; // offset 0x48, size 0x1
    unsigned char taggedForSpawn : 1; // offset 0x48, size 0x1
    unsigned char taggedForKill : 1; // offset 0x48, size 0x1
    unsigned int pad : 26; // offset 0x48, size 0x4
public:
    void * __vptr$; // offset 0x4C, size 0x4
protected:
    class zICompLogic * npcLogicComp; // offset 0x50, size 0x4
    class zICompNPCEntity * npcEntityComp; // offset 0x54, size 0x4
    class zICompSteering * npcSteeringComp; // offset 0x58, size 0x4
    class zICompPerception * npcPerceptionComp; // offset 0x5C, size 0x4
    class zICompSound * npcSoundComp; // offset 0x60, size 0x4
    class zICompCombat * npcCombatComp; // offset 0x64, size 0x4
};
// Range: 0x801C4B60 -> 0x801C4B9C
// this: r31
void zNPCSwarmBug::UpdateNPCBaseData() {}

// total size: 0x20
class zCompSteeringFlockingBrain : public zICompSteering {
    // Members
    struct xVec3 flockingCenter; // offset 0x8, size 0xC
    struct xVec3 flockingAlignment; // offset 0x14, size 0xC
};
// Range: 0x801C4B9C -> 0x801C4BBC
// this: r0
void zNPCSwarmBug::Render() {}

// total size: 0x3C
struct {} zNPCSwarmBug::__vtable; // size: 0x3C, address: 0x803C06C8

