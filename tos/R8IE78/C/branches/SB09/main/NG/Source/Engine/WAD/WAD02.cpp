/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801E4270 -> 0x8020B598
*/
extern class hkSingletonInitNode * hkSingletonInitList; // size: 0x4
extern class GMemoryHeap * pGlobalHeap; // size: 0x4
extern struct {} __vt__23hkpSingleShapeContainer; // size: 0x24
extern struct {} __vt__23hkpConvexTranslateShape; // size: 0x50
extern void (* hkSystemFree)(void * p); // size: 0x4
extern void * (* hkSystemMalloc)(int size, int align); // size: 0x4
extern int __float_nan[65536]; // size: 0x0
// total size: 0x4
class DomainDirMemCB : public MemCallbacks {};
// total size: 0x38
class Directory {
    // Members
    class MAPHeader header; // offset 0x0, size 0x20
    class MAPEntry firstEntry; // offset 0x20, size 0x18
};
// total size: 0x20
class MAPHeader {
    // Members
    int numEntry; // offset 0x0, size 0x4
    int mapVersion; // offset 0x4, size 0x4
    int stringTableStart; // offset 0x8, size 0x4
    int stringTableSize; // offset 0xC, size 0x4
    char reserved[16]; // offset 0x10, size 0x10
};
// total size: 0x18
class MAPEntry {
    // Members
    unsigned long long domainUID; // offset 0x0, size 0x8
    class Pointer32 domainPath; // offset 0x8, size 0x4
    class Pointer32 packFileName; // offset 0xC, size 0x4
    char reserved[8]; // offset 0x10, size 0x8
};
// total size: 0x8
class Batcher {
    // Members
    class Command * cmd; // offset 0x0, size 0x4
    class Batcher * next; // offset 0x4, size 0x4
};
// total size: 0x8
class Command {
    // Members
    int size; // offset 0x0, size 0x4
    void (* cb)(class Command * cmd); // offset 0x4, size 0x4
};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class Node * * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class TempNodeRef * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x8
class TempNodeRef {
    // Members
    class Node * node; // offset 0x0, size 0x4
    void (* detachCB)(class Node * node); // offset 0x4, size 0x4
};
// total size: 0x98
class SceneGraphModule : public Module {};
// total size: 0xC
class StackPoolArray : public PoolArray {};
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
// total size: 0x1C
class StaticArray {
    // Members
    int size; // offset 0x0, size 0x4
    class Warp * pool[6]; // offset 0x4, size 0x18
};
// total size: 0xA8
class LFDeviceModule : public Module {
    // Members
    class LFDeviceFactory factory; // offset 0x98, size 0x10
};
// total size: 0x10
class LFDeviceFactory : public FileDeviceFactory {};
// total size: 0xC
class LFDevice : public FileDevice {
    // Members
    class FileHandleData * handle; // offset 0x4, size 0x4
    class LFDeviceFactory * owner; // offset 0x8, size 0x4
};
// total size: 0x98
class MathModule : public Module {};
// total size: 0x24
class MallocDebugWrapper {
    // Members
    class CriticalSection memMutex; // offset 0x0, size 0x20
    enum PhysicalMemoryPool pool; // offset 0x20, size 0x4
};
enum PhysicalMemoryPool {
    PHYS_MEM_MAIN = 0,
    PHYS_MEM_SECONDARY = 1,
    PHYS_MEM_HEAP_DEF = 1,
};
// total size: 0x34
class PoolManager {
    // Members
    unsigned char * fixedBuffer[4]; // offset 0x0, size 0x10
    unsigned char * debugBuffer[4]; // offset 0x10, size 0x10
    class FixedAllocator * falloc[4]; // offset 0x20, size 0x10
    class MemTracker * memTracker; // offset 0x30, size 0x4
};
// total size: 0x98
class AllocModule : public Module {};
// total size: 0x4
class ThreadLocalStorage : private ThreadLocalStorageBase {};
// total size: 0x4
class ThreadLocalStorageBase {
    // Members
    int userIndex; // offset 0x0, size 0x4
};
// total size: 0x8
class ThreadLocalStorageTable {
    // Members
    int userCount; // offset 0x0, size 0x4
    bool created; // offset 0x4, size 0x1
};
// total size: 0x10
class DeptLookup {
    // Members
    enum DeptTag deptID; // offset 0x0, size 0x4
    char * deptNameString; // offset 0x4, size 0x4
    int maxMem; // offset 0x8, size 0x4
    unsigned int throwAssert; // offset 0xC, size 0x4
};
enum DeptTag {
    DeptTag_Anim = 0,
    DeptTag_Art = 1,
    DeptTag_Design = 2,
    DeptTag_Prog = 3,
    DeptTag_Other = 4,
    DeptTag_NumDepts = 5,
};
// total size: 0xC
class TagLookup {
    // Members
    enum eMemMgrTag tagID; // offset 0x0, size 0x4
    enum DeptTag deptID; // offset 0x4, size 0x4
    char * tagNameString; // offset 0x8, size 0x4
};
// total size: 0x18
class FactoryPageInfo {
    // Members
    class Factory * factory; // offset 0x0, size 0x4
    class FactoryPageInfo * next; // offset 0x4, size 0x4
    void * firstBlockAddress; // offset 0x8, size 0x4
    class zFactoryBlockInfo * blockInfos; // offset 0xC, size 0x4
    unsigned short numBlocks; // offset 0x10, size 0x2
    unsigned short usedBlocks; // offset 0x12, size 0x2
    unsigned short blockSize; // offset 0x14, size 0x2
    unsigned short usageDataSize; // offset 0x16, size 0x2
};
// total size: 0x0
class zFactoryBlockInfo {};
// total size: 0x84
class FactoryMemTypeRegistry {
    // Members
    void (* leakCBTable[33])(void * leakedBlock, int leakedBlockSize); // offset 0x0, size 0x84
};
enum eFactoryMemType {
    eFactoryMemType_Unknown = 0,
    eFactoryMemType_NPCLogic = 1,
    eFactoryMemType_NPCEntity = 2,
    eFactoryMemType_NPCFX = 3,
    eFactoryMemType_NPCFXNode = 4,
    eFactoryMemType_NPCPerception = 5,
    eFactoryMemType_NPCCombat = 6,
    eFactoryMemType_NPCSteering = 7,
    eFactoryMemType_NPCSteeringFlocking = 8,
    eFactoryMemType_NPCSteeringGeneric = 9,
    eFactoryMemType_NPCExtraModel = 10,
    eFactoryMemType_NPCInfoNode = 11,
    eFactoryMemType_NPCBTAction = 12,
    eFactoryMemType_NPCBTCondition = 13,
    eFactoryMemType_BTFactory = 14,
    eFactoryMemType_NPCTemplate = 15,
    eFactoryMemType_NPCQuickTimeCombat = 16,
    eFactoryMemType_HitSpot = 17,
    eFactoryMemType_DamageMultiplier = 18,
    eFactoryMemType_Projectile = 19,
    eFactoryMemType_ProjectileEntity = 20,
    eFactoryMemType_ProjectileTrajectory = 21,
    eFactoryMemType_ProjectileHavok = 22,
    eFactoryMemType_ProjectileCollDetect = 23,
    eFactoryMemType_PhysicsObject = 24,
    eFactoryMemType_PhysicsObjectEntity = 25,
    eFactoryMemType_RuntimeEntity = 26,
    eFactoryMemType_RuntimeEntityModel = 27,
    eFactoryMemType_RuntimeEntityFX = 28,
    eFactoryMemType_VehicleConfig = 29,
    eFactoryMemType_Hud = 30,
    eFactoryMemType_TargetList = 31,
    eFactoryMemType_Networking = 32,
    eFactoryMemTypeCount = 33,
};
// total size: 0x98
class PhysicsModule : public Module {};
// total size: 0x14
class hkTestEntry {
    // Members
    int (* m_func)(); // offset 0x0, size 0x4
    char * m_name; // offset 0x4, size 0x4
    char * m_category; // offset 0x8, size 0x4
    char * m_path; // offset 0xC, size 0x4
    class hkTestEntry * m_next; // offset 0x10, size 0x4
};
// total size: 0x10
class hkTypeInfo {
    // Members
    char * m_typeName; // offset 0x0, size 0x4
    void (* m_finishLoadedObjectFunction)(void *, int); // offset 0x4, size 0x4
    void (* m_cleanupLoadedObjectFunction)(void *); // offset 0x8, size 0x4
    void * m_vtable; // offset 0xC, size 0x4
};
// total size: 0x10
class Updater {
    // Members
    char * fromVersion; // offset 0x0, size 0x4
    char * toVersion; // offset 0x4, size 0x4
    class UpdateDescription * desc; // offset 0x8, size 0x4
    enum hkResult (* optionalCustomFunction)(class hkArray & loadedObjects, class hkObjectUpdateTracker & tracker); // offset 0xC, size 0x4
};
// total size: 0x10
class UpdateDescription {
    // Members
    class ClassRename * m_renames; // offset 0x0, size 0x4
    class ClassAction * m_actions; // offset 0x4, size 0x4
    class hkClassNameRegistry * m_newClassRegistry; // offset 0x8, size 0x4
    class UpdateDescription * m_next; // offset 0xC, size 0x4
};
// total size: 0x8
class ClassRename {
    // Members
    char * oldName; // offset 0x0, size 0x4
    char * newName; // offset 0x4, size 0x4
};
// total size: 0x14
class ClassAction {
    // Members
    unsigned int oldSignature; // offset 0x0, size 0x4
    unsigned int newSignature; // offset 0x4, size 0x4
    int versionFlags; // offset 0x8, size 0x4
    char * oldClassName; // offset 0xC, size 0x4
    void (* versionFunc)(class hkVariant & obj, class hkVariant & newObj, class hkObjectUpdateTracker & tracker); // offset 0x10, size 0x4
};
// total size: 0x0
class hkObjectUpdateTracker {};
// total size: 0x8
class hkClassNameRegistry : public hkReferencedObject {};
// total size: 0xC
class hkArray {
    // Members
    class hkVariant * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x0
class hkStaticClassNameRegistry {};
// total size: 0x1
class hkCriticalSection {};
// total size: 0x1D50
class hkpCollisionDispatcher : public hkReferencedObject {
    // Members
    class hkpCollisionAgent * (* m_defaultCollisionAgent)(class hkpCdBody & collA, class hkpCdBody & collB, class hkpCollisionInput & env, class hkpContactMgr * mgr); // offset 0x8, size 0x4
    class hkpContactMgrFactory * m_contactMgrFactory[8][8]; // offset 0xC, size 0x100
    unsigned int m_hasAlternateType[32]; // offset 0x110, size 0x80
    int m_numAgent2Types; // offset 0x190, size 0x4
    unsigned char m_agent2Types[32][32]; // offset 0x1A0, size 0x400
    unsigned char m_agent2TypesPred[32][32]; // offset 0x5A0, size 0x400
    class AgentFuncs m_agent2Func[64]; // offset 0x9A0, size 0x500
    int m_numAgent3Types; // offset 0xEA0, size 0x4
    unsigned char m_agent3Types[32][32]; // offset 0xEB0, size 0x400
    unsigned char m_agent3TypesPred[32][32]; // offset 0x12B0, size 0x400
    class Agent3FuncsIntern m_agent3Func[16]; // offset 0x16B0, size 0x400
    signed char m_collisionQualityTable[10][10]; // offset 0x1AB0, size 0x64
    class hkpCollisionQualityInfo m_collisionQualityInfo[8]; // offset 0x1B20, size 0x200
    class hkBool m_collisionAgentRegistered; // offset 0x1D20, size 0x1
    class hkBool m_agent3Registered; // offset 0x1D21, size 0x1
    class hkBool m_midphaseAgent3Registered; // offset 0x1D22, size 0x1
    class hkBool m_checkEnabled; // offset 0x1D23, size 0x1
    class hkArray m_shapeInheritance; // offset 0x1D24, size 0xC
    class DebugEntry (* m_debugAgent2Table)[32][32]; // offset 0x1D30, size 0x4
    class DebugEntry (* m_debugAgent2TablePred)[32][32]; // offset 0x1D34, size 0x4
    class DebugEntry (* m_debugAgent3Table)[32][32]; // offset 0x1D38, size 0x4
    class DebugEntry (* m_debugAgent3TablePred)[32][32]; // offset 0x1D3C, size 0x4
    float m_expectedMaxLinearVelocity; // offset 0x1D40, size 0x4
    float m_expectedMinPsiDeltaTime; // offset 0x1D44, size 0x4
};
// total size: 0xC
class hkpCollisionAgent : public hkReferencedObject {
    // Members
    class hkpContactMgr * m_contactMgr; // offset 0x8, size 0x4
};
// total size: 0x8
class hkpContactMgrFactory : public hkReferencedObject {};
// total size: 0x14
class AgentFuncs {
    // Members
    class hkpCollisionAgent * (* m_createFunc)(class hkpCdBody & collA, class hkpCdBody & collB, class hkpCollisionInput & env, class hkpContactMgr * mgr); // offset 0x0, size 0x4
    void (* m_getPenetrationsFunc)(class hkpCdBody & bodyA, class hkpCdBody & bodyB, class hkpCollisionInput & input, class hkpCdBodyPairCollector & collector); // offset 0x4, size 0x4
    void (* m_getClosestPointFunc)(class hkpCdBody & bodyA, class hkpCdBody & bodyB, class hkpCollisionInput & input, class hkpCdPointCollector & output); // offset 0x8, size 0x4
    void (* m_linearCastFunc)(class hkpCdBody & bodyA, class hkpCdBody & bodyB, class hkpLinearCastCollisionInput & input, class hkpCdPointCollector & castCollector, class hkpCdPointCollector * startCollector); // offset 0xC, size 0x4
    class hkBool m_isFlipped; // offset 0x10, size 0x1
    class hkBool m_isPredictive; // offset 0x11, size 0x1
};
// total size: 0x70
class hkpLinearCastCollisionInput : public hkpCollisionInput {
    // Members
    class hkVector4 m_path; // offset 0x50, size 0x10
    float m_maxExtraPenetration; // offset 0x60, size 0x4
    float m_cachedPathLength; // offset 0x64, size 0x4
    class hkpCollisionAgentConfig * m_config; // offset 0x68, size 0x4
};
// total size: 0x40
class Agent3FuncsIntern : public Agent3Funcs {
    // Members
    enum Symmetric m_symmetric; // offset 0x34, size 0x4
};
// total size: 0x40
class Agent3Funcs {
    // Members
    void * (* m_createFunc)(class hkpAgent3Input & input, class hkpAgentEntry * entry, void * agentData); // offset 0x0, size 0x4
    void (* m_destroyFunc)(class hkpAgentEntry * entry, void * agentData, class hkpContactMgr * mgr, class hkpConstraintOwner & constraintOwner, class hkpCollisionDispatcher * dispatcher); // offset 0x4, size 0x4
    void * (* m_cleanupFunc)(class hkpAgentEntry * entry, void * agentData, class hkpContactMgr * mgr, class hkpConstraintOwner & constraintOwner); // offset 0x8, size 0x4
    void (* m_removePointFunc)(class hkpAgentEntry * entry, void * agentData, unsigned short idToRemove); // offset 0xC, size 0x4
    void (* m_commitPotentialFunc)(class hkpAgentEntry * entry, void * agentData, unsigned short newId); // offset 0x10, size 0x4
    void (* m_createZombieFunc)(class hkpAgentEntry * entry, void * agentData, unsigned short idTobecomeZombie); // offset 0x14, size 0x4
    void (* m_updateFilterFunc)(class hkpAgentEntry * entry, void * agentData, class hkpCdBody & bodyA, class hkpCdBody & bodyB, class hkpCollisionInput & input, class hkpContactMgr * mgr, class hkpConstraintOwner & constraintOwner); // offset 0x18, size 0x4
    void (* m_calcStatisticsFunc)(class hkpAgentEntry * entry, void * agentData, class hkpCollisionInput & input, class hkStatisticsCollector * collector); // offset 0x1C, size 0x4
    void (* m_invalidateTimFunc)(class hkpAgentEntry * entry, void * agentData, class hkpCollisionInput & input); // offset 0x20, size 0x4
    void (* m_warpTimeFunc)(class hkpAgentEntry * entry, void * agentData, float oldTime, float newTime, class hkpCollisionInput & input); // offset 0x24, size 0x4
    void (* m_sepNormalFunc)(class hkpAgent3Input & input, class hkpAgentEntry * entry, void * agentData, class hkVector4 & separatingNormalOut); // offset 0x28, size 0x4
    void * (* m_processFunc)(class hkpAgent3ProcessInput & input, class hkpAgentEntry * entry, void * agentData, class hkVector4 * separatingNormalOut, class hkpProcessCollisionOutput & result); // offset 0x2C, size 0x4
    class hkBool m_isPredictive; // offset 0x30, size 0x1
    class hkBool m_ignoreSymmetricVersion; // offset 0x31, size 0x1
    class hkBool m_reusePreviousEntry; // offset 0x32, size 0x1
};
// total size: 0x60
class hkpAgent3Input {
    // Members
    class hkPadSpu m_bodyA; // offset 0x0, size 0x4
    class hkPadSpu m_bodyB; // offset 0x4, size 0x4
    class hkPadSpu m_overrideBodyA; // offset 0x8, size 0x4
    class hkPadSpu m_input; // offset 0xC, size 0x4
    class hkPadSpu m_contactMgr; // offset 0x10, size 0x4
    class hkTransform m_aTb; // offset 0x20, size 0x40
};
// total size: 0x4
class hkPadSpu {
    // Members
    class hkpCdBody * m_storage; // offset 0x0, size 0x4
};
// total size: 0x4
class hkPadSpu {
    // Members
    class hkpProcessCollisionInput * m_storage; // offset 0x0, size 0x4
};
// total size: 0x4
class hkPadSpu {
    // Members
    class hkpContactMgr * m_storage; // offset 0x0, size 0x4
};
// total size: 0x14
class hkStatisticsCollector : public hkReferencedObject {
    // Members
    void * m_clientData; // offset 0x8, size 0x4
    class hkVtableClassRegistry * m_vtblRegistry; // offset 0xC, size 0x4
    bool m_includePackfileMemory; // offset 0x10, size 0x1
};
// total size: 0x0
class hkVtableClassRegistry {};
// total size: 0x80
class hkpAgent3ProcessInput : public hkpAgent3Input {
    // Members
    class hkPadSpu m_distAtT1; // offset 0x60, size 0x4
    class hkPadSpu m_offsetPpuSectorMinusSpuSector; // offset 0x64, size 0x4
    class hkVector4 m_linearTimInfo; // offset 0x70, size 0x10
};
enum Symmetric {
    IS_SYMMETRIC = 0,
    IS_NOT_SYMMETRIC = 1,
    IS_NOT_SYMMETRIC_AND_FLIPPED = 2,
};
// total size: 0x40
class hkpCollisionQualityInfo {
    // Members
    float m_keepContact; // offset 0x0, size 0x4
    float m_create4dContact; // offset 0x4, size 0x4
    float m_createContact; // offset 0x8, size 0x4
    float m_manifoldTimDistance; // offset 0xC, size 0x4
    class hkPadSpu m_useContinuousPhysics; // offset 0x10, size 0x4
    class hkBool m_useSimpleToiHandling; // offset 0x14, size 0x1
    float m_minSeparation; // offset 0x18, size 0x4
    float m_minExtraSeparation; // offset 0x1C, size 0x4
    float m_minSafeDeltaTime; // offset 0x20, size 0x4
    float m_minAbsoluteSafeDeltaTime; // offset 0x24, size 0x4
    float m_toiSeparation; // offset 0x28, size 0x4
    float m_toiExtraSeparation; // offset 0x2C, size 0x4
    float m_toiAccuracy; // offset 0x30, size 0x4
    float m_maxContraintViolation; // offset 0x34, size 0x4
    float m_minToiDeltaTime; // offset 0x38, size 0x4
    unsigned short m_constraintPriority; // offset 0x3C, size 0x2
    class hkBool m_enableToiWeldRejection; // offset 0x3E, size 0x1
};
// total size: 0xC
class hkArray {
    // Members
    class ShapeInheritance * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x8
class ShapeInheritance {
    // Members
    enum hkpShapeType m_primaryType; // offset 0x0, size 0x4
    enum hkpShapeType m_alternateType; // offset 0x4, size 0x4
};
// total size: 0x3
class DebugEntry {
    // Members
    char m_typeA; // offset 0x0, size 0x1
    char m_typeB; // offset 0x1, size 0x1
    char m_priority; // offset 0x2, size 0x1
};
// total size: 0x18
class hkGeometry {
    // Members
    class hkArray m_vertices; // offset 0x0, size 0xC
    class hkArray m_triangles; // offset 0xC, size 0xC
};
// total size: 0xC
class hkArray {
    // Members
    class Triangle * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0xC
class Triangle {
    // Members
    int m_a; // offset 0x0, size 0x4
    int m_b; // offset 0x4, size 0x4
    int m_c; // offset 0x8, size 0x4
};
// total size: 0xC
class hkStridedVertices {
    // Members
    float * m_vertices; // offset 0x0, size 0x4
    int m_numVertices; // offset 0x4, size 0x4
    int m_striding; // offset 0x8, size 0x4
};
// total size: 0x10
class HavokChunkHeader {
    // Members
    int tag; // offset 0x0, size 0x4
    int dataSize; // offset 0x4, size 0x4
    int collFilter; // offset 0x8, size 0x4
    class hkRootLevelContainer * physicsDataContainer; // offset 0xC, size 0x4
};
// total size: 0x88
class hkBinaryPackfileReader : public hkPackfileReader {
    // Members
    class BinaryPackfileData * m_packfileData; // offset 0x18, size 0x4
    class hkPackfileHeader * m_header; // offset 0x1C, size 0x4
    class hkPackfileSectionHeader * m_sections; // offset 0x20, size 0x4
    class hkInplaceArray m_sectionData; // offset 0x24, size 0x4C
    int m_streamOffset; // offset 0x70, size 0x4
    class hkArray * m_loadedObjects; // offset 0x74, size 0x4
    class hkPackfileObjectUpdateTracker * m_tracker; // offset 0x78, size 0x4
    class hkArray m_classes; // offset 0x7C, size 0xC
};
// total size: 0x18
class hkPackfileReader : public hkReferencedObject {
    // Members
    class hkPointerMap m_updateFlagFromClass; // offset 0x8, size 0xC
    char * m_contentsVersion; // offset 0x14, size 0x4
};
// total size: 0xC
class hkPointerMap {
    // Members
    class hkPointerMapBase m_map; // offset 0x0, size 0xC
};
// total size: 0x60
class BinaryPackfileData : public hkPackfileData {};
// total size: 0x60
class hkPackfileData : public hkResource {
    // Members
    void * m_topLevelObject; // offset 0x8, size 0x4
    char * m_name; // offset 0xC, size 0x4
    class hkPointerMap m_trackedObjects; // offset 0x10, size 0xC
    class hkStringMap m_trackedTypes; // offset 0x1C, size 0x10
    int m_destructorsEnabled; // offset 0x2C, size 0x4
    class hkArray m_memory; // offset 0x30, size 0xC
    class hkArray m_chunks; // offset 0x3C, size 0xC
    class hkArray m_exports; // offset 0x48, size 0xC
    class hkArray m_imports; // offset 0x54, size 0xC
};
// total size: 0x8
class hkResource : public hkReferencedObject {};
// total size: 0x10
class hkStringMap {
    // Members
    class hkStringMapBase m_map; // offset 0x0, size 0x10
};
// total size: 0x10
class hkStringMapBase : public hkCachedHashMap {};
// total size: 0x10
class hkCachedHashMap {
    // Members
    unsigned long * m_elem; // offset 0x0, size 0x4
    int m_numElems; // offset 0x4, size 0x4
    int m_hashMod; // offset 0x8, size 0x4
    class hkStringMapOperations m_ops; // offset 0xC, size 0x1
};
// total size: 0x1
class hkStringMapOperations {};
// total size: 0xC
class hkArray {
    // Members
    void * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    class Chunk * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0xC
class Chunk {
    // Members
    void * pointer; // offset 0x0, size 0x4
    int numBytes; // offset 0x4, size 0x4
    enum HK_MEMORY_CLASS memClass; // offset 0x8, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    class Export * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x8
class Export {
    // Members
    char * name; // offset 0x0, size 0x4
    void * data; // offset 0x4, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    class Import * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x8
class Import {
    // Members
    char * name; // offset 0x0, size 0x4
    void * * location; // offset 0x4, size 0x4
};
// total size: 0x0
class hkPackfileHeader {};
// total size: 0x0
class hkPackfileSectionHeader {};
// total size: 0x4C
class hkInplaceArray : public hkArray {
    // Members
    void * m_storage[16]; // offset 0xC, size 0x40
};
// total size: 0x0
class hkPackfileObjectUpdateTracker {};
// total size: 0xC
class hkArray {
    // Members
    class hkClass * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x1B0
class TrianglePointCollector : public hkpAllCdPointCollector {
    // Members
    class hkArray m_triangles; // offset 0x1A0, size 0xC
};
// total size: 0x30
class ClosestPointCollector : public hkpCdPointCollector {
    // Members
    float closest; // offset 0x8, size 0x4
    class hkVector4 position; // offset 0x10, size 0x10
    class hkVector4 normal; // offset 0x20, size 0x10
};
// total size: 0x98
class HavokModule : public Module {};
// total size: 0x60
class hkpTriangleShape : public hkpConvexShape {
    // Members
    unsigned short m_weldingInfo; // offset 0x14, size 0x2
    class hkEnum m_weldingType; // offset 0x16, size 0x1
    unsigned char m_isExtruded; // offset 0x17, size 0x1
    class hkVector4 m_vertexA; // offset 0x20, size 0x10
    class hkVector4 m_vertexB; // offset 0x30, size 0x10
    class hkVector4 m_vertexC; // offset 0x40, size 0x10
    class hkVector4 m_extrusion; // offset 0x50, size 0x10
};
// total size: 0x1
class hkEnum {
    // Members
    unsigned char m_storage; // offset 0x0, size 0x1
};
// total size: 0xC
class hkSingletonInitNode {
    // Members
    class hkReferencedObject * (* m_func)(); // offset 0x0, size 0x4
    class hkSingletonInitNode * m_next; // offset 0x4, size 0x4
    void * * m_value; // offset 0x8, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    class ScaledShape * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x20
class ScaledShape {
    // Members
    class hkpShape * m_shape; // offset 0x0, size 0x4
    class hkVector4 m_scale; // offset 0x10, size 0x10
};
// total size: 0x30
class hkStopwatch {
    // Members
    unsigned long long m_ticks_at_start; // offset 0x0, size 0x8
    unsigned long long m_ticks_total; // offset 0x8, size 0x8
    unsigned long long m_ticks_at_split; // offset 0x10, size 0x8
    unsigned long long m_split_total; // offset 0x18, size 0x8
    class hkBool m_running_flag; // offset 0x20, size 0x1
    int m_num_timings; // offset 0x24, size 0x4
    char * m_name; // offset 0x28, size 0x4
};
// total size: 0x100
class hkpStorageExtendedMeshShape : public hkpExtendedMeshShape {
    // Members
    class hkArray m_meshstorage; // offset 0xE0, size 0xC
    class hkArray m_shapestorage; // offset 0xEC, size 0xC
};
// total size: 0xE0
class hkpExtendedMeshShape : public hkpShapeCollection {
    // Members
    class TrianglesSubpart m_embeddedTrianglesSubpart; // offset 0x20, size 0x60
    class hkVector4 m_scaling; // offset 0x80, size 0x10
    class hkVector4 m_aabbHalfExtents; // offset 0x90, size 0x10
    class hkVector4 m_aabbCenter; // offset 0xA0, size 0x10
    int m_numBitsForSubpartIndex; // offset 0xB0, size 0x4
    class TrianglesSubpart * m_trianglesSubparts; // offset 0xB4, size 0x4
    int m_numTrianglesSubparts; // offset 0xB8, size 0x4
    class hkBool m_trianglesSubpartsAllocatedInternally; // offset 0xBC, size 0x1
    class hkBool m_shapesSubpartsAllocatedInternally; // offset 0xBD, size 0x1
    class ShapesSubpart * m_shapesSubparts; // offset 0xC0, size 0x4
    int m_numShapesSubparts; // offset 0xC4, size 0x4
    class hkArray m_weldingInfo; // offset 0xC8, size 0xC
    class hkEnum m_weldingType; // offset 0xD4, size 0x1
    unsigned int m_defaultCollisionFilterInfo; // offset 0xD8, size 0x4
    float m_triangleRadius; // offset 0xDC, size 0x4
};
// total size: 0x60
class TrianglesSubpart : public Subpart {
    // Members
    int m_numTriangleShapes; // offset 0x14, size 0x4
    float * m_vertexBase; // offset 0x18, size 0x4
    int m_vertexStriding; // offset 0x1C, size 0x4
    int m_numVertices; // offset 0x20, size 0x4
    class hkVector4 m_extrusion; // offset 0x30, size 0x10
    void * m_indexBase; // offset 0x40, size 0x4
    int m_indexStriding; // offset 0x44, size 0x4
    class hkEnum m_stridingType; // offset 0x48, size 0x1
    signed char m_flipAlternateTriangles; // offset 0x49, size 0x1
    int m_triangleOffset; // offset 0x4C, size 0x4
    unsigned long m_userData; // offset 0x50, size 0x4
};
// total size: 0x14
class Subpart {
    // Members
    class hkEnum m_type; // offset 0x0, size 0x1
    class hkEnum m_materialIndexStridingType; // offset 0x1, size 0x1
    short m_materialStriding; // offset 0x2, size 0x2
    void * m_materialIndexBase; // offset 0x4, size 0x4
    unsigned short m_materialIndexStriding; // offset 0x8, size 0x2
    unsigned short m_numMaterials; // offset 0xA, size 0x2
    class hkpMeshMaterial * m_materialBase; // offset 0xC, size 0x4
    class hkClass * m_materialClass; // offset 0x10, size 0x4
};
// total size: 0x1
class hkEnum {
    // Members
    signed char m_storage; // offset 0x0, size 0x1
};
// total size: 0x4
class hkpMeshMaterial {
    // Members
    unsigned int m_filterInfo; // offset 0x0, size 0x4
};
// total size: 0x40
class ShapesSubpart : public Subpart {
    // Members
    class hkpConvexShape * * m_childShapes; // offset 0x14, size 0x4
    int m_numChildShapes; // offset 0x18, size 0x4
    class hkBool m_offsetSet; // offset 0x1C, size 0x1
    class hkBool m_rotationSet; // offset 0x1D, size 0x1
    class hkBool m_childShapesAllocatedInternally; // offset 0x1E, size 0x1
    class hkQuaternion m_rotation; // offset 0x20, size 0x10
    class hkVector4 m_translation; // offset 0x30, size 0x10
};
// total size: 0xC
class hkArray {
    // Members
    unsigned short * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    class MeshSubpartStorage * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x5C
class MeshSubpartStorage : public hkReferencedObject {
    // Members
    class hkArray m_vertices; // offset 0x8, size 0xC
    class hkArray m_indices8; // offset 0x14, size 0xC
    class hkArray m_indices16; // offset 0x20, size 0xC
    class hkArray m_indices32; // offset 0x2C, size 0xC
    class hkArray m_materialIndices; // offset 0x38, size 0xC
    class hkArray m_materials; // offset 0x44, size 0xC
    class hkArray m_materialIndices16; // offset 0x50, size 0xC
};
// total size: 0xC
class hkArray {
    // Members
    class Material * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0xC
class Material : public hkpMeshMaterial {
    // Members
    class hkHalf m_restitution; // offset 0x4, size 0x2
    class hkHalf m_friction; // offset 0x6, size 0x2
    unsigned long m_userData; // offset 0x8, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    class ShapeSubpartStorage * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x38
class ShapeSubpartStorage : public hkReferencedObject {
    // Members
    class hkArray m_shapes; // offset 0x8, size 0xC
    class hkArray m_materialIndices; // offset 0x14, size 0xC
    class hkArray m_materials; // offset 0x20, size 0xC
    class hkArray m_materialIndices16; // offset 0x2C, size 0xC
};
// total size: 0xC
class hkArray {
    // Members
    class hkpConvexShape * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x30
class hkpMoppCompilerInput {
    // Members
    class hkVector4 m_absoluteFitToleranceOfAxisAlignedTriangles; // offset 0x0, size 0x10
    float m_relativeFitToleranceOfInternalNodes; // offset 0x10, size 0x4
    float m_absoluteFitToleranceOfInternalNodes; // offset 0x14, size 0x4
    float m_absoluteFitToleranceOfTriangles; // offset 0x18, size 0x4
    class hkBool m_useShapeKeys; // offset 0x1C, size 0x1
    class hkBool m_enablePrimitiveSplitting; // offset 0x1D, size 0x1
    class hkBool m_enableChunkSubdivision; // offset 0x1E, size 0x1
    class hkBool m_enableInterleavedBuilding; // offset 0x1F, size 0x1
    class hkBool m_cachePrimitiveExtents; // offset 0x20, size 0x1
};
// total size: 0x30
class hkpMoppCode : public hkReferencedObject {
    // Members
    class CodeInfo m_info; // offset 0x10, size 0x10
    class hkArray m_data; // offset 0x20, size 0xC
    class hkEnum m_buildType; // offset 0x2C, size 0x1
};
// total size: 0x10
class CodeInfo {
    // Members
    class hkVector4 m_offset; // offset 0x0, size 0x10
};
// total size: 0x60
class hkpConvexVerticesShape : public hkpConvexShape {
    // Members
    class hkVector4 m_aabbHalfExtents; // offset 0x20, size 0x10
    class hkVector4 m_aabbCenter; // offset 0x30, size 0x10
    class hkArray m_rotatedVertices; // offset 0x40, size 0xC
    int m_numVertices; // offset 0x4C, size 0x4
    class hkArray m_planeEquations; // offset 0x50, size 0xC
    class hkpConvexVerticesConnectivity * m_connectivity; // offset 0x5C, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    class FourVectors * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x30
class FourVectors {
    // Members
    class hkVector4 m_x; // offset 0x0, size 0x10
    class hkVector4 m_y; // offset 0x10, size 0x10
    class hkVector4 m_z; // offset 0x20, size 0x10
};
// total size: 0x0
class hkpConvexVerticesConnectivity {};
// total size: 0x10
class hkLocalArray : public hkArray {
    // Members
    class hkpShape * * m_localMemory; // offset 0xC, size 0x4
};
// total size: 0x10
class GFxMovieDef : public GFxResource, public GFxStateBag {};
// total size: 0xC
class GFxResource : public GNewOverrideBase {
    // Members
    class GAtomicInt RefCount; // offset 0x0, size 0x4
    class GFxResourceLibBase * pLib; // offset 0x4, size 0x4
};
// total size: 0x4
class GAtomicInt : public GAtomicValueBase {};
// total size: 0x4
class GAtomicValueBase {
    // Members
    long Value; // offset 0x0, size 0x4
};
// total size: 0x1C
class TextParams {
    // Members
    class GColor TextColor; // offset 0x0, size 0x4
    enum Alignment HAlignment; // offset 0x4, size 0x4
    enum VAlignment VAlignment; // offset 0x8, size 0x4
    enum FontStyle FontStyle; // offset 0xC, size 0x4
    float FontSize; // offset 0x10, size 0x4
    class GString FontName; // offset 0x14, size 0x4
    bool Underline; // offset 0x18, size 0x1
    bool Multiline; // offset 0x19, size 0x1
    bool WordWrap; // offset 0x1A, size 0x1
};
// total size: 0x4
class GColor {
    // Members
    class @class __anon; // offset 0x0, size 0x4
    class Rgb32 Channels; // offset 0x0, size 0x4
    unsigned long Raw; // offset 0x0, size 0x4
};
// total size: 0x4
class @class {
    // Members
    class Rgb32 Channels; // offset 0x0, size 0x4
    unsigned long Raw; // offset 0x0, size 0x4
};
// total size: 0x4
class Rgb32 {
    // Members
    unsigned char Alpha; // offset 0x0, size 0x1
    unsigned char Red; // offset 0x1, size 0x1
    unsigned char Green; // offset 0x2, size 0x1
    unsigned char Blue; // offset 0x3, size 0x1
};
enum Alignment {
    Align_Left = 0,
    Align_Default = 0,
    Align_Right = 1,
    Align_Center = 2,
    Align_Justify = 3,
};
enum VAlignment {
    VAlign_Top = 0,
    VAlign_Default = 0,
    VAlign_Center = 1,
    VAlign_Bottom = 2,
};
enum FontStyle {
    Normal = 0,
    Bold = 1,
    Italic = 2,
    BoldItalic = 3,
    ItalicBold = 3,
};
// total size: 0x4
class GString {
    // Members
    class @class __anon; // offset 0x0, size 0x4
    class DataDesc * pData; // offset 0x0, size 0x4
    unsigned long HeapTypeBits; // offset 0x0, size 0x4
};
// total size: 0x4
class @class {
    // Members
    class DataDesc * pData; // offset 0x0, size 0x4
    unsigned long HeapTypeBits; // offset 0x0, size 0x4
};
// total size: 0xC
class DataDesc {
    // Members
    unsigned long Size; // offset 0x0, size 0x4
    long RefCount; // offset 0x4, size 0x4
    char Data[1]; // offset 0x8, size 0x1
};
// total size: 0x8
class GSize {
    // Members
    float Width; // offset 0x0, size 0x4
    float Height; // offset 0x4, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxDrawText * pObject; // offset 0x0, size 0x4
};
// total size: 0x10
class GFxDrawText : public GRefCountBase {};
// total size: 0x10
class GRefCountBase : public GRefCountBaseStatImpl {};
// total size: 0x10
class GRefCountBaseStatImpl : public GRefCountBaseImpl {};
// total size: 0x14
class GImageInfoBase : public GRefCountBase, public ChangeHandler {};
// total size: 0x4
class ChangeHandler {};
// total size: 0x2C
class GFxImageCreateInfo {
    // Members
    enum InputType Type; // offset 0x0, size 0x4
    enum ResourceUse Use; // offset 0x4, size 0x4
    char * pExportName; // offset 0x8, size 0x4
    class @class __anon; // offset 0xC, size 0x4
    class GImage * pImage; // offset 0xC, size 0x4
    class GFxImageFileInfo * pFileInfo; // offset 0xC, size 0x4
    class GFxFileOpener * pFileOpener; // offset 0x10, size 0x4
    class GFxRenderConfig * pRenderConfig; // offset 0x14, size 0x4
    class GFxLog * pLog; // offset 0x18, size 0x4
    class GFxJpegSupportBase * pJpegSupport; // offset 0x1C, size 0x4
    class GFxPNGSupportBase * pPNGSupport; // offset 0x20, size 0x4
    class GMemoryHeap * pHeap; // offset 0x24, size 0x4
    bool ThreadedLoading; // offset 0x28, size 0x1
};
enum InputType {
    Input_None = 0,
    Input_Image = 1,
    Input_File = 2,
};
enum ResourceUse {
    Use_None = 0,
    Use_Bitmap = 1,
    Use_Gradient = 2,
    Use_FontTexture = 3,
    Use_SoundSample = 4,
    Use_TypeCode_Mask = 255,
};
// total size: 0x4
class @class {
    // Members
    class GImage * pImage; // offset 0x0, size 0x4
    class GFxImageFileInfo * pFileInfo; // offset 0x0, size 0x4
};
// total size: 0x38
class GImage : public GRefCountBase, public GImageBase {};
// total size: 0x28
class GImageBase {
    // Members
    enum ImageFormat Format; // offset 0x0, size 0x4
    unsigned long Width; // offset 0x4, size 0x4
    unsigned long Height; // offset 0x8, size 0x4
    unsigned long Pitch; // offset 0xC, size 0x4
    unsigned char * pData; // offset 0x10, size 0x4
    unsigned int DataSize; // offset 0x14, size 0x4
    unsigned int MipMapCount; // offset 0x18, size 0x4
    class GArray ColorMap; // offset 0x1C, size 0xC
};
enum ImageFormat {
    Image_None = 0,
    Image_ARGB_8888 = 1,
    Image_RGB_888 = 2,
    Image_L_8 = 8,
    Image_A_8 = 9,
    Image_DXT1 = 10,
    Image_DXT3 = 11,
    Image_DXT5 = 12,
    Image_P_8 = 100,
};
// total size: 0xC
class GArray : public GArrayBase {};
// total size: 0xC
class GArrayBase {
    // Members
    class GArrayData Data; // offset 0x0, size 0xC
};
// total size: 0xC
class GArrayData : public GArrayDataBase {};
// total size: 0xC
class GArrayDataBase {
    // Members
    class GColor * Data; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    class GArrayDefaultPolicy Policy; // offset 0x8, size 0x4
};
// total size: 0x4
class GArrayDefaultPolicy {
    // Members
    unsigned long Capacity; // offset 0x0, size 0x4
};
// total size: 0x28
class GFxImageFileInfo : public GFxResourceFileInfo {
    // Members
    unsigned short TargetWidth; // offset 0x1C, size 0x2
    unsigned short TargetHeight; // offset 0x1E, size 0x2
    enum ResourceUse Use; // offset 0x20, size 0x4
    class GString ExportName; // offset 0x24, size 0x4
};
// total size: 0x1C
class GFxResourceFileInfo : public GRefCountBase {
    // Members
    enum FileFormatType Format; // offset 0x10, size 0x4
    class GFxExporterInfo * pExporterInfo; // offset 0x14, size 0x4
    class GString FileName; // offset 0x18, size 0x4
};
enum FileFormatType {
    File_Unopened = 0,
    File_Unknown = 1,
    File_SWF = 2,
    File_GFX = 3,
    File_JPEG = 10,
    File_PNG = 11,
    File_GIF = 12,
    File_TGA = 13,
    File_DDS = 14,
    File_HDR = 15,
    File_BMP = 16,
    File_DIB = 17,
    File_PFM = 18,
    File_TIFF = 19,
    File_WAVE = 20,
    File_NextAvail = 21,
    File_Original = 65535,
};
// total size: 0x14
class GFxExporterInfo {
    // Members
    enum FileFormatType Format; // offset 0x0, size 0x4
    char * pPrefix; // offset 0x4, size 0x4
    char * pSWFName; // offset 0x8, size 0x4
    unsigned short Version; // offset 0xC, size 0x2
    unsigned int ExportFlags; // offset 0x10, size 0x4
};
// total size: 0x18
class GFxLog : public GFxState, public GFxLogBase {};
// total size: 0x4
class GFxLogBase : public GFxLogConstants {};
// total size: 0x1
class GFxLogConstants {};
// total size: 0x14
class GFxJpegSupportBase : public GFxState {};
// total size: 0x14
class GFxPNGSupportBase : public GFxState {};
// total size: 0x4
class GPtr {
    // Members
    class GImageInfo * pObject; // offset 0x0, size 0x4
};
// total size: 0x28
class GImageInfo : public GImageInfoBaseImpl {
    // Members
    class GPtr pImage; // offset 0x18, size 0x4
    unsigned int TargetWidth; // offset 0x1C, size 0x4
    unsigned int TargetHeight; // offset 0x20, size 0x4
    bool ReleaseImage; // offset 0x24, size 0x1
};
// total size: 0x18
class GImageInfoBaseImpl : public GImageInfoBase {
    // Members
    class GPtr pTexture; // offset 0x14, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GTexture * pObject; // offset 0x0, size 0x4
};
// total size: 0x8
class GTexture : public GNewOverrideBase {
    // Members
    class GAtomicInt RefCount; // offset 0x0, size 0x4
};
// total size: 0x1
class GNewOverrideBase {};
// total size: 0x4
class GPtr {
    // Members
    class GImage * pObject; // offset 0x0, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GImageInfoBase * pObject; // offset 0x0, size 0x4
};
// total size: 0x20
class TextureNode {
    // Members
    class Texture * texPtr; // offset 0x0, size 0x4
    class EntityHandle * texHandle; // offset 0x4, size 0x4
    unsigned long long uid; // offset 0x8, size 0x8
    char * pFilename; // offset 0x10, size 0x4
    int width; // offset 0x14, size 0x4
    int height; // offset 0x18, size 0x4
    bool loaded : 1; // offset 0x1C, size 0x1, bit offset 0
    int refCount : 31; // offset 0x1C, size 0x4, bit offset 1
};
// total size: 0x1C
class GTextureWii : public GTextureImplNode {};
// total size: 0x1C
class GTextureImplNode : public GTexture, public GRendererNode {
    // Members
    void * UserHandle; // offset 0x10, size 0x4
    bool HandlerArrayFlag; // offset 0x14, size 0x1
    class @class __anon; // offset 0x18, size 0x4
    class ChangeHandler * pHandler; // offset 0x18, size 0x4
    class GArray * pHandlerArray; // offset 0x18, size 0x4
};
// total size: 0x8
class GRendererNode {
    // Members
    class @class __anon; // offset 0x0, size 0x4
    class GRendererNode * pPrev; // offset 0x0, size 0x4
    class GRendererNode * pLast; // offset 0x0, size 0x4
    class @class __anon; // offset 0x4, size 0x4
    class GRendererNode * pNext; // offset 0x4, size 0x4
    class GRendererNode * pFirst; // offset 0x4, size 0x4
};
// total size: 0x4
class @class {
    // Members
    class GRendererNode * pPrev; // offset 0x0, size 0x4
    class GRendererNode * pLast; // offset 0x0, size 0x4
};
// total size: 0x4
class @class {
    // Members
    class GRendererNode * pNext; // offset 0x0, size 0x4
    class GRendererNode * pFirst; // offset 0x0, size 0x4
};
// total size: 0x4
class @class {
    // Members
    class ChangeHandler * pHandler; // offset 0x0, size 0x4
    class GArray * pHandlerArray; // offset 0x0, size 0x4
};
// total size: 0xC
class GArrayDataBase {
    // Members
    class ChangeHandler * * Data; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    class GArrayDefaultPolicy Policy; // offset 0x8, size 0x4
};
// total size: 0x10
class TranslateInfo {
    // Members
    wchar_t * pKey; // offset 0x0, size 0x4
    class GFxWStringBuffer * pResult; // offset 0x4, size 0x4
    char * pInstanceName; // offset 0x8, size 0x4
    unsigned char Flags; // offset 0xC, size 0x1
};
// total size: 0x10
class GFxWStringBuffer {
    // Members
    wchar_t * pText; // offset 0x0, size 0x4
    unsigned long Length; // offset 0x4, size 0x4
    class ReserveHeader Reserved; // offset 0x8, size 0x8
};
// total size: 0x8
class ReserveHeader {
    // Members
    wchar_t * pBuffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GSFMemoryFile * pObject; // offset 0x0, size 0x4
};
// total size: 0x28
class GSFMemoryFile : public GFile {
    // Members
    char * filename; // offset 0x10, size 0x4
    void * filemem; // offset 0x14, size 0x4
    int fileIndex; // offset 0x18, size 0x4
    int fileSize; // offset 0x1C, size 0x4
    int headerSize; // offset 0x20, size 0x4
    bool valid : 1; // offset 0x24, size 0x1, bit offset 0
    unsigned int pad : 31; // offset 0x24, size 0x4, bit offset 1
};
// total size: 0x10
class GFile : public GRefCountBase, public GFileConstants {};
// total size: 0x1
class GFileConstants {};
// total size: 0xC
class NodeType : public NodeHeader {
    // Members
    class GPtr value; // offset 0x8, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxFontCacheManager * pObject; // offset 0x0, size 0x4
};
// total size: 0x50
class GFxFontCacheManager : public GFxState {
    // Members
    class TextureConfig CacheTextureConfig; // offset 0x14, size 0x1C
    bool DynamicCacheEnabled; // offset 0x30, size 0x1
    float MaxRasterScale; // offset 0x34, size 0x4
    unsigned int SteadyCount; // offset 0x38, size 0x4
    unsigned int MaxVectorCacheSize; // offset 0x3C, size 0x4
    float FauxItalicAngle; // offset 0x40, size 0x4
    float FauxBoldRatio; // offset 0x44, size 0x4
    unsigned int NumLockedFrames; // offset 0x48, size 0x4
    class GFxFontCacheManagerImpl * pCache; // offset 0x4C, size 0x4
};
// total size: 0x0
class GFxFontCacheManagerImpl {};
// total size: 0x4
class GPtr {
    // Members
    class GFxMeshCacheManager * pObject; // offset 0x0, size 0x4
};
// total size: 0x20
class GFxMeshCacheManager : public GFxState {
    // Members
    class GMemoryHeap * pHeap; // offset 0x14, size 0x4
    class GFxRenderGen * pRenderGen; // offset 0x18, size 0x4
    class GFxMeshCache * pMeshCache; // offset 0x1C, size 0x4
};
// total size: 0x0
class GFxRenderGen {};
// total size: 0x0
class GFxMeshCache {};
// total size: 0x4
class GPtr {
    // Members
    class GFxFontLib * pObject; // offset 0x0, size 0x4
};
// total size: 0x18
class GFxFontLib : public GFxState {
    // Members
    class GFxFontLibImpl * pImpl; // offset 0x14, size 0x4
};
// total size: 0x0
class GFxFontLibImpl {};
// total size: 0x30
class MovieNode {
    // Members
    class ScaleformBlobEntity * curNGEntity; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    class GFxMovieDef * data; // offset 0x8, size 0x4
    class ScaleformAsset * sfAsset; // offset 0xC, size 0x4
    char assetFont; // offset 0x10, size 0x1
    bool loaded : 1; // offset 0x11, size 0x1, bit offset 0
    unsigned int pad : 31; // offset 0x14, size 0x4, bit offset 0
    class MovieLog log; // offset 0x18, size 0x18
};
// total size: 0x18
class MovieLog : public GFxLog {};
enum eSFPlayerState {
    eState_Stopped = 0,
    eState_Started = 1,
    eState_Unloading = 2,
};
enum eSFEventType {
    eSFEvent_SetTargetLoc = 0,
    eSFEvent_SetViewportNum = 1,
    eSFEvent_SetUserLoggedIn = 2,
    eSFEvent_SetStorageDeviceSelected = 3,
    eSFEvent_SetSaveFileExists = 4,
    eSFEvent_SetPlayerInControl = 5,
    eSFEvent_SendSavedValues = 6,
    eSFEvent_SavingStarted = 7,
    eSFEvent_SavingFinished = 8,
    eSFEvent_TextboxOn = 9,
    eSFEvent_TextboxOff = 10,
    eSFEvent_TextboxRetract = 11,
    eSFEvent_TextboxExpand = 12,
    eSFEvent_TextboxSetString = 13,
    eSFEvent_TextboxSetType = 14,
    eSFEvent_TextboxSetCounter = 15,
    eSFEvent_TextboxSetTotalCounter = 16,
    eSFEvent_TextboxSetMinutes = 17,
    eSFEvent_TextboxSetSeconds = 18,
    eSFEvent_TextboxSetAnimationType = 19,
    eSFEvent_InvokeASFunc = 20,
    eSFEvent_SetASVar = 21,
    eSFEvent_SetASArray = 22,
    eSFEvent_SetMultiplayerIRMouse = 23,
    eSFEvent_Initialize = 24,
    eSFEvent_SaveLoad_Wii_NAND02 = 25,
    eSFEvent_SaveLoad_Wii_NAND03 = 26,
    eSFEvent_SaveLoad_Wii_NAND05 = 27,
    eSFEvent_SaveLoad_Wii_NAND06 = 28,
    eSFEvent_SaveLoad_Wii_NAND07 = 29,
    eSFEvent_SaveLoad_Wii_NAND08 = 30,
    eSFEvent_SaveLoad_Wii_NAND11 = 31,
    eSFEvent_Nunchuk_Disconnected = 32,
    eSFEvent_Nunchuk_Connected = 33,
    eSFEvent_MovieFinished = 34,
    eSFEvent_MovieCancelled = 35,
    eSFEvent_MotionPlusDisconnected = 36,
    eSFEvent_CheckSaveSuccessful = 37,
    eSFEvent_CheckSaveFailed = 38,
};
// total size: 0x40
class SFEventNode {
    // Members
    enum eSFEventType e; // offset 0x0, size 0x4
    class GFxValue * arg; // offset 0x4, size 0x4
    unsigned int numArgs; // offset 0x8, size 0x4
    char str[52]; // offset 0xC, size 0x34
};
// total size: 0x4
class Iterator : public ConstIterator {};
// total size: 0x4
class ConstIterator {
    // Members
    class NodeHeader * node; // offset 0x0, size 0x4
};
// total size: 0x4
class ScaleformListener {};
enum Code {
    VoidSymbol = 0,
    A = 65,
    B = 66,
    C = 67,
    D = 68,
    E = 69,
    F = 70,
    G = 71,
    H = 72,
    I = 73,
    J = 74,
    K = 75,
    L = 76,
    M = 77,
    N = 78,
    O = 79,
    P = 80,
    Q = 81,
    R = 82,
    S = 83,
    T = 84,
    U = 85,
    V = 86,
    W = 87,
    X = 88,
    Y = 89,
    Z = 90,
    Num0 = 48,
    Num1 = 49,
    Num2 = 50,
    Num3 = 51,
    Num4 = 52,
    Num5 = 53,
    Num6 = 54,
    Num7 = 55,
    Num8 = 56,
    Num9 = 57,
    KP_0 = 96,
    KP_1 = 97,
    KP_2 = 98,
    KP_3 = 99,
    KP_4 = 100,
    KP_5 = 101,
    KP_6 = 102,
    KP_7 = 103,
    KP_8 = 104,
    KP_9 = 105,
    KP_Multiply = 106,
    KP_Add = 107,
    KP_Enter = 108,
    KP_Subtract = 109,
    KP_Decimal = 110,
    KP_Divide = 111,
    F1 = 112,
    F2 = 113,
    F3 = 114,
    F4 = 115,
    F5 = 116,
    F6 = 117,
    F7 = 118,
    F8 = 119,
    F9 = 120,
    F10 = 121,
    F11 = 122,
    F12 = 123,
    F13 = 124,
    F14 = 125,
    F15 = 126,
    Backspace = 8,
    Tab = 9,
    Clear = 12,
    Return = 13,
    Shift = 16,
    Control = 17,
    Alt = 18,
    Pause = 19,
    CapsLock = 20,
    Escape = 27,
    Space = 32,
    PageUp = 33,
    PageDown = 34,
    End = 35,
    Home = 36,
    Left = 37,
    Up = 38,
    Right = 39,
    Down = 40,
    Insert = 45,
    Delete = 46,
    Help = 47,
    NumLock = 144,
    ScrollLock = 145,
    Semicolon = 186,
    Equal = 187,
    Comma = 188,
    Minus = 189,
    Period = 190,
    Slash = 191,
    Bar = 192,
    BracketLeft = 219,
    Backslash = 220,
    BracketRight = 221,
    Quote = 222,
    OEM_AX = 225,
    OEM_102 = 226,
    ICO_HELP = 227,
    ICO_00 = 228,
    KeyCount = 229,
};
enum EventType {
    None = 0,
    MouseMove = 1,
    MouseDown = 2,
    MouseUp = 3,
    MouseWheel = 4,
    KeyDown = 5,
    KeyUp = 6,
    SceneResize = 7,
    SetFocus = 8,
    KillFocus = 9,
    DoShowMouse = 10,
    DoHideMouse = 11,
    DoSetMouseCursor = 12,
    CharEvent = 13,
    IMEEvent = 14,
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
enum EventType {
    Event_DataChange = 0,
    Event_DataLost = 1,
    Event_RendererReleased = 2,
};
// total size: 0x8
class GRendererEventHandlerImpl {
    // Members
    bool HandlerArrayFlag; // offset 0x0, size 0x1
    class @class __anon; // offset 0x4, size 0x4
    class EventHandler * pHandler; // offset 0x4, size 0x4
    class GArray * pHandlerArray; // offset 0x4, size 0x4
};
// total size: 0x4
class @class {
    // Members
    class EventHandler * pHandler; // offset 0x0, size 0x4
    class GArray * pHandlerArray; // offset 0x0, size 0x4
};
// total size: 0x4
class EventHandler {};
// total size: 0xC
class GArrayDataBase {
    // Members
    class EventHandler * * Data; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    class GArrayDefaultPolicy Policy; // offset 0x8, size 0x4
};
enum EventType {
    Event_EndFrame = 0,
    Event_RendererReleased = 1,
};
// total size: 0x10
class BlendModeDesc {
    // Members
    enum _GXBlendMode BlendOp; // offset 0x0, size 0x4
    enum _GXBlendFactor SrcFactor; // offset 0x4, size 0x4
    enum _GXBlendFactor DestFactor; // offset 0x8, size 0x4
    enum _GXLogicOp BlendLogicalOp; // offset 0xC, size 0x4
};
enum _GXBlendMode {
    GX_BM_NONE = 0,
    GX_BM_BLEND = 1,
    GX_BM_LOGIC = 2,
    GX_BM_SUBTRACT = 3,
    GX_MAX_BLENDMODE = 4,
};
enum _GXLogicOp {
    GX_LO_CLEAR = 0,
    GX_LO_AND = 1,
    GX_LO_REVAND = 2,
    GX_LO_COPY = 3,
    GX_LO_INVAND = 4,
    GX_LO_NOOP = 5,
    GX_LO_XOR = 6,
    GX_LO_OR = 7,
    GX_LO_NOR = 8,
    GX_LO_EQUIV = 9,
    GX_LO_INV = 10,
    GX_LO_REVOR = 11,
    GX_LO_INVCOPY = 12,
    GX_LO_INVOR = 13,
    GX_LO_NAND = 14,
    GX_LO_SET = 15,
};
// total size: 0x84
class GTextureWiiImpl : public GTextureWii {
    // Members
    class GRendererWiiImpl * pRenderer; // offset 0x1C, size 0x4
    int Width; // offset 0x20, size 0x4
    int Height; // offset 0x24, size 0x4
    void * pTexData; // offset 0x28, size 0x4
    void * pAlphaTexData; // offset 0x2C, size 0x4
    int TexWidth; // offset 0x30, size 0x4
    int TexHeight; // offset 0x34, size 0x4
    int TexSize; // offset 0x38, size 0x4
    class _GXTexObj Tex; // offset 0x3C, size 0x20
    class _GXTexObj AlphaTex; // offset 0x5C, size 0x20
    unsigned long LastUse; // offset 0x7C, size 0x4
    bool IsAlpha; // offset 0x80, size 0x1
    bool IsTransparent; // offset 0x81, size 0x1
};
// total size: 0x2EC
class GRendererWiiImpl : public GRendererWii {
    // Members
    bool EnableAntialias; // offset 0x10, size 0x1
    bool ModeSet; // offset 0x11, size 0x1
    int RenderMode; // offset 0x14, size 0x4
    class GViewport Viewport; // offset 0x18, size 0x34
    class GRendererNode Textures; // offset 0x4C, size 0x8
    class GLock TexturesLock; // offset 0x54, size 0x1
    class GMatrix2D UserMatrix; // offset 0x58, size 0x18
    class GMatrix2D CurrentMatrix; // offset 0x70, size 0x18
    class Cxform CurrentCxform; // offset 0x88, size 0x20
    class GMatrix2D ViewportMatrix; // offset 0xA8, size 0x18
    class Stats RenderStats; // offset 0xC0, size 0x10
    class GMemoryStat TextureVMem; // offset 0xD0, size 0xC
    class GMemoryStat BufferVMem; // offset 0xDC, size 0xC
    class GCounterStat TextureUploadCnt; // offset 0xE8, size 0x4
    class GCounterStat TextureUpdateCnt; // offset 0xEC, size 0x4
    class GCounterStat DPLineCnt; // offset 0xF0, size 0x4
    class GCounterStat DPTriangleCnt; // offset 0xF4, size 0x4
    class GCounterStat LineCnt; // offset 0xF8, size 0x4
    class GCounterStat TriangleCnt; // offset 0xFC, size 0x4
    class GCounterStat MaskCnt; // offset 0x100, size 0x4
    void * pIndexData; // offset 0x104, size 0x4
    void * pVertexData; // offset 0x108, size 0x4
    int IndexBufferSize; // offset 0x10C, size 0x4
    int VertexBufferSize; // offset 0x110, size 0x4
    enum VertexFormat VertexFmt; // offset 0x114, size 0x4
    int IndexFmt; // offset 0x118, size 0x4
    int StencilCounter; // offset 0x11C, size 0x4
    int DrawingMasks; // offset 0x120, size 0x4
    enum BlendType BlendMode; // offset 0x124, size 0x4
    class GArrayLH BlendModeStack; // offset 0x128, size 0xC
    class CacheNode CacheList; // offset 0x134, size 0x1
    class _GXRenderModeObj * pRmode; // offset 0x138, size 0x4
    class GRenderSyncWii * pRenderSync; // offset 0x13C, size 0x4
    class GRendererEventHandlerImpl Handlers; // offset 0x140, size 0x8
    class GFxFillStyle CurrentStyles[3]; // offset 0x148, size 0x1A4
};
// total size: 0x20
class Cxform {
    // Members
    float M_[4][2]; // offset 0x0, size 0x20
};
// total size: 0x10
class Stats {
    // Members
    unsigned int Triangles; // offset 0x0, size 0x4
    unsigned int Lines; // offset 0x4, size 0x4
    unsigned int Primitives; // offset 0x8, size 0x4
    unsigned int Masks; // offset 0xC, size 0x4
};
// total size: 0xC
class GMemoryStat : public GStat {
    // Members
    unsigned long Allocated; // offset 0x0, size 0x4
    unsigned long Used; // offset 0x4, size 0x4
    unsigned long AllocCount; // offset 0x8, size 0x4
};
// total size: 0x1
class GStat {};
// total size: 0x4
class GCounterStat : public GStat {
    // Members
    unsigned long Count; // offset 0x0, size 0x4
};
enum VertexFormat {
    Vertex_None = 0,
    Vertex_XY16i = 1,
    Vertex_XY32f = 2,
    Vertex_XY16iC32 = 3,
    Vertex_XY16iCF32 = 4,
    Vertex_XYUVUV32fCF32 = 5,
    Vertex_XY32fCF32 = 6,
    Vertex_XYUV32fCF32 = 7,
};
enum BlendType {
    Blend_None = 0,
    Blend_Normal = 1,
    Blend_Layer = 2,
    Blend_Multiply = 3,
    Blend_Screen = 4,
    Blend_Lighten = 5,
    Blend_Darken = 6,
    Blend_Difference = 7,
    Blend_Add = 8,
    Blend_Subtract = 9,
    Blend_Invert = 10,
    Blend_Alpha = 11,
    Blend_Erase = 12,
    Blend_Overlay = 13,
    Blend_HardLight = 14,
};
// total size: 0xC
class GArrayLH : public GArrayBase {};
// total size: 0xC
class GArrayDataBase {
    // Members
    enum BlendType * Data; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    class GArrayConstPolicy Policy; // offset 0x8, size 0x4
};
// total size: 0x4
class GArrayConstPolicy {
    // Members
    unsigned long Capacity; // offset 0x0, size 0x4
};
// total size: 0x1
class CacheNode : public GNewOverrideBase {};
// total size: 0x4
class GRenderSyncWii {};
// total size: 0x8C
class GFxFillStyle {
    // Members
    enum FillMode Mode; // offset 0x0, size 0x4
    enum GouraudFillType GouraudType; // offset 0x4, size 0x4
    class GColor Color; // offset 0x8, size 0x4
    class FillTexture Fill; // offset 0xC, size 0x24
    class FillTexture Fill2; // offset 0x30, size 0x24
    class Cxform BitmapColorTransform; // offset 0x54, size 0x20
    class GMatrix2D BitmapMatrix; // offset 0x74, size 0x18
};
enum FillMode {
    FM_None = 0,
    FM_Color = 1,
    FM_Bitmap = 2,
    FM_Gouraud = 3,
    FM_BitmapText = 4,
};
enum GouraudFillType {
    GFill_Color = 0,
    GFill_1Texture = 1,
    GFill_1TextureColor = 2,
    GFill_2Texture = 3,
    GFill_2TextureColor = 4,
    GFill_3Texture = 5,
};
// total size: 0x24
class FillTexture {
    // Members
    class GTexture * pTexture; // offset 0x0, size 0x4
    class GMatrix2D TextureMatrix; // offset 0x4, size 0x18
    enum BitmapWrapMode WrapMode; // offset 0x1C, size 0x4
    enum BitmapSampleMode SampleMode; // offset 0x20, size 0x4
};
enum BitmapWrapMode {
    Wrap_Repeat = 0,
    Wrap_Clamp = 1,
};
enum BitmapSampleMode {
    Sample_Point = 0,
    Sample_Linear = 1,
};
enum _GXTexWrapMode {
    GX_CLAMP = 0,
    GX_REPEAT = 1,
    GX_MIRROR = 2,
    GX_MAX_TEXWRAPMODE = 3,
};
// total size: 0x18
class UpdateRect {
    // Members
    class GPoint dest; // offset 0x0, size 0x8
    class GRect src; // offset 0x8, size 0x10
};
// total size: 0x8
class GPoint {
    // Members
    int x; // offset 0x0, size 0x4
    int y; // offset 0x4, size 0x4
};
// total size: 0x10
class GRect {
    // Members
    int Left; // offset 0x0, size 0x4
    int Top; // offset 0x4, size 0x4
    int Right; // offset 0x8, size 0x4
    int Bottom; // offset 0xC, size 0x4
};
// total size: 0x10
class MapRect {
    // Members
    unsigned int width; // offset 0x0, size 0x4
    unsigned int height; // offset 0x4, size 0x4
    unsigned char * pData; // offset 0x8, size 0x4
    unsigned int pitch; // offset 0xC, size 0x4
};
// total size: 0x8
class GRenderSyncWii_DrawSync : public GRenderSyncWii {
    // Members
    unsigned long fence; // offset 0x4, size 0x4
};
// total size: 0x98
class CoreTaskingModule : public Module {};
// total size: 0x8
class CoreJob : public Job {
    // Members
    void (* processCB)(class CoreJobProcessor * proc, class CoreQueueRef * qr, class CoreJob * job); // offset 0x0, size 0x4
    enum JobType type; // offset 0x4, size 0x4
};
// total size: 0x1
class Job {};
// total size: 0xC0
class CoreJobProcessor : public JobProcessor {
    // Members
    class PoolArray slots; // offset 0x4, size 0xC
    class CriticalSection jobAccessCS; // offset 0x10, size 0x20
    class SyncEvent addJobEvent; // offset 0x30, size 0x24
    class SyncEvent completeJobEvent; // offset 0x54, size 0x24
    int nextQueueIndex; // offset 0x78, size 0x4
    class PriorityLevel levels[4]; // offset 0x7C, size 0x40
    bool done; // offset 0xBC, size 0x1
};
// total size: 0x4
class JobProcessor {};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class Slot * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x4C
class Slot : public Runnable {
    // Members
    class CoreJobProcessor * owner; // offset 0x4, size 0x4
    int slotIndex; // offset 0x8, size 0x4
    class Thread thread; // offset 0xC, size 0x40
};
// total size: 0x10
class PriorityLevel {
    // Members
    class PoolArray queues; // offset 0x0, size 0xC
    int nextQueueIndex; // offset 0xC, size 0x4
};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class CoreQueueRef * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x28
class CoreQueueRef {
    // Members
    class CoreJobQueue * queue; // offset 0x0, size 0x4
    int frequency; // offset 0x4, size 0x4
    int iter; // offset 0x8, size 0x4
    unsigned int jobNumber; // offset 0xC, size 0x4
    unsigned int completeNumber; // offset 0x10, size 0x4
    class CoreJobPendingRef * pendingJobs; // offset 0x14, size 0x4
    int pendingJobsSize; // offset 0x18, size 0x4
    class CoreJobBarrier * barrier; // offset 0x1C, size 0x4
    class CoreJobCompleteFence * completeFenceHead; // offset 0x20, size 0x4
    class CoreJobCompleteFence * completeFenceTail; // offset 0x24, size 0x4
};
// total size: 0x14
class CoreJobQueue : public JobQueue {
    // Members
    class CoreJobProcessor * owner; // offset 0x0, size 0x4
    class CircularQueue queue; // offset 0x4, size 0x10
};
// total size: 0x1
class JobQueue {};
// total size: 0x10
class CircularQueue {
    // Members
    unsigned int start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    unsigned int mask; // offset 0x8, size 0x4
    class CoreJob * * pool; // offset 0xC, size 0x4
};
// total size: 0x8
class CoreJobPendingRef {
    // Members
    unsigned int number; // offset 0x0, size 0x4
    class CoreJob * job; // offset 0x4, size 0x4
};
// total size: 0x8
class CoreJobBarrier : public CoreJob {};
// total size: 0x3C
class CoreJobCompleteFence : public CoreJob {
    // Members
    bool passed; // offset 0x8, size 0x1
    class SyncEvent event; // offset 0xC, size 0x24
    class CoreJobCompleteFence * prev; // offset 0x30, size 0x4
    class CoreJobCompleteFence * next; // offset 0x34, size 0x4
    unsigned int completeNumber; // offset 0x38, size 0x4
};
enum JobType {
    JOB_TYPE_EXECUTABLE = 0,
    JOB_TYPE_START_FENCE = 1,
    JOB_TYPE_COMPLETE_FENCE = 2,
    JOB_TYPE_COMPLETE_BARRIER = 3,
    JOB_TYPE_SIGNAL_BARRIER = 4,
    MAX_JOB_TYPE = 5,
};
enum ThreadPriority {
    TP_INVALID = 4294967295,
    TP_IDLE = 0,
    TP_LOWEST = 1,
    TP_BELOW_NORMAL = 2,
    TP_NORMAL = 3,
    TP_ABOVE_NORMAL = 4,
    TP_HIGHEST = 5,
    TP_REALTIME = 6,
    MAX_TP = 7,
};
// total size: 0x98
class GameWindowModule : public Module {};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class Module * * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x20
class EventBinding {
    // Members
    class PoolArray modules; // offset 0x0, size 0xC
    class PoolArray moduleHookLists; // offset 0xC, size 0xC
    class NodeList tailHookList; // offset 0x18, size 0x8
};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class NodeList * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x8
class NodeList : public NodeListBase {};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class ModuleReference * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x1C
class ModuleReference {
    // Members
    class Module * id; // offset 0x0, size 0x4
    int index; // offset 0x4, size 0x4
    class EventSet events; // offset 0x8, size 0x10
    int relationIndex; // offset 0x18, size 0x4
};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class ModuleRelationList * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x8
class ModuleRelationList {
    // Members
    int index; // offset 0x0, size 0x4
    class ModuleRelationNode * relations; // offset 0x4, size 0x4
};
// total size: 0x8
class ModuleRelationNode {
    // Members
    int index; // offset 0x0, size 0x4
    class ModuleRelationNode * next; // offset 0x4, size 0x4
};
// total size: 0x14
class StackPoolAllocator : public PoolAllocator {};
// total size: 0x14
class PoolAllocator : public PoolAllocatorBase {};
// total size: 0xC
class BlockHeader {
    // Members
    int dataOffset; // offset 0x0, size 0x4
    int sizeSender; // offset 0x4, size 0x4
    int sizeActual; // offset 0x8, size 0x4
};
// total size: 0x98
class HomeMenuModule : public Module {
    // Members
    bool isAllowed; // offset 0x95, size 0x1
    bool forceActivate; // offset 0x96, size 0x1
    bool shouldPreserveMemory; // offset 0x97, size 0x1
};
// total size: 0x40
class HBMDataInfo {
    // Members
    void * layoutBuf; // offset 0x0, size 0x4
    void * spkSeBuf; // offset 0x4, size 0x4
    void * msgBuf; // offset 0x8, size 0x4
    void * configBuf; // offset 0xC, size 0x4
    void * mem; // offset 0x10, size 0x4
    int (* sound_callback)(int evt, int num); // offset 0x14, size 0x4
    int backFlag; // offset 0x18, size 0x4
    int region; // offset 0x1C, size 0x4
    int cursor; // offset 0x20, size 0x4
    int messageFlag; // offset 0x24, size 0x4
    unsigned long configBufSize; // offset 0x28, size 0x4
    unsigned long memSize; // offset 0x2C, size 0x4
    float frameDelta; // offset 0x30, size 0x4
    class Vec2 adjust; // offset 0x34, size 0x8
    class MEMAllocator * pAllocator; // offset 0x3C, size 0x4
};
// total size: 0x10
class MEMAllocator {
    // Members
    class MEMAllocatorFunc * pFunc; // offset 0x0, size 0x4
    void * pHeap; // offset 0x4, size 0x4
    unsigned long heapParam1; // offset 0x8, size 0x4
    unsigned long heapParam2; // offset 0xC, size 0x4
};
// total size: 0x8
class MEMAllocatorFunc {
    // Members
    void * (* pfAlloc)(class MEMAllocator * pAllocator, unsigned long size); // offset 0x0, size 0x4
    void (* pfFree)(class MEMAllocator * pAllocator, void * memBlock); // offset 0x4, size 0x4
};
// total size: 0x40
class HBMControllerData {
    // Members
    class HBMKPadData wiiCon[4]; // offset 0x0, size 0x40
};
// total size: 0x10
class HBMKPadData {
    // Members
    class KPADStatus * kpad; // offset 0x0, size 0x4
    class Vec2 pos; // offset 0x4, size 0x8
    unsigned long use_devtype; // offset 0xC, size 0x4
};
// total size: 0x98
class TaskingModule : public Module {};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class JobProcessor * * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x98
class TimeModule : public Module {};
// total size: 0xB4
class TestSuite : public Module {
    // Members
    class PoolList testList; // offset 0x98, size 0x1C
};
// total size: 0x1C
class PoolList : public PoolListBase {};
enum WiiDVDError {
    WiiDVD_Ready = 0,
    WiiDVD_NoDisk = 1,
    WiiDVD_WrongDisk = 2,
    WiiDVD_RetryError = 3,
    WiiDVD_Busy = 4,
};
// total size: 0xC
class WiiDVDErrorRunnable : public Runnable {
    // Members
    class DVDFileInfo * fileInfo; // offset 0x4, size 0x4
    enum WiiDVDError dvdStatus; // offset 0x8, size 0x4
};
// total size: 0x28C
class TRCModule : public Module {
    // Members
    class TRCPadManager trcPadManager; // offset 0x98, size 0x1E0
    class SaveLoad saveLoad; // offset 0x278, size 0x10
    class GameInterface * gameInterface; // offset 0x288, size 0x4
};
// total size: 0x1E0
class TRCPadManager {
    // Members
    char padEnabled; // offset 0x0, size 0x1
    char padTrcEnforced; // offset 0x1, size 0x1
    char padRemoved; // offset 0x2, size 0x1
    char escapable; // offset 0x3, size 0x1
    char lockToHolding; // offset 0x4, size 0x1
    char noCheck; // offset 0x5, size 0x1
    enum AccessoryType holdingType; // offset 0x8, size 0x4
    int lastAccessoryEnabled[4]; // offset 0xC, size 0x10
    int accessoryEnabled[4]; // offset 0x1C, size 0x10
    int accessoryConfirming[4]; // offset 0x2C, size 0x10
    char accessoryRemoved; // offset 0x3C, size 0x1
    class TRCMsgBox padDisconnectMsgBox[4]; // offset 0x40, size 0xD0
    class TRCMsgBox accessoryDisconnectMsgBox[4]; // offset 0x110, size 0xD0
};
enum AccessoryType {
    AccessoryType_Nunchuk = 1,
    AccessoryType_Classic = 2,
    AccessoryType_GameCube = 4,
};
// total size: 0x10
class SaveLoad : public SaveLoadBase {
    // Members
    int lastSlotIdx; // offset 0xC, size 0x4
};
// total size: 0xC
class SaveLoadBase {
    // Members
    int userCancelled; // offset 0x0, size 0x4
    bool lastRequestSucceeded; // offset 0x4, size 0x1
    bool saveEnabled; // offset 0x5, size 0x1
};
// total size: 0x48
class MsgBoxManager {
    // Members
    class TRCMsgBox * msgBoxQueue[16]; // offset 0x0, size 0x40
    int queueSize; // offset 0x40, size 0x4
    class TRCMsgBox * curMsgBox; // offset 0x44, size 0x4
};
// total size: 0xF0A0
class NANDBanner {
    // Members
    unsigned long signature; // offset 0x0, size 0x4
    unsigned long flag; // offset 0x4, size 0x4
    unsigned short iconSpeed; // offset 0x8, size 0x2
    unsigned char reserved[22]; // offset 0xA, size 0x16
    unsigned short comment[2][32]; // offset 0x20, size 0x80
    unsigned char bannerTexture[24576]; // offset 0xA0, size 0x6000
    unsigned char iconTexture[8][4608]; // offset 0x60A0, size 0x9000
};
// total size: 0x34
class FontAssetBlobEntity : public BlobEntity {
    // Members
    class Glyph * glyph; // offset 0x18, size 0x4
    class GlyphUV * glyphUV; // offset 0x1C, size 0x4
    unsigned int glyphSize; // offset 0x20, size 0x4
    unsigned short * glyphMap; // offset 0x24, size 0x4
    int glyphMapSize; // offset 0x28, size 0x4
    float fontHeight; // offset 0x2C, size 0x4
    float maxAscent; // offset 0x30, size 0x4
};
// total size: 0x10
class GlyphUV {
    // Members
    float u0; // offset 0x0, size 0x4
    float v0; // offset 0x4, size 0x4
    float u1; // offset 0x8, size 0x4
    float v1; // offset 0xC, size 0x4
};
// total size: 0x10
class FontAssetAssetHeader {
    // Members
    unsigned short glyphMapCount; // offset 0x0, size 0x2
    unsigned short glyphCount; // offset 0x2, size 0x2
    unsigned int glyphArrayOffset; // offset 0x4, size 0x4
    unsigned short fontHeight; // offset 0x8, size 0x2
    unsigned short maxGlyphAscent; // offset 0xA, size 0x2
    unsigned short pad[2]; // offset 0xC, size 0x4
};
// total size: 0x34
class Batch {
    // Members
    class Rect clipRect; // offset 0x0, size 0x10
    class ColorF color; // offset 0x10, size 0x10
    unsigned char brightness; // offset 0x20, size 0x1
    unsigned char pad[3]; // offset 0x21, size 0x3
    float z; // offset 0x24, size 0x4
    int charTotal; // offset 0x28, size 0x4
    class Line * lines; // offset 0x2C, size 0x4
    int linesSize; // offset 0x30, size 0x4
};
// total size: 0x10
class Rect {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
// total size: 0x20
class Line {
    // Members
    char * first; // offset 0x0, size 0x4
    char * last; // offset 0x4, size 0x4
    float x; // offset 0x8, size 0x4
    float y; // offset 0xC, size 0x4
    float xScale; // offset 0x10, size 0x4
    float yScale; // offset 0x14, size 0x4
    float xSpace; // offset 0x18, size 0x4
    float slant; // offset 0x1C, size 0x4
};
// total size: 0xBC
class FontModule : public Module {
    // Members
    unsigned short paramColorMul; // offset 0x96, size 0x2
    unsigned short paramSampDiffuse; // offset 0x98, size 0x2
    class RenderMode renderMode; // offset 0x9C, size 0x1C
    class EntityHandle * immediatePrototypeHandle; // offset 0xB8, size 0x4
};
// total size: 0x2C
class TextureFont : public Font {};
// total size: 0x10
class FontAsset {
    // Members
    unsigned long long assetWidget; // offset 0x0, size 0x8
    unsigned long long assetTexture; // offset 0x8, size 0x8
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
// total size: 0x1C
class StringsAssetBlobEntity : public BlobEntity {
    // Members
    class StringsBlobAsset * asset; // offset 0x18, size 0x4
};
// total size: 0x1
class StringsBlobAsset : public Asset {
    // Members
    unsigned char data[1]; // offset 0x0, size 0x1
};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class RelativeNode * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x8
class RelativeNode {
    // Members
    int depth; // offset 0x0, size 0x4
    int index; // offset 0x4, size 0x4
};
// total size: 0x98
class UtilModule : public Module {};
// total size: 0x98
class CinematicModule : public Module {};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class ICinematicElement * * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x98
class EntityModule : public Module {};
// total size: 0x9C
class EntityMgrModule : public Module {
    // Members
    class EntityManager * entityMgr; // offset 0x98, size 0x4
};
// total size: 0x50
class NodeType : public NodeHeader {
    // Members
    class EntityHandleBase value; // offset 0x8, size 0x48
};
// total size: 0x8
class EmbeddedTreeAVL {
    // Members
    class CmpHolder cmp; // offset 0x0, size 0x4
    class EntityHandleBase * m_root; // offset 0x4, size 0x4
};
// total size: 0x4
class CmpHolder : public EntityHandleCmp {
    // Members
    unsigned long size; // offset 0x0, size 0x4
};
// total size: 0xE8
class Iterator {
    // Members
    class EmbeddedTreeAVL * owner; // offset 0x0, size 0x4
    class FixedKeyArray itpath; // offset 0x4, size 0xE4
};
// total size: 0xE4
class FixedKeyArray {
    // Members
    int count; // offset 0x0, size 0x4
    class EntityHandleBase * data[56]; // offset 0x4, size 0xE0
};
// total size: 0x98
class WorldModule : public Module {};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class EntityHandleBase * * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x98
class GlobalsModule : public Module {};
// total size: 0x9C4
class RandomTwist {
    // Members
    class SeedType seed; // offset 0x0, size 0x9C4
};
// total size: 0x9C4
class SeedType {
    // Members
    int index; // offset 0x0, size 0x4
    unsigned int v[624]; // offset 0x4, size 0x9C0
};
enum DisplayStatus {
    DisplayStatus_Ok = 0,
    DisplayStatus_NoModeSet = 1,
    DisplayStatus_Unavailable = 2,
    DisplayStatus_NeedsReset = 3,
};
// total size: 0x20C
class GStatBag {
    // Members
    unsigned char * pMem; // offset 0x0, size 0x4
    unsigned int MemSize; // offset 0x4, size 0x4
    unsigned long MemAllocOffset; // offset 0x8, size 0x4
    unsigned short IdPageTable[256]; // offset 0xC, size 0x200
};
enum SubmitMaskMode {
    Mask_Clear = 0,
    Mask_Increment = 1,
    Mask_Decrement = 2,
};
// total size: 0x24
class BitmapDesc {
    // Members
    class GRect Coords; // offset 0x0, size 0x10
    class GRect TextureCoords; // offset 0x10, size 0x10
    class GColor Color; // offset 0x20, size 0x4
};
// total size: 0x10
class GRect {
    // Members
    float Left; // offset 0x0, size 0x4
    float Top; // offset 0x4, size 0x4
    float Right; // offset 0x8, size 0x4
    float Bottom; // offset 0xC, size 0x4
};
enum _GXTevColorArg {
    GX_CC_CPREV = 0,
    GX_CC_APREV = 1,
    GX_CC_C0 = 2,
    GX_CC_A0 = 3,
    GX_CC_C1 = 4,
    GX_CC_A1 = 5,
    GX_CC_C2 = 6,
    GX_CC_A2 = 7,
    GX_CC_TEXC = 8,
    GX_CC_TEXA = 9,
    GX_CC_RASC = 10,
    GX_CC_RASA = 11,
    GX_CC_ONE = 12,
    GX_CC_HALF = 13,
    GX_CC_KONST = 14,
    GX_CC_ZERO = 15,
};
enum _GXTevAlphaArg {
    GX_CA_APREV = 0,
    GX_CA_A0 = 1,
    GX_CA_A1 = 2,
    GX_CA_A2 = 3,
    GX_CA_TEXA = 4,
    GX_CA_RASA = 5,
    GX_CA_KONST = 6,
    GX_CA_ZERO = 7,
};
enum _GXVtxFmt {
    GX_VTXFMT0 = 0,
    GX_VTXFMT1 = 1,
    GX_VTXFMT2 = 2,
    GX_VTXFMT3 = 3,
    GX_VTXFMT4 = 4,
    GX_VTXFMT5 = 5,
    GX_VTXFMT6 = 6,
    GX_VTXFMT7 = 7,
    GX_MAX_VTXFMT = 8,
};
// total size: 0x3C
class GTextureMemoryFile : public GSFMemoryFile {
    // Members
    unsigned char headerInfo[18]; // offset 0x28, size 0x12
};
