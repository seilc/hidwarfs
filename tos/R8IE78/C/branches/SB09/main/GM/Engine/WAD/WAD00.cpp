/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800067D0 -> 0x80051F78
*/
extern class __locale _current_locale; // size: 0x48
extern float hkConvexShapeDefaultRadius; // size: 0x4
extern struct {} __vt__21hkpAllRayHitCollector; // size: 0x10
extern struct {} __vt__22hkpAllCdPointCollector; // size: 0x14
extern float hkInfinity; // size: 0x4
extern class hkVector4 hkVector4Zero; // size: 0x10
extern class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance; // size: 0x4
// total size: 0x4
class Formatter {};
// total size: 0x4
class QuaternionFormatter : public Formatter {};
// total size: 0x30
class Matrix43 : public Matrix33 {};
// total size: 0x30
class Matrix33 {
    // Members
    class Vector4 v[3]; // offset 0x0, size 0x30
};
// total size: 0x10
class Vector4 {
    // Members
    class DataType data; // offset 0x0, size 0x10
};
// total size: 0x10
class DataType {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
// total size: 0x14
class LanguageTableEntry {
    // Members
    char * primaryLanguage; // offset 0x0, size 0x4
    char * subLanguageID; // offset 0x4, size 0x4
    char * language; // offset 0x8, size 0x4
    short primaryLangID; // offset 0xC, size 0x2
    short regionID; // offset 0xE, size 0x2
    enum LanguageID languageID; // offset 0x10, size 0x4
};
enum LanguageID {
    Neutral = 0,
    Arabic = 1,
    ArabicSaudiArabia = 1025,
    Chinese = 4,
    ChineseChina = 2052,
    ChineseHongKong = 3076,
    ChineseTaiwan = 1028,
    ChineseSingapore = 4100,
    Czech = 5,
    CzechRepublic = 1029,
    Danish = 6,
    DanishDenmark = 1030,
    Dutch = 19,
    DutchNetherlands = 1043,
    English = 9,
    EnglishUS = 1033,
    EnglishUK = 2057,
    EnglishAustralia = 3081,
    EnglishCanada = 4105,
    Finnish = 11,
    FinnishFinland = 1035,
    French = 12,
    FrenchFrance = 1036,
    German = 7,
    GermanGermany = 1031,
    GermanSwiss = 2055,
    Greek = 8,
    GreekGreece = 1032,
    Italian = 16,
    ItalianItaly = 1040,
    Japanese = 17,
    JapaneseJapan = 1041,
    Korean = 18,
    KoreanKorea = 1042,
    Norwegian = 20,
    NorwegianNynorsk = 2068,
    Polish = 21,
    PolishPoland = 1045,
    Portuguese = 22,
    PortuguesePortugal = 2070,
    PortugueseBrazilian = 1046,
    Russian = 25,
    RussianFederation = 1049,
    Slovak = 27,
    SlovakSlovak = 1051,
    Spanish = 10,
    SpanishMexican = 2058,
    SpanishSpain = 3082,
    Swedish = 29,
    SwedishSweden = 1053,
    Ukrainian = 34,
    UkrainianUkraine = 1058,
};
// total size: 0x10
class basic_rect {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
// total size: 0xC
class hkPointerMap {
    // Members
    class hkPointerMapBase m_map; // offset 0x0, size 0xC
};
// total size: 0xC
class hkPointerMapBase {
    // Members
    class Pair * m_elem; // offset 0x0, size 0x4
    int m_numElems; // offset 0x4, size 0x4
    int m_hashMod; // offset 0x8, size 0x4
};
// total size: 0x8
class Pair {
    // Members
    unsigned long key; // offset 0x0, size 0x4
    unsigned long val; // offset 0x4, size 0x4
};
// total size: 0x20
class xHavokPhysicsObject {
    // Members
    enum PhysicsObjectType physicsObjectType; // offset 0x0, size 0x4
    class CollisionMeshBlobEntity * packedPhysicsData; // offset 0x4, size 0x4
    class hkpPhysicsSystem * physicsSystem; // offset 0x8, size 0x4
    class hkVector4 creationScale; // offset 0x10, size 0x10
};
enum PhysicsObjectType {
    NONE = 0,
    SHAPE = 1,
    MULTI_SHAPE = 2,
    SYSTEM = 3,
};
// total size: 0x4C
class CollisionMeshBlobEntity : public BlobEntity {
    // Members
    class dxTriMeshData triMesh; // offset 0x18, size 0x1C
    class hkRootLevelContainer * physicsDataContainer; // offset 0x34, size 0x4
    int collFilter; // offset 0x38, size 0x4
    unsigned char * memBlock; // offset 0x3C, size 0x4
    int numSurfaces; // offset 0x40, size 0x4
    class EntityHandleBase * * surfaceTable; // offset 0x44, size 0x4
    class Owner * owners; // offset 0x48, size 0x4
};
// total size: 0x18
class BlobEntity : public Entity {};
// total size: 0x18
class Entity {
    // Members
    class EmbeddedListNode ogSceneNode; // offset 0x4, size 0x8
    int ogUpdateIdx; // offset 0xC, size 0x4
    unsigned int typeID; // offset 0x10, size 0x4
    class EntityHandleBase * handle; // offset 0x14, size 0x4
};
// total size: 0x8
class EmbeddedListNode {
    // Members
    class EmbeddedListNode * next; // offset 0x0, size 0x4
    class EmbeddedListNode * prev; // offset 0x4, size 0x4
};
// total size: 0x48
class EntityHandleBase : public Blobloid {
    // Members
    class EmbeddedTreeNode byUidNode; // offset 0x1C, size 0x8
    class EmbeddedTreeNode byTypeNode; // offset 0x24, size 0x8
    class EmbeddedTreeNode byDomainNode; // offset 0x2C, size 0x8
    unsigned int typeID; // offset 0x34, size 0x4
    class Entity * entity; // offset 0x38, size 0x4
    class ReferenceCounter rc; // offset 0x3C, size 0x4
    short updateFlags; // offset 0x40, size 0x2
    signed char sceneActivateRef; // offset 0x42, size 0x1
    signed char pad; // offset 0x43, size 0x1
};
// total size: 0x20
class Blobloid {
    // Members
    unsigned long long blobUID; // offset 0x0, size 0x8
    int wmlTypeID; // offset 0x8, size 0x4
    int blobSize; // offset 0xC, size 0x4
    unsigned char subType; // offset 0x10, size 0x1
    unsigned char blobFlags; // offset 0x11, size 0x1
    unsigned short langID; // offset 0x12, size 0x2
    class @class __anon; // offset 0x14, size 0x4
    class MemHandle * memHandle; // offset 0x14, size 0x4
    class BlobCustomAlloc * customAlloc; // offset 0x14, size 0x4
    unsigned short domRefMaskList; // offset 0x18, size 0x2
    unsigned short memOwnerRefMask; // offset 0x1A, size 0x2
};
// total size: 0x4
class @class {
    // Members
    class MemHandle * memHandle; // offset 0x0, size 0x4
    class BlobCustomAlloc * customAlloc; // offset 0x0, size 0x4
};
// total size: 0x8
class MemHandle {
    // Members
    unsigned char lockFlags; // offset 0x0, size 0x1
    unsigned char memCBidx; // offset 0x1, size 0x1
    unsigned short mustAlign; // offset 0x2, size 0x2
    class AllocEntry * entry; // offset 0x4, size 0x4
};
// total size: 0x18
class AllocEntry : public DLNode {
    // Members
    signed char status; // offset 0x8, size 0x1
    signed char isPrimary; // offset 0x9, size 0x1
    signed char volIndex; // offset 0xA, size 0x1
    signed char unusedPad; // offset 0xB, size 0x1
    char * baseAddr; // offset 0xC, size 0x4
    int actualAmt; // offset 0x10, size 0x4
    class MemHandle * memHandle; // offset 0x14, size 0x4
};
// total size: 0x8
class DLNode {
    // Members
    class AllocEntry * next; // offset 0x0, size 0x4
    class AllocEntry * prev; // offset 0x4, size 0x4
};
// total size: 0x4
class BlobCustomAlloc {};
// total size: 0x8
class EmbeddedTreeNode {
    // Members
    void * left; // offset 0x0, size 0x4
    long right_color_bal; // offset 0x4, size 0x4
};
// total size: 0x4
class ReferenceCounter {
    // Members
    int count; // offset 0x0, size 0x4
};
// total size: 0x1C
class dxTriMeshData {
    // Members
    float AABBCenter[3]; // offset 0x0, size 0xC
    float AABBExtents[3]; // offset 0xC, size 0xC
    class TriangleInfo * triInfo; // offset 0x18, size 0x4
};
// total size: 0x8
class TriangleInfo {
    // Members
    short surfaceID; // offset 0x0, size 0x2
    class FixedPoint_2_14 vDirection[3]; // offset 0x2, size 0x6
};
// total size: 0x2
class FixedPoint_2_14 {
    // Members
    short data; // offset 0x0, size 0x2
};
// total size: 0x8
class hkRootLevelContainer {
    // Members
    class NamedVariant * m_namedVariants; // offset 0x0, size 0x4
    int m_numNamedVariants; // offset 0x4, size 0x4
};
// total size: 0x10
class NamedVariant {
    // Members
    char * m_name; // offset 0x0, size 0x4
    char * m_className; // offset 0x4, size 0x4
    class hkVariant m_variant; // offset 0x8, size 0x8
};
// total size: 0x8
class hkVariant {
    // Members
    void * m_object; // offset 0x0, size 0x4
    class hkClass * m_class; // offset 0x4, size 0x4
};
// total size: 0x30
class hkClass {
    // Members
    char * m_name; // offset 0x0, size 0x4
    class hkClass * m_parent; // offset 0x4, size 0x4
    int m_objectSize; // offset 0x8, size 0x4
    int m_numImplementedInterfaces; // offset 0xC, size 0x4
    class hkClassEnum * m_declaredEnums; // offset 0x10, size 0x4
    int m_numDeclaredEnums; // offset 0x14, size 0x4
    class hkClassMember * m_declaredMembers; // offset 0x18, size 0x4
    int m_numDeclaredMembers; // offset 0x1C, size 0x4
    void * m_defaults; // offset 0x20, size 0x4
    class hkCustomAttributes * m_attributes; // offset 0x24, size 0x4
    class hkFlags m_flags; // offset 0x28, size 0x4
    int m_describedVersion; // offset 0x2C, size 0x4
};
// total size: 0x14
class hkClassEnum {
    // Members
    char * m_name; // offset 0x0, size 0x4
    class Item * m_items; // offset 0x4, size 0x4
    int m_numItems; // offset 0x8, size 0x4
    class hkCustomAttributes * m_attributes; // offset 0xC, size 0x4
    class hkFlags m_flags; // offset 0x10, size 0x4
};
// total size: 0x8
class Item {
    // Members
    int m_value; // offset 0x0, size 0x4
    char * m_name; // offset 0x4, size 0x4
};
// total size: 0x0
class hkCustomAttributes {};
// total size: 0x4
class hkFlags {
    // Members
    unsigned int m_storage; // offset 0x0, size 0x4
};
// total size: 0x18
class hkClassMember {
    // Members
    char * m_name; // offset 0x0, size 0x4
    class hkClass * m_class; // offset 0x4, size 0x4
    class hkClassEnum * m_enum; // offset 0x8, size 0x4
    class hkEnum m_type; // offset 0xC, size 0x1
    class hkEnum m_subtype; // offset 0xD, size 0x1
    short m_cArraySize; // offset 0xE, size 0x2
    class hkFlags m_flags; // offset 0x10, size 0x2
    unsigned short m_offset; // offset 0x12, size 0x2
    class hkCustomAttributes * m_attributes; // offset 0x14, size 0x4
};
// total size: 0x1
class hkEnum {
    // Members
    unsigned char m_storage; // offset 0x0, size 0x1
};
// total size: 0x2
class hkFlags {
    // Members
    unsigned short m_storage; // offset 0x0, size 0x2
};
// total size: 0xC
class Owner {
    // Members
    class Owner * prev; // offset 0x4, size 0x4
    class Owner * next; // offset 0x8, size 0x4
};
// total size: 0x44
class hkpPhysicsSystem : public hkReferencedObject {
    // Members
    class hkArray m_rigidBodies; // offset 0x8, size 0xC
    class hkArray m_constraints; // offset 0x14, size 0xC
    class hkArray m_actions; // offset 0x20, size 0xC
    class hkArray m_phantoms; // offset 0x2C, size 0xC
    char * m_name; // offset 0x38, size 0x4
    unsigned long m_userData; // offset 0x3C, size 0x4
    class hkBool m_active; // offset 0x40, size 0x1
};
// total size: 0x8
class hkReferencedObject : public hkBaseObject {
    // Members
    unsigned short m_memSizeAndFlags; // offset 0x4, size 0x2
    short m_referenceCount; // offset 0x6, size 0x2
};
// total size: 0x4
class hkBaseObject {};
// total size: 0xC
class hkArray {
    // Members
    class hkpRigidBody * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x220
class hkpRigidBody : public hkpEntity {};
// total size: 0x220
class hkpEntity : public hkpWorldObject {
    // Members
    class hkpMaterial m_material; // offset 0x88, size 0xC
    void * m_limitContactImpulseUtil; // offset 0x94, size 0x4
    float m_damageMultiplier; // offset 0x98, size 0x4
    class hkpBreakableBody * m_breakableBody; // offset 0x9C, size 0x4
    unsigned int m_solverData; // offset 0xA0, size 0x4
    unsigned short m_storageIndex; // offset 0xA4, size 0x2
    unsigned short m_processContactCallbackDelay; // offset 0xA6, size 0x2
    class hkSmallArray m_constraintsMaster; // offset 0xA8, size 0x8
    class hkArray m_constraintsSlave; // offset 0xB0, size 0xC
    class hkArray m_constraintRuntime; // offset 0xBC, size 0xC
    class hkpSimulationIsland * m_simulationIsland; // offset 0xC8, size 0x4
    signed char m_autoRemoveLevel; // offset 0xCC, size 0x1
    unsigned char m_numUserDatasInContactPointProperties; // offset 0xCD, size 0x1
    unsigned int m_uid; // offset 0xD0, size 0x4
    class SpuCollisionCallback m_spuCollisionCallback; // offset 0xD4, size 0x8
    class ExtendedListeners * m_extendedListeners; // offset 0xDC, size 0x4
    class hkpMaxSizeMotion m_motion; // offset 0xE0, size 0x120
    class hkSmallArray m_collisionListeners; // offset 0x200, size 0x8
    class hkSmallArray m_actions; // offset 0x208, size 0x8
    class hkRefPtr m_localFrame; // offset 0x210, size 0x4
};
// total size: 0x88
class hkpWorldObject : public hkReferencedObject {
    // Members
    class hkpWorld * m_world; // offset 0x8, size 0x4
    unsigned long m_userData; // offset 0xC, size 0x4
    class hkpLinkedCollidable m_collidable; // offset 0x10, size 0x5C
    class hkMultiThreadCheck m_multiThreadCheck; // offset 0x6C, size 0x8
    char * m_name; // offset 0x74, size 0x4
    class hkArray m_properties; // offset 0x78, size 0xC
    class hkReferencedObject * m_aiData; // offset 0x84, size 0x4
};
// total size: 0x330
class hkpWorld : public hkReferencedObject {
    // Members
    class hkpSimulation * m_simulation; // offset 0x8, size 0x4
    class hkVector4 m_gravity; // offset 0x10, size 0x10
    class hkpSimulationIsland * m_fixedIsland; // offset 0x20, size 0x4
    class hkpRigidBody * m_fixedRigidBody; // offset 0x24, size 0x4
    class hkArray m_activeSimulationIslands; // offset 0x28, size 0xC
    class hkArray m_inactiveSimulationIslands; // offset 0x34, size 0xC
    class hkArray m_dirtySimulationIslands; // offset 0x40, size 0xC
    class hkpWorldMaintenanceMgr * m_maintenanceMgr; // offset 0x4C, size 0x4
    class hkWorldMemoryAvailableWatchDog * m_memoryWatchDog; // offset 0x50, size 0x4
    class hkpBroadPhase * m_broadPhase; // offset 0x54, size 0x4
    class hkpKdTreeWorldManager * m_kdTreeManager; // offset 0x58, size 0x4
    class hkBool m_autoUpdateKdTree; // offset 0x5C, size 0x1
    class hkpTypedBroadPhaseDispatcher * m_broadPhaseDispatcher; // offset 0x60, size 0x4
    class hkpPhantomBroadPhaseListener * m_phantomBroadPhaseListener; // offset 0x64, size 0x4
    class hkpEntityEntityBroadPhaseListener * m_entityEntityBroadPhaseListener; // offset 0x68, size 0x4
    class hkpBroadPhaseBorderListener * m_broadPhaseBorderListener; // offset 0x6C, size 0x4
    class hkpMtThreadStructure * m_multithreadedSimulationJobData; // offset 0x70, size 0x4
    class hkpProcessCollisionInput * m_collisionInput; // offset 0x74, size 0x4
    class hkpCollisionFilter * m_collisionFilter; // offset 0x78, size 0x4
    class hkpCollisionDispatcher * m_collisionDispatcher; // offset 0x7C, size 0x4
    class hkpConvexListFilter * m_convexListFilter; // offset 0x80, size 0x4
    class hkpWorldOperationQueue * m_pendingOperations; // offset 0x84, size 0x4
    int m_pendingOperationsCount; // offset 0x88, size 0x4
    int m_pendingBodyOperationsCount; // offset 0x8C, size 0x4
    int m_criticalOperationsLockCount; // offset 0x90, size 0x4
    int m_criticalOperationsLockCountForPhantoms; // offset 0x94, size 0x4
    class hkBool m_blockExecutingPendingOperations; // offset 0x98, size 0x1
    class hkBool m_criticalOperationsAllowed; // offset 0x99, size 0x1
    class hkpDebugInfoOnPendingOperationQueues * m_pendingOperationQueues; // offset 0x9C, size 0x4
    int m_pendingOperationQueueCount; // offset 0xA0, size 0x4
    class hkMultiThreadCheck m_multiThreadCheck; // offset 0xA4, size 0x8
    class hkBool m_processActionsInSingleThread; // offset 0xAC, size 0x1
    unsigned int m_minDesiredIslandSize; // offset 0xB0, size 0x4
    class hkCriticalSection * m_modifyConstraintCriticalSection; // offset 0xB4, size 0x4
    int m_isLocked; // offset 0xB8, size 0x4
    class hkCriticalSection * m_islandDirtyListCriticalSection; // offset 0xBC, size 0x4
    class hkCriticalSection * m_propertyMasterLock; // offset 0xC0, size 0x4
    class hkBool m_wantSimulationIslands; // offset 0xC4, size 0x1
    float m_snapCollisionToConvexEdgeThreshold; // offset 0xC8, size 0x4
    float m_snapCollisionToConcaveEdgeThreshold; // offset 0xCC, size 0x4
    class hkBool m_enableToiWeldRejection; // offset 0xD0, size 0x1
    class hkBool m_wantDeactivation; // offset 0xD1, size 0x1
    class hkBool m_shouldActivateOnRigidBodyTransformChange; // offset 0xD2, size 0x1
    float m_deactivationReferenceDistance; // offset 0xD4, size 0x4
    float m_toiCollisionResponseRotateNormal; // offset 0xD8, size 0x4
    int m_maxSectorsPerCollideTask; // offset 0xDC, size 0x4
    int m_maxEntriesPerToiCollideTask; // offset 0xE0, size 0x4
    class hkEnum m_simulationType; // offset 0xE4, size 0x4
    float m_numToisTillAllowedPenetrationSimplifiedToi; // offset 0xE8, size 0x4
    float m_numToisTillAllowedPenetrationToi; // offset 0xEC, size 0x4
    float m_numToisTillAllowedPenetrationToiHigher; // offset 0xF0, size 0x4
    float m_numToisTillAllowedPenetrationToiForced; // offset 0xF4, size 0x4
    unsigned int m_lastEntityUid; // offset 0xF8, size 0x4
    class hkArray m_phantoms; // offset 0xFC, size 0xC
    class hkArray m_actionListeners; // offset 0x108, size 0xC
    class hkArray m_entityListeners; // offset 0x114, size 0xC
    class hkArray m_phantomListeners; // offset 0x120, size 0xC
    class hkArray m_constraintListeners; // offset 0x12C, size 0xC
    class hkArray m_worldDeletionListeners; // offset 0x138, size 0xC
    class hkArray m_islandActivationListeners; // offset 0x144, size 0xC
    class hkArray m_worldPostSimulationListeners; // offset 0x150, size 0xC
    class hkArray m_worldPostIntegrateListeners; // offset 0x15C, size 0xC
    class hkArray m_worldPostCollideListeners; // offset 0x168, size 0xC
    class hkArray m_islandPostIntegrateListeners; // offset 0x174, size 0xC
    class hkArray m_islandPostCollideListeners; // offset 0x180, size 0xC
    class hkArray m_collisionListeners; // offset 0x18C, size 0xC
    class hkArray m_contactImpulseLimitBreachedListeners; // offset 0x198, size 0xC
    class hkpBroadPhaseBorder * m_broadPhaseBorder; // offset 0x1A4, size 0x4
    class hkdWorld * m_destructionWorld; // offset 0x1A8, size 0x4
    class hkpWorldDynamicsStepInfo m_dynamicsStepInfo; // offset 0x1B0, size 0x140
    class hkVector4 m_broadPhaseExtents[2]; // offset 0x2F0, size 0x20
    int m_broadPhaseNumMarkers; // offset 0x310, size 0x4
    int m_sizeOfToiEventQueue; // offset 0x314, size 0x4
    int m_broadPhaseQuerySize; // offset 0x318, size 0x4
    int m_broadPhaseUpdateSize; // offset 0x31C, size 0x4
    class hkEnum m_contactPointGeneration; // offset 0x320, size 0x1
};
// total size: 0x0
class hkpSimulation {};
// total size: 0x10
class hkVector4 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
// total size: 0x6C
class hkpSimulationIsland : public hkpConstraintOwner {
    // Members
    class hkpWorld * m_world; // offset 0x18, size 0x4
    int m_numConstraints; // offset 0x1C, size 0x4
    unsigned short m_storageIndex; // offset 0x20, size 0x2
    unsigned short m_dirtyListIndex; // offset 0x22, size 0x2
    unsigned char m_splitCheckFrameCounter; // offset 0x24, size 0x1
    bool m_splitCheckRequested : 2; // offset 0x25, size 0x1, bit offset 0
    bool m_sparseEnabled : 2; // offset 0x25, size 0x1, bit offset 2
    bool m_actionListCleanupNeeded : 2; // offset 0x25, size 0x1, bit offset 4
    bool m_allowIslandLocking : 2; // offset 0x25, size 0x1, bit offset 6
    bool m_isInActiveIslandsArray : 2; // offset 0x26, size 0x1, bit offset 0
    bool m_activeMark : 2; // offset 0x26, size 0x1, bit offset 2
    bool m_inIntegrateJob : 2; // offset 0x26, size 0x1, bit offset 4
    class hkMultiThreadCheck m_multiThreadCheck; // offset 0x28, size 0x8
    float m_timeSinceLastHighFrequencyCheck; // offset 0x30, size 0x4
    float m_timeSinceLastLowFrequencyCheck; // offset 0x34, size 0x4
    class hkArray m_actions; // offset 0x38, size 0xC
    float m_timeOfDeactivation; // offset 0x44, size 0x4
    class hkInplaceArray m_entities; // offset 0x48, size 0x10
    class hkpAgentNnTrack m_agentTrack; // offset 0x58, size 0x14
};
// total size: 0x18
class hkpConstraintOwner : public hkReferencedObject {
    // Members
    class hkpConstraintInfo m_constraintInfo; // offset 0x8, size 0x10
};
// total size: 0x10
class hkpConstraintInfo {
    // Members
    int m_maxSizeOfSchema; // offset 0x0, size 0x4
    int m_sizeOfSchemas; // offset 0x4, size 0x4
    int m_numSolverResults; // offset 0x8, size 0x4
    int m_numSolverElemTemps; // offset 0xC, size 0x4
};
// total size: 0x8
class hkMultiThreadCheck {
    // Members
    unsigned int m_threadId; // offset 0x0, size 0x4
    short m_markCount; // offset 0x4, size 0x2
    unsigned short m_markBitStack; // offset 0x6, size 0x2
};
// total size: 0xC
class hkArray {
    // Members
    class hkpAction * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x0
class hkpAction {};
// total size: 0x10
class hkInplaceArray : public hkArray {
    // Members
    class hkpEntity * m_storage[1]; // offset 0xC, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    class hkpEntity * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x14
class hkpAgentNnTrack {
    // Members
    unsigned int m_bytesUsedInLastSector; // offset 0x0, size 0x4
    class hkInplaceArray m_sectors; // offset 0x4, size 0x10
};
// total size: 0x10
class hkInplaceArray : public hkArray {
    // Members
    class hkpAgentNnSector * m_storage[1]; // offset 0xC, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    class hkpAgentNnSector * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x200
class hkpAgentNnSector {
    // Members
    unsigned char m_data[512]; // offset 0x0, size 0x200
};
// total size: 0xC
class hkArray {
    // Members
    class hkpSimulationIsland * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x0
class hkpWorldMaintenanceMgr {};
// total size: 0xC
class hkWorldMemoryAvailableWatchDog : public hkReferencedObject {
    // Members
    int m_minMemoryAvailable; // offset 0x8, size 0x4
};
// total size: 0x14
class hkpBroadPhase : public hkReferencedObject {
    // Members
    class hkMultiThreadCheck m_multiThreadCheck; // offset 0x8, size 0x8
    class hkCriticalSection * m_criticalSection; // offset 0x10, size 0x4
};
// total size: 0x0
class hkpKdTreeWorldManager {};
// total size: 0x1
class hkBool {
    // Members
    char m_bool; // offset 0x0, size 0x1
};
// total size: 0x0
class hkpTypedBroadPhaseDispatcher {};
// total size: 0x0
class hkpPhantomBroadPhaseListener {};
// total size: 0x0
class hkpEntityEntityBroadPhaseListener {};
// total size: 0x0
class hkpBroadPhaseBorderListener {};
// total size: 0x0
class hkpMtThreadStructure {};
// total size: 0x70
class hkpProcessCollisionInput : public hkpCollisionInput {
    // Members
    class hkStepInfo m_stepInfo; // offset 0x50, size 0x10
    class hkPadSpu m_collisionQualityInfo; // offset 0x60, size 0x4
    void * m_dynamicsInfo; // offset 0x64, size 0x4
    class hkBool m_enableDeprecatedWelding; // offset 0x68, size 0x1
    class hkBool m_allowToSkipConfirmedCallbacks; // offset 0x69, size 0x1
    class hkpCollisionAgentConfig * m_config; // offset 0x6C, size 0x4
};
// total size: 0x50
class hkpCollisionInput {
    // Members
    class hkPadSpu m_dispatcher; // offset 0x0, size 0x4
    class hkPadSpu m_tolerance; // offset 0x4, size 0x4
    class hkPadSpu m_filter; // offset 0x8, size 0x4
    class hkPadSpu m_convexListFilter; // offset 0xC, size 0x4
    class hkPadSpu m_createPredictiveAgents; // offset 0x10, size 0x4
    class Aabb32Info m_aabb32Info; // offset 0x20, size 0x30
};
// total size: 0x4
class hkPadSpu {
    // Members
    class hkpCollisionDispatcher * m_storage; // offset 0x0, size 0x4
};
// total size: 0x4
class hkPadSpu {
    // Members
    float m_storage; // offset 0x0, size 0x4
};
// total size: 0x4
class hkPadSpu {
    // Members
    class hkpShapeCollectionFilter * m_storage; // offset 0x0, size 0x4
};
// total size: 0x4
class hkpShapeCollectionFilter {};
// total size: 0x4
class hkPadSpu {
    // Members
    class hkpConvexListFilter * m_storage; // offset 0x0, size 0x4
};
// total size: 0x8
class hkpConvexListFilter : public hkReferencedObject {};
// total size: 0x4
class hkPadSpu {
    // Members
    int m_storage; // offset 0x0, size 0x4
};
// total size: 0x30
class Aabb32Info {
    // Members
    class hkVector4 m_bitOffsetLow; // offset 0x0, size 0x10
    class hkVector4 m_bitOffsetHigh; // offset 0x10, size 0x10
    class hkVector4 m_bitScale; // offset 0x20, size 0x10
};
// total size: 0x10
class hkStepInfo {
    // Members
    class hkPadSpu m_startTime; // offset 0x0, size 0x4
    class hkPadSpu m_endTime; // offset 0x4, size 0x4
    class hkPadSpu m_deltaTime; // offset 0x8, size 0x4
    class hkPadSpu m_invDeltaTime; // offset 0xC, size 0x4
};
// total size: 0x4
class hkPadSpu {
    // Members
    class hkpCollisionQualityInfo * m_storage; // offset 0x0, size 0x4
};
// total size: 0x0
class hkpCollisionAgentConfig {};
// total size: 0x30
class hkpCollisionFilter : public hkReferencedObject, public hkpCollidableCollidableFilter, public hkpShapeCollectionFilter, public hkpRayShapeCollectionFilter, public hkpRayCollidableFilter {
    // Members
    unsigned int m_prepad[2]; // offset 0x18, size 0x8
    class hkEnum m_type; // offset 0x20, size 0x4
    unsigned int m_postpad[3]; // offset 0x24, size 0xC
};
// total size: 0x4
class hkpCollidableCollidableFilter {};
// total size: 0x4
class hkpRayShapeCollectionFilter {};
// total size: 0x4
class hkpRayCollidableFilter {};
// total size: 0x4
class hkEnum {
    // Members
    unsigned int m_storage; // offset 0x0, size 0x4
};
// total size: 0x0
class hkpWorldOperationQueue {};
// total size: 0x0
class hkpDebugInfoOnPendingOperationQueues {};
// total size: 0x4
class hkEnum {
    // Members
    int m_storage; // offset 0x0, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    class hkpPhantom * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0xA0
class hkpPhantom : public hkpWorldObject {
    // Members
    class hkArray m_overlapListeners; // offset 0x88, size 0xC
    class hkArray m_phantomListeners; // offset 0x94, size 0xC
};
// total size: 0xC
class hkArray {
    // Members
    class hkpPhantomOverlapListener * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x4
class hkpPhantomOverlapListener {};
// total size: 0xC
class hkArray {
    // Members
    class hkpPhantomListener * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x4
class hkpPhantomListener {};
// total size: 0xC
class hkArray {
    // Members
    class hkpActionListener * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x4
class hkpActionListener {};
// total size: 0xC
class hkArray {
    // Members
    class hkpEntityListener * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x4
class hkpEntityListener {};
// total size: 0xC
class hkArray {
    // Members
    class hkpConstraintListener * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x4
class hkpConstraintListener {};
// total size: 0xC
class hkArray {
    // Members
    class hkpWorldDeletionListener * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x4
class hkpWorldDeletionListener {};
// total size: 0xC
class hkArray {
    // Members
    class hkpIslandActivationListener * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x0
class hkpIslandActivationListener {};
// total size: 0xC
class hkArray {
    // Members
    class hkpWorldPostSimulationListener * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x4
class hkpWorldPostSimulationListener {};
// total size: 0xC
class hkArray {
    // Members
    class hkpWorldPostIntegrateListener * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x0
class hkpWorldPostIntegrateListener {};
// total size: 0xC
class hkArray {
    // Members
    class hkpWorldPostCollideListener * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x4
class hkpWorldPostCollideListener {};
// total size: 0xC
class hkArray {
    // Members
    class hkpIslandPostIntegrateListener * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x0
class hkpIslandPostIntegrateListener {};
// total size: 0xC
class hkArray {
    // Members
    class hkpIslandPostCollideListener * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x0
class hkpIslandPostCollideListener {};
// total size: 0xC
class hkArray {
    // Members
    class hkpCollisionListener * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x4
class hkpCollisionListener {};
// total size: 0xC
class hkArray {
    // Members
    class hkpContactImpulseLimitBreachedListener * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x0
class hkpContactImpulseLimitBreachedListener {};
// total size: 0x0
class hkpBroadPhaseBorder {};
// total size: 0x0
class hkdWorld {};
// total size: 0x140
class hkpWorldDynamicsStepInfo {
    // Members
    class hkStepInfo m_stepInfo; // offset 0x0, size 0x10
    class hkpSolverInfo m_solverInfo; // offset 0x10, size 0x130
};
// total size: 0x130
class hkpSolverInfo {
    // Members
    float m_one; // offset 0x0, size 0x4
    float m_tau; // offset 0x4, size 0x4
    float m_damping; // offset 0x8, size 0x4
    float m_frictionTau; // offset 0xC, size 0x4
    class hkVector4 m_globalAccelerationPerSubStep; // offset 0x10, size 0x10
    class hkVector4 m_globalAccelerationPerStep; // offset 0x20, size 0x10
    class hkVector4 m_integrateVelocityFactor; // offset 0x30, size 0x10
    class hkVector4 m_invIntegrateVelocityFactor; // offset 0x40, size 0x10
    float m_dampDivTau; // offset 0x50, size 0x4
    float m_tauDivDamp; // offset 0x54, size 0x4
    float m_dampDivFrictionTau; // offset 0x58, size 0x4
    float m_frictionTauDivDamp; // offset 0x5C, size 0x4
    float m_contactRestingVelocity; // offset 0x60, size 0x4
    class DeactivationInfo m_deactivationInfo[6]; // offset 0x64, size 0xA8
    float m_deltaTime; // offset 0x10C, size 0x4
    float m_invDeltaTime; // offset 0x110, size 0x4
    int m_numSteps; // offset 0x114, size 0x4
    int m_numMicroSteps; // offset 0x118, size 0x4
    float m_invNumMicroSteps; // offset 0x11C, size 0x4
    float m_invNumSteps; // offset 0x120, size 0x4
    class hkBool m_forceCoherentConstraintOrderingInSolver; // offset 0x124, size 0x1
    unsigned char m_deactivationNumInactiveFramesSelectFlag[2]; // offset 0x125, size 0x2
    unsigned char m_deactivationIntegrateCounter; // offset 0x127, size 0x1
};
// total size: 0x1C
class DeactivationInfo {
    // Members
    float m_linearVelocityThresholdInv; // offset 0x0, size 0x4
    float m_angularVelocityThresholdInv; // offset 0x4, size 0x4
    float m_slowObjectVelocityMultiplier; // offset 0x8, size 0x4
    float m_relativeSleepVelocityThreshold; // offset 0xC, size 0x4
    float m_maxDistSqrd[2]; // offset 0x10, size 0x8
    class hkHalf m_maxRotSqrd[2]; // offset 0x18, size 0x4
};
// total size: 0x2
class hkHalf {
    // Members
    short m_value; // offset 0x0, size 0x2
};
// total size: 0x1
class hkEnum {
    // Members
    signed char m_storage; // offset 0x0, size 0x1
};
// total size: 0x5C
class hkpLinkedCollidable : public hkpCollidable {
    // Members
    class hkArray m_collisionEntries; // offset 0x50, size 0xC
};
// total size: 0x50
class hkpCollidable : public hkpCdBody {
    // Members
    signed char m_ownerOffset; // offset 0x10, size 0x1
    unsigned char m_forceCollideOntoPpu; // offset 0x11, size 0x1
    unsigned short m_shapeSizeOnSpu; // offset 0x12, size 0x2
    class hkpTypedBroadPhaseHandle m_broadPhaseHandle; // offset 0x14, size 0xC
    class BoundingVolumeData m_boundingVolumeData; // offset 0x20, size 0x2C
    float m_allowedPenetrationDepth; // offset 0x4C, size 0x4
};
// total size: 0x10
class hkpCdBody {
    // Members
    class hkpShape * m_shape; // offset 0x0, size 0x4
    unsigned int m_shapeKey; // offset 0x4, size 0x4
    void * m_motion; // offset 0x8, size 0x4
    class hkpCdBody * m_parent; // offset 0xC, size 0x4
};
// total size: 0x10
class hkpShape : public hkReferencedObject {
    // Members
    unsigned long m_userData; // offset 0x8, size 0x4
    class hkEnum m_type; // offset 0xC, size 0x4
};
// total size: 0xC
class hkpTypedBroadPhaseHandle : public hkpBroadPhaseHandle {
    // Members
    signed char m_type; // offset 0x4, size 0x1
    signed char m_ownerOffset; // offset 0x5, size 0x1
    signed char m_objectQualityType; // offset 0x6, size 0x1
    unsigned int m_collisionFilterInfo; // offset 0x8, size 0x4
};
// total size: 0x4
class hkpBroadPhaseHandle {
    // Members
    unsigned int m_id; // offset 0x0, size 0x4
};
// total size: 0x2C
class BoundingVolumeData {
    // Members
    unsigned int m_min[3]; // offset 0x0, size 0xC
    unsigned char m_expansionMin[3]; // offset 0xC, size 0x3
    unsigned char m_expansionShift; // offset 0xF, size 0x1
    unsigned int m_max[3]; // offset 0x10, size 0xC
    unsigned char m_expansionMax[3]; // offset 0x1C, size 0x3
    unsigned char m_padding; // offset 0x1F, size 0x1
    unsigned short m_numChildShapeAabbs; // offset 0x20, size 0x2
    unsigned short m_capacityChildShapeAabbs; // offset 0x22, size 0x2
    class hkAabbUint32 * m_childShapeAabbs; // offset 0x24, size 0x4
    unsigned int * m_childShapeKeys; // offset 0x28, size 0x4
};
// total size: 0x20
class hkAabbUint32 {
    // Members
    unsigned int m_min[3]; // offset 0x0, size 0xC
    unsigned char m_expansionMin[3]; // offset 0xC, size 0x3
    unsigned char m_expansionShift; // offset 0xF, size 0x1
    unsigned int m_max[3]; // offset 0x10, size 0xC
    unsigned char m_expansionMax[3]; // offset 0x1C, size 0x3
    unsigned char m_shapeKeyByte; // offset 0x1F, size 0x1
};
// total size: 0xC
class hkArray {
    // Members
    class CollisionEntry * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x8
class CollisionEntry {
    // Members
    class hkpAgentNnEntry * m_agentEntry; // offset 0x0, size 0x4
    class hkpLinkedCollidable * m_partner; // offset 0x4, size 0x4
};
// total size: 0x18
class hkpAgentNnEntry : public hkpAgentEntry {
    // Members
    unsigned short m_agentIndexOnCollidable[2]; // offset 0x4, size 0x4
    class hkpContactMgr * m_contactMgr; // offset 0x8, size 0x4
    unsigned char m_collisionQualityIndex; // offset 0xC, size 0x1
    unsigned char m_forceCollideOntoPpu; // offset 0xD, size 0x1
    unsigned char m_padding[2]; // offset 0xE, size 0x2
    class hkpLinkedCollidable * m_collidable[2]; // offset 0x10, size 0x8
};
// total size: 0x4
class hkpAgentEntry {
    // Members
    unsigned char m_streamCommand; // offset 0x0, size 0x1
    unsigned char m_agentType; // offset 0x1, size 0x1
    unsigned char m_numContactPoints; // offset 0x2, size 0x1
    unsigned char m_size; // offset 0x3, size 0x1
};
// total size: 0xC
class hkpContactMgr : public hkReferencedObject {
    // Members
    enum Type m_type; // offset 0x8, size 0x4
};
enum Type {
    TYPE_SIMPLE_CONSTRAINT_CONTACT_MGR = 0,
    TYPE_REPORT_CONTACT_MGR = 1,
    TYPE_CONVEX_LIST_CONTACT_MGR = 2,
    TYPE_NULL_CONTACT_MGR = 3,
    TYPE_USER_CONTACT_MGR = 4,
    TYPE_MAX = 5,
};
// total size: 0xC
class hkArray {
    // Members
    class hkpProperty * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x10
class hkpProperty {
    // Members
    unsigned int m_key; // offset 0x0, size 0x4
    unsigned int m_alignmentPadding; // offset 0x4, size 0x4
    class hkpPropertyValue m_value; // offset 0x8, size 0x8
};
// total size: 0x8
class hkpPropertyValue {
    // Members
    unsigned long long m_data; // offset 0x0, size 0x8
};
// total size: 0xC
class hkpMaterial {
    // Members
    class hkEnum m_responseType; // offset 0x0, size 0x1
    float m_friction; // offset 0x4, size 0x4
    float m_restitution; // offset 0x8, size 0x4
};
// total size: 0x0
class hkpBreakableBody {};
// total size: 0x8
class hkSmallArray {
    // Members
    class hkConstraintInternal * m_data; // offset 0x0, size 0x4
    unsigned short m_size; // offset 0x4, size 0x2
    unsigned short m_capacityAndFlags; // offset 0x6, size 0x2
};
// total size: 0x24
class hkConstraintInternal {
    // Members
    class hkpConstraintInstance * m_constraint; // offset 0x0, size 0x4
    class hkpEntity * m_entities[2]; // offset 0x4, size 0x8
    class hkpConstraintAtom * m_atoms; // offset 0xC, size 0x4
    unsigned short m_atomsSize; // offset 0x10, size 0x2
    unsigned char m_callbackRequest; // offset 0x12, size 0x1
    class hkEnum m_priority; // offset 0x13, size 0x1
    unsigned short m_sizeOfSchemas; // offset 0x14, size 0x2
    unsigned short m_numSolverResults; // offset 0x16, size 0x2
    unsigned short m_numSolverElemTemps; // offset 0x18, size 0x2
    unsigned char m_whoIsMaster; // offset 0x1A, size 0x1
    class hkBool m_isNormalType; // offset 0x1B, size 0x1
    void * m_runtime; // offset 0x1C, size 0x4
    unsigned short m_runtimeSize; // offset 0x20, size 0x2
    unsigned short m_slaveIndex; // offset 0x22, size 0x2
};
// total size: 0x34
class hkpConstraintInstance : public hkReferencedObject {
    // Members
    class hkpConstraintOwner * m_owner; // offset 0x8, size 0x4
    class hkpConstraintData * m_data; // offset 0xC, size 0x4
    class hkpModifierConstraintAtom * m_constraintModifiers; // offset 0x10, size 0x4
    class hkpEntity * m_entities[2]; // offset 0x14, size 0x8
    class hkEnum m_priority; // offset 0x1C, size 0x1
    class hkBool m_wantRuntime; // offset 0x1D, size 0x1
    class hkEnum m_destructionRemapInfo; // offset 0x1E, size 0x1
    class hkSmallArray m_listeners; // offset 0x20, size 0x8
    char * m_name; // offset 0x28, size 0x4
    unsigned long m_userData; // offset 0x2C, size 0x4
    class hkConstraintInternal * m_internal; // offset 0x30, size 0x4
};
// total size: 0xC
class hkpConstraintData : public hkReferencedObject {
    // Members
    unsigned long m_userData; // offset 0x8, size 0x4
};
// total size: 0x20
class hkpModifierConstraintAtom : public hkpConstraintAtom {
    // Members
    unsigned short m_modifierAtomSize; // offset 0x10, size 0x2
    unsigned short m_childSize; // offset 0x12, size 0x2
    class hkpConstraintAtom * m_child; // offset 0x14, size 0x4
    unsigned int m_pad[2]; // offset 0x18, size 0x8
};
// total size: 0x2
class hkpConstraintAtom {
    // Members
    class hkEnum m_type; // offset 0x0, size 0x2
};
// total size: 0x2
class hkEnum {
    // Members
    unsigned short m_storage; // offset 0x0, size 0x2
};
// total size: 0x8
class hkSmallArray {
    // Members
    class hkpConstraintListener * * m_data; // offset 0x0, size 0x4
    unsigned short m_size; // offset 0x4, size 0x2
    unsigned short m_capacityAndFlags; // offset 0x6, size 0x2
};
// total size: 0xC
class hkArray {
    // Members
    class hkpConstraintInstance * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    unsigned char * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x8
class SpuCollisionCallback {
    // Members
    class hkSpuCollisionCallbackUtil * m_util; // offset 0x0, size 0x4
    unsigned short m_capacity; // offset 0x4, size 0x2
    unsigned char m_eventFilter; // offset 0x6, size 0x1
    unsigned char m_userFilter; // offset 0x7, size 0x1
};
// total size: 0x0
class hkSpuCollisionCallbackUtil {};
// total size: 0x10
class ExtendedListeners {
    // Members
    class hkSmallArray m_activationListeners; // offset 0x0, size 0x8
    class hkSmallArray m_entityListeners; // offset 0x8, size 0x8
};
// total size: 0x8
class hkSmallArray {
    // Members
    class hkpEntityActivationListener * * m_data; // offset 0x0, size 0x4
    unsigned short m_size; // offset 0x4, size 0x2
    unsigned short m_capacityAndFlags; // offset 0x6, size 0x2
};
// total size: 0x0
class hkpEntityActivationListener {};
// total size: 0x8
class hkSmallArray {
    // Members
    class hkpEntityListener * * m_data; // offset 0x0, size 0x4
    unsigned short m_size; // offset 0x4, size 0x2
    unsigned short m_capacityAndFlags; // offset 0x6, size 0x2
};
// total size: 0x120
class hkpMaxSizeMotion : public hkpKeyframedRigidMotion {};
// total size: 0x120
class hkpKeyframedRigidMotion : public hkpMotion {};
// total size: 0x120
class hkpMotion : public hkReferencedObject {
    // Members
    class hkEnum m_type; // offset 0x8, size 0x1
    unsigned char m_deactivationIntegrateCounter; // offset 0x9, size 0x1
    unsigned short m_deactivationNumInactiveFrames[2]; // offset 0xA, size 0x4
    class hkMotionState m_motionState; // offset 0x10, size 0xB0
    class hkVector4 m_inertiaAndMassInv; // offset 0xC0, size 0x10
    class hkVector4 m_linearVelocity; // offset 0xD0, size 0x10
    class hkVector4 m_angularVelocity; // offset 0xE0, size 0x10
    class hkVector4 m_deactivationRefPosition[2]; // offset 0xF0, size 0x20
    unsigned int m_deactivationRefOrientation[2]; // offset 0x110, size 0x8
    class hkpMaxSizeMotion * m_savedMotion; // offset 0x118, size 0x4
    unsigned short m_savedQualityTypeIndex; // offset 0x11C, size 0x2
    class hkHalf m_gravityFactor; // offset 0x11E, size 0x2
};
// total size: 0xB0
class hkMotionState {
    // Members
    class hkTransform m_transform; // offset 0x0, size 0x40
    class hkSweptTransform m_sweptTransform; // offset 0x40, size 0x50
    class hkVector4 m_deltaAngle; // offset 0x90, size 0x10
    float m_objectRadius; // offset 0xA0, size 0x4
    float m_linearDamping; // offset 0xA4, size 0x4
    float m_angularDamping; // offset 0xA8, size 0x4
    class hkUFloat8 m_maxLinearVelocity; // offset 0xAC, size 0x1
    class hkUFloat8 m_maxAngularVelocity; // offset 0xAD, size 0x1
    unsigned char m_deactivationClass; // offset 0xAE, size 0x1
};
// total size: 0x40
class hkTransform {
    // Members
    class hkRotation m_rotation; // offset 0x0, size 0x30
    class hkVector4 m_translation; // offset 0x30, size 0x10
};
// total size: 0x30
class hkRotation : public hkMatrix3 {};
// total size: 0x30
class hkMatrix3 {
    // Members
    class hkVector4 m_col0; // offset 0x0, size 0x10
    class hkVector4 m_col1; // offset 0x10, size 0x10
    class hkVector4 m_col2; // offset 0x20, size 0x10
};
// total size: 0x50
class hkSweptTransform {
    // Members
    class hkVector4 m_centerOfMass0; // offset 0x0, size 0x10
    class hkVector4 m_centerOfMass1; // offset 0x10, size 0x10
    class hkQuaternion m_rotation0; // offset 0x20, size 0x10
    class hkQuaternion m_rotation1; // offset 0x30, size 0x10
    class hkVector4 m_centerOfMassLocal; // offset 0x40, size 0x10
};
// total size: 0x10
class hkQuaternion {
    // Members
    class hkVector4 m_vec; // offset 0x0, size 0x10
};
// total size: 0x1
class hkUFloat8 {
    // Members
    unsigned char m_value; // offset 0x0, size 0x1
};
// total size: 0x8
class hkSmallArray {
    // Members
    class hkpCollisionListener * * m_data; // offset 0x0, size 0x4
    unsigned short m_size; // offset 0x4, size 0x2
    unsigned short m_capacityAndFlags; // offset 0x6, size 0x2
};
// total size: 0x8
class hkSmallArray {
    // Members
    class hkpAction * * m_data; // offset 0x0, size 0x4
    unsigned short m_size; // offset 0x4, size 0x2
    unsigned short m_capacityAndFlags; // offset 0x6, size 0x2
};
// total size: 0x4
class hkRefPtr {
    // Members
    class hkLocalFrame * m_pntr; // offset 0x0, size 0x4
};
// total size: 0x0
class hkLocalFrame {};
enum MotionType {
    MOTION_INVALID = 0,
    MOTION_DYNAMIC = 1,
    MOTION_SPHERE_INERTIA = 2,
    MOTION_STABILIZED_SPHERE_INERTIA = 3,
    MOTION_BOX_INERTIA = 4,
    MOTION_STABILIZED_BOX_INERTIA = 5,
    MOTION_KEYFRAMED = 6,
    MOTION_FIXED = 7,
    MOTION_THIN_BOX_INERTIA = 8,
    MOTION_CHARACTER = 9,
    MOTION_MAX_ID = 10,
};
enum hkpCollidableQualityType {
    HK_COLLIDABLE_QUALITY_INVALID = 4294967295,
    HK_COLLIDABLE_QUALITY_FIXED = 0,
    HK_COLLIDABLE_QUALITY_KEYFRAMED = 1,
    HK_COLLIDABLE_QUALITY_DEBRIS = 2,
    HK_COLLIDABLE_QUALITY_DEBRIS_SIMPLE_TOI = 3,
    HK_COLLIDABLE_QUALITY_MOVING = 4,
    HK_COLLIDABLE_QUALITY_CRITICAL = 5,
    HK_COLLIDABLE_QUALITY_BULLET = 6,
    HK_COLLIDABLE_QUALITY_USER = 7,
    HK_COLLIDABLE_QUALITY_CHARACTER = 8,
    HK_COLLIDABLE_QUALITY_KEYFRAMED_REPORTING = 9,
    HK_COLLIDABLE_QUALITY_MAX = 10,
};
// total size: 0xC0
class hkpRigidBodyCinfo {
    // Members
    unsigned int m_collisionFilterInfo; // offset 0x0, size 0x4
    class hkpShape * m_shape; // offset 0x4, size 0x4
    class hkLocalFrame * m_localFrame; // offset 0x8, size 0x4
    class hkEnum m_collisionResponse; // offset 0xC, size 0x1
    unsigned short m_processContactCallbackDelay; // offset 0xE, size 0x2
    class hkVector4 m_position; // offset 0x10, size 0x10
    class hkQuaternion m_rotation; // offset 0x20, size 0x10
    class hkVector4 m_linearVelocity; // offset 0x30, size 0x10
    class hkVector4 m_angularVelocity; // offset 0x40, size 0x10
    class hkMatrix3 m_inertiaTensor; // offset 0x50, size 0x30
    class hkVector4 m_centerOfMass; // offset 0x80, size 0x10
    float m_mass; // offset 0x90, size 0x4
    float m_linearDamping; // offset 0x94, size 0x4
    float m_angularDamping; // offset 0x98, size 0x4
    float m_gravityFactor; // offset 0x9C, size 0x4
    float m_friction; // offset 0xA0, size 0x4
    float m_restitution; // offset 0xA4, size 0x4
    float m_maxLinearVelocity; // offset 0xA8, size 0x4
    float m_maxAngularVelocity; // offset 0xAC, size 0x4
    float m_allowedPenetrationDepth; // offset 0xB0, size 0x4
    class hkEnum m_motionType; // offset 0xB4, size 0x1
    class hkEnum m_rigidBodyDeactivatorType; // offset 0xB5, size 0x1
    class hkEnum m_solverDeactivation; // offset 0xB6, size 0x1
    class hkEnum m_qualityType; // offset 0xB7, size 0x1
    signed char m_autoRemoveLevel; // offset 0xB8, size 0x1
    signed char m_numUserDatasInContactPointProperties; // offset 0xB9, size 0x1
    class hkBool m_forceCollideOntoPpu; // offset 0xBA, size 0x1
};
// total size: 0x68
class Model {
    // Members
    class Matrix43 rootTransform; // offset 0x0, size 0x30
    unsigned short visibleCount; // offset 0x30, size 0x2
    unsigned short childTransformCount; // offset 0x32, size 0x2
    unsigned short renderableCount; // offset 0x34, size 0x2
    unsigned short renderCustomizerCount; // offset 0x36, size 0x2
    class Renderable3D * * renderables; // offset 0x38, size 0x4
    class ModelXformBuffer * xforms; // offset 0x3C, size 0x4
    class ModelJointBuffer * joints; // offset 0x40, size 0x4
    class ModelMorphWeightBuffer * morphWeights; // offset 0x44, size 0x4
    class ModelPrototype * modelProto; // offset 0x48, size 0x4
    class Geometry * * geoms; // offset 0x4C, size 0x4
    class Matrix43 * childTransforms; // offset 0x50, size 0x4
    unsigned short * childTransformParents; // offset 0x54, size 0x4
    unsigned short * renderableTransformMap; // offset 0x58, size 0x4
    class RefModelInstanceChildXform * refModelInstanceChildXforms; // offset 0x5C, size 0x4
    unsigned short dirtyRefChildTransformCount; // offset 0x60, size 0x2
    unsigned short dirtyNonRefChildTransformCount; // offset 0x62, size 0x2
    unsigned int * xformDirtyBits; // offset 0x64, size 0x4
};
// total size: 0xFC
class Renderable3D : public Renderable {
    // Members
    class Vector4 lodData; // offset 0x48, size 0x10
    class BroadBound worldBound; // offset 0x58, size 0x20
    class LightingState lightState; // offset 0x78, size 0x18
    class Vector4 postColorMul; // offset 0x90, size 0x10
    class Vector4 shadowColor; // offset 0xA0, size 0x10
    float shadowCastDepth; // offset 0xB0, size 0x4
    float shadowCastStartDepth; // offset 0xB4, size 0x4
    unsigned short shadowMinBlur; // offset 0xB8, size 0x2
    unsigned short shadowMaxBlur; // offset 0xBA, size 0x2
    int cameraRelativeFlags; // offset 0xBC, size 0x4
    float shadowCastBlurDepth; // offset 0xC0, size 0x4
    unsigned int shadowPriority; // offset 0xC4, size 0x4
    class Renderable3DTransform * xform; // offset 0xC8, size 0x4
    void * projectShadowCast; // offset 0xCC, size 0x4
    void * projectShadowReceive; // offset 0xD0, size 0x4
    class Scene * showScene; // offset 0xD4, size 0x4
    class ModelInstanceArticle * parentInstance; // offset 0xD8, size 0x4
    class Renderable3DLink links; // offset 0xDC, size 0xC
    unsigned int projectShadowCache; // offset 0xE8, size 0x4
    unsigned int * projectShadowCachePtr; // offset 0xEC, size 0x4
    unsigned int projectShadowFlags; // offset 0xF0, size 0x4
    unsigned int previousProjectShadowFlags; // offset 0xF4, size 0x4
    class ShadowSimpleCache * simpleShadowCachePtr; // offset 0xF8, size 0x4
};
// total size: 0x48
class Renderable : public Node {
    // Members
    class Scene * scene; // offset 0xC, size 0x4
    class RenderableSceneRef * sceneRef; // offset 0x10, size 0x4
    class ParamData * paramData; // offset 0x14, size 0x4
    class RenderMode * instRenderMode; // offset 0x18, size 0x4
    class Vector4 localColorMul; // offset 0x1C, size 0x10
    class Geometry * geom; // offset 0x2C, size 0x4
    float hackAlphaFade; // offset 0x30, size 0x4
    unsigned short colorMulHandle; // offset 0x34, size 0x2
    unsigned short textureBlendFactorHandle; // offset 0x36, size 0x2
    unsigned short textureBlendTextureHandle; // offset 0x38, size 0x2
    unsigned short textureBlendSpecularHandle; // offset 0x3A, size 0x2
    float textureBlendFactor; // offset 0x3C, size 0x4
    unsigned short viewportVisibleMask; // offset 0x40, size 0x2
    unsigned short extraData; // offset 0x42, size 0x2
    unsigned char hackVertLOD; // offset 0x44, size 0x1
    unsigned char activeTechIndex; // offset 0x45, size 0x1
    class RenderAttrib viewAttrib; // offset 0x46, size 0x1
};
// total size: 0xC
class Node {
    // Members
    enum NodeTypeEnum type; // offset 0x4, size 0x4
    bool attached; // offset 0x8, size 0x1
    bool detachPending; // offset 0x9, size 0x1
    bool updateThread; // offset 0xA, size 0x1
};
enum NodeTypeEnum {
    T_UNKNOWN = 0,
    T_Effect = 1,
    T_Material = 2,
    T_Scene = 3,
    T_Texture = 4,
    T_VertexDecl = 5,
    T_Skeleton = 6,
    T_RenderMode = 7,
    T_Viewport = 8,
    T_Scaleform = 9,
    T_StaticBuilder = 10,
    T_SkinBuilder = 11,
    T_UITextureFontBatchBuilder = 12,
    T_ShapeBuilder = 13,
    T_CurveBuilder = 14,
    T_StaticGeometry = 15,
    T_SkinGeometry = 16,
    T_LineTransientGeometry = 17,
    T_DebugCard2DGeometry = 18,
    T_UITextureFontBatchGeometry = 19,
    T_ShapeGeometry = 20,
    T_CurveGeometry = 21,
    T_ImmediateGeometry = 22,
    T_Renderable = 23,
    T_Renderable3D = 24,
    T_DebugCard2DRenderable = 25,
    T_UITextureFontBatchRenderable = 26,
    T_CurveRenderable = 27,
    T_ScreenRenderTarget = 28,
    T_DepthTextureRenderTarget = 29,
    T_PickingRenderTarget = 30,
    T_TextureRenderTarget = 31,
    T_GenericShader = 32,
    T_Flat2DShader = 33,
    T_FontShader = 34,
    T_LineShader = 35,
    T_UniformColorLineShader = 36,
    T_IDAttributeShader = 37,
    T_IDUniformShader = 38,
    T_VShaderCode = 39,
    T_PShaderCode = 40,
    T_MaterialSpace = 41,
    T_PickingSpace = 42,
    T_MaterialDepotSpace = 43,
    T_ProjectShadowSpace = 44,
    T_ScreenView = 45,
    T_TextureView = 46,
    T_ProjectShadowView = 47,
    T_ProjectFXLight = 48,
    T_RenderSceneCollider = 49,
    T_LightKit = 50,
    T_LightPointSpot = 51,
    T_LightSectorData = 52,
    T_PostProcess = 53,
    T_EffectsHDR = 54,
    T_CloudSpace = 55,
    T_CloudView = 56,
    T_FORCE_INT = 2147483647,
};
// total size: 0x10CC
class Scene : public Node {
    // Members
    bool autoRefresh; // offset 0xB, size 0x1
    bool needRefresh; // offset 0xC, size 0x1
    class PoolArray views; // offset 0x10, size 0xC
    class PoolArray lightsPointSpot; // offset 0x1C, size 0xC
    class PoolArray fxLightsPointSpot; // offset 0x28, size 0xC
    class Space * hackWorldSpace; // offset 0x34, size 0x4
    class VoidList components; // offset 0x38, size 0x8
    class RenderSceneCollider * rsceneCollider; // offset 0x40, size 0x4
    class RenderableHolder rendurablez; // offset 0x44, size 0x4C
    unsigned int * refreshBitBuffer; // offset 0x90, size 0x4
    class RenderableSceneRef * rendLists[4]; // offset 0x94, size 0x10
    int rendCounts[4]; // offset 0xA4, size 0x10
    int rendDyns[4]; // offset 0xB4, size 0x10
    unsigned short rendMasks[4]; // offset 0xC4, size 0x8
    class PoolArray renderThreadDebugDraw; // offset 0xCC, size 0xC
    int lightKitSceneApplied; // offset 0xD8, size 0x4
    class LightKitData initialKit; // offset 0xDC, size 0x80
    class LightKitData kitArray[5]; // offset 0x15C, size 0x280
    class Data pointSpotData[64]; // offset 0x3DC, size 0xC00
    unsigned int cullViewportCount; // offset 0xFDC, size 0x4
    unsigned int pad[3]; // offset 0xFE0, size 0xC
    class CullViewport cullViewportList[1]; // offset 0xFEC, size 0xE0
};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class View * * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x28
class View : public Node {
    // Members
    int hackRenderOrder; // offset 0xC, size 0x4
    class VoidList spaces; // offset 0x10, size 0x8
    class VoidList viewports; // offset 0x18, size 0x8
    bool ready; // offset 0x20, size 0x1
    class RenderTarget * target; // offset 0x24, size 0x4
};
// total size: 0x8
class VoidList : public NodeListBase {};
// total size: 0x8
class NodeListBase {
    // Members
    class NodeHeader tail; // offset 0x0, size 0x8
};
// total size: 0x8
class NodeHeader {
    // Members
    class NodeHeader * prev; // offset 0x0, size 0x4
    class NodeHeader * next; // offset 0x4, size 0x4
};
// total size: 0x14
class RenderTarget : public Node {
    // Members
    int width; // offset 0xC, size 0x4
    int height; // offset 0x10, size 0x4
};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class LightPointSpot * * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x5C
class LightPointSpot : public Node {
    // Members
    class Scene * scene; // offset 0xC, size 0x4
    unsigned short sceneIndex; // offset 0x10, size 0x2
    class Flags flags; // offset 0x12, size 0x4
    float projectScale; // offset 0x18, size 0x4
    class Data data; // offset 0x1C, size 0x30
    class Vector4 boundData; // offset 0x4C, size 0x10
};
// total size: 0x4
class Flags {
    // Members
    unsigned short viewportVisibleMask; // offset 0x0, size 0x2
    unsigned short lightMask; // offset 0x2, size 0x2
};
// total size: 0x30
class Data {
    // Members
    class Vector4 color; // offset 0x0, size 0x10
    class Vector4 posInvRadius; // offset 0x10, size 0x10
    class Vector4 spotDirection; // offset 0x20, size 0x10
};
// total size: 0x20
class Space : public Node {
    // Members
    int spaceFilter; // offset 0xC, size 0x4
    class Scene * scene; // offset 0x10, size 0x4
    class RenderTarget * target; // offset 0x14, size 0x4
    class NodeType listNode; // offset 0x18, size 0x8
};
// total size: 0x8
class NodeType : public NodeHeader {};
// total size: 0x2C
class RenderSceneCollider : public Node {
    // Members
    class Scene * parentScene; // offset 0xC, size 0x4
    class ProjectShadowView * psview; // offset 0x10, size 0x4
    class ProjectFXLight * pfxLight; // offset 0x14, size 0x4
    unsigned int viewportCount; // offset 0x18, size 0x4
    class Viewport * viewportList[4]; // offset 0x1C, size 0x10
};
// total size: 0x211E4
class ProjectShadowView : public View {
    // Members
    class Bucket * bucketList; // offset 0x28, size 0x4
    unsigned int bucketCount; // offset 0x2C, size 0x4
    class Scene * parentScene; // offset 0x30, size 0x4
    class TextureRenderTargetWii myRenderTarget; // offset 0x34, size 0x15C
    class TextureRenderTargetWii myBlurRenderTarget; // offset 0x190, size 0x15C
    class ProjectShadowSpace mySpace; // offset 0x2EC, size 0x24
    class Viewport myViewport; // offset 0x310, size 0x2DC
    class SimpleShadow mySimpleShadows; // offset 0x5EC, size 0x33C
    int renderTargetSize; // offset 0x928, size 0x4
    class Sampler shadowSampler; // offset 0x92C, size 0xC
    class ShadowCache caches[12]; // offset 0x938, size 0x20850
    unsigned int bucketUsed; // offset 0x21188, size 0x4
    class BroadBound cacheAllBound; // offset 0x2118C, size 0x20
    unsigned int cacheCount; // offset 0x211AC, size 0x4
    class CacheSort cacheList[12]; // offset 0x211B0, size 0x30
    class ShadowSimpleCache * simpleCacheList; // offset 0x211E0, size 0x4
};
// total size: 0x10C
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
    float shadowBlurDepth; // offset 0xFC, size 0x4
    unsigned int casterFlags; // offset 0x100, size 0x4
    unsigned int minPixels; // offset 0x104, size 0x4
    unsigned int maxPixels; // offset 0x108, size 0x4
};
// total size: 0x20
class BroadBound {
    // Members
    class Vector lower; // offset 0x0, size 0x10
    class Vector upper; // offset 0x10, size 0x10
};
// total size: 0x10
class Vector : private Vector4 {};
// total size: 0x15C
class TextureRenderTargetWii : public TextureRenderTargetCommon {
    // Members
    class Texture texture2; // offset 0x64, size 0x48
    class Texture texture3; // offset 0xAC, size 0x48
    class Texture texture4; // offset 0xF4, size 0x48
    unsigned int numTextures; // offset 0x13C, size 0x4
    unsigned int destWidth; // offset 0x140, size 0x4
    unsigned int destHeight; // offset 0x144, size 0x4
    unsigned char * texData; // offset 0x148, size 0x4
    unsigned char * texData2; // offset 0x14C, size 0x4
    unsigned char * texData3; // offset 0x150, size 0x4
    unsigned char * texData4; // offset 0x154, size 0x4
    unsigned int texDataSize; // offset 0x158, size 0x4
};
// total size: 0x64
class TextureRenderTargetCommon : public RenderTarget {
    // Members
    class Texture texture; // offset 0x14, size 0x48
    bool msaa; // offset 0x5C, size 0x1
    bool depth; // offset 0x5D, size 0x1
    int format; // offset 0x60, size 0x4
};
// total size: 0x48
class Texture : public Node {
    // Members
    class _GXTexObj * tex; // offset 0xC, size 0x4
    int numTextures; // offset 0x10, size 0x4
    class WiiTextureFileHeader * header; // offset 0x14, size 0x4
    class WiiTextureFileHeader dummyHeader; // offset 0x18, size 0x20
    int width; // offset 0x38, size 0x4
    int height; // offset 0x3C, size 0x4
    bool ownTex; // offset 0x40, size 0x1
    signed char tileX; // offset 0x41, size 0x1
    signed char tileY; // offset 0x42, size 0x1
    signed char tileZ; // offset 0x43, size 0x1
    float alphaScale; // offset 0x44, size 0x4
};
// total size: 0x20
class _GXTexObj {
    // Members
    unsigned long dummy[8]; // offset 0x0, size 0x20
};
// total size: 0x20
class WiiTextureFileHeader {
    // Members
    int textureType; // offset 0x0, size 0x4
    float alphaScale; // offset 0x4, size 0x4
    short numTextures; // offset 0x8, size 0x2
    char max_aniso[6]; // offset 0xA, size 0x6
    char pad[16]; // offset 0x10, size 0x10
};
// total size: 0x24
class ProjectShadowSpace : public Space {
    // Members
    class ProjectShadowView * parent; // offset 0x20, size 0x4
};
// total size: 0x2DC
class Viewport : public Node {
    // Members
    class NodeType listNode; // offset 0xC, size 0x8
    unsigned short visibleMask; // offset 0x14, size 0x2
    enum AspectMode aspectMode; // offset 0x18, size 0x4
    bool isLodEnabled; // offset 0x1C, size 0x1
    bool rendering; // offset 0x1D, size 0x1
    class View * parent; // offset 0x20, size 0x4
    float absoluteCorner[2][2]; // offset 0x24, size 0x10
    float relativeCorner[2][2]; // offset 0x34, size 0x10
    float zmin; // offset 0x44, size 0x4
    float zmax; // offset 0x48, size 0x4
    class Rect2D rect; // offset 0x4C, size 0x10
    enum ProjectionMode projMode; // offset 0x5C, size 0x4
    float width; // offset 0x60, size 0x4
    float height; // offset 0x64, size 0x4
    float znear; // offset 0x68, size 0x4
    float zfar; // offset 0x6C, size 0x4
    float perspScale; // offset 0x70, size 0x4
    float orthoScale; // offset 0x74, size 0x4
    float pixel_aspect; // offset 0x78, size 0x4
    float fogStart; // offset 0x7C, size 0x4
    float fogEnd; // offset 0x80, size 0x4
    float heightFogStart; // offset 0x84, size 0x4
    float heightFogEnd; // offset 0x88, size 0x4
    enum ViewportIndex viewportIndex; // offset 0x8C, size 0x4
    bool hackTransparentDepthWrite; // offset 0x90, size 0x1
    bool isCullViewport; // offset 0x91, size 0x1
    unsigned char cullViewportIndex; // offset 0x92, size 0x1
    class Matrix43 cameraMat; // offset 0x94, size 0x30
    class Matrix43 invCameraMat; // offset 0xC4, size 0x30
    class ViewMatrix viewMat[2]; // offset 0xF4, size 0x80
    class Vector4 fogLerpParam; // offset 0x174, size 0x10
    class Vector4 fogColor; // offset 0x184, size 0x10
    class Vector4 fogModeParam; // offset 0x194, size 0x10
    class Vector4 heightFogLerpParam; // offset 0x1A4, size 0x10
    class Vector4 heightFogModeParam; // offset 0x1B4, size 0x10
    enum FogInterpolationMode fogMode; // offset 0x1C4, size 0x4
    enum FogInterpolationMode heightFogMode; // offset 0x1C8, size 0x4
    class FrustumPlanes frust; // offset 0x1CC, size 0xD0
    float depthFirstPerspFudgeFactor; // offset 0x29C, size 0x4
    float depthFirstOrthoFudgeFactor; // offset 0x2A0, size 0x4
    class _GXLightObj * lights; // offset 0x2A4, size 0x4
    int kitLightIndex; // offset 0x2A8, size 0x4
    class _GXFogAdjTable fogTable; // offset 0x2AC, size 0x14
    bool wiiRGBA6; // offset 0x2C0, size 0x1
    class MoBlurSettings moBlurSettings; // offset 0x2C4, size 0x18
};
enum AspectMode {
    ASPECT_NONE = 0,
    ASPECT_WIDTH = 1,
    ASPECT_HEIGHT = 2,
};
// total size: 0x10
class Rect2D {
    // Members
    int x; // offset 0x0, size 0x4
    int y; // offset 0x4, size 0x4
    int w; // offset 0x8, size 0x4
    int h; // offset 0xC, size 0x4
};
enum ProjectionMode {
    PROJ_EXPLICIT = 0,
    PROJ_PERSP = 1,
    PROJ_ORTHO = 2,
    MAX_PROJ = 3,
};
enum ViewportIndex {
    VIEWPORT_3D = 0,
    VIEWPORT_UI = 1,
    VIEWPORT_SHADOWMAP = 2,
    VIEWPORT_COLLISION = 3,
    VIEWPORT_PROJECTSHADOW = 4,
    VIEWPORT_CLOUD = 5,
};
// total size: 0x40
class ViewMatrix {
    // Members
    class Matrix43 mat; // offset 0x0, size 0x30
    class Vector4 col3; // offset 0x30, size 0x10
};
enum FogInterpolationMode {
    FOGMODE_None = 0,
    FOGMODE_Linear = 1,
    FOGMODE_Exponential = 2,
    FOGMODE_Exponential2 = 3,
    FOGMODE_InverseExponential = 4,
    FOGMODE_InverseExponential2 = 5,
    END_FOGMODE_ENUM = 6,
};
// total size: 0xD0
class FrustumPlanes {
    // Members
    class Vector4 campos; // offset 0x0, size 0x10
    class Vector4 planes[6]; // offset 0x10, size 0x60
    float wiiPlaneX[6]; // offset 0x70, size 0x18
    float wiiPlaneY[6]; // offset 0x88, size 0x18
    float wiiPlaneZ[6]; // offset 0xA0, size 0x18
    float wiiPlaneW[6]; // offset 0xB8, size 0x18
};
// total size: 0x40
class _GXLightObj {
    // Members
    unsigned long dummy[16]; // offset 0x0, size 0x40
};
// total size: 0x14
class _GXFogAdjTable {
    // Members
    unsigned short r[10]; // offset 0x0, size 0x14
};
// total size: 0x18
class MoBlurSettings {
    // Members
    bool enabled; // offset 0x0, size 0x1
    float blurAmt; // offset 0x4, size 0x4
    float zoomAmt; // offset 0x8, size 0x4
    class Vector2 blurCenter; // offset 0xC, size 0x8
    float blurMaskScale; // offset 0x14, size 0x4
};
// total size: 0x8
class Vector2 {
    // Members
    class DataType data; // offset 0x0, size 0x8
};
// total size: 0x8
class DataType {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
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
// total size: 0xD4
class ShadowSimpleCache {
    // Members
    float width; // offset 0x0, size 0x4
    float length; // offset 0x4, size 0x4
    float offsetX; // offset 0x8, size 0x4
    float offsetZ; // offset 0xC, size 0x4
    unsigned int shadowColor; // offset 0x10, size 0x4
    unsigned short flags; // offset 0x14, size 0x2
    unsigned short castOnEnt; // offset 0x16, size 0x2
    unsigned int collPriority; // offset 0x18, size 0x4
    float tol_movement; // offset 0x1C, size 0x4
    float radiusOptional; // offset 0x20, size 0x4
    class Renderable3DLink * castOnPtr; // offset 0x24, size 0x4
    class ShadowSimplePoly poly; // offset 0x28, size 0x40
    float shadowHeight; // offset 0x68, size 0x4
    float shadowLerp; // offset 0x6C, size 0x4
    class EntityHandle * textureHandle; // offset 0x70, size 0x4
    float dydx; // offset 0x74, size 0x4
    float dydz; // offset 0x78, size 0x4
    class Vector3 corner[4]; // offset 0x7C, size 0x30
    class BroadBound ray; // offset 0xAC, size 0x20
    class ShadowSimpleCache * frameListNext; // offset 0xCC, size 0x4
    class Renderable3D * firstRenderable; // offset 0xD0, size 0x4
};
// total size: 0xC
class Renderable3DLink {
    // Members
    class Renderable3D * rend; // offset 0x0, size 0x4
    class Renderable3DLink * rendPrev; // offset 0x4, size 0x4
    class Renderable3DLink * rendNext; // offset 0x8, size 0x4
};
// total size: 0x40
class ShadowSimplePoly {
    // Members
    class Vector vert[3]; // offset 0x0, size 0x30
    class Vector norm; // offset 0x30, size 0x10
};
// total size: 0xC
class Vector3 {
    // Members
    class DataType data; // offset 0x0, size 0xC
};
// total size: 0xC
class DataType {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0xC
class Sampler {
    // Members
    class Texture * texture; // offset 0x0, size 0x4
    class SamplerContext context; // offset 0x4, size 0x8
};
// total size: 0x8
class SamplerContext {
    // Members
    unsigned int wad; // offset 0x0, size 0x4
    class @class mipmaplodbias; // offset 0x4, size 0x4
};
// total size: 0x4
class @class {
    // Members
    float f; // offset 0x0, size 0x4
    unsigned int i; // offset 0x0, size 0x4
};
// total size: 0x2B5C
class ShadowCache {
    // Members
    unsigned int * projectShadowCachePtr; // offset 0x0, size 0x4
    unsigned short inUse; // offset 0x4, size 0x2
    unsigned short dirtyPriority; // offset 0x6, size 0x2
    unsigned short polyCount; // offset 0x8, size 0x2
    unsigned short bucketIndex; // offset 0xA, size 0x2
    float polyRayDepth[5]; // offset 0xC, size 0x14
    float blurScale[2]; // offset 0x20, size 0x8
    class BroadBound casterBound; // offset 0x28, size 0x20
    class BroadBound bound; // offset 0x48, size 0x20
    class BroadBound clippedBound; // offset 0x68, size 0x20
    class Vector boundCenter; // offset 0x88, size 0x10
    class Vector boundHalf; // offset 0x98, size 0x10
    class Vector boundQuarter; // offset 0xA8, size 0x10
    class Vector4 capsuleStart; // offset 0xB8, size 0x10
    class Vector capsuleEnd; // offset 0xC8, size 0x10
    class ShadowPoly poly[256]; // offset 0xD8, size 0x2400
    float polyDepth[256]; // offset 0x24D8, size 0x400
    class Renderable3DLink receiverLink[32]; // offset 0x28D8, size 0x180
    unsigned short entCount; // offset 0x2A58, size 0x2
    unsigned short entLast; // offset 0x2A5A, size 0x2
    class Renderable3D * receiver[32]; // offset 0x2A5C, size 0x80
    float receiverDepth[32]; // offset 0x2ADC, size 0x80
};
// total size: 0x24
class ShadowPoly {
    // Members
    class Vector3 v0; // offset 0x0, size 0xC
    class Vector3 v1; // offset 0xC, size 0xC
    class Vector3 v2; // offset 0x18, size 0xC
};
// total size: 0x4
class CacheSort {
    // Members
    class ShadowCache * cache; // offset 0x0, size 0x4
};
// total size: 0x1B4FC
class ProjectFXLight : public Node {
    // Members
    class FXLightCache caches[6]; // offset 0xC, size 0x1B4C8
    class BroadBound cacheAllBound; // offset 0x1B4D4, size 0x20
    unsigned int cacheCount; // offset 0x1B4F4, size 0x4
    class Scene * parentScene; // offset 0x1B4F8, size 0x4
};
// total size: 0x48CC
class FXLightCache {
    // Members
    class Vector4 boundSphere; // offset 0x0, size 0x10
    class BroadBound bound; // offset 0x10, size 0x20
    class LightPointSpot * light; // offset 0x30, size 0x4
    unsigned short polyCount; // offset 0x34, size 0x2
    bool identityMat; // offset 0x36, size 0x1
    unsigned char sceneIndex; // offset 0x37, size 0x1
    unsigned short lightMask; // offset 0x38, size 0x2
    class FXLightPoly poly[384]; // offset 0x3C, size 0x4800
    unsigned short entCount; // offset 0x483C, size 0x2
    unsigned short entLast; // offset 0x483E, size 0x2
    class Renderable3D * receiver[32]; // offset 0x4840, size 0x80
    unsigned char * wiiDisplayList; // offset 0x48C0, size 0x4
    signed char * wiiNorm; // offset 0x48C4, size 0x4
    short wiiDisplayListStride; // offset 0x48C8, size 0x2
    short wiiNormStride; // offset 0x48CA, size 0x2
};
// total size: 0x30
class FXLightPoly {
    // Members
    class Vector3 v0; // offset 0x0, size 0xC
    signed char n0[4]; // offset 0xC, size 0x4
    class Vector3 v1; // offset 0x10, size 0xC
    signed char n1[4]; // offset 0x1C, size 0x4
    class Vector3 v2; // offset 0x20, size 0xC
    signed char n2[4]; // offset 0x2C, size 0x4
};
// total size: 0x4C
class RenderableHolder {
    // Members
    class QuadArray reg_cast; // offset 0x0, size 0x24
    class QuadArray other_ui; // offset 0x24, size 0x24
    unsigned short threeDMask; // offset 0x48, size 0x2
};
// total size: 0x24
class QuadArray {
    // Members
    class RenderableSceneRef * lo; // offset 0x0, size 0x4
    class RenderableSceneRef * hi; // offset 0x4, size 0x4
    int loCount; // offset 0x8, size 0x4
    int loDyn; // offset 0xC, size 0x4
    int hiCount; // offset 0x10, size 0x4
    int hiDyn; // offset 0x14, size 0x4
    int capacity; // offset 0x18, size 0x4
    unsigned short hiFilter; // offset 0x1C, size 0x2
    unsigned short loMask; // offset 0x1E, size 0x2
    unsigned short hiMask; // offset 0x20, size 0x2
};
// total size: 0x30
class RenderableSceneRef {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    class Renderable * rend; // offset 0x4, size 0x4
    class EffectLodFeatureLookup * lodFeat; // offset 0x8, size 0x4
    class PassInfo * passes; // offset 0xC, size 0x4
    class Vector4 boundSphere; // offset 0x10, size 0x10
    class Vector4 lodData; // offset 0x20, size 0x10
};
// total size: 0x80
class EffectLodFeatureLookup {
    // Members
    class Entry data[2][8][2]; // offset 0x0, size 0x80
};
// total size: 0x4
class Entry {
    // Members
    unsigned char count; // offset 0x0, size 0x1
    unsigned char offset; // offset 0x1, size 0x1
    unsigned char hasDepthFirst; // offset 0x2, size 0x1
    unsigned char requireDepthFirst; // offset 0x3, size 0x1
};
// total size: 0x8
class PassInfo {
    // Members
    unsigned short bucket; // offset 0x0, size 0x2
    unsigned char sortMethod; // offset 0x2, size 0x1
    unsigned char passIndex; // offset 0x3, size 0x1
    unsigned int shaderRefKey; // offset 0x4, size 0x4
};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class Renderable * * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x80
class LightKitData {
    // Members
    class Vector4 specColor; // offset 0x0, size 0x10
    class Vector4 specDir; // offset 0x10, size 0x10
    class Vector4 lookupVec[3]; // offset 0x20, size 0x30
    class Vector4 lookupColor[2]; // offset 0x50, size 0x20
    class Texture * lookup; // offset 0x70, size 0x4
    class LightKitData * next; // offset 0x74, size 0x4
    class LightKitData * prev; // offset 0x78, size 0x4
    unsigned char index; // offset 0x7C, size 0x1
};
// total size: 0xE0
class CullViewport {
    // Members
    class FrustumPlanes frust; // offset 0x0, size 0xD0
    class Vector4 camDir; // offset 0xD0, size 0x10
};
// total size: 0x1
class ParamData {};
// total size: 0x1C
class RenderMode : public Node {
    // Members
    enum SpaceLayer spaceLayer; // offset 0xC, size 0x4
    int sortOrder; // offset 0x10, size 0x4
    class StateDelta * renderStates; // offset 0x14, size 0x4
    int renderStateCount; // offset 0x18, size 0x4
};
enum SpaceLayer {
    SPACE_LAYER_INVALID = 4294967295,
    SPACE_LAYER_SKYDOME = 0,
    SPACE_LAYER_BACKDROP = 1,
    SPACE_LAYER_OCCLUDE = 2,
    SPACE_LAYER_OPAQUE = 3,
    SPACE_LAYER_DECAL = 4,
    SPACE_LAYER_TRANSPARENT = 5,
    SPACE_LAYER_SCREEN_FX = 6,
    SPACE_LAYER_UI = 7,
    MAX_SPACE_LAYER = 8,
};
// total size: 0x8
class StateDelta {
    // Members
    unsigned short id; // offset 0x0, size 0x2
    unsigned short priority; // offset 0x2, size 0x2
    class @class value; // offset 0x4, size 0x4
};
// total size: 0x4
class @class {
    // Members
    unsigned int i; // offset 0x0, size 0x4
    float f; // offset 0x0, size 0x4
};
// total size: 0xB4
class Geometry : public Node {
    // Members
    class BroadBound bbound; // offset 0xC, size 0x20
    class Vector4 boundSphere; // offset 0x2C, size 0x10
    bool degenerateBound; // offset 0x3C, size 0x1
    float offDist; // offset 0x40, size 0x4
    float vertLodDist; // offset 0x44, size 0x4
    class Builder * builder; // offset 0x48, size 0x4
    class Effect * effect; // offset 0x4C, size 0x4
    class Material * material; // offset 0x50, size 0x4
    class ParamData * paramData; // offset 0x54, size 0x4
    class GeometryContext * * shaderContextList; // offset 0x58, size 0x4
    enum PrimitiveType primType; // offset 0x5C, size 0x4
    int vertexCount; // offset 0x60, size 0x4
    class IndexLOD indexLods[2]; // offset 0x64, size 0x38
    int indexLodCount; // offset 0x9C, size 0x4
    class VertexBuffer * vertexBuffers; // offset 0xA0, size 0x4
    int vertexBufferCount; // offset 0xA4, size 0x4
    unsigned int sectorLight; // offset 0xA8, size 0x4
    unsigned char flags; // offset 0xAC, size 0x1
    bool wiiDirect; // offset 0xAD, size 0x1
    unsigned char wiiIndexStride; // offset 0xAE, size 0x1
    unsigned char wiiIndexSkin; // offset 0xAF, size 0x1
    class Wii_GeometryStateOp * wiiGeomStateOp; // offset 0xB0, size 0x4
};
// total size: 0x10
class Builder : public Node {
    // Members
    class ParamData * rendParamData; // offset 0xC, size 0x4
};
// total size: 0x74
class Effect : public Node {
    // Members
    class NodeType listNode; // offset 0xC, size 0x8
    class EffectLodFeatureLookup * depotLodFeat; // offset 0x14, size 0x4
    int depotPreprocessCount; // offset 0x18, size 0x4
    class EffectPreprocessLookup * depotPreprocess; // offset 0x1C, size 0x4
    class ShaderRef * shaderList; // offset 0x20, size 0x4
    int shaderListSize; // offset 0x24, size 0x4
    class ParamFormatTable params[3]; // offset 0x28, size 0x24
    class Technique * techs; // offset 0x4C, size 0x4
    int techCount; // offset 0x50, size 0x4
    signed char standardTechIndices[6]; // offset 0x54, size 0x6
    unsigned char standardTechShaders[6]; // offset 0x5A, size 0x6
    unsigned short effectFlags; // offset 0x60, size 0x2
    unsigned short colorMulHandle; // offset 0x62, size 0x2
    unsigned short alphaMulHandle; // offset 0x64, size 0x2
    unsigned short diffuseMapHandle; // offset 0x66, size 0x2
    unsigned short lightMapHandle; // offset 0x68, size 0x2
    unsigned short textureBlendFactorHandle; // offset 0x6A, size 0x2
    unsigned short textureBlendTextureHandle; // offset 0x6C, size 0x2
    unsigned short textureBlendSpecularHandle; // offset 0x6E, size 0x2
    unsigned char diffuseMapExposure; // offset 0x70, size 0x1
    unsigned char lightMapExposure; // offset 0x71, size 0x1
};
// total size: 0x8
class EffectPreprocessLookup {
    // Members
    unsigned char techIndex; // offset 0x0, size 0x1
    unsigned char lodIndex; // offset 0x1, size 0x1
    unsigned char featureSet; // offset 0x2, size 0x1
    unsigned char isAlpha; // offset 0x3, size 0x1
    unsigned char stageID; // offset 0x4, size 0x1
    unsigned char passIndex; // offset 0x5, size 0x1
    unsigned char shaderHandle; // offset 0x6, size 0x1
    unsigned char pad; // offset 0x7, size 0x1
};
// total size: 0x28
class ShaderRef {
    // Members
    class Shader * shader; // offset 0x0, size 0x4
    class RenderMode * renderMode; // offset 0x4, size 0x4
    unsigned char * paramIndices[3]; // offset 0x8, size 0xC
    unsigned short * paramOffsets[3]; // offset 0x14, size 0xC
    unsigned char paramCount[3]; // offset 0x20, size 0x3
    unsigned char pad; // offset 0x23, size 0x1
    unsigned int shaderRefKey; // offset 0x24, size 0x4
};
// total size: 0x18
class Shader : public Node {
    // Members
    int featureFlags; // offset 0xC, size 0x4
    int vertexStreamCount; // offset 0x10, size 0x4
    int vertexChannelCount; // offset 0x14, size 0x4
};
// total size: 0xC
class ParamFormatTable {
    // Members
    class ParamFormat * formats; // offset 0x0, size 0x4
    int count; // offset 0x4, size 0x4
    int dataSize; // offset 0x8, size 0x4
};
// total size: 0xC
class ParamFormat {
    // Members
    char * name; // offset 0x0, size 0x4
    unsigned short size; // offset 0x4, size 0x2
    unsigned char count; // offset 0x6, size 0x1
    unsigned char type; // offset 0x7, size 0x1
    unsigned short offset; // offset 0x8, size 0x2
    unsigned short pad2; // offset 0xA, size 0x2
};
// total size: 0x1C
class Technique {
    // Members
    char * name; // offset 0x0, size 0x4
    int lodMax; // offset 0x4, size 0x4
    int renderStageFlags; // offset 0x8, size 0x4
    class RenderStageEntry stages[4]; // offset 0xC, size 0x10
};
// total size: 0x4
class RenderStageEntry {
    // Members
    class LOD * lods; // offset 0x0, size 0x4
};
// total size: 0x8
class LOD {
    // Members
    class Feature * features; // offset 0x0, size 0x4
    int featureCount; // offset 0x4, size 0x4
};
// total size: 0xC
class Feature {
    // Members
    class Pass * passes; // offset 0x0, size 0x4
    int passCount; // offset 0x4, size 0x4
    unsigned int featureFlags; // offset 0x8, size 0x4
};
// total size: 0x4
class Pass {
    // Members
    class ShaderRef * shaderRef; // offset 0x0, size 0x4
};
// total size: 0x2C
class Material : public Node {
    // Members
    class NodeType listNode; // offset 0xC, size 0x8
    class MaterialLookup * matLookup; // offset 0x14, size 0x4
    unsigned char skipDepthFirst; // offset 0x18, size 0x1
    unsigned char pad; // offset 0x19, size 0x1
    unsigned short materialFlags; // offset 0x1A, size 0x2
    class Effect * effect; // offset 0x1C, size 0x4
    class RenderMode * renderMode; // offset 0x20, size 0x4
    class ParamData * paramData; // offset 0x24, size 0x4
    float depthBias; // offset 0x28, size 0x4
};
// total size: 0xC
class MaterialLookup {
    // Members
    unsigned char numPasses; // offset 0x0, size 0x1
    unsigned char shadowMapPass; // offset 0x1, size 0x1
    unsigned char stencilShadowPass; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
    class PassInfo passes[1]; // offset 0x4, size 0x8
};
// total size: 0x1
class GeometryContext {};
enum PrimitiveType {
    PRIM_POINTLIST = 184,
    PRIM_LINELIST = 168,
    PRIM_LINESTRIP = 176,
    PRIM_TRILIST = 144,
    PRIM_TRIFAN = 160,
    PRIM_TRISTRIP = 152,
    PRIM_QUADLIST = 128,
};
// total size: 0x1C
class IndexLOD {
    // Members
    class IndexBuffer indexBuffer; // offset 0x0, size 0xC
    int primCount; // offset 0xC, size 0x4
    int triCount; // offset 0x10, size 0x4
    int indexCount; // offset 0x14, size 0x4
    int lodVertCount; // offset 0x18, size 0x4
};
// total size: 0xC
class IndexBuffer {
    // Members
    class IndexBufferHandle handle; // offset 0x0, size 0x8
    int firstIndex; // offset 0x8, size 0x4
};
// total size: 0x8
class IndexBufferHandle {
    // Members
    unsigned char * displayList; // offset 0x0, size 0x4
    unsigned int headerAndSize; // offset 0x4, size 0x4
};
// total size: 0x8
class VertexBuffer {
    // Members
    unsigned int * handle; // offset 0x0, size 0x4
    int offset; // offset 0x4, size 0x4
};
// total size: 0x48
class Wii_GeometryStateOp : public StateOp {
    // Members
    class Wii_MaterialSettings mat; // offset 0x4, size 0x10
    class ChannelInfo pos; // offset 0x14, size 0x8
    class ChannelInfo norm; // offset 0x1C, size 0x8
    class ChannelInfo color; // offset 0x24, size 0x8
    class ChannelInfo uv[3]; // offset 0x2C, size 0x18
    unsigned char posMtx; // offset 0x44, size 0x1
    unsigned char texMtxCount; // offset 0x45, size 0x1
    unsigned char pad[2]; // offset 0x46, size 0x2
};
// total size: 0x4
class StateOp {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char pad; // offset 0x1, size 0x1
    unsigned short size; // offset 0x2, size 0x2
};
// total size: 0x10
class Wii_MaterialSettings {
    // Members
    unsigned char diffuseMapParamIndex; // offset 0x0, size 0x1
    unsigned char lightMapParamIndex; // offset 0x1, size 0x1
    unsigned char envMapParamIndex; // offset 0x2, size 0x1
    unsigned char colorMulParamIndex; // offset 0x3, size 0x1
    unsigned char glowMapParamIndex; // offset 0x4, size 0x1
    unsigned char envMapScaleParamIndex; // offset 0x5, size 0x1
    unsigned char uvSet1ParamIndex; // offset 0x6, size 0x1
    unsigned char uvSet2ParamIndex; // offset 0x7, size 0x1
    unsigned char alphaMulParamIndex; // offset 0x8, size 0x1
    unsigned char ambientScaleParamIndex; // offset 0x9, size 0x1
    unsigned char diffuseMap1ParamIndex; // offset 0xA, size 0x1
    unsigned char blendMapParamIndex; // offset 0xB, size 0x1
    unsigned char textureBlendFactorIndex; // offset 0xC, size 0x1
    unsigned char bumpMapParamIndex; // offset 0xD, size 0x1
    unsigned char pad[2]; // offset 0xE, size 0x2
};
// total size: 0x8
class ChannelInfo {
    // Members
    unsigned char vtype; // offset 0x0, size 0x1
    unsigned char vfrac; // offset 0x1, size 0x1
    unsigned char vindex; // offset 0x2, size 0x1
    unsigned char vcmp; // offset 0x3, size 0x1
    unsigned char ifmt; // offset 0x4, size 0x1
    unsigned char voffset; // offset 0x5, size 0x1
    unsigned char vstride; // offset 0x6, size 0x1
    unsigned char pad; // offset 0x7, size 0x1
};
// total size: 0x1
class RenderAttrib {
    // Members
    unsigned char spaceFilter; // offset 0x0, size 0x1
};
// total size: 0x18
class LightingState {
    // Members
    class LightKitData * kit; // offset 0x0, size 0x4
    unsigned short lightMask; // offset 0x4, size 0x2
    unsigned char pointSpotCount; // offset 0x6, size 0x1
    unsigned char pointSpotIdx[6]; // offset 0x7, size 0x6
    unsigned short pad; // offset 0xE, size 0x2
    unsigned char * lightSectorIndices; // offset 0x10, size 0x4
    unsigned int lightSector; // offset 0x14, size 0x4
};
// total size: 0x40
class Renderable3DTransform {
    // Members
    class Matrix43 worldMat; // offset 0x0, size 0x30
    class Vector4 recipScale; // offset 0x30, size 0x10
};
// total size: 0x98
class ModelInstanceArticle {
    // Members
    unsigned int projectShadowCache; // offset 0x0, size 0x4
    class ShadowSimpleCache * simpleShadowCachePtr; // offset 0x4, size 0x4
    class Renderable3DLink simpleShadowCastOn; // offset 0x8, size 0xC
    int sceneRefCount; // offset 0x14, size 0x4
    class ModelPrototypeEntity * protoEnt; // offset 0x18, size 0x4
    class ParamCargo paramCargo; // offset 0x1C, size 0x8
    class Model model; // offset 0x24, size 0x68
    class LightKitEntity * lightKitEnt; // offset 0x8C, size 0x4
    class RenderCustomizerInfo * renderCustomizers; // offset 0x90, size 0x4
    void * memoryPtr; // offset 0x94, size 0x4
};
// total size: 0x8C
class ModelPrototypeEntity : public Entity {
    // Members
    int memSize; // offset 0x18, size 0x4
    int refModelActivated; // offset 0x1C, size 0x4
    class ModelPrototype modelProto; // offset 0x20, size 0x48
    class SkeletonBlobEntity * skelBlob; // offset 0x68, size 0x4
    class CollisionMeshBlobEntity * collmeshBlob; // offset 0x6C, size 0x4
    class LightSectorData lightSectorData; // offset 0x70, size 0x1C
};
// total size: 0x48
class ModelPrototype {
    // Members
    class Builder * * builders; // offset 0x0, size 0x4
    unsigned short * renderableGeomMap; // offset 0x4, size 0x4
    class Matrix43 * childTransforms; // offset 0x8, size 0x4
    unsigned short * childTransformParents; // offset 0xC, size 0x4
    unsigned short * renderableTransformMap; // offset 0x10, size 0x4
    unsigned int instanceParamCount; // offset 0x14, size 0x4
    unsigned long long * instanceParamKey; // offset 0x18, size 0x4
    class ModelInstanceParamData * instanceParamData; // offset 0x1C, size 0x4
    class ModelPartDefinition * modelPartDefinitions; // offset 0x20, size 0x4
    class ReferenceModelEntry * refModelEntries; // offset 0x24, size 0x4
    unsigned short geomCount; // offset 0x28, size 0x2
    unsigned short renderableCount; // offset 0x2A, size 0x2
    unsigned short nonRefTransformCount; // offset 0x2C, size 0x2
    unsigned short modelPartCount; // offset 0x2E, size 0x2
    unsigned short refInstanceCount; // offset 0x30, size 0x2
    unsigned short refModelCount; // offset 0x32, size 0x2
    unsigned short refTransformCount; // offset 0x34, size 0x2
    class Skeleton * skeleton; // offset 0x38, size 0x4
    int createSize; // offset 0x3C, size 0x4
    int createAlign; // offset 0x40, size 0x4
    bool segmentedModel; // offset 0x44, size 0x1
};
// total size: 0x8
class ModelInstanceParamData {
    // Members
    unsigned short rendIndex; // offset 0x0, size 0x2
    unsigned short geomIndex; // offset 0x2, size 0x2
    unsigned short paramIndex; // offset 0x4, size 0x2
    unsigned short paramType; // offset 0x6, size 0x2
};
// total size: 0x8
class ModelPartDefinition {
    // Members
    unsigned int partIndex; // offset 0x0, size 0x4
    unsigned short rendStartIndex; // offset 0x4, size 0x2
    unsigned short rendCount; // offset 0x6, size 0x2
};
// total size: 0x20
class ReferenceModelEntry {
    // Members
    unsigned long long id; // offset 0x0, size 0x8
    class CollisionMeshBlobEntity * collMesh; // offset 0x8, size 0x4
    class PerInstanceData * instances; // offset 0xC, size 0x4
    unsigned short numChildTransforms; // offset 0x10, size 0x2
    unsigned short numInstances; // offset 0x12, size 0x2
    unsigned short childTransformOffset; // offset 0x14, size 0x2
    unsigned short numRenderables; // offset 0x16, size 0x2
    unsigned short firstRenderableOffset; // offset 0x18, size 0x2
};
// total size: 0x8
class PerInstanceData {
    // Members
    int rootTransformIndex; // offset 0x0, size 0x4
    int collFilter; // offset 0x4, size 0x4
};
// total size: 0x40
class Skeleton : public Node {
    // Members
    class EvaluatorInfo * evals; // offset 0xC, size 0x4
    int evalCount; // offset 0x10, size 0x4
    class EvaluatorCallback * evalCBs; // offset 0x14, size 0x4
    int totalTransformCount; // offset 0x18, size 0x4
    class GroupNode * groups; // offset 0x1C, size 0x4
    int groupCount; // offset 0x20, size 0x4
    class SkinCluster * skins; // offset 0x24, size 0x4
    int skinCount; // offset 0x28, size 0x4
    int skinJointTotal; // offset 0x2C, size 0x4
    int morphWeightTotal; // offset 0x30, size 0x4
    signed char * transformToGroupMap; // offset 0x34, size 0x4
    bool userScale; // offset 0x38, size 0x1
    class Matrix43 * hackEvalResults; // offset 0x3C, size 0x4
};
// total size: 0x4
class EvaluatorInfo {
    // Members
    unsigned char transformCount; // offset 0x0, size 0x1
    unsigned char tranChannel; // offset 0x1, size 0x1
    unsigned char quatChannel; // offset 0x2, size 0x1
    unsigned char scaleChannel; // offset 0x3, size 0x1
};
// total size: 0x1
class EvaluatorCallback {
    // Members
    bool userScale; // offset 0x0, size 0x1
};
// total size: 0x4
class GroupNode {
    // Members
    unsigned short evalIndex; // offset 0x0, size 0x2
    short parent; // offset 0x2, size 0x2
};
// total size: 0x20
class SkinCluster {
    // Members
    unsigned char * parentIndices; // offset 0x0, size 0x4
    class EvaluatorSkinSection * sections; // offset 0x4, size 0x4
    class Matrix43 * invBindMat; // offset 0x8, size 0x4
    class Matrix33 * descaleInvBindMat; // offset 0xC, size 0x4
    unsigned char * geomIndices; // offset 0x10, size 0x4
    class WiiSkinVBone * wiiVBoneList; // offset 0x14, size 0x4
    unsigned short geomCount; // offset 0x18, size 0x2
    unsigned char sectionCount; // offset 0x1A, size 0x1
    unsigned char jointCount; // offset 0x1B, size 0x1
    unsigned short jointStart; // offset 0x1C, size 0x2
    unsigned short wiiVBoneCount; // offset 0x1E, size 0x2
};
// total size: 0x4
class EvaluatorSkinSection {
    // Members
    unsigned short start; // offset 0x0, size 0x2
    unsigned char size; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
};
// total size: 0x4
class WiiSkinVBone {
    // Members
    unsigned char srcBone[2]; // offset 0x0, size 0x2
    unsigned char srcWeight[2]; // offset 0x2, size 0x2
};
// total size: 0x58
class SkeletonBlobEntity : public BlobEntity {
    // Members
    class Skeleton skel; // offset 0x18, size 0x40
};
// total size: 0x1C
class LightSectorData : public Node {
    // Members
    unsigned short pointCount; // offset 0xC, size 0x2
    unsigned short spotCount; // offset 0xE, size 0x2
    unsigned char * sceneIndex; // offset 0x10, size 0x4
    class Vector4 * pointBound; // offset 0x14, size 0x4
    class Vector4 * spotBound; // offset 0x18, size 0x4
};
// total size: 0x8
class ParamCargo {
    // Members
    int textureCount; // offset 0x0, size 0x4
    class TextureResourceEntity * * textureEnts; // offset 0x4, size 0x4
};
// total size: 0x30
class TextureResourceEntity : public Entity {
    // Members
    class TextureContainer * texMem; // offset 0x18, size 0x4
    class EntityHandle * imageBlob; // offset 0x1C, size 0x4
    class BlobOwner imageOwner; // offset 0x20, size 0x10
};
// total size: 0x4C
class TextureContainer : public BlobCustomAlloc {
    // Members
    class Texture texture; // offset 0x4, size 0x48
};
// total size: 0x10
class BlobOwner : public Owner {
    // Members
    class EntityHandle * res; // offset 0xC, size 0x4
};
// total size: 0xA8
class LightKitEntity : public Entity {
    // Members
    class LightKit lightKit; // offset 0x18, size 0x8C
    class TextureResourceEntity * lookupTexEnt; // offset 0xA4, size 0x4
};
// total size: 0x8C
class LightKit : public Node {
    // Members
    class LightKitData data; // offset 0xC, size 0x80
};
// total size: 0x8
class RenderCustomizerInfo {
    // Members
    class RenderCustomizerData * instanceData; // offset 0x0, size 0x4
    class RenderCustomizerBaseEntity * renderCustomizerEntity; // offset 0x4, size 0x4
};
// total size: 0x4
class RenderCustomizerData {};
// total size: 0x1C
class RenderCustomizerBaseEntity : public Entity {
    // Members
    class CustomizerUVBase * mAsset; // offset 0x18, size 0x4
};
// total size: 0x1
class CustomizerUVBase {};
// total size: 0xC
class ModelXformBuffer {
    // Members
    class Renderable3DTransform * data; // offset 0x0, size 0x4
    class ModelXformBuffer * next; // offset 0x4, size 0x4
    unsigned int updateFrame; // offset 0x8, size 0x4
};
// total size: 0xC
class ModelJointBuffer {
    // Members
    class Matrix43 * data; // offset 0x0, size 0x4
    class ModelJointBuffer * next; // offset 0x4, size 0x4
    unsigned int updateFrame; // offset 0x8, size 0x4
};
// total size: 0xC
class ModelMorphWeightBuffer {
    // Members
    float * data; // offset 0x0, size 0x4
    class ModelMorphWeightBuffer * next; // offset 0x4, size 0x4
    unsigned int updateFrame; // offset 0x8, size 0x4
};
// total size: 0x40
class RefModelInstanceChildXform {
    // Members
    class Renderable3DTransform transforms[1]; // offset 0x0, size 0x40
};
// total size: 0x0
class Dummy {};
// total size: 0x38
class RelativeJointEntry {
    // Members
    class Matrix43 mat; // offset 0x0, size 0x30
    int rigidBodyIndex; // offset 0x30, size 0x4
    enum TransformSpace transformSpace; // offset 0x34, size 0x4
};
enum TransformSpace {
    PARENT_JOINT_RELATIVE = 0,
    RIGID_BODY_RELATIVE = 1,
    ROOT_RIGID_BODY_JOINT_RELATIVE = 2,
};
// total size: 0x40
class PhysicsJointRelativeTransforms : public hkReferencedObject {
    // Members
    class hkArray * bodyRelativeJointTransforms; // offset 0x8, size 0x4
    class Matrix43 rootJointInvBindMat; // offset 0xC, size 0x30
    int rootRigidBodyJointIndex; // offset 0x3C, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    class RelativeJointEntry * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x140
class hkThreadMemory {
    // Members
    class hkMemory * m_memory; // offset 0x4, size 0x4
    int m_referenceCount; // offset 0x8, size 0x4
    class Stack m_stack; // offset 0x10, size 0x10
    int m_stackSize; // offset 0x20, size 0x4
    int m_maxNumElemsOnFreeList; // offset 0x24, size 0x4
    class FreeList m_free_list[17]; // offset 0x28, size 0x88
    int m_row_to_size_lut[17]; // offset 0xB0, size 0x44
    char m_small_size_to_row_lut[35]; // offset 0xF4, size 0x23
    int m_large_size_to_row_lut[8]; // offset 0x118, size 0x20
};
// total size: 0xA1C
class hkMemory {
    // Members
    enum MemoryState m_memoryState; // offset 0x4, size 0x4
    int m_criticalMemoryLimit; // offset 0x8, size 0x4
    int m_memoryUsed; // offset 0xC, size 0x4
    int m_referenceCount; // offset 0x10, size 0x4
    int m_maxNumElemsOnThreadMemoryFreeList; // offset 0x14, size 0x4
    int m_numValidBigBlocks; // offset 0x18, size 0x4
    class BigBlockData m_bigBlockDataArray[128]; // offset 0x1C, size 0xA00
};
enum MemoryState {
    MEMORY_STATE_OK = 0,
    MEMORY_STATE_OUT_OF_MEMORY = 1,
};
// total size: 0x14
class BigBlockData {
    // Members
    class hkBool m_available; // offset 0x0, size 0x1
    int m_size; // offset 0x4, size 0x4
    void * m_memory; // offset 0x8, size 0x4
    enum HK_MEMORY_CLASS m_class; // offset 0xC, size 0x4
    class hkBool m_providedByOutside; // offset 0x10, size 0x1
};
enum HK_MEMORY_CLASS {
    HK_MEMORY_CLASS_ROOT = 0,
    HK_MEMORY_CLASS_BASE = 1,
    HK_MEMORY_CLASS_COLLIDE = 2,
    HK_MEMORY_CLASS_CONSTRAINT_SOLVER = 3,
    HK_MEMORY_CLASS_DYNAMICS = 4,
    HK_MEMORY_CLASS_EXPORT = 5,
    HK_MEMORY_CLASS_SERIALIZE = 6,
    HK_MEMORY_CLASS_GEOMETRY = 7,
    HK_MEMORY_CLASS_DISPLAY = 8,
    HK_MEMORY_CLASS_MATH = 9,
    HK_MEMORY_CLASS_SCENE_DATA = 10,
    HK_MEMORY_CLASS_VEHICLE = 11,
    HK_MEMORY_CLASS_DESTRUCTION = 12,
    HK_MEMORY_CLASS_UTILITIES = 13,
    HK_MEMORY_CLASS_ANIMATION = 14,
    HK_MEMORY_CLASS_BEHAVIOR = 15,
    HK_MEMORY_CLASS_CLOTH = 16,
    HK_MEMORY_CLASS_AI = 17,
    HK_MEMORY_CLASS_TOOLS = 18,
    HK_MEMORY_CLASS_DEMO_FRAMEWORK = 19,
    HK_MEMORY_CLASS_DEMO = 20,
    HK_MEMORY_CLASS_USER = 21,
    HK_MEMORY_CLASS_BASE_CLASS = 22,
    HK_MEMORY_CLASS_STRING = 23,
    HK_MEMORY_CLASS_ARRAY = 24,
    HK_MEMORY_CLASS_SINGLETON = 25,
    HK_MEMORY_CLASS_SCRATCHPAD = 26,
    HK_MEMORY_CLASS_STREAM = 27,
    HK_MEMORY_CLASS_MONITOR = 28,
    HK_MEMORY_CLASS_MAP = 29,
    HK_MEMORY_CLASS_TREE = 30,
    HK_MEMORY_CLASS_HKCLASS = 31,
    HK_MEMORY_CLASS_AGENT = 32,
    HK_MEMORY_CLASS_ALGORITHM = 33,
    HK_MEMORY_CLASS_BROAD_PHASE = 34,
    HK_MEMORY_CLASS_CONTACT = 35,
    HK_MEMORY_CLASS_DISPATCH = 36,
    HK_MEMORY_CLASS_MANIFOLD = 37,
    HK_MEMORY_CLASS_SHAPE = 38,
    HK_MEMORY_CLASS_COLLIDABLE = 39,
    HK_MEMORY_CLASS_CDINFO = 40,
    HK_MEMORY_CLASS_MOPP = 41,
    HK_MEMORY_CLASS_ACTION = 42,
    HK_MEMORY_CLASS_DYNCOLLIDE = 43,
    HK_MEMORY_CLASS_DEACTIVATOR = 44,
    HK_MEMORY_CLASS_CONSTRAINT = 45,
    HK_MEMORY_CLASS_ENTITY = 46,
    HK_MEMORY_CLASS_MOTION = 47,
    HK_MEMORY_CLASS_WORLD = 48,
    HK_MEMORY_CLASS_RIGID_BODY = 49,
    HK_MEMORY_CLASS_PHANTOM = 50,
    HK_MEMORY_CLASS_SIMISLAND = 51,
    HK_MEMORY_CLASS_CAMERA = 52,
    HK_MEMORY_CLASS_CHARACTER = 53,
    HK_MEMORY_CLASS_VDB = 54,
    HK_MEMORY_CLASS_INERTIA = 55,
    HK_MEMORY_CLASS_ANIM_UNCOMPRESSED = 56,
    HK_MEMORY_CLASS_ANIM_COMPRESSED = 57,
    HK_MEMORY_CLASS_ANIM_DATA = 58,
    HK_MEMORY_CLASS_ANIM_MOTION = 59,
    HK_MEMORY_CLASS_ANIM_RIG = 60,
    HK_MEMORY_CLASS_ANIM_CONTROL = 61,
    HK_MEMORY_CLASS_ANIM_RUNTIME = 62,
    HK_MEMORY_CLASS_ANIM_CACHE = 63,
    HK_MEMORY_CLASS_BEHAVIOR_RUNTIME = 64,
    HK_MEMORY_CLASS_BEHAVIOR_DEMOS = 65,
    HK_MEMORY_CLASS_CLOTH_RUNTIME = 66,
    HK_MEMORY_CLASS_CLOTH_DATA = 67,
    HK_MEMORY_CLASS_CLOTH_SETUP = 68,
    HK_MEMORY_CLASS_AI_NAVMESH = 69,
    HK_MEMORY_CLASS_AI_ASTAR = 70,
    HK_MEMORY_CLASS_AI_STEERING = 71,
    HK_MEMORY_CLASS_USER_1 = 72,
    HK_MEMORY_CLASS_USER_2 = 73,
    HK_MEMORY_CLASS_USER_3 = 74,
    HK_MEMORY_CLASS_USER_4 = 75,
    HK_MEMORY_CLASS_PRE_ALLOCATED = 76,
    HK_MEMORY_CLASS_MAX = 77,
};
// total size: 0x10
class Stack {
    // Members
    char * m_current; // offset 0x0, size 0x4
    class Stack * m_prev; // offset 0x4, size 0x4
    char * m_base; // offset 0x8, size 0x4
    char * m_end; // offset 0xC, size 0x4
};
// total size: 0x8
class FreeList {
    // Members
    class FreeElem * m_head; // offset 0x0, size 0x4
    int m_numElem; // offset 0x4, size 0x4
};
// total size: 0x4
class FreeElem {
    // Members
    class FreeElem * m_next; // offset 0x0, size 0x4
};
// total size: 0x40
class xMat4x3 : public xMat3x3 {
    // Members
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x30
class xMat3x3 {
    // Members
    class xVec3 left; // offset 0x0, size 0xC
    int flags; // offset 0xC, size 0x4
    class xVec3 up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class xVec3 at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
};
// total size: 0xC
class xVec3 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    class hkpShape * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    class hkVector4 * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    class hkTransform * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    unsigned int * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    enum MotionType * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    float * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    enum hkpCollidableQualityType * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x18
class ConstraintInfo : public hkpConstraintInfo {
    // Members
    class hkpConstraintAtom * m_atoms; // offset 0x10, size 0x4
    unsigned int m_sizeOfAllAtoms; // offset 0x14, size 0x4
};
// total size: 0x140
class hkpRagdollConstraintData : public hkpConstraintData {
    // Members
    class Atoms m_atoms; // offset 0x10, size 0x130
};
// total size: 0x130
class Atoms {
    // Members
    class hkpSetLocalTransformsConstraintAtom m_transforms; // offset 0x0, size 0x90
    class hkpRagdollMotorConstraintAtom m_ragdollMotors; // offset 0x90, size 0x50
    class hkpAngFrictionConstraintAtom m_angFriction; // offset 0xE0, size 0xC
    class hkpTwistLimitConstraintAtom m_twistLimit; // offset 0xEC, size 0x14
    class hkpConeLimitConstraintAtom m_coneLimit; // offset 0x100, size 0x14
    class hkpConeLimitConstraintAtom m_planesLimit; // offset 0x114, size 0x14
    class hkpBallSocketConstraintAtom m_ballSocket; // offset 0x128, size 0x8
};
// total size: 0x90
class hkpSetLocalTransformsConstraintAtom : public hkpConstraintAtom {
    // Members
    class hkTransform m_transformA; // offset 0x10, size 0x40
    class hkTransform m_transformB; // offset 0x50, size 0x40
};
// total size: 0x50
class hkpRagdollMotorConstraintAtom : public hkpConstraintAtom {
    // Members
    class hkBool m_isEnabled; // offset 0x2, size 0x1
    short m_initializedOffset; // offset 0x4, size 0x2
    short m_previousTargetAnglesOffset; // offset 0x6, size 0x2
    class hkMatrix3 m_target_bRca; // offset 0x10, size 0x30
    class hkpConstraintMotor * m_motors[3]; // offset 0x40, size 0xC
};
// total size: 0x0
class hkpConstraintMotor {};
// total size: 0xC
class hkpAngFrictionConstraintAtom : public hkpConstraintAtom {
    // Members
    unsigned char m_isEnabled; // offset 0x2, size 0x1
    unsigned char m_firstFrictionAxis; // offset 0x3, size 0x1
    unsigned char m_numFrictionAxes; // offset 0x4, size 0x1
    float m_maxFrictionTorque; // offset 0x8, size 0x4
};
// total size: 0x14
class hkpTwistLimitConstraintAtom : public hkpConstraintAtom {
    // Members
    unsigned char m_isEnabled; // offset 0x2, size 0x1
    unsigned char m_twistAxis; // offset 0x3, size 0x1
    unsigned char m_refAxis; // offset 0x4, size 0x1
    float m_minAngle; // offset 0x8, size 0x4
    float m_maxAngle; // offset 0xC, size 0x4
    float m_angularLimitsTauFactor; // offset 0x10, size 0x4
};
// total size: 0x14
class hkpConeLimitConstraintAtom : public hkpConstraintAtom {
    // Members
    unsigned char m_isEnabled; // offset 0x2, size 0x1
    unsigned char m_twistAxisInA; // offset 0x3, size 0x1
    unsigned char m_refAxisInB; // offset 0x4, size 0x1
    class hkEnum m_angleMeasurementMode; // offset 0x5, size 0x1
    unsigned char m_memOffsetToAngleOffset; // offset 0x6, size 0x1
    float m_minAngle; // offset 0x8, size 0x4
    float m_maxAngle; // offset 0xC, size 0x4
    float m_angularLimitsTauFactor; // offset 0x10, size 0x4
};
// total size: 0x8
class hkpBallSocketConstraintAtom : public hkpConstraintAtom {
    // Members
    unsigned char m_bodiesToNotify; // offset 0x2, size 0x1
    class hkUFloat8 m_stabilizationFactor; // offset 0x3, size 0x1
    float m_maxImpulse; // offset 0x4, size 0x4
};
// total size: 0x50
class hkpStiffSpringConstraintData : public hkpConstraintData {
    // Members
    class Atoms m_atoms; // offset 0x10, size 0x40
};
// total size: 0x40
class Atoms {
    // Members
    class hkpSetLocalTranslationsConstraintAtom m_pivots; // offset 0x0, size 0x30
    class hkpStiffSpringConstraintAtom m_spring; // offset 0x30, size 0x8
};
// total size: 0x30
class hkpSetLocalTranslationsConstraintAtom : public hkpConstraintAtom {
    // Members
    class hkVector4 m_translationA; // offset 0x10, size 0x10
    class hkVector4 m_translationB; // offset 0x20, size 0x10
};
// total size: 0x8
class hkpStiffSpringConstraintAtom : public hkpConstraintAtom {
    // Members
    float m_length; // offset 0x4, size 0x4
};
// total size: 0xB0
class hkpHingeConstraintData : public hkpConstraintData {
    // Members
    class Atoms m_atoms; // offset 0x10, size 0xA0
};
// total size: 0xA0
class Atoms {
    // Members
    class hkpSetLocalTransformsConstraintAtom m_transforms; // offset 0x0, size 0x90
    class hkp2dAngConstraintAtom m_2dAng; // offset 0x90, size 0x4
    class hkpBallSocketConstraintAtom m_ballSocket; // offset 0x94, size 0x8
};
// total size: 0x4
class hkp2dAngConstraintAtom : public hkpConstraintAtom {
    // Members
    unsigned char m_freeRotationAxis; // offset 0x2, size 0x1
};
// total size: 0xD0
class hkpPrismaticConstraintData : public hkpConstraintData {
    // Members
    class Atoms m_atoms; // offset 0x10, size 0xC0
};
// total size: 0xC0
class Atoms {
    // Members
    class hkpSetLocalTransformsConstraintAtom m_transforms; // offset 0x0, size 0x90
    class hkpLinMotorConstraintAtom m_motor; // offset 0x90, size 0x10
    class hkpLinFrictionConstraintAtom m_friction; // offset 0xA0, size 0x8
    class hkpAngConstraintAtom m_ang; // offset 0xA8, size 0x4
    class hkpLinConstraintAtom m_lin0; // offset 0xAC, size 0x4
    class hkpLinConstraintAtom m_lin1; // offset 0xB0, size 0x4
    class hkpLinLimitConstraintAtom m_linLimit; // offset 0xB4, size 0xC
};
// total size: 0x10
class hkpLinMotorConstraintAtom : public hkpConstraintAtom {
    // Members
    class hkBool m_isEnabled; // offset 0x2, size 0x1
    unsigned char m_motorAxis; // offset 0x3, size 0x1
    short m_initializedOffset; // offset 0x4, size 0x2
    short m_previousTargetPositionOffset; // offset 0x6, size 0x2
    float m_targetPosition; // offset 0x8, size 0x4
    class hkpConstraintMotor * m_motor; // offset 0xC, size 0x4
};
// total size: 0x8
class hkpLinFrictionConstraintAtom : public hkpConstraintAtom {
    // Members
    unsigned char m_isEnabled; // offset 0x2, size 0x1
    unsigned char m_frictionAxis; // offset 0x3, size 0x1
    float m_maxFrictionForce; // offset 0x4, size 0x4
};
// total size: 0x4
class hkpAngConstraintAtom : public hkpConstraintAtom {
    // Members
    unsigned char m_firstConstrainedAxis; // offset 0x2, size 0x1
    unsigned char m_numConstrainedAxes; // offset 0x3, size 0x1
};
// total size: 0x4
class hkpLinConstraintAtom : public hkpConstraintAtom {
    // Members
    unsigned char m_axisIndex; // offset 0x2, size 0x1
};
// total size: 0xC
class hkpLinLimitConstraintAtom : public hkpConstraintAtom {
    // Members
    unsigned char m_axisIndex; // offset 0x2, size 0x1
    float m_min; // offset 0x4, size 0x4
    float m_max; // offset 0x8, size 0x4
};
// total size: 0x50
class hkpBallAndSocketConstraintData : public hkpConstraintData {
    // Members
    class Atoms m_atoms; // offset 0x10, size 0x40
};
// total size: 0x40
class Atoms {
    // Members
    class hkpSetLocalTranslationsConstraintAtom m_pivots; // offset 0x0, size 0x30
    class hkpBallSocketConstraintAtom m_ballSocket; // offset 0x30, size 0x8
};
// total size: 0xE0
class hkpLimitedHingeConstraintData : public hkpConstraintData {
    // Members
    class Atoms m_atoms; // offset 0x10, size 0xD0
};
// total size: 0xD0
class Atoms {
    // Members
    class hkpSetLocalTransformsConstraintAtom m_transforms; // offset 0x0, size 0x90
    class hkpAngMotorConstraintAtom m_angMotor; // offset 0x90, size 0x14
    class hkpAngFrictionConstraintAtom m_angFriction; // offset 0xA4, size 0xC
    class hkpAngLimitConstraintAtom m_angLimit; // offset 0xB0, size 0x10
    class hkp2dAngConstraintAtom m_2dAng; // offset 0xC0, size 0x4
    class hkpBallSocketConstraintAtom m_ballSocket; // offset 0xC4, size 0x8
};
// total size: 0x14
class hkpAngMotorConstraintAtom : public hkpConstraintAtom {
    // Members
    class hkBool m_isEnabled; // offset 0x2, size 0x1
    unsigned char m_motorAxis; // offset 0x3, size 0x1
    short m_initializedOffset; // offset 0x4, size 0x2
    short m_previousTargetAngleOffset; // offset 0x6, size 0x2
    short m_correspondingAngLimitSolverResultOffset; // offset 0x8, size 0x2
    float m_targetAngle; // offset 0xC, size 0x4
    class hkpConstraintMotor * m_motor; // offset 0x10, size 0x4
};
// total size: 0x10
class hkpAngLimitConstraintAtom : public hkpConstraintAtom {
    // Members
    unsigned char m_isEnabled; // offset 0x2, size 0x1
    unsigned char m_limitAxis; // offset 0x3, size 0x1
    float m_minAngle; // offset 0x4, size 0x4
    float m_maxAngle; // offset 0x8, size 0x4
    float m_angularLimitsTauFactor; // offset 0xC, size 0x4
};
// total size: 0xB0
class hkpPointToPathConstraintData : public hkpConstraintData {
    // Members
    class hkpBridgeAtoms m_atoms; // offset 0xC, size 0xC
    class hkpParametricCurve * m_path; // offset 0x18, size 0x4
    float m_maxFrictionForce; // offset 0x1C, size 0x4
    class hkEnum m_angularConstrainedDOF; // offset 0x20, size 0x1
    class hkTransform m_transform_OS_KS[2]; // offset 0x30, size 0x80
};
// total size: 0xC
class hkpBridgeAtoms {
    // Members
    class hkpBridgeConstraintAtom m_bridgeAtom; // offset 0x0, size 0xC
};
// total size: 0xC
class hkpBridgeConstraintAtom : public hkpConstraintAtom {
    // Members
    void (* m_buildJacobianFunc)(class hkpConstraintData * m_constraintData, class hkpConstraintQueryIn & in, class hkpConstraintQueryOut & out); // offset 0x4, size 0x4
    class hkpConstraintData * m_constraintData; // offset 0x8, size 0x4
};
// total size: 0x0
class hkpConstraintQueryIn {};
// total size: 0x0
class hkpConstraintQueryOut {};
// total size: 0x8
class hkpParametricCurve : public hkReferencedObject {};
// total size: 0x160
class hkpWheelConstraintData : public hkpConstraintData {
    // Members
    class Atoms m_atoms; // offset 0x10, size 0x130
    class hkVector4 m_initialAxleInB; // offset 0x140, size 0x10
    class hkVector4 m_initialSteeringAxisInB; // offset 0x150, size 0x10
};
// total size: 0x130
class Atoms {
    // Members
    class hkpSetLocalTransformsConstraintAtom m_suspensionBase; // offset 0x0, size 0x90
    class hkpLinLimitConstraintAtom m_lin0Limit; // offset 0x90, size 0xC
    class hkpLinSoftConstraintAtom m_lin0Soft; // offset 0x9C, size 0xC
    class hkpLinConstraintAtom m_lin1; // offset 0xA8, size 0x4
    class hkpLinConstraintAtom m_lin2; // offset 0xAC, size 0x4
    class hkpSetLocalRotationsConstraintAtom m_steeringBase; // offset 0xB0, size 0x70
    class hkp2dAngConstraintAtom m_2dAng; // offset 0x120, size 0x4
};
// total size: 0xC
class hkpLinSoftConstraintAtom : public hkpConstraintAtom {
    // Members
    unsigned char m_axisIndex; // offset 0x2, size 0x1
    float m_tau; // offset 0x4, size 0x4
    float m_damping; // offset 0x8, size 0x4
};
// total size: 0x70
class hkpSetLocalRotationsConstraintAtom : public hkpConstraintAtom {
    // Members
    class hkRotation m_rotationA; // offset 0x10, size 0x30
    class hkRotation m_rotationB; // offset 0x40, size 0x30
};
// total size: 0x58
class hkpGenericConstraintData : public hkpConstraintData {
    // Members
    class hkpBridgeAtoms m_atoms; // offset 0xC, size 0xC
    class hkpGenericConstraintDataScheme m_scheme; // offset 0x18, size 0x40
};
// total size: 0x40
class hkpGenericConstraintDataScheme {
    // Members
    class hkpConstraintInfo m_info; // offset 0x0, size 0x10
    class hkArray m_data; // offset 0x10, size 0xC
    class hkArray m_commands; // offset 0x1C, size 0xC
    class hkArray m_modifiers; // offset 0x28, size 0xC
    class hkArray m_motors; // offset 0x34, size 0xC
};
// total size: 0xC
class hkArray {
    // Members
    int * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    class hkpConstraintModifier * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x0
class hkpConstraintModifier {};
// total size: 0xC
class hkArray {
    // Members
    class hkpConstraintMotor * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x30
class hkpSimpleContactConstraintData : public hkpConstraintData {
    // Members
    class hkpDynamicsCpIdMgr m_idMgrA; // offset 0xC, size 0x14
    void * m_clientData; // offset 0x20, size 0x4
    class hkpConstraintInstance * m_constraint; // offset 0x24, size 0x4
    class hkpSimpleContactConstraintAtom * m_atom; // offset 0x28, size 0x4
    int m_atomSize; // offset 0x2C, size 0x4
};
// total size: 0x14
class hkpDynamicsCpIdMgr {
    // Members
    class hkInplaceArray m_values; // offset 0x0, size 0x14
};
// total size: 0x14
class hkInplaceArray : public hkArray {
    // Members
    unsigned char m_storage[8]; // offset 0xC, size 0x8
};
// total size: 0x30
class hkpSimpleContactConstraintAtom : public hkpConstraintAtom {
    // Members
    unsigned short m_sizeOfAllAtoms; // offset 0x2, size 0x2
    unsigned short m_numContactPoints; // offset 0x4, size 0x2
    unsigned short m_numReservedContactPoints; // offset 0x6, size 0x2
    unsigned char m_numUserDatasForBodyA; // offset 0x8, size 0x1
    unsigned char m_numUserDatasForBodyB; // offset 0x9, size 0x1
    unsigned char m_contactPointPropertiesStriding; // offset 0xA, size 0x1
    unsigned short m_maxNumContactPoints; // offset 0xC, size 0x2
    class hkpSimpleContactConstraintDataInfo m_info; // offset 0x10, size 0x20
};
// total size: 0x20
class hkpSimpleContactConstraintDataInfo {
    // Members
    unsigned short m_flags; // offset 0x0, size 0x2
    unsigned short m_index; // offset 0x2, size 0x2
    unsigned int m_data[7]; // offset 0x4, size 0x1C
};
// total size: 0x28
class hkpBreakableConstraintData : public hkpConstraintData {
    // Members
    class hkpBridgeAtoms m_atoms; // offset 0xC, size 0xC
    class hkpConstraintData * m_constraintData; // offset 0x18, size 0x4
    unsigned short m_childRuntimeSize; // offset 0x1C, size 0x2
    unsigned short m_childNumSolverResults; // offset 0x1E, size 0x2
    float m_solverResultLimit; // offset 0x20, size 0x4
    class hkBool m_removeWhenBroken; // offset 0x24, size 0x1
    class hkBool m_revertBackVelocityOnBreak; // offset 0x25, size 0x1
};
// total size: 0x20
class hkpMalleableConstraintData : public hkpConstraintData {
    // Members
    class hkpConstraintData * m_constraintData; // offset 0xC, size 0x4
    class hkpBridgeAtoms m_atoms; // offset 0x10, size 0xC
    float m_strength; // offset 0x1C, size 0x4
};
// total size: 0xB0
class hkpPointToPlaneConstraintData : public hkpConstraintData {
    // Members
    class Atoms m_atoms; // offset 0x10, size 0xA0
};
// total size: 0xA0
class Atoms {
    // Members
    class hkpSetLocalTransformsConstraintAtom m_transforms; // offset 0x0, size 0x90
    class hkpLinConstraintAtom m_lin; // offset 0x90, size 0x4
};
// total size: 0x80
class hkpPulleyConstraintData : public hkpConstraintData {
    // Members
    class Atoms m_atoms; // offset 0x10, size 0x70
};
// total size: 0x70
class Atoms {
    // Members
    class hkpSetLocalTranslationsConstraintAtom m_translations; // offset 0x0, size 0x30
    class hkpPulleyConstraintAtom m_pulley; // offset 0x30, size 0x40
};
// total size: 0x40
class hkpPulleyConstraintAtom : public hkpConstraintAtom {
    // Members
    class hkVector4 m_fixedPivotAinWorld; // offset 0x10, size 0x10
    class hkVector4 m_fixedPivotBinWorld; // offset 0x20, size 0x10
    float m_ropeLength; // offset 0x30, size 0x4
    float m_leverageOnBodyB; // offset 0x34, size 0x4
};
// total size: 0x90
class hkpRotationalConstraintData : public hkpConstraintData {
    // Members
    class Atoms m_atoms; // offset 0x10, size 0x80
};
// total size: 0x80
class Atoms {
    // Members
    class hkpSetLocalRotationsConstraintAtom m_rotations; // offset 0x0, size 0x70
    class hkpAngConstraintAtom m_ang; // offset 0x70, size 0x4
};
// total size: 0xA0
class hkpHingeLimitsData : public hkpConstraintData {
    // Members
    class Atoms m_atoms; // offset 0x10, size 0x90
};
// total size: 0x90
class Atoms {
    // Members
    class hkpSetLocalRotationsConstraintAtom m_rotations; // offset 0x0, size 0x70
    class hkpAngLimitConstraintAtom m_angLimit; // offset 0x70, size 0x10
    class hkp2dAngConstraintAtom m_2dAng; // offset 0x80, size 0x4
};
// total size: 0xC0
class hkpRagdollLimitsData : public hkpConstraintData {
    // Members
    class Atoms m_atoms; // offset 0x10, size 0xB0
};
// total size: 0xB0
class Atoms {
    // Members
    class hkpSetLocalRotationsConstraintAtom m_rotations; // offset 0x0, size 0x70
    class hkpTwistLimitConstraintAtom m_twistLimit; // offset 0x70, size 0x14
    class hkpConeLimitConstraintAtom m_coneLimit; // offset 0x84, size 0x14
    class hkpConeLimitConstraintAtom m_planesLimit; // offset 0x98, size 0x14
};
enum GraphicsAssociationType {
    INVALID = 0,
    JOINT_NUMBER = 1,
    RENDERABLE_INDEX = 2,
};
enum hkResult {
    HK_SUCCESS = 0,
    HK_FAILURE = 1,
};
enum JointTransformSpace {
    MODEL_SPACE = 0,
    MODEL_INV_BIND_SPACE = 1,
};
// total size: 0x10
class hkLocalArray : public hkArray {
    // Members
    class Matrix43 * m_localMemory; // offset 0xC, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    class Matrix43 * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
enum PhysicsRenderableMatchType {
    TELEPORT = 0,
    KEYFRAMED = 1,
};
// total size: 0x10
class Quaternion {
    // Members
    class Vector4 v; // offset 0x0, size 0x10
};
// total size: 0x10
class xSphere {
    // Members
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
// total size: 0x20
class hkAabb {
    // Members
    class hkVector4 m_min; // offset 0x0, size 0x10
    class hkVector4 m_max; // offset 0x10, size 0x10
};
enum hkpShapeType {
    HK_SHAPE_INVALID = 0,
    HK_SHAPE_SPHERE = 1,
    HK_FIRST_SHAPE_TYPE = 1,
    HK_SHAPE_CYLINDER = 2,
    HK_SHAPE_TRIANGLE = 3,
    HK_SHAPE_BOX = 4,
    HK_SHAPE_CAPSULE = 5,
    HK_SHAPE_CONVEX_VERTICES = 6,
    HK_SHAPE_COLLECTION = 7,
    HK_SHAPE_BV_TREE = 8,
    HK_SHAPE_LIST = 9,
    HK_SHAPE_MOPP = 10,
    HK_SHAPE_CONVEX_TRANSLATE = 11,
    HK_SHAPE_CONVEX_TRANSFORM = 12,
    HK_SHAPE_SAMPLED_HEIGHT_FIELD = 13,
    HK_SHAPE_EXTENDED_MESH = 14,
    HK_SHAPE_TRANSFORM = 15,
    HK_SHAPE_MAX_ID_SPU = 16,
    HK_SHAPE_CONVEX = 17,
    HK_SHAPE_PACKED_CONVEX_VERTICES = 18,
    HK_SHAPE_MOPP_EMBEDDED = 19,
    HK_SHAPE_CONVEX_PIECE = 20,
    HK_SHAPE_MULTI_SPHERE = 21,
    HK_SHAPE_CONVEX_LIST = 22,
    HK_SHAPE_TRIANGLE_COLLECTION = 23,
    HK_SHAPE_MULTI_RAY = 24,
    HK_SHAPE_HEIGHT_FIELD = 25,
    HK_SHAPE_SPHERE_REP = 26,
    HK_SHAPE_BV = 27,
    HK_SHAPE_PLANE = 28,
    HK_SHAPE_PHANTOM_CALLBACK = 29,
    HK_SHAPE_USER0 = 30,
    HK_SHAPE_USER1 = 31,
    HK_SHAPE_USER2 = 32,
    HK_SHAPE_MAX_ID = 33,
    HK_SHAPE_ALL = 4294967295,
};
// total size: 0x30
class hkpConvexTranslateShape : public hkpConvexTransformShapeBase {
    // Members
    class hkVector4 m_translation; // offset 0x20, size 0x10
};
// total size: 0x20
class hkpConvexTransformShapeBase : public hkpConvexShape {
    // Members
    class hkpSingleShapeContainer m_childShape; // offset 0x14, size 0x8
    int m_childShapeSize; // offset 0x1C, size 0x4
};
// total size: 0x14
class hkpConvexShape : public hkpSphereRepShape {
    // Members
    float m_radius; // offset 0x10, size 0x4
};
// total size: 0x10
class hkpSphereRepShape : public hkpShape {};
// total size: 0x8
class hkpSingleShapeContainer : public hkpShapeContainer {
    // Members
    class hkpShape * m_childShape; // offset 0x4, size 0x4
};
// total size: 0x4
class hkpShapeContainer {};
// total size: 0x60
class hkpConvexTransformShape : public hkpConvexTransformShapeBase {
    // Members
    class hkTransform m_transform; // offset 0x20, size 0x40
};
// total size: 0x3008
class zQueue {
    // Members
    int first; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    class AnimSoundEntry data[1024]; // offset 0x8, size 0x3000
};
// total size: 0xC
class AnimSoundEntry {
    // Members
    class AnimationSet * animset; // offset 0x0, size 0x4
    class AnimPackage * animPackage; // offset 0x4, size 0x4
    class zSoundAsset * sasset; // offset 0x8, size 0x4
};
// total size: 0xC
class AnimationSet {
    // Members
    unsigned int AnimSetType; // offset 0x0, size 0x4
    class __Animations__ Animations; // offset 0x4, size 0x8
};
// total size: 0x8
class __Animations__ {
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
class AnimPackage {
    // Members
    class __ItemList__ ItemList; // offset 0x0, size 0x8
    class myUid id; // offset 0x8, size 0x8
    class Pointer32 VariationNameString; // offset 0x10, size 0x4
};
// total size: 0x8
class __ItemList__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class myUid {
    // Members
    class uid Uid; // offset 0x0, size 0x8
};
// total size: 0x8
class uid {
    // Members
    unsigned long long internalUid; // offset 0x0, size 0x8
};
// total size: 0x48
class zSoundAsset {
    // Members
    char * soundSourceName; // offset 0x0, size 0x4
    int soundSourceIdx; // offset 0x4, size 0x4
    int indicesCount; // offset 0x8, size 0x4
    int * indicesTree; // offset 0xC, size 0x4
    int level; // offset 0x10, size 0x4
    class Event * event; // offset 0x14, size 0x4
    class Channel * channel; // offset 0x18, size 0x4
    unsigned long long idLoopingSoundOwner; // offset 0x20, size 0x8
    class FMOD_VECTOR * pos; // offset 0x28, size 0x4
    enum FMOD_RESULT (* userCallback)(class FMOD_EVENT * event, enum FMOD_EVENT_CALLBACKTYPE type, void * param1, void * param2, void * userdata); // offset 0x2C, size 0x4
    void * userCallbackData; // offset 0x30, size 0x4
    char rootGroupName[6]; // offset 0x34, size 0x6
    bool streamed; // offset 0x3A, size 0x1
    bool stopOnAnimEnd; // offset 0x3B, size 0x1
    float max3Ddistance; // offset 0x40, size 0x4
};
// total size: 0x1
class Event {};
// total size: 0x1
class Channel {};
// total size: 0xC
class FMOD_VECTOR {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
enum FMOD_RESULT {
    FMOD_OK = 0,
    FMOD_ERR_ALREADYLOCKED = 1,
    FMOD_ERR_BADCOMMAND = 2,
    FMOD_ERR_CDDA_DRIVERS = 3,
    FMOD_ERR_CDDA_INIT = 4,
    FMOD_ERR_CDDA_INVALID_DEVICE = 5,
    FMOD_ERR_CDDA_NOAUDIO = 6,
    FMOD_ERR_CDDA_NODEVICES = 7,
    FMOD_ERR_CDDA_NODISC = 8,
    FMOD_ERR_CDDA_READ = 9,
    FMOD_ERR_CHANNEL_ALLOC = 10,
    FMOD_ERR_CHANNEL_STOLEN = 11,
    FMOD_ERR_COM = 12,
    FMOD_ERR_DMA = 13,
    FMOD_ERR_DSP_CONNECTION = 14,
    FMOD_ERR_DSP_FORMAT = 15,
    FMOD_ERR_DSP_NOTFOUND = 16,
    FMOD_ERR_DSP_RUNNING = 17,
    FMOD_ERR_DSP_TOOMANYCONNECTIONS = 18,
    FMOD_ERR_FILE_BAD = 19,
    FMOD_ERR_FILE_COULDNOTSEEK = 20,
    FMOD_ERR_FILE_DISKEJECTED = 21,
    FMOD_ERR_FILE_EOF = 22,
    FMOD_ERR_FILE_NOTFOUND = 23,
    FMOD_ERR_FILE_UNWANTED = 24,
    FMOD_ERR_FORMAT = 25,
    FMOD_ERR_HTTP = 26,
    FMOD_ERR_HTTP_ACCESS = 27,
    FMOD_ERR_HTTP_PROXY_AUTH = 28,
    FMOD_ERR_HTTP_SERVER_ERROR = 29,
    FMOD_ERR_HTTP_TIMEOUT = 30,
    FMOD_ERR_INITIALIZATION = 31,
    FMOD_ERR_INITIALIZED = 32,
    FMOD_ERR_INTERNAL = 33,
    FMOD_ERR_INVALID_ADDRESS = 34,
    FMOD_ERR_INVALID_FLOAT = 35,
    FMOD_ERR_INVALID_HANDLE = 36,
    FMOD_ERR_INVALID_PARAM = 37,
    FMOD_ERR_INVALID_POSITION = 38,
    FMOD_ERR_INVALID_SPEAKER = 39,
    FMOD_ERR_INVALID_SYNCPOINT = 40,
    FMOD_ERR_INVALID_VECTOR = 41,
    FMOD_ERR_IRX = 42,
    FMOD_ERR_MAXAUDIBLE = 43,
    FMOD_ERR_MEMORY = 44,
    FMOD_ERR_MEMORY_CANTPOINT = 45,
    FMOD_ERR_MEMORY_IOP = 46,
    FMOD_ERR_MEMORY_SRAM = 47,
    FMOD_ERR_NEEDS2D = 48,
    FMOD_ERR_NEEDS3D = 49,
    FMOD_ERR_NEEDSHARDWARE = 50,
    FMOD_ERR_NEEDSSOFTWARE = 51,
    FMOD_ERR_NET_CONNECT = 52,
    FMOD_ERR_NET_SOCKET_ERROR = 53,
    FMOD_ERR_NET_URL = 54,
    FMOD_ERR_NET_WOULD_BLOCK = 55,
    FMOD_ERR_NOTREADY = 56,
    FMOD_ERR_OUTPUT_ALLOCATED = 57,
    FMOD_ERR_OUTPUT_CREATEBUFFER = 58,
    FMOD_ERR_OUTPUT_DRIVERCALL = 59,
    FMOD_ERR_OUTPUT_ENUMERATION = 60,
    FMOD_ERR_OUTPUT_FORMAT = 61,
    FMOD_ERR_OUTPUT_INIT = 62,
    FMOD_ERR_OUTPUT_NOHARDWARE = 63,
    FMOD_ERR_OUTPUT_NOSOFTWARE = 64,
    FMOD_ERR_PAN = 65,
    FMOD_ERR_PLUGIN = 66,
    FMOD_ERR_PLUGIN_INSTANCES = 67,
    FMOD_ERR_PLUGIN_MISSING = 68,
    FMOD_ERR_PLUGIN_RESOURCE = 69,
    FMOD_ERR_RECORD = 70,
    FMOD_ERR_REVERB_INSTANCE = 71,
    FMOD_ERR_SUBSOUND_ALLOCATED = 72,
    FMOD_ERR_SUBSOUND_CANTMOVE = 73,
    FMOD_ERR_SUBSOUND_MODE = 74,
    FMOD_ERR_SUBSOUNDS = 75,
    FMOD_ERR_TAGNOTFOUND = 76,
    FMOD_ERR_TOOMANYCHANNELS = 77,
    FMOD_ERR_UNIMPLEMENTED = 78,
    FMOD_ERR_UNINITIALIZED = 79,
    FMOD_ERR_UNSUPPORTED = 80,
    FMOD_ERR_UPDATE = 81,
    FMOD_ERR_VERSION = 82,
    FMOD_ERR_PRELOADED = 83,
    FMOD_ERR_EVENT_FAILED = 84,
    FMOD_ERR_EVENT_INFOONLY = 85,
    FMOD_ERR_EVENT_INTERNAL = 86,
    FMOD_ERR_EVENT_MAXSTREAMS = 87,
    FMOD_ERR_EVENT_MISMATCH = 88,
    FMOD_ERR_EVENT_NAMECONFLICT = 89,
    FMOD_ERR_EVENT_NOTFOUND = 90,
    FMOD_ERR_EVENT_NEEDSSIMPLE = 91,
    FMOD_ERR_EVENT_GUIDCONFLICT = 92,
    FMOD_ERR_EVENT_ALREADY_LOADED = 93,
    FMOD_ERR_MUSIC_UNINITIALIZED = 94,
    FMOD_RESULT_FORCEINT = 65536,
};
// total size: 0x0
class FMOD_EVENT {};
enum FMOD_EVENT_CALLBACKTYPE {
    FMOD_EVENT_CALLBACKTYPE_SYNCPOINT = 0,
    FMOD_EVENT_CALLBACKTYPE_SOUNDDEF_START = 1,
    FMOD_EVENT_CALLBACKTYPE_SOUNDDEF_END = 2,
    FMOD_EVENT_CALLBACKTYPE_STOLEN = 3,
    FMOD_EVENT_CALLBACKTYPE_EVENTFINISHED = 4,
    FMOD_EVENT_CALLBACKTYPE_NET_MODIFIED = 5,
    FMOD_EVENT_CALLBACKTYPE_SOUNDDEF_CREATE = 6,
    FMOD_EVENT_CALLBACKTYPE_SOUNDDEF_RELEASE = 7,
    FMOD_EVENT_CALLBACKTYPE_SOUNDDEF_INFO = 8,
    FMOD_EVENT_CALLBACKTYPE_EVENTSTARTED = 9,
    FMOD_EVENT_CALLBACKTYPE_SOUNDDEF_SELECTINDEX = 10,
    FMOD_EVENT_CALLBACKTYPE_OCCLUSION = 11,
};
// total size: 0xC
class hkArray {
    // Members
    class CollectedTriangle * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x50
class CollectedTriangle {
    // Members
    int index; // offset 0x0, size 0x4
    class hkVector4 verts[3]; // offset 0x10, size 0x30
    float dist; // offset 0x40, size 0x4
};
// total size: 0x18
class xBox {
    // Members
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
};
// total size: 0x178
class xOGModel : public xModelInstance {
    // Members
    float blendTime; // offset 0x94, size 0x4
    float blendTimeCurrent; // offset 0x98, size 0x4
    float blendStart; // offset 0x9C, size 0x4
    float blendEnd; // offset 0xA0, size 0x4
    int overrideAnimTexMerge; // offset 0xA4, size 0x4
    void * morphOverride; // offset 0xA8, size 0x4
    float morphTime; // offset 0xAC, size 0x4
    float currentMorphTime; // offset 0xB0, size 0x4
    class Vector4 colorMultiplier; // offset 0xB4, size 0x10
    class ModelInstanceArticle mModelArt; // offset 0xC4, size 0x98
    class xOGModelUpdater * updater; // offset 0x15C, size 0x4
    void * updateParent; // offset 0x160, size 0x4
    class EmbeddedListNode updateNode; // offset 0x164, size 0x8
    float lodScale; // offset 0x16C, size 0x4
    enum eShadow castShadow; // offset 0x170, size 0x4
    int mMemSize; // offset 0x174, size 0x4
};
// total size: 0x94
class xModelInstance {
    // Members
    class xMat4x3 Mat; // offset 0x0, size 0x40
    class xVec3 Scale; // offset 0x40, size 0xC
    class xAnimPlay * Anim; // offset 0x4C, size 0x4
    unsigned short Flags; // offset 0x50, size 0x2
    unsigned short pad; // offset 0x52, size 0x2
    unsigned int renderCustomizerMask; // offset 0x54, size 0x4
    class ModelVisibility visModel; // offset 0x58, size 0x22
    int boundRefModelInstanceAnimationCount; // offset 0x7C, size 0x4
    class RefInstanceAnimation * referenceAnimations; // offset 0x80, size 0x4
    class RefInstanceAnimation * enabledReferenceAnimations; // offset 0x84, size 0x4
    class RefInstanceAnimation * disabledReferenceAnimations; // offset 0x88, size 0x4
    class RefInstanceAnimation * nextReferenceAnimationLODUpdate; // offset 0x8C, size 0x4
    unsigned int numAnimationsEnabled; // offset 0x90, size 0x4
};
// total size: 0x30
class xAnimPlay {
    // Members
    class xAnimPlay * Next; // offset 0x0, size 0x4
    unsigned short NumSingle; // offset 0x4, size 0x2
    unsigned short BoneCount; // offset 0x6, size 0x2
    unsigned short MorphCount; // offset 0x8, size 0x2
    unsigned short padding0; // offset 0xA, size 0x2
    class xAnimSingle * Single; // offset 0xC, size 0x4
    void * Object; // offset 0x10, size 0x4
    class xAnimTable * Table; // offset 0x14, size 0x4
    class xMemPool * Pool; // offset 0x18, size 0x4
    class xOGModel * ModelInst; // offset 0x1C, size 0x4
    void (* BeforeAnimMatrices)(class xAnimPlay * play, class xQuat * quat, class xVec3 * scale, class xVec3 * tran, int boneCount); // offset 0x20, size 0x4
    void (* AfterAnimMatrices)(class xAnimPlay * play, class Matrix43 * skinMat, class xQuat * quat, class xVec3 * scale, class xVec3 * tran, int boneCount); // offset 0x24, size 0x4
    void (* AnimMorphWeights)(class xAnimPlay * play, float * morphWeights, int morphCount); // offset 0x28, size 0x4
    unsigned int padding1[1]; // offset 0x2C, size 0x4
};
// total size: 0x54
class xAnimSingle {
    // Members
    unsigned int SingleFlags; // offset 0x0, size 0x4
    class xAnimState * State; // offset 0x4, size 0x4
    float Time; // offset 0x8, size 0x4
    float CurrentSpeed; // offset 0xC, size 0x4
    float BilinearLerp[3]; // offset 0x10, size 0xC
    class xAnimSoundEffect * SoundEffect; // offset 0x1C, size 0x4
    class xAnimVFX_Effect * VFXEffect; // offset 0x20, size 0x4
    float LastTime; // offset 0x24, size 0x4
    class xAnimPlay * Play; // offset 0x28, size 0x4
    class xAnimTransition * Sync; // offset 0x2C, size 0x4
    class xAnimTransition * Tran; // offset 0x30, size 0x4
    class xAnimSingle * Blend; // offset 0x34, size 0x4
    float BlendFactor; // offset 0x38, size 0x4
    class xVec3 PhysDisp; // offset 0x3C, size 0xC
    float YawDisp; // offset 0x48, size 0x4
    unsigned int LoopCount; // offset 0x4C, size 0x4
    unsigned int pad[1]; // offset 0x50, size 0x4
};
// total size: 0xD0
class xAnimState {
    // Members
    class xAnimState * Next; // offset 0x0, size 0x4
    char * Name; // offset 0x4, size 0x4
    unsigned long long UID; // offset 0x8, size 0x8
    unsigned int ID; // offset 0x10, size 0x4
    unsigned int Flags; // offset 0x14, size 0x4
    unsigned int UserFlags; // offset 0x18, size 0x4
    float Speed; // offset 0x1C, size 0x4
    class xAnimFile * Data; // offset 0x20, size 0x4
    class xAnimSoundEffect * SoundEffects; // offset 0x24, size 0x4
    unsigned int mNumVFXEffects; // offset 0x28, size 0x4
    class xAnimVFX_Effect * VFXEffects; // offset 0x2C, size 0x4
    unsigned long long TriggerHintSphere; // offset 0x30, size 0x8
    class xAnimSoundFXM SoundFXMultiples[4]; // offset 0x38, size 0x40
    class xAnimTransitionList * Default; // offset 0x78, size 0x4
    class xAnimTransitionList * List; // offset 0x7C, size 0x4
    float * BoneBlend; // offset 0x80, size 0x4
    float * TimeSnap; // offset 0x84, size 0x4
    float FadeRecip; // offset 0x88, size 0x4
    unsigned short * FadeOffset; // offset 0x8C, size 0x4
    void * CallbackData; // offset 0x90, size 0x4
    unsigned int UserData; // offset 0x94, size 0x4
    class xVec3 LastFrameAnimPhysTrans; // offset 0x98, size 0xC
    float LastFrameAnimPhysYaw; // offset 0xA4, size 0x4
    class xQuat LastFrameAnimPhysQuat; // offset 0xA8, size 0x10
    class xAnimMultiFile * MultiFile; // offset 0xB8, size 0x4
    void (* BeforeEnterCB)(class xAnimPlay * play, class xAnimState * state, void * object); // offset 0xBC, size 0x4
    void (* BeforeEndCB)(class xAnimPlay * play, class xAnimState * state, void * object); // offset 0xC0, size 0x4
    void (* StateCallback)(class xAnimState * state, class xAnimSingle * anim, void * object); // offset 0xC4, size 0x4
    void (* BeforeAnimMatrices)(class xAnimPlay * play, class xQuat * quat, class xVec3 * scale, class xVec3 * tran, int boneCount); // offset 0xC8, size 0x4
};
// total size: 0x40
class xAnimFile {
    // Members
    class xAnimFile * Next; // offset 0x0, size 0x4
    char * Name; // offset 0x4, size 0x4
    unsigned int ID; // offset 0x8, size 0x4
    unsigned int FileFlags; // offset 0xC, size 0x4
    float Duration; // offset 0x10, size 0x4
    float TimeOffset; // offset 0x14, size 0x4
    float TexMergeStartTime; // offset 0x18, size 0x4
    float TexMergeEndTime; // offset 0x1C, size 0x4
    unsigned long long TexMergeTexture; // offset 0x20, size 0x8
    unsigned long long TexMergeSpecularTexture; // offset 0x28, size 0x8
    unsigned short BoneCount; // offset 0x30, size 0x2
    unsigned char MorphCount; // offset 0x32, size 0x1
    unsigned char pad1[1]; // offset 0x33, size 0x1
    unsigned char NumAnims[3]; // offset 0x34, size 0x3
    unsigned char pad2[1]; // offset 0x37, size 0x1
    void * * RawData; // offset 0x38, size 0x4
};
// total size: 0x80
class xAnimSoundEffect : public xAnimEffectTiming {
    // Members
    class xAnimSoundEffect * Next; // offset 0xC, size 0x4
    class zSoundAssetMultiple SoundAsset; // offset 0x10, size 0x68
    unsigned long long surfaceTypeID; // offset 0x78, size 0x8
};
// total size: 0xC
class xAnimEffectTiming {
    // Members
    float totalTime; // offset 0x0, size 0x4
    float startTime; // offset 0x4, size 0x4
    float endTime; // offset 0x8, size 0x4
};
// total size: 0x68
class zSoundAssetMultiple : public zSoundAsset {
    // Members
    int InstanceListSize; // offset 0x44, size 0x4
    class PoolList InstanceList; // offset 0x48, size 0x1C
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
// total size: 0x14
class xAnimVFX_Effect : public xAnimEffectTiming {
    // Members
    class AnimVFX * spawnSource; // offset 0xC, size 0x4
    class SurfaceGamePlay * surface; // offset 0x10, size 0x4
};
// total size: 0x18
class AnimVFX {
    // Members
    float StartTime; // offset 0x0, size 0x4
    float EndTime; // offset 0x4, size 0x4
    class uid FXSpawnID; // offset 0x8, size 0x8
    class __SurfaceOverrides__ SurfaceOverrides; // offset 0x10, size 0x8
};
// total size: 0x8
class __SurfaceOverrides__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0xA8
class SurfaceGamePlay : public Surface {
    // Members
    unsigned int SurfaceType; // offset 0x10, size 0x4
    bool Reflective; // offset 0x14, size 0x1
    float InstantDamageAmount; // offset 0x18, size 0x4
    float DotDamageAmount; // offset 0x1C, size 0x4
    float DotDamageFreq; // offset 0x20, size 0x4
    unsigned int SoundType; // offset 0x24, size 0x4
    unsigned int VFXType; // offset 0x28, size 0x4
    float VFXEmitRateMutliplier; // offset 0x2C, size 0x4
    float VFXLifeTimeMutliplier; // offset 0x30, size 0x4
    unsigned int DamageType; // offset 0x34, size 0x4
    float Friction; // offset 0x38, size 0x4
    bool Sticky; // offset 0x3C, size 0x1
    class VelocityStruct SurfaceVelocity; // offset 0x40, size 0x10
    class _fx fx; // offset 0x50, size 0x50
    class LinkAsset EventLinksNew; // offset 0xA0, size 0x8
};
// total size: 0x10
class Surface : public xBaseAsset {};
// total size: 0x10
class xBaseAsset {
    // Members
    class uid id; // offset 0x0, size 0x8
    unsigned int baseType; // offset 0x8, size 0x4
    unsigned short linkCount; // offset 0xC, size 0x2
    unsigned short baseFlags; // offset 0xE, size 0x2
};
// total size: 0x10
class VelocityStruct {
    // Members
    float magnitude; // offset 0x0, size 0x4
    class vec3 direction; // offset 0x4, size 0xC
};
// total size: 0xC
class vec3 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x50
class _fx {
    // Members
    class uid treadDecal; // offset 0x0, size 0x8
    float trailSeconds; // offset 0x8, size 0x4
    class uid leftFootstep; // offset 0x10, size 0x8
    class uid rightFootstep; // offset 0x18, size 0x8
    int trailSteps; // offset 0x20, size 0x4
    class uid land; // offset 0x28, size 0x8
    class uid pinwheel; // offset 0x30, size 0x8
    class uid dash; // offset 0x38, size 0x8
    class uid slippery; // offset 0x40, size 0x8
    class uid ratOnBall; // offset 0x48, size 0x8
};
// total size: 0x8
class LinkAsset {
    // Members
    class __EventLinksArray__ EventLinksArray; // offset 0x0, size 0x8
};
// total size: 0x8
class __EventLinksArray__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x10
class xAnimSoundFXM {
    // Members
    unsigned long long UID; // offset 0x0, size 0x8
    unsigned int EventType; // offset 0x8, size 0x4
};
// total size: 0x8
class xAnimTransitionList {
    // Members
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
};
// total size: 0x30
class xAnimTransition {
    // Members
    class xAnimTransition * Next; // offset 0x0, size 0x4
    class xAnimState * Dest; // offset 0x4, size 0x4
    unsigned int (* EntryConditional)(class xAnimTransition * tran, class xAnimSingle * anim, void * object); // offset 0x8, size 0x4
    unsigned int (* ExitConditional)(class xAnimTransition * tran, class xAnimSingle * anim, void * object); // offset 0xC, size 0x4
    unsigned int (* Callback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object); // offset 0x10, size 0x4
    unsigned int Flags; // offset 0x14, size 0x4
    unsigned int UserFlags; // offset 0x18, size 0x4
    float SrcTime; // offset 0x1C, size 0x4
    float DestTime; // offset 0x20, size 0x4
    unsigned short Priority; // offset 0x24, size 0x2
    unsigned short QueuePriority; // offset 0x26, size 0x2
    float BlendRecip; // offset 0x28, size 0x4
    unsigned short * BlendOffset; // offset 0x2C, size 0x4
};
// total size: 0x10
class xQuat {
    // Members
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
// total size: 0xC
class xAnimMultiFile : public xAnimMultiFileBase {
    // Members
    class xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
};
// total size: 0x4
class xAnimMultiFileBase {
    // Members
    unsigned int Count; // offset 0x0, size 0x4
};
// total size: 0x8
class xAnimMultiFileEntry {
    // Members
    unsigned int ID; // offset 0x0, size 0x4
    class xAnimFile * File; // offset 0x4, size 0x4
};
// total size: 0x20
class xAnimTable {
    // Members
    class xAnimTable * Next; // offset 0x0, size 0x4
    char * Name; // offset 0x4, size 0x4
    class xAnimTransition * TransitionList; // offset 0x8, size 0x4
    class xAnimState * StateList; // offset 0xC, size 0x4
    unsigned int AnimIndex; // offset 0x10, size 0x4
    unsigned int MorphIndex; // offset 0x14, size 0x4
    unsigned int UserFlags; // offset 0x18, size 0x4
    void * UserContext; // offset 0x1C, size 0x4
};
// total size: 0x1C
class xMemPool {
    // Members
    void * FreeList; // offset 0x0, size 0x4
    unsigned short NextOffset; // offset 0x4, size 0x2
    unsigned short Flags; // offset 0x6, size 0x2
    void * UsedList; // offset 0x8, size 0x4
    void (* InitCB)(class xMemPool * pool, void * data); // offset 0xC, size 0x4
    void * Buffer; // offset 0x10, size 0x4
    unsigned short Size; // offset 0x14, size 0x2
    unsigned short NumRealloc; // offset 0x16, size 0x2
    unsigned int Total; // offset 0x18, size 0x4
};
// total size: 0x22
class ModelVisibility {
    // Members
    class PartsVisibility visParts[16]; // offset 0x0, size 0x20
    unsigned char visCount; // offset 0x20, size 0x1
    bool disableVisibilityAnim; // offset 0x21, size 0x1
};
// total size: 0x2
class PartsVisibility {
    // Members
    unsigned char partIndex; // offset 0x0, size 0x1
    unsigned char stateMask; // offset 0x1, size 0x1
};
// total size: 0x1C
class RefInstanceAnimation {
    // Members
    class RefInstanceAnimation * forUseByMemPool; // offset 0x0, size 0x4
    class RefInstanceAnimation * next; // offset 0x4, size 0x4
    class RefInstanceAnimation * nextAnim; // offset 0x8, size 0x4
    class RefInstanceAnimation * lastAnim; // offset 0xC, size 0x4
    unsigned int currentLODDistance : 14; // offset 0x10, size 0x4, bit offset 0
    unsigned int refModelProtoInstanceNum : 16; // offset 0x10, size 0x4, bit offset 14
    bool enabled : 1; // offset 0x13, size 0x1, bit offset 6
    bool looping : 1; // offset 0x13, size 0x1, bit offset 7
    float time; // offset 0x14, size 0x4
    class xAnimFile * animFile; // offset 0x18, size 0x4
};
// total size: 0x10
class xOGModelUpdater {
    // Members
    class EmbeddedList updList; // offset 0x4, size 0xC
};
// total size: 0xC
class EmbeddedList {
    // Members
    class EmbeddedListNode head; // offset 0x0, size 0x8
    unsigned long size; // offset 0x8, size 0x4
};
enum eShadow {
    eDontCastShadow = 0,
    eCastShadow = 1,
    eCastSimpleShadow = 2,
    eCastSimpleShadowIfNeeded = 3,
};
// total size: 0x10
class xPlane {
    // Members
    class xVec3 norm; // offset 0x0, size 0xC
    float d; // offset 0xC, size 0x4
};
// total size: 0x4
class HavokPrimObj {
    // Members
    class hkpRigidBody * pRigidBody; // offset 0x0, size 0x4
};
// total size: 0x20
class hkpLinearCastInput {
    // Members
    class hkVector4 m_to; // offset 0x0, size 0x10
    float m_maxExtraPenetration; // offset 0x10, size 0x4
    float m_startPointTolerance; // offset 0x14, size 0x4
};
// total size: 0x20
class hkpSphereShape : public hkpConvexShape {
    // Members
    unsigned int m_pad16[3]; // offset 0x14, size 0xC
};
// total size: 0x1A0
class hkpAllCdPointCollector : public hkpCdPointCollector {
    // Members
    class hkInplaceArray m_hits; // offset 0x10, size 0x190
};
// total size: 0x8
class hkpCdPointCollector {
    // Members
    float m_earlyOutDistance; // offset 0x4, size 0x4
};
// total size: 0x190
class hkInplaceArray : public hkArray {
    // Members
    class hkpRootCdPoint m_storage[8]; // offset 0x10, size 0x180
};
// total size: 0xC
class hkArray {
    // Members
    class hkpRootCdPoint * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x30
class hkpRootCdPoint {
    // Members
    class hkContactPoint m_contact; // offset 0x0, size 0x20
    class hkpCollidable * m_rootCollidableA; // offset 0x20, size 0x4
    unsigned int m_shapeKeyA; // offset 0x24, size 0x4
    class hkpCollidable * m_rootCollidableB; // offset 0x28, size 0x4
    unsigned int m_shapeKeyB; // offset 0x2C, size 0x4
};
// total size: 0x20
class hkContactPoint {
    // Members
    class hkVector4 m_position; // offset 0x0, size 0x10
    class hkVector4 m_separatingNormal; // offset 0x10, size 0x10
};
// total size: 0x2A0
class hkpAllRayHitCollector : public hkpRayHitCollector {
    // Members
    class hkInplaceArray m_hits; // offset 0x10, size 0x290
};
// total size: 0x8
class hkpRayHitCollector {
    // Members
    float m_earlyOutHitFraction; // offset 0x4, size 0x4
};
// total size: 0x290
class hkInplaceArray : public hkArray {
    // Members
    class hkpWorldRayCastOutput m_storage[8]; // offset 0x10, size 0x280
};
// total size: 0xC
class hkArray {
    // Members
    class hkpWorldRayCastOutput * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x50
class hkpWorldRayCastOutput : public hkpShapeRayCastOutput {
    // Members
    class hkpCollidable * m_rootCollidable; // offset 0x44, size 0x4
};
// total size: 0x50
class hkpShapeRayCastOutput : public hkpShapeRayCastCollectorOutput {
    // Members
    unsigned int m_shapeKeys[8]; // offset 0x20, size 0x20
    int m_shapeKeyIndex; // offset 0x40, size 0x4
};
// total size: 0x20
class hkpShapeRayCastCollectorOutput {
    // Members
    class hkVector4 m_normal; // offset 0x0, size 0x10
    float m_hitFraction; // offset 0x10, size 0x4
    int m_extraInfo; // offset 0x14, size 0x4
    int m_pad[2]; // offset 0x18, size 0x8
};
// total size: 0x30
class hkpBoxShape : public hkpConvexShape {
    // Members
    class hkVector4 m_halfExtents; // offset 0x20, size 0x10
};
// total size: 0xC0
class xEnt : public xEffectAttachIntf {
    // Members
    class xEntAsset * asset; // offset 0x3C, size 0x4
    enum E_HAVOK_COLLIDE_FILTER_LAYER storedCollisionLayer; // offset 0x40, size 0x4
    unsigned int idx : 16; // offset 0x44, size 0x4, bit offset 0
    unsigned int moreFlags : 16; // offset 0x44, size 0x4, bit offset 16
    unsigned int flags : 8; // offset 0x48, size 0x4, bit offset 0
    unsigned int miscflags : 8; // offset 0x48, size 0x4, bit offset 8
    unsigned int subType : 8; // offset 0x48, size 0x4, bit offset 16
    unsigned int pflags : 8; // offset 0x48, size 0x4, bit offset 24
    unsigned char isCulled : 4; // offset 0x4C, size 0x1, bit offset 0
    unsigned char collisionEventReceived : 4; // offset 0x4C, size 0x1, bit offset 4
    unsigned char num_ffx; // offset 0x4D, size 0x1
    unsigned char collType; // offset 0x4E, size 0x1
    unsigned char chkby; // offset 0x4F, size 0x1
    unsigned char penby; // offset 0x50, size 0x1
    unsigned char collisionOn : 2; // offset 0x51, size 0x1, bit offset 0
    void (* move)(class xEnt *, class xScene *, float, class xEntFrame *, class xMat4x3 *); // offset 0x54, size 0x4
    class xEntFrame * frame; // offset 0x58, size 0x4
    void (* transl)(class xEnt *, class xVec3 *, class xMat4x3 *); // offset 0x5C, size 0x4
    class xFFX * ffx; // offset 0x60, size 0x4
    bool isDriving; // offset 0x64, size 0x1
    class zNeoDrivenLink * neoDriver; // offset 0x68, size 0x4
    class SurfaceGamePlay * pSurface; // offset 0x6C, size 0x4
    class xVec3 pRigidBodyPostScale; // offset 0x70, size 0xC
    class xHavokPhysicsObject physicsObject; // offset 0x80, size 0x20
    void * user_data; // offset 0xA0, size 0x4
    enum RagdollState ragdollState; // offset 0xA4, size 0x4
    float ragdollTotalBlendInTime; // offset 0xA8, size 0x4
    float ragdollTotalBlendOutTime; // offset 0xAC, size 0x4
    float ragdollCurrentBlendTime; // offset 0xB0, size 0x4
    float ragdollStateOnTimeRemaining; // offset 0xB4, size 0x4
    class RagdollCallbackListener * ragdollListener; // offset 0xB8, size 0x4
};
// total size: 0x40
class xEffectAttachIntf : public xOGEntity {};
// total size: 0x40
class xOGEntity : public xBase {
    // Members
    class xOGModelHandle ogModel; // offset 0x34, size 0x8
};
// total size: 0x38
class xBase : public Entity {
    // Members
    unsigned long long id; // offset 0x18, size 0x8
    unsigned int baseType; // offset 0x20, size 0x4
    unsigned char UNUSED_linkCount; // offset 0x24, size 0x1
    unsigned char assertFlags; // offset 0x25, size 0x1
    unsigned short baseFlags; // offset 0x26, size 0x2
    class LinkAsset * linkArray; // offset 0x28, size 0x4
    class TemplateEntity * templateParent; // offset 0x2C, size 0x4
    void (* eventFunc)(class xBase * from, class xBase * to, unsigned int toEvent, class EventAny * params); // offset 0x30, size 0x4
};
// total size: 0x58
class TemplateEntity : public xOGEntity {
    // Members
    class TemplateAsset * asset; // offset 0x3C, size 0x4
    unsigned int memberCount; // offset 0x40, size 0x4
    class xOGEntity * * memberList; // offset 0x44, size 0x4
    class TemplateEventSent * eventBuf; // offset 0x48, size 0x4
    unsigned int eventBufSize; // offset 0x4C, size 0x4
    class EmbeddedTreeAVL eventTree; // offset 0x50, size 0x8
};
// total size: 0x28
class TemplateAsset {
    // Members
    unsigned long long id; // offset 0x0, size 0x8
    unsigned int baseType; // offset 0x8, size 0x4
    unsigned short legacyLinkCount; // offset 0xC, size 0x2
    unsigned short baseFlags; // offset 0xE, size 0x2
    unsigned int widgetCount; // offset 0x10, size 0x4
    unsigned int pad; // offset 0x14, size 0x4
    unsigned long long childStartUID; // offset 0x18, size 0x8
    int linkCount; // offset 0x20, size 0x4
    class Pointer32 linkArray; // offset 0x24, size 0x4
};
// total size: 0xC
class TemplateEventSent {
    // Members
    int eventType; // offset 0x0, size 0x4
    class EmbeddedTreeNode tnode; // offset 0x4, size 0x8
};
// total size: 0x8
class EmbeddedTreeAVL {
    // Members
    class CmpHolder cmp; // offset 0x0, size 0x4
    class TemplateEventSent * m_root; // offset 0x4, size 0x4
};
// total size: 0x4
class CmpHolder : public lt_TemplateEventSent {
    // Members
    unsigned long size; // offset 0x0, size 0x4
};
// total size: 0x1
class lt_TemplateEventSent {};
// total size: 0x1
class EventAny {};
// total size: 0x8
class xOGModelHandle : public xOGModelRef {};
// total size: 0x8
class xOGModelRef {
    // Members
    class xOGModel * data; // offset 0x0, size 0x4
    class xOGModelRefPtr * autoptr; // offset 0x4, size 0x4
};
// total size: 0x4
class xOGModelRefPtr {
    // Members
    class RefData * mData; // offset 0x0, size 0x4
};
// total size: 0x8
class RefData {
    // Members
    class xOGModelRef * mParent; // offset 0x0, size 0x4
    int mRefCount; // offset 0x4, size 0x4
};
// total size: 0x100
class xEntAsset : public xBaseAsset {
    // Members
    unsigned char flags; // offset 0x10, size 0x1
    unsigned char subtype; // offset 0x11, size 0x1
    unsigned char pad; // offset 0x12, size 0x1
    bool Targettable; // offset 0x13, size 0x1
    unsigned char Pad0; // offset 0x14, size 0x1
    unsigned char moreFlags; // offset 0x15, size 0x1
    class uid surfaceID; // offset 0x18, size 0x8
    class Rotation3 Orientation; // offset 0x20, size 0xC
    class vec3 Pos; // offset 0x2C, size 0xC
    class vec3 Scale; // offset 0x38, size 0xC
    class ModelInstanceAsset modelInstance; // offset 0x50, size 0x40
    class uid animListID; // offset 0x90, size 0x8
    class PhysicsDataStruct physicsData; // offset 0x98, size 0x54
    unsigned int Pad1; // offset 0xEC, size 0x4
    unsigned int Pad2; // offset 0xF0, size 0x4
    unsigned int Pad3; // offset 0xF4, size 0x4
};
// total size: 0xC
class Rotation3 {
    // Members
    float yaw; // offset 0x0, size 0x4
    float pitch; // offset 0x4, size 0x4
    float roll; // offset 0x8, size 0x4
};
// total size: 0x40
class ModelInstanceAsset {
    // Members
    unsigned long long modelPrototypeID; // offset 0x0, size 0x8
    unsigned long long lightKitID; // offset 0x8, size 0x8
    unsigned int instanceParamCount; // offset 0x10, size 0x4
    unsigned int renderCustomizerCount; // offset 0x14, size 0x4
    class Pointer32 instanceParams; // offset 0x18, size 0x4
    class Pointer32 renderCustomizers; // offset 0x1C, size 0x4
    unsigned short shadowType; // offset 0x20, size 0x2
    unsigned short shadowFlags; // offset 0x22, size 0x2
    unsigned int shadowColorOverride; // offset 0x24, size 0x4
    float shadowMaxDepthOverride; // offset 0x28, size 0x4
    float shadowStartDepthOverride; // offset 0x2C, size 0x4
    unsigned int shadowMinBlurOverride; // offset 0x30, size 0x4
    unsigned int shadowMaxBlurOverride; // offset 0x34, size 0x4
    unsigned long long parentID; // offset 0x38, size 0x8
};
// total size: 0x54
class PhysicsDataStruct {
    // Members
    float mass; // offset 0x0, size 0x4
    float friction; // offset 0x4, size 0x4
    float elasticity; // offset 0x8, size 0x4
    float linearDamping; // offset 0xC, size 0x4
    float angularDamping; // offset 0x10, size 0x4
    float settleTimer; // offset 0x14, size 0x4
    unsigned char magnetic_Charge; // offset 0x18, size 0x1
    unsigned char pad1; // offset 0x19, size 0x1
    unsigned char pad2; // offset 0x1A, size 0x1
    unsigned char pad3; // offset 0x1B, size 0x1
    class SoundSourcesPhysics SoundsPhysics; // offset 0x1C, size 0x38
};
// total size: 0x38
class SoundSourcesPhysics {
    // Members
    class SoundBankSource SoundHit; // offset 0x0, size 0xC
    class SoundBankSource SoundScrape; // offset 0xC, size 0xC
    class SoundBankSource SoundRoll; // offset 0x18, size 0xC
    class SoundPhysicsData PhysicsData; // offset 0x24, size 0x14
};
// total size: 0xC
class SoundBankSource {
    // Members
    bool streamed; // offset 0x0, size 0x1
    unsigned char pad1; // offset 0x1, size 0x1
    unsigned char pad2; // offset 0x2, size 0x1
    unsigned char pad3; // offset 0x3, size 0x1
    class Pointer32 sourceString; // offset 0x4, size 0x4
    class Pointer32 indices; // offset 0x8, size 0x4
};
// total size: 0x14
class SoundPhysicsData {
    // Members
    float MinVelocity; // offset 0x0, size 0x4
    float MaxVelocity; // offset 0x4, size 0x4
    float MinRun; // offset 0x8, size 0x4
    float MaxRun; // offset 0xC, size 0x4
    float MaxRise; // offset 0x10, size 0x4
};
enum E_HAVOK_COLLIDE_FILTER_LAYER {
    eNoCollisionLayer = 31,
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
    eNPCNoPlayerLayer = 17,
    eProjectilesNoPlayerLayer = 18,
    eProjectilesNoProjectilesLayer = 19,
    eCollectiblesLayer = 20,
    eStaticCollectiblesLayer = 21,
    eCollectiblesNoPlanktonLayer = 22,
    eTikisLayer = 24,
    ePlanktonBeamLayer = 25,
    eNPCNoNPCLayer = 26,
};
// total size: 0x28
class xScene {
    // Members
    unsigned int sceneID; // offset 0x0, size 0x4
    unsigned short flags; // offset 0x4, size 0x2
    float gravity; // offset 0x8, size 0x4
    class xMemPool mempool; // offset 0xC, size 0x1C
};
// total size: 0xE4
class xEntFrame {
    // Members
    class xMat4x3 oldmat; // offset 0x0, size 0x40
    class xVec3 oldvel; // offset 0x40, size 0xC
    class xRot oldrot; // offset 0x4C, size 0x10
    class xRot drot; // offset 0x5C, size 0x10
    class xRot rot; // offset 0x6C, size 0x10
    class xVec3 dvel; // offset 0x7C, size 0xC
    class xVec3 vel; // offset 0x88, size 0xC
    unsigned int mode; // offset 0x94, size 0x4
    class xVec3 dpos; // offset 0x98, size 0xC
    class xMat4x3 accumRelMat; // offset 0xA4, size 0x40
};
// total size: 0x10
class xRot {
    // Members
    class xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
};
// total size: 0x10
class xFFX {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    void (* doEffect)(class xEnt * ent, class xScene * sc, float dt, void * fdata); // offset 0x4, size 0x4
    void * fdata; // offset 0x8, size 0x4
    class xFFX * next; // offset 0xC, size 0x4
};
// total size: 0xF8
class zNeoDrivenLink {
    // Members
    class xMat4x3 relativeMat; // offset 0x0, size 0x40
    class xMat4x3 passengerOriginalMat; // offset 0x40, size 0x40
    class xMat4x3 lastMat; // offset 0x80, size 0x40
    class xOGEntity * driver; // offset 0xC0, size 0x4
    class xOGEntity * passenger; // offset 0xC4, size 0x4
    class zNeoDrivenLink * quickLinks[4]; // offset 0xC8, size 0x10
    int totalQuickLinks; // offset 0xD8, size 0x4
    unsigned int flags; // offset 0xDC, size 0x4
    unsigned int bone; // offset 0xE0, size 0x4
    float yaw; // offset 0xE4, size 0x4
    class zNeoDrivenLink * parentLink; // offset 0xE8, size 0x4
    class zNeoDrivenLink * olderSiblingLink; // offset 0xEC, size 0x4
    class zNeoDrivenLink * siblingLink; // offset 0xF0, size 0x4
    class zNeoDrivenLink * childLink; // offset 0xF4, size 0x4
};
enum RagdollState {
    RAGDOLL_OFF = 0,
    RAGDOLL_ON = 1,
    RAGDOLL_TRANSITION_ON = 2,
    RAGDOLL_TRANSITION_OFF = 3,
};
// total size: 0x4
class RagdollCallbackListener {};
// total size: 0x1D0
class zNPCEntity : public xEnt, public zNPCComponent {
    // Members
    class xMat3x3 modelOnlyMat; // offset 0xC4, size 0x30
    class zNPCBound npcBound; // offset 0xF4, size 0x30
    class xVec3 modelScale; // offset 0x124, size 0xC
    float shadowRadius; // offset 0x130, size 0x4
    float scalePhysDisp; // offset 0x134, size 0x4
    bool entityPosUpdated; // offset 0x138, size 0x1
    class zNPCType * type; // offset 0x13C, size 0x4
    class zNPCEntityParams * parameters; // offset 0x140, size 0x4
    class ModelInstanceAsset * modelInstanceAsset; // offset 0x144, size 0x4
    class zNPCCollisionListener * collisionListeners[4]; // offset 0x148, size 0x10
    class zNPCRigidBodyCollisionListener * rigidBodyCollisionListeners[4]; // offset 0x158, size 0x10
    class xEntDrive * npcDrive; // offset 0x168, size 0x4
    class xHavokCharacterController characterController; // offset 0x16C, size 0x8
    class xAnimVFX_Effect * currVFX; // offset 0x174, size 0x4
    class xAnimTable * instanceAnimTable; // offset 0x178, size 0x4
    unsigned int idleNumber; // offset 0x17C, size 0x4
    bool queryAnimEndSet; // offset 0x180, size 0x1
    bool pokedA; // offset 0x181, size 0x1
    bool pokedB; // offset 0x182, size 0x1
    float damageColorTimer; // offset 0x184, size 0x4
    float currentColorMultiplier; // offset 0x188, size 0x4
    class xVec3 lastFrameAnimPhysTrans; // offset 0x18C, size 0xC
    float lastFrameAnimPhysYaw; // offset 0x198, size 0x4
    class xQuat lastFrameAnimPhysQuat; // offset 0x19C, size 0x10
    bool enabled; // offset 0x1AC, size 0x1
    bool visible; // offset 0x1AD, size 0x1
    bool modelOnlyMatSet; // offset 0x1AE, size 0x1
    bool floorCollision; // offset 0x1AF, size 0x1
    bool floorDoesDamage; // offset 0x1B0, size 0x1
    class xVec3 floorVelocity; // offset 0x1B4, size 0xC
    float floorNormalY; // offset 0x1C0, size 0x4
    enum eNPCEntityCollType collisionType; // offset 0x1C4, size 0x4
};
// total size: 0x8
class zNPCComponent {
    // Members
    class zNPCBase * owner; // offset 0x0, size 0x4
};
// total size: 0xC0
class zNPCBase : public xOGEntity {
    // Members
    int numProjectiles; // offset 0x3C, size 0x4
    class zNPCStatus npcStatus; // offset 0x40, size 0x1C
    class zNPCType * type; // offset 0x5C, size 0x4
    class NPCAsset * npcAsset; // offset 0x60, size 0x4
    class xModelAssetInfo * modelAsset; // offset 0x64, size 0x4
    class zCharacterAsset * characterAsset; // offset 0x68, size 0x4
    class zNPCGroupBase * parentGroup; // offset 0x6C, size 0x4
    bool puppetMode : 1; // offset 0x70, size 0x1, bit offset 0
    bool alive : 1; // offset 0x70, size 0x1, bit offset 1
    bool present : 1; // offset 0x70, size 0x1, bit offset 2
    bool activated : 1; // offset 0x70, size 0x1, bit offset 3
    bool spawned : 1; // offset 0x70, size 0x1, bit offset 4
    bool paused : 1; // offset 0x70, size 0x1, bit offset 5
    bool updateInCinematicAlways : 1; // offset 0x70, size 0x1, bit offset 6
    bool updateInCinematicNever : 1; // offset 0x70, size 0x1, bit offset 7
    bool infoNodesUpdating : 1; // offset 0x71, size 0x1, bit offset 0
    bool quietKill : 1; // offset 0x71, size 0x1, bit offset 1
    bool updating : 1; // offset 0x71, size 0x1, bit offset 2
    bool flying : 1; // offset 0x71, size 0x1, bit offset 3
    bool collectible : 1; // offset 0x71, size 0x1, bit offset 4
    unsigned int pad : 20; // offset 0x74, size 0x4, bit offset 0
    class zNPCTemplate * npcTemplate; // offset 0x78, size 0x4
    class zNPCBTClientBase * btClient; // offset 0x7C, size 0x4
    class xMovePoint * npcMovePoint; // offset 0x80, size 0x4
    class xMovePoint * npcMovePointNetwork; // offset 0x84, size 0x4
    class zNPCUpdateLOD npcUpdateLOD; // offset 0x88, size 0xC
    class zNPCLogic * npcLogic; // offset 0x94, size 0x4
    class zNPCEntity * npcEntity; // offset 0x98, size 0x4
    class zNPCSteeringOld * npcSteeringOld; // offset 0x9C, size 0x4
    class zNPCSteering * npcSteering; // offset 0xA0, size 0x4
    class zNPCPerception * npcPerception; // offset 0xA4, size 0x4
    class zNPCCombat * npcCombat; // offset 0xA8, size 0x4
    class zNPCQuickTimeCombat * npcQuickTimeCombat; // offset 0xAC, size 0x4
    class zNPCFX * npcFX; // offset 0xB0, size 0x4
    class zNPCExtraModel * npcExtraModels[2]; // offset 0xB4, size 0x8
    class zNPCInfoNode * npcInfoNodesFront; // offset 0xBC, size 0x4
};
// total size: 0x1C
class zNPCStatus {
    // Members
    class xVec3 lastPos; // offset 0x0, size 0xC
    class xVec3 lastOrientation; // offset 0xC, size 0xC
    enum eNPCStatus lastStatus; // offset 0x18, size 0x4
};
enum eNPCStatus {
    eNPCStatus_Unknown = 0,
    eNPCStatus_SpawnedAndAlive = 1,
    eNPCStatus_Dead = 2,
};
// total size: 0x3C
class zNPCType {
    // Members
    enum eNPCType npcTypeEnum; // offset 0x0, size 0x4
    enum eAnimSetType animSetType; // offset 0x4, size 0x4
    char * typeName; // offset 0x8, size 0x4
    class zNPCBase * (* allocateNPCFunction)(class EntityHandleBase * handle); // offset 0xC, size 0x4
    unsigned int npcTID_ID; // offset 0x10, size 0x4
    bool hasEntity; // offset 0x14, size 0x1
    class CreatorI * logicCreator; // offset 0x18, size 0x4
    class CreatorI * steeringCreator; // offset 0x1C, size 0x4
    class CreatorI * perceptionCreator; // offset 0x20, size 0x4
    class CreatorI * combatCreator; // offset 0x24, size 0x4
    class CreatorI * quickTimeCombatCreator; // offset 0x28, size 0x4
    class CreatorI * fxCreator; // offset 0x2C, size 0x4
    class CreatorI * extraModelCreator[2]; // offset 0x30, size 0x8
};
enum eNPCType {
    eNPCType_Unknown = 4294967295,
    eNPCType_AnimViewer = 0,
    eNPCType_NPCGeneric = 1,
    eNPCType_GenericSpawner = 2,
    eNPCType_UPGeneric = 3,
    eNPCType_SBGeneric = 4,
    eNPCType_GenericSwarm = 5,
    eNPCType_DetectorHuman = 6,
    eNPCType_Thief = 7,
    eNPCType_Gusteau = 8,
    eNPCType_Melee = 9,
    eNPCType_InstaKill = 10,
    eNPCType_Ranger = 11,
    eNPCType_TrapMimic = 12,
    eNPCType_TrapMouse = 13,
    eNPCType_TrapRadial = 14,
    eNPCType_TrapSpin = 15,
    eNPCType_Chaser = 16,
    eNPCType_ChaserProp = 17,
    eNPCType_DetectorHumanProp = 18,
    eNPCType_AmbientHuman = 19,
    eNPCType_Emile = 20,
    eNPCType_StationThuggo = 21,
    eNPCType_StationCeline = 22,
    eNPCType_StationRemy = 23,
    eNPCType_StationTwitch = 24,
    eNPCType_StationGitHammer = 25,
    eNPCType_StationGitPull = 26,
    eNPCType_LinguiniCooking = 27,
    eNPCTypeCount = 28,
    eNPCTypeForceInt = 2147483647,
};
enum eAnimSetType {
    TYPE_UNKNOWN = 0,
    PLAYER_TYPE_MP_CORE = 1,
    PLAYER_TYPE_CARL_CORE = 2,
    PLAYER_TYPE_RUSSELL_CORE = 3,
    PLAYER_TYPE_DUG_CORE = 4,
    PLAYER_TYPE_KEVIN_CORE = 5,
    PLAYER_TYPE_HOUSE_CORE = 6,
    PLAYER_TYPE_BIPLANE_CORE = 7,
    NPC_TYPE_ANIMVIEWER = 8,
    NPC_TYPE_CHARGER = 9,
    NPC_TYPE_TRAP_PROJECTILE = 10,
    NPC_TYPE_DETECTOR_HUMAN = 11,
    NPC_TYPE_EVE = 12,
    NPC_TYPE_AXIOM_HUMAN = 13,
    NPC_TYPE_SWARMER = 14,
    NPC_TYPE_PUPPET = 15,
    NPC_TYPE_STEWARD = 16,
    NPC_TYPE_MOWBOT = 17,
    NPC_TYPE_UP_GENERIC = 18,
    NPC_TYPE_SB_GENERIC = 19,
    NPC_TYPE_GENERIC = 20,
    NPC_TYPE_UP_BIPLANE = 21,
    NPC_TYPE_MM_JET = 22,
    OBJ_TYPE_SPRINGBOARD = 23,
    OBJ_TYPE_BREAKAWAY = 24,
    OBJ_TYPE_TRAP = 25,
    OBJ_TYPE_PLANT = 26,
    OBJ_TYPE_CAVEWORM = 27,
    OBJ_TYPE_HOUSE_BOUNCE = 28,
    OBJ_TYPE_FLOATING_BRIDGE = 29,
    OBJ_TYPE_COLLECTIBLE_SPAWNER = 30,
    OBJ_TYPE_NEWCOLLECTIBLE_SPAWNER = 31,
    PLAYER_TYPE_SPONGEBOB = 32,
    PLAYER_TYPE_PLANKTON = 33,
    PLAYER_TYPE_SBHUB = 34,
    OBJ_TYPE_HAMMER = 35,
    OBJ_TYPE_SPINNER = 36,
    OBJ_TYPE_TIKI = 37,
    OBJ_TYPE_BUTTON_HAMMER_STRENGTH = 38,
    PLAYER_TYPE_MASTERMIND_CORE = 39,
    PLAYER_TYPE_MASTERMIND_SKY = 40,
    PLAYER_TYPE_MASTERMIND_ALIEN = 41,
    PLAYER_TYPE_AVENGERS_THOR = 42,
    PLAYER_TYPE_AVENGERS_IRON_MAN = 43,
    PLAYER_TYPE_AVENGERS_HULK = 44,
    PLAYER_TYPE_AVENGERS_CAPTAIN_AMERICA = 45,
    PLAYER_TYPE_WII_ARTIST_MII = 46,
    PLAYER_TYPE_BOARD_SPONGEBOB = 47,
    PLAYER_TYPE_SHOOTING = 48,
    END_eAnimSetTypeENUM = 49,
};
// total size: 0x190
class NPCAsset : public xBaseAsset {
    // Members
    class xEntAsset EntAsset; // offset 0x10, size 0x100
    class uid LightKitID; // offset 0x110, size 0x8
    class uid ChrAssetID; // offset 0x118, size 0x8
    unsigned int shadowColor; // offset 0x120, size 0x4
    float shadowMaxDepth; // offset 0x124, size 0x4
    float shadowStartDepth; // offset 0x128, size 0x4
    unsigned int shadowMinBlur; // offset 0x12C, size 0x4
    unsigned int shadowMaxBlur; // offset 0x130, size 0x4
    class uid NPCTemplate; // offset 0x138, size 0x8
    unsigned int EnemyFlags; // offset 0x140, size 0x4
    class uid WallNet; // offset 0x148, size 0x8
    class uid MovePoint; // offset 0x150, size 0x8
    class uid MovePointNetwork; // offset 0x158, size 0x8
    unsigned int SpawnType; // offset 0x160, size 0x4
    class LinkAsset EventLinksNew; // offset 0x164, size 0x8
    class @class __anon; // offset 0x170, size 0x8
    class SpawnNoData SpawnPop; // offset 0x170, size 0x8
    class SpawnNoData SpawnNormal; // offset 0x170, size 0x8
    class SpawnWithMP SpawnJump; // offset 0x170, size 0x8
    class SpawnWithRange SpawnSwarmPop; // offset 0x170, size 0x4
    class SpawnNoData SpawnSwarmCopy; // offset 0x170, size 0x8
    class SpawnWithMP SpawnSwarmEmit; // offset 0x170, size 0x8
    unsigned int LODType; // offset 0x178, size 0x4
    class @class __anon; // offset 0x17C, size 0xC
    class LODTypeAlwaysUpdate LODAlwaysUpdate; // offset 0x17C, size 0x1
    class LODTypeCylinder LODCylinder; // offset 0x17C, size 0xC
};
// total size: 0x8
class @class {
    // Members
    class SpawnNoData SpawnPop; // offset 0x0, size 0x8
    class SpawnNoData SpawnNormal; // offset 0x0, size 0x8
    class SpawnWithMP SpawnJump; // offset 0x0, size 0x8
    class SpawnWithRange SpawnSwarmPop; // offset 0x0, size 0x4
    class SpawnNoData SpawnSwarmCopy; // offset 0x0, size 0x8
    class SpawnWithMP SpawnSwarmEmit; // offset 0x0, size 0x8
};
// total size: 0x8
class SpawnNoData {
    // Members
    class uid pad; // offset 0x0, size 0x8
};
// total size: 0x8
class SpawnWithMP {
    // Members
    class uid ToMP; // offset 0x0, size 0x8
};
// total size: 0x4
class SpawnWithRange {
    // Members
    float SpawnRadius; // offset 0x0, size 0x4
};
// total size: 0xC
class @class {
    // Members
    class LODTypeAlwaysUpdate LODAlwaysUpdate; // offset 0x0, size 0x1
    class LODTypeCylinder LODCylinder; // offset 0x0, size 0xC
};
// total size: 0x1
class LODTypeAlwaysUpdate {};
// total size: 0xC
class LODTypeCylinder {
    // Members
    float Radius; // offset 0x0, size 0x4
    float HeightUp; // offset 0x4, size 0x4
    float HeightDown; // offset 0x8, size 0x4
};
// total size: 0x14
class xModelAssetInfo {
    // Members
    unsigned int Magic; // offset 0x0, size 0x4
    unsigned int NumModelInst; // offset 0x4, size 0x4
    unsigned int AnimTableID; // offset 0x8, size 0x4
    unsigned int CombatID; // offset 0xC, size 0x4
    unsigned int BrainID; // offset 0x10, size 0x4
};
// total size: 0xE0
class zCharacterAsset : public CharacterAssets {};
// total size: 0xE0
class CharacterAssets {
    // Members
    class ModelInstanceAsset ModelInstance; // offset 0x0, size 0x40
    class uid AnimationSet; // offset 0x40, size 0x8
    class SoundSourcesPhysics SoundsPhysics; // offset 0x48, size 0x38
    class __IncludedCharacterAssets__ IncludedCharacterAssets; // offset 0x80, size 0x8
    class __ExtraModels__ ExtraModels; // offset 0x88, size 0x8
    class __ExtraAnimations__ ExtraAnimations; // offset 0x90, size 0x8
    class __UIDReferences__ UIDReferences; // offset 0x98, size 0x8
    class __UIDModelReferences__ UIDModelReferences; // offset 0xA0, size 0x8
    class __Shrapnel__ Shrapnel; // offset 0xA8, size 0x8
    class uid lightEffect; // offset 0xB0, size 0x8
    class __NPCFXs__ NPCFXs; // offset 0xB8, size 0x8
    class uid DefaultPerception; // offset 0xC0, size 0x8
    class __Parameters__ Parameters; // offset 0xC8, size 0x8
    class __weapons__ weapons; // offset 0xD0, size 0x8
};
// total size: 0x8
class __IncludedCharacterAssets__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __ExtraModels__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __ExtraAnimations__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __UIDReferences__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __UIDModelReferences__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __Shrapnel__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __NPCFXs__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __Parameters__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __weapons__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x104
class zNPCTemplate {
    // Members
    class NPCTemplate * templateAsset; // offset 0x0, size 0x4
    class MoveData moveData[8]; // offset 0x4, size 0x80
    float hoverHeight; // offset 0x84, size 0x4
    int rank; // offset 0x88, size 0x4
    class zNPCCounterPattern counterPattern; // offset 0x8C, size 0x24
    class zNPCCombatParams combatParams; // offset 0xB0, size 0x24
    class zNPCHeadTrackParams headTrackParams; // offset 0xD4, size 0x24
    class zNPCJawFlappingParams jawFlappingParams; // offset 0xF8, size 0xC
};
// total size: 0x128
class NPCTemplate {
    // Members
    class uid ChrAssetID; // offset 0x0, size 0x8
    float ModelScaleMult; // offset 0x8, size 0x4
    unsigned char CollisionType; // offset 0xC, size 0x1
    unsigned char CollisionShape; // offset 0xD, size 0x1
    bool CollisionRotWithNPC; // offset 0xE, size 0x1
    unsigned char CollisionMainAxis; // offset 0xF, size 0x1
    bool CollideWithPlayer; // offset 0x10, size 0x1
    class vec3 BoundOffset; // offset 0x14, size 0xC
    class vec3 BoundScaleV; // offset 0x20, size 0xC
    unsigned int UserData; // offset 0x2C, size 0x4
    class uid BehaviorSet; // offset 0x30, size 0x8
    unsigned int flags; // offset 0x38, size 0x4
    bool PlanktonTargetable; // offset 0x3C, size 0x1
    int PlanktonTargetBone; // offset 0x40, size 0x4
    bool EnableHeadTracking; // offset 0x44, size 0x1
    int FirstHeadBone; // offset 0x48, size 0x4
    int LastHeadBone; // offset 0x4C, size 0x4
    int FacingDirBone; // offset 0x50, size 0x4
    float MinPitch; // offset 0x54, size 0x4
    float MaxPitch; // offset 0x58, size 0x4
    float MinYaw; // offset 0x5C, size 0x4
    float MaxYaw; // offset 0x60, size 0x4
    float StopTrackDistance; // offset 0x64, size 0x4
    bool EnableJawFlapping; // offset 0x68, size 0x1
    short FirstBone; // offset 0x6A, size 0x2
    short LastBone; // offset 0x6C, size 0x2
    class uid CombatAsset; // offset 0x70, size 0x8
    class uid NPCCounterPattern; // offset 0x78, size 0x8
    bool IsBoss; // offset 0x80, size 0x1
    float VisibleRangeDEPRECATED; // offset 0x84, size 0x4
    float AttackRangeDEPRECATED; // offset 0x88, size 0x4
    float HoverHeight; // offset 0x8C, size 0x4
    unsigned char MovementStyle; // offset 0x90, size 0x1
    float LeanSpringTension; // offset 0x94, size 0x4
    float LeanRange; // offset 0x98, size 0x4
    class MovementType MoseyData; // offset 0x9C, size 0x10
    class MovementType WalkData; // offset 0xAC, size 0x10
    class MovementType JogData; // offset 0xBC, size 0x10
    class MovementType RunData; // offset 0xCC, size 0x10
    class MovementType SprintData; // offset 0xDC, size 0x10
    class MovementType StalkData; // offset 0xEC, size 0x10
    class MovementType ChargeData; // offset 0xFC, size 0x10
    class __Collectibles__ Collectibles; // offset 0x10C, size 0x8
    class uid CarlAnims; // offset 0x118, size 0x8
    class uid RussellAnims; // offset 0x120, size 0x8
};
// total size: 0x10
class MovementType {
    // Members
    float MaxSpeed; // offset 0x0, size 0x4
    float MaxAcceleration; // offset 0x4, size 0x4
    float TurningRadius; // offset 0x8, size 0x4
    float TurnSpring; // offset 0xC, size 0x4
};
// total size: 0x8
class __Collectibles__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x10
class MoveData {
    // Members
    float maxSpeed; // offset 0x0, size 0x4
    float maxAcceleration; // offset 0x4, size 0x4
    float turningRadius; // offset 0x8, size 0x4
    float turnSpring; // offset 0xC, size 0x4
};
// total size: 0x24
class zNPCCounterPattern {
    // Members
    int numCounterMoves; // offset 0x0, size 0x4
    class zNPCCounterPatternEntry counterMoves[4]; // offset 0x4, size 0x20
};
// total size: 0x8
class zNPCCounterPatternEntry {
    // Members
    int pattern; // offset 0x0, size 0x4
    float timeToReact; // offset 0x4, size 0x4
};
// total size: 0x24
class zNPCCombatParams {
    // Members
    float hitPoints; // offset 0x0, size 0x4
    class zCombatAttack * attackTable; // offset 0x4, size 0x4
    unsigned int attackTableSize; // offset 0x8, size 0x4
    class HitSpot * hitSpots; // offset 0xC, size 0x4
    unsigned int hitSpotCount; // offset 0x10, size 0x4
    class zNPCHitReactionTable * hitReactionTable; // offset 0x14, size 0x4
    unsigned int hitReactionTableCount; // offset 0x18, size 0x4
    class DamageMultiplier * damageMultipliers; // offset 0x1C, size 0x4
    unsigned int damageMultiplierCount; // offset 0x20, size 0x4
};
// total size: 0xD8
class zCombatAttack {
    // Members
    unsigned int state; // offset 0x0, size 0x4
    float attackStart; // offset 0x4, size 0x4
    float attackEnd; // offset 0x8, size 0x4
    float attackRadius; // offset 0xC, size 0x4
    class hitBoneInfo hitBones[6]; // offset 0x10, size 0x78
    float damage; // offset 0x88, size 0x4
    enum E_HAVOK_COLLIDE_FILTER_LAYER hitFilter; // offset 0x8C, size 0x4
    unsigned short flags; // offset 0x90, size 0x2
    enum eHitSource source; // offset 0x94, size 0x4
    bool hitsBSP; // offset 0x98, size 0x1
    float impact; // offset 0x9C, size 0x4
    unsigned short effect; // offset 0xA0, size 0x2
    unsigned short hitEffect; // offset 0xA2, size 0x2
    float effectStart; // offset 0xA4, size 0x4
    float effectEnd; // offset 0xA8, size 0x4
    unsigned int chainStateID; // offset 0xAC, size 0x4
    class RumbleEffectParams rumbleEffect; // offset 0xB0, size 0x20
    void (* hitCB)(class xEnt * hitter, class zCombatAttack * runningAttack, class xBase * hittee, class xVec3 * hit_loc, class xVec3 * hit_norm); // offset 0xD0, size 0x4
};
// total size: 0x14
class hitBoneInfo {
    // Members
    float radius; // offset 0x0, size 0x4
    unsigned short bone; // offset 0x4, size 0x2
    class xVec3 boneOffset; // offset 0x8, size 0xC
};
enum eHitSource {
    eHitSourceEVENT = 0,
    eHitSourceGENERAL = 1,
    eHitSourceEXPLOSION = 2,
    eHitSourceZERO_POINT = 3,
    eHitSourceJUGGLE = 4,
    eHitSourceLASER_PLAYER = 5,
    eHitSourceLASER_ENEMY = 6,
    eHitSourceSURFACE = 7,
    eHitSourceDEATHPLANE = 8,
    eHitSourceKNOCKBACK = 9,
    eHitSourceENEMY_HEAVY = 10,
    eHitSourceENEMY_LIGHT = 11,
    eHitSourceENEMY_ELECTRIFY = 12,
    eHitSourceEVENT_KILL = 14,
    eHitSourceDOT = 16,
    eHitSourceDOT_DROWN = 19,
    eHitSourceDEATHPLANE_DROWN = 20,
    eHitSourceDEATHPLANE_FALL = 21,
    eHitSourceCAVE_WORM = 23,
    eHitSourceDART_GUN = 24,
    eHitSourceSNARE = 25,
    eHitSourcePLANT = 26,
    eHitSourceSPIN_ATTACK = 27,
    eHitSourceSPIN_NOHAMMER_ATTACK = 28,
    eHitSourceHAMMER_ATTACK = 29,
    eHitSourceHAMMER_CRUSHING_ATTACK = 30,
    eHitSourcePUCK_ATTACK = 31,
    eHitSourceSPIN_SPONGEBUFF_ATTACK = 32,
    eHitSourceHAMMER_SPONGEBUFF_ATTACK = 33,
    eHitSourcePUCK_SPONGEBUFF_ATTACK = 34,
    eHitSourceSPIN_POWERUP_ATTACK = 35,
    eHitSourceHAMMER_POWERUP_ATTACK = 36,
    eHitSourcePUCK_POWERUP_ATTACK = 37,
    eHitSourceTURRET1 = 38,
    eHitSourceSPLASH_SPIN = 39,
    eHitSourceSPLASH_HAMMER = 40,
    eHitSourceSPLASH_PUCK = 41,
    eHitSourceHIGH_FALL_SB = 42,
    eHitSourceSPLASH_NPCSpawner = 43,
    eHitSourcePROJECTILE = 44,
    eHitSourceSB_PROJECTILE_NPC_BOMB_EXPLOSION = 45,
    eHitSourcePLAYER_FLUID = 46,
    eHitSourcePLANKTON_STUN = 47,
    eHitSourcePLANKTON_DAMAGE = 48,
    eHitSourceSPONGEBUFF_CANDY = 49,
    eHitSourceBUNGEE = 50,
    eHitSourceSPONGEBUFF_BUNGEE = 51,
    eHitSourceSPLASHBACK = 52,
    eHitSourceJOSE_KNOCKBACK = 53,
    eHitSourceSB_ELECTRIC_ARC = 54,
    eHitSourceRUBBER_BAND = 55,
    eHitSourcePLAYER = 56,
    eHitSourceBUG_CATCH = 57,
    eHitSourceBIPLANE_PLAYER1 = 58,
    eHitSourceBIPLANE_PLAYER2 = 59,
    eHitSourceBIPLANE_PLAYER3 = 60,
    eHitSourceBIPLANE_PLAYER4 = 61,
    END_eHitSourceENUM = 62,
};
// total size: 0x20
class RumbleEffectParams {
    // Members
    float startTime; // offset 0x0, size 0x4
    unsigned long long emitterID; // offset 0x8, size 0x8
    float SB_NMEHammerRumbleMax; // offset 0x10, size 0x4
    float SB_NMEHammerRumbleMin; // offset 0x14, size 0x4
    float SB_NMEHammerRumbleMaxDist; // offset 0x18, size 0x4
    float SB_NMEHammerRumbleMinDist; // offset 0x1C, size 0x4
};
// total size: 0x30
class HitSpot {
    // Members
    unsigned int Animation; // offset 0x0, size 0x4
    unsigned short Profiles; // offset 0x4, size 0x2
    unsigned short BoneIndex; // offset 0x6, size 0x2
    class vec3 Offset; // offset 0x8, size 0xC
    class vec3 Direction; // offset 0x14, size 0xC
    float Radius; // offset 0x20, size 0x4
    float Angle; // offset 0x24, size 0x4
    float StartTime; // offset 0x28, size 0x4
    float EndTime; // offset 0x2C, size 0x4
};
// total size: 0x8
class zNPCHitReactionTable {
    // Members
    enum eHitSource hitSource; // offset 0x0, size 0x4
    enum eNPCHitReaction hitReaction; // offset 0x4, size 0x4
};
enum eNPCHitReaction {
    eNPCHitReaction_Unknown = 0,
    eNPCHitReaction_Block = 1,
    eNPCHitReaction_Ignore = 2,
    eNPCHitReaction_Damage = 3,
    eNPCHitReaction_InstaDeath = 4,
};
// total size: 0x8
class DamageMultiplier {
    // Members
    enum eHitSource SourceType; // offset 0x0, size 0x4
    float Multiplier; // offset 0x4, size 0x4
};
// total size: 0x24
class zNPCHeadTrackParams {
    // Members
    int firstBone; // offset 0x0, size 0x4
    int lastBone; // offset 0x4, size 0x4
    int facingDirBone; // offset 0x8, size 0x4
    float minPitch; // offset 0xC, size 0x4
    float maxPitch; // offset 0x10, size 0x4
    float minYaw; // offset 0x14, size 0x4
    float maxYaw; // offset 0x18, size 0x4
    float stopTrackingDistance; // offset 0x1C, size 0x4
    bool stopTrackingWhenClipped; // offset 0x20, size 0x1
};
// total size: 0xC
class zNPCJawFlappingParams {
    // Members
    bool enableJawFlapping; // offset 0x0, size 0x1
    int firstBone; // offset 0x4, size 0x4
    int lastBone; // offset 0x8, size 0x4
};
// total size: 0x78
class xMovePoint : public xOGEntity {
    // Members
    class xMovePointAsset * asset; // offset 0x3C, size 0x4
    class xVec3 * pos; // offset 0x40, size 0x4
    unsigned int numChildren; // offset 0x44, size 0x4
    class xMovePoint * * children; // offset 0x48, size 0x4
    class xMovePoint * * parents; // offset 0x4C, size 0x4
    unsigned int numParents; // offset 0x50, size 0x4
    unsigned int oldParents; // offset 0x54, size 0x4
    unsigned int nodeWeightSum; // offset 0x58, size 0x4
    class xSpline3 * spl; // offset 0x5C, size 0x4
    unsigned char on; // offset 0x60, size 0x1
    unsigned char bezIndex; // offset 0x61, size 0x1
    unsigned char visited; // offset 0x62, size 0x1
    unsigned char pad; // offset 0x63, size 0x1
    float priority; // offset 0x64, size 0x4
    class xMovePoint * listNext; // offset 0x68, size 0x4
    class xMovePoint * traversalParent; // offset 0x6C, size 0x4
    float shortestPathDistance; // offset 0x70, size 0x4
};
// total size: 0x50
class xMovePointAsset : public xBaseScene {
    // Members
    class vec3 Pos; // offset 0x10, size 0xC
    unsigned short Weight; // offset 0x1C, size 0x2
    unsigned short flags; // offset 0x1E, size 0x2
    float delay; // offset 0x20, size 0x4
    float PathVariance; // offset 0x24, size 0x4
    class @class __anon; // offset 0x28, size 0x18
    class NoSpeed ns; // offset 0x28, size 0x1
    class Speed sp; // offset 0x28, size 0x18
    class __Connections__ Connections; // offset 0x40, size 0x8
    class LinkAsset EventLinksNew; // offset 0x48, size 0x8
};
// total size: 0x10
class xBaseScene : public xBaseAsset {};
// total size: 0x18
class @class {
    // Members
    class NoSpeed ns; // offset 0x0, size 0x1
    class Speed sp; // offset 0x0, size 0x18
};
// total size: 0x1
class NoSpeed {
    // Members
    unsigned char type; // offset 0x0, size 0x1
};
// total size: 0x18
class Speed {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    float SpeedStart; // offset 0x4, size 0x4
    float Acceleration; // offset 0x8, size 0x4
    float SpeedLimit; // offset 0xC, size 0x4
    float Deceleration; // offset 0x10, size 0x4
    float SpeedEnd; // offset 0x14, size 0x4
};
// total size: 0x8
class __Connections__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x2C
class xSpline3 {
    // Members
    unsigned short type; // offset 0x0, size 0x2
    unsigned short flags; // offset 0x2, size 0x2
    unsigned int N; // offset 0x4, size 0x4
    unsigned int allocN; // offset 0x8, size 0x4
    class xVec3 * points; // offset 0xC, size 0x4
    float * time; // offset 0x10, size 0x4
    class xVec3 * p12; // offset 0x14, size 0x4
    class xVec3 * bctrl; // offset 0x18, size 0x4
    float * knot; // offset 0x1C, size 0x4
    class xCoef3 * coef; // offset 0x20, size 0x4
    unsigned int arcSample; // offset 0x24, size 0x4
    float * arcLength; // offset 0x28, size 0x4
};
// total size: 0x30
class xCoef3 {
    // Members
    class xCoef x; // offset 0x0, size 0x10
    class xCoef y; // offset 0x10, size 0x10
    class xCoef z; // offset 0x20, size 0x10
};
// total size: 0x10
class xCoef {
    // Members
    float a[4]; // offset 0x0, size 0x10
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
// total size: 0x8
class zNPCLogic : public zNPCComponent {};
// total size: 0x4E8
class zNPCCombat : public zNPCComponent {
    // Members
    int attackID; // offset 0x8, size 0x4
    class zCombat baseCombat; // offset 0x10, size 0x260
    class zCombatHitSpot * hitSpots; // offset 0x270, size 0x4
    unsigned short hitSpotCount; // offset 0x274, size 0x2
    class zNPCCombatParams * parameters; // offset 0x278, size 0x4
    class zNPCCombatCollisionListener combatCollisionListener; // offset 0x27C, size 0x8
    bool hitsDisabled; // offset 0x284, size 0x1
    bool damageDisabled; // offset 0x285, size 0x1
    class zCombatDamageMultiplier * damageMultipliers; // offset 0x288, size 0x4
    unsigned short damageMultiplierCount; // offset 0x28C, size 0x2
    float attackStateTimer; // offset 0x290, size 0x4
    enum eRPSAttackTypes attackState; // offset 0x294, size 0x4
    enum eRPSAttackTypes nextAttackState; // offset 0x298, size 0x4
    class zNPCGetsDamageInfo damageList[6]; // offset 0x29C, size 0x108
    unsigned int damageListFrames[6]; // offset 0x3A4, size 0x18
    unsigned int damageListSize; // offset 0x3BC, size 0x4
    unsigned int blockListFrames[6]; // offset 0x3C0, size 0x18
    class zNPCGetsDamageInfo blockList[6]; // offset 0x3D8, size 0x108
    unsigned int blockListSize; // offset 0x4E0, size 0x4
};
// total size: 0x260
class zCombat {
    // Members
    class xHierarchyBound bounds; // offset 0x0, size 0x18
    unsigned int lastBoundUpdateTime; // offset 0x18, size 0x4
    class EventActionHit collParams; // offset 0x1C, size 0x18
    float currentHitPoints; // offset 0x34, size 0x4
    float maximumHitPoints; // offset 0x38, size 0x4
    unsigned short stateTableSize; // offset 0x3C, size 0x2
    class zCombatAttack * stateTable; // offset 0x40, size 0x4
    class xAnimState * animationState; // offset 0x44, size 0x4
    class zCombatAttack * runningAttack; // offset 0x48, size 0x4
    float runningAttackTimer; // offset 0x4C, size 0x4
    class xEnt * lastNPCDamaged; // offset 0x50, size 0x4
    bool disableMovement; // offset 0x54, size 0x1
    bool runningEffect; // offset 0x55, size 0x1
    bool runningBlur; // offset 0x56, size 0x1
    bool hitting; // offset 0x57, size 0x1
    bool hitEnv; // offset 0x58, size 0x1
    bool hitObject; // offset 0x59, size 0x1
    bool forceReset; // offset 0x5A, size 0x1
    unsigned char hitObjectCount; // offset 0x5B, size 0x1
    signed char firstValidHitObjectIndex; // offset 0x5C, size 0x1
    signed char lastValidHitObjectIndex; // offset 0x5D, size 0x1
    class xBase * hitObjects[24]; // offset 0x60, size 0x60
    class Time hitObjectsTime[24]; // offset 0xC0, size 0xC0
    float currentDamage; // offset 0x180, size 0x4
    float lastHitDamage; // offset 0x184, size 0x4
    enum eHitSource lastHitSource; // offset 0x188, size 0x4
    enum zHitTarget lastHitTarget; // offset 0x18C, size 0x4
    class sphereInfo location[6]; // offset 0x190, size 0xC0
    unsigned int effectParam; // offset 0x250, size 0x4
    class zCombatHitSpot * hitSpots; // offset 0x254, size 0x4
    unsigned short hitSpotCount; // offset 0x258, size 0x2
    unsigned short hitProfile; // offset 0x25A, size 0x2
};
// total size: 0x18
class xHierarchyBound {
    // Members
    class xSphere master; // offset 0x0, size 0x10
    class xHierarchyNode * nodes; // offset 0x10, size 0x4
    unsigned char count; // offset 0x14, size 0x1
    unsigned char maxCount; // offset 0x15, size 0x1
    signed char masterBone; // offset 0x16, size 0x1
};
// total size: 0x14
class xHierarchyNode {
    // Members
    class xSphere sphere; // offset 0x0, size 0x10
    unsigned short userData; // offset 0x10, size 0x2
    signed char bone; // offset 0x12, size 0x1
};
// total size: 0x18
class EventActionHit : public EventActionNew {
    // Members
    float damage; // offset 0x0, size 0x4
    enum eHitSource hitSource; // offset 0x4, size 0x4
    class vec3 knockback; // offset 0x8, size 0xC
    bool SentByDestructable; // offset 0x14, size 0x1
};
// total size: 0x1
class EventActionNew : public EventAny {};
// total size: 0x8
class Time {
    // Members
    long long ticks; // offset 0x0, size 0x8
};
enum zHitTarget {
    zHT_GENERAL = 0,
    zHT_FRONT = 1,
    zHT_BACK = 2,
    zHT_LEFT = 3,
    zHT_RIGHT = 4,
    zHT_ENTITY = 5,
    zHT_ENV = 6,
    zHT_CRITICAL = 7,
    zHT_COUNT = 8,
};
// total size: 0x20
class sphereInfo {
    // Members
    class xSphere sphere; // offset 0x0, size 0x10
    class xSphere previousSphere; // offset 0x10, size 0x10
};
// total size: 0x8
class zNPCCombatCollisionListener : public zNPCCollisionListener {};
// total size: 0x8
class zNPCCollisionListener : public hkpCharacterProxyListener {
    // Members
    class zNPCBase * npc; // offset 0x4, size 0x4
};
// total size: 0x4
class hkpCharacterProxyListener {};
// total size: 0x8
class zCombatDamageMultiplier {
    // Members
    enum eHitSource sourceType; // offset 0x0, size 0x4
    float multiplier; // offset 0x4, size 0x4
};
enum eRPSAttackTypes {
    eRPSAttackType_None = 0,
    eRPSAttackType_Hammer = 1,
    eRPSAttackType_Spin = 2,
    eRPSAttackType_Puck = 3,
    eRPSAttackType_Miniboss_Hammer = 4,
    eRPSAttackType_Miniboss_Spin = 5,
    eRPSAttackType_Miniboss_Puck = 6,
    END_eRPSAttackType_ENUM = 7,
};
// total size: 0x2C
class zNPCGetsDamageInfo {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    class xBase * from; // offset 0x4, size 0x4
    class zNPCEntity * npcEntity; // offset 0x8, size 0x4
    float damageHP; // offset 0xC, size 0x4
    float remainingHP; // offset 0x10, size 0x4
    enum eHitSource hitSource; // offset 0x14, size 0x4
    enum zHitTarget hitTarget; // offset 0x18, size 0x4
    enum eNPCHitReaction hitReaction; // offset 0x1C, size 0x4
    class xVec3 knockback; // offset 0x20, size 0xC
};
// total size: 0x30
class zNPCBound {
    // Members
    class xVec3 center; // offset 0x0, size 0xC
    class xVec3 extent; // offset 0xC, size 0xC
    enum eNPCEntityCollMainAxis mainAxis; // offset 0x18, size 0x4
    class xOGModel * modelInst; // offset 0x1C, size 0x4
    class xVec3 finalBoundScale; // offset 0x20, size 0xC
    bool isInit; // offset 0x2C, size 0x1
};
enum eNPCEntityCollMainAxis {
    eNPCEntityCollMainAxis_Auto = 0,
    eNPCEntityCollMainAxis_X = 1,
    eNPCEntityCollMainAxis_Y = 2,
    eNPCEntityCollMainAxis_Z = 3,
    END_eNPCEntityCollMainAxis_ENUM = 4,
};
// total size: 0x14
class zNPCEntityParams {
    // Members
    void (* beforeAnimMatricesFn)(class zNPCBase * npc, class xAnimPlay * play, class xQuat * quat, class xVec3 * scale, class xVec3 * tran, int boneCount); // offset 0x0, size 0x4
    void (* afterAnimMatricesFn)(class zNPCBase * npc, class xAnimPlay * play, class Matrix43 * skinMat, class xQuat * quat, class xVec3 * scale, class xVec3 * tran, int boneCount); // offset 0x4, size 0x4
    class ModelInstanceAsset * modelInstAsset; // offset 0x8, size 0x4
    class xAnimTable * animTable; // offset 0xC, size 0x4
    unsigned char collisionChkBy; // offset 0x10, size 0x1
    unsigned char collisionPenBy; // offset 0x11, size 0x1
};
// total size: 0xC
class zNPCRigidBodyCollisionListener : public hkpCollisionListener {
    // Members
    class zNPCBase * npc; // offset 0x4, size 0x4
    class hkpRigidBody * body; // offset 0x8, size 0x4
};
// total size: 0xB8
class xEntDrive {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    float outroTime; // offset 0x4, size 0x4
    float outroTimer; // offset 0x8, size 0x4
    float influenceOfOldDriver; // offset 0xC, size 0x4
    float introTime; // offset 0x10, size 0x4
    float introTimer; // offset 0x14, size 0x4
    float influenceOfDriver; // offset 0x18, size 0x4
    class xEnt * oldDriver; // offset 0x1C, size 0x4
    class xEnt * driver; // offset 0x20, size 0x4
    class xEnt * driven; // offset 0x24, size 0x4
    class xVec3 drivenPosInOldDriver; // offset 0x28, size 0xC
    class xVec3 drivenPosInDriver; // offset 0x34, size 0xC
    class xVec3 lastDrivenPos; // offset 0x40, size 0xC
    float yawInDriver; // offset 0x4C, size 0x4
    class xVec3 dLoc; // offset 0x50, size 0xC
    class triData tri; // offset 0x5C, size 0x5C
};
// total size: 0x5C
class triData {
    // Members
    unsigned int index; // offset 0x0, size 0x4
    float r; // offset 0x4, size 0x4
    float d; // offset 0x8, size 0x4
    class xVec3 loc; // offset 0xC, size 0xC
    float yaw; // offset 0x18, size 0x4
    class xMat4x3 trioldmat; // offset 0x1C, size 0x40
};
// total size: 0x8
class xHavokCharacterController {
    // Members
    class @class __anon; // offset 0x0, size 0x4
    class hkpCharacterProxy * characterProxy; // offset 0x0, size 0x4
    class hkpCharacterRigidBody * characterRigidBody; // offset 0x0, size 0x4
    enum ControllerType controllerType; // offset 0x4, size 0x4
};
// total size: 0x4
class @class {
    // Members
    class hkpCharacterProxy * characterProxy; // offset 0x0, size 0x4
    class hkpCharacterRigidBody * characterRigidBody; // offset 0x0, size 0x4
};
// total size: 0xC0
class hkpCharacterProxy : public hkReferencedObject, public hkpEntityListener, public hkpPhantomListener {
    // Members
    class hkVector4 m_velocity; // offset 0x10, size 0x10
    class hkVector4 m_oldDisplacement; // offset 0x20, size 0x10
    class hkpShapePhantom * m_shapePhantom; // offset 0x30, size 0x4
    float m_dynamicFriction; // offset 0x34, size 0x4
    float m_staticFriction; // offset 0x38, size 0x4
    class hkVector4 m_up; // offset 0x40, size 0x10
    float m_extraUpStaticFriction; // offset 0x50, size 0x4
    float m_extraDownStaticFriction; // offset 0x54, size 0x4
    float m_keepDistance; // offset 0x58, size 0x4
    float m_keepContactTolerance; // offset 0x5C, size 0x4
    float m_contactAngleSensitivity; // offset 0x60, size 0x4
    int m_userPlanes; // offset 0x64, size 0x4
    float m_maxCharacterSpeedForSolver; // offset 0x68, size 0x4
    float m_characterStrength; // offset 0x6C, size 0x4
    float m_characterMass; // offset 0x70, size 0x4
    class hkArray m_manifold; // offset 0x74, size 0xC
    class hkArray m_listeners; // offset 0x80, size 0xC
    class hkArray m_bodies; // offset 0x8C, size 0xC
    class hkArray m_phantoms; // offset 0x98, size 0xC
    float m_maxSlopeCosine; // offset 0xA4, size 0x4
    float m_penetrationRecoverySpeed; // offset 0xA8, size 0x4
    int m_maxCastIterations; // offset 0xAC, size 0x4
    bool m_refreshManifoldInCheckSupport; // offset 0xB0, size 0x1
};
// total size: 0x150
class hkpShapePhantom : public hkpPhantom {
    // Members
    class hkMotionState m_motionState; // offset 0xA0, size 0xB0
};
// total size: 0xC
class hkArray {
    // Members
    class hkpCharacterProxyListener * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x70
class hkpCharacterRigidBody : public hkReferencedObject, public hkpEntityListener, public hkpWorldPostSimulationListener {
    // Members
    class hkpRigidBody * m_character; // offset 0x10, size 0x4
    class hkVector4 m_up; // offset 0x20, size 0x10
    float m_maxSlopeCosine; // offset 0x30, size 0x4
    int m_userPlanes; // offset 0x34, size 0x4
    float m_penetrationRecoverySpeed; // offset 0x38, size 0x4
    float m_maxSpeedForSimplexSolver; // offset 0x3C, size 0x4
    float m_supportDistance; // offset 0x40, size 0x4
    class hkArray m_verticalContactPoints; // offset 0x44, size 0xC
    class hkVector4 m_acceleration; // offset 0x50, size 0x10
    float m_maxForce; // offset 0x60, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    class VertPointInfo * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x30
class VertPointInfo {
    // Members
    class hkContactPoint m_vertPoint; // offset 0x0, size 0x20
    class hkpSimpleConstraintContactMgr * m_mgr; // offset 0x20, size 0x4
};
// total size: 0x80
class hkpSimpleConstraintContactMgr : public hkpDynamicsContactMgr {
    // Members
    unsigned short m_reservedContactPoints; // offset 0x10, size 0x2
    unsigned short m_skipNextNprocessCallbacks; // offset 0x12, size 0x2
    class hkpSimpleContactConstraintData m_contactConstraintData; // offset 0x14, size 0x30
    class hkpConstraintInstance m_constraint; // offset 0x44, size 0x34
    unsigned int m_pad[2]; // offset 0x78, size 0x8
};
// total size: 0x10
class hkpDynamicsContactMgr : public hkpContactMgr {
    // Members
    class hkpWorld * m_world; // offset 0xC, size 0x4
};
enum ControllerType {
    NONE = 0,
    PROXY = 1,
    RIGID_BODY = 2,
};
enum eNPCEntityCollType {
    eNPCEntityCollType_None = 0,
    eNPCEntityCollType_CharacterProxy = 1,
    eNPCEntityCollType_Fixed = 2,
    eNPCEntityCollType_CharacterRigidBody = 3,
    END_eNPCEntityCollType_ENUM = 4,
};
// total size: 0x40
class hkpSurfaceInfo {
    // Members
    enum SupportedState m_supportedState; // offset 0x0, size 0x4
    class hkVector4 m_surfaceNormal; // offset 0x10, size 0x10
    class hkVector4 m_surfaceVelocity; // offset 0x20, size 0x10
    float m_surfaceDistance; // offset 0x30, size 0x4
    enum MotionType m_surfaceMotionType; // offset 0x34, size 0x4
};
enum SupportedState {
    UNSUPPORTED = 0,
    SLIDING = 1,
    SUPPORTED = 2,
};
// total size: 0x1C0
class TriggerIdentifyingPointCollector : public hkpAllCdPointCollector {
    // Members
    class hkArray m_objectsWeHit; // offset 0x1A0, size 0xC
    class hkArray m_contacts; // offset 0x1AC, size 0xC
};
// total size: 0xC
class hkArray {
    // Members
    class hkpWorldObject * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    class hkContactPoint * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x48
class iCamera {
    // Members
    class Viewport * camViewport; // offset 0x0, size 0x4
    float fov; // offset 0x4, size 0x4
    class xMat4x3 frame; // offset 0x8, size 0x40
};
// total size: 0x2BFC
class xAnimWorkBlock {
    // Members
    class xQuat q[256]; // offset 0x0, size 0x1000
    class xVec3 t[256]; // offset 0x1000, size 0xC00
    class xVec3 s[256]; // offset 0x1C00, size 0xC00
    float mw[255]; // offset 0x2800, size 0x3FC
};
// total size: 0xB0
class zSoundFXMultiple : public xOGEntity {
    // Members
    class zSoundAssetMultiple zsam; // offset 0x40, size 0x68
    class zSoundFXMultipleAsset * asset; // offset 0xA8, size 0x4
    bool registered; // offset 0xAC, size 0x1
};
// total size: 0x20
class zSoundFXMultipleAsset : public SoundEntity {
    // Members
    class SoundBankSource source; // offset 0x10, size 0xC
};
// total size: 0x10
class SoundEntity : public xBaseScene {};
// total size: 0x90
class zHintSphere : public xOGEntity {
    // Members
    class zHintSphereAsset * asset; // offset 0x3C, size 0x4
    class zHintSoundSourceManager soundSource; // offset 0x40, size 0x34
    float insideTimer; // offset 0x74, size 0x4
    float timeoutTimer; // offset 0x78, size 0x4
    int currentLevel; // offset 0x7C, size 0x4
    int currentRepeat; // offset 0x80, size 0x4
    bool isFirstPlay; // offset 0x84, size 0x1
    bool isFinish; // offset 0x85, size 0x1
    bool isActive; // offset 0x86, size 0x1
    bool isPlayerIn; // offset 0x87, size 0x1
    class zPlayer * nearestPlayer; // offset 0x88, size 0x4
};
// total size: 0x70
class zHintSphereAsset : public xBaseScene {
    // Members
    bool isActive; // offset 0x10, size 0x1
    bool canInterrupt; // offset 0x11, size 0x1
    bool isProtected; // offset 0x12, size 0x1
    float timeout; // offset 0x14, size 0x4
    class @class uHintType; // offset 0x20, size 0x30
    unsigned int HintType; // offset 0x50, size 0x4
    int Priority; // offset 0x54, size 0x4
    float FirstHintTime; // offset 0x58, size 0x4
    class __HintLevel__ HintLevel; // offset 0x5C, size 0x8
    class LinkAsset EventLinksNew; // offset 0x64, size 0x8
};
// total size: 0x30
class @class {
    // Members
    class sSphere Sphere; // offset 0x0, size 0x10
    class sBox Box; // offset 0x0, size 0x30
    class sAttach Attach; // offset 0x0, size 0x10
};
// total size: 0x10
class sSphere {
    // Members
    class vec3 Center; // offset 0x0, size 0xC
    float Radius; // offset 0xC, size 0x4
};
// total size: 0x30
class sBox {
    // Members
    class Matrix43POD Transform; // offset 0x0, size 0x30
};
// total size: 0x30
class Matrix43POD : public Matrix33POD {};
// total size: 0x30
class Matrix33POD {
    // Members
    class Vector4POD v[3]; // offset 0x0, size 0x30
};
// total size: 0x10
class Vector4POD {
    // Members
    float data[4]; // offset 0x0, size 0x10
};
// total size: 0x10
class sAttach {
    // Members
    class uid AttachToWidget; // offset 0x0, size 0x8
    float Radius; // offset 0x8, size 0x4
};
// total size: 0x8
class __HintLevel__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x34
class zHintSoundSourceManager {
    // Members
    class zHintSphereAsset * asset; // offset 0x0, size 0x4
    class zHintSoundAsset * soundAssetList; // offset 0x4, size 0x4
    int soundAssetCount; // offset 0x8, size 0x4
    bool isPlaying; // offset 0xC, size 0x1
    float timer; // offset 0x10, size 0x4
    int nowLevel; // offset 0x14, size 0x4
    int nowPlayer; // offset 0x18, size 0x4
    int nowPlaying; // offset 0x1C, size 0x4
    int nextToPlay; // offset 0x20, size 0x4
    class zHintSoundAsset * playerActiveSound[4]; // offset 0x24, size 0x10
};
// total size: 0x58
class zHintSoundAsset : public zSoundAsset {
    // Members
    float Delay; // offset 0x44, size 0x4
    int level; // offset 0x48, size 0x4
    int player; // offset 0x4C, size 0x4
    int element; // offset 0x50, size 0x4
};
// total size: 0x480
class zPlayer : public zEnt {
    // Members
    class zPlayerActionManager actionManager; // offset 0xC0, size 0x38
    int playerIndex; // offset 0xF8, size 0x4
    int viewportIndex; // offset 0xFC, size 0x4
    class xVec3 trigLastFramePos; // offset 0x100, size 0xC
    class xScene * sc; // offset 0x10C, size 0x4
    class zPlayerActionLaunchData actionLaunch; // offset 0x110, size 0x1C
    class PlayerStats playStats; // offset 0x12C, size 0x24
    enum eAnimSetType playerAnimSetType; // offset 0x150, size 0x4
    class xVec3 floor_pos; // offset 0x154, size 0xC
    class xVec3 floor_normal; // offset 0x160, size 0xC
    unsigned int floor_surfaceID; // offset 0x16C, size 0x4
    class xSphere extraSpheres[5]; // offset 0x170, size 0x50
    int numExtraSpheres; // offset 0x1C0, size 0x4
    int zPlayerFlags; // offset 0x1C4, size 0x4
    class zUIImage * markerGreen; // offset 0x1C8, size 0x4
    class zUIImage * markerRed; // offset 0x1CC, size 0x4
    class zUIImage * markerIRWarning; // offset 0x1D0, size 0x4
    class zUIImage * markerIRError; // offset 0x1D4, size 0x4
    class zUIImage * markerHealth; // offset 0x1D8, size 0x4
    class zUIImage * view; // offset 0x1DC, size 0x4
    class zTarget * target; // offset 0x1E0, size 0x4
    int ignoreInputThisFrame; // offset 0x1E4, size 0x4
    class zPlayerInput * playerInput; // offset 0x1E8, size 0x4
    float controlOffTimer; // offset 0x1EC, size 0x4
    unsigned int controlOff; // offset 0x1F0, size 0x4
    unsigned int controlOnEvent; // offset 0x1F4, size 0x4
    class zPlayerCheckPoint checkPoint; // offset 0x1F8, size 0x10
    bool cheatMode; // offset 0x208, size 0x1
    bool hidden; // offset 0x209, size 0x1
    bool unmounted; // offset 0x20A, size 0x1
    class xHavokCharacterController characterController; // offset 0x20C, size 0x8
    float capRadius; // offset 0x214, size 0x4
    float pWeight; // offset 0x218, size 0x4
    class zCombat * combat; // offset 0x21C, size 0x4
    class xVec3 lastDeltaPos; // offset 0x220, size 0xC
    float update_dt; // offset 0x22C, size 0x4
    float last_update_dt; // offset 0x230, size 0x4
    class xVec3 update_motion; // offset 0x234, size 0xC
    class xVec3 previous_position; // offset 0x240, size 0xC
    class xVec3 predictRotate; // offset 0x24C, size 0xC
    class xVec3 predictTranslate; // offset 0x258, size 0xC
    float predictAngV; // offset 0x264, size 0x4
    class xVec3 predictCurrDir; // offset 0x268, size 0xC
    float predictCurrVel; // offset 0x274, size 0x4
    class xVec3 positionBuffer[8]; // offset 0x278, size 0x60
    float bufferFrameRate; // offset 0x2D8, size 0x4
    class FloorObject floor_object; // offset 0x2DC, size 0x8
    class xEnt * prev_teeter; // offset 0x2E4, size 0x4
    class xAnimTable * playerAnimTable; // offset 0x2E8, size 0x4
    enum ePlayerName eName; // offset 0x2EC, size 0x4
    bool currentIsNearLedge; // offset 0x2F0, size 0x1
    bool currentIsNearLedgeValid; // offset 0x2F1, size 0x1
    float fallingTime; // offset 0x2F4, size 0x4
    float idleAnimationTimer; // offset 0x2F8, size 0x4
    float enemyKilledComboTimer; // offset 0x2FC, size 0x4
    int enemyKilledCombo; // offset 0x300, size 0x4
    class zCharacterAsset * m_charAssets; // offset 0x304, size 0x4
    class zPlayerTemplate m_playerTemplate; // offset 0x308, size 0x24
    class xEntDrive drv; // offset 0x32C, size 0xB8
    bool mountDrive; // offset 0x3E4, size 0x1
    float mountTime; // offset 0x3E8, size 0x4
    class xOGEntity * floorMount; // offset 0x3EC, size 0x4
    class xOGEntity * floorPhysicsDrive; // offset 0x3F0, size 0x4
    unsigned short parametersSize; // offset 0x3F4, size 0x2
    class xModelAssetParam * parameters; // offset 0x3F8, size 0x4
    float idleSoundTimer; // offset 0x3FC, size 0x4
    float lastLandHeight; // offset 0x400, size 0x4
    unsigned int * hitSoundsMap; // offset 0x404, size 0x4
    float activeTimer; // offset 0x408, size 0x4
    class xVec3 accumulatedExternalVelocity; // offset 0x40C, size 0xC
    class xVec3 accumulatedExternalAcceleration; // offset 0x418, size 0xC
    class xVec3 accumulatedExternalMomentumlessVelocity; // offset 0x424, size 0xC
    enum ePlayerActivationState playerActivationState; // offset 0x430, size 0x4
    class zNPCBase * perceivedByNPCs[16]; // offset 0x434, size 0x40
    int perceivedByNPCsCount; // offset 0x474, size 0x4
};
// total size: 0xC0
class zEnt : public xEnt {
    // Members
    class xAnimTable * atbl; // offset 0xBC, size 0x4
};
// total size: 0x38
class zPlayerActionManager {
    // Members
    class zPlayerAction * * actionList; // offset 0x0, size 0x4
    class zPlayerAction * currentAction; // offset 0x4, size 0x4
    unsigned int listSize; // offset 0x8, size 0x4
    unsigned int prevActionID; // offset 0xC, size 0x4
    unsigned int nextActionID; // offset 0x10, size 0x4
    unsigned int * enableFlags; // offset 0x14, size 0x4
    unsigned int enableFlagsCount; // offset 0x18, size 0x4
    class zUpContextActionManager contextManager; // offset 0x1C, size 0x1C
};
// total size: 0x10
class zPlayerAction {
    // Members
    class zPlayerActionManager * manager; // offset 0x0, size 0x4
    class zPlayer * player; // offset 0x4, size 0x4
    void (* cbFunc)(); // offset 0x8, size 0x4
};
// total size: 0x1C
class zUpContextActionManager {
    // Members
    bool contextActionTriggered; // offset 0x0, size 0x1
    class zUpContextAction * actionPool; // offset 0x4, size 0x4
    int actionPoolTotal; // offset 0x8, size 0x4
    int highestIdxPerType[3]; // offset 0xC, size 0xC
    enum eContextActionID lastHudAction; // offset 0x18, size 0x4
};
// total size: 0x34
class zUpContextAction {
    // Members
    unsigned char volumeType; // offset 0x0, size 0x1
    unsigned char actionType; // offset 0x1, size 0x1
    unsigned char uniqueActionId; // offset 0x2, size 0x1
    unsigned char pad0; // offset 0x3, size 0x1
    class zInteractionUP * upInteraction; // offset 0x4, size 0x4
    void * userData; // offset 0x8, size 0x4
    class volume volume; // offset 0xC, size 0x28
};
// total size: 0x50
class zInteractionUP : public xEffectAttachIntf {
    // Members
    unsigned char driving_count : 7; // offset 0x3C, size 0x1, bit offset 0
    unsigned int type; // offset 0x40, size 0x4
    class zCommonPlayer * player; // offset 0x44, size 0x4
    bool alive; // offset 0x48, size 0x1
    bool starting; // offset 0x49, size 0x1
    class zCommonPlayer * thisPlayerSkipsMe; // offset 0x4C, size 0x4
};
// total size: 0x8A0
class zCommonPlayer : public zPlayer {
    // Members
    enum eHitSource lastDamageType; // offset 0x478, size 0x4
    float dotTimer; // offset 0x47C, size 0x4
    bool has_picked_up_health; // offset 0x480, size 0x1
    float stickFlickMinTimer; // offset 0x484, size 0x4
    float stickFlickMaxTimer; // offset 0x488, size 0x4
    float stickFlickAngle; // offset 0x48C, size 0x4
    float prevFlickAngle; // offset 0x490, size 0x4
    bool is180; // offset 0x494, size 0x1
    float stickFlickUnit[2]; // offset 0x498, size 0x8
    class LedgeGrabParams ledge; // offset 0x4A0, size 0x3C
    class zInteractionManager interactionManager; // offset 0x4DC, size 0x10
    class xSpringyF32 lastGoodY; // offset 0x4EC, size 0x18
    class xVec3 lastSupportedPos; // offset 0x504, size 0xC
    class xVec3 drivenBydpos; // offset 0x510, size 0xC
    class xVec3 neoDriveDpos; // offset 0x51C, size 0xC
    bool neoMountMoved; // offset 0x528, size 0x1
    class zWallNetPosition curWallNetPosition; // offset 0x52C, size 0x24
    float last_dt; // offset 0x550, size 0x4
    enum HitType currentHitType; // offset 0x554, size 0x4
    class xVec3 damageVec; // offset 0x558, size 0xC
    float hitTimer; // offset 0x564, size 0x4
    int hitJuggleCount; // offset 0x568, size 0x4
    class zSoundSourcesPhysics soundSourcesPhysics; // offset 0x570, size 0x18
    class MoveSupressParams move_supress; // offset 0x588, size 0x28
    float autoMoveSpeed; // offset 0x5B0, size 0x4
    enum AutoMoveMode autoMoveMode; // offset 0x5B4, size 0x4
    float autoMoveDist; // offset 0x5B8, size 0x4
    class pointer_asset * autoMovePointer; // offset 0x5BC, size 0x4
    class xBase * autoMoveSender; // offset 0x5C0, size 0x4
    float extraIdleTimer; // offset 0x5C4, size 0x4
    float walkLerp; // offset 0x5C8, size 0x4
    unsigned int powerUpTbl[5]; // offset 0x5CC, size 0x14
    unsigned int health; // offset 0x5E0, size 0x4
    float healthRegenRate; // offset 0x5E4, size 0x4
    float healthRegenWait; // offset 0x5E8, size 0x4
    signed char speed; // offset 0x5EC, size 0x1
    signed char lastSpeed; // offset 0x5ED, size 0x1
    class zSoundFX * pSoundVocal; // offset 0x5F0, size 0x4
    unsigned int vocalInputAction; // offset 0x5F4, size 0x4
    unsigned int uCommonPlayerFlags; // offset 0x5F8, size 0x4
    class xMat4x3 playerAbsMat; // offset 0x5FC, size 0x40
    class xMat4x3 playerAbsMatBuffer; // offset 0x63C, size 0x40
    float xBuf; // offset 0x67C, size 0x4
    float zBuf; // offset 0x680, size 0x4
    float maxVelmag; // offset 0x684, size 0x4
    float leanLerp; // offset 0x688, size 0x4
    bool WALK_USE_MINSPEED; // offset 0x68C, size 0x1
    bool bReverse; // offset 0x68D, size 0x1
    float moveSpeedNormal[6]; // offset 0x690, size 0x18
    float moveSpeedJump[6]; // offset 0x6A8, size 0x18
    float normalTurnFactor; // offset 0x6C0, size 0x4
    float attackTurnFactor; // offset 0x6C4, size 0x4
    float airTurnFactor; // offset 0x6C8, size 0x4
    float stoppedTurnSpeedUp; // offset 0x6CC, size 0x4
    float LEAN_MIN_ANGLE; // offset 0x6D0, size 0x4
    float LEAN_MAX_ANGLE; // offset 0x6D4, size 0x4
    float LEAN_SMOOTH_CONSTANT; // offset 0x6D8, size 0x4
    float LEAN_SMOOTH_MINRATE; // offset 0x6DC, size 0x4
    float LEAN_MOVE_MAXDEFLECT; // offset 0x6E0, size 0x4
    float MIN_ANIMATE_MOVEMENT_ANGLE; // offset 0x6E4, size 0x4
    float KNOCKBACK_HORIZ; // offset 0x6E8, size 0x4
    float KNOCKBACK_VERT; // offset 0x6EC, size 0x4
    int MAX_JUGGLE_COUNT; // offset 0x6F0, size 0x4
    float LOW_HEALTH_THRESHOLD; // offset 0x6F4, size 0x4
    float FAST_RUN_TURN_FACTOR; // offset 0x6F8, size 0x4
    float MIN_WALK_ANALOGMAG; // offset 0x6FC, size 0x4
    bool shouldTurnToFace; // offset 0x700, size 0x1
    bool allowTurnToFaceAbort; // offset 0x701, size 0x1
    class xVec3 turnToFaceDir; // offset 0x704, size 0xC
    float turnToFaceSpeed; // offset 0x710, size 0x4
    float lastMag; // offset 0x714, size 0x4
    float lastAngle; // offset 0x718, size 0x4
    float moveAcceleration; // offset 0x71C, size 0x4
    float moveDeceleration; // offset 0x720, size 0x4
    float runTimer; // offset 0x724, size 0x4
    float minimumRunTime; // offset 0x728, size 0x4
    float stickMagnitude; // offset 0x72C, size 0x4
    float stickAngle; // offset 0x730, size 0x4
    float facingAngle; // offset 0x734, size 0x4
    bool facingAngleValid; // offset 0x738, size 0x1
    float skidStopDeceleration; // offset 0x73C, size 0x4
    float skidStopDecelTime; // offset 0x740, size 0x4
    float skidStopLerpTime; // offset 0x744, size 0x4
    class zPlayerConstrainer constrainer; // offset 0x748, size 0x1
    bool pushedPlayerLastFrame; // offset 0x749, size 0x1
    class xVec3 pushedPlayerEnemyPos; // offset 0x74C, size 0xC
    int bouncedBackToSafety; // offset 0x758, size 0x4
    float bounceBackTimer; // offset 0x75C, size 0x4
    class xVec3 floor_safe_vec[4]; // offset 0x760, size 0x30
    float floor_safe_tmr; // offset 0x790, size 0x4
    class xEnt * floor_safe_ent; // offset 0x794, size 0x4
    class xVec3 floor_safe_ent_pos; // offset 0x798, size 0xC
    float floor_safe_ent_tmr; // offset 0x7A4, size 0x4
    class zNPCBase * activeZeroPoint; // offset 0x7A8, size 0x4
    enum ZeroPointState zeroPointState; // offset 0x7AC, size 0x4
    enum ZeroPointFacing zeroPointFacing; // offset 0x7B0, size 0x4
    class zJawFlapper jawFlapper; // offset 0x7B4, size 0x4C
    class zBoneTracker headTracker; // offset 0x800, size 0x7C
    class xEnt * headTrackPrevLookAtEnt; // offset 0x87C, size 0x4
    class xEnt * headTrackPoiEnt; // offset 0x880, size 0x4
    class xVec3 headTrackPoi; // offset 0x884, size 0xC
    bool headTrackValidPoi; // offset 0x890, size 0x1
    bool headTrackBlendToLookAt; // offset 0x891, size 0x1
    class xEnt * headTrackOverrideEnt; // offset 0x894, size 0x4
};
// total size: 0x3C
class LedgeGrabParams {
    // Members
    enum LedgeState state; // offset 0x0, size 0x4
    class @class flags; // offset 0x4, size 0x4
    float delay; // offset 0x8, size 0x4
    class xVec3 playerToLedge; // offset 0xC, size 0xC
    class xVec3 player_bound_pos; // offset 0x18, size 0xC
    class xVec3 grab_position; // offset 0x24, size 0xC
    class xVec3 flipUpTrans; // offset 0x30, size 0xC
};
enum LedgeState {
    LedgeState_None = 0,
    LedgeState_JumpInterp = 1,
    LedgeState_Grab = 2,
    LedgeState_Count = 3,
    LedgeState_ForceSize = 2147483647,
};
// total size: 0x4
class @class {
    // Members
    bool hasGrabbedLedge : 1; // offset 0x0, size 0x1, bit offset 0
    bool inLedgeAnim : 1; // offset 0x0, size 0x1, bit offset 1
    bool foundValidLedge : 1; // offset 0x0, size 0x1, bit offset 2
    unsigned int pad : 27; // offset 0x0, size 0x4, bit offset 3
};
// total size: 0x10
class zInteractionManager {
    // Members
    class zInteractionUP * currentInteraction; // offset 0x0, size 0x4
    enum zInteractionStateUP state; // offset 0x4, size 0x4
    class zCommonPlayer * player; // offset 0x8, size 0x4
    bool moveDone; // offset 0xC, size 0x1
};
enum zInteractionStateUP {
    eInteractionStateInactive = 0,
    eInteractionStateMoveTo = 1,
    eInteractionStateActive = 2,
    eInteractionStateCount = 3,
};
// total size: 0x18
class xSpringyF32 : public xSpringy {
    // Members
    float mVelocitySaveMax; // offset 0x4, size 0x4
    float mVelocityMax; // offset 0x8, size 0x4
    float mVelocity; // offset 0xC, size 0x4
    float mGoal; // offset 0x10, size 0x4
    float mCurrent; // offset 0x14, size 0x4
};
// total size: 0x4
class xSpringy {
    // Members
    float mResponse; // offset 0x0, size 0x4
};
// total size: 0x24
class zWallNetPosition {
    // Members
    class xVec3 curPos; // offset 0x0, size 0xC
    class xVec3 curPosOnWallNet; // offset 0xC, size 0xC
    class zWallNet * curWallNet; // offset 0x18, size 0x4
    int curTriangleID; // offset 0x1C, size 0x4
    bool isOnWallNet; // offset 0x20, size 0x1
};
// total size: 0x60
class zWallNet : public xOGEntity {
    // Members
    class zWallNetAsset * wallNetAsset; // offset 0x3C, size 0x4
    bool isOn; // offset 0x40, size 0x1
    bool isNPCOnly; // offset 0x41, size 0x1
    class xVec3 boundBoxMin; // offset 0x44, size 0xC
    class xVec3 boundBoxMax; // offset 0x50, size 0xC
};
// total size: 0x50
class zWallNetAsset : public xBaseAsset {
    // Members
    int assetSize; // offset 0x10, size 0x4
    int numBounds; // offset 0x14, size 0x4
    int numVertices; // offset 0x18, size 0x4
    int numEdges; // offset 0x1C, size 0x4
    int numBoundEdges; // offset 0x20, size 0x4
    int numTriangles; // offset 0x24, size 0x4
    float upperYTol; // offset 0x28, size 0x4
    float lowerYTol; // offset 0x2C, size 0x4
    unsigned int flags; // offset 0x30, size 0x4
    class zWallNetBound * bounds; // offset 0x34, size 0x4
    class xVec3 * vertices; // offset 0x38, size 0x4
    class zWallNetEdge * edges; // offset 0x3C, size 0x4
    class zWallNetTriangle * triangles; // offset 0x40, size 0x4
    class zWallNetTriConx * connections; // offset 0x44, size 0x4
    class zShortestPathTree shortestPathTree; // offset 0x48, size 0x8
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
enum HitType {
    eHitType_None = 4294967295,
    eHitType_Light = 0,
    eHitType_BackPlayerHit = 1,
    eHitType_FrontPlayerHit = 2,
    eHitType_InfiniteFall = 3,
    eHitType_Drown = 4,
    eHitType_Bite = 5,
    eHitType_Electric = 6,
    eHitType_Count = 7,
};
// total size: 0x18
class zSoundSourcesPhysics {
    // Members
    class zSoundAssetMultiple * m_soundHit; // offset 0x0, size 0x4
    class zSoundAssetMultiple * m_soundScrape; // offset 0x4, size 0x4
    class zSoundAssetMultiple * m_soundRoll; // offset 0x8, size 0x4
    class SoundPhysicsData * m_soundPhysicsData; // offset 0xC, size 0x4
    unsigned long long m_owner; // offset 0x10, size 0x8
};
// total size: 0x28
class MoveSupressParams {
    // Members
    class Point points[3]; // offset 0x0, size 0x18
    bool pointsInitialized[3]; // offset 0x18, size 0x3
    bool verified_init; // offset 0x1B, size 0x1
    unsigned int num_segments; // offset 0x1C, size 0x4
    float cur_time; // offset 0x20, size 0x4
    float cur_supression; // offset 0x24, size 0x4
};
// total size: 0x8
class Point {
    // Members
    float value; // offset 0x0, size 0x4
    float time; // offset 0x4, size 0x4
};
enum AutoMoveMode {
    eAutoMoveOff = 0,
    eAutoMoveMoving = 1,
    eAutoMoveInterp = 2,
};
// total size: 0x28
class pointer_asset : public xBaseAsset {
    // Members
    class xVec3 loc; // offset 0x10, size 0xC
    float yaw; // offset 0x1C, size 0x4
    float pitch; // offset 0x20, size 0x4
    float roll; // offset 0x24, size 0x4
};
// total size: 0x98
class zSoundFX : public xOGEntity {
    // Members
    class zSoundAsset zsa; // offset 0x40, size 0x48
    class zSoundFXAsset * asset; // offset 0x88, size 0x4
    class xEnt * attachedTo; // offset 0x8C, size 0x4
    bool needUpdate; // offset 0x90, size 0x1
    float lastUpdateTime; // offset 0x94, size 0x4
};
// total size: 0x38
class zSoundFXAsset : public SoundEntity {
    // Members
    class vec3 pos; // offset 0x10, size 0xC
    class uid attach; // offset 0x20, size 0x8
    class SoundBankSource source; // offset 0x28, size 0xC
    bool needUpdate; // offset 0x34, size 0x1
};
// total size: 0x1
class zPlayerConstrainer {};
enum ZeroPointState {
    eZeroPointNone = 0,
    eZeroPointPull = 1,
    eZeroPointHold = 2,
    eZeroPointThrown = 3,
    eZeroPointReleased = 4,
};
enum ZeroPointFacing {
    eZeroPointFacingInvalid = 0,
    eZeroPointFacingTowards = 1,
    eZeroPointFacingAway = 2,
};
// total size: 0x4C
class zJawFlapper {
    // Members
    float BLEND_TIME; // offset 0x0, size 0x4
    float QUAT_DOT_THRESHOLD; // offset 0x4, size 0x4
    class xOGModelRef * ogModel; // offset 0x8, size 0x4
    int jawBone; // offset 0xC, size 0x4
    int lastJawBone; // offset 0x10, size 0x4
    int fxBone; // offset 0x14, size 0x4
    float pitchMin; // offset 0x18, size 0x4
    float pitchMax; // offset 0x1C, size 0x4
    float jawRotationPeriod; // offset 0x20, size 0x4
    float rotationAmount; // offset 0x24, size 0x4
    bool enabled; // offset 0x28, size 0x1
    class xQuat prevJawQuat; // offset 0x2C, size 0x10
    class zFXSpawn * fxSpawnAsset; // offset 0x3C, size 0x4
    class zFXSpawn * fxSpawn; // offset 0x40, size 0x4
    enum eJawAnimState jawAnimState; // offset 0x44, size 0x4
    enum JawBoneMovementType jawAnimationType; // offset 0x48, size 0x4
};
// total size: 0x178
class zFXSpawn : public xOGEntity {
    // Members
    bool toFree; // offset 0x3C, size 0x1
    bool isFree; // offset 0x3D, size 0x1
    int FXPoolIndex; // offset 0x40, size 0x4
    class _AssetData AssetData; // offset 0x48, size 0x68
    unsigned int memAllocedSize; // offset 0xB0, size 0x4
    unsigned int mFlags; // offset 0xB4, size 0x4
    unsigned int mNumEvents; // offset 0xB8, size 0x4
    enum eFXState * mFxState; // offset 0xBC, size 0x4
    class VarianceValues * mVarianceData; // offset 0xC0, size 0x4
    float * mStopTimes; // offset 0xC4, size 0x4
    int * mLookupList; // offset 0xC8, size 0x4
    class ScriptResource * mResourceList; // offset 0xCC, size 0x4
    class SystemInstance * mParticleSystems; // offset 0xD0, size 0x4
    class SystemInstance * mObjectSystems; // offset 0xD4, size 0x4
    class xLightData * * mDynamicLights; // offset 0xD8, size 0x4
    class zDecal * * mDecals; // offset 0xDC, size 0x4
    class SystemInstance * mRibbonSystems; // offset 0xE0, size 0x4
    class SystemInstance * mShrapnelSystems; // offset 0xE4, size 0x4
    class xOGModel * * mModels; // offset 0xE8, size 0x4
    class FXScreenWarp * mScreenWarps; // offset 0xEC, size 0x4
    unsigned int mNumEmittersThatStop; // offset 0xF0, size 0x4
    class FXSpawn * mAsset; // offset 0xF4, size 0x4
    class xMat4x3 mBaseTransform; // offset 0xF8, size 0x40
    class xVec3 mScaleBounds; // offset 0x138, size 0xC
    class xVec3 mLocalDPos; // offset 0x144, size 0xC
    class xVec3 mLocalLastPos; // offset 0x150, size 0xC
    class xVec3 * mDriverPos; // offset 0x15C, size 0x4
    class xVec3 * mDriverDPos; // offset 0x160, size 0x4
    class xEffectAttachIntf * mDriver; // offset 0x164, size 0x4
    class xOGModelRefPtr mModel; // offset 0x168, size 0x4
    int mAttachBone; // offset 0x16C, size 0x4
    float mTime; // offset 0x170, size 0x4
    unsigned int mIterations; // offset 0x174, size 0x4
};
// total size: 0x68
class _AssetData {
    // Members
    class xVec3 position; // offset 0x0, size 0xC
    class xVec3 orientation; // offset 0xC, size 0xC
    class CullingData Culling; // offset 0x18, size 0x8
    class FXTiming Timing; // offset 0x20, size 0x10
    class FXAttachEntity Entity; // offset 0x30, size 0x30
    bool autoStart; // offset 0x60, size 0x1
    bool volumeScale; // offset 0x61, size 0x1
};
// total size: 0x8
class CullingData {
    // Members
    float cullDistance; // offset 0x0, size 0x4
    int cullPriority; // offset 0x4, size 0x4
};
// total size: 0x10
class FXTiming {
    // Members
    float playTime; // offset 0x0, size 0x4
    float cycleTime; // offset 0x4, size 0x4
    bool loop; // offset 0x8, size 0x1
    float chance; // offset 0xC, size 0x4
};
// total size: 0x30
class FXAttachEntity {
    // Members
    class uid entity; // offset 0x0, size 0x8
    float velScale; // offset 0x8, size 0x4
    short bone; // offset 0xC, size 0x2
    class vec3 Offset; // offset 0x10, size 0xC
    class Rotation3 Rotation; // offset 0x1C, size 0xC
    bool volumeScale; // offset 0x28, size 0x1
};
enum eFXState {
    eNotStarted = 0,
    eRunning = 1,
    eFinishing = 2,
    eStopped = 3,
};
// total size: 0x8
class VarianceValues {
    // Members
    int mStart; // offset 0x0, size 0x4
    int mStop; // offset 0x4, size 0x4
};
// total size: 0x8
class ScriptResource {
    // Members
    int mType; // offset 0x0, size 0x4
    class zSoundAssetMultiple * mSoundAssetMultiple; // offset 0x4, size 0x4
};
// total size: 0x94
class xLightData {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    class xLightAsset * tasset; // offset 0x4, size 0x4
    class LightPointSpot * ngLight; // offset 0x8, size 0x4
    class xBase * attachedTo; // offset 0xC, size 0x4
    class xVec3 attachedOffset; // offset 0x10, size 0xC
    class ColorF startColor; // offset 0x1C, size 0x10
    class ColorF endColor; // offset 0x2C, size 0x10
    float transTimeLeft; // offset 0x3C, size 0x4
    float totalTransTime; // offset 0x40, size 0x4
    class xLightEffectBase * lightEffect; // offset 0x44, size 0x4
    bool lightEffectRunning; // offset 0x48, size 0x1
    float lightEffectSpeed; // offset 0x4C, size 0x4
    class @class __anon; // offset 0x50, size 0x18
    class xLightEffectFlickerData flickerData; // offset 0x50, size 0x14
    class xLightEffectStrobeData strobeData; // offset 0x50, size 0x18
    class xVec3 lightPos; // offset 0x68, size 0xC
    class xVec3 lightDir; // offset 0x74, size 0xC
    float lightRadius; // offset 0x80, size 0x4
    class ColorF lightColor; // offset 0x84, size 0x10
};
// total size: 0xC0
class xLightAsset : public LightAsset {};
// total size: 0xC0
class LightAsset : public xBaseScene {
    // Members
    class uid lightEffect; // offset 0x10, size 0x8
    float lightEffectSpeed; // offset 0x18, size 0x4
    bool InitiallyOn; // offset 0x1C, size 0x1
    class uid attachTo; // offset 0x20, size 0x8
    class ModelInstanceAsset lightCardModelInstance; // offset 0x30, size 0x40
    float lightCardScale; // offset 0x70, size 0x4
    float LODDistance; // offset 0x74, size 0x4
    class LightPointSpotAsset PointSpotAsset; // offset 0x78, size 0x3C
    class LinkAsset EventLinksNew; // offset 0xB4, size 0x8
};
// total size: 0x3C
class LightPointSpotAsset {
    // Members
    unsigned short lightType; // offset 0x0, size 0x2
    unsigned short lightMask; // offset 0x2, size 0x2
    float projectScale; // offset 0x4, size 0x4
    class FloatColorRGB color; // offset 0x8, size 0xC
    float intensity; // offset 0x14, size 0x4
    class vec3 pos; // offset 0x18, size 0xC
    float radius; // offset 0x24, size 0x4
    class Rotation3 orientation; // offset 0x28, size 0xC
    class vec2 coneAngles; // offset 0x34, size 0x8
};
// total size: 0xC
class FloatColorRGB {
    // Members
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
};
// total size: 0x8
class vec2 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x10
class ColorF {
    // Members
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
};
// total size: 0x40
class xLightEffectBase : public xOGEntity {};
// total size: 0x18
class @class {
    // Members
    class xLightEffectFlickerData flickerData; // offset 0x0, size 0x14
    class xLightEffectStrobeData strobeData; // offset 0x0, size 0x18
};
// total size: 0x14
class xLightEffectFlickerData {
    // Members
    class ColorF initialColor; // offset 0x0, size 0x10
    float time; // offset 0x10, size 0x4
};
// total size: 0x18
class xLightEffectStrobeData {
    // Members
    class ColorF maxColor; // offset 0x0, size 0x10
    float time; // offset 0x10, size 0x4
    unsigned char stage; // offset 0x14, size 0x1
};
// total size: 0x98
class zDecal : public xOGEntity {
    // Members
    class xResponseCurve curve; // offset 0x3C, size 0x10
    class emit_context emitInfo; // offset 0x4C, size 0x44
    float nextEmit; // offset 0x90, size 0x4
    class Decal * asset; // offset 0x94, size 0x4
};
// total size: 0x10
class xResponseCurve {
    // Members
    unsigned int _values; // offset 0x0, size 0x4
    class inode * curve; // offset 0x4, size 0x4
    unsigned int _nodes; // offset 0x8, size 0x4
    unsigned int active_node; // offset 0xC, size 0x4
};
// total size: 0x8
class inode : public node {
    // Members
    float value[1]; // offset 0x4, size 0x4
};
// total size: 0x4
class node {
    // Members
    float t; // offset 0x0, size 0x4
};
// total size: 0x44
class emit_context {
    // Members
    float life; // offset 0x0, size 0x4
    float max_dist; // offset 0x4, size 0x4
    class ImmediatePrototypeEntity * entity; // offset 0x8, size 0x4
    class xVec2 size; // offset 0xC, size 0x8
    class xVec2 sizeVariation; // offset 0x14, size 0x8
    class xVec2 uv[2]; // offset 0x1C, size 0x10
    unsigned int animRows; // offset 0x2C, size 0x4
    unsigned int animCols; // offset 0x30, size 0x4
    float fps; // offset 0x34, size 0x4
    float animTime; // offset 0x38, size 0x4
    unsigned short flags; // offset 0x3C, size 0x2
    class xResponseCurve * curve; // offset 0x40, size 0x4
};
// total size: 0x20
class ImmediatePrototypeEntity : public Entity {
    // Members
    int memSize; // offset 0x18, size 0x4
    int geomCount; // offset 0x1C, size 0x4
};
// total size: 0x8
class xVec2 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x58
class Decal : public xBaseScene {
    // Members
    float emitRate; // offset 0x10, size 0x4
    float life; // offset 0x14, size 0x4
    float range; // offset 0x18, size 0x4
    class uid entity; // offset 0x20, size 0x8
    float width; // offset 0x28, size 0x4
    float height; // offset 0x2C, size 0x4
    class _Variance Variance; // offset 0x30, size 0xC
    unsigned int animRows; // offset 0x3C, size 0x4
    unsigned int animCols; // offset 0x40, size 0x4
    float fps; // offset 0x44, size 0x4
    float animTime; // offset 0x48, size 0x4
    bool randomStart; // offset 0x4C, size 0x1
    class __curveNodes__ curveNodes; // offset 0x50, size 0x8
};
// total size: 0xC
class _Variance {
    // Members
    float widthVar; // offset 0x0, size 0x4
    float heightVar; // offset 0x4, size 0x4
    bool randRotation; // offset 0x8, size 0x1
    bool varianceLocked; // offset 0x9, size 0x1
};
// total size: 0x8
class __curveNodes__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x58
class SystemInstance {
    // Members
    unsigned long long mAssetID; // offset 0x0, size 0x8
    class ShrapnelAssetDef * mAsset; // offset 0x8, size 0x4
    class xBaseTransform mBaseTransform; // offset 0xC, size 0x48
};
// total size: 0x20
class ShrapnelAssetDef : public xBaseAsset {
    // Members
    float IntraCollisionDelay; // offset 0x10, size 0x4
    class __fragList__ fragList; // offset 0x14, size 0x8
};
// total size: 0x8
class __fragList__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x48
class xBaseTransform {
    // Members
    class xMat4x3 transform; // offset 0x0, size 0x40
    class xVec3 * dPos; // offset 0x40, size 0x4
    float dPosScale; // offset 0x44, size 0x4
};
// total size: 0x80
class FXSpawn : public xBaseScene {
    // Members
    bool autoStart; // offset 0x10, size 0x1
    class vec3 position; // offset 0x14, size 0xC
    class Rotation3 orientation; // offset 0x20, size 0xC
    class CullingData Culling; // offset 0x2C, size 0x8
    class FXTiming Timing; // offset 0x34, size 0x10
    class FXAttachEntity Entity; // offset 0x48, size 0x30
    class __ScriptEvents__ ScriptEvents; // offset 0x78, size 0x8
};
// total size: 0x8
class __ScriptEvents__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
enum eJawAnimState {
    JAW_ANIM_OFF = 0,
    JAW_ANIM_ON = 1,
    JAW_ANIM_BLEND_OFF = 2,
};
enum JawBoneMovementType {
    JAWBONE_TALK = 0,
    JAWBONE_YELL = 1,
};
// total size: 0x7C
class zBoneTracker {
    // Members
    class xVec3 lastAtVector; // offset 0x0, size 0xC
    class xVec3 lastSetAtVector; // offset 0xC, size 0xC
    class xModelInstance * model; // offset 0x18, size 0x4
    class xVec3 lookAtLocation; // offset 0x1C, size 0xC
    int rootBone; // offset 0x28, size 0x4
    int lastHeadBone; // offset 0x2C, size 0x4
    int facingDirBone; // offset 0x30, size 0x4
    class xQuat prevResultQuat; // offset 0x34, size 0x10
    bool lookAtSet; // offset 0x44, size 0x1
    float blendAmt; // offset 0x48, size 0x4
    float blendIncrement; // offset 0x4C, size 0x4
    float blendTimer; // offset 0x50, size 0x4
    float BLEND_TIME; // offset 0x54, size 0x4
    float currentPitch; // offset 0x58, size 0x4
    float pitchMin; // offset 0x5C, size 0x4
    float pitchMax; // offset 0x60, size 0x4
    float currentYaw; // offset 0x64, size 0x4
    float yawMin; // offset 0x68, size 0x4
    float yawMax; // offset 0x6C, size 0x4
    float distanceThreshold; // offset 0x70, size 0x4
    bool stopTrackingWhenClipped : 1; // offset 0x74, size 0x1, bit offset 0
    unsigned int pad : 30; // offset 0x74, size 0x4, bit offset 1
    enum eTrackingState trackingState; // offset 0x78, size 0x4
};
enum eTrackingState {
    TRACKING_OFF = 0,
    TRACKING_BEGIN_LOOK_AT = 1,
    TRACKING_LOOK_AT = 2,
    TRACKING_BLEND_LOOK_AT = 3,
    TRACKING_END_LOOK_AT = 4,
    numTrackingState = 5,
};
// total size: 0x28
class volume {
    // Members
    class xVec3 pos; // offset 0x0, size 0xC
    class sphere sphere; // offset 0xC, size 0x4
    class aabb aabb; // offset 0x10, size 0xC
    class obb obb; // offset 0x1C, size 0xC
};
// total size: 0x4
class sphere {
    // Members
    float radius; // offset 0x0, size 0x4
};
// total size: 0xC
class aabb {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0xC
class obb {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
enum eContextActionID {
    eContextActionID_None = 0,
    eContextActionID_Jump = 1,
    eContextActionID_MeleeAttack = 2,
    eContextActionID_BugSquish = 3,
    eContextActionID_BugCatch = 4,
    eContextActionID_RopeTie = 5,
    eContextActionID_CarlBlowBalloon = 6,
    eContextActionID_CarlBlowBalloon_Bridge = 7,
    eContextActionID_Push = 8,
    eContextActionID_LedgeGrab = 9,
    eContextActionID_LedgeHoist = 10,
    eContextActionID_RussellDangle = 11,
    eContextActionID_FightTrap = 12,
    eContextActionID_ReleaseTrap = 13,
    eContextActionID_PopBalloons = 14,
    eContextActionID_Crawl = 15,
    eContextActionID_StepUp = 16,
    eContextActionID_Springboard = 17,
    eContextActionID_SpringboardBounce = 18,
    eContextActionID_Swim = 19,
    eContextActionID_Sniff = 20,
    eContextActionID_Dig = 21,
    eContextActionID_KevinDangle = 22,
    eContextActionID_PlantTrapped = 23,
    eContextActionID_Slide = 24,
    eContextActionID_VineSwing = 25,
    eContextActionID_Pry = 26,
    eContextActionID_DugLever = 27,
    eContextActionID_RopeCut = 28,
    eContextActionID_Crank = 29,
    eContextActionID_TurnCrank = 30,
    eContextActionID_RussellRope = 31,
    eContextActionID_SinkingSurface = 32,
    eContextActionID_LedgeShimmy = 33,
    eContextActionID_LedgeShimmyRegainBalance = 34,
    eContextActionID_CaveWormStruggle = 35,
    eContextActionID_HouseBalloonBounce = 36,
    eContextActionID_HouseFloat = 37,
    eContextActionID_WiiShake = 38,
    eContextActionID_WiiSaw = 39,
    END_eContextActionID_ENUM = 40,
};
// total size: 0x1C
class zPlayerActionLaunchData {
    // Members
    unsigned char start; // offset 0x0, size 0x1
    unsigned char hasRotation; // offset 0x1, size 0x1
    unsigned char useRagdoll; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
    class xVec3 targetPos; // offset 0x4, size 0xC
    class xVec3 targetDir; // offset 0x10, size 0xC
};
// total size: 0x24
class PlayerStats {
    // Members
    int enemiesDefeated; // offset 0x0, size 0x4
    float meleeDamage; // offset 0x4, size 0x4
    float airMeleeDamage; // offset 0x8, size 0x4
    float rangeDamage; // offset 0xC, size 0x4
    float dodgeDamage; // offset 0x10, size 0x4
    int finishingMoves; // offset 0x14, size 0x4
    float damageTaken; // offset 0x18, size 0x4
    int biggestCombo; // offset 0x1C, size 0x4
    int timesDefeated; // offset 0x20, size 0x4
};
// total size: 0x4
class zPlayerInput {};
// total size: 0x10
class zPlayerCheckPoint {
    // Members
    class xVec3 position; // offset 0x0, size 0xC
    float rotation; // offset 0xC, size 0x4
};
// total size: 0x8
class FloorObject {
    // Members
    enum eFloorType type; // offset 0x0, size 0x4
    void * pointer; // offset 0x4, size 0x4
};
enum eFloorType {
    FLOOR_UNKNOWN = 0,
    FLOOR_XENT = 1,
    FLOOR_XBASE = 2,
};
enum ePlayerName {
    PLAYER_CARL = 0,
    PLAYER_RUSSELL = 1,
    PLAYER_DUG = 2,
    PLAYER_KEVIN = 3,
    PLAYER_HOUSE = 4,
    PLAYER_BIPLANE = 5,
    PLAYER_SPONGEBOB = 6,
    PLAYER_PATRICK = 7,
    PLAYER_PLANKTON = 8,
    PLAYER_MASTERMIND = 9,
    PLAYER_ALIEN = 10,
    PLAYER_BOARD_SPONGEBOB = 11,
    PLAYER_SHOOTING = 12,
    PLAYER_UNKNOWN = 13,
};
// total size: 0x24
class zPlayerTemplate {
    // Members
    class PlayerTemplate * templateAsset; // offset 0x0, size 0x4
    class zCombatParams combatParams; // offset 0x4, size 0xC
    class zJumpParams jumpParams; // offset 0x10, size 0x14
};
// total size: 0x50
class PlayerTemplate {
    // Members
    class uid ChrAssetID; // offset 0x0, size 0x8
    unsigned char CollisionType; // offset 0x8, size 0x1
    class CapsuleCollShape CollisionCapsuleShape; // offset 0xC, size 0x10
    bool CollisionRotWithPlayer; // offset 0x1C, size 0x1
    class uid CombatAsset; // offset 0x20, size 0x8
    class MovementData GroundMovement; // offset 0x28, size 0x10
    class MovementData AirMovement; // offset 0x38, size 0x10
    class JumpData JumpParameter; // offset 0x48, size 0x8
};
// total size: 0x10
class CapsuleCollShape {
    // Members
    float Radius; // offset 0x0, size 0x4
    float Height; // offset 0x4, size 0x4
    unsigned char Axis; // offset 0x8, size 0x1
    float YOffset; // offset 0xC, size 0x4
};
// total size: 0x10
class MovementData {
    // Members
    float MaxSpeed; // offset 0x0, size 0x4
    float Acceleration; // offset 0x4, size 0x4
    float WalkThreshold; // offset 0x8, size 0x4
    float RunThreshold; // offset 0xC, size 0x4
};
// total size: 0x8
class JumpData {
    // Members
    float Height; // offset 0x0, size 0x4
    float AirTime; // offset 0x4, size 0x4
};
// total size: 0xC
class zCombatParams {
    // Members
    float hitPoints; // offset 0x0, size 0x4
    class zCombatAttack * attackTable; // offset 0x4, size 0x4
    unsigned int attackTableSize; // offset 0x8, size 0x4
};
// total size: 0x14
class zJumpParams {
    // Members
    float height; // offset 0x0, size 0x4
    float time; // offset 0x4, size 0x4
    float timeApex; // offset 0x8, size 0x4
    float initialVelocity; // offset 0xC, size 0x4
    float deceleration; // offset 0x10, size 0x4
};
// total size: 0x8
class xModelAssetParam {
    // Members
    unsigned int HashID; // offset 0x0, size 0x4
    unsigned char WordLength; // offset 0x4, size 0x1
    unsigned char String[3]; // offset 0x5, size 0x3
};
enum ePlayerActivationState {
    ePlayerActivationState_Inactive = 0,
    ePlayerActivationState_Networked = 1,
    ePlayerActivationState_Local = 2,
};
// total size: 0x50
class ComboAnimBlobAssetV2 {
    // Members
    float duration; // offset 0x0, size 0x4
    float timeToFrames; // offset 0x4, size 0x4
    unsigned int frameDuration; // offset 0x8, size 0x4
    float texMergeStartTime; // offset 0xC, size 0x4
    float texMergeEndTime; // offset 0x10, size 0x4
    unsigned long long destBlendTexture; // offset 0x18, size 0x8
    unsigned long long destSpecularBlendTexture; // offset 0x20, size 0x8
    class ComboAnimBlobAssetV2 * morphData; // offset 0x28, size 0x4
    float morphTime; // offset 0x2C, size 0x4
    float currentMorphTime; // offset 0x30, size 0x4
    unsigned short jointCount; // offset 0x34, size 0x2
    unsigned short locatorCount; // offset 0x36, size 0x2
    unsigned short visCount; // offset 0x38, size 0x2
    unsigned short userCount; // offset 0x3A, size 0x2
    unsigned short morphCount; // offset 0x3C, size 0x2
    unsigned short flags; // offset 0x3E, size 0x2
    unsigned short numJointSegments; // offset 0x40, size 0x2
    unsigned short numLocatorSegments; // offset 0x42, size 0x2
    unsigned short numUserSegments; // offset 0x44, size 0x2
    unsigned short numMorphs; // offset 0x46, size 0x2
    class SegmentTable segments[1]; // offset 0x48, size 0x8
};
// total size: 0x8
class SegmentTable {
    // Members
    unsigned int frameStart; // offset 0x0, size 0x4
    unsigned int offset; // offset 0x4, size 0x4
};
// total size: 0x1208
class zQueue {
    // Members
    int first; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    class xAnimVFXPair data[128]; // offset 0x8, size 0x1200
};
// total size: 0x24
class xAnimVFXPair : public xAnimPair {
    // Members
    class zFXSpawn * spawnPt[4]; // offset 0x10, size 0x10
    bool mStarted[4]; // offset 0x20, size 0x4
};
// total size: 0x10
class xAnimPair {
    // Members
    class xEffectAttachIntf * owner; // offset 0x0, size 0x4
    class xAnimState * state; // offset 0x4, size 0x4
    class SurfaceGamePlay * lastSurface; // offset 0x8, size 0x4
};
// total size: 0x2408
class zQueue {
    // Members
    int first; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    class xAnimSFXPair data[256]; // offset 0x8, size 0x2400
};
// total size: 0x24
class xAnimSFXPair : public xAnimPair {
    // Members
    class zSoundAssetMultiple * pSoundAssets[4]; // offset 0x10, size 0x10
    bool bIsPlaying[4]; // offset 0x20, size 0x4
};
// total size: 0x8
class RTTID_Hash {
    // Members
    unsigned int wmlTypeID; // offset 0x0, size 0x4
    unsigned int tid; // offset 0x4, size 0x4
};
// total size: 0x24
class RTTID_Data {
    // Members
    unsigned int tid; // offset 0x0, size 0x4
    unsigned int wmlType; // offset 0x4, size 0x4
    void (* fixCB)(void * asset, long addrOffset); // offset 0x8, size 0x4
    char * uiName; // offset 0xC, size 0x4
    char * tidName; // offset 0x10, size 0x4
    class RTTID_Data * children; // offset 0x14, size 0x4
    class RTTID_Data * childNext; // offset 0x18, size 0x4
    unsigned int createSort; // offset 0x1C, size 0x4
    class Entity * (* createCB)(class EntityHandleBase * handle, void * asset); // offset 0x20, size 0x4
};
// total size: 0xC
class MaterialParamFormat {
    // Members
    class Pointer32 id; // offset 0x0, size 0x4
    unsigned char type; // offset 0x4, size 0x1
    unsigned char rows; // offset 0x5, size 0x1
    unsigned char cols; // offset 0x6, size 0x1
    unsigned char count; // offset 0x7, size 0x1
    unsigned short size; // offset 0x8, size 0x2
    unsigned short offset; // offset 0xA, size 0x2
};
// total size: 0x60
class GeometryAsset {
    // Members
    class Vector4 boundSphere; // offset 0x0, size 0x10
    class BoundAABB boundAABB; // offset 0x10, size 0x18
    unsigned long long materialID; // offset 0x28, size 0x8
    class ViewAttrib viewAttrib; // offset 0x30, size 0x1
    unsigned char flags; // offset 0x31, size 0x1
    unsigned char wiiIndexStride; // offset 0x32, size 0x1
    unsigned char wiiIndexSkin; // offset 0x33, size 0x1
    unsigned short vertexCount; // offset 0x34, size 0x2
    unsigned char prim; // offset 0x36, size 0x1
    unsigned char geomParamCount; // offset 0x37, size 0x1
    unsigned char rendParamCount; // offset 0x38, size 0x1
    unsigned char streamCount; // offset 0x39, size 0x1
    unsigned short streamMapBufferCount; // offset 0x3A, size 0x2
    class Pointer32 geomParams; // offset 0x3C, size 0x4
    class Pointer32 rendParams; // offset 0x40, size 0x4
    class Pointer32 streams; // offset 0x44, size 0x4
    class Pointer32 streamMapBuffer; // offset 0x48, size 0x4
    unsigned int sectorLight; // offset 0x4C, size 0x4
    class Pointer32 collKDTree; // offset 0x50, size 0x4
    unsigned short lodCount; // offset 0x54, size 0x2
    unsigned short batchCount; // offset 0x56, size 0x2
    class Pointer32 lods; // offset 0x58, size 0x4
    class Pointer32 batches; // offset 0x5C, size 0x4
};
// total size: 0x18
class BoundAABB {
    // Members
    class Vector3 lower; // offset 0x0, size 0xC
    class Vector3 upper; // offset 0xC, size 0xC
};
// total size: 0x1
class ViewAttrib {
    // Members
    unsigned char spaceFilter; // offset 0x0, size 0x1
};
// total size: 0x8
class MaterialParam {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char debugIndex; // offset 0x1, size 0x1
    unsigned short elementCount; // offset 0x2, size 0x2
    class @class __anon; // offset 0x4, size 0x4
    class Pointer32 p; // offset 0x4, size 0x4
    class Pointer32 f; // offset 0x4, size 0x4
    class Pointer32 i; // offset 0x4, size 0x4
    class Pointer32 b; // offset 0x4, size 0x4
    class Pointer32 samp; // offset 0x4, size 0x4
};
// total size: 0x4
class @class {
    // Members
    class Pointer32 p; // offset 0x0, size 0x4
    class Pointer32 f; // offset 0x0, size 0x4
    class Pointer32 i; // offset 0x0, size 0x4
    class Pointer32 b; // offset 0x0, size 0x4
    class Pointer32 samp; // offset 0x0, size 0x4
};
// total size: 0x10
class VertexStream {
    // Members
    unsigned long long vertexBufferID; // offset 0x0, size 0x8
    unsigned char stride; // offset 0x8, size 0x1
    unsigned char pad[7]; // offset 0x9, size 0x7
};
// total size: 0x18
class IndexLOD {
    // Members
    unsigned long long indexBufferID; // offset 0x0, size 0x8
    unsigned short indexCount; // offset 0x8, size 0x2
    unsigned short primCount; // offset 0xA, size 0x2
    unsigned short triCount; // offset 0xC, size 0x2
    unsigned short vertCount; // offset 0xE, size 0x2
    float lodDist; // offset 0x10, size 0x4
    unsigned char skinSectStart; // offset 0x14, size 0x1
    unsigned char skinSectCount; // offset 0x15, size 0x1
    unsigned short pad; // offset 0x16, size 0x2
};
// total size: 0x10
class BatchInfo {
    // Members
    unsigned short vertStart; // offset 0x0, size 0x2
    unsigned short vertCount; // offset 0x2, size 0x2
    unsigned short triStart; // offset 0x4, size 0x2
    unsigned short triCount; // offset 0x6, size 0x2
    unsigned short skinCount[4]; // offset 0x8, size 0x8
};
// total size: 0x28
class LinkAssetBaseNew {
    // Members
    class __srcEvent__ srcEvent; // offset 0x0, size 0x8
    class __dstEvent__ dstEvent; // offset 0x8, size 0x8
    class uid dstAssetID; // offset 0x10, size 0x8
    class uid chkAssetID; // offset 0x18, size 0x8
    bool chkSourceParams; // offset 0x20, size 0x1
    bool disabled; // offset 0x21, size 0x1
    unsigned int chkSourceMask; // offset 0x24, size 0x4
};
// total size: 0x8
class __srcEvent__ {
    // Members
    int type; // offset 0x0, size 0x4
    class Pointer32 v; // offset 0x4, size 0x4
};
// total size: 0x8
class __dstEvent__ {
    // Members
    int type; // offset 0x0, size 0x4
    class Pointer32 v; // offset 0x4, size 0x4
};
// total size: 0x20
class zSoundsNamedAsset : public SoundEntity {
    // Members
    class __Sounds__ Sounds; // offset 0x10, size 0x8
    class LinkAsset EventLinksNew; // offset 0x18, size 0x8
};
// total size: 0x8
class __Sounds__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x18
class zSoundWiimoteSpeakerListAsset : public xBaseScene {
    // Members
    class __SoundList__ SoundList; // offset 0x10, size 0x8
};
// total size: 0x8
class __SoundList__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x50
class DestructibleAsset : public xBaseAsset {
    // Members
    unsigned int HitPoints; // offset 0x10, size 0x4
    class HitFilters HitFilter; // offset 0x14, size 0xC
    class HitFilters HitFilterExcluded; // offset 0x20, size 0xC
    unsigned int PlayerFilter; // offset 0x2C, size 0x4
    class __States__ States; // offset 0x30, size 0x8
    class uid InitialFX; // offset 0x38, size 0x8
    class SoundBankSource SoundIdle; // offset 0x40, size 0xC
};
// total size: 0xC
class HitFilters {
    // Members
    unsigned int CommonFilters; // offset 0x0, size 0x4
    class __gameUnion__ gameUnion; // offset 0x4, size 0x8
};
// total size: 0x8
class __gameUnion__ {
    // Members
    enum eGameType type; // offset 0x0, size 0x4
    class @class u; // offset 0x4, size 0x4
};
enum eGameType {
    NONE = 0,
    MMFilters = 1,
    SBFilters = 2,
    UPFilters = 3,
    END_eGameTypeENUM = 4,
};
// total size: 0x4
class @class {
    // Members
    class NONEStruct _NONE; // offset 0x0, size 0x1
    class MMStruct _MMFilters; // offset 0x0, size 0x4
    class SBStruct _SBFilters; // offset 0x0, size 0x4
    class UPStruct _UPFilters; // offset 0x0, size 0x4
};
// total size: 0x1
class NONEStruct {};
// total size: 0x4
class MMStruct {
    // Members
    unsigned int data; // offset 0x0, size 0x4
};
// total size: 0x4
class SBStruct {
    // Members
    unsigned int data; // offset 0x0, size 0x4
};
// total size: 0x4
class UPStruct {
    // Members
    unsigned int data; // offset 0x0, size 0x4
};
// total size: 0x8
class __States__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x110
class BSP : public xEntAsset {
    // Members
    bool AlwaysVisible; // offset 0xF8, size 0x1
    bool AlwaysCollide; // offset 0xF9, size 0x1
    class uid ReferenceGroup; // offset 0x100, size 0x8
    class LinkAsset EventLinksNew; // offset 0x108, size 0x8
};
// total size: 0x90
class xCamAsset : public xBaseScene {
    // Members
    class @class uTargetMode; // offset 0x10, size 0x10
    unsigned int TargetMode; // offset 0x20, size 0x4
    class vec3 pos; // offset 0x24, size 0xC
    class vec3 at; // offset 0x30, size 0xC
    class vec3 up; // offset 0x3C, size 0xC
    class vec3 right; // offset 0x48, size 0xC
    class Rotation3 orientation; // offset 0x54, size 0xC
    float fov; // offset 0x60, size 0x4
    float trans_time; // offset 0x64, size 0x4
    unsigned int flags; // offset 0x68, size 0x4
    bool dofEnabled; // offset 0x6C, size 0x1
    float dofBlur; // offset 0x70, size 0x4
    float dofNearFocusPoint; // offset 0x74, size 0x4
    float dofNearFocusFalloff; // offset 0x78, size 0x4
    float dofFarFocusPoint; // offset 0x7C, size 0x4
    float dofFarFocusFalloff; // offset 0x80, size 0x4
    class LinkAsset EventLinksNew; // offset 0x84, size 0x8
};
// total size: 0x10
class @class {
    // Members
    class sFixed Fixed; // offset 0x0, size 0xC
    class sTargeted Targeted; // offset 0x0, size 0x8
};
// total size: 0xC
class sFixed {
    // Members
    class Rotation3 rotation; // offset 0x0, size 0xC
};
// total size: 0x8
class sTargeted {
    // Members
    class uid target; // offset 0x0, size 0x8
};
// total size: 0x90
class xCamAssetD : public xBaseScene {
    // Members
    class @class uTargetMode; // offset 0x10, size 0x10
    unsigned int TargetMode; // offset 0x20, size 0x4
    class vec3 pos; // offset 0x24, size 0xC
    class vec3 at; // offset 0x30, size 0xC
    class vec3 up; // offset 0x3C, size 0xC
    class vec3 right; // offset 0x48, size 0xC
    class Rotation3 orientation; // offset 0x54, size 0xC
    float fov; // offset 0x60, size 0x4
    float trans_time; // offset 0x64, size 0x4
    unsigned int flags; // offset 0x68, size 0x4
    bool dofEnabled; // offset 0x6C, size 0x1
    float dofBlur; // offset 0x70, size 0x4
    float dofNearFocusPoint; // offset 0x74, size 0x4
    float dofNearFocusFalloff; // offset 0x78, size 0x4
    float dofFarFocusPoint; // offset 0x7C, size 0x4
    float dofFarFocusFalloff; // offset 0x80, size 0x4
    class LinkAsset EventLinksNew; // offset 0x84, size 0x8
};
// total size: 0x30
class zMG2PCamAsset : public xBaseScene {
    // Members
    class vec3 pos; // offset 0x10, size 0xC
    float FOV; // offset 0x1C, size 0x4
    float Radius; // offset 0x20, size 0x4
    class LinkAsset EventLinksNew; // offset 0x24, size 0x8
};
// total size: 0x78
class CurveCamera : public xBaseScene {
    // Members
    class LinkAsset EventLinksNew; // offset 0x10, size 0x8
    int Version; // offset 0x18, size 0x4
    unsigned int CamType; // offset 0x1C, size 0x4
    class @class __anon; // offset 0x20, size 0x8
    class POILookAtCurve CurvePOI; // offset 0x20, size 0x4
    class RailLookAtCurve CurveRail; // offset 0x20, size 0x8
    class @class NumCurvesData; // offset 0x28, size 0x28
    unsigned int NumCurvesType; // offset 0x50, size 0x4
    bool CurveAsCenter; // offset 0x54, size 0x1
    bool UsePitchLimits; // offset 0x55, size 0x1
    float PitchUpLimit; // offset 0x58, size 0x4
    float PitchDownLimit; // offset 0x5C, size 0x4
    bool dofEnabled; // offset 0x60, size 0x1
    float dofBlur; // offset 0x64, size 0x4
    float dofNearFocusPoint; // offset 0x68, size 0x4
    float dofNearFocusFalloff; // offset 0x6C, size 0x4
    float dofFarFocusPoint; // offset 0x70, size 0x4
    float dofFarFocusFalloff; // offset 0x74, size 0x4
};
// total size: 0x8
class @class {
    // Members
    class POILookAtCurve CurvePOI; // offset 0x0, size 0x4
    class RailLookAtCurve CurveRail; // offset 0x0, size 0x8
};
// total size: 0x4
class POILookAtCurve {
    // Members
    float dummy; // offset 0x0, size 0x4
};
// total size: 0x8
class RailLookAtCurve {
    // Members
    int LookCurve; // offset 0x0, size 0x4
    bool FloorMountOff; // offset 0x4, size 0x1
};
// total size: 0x28
class @class {
    // Members
    class SingleCurveType SingleCurve; // offset 0x0, size 0x10
    class TwoCurveType TwoCurve; // offset 0x0, size 0x18
    class ThreeCurveType ThreeCurve; // offset 0x0, size 0x20
    class FourCurveType FourCurve; // offset 0x0, size 0x28
};
// total size: 0x10
class SingleCurveType {
    // Members
    class uid Curve1; // offset 0x0, size 0x8
    class __BeadValues__ BeadValues; // offset 0x8, size 0x8
};
// total size: 0x8
class __BeadValues__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x18
class TwoCurveType {
    // Members
    class uid Curve1; // offset 0x0, size 0x8
    class uid Curve2; // offset 0x8, size 0x8
    class __BeadValues__ BeadValues; // offset 0x10, size 0x8
};
// total size: 0x20
class ThreeCurveType {
    // Members
    class uid Curve1; // offset 0x0, size 0x8
    class uid Curve2; // offset 0x8, size 0x8
    class uid Curve3; // offset 0x10, size 0x8
    class __BeadValues__ BeadValues; // offset 0x18, size 0x8
};
// total size: 0x28
class FourCurveType {
    // Members
    class uid Curve1; // offset 0x0, size 0x8
    class uid Curve2; // offset 0x8, size 0x8
    class uid Curve3; // offset 0x10, size 0x8
    class uid Curve4; // offset 0x18, size 0x8
    class __BeadValues__ BeadValues; // offset 0x20, size 0x8
};
// total size: 0x8
class RenderableSettings {
    // Members
    unsigned char rendParamCount; // offset 0x0, size 0x1
    unsigned char pad[3]; // offset 0x1, size 0x3
    class Pointer32 rendParams; // offset 0x4, size 0x4
};
// total size: 0x40
class zCondAsset : public xBaseScene {
    // Members
    class ConditionDef Condition; // offset 0x10, size 0x18
    unsigned int LogicalOperator; // offset 0x28, size 0x4
    class __MoreConditions__ MoreConditions; // offset 0x2C, size 0x8
    class LinkAsset EventLinksNew; // offset 0x34, size 0x8
};
// total size: 0x18
class ConditionDef {
    // Members
    class uid value_asset; // offset 0x0, size 0x8
    unsigned int constNum; // offset 0x8, size 0x4
    unsigned int expr1; // offset 0xC, size 0x4
    unsigned int op; // offset 0x10, size 0x4
};
// total size: 0x8
class __MoreConditions__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x20
class xCounterAsset : public xBaseScene {
    // Members
    short Value; // offset 0x10, size 0x2
    class LinkAsset EventLinksNew; // offset 0x14, size 0x8
};
// total size: 0x20
class zSaveLoadAsset : public xBaseScene {
    // Members
    class uid portalID; // offset 0x10, size 0x8
    class LinkAsset EventLinksNew; // offset 0x18, size 0x8
};
// total size: 0x18
class zDispatcherAsset : public xBaseScene {
    // Members
    class LinkAsset EventLinksNew; // offset 0x10, size 0x8
};
// total size: 0xA0
class xEnvAsset : public xBaseScene {
    // Members
    class uid bspAssetID; // offset 0x10, size 0x8
    class uid StartCamera; // offset 0x18, size 0x8
    unsigned int Climate; // offset 0x20, size 0x4
    float ClimateStrengthMin; // offset 0x24, size 0x4
    float ClimateStrengthMax; // offset 0x28, size 0x4
    unsigned int flags; // offset 0x2C, size 0x4
    class uid bspCollisionAssetID; // offset 0x30, size 0x8
    class uid bspFXAssetID; // offset 0x38, size 0x8
    class uid bspCameraAssetID; // offset 0x40, size 0x8
    class uid bspMapperID; // offset 0x48, size 0x8
    class uid bspMapperCollisionID; // offset 0x50, size 0x8
    class uid bspMapperFXID; // offset 0x58, size 0x8
    float AdditionalLOLDHeight; // offset 0x60, size 0x4
    class vec3 MinBounds; // offset 0x64, size 0xC
    class vec3 MaxBounds; // offset 0x70, size 0xC
    bool dofEnabled; // offset 0x7C, size 0x1
    float dofBlur; // offset 0x80, size 0x4
    float dofNearFocusPoint; // offset 0x84, size 0x4
    float dofNearFocusFalloff; // offset 0x88, size 0x4
    float dofFarFocusPoint; // offset 0x8C, size 0x4
    float dofFarFocusFalloff; // offset 0x90, size 0x4
    class LinkAsset EventLinksNew; // offset 0x94, size 0x8
};
// total size: 0x28
class xGroupAsset : public xBaseScene {
    // Members
    unsigned short itemCount; // offset 0x10, size 0x2
    short maxDynamicSize; // offset 0x12, size 0x2
    unsigned short flags; // offset 0x14, size 0x2
    class LinkAsset EventLinksNew; // offset 0x18, size 0x8
    class uid firstItemMarker; // offset 0x20, size 0x8
};
// total size: 0x30
class zTacticalCommanderAsset : public xBaseScene {
    // Members
    class __Units__ Units; // offset 0x10, size 0x8
    class __Phases__ Phases; // offset 0x18, size 0x8
    class uid BehaviorTree; // offset 0x20, size 0x8
    class LinkAsset links; // offset 0x28, size 0x8
};
// total size: 0x8
class __Units__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __Phases__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x140
class xEntPlayerAsset : public xEntAsset {
    // Members
    class uid ChrAsset; // offset 0xF8, size 0x8
    unsigned int PlayerIndex; // offset 0x100, size 0x4
    class uid lightKit; // offset 0x108, size 0x8
    unsigned int shadowColor; // offset 0x110, size 0x4
    float shadowMaxDepth; // offset 0x114, size 0x4
    float shadowStartDepth; // offset 0x118, size 0x4
    unsigned int shadowMinBlur; // offset 0x11C, size 0x4
    unsigned int shadowMaxBlur; // offset 0x120, size 0x4
    class TeamsUnion Team; // offset 0x124, size 0x8
    class LinkAsset EventLinksNew; // offset 0x12C, size 0x8
};
// total size: 0x8
class TeamsUnion {
    // Members
    enum eTeamsGameType type; // offset 0x0, size 0x4
    class @class u; // offset 0x4, size 0x4
};
enum eTeamsGameType {
    TEAMS_NONE = 0,
    TEAMS_MM = 1,
    TEAMS_SB = 2,
    TEAMS_UP = 3,
    END_eTeamsGameTypeENUM = 4,
};
// total size: 0x4
class @class {
    // Members
    class NONETeamsStruct _TEAMS_NONE; // offset 0x0, size 0x1
    class MMTeamsStruct _TEAMS_MM; // offset 0x0, size 0x4
    class SBTeamsStruct _TEAMS_SB; // offset 0x0, size 0x4
    class UPTeamsStruct _TEAMS_UP; // offset 0x0, size 0x4
};
// total size: 0x1
class NONETeamsStruct {};
// total size: 0x4
class MMTeamsStruct {
    // Members
    enum Teams_MM data; // offset 0x0, size 0x4
};
enum Teams_MM {
    MM_TEAM_NONE = 0,
    MM_TEAM_NUETRAL = 1,
    MM_TEAM_MASTERMIND = 2,
    MM_TEAM_DOOM_SYNDICATE = 3,
    MM_TEAM_METRO_CITY = 4,
    END_Teams_MMENUM = 5,
};
// total size: 0x4
class SBTeamsStruct {
    // Members
    enum Teams_SB data; // offset 0x0, size 0x4
};
enum Teams_SB {
    SB_TEAM_NONE = 0,
    SB_TEAM_1 = 1,
    SB_TEAM_2 = 2,
    SB_TEAM_3 = 3,
    SB_TEAM_4 = 4,
    END_Teams_SBENUM = 5,
};
// total size: 0x4
class UPTeamsStruct {
    // Members
    enum Teams_UP data; // offset 0x0, size 0x4
};
enum Teams_UP {
    UP_TEAM_NONE = 0,
    UP_TEAM_1 = 1,
    UP_TEAM_2 = 2,
    UP_TEAM_3 = 3,
    UP_TEAM_4 = 4,
    END_Teams_UPENUM = 5,
};
// total size: 0x160
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
    bool GoTransparent; // offset 0x141, size 0x1
    bool BIPLANABLE; // offset 0x142, size 0x1
    bool SBCostumeChange; // offset 0x143, size 0x1
    bool ForceUpdateDistance; // offset 0x144, size 0x1
    float ForceUpdateDistanceValue; // offset 0x148, size 0x4
    class uid Destructible; // offset 0x150, size 0x8
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
// total size: 0x18
class Spline_Type {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char use_banking; // offset 0x1, size 0x1
    unsigned short MotionFlags; // offset 0x2, size 0x2
    unsigned int pad; // offset 0x4, size 0x4
    class uid StartingCurve; // offset 0x8, size 0x8
    float Speed; // offset 0x10, size 0x4
    float lean_modifier; // offset 0x14, size 0x4
};
// total size: 0x18
class MP_Type {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char use_banking; // offset 0x1, size 0x1
    unsigned short MotionFlags; // offset 0x2, size 0x2
    unsigned int pad; // offset 0x4, size 0x4
    class uid StartingMovePoint; // offset 0x8, size 0x8
    unsigned int flags; // offset 0x10, size 0x4
    float Speed; // offset 0x14, size 0x4
};
// total size: 0x40
class Mech_Type {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char use_banking; // offset 0x1, size 0x1
    unsigned short MotionFlags; // offset 0x2, size 0x2
    unsigned int pad; // offset 0x4, size 0x4
    unsigned char MechType; // offset 0x8, size 0x1
    unsigned char flags; // offset 0x9, size 0x1
    unsigned char SlideAxis; // offset 0xA, size 0x1
    unsigned char RotationAxis; // offset 0xB, size 0x1
    unsigned char ScaleAxis; // offset 0xC, size 0x1
    float SlideDistance; // offset 0x10, size 0x4
    float SlideDuration; // offset 0x14, size 0x4
    float SlideAccelTime; // offset 0x18, size 0x4
    float SlideDecelTime; // offset 0x1C, size 0x4
    float RotationDistance; // offset 0x20, size 0x4
    float RotationDuration; // offset 0x24, size 0x4
    float RotationAccelTime; // offset 0x28, size 0x4
    float RotationDecelTime; // offset 0x2C, size 0x4
    float ReturnDelay; // offset 0x30, size 0x4
    float EndCycleDelay; // offset 0x34, size 0x4
    float ScaleAmount; // offset 0x38, size 0x4
    float ScaleDuration; // offset 0x3C, size 0x4
};
// total size: 0x10
class ConvBelt_Type {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char use_banking; // offset 0x1, size 0x1
    unsigned short MotionFlags; // offset 0x2, size 0x2
    unsigned int pad; // offset 0x4, size 0x4
    float BeltSpeed; // offset 0x8, size 0x4
    unsigned int MotionAxis; // offset 0xC, size 0x4
};
// total size: 0x20
class Teeter_Type {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char use_banking; // offset 0x1, size 0x1
    unsigned short MotionFlags; // offset 0x2, size 0x2
    unsigned int pad; // offset 0x4, size 0x4
    class degToRad InitialTilt; // offset 0x8, size 0x4
    class degToRad MaxTilt; // offset 0xC, size 0x4
    class degToRad MaxIdleTilt; // offset 0x10, size 0x4
    float Speed; // offset 0x14, size 0x4
    float SpeedIdle; // offset 0x18, size 0x4
    bool TiltBack; // offset 0x1C, size 0x1
};
// total size: 0x4
class degToRad {
    // Members
    float Degrees; // offset 0x0, size 0x4
};
// total size: 0x8
class FM_Type {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char use_banking; // offset 0x1, size 0x1
    unsigned short MotionFlags; // offset 0x2, size 0x2
    unsigned int pad; // offset 0x4, size 0x4
};
// total size: 0x140
class ProjectileAsset : public xBaseAsset {
    // Members
    class ModelInstanceAsset ModelInstance; // offset 0x10, size 0x40
    class Projectile_Physics_Data_Struct ProjectilePhysicsData; // offset 0x50, size 0x58
    enum eProjectileType projectileType; // offset 0xA8, size 0x4
    class __projectileUnion__ projectileUnion; // offset 0xB0, size 0x40
    enum eLifetimeType lifetimeType; // offset 0xF0, size 0x4
    class @class lifetime; // offset 0xF8, size 0x10
    float launchSpeed; // offset 0x108, size 0x4
    enum eExplosionType explosionType; // offset 0x10C, size 0x4
    class @class explosionBehavior; // offset 0x110, size 0x18
    class uid BounceFXSpawnID; // offset 0x128, size 0x8
    class uid MuzzleFlashFXSpawnID; // offset 0x130, size 0x8
    class uid DecalGenID; // offset 0x138, size 0x8
};
// total size: 0x58
class Projectile_Physics_Data_Struct : public PhysicsDataStruct {
    // Members
    float addedGravity; // offset 0x54, size 0x4
};
enum eProjectileType {
    eProjectileType_Default = 0,
    eProjectileType_SB_BombNPC = 1,
    eProjectileType_SB_Puck = 2,
    eProjectileType_SB_Clarinet = 3,
    eProjectileType_MM_Grenade = 4,
    eProjectileType_MM_Missile = 5,
    eProjectileType_Up_Playground_Launchable = 6,
    eProjectileType_Up_Playground_Rollable = 7,
    eProjectileType_Up_Player_Throwable = 8,
    eProjectileType_RB_Homing = 9,
    END_eProjectileType_ENUM = 10,
};
// total size: 0x40
class __projectileUnion__ {
    // Members
    enum eProjectileType type; // offset 0x0, size 0x4
    class @class u; // offset 0x8, size 0x38
};
// total size: 0x38
class @class {
    // Members
    class Default_Custom_Params _Default; // offset 0x0, size 0x4
    class SB_BombNPC_Custom_Params _SB_BombNPC; // offset 0x0, size 0x30
    class SB_Puck_Custom_Params _SB_Puck; // offset 0x0, size 0x18
    class SB_Clarinet_Custom_Params _SB_Clarinet; // offset 0x0, size 0x8
    class MM_Grenade_Custom_Params _MM_Grenade; // offset 0x0, size 0x8
    class MM_Missile_Custom_Params _MM_Missile; // offset 0x0, size 0x38
    class UP_Playground_Launchable_Custom_Params _Up_Playground_Launchable; // offset 0x0, size 0x8
    class UP_Playground_Rollable_Custom_Params _Up_Playground_Rollable; // offset 0x0, size 0x14
    class Default_Custom_Params _Up_Player_Throwable; // offset 0x0, size 0x4
    class RB_Homing_Custom_Params _RB_Homing; // offset 0x0, size 0x10
};
// total size: 0x4
class Default_Custom_Params {
    // Members
    int pad; // offset 0x0, size 0x4
};
// total size: 0x30
class SB_BombNPC_Custom_Params : public Default_Custom_Params {
    // Members
    class uid activeFXSpawnID_1; // offset 0x8, size 0x8
    class uid activeFXSpawnID_2; // offset 0x10, size 0x8
    class uid activeFXSpawnID_3; // offset 0x18, size 0x8
    float fuseDuration; // offset 0x20, size 0x4
    float redStateDuration; // offset 0x24, size 0x4
    float yellowStateDuration; // offset 0x28, size 0x4
};
// total size: 0x18
class SB_Puck_Custom_Params {
    // Members
    enum ePuckType puckType; // offset 0x0, size 0x4
    bool homing; // offset 0x4, size 0x1
    float hitDamage; // offset 0x8, size 0x4
    float inertiaTensorMassMult; // offset 0xC, size 0x4
    class uid activeFXSpawnID; // offset 0x10, size 0x8
};
enum ePuckType {
    Player_Basic = 0,
    Player_Spongebuff = 1,
    Player_Powerup = 2,
    Turret = 3,
    END_ePuckTypeENUM = 4,
};
// total size: 0x8
class SB_Clarinet_Custom_Params {
    // Members
    class uid activeFXSpawnID; // offset 0x0, size 0x8
};
// total size: 0x8
class MM_Grenade_Custom_Params {
    // Members
    class uid activeFXSpawnID; // offset 0x0, size 0x8
};
// total size: 0x38
class MM_Missile_Custom_Params {
    // Members
    class uid activeFXSpawnID; // offset 0x0, size 0x8
    bool onlyDisplayActiveFXWhileThrusting; // offset 0x8, size 0x1
    float thrusterAccel; // offset 0xC, size 0x4
    float thrusterMaxSpeed; // offset 0x10, size 0x4
    enum eMM_Missile_TargetingMode targetingMode; // offset 0x14, size 0x4
    class @class targetingModeUnion; // offset 0x18, size 0x4
    enum eMM_Missile_ThrusterActivation thrusterActivation; // offset 0x1C, size 0x4
    class @class thrusterActivationUnion; // offset 0x20, size 0x4
    enum eMM_Missile_ThrusterDuration thrusterDuration; // offset 0x24, size 0x4
    class @class thrusterDurationUnion; // offset 0x28, size 0x4
    enum eMM_Missile_DeflectionMode deflectionMode; // offset 0x2C, size 0x4
    class @class deflectionModeUnion; // offset 0x30, size 0x4
    unsigned char pad0; // offset 0x34, size 0x1
    unsigned char pad1; // offset 0x35, size 0x1
    unsigned char pad2; // offset 0x36, size 0x1
};
enum eMM_Missile_TargetingMode {
    e_MM_Missile_TargetingMode_DumbFire = 0,
    e_MM_Missile_TargetingMode_Homing = 1,
    e_MM_Missile_TargetingMode_PredictiveHoming = 2,
    END_e_MM_Missile_TargetingMode_ENUM = 3,
};
// total size: 0x4
class @class {
    // Members
    class MM_Missile_Pad_Struct DumbFire; // offset 0x0, size 0x4
    class MM_Missile_TargetingMode_Homing_Struct Homing; // offset 0x0, size 0x4
    class MM_Missile_TargetingMode_Homing_Struct PredictiveHoming; // offset 0x0, size 0x4
};
// total size: 0x4
class MM_Missile_Pad_Struct {
    // Members
    int pad; // offset 0x0, size 0x4
};
// total size: 0x4
class MM_Missile_TargetingMode_Homing_Struct {
    // Members
    float homing_TurnSpeed; // offset 0x0, size 0x4
};
enum eMM_Missile_ThrusterActivation {
    e_MM_Missile_ThrusterActivation_On = 0,
    e_MM_Missile_ThrusterActivation_Off = 1,
    e_MM_Missile_ThrusterActivation_Timed = 2,
    END_e_MM_Missile_ThrusterActivation_ENUM = 3,
};
// total size: 0x4
class @class {
    // Members
    class MM_Missile_Pad_Struct On; // offset 0x0, size 0x4
    class MM_Missile_Pad_Struct Off; // offset 0x0, size 0x4
    class MM_Missile_ThrusterActivation_Timed_Struct Timed; // offset 0x0, size 0x4
};
// total size: 0x4
class MM_Missile_ThrusterActivation_Timed_Struct {
    // Members
    float thrusterActivation_Time; // offset 0x0, size 0x4
};
enum eMM_Missile_ThrusterDuration {
    e_MM_Missile_ThrusterDuration_Unlimited = 0,
    e_MM_Missile_ThrusterDuration_Timed = 1,
    END_e_MM_Missile_ThrusterDuration_ENUM = 2,
};
// total size: 0x4
class @class {
    // Members
    class MM_Missile_Pad_Struct Unlimited; // offset 0x0, size 0x4
    class MM_Missile_ThrusterDuration_Timed_Struct Timed; // offset 0x0, size 0x4
};
// total size: 0x4
class MM_Missile_ThrusterDuration_Timed_Struct {
    // Members
    float thrusterDuration_Time; // offset 0x0, size 0x4
};
enum eMM_Missile_DeflectionMode {
    e_MM_Missile_DeflectionMode_Enabled = 0,
    e_MM_Missile_DeflectionMode_Disabled = 1,
    END_e_MM_Missile_DeflectionMode_ENUM = 2,
};
// total size: 0x4
class @class {
    // Members
    class MM_Missile_DeflectionMode_Enabled_Struct Enabled; // offset 0x0, size 0x4
    class MM_Missile_Pad_Struct Disabled; // offset 0x0, size 0x4
};
// total size: 0x4
class MM_Missile_DeflectionMode_Enabled_Struct {
    // Members
    float deflectionMode_Angle; // offset 0x0, size 0x4
};
// total size: 0x8
class UP_Playground_Launchable_Custom_Params : public UP_Playground_Base_Custom_Params {
    // Members
    float apexHeight; // offset 0x4, size 0x4
};
// total size: 0x4
class UP_Playground_Base_Custom_Params {
    // Members
    bool freezeOnGround; // offset 0x0, size 0x1
    unsigned char pad0; // offset 0x1, size 0x1
    unsigned char pad1; // offset 0x2, size 0x1
    unsigned char pad2; // offset 0x3, size 0x1
};
// total size: 0x14
class UP_Playground_Rollable_Custom_Params : public UP_Playground_Base_Custom_Params {
    // Members
    float maxRollSpeed; // offset 0x4, size 0x4
    float timeToStopMoving; // offset 0x8, size 0x4
    float targetSpeed; // offset 0xC, size 0x4
    float minHitSpeed; // offset 0x10, size 0x4
};
// total size: 0x10
class RB_Homing_Custom_Params {
    // Members
    class uid FlightFX; // offset 0x0, size 0x8
    float Slerp; // offset 0x8, size 0x4
};
enum eLifetimeType {
    e_Lifetime_Finite = 0,
    e_Lifetime_Infinite = 1,
    END_e_Lifetime_ENUM = 2,
};
// total size: 0x10
class @class {
    // Members
    class Finite_Lifetime_Struct Finite; // offset 0x0, size 0x10
    class Infinite_Lifetime_Struct Infinite; // offset 0x0, size 0x4
};
// total size: 0x10
class Finite_Lifetime_Struct {
    // Members
    float lifetime; // offset 0x0, size 0x4
    float TimeFXLeadTime; // offset 0x4, size 0x4
    class uid TimeoutFXSpawnID; // offset 0x8, size 0x8
};
// total size: 0x4
class Infinite_Lifetime_Struct {
    // Members
    int pad; // offset 0x0, size 0x4
};
enum eExplosionType {
    e_Explosion_Explodes = 0,
    e_Explosion_NeverExplodes = 1,
    END_e_Explosion_ENUM = 2,
};
// total size: 0x18
class @class {
    // Members
    class Explodes_Struct Explodes; // offset 0x0, size 0x18
    class Never_Explodes_Struct NeverExplodes; // offset 0x0, size 0x4
};
// total size: 0x18
class Explodes_Struct {
    // Members
    float explosionRadius; // offset 0x0, size 0x4
    float damage; // offset 0x4, size 0x4
    class uid ExplosionFXSpawnID; // offset 0x8, size 0x8
    bool explodesOnContact; // offset 0x10, size 0x1
    bool explodesOnTimeout; // offset 0x11, size 0x1
    bool damagesOwner; // offset 0x12, size 0x1
};
// total size: 0x4
class Never_Explodes_Struct {
    // Members
    int pad; // offset 0x0, size 0x4
};
// total size: 0xB0
class RuntimeEntityAsset {
    // Members
    class ModelInstanceAsset ModelInstance; // offset 0x0, size 0x40
    class uid RibbonEffectID; // offset 0x40, size 0x8
    class uid ActiveFXSpawnID; // offset 0x48, size 0x8
    class uid SpawnFXSpawnID; // offset 0x50, size 0x8
    class uid DeathFXSpawnID; // offset 0x58, size 0x8
    class uid PingFXSpawnID; // offset 0x60, size 0x8
    class uid TimeoutFXSpawnID; // offset 0x68, size 0x8
    class SoundSourcesPhysics SoundsPhysics; // offset 0x70, size 0x38
};
// total size: 0x30
class Script : public xBaseScene {
    // Members
    class __ScriptList__ ScriptList; // offset 0x10, size 0x8
    float ScaleFactor; // offset 0x18, size 0x4
    unsigned int eventCount; // offset 0x1C, size 0x4
    bool Loop; // offset 0x20, size 0x1
    bool RunWhenPaused; // offset 0x21, size 0x1
    bool RunInCinematic; // offset 0x22, size 0x1
    unsigned char pad2; // offset 0x23, size 0x1
    class LinkAsset EventLinksNew; // offset 0x24, size 0x8
};
// total size: 0x8
class __ScriptList__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x120
class xSimpleObjAsset : public xEntAsset {
    // Members
    class uid Destructible; // offset 0xF8, size 0x8
    float AnimationSpeed; // offset 0x100, size 0x4
    unsigned int InitialState; // offset 0x104, size 0x4
    unsigned char Collision; // offset 0x108, size 0x1
    bool CameraCollisionOff; // offset 0x109, size 0x1
    bool GoTransparent; // offset 0x10A, size 0x1
    unsigned char SimpleFlags; // offset 0x10B, size 0x1
    bool ForceUpdateDistance; // offset 0x10C, size 0x1
    float ForceUpdateDistanceValue; // offset 0x110, size 0x4
    unsigned char orientRef; // offset 0x114, size 0x1
    class LinkAsset EventLinksNew; // offset 0x118, size 0x8
};
// total size: 0x28
class xTimerAsset : public xBaseScene {
    // Members
    float Value; // offset 0x10, size 0x4
    float Randomness; // offset 0x14, size 0x4
    bool runsInPause; // offset 0x18, size 0x1
    unsigned char pad1; // offset 0x19, size 0x1
    unsigned char pad2; // offset 0x1A, size 0x1
    unsigned char pad3; // offset 0x1B, size 0x1
    class LinkAsset EventLinksNew; // offset 0x1C, size 0x8
};
// total size: 0xA0
class TriggerPhantomAsset : public xBaseScene {
    // Members
    class LinkAsset EventLinksNew; // offset 0x10, size 0x8
    unsigned char Type; // offset 0x18, size 0x1
    class @class __anon; // offset 0x20, size 0x30
    class AABB_Type AABBox; // offset 0x20, size 0x30
    class Box_Type Box; // offset 0x20, size 0x30
    class Sphere_Type Sphere; // offset 0x20, size 0x30
    class Capsule_Type Capsule; // offset 0x20, size 0x30
    unsigned int Threshold; // offset 0x50, size 0x4
    float DotDamageAmount; // offset 0x54, size 0x4
    float DotDamageFreq; // offset 0x58, size 0x4
    bool DotDrownThePlayer; // offset 0x5C, size 0x1
    float VelocityDampeningDelay; // offset 0x60, size 0x4
    class __EntitiesInclude__ EntitiesInclude; // offset 0x64, size 0x8
    class __EntitiesExclude__ EntitiesExclude; // offset 0x6C, size 0x8
    float WeightThreshold; // offset 0x74, size 0x4
    bool Targettable; // offset 0x78, size 0x1
    unsigned char Pad00; // offset 0x79, size 0x1
    unsigned char Pad01; // offset 0x7A, size 0x1
    unsigned char Pad02; // offset 0x7B, size 0x1
    unsigned int Action; // offset 0x7C, size 0x4
    class @class __anon; // offset 0x80, size 0x20
    class NoneStruct None; // offset 0x80, size 0x1
    class VelocityTriggerStruct VelocityTrigger; // offset 0x80, size 0x10
    class VelocityPointStruct VelocityPoint; // offset 0x80, size 0x1C
    class ImpulseTriggerStruct ImpulseTrigger; // offset 0x80, size 0x10
    class ImpulsePointStruct ImpulsePoint; // offset 0x80, size 0x18
    class ForceTorqueTriggerStruct ForceTorqueTrigger; // offset 0x80, size 0x18
    class ForceTorquePointStruct ForceTorquePoint; // offset 0x80, size 0x20
};
// total size: 0x30
class @class {
    // Members
    class AABB_Type AABBox; // offset 0x0, size 0x30
    class Box_Type Box; // offset 0x0, size 0x30
    class Sphere_Type Sphere; // offset 0x0, size 0x30
    class Capsule_Type Capsule; // offset 0x0, size 0x30
};
// total size: 0x30
class AABB_Type {
    // Members
    class Matrix43POD Transform; // offset 0x0, size 0x30
};
// total size: 0x30
class Box_Type {
    // Members
    class Matrix43POD Transform; // offset 0x0, size 0x30
};
// total size: 0x30
class Sphere_Type {
    // Members
    class Matrix43POD Transform; // offset 0x0, size 0x30
};
// total size: 0x30
class Capsule_Type {
    // Members
    class Matrix43POD Transform; // offset 0x0, size 0x30
};
// total size: 0x8
class __EntitiesInclude__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __EntitiesExclude__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x20
class @class {
    // Members
    class NoneStruct None; // offset 0x0, size 0x1
    class VelocityTriggerStruct VelocityTrigger; // offset 0x0, size 0x10
    class VelocityPointStruct VelocityPoint; // offset 0x0, size 0x1C
    class ImpulseTriggerStruct ImpulseTrigger; // offset 0x0, size 0x10
    class ImpulsePointStruct ImpulsePoint; // offset 0x0, size 0x18
    class ForceTorqueTriggerStruct ForceTorqueTrigger; // offset 0x0, size 0x18
    class ForceTorquePointStruct ForceTorquePoint; // offset 0x0, size 0x20
};
// total size: 0x1
class NoneStruct {};
// total size: 0x10
class VelocityTriggerStruct {
    // Members
    float Magnitude; // offset 0x0, size 0x4
    class vec3 Direction; // offset 0x4, size 0xC
};
// total size: 0x1C
class VelocityPointStruct {
    // Members
    bool Continuous; // offset 0x0, size 0x1
    float Magnitude; // offset 0x4, size 0x4
    class vec3 Offset; // offset 0x8, size 0xC
    float Yaw; // offset 0x14, size 0x4
    float Pitch; // offset 0x18, size 0x4
};
// total size: 0x10
class ImpulseTriggerStruct {
    // Members
    float Magnitude; // offset 0x0, size 0x4
    class vec3 Direction; // offset 0x4, size 0xC
};
// total size: 0x18
class ImpulsePointStruct {
    // Members
    float Magnitude; // offset 0x0, size 0x4
    class vec3 Offset; // offset 0x4, size 0xC
    float Yaw; // offset 0x10, size 0x4
    float Pitch; // offset 0x14, size 0x4
};
// total size: 0x18
class ForceTorqueTriggerStruct {
    // Members
    float Magnitude; // offset 0x0, size 0x4
    class vec3 Direction; // offset 0x4, size 0xC
    bool FallOff; // offset 0x10, size 0x1
    float FallOffDist; // offset 0x14, size 0x4
};
// total size: 0x20
class ForceTorquePointStruct {
    // Members
    float Magnitude; // offset 0x0, size 0x4
    class vec3 Offset; // offset 0x4, size 0xC
    float Yaw; // offset 0x10, size 0x4
    float Pitch; // offset 0x14, size 0x4
    bool FallOff; // offset 0x18, size 0x1
    float FallOffDist; // offset 0x1C, size 0x4
};
// total size: 0x60
class TriggerOGBase : public xBaseScene {
    // Members
    unsigned char subtype; // offset 0x10, size 0x1
    bool Targettable; // offset 0x11, size 0x1
    class LinkAsset EventLinksNew; // offset 0x14, size 0x8
    class @class __anon; // offset 0x20, size 0x30
    class Box_Type Box; // offset 0x20, size 0x30
    class Sphere_Type Sphere; // offset 0x20, size 0x10
    class Cylinder_Type Cylinder; // offset 0x20, size 0x14
    class Circle_Type Circle; // offset 0x20, size 0x10
    class Polygon_Type Polygon; // offset 0x20, size 0x8
    class @class __anon; // offset 0x50, size 0xC
    class NoDir_Type NoDir; // offset 0x50, size 0x1
    class YesDir_Type YesDir; // offset 0x50, size 0xC
    unsigned int DirFlag; // offset 0x5C, size 0x4
};
// total size: 0x30
class @class {
    // Members
    class Box_Type Box; // offset 0x0, size 0x30
    class Sphere_Type Sphere; // offset 0x0, size 0x10
    class Cylinder_Type Cylinder; // offset 0x0, size 0x14
    class Circle_Type Circle; // offset 0x0, size 0x10
    class Polygon_Type Polygon; // offset 0x0, size 0x8
};
// total size: 0x10
class Sphere_Type {
    // Members
    class vec3 Center; // offset 0x0, size 0xC
    float Radius; // offset 0xC, size 0x4
};
// total size: 0x14
class Cylinder_Type {
    // Members
    class vec3 Center; // offset 0x0, size 0xC
    float Radius; // offset 0xC, size 0x4
    float Height; // offset 0x10, size 0x4
};
// total size: 0x10
class Circle_Type {
    // Members
    class vec3 Center; // offset 0x0, size 0xC
    float Radius; // offset 0xC, size 0x4
};
// total size: 0x8
class Polygon_Type {
    // Members
    class uid BoundsID; // offset 0x0, size 0x8
};
// total size: 0xC
class @class {
    // Members
    class NoDir_Type NoDir; // offset 0x0, size 0x1
    class YesDir_Type YesDir; // offset 0x0, size 0xC
};
// total size: 0x1
class NoDir_Type {};
// total size: 0xC
class YesDir_Type {
    // Members
    class Rotation3 Dir; // offset 0x0, size 0xC
};
// total size: 0x70
class TriggerEntityAsset : public TriggerOGBase {
    // Members
    class __Entities__ Entities; // offset 0x60, size 0x8
    unsigned int Threshold; // offset 0x68, size 0x4
};
// total size: 0x8
class __Entities__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x30
class zDirectionAsset : public xBaseScene {
    // Members
    class vec3 location; // offset 0x10, size 0xC
    class Rotation3 direction; // offset 0x1C, size 0xC
    class LinkAsset EventLinksNew; // offset 0x28, size 0x8
};
// total size: 0x40
class xPortalAsset : public xBaseScene {
    // Members
    class uid cameraID; // offset 0x10, size 0x8
    class Pointer32 sceneID; // offset 0x18, size 0x4
    class uid loadingScreenID; // offset 0x20, size 0x8
    class uid secondaryLoadingScreenID; // offset 0x28, size 0x8
    class __directionID__ directionID; // offset 0x30, size 0x8
    class LinkAsset EventLinksNew; // offset 0x38, size 0x8
};
// total size: 0x8
class __directionID__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x30
class zEventSpyAsset : public xBaseScene {
    // Members
    bool FlagLog; // offset 0x10, size 0x1
    bool FlagLogStack; // offset 0x11, size 0x1
    bool FlagAssert; // offset 0x12, size 0x1
    bool FlagAssertOnce; // offset 0x13, size 0x1
    bool FlagSound; // offset 0x14, size 0x1
    bool FlagSkip; // offset 0x15, size 0x1
    class __from__ from; // offset 0x18, size 0x8
    class __to__ to; // offset 0x20, size 0x8
    class __events__ events; // offset 0x28, size 0x8
};
// total size: 0x8
class __from__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __to__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __events__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x20
class zPolygonalVolumeAsset : public xBaseScene {
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
// total size: 0x80
class ElectricPointAsset : public xBaseScene {
    // Members
    class ModelInstanceAsset ModelInstance; // offset 0x10, size 0x40
    class vec3 Position; // offset 0x50, size 0xC
    class Rotation3 Orientation; // offset 0x5C, size 0xC
    class uid Attach; // offset 0x68, size 0x8
    class LinkAsset EventLinksNew; // offset 0x70, size 0x8
};
// total size: 0x60
class ElectricArcAsset : public xBaseScene {
    // Members
    class __Geoms__ Geoms; // offset 0x10, size 0x8
    class __Geoms2__ Geoms2; // offset 0x18, size 0x8
    unsigned int InteractionFlags; // offset 0x20, size 0x4
    unsigned int DamageFlags; // offset 0x24, size 0x4
    float DamageAmount; // offset 0x28, size 0x4
    float DamageTimer; // offset 0x2C, size 0x4
    enum enMode Mode; // offset 0x30, size 0x4
    class uid Point1; // offset 0x38, size 0x8
    class uid Point2; // offset 0x40, size 0x8
    float ProximityDistance; // offset 0x48, size 0x4
    float ProximityDetectTimer; // offset 0x4C, size 0x4
    class uid Spot; // offset 0x50, size 0x8
    class LinkAsset EventLinksNew; // offset 0x58, size 0x8
};
// total size: 0x8
class __Geoms__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __Geoms2__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
enum enMode {
    enMode_ElectricArc = 0,
    enMode_SecurityLaser = 1,
    enMode_ElectricityMapped = 2,
    enMode_ElectricityVolume = 3,
    enMode_LaserMapped = 4,
    enMode_SpotLight = 5,
    END_enMode_ENUM = 6,
};
// total size: 0xD0
class zFloatingCollectibleSpawnerAsset : public xBaseScene {
    // Members
    class LinkAsset EventLinksNew; // offset 0x10, size 0x8
    class ModelInstanceAsset ModelInstance; // offset 0x20, size 0x40
    class vec3 Position; // offset 0x60, size 0xC
    class Rotation3 Orientation; // offset 0x6C, size 0xC
    class uid AnimationSetID; // offset 0x78, size 0x8
    class vec3 Scale; // offset 0x80, size 0xC
    float WarnDistance; // offset 0x8C, size 0x4
    unsigned int SpawnerType; // offset 0x90, size 0x4
    class uid BadgePointRef; // offset 0x98, size 0x8
    int Gold; // offset 0xA0, size 0x4
    int Silver; // offset 0xA4, size 0x4
    int Bronze; // offset 0xA8, size 0x4
    int Health; // offset 0xAC, size 0x4
    float Probability; // offset 0xB0, size 0x4
    float FlyingTime; // offset 0xB4, size 0x4
    float FlyingHeight; // offset 0xB8, size 0x4
    float SpawnDelay; // offset 0xBC, size 0x4
    float SpawnInterval; // offset 0xC0, size 0x4
    class __CollectibleList__ CollectibleList; // offset 0xC4, size 0x8
};
// total size: 0x8
class __CollectibleList__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x40
class CollectibleSpawnerAsset : public xBaseScene {
    // Members
    class vec3 Position; // offset 0x10, size 0xC
    class Rotation3 Orientation; // offset 0x1C, size 0xC
    bool Driven; // offset 0x28, size 0x1
    bool Autocollect; // offset 0x29, size 0x1
    class __Collectibles__ Collectibles; // offset 0x2C, size 0x8
    class LinkAsset EventLinksNew; // offset 0x34, size 0x8
};
// total size: 0xB0
class zFloatingCollectibleAsset : public xBaseScene {
    // Members
    class LinkAsset EventLinksNew; // offset 0x10, size 0x8
    class ModelInstanceAsset ModelInstance; // offset 0x20, size 0x40
    class vec3 Position; // offset 0x60, size 0xC
    float CollectDistance; // offset 0x6C, size 0x4
    float SB09CollectTime; // offset 0x70, size 0x4
    float SB09CollectHeight; // offset 0x74, size 0x4
    class uid VFXSpawn; // offset 0x78, size 0x8
    class uid VFXCollectSpawn; // offset 0x80, size 0x8
    bool HasBalloon; // offset 0x88, size 0x1
    bool UseGeneric; // offset 0x89, size 0x1
    bool InitiallyHidden; // offset 0x8A, size 0x1
    bool RandomInitialRotation; // offset 0x8B, size 0x1
    unsigned int MotionType; // offset 0x8C, size 0x4
    class @class uGameName; // offset 0x90, size 0x4
    unsigned int GameName; // offset 0x94, size 0x4
    unsigned char DriveType; // offset 0x98, size 0x1
    class @class __anon; // offset 0xA0, size 0x8
    class DriveTypeNone_Type DrivenByNone; // offset 0xA0, size 0x1
    class DriveTypeObject_Type DrivenByObject; // offset 0xA0, size 0x8
};
// total size: 0x4
class @class {
    // Members
    class sUPItem UPItemType; // offset 0x0, size 0x4
    class sSBItem SBItemType; // offset 0x0, size 0x4
};
// total size: 0x4
class sUPItem {
    // Members
    enum eUPFloatingItemType UPItemType; // offset 0x0, size 0x4
};
enum eUPFloatingItemType {
    eUPFloatingItemType_Memorabilia1 = 0,
    eUPFloatingItemType_Memorabilia2 = 1,
    eUPFloatingItemType_Memorabilia3 = 2,
    eUPFloatingItemType_Memorabilia4 = 3,
    eUPFloatingItemType_Memorabilia5 = 4,
    eUPFloatingItemType_Memorabilia6 = 5,
    eUPFloatingItemType_Memorabilia7 = 6,
    eUPFloatingItemType_Separator1 = 7,
    eUPFloatingItemType_WalleCockroach = 8,
    eUPFloatingItemType_Dirigible1 = 9,
    eUPFloatingItemType_Dirigible2 = 10,
    eUPFloatingItemType_Dirigible3 = 11,
    eUPFloatingItemType_Separator2 = 12,
    eUPFloatingItemType_Articfact1 = 13,
    eUPFloatingItemType_Articfact2 = 14,
    eUPFloatingItemType_Articfact3 = 15,
    eUPFloatingItemType_Articfact4 = 16,
    eUPFloatingItemType_Articfact5 = 17,
    eUPFloatingItemType_Articfact6 = 18,
    eUPFloatingItemType_Articfact7 = 19,
    eUPFloatingItemType_Articfact8 = 20,
    eUPFloatingItemType_Articfact9 = 21,
    eUPFloatingItemType_Articfact10 = 22,
    eUPFloatingItemType_Articfact11 = 23,
    eUPFloatingItemType_Articfact12 = 24,
    eUPFloatingItemType_Articfact13 = 25,
    eUPFloatingItemType_Articfact14 = 26,
    eUPFloatingItemType_Articfact15 = 27,
    eUPFloatingItemType_Articfact16 = 28,
    eUPFloatingItemType_Articfact17 = 29,
    eUPFloatingItemType_Articfact18 = 30,
    eUPFloatingItemType_Articfact19 = 31,
    eUPFloatingItemType_Articfact20 = 32,
    eUPFloatingItemType_Articfact21 = 33,
    eUPFloatingItemType_Separator3 = 34,
    eUPFloatingItemType_MinorFood = 35,
    eUPFloatingItemType_MajorFood = 36,
    eUPFloatingItemType_RareFood = 37,
    eUPFloatingItemType_Dummy1 = 38,
    eUPFloatingItemType_Dummy2 = 39,
    eUPFloatingItemType_Separator4 = 40,
    eUPFloatingItemType_Balloon = 41,
    eUPFloatingItemType_Health25 = 42,
    eUPFloatingItemType_Health50 = 43,
    eUPFloatingItemType_HeavyDart = 44,
    eUPFloatingItemType_Mine = 45,
    eUPFloatingItemType_TennisBall = 46,
    eUPFloatingItemType_Turret = 47,
    eUPFloatingItemType_RandomPickup = 48,
    eUPFloatingItemType_Separator5 = 49,
    eUPFloatingItemType_SpecialTank = 50,
    eUPFloatingItemType_SpecialBattery = 51,
    eUPFloatingItemType_SpecialBone = 52,
    eUPFloatingItemType_SpecialCanteen = 53,
    eUPFloatingItemType_SpecialSheetMusic = 54,
    eUPFloatingItemType_SpecialChocolate = 55,
    END_eUPFloatingItemType_ENUM = 56,
};
// total size: 0x4
class sSBItem {
    // Members
    enum eSBFloatingItemType SBItemType; // offset 0x0, size 0x4
};
enum eSBFloatingItemType {
    eSBFloatingItemType_PlaceHolder = 0,
    eSBFloatingItemType_HappyNugget = 1,
    eSBFloatingItemType_UnhappyNugget = 2,
    eSBFloatingItemType_Health = 3,
    eSBFloatingItemType_Life = 4,
    eSBFloatingItemType_PuckAmmo = 5,
    eSBFloatingItemType_SpongeBuffPowerup = 6,
    eSBFloatingItemType_SpinPowerup = 7,
    eSBFloatingItemType_HammerPowerup = 8,
    eSBFloatingItemType_PuckPowerup = 9,
    eSBFloatingItemType_InvincibilityPowerup = 10,
    eSBFloatingItemType_Key = 11,
    eSBFloatingItemType_MemoryObject = 12,
    eSBFloatingItemType_BonusFeature = 13,
    END_eSBFloatingItemType_ENUM = 14,
};
// total size: 0x8
class @class {
    // Members
    class DriveTypeNone_Type DrivenByNone; // offset 0x0, size 0x1
    class DriveTypeObject_Type DrivenByObject; // offset 0x0, size 0x8
};
// total size: 0x1
class DriveTypeNone_Type {};
// total size: 0x8
class DriveTypeObject_Type {
    // Members
    class uid DriverObject; // offset 0x0, size 0x8
};
// total size: 0x120
class zBreakawayPlatformAsset : public xBaseScene {
    // Members
    class LinkAsset EventLinksNew; // offset 0x10, size 0x8
    class vec3 Pos; // offset 0x18, size 0xC
    class Rotation3 Orientation; // offset 0x24, size 0xC
    class vec3 Scale; // offset 0x30, size 0xC
    class ModelInstanceAsset ModelInstance; // offset 0x40, size 0x40
    class uid Surface; // offset 0x80, size 0x8
    class uid BreakawayGroupID; // offset 0x88, size 0x8
    unsigned char MotionType; // offset 0x90, size 0x1
    class @class __anon; // offset 0x98, size 0x10
    class Static_Type Static; // offset 0x98, size 0x1
    class MovePointMotion_Type MovePointMotion; // offset 0x98, size 0x10
    unsigned int Pad1; // offset 0xA8, size 0x4
    unsigned char AnimationType; // offset 0xAC, size 0x1
    class @class __anon; // offset 0xB0, size 0x38
    class Animated_Type Animated; // offset 0xB0, size 0x8
    class Programmatic_Type Programmatic; // offset 0xB0, size 0x38
    float BreakawayDelay; // offset 0xE8, size 0x4
    float ReappearDelay; // offset 0xEC, size 0x4
    class SoundBankSource SoundWarning; // offset 0xF0, size 0xC
    class SoundBankSource SoundBreak; // offset 0xFC, size 0xC
    class SoundBankSource SoundAppear; // offset 0x108, size 0xC
    bool FakeBuoyancy; // offset 0x114, size 0x1
    bool ForceUpdateDistance; // offset 0x115, size 0x1
    float ForceUpdateDistanceValue; // offset 0x118, size 0x4
};
// total size: 0x10
class @class {
    // Members
    class Static_Type Static; // offset 0x0, size 0x1
    class MovePointMotion_Type MovePointMotion; // offset 0x0, size 0x10
};
// total size: 0x1
class Static_Type {};
// total size: 0x10
class MovePointMotion_Type {
    // Members
    class uid FirstMovePoint; // offset 0x0, size 0x8
    float Speed; // offset 0x8, size 0x4
    unsigned char Flags; // offset 0xC, size 0x1
};
// total size: 0x38
class @class {
    // Members
    class Animated_Type Animated; // offset 0x0, size 0x8
    class Programmatic_Type Programmatic; // offset 0x0, size 0x38
};
// total size: 0x8
class Animated_Type {
    // Members
    class uid AnimationSetID; // offset 0x0, size 0x8
};
// total size: 0x38
class Programmatic_Type {
    // Members
    unsigned char Flags; // offset 0x0, size 0x1
    unsigned char WarningType; // offset 0x1, size 0x1
    class @class __anon; // offset 0x4, size 0x14
    class None_Type None; // offset 0x4, size 0x1
    class Shake_Type Shake; // offset 0x4, size 0x8
    class Flash_Type Flash; // offset 0x4, size 0x14
    unsigned char BreakType; // offset 0x18, size 0x1
    class @class __anon; // offset 0x1C, size 0xC
    class Immediate_Type Immediate; // offset 0x1C, size 0x1
    class Translate_Type Translate; // offset 0x1C, size 0xC
    class Fall_Type Fall; // offset 0x1C, size 0x4
    class Shrink_Type Shrink; // offset 0x1C, size 0x4
    class FadeOut_Type FadeOut; // offset 0x1C, size 0x4
    class Rotate_Type Rotate; // offset 0x1C, size 0xC
    unsigned char AppearType; // offset 0x28, size 0x1
    class @class __anon; // offset 0x2C, size 0xC
    class PopIn_Type PopIn; // offset 0x2C, size 0x1
    class TranslateBack_Type TranslateBack; // offset 0x2C, size 0xC
    class Expand_Type Expand; // offset 0x2C, size 0x4
    class FadeIn_Type FadeIn; // offset 0x2C, size 0x4
    class NoReappear_Type NoReappear; // offset 0x2C, size 0x1
    class RotateBack_Type RotateBack; // offset 0x2C, size 0xC
};
// total size: 0x14
class @class {
    // Members
    class None_Type None; // offset 0x0, size 0x1
    class Shake_Type Shake; // offset 0x0, size 0x8
    class Flash_Type Flash; // offset 0x0, size 0x14
};
// total size: 0x1
class None_Type {};
// total size: 0x8
class Shake_Type {
    // Members
    unsigned char Axis; // offset 0x0, size 0x1
    float Duration; // offset 0x4, size 0x4
};
// total size: 0x14
class Flash_Type {
    // Members
    class vec3 colorMult; // offset 0x0, size 0xC
    float Frequency; // offset 0xC, size 0x4
    float Duration; // offset 0x10, size 0x4
};
// total size: 0xC
class @class {
    // Members
    class Immediate_Type Immediate; // offset 0x0, size 0x1
    class Translate_Type Translate; // offset 0x0, size 0xC
    class Fall_Type Fall; // offset 0x0, size 0x4
    class Shrink_Type Shrink; // offset 0x0, size 0x4
    class FadeOut_Type FadeOut; // offset 0x0, size 0x4
    class Rotate_Type Rotate; // offset 0x0, size 0xC
};
// total size: 0x1
class Immediate_Type {};
// total size: 0xC
class Translate_Type {
    // Members
    unsigned char Axis; // offset 0x0, size 0x1
    float Distance; // offset 0x4, size 0x4
    float Duration; // offset 0x8, size 0x4
};
// total size: 0x4
class Fall_Type {
    // Members
    float Duration; // offset 0x0, size 0x4
};
// total size: 0x4
class Shrink_Type {
    // Members
    float Duration; // offset 0x0, size 0x4
};
// total size: 0x4
class FadeOut_Type {
    // Members
    float Duration; // offset 0x0, size 0x4
};
// total size: 0xC
class Rotate_Type {
    // Members
    unsigned char Axis; // offset 0x0, size 0x1
    float Duration; // offset 0x4, size 0x4
    float Angle; // offset 0x8, size 0x4
};
// total size: 0xC
class @class {
    // Members
    class PopIn_Type PopIn; // offset 0x0, size 0x1
    class TranslateBack_Type TranslateBack; // offset 0x0, size 0xC
    class Expand_Type Expand; // offset 0x0, size 0x4
    class FadeIn_Type FadeIn; // offset 0x0, size 0x4
    class NoReappear_Type NoReappear; // offset 0x0, size 0x1
    class RotateBack_Type RotateBack; // offset 0x0, size 0xC
};
// total size: 0x1
class PopIn_Type {};
// total size: 0xC
class TranslateBack_Type {
    // Members
    unsigned char Axis; // offset 0x0, size 0x1
    float Distance; // offset 0x4, size 0x4
    float Duration; // offset 0x8, size 0x4
};
// total size: 0x4
class Expand_Type {
    // Members
    float Duration; // offset 0x0, size 0x4
};
// total size: 0x4
class FadeIn_Type {
    // Members
    float Duration; // offset 0x0, size 0x4
};
// total size: 0x1
class NoReappear_Type {};
// total size: 0xC
class RotateBack_Type {
    // Members
    unsigned char Axis; // offset 0x0, size 0x1
    float Duration; // offset 0x4, size 0x4
    float Angle; // offset 0x8, size 0x4
};
// total size: 0x38
class zCinematicAsset : public xBaseScene {
    // Members
    class uid CinematicNG; // offset 0x10, size 0x8
    class SoundBankSource source; // offset 0x18, size 0xC
    class __objectsToUpdate__ objectsToUpdate; // offset 0x24, size 0x8
    class LinkAsset EventLinksNew; // offset 0x2C, size 0x8
};
// total size: 0x8
class __objectsToUpdate__ {
    // Members
    enum eUpdatableObjects type; // offset 0x0, size 0x4
    class @class u; // offset 0x4, size 0x4
};
enum eUpdatableObjects {
    None = 0,
    All = 1,
    Custom = 2,
    END_eUpdatableObjectsENUM = 3,
};
// total size: 0x4
class @class {
    // Members
    class dummy _None; // offset 0x0, size 0x1
    class dummy _All; // offset 0x0, size 0x1
    unsigned int _Custom; // offset 0x0, size 0x4
};
// total size: 0x1
class dummy {};
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
// total size: 0x78
class zPOWObjectAsset : public xBaseAsset {
    // Members
    class uid ModelInstanceReference; // offset 0x10, size 0x8
    bool InfiniteLife; // offset 0x18, size 0x1
    class PhysicsDataStruct PhysicsData; // offset 0x1C, size 0x54
    class LinkAsset EventLinksNew; // offset 0x70, size 0x8
};
// total size: 0xA0
class zPOWGroupAsset : public xBaseScene {
    // Members
    class LinkAsset EventLinksNew; // offset 0x10, size 0x8
    int NumObj; // offset 0x18, size 0x4
    class uid POWObj; // offset 0x20, size 0x8
    unsigned char SpawnType; // offset 0x28, size 0x1
    unsigned char VolumeType; // offset 0x29, size 0x1
    class uid DestructibleObj; // offset 0x30, size 0x8
    unsigned int shadowColor; // offset 0x38, size 0x4
    float shadowMaxDepth; // offset 0x3C, size 0x4
    float shadowStartDepth; // offset 0x40, size 0x4
    unsigned int shadowMinBlur; // offset 0x44, size 0x4
    unsigned int shadowMaxBlur; // offset 0x48, size 0x4
    class __triggers__ triggers; // offset 0x4C, size 0x8
    unsigned int initialCollisionFilter; // offset 0x54, size 0x4
    class @class __anon; // offset 0x60, size 0x40
    class Box_Type Box; // offset 0x60, size 0x40
    class Sphere_Type Sphere; // offset 0x60, size 0x10
    class Point_Type Point; // offset 0x60, size 0xC
};
// total size: 0x8
class __triggers__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x40
class @class {
    // Members
    class Box_Type Box; // offset 0x0, size 0x40
    class Sphere_Type Sphere; // offset 0x0, size 0x10
    class Point_Type Point; // offset 0x0, size 0xC
};
// total size: 0x40
class Box_Type {
    // Members
    class Matrix43POD Transform; // offset 0x0, size 0x30
    int NumX; // offset 0x30, size 0x4
    int NumY; // offset 0x34, size 0x4
    int NumZ; // offset 0x38, size 0x4
};
// total size: 0xC
class Point_Type {
    // Members
    class vec3 Position; // offset 0x0, size 0xC
};
// total size: 0x50
class zInWorldIconWidgetAsset : public xBaseScene {
    // Members
    class uid AttachTo; // offset 0x10, size 0x8
    class uid ImmModel; // offset 0x18, size 0x8
    class uid ImmModelAlt1; // offset 0x20, size 0x8
    class uid ImmModelAlt2; // offset 0x28, size 0x8
    class vec3 Offset; // offset 0x30, size 0xC
    float Scale; // offset 0x3C, size 0x4
    float Distance; // offset 0x40, size 0x4
    bool isActive; // offset 0x44, size 0x1
    bool isShaking; // offset 0x45, size 0x1
    class LinkAsset EventLinksNew; // offset 0x48, size 0x8
};
// total size: 0x50
class LensFlareSpawnPt : public xBaseScene {
    // Members
    unsigned char alphaType; // offset 0x10, size 0x1
    class vec3 center; // offset 0x14, size 0xC
    class Rotation3 direction; // offset 0x20, size 0xC
    float radius; // offset 0x2C, size 0x4
    int numPts; // offset 0x30, size 0x4
    class uid falloffCurve; // offset 0x38, size 0x8
    float falloffMin; // offset 0x40, size 0x4
    float falloffMax; // offset 0x44, size 0x4
    class __spots__ spots; // offset 0x48, size 0x8
};
// total size: 0x8
class __spots__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
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
// total size: 0xE0
class zUpFloatingBridgeAsset : public InteractionUpWithIcons {
    // Members
    class vec3 interactPos; // offset 0x1C, size 0xC
    float interactRadius; // offset 0x28, size 0x4
    class RenderedPhysicsModelAsset rpmAsset; // offset 0x30, size 0x70
    class uid AnimationSetID; // offset 0xA0, size 0x8
    class vec3 Scale; // offset 0xA8, size 0xC
    class SoundBankSource SoundRising; // offset 0xB4, size 0xC
    class SoundBankSource SoundCollapsing; // offset 0xC0, size 0xC
    class vec3 balloonPos; // offset 0xCC, size 0xC
    class LinkAsset EventLinksNew; // offset 0xD8, size 0x8
};
// total size: 0x20
class InteractionUpWithIcons : public InteractionUP {
    // Members
    class vec3 IconOffset; // offset 0x10, size 0xC
};
// total size: 0x10
class InteractionUP : public xBaseScene {};
// total size: 0x70
class RenderedPhysicsModelAsset {
    // Members
    class Rotation3 orientation; // offset 0x0, size 0xC
    class vec3 pos; // offset 0xC, size 0xC
    class ModelInstanceAsset modelInstance; // offset 0x20, size 0x40
    class uid animList; // offset 0x60, size 0x8
    float mass; // offset 0x68, size 0x4
};
// total size: 0xA0
class zSwingVineAsset : public InteractionUP {
    // Members
    class UpSpringAsset vineSpringAsset; // offset 0x10, size 0x30
    class uid neighborA; // offset 0x40, size 0x8
    class uid neighborB; // offset 0x48, size 0x8
    class vec3 swingDir; // offset 0x50, size 0xC
    float maxAngle; // offset 0x5C, size 0x4
    class SoundBankSource SoundGrab; // offset 0x60, size 0xC
    class SoundBankSource SoundLower; // offset 0x6C, size 0xC
    class SoundBankSource SoundSwing; // offset 0x78, size 0xC
    class SoundBankSource SoundRelease; // offset 0x84, size 0xC
    class __Stops__ Stops; // offset 0x90, size 0x8
    class __Landings__ Landings; // offset 0x98, size 0x8
};
// total size: 0x30
class UpSpringAsset {
    // Members
    class vec3 posEndA; // offset 0x0, size 0xC
    class vec3 posEndB; // offset 0xC, size 0xC
    bool doFixedEndB; // offset 0x18, size 0x1
    float length; // offset 0x1C, size 0x4
    class vec3 force; // offset 0x20, size 0xC
    unsigned char numNodes; // offset 0x2C, size 0x1
};
// total size: 0x8
class __Stops__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __Landings__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x70
class zRussellRopeAsset : public InteractionUpWithIcons {
    // Members
    class uid Ledge; // offset 0x20, size 0x8
    bool CarlAlwaysHoldOn; // offset 0x28, size 0x1
    class uid CarlRussellRopeAnim; // offset 0x30, size 0x8
    class uid RussellRussellRopeAnim; // offset 0x38, size 0x8
    class uid CarlTrigger; // offset 0x40, size 0x8
    class uid RussellTrigger; // offset 0x48, size 0x8
    class SoundBankSource SoundLower; // offset 0x50, size 0xC
    class SoundBankSource SoundMove; // offset 0x5C, size 0xC
    class LinkAsset EventLinksNew; // offset 0x68, size 0x8
};
// total size: 0x70
class zDragRopeAsset : public xBaseScene {
    // Members
    unsigned char numNodes; // offset 0x10, size 0x1
    float ropeLength; // offset 0x14, size 0x4
    float maxLength; // offset 0x18, size 0x4
    float ropeThickness; // offset 0x1C, size 0x4
    float dragginPlayerWalkSpeed; // offset 0x20, size 0x4
    float dragginPlayerRunSpeed; // offset 0x24, size 0x4
    class uid cnA; // offset 0x28, size 0x8
    class vec3 inA; // offset 0x30, size 0xC
    class vec3 inB; // offset 0x3C, size 0xC
    unsigned char endAttachedTo; // offset 0x48, size 0x1
    class vec3 cnB; // offset 0x4C, size 0xC
    class uid CarlHousePullAnim; // offset 0x58, size 0x8
    class uid RussellHousePullAnim; // offset 0x60, size 0x8
    class LinkAsset EventLinksNew; // offset 0x68, size 0x8
};
// total size: 0x48
class zInteractRopeTieAsset : public InteractionUpWithIcons {
    // Members
    class uid rope; // offset 0x20, size 0x8
    class vec3 position; // offset 0x28, size 0xC
    float xzRadius; // offset 0x34, size 0x4
    bool tieToPlayer; // offset 0x38, size 0x1
    class LinkAsset EventLinksNew; // offset 0x3C, size 0x8
};
// total size: 0x1C0
class zLeverAsset : public xEntAsset {
    // Members
    class SoundBankSource SoundLaunch; // offset 0xF8, size 0xC
    class SoundBankSource SoundTilt; // offset 0x104, size 0xC
    class SoundBankSource SoundThud; // offset 0x110, size 0xC
    class vec3 barPosition; // offset 0x11C, size 0xC
    class Rotation3 barOrientation; // offset 0x128, size 0xC
    class ModelInstanceAsset barModel; // offset 0x140, size 0x40
    class uid VFXRevealSpawn; // offset 0x180, size 0x8
    bool BigLever; // offset 0x188, size 0x1
    bool NoShake; // offset 0x189, size 0x1
    bool SoftResetOnDismount; // offset 0x18A, size 0x1
    bool RagdollLaunch; // offset 0x18B, size 0x1
    class __launches__ launches; // offset 0x18C, size 0x8
    unsigned char DefaultTilt; // offset 0x194, size 0x1
    float minLaunchHeight; // offset 0x198, size 0x4
    class vec3 iconRussell; // offset 0x19C, size 0xC
    class vec3 iconCarl; // offset 0x1A8, size 0xC
    class LinkAsset EventLinksNew; // offset 0x1B4, size 0x8
};
// total size: 0x8
class __launches__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x48
class zDogPackAsset : public xBaseScene {
    // Members
    float thresholdA; // offset 0x10, size 0x4
    float thresholdB; // offset 0x14, size 0x4
    float thresholdC; // offset 0x18, size 0x4
    float thresholdD; // offset 0x1C, size 0x4
    float distanceScale; // offset 0x20, size 0x4
    float instaGain; // offset 0x24, size 0x4
    float gainRate; // offset 0x28, size 0x4
    float lossRate; // offset 0x2C, size 0x4
    class uid meterBead; // offset 0x30, size 0x8
    class uid dustCloud; // offset 0x38, size 0x8
    class LinkAsset links; // offset 0x40, size 0x8
};
// total size: 0x38
class Ledge : public xBaseScene {
    // Members
    unsigned char LedgeType; // offset 0x10, size 0x1
    class @class __anon; // offset 0x18, size 0x8
    class LineLedge_Type Line; // offset 0x18, size 0x8
    class CurveLedge_Type Curve; // offset 0x18, size 0x8
    bool ReverseDirection; // offset 0x20, size 0x1
    class @class __anon; // offset 0x28, size 0x8
    class DriveTypeNone_Type DrivenByNone; // offset 0x28, size 0x1
    class DriveTypeObject_Type DrivenByObject; // offset 0x28, size 0x8
    unsigned char DriveType; // offset 0x30, size 0x1
};
// total size: 0x8
class @class {
    // Members
    class LineLedge_Type Line; // offset 0x0, size 0x8
    class CurveLedge_Type Curve; // offset 0x0, size 0x8
};
// total size: 0x8
class LineLedge_Type {
    // Members
    class __Points__ Points; // offset 0x0, size 0x8
};
// total size: 0x8
class CurveLedge_Type {
    // Members
    class uid Curve; // offset 0x0, size 0x8
};
// total size: 0x28
class LedgeGrab : public InteractionUP {
    // Members
    class uid Ledge; // offset 0x10, size 0x8
    bool Climbable; // offset 0x18, size 0x1
    class LinkAsset EventLinksNew; // offset 0x1C, size 0x8
};
// total size: 0x40
class CarlLedgeHoist : public InteractionUP {
    // Members
    class uid Ledge; // offset 0x10, size 0x8
    class uid Animations; // offset 0x18, size 0x8
    class uid CarlTrigger; // offset 0x20, size 0x8
    class uid RussellTrigger; // offset 0x28, size 0x8
    class uid JumpHint; // offset 0x30, size 0x8
    class LinkAsset EventLinksNew; // offset 0x38, size 0x8
};
// total size: 0x80
class zPushPullAsset : public InteractionUpWithIcons {
    // Members
    unsigned int CharactersNeeded; // offset 0x1C, size 0x4
    class uid RussellAnims; // offset 0x20, size 0x8
    class uid CarlAnims; // offset 0x28, size 0x8
    class uid Object; // offset 0x30, size 0x8
    float AttachOffset; // offset 0x38, size 0x4
    class @class __anon; // offset 0x3C, size 0x14
    class Translate_Type Translate; // offset 0x3C, size 0x14
    class Rotate_Type Rotate; // offset 0x3C, size 0x10
    unsigned char MovementType; // offset 0x50, size 0x1
    unsigned int Flags; // offset 0x54, size 0x4
    class vec3 VFXOffset; // offset 0x58, size 0xC
    class uid VFXMiddleSpawn; // offset 0x68, size 0x8
    class uid VFXSideSpawn; // offset 0x70, size 0x8
    class LinkAsset EventLinksNew; // offset 0x78, size 0x8
};
// total size: 0x14
class @class {
    // Members
    class Translate_Type Translate; // offset 0x0, size 0x14
    class Rotate_Type Rotate; // offset 0x0, size 0x10
};
// total size: 0x14
class Translate_Type {
    // Members
    float Speed; // offset 0x0, size 0x4
    float XDist; // offset 0x4, size 0x4
    float XNegDist; // offset 0x8, size 0x4
    float ZDist; // offset 0xC, size 0x4
    float ZNegDist; // offset 0x10, size 0x4
};
// total size: 0x10
class Rotate_Type {
    // Members
    float Speed; // offset 0x0, size 0x4
    float CWAng; // offset 0x4, size 0x4
    float CCWAng; // offset 0x8, size 0x4
    unsigned char RotationAxis; // offset 0xC, size 0x1
};
// total size: 0x120
class zTrapAsset : public InteractionUP {
    // Members
    bool Alive; // offset 0x10, size 0x1
    class __POWGroup__ POWGroup; // offset 0x14, size 0x8
    class __SimpleObjects__ SimpleObjects; // offset 0x1C, size 0x8
    class vec3 knotPosition; // offset 0x24, size 0xC
    class Rotation3 knotOrientation; // offset 0x30, size 0xC
    class ModelInstanceAsset knotModel; // offset 0x40, size 0x40
    class vec3 knotRopePosition; // offset 0x80, size 0xC
    class vec3 trapPosition; // offset 0x8C, size 0xC
    class Rotation3 trapOrientation; // offset 0x98, size 0xC
    class ModelInstanceAsset trapModel; // offset 0xB0, size 0x40
    class uid CarlTrapAnim; // offset 0xF0, size 0x8
    class uid DugTrapAnim; // offset 0xF8, size 0x8
    class uid RussellTrapAnim; // offset 0x100, size 0x8
    class uid AnimationSetID; // offset 0x108, size 0x8
    class LinkAsset EventLinksNew; // offset 0x110, size 0x8
};
// total size: 0x8
class __POWGroup__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __SimpleObjects__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x18
class xSubtitlesAsset : public xBaseAsset {
    // Members
    class __SubtitlesList__ SubtitlesList; // offset 0x10, size 0x8
};
// total size: 0x8
class __SubtitlesList__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0xC0
class zManEatingPlantAsset : public InteractionUP {
    // Members
    bool Alive; // offset 0x10, size 0x1
    class __SimpleObjects__ SimpleObjects; // offset 0x14, size 0x8
    class __NPC__ NPC; // offset 0x1C, size 0x8
    class vec3 plantPosition; // offset 0x24, size 0xC
    class Rotation3 plantOrientation; // offset 0x30, size 0xC
    class ModelInstanceAsset plantModel; // offset 0x40, size 0x40
    class vec3 Scale; // offset 0x80, size 0xC
    bool Prone; // offset 0x8C, size 0x1
    class uid CarlPlantAnim; // offset 0x90, size 0x8
    class uid DugPlantAnim; // offset 0x98, size 0x8
    class uid KevinPlantAnim; // offset 0xA0, size 0x8
    class uid RussellPlantAnim; // offset 0xA8, size 0x8
    class uid AnimationSetID; // offset 0xB0, size 0x8
    class LinkAsset EventLinksNew; // offset 0xB8, size 0x8
};
// total size: 0x8
class __NPC__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0xC0
class zCaveWormAsset : public InteractionUP {
    // Members
    bool Alive; // offset 0x10, size 0x1
    class vec3 wormPosition; // offset 0x14, size 0xC
    class Rotation3 wormOrientation; // offset 0x20, size 0xC
    class ModelInstanceAsset wormModel; // offset 0x30, size 0x40
    class vec3 Scale; // offset 0x70, size 0xC
    class uid CarlCaveWormAnim; // offset 0x80, size 0x8
    class uid DugCaveWormAnim; // offset 0x88, size 0x8
    class uid KevinCaveWormAnim; // offset 0x90, size 0x8
    class uid RussellCaveWormAnim; // offset 0x98, size 0x8
    unsigned char TongueLength; // offset 0xA0, size 0x1
    class uid AnimationSetID; // offset 0xA8, size 0x8
    class LinkAsset EventLinksNew; // offset 0xB0, size 0x8
};
// total size: 0xD0
class zHouseFloatAsset : public InteractionUpWithIcons {
    // Members
    bool Alive; // offset 0x1C, size 0x1
    class vec3 entryZ; // offset 0x20, size 0xC
    class vec3 entryA; // offset 0x2C, size 0xC
    class vec3 entryB; // offset 0x38, size 0xC
    class Matrix43POD startArea; // offset 0x50, size 0x30
    class Matrix43POD preStartArea; // offset 0x80, size 0x30
    float horizontalWidth; // offset 0xB0, size 0x4
    float verticalWidth; // offset 0xB4, size 0x4
    float houseSpeed; // offset 0xB8, size 0x4
    float adjustmentSpeed; // offset 0xBC, size 0x4
    class uid house; // offset 0xC0, size 0x8
    class LinkAsset EventLinksNew; // offset 0xC8, size 0x8
};
// total size: 0x60
class zSniffAsset : public InteractionUpWithIcons {
    // Members
    bool Alive; // offset 0x1C, size 0x1
    class uid trigger; // offset 0x20, size 0x8
    unsigned char Type; // offset 0x28, size 0x1
    class uid Object; // offset 0x30, size 0x8
    class uid VFXRevealSpawn; // offset 0x38, size 0x8
    float exposure; // offset 0x40, size 0x4
    class uid DugSniffAnim; // offset 0x48, size 0x8
    class __ItemList__ ItemList; // offset 0x50, size 0x8
    class LinkAsset EventLinksNew; // offset 0x58, size 0x8
};
// total size: 0xB0
class zHouseBalloonBounceAsset : public InteractionUpWithIcons {
    // Members
    bool Alive; // offset 0x1C, size 0x1
    float BounceHeight; // offset 0x20, size 0x4
    unsigned char IconType; // offset 0x24, size 0x1
    class vec3 balloonPos; // offset 0x28, size 0xC
    float balloonRad; // offset 0x34, size 0x4
    class ModelInstanceAsset balloonModel; // offset 0x40, size 0x40
    class uid balloonAnimSet; // offset 0x80, size 0x8
    class uid DugHouseBounceAnim; // offset 0x88, size 0x8
    class uid RussellHouseBounceAnim; // offset 0x90, size 0x8
    class uid CarlHouseBounceAnim; // offset 0x98, size 0x8
    class LinkAsset EventLinksNew; // offset 0xA0, size 0x8
};
// total size: 0xA0
class zKevinSpringboardAsset : public InteractionUpWithIcons {
    // Members
    class Matrix43POD field; // offset 0x20, size 0x30
    class uid kevinLookDir; // offset 0x50, size 0x8
    class uid russellTargetDir; // offset 0x58, size 0x8
    float influence; // offset 0x60, size 0x4
    bool ForceKevinPos; // offset 0x64, size 0x1
    bool ForceTargetPos; // offset 0x65, size 0x1
    float BounceHeight; // offset 0x68, size 0x4
    float BigBounceHeight; // offset 0x6C, size 0x4
    bool Alive; // offset 0x70, size 0x1
    class uid KevinSpringboardAnim; // offset 0x78, size 0x8
    class uid DugSpringboardAnim; // offset 0x80, size 0x8
    class uid RussellSpringboardAnim; // offset 0x88, size 0x8
    class uid CarlSpringboardAnim; // offset 0x90, size 0x8
    class LinkAsset EventLinksNew; // offset 0x98, size 0x8
};
// total size: 0x80
class zPryAsset : public InteractionUpWithIcons {
    // Members
    class Matrix43POD field; // offset 0x20, size 0x30
    class uid DirID; // offset 0x50, size 0x8
    class uid Script; // offset 0x58, size 0x8
    class uid CarlPryAnim; // offset 0x60, size 0x8
    bool Alive; // offset 0x68, size 0x1
    bool OneShot; // offset 0x69, size 0x1
    class LinkAsset EventLinksNew; // offset 0x6C, size 0x8
};
// total size: 0x120
class zDugLeverAsset : public InteractionUpWithIcons {
    // Members
    class vec3 leverPosition; // offset 0x1C, size 0xC
    class Rotation3 leverOrientation; // offset 0x28, size 0xC
    class ModelInstanceAsset leverModel; // offset 0x40, size 0x40
    class vec3 Scale; // offset 0x80, size 0xC
    class vec3 casingPosition; // offset 0x8C, size 0xC
    class Rotation3 casingOrientation; // offset 0x98, size 0xC
    class ModelInstanceAsset casingModel; // offset 0xB0, size 0x40
    class vec3 casingScale; // offset 0xF0, size 0xC
    class uid dugLeverAnim; // offset 0x100, size 0x8
    bool Alive; // offset 0x108, size 0x1
    class LinkAsset EventLinksNew; // offset 0x10C, size 0x8
};
// total size: 0x210
class zCrankAsset : public InteractionUpWithIcons {
    // Members
    class Matrix43POD fieldA; // offset 0x20, size 0x30
    class Matrix43POD fieldB; // offset 0x50, size 0x30
    class SoundBankSource SoundThud; // offset 0x80, size 0xC
    bool NoPlat; // offset 0x8C, size 0x1
    bool ZPlat; // offset 0x8D, size 0x1
    bool NoTilt; // offset 0x8E, size 0x1
    bool FieldAFixed; // offset 0x8F, size 0x1
    bool FieldBFixed; // offset 0x90, size 0x1
    bool Dual; // offset 0x91, size 0x1
    bool CarlAllowed; // offset 0x92, size 0x1
    bool RussellAllowed; // offset 0x93, size 0x1
    bool DugAllowed; // offset 0x94, size 0x1
    bool Alive; // offset 0x95, size 0x1
    bool direction; // offset 0x96, size 0x1
    float CrankSpeed; // offset 0x98, size 0x4
    float UncrankSpeed; // offset 0x9C, size 0x4
    float MaxNoTiltHeight; // offset 0xA0, size 0x4
    float Height; // offset 0xA4, size 0x4
    class uid DirIDA; // offset 0xA8, size 0x8
    class uid DirIDB; // offset 0xB0, size 0x8
    unsigned char PlatformAxis; // offset 0xB8, size 0x1
    unsigned char crankAAxis; // offset 0xB9, size 0x1
    unsigned char crankBAxis; // offset 0xBA, size 0x1
    class uid CarlCrankAnim; // offset 0xC0, size 0x8
    class uid RussellCrankAnim; // offset 0xC8, size 0x8
    class uid DugCrankAnim; // offset 0xD0, size 0x8
    class vec3 firstCrankPosition; // offset 0xD8, size 0xC
    class Rotation3 firstCrankOrientation; // offset 0xE4, size 0xC
    class ModelInstanceAsset firstCrankModel; // offset 0xF0, size 0x40
    class vec3 secondCrankPosition; // offset 0x130, size 0xC
    class Rotation3 secondCrankOrientation; // offset 0x13C, size 0xC
    class ModelInstanceAsset secondCrankModel; // offset 0x150, size 0x40
    class vec3 platformPosition; // offset 0x190, size 0xC
    class Rotation3 platformOrientation; // offset 0x19C, size 0xC
    class ModelInstanceAsset platformModel; // offset 0x1B0, size 0x40
    class vec3 Scale; // offset 0x1F0, size 0xC
    class LinkAsset EventLinksNew; // offset 0x1FC, size 0x8
};
// total size: 0x80
class zRopeCutAsset : public InteractionUpWithIcons {
    // Members
    class Matrix43POD field; // offset 0x20, size 0x30
    class vec3 ropeFocus; // offset 0x50, size 0xC
    class uid Script; // offset 0x60, size 0x8
    class uid RussellRopeCutAnim; // offset 0x68, size 0x8
    bool Alive; // offset 0x70, size 0x1
    class LinkAsset EventLinksNew; // offset 0x74, size 0x8
};
// total size: 0xF0
class zHitButtonAsset : public xBaseScene {
    // Members
    class Rotation3 rot; // offset 0x10, size 0xC
    class vec3 pos; // offset 0x1C, size 0xC
    class ModelInstanceAsset modelInstance; // offset 0x30, size 0x40
    class ModelInstanceAsset modelInstance2; // offset 0x70, size 0x40
    class vec3 Scale; // offset 0xB0, size 0xC
    class LinkAsset EventLinksNew; // offset 0xBC, size 0x8
    class @class __anon; // offset 0xC8, size 0x8
    class Spin_Type Spin; // offset 0xC8, size 0x1
    class SpinWheel_Type SpinWheel; // offset 0xC8, size 0x4
    class Hammer_Type Hammer; // offset 0xC8, size 0x1
    class Puck_Type Puck; // offset 0xC8, size 0x1
    class HammerStrength_Type HammerStrength; // offset 0xC8, size 0x8
    unsigned char ButtonType; // offset 0xD0, size 0x1
    float Distance; // offset 0xD4, size 0x4
    unsigned char LocalAxis; // offset 0xD8, size 0x1
    bool DefaultOn; // offset 0xD9, size 0x1
    float ResetTime; // offset 0xDC, size 0x4
    bool OnBasic; // offset 0xE0, size 0x1
    bool OnSpongebuff; // offset 0xE1, size 0x1
    bool OnSidekick; // offset 0xE2, size 0x1
};
// total size: 0x8
class @class {
    // Members
    class Spin_Type Spin; // offset 0x0, size 0x1
    class SpinWheel_Type SpinWheel; // offset 0x0, size 0x4
    class Hammer_Type Hammer; // offset 0x0, size 0x1
    class Puck_Type Puck; // offset 0x0, size 0x1
    class HammerStrength_Type HammerStrength; // offset 0x0, size 0x8
};
// total size: 0x1
class Spin_Type {};
// total size: 0x4
class SpinWheel_Type {
    // Members
    float timeToFullyWind; // offset 0x0, size 0x4
};
// total size: 0x1
class Hammer_Type {};
// total size: 0x1
class Puck_Type {};
// total size: 0x8
class HammerStrength_Type {
    // Members
    class uid AnimationSetID; // offset 0x0, size 0x8
};
// total size: 0x110
class zTrampolineAsset : public xEntAsset {
    // Members
    float MinBounce; // offset 0xF8, size 0x4
    float MaxBounce; // offset 0xFC, size 0x4
    class LinkAsset EventLinksNew; // offset 0x100, size 0x8
};
// total size: 0xA0
class zPuckReflectorAsset : public xBaseScene {
    // Members
    class Rotation3 rot; // offset 0x10, size 0xC
    class vec3 pos; // offset 0x1C, size 0xC
    class ModelInstanceAsset modelInstance; // offset 0x30, size 0x40
    class vec3 Scale; // offset 0x70, size 0xC
    class uid reflectTarget; // offset 0x80, size 0x8
    class vec3 reflectDirection; // offset 0x88, size 0xC
    float yawRange; // offset 0x94, size 0x4
    class LinkAsset EventLinksNew; // offset 0x98, size 0x8
};
// total size: 0xA0
class zSpinnerAsset : public xBaseScene {
    // Members
    class Rotation3 orientation; // offset 0x10, size 0xC
    class vec3 pos; // offset 0x1C, size 0xC
    class ModelInstanceAsset modelInstance; // offset 0x30, size 0x40
    class vec3 Scale; // offset 0x70, size 0xC
    class uid AnimationSetID; // offset 0x80, size 0x8
    float damageAmount; // offset 0x88, size 0x4
    float waitTime; // offset 0x8C, size 0x4
    int numSpinCyclesPerAttack; // offset 0x90, size 0x4
    class LinkAsset EventLinksNew; // offset 0x94, size 0x8
};
// total size: 0xC0
class zHammerAsset : public xBaseScene {
    // Members
    class uid AnimationSetID; // offset 0x10, size 0x8
    class RenderedPhysicsModelAsset rpmAsset; // offset 0x20, size 0x70
    class vec3 Scale; // offset 0x90, size 0xC
    float strikeDistance; // offset 0x9C, size 0x4
    bool startOn; // offset 0xA0, size 0x1
    float waitTime; // offset 0xA4, size 0x4
    bool GoTransparent; // offset 0xA8, size 0x1
    class LinkAsset EventLinksNew; // offset 0xAC, size 0x8
};
// total size: 0xA0
class zRubberBandAsset : public xBaseScene {
    // Members
    class vec3 endPos1; // offset 0x10, size 0xC
    class vec3 endPos2; // offset 0x1C, size 0xC
    class uid modelUID; // offset 0x28, size 0x8
    class uid geom; // offset 0x30, size 0x8
    float maxDist; // offset 0x38, size 0x4
    float yawRange; // offset 0x3C, size 0x4
    class @class puckLaunchUnion; // offset 0x40, size 0x4
    unsigned char puckLaunchOption; // offset 0x44, size 0x1
    class @class bombLaunchUnion; // offset 0x48, size 0x4
    unsigned char bombLaunchOption; // offset 0x4C, size 0x1
    float playerKnockbackSpeed; // offset 0x50, size 0x4
    float playerKnockbackY; // offset 0x54, size 0x4
    float npcKnockbackSpeed; // offset 0x58, size 0x4
    unsigned int shadowColor; // offset 0x5C, size 0x4
    float shadowMaxDepth; // offset 0x60, size 0x4
    float shadowStartDepth; // offset 0x64, size 0x4
    unsigned int shadowMinBlur; // offset 0x68, size 0x4
    unsigned int shadowMaxBlur; // offset 0x6C, size 0x4
    class SoundBankSource soundStretchOut; // offset 0x70, size 0xC
    class SoundBankSource soundStretchReturn; // offset 0x7C, size 0xC
    class SoundBankSource soundSnapReturn; // offset 0x88, size 0xC
    class LinkAsset EventLinksNew; // offset 0x94, size 0x8
};
// total size: 0x4
class @class {
    // Members
    class _FromAsset FromAsset; // offset 0x0, size 0x1
    class _Custom Custom; // offset 0x0, size 0x4
};
// total size: 0x1
class _FromAsset {};
// total size: 0x4
class _Custom {
    // Members
    float speedValue; // offset 0x0, size 0x4
};
// total size: 0xA0
class zFountainAsset : public xBaseScene {
    // Members
    class Rotation3 rot; // offset 0x10, size 0xC
    class vec3 pos; // offset 0x1C, size 0xC
    class ModelInstanceAsset modelInstance; // offset 0x30, size 0x40
    class vec3 Scale; // offset 0x70, size 0xC
    bool defaultOn; // offset 0x7C, size 0x1
    class uid FXSpawnID; // offset 0x80, size 0x8
    float Radius; // offset 0x88, size 0x4
    unsigned char FacingType; // offset 0x8C, size 0x1
    class @class __anon; // offset 0x8D, size 0x1
    class OrientationFacing_Type Orientation; // offset 0x8D, size 0x1
    class AwayFromCenterFacing_Type AwayFromCenter; // offset 0x8D, size 0x1
    class LinkAsset EventLinksNew; // offset 0x90, size 0x8
};
// total size: 0x1
class @class {
    // Members
    class OrientationFacing_Type Orientation; // offset 0x0, size 0x1
    class AwayFromCenterFacing_Type AwayFromCenter; // offset 0x0, size 0x1
};
// total size: 0x1
class OrientationFacing_Type {
    // Members
    bool FlipOrientationFacing; // offset 0x0, size 0x1
};
// total size: 0x1
class AwayFromCenterFacing_Type {};
// total size: 0xE0
class zTikiAsset : public xBaseScene {
    // Members
    class Rotation3 Orientation; // offset 0x10, size 0xC
    class vec3 Pos; // offset 0x1C, size 0xC
    class vec3 Scale; // offset 0x28, size 0xC
    class ModelInstanceAsset modelInstance; // offset 0x40, size 0x40
    enum TikiType type; // offset 0x80, size 0x4
    bool hover; // offset 0x84, size 0x1
    float distanceActivation; // offset 0x88, size 0x4
    float distanceExplosionActivation; // offset 0x8C, size 0x4
    float explosionCountdownFromProximity; // offset 0x90, size 0x4
    class uid LandSoundFX; // offset 0x98, size 0x8
    class uid collectibles; // offset 0xA0, size 0x8
    class uid collectiblesHit; // offset 0xA8, size 0x8
    class uid collectiblesPlankton; // offset 0xB0, size 0x8
    class uid collectiblesPlanktonHit; // offset 0xB8, size 0x8
    class uid destructible; // offset 0xC0, size 0x8
    class uid Animations; // offset 0xC8, size 0x8
    class LinkAsset EventLinksNew; // offset 0xD0, size 0x8
};
enum TikiType {
    Regular = 0,
    Explosive = 1,
    Hover = 2,
    Hint = 3,
    Bonus = 4,
    Fluid = 5,
    END_TikiTypeENUM = 6,
};
// total size: 0xA0
class zBungeeBallAsset : public xBaseScene {
    // Members
    class ModelInstanceAsset BallModel; // offset 0x10, size 0x40
    class vec3 Pos; // offset 0x50, size 0xC
    class Rotation3 Orientation; // offset 0x5C, size 0xC
    class uid PopVFX; // offset 0x68, size 0x8
    class SoundBankSource InflateSFX; // offset 0x70, size 0xC
    float MaxStretchDistance; // offset 0x7C, size 0x4
    float MaxTime; // offset 0x80, size 0x4
    class __BallTargets__ BallTargets; // offset 0x84, size 0x8
    float LimitDirection; // offset 0x8C, size 0x4
    float LimitRange; // offset 0x90, size 0x4
    class LinkAsset EventLinksNew; // offset 0x94, size 0x8
};
// total size: 0x8
class __BallTargets__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x90
class zInflatablePlatformAsset : public xBaseScene {
    // Members
    class ModelInstanceAsset Model; // offset 0x10, size 0x40
    class vec3 Pos; // offset 0x50, size 0xC
    class Rotation3 Orientation; // offset 0x5C, size 0xC
    class __Control__ Control; // offset 0x68, size 0x18
    class LinkAsset EventLinksNew; // offset 0x80, size 0x8
};
// total size: 0x18
class __Control__ {
    // Members
    enum eControlTypes type; // offset 0x0, size 0x4
    class @class u; // offset 0x4, size 0x14
};
enum eControlTypes {
    EventControlType = 0,
    KeyframeControlType = 1,
    END_eControlTypesENUM = 2,
};
// total size: 0x14
class @class {
    // Members
    class EventControl _EventControlType; // offset 0x0, size 0xC
    class KeyframeControl _KeyframeControlType; // offset 0x0, size 0x14
};
// total size: 0xC
class EventControl {
    // Members
    class vec3 Scale; // offset 0x0, size 0xC
};
// total size: 0x14
class KeyframeControl {
    // Members
    class __ScaleSequence__ ScaleSequence; // offset 0x0, size 0x8
    float InitialSpeed; // offset 0x8, size 0x4
    bool InitiallyMoving; // offset 0xC, size 0x1
    bool ReverseAtEnd; // offset 0xD, size 0x1
    bool Loop; // offset 0xE, size 0x1
    bool FluidActivated; // offset 0xF, size 0x1
    float FluidActivationTime; // offset 0x10, size 0x4
};
// total size: 0x8
class __ScaleSequence__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x80
class zWaterWheelAsset : public xBaseScene {
    // Members
    class ModelInstanceAsset Model; // offset 0x10, size 0x40
    class vec3 Pos; // offset 0x50, size 0xC
    class Rotation3 Orientation; // offset 0x5C, size 0xC
    unsigned char SpinsToActivate; // offset 0x68, size 0x1
    class LinkAsset EventLinksNew; // offset 0x6C, size 0x8
};
// total size: 0x58
class zWaterAsset : public InteractionUP {
    // Members
    bool Current; // offset 0x10, size 0x1
    class __triggers__ triggers; // offset 0x14, size 0x8
    float Strength; // offset 0x1C, size 0x4
    class uid DirID; // offset 0x20, size 0x8
    bool Alive; // offset 0x28, size 0x1
    class vec3 middle; // offset 0x2C, size 0xC
    class uid DugSwimAnim; // offset 0x38, size 0x8
    class uid RussellSwimAnim; // offset 0x40, size 0x8
    class uid CarlSwimAnim; // offset 0x48, size 0x8
    class LinkAsset EventLinksNew; // offset 0x50, size 0x8
};
// total size: 0x30
class zCurrentAsset : public InteractionUP {
    // Members
    bool Alive; // offset 0x10, size 0x1
    float Strength; // offset 0x14, size 0x4
    class uid DirID; // offset 0x18, size 0x8
    class __triggers__ triggers; // offset 0x20, size 0x8
    class LinkAsset EventLinksNew; // offset 0x28, size 0x8
};
// total size: 0x38
class zWhirlpoolAsset : public InteractionUP {
    // Members
    class vec3 WhirlPosition; // offset 0x10, size 0xC
    float Strength; // offset 0x1C, size 0x4
    float Radius; // offset 0x20, size 0x4
    float SpinSpeed; // offset 0x24, size 0x4
    bool Clockwise; // offset 0x28, size 0x1
    bool Alive; // offset 0x29, size 0x1
    class LinkAsset EventLinksNew; // offset 0x2C, size 0x8
};
// total size: 0x70
class zSinkingSurfaceAsset : public InteractionUP {
    // Members
    class __triggers__ triggers; // offset 0x10, size 0x8
    bool CanJump; // offset 0x18, size 0x1
    float JumpSpeed; // offset 0x1C, size 0x4
    float JumpTimerMax; // offset 0x20, size 0x4
    unsigned char SurfaceType; // offset 0x24, size 0x1
    class @class __anon; // offset 0x28, size 0x8
    class ObjectSurface_Type Object; // offset 0x28, size 0x8
    class PositionSurface_Type Position; // offset 0x28, size 0x8
    float SinkingRate; // offset 0x30, size 0x4
    float SurfaceWalkingSpeed; // offset 0x34, size 0x4
    float SubmergedWalkingSpeed; // offset 0x38, size 0x4
    bool Alive; // offset 0x3C, size 0x1
    unsigned char DeathType; // offset 0x3D, size 0x1
    class @class __anon; // offset 0x40, size 0x4
    class CharacterHeight_Type Character; // offset 0x40, size 0x4
    class SpecifiedDepth_Type Specified; // offset 0x40, size 0x4
    class uid DugSinkingAnim; // offset 0x48, size 0x8
    class uid RussellSinkingAnim; // offset 0x50, size 0x8
    class uid CarlSinkingAnim; // offset 0x58, size 0x8
    class uid KevinSinkingAnim; // offset 0x60, size 0x8
    class LinkAsset EventLinksNew; // offset 0x68, size 0x8
};
// total size: 0x8
class @class {
    // Members
    class ObjectSurface_Type Object; // offset 0x0, size 0x8
    class PositionSurface_Type Position; // offset 0x0, size 0x8
};
// total size: 0x8
class ObjectSurface_Type {
    // Members
    class uid SurfaceEntity; // offset 0x0, size 0x8
};
// total size: 0x8
class PositionSurface_Type {
    // Members
    class uid PositionDirWidget; // offset 0x0, size 0x8
};
// total size: 0x4
class @class {
    // Members
    class CharacterHeight_Type Character; // offset 0x0, size 0x4
    class SpecifiedDepth_Type Specified; // offset 0x0, size 0x4
};
// total size: 0x4
class CharacterHeight_Type {
    // Members
    float HiddenDeathDepth; // offset 0x0, size 0x4
};
// total size: 0x4
class SpecifiedDepth_Type {
    // Members
    float DeathDepth; // offset 0x0, size 0x4
};
// total size: 0x60
class zLedgeShimmyAsset : public InteractionUpWithIcons {
    // Members
    class __triggers__ triggers; // offset 0x1C, size 0x8
    float ShimmySpeed; // offset 0x24, size 0x4
    class MinThreshold_Type MinThreshold; // offset 0x28, size 0x4
    class MaxThreshold_Type MaxThreshold; // offset 0x2C, size 0x8
    float FullBalanceDistance; // offset 0x34, size 0x4
    float FullBalanceTime; // offset 0x38, size 0x4
    float OffBalanceDuration; // offset 0x3C, size 0x4
    int BalanceNumButtonPress; // offset 0x40, size 0x4
    class uid Ledge; // offset 0x48, size 0x8
    class uid RussellShimmyAnim; // offset 0x50, size 0x8
    class LinkAsset EventLinksNew; // offset 0x58, size 0x8
};
// total size: 0x4
class MinThreshold_Type {
    // Members
    float MinProbability; // offset 0x0, size 0x4
};
// total size: 0x8
class MaxThreshold_Type {
    // Members
    float MaxSpeed; // offset 0x0, size 0x4
    float MaxProbability; // offset 0x4, size 0x4
};
// total size: 0x60
class zSlopeAsset : public InteractionUP {
    // Members
    class __triggers__ triggers; // offset 0x10, size 0x8
    class uid SlopeCurve; // offset 0x18, size 0x8
    class uid AICurve; // offset 0x20, size 0x8
    float SlideSpeed; // offset 0x28, size 0x4
    float MoveSpeed; // offset 0x2C, size 0x4
    float MoveAccel; // offset 0x30, size 0x4
    bool Alive; // offset 0x34, size 0x1
    class uid DugSlideAnim; // offset 0x38, size 0x8
    class uid RussellSlideAnim; // offset 0x40, size 0x8
    class uid CarlSlideAnim; // offset 0x48, size 0x8
    class uid KevinSlideAnim; // offset 0x50, size 0x8
    class LinkAsset EventLinksNew; // offset 0x58, size 0x8
};
// total size: 0x90
class zBugSpawnerAsset : public xBaseScene {
    // Members
    class RenderedPhysicsModelAsset renderedPhysicsModel; // offset 0x10, size 0x70
    class __bugs__ bugs; // offset 0x80, size 0x8
    class LinkAsset EventLinksNew; // offset 0x88, size 0x8
};
// total size: 0x8
class __bugs__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x30
class NavLink : public xBaseScene {
    // Members
    class uid Start; // offset 0x10, size 0x8
    class uid End; // offset 0x18, size 0x8
    unsigned int Flags; // offset 0x20, size 0x4
    class LinkAsset EventLinksNew; // offset 0x24, size 0x8
};
// total size: 0x18
class WallNetGroup : public xBaseScene {
    // Members
    class __WallNets__ WallNets; // offset 0x10, size 0x8
};
// total size: 0x8
class __WallNets__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0xD0
class zBranchSwitchAsset : public xBaseScene {
    // Members
    class ModelInstanceAsset ModelInstance; // offset 0x10, size 0x40
    class vec3 Pos; // offset 0x50, size 0xC
    class Rotation3 OriginalOrientation; // offset 0x5C, size 0xC
    class Rotation3 LightBendOrientation; // offset 0x68, size 0xC
    class Rotation3 HeavyBendOrientation; // offset 0x74, size 0xC
    class Rotation3 MaxBendOrientation; // offset 0x80, size 0xC
    class Rotation3 SnapOrientation; // offset 0x8C, size 0xC
    float MaxBendTimer; // offset 0x98, size 0x4
    float BendSpeed; // offset 0x9C, size 0x4
    float RestoreSpeed; // offset 0xA0, size 0x4
    class SoundBankSource SoundBend; // offset 0xA4, size 0xC
    class SoundBankSource SoundRestore; // offset 0xB0, size 0xC
    class SoundBankSource SoundSnap; // offset 0xBC, size 0xC
    class LinkAsset EventLinksNew; // offset 0xC8, size 0x8
};
// total size: 0x48
class BehaviorTree {
    // Members
    class myUid id; // offset 0x0, size 0x8
    class __sequenceNodes__ sequenceNodes; // offset 0x8, size 0x8
    class __selectorNodes__ selectorNodes; // offset 0x10, size 0x8
    class __parallelNodes__ parallelNodes; // offset 0x18, size 0x8
    class __decoratorNodes__ decoratorNodes; // offset 0x20, size 0x8
    class __actionNodes__ actionNodes; // offset 0x28, size 0x8
    class __conditionNodes__ conditionNodes; // offset 0x30, size 0x8
    class __referenceNodes__ referenceNodes; // offset 0x38, size 0x8
    class __edges__ edges; // offset 0x40, size 0x8
};
// total size: 0x8
class __sequenceNodes__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __selectorNodes__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __parallelNodes__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __decoratorNodes__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __actionNodes__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __conditionNodes__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __referenceNodes__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __edges__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
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
// total size: 0x38
class zFogAsset : public xBaseScene {
    // Members
    unsigned int color; // offset 0x10, size 0x4
    float start; // offset 0x14, size 0x4
    float end; // offset 0x18, size 0x4
    enum FogInterpolationMode mode; // offset 0x1C, size 0x4
    float heightStart; // offset 0x20, size 0x4
    float heightEnd; // offset 0x24, size 0x4
    enum FogInterpolationMode heightMode; // offset 0x28, size 0x4
    class LinkAsset EventLinksNew; // offset 0x2C, size 0x8
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
// total size: 0x18
class zNPCGenericPoolAsset : public xBaseScene {
    // Members
    class __npcs__ npcs; // offset 0x10, size 0x8
};
// total size: 0x8
class __npcs__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x120
class zGeyserAsset : public xBaseScene {
    // Members
    class @class uGeyserType; // offset 0x10, size 0x30
    unsigned int GeyserType; // offset 0x40, size 0x4
    class ModelInstanceAsset HoleModel; // offset 0x50, size 0x40
    class ModelInstanceAsset SpoutModel; // offset 0x90, size 0x40
    class uid SplashVFX; // offset 0xD0, size 0x8
    class uid DropletRingVFX; // offset 0xD8, size 0x8
    float Height; // offset 0xE0, size 0x4
    float RadiusMultiplier; // offset 0xE4, size 0x4
    float StayHighTime; // offset 0xE8, size 0x4
    float StayLowTime; // offset 0xEC, size 0x4
    float BoostTime; // offset 0xF0, size 0x4
    class SoundBankSource SoundIdle; // offset 0xF4, size 0xC
    class SoundBankSource SoundShooting; // offset 0x100, size 0xC
    class LinkAsset EventLinksNew; // offset 0x10C, size 0x8
};
// total size: 0x30
class @class {
    // Members
    class sSingleGeyser SingleGeyser; // offset 0x0, size 0x18
    class sDualGeyser DualGeyser; // offset 0x0, size 0x30
};
// total size: 0x18
class sSingleGeyser {
    // Members
    class vec3 BoostPoint; // offset 0x0, size 0xC
    class uid BoostPushPull; // offset 0x10, size 0x8
};
// total size: 0x30
class sDualGeyser {
    // Members
    class vec3 BlockPoint; // offset 0x0, size 0xC
    class uid BlockPushPull; // offset 0x10, size 0x8
    class vec3 BoostPoint; // offset 0x18, size 0xC
    class uid BoostPushPull; // offset 0x28, size 0x8
};
// total size: 0x20
class zUpQuestCardAsset : public xBaseScene {
    // Members
    class __QuestCard__ QuestCard; // offset 0x10, size 0x8
    class LinkAsset EventLinksNew; // offset 0x18, size 0x8
};
// total size: 0x8
class __QuestCard__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x48
class ScreenWarp : public xBaseScene {
    // Members
    unsigned short type; // offset 0x10, size 0x2
    bool infinite; // offset 0x12, size 0x1
    bool pad; // offset 0x13, size 0x1
    class vec3 location; // offset 0x14, size 0xC
    float radius; // offset 0x20, size 0x4
    float cullDistance; // offset 0x24, size 0x4
    float intensity; // offset 0x28, size 0x4
    float frequency; // offset 0x2C, size 0x4
    float duration; // offset 0x30, size 0x4
    class uid attachTo; // offset 0x38, size 0x8
    class LinkAsset EventLinksNew; // offset 0x40, size 0x8
};
// total size: 0x1C
class VehicleConfiguration {
    // Members
    unsigned int ConfigurationName; // offset 0x0, size 0x4
    class __Properties__ Properties; // offset 0x4, size 0x8
    class __Parts__ Parts; // offset 0xC, size 0x8
    class __FXs__ FXs; // offset 0x14, size 0x8
};
// total size: 0x8
class __Properties__ {
    // Members
    int type; // offset 0x0, size 0x4
    class Pointer32 v; // offset 0x4, size 0x4
};
// total size: 0x8
class __Parts__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __FXs__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x38
class Button_Masher_Widget : public xBaseScene {
    // Members
    class uid Player; // offset 0x10, size 0x8
    enum ButtonType Button; // offset 0x18, size 0x4
    float Low_Rate_Threshold; // offset 0x1C, size 0x4
    float Medium_Rate_Threshold; // offset 0x20, size 0x4
    float High_Rate_Threshold; // offset 0x24, size 0x4
    float Time_Before_Decay; // offset 0x28, size 0x4
    float Decay_Rate; // offset 0x2C, size 0x4
    class LinkAsset EventLinksNew; // offset 0x30, size 0x8
};
enum ButtonType {
    Start = 0,
    Select = 1,
    Aux1 = 2,
    Aux2 = 3,
    Up = 4,
    Right = 5,
    Down = 6,
    Left = 7,
    L1 = 8,
    L2 = 9,
    L3 = 10,
    L4 = 11,
    R1 = 12,
    R2 = 13,
    R3 = 14,
    R4 = 15,
    A = 16,
    B = 17,
    C = 18,
    D = 19,
    E = 20,
    F = 21,
    END_ButtonTypeENUM = 22,
};
// total size: 0x30
class Flythrough : public xBaseScene {
    // Members
    class uid Flythrough_asset; // offset 0x10, size 0x8
    class SoundBankSource source; // offset 0x18, size 0xC
    class LinkAsset EventLinksNew; // offset 0x24, size 0x8
};
// total size: 0x50
class Camera_Tweak : public xBaseScene {
    // Members
    int priority; // offset 0x10, size 0x4
    float time; // offset 0x14, size 0x4
    float pitch_adjust; // offset 0x18, size 0x4
    float dist_adjust; // offset 0x1C, size 0x4
    float pivot_height_adjust; // offset 0x20, size 0x4
    float fov_adjust; // offset 0x24, size 0x4
    class dirTweak dir_adjust; // offset 0x28, size 0x20
    class LinkAsset EventLinksNew; // offset 0x48, size 0x8
};
// total size: 0x20
class dirTweak {
    // Members
    float yaw; // offset 0x0, size 0x4
    float pitch; // offset 0x4, size 0x4
    class uid target; // offset 0x8, size 0x8
    float yaw_range; // offset 0x10, size 0x4
    float pitch_range; // offset 0x14, size 0x4
    float rigidity; // offset 0x18, size 0x4
};
// total size: 0x30
class zCamTweakCurveAsset : public xBaseScene {
    // Members
    int priority; // offset 0x10, size 0x4
    float time; // offset 0x14, size 0x4
    class uid Curve; // offset 0x18, size 0x8
    class __BeadValues__ BeadValues; // offset 0x20, size 0x8
    class LinkAsset EventLinksNew; // offset 0x28, size 0x8
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
// total size: 0x40
class Player_Location_Ent_Connector : public xBaseScene {
    // Members
    class __Widgets__ Widgets; // offset 0x10, size 0x8
    class uid Player; // offset 0x18, size 0x8
    bool ContinuousUpdate; // offset 0x20, size 0x1
    bool MatchOrientation; // offset 0x21, size 0x1
    bool OffsetIsLocal; // offset 0x22, size 0x1
    class vec3 VectorOffset; // offset 0x24, size 0xC
    bool UseAssetOffset; // offset 0x30, size 0x1
    unsigned char pad1; // offset 0x31, size 0x1
    unsigned char pad2; // offset 0x32, size 0x1
    unsigned char pad3; // offset 0x33, size 0x1
    class LinkAsset EventLinksNew; // offset 0x34, size 0x8
};
// total size: 0x8
class __Widgets__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x20
class Reference : public xBaseScene {
    // Members
    class uid initial; // offset 0x10, size 0x8
    class LinkAsset EventLinksNew; // offset 0x18, size 0x8
};
// total size: 0x20
class StringReference : public xBaseScene {
    // Members
    unsigned int text; // offset 0x10, size 0x4
    class LinkAsset EventLinksNew; // offset 0x14, size 0x8
};
// total size: 0x40
class Function_Generator : public xBaseScene {
    // Members
    float startCycleWidth; // offset 0x10, size 0x4
    float middleCycleWidth; // offset 0x14, size 0x4
    float endCycleWidth; // offset 0x18, size 0x4
    float startPulseWidth; // offset 0x1C, size 0x4
    float middlePulseWidth; // offset 0x20, size 0x4
    float endPulseWidth; // offset 0x24, size 0x4
    float middleTime; // offset 0x28, size 0x4
    float endTime; // offset 0x2C, size 0x4
    bool middleEnabled; // offset 0x30, size 0x1
    bool endEnabled; // offset 0x31, size 0x1
    unsigned char pad1; // offset 0x32, size 0x1
    unsigned char pad2; // offset 0x33, size 0x1
    class LinkAsset EventLinksNew; // offset 0x34, size 0x8
};
// total size: 0xE0
class UI_Text : public UIText {
    // Members
    class LinkAsset EventLinksNew; // offset 0xD8, size 0x8
};
// total size: 0xE0
class UIText : public zUI {
    // Members
    unsigned int text; // offset 0xA8, size 0x4
    class uid font; // offset 0xB0, size 0x8
    unsigned char fontSizeW; // offset 0xB8, size 0x1
    unsigned char fontSizeH; // offset 0xB9, size 0x1
    unsigned char fontSpacingX; // offset 0xBA, size 0x1
    unsigned char fontSpacingY; // offset 0xBB, size 0x1
    unsigned char textBoxInsetTop; // offset 0xBC, size 0x1
    unsigned char textBoxInsetLeft; // offset 0xBD, size 0x1
    unsigned char textBoxInsetRight; // offset 0xBE, size 0x1
    unsigned char textBoxInsetBottom; // offset 0xBF, size 0x1
    unsigned char justifyX; // offset 0xC0, size 0x1
    unsigned char justifyY; // offset 0xC1, size 0x1
    unsigned char textFlags; // offset 0xC2, size 0x1
    unsigned int shadowColor; // offset 0xC4, size 0x4
    float shadowOffsetX; // offset 0xC8, size 0x4
    float shadowOffsetY; // offset 0xCC, size 0x4
    float textScaleX; // offset 0xD0, size 0x4
    float textScaleY; // offset 0xD4, size 0x4
};
// total size: 0xB0
class zUI : public zUIMessageTarget {
    // Members
    class Matrix43POD Transform; // offset 0x10, size 0x30
    enum eAnchorType anchor; // offset 0x40, size 0x4
    class uid anchorWidget; // offset 0x48, size 0x8
    unsigned int flags; // offset 0x50, size 0x4
    enum eFocusType focusType; // offset 0x54, size 0x4
    unsigned int color; // offset 0x58, size 0x4
    class uid selectedMotion; // offset 0x60, size 0x8
    class uid unselectedMotion; // offset 0x68, size 0x8
    unsigned char brightness; // offset 0x70, size 0x1
    unsigned char pad1; // offset 0x71, size 0x1
    unsigned char pad2; // offset 0x72, size 0x1
    unsigned char pad3; // offset 0x73, size 0x1
    class uid autoMenuUp; // offset 0x78, size 0x8
    class uid autoMenuDown; // offset 0x80, size 0x8
    class uid autoMenuLeft; // offset 0x88, size 0x8
    class uid autoMenuRight; // offset 0x90, size 0x8
    enum CustomFuncType customFunction; // offset 0x98, size 0x4
    class uid customFunctionWidget; // offset 0xA0, size 0x8
};
// total size: 0x10
class zUIMessageTarget : public xBaseScene {};
enum eAnchorType {
    TopLeft = 0,
    Top = 1,
    TopRight = 2,
    Left = 3,
    Center = 4,
    Right = 5,
    BottomLeft = 6,
    Bottom = 7,
    BottomRight = 8,
    Widget = 9,
    END_eAnchorTypeENUM = 10,
};
enum eFocusType {
    FocusFirstPlayer = 1,
    FocusSecondPlayer = 2,
    FocusThirdPlayer = 4,
    FocusFourthPlayer = 8,
    FocusPrimaryPlayer = 32768,
    FocusAll = 127,
    END_FocusENUM = 128,
};
enum CustomFuncType {
    None = 0,
    ArtworkManager = 1,
    Checkpoints = 2,
    ControlOverlay = 3,
    DescriptionScroller = 4,
    ExtrasManager = 5,
    ExtrasIcon = 6,
    LevelManager = 7,
    MapScroller = 8,
    MovieManager = 9,
    BattleModeSelectSceneManager = 10,
    PauseScreenManager = 11,
    UI_HUDManager = 12,
    UI_GenericHUDManager = 13,
    JoinScreenManager = 14,
    XLIVEManager = 15,
    SysMsgManager = 16,
    BattleModeDescriptionScroller = 17,
    BattleModeSelectPlayerManager = 18,
    NumberScroller = 19,
    PowerEffect = 20,
    SceneImage = 21,
    SecretsScreenControl = 22,
    SlideShowImage = 23,
    StatBox = 24,
    StatImage = 25,
    Static = 26,
    SoundMode = 27,
    Volume_Music = 28,
    Volume_SFX = 29,
    Wireframe = 30,
    ConditionallyDisabled = 31,
    UI_OptionsManager = 32,
    END_CustomFuncTypeENUM = 33,
};
// total size: 0xF0
class UI_User_String : public UIText {
    // Members
    unsigned char hardMaxChars; // offset 0xD8, size 0x1
    unsigned char softMaxChars; // offset 0xD9, size 0x1
    class LinkAsset EventLinksNew; // offset 0xDC, size 0x8
};
// total size: 0x100
class UI_Image : public zUI {
    // Members
    class ImmediateInstanceAsset ImmediateData; // offset 0xB0, size 0x10
    class UICorners corners; // offset 0xC0, size 0x30
    class LinkAsset EventLinksNew; // offset 0xF0, size 0x8
};
// total size: 0x10
class ImmediateInstanceAsset {
    // Members
    unsigned long long immediatePrototypeID; // offset 0x0, size 0x8
    unsigned short rendCount; // offset 0x8, size 0x2
    unsigned short pad; // offset 0xA, size 0x2
    class Pointer32 rendSettings; // offset 0xC, size 0x4
};
// total size: 0x30
class UICorners {
    // Members
    class UIVertex upperLeft; // offset 0x0, size 0xC
    class UIVertex lowerLeft; // offset 0xC, size 0xC
    class UIVertex lowerRight; // offset 0x18, size 0xC
    class UIVertex upperRight; // offset 0x24, size 0xC
};
// total size: 0xC
class UIVertex {
    // Members
    float uCoordinate; // offset 0x0, size 0x4
    float vCoordinate; // offset 0x4, size 0x4
    unsigned int color; // offset 0x8, size 0x4
};
// total size: 0x100
class UI_Model : public zUI {
    // Members
    class ModelInstanceAsset ModelInstance; // offset 0xB0, size 0x40
    class uid animationList; // offset 0xF0, size 0x8
    class LinkAsset EventLinksNew; // offset 0xF8, size 0x8
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
// total size: 0xB0
class UI_Controller : public zUI {
    // Members
    class LinkAsset EventLinksNew; // offset 0xA8, size 0x8
};
// total size: 0xF0
class zScaleformAsset : public zUI {
    // Members
    class uid scaleformNG; // offset 0xA8, size 0x8
    class uid dispatcher; // offset 0xB0, size 0x8
    class uid sounds; // offset 0xB8, size 0x8
    class uid rumbleEmitter; // offset 0xC0, size 0x8
    class uid pointers; // offset 0xC8, size 0x8
    unsigned char viewnum; // offset 0xD0, size 0x1
    unsigned char renderLayer; // offset 0xD1, size 0x1
    unsigned char padInput; // offset 0xD2, size 0x1
    unsigned char pointerInput; // offset 0xD3, size 0x1
    bool stopRendering; // offset 0xD4, size 0x1
    bool ignoreGlobalStop; // offset 0xD5, size 0x1
    enum MovieType movieType; // offset 0xD8, size 0x4
    class LinkAsset EventLinksNew; // offset 0xDC, size 0x8
};
enum MovieType {
    MovieTypeNormal = 0,
    MovieTypePointers = 1,
    MovieTypeSystem = 2,
    MovieTypeLoadScreen = 3,
    MovieTypePause = 4,
    MovieTypeReticle = 5,
    END_MovieTypeENUM = 6,
};
// total size: 0x38
class UI_Motion : public xBaseAsset {
    // Members
    class LinkAsset EventLinksNew; // offset 0x10, size 0x8
    unsigned char cmdCount; // offset 0x18, size 0x1
    unsigned char in; // offset 0x19, size 0x1
    unsigned short parameterType; // offset 0x1A, size 0x2
    class uid parameterWidget; // offset 0x20, size 0x8
    unsigned int cmdSize; // offset 0x28, size 0x4
    float totalTime; // offset 0x2C, size 0x4
    float loopTime; // offset 0x30, size 0x4
    bool lockInput; // offset 0x34, size 0x1
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
// total size: 0x1F0
class HudUp : public xBaseScene {
    // Members
    unsigned int features; // offset 0x10, size 0x4
    class uid scaleformHud; // offset 0x18, size 0x8
    class __imageList__ imageList; // offset 0x20, size 0x1C8
    class LinkAsset EventLinksNew; // offset 0x1E8, size 0x8
};
// total size: 0x1C8
class __imageList__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class ImageList data[4]; // offset 0x8, size 0x1C0
};
// total size: 0x70
class ImageList {
    // Members
    class __radarArrows__ radarArrows; // offset 0x0, size 0x8
    class __radarIcons__ radarIcons; // offset 0x8, size 0x8
    class __grayPlayerRings__ grayPlayerRings; // offset 0x10, size 0x8
    class __bluePlayerRings__ bluePlayerRings; // offset 0x18, size 0x8
    class __yellowPlayerRings__ yellowPlayerRings; // offset 0x20, size 0x8
    class __redPlayerRings__ redPlayerRings; // offset 0x28, size 0x8
    class __grayObjectRings__ grayObjectRings; // offset 0x30, size 0x8
    class __blueObjectRings__ blueObjectRings; // offset 0x38, size 0x8
    class __yellowObjectRings__ yellowObjectRings; // offset 0x40, size 0x8
    class __redObjectRings__ redObjectRings; // offset 0x48, size 0x8
    class uid target; // offset 0x50, size 0x8
    class uid redTarget; // offset 0x58, size 0x8
    class uid blueArrow; // offset 0x60, size 0x8
    class uid yellowArrow; // offset 0x68, size 0x8
};
// total size: 0x8
class __radarArrows__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __radarIcons__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __grayPlayerRings__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __bluePlayerRings__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __yellowPlayerRings__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __redPlayerRings__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __grayObjectRings__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __blueObjectRings__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __yellowObjectRings__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __redObjectRings__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x20
class HudSB : public xBaseScene {
    // Members
    class uid scaleformHud; // offset 0x10, size 0x8
    class LinkAsset EventLinksNew; // offset 0x18, size 0x8
};
// total size: 0x20
class PlanktonReticle : public xBaseScene {
    // Members
    class uid scaleformReticle; // offset 0x10, size 0x8
    class LinkAsset EventLinksNew; // offset 0x18, size 0x8
};
// total size: 0x30
class TikiScreen : public xBaseScene {
    // Members
    enum eTikiScreenType type; // offset 0x10, size 0x4
    class Pointer32 headerText; // offset 0x14, size 0x4
    class __bodyText__ bodyText; // offset 0x18, size 0x8
    enum eTikiScreenImage image; // offset 0x20, size 0x4
    class LinkAsset EventLinksNew; // offset 0x24, size 0x8
};
enum eTikiScreenType {
    eTikiScreenType_TutorialTiki = 0,
    eTikiScreenType_ChallengeTiki = 1,
    eTikiScreenType_ChallengeSuccessTiki = 2,
    eTikiScreenType_ChallengeFailTiki = 3,
    END_eTikiScreenType_ENUM = 4,
};
// total size: 0x8
class __bodyText__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
enum eTikiScreenImage {
    eTikiScreenImage_None = 0,
    eTikiScreenImage_WiimoteShake = 1,
    eTikiScreenImage_WiimoteSlam = 2,
    eTikiScreenImage_NunchukShake = 3,
    eTikiScreenImage_ChallengeUnlocked = 4,
    END_eTikiScreenImage_ENUM = 5,
};
// total size: 0x20
class BuyScreen : public xBaseScene {
    // Members
    class Pointer32 text; // offset 0x10, size 0x4
    short price; // offset 0x14, size 0x2
    bool turnOffControl; // offset 0x16, size 0x1
    class LinkAsset EventLinksNew; // offset 0x18, size 0x8
};
// total size: 0x50
class LoadingScreen : public xBaseAsset {
    // Members
    class __uiElements__ uiElements; // offset 0x10, size 0x8
    class Pointer32 stringLoading; // offset 0x18, size 0x4
    class __stringHints__ stringHints; // offset 0x1C, size 0x8
    class __elements__ elements; // offset 0x24, size 0x8
    unsigned int clearColor; // offset 0x2C, size 0x4
    float delay; // offset 0x30, size 0x4
    enum AspectRatioAdjust aspectRatioAdjustment; // offset 0x34, size 0x4
    bool random; // offset 0x38, size 0x1
    bool trivia; // offset 0x39, size 0x1
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
class __stringHints__ {
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
// total size: 0x40
class Rumble : public xBaseScene {
    // Members
    float time; // offset 0x10, size 0x4
    float intensity; // offset 0x14, size 0x4
    unsigned int effectId; // offset 0x18, size 0x4
    unsigned char priority; // offset 0x1C, size 0x1
    unsigned char rumbleType; // offset 0x1D, size 0x1
    unsigned char flags; // offset 0x1E, size 0x1
    unsigned char focusType; // offset 0x1F, size 0x1
    float param1; // offset 0x20, size 0x4
    float param2; // offset 0x24, size 0x4
    class _Screen_Shake Screen_Shake; // offset 0x28, size 0x10
    class LinkAsset EventLinksNew; // offset 0x38, size 0x8
};
// total size: 0x10
class _Screen_Shake {
    // Members
    float magnitude; // offset 0x0, size 0x4
    float cycleMax; // offset 0x4, size 0x4
    float rotational_magnitude; // offset 0x8, size 0x4
    unsigned char flags; // offset 0xC, size 0x1
};
// total size: 0x40
class Rumble_Box_Emitter : public xBaseScene {
    // Members
    class uid effect; // offset 0x10, size 0x8
    class vec3 min_Corner; // offset 0x18, size 0xC
    class vec3 max_Corner; // offset 0x24, size 0xC
    unsigned char flags; // offset 0x30, size 0x1
    class LinkAsset EventLinksNew; // offset 0x34, size 0x8
};
// total size: 0x38
class Rumble_Spherical_Emitter : public xBaseScene {
    // Members
    class uid effect; // offset 0x10, size 0x8
    float radius; // offset 0x18, size 0x4
    class vec3 position; // offset 0x1C, size 0xC
    unsigned int flags; // offset 0x28, size 0x4
    class LinkAsset EventLinksNew; // offset 0x2C, size 0x8
};
// total size: 0x28
class ScreenFade : public xBaseScene {
    // Members
    unsigned int color; // offset 0x10, size 0x4
    float Fade_down_time; // offset 0x14, size 0x4
    float Wait_time; // offset 0x18, size 0x4
    float Fade_up_time; // offset 0x1C, size 0x4
    class LinkAsset EventLinksNew; // offset 0x20, size 0x8
};
// total size: 0x38
class Light_Effect_Flicker : public xBaseScene {
    // Members
    class FloatColorRGBA flickerRange; // offset 0x10, size 0x10
    float flickerTime; // offset 0x20, size 0x4
    float randomFlickerTime; // offset 0x24, size 0x4
    float blendTime; // offset 0x28, size 0x4
    unsigned int flags; // offset 0x2C, size 0x4
    class LinkAsset EventLinksNew; // offset 0x30, size 0x8
};
// total size: 0x10
class FloatColorRGBA {
    // Members
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
};
// total size: 0x40
class Light_Effect_Strobe : public xBaseScene {
    // Members
    class FloatColorRGBA minColor; // offset 0x10, size 0x10
    float fadeUpTime; // offset 0x20, size 0x4
    float fadeDownTime; // offset 0x24, size 0x4
    float timeAtMax; // offset 0x28, size 0x4
    float timeAtMin; // offset 0x2C, size 0x4
    float randomTimeAtMax; // offset 0x30, size 0x4
    float randomTimeAtMin; // offset 0x34, size 0x4
    class LinkAsset EventLinksNew; // offset 0x38, size 0x8
};
// total size: 0x20
class NPCGroupAsset : public xBaseAsset {
    // Members
    class __NPCs__ NPCs; // offset 0x10, size 0x8
    class LinkAsset EventLinksNew; // offset 0x18, size 0x8
};
// total size: 0x8
class __NPCs__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x50
class transition_time : public xBaseScene {
    // Members
    class LinkAsset EventLinksNew; // offset 0x10, size 0x8
    unsigned int mVersion; // offset 0x18, size 0x4
    enum TransType mType; // offset 0x1C, size 0x4
    unsigned int mFlags; // offset 0x20, size 0x4
    class @class __anon; // offset 0x28, size 0x8
    class Follow_Type Follow; // offset 0x28, size 0x1
    class Destination_Type Destination; // offset 0x28, size 0x8
    enum eDestCamTypes destType; // offset 0x30, size 0x4
    class @class TransitionType_data; // offset 0x38, size 0x18
};
enum TransType {
    Time = 0,
    Curve = 1,
    END_TransTypeENUM = 2,
};
// total size: 0x8
class @class {
    // Members
    class Follow_Type Follow; // offset 0x0, size 0x1
    class Destination_Type Destination; // offset 0x0, size 0x8
};
// total size: 0x1
class Follow_Type {};
// total size: 0x8
class Destination_Type {
    // Members
    class uid mDestCameraID; // offset 0x0, size 0x8
};
enum eDestCamTypes {
    eDestCamTypeDestination = 0,
    eDestCamTypeFollow = 1,
    END_eDestCamTypeENUM = 2,
};
// total size: 0x18
class @class {
    // Members
    class _Time Time; // offset 0x0, size 0xC
    class _CurveTransition CurveTransition; // offset 0x0, size 0x18
};
// total size: 0xC
class _Time {
    // Members
    float mTime; // offset 0x0, size 0x4
    float mAccel; // offset 0x4, size 0x4
    float mDecel; // offset 0x8, size 0x4
};
// total size: 0x18
class _CurveTransition {
    // Members
    class uid mSrcCameraID; // offset 0x0, size 0x8
    class uid mCurveID; // offset 0x8, size 0x8
    class uid mTriggerID; // offset 0x10, size 0x8
};
// total size: 0x60
class binary_poi : public xBaseScene {
    // Members
    unsigned short pad1; // offset 0x10, size 0x2
    unsigned short pad2; // offset 0x12, size 0x2
    class uid mTargetID; // offset 0x18, size 0x8
    float mTargetMarginAngle; // offset 0x20, size 0x4
    float mTargetRadiusScale; // offset 0x24, size 0x4
    float mDistanceScale; // offset 0x28, size 0x4
    float mPhiOffset; // offset 0x2C, size 0x4
    float mYawOffset; // offset 0x30, size 0x4
    float mNearWallScale; // offset 0x34, size 0x4
    float mFarWallScale; // offset 0x38, size 0x4
    bool dofEnabled; // offset 0x3C, size 0x1
    float dofBlur; // offset 0x40, size 0x4
    float dofNearFocusPoint; // offset 0x44, size 0x4
    float dofNearFocusFalloff; // offset 0x48, size 0x4
    float dofFarFocusPoint; // offset 0x4C, size 0x4
    float dofFarFocusFalloff; // offset 0x50, size 0x4
    class LinkAsset EventLinksNew; // offset 0x54, size 0x8
};
// total size: 0x60
class zCheckpointAsset : public xBaseScene {
    // Members
    unsigned int type; // offset 0x10, size 0x4
    int index; // offset 0x14, size 0x4
    class uid triggerID; // offset 0x18, size 0x8
    class uid scriptID; // offset 0x20, size 0x8
    class __Positions__ Positions; // offset 0x28, size 0x8
    class uid HousePosition; // offset 0x30, size 0x8
    class uid house; // offset 0x38, size 0x8
    bool houseTie; // offset 0x40, size 0x1
    class uid houseTieOffPoint; // offset 0x48, size 0x8
    bool savePoint; // offset 0x50, size 0x1
    class LinkAsset EventLinksNew; // offset 0x54, size 0x8
};
// total size: 0x8
class __Positions__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x50
class Springboard : public xBaseEnt {
    // Members
    class vec3 Location; // offset 0x10, size 0xC
    class Rotation3 Orientation; // offset 0x1C, size 0xC
    class uid characterAssetsID; // offset 0x28, size 0x8
    float Adjustment; // offset 0x30, size 0x4
    bool Top; // offset 0x34, size 0x1
    unsigned char Type; // offset 0x35, size 0x1
    float Angle; // offset 0x38, size 0x4
    float AngleYaw; // offset 0x3C, size 0x4
    unsigned char Size; // offset 0x40, size 0x1
    bool isWet; // offset 0x41, size 0x1
    class LinkAsset EventLinksNew; // offset 0x44, size 0x8
};
// total size: 0x10
class xBaseEnt : public xBaseAsset {};
// total size: 0x60
class Ribbon : public xBaseScene {
    // Members
    float life; // offset 0x10, size 0x4
    unsigned char emitType; // offset 0x14, size 0x1
    class @class Emit_Data; // offset 0x18, size 0x20
    class uid entity; // offset 0x38, size 0x8
    float size; // offset 0x40, size 0x4
    bool autoCalcNorm; // offset 0x44, size 0x1
    class _uvAnim uvAnim; // offset 0x48, size 0x8
    class _uvFlipbook uvFlipbook; // offset 0x50, size 0x8
    class __curveNodes__ curveNodes; // offset 0x58, size 0x8
};
// total size: 0x20
class @class {
    // Members
    class _Fixed Fixed; // offset 0x0, size 0x20
    class _Follow Follow; // offset 0x0, size 0x1
};
// total size: 0x20
class _Fixed {
    // Members
    class vec3 velocity; // offset 0x0, size 0xC
    bool velocityWorldSpace; // offset 0xC, size 0x1
    float velConeAngle; // offset 0x10, size 0x4
    class vec3 accel; // offset 0x14, size 0xC
};
// total size: 0x1
class _Follow {};
// total size: 0x8
class _uvAnim {
    // Members
    float U; // offset 0x0, size 0x4
    float V; // offset 0x4, size 0x4
};
// total size: 0x8
class _uvFlipbook {
    // Members
    float fps; // offset 0x0, size 0x4
    unsigned short rows; // offset 0x4, size 0x2
    unsigned short cols; // offset 0x6, size 0x2
};
// total size: 0x20
class FMVReference : public xBaseScene {
    // Members
    enum FMVIdentifier fmv; // offset 0x10, size 0x4
    class LinkAsset EventLinksNew; // offset 0x14, size 0x8
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
// total size: 0x38
class Catapult : public xBaseScene {
    // Members
    class uid DrivenBy; // offset 0x10, size 0x8
    float TargetDistance; // offset 0x18, size 0x4
    float TargetHeight; // offset 0x1C, size 0x4
    float TargetDrift; // offset 0x20, size 0x4
    float ArcHeight; // offset 0x24, size 0x4
    float ThrowTime; // offset 0x28, size 0x4
    class LinkAsset EventLinksNew; // offset 0x2C, size 0x8
};
// total size: 0x28
class zUIFlashOnScreenTextAsset : public xBaseScene {
    // Members
    class Pointer32 Text; // offset 0x10, size 0x4
    class uid scaleformPlayer; // offset 0x18, size 0x8
    class LinkAsset EventLinksNew; // offset 0x20, size 0x8
};
// total size: 0x20
class zUIHintBoxAsset : public xBaseScene {
    // Members
    class Pointer32 Text; // offset 0x10, size 0x4
    class LinkAsset EventLinksNew; // offset 0x14, size 0x8
};
// total size: 0x1F0
class FXParticleSystem : public xBaseScene {
    // Members
    class _ParticleData ParticleData; // offset 0x10, size 0x160
    class _ParticleEmitterParameters ParticleEmitterParameters; // offset 0x170, size 0x80
};
// total size: 0x160
class _ParticleData {
    // Members
    class _Emit Emit; // offset 0x0, size 0x58
    class _Texture Texture; // offset 0x58, size 0x30
    class _Update Update; // offset 0x88, size 0xD8
};
// total size: 0x58
class _Emit {
    // Members
    bool Burst; // offset 0x0, size 0x1
    class CurveWithMinMax EmitRate; // offset 0x8, size 0x10
    float EmissionLifetime; // offset 0x18, size 0x4
    class _Lifetime Lifetime; // offset 0x1C, size 0x8
    float CameraOffsetZ; // offset 0x24, size 0x4
    bool CameraProximityFade; // offset 0x28, size 0x1
    enum RotationType Rotation; // offset 0x2C, size 0x4
    class _Axis Axis; // offset 0x30, size 0x10
    class __DirType__ DirType; // offset 0x40, size 0xC
    class _Velocity Velocity; // offset 0x4C, size 0x8
};
// total size: 0x10
class CurveWithMinMax {
    // Members
    class uid Curve; // offset 0x0, size 0x8
    float Min; // offset 0x8, size 0x4
    float Max; // offset 0xC, size 0x4
};
// total size: 0x8
class _Lifetime {
    // Members
    float Base; // offset 0x0, size 0x4
    float Variance; // offset 0x4, size 0x4
};
enum RotationType {
    RANDOM_INITIAL = 0,
    NO_INITIAL_CHANGE = 1,
    ALONG_INITIAL_TANGENT = 2,
    END_RotationTypeENUM = 3,
};
// total size: 0x10
class _Axis {
    // Members
    class vec3 Direction; // offset 0x0, size 0xC
    bool WorldSpace; // offset 0xC, size 0x1
};
// total size: 0xC
class __DirType__ {
    // Members
    enum DirectionType type; // offset 0x0, size 0x4
    class @class u; // offset 0x4, size 0x8
};
enum DirectionType {
    ALONG_AXIS = 0,
    AWAY_AXIS = 1,
    AROUND_AXIS = 2,
    END_DirectionTypeENUM = 3,
};
// total size: 0x8
class @class {
    // Members
    class AlongAxisData _ALONG_AXIS; // offset 0x0, size 0x8
    class NoneStruct _AWAY_AXIS; // offset 0x0, size 0x1
    class NoneStruct _AROUND_AXIS; // offset 0x0, size 0x1
};
// total size: 0x8
class AlongAxisData {
    // Members
    float velHAngle; // offset 0x0, size 0x4
    float velWAngle; // offset 0x4, size 0x4
};
// total size: 0x8
class _Velocity {
    // Members
    float Magnitude; // offset 0x0, size 0x4
    float Variance; // offset 0x4, size 0x4
};
// total size: 0x30
class _Texture {
    // Members
    class _Animation Animation; // offset 0x0, size 0x30
};
// total size: 0x30
class _Animation {
    // Members
    class _FrameData FrameData; // offset 0x0, size 0x20
    bool RandomStart; // offset 0x20, size 0x1
    class __TextureData__ TextureData; // offset 0x24, size 0xC
};
// total size: 0x20
class _FrameData {
    // Members
    class uid VisualEffect; // offset 0x0, size 0x8
    class uid OverrideTexture; // offset 0x8, size 0x8
    unsigned int Rows; // offset 0x10, size 0x4
    unsigned int Columns; // offset 0x14, size 0x4
    bool ColumnFirst; // offset 0x18, size 0x1
    float FPS; // offset 0x1C, size 0x4
};
// total size: 0xC
class __TextureData__ {
    // Members
    enum TextureDataType type; // offset 0x0, size 0x4
    class @class u; // offset 0x4, size 0x8
};
enum TextureDataType {
    FullTexture = 0,
    NoAnimation = 1,
    UseCells = 2,
    UseCoordList = 3,
    END_TextureDataTypeENUM = 4,
};
// total size: 0x8
class @class {
    // Members
    class NoneStruct _FullTexture; // offset 0x0, size 0x1
    class NoneStruct _NoAnimation; // offset 0x0, size 0x1
    class CellTextureData _UseCells; // offset 0x0, size 0x8
    class CoordListTextureData _UseCoordList; // offset 0x0, size 0x8
};
// total size: 0x8
class CellTextureData {
    // Members
    unsigned int StartFrame; // offset 0x0, size 0x4
    unsigned int EndFrame; // offset 0x4, size 0x4
};
// total size: 0x8
class CoordListTextureData {
    // Members
    class __UVCoords__ UVCoords; // offset 0x0, size 0x8
};
// total size: 0x8
class __UVCoords__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0xD8
class _Update {
    // Members
    class _Motion Motion; // offset 0x0, size 0x70
    class _Size Size; // offset 0x70, size 0x28
    class _Colors Colors; // offset 0x98, size 0x30
    class Reemit_TYPE Reemit; // offset 0xC8, size 0x10
};
// total size: 0x70
class _Motion {
    // Members
    class _Scale Scale; // offset 0x0, size 0x18
    float MaxVelocity; // offset 0x18, size 0x4
    class _Rotation Rotation; // offset 0x20, size 0x18
    class __AccelerationSystems__ AccelerationSystems; // offset 0x38, size 0x8
    class __TurbulenceSystems__ TurbulenceSystems; // offset 0x40, size 0x8
    class __Attractors__ Attractors; // offset 0x48, size 0x8
    class __WindSystems__ WindSystems; // offset 0x50, size 0x8
    class __VortexSystems__ VortexSystems; // offset 0x58, size 0x8
    class __CollisionSystems__ CollisionSystems; // offset 0x60, size 0x8
    class __AttachSystems__ AttachSystems; // offset 0x68, size 0x8
};
// total size: 0x18
class _Scale {
    // Members
    class _Magnitude Magnitude; // offset 0x0, size 0x10
    float MaxVariance; // offset 0x10, size 0x4
    float Variance; // offset 0x14, size 0x4
};
// total size: 0x10
class _Magnitude {
    // Members
    class uid Curve; // offset 0x0, size 0x8
    float Min; // offset 0x8, size 0x4
    float Max; // offset 0xC, size 0x4
};
// total size: 0x18
class _Rotation {
    // Members
    enum RotationUpdateType Type; // offset 0x0, size 0x4
    class CurveWithMinMax Value; // offset 0x8, size 0x10
};
enum RotationUpdateType {
    None = 0,
    ByValue = 1,
    ByAcceleration = 2,
    AlongTangent = 3,
    END_RotationUpdateTypeENUM = 4,
};
// total size: 0x8
class __AccelerationSystems__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __TurbulenceSystems__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __Attractors__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __WindSystems__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __VortexSystems__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __CollisionSystems__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __AttachSystems__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x28
class _Size {
    // Members
    class CurveWithMinMax Width; // offset 0x0, size 0x10
    class CurveWithMinMax Height; // offset 0x10, size 0x10
    float Variance; // offset 0x20, size 0x4
};
// total size: 0x30
class _Colors {
    // Members
    class CurveWithMinMax Alpha; // offset 0x0, size 0x10
    class ColorCurveWithMinMax Color; // offset 0x10, size 0x20
};
// total size: 0x20
class ColorCurveWithMinMax {
    // Members
    class uid Curve; // offset 0x0, size 0x8
    class FloatColorRGB Min; // offset 0x8, size 0xC
    class FloatColorRGB Max; // offset 0x14, size 0xC
};
// total size: 0x10
class Reemit_TYPE {
    // Members
    class uid SystemID; // offset 0x0, size 0x8
    float Percent; // offset 0x8, size 0x4
    int EmitCount; // offset 0xC, size 0x4
};
// total size: 0x80
class _ParticleEmitterParameters {
    // Members
    class CullingData Culling; // offset 0x0, size 0x8
    class volumeUnion volume_data; // offset 0x10, size 0x60
    bool EdgeVolume; // offset 0x70, size 0x1
};
// total size: 0x60
class volumeUnion {
    // Members
    enum VolumeType type; // offset 0x0, size 0x4
    class @class u; // offset 0x10, size 0x50
};
enum VolumeType {
    Point = 0,
    Sphere = 1,
    Circle = 2,
    Line = 3,
    Model = 4,
    Box = 5,
    CurveUID = 6,
    END_VolumeTypeENUM = 7,
};
// total size: 0x50
class @class {
    // Members
    class PointVolume _Point; // offset 0x0, size 0x1
    class SphereVolume _Sphere; // offset 0x0, size 0x4
    class CircleVolume _Circle; // offset 0x0, size 0x10
    class LineVolume _Line; // offset 0x0, size 0x10
    class ModelVolume _Model; // offset 0x0, size 0x50
    class BoxVolume _Box; // offset 0x0, size 0xC
    class CurveVolume _CurveUID; // offset 0x0, size 0x8
};
// total size: 0x1
class PointVolume {};
// total size: 0x4
class SphereVolume {
    // Members
    float radius; // offset 0x0, size 0x4
};
// total size: 0x10
class CircleVolume {
    // Members
    float xRadius; // offset 0x0, size 0x4
    float yRadius; // offset 0x4, size 0x4
    float arc_length; // offset 0x8, size 0x4
    float height; // offset 0xC, size 0x4
};
// total size: 0x10
class LineVolume {
    // Members
    bool cylindrical; // offset 0x0, size 0x1
    unsigned char pad1; // offset 0x1, size 0x1
    unsigned char pad2; // offset 0x2, size 0x1
    unsigned char pad3; // offset 0x3, size 0x1
    float xRadius; // offset 0x4, size 0x4
    float yRadius; // offset 0x8, size 0x4
    float length; // offset 0xC, size 0x4
};
// total size: 0x50
class ModelVolume {
    // Members
    bool VertexEmit; // offset 0x0, size 0x1
    class ModelInstanceAsset ModelInstances; // offset 0x10, size 0x40
};
// total size: 0xC
class BoxVolume {
    // Members
    class vec3 dimensions; // offset 0x0, size 0xC
};
// total size: 0x8
class CurveVolume {
    // Members
    class uid curve; // offset 0x0, size 0x8
};
// total size: 0x230
class FXObjectSystem : public xBaseScene {
    // Members
    class _ObjectData ObjectData; // offset 0x10, size 0x1A0
    class _ObjectEmitterParameters ObjectEmitterParameters; // offset 0x1B0, size 0x80
};
// total size: 0x1A0
class _ObjectData {
    // Members
    class _Emit Emit; // offset 0x0, size 0x1C
    class _Model Model; // offset 0x20, size 0x40
    class _Update Update; // offset 0x60, size 0x140
};
// total size: 0x1C
class _Emit {
    // Members
    class vec3 velDir; // offset 0x0, size 0xC
    bool velWorldSpace; // offset 0xC, size 0x1
    bool Burst; // offset 0xD, size 0x1
    float EmitRate; // offset 0x10, size 0x4
    class _Lifetime Lifetime; // offset 0x14, size 0x8
};
// total size: 0x40
class _Model {
    // Members
    class ModelInstanceAsset Model; // offset 0x0, size 0x40
};
// total size: 0x140
class _Update {
    // Members
    class _Motion Motion; // offset 0x0, size 0xA8
    class _Size Size; // offset 0xA8, size 0x50
    class _Colors Colors; // offset 0xF8, size 0x48
};
// total size: 0xA8
class _Motion {
    // Members
    class _Speed Speed; // offset 0x0, size 0x18
    class _Acceleration Acceleration; // offset 0x18, size 0x30
    class _Rotation Rotation; // offset 0x48, size 0x60
};
// total size: 0x18
class _Speed {
    // Members
    class CurveWithMinMax Magnitude; // offset 0x0, size 0x10
    float Variance; // offset 0x10, size 0x4
};
// total size: 0x30
class _Acceleration {
    // Members
    class vec3 Direction; // offset 0x0, size 0xC
    class CurveWithMinMax Magnitude; // offset 0x10, size 0x10
    bool AccelWorldSpace; // offset 0x20, size 0x1
    float Max; // offset 0x24, size 0x4
    float Gravity; // offset 0x28, size 0x4
};
// total size: 0x60
class _Rotation {
    // Members
    enum RotationUpdateType Type; // offset 0x0, size 0x4
    class CurveWithMinMaxPlusVar Yaw; // offset 0x8, size 0x18
    class CurveWithMinMaxPlusVar Pitch; // offset 0x20, size 0x18
    class CurveWithMinMaxPlusVar Roll; // offset 0x38, size 0x18
    bool UseUpVector; // offset 0x50, size 0x1
    class vec3 UpVector; // offset 0x54, size 0xC
};
enum RotationUpdateType {
    None = 0,
    ByValue = 1,
    ByAcceleration = 2,
    END_RotationUpdateTypeENUM = 3,
};
// total size: 0x18
class CurveWithMinMaxPlusVar {
    // Members
    class uid Curve; // offset 0x0, size 0x8
    float Min; // offset 0x8, size 0x4
    float Max; // offset 0xC, size 0x4
    float Variance; // offset 0x10, size 0x4
};
// total size: 0x50
class _Size {
    // Members
    class CurveWithMinMaxPlusVar Width; // offset 0x0, size 0x18
    class CurveWithMinMaxPlusVar Height; // offset 0x18, size 0x18
    class CurveWithMinMaxPlusVar Depth; // offset 0x30, size 0x18
    float Variance; // offset 0x48, size 0x4
};
// total size: 0x48
class _Colors {
    // Members
    class CurveWithMinMaxPlusVar Alpha; // offset 0x0, size 0x18
    class ColorCurveWithMinMax1Max2 Color; // offset 0x18, size 0x30
};
// total size: 0x30
class ColorCurveWithMinMax1Max2 {
    // Members
    class uid Curve; // offset 0x0, size 0x8
    class FloatColorRGB Min; // offset 0x8, size 0xC
    class FloatColorRGB Max; // offset 0x14, size 0xC
    class FloatColorRGB Max2; // offset 0x20, size 0xC
};
// total size: 0x80
class _ObjectEmitterParameters {
    // Members
    class CullingData Culling; // offset 0x0, size 0x8
    class volumeUnion volume_data; // offset 0x10, size 0x60
    bool EdgeVolume; // offset 0x70, size 0x1
};
// total size: 0x8
class RTTID_Create {
    // Members
    unsigned int tid; // offset 0x0, size 0x4
    class Entity * (* createCB)(class EntityHandleBase * handle, void * asset); // offset 0x4, size 0x4
};
// total size: 0xD0
class xBSP : public zEnt {
    // Members
    unsigned char visibilityCount : 8; // offset 0xC0, size 0x1, bit offset 0
    unsigned char prevVisibilityCount : 8; // offset 0xC1, size 0x1, bit offset 0
    bool alwaysVisible : 1; // offset 0xC2, size 0x1, bit offset 0
    bool alwaysCollide : 1; // offset 0xC2, size 0x1, bit offset 1
    int __pad__ : 14; // offset 0xC0, size 0x4, bit offset 18
    class xGroup * referenceGroup; // offset 0xC4, size 0x4
};
// total size: 0x50
class xGroup : public xOGEntity {
    // Members
    class xGroupAsset * asset; // offset 0x3C, size 0x4
    class xBase * * item; // offset 0x40, size 0x4
    int numItems; // offset 0x44, size 0x4
    int flg_group; // offset 0x48, size 0x4
};
// total size: 0x28
class CreateInfo {
    // Members
    int memSize; // offset 0x0, size 0x4
    int memAlign; // offset 0x4, size 0x4
    class ModelPrototypeEntity * protoEnt; // offset 0x8, size 0x4
    int modelCreateSize; // offset 0xC, size 0x4
    int modelCreateAlign; // offset 0x10, size 0x4
    int allParamDataBufferSize; // offset 0x14, size 0x4
    int validRenderCustomizerCount; // offset 0x18, size 0x4
    class LightKitEntity * lightKitEnt; // offset 0x1C, size 0x4
    class CreateInfo paramCargoInfo; // offset 0x20, size 0x8
};
// total size: 0x8
class CreateInfo {
    // Members
    int bufferSize; // offset 0x0, size 0x4
    int textureCount; // offset 0x4, size 0x4
};
// total size: 0xC
class StackAllocator : private StaticStackAllocator {};
// total size: 0xC
class StaticStackAllocator {
    // Members
    unsigned char * mark; // offset 0x0, size 0x4
    unsigned char * buffer; // offset 0x4, size 0x4
    unsigned char * bufferEnd; // offset 0x8, size 0x4
};
// total size: 0x330
class zBreakawayPlatform : public xEffectAttachIntf {
    // Members
    class zBreakawayPlatformAsset * asset; // offset 0x3C, size 0x4
    class zCollidable collEnt; // offset 0x40, size 0xC0
    class xGroup * breakawayGroup; // offset 0x100, size 0x4
    class xMovePoint * firstMP; // offset 0x104, size 0x4
    float moveSpeed; // offset 0x108, size 0x4
    class xEntMPData mpData; // offset 0x10C, size 0x70
    class xEnt * driver; // offset 0x17C, size 0x4
    class xVec3 refPointLocal; // offset 0x180, size 0xC
    class xVec3 prevRefPointWorld; // offset 0x18C, size 0xC
    class xQuat prevDrvRot; // offset 0x198, size 0x10
    bool drivenbyOn; // offset 0x1A8, size 0x1
    bool mounted; // offset 0x1A9, size 0x1
    float delay; // offset 0x1AC, size 0x4
    bool stopped; // offset 0x1B0, size 0x1
    class xMat4x3 mat; // offset 0x1B4, size 0x40
    bool visible; // offset 0x1F4, size 0x1
    int visDelay; // offset 0x1F8, size 0x4
    unsigned int breakawayState; // offset 0x1FC, size 0x4
    class xEnt * mounter; // offset 0x200, size 0x4
    bool breakable; // offset 0x204, size 0x1
    float timer; // offset 0x208, size 0x4
    float speed; // offset 0x20C, size 0x4
    float accel; // offset 0x210, size 0x4
    float dispDist; // offset 0x214, size 0x4
    class xVec3 dispDir; // offset 0x218, size 0xC
    float angle; // offset 0x224, size 0x4
    float angularVel; // offset 0x228, size 0x4
    class xVec3 rotateAxis; // offset 0x22C, size 0xC
    float angularParam; // offset 0x238, size 0x4
    float angularParamSpeed; // offset 0x23C, size 0x4
    bool flip; // offset 0x240, size 0x1
    bool buoyancy; // offset 0x241, size 0x1
    float scale; // offset 0x244, size 0x4
    class zSoundAsset soundWarning; // offset 0x248, size 0x48
    class zSoundAsset soundBreak; // offset 0x290, size 0x48
    class zSoundAsset soundAppear; // offset 0x2D8, size 0x48
    bool hasSoundWarning; // offset 0x320, size 0x1
    bool hasSoundBreak; // offset 0x321, size 0x1
    bool hasSoundAppear; // offset 0x322, size 0x1
};
// total size: 0xC0
class zCollidable : public xEnt {
    // Members
    class xBase * owner; // offset 0xBC, size 0x4
};
// total size: 0x70
class xEntMPData {
    // Members
    class MovePointData speed_data; // offset 0x0, size 0x4C
    class xSpline3 * spl; // offset 0x4C, size 0x4
    class xQuat aquat; // offset 0x50, size 0x10
    class xQuat bquat; // offset 0x60, size 0x10
};
// total size: 0x4C
class MovePointData {
    // Members
    class xMovePoint * dest; // offset 0x0, size 0x4
    class xMovePoint * src; // offset 0x4, size 0x4
    float speed; // offset 0x8, size 0x4
    float dest_speed; // offset 0xC, size 0x4
    float dist; // offset 0x10, size 0x4
    float curdist; // offset 0x14, size 0x4
    float acceleration; // offset 0x18, size 0x4
    float t; // offset 0x1C, size 0x4
    float speedStart; // offset 0x20, size 0x4
    float speedLimit; // offset 0x24, size 0x4
    float speedEnd; // offset 0x28, size 0x4
    float deceleration; // offset 0x2C, size 0x4
    float curdistBack; // offset 0x30, size 0x4
    float curdistStopAccelerate; // offset 0x34, size 0x4
    float curdistStartDecelerate; // offset 0x38, size 0x4
    float threshold; // offset 0x3C, size 0x4
    bool startedDecelerate; // offset 0x40, size 0x1
    bool startedAccelerate; // offset 0x41, size 0x1
    class xEntMotionAsset * asset; // offset 0x44, size 0x4
    class xOGEntity * owner; // offset 0x48, size 0x4
};
// total size: 0x40
class xEntMotionAsset {
    // Members
    class @class __anon; // offset 0x0, size 0x40
    class Spline_Type spl; // offset 0x0, size 0x18
    class MP_Type mp; // offset 0x0, size 0x18
    class Mech_Type mech; // offset 0x0, size 0x40
    class ConvBelt_Type cb; // offset 0x0, size 0x10
    class Teeter_Type teet; // offset 0x0, size 0x20
    class FM_Type fm; // offset 0x0, size 0x8
};
// total size: 0x40
class @class {
    // Members
    class Spline_Type spl; // offset 0x0, size 0x18
    class MP_Type mp; // offset 0x0, size 0x18
    class Mech_Type mech; // offset 0x0, size 0x40
    class ConvBelt_Type cb; // offset 0x0, size 0x10
    class Teeter_Type teet; // offset 0x0, size 0x20
    class FM_Type fm; // offset 0x0, size 0x8
};
// total size: 0xE0
class zFloatingCollectible : public xOGEntity {
    // Members
    class zFloatingCollectibleAsset * asset; // offset 0x3C, size 0x4
    class zFXSpawn * nuggetBecomeUnhappySpawnPt; // offset 0x40, size 0x4
    class xEnt * collector; // offset 0x44, size 0x4
    bool toBeCollected; // offset 0x48, size 0x1
    bool reachedCollector; // offset 0x49, size 0x1
    bool collected; // offset 0x4A, size 0x1
    bool visible; // offset 0x4B, size 0x1
    bool bypass; // offset 0x4C, size 0x1
    float collectDist2; // offset 0x50, size 0x4
    float collectVel; // offset 0x54, size 0x4
    class zFXSpawn * fxSpawnPtIdle; // offset 0x58, size 0x4
    class zFXSpawn * fxSpawnPtIdle_Asset; // offset 0x5C, size 0x4
    class zFXSpawn * fxSpawnPtCollect; // offset 0x60, size 0x4
    class zFXSpawn * fxSpawnPtCollect_Asset; // offset 0x64, size 0x4
    float boundRadius; // offset 0x68, size 0x4
    class xVec3 prevTargetDirection; // offset 0x6C, size 0xC
    bool dynamic; // offset 0x78, size 0x1
    bool hiddenByBSP; // offset 0x79, size 0x1
    bool toFree; // offset 0x7A, size 0x1
    class hkpRigidBody * havokSimObj; // offset 0x7C, size 0x4
    bool falling; // offset 0x80, size 0x1
    float elasticity; // offset 0x84, size 0x4
    float timeUntilCollectible; // offset 0x88, size 0x4
    float timeoutTimer; // offset 0x8C, size 0x4
    float timeout; // offset 0x90, size 0x4
    float fadeoutTimer; // offset 0x94, size 0x4
    float fadeout; // offset 0x98, size 0x4
    class xVec3 velocity; // offset 0x9C, size 0xC
    class xVec3 depenDir; // offset 0xA8, size 0xC
    float depenMag; // offset 0xB4, size 0x4
    class xOGEntity * depenEntity; // offset 0xB8, size 0x4
    bool toFade; // offset 0xBC, size 0x1
    bool inactiveFade; // offset 0xBD, size 0x1
    bool autocollect; // offset 0xBE, size 0x1
    bool randomCollectArc; // offset 0xBF, size 0x1
    class zCollectibleCollisionListener * listener; // offset 0xC0, size 0x4
    float collectTime; // offset 0xC4, size 0x4
    class xVec3 collectStartPos; // offset 0xC8, size 0xC
    float happinessTimer; // offset 0xD4, size 0x4
    float happinessBlend; // offset 0xD8, size 0x4
    enum eSBFloatingItemType floatingItemType; // offset 0xDC, size 0x4
};
// total size: 0x8
class zCollectibleCollisionListener : public hkpCollisionListener, public hkpEntityListener {};
// total size: 0xD0
class xLightEnt : public xOGEntity {
    // Members
    class xLightData data; // offset 0x3C, size 0x94
};
// total size: 0x148
class xCam {
    // Members
    unsigned long long transitionID; // offset 0x8, size 0x8
    class xMat4x3 mat; // offset 0x10, size 0x40
    class xMat4x3 coll_mat; // offset 0x50, size 0x40
    float fov; // offset 0x90, size 0x4
    int flags; // offset 0x94, size 0x4
    int viewportIndex; // offset 0x98, size 0x4
    unsigned long long owner; // offset 0xA0, size 0x8
    class xCamGroup * group; // offset 0xA8, size 0x4
    class xCam * next; // offset 0xAC, size 0x4
    class xVec2 analog; // offset 0xB0, size 0x8
    enum xCamCoordType coord_type; // offset 0xB8, size 0x4
    enum xCamOrientType orient_type; // offset 0xBC, size 0x4
    class xCamSpatialInfo spatial; // offset 0xC0, size 0x30
    class xCamSpatialInfo coll_spatial; // offset 0xF0, size 0x30
    class xCamConfigCommon cfg_common; // offset 0x120, size 0x8
    bool dofEnabled; // offset 0x128, size 0x1
    float dofBlur; // offset 0x12C, size 0x4
    float dofNearFocusPoint; // offset 0x130, size 0x4
    float dofNearFocusFalloff; // offset 0x134, size 0x4
    float dofFarFocusPoint; // offset 0x138, size 0x4
    float dofFarFocusFalloff; // offset 0x13C, size 0x4
    int group_flags; // offset 0x140, size 0x4
    class xCamBlend * blender; // offset 0x144, size 0x4
};
// total size: 0x158
class xCamGroup {
    // Members
    class iCamera * iCam; // offset 0x0, size 0x4
    bool isExternalICam; // offset 0x4, size 0x1
    int viewportIndex; // offset 0x8, size 0x4
    class Viewport * viewport; // offset 0xC, size 0x4
    class xCamShake shake; // offset 0x10, size 0x88
    bool isCreated; // offset 0x98, size 0x1
    float fov; // offset 0x9C, size 0x4
    float fov_default; // offset 0xA0, size 0x4
    class xMat4x3 mat; // offset 0xA4, size 0x40
    class xMat4x3 coll_mat; // offset 0xE4, size 0x40
    class xVec3 coll_atXZ; // offset 0x124, size 0xC
    class hkpAabbPhantom * phantomCamera; // offset 0x130, size 0x4
    class xCam * primary; // offset 0x134, size 0x4
    class xVec2 analog; // offset 0x138, size 0x8
    int child_flags; // offset 0x140, size 0x4
    int child_flags_mask; // offset 0x144, size 0x4
    class xCamBlend * blend_cam[4]; // offset 0x148, size 0x10
};
// total size: 0x88
class xCamShake {
    // Members
    bool isActive; // offset 0x0, size 0x1
    float elapsedTime; // offset 0x4, size 0x4
    float maxTime; // offset 0x8, size 0x4
    float magnitude; // offset 0xC, size 0x4
    class xVec3 dir; // offset 0x10, size 0xC
    float cycleTime; // offset 0x1C, size 0x4
    float cycleMax; // offset 0x20, size 0x4
    float dampen; // offset 0x24, size 0x4
    float dampenRate; // offset 0x28, size 0x4
    float rotate_magnitude; // offset 0x2C, size 0x4
    class xVec3 * epicenterP; // offset 0x30, size 0x4
    class xVec3 epicenter; // offset 0x34, size 0xC
    class xVec3 * player; // offset 0x40, size 0x4
    float radius; // offset 0x44, size 0x4
    class xMat4x3 mat; // offset 0x48, size 0x40
};
// total size: 0xD0
class hkpAabbPhantom : public hkpPhantom {
    // Members
    class hkAabb m_aabb; // offset 0xA0, size 0x20
    class hkArray m_overlappingCollidables; // offset 0xC0, size 0xC
    class hkBool m_orderDirty; // offset 0xCC, size 0x1
};
// total size: 0xC
class hkArray {
    // Members
    class hkpCollidable * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x170
class xCamBlend : public xCam {
    // Members
    class xCam * src; // offset 0x148, size 0x4
    class xCam * dst; // offset 0x14C, size 0x4
    class xCamBias * bias; // offset 0x150, size 0x4
    class xCamTimeBias timeBias; // offset 0x154, size 0x14
    class xCamTransition * transition; // offset 0x168, size 0x4
};
// total size: 0x8
class xCamBias {
    // Members
    bool mIsBiDirectional; // offset 0x4, size 0x1
};
// total size: 0x14
class xCamTimeBias : public xCamBias {
    // Members
    float bias; // offset 0x8, size 0x4
    float time; // offset 0xC, size 0x4
    float blendTime; // offset 0x10, size 0x4
};
// total size: 0x58
class xCamTransition : public xOGEntity {
    // Members
    class transition_time * mAsset; // offset 0x3C, size 0x4
    class zTrigger * mTransitionVolume; // offset 0x40, size 0x4
    int mType; // offset 0x44, size 0x4
    bool mActive; // offset 0x48, size 0x1
    class xCamBias * mCamBlendBias; // offset 0x4C, size 0x4
    class xCamGroup * mCamGroup; // offset 0x50, size 0x4
};
// total size: 0xD0
class zTrigger : public xOGEntity {
    // Members
    class xMat4x3 mat; // offset 0x3C, size 0x40
    class zTriggerAsset * asset; // offset 0x7C, size 0x4
    unsigned char triggerSubType; // offset 0x80, size 0x1
    class xHavokPhysicsObject physicsObject; // offset 0x90, size 0x20
    bool hasReplyLink; // offset 0xB0, size 0x1
    class xVec3 trigDir; // offset 0xB4, size 0xC
    class zPolygonalVolume * polygonBounds; // offset 0xC0, size 0x4
    class DelegateP2 * * observers; // offset 0xC4, size 0x4
    class zTriggerListEntry * listEntry; // offset 0xC8, size 0x4
};
// total size: 0x60
class zTriggerAsset : public TriggerOGBase {};
// total size: 0x18
class zTriggerListEntry {
    // Members
    class xVec3 center; // offset 0x0, size 0xC
    float radius2; // offset 0xC, size 0x4
    class zTrigger * trigger; // offset 0x10, size 0x4
    unsigned int entered; // offset 0x14, size 0x4
};
enum xCamCoordType {
    XCAM_COORD_INVALID = 4294967295,
    XCAM_COORD_CART = 0,
    XCAM_COORD_CYLINDER = 1,
    XCAM_COORD_SPHERE = 2,
    XCAM_COORD_MAX = 3,
};
enum xCamOrientType {
    XCAM_ORIENT_INVALID = 4294967295,
    XCAM_ORIENT_QUAT = 0,
    XCAM_ORIENT_EULER = 1,
    XCAM_ORIENT_MAX = 2,
};
// total size: 0x30
class xCamSpatialInfo {
    // Members
    class xCamCoord coord; // offset 0x0, size 0x20
    class xCamOrient orient; // offset 0x20, size 0x10
};
// total size: 0x20
class xCamCoord {
    // Members
    class @class __anon; // offset 0x0, size 0x20
    class xVec3 cart; // offset 0x0, size 0xC
    class xCamCoordCylinder cylinder; // offset 0x0, size 0x18
    class xCamCoordSphere sphere; // offset 0x0, size 0x20
};
// total size: 0x20
class @class {
    // Members
    class xVec3 cart; // offset 0x0, size 0xC
    class xCamCoordCylinder cylinder; // offset 0x0, size 0x18
    class xCamCoordSphere sphere; // offset 0x0, size 0x20
};
// total size: 0x18
class xCamCoordCylinder {
    // Members
    class xVec3 origin; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    float height; // offset 0x10, size 0x4
    float theta; // offset 0x14, size 0x4
};
// total size: 0x20
class xCamCoordSphere {
    // Members
    class xVec3 origin; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    class xQuat dir; // offset 0x10, size 0x10
};
// total size: 0x10
class xCamOrient {
    // Members
    class @class __anon; // offset 0x0, size 0x10
    class xQuat quat; // offset 0x0, size 0x10
    class xCamOrientEuler euler; // offset 0x0, size 0xC
};
// total size: 0x10
class @class {
    // Members
    class xQuat quat; // offset 0x0, size 0x10
    class xCamOrientEuler euler; // offset 0x0, size 0xC
};
// total size: 0xC
class xCamOrientEuler {
    // Members
    float yaw; // offset 0x0, size 0x4
    float pitch; // offset 0x4, size 0x4
    float roll; // offset 0x8, size 0x4
};
// total size: 0x8
class xCamConfigCommon {
    // Members
    unsigned char priority; // offset 0x0, size 0x1
    unsigned char pad1; // offset 0x1, size 0x1
    unsigned char pad2; // offset 0x2, size 0x1
    unsigned char pad3; // offset 0x3, size 0x1
    float blend_time; // offset 0x4, size 0x4
};
// total size: 0xC
class path_node {
    // Members
    class xVec3 loc; // offset 0x0, size 0xC
};
// total size: 0x18
class xCamCoordPolar {
    // Members
    class xVec3 origin; // offset 0x0, size 0xC
    float theta; // offset 0xC, size 0x4
    float phi; // offset 0x10, size 0x4
    float dist; // offset 0x14, size 0x4
};
// total size: 0x18
class config {
    // Members
    float rail_ymin; // offset 0x0, size 0x4
    float rail_ymax; // offset 0x4, size 0x4
    float pivot_bar_radius; // offset 0x8, size 0x4
    float compress_bar_radius; // offset 0xC, size 0x4
    float compress_ball_radius; // offset 0x10, size 0x4
    float compress_dist_min; // offset 0x14, size 0x4
};
// total size: 0x38
class xCamSupportLOSBar {
    // Members
    class xVec3 origin; // offset 0x0, size 0xC
    class xVec3 last_origin; // offset 0xC, size 0xC
    class xVec3 stern_loc; // offset 0x18, size 0xC
    class xVec3 last_stern_loc; // offset 0x24, size 0xC
    float rail_yoffset; // offset 0x30, size 0x4
    float last_rail_yoffset; // offset 0x34, size 0x4
};
// total size: 0x1C
class xCapsule {
    // Members
    class xVec3 start; // offset 0x0, size 0xC
    class xVec3 end; // offset 0xC, size 0xC
    float r; // offset 0x18, size 0x4
};
// total size: 0x254
class zCam {
    // Members
    class xCamGroup camGroup; // offset 0x0, size 0x158
    class zCamFollow * follow_cam; // offset 0x158, size 0x4
    class zTargetBlender blendedLookat; // offset 0x15C, size 0x48
    class zTargetBlender blendedMidPoint; // offset 0x1A4, size 0x48
    class zTargetBlender blendedFloorMount; // offset 0x1EC, size 0x48
    class xVec3 cameraPlayersMidpoint; // offset 0x234, size 0xC
    class xVec3 cameraLookAt; // offset 0x240, size 0xC
    bool sYTrackingBelowFloorEnabled; // offset 0x24C, size 0x1
    bool allow60fpsEmulation; // offset 0x24D, size 0x1
    int savedCameraType; // offset 0x250, size 0x4
};
// total size: 0x4A0
class zCamFollow : public zCamDriver {
    // Members
    class zCamTargetHistory targetHistory; // offset 0x2B4, size 0x198
    float lastDistTweak; // offset 0x44C, size 0x4
    bool updateRestDist; // offset 0x450, size 0x1
    bool distOccludeOn; // offset 0x451, size 0x1
    unsigned int lastCollisionBitmap; // offset 0x454, size 0x4
    float lastCollisionMult; // offset 0x458, size 0x4
    float aimingTimer; // offset 0x45C, size 0x4
    unsigned int aimingMode; // offset 0x460, size 0x4
    float trampolinePitchOffsetBlended; // offset 0x464, size 0x4
    bool doCenter; // offset 0x468, size 0x1
    bool doCenterCloseIn; // offset 0x469, size 0x1
    float centerGiveUpTimer; // offset 0x46C, size 0x4
    bool activeCentering; // offset 0x470, size 0x1
    class xVec3 centerDir; // offset 0x474, size 0xC
    class xVec3 placedLoc; // offset 0x480, size 0xC
    bool doNPCLock; // offset 0x48C, size 0x1
    class zNPCBase * lastNPCLocked; // offset 0x490, size 0x4
    bool collided; // offset 0x494, size 0x1
    float collidedTimer; // offset 0x498, size 0x4
};
// total size: 0x2B8
class zCamDriver : public xCam {
    // Members
    class zCamBlendValues * blendValues; // offset 0x148, size 0x4
    class zCamTarget * targets[4]; // offset 0x14C, size 0x10
    int targetCount; // offset 0x15C, size 0x4
    class zCamBasis resetBasis; // offset 0x160, size 0x30
    unsigned int resetComponents; // offset 0x190, size 0x4
    class zCamBasis basis; // offset 0x194, size 0x30
    class xVec3 targetLoc; // offset 0x1C4, size 0xC
    class xVec3 targetLocUnrooted; // offset 0x1D0, size 0xC
    class xVec3 targetMotion; // offset 0x1DC, size 0xC
    class zCamRestConfig restConfig; // offset 0x1E8, size 0x34
    class zCamBasis goalBasis; // offset 0x21C, size 0x30
    class zCamBasis blendedGoalBasis; // offset 0x24C, size 0x30
    float occludeTimer; // offset 0x27C, size 0x4
    bool wasOccluded; // offset 0x280, size 0x1
    class zCamVelocity inputVel; // offset 0x284, size 0x10
    class zCamVelocity userVel; // offset 0x294, size 0x10
    class xVec3 lookLoc; // offset 0x2A4, size 0xC
    float lookLocVel; // offset 0x2B0, size 0x4
};
// total size: 0x7C
class zCamBlendValues {
    // Members
    class @class target; // offset 0x0, size 0x8
    class @class goal; // offset 0x8, size 0x28
    class @class input; // offset 0x30, size 0x24
    class @class occlude; // offset 0x54, size 0xC
    class @class rest; // offset 0x60, size 0x4
    class @class look; // offset 0x64, size 0x18
};
// total size: 0x8
class @class {
    // Members
    float pos_scale; // offset 0x0, size 0x4
    float teleport_dist; // offset 0x4, size 0x4
};
// total size: 0x28
class @class {
    // Members
    float pos_vmax; // offset 0x0, size 0x4
    float pos_scale; // offset 0x4, size 0x4
    float pos_y_vmax; // offset 0x8, size 0x4
    float pos_y_scale; // offset 0xC, size 0x4
    float blend_vmax; // offset 0x10, size 0x4
    float blend_scale; // offset 0x14, size 0x4
    float blend_y_vmax; // offset 0x18, size 0x4
    float blend_y_scale; // offset 0x1C, size 0x4
    float pos_cheat_vmax; // offset 0x20, size 0x4
    bool constrain_visible; // offset 0x24, size 0x1
    bool use_separate_y_blend; // offset 0x25, size 0x1
};
// total size: 0x24
class @class {
    // Members
    float input_phi_max; // offset 0x0, size 0x4
    float input_theta_max; // offset 0x4, size 0x4
    float input_theta_scale; // offset 0x8, size 0x4
    float input_theta_vmax; // offset 0xC, size 0x4
    float theta_falloff_scale; // offset 0x10, size 0x4
    float theta_falloff_min_dist; // offset 0x14, size 0x4
    float theta_falloff_max_dist; // offset 0x18, size 0x4
    float blend_scale; // offset 0x1C, size 0x4
    float blend_vmax; // offset 0x20, size 0x4
};
// total size: 0xC
class @class {
    // Members
    float blend_scale; // offset 0x0, size 0x4
    float blend_vmax; // offset 0x4, size 0x4
    float restore_time; // offset 0x8, size 0x4
};
// total size: 0x4
class @class {
    // Members
    float phi_scale; // offset 0x0, size 0x4
};
// total size: 0x18
class @class {
    // Members
    float pitch_scale; // offset 0x0, size 0x4
    float yaw_scale; // offset 0x4, size 0x4
    float look_xz_vmax; // offset 0x8, size 0x4
    float look_xz_scale; // offset 0xC, size 0x4
    float look_y_vmax; // offset 0x10, size 0x4
    float look_y_scale; // offset 0x14, size 0x4
};
// total size: 0x34
class zCamTarget {
    // Members
    class xVec3 loc_base; // offset 0x0, size 0xC
    class xVec3 loc; // offset 0xC, size 0xC
    class xVec3 loc_unrooted; // offset 0x18, size 0xC
    class xVec3 loc_motion; // offset 0x24, size 0xC
};
// total size: 0x30
class zCamBasis : public xCamCoordPolar {
    // Members
    class xVec3 loc; // offset 0x18, size 0xC
    float pitch; // offset 0x24, size 0x4
    float yaw; // offset 0x28, size 0x4
    float fov; // offset 0x2C, size 0x4
};
// total size: 0x34
class zCamRestConfig {
    // Members
    bool holdStill; // offset 0x0, size 0x1
    bool returnToCenter; // offset 0x1, size 0x1
    bool overrideDist; // offset 0x2, size 0x1
    bool doCloseup; // offset 0x3, size 0x1
    bool userPlaced; // offset 0x4, size 0x1
    float idleTimer; // offset 0x8, size 0x4
    float vOffset; // offset 0xC, size 0x4
    float hOffset; // offset 0x10, size 0x4
    float dOffset; // offset 0x14, size 0x4
    float phi; // offset 0x18, size 0x4
    float dist; // offset 0x1C, size 0x4
    float offsetReturnTimer; // offset 0x20, size 0x4
    float vOffsetMin; // offset 0x24, size 0x4
    float vOffsetMax; // offset 0x28, size 0x4
    float hOffsetMin; // offset 0x2C, size 0x4
    float hOffsetMax; // offset 0x30, size 0x4
};
// total size: 0x10
class zCamVelocity {
    // Members
    float phi; // offset 0x0, size 0x4
    float theta; // offset 0x4, size 0x4
    float auto_phi; // offset 0x8, size 0x4
    float auto_theta; // offset 0xC, size 0x4
};
// total size: 0x198
class zCamTargetHistory {
    // Members
    int indexCount; // offset 0x0, size 0x4
    int lastIndex; // offset 0x4, size 0x4
    class xVec3 lastKnownLoc; // offset 0x8, size 0xC
    class xVec3 locations[32]; // offset 0x14, size 0x180
    float cosangle; // offset 0x194, size 0x4
};
// total size: 0x48
class zTargetBlender {
    // Members
    float mBlendTime; // offset 0x0, size 0x4
    bool mLazy; // offset 0x4, size 0x1
    class xVec3 mPositionIn; // offset 0x8, size 0xC
    int mNumTargetsIn; // offset 0x14, size 0x4
    bool mBlending; // offset 0x18, size 0x1
    bool mFirstTime; // offset 0x19, size 0x1
    class xVec3 mLastPos; // offset 0x1C, size 0xC
    class xVec3 mStartPos; // offset 0x28, size 0xC
    class xVec3 mResult; // offset 0x34, size 0xC
    int mNumTargets; // offset 0x40, size 0x4
    float mTime; // offset 0x44, size 0x4
};
// total size: 0xC
class xCamTransitionParams : public xCamConfigCommon {
    // Members
    class xCamTransition * mTransitionObject; // offset 0x8, size 0x4
};
// total size: 0x64
class xCamPathBias : public xCamBias {
    // Members
    class xSpringyF32 mBias; // offset 0x8, size 0x18
    float mLastU; // offset 0x20, size 0x4
    class CurveEntity * mCurve; // offset 0x24, size 0x4
    class xCamTransition * mTrans; // offset 0x28, size 0x4
    class xVec3 mMappingPlaneNormal; // offset 0x2C, size 0xC
    float mGuessSpanU; // offset 0x38, size 0x4
    class xVec3 mCurveEnd0; // offset 0x3C, size 0xC
    class xVec3 mCurveEnd1; // offset 0x48, size 0xC
    int mReversed; // offset 0x54, size 0x4
    int mDirection; // offset 0x58, size 0x4
    bool mIsActive; // offset 0x5C, size 0x1
    int viewportIndex; // offset 0x60, size 0x4
};
// total size: 0x20
class CurveEntity : public Entity {
    // Members
    class Curve * curveAsset; // offset 0x18, size 0x4
    class CubicSpline * spline; // offset 0x1C, size 0x4
};
// total size: 0x34
class Curve {
    // Members
    int ClosedCurve; // offset 0x0, size 0x4
    class vec3 LowBounds; // offset 0x4, size 0xC
    class vec3 HighBounds; // offset 0x10, size 0xC
    class __Coefficients__ Coefficients; // offset 0x1C, size 0x8
    class __SegmentLengths__ SegmentLengths; // offset 0x24, size 0x8
    class __ParamValues__ ParamValues; // offset 0x2C, size 0x8
};
// total size: 0x8
class __Coefficients__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __SegmentLengths__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __ParamValues__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x1C
class CubicSpline {
    // Members
    class Vector3 * coefficients; // offset 0x0, size 0x4
    float * segmentLengths; // offset 0x4, size 0x4
    float * paramValues; // offset 0x8, size 0x4
    int numSegments; // offset 0xC, size 0x4
    float savedT; // offset 0x10, size 0x4
    int savedSegment; // offset 0x14, size 0x4
    float savedLocalT; // offset 0x18, size 0x4
};
// total size: 0x8
class zSweptSphereGlobals {
    // Members
    int hitFound; // offset 0x0, size 0x4
    class xMat4x3 * modelMat; // offset 0x4, size 0x4
};
enum eSweptSphereHackIgnore {
    eSweptSphereHackIgnore_Nothing = 0,
    eSweptSphereHackIgnore_CarryableObjects = 1,
};
// total size: 0x24
class xRay3 {
    // Members
    class xVec3 origin; // offset 0x0, size 0xC
    class xVec3 dir; // offset 0xC, size 0xC
    float min_t; // offset 0x18, size 0x4
    float max_t; // offset 0x1C, size 0x4
    int flags; // offset 0x20, size 0x4
};
// total size: 0x4
class xColor {
    // Members
    class @class __anon; // offset 0x0, size 0x4
    unsigned int rgbaU32; // offset 0x0, size 0x4
    class RGBA_U8s rgbaU8s; // offset 0x0, size 0x4
};
// total size: 0x4
class @class {
    // Members
    unsigned int rgbaU32; // offset 0x0, size 0x4
    class RGBA_U8s rgbaU8s; // offset 0x0, size 0x4
};
// total size: 0x4
class RGBA_U8s {
    // Members
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
// total size: 0x18
class xCounterAsset : public xBaseAsset {
    // Members
    short count; // offset 0x10, size 0x2
};
// total size: 0x48
class xCounter : public xOGEntity {
    // Members
    class xCounterAsset * asset; // offset 0x3C, size 0x4
    short count; // offset 0x40, size 0x2
    unsigned char state; // offset 0x42, size 0x1
    unsigned char pad; // offset 0x43, size 0x1
};
// total size: 0x1C
class xSerial {
    // Members
    unsigned int idtag; // offset 0x0, size 0x4
    int baseoff; // offset 0x4, size 0x4
    class st_SERIAL_CLIENTINFO * ctxtdata; // offset 0x8, size 0x4
    int warned; // offset 0xC, size 0x4
    int curele; // offset 0x10, size 0x4
    int bitidx; // offset 0x14, size 0x4
    int bittally; // offset 0x18, size 0x4
};
// total size: 0x10
class st_SERIAL_CLIENTINFO {
    // Members
    unsigned int idtag; // offset 0x0, size 0x4
    int * membuf; // offset 0x4, size 0x4
    int trueoff; // offset 0x8, size 0x4
    int actsize; // offset 0xC, size 0x4
};
// total size: 0x2
class EventNotifyCountIs : public EventNotifyNew {
    // Members
    short Value; // offset 0x0, size 0x2
};
// total size: 0x1
class EventNotifyNew : public EventAny {};
// total size: 0x10
class EventActionSetCount : public EventActionNew {
    // Members
    short param0; // offset 0x0, size 0x2
    class uid paramWidgetAssetID; // offset 0x8, size 0x8
};
// total size: 0x14
class tag_type {
    // Members
    class substr name; // offset 0x0, size 0x8
    void (* parse_tag)(class jot & j, class xtextbox & tb, class xtextbox & ctb, class split_tag & ti); // offset 0x8, size 0x4
    void (* reset_tag)(class jot & j, class xtextbox & tb, class xtextbox & ctb, class split_tag & ti); // offset 0xC, size 0x4
    void * context; // offset 0x10, size 0x4
};
// total size: 0x8
class substr {
    // Members
    char * text; // offset 0x0, size 0x4
    unsigned long size; // offset 0x4, size 0x4
};
// total size: 0x38
class jot {
    // Members
    class substr s; // offset 0x0, size 0x8
    class @class flag; // offset 0x8, size 0x2
    unsigned short context_size; // offset 0xA, size 0x2
    void * context; // offset 0xC, size 0x4
    class basic_rect bounds; // offset 0x10, size 0x10
    class basic_rect render_bounds; // offset 0x20, size 0x10
    class callback * cb; // offset 0x30, size 0x4
    class tag_type * tag; // offset 0x34, size 0x4
};
// total size: 0x2
class @class {
    // Members
    bool invisible : 1; // offset 0x0, size 0x1, bit offset 0
    bool ethereal : 1; // offset 0x0, size 0x1, bit offset 1
    bool merge : 1; // offset 0x0, size 0x1, bit offset 2
    bool word_break : 1; // offset 0x0, size 0x1, bit offset 3
    bool word_end : 1; // offset 0x0, size 0x1, bit offset 4
    bool line_break : 1; // offset 0x0, size 0x1, bit offset 5
    bool stop : 1; // offset 0x0, size 0x1, bit offset 6
    bool tab : 1; // offset 0x0, size 0x1, bit offset 7
    bool insert : 1; // offset 0x1, size 0x1, bit offset 0
    bool dynamic : 1; // offset 0x1, size 0x1, bit offset 1
    bool page_break : 1; // offset 0x1, size 0x1, bit offset 2
    bool stateful : 1; // offset 0x1, size 0x1, bit offset 3
    bool japanese_break : 1; // offset 0x1, size 0x1, bit offset 4
    unsigned short dummy : 3; // offset 0x0, size 0x2, bit offset 13
};
// total size: 0xC
class callback {
    // Members
    void (* render)(class jot & j, class xtextbox & tb, float x, float y); // offset 0x0, size 0x4
    void (* layout_update)(class jot & j, class xtextbox & tb, class xtextbox & ctb); // offset 0x4, size 0x4
    void (* render_update)(class jot & j, class xtextbox & tb, class xtextbox & ctb); // offset 0x8, size 0x4
};
// total size: 0x88
class xtextbox {
    // Members
    class xfont font; // offset 0x0, size 0x38
    unsigned char brightness; // offset 0x38, size 0x1
    unsigned char pad[3]; // offset 0x39, size 0x3
    class basic_rect bounds; // offset 0x3C, size 0x10
    float draw_depth; // offset 0x4C, size 0x4
    unsigned int flags; // offset 0x50, size 0x4
    float line_space; // offset 0x54, size 0x4
    float tab_stop; // offset 0x58, size 0x4
    float left_indent; // offset 0x5C, size 0x4
    float right_indent; // offset 0x60, size 0x4
    class callback * cb; // offset 0x64, size 0x4
    void * context; // offset 0x68, size 0x4
    char * * texts; // offset 0x6C, size 0x4
    unsigned long * text_sizes; // offset 0x70, size 0x4
    unsigned long texts_size; // offset 0x74, size 0x4
    class substr text; // offset 0x78, size 0x8
    unsigned int text_hash; // offset 0x80, size 0x4
    enum VisibilityMask viewportMask; // offset 0x84, size 0x4
};
// total size: 0x38
class xfont {
    // Members
    unsigned long long id; // offset 0x0, size 0x8
    float width; // offset 0x8, size 0x4
    float height; // offset 0xC, size 0x4
    float space; // offset 0x10, size 0x4
    class xColor color; // offset 0x14, size 0x4
    class xColor shadowColor; // offset 0x18, size 0x4
    float shadowOffsetX; // offset 0x1C, size 0x4
    float shadowOffsetY; // offset 0x20, size 0x4
    class basic_rect clip; // offset 0x24, size 0x10
};
enum VisibilityMask {
    VISIBILITY_MASK_DEFAULT = 1,
    VISIBILITY_MASK_UI = 2,
    VISIBILITY_MASK_SHADOW = 4,
    VISIBILITY_MASK_COLLISION = 8,
    VISIBILITY_MASK_UI_VIEW_BEGIN_BIT_INDEX = 4,
    VISIBILITY_MASK_UI_VIEW1 = 16,
    VISIBILITY_MASK_UI_VIEW2 = 32,
    VISIBILITY_MASK_UI_VIEW3 = 64,
    VISIBILITY_MASK_UI_VIEW4 = 128,
    VISIBILITY_MASK_3D_VIEW_BEGIN_BIT_INDEX = 8,
    VISIBILITY_MASK_3D_VIEW1 = 256,
    VISIBILITY_MASK_3D_VIEW2 = 512,
    VISIBILITY_MASK_3D_VIEW3 = 1024,
    VISIBILITY_MASK_3D_VIEW4 = 2048,
    VISIBILITY_MASK_CLOUD = 4096,
    VISIBILITY_MASK_CAM3D = 8192,
};
// total size: 0x20
class split_tag {
    // Members
    class substr tag; // offset 0x0, size 0x8
    class substr name; // offset 0x8, size 0x8
    class substr action; // offset 0x10, size 0x8
    class substr value; // offset 0x18, size 0x8
};
// total size: 0x28
class tweak_callback {
    // Members
    void (* on_change)(class tweak_info & info); // offset 0x0, size 0x4
    void (* on_select)(class tweak_info & info); // offset 0x4, size 0x4
    void (* on_unselect)(class tweak_info & info); // offset 0x8, size 0x4
    void (* on_start_edit)(class tweak_info & info); // offset 0xC, size 0x4
    void (* on_stop_edit)(class tweak_info & info); // offset 0x10, size 0x4
    void (* on_expand)(class tweak_info & info); // offset 0x14, size 0x4
    void (* on_collapse)(class tweak_info & info); // offset 0x18, size 0x4
    void (* on_update)(class tweak_info & info); // offset 0x1C, size 0x4
    void (* convert_mem_to_tweak)(class tweak_info &, void * value); // offset 0x20, size 0x4
    void (* convert_tweak_to_mem)(class tweak_info &, void * value); // offset 0x24, size 0x4
};
// total size: 0x30
class tweak_info {
    // Members
    class substr name; // offset 0x0, size 0x8
    void * value; // offset 0x8, size 0x4
    class tweak_callback * cb; // offset 0xC, size 0x4
    void * context; // offset 0x10, size 0x4
    unsigned char type; // offset 0x14, size 0x1
    unsigned char value_size; // offset 0x15, size 0x1
    unsigned short flags; // offset 0x16, size 0x2
    class @class __anon; // offset 0x18, size 0x18
    class @class int_context; // offset 0x18, size 0xC
    class @class uint_context; // offset 0x18, size 0xC
    class @class float_context; // offset 0x18, size 0xC
    class @class bool_context; // offset 0x18, size 0x1
    class @class select_context; // offset 0x18, size 0x18
    class @class flag_context; // offset 0x18, size 0x8
    class @class all_context; // offset 0x18, size 0x14
};
// total size: 0x18
class @class {
    // Members
    class @class int_context; // offset 0x0, size 0xC
    class @class uint_context; // offset 0x0, size 0xC
    class @class float_context; // offset 0x0, size 0xC
    class @class bool_context; // offset 0x0, size 0x1
    class @class select_context; // offset 0x0, size 0x18
    class @class flag_context; // offset 0x0, size 0x8
    class @class all_context; // offset 0x0, size 0x14
};
// total size: 0xC
class @class {
    // Members
    int value_def; // offset 0x0, size 0x4
    int value_min; // offset 0x4, size 0x4
    int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
class @class {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int value_min; // offset 0x4, size 0x4
    unsigned int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
class @class {
    // Members
    float value_def; // offset 0x0, size 0x4
    float value_min; // offset 0x4, size 0x4
    float value_max; // offset 0x8, size 0x4
};
// total size: 0x1
class @class {
    // Members
    bool value_def; // offset 0x0, size 0x1
};
// total size: 0x18
class @class {
    // Members
    unsigned long long value_def; // offset 0x0, size 0x8
    unsigned int labels_size; // offset 0x8, size 0x4
    char * * labels; // offset 0xC, size 0x4
    void * values; // offset 0x10, size 0x4
};
// total size: 0x8
class @class {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int mask; // offset 0x4, size 0x4
};
// total size: 0x14
class @class {
    // Members
    unsigned char pad[20]; // offset 0x0, size 0x14
};
// total size: 0x94
class decal_instance {
    // Members
    class emit_context ec; // offset 0x0, size 0x44
    float age; // offset 0x44, size 0x4
    float animation_age; // offset 0x48, size 0x4
    float age_rate; // offset 0x4C, size 0x4
    class xEnt * driver_ent; // offset 0x50, size 0x4
    class xOGModelRefPtr modelRef; // offset 0x54, size 0x4
    class xOGModel * origModel; // offset 0x58, size 0x4
    class xMat4x3 * driver; // offset 0x5C, size 0x4
    float time_start; // offset 0x60, size 0x4
    float time_scale; // offset 0x64, size 0x4
    class xColor color; // offset 0x68, size 0x4
    class _xMat3x2 uvmat; // offset 0x6C, size 0x18
    int startFrame; // offset 0x84, size 0x4
    int lastFrame; // offset 0x88, size 0x4
    float conv_translation; // offset 0x8C, size 0x4
    class immediate_mode_data * immediate; // offset 0x90, size 0x4
};
// total size: 0x18
class _xMat3x2 {
    // Members
    class xVec2 right; // offset 0x0, size 0x8
    class xVec2 up; // offset 0x8, size 0x8
    class xVec2 pos; // offset 0x10, size 0x8
};
// total size: 0x814
class immediate_mode_data {
    // Members
    class xVec3 vert[48]; // offset 0x0, size 0x240
    class xVec2 uv[48]; // offset 0x240, size 0x180
    class xVec3 norm[48]; // offset 0x3C0, size 0x240
    unsigned short index[256]; // offset 0x600, size 0x200
    int vert_size; // offset 0x800, size 0x4
    int index_size; // offset 0x804, size 0x4
    float x_min; // offset 0x808, size 0x4
    float x_max; // offset 0x80C, size 0x4
    class immediate_mode_data * next; // offset 0x810, size 0x4
};
// total size: 0x10
class combo_vertex {
    // Members
    unsigned short index[3]; // offset 0x0, size 0x6
    unsigned short count; // offset 0x6, size 0x2
    float n; // offset 0x8, size 0x4
    float m; // offset 0xC, size 0x4
};
// total size: 0x58
class clip_decal_params {
    // Members
    class @class in; // offset 0x0, size 0x40
    class @class out; // offset 0x40, size 0x14
    class xVec3 * clip_buffer; // offset 0x54, size 0x4
};
// total size: 0x40
class @class {
    // Members
    class xVec3 * vert; // offset 0x0, size 0x4
    int vert_size; // offset 0x4, size 0x4
    unsigned char * outcode; // offset 0x8, size 0x4
    unsigned long long * surfaceID; // offset 0xC, size 0x4
    class xBox box; // offset 0x10, size 0x18
    class xVec2 size; // offset 0x28, size 0x8
    class xVec2 uv[2]; // offset 0x30, size 0x10
};
// total size: 0x14
class @class {
    // Members
    class xVec3 * vert; // offset 0x0, size 0x4
    int vert_size; // offset 0x4, size 0x4
    int max_vert_size; // offset 0x8, size 0x4
    class xVec2 * uv; // offset 0xC, size 0x4
    class xVec3 * norm; // offset 0x10, size 0x4
};
// total size: 0x68
class clip_decal_indexed_params {
    // Members
    class @class in; // offset 0x0, size 0x44
    class @class out; // offset 0x44, size 0x1C
    class @class buffer; // offset 0x60, size 0x8
};
// total size: 0x44
class @class {
    // Members
    unsigned short * tri; // offset 0x0, size 0x4
    int tri_size; // offset 0x4, size 0x4
    class xVec3 * vert; // offset 0x8, size 0x4
    int vert_size; // offset 0xC, size 0x4
    unsigned char * outcode; // offset 0x10, size 0x4
    class xBox box; // offset 0x14, size 0x18
    class xVec2 size; // offset 0x2C, size 0x8
    class xVec2 uv[2]; // offset 0x34, size 0x10
};
// total size: 0x1C
class @class {
    // Members
    unsigned short * tri; // offset 0x0, size 0x4
    int tri_size; // offset 0x4, size 0x4
    int max_tri_size; // offset 0x8, size 0x4
    class combo_vertex * vert; // offset 0xC, size 0x4
    int vert_size; // offset 0x10, size 0x4
    int max_vert_size; // offset 0x14, size 0x4
    class xVec2 * uv; // offset 0x18, size 0x4
};
// total size: 0x8
class @class {
    // Members
    class clip_vertex * clip_buffer; // offset 0x0, size 0x4
    unsigned short * vert_usage_buffer; // offset 0x4, size 0x4
};
// total size: 0x10
class clip_vertex : public xVec3 {
    // Members
    unsigned char prev; // offset 0xC, size 0x1
    unsigned char next; // offset 0xD, size 0x1
    unsigned char clipped; // offset 0xE, size 0x1
    unsigned char inner; // offset 0xF, size 0x1
};
// total size: 0x18
class animix {
    // Members
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
    float scale_x; // offset 0x10, size 0x4
    float scale_y; // offset 0x14, size 0x4
};
// total size: 0x6C
class intersect_env_params {
    // Members
    class xVec3 * v; // offset 0x0, size 0x4
    class xVec3 * endv; // offset 0x4, size 0x4
    unsigned long long * surfaceID; // offset 0x8, size 0x4
    unsigned char * outcode; // offset 0xC, size 0x4
    class xBox box; // offset 0x10, size 0x18
    class xMat4x3 imat; // offset 0x28, size 0x40
    class xMat4x3 * mat; // offset 0x68, size 0x4
};
// total size: 0x3C
class intersect_env_CB {
    // Members
    class intersect_env_params & arg; // offset 0x0, size 0x4
    class xVec3 localCenter; // offset 0x4, size 0xC
    class xVec3 extents; // offset 0x10, size 0xC
    class xVec3 center; // offset 0x1C, size 0xC
    class xQuat quat; // offset 0x28, size 0x10
    class HavokPrimObj collBox; // offset 0x38, size 0x4
};
// total size: 0x64
class ImmediateGeometryEntity : public Entity {
    // Members
    class Renderable3D * renderable; // offset 0x18, size 0x4
    int memSize; // offset 0x1C, size 0x4
    class BuilderInfo builderInfo; // offset 0x20, size 0x24
    class BuilderData builderData; // offset 0x44, size 0x1C
    unsigned int vertexDeclHash; // offset 0x60, size 0x4
};
// total size: 0x24
class BuilderInfo {
    // Members
    int size; // offset 0x0, size 0x4
    class MaterialEntity * materialEnt; // offset 0x4, size 0x4
    class ParamData * geomParamData; // offset 0x8, size 0x4
    class ParamData * rendParamData; // offset 0xC, size 0x4
    unsigned char * streamMapBuffer; // offset 0x10, size 0x4
    class CreateInfo geomParamCreateInfo; // offset 0x14, size 0x8
    class CreateInfo rendParamCreateInfo; // offset 0x1C, size 0x8
};
// total size: 0x58
class MaterialEntity : public Entity {
    // Members
    int memSize; // offset 0x18, size 0x4
    class EffectEntity * effectEnt; // offset 0x1C, size 0x4
    class RenderModeEntity * renderModeEnt; // offset 0x20, size 0x4
    class ParamCargo paramCargo; // offset 0x24, size 0x8
    class Material material; // offset 0x2C, size 0x2C
};
// total size: 0x1C
class BuilderData {
    // Members
    class MaterialEntity * materialEnt; // offset 0x0, size 0x4
    unsigned char * streamMapBuffer; // offset 0x4, size 0x4
    class ParamCargo geomParamCargo; // offset 0x8, size 0x8
    class ParamCargo rendParamCargo; // offset 0x10, size 0x8
    class GeometryContext * * shaderContextList; // offset 0x18, size 0x4
};
// total size: 0xB4
class ImmediateGeometry : public Geometry {};
// total size: 0x24
class PreallocImmediateGeomMem {
    // Members
    unsigned char * geomMem; // offset 0x0, size 0x4
    unsigned char * vertexMem; // offset 0x4, size 0x4
    unsigned short * indexMem; // offset 0x8, size 0x4
    int geomMemSize; // offset 0xC, size 0x4
    int vertexMemSize; // offset 0x10, size 0x4
    int indexMemSize; // offset 0x14, size 0x4
    int geomMemUsed; // offset 0x18, size 0x4
    int vertexMemUsed; // offset 0x1C, size 0x4
    int numIndicesUsed; // offset 0x20, size 0x4
};
// total size: 0xC
class ImmediateGeometryContext {
    // Members
    void * vertexData; // offset 0x0, size 0x4
    unsigned short * indexData; // offset 0x4, size 0x4
    bool isRenderThread; // offset 0x8, size 0x1
    bool flushVertexData; // offset 0x9, size 0x1
    short indexStride; // offset 0xA, size 0x2
};
// total size: 0x2C
class ImmediateContext {
    // Members
    class ImmediateVertex * verts; // offset 0x0, size 0x4
    unsigned short * indices; // offset 0x4, size 0x4
    class ImmediateGeometryEntity * geomEnt; // offset 0x8, size 0x4
    class ImmediateGeometry * geom; // offset 0xC, size 0x4
    int vertexCount; // offset 0x10, size 0x4
    int primCount; // offset 0x14, size 0x4
    int indexCount; // offset 0x18, size 0x4
    enum StateEnum state; // offset 0x1C, size 0x4
    class ImmediateGeometryContext igeomCtxt; // offset 0x20, size 0xC
};
// total size: 0x18
class ImmediateVertex : public ImmediateVertexBase {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    unsigned int color; // offset 0xC, size 0x4
    float tu; // offset 0x10, size 0x4
    float tv; // offset 0x14, size 0x4
};
// total size: 0x1
class ImmediateVertexBase {};
enum StateEnum {
    STATE_ERROR = 4294967295,
    STATE_Constructed = 0,
    STATE_Committed = 1,
    STATE_Added = 2,
};
// total size: 0xE4
class StaticBuilder : public Builder {
    // Members
    class StaticGeometry geom; // offset 0x10, size 0xB4
    class RenderAttrib viewAttrib; // offset 0xC4, size 0x1
    class FixedIndexBuffer * indexBuffers; // offset 0xC8, size 0x4
    class FixedVertexBuffer * fixedVertexBuffers; // offset 0xCC, size 0x4
    unsigned char * lightSectorIndices; // offset 0xD0, size 0x4
    class CollKDTree colltree; // offset 0xD4, size 0x10
};
// total size: 0xB4
class StaticGeometry : public Geometry {};
// total size: 0x14
class FixedIndexBuffer {
    // Members
    int ownBufferSize; // offset 0x0, size 0x4
    class IndexBuffer bufferObj; // offset 0x4, size 0xC
    unsigned short * buffer; // offset 0x10, size 0x4
};
// total size: 0x10
class FixedVertexBuffer {
    // Members
    int ownBufferSize; // offset 0x0, size 0x4
    class VertexBuffer bufferObj; // offset 0x4, size 0x8
    void * buffer; // offset 0xC, size 0x4
};
// total size: 0x10
class CollKDTree {
    // Members
    unsigned int branchCount; // offset 0x0, size 0x4
    class Branch * branchList; // offset 0x4, size 0x4
    unsigned int triangleCount; // offset 0x8, size 0x4
    class Triangle * triangleList; // offset 0xC, size 0x4
};
// total size: 0x10
class Branch {
    // Members
    unsigned int leftInfo; // offset 0x0, size 0x4
    unsigned int rightInfo; // offset 0x4, size 0x4
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
};
// total size: 0x10
class Triangle {
    // Members
    float * v0; // offset 0x0, size 0x4
    int v1flags; // offset 0x4, size 0x4
    int v2flags; // offset 0x8, size 0x4
    unsigned int offset; // offset 0xC, size 0x4
};
enum ThreadStackEnum {
    ThreadStack = 0,
};
enum eMemMgrTag {
    eMemMgrTag_2D = 0,
    eMemMgrTag_Anim = 1,
    eMemMgrTag_Attack = 2,
    eMemMgrTag_Audio = 3,
    eMemMgrTag_Camera = 4,
    eMemMgrTag_Curve = 5,
    eMemMgrTag_Cinematic = 6,
    eMemMgrTag_ContextObjs = 7,
    eMemMgrTag_Destructible = 8,
    eMemMgrTag_Debug = 9,
    eMemMgrTag_DebugTweak = 10,
    eMemMgrTag_Decal = 11,
    eMemMgrTag_Factory = 12,
    eMemMgrTag_FMV = 13,
    eMemMgrTag_FXRibbon = 14,
    eMemMgrTag_Enemy = 15,
    eMemMgrTag_EntityMisc = 16,
    eMemMgrTag_HierarchyBound = 17,
    eMemMgrTag_Havok = 18,
    eMemMgrTag_HUD = 19,
    eMemMgrTag_Light = 20,
    eMemMgrTag_Model = 21,
    eMemMgrTag_Movable = 22,
    eMemMgrTag_MovePoint = 23,
    eMemMgrTag_EntityTrigger = 24,
    eMemMgrTag_OrdArrayMgr = 25,
    eMemMgrTag_Packer = 26,
    eMemMgrTag_Particle = 27,
    eMemMgrTag_Physics = 28,
    eMemMgrTag_Player = 29,
    eMemMgrTag_Projectile = 30,
    eMemMgrTag_RealTimeUpdate = 31,
    eMemMgrTag_SaveLoad = 32,
    eMemMgrTag_Scene = 33,
    eMemMgrTag_Serializer = 34,
    eMemMgrTag_Shadow = 35,
    eMemMgrTag_Spline = 36,
    eMemMgrTag_Subtitle = 37,
    eMemMgrTag_Texture = 38,
    eMemMgrTag_Trigger = 39,
    eMemMgrTag_UI = 40,
    eMemMgrTag_UpdateCullMgr = 41,
    eMemMgrTag_Shrapnel = 42,
    eMemMgrTag_PlayerFX = 43,
    eMemMgrTag_Checkpoint = 44,
    eMemMgrTag_Volume = 45,
    eMemMgrTag_BufferAllocation = 46,
    eMemMgrTag_IO = 47,
    eMemMgrTag_Graphics = 48,
    eMemMgrTag_Utils = 49,
    eMemMgrTag_Builders = 50,
    eMemMgrTag_World = 51,
    eMemMgrTag_EntBlobs = 52,
    eMemMgrTag_EntBlobsAnim = 53,
    eMemMgrTag_EntShaders = 54,
    eMemMgrTag_UnknownEnt = 55,
    eMemMgrTag_BasicEnt = 56,
    eMemMgrTag_TextureEnt = 57,
    eMemMgrTag_StaticGeoEnt = 58,
    eMemMgrTag_VertexDeclEnt = 59,
    eMemMgrTag_Immediate = 60,
    eMemMgrTag_SkinGeoEnt = 61,
    eMemMgrTag_RenderModeEnt = 62,
    eMemMgrTag_MaterialEnt = 63,
    eMemMgrTag_EffectEnt = 64,
    eMemMgrTag_GeometryEnt = 65,
    eMemMgrTag_RawBlobEnt = 66,
    eMemMgrTag_System = 67,
    eMemMgrTag_AssetManager = 68,
    eMemMgrTag_EntityManager = 69,
    eMemMgrTag_xOGEntity = 70,
    eMemMgrTag_xOGEntModel = 71,
    eMemMgrTag_zMainOGMod = 72,
    eMemMgrTag_GoodEditor = 73,
    eMemMgrTag_3rdPartyLibs = 74,
    eMemMgrTag_FXScript = 75,
    eMemMgrTag_POW = 76,
    eMemMgrTag_Piggybank = 77,
    eMemMgrTag_ExceptionHandler = 78,
    eMemMgrTag_FastMemAssets = 79,
    eMemMgrTag_Scaleform = 80,
    eMemMgrTag_Strings = 81,
    eMemMgrTag_RomFont = 82,
    eMemMgrTag_ShadowAndHDRShared = 83,
    eMemMgrTag_AI = 84,
    eMemMgrTag_AI_BT = 85,
    eMemMgrTag_AI_Player = 86,
    eMemMgrTag_AI_Search = 87,
    eMemMgrTag_AI_BlackBoard = 88,
    eMemMgrTag_AI_Depot = 89,
    eMemMgrTag_AI_Scheduler = 90,
    eMemMgrTag_AI_Biplanes = 91,
    eMemMgrTag_LaserTurret = 92,
    eMemMgrTag_CollectibleSpawner = 93,
    eMemMgrTag_ObjectGenerator = 94,
    eMemMgrTag_NeoDrive = 95,
    eMemMgrTag_MoveToPlayer = 96,
    eMemMgrTag_JawFlapper = 97,
    eMemMgrTag_ElectricArc = 98,
    eMemMgrTag_Networking = 99,
    eMemMgrTag_xMemStatic = 100,
    eMemMgrTag_RVLFaceLib = 101,
    eMemMgrTag_WA10_Undo = 102,
    eMemMgrTag_NumTags = 103,
};
// total size: 0x50
class EntCollisionListener : public hkpCollisionListener, public hkpEntityListener {
    // Members
    class SoundPlayData m_hitPlayData; // offset 0x8, size 0x14
    class SoundPlayData m_processPlayData; // offset 0x1C, size 0x14
    bool m_IsPlayingScrape; // offset 0x30, size 0x1
    int m_CountPlayingScrape; // offset 0x34, size 0x4
    bool m_IsPlayingRoll; // offset 0x38, size 0x1
    int m_CountPlayingRoll; // offset 0x3C, size 0x4
    float m_timerHitSoundInterval; // offset 0x40, size 0x4
    float m_timerHitSoundNextAllowed; // offset 0x44, size 0x4
    float m_timerRippleInterval; // offset 0x48, size 0x4
    float m_timerRippleNextAllowed; // offset 0x4C, size 0x4
};
// total size: 0x14
class SoundPlayData {
    // Members
    class xBase * m_pBaseMakingSound; // offset 0x0, size 0x4
    class SurfaceGamePlay * m_pSurfaceMakingSound; // offset 0x4, size 0x4
    float m_volume; // offset 0x8, size 0x4
    class FMOD_VECTOR * m_pSoundPos; // offset 0xC, size 0x4
    class zSoundSourcesPhysics * m_pSounds; // offset 0x10, size 0x4
};
// total size: 0x30
class hkpContactPointAddedEvent {
    // Members
    class hkpCdBody * m_bodyA; // offset 0x0, size 0x4
    class hkpCdBody * m_bodyB; // offset 0x4, size 0x4
    class hkEnum m_type; // offset 0x8, size 0x4
    class hkpEntity * m_callbackFiredFrom; // offset 0xC, size 0x4
    class hkContactPoint * m_contactPoint; // offset 0x10, size 0x4
    class hkpGskCache * m_gskCache; // offset 0x14, size 0x4
    class hkpContactPointProperties * m_contactPointProperties; // offset 0x18, size 0x4
    float m_projectedVelocity; // offset 0x1C, size 0x4
    enum hkpContactPointAccept m_status; // offset 0x20, size 0x4
    class hkpDynamicsContactMgr * m_internalContactMgr; // offset 0x24, size 0x4
    class hkpProcessCollisionInput * m_collisionInput; // offset 0x28, size 0x4
    class hkpProcessCollisionOutput * m_collisionOutput; // offset 0x2C, size 0x4
};
// total size: 0xC
class hkpGskCache {
    // Members
    unsigned short m_vertices[4]; // offset 0x0, size 0x8
    unsigned char m_dimA; // offset 0x8, size 0x1
    unsigned char m_dimB; // offset 0x9, size 0x1
    unsigned char m_maxDimA : 4; // offset 0xA, size 0x1, bit offset 0
    unsigned char m_maxDimB : 4; // offset 0xA, size 0x1, bit offset 4
    unsigned char m_gskFlags; // offset 0xB, size 0x1
};
// total size: 0x14
class hkpContactPointProperties : public hkpSolverResults, public hkContactPointMaterial {
    // Members
    float m_internalDataA; // offset 0x10, size 0x4
};
// total size: 0x8
class hkpSolverResults {
    // Members
    float m_impulseApplied; // offset 0x0, size 0x4
    float m_internalSolverData; // offset 0x4, size 0x4
};
// total size: 0x8
class hkContactPointMaterial {
    // Members
    unsigned long m_userData; // offset 0x0, size 0x4
    class hkUFloat8 m_friction; // offset 0x4, size 0x1
    unsigned char m_restitution; // offset 0x5, size 0x1
    class hkUFloat8 m_maxImpulse; // offset 0x6, size 0x1
    unsigned char m_flags; // offset 0x7, size 0x1
};
enum hkpContactPointAccept {
    HK_CONTACT_POINT_ACCEPT = 0,
    HK_CONTACT_POINT_REJECT = 1,
};
// total size: 0x3090
class hkpProcessCollisionOutput : public hkpProcessCollisionData {
    // Members
    class hkPadSpu m_potentialContacts; // offset 0x3080, size 0x4
};
// total size: 0x3080
class hkpProcessCollisionData {
    // Members
    class hkPadSpu m_firstFreeContactPoint; // offset 0x0, size 0x4
    class hkPadSpu m_constraintOwner; // offset 0x4, size 0x4
    class hkpProcessCdPoint m_contactPoints[256]; // offset 0x10, size 0x3000
    class ToiInfo m_toi; // offset 0x3010, size 0x70
};
// total size: 0x4
class hkPadSpu {
    // Members
    class hkpProcessCdPoint * m_storage; // offset 0x0, size 0x4
};
// total size: 0x30
class hkpProcessCdPoint {
    // Members
    class hkContactPoint m_contact; // offset 0x0, size 0x20
    class hkPadSpu m_contactPointId; // offset 0x20, size 0x4
};
// total size: 0x4
class hkPadSpu {
    // Members
    unsigned int m_storage; // offset 0x0, size 0x4
};
// total size: 0x4
class hkPadSpu {
    // Members
    class hkpConstraintOwner * m_storage; // offset 0x0, size 0x4
};
// total size: 0x70
class ToiInfo {
    // Members
    class hkContactPoint m_contactPoint; // offset 0x0, size 0x20
    class hkPadSpu m_time; // offset 0x20, size 0x4
    class hkPadSpu m_seperatingVelocity; // offset 0x24, size 0x4
    class hkGskCache16 m_gskCache; // offset 0x28, size 0xC
    class hkContactPointPropertiesWithExtendedUserData16 m_properties; // offset 0x34, size 0x30
};
// total size: 0xC
class hkGskCache16 : public hkpGskCache {};
// total size: 0x30
class hkContactPointPropertiesWithExtendedUserData16 : public hkpContactPointProperties {
    // Members
    unsigned int m_extendedUserDatas[7]; // offset 0x14, size 0x1C
};
// total size: 0x4
class hkPadSpu {
    // Members
    class PotentialInfo * m_storage; // offset 0x0, size 0x4
};
// total size: 0x1008
class PotentialInfo {
    // Members
    class ContactRef * m_firstFreePotentialContact; // offset 0x0, size 0x4
    class hkpProcessCdPoint * * m_firstFreeRepresentativeContact; // offset 0x4, size 0x4
    class hkpProcessCdPoint * m_representativeContacts[256]; // offset 0x8, size 0x400
    class ContactRef m_potentialContacts[256]; // offset 0x408, size 0xC00
};
// total size: 0xC
class ContactRef {
    // Members
    class hkpProcessCdPoint * m_contactPoint; // offset 0x0, size 0x4
    class hkpAgentEntry * m_agentEntry; // offset 0x4, size 0x4
    void * m_agentData; // offset 0x8, size 0x4
};
// total size: 0x2C
class hkInplaceArray : public hkArray {
    // Members
    unsigned int m_storage[8]; // offset 0xC, size 0x20
};
// total size: 0x24
class hkpContactPointConfirmedEvent {
    // Members
    class hkpCollidable * m_collidableA; // offset 0x0, size 0x4
    class hkpCollidable * m_collidableB; // offset 0x4, size 0x4
    class hkpEntity * m_callbackFiredFrom; // offset 0x8, size 0x4
    class hkContactPoint * m_contactPoint; // offset 0xC, size 0x4
    class hkpContactPointProperties * m_contactPointProperties; // offset 0x10, size 0x4
    float m_rotateNormal; // offset 0x14, size 0x4
    float m_projectedVelocity; // offset 0x18, size 0x4
    class hkEnum m_type; // offset 0x1C, size 0x4
    class hkpSimpleContactConstraintData * m_contactData; // offset 0x20, size 0x4
};
// total size: 0x414
class hkpContactProcessEvent {
    // Members
    class hkpCollidable * m_collidableA; // offset 0x0, size 0x4
    class hkpCollidable * m_collidableB; // offset 0x4, size 0x4
    class hkpEntity * m_callbackFiredFrom; // offset 0x8, size 0x4
    class hkpProcessCollisionData * m_collisionData; // offset 0xC, size 0x4
    class hkpContactPointProperties * m_contactPointProperties[256]; // offset 0x10, size 0x400
    class hkpDynamicsContactMgr * m_internalContactMgr; // offset 0x410, size 0x4
};
// total size: 0x100
class zEntSimpleObj : public zEnt {
    // Members
    unsigned int sflags; // offset 0xC0, size 0x4
    unsigned int orientRef; // offset 0xC4, size 0x4
    float settleTimer; // offset 0xC8, size 0x4
    class zDestructible * destructible; // offset 0xCC, size 0x4
    class zTransparentHelper TransparentHelper; // offset 0xD0, size 0x8
    class zSoundSourcesPhysics soundSourcesPhysics; // offset 0xD8, size 0x18
    int textureNum; // offset 0xF0, size 0x4
};
// total size: 0x78
class zDestructible {
    // Members
    bool active; // offset 0x0, size 0x1
    bool swapModel; // offset 0x1, size 0x1
    bool didSwapModel; // offset 0x2, size 0x1
    class DestructibleAsset * asset; // offset 0x4, size 0x4
    class zDestructibleState * states; // offset 0x8, size 0x4
    class xOGEntity * root_ent; // offset 0xC, size 0x4
    class ModelInstanceAsset * modelInstanceSwap; // offset 0x10, size 0x4
    unsigned int totalStateNum; // offset 0x14, size 0x4
    unsigned int totalHitPoints; // offset 0x18, size 0x4
    unsigned int hitTypeFilter; // offset 0x1C, size 0x4
    unsigned int hitTypeExcludeFilter; // offset 0x20, size 0x4
    unsigned int playerFilter; // offset 0x24, size 0x4
    int currentStateNum; // offset 0x28, size 0x4
    unsigned int currentDamageTotal; // offset 0x2C, size 0x4
    class zSoundAsset soundIdle; // offset 0x30, size 0x48
};
// total size: 0xF0
class zDestructibleState {
    // Members
    unsigned int percent; // offset 0x0, size 0x4
    class ModelInstanceAsset * modelInstance; // offset 0x4, size 0x4
    class zFXSpawn * idleFX; // offset 0x8, size 0x4
    class zFXSpawn * hitFX; // offset 0xC, size 0x4
    class zFXSpawn * switchFX; // offset 0x10, size 0x4
    class zSoundAsset soundIdle; // offset 0x18, size 0x48
    class zSoundAsset soundHit; // offset 0x60, size 0x48
    class zSoundAsset soundSwitch; // offset 0xA8, size 0x48
};
// total size: 0x8
class zTransparentHelper {
    // Members
    bool isGoTransparent; // offset 0x0, size 0x1
    bool collidingWithCamera; // offset 0x1, size 0x1
    float CurrentMulAlpha; // offset 0x4, size 0x4
};
// total size: 0x98
class xEntMotion {
    // Members
    class xEntMotionAsset * asset; // offset 0x0, size 0x4
    unsigned char type; // offset 0x4, size 0x1
    unsigned char pad; // offset 0x5, size 0x1
    unsigned short ent_motion_flags; // offset 0x6, size 0x2
    float t; // offset 0x8, size 0x4
    float tmr; // offset 0xC, size 0x4
    float d; // offset 0x10, size 0x4
    class @class __anon; // offset 0x14, size 0x70
    class xEntSplineData spl; // offset 0x14, size 0x70
    class xEntMPData mp; // offset 0x14, size 0x70
    class xEntMechData mech; // offset 0x14, size 0x58
    class xEntConveyorData conv; // offset 0x14, size 0x1
    class xEnt * owner; // offset 0x84, size 0x4
    class xEnt * target; // offset 0x88, size 0x4
    class xVec3 our_rotation; // offset 0x8C, size 0xC
};
// total size: 0x70
class @class {
    // Members
    class xEntSplineData spl; // offset 0x0, size 0x70
    class xEntMPData mp; // offset 0x0, size 0x70
    class xEntMechData mech; // offset 0x0, size 0x58
    class xEntConveyorData conv; // offset 0x0, size 0x1
};
// total size: 0x70
class xEntSplineData {
    // Members
    class MovePointData speed_data; // offset 0x0, size 0x4C
    class CurveEntity * spline; // offset 0x4C, size 0x4
    float u; // offset 0x50, size 0x4
    bool arrived; // offset 0x54, size 0x1
    bool arrivedSent; // offset 0x55, size 0x1
    float position_blend_v; // offset 0x58, size 0x4
    float orient_blend_v; // offset 0x5C, size 0x4
    class xQuat current_orient; // offset 0x60, size 0x10
};
// total size: 0x58
class xEntMechData {
    // Members
    class xVec3 destination_diff; // offset 0x0, size 0xC
    class xVec3 current_diff; // offset 0xC, size 0xC
    class xVec3 direction; // offset 0x18, size 0xC
    float original_rotation; // offset 0x24, size 0x4
    float destination_rotation; // offset 0x28, size 0x4
    float sliding_speed; // offset 0x2C, size 0x4
    float rotation_speed; // offset 0x30, size 0x4
    int state; // offset 0x34, size 0x4
    float sliding_forth_decel_time; // offset 0x38, size 0x4
    float rotation_forth_decel_time; // offset 0x3C, size 0x4
    float sliding_back_decel_time; // offset 0x40, size 0x4
    float rotating_back_decel_time; // offset 0x44, size 0x4
    float scale_speed; // offset 0x48, size 0x4
    float current_scale; // offset 0x4C, size 0x4
    float * entity_rotation_angle; // offset 0x50, size 0x4
    int num_iterations; // offset 0x54, size 0x4
};
// total size: 0x1
class xEntConveyorData {
    // Members
    bool reverse; // offset 0x0, size 0x1
};
// total size: 0x8
class ReachedHitpoint : public EventNotifyReachedHitpoint {};
// total size: 0x8
class EventNotifyReachedHitpoint : public EventNotifyNew {
    // Members
    float oldHP; // offset 0x0, size 0x4
    float HP; // offset 0x4, size 0x4
};
// total size: 0x10
class st_XORDEREDARRAY {
    // Members
    void * * list; // offset 0x0, size 0x4
    int cnt; // offset 0x4, size 0x4
    int max; // offset 0x8, size 0x4
    int warnlvl; // offset 0xC, size 0x4
};
// total size: 0x24
class xFFXShakeState {
    // Members
    class xVec3 disp; // offset 0x0, size 0xC
    float dur; // offset 0xC, size 0x4
    float freq; // offset 0x10, size 0x4
    float tmr; // offset 0x14, size 0x4
    float alpha; // offset 0x18, size 0x4
    float lval; // offset 0x1C, size 0x4
    class xFFXShakeState * next; // offset 0x20, size 0x4
};
// total size: 0x58
class xFunctionGenerator : public xOGEntity {
    // Members
    class xFunctionGeneratorAsset * asset; // offset 0x3C, size 0x4
    bool started; // offset 0x40, size 0x1
    bool currentState; // offset 0x41, size 0x1
    bool override; // offset 0x42, size 0x1
    float currentCycleWidth; // offset 0x44, size 0x4
    float currentPulseWidth; // offset 0x48, size 0x4
    float currentTime; // offset 0x4C, size 0x4
    float lastUpTime; // offset 0x50, size 0x4
    float lastDownTime; // offset 0x54, size 0x4
};
// total size: 0x38
class xFunctionGeneratorAsset : public xBaseAsset {
    // Members
    float startCycleWidth; // offset 0x10, size 0x4
    float middleCycleWidth; // offset 0x14, size 0x4
    float endCycleWidth; // offset 0x18, size 0x4
    float startPulseWidth; // offset 0x1C, size 0x4
    float middlePulseWidth; // offset 0x20, size 0x4
    float endPulseWidth; // offset 0x24, size 0x4
    float middleTime; // offset 0x28, size 0x4
    float endTime; // offset 0x2C, size 0x4
    bool middleEnabled; // offset 0x30, size 0x1
    bool endEnabled; // offset 0x31, size 0x1
};
// total size: 0x18
class EventActionLegacy : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
    float param1; // offset 0x4, size 0x4
    float param2; // offset 0x8, size 0x4
    float param3; // offset 0xC, size 0x4
    class uid paramWidgetAssetID; // offset 0x10, size 0x8
};
// total size: 0x1C
class tier_queue_allocator {
    // Members
    class block_data * blocks; // offset 0x0, size 0x4
    unsigned long _unit_size; // offset 0x4, size 0x4
    unsigned long _block_size; // offset 0x8, size 0x4
    unsigned long _block_size_shift; // offset 0xC, size 0x4
    unsigned long _max_blocks; // offset 0x10, size 0x4
    unsigned long _max_blocks_shift; // offset 0x14, size 0x4
    unsigned char head; // offset 0x18, size 0x1
};
// total size: 0x8
class block_data {
    // Members
    unsigned char prev; // offset 0x0, size 0x1
    unsigned char next; // offset 0x1, size 0x1
    unsigned short flags; // offset 0x2, size 0x2
    void * data; // offset 0x4, size 0x4
};
// total size: 0xC0
class activity_data {
    // Members
    class xFXRibbon * owner; // offset 0x0, size 0x4
    class activity_data * * position; // offset 0x4, size 0x4
    class tier_queue joints; // offset 0x8, size 0x90
    int curve_index; // offset 0x98, size 0x4
    float ilife; // offset 0x9C, size 0x4
    unsigned int mtime; // offset 0xA0, size 0x4
    unsigned int mlife; // offset 0xA4, size 0x4
    bool mFadeOut; // offset 0xA8, size 0x1
    bool mExtendMode; // offset 0xA9, size 0x1
    float currentFrame; // offset 0xAC, size 0x4
    float alphaModifier; // offset 0xB0, size 0x4
    float texture_offset; // offset 0xB4, size 0x4
    float texture_increment_scale; // offset 0xB8, size 0x4
    class ImmediatePrototypeEntity * entity; // offset 0xBC, size 0x4
};
// total size: 0x8
class xFXRibbon {
    // Members
    class activity_data * act; // offset 0x0, size 0x4
    class config_type * cfg; // offset 0x4, size 0x4
};
// total size: 0x38
class config_type {
    // Members
    float width; // offset 0x0, size 0x4
    float life_time; // offset 0x4, size 0x4
    int flags; // offset 0x8, size 0x4
    class curve_node * curve; // offset 0xC, size 0x4
    int curve_size; // offset 0x10, size 0x4
    unsigned long long entity; // offset 0x18, size 0x8
    class xVec2 mUVanim; // offset 0x20, size 0x8
    class @class mTexAnim; // offset 0x28, size 0xC
};
// total size: 0xC
class curve_node {
    // Members
    float time; // offset 0x0, size 0x4
    class xColor color; // offset 0x4, size 0x4
    float scale; // offset 0x8, size 0x4
};
// total size: 0xC
class @class {
    // Members
    float fps; // offset 0x0, size 0x4
    float rows; // offset 0x4, size 0x4
    float cols; // offset 0x8, size 0x4
};
// total size: 0x90
class tier_queue {
    // Members
    unsigned long first; // offset 0x0, size 0x4
    unsigned long _size; // offset 0x4, size 0x4
    unsigned long wrap_mask; // offset 0x8, size 0x4
    class tier_queue_allocator * alloc; // offset 0xC, size 0x4
    unsigned char blocks[128]; // offset 0x10, size 0x80
};
// total size: 0x8
class iterator {
    // Members
    unsigned long it; // offset 0x0, size 0x4
    class tier_queue * owner; // offset 0x4, size 0x4
};
// total size: 0x1C
class joint_data {
    // Members
    unsigned int born; // offset 0x0, size 0x4
    class xVec3 loc; // offset 0x4, size 0xC
    class xVec3 norm; // offset 0x10, size 0xC
};
// total size: 0x10
class xVec4 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
// total size: 0x1C
class xGameInterface : public GameInterface {
    // Members
    bool messageBoxVisible; // offset 0x4, size 0x1
    bool messageBoxAnimating; // offset 0x5, size 0x1
    bool gameTRCPaused; // offset 0x6, size 0x1
    bool messageBoxEnabled; // offset 0x7, size 0x1
    enum eGameMode previousGameMode; // offset 0x8, size 0x4
    enum eGameStateCombined previousGameState; // offset 0xC, size 0x4
    class zScaleform * messageBox; // offset 0x10, size 0x4
    class zScaleform * autosavingIndicator; // offset 0x14, size 0x4
    int pauseReferenceCount; // offset 0x18, size 0x4
};
// total size: 0x4
class GameInterface {};
enum eGameMode {
    eGameMode_Title = 0,
    eGameMode_Pause = 1,
    eGameMode_Game = 2,
    eGameMode_Count = 3,
};
enum eGameStateCombined {
    eState_Title_Start = 0,
    eState_Title_Attract = 1,
    eState_Pause_Pause = 2,
    eState_Pause_TRC = 3,
    eState_Pause_Join = 4,
    eState_Pause_Misc = 5,
    eState_Game_FirstTime = 6,
    eState_Game_Playing = 7,
    eState_Game_SceneSwitch = 8,
    eState_Game_Dead = 9,
    eState_Game_Exit = 10,
    END_eState_ENUM = 11,
};
// total size: 0x140
class zScaleform : public zUI, public ScaleformOGAsset {
    // Members
    unsigned int curPads; // offset 0xFC, size 0x4
    unsigned int curPointers; // offset 0x100, size 0x4
    class ScaleformBlobEntity * ngScaleform; // offset 0x104, size 0x4
    class zDispatcherAsset * dispatcher; // offset 0x108, size 0x4
    class zSoundsNamedAsset * soundArray; // offset 0x10C, size 0x4
    class emitterBase * rumbleEmitter; // offset 0x110, size 0x4
    class zScaleform * pointers; // offset 0x114, size 0x4
    unsigned int playerPort; // offset 0x118, size 0x4
    unsigned int stoppedMovieCounter; // offset 0x11C, size 0x4
    bool moviePlaying; // offset 0x120, size 0x1
    enum eScaleformStatus status; // offset 0x124, size 0x4
    int playRefCount; // offset 0x128, size 0x4
    int pointerActiveLastFrame; // offset 0x12C, size 0x4
    bool deferPlayMovie; // offset 0x130, size 0x1
    bool disableGameRendering; // offset 0x131, size 0x1
};
// total size: 0x100
class zUI : public xOGEntity {
    // Members
    enum VisibilityMask UIViewportMask; // offset 0x3C, size 0x4
    class zUI * asset; // offset 0x40, size 0x4
    class State current; // offset 0x50, size 0x40
    class State startMovement; // offset 0x90, size 0x40
    class UI_Motion * selectedMotion; // offset 0xD0, size 0x4
    class UI_Motion * unselectedMotion; // offset 0xD4, size 0x4
    int port; // offset 0xD8, size 0x4
    class zUI * parent; // offset 0xDC, size 0x4
    bool visible; // offset 0xE0, size 0x1
    bool focus; // offset 0xE1, size 0x1
    bool lastFocus; // offset 0xE2, size 0x1
    bool selected; // offset 0xE3, size 0x1
    bool brighten; // offset 0xE4, size 0x1
    bool hdrPass; // offset 0xE5, size 0x1
    bool locked; // offset 0xE6, size 0x1
    bool forcehdr; // offset 0xE7, size 0x1
    bool restoreFocus; // offset 0xE8, size 0x1
    class UI_Motion * motion; // offset 0xEC, size 0x4
    float motionTime; // offset 0xF0, size 0x4
    bool motionFiredEvent; // offset 0xF4, size 0x1
    bool motionLoop; // offset 0xF5, size 0x1
};
// total size: 0x40
class State {
    // Members
    class Vector position; // offset 0x0, size 0x10
    class Vector scale; // offset 0x10, size 0x10
    class Vector rotation; // offset 0x20, size 0x10
    class xColor color; // offset 0x30, size 0x4
    unsigned char brightness; // offset 0x34, size 0x1
    unsigned char pad[3]; // offset 0x35, size 0x3
};
// total size: 0x4
class ScaleformOGAsset {};
// total size: 0x24
class ScaleformBlobEntity : public BlobEntity {
    // Members
    class ScaleformBlobAsset * asset; // offset 0x18, size 0x4
    int assetSize; // offset 0x1C, size 0x4
    bool deferDestroy : 1; // offset 0x20, size 0x1, bit offset 0
    unsigned int pad : 31; // offset 0x20, size 0x4, bit offset 1
};
// total size: 0x10
class ScaleformBlobAsset : public Asset {
    // Members
    class ScaleformAsset assetData; // offset 0x0, size 0x10
};
// total size: 0x1
class Asset {};
// total size: 0x10
class ScaleformAsset {
    // Members
    unsigned int textureListOffset; // offset 0x0, size 0x4
    unsigned int numTextures; // offset 0x4, size 0x4
    unsigned int isFont; // offset 0x8, size 0x4
    unsigned int dataOffset; // offset 0xC, size 0x4
};
// total size: 0x40
class emitterBase : public xOGEntity {
    // Members
    class effectAsset * pEffectAsset; // offset 0x3C, size 0x4
};
// total size: 0x38
class effectAsset : public xBaseAsset {
    // Members
    float time; // offset 0x10, size 0x4
    float intensity; // offset 0x14, size 0x4
    unsigned int id; // offset 0x18, size 0x4
    unsigned char priority; // offset 0x1C, size 0x1
    unsigned char type; // offset 0x1D, size 0x1
    unsigned char rumbleInPause; // offset 0x1E, size 0x1
    unsigned char focusType; // offset 0x1F, size 0x1
    float param1; // offset 0x20, size 0x4
    float param2; // offset 0x24, size 0x4
    float shakeMagnitude; // offset 0x28, size 0x4
    float shakeCycleMax; // offset 0x2C, size 0x4
    float shakeRotationalMagnitude; // offset 0x30, size 0x4
    bool shakeY; // offset 0x34, size 0x1
};
enum eScaleformStatus {
    eStatus_Stopped = 0,
    eStatus_Paused = 1,
    eStatus_Playing = 2,
};
// total size: 0x34
class TRCMsgBox {
    // Members
    char * message; // offset 0x0, size 0x4
    char * yesText; // offset 0x4, size 0x4
    char * noText; // offset 0x8, size 0x4
    char * header; // offset 0xC, size 0x4
    enum ImageType image; // offset 0x10, size 0x4
    enum ButtonPromptType promptType; // offset 0x14, size 0x4
    enum MessageType msgType; // offset 0x18, size 0x4
    enum ResponseType responseType; // offset 0x1C, size 0x4
    enum InputType inputType; // offset 0x20, size 0x4
    bool defaultNo; // offset 0x24, size 0x1
    void * userData; // offset 0x28, size 0x4
    enum VisibleState state; // offset 0x2C, size 0x4
};
enum ImageType {
    Image_None = 0,
    Image_Caution = 1,
    Image_Danger = 2,
    Image_Join = 3,
    Image_Save = 4,
};
enum ButtonPromptType {
    Button_None = 0,
    Button_OK = 1,
    Button_OK_Back = 2,
    Button_Yes_No = 3,
    Button_Yes_No_Large = 4,
    Button_Yes_No_Base = 5,
    Button_No = 6,
    Button_Max = 7,
};
enum MessageType {
    MsgType_HighPriority = 0,
    MsgType_SaveLoad_Status = 1,
    MsgType_Controller = 2,
    MsgType_MidPriority = 3,
    MsgType_SaveLoad_Input = 4,
    MsgType_Nunchuk = 5,
    MsgType_LowPriority = 6,
    MsgType_Max = 7,
};
enum ResponseType {
    Response_Preempted = 4294967295,
    Response_None = 0,
    Response_OK = 1,
    Response_Back = 2,
    Response_Yes = 1,
    Response_No = 2,
};
enum InputType {
    InputTypeNone = 0,
    InputTypeP1 = 1,
    InputTypeP2 = 2,
    InputTypeP3 = 4,
    InputTypeP4 = 8,
    InputTypePrimary = 128,
    InputTypeAllPads = 15,
};
enum VisibleState {
    State_Hidden = 0,
    State_Visible = 1,
    State_Closing = 2,
    State_Opening = 3,
};
// total size: 0xC
class xHierarchyBoundInitData {
    // Members
    signed char bone; // offset 0x0, size 0x1
    float radius; // offset 0x4, size 0x4
    unsigned short userData; // offset 0x8, size 0x2
};
// total size: 0x210
class xIniFile {
    // Members
    int NumValues; // offset 0x0, size 0x4
    int NumSections; // offset 0x4, size 0x4
    class xIniValue * Values; // offset 0x8, size 0x4
    class xIniSection * Sections; // offset 0xC, size 0x4
    char name[256]; // offset 0x10, size 0x100
    char pathname[256]; // offset 0x110, size 0x100
};
// total size: 0x8
class xIniValue {
    // Members
    char * tok; // offset 0x0, size 0x4
    char * val; // offset 0x4, size 0x4
};
// total size: 0xC
class xIniSection {
    // Members
    char * sec; // offset 0x0, size 0x4
    int first; // offset 0x4, size 0x4
    int count; // offset 0x8, size 0x4
};
// total size: 0xC
class bit_array_alloc : public bit_array_base {
    // Members
    unsigned char * alloc_bytes; // offset 0x8, size 0x4
};
// total size: 0x8
class bit_array_base {
    // Members
    unsigned char * bytes; // offset 0x0, size 0x4
    unsigned int count; // offset 0x4, size 0x4
};
// total size: 0x40
class Contents {
    // Members
    class Vector4 data[4]; // offset 0x0, size 0x40
};
// total size: 0x10
class EventActionSetColorIntensity : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
    float param1; // offset 0x4, size 0x4
    float param2; // offset 0x8, size 0x4
    float param3; // offset 0xC, size 0x4
};
// total size: 0x10
class EventActionStartLightEffect : public EventActionNew {
    // Members
    bool param0; // offset 0x0, size 0x1
    class uid paramWidgetAssetID; // offset 0x8, size 0x8
};
// total size: 0x40
class xLightEffectFlicker : public xLightEffectBase {
    // Members
    class xLightEffectFlickerAsset * tasset; // offset 0x3C, size 0x4
};
// total size: 0x30
class xLightEffectFlickerAsset : public xBaseAsset {
    // Members
    class ColorF maxColorVariation; // offset 0x10, size 0x10
    float flickerRate; // offset 0x20, size 0x4
    float randomFlickerRate; // offset 0x24, size 0x4
    float blendTime; // offset 0x28, size 0x4
    unsigned int flags; // offset 0x2C, size 0x4
};
// total size: 0x40
class xLightEffectStrobe : public xLightEffectBase {
    // Members
    class xLightEffectStrobeAsset * tasset; // offset 0x3C, size 0x4
};
// total size: 0x38
class xLightEffectStrobeAsset : public xBaseAsset {
    // Members
    class ColorF minColor; // offset 0x10, size 0x10
    float fadeUpTime; // offset 0x20, size 0x4
    float fadeDownTime; // offset 0x24, size 0x4
    float timeMax; // offset 0x28, size 0x4
    float timeMin; // offset 0x2C, size 0x4
    float randomTimeMax; // offset 0x30, size 0x4
    float randomTimeMin; // offset 0x34, size 0x4
};
// total size: 0x20
class xFuncPiece {
    // Members
    float coef[5]; // offset 0x0, size 0x14
    float end; // offset 0x14, size 0x4
    int order; // offset 0x18, size 0x4
    class xFuncPiece * next; // offset 0x1C, size 0x4
};
// total size: 0x2C
class xIsect {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    float penned; // offset 0x4, size 0x4
    float contained; // offset 0x8, size 0x4
    float lapped; // offset 0xC, size 0x4
    class xVec3 point; // offset 0x10, size 0xC
    class xVec3 norm; // offset 0x1C, size 0xC
    float dist; // offset 0x28, size 0x4
};
// total size: 0x20
class BlockAllocatorArray {
    // Members
    int blockSize; // offset 0x4, size 0x4
    int size; // offset 0x8, size 0x4
    class Block * blockPool; // offset 0xC, size 0x4
    class Block * backBlock; // offset 0x10, size 0x4
    int blockCount; // offset 0x14, size 0x4
    enum GlobalHeapEnum heap; // offset 0x18, size 0x4
    enum eMemMgrTag memTag; // offset 0x1C, size 0x4
};
// total size: 0x10
class Block {
    // Members
    void * * pool; // offset 0x0, size 0x4
    class Block * next; // offset 0x4, size 0x4
    class Block * prev; // offset 0x8, size 0x4
    int idx; // offset 0xC, size 0x4
};
enum GlobalHeapEnum {
    GlobalHeap = 0,
    GlobalHeapMain = 1,
    GlobalHeapSecondary = 2,
    GlobalHeapDefault = 2,
};
// total size: 0x228
class xMemWatermark {
    // Members
    class Block * blockList; // offset 0x0, size 0x4
    int numWatermarks; // offset 0x4, size 0x4
    class WaterMark watermarkList[32]; // offset 0x8, size 0x200
    class BlockAllocatorArray overSizedList; // offset 0x208, size 0x20
};
// total size: 0x10
class Block {
    // Members
    class Block * next; // offset 0x0, size 0x4
    int free; // offset 0x4, size 0x4
    int pad[2]; // offset 0x8, size 0x8
};
// total size: 0x10
class WaterMark {
    // Members
    class Block * blockPtr; // offset 0x0, size 0x4
    int blockFree; // offset 0x4, size 0x4
    int oversizedIdx; // offset 0x8, size 0x4
    unsigned char * smallAlloc; // offset 0xC, size 0x4
};
// total size: 0x60
class RefUniqueAnimation {
    // Members
    class xAnimFile animFile; // offset 0x0, size 0x40
    void * animFileRawDataPtr; // offset 0x40, size 0x4
    unsigned long long animID; // offset 0x48, size 0x8
    unsigned int refCount; // offset 0x50, size 0x4
    class RefUniqueAnimation * next; // offset 0x54, size 0x4
    class RefUniqueAnimation * previous; // offset 0x58, size 0x4
};
// total size: 0x20
class xRefModelAnimationData {
    // Members
    unsigned long long animationID; // offset 0x0, size 0x8
    unsigned long long referenceID; // offset 0x8, size 0x8
    unsigned int firstBoundInstance; // offset 0x10, size 0x4
    int numBoundInstances; // offset 0x14, size 0x4
    bool looping; // offset 0x18, size 0x1
    bool randomizeStartTime; // offset 0x19, size 0x1
};
// total size: 0xC
class CBNetworkFiller {
    // Members
    class xMovePoint * * movePointsArray; // offset 0x0, size 0x4
    int arrayLength; // offset 0x4, size 0x4
    int curNum; // offset 0x8, size 0x4
};
// total size: 0xC
class CBNetworkClosestMP {
    // Members
    class xVec3 & toPos; // offset 0x0, size 0x4
    class xMovePoint * minDistMP; // offset 0x4, size 0x4
    float minMPDistance2; // offset 0x8, size 0x4
};
// total size: 0xC
class CBNetworkFarthestMP {
    // Members
    class xVec3 & toPos; // offset 0x0, size 0x4
    class xMovePoint * maxDistMP; // offset 0x4, size 0x4
    float maxMPDistance2; // offset 0x8, size 0x4
};
// total size: 0xC
class CBNetworkIndexedMP {
    // Members
    unsigned int index; // offset 0x0, size 0x4
    unsigned int count; // offset 0x4, size 0x4
    class xMovePoint * indexedMP; // offset 0x8, size 0x4
};
// total size: 0x48
class EntityHandle : public EntityHandleBase {};
// total size: 0x24
class xParabola {
    // Members
    class xVec3 initPos; // offset 0x0, size 0xC
    class xVec3 initVel; // offset 0xC, size 0xC
    float gravity; // offset 0x18, size 0x4
    float minTime; // offset 0x1C, size 0x4
    float maxTime; // offset 0x20, size 0x4
};
// total size: 0x38
class internal_system : public xParticleBatchSystem {
    // Members
    class Texture * overrideTexture; // offset 0x1C, size 0x4
    class block_info * block_list; // offset 0x20, size 0x4
    int blocks_used; // offset 0x24, size 0x4
    int units_used; // offset 0x28, size 0x4
    int units_per_block; // offset 0x2C, size 0x4
    class block_info * best_block; // offset 0x30, size 0x4
    class internal_system * next; // offset 0x34, size 0x4
};
// total size: 0x1C
class xParticleBatchSystem {
    // Members
    int (* update)(int & outVisible, unsigned char * outmem, int memCount, int memStart, unsigned char * mem, int count, float dt, void * context, float * outBoundLower, float * outBoundUpper); // offset 0x0, size 0x4
    void (* setupgeo)(unsigned char * mem, int count, class ParticleGeometry & geom, void * context, class Matrix43 & camMat); // offset 0x4, size 0x4
    void * context; // offset 0x8, size 0x4
    class ImmediatePrototypeEntity * entity; // offset 0xC, size 0x4
    int tempstride; // offset 0x10, size 0x4
    int stride; // offset 0x14, size 0x4
    bool sorted; // offset 0x18, size 0x1
};
// total size: 0x44
class ParticleGeometry {
    // Members
    class ImmediateContext immCtxt; // offset 0x0, size 0x2C
    int ioffset; // offset 0x2C, size 0x4
    int voffset; // offset 0x30, size 0x4
    class Renderable3DTransform * xform; // offset 0x34, size 0x4
    class ParticleSorter * sorter; // offset 0x38, size 0x4
    int count; // offset 0x3C, size 0x4
    int total; // offset 0x40, size 0x4
};
// total size: 0x2C
class ImmediateContext {
    // Members
    class VertexType * verts; // offset 0x0, size 0x4
    unsigned short * indices; // offset 0x4, size 0x4
    class ImmediateGeometryEntity * geomEnt; // offset 0x8, size 0x4
    class ImmediateGeometry * geom; // offset 0xC, size 0x4
    int vertexCount; // offset 0x10, size 0x4
    int primCount; // offset 0x14, size 0x4
    int indexCount; // offset 0x18, size 0x4
    enum StateEnum state; // offset 0x1C, size 0x4
    class ImmediateGeometryContext igeomCtxt; // offset 0x20, size 0xC
};
// total size: 0x18
class VertexType {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    unsigned int color; // offset 0xC, size 0x4
    float tu; // offset 0x10, size 0x4
    float tv; // offset 0x14, size 0x4
};
// total size: 0x18
class ParticleSorter {
    // Members
    int num; // offset 0x0, size 0x4
    class xVec4 viewPlane; // offset 0x4, size 0x10
    class SortGroup * indexGroups; // offset 0x14, size 0x4
};
// total size: 0x8
class SortGroup {
    // Members
    unsigned short index; // offset 0x0, size 0x2
    class @class __anon; // offset 0x4, size 0x4
    int distI; // offset 0x4, size 0x4
    float distF; // offset 0x4, size 0x4
};
// total size: 0x4
class @class {
    // Members
    int distI; // offset 0x0, size 0x4
    float distF; // offset 0x0, size 0x4
};
// total size: 0xC
class block_info {
    // Members
    unsigned char * mem; // offset 0x0, size 0x4
    int used; // offset 0x4, size 0x4
    class block_info * next; // offset 0x8, size 0x4
};
// total size: 0x10
class system_bucket {
    // Members
    class @class __anon; // offset 0x0, size 0x4
    int rskey; // offset 0x0, size 0x4
    class @class __anon; // offset 0x0, size 0x4
    unsigned char src_blend; // offset 0x0, size 0x1
    unsigned char dst_blend; // offset 0x1, size 0x1
    unsigned short flags; // offset 0x2, size 0x2
    unsigned int order_group; // offset 0x4, size 0x4
    int order_index; // offset 0x8, size 0x4
    class internal_system * systems; // offset 0xC, size 0x4
};
// total size: 0x4
class @class {
    // Members
    int rskey; // offset 0x0, size 0x4
    class @class __anon; // offset 0x0, size 0x4
    unsigned char src_blend; // offset 0x0, size 0x1
    unsigned char dst_blend; // offset 0x1, size 0x1
    unsigned short flags; // offset 0x2, size 0x2
};
// total size: 0x4
class @class {
    // Members
    unsigned char src_blend; // offset 0x0, size 0x1
    unsigned char dst_blend; // offset 0x1, size 0x1
    unsigned short flags; // offset 0x2, size 0x2
};
// total size: 0x1
class less {};
// total size: 0x8
class xRegionLanguageFlagMap {
    // Members
    char * regionCode; // offset 0x0, size 0x4
    enum xRegionLanguageFlag flag; // offset 0x4, size 0x4
};
enum xRegionLanguageFlag {
    X_REGION_LANG_EN_US = 1,
    X_REGION_LANG_EN_UK = 2,
    X_REGION_LANG_DA_DK = 4,
    X_REGION_LANG_NL_NL = 8,
    X_REGION_LANG_FI_FI = 16,
    X_REGION_LANG_FR_FR = 32,
    X_REGION_LANG_DE_DE = 64,
    X_REGION_LANG_GR_GR = 128,
    X_REGION_LANG_IT_IT = 256,
    X_REGION_LANG_JA_JP = 512,
    X_REGION_LANG_KO_KR = 1024,
    X_REGION_LANG_NO_NO = 2048,
    X_REGION_LANG_PT_PT = 4096,
    X_REGION_LANG_PT_BZ = 8192,
    X_REGION_LANG_RU_RU = 16384,
    X_REGION_LANG_ES_ES = 32768,
    X_REGION_LANG_SV_SE = 65536,
    X_REGION_LANG_AR_AE = 131072,
    X_REGION_LANG_CZ_CZ = 262144,
    X_REGION_LANG_PO_PO = 524288,
};
// total size: 0x40
class effect : public emitterBase {};
// total size: 0x48
class boxEmitter : public emitterBase {
    // Members
    class boxEmitterAsset * pAsset; // offset 0x40, size 0x4
};
// total size: 0x38
class boxEmitterAsset : public xBaseAsset {
    // Members
    unsigned long long effectID; // offset 0x10, size 0x8
    class xVec3 minCorner; // offset 0x18, size 0xC
    class xVec3 maxCorner; // offset 0x24, size 0xC
    bool onlyOnFloor; // offset 0x30, size 0x1
};
// total size: 0x48
class sphericalEmitter : public emitterBase {
    // Members
    class sphericalEmitterAsset * pAsset; // offset 0x40, size 0x4
    float radiusSqrd; // offset 0x44, size 0x4
};
// total size: 0x30
class sphericalEmitterAsset : public xBaseAsset {
    // Members
    unsigned long long effectID; // offset 0x10, size 0x8
    float radius; // offset 0x18, size 0x4
    class xVec3 position; // offset 0x1C, size 0xC
    bool onlyRumbleOnY; // offset 0x28, size 0x1
    bool fallOff; // offset 0x29, size 0x1
    bool onlyOnFloor; // offset 0x2A, size 0x1
};
// total size: 0x10
class effectInternal {
    // Members
    class emitterBase * pEmitter; // offset 0x0, size 0x4
    float timeToLive; // offset 0x4, size 0x4
    float prevMagFraction; // offset 0x8, size 0x4
    bool rumbleForever; // offset 0xC, size 0x1
};
// total size: 0x828
class Manager {
    // Members
    class padInfo m_padInfo[4]; // offset 0x0, size 0x810
    class effectInternal m_shakeFX; // offset 0x810, size 0x10
    bool rumbleEnabled[4]; // offset 0x820, size 0x4
    bool rumbleEnabledAll; // offset 0x824, size 0x1
};
// total size: 0x204
class padInfo {
    // Members
    class effectInternal m_effects[32]; // offset 0x0, size 0x200
    class effectInternal * m_currentExclusive; // offset 0x200, size 0x4
};
// total size: 0x50
class RenderedPhysicsModel {
    // Members
    bool isOwnedModel; // offset 0x0, size 0x1
    class xOGModel * renderModel; // offset 0x4, size 0x4
    class hkpRigidBody * physicsRigidBody; // offset 0x8, size 0x4
    class hkTransform initialTransform; // offset 0x10, size 0x40
};
enum zUpHavokBodyOwner {
    UP_RPM_OWNER_UNKNOWN = 16,
    UP_OWNER_DRAG_ROPE = 17,
    UP_RPM_OWNER_XBASE = 2147483649,
    UP_RPM_OWNER_FLOATING_OBJ = 2147483650,
    UP_RPM_OWNER_FLOAT_BALLOON = 2147483651,
    UP_RPM_OWNER_TRAP_KNOT = 2147483652,
    UP_RPM_OWNER_TRAP_ROPE = 2147483653,
    UP_RPM_OWNER_TRAP_TRIP = 2147483654,
    UP_RPM_OWNER_DRAG_HOUSE = 2147483655,
    UP_RPM_OWNER_FLOAT_OBJ = 2147483656,
    UP_RPM_OWNER_FLOATING_COLLECTIBLE = 2147483657,
    UP_RPM_OWNER_BRANCH_SWITCH = 2147483658,
    UP_OWNER_FLOATING_BRIDGE = 2147483659,
    UP_RPM_OWNER_DUG_LEVER = 2147483660,
    UP_RPM_OWNER_CRANK_A = 2147483661,
    UP_RPM_OWNER_CRANK_B = 2147483662,
    UP_RPM_OWNER_LEVER = 2147483663,
    UP_RPM_OWNER_TURRET = 2147483664,
    UP_RPM_OWNER_GEYSER = 2147483665,
    UP_RPM_OWNER_BIPLANE = 2147483666,
    SB_OWNER_HAMMER_HAZARD = 2147483667,
    RPM_OWNER_TYPE_BUGSPAWNER = 2147483668,
    zUpHavokBodyOwners_COUNT = 2147483669,
};
// total size: 0x14
class SaveDataHeader {
    // Members
    unsigned char version; // offset 0x0, size 0x1
    unsigned char empty; // offset 0x1, size 0x1
    unsigned char sceneIdx; // offset 0x2, size 0x1
    unsigned char percentComplete; // offset 0x3, size 0x1
    unsigned char data[4]; // offset 0x4, size 0x4
    unsigned char happinessObjects; // offset 0x8, size 0x1
    unsigned char lives; // offset 0x9, size 0x1
    unsigned int happinessPoints; // offset 0xC, size 0x4
    unsigned long saveDataCRC; // offset 0x10, size 0x4
};
// total size: 0x8
class EventActionOneWidget : public EventActionNew {
    // Members
    class uid paramWidgetAssetID; // offset 0x0, size 0x8
};
// total size: 0x58
class xScreenFade : public xOGEntity {
    // Members
    class asset_type * asset; // offset 0x3C, size 0x4
    enum eScreenFadeState state; // offset 0x40, size 0x4
    class xColor current_color; // offset 0x44, size 0x4
    float time_passed; // offset 0x48, size 0x4
    class xBase * owner; // offset 0x4C, size 0x4
    bool enableRenderingOnPause; // offset 0x50, size 0x1
};
// total size: 0x20
class asset_type : public xBaseAsset {
    // Members
    class xColor dest; // offset 0x10, size 0x4
    float fadeDownTime; // offset 0x14, size 0x4
    float waitTime; // offset 0x18, size 0x4
    float fadeUpTime; // offset 0x1C, size 0x4
};
enum eScreenFadeState {
    eScreenFadeStateOff = 0,
    eScreenFadeStateFadeDown = 1,
    eScreenFadeStateWait = 2,
    eScreenFadeStateFadeUp = 3,
    eScreenFadeStateMax = 4,
};
// total size: 0x30
class warper {
    // Members
    class warper * next; // offset 0x0, size 0x4
    class warper * prev; // offset 0x4, size 0x4
    int flags; // offset 0x8, size 0x4
    float life; // offset 0xC, size 0x4
    float iduration; // offset 0x10, size 0x4
    float radius; // offset 0x14, size 0x4
    float intensity; // offset 0x18, size 0x4
    float freq; // offset 0x1C, size 0x4
    enum type_enum type; // offset 0x20, size 0x4
    class @class __anon; // offset 0x24, size 0xC
    class xVec3 loc3; // offset 0x24, size 0xC
    class xVec2 loc2; // offset 0x24, size 0x8
    class xVec3 * ploc3; // offset 0x24, size 0x4
    class xVec2 * ploc2; // offset 0x24, size 0x4
};
enum type_enum {
    TYPE_INVALID = 4294967295,
    TYPE_WARBLE = 0,
    TYPE_LENS = 1,
    TYPE_RIPPLE = 2,
    TYPE_SHOCKWAVE = 3,
    TYPE_HEAT_SHIMMER = 4,
    TYPE_STATIC_LENS = 5,
    MAX_TYPE = 6,
};
// total size: 0xC
class @class {
    // Members
    class xVec3 loc3; // offset 0x0, size 0xC
    class xVec2 loc2; // offset 0x0, size 0x8
    class xVec3 * ploc3; // offset 0x0, size 0x4
    class xVec2 * ploc2; // offset 0x0, size 0x4
};
// total size: 0x24
class st_XSERIAL_DATA_PRIV {
    // Members
    int flg_info; // offset 0x0, size 0x4
    int * bitbuf; // offset 0x4, size 0x4
    int buf_bytcnt; // offset 0x8, size 0x4
    class st_SERIAL_CLIENTINFO * cltbuf; // offset 0xC, size 0x4
    class st_SERIAL_CLIENTINFO * cltnext; // offset 0x10, size 0x4
    class st_XORDEREDARRAY cltlist; // offset 0x14, size 0x10
};
// total size: 0x8
class st_SERIAL_PERCID_SIZE {
    // Members
    unsigned int idtag; // offset 0x0, size 0x4
    int needsize; // offset 0x4, size 0x4
};
// total size: 0x28
class xSpringyVec3 : public xSpringy {
    // Members
    class xVec3 mVelocity; // offset 0x4, size 0xC
    class xVec3 mGoal; // offset 0x10, size 0xC
    class xVec3 mCurrent; // offset 0x1C, size 0xC
};
// total size: 0x2504
class st_STRAN_DATA {
    // Members
    class st_STRAN_SCENE hipscn[32]; // offset 0x0, size 0x2500
    unsigned int loadlock; // offset 0x2500, size 0x4
};
// total size: 0x128
class st_STRAN_SCENE {
    // Members
    unsigned int scnid; // offset 0x0, size 0x4
    int lockid; // offset 0x4, size 0x4
    class LoadSet * loadSet; // offset 0x8, size 0x4
    int numAssets; // offset 0xC, size 0x4
    bool initialized; // offset 0x10, size 0x1
    class st_STRAN_ASSET * assetList; // offset 0x14, size 0x4
    int numTypes; // offset 0x18, size 0x4
    class st_STRAN_TYPE * typeList; // offset 0x1C, size 0x4
    int flgHipHop; // offset 0x20, size 0x4
    void * userdata; // offset 0x24, size 0x4
    char fnam[256]; // offset 0x28, size 0x100
};
// total size: 0x228
class LoadSet {
    // Members
    class DomLoadProgress domProgress; // offset 0x0, size 0x8
    enum enLSetStat status; // offset 0x8, size 0x4
    unsigned short langID; // offset 0xC, size 0x2
    char domainPath[4][128]; // offset 0xE, size 0x200
    bool domainLoaded[4]; // offset 0x20E, size 0x4
    bool domainReady[4]; // offset 0x212, size 0x4
    class Domain * domainRef[4]; // offset 0x218, size 0x10
};
// total size: 0x8
class DomLoadProgress : public ProgressCB {
    // Members
    class LoadSet * loadSet; // offset 0x4, size 0x4
};
// total size: 0x4
class ProgressCB {};
enum enLSetStat {
    LSTAT_UNDEFINED = 0,
    LSTAT_ERROR = 1,
    LSTAT_QUEUED = 2,
    LSTAT_PENDING = 3,
    LSTAT_GREENLIGHT = 4,
    LSTAT_PREPARING = 5,
    LSTAT_STANDBY = 6,
    LSTAT_UNLOAD = 7,
    LSTAT_DONE = 8,
};
// total size: 0xC
class Domain {
    // Members
    class DomainPriv * domainPriv; // offset 0x0, size 0x4
    enum enStatus domStatus; // offset 0x4, size 0x4
    class ProgressCB * progressMon; // offset 0x8, size 0x4
};
enum enStatus {
    INITING = 0,
    INITED = 1,
    STARTING = 2,
    LOADING = 3,
    LOADED = 4,
    ACTIVATING = 5,
    ACTIVE = 6,
    UNLOADING = 7,
    OBSOLETE = 8,
};
// total size: 0x4
class st_STRAN_ASSET {
    // Members
    class EntityHandleBase * goodie; // offset 0x0, size 0x4
};
// total size: 0xC
class st_STRAN_TYPE {
    // Members
    unsigned int type; // offset 0x0, size 0x4
    int start; // offset 0x4, size 0x4
    int count; // offset 0x8, size 0x4
};
// total size: 0x4
class DomainDirMgr {
    // Members
    class MemHandle * domainDirMem; // offset 0x0, size 0x4
};
// total size: 0x14
class CustomTextRendererFontParams {
    // Members
    char * fontName; // offset 0x0, size 0x4
    float fontSize; // offset 0x4, size 0x4
    unsigned char fontColorRed; // offset 0x8, size 0x1
    unsigned char fontColorGreen; // offset 0x9, size 0x1
    unsigned char fontColorBlue; // offset 0xA, size 0x1
    unsigned char fontColorAlpha; // offset 0xB, size 0x1
    float autoScaleDownMinSize; // offset 0xC, size 0x4
    bool allowAutoScaleDown; // offset 0x10, size 0x1
};
// total size: 0x120
class layout {
    // Members
    class xtextbox tb; // offset 0x0, size 0x88
    class jot_block * first_jot_block; // offset 0x88, size 0x4
    unsigned long _jots_size; // offset 0x8C, size 0x4
    class jot_line_block * first_line_block; // offset 0x90, size 0x4
    unsigned long _lines_size; // offset 0x94, size 0x4
    class context_buffer_block * first_context_buffer; // offset 0x98, size 0x4
    unsigned short dynamics[64]; // offset 0x9C, size 0x80
    unsigned long dynamics_size; // offset 0x11C, size 0x4
};
// total size: 0x388
class jot_block {
    // Members
    class jot jots[16]; // offset 0x0, size 0x380
    class jot_block * next_block; // offset 0x380, size 0x4
    bool used; // offset 0x384, size 0x1
};
// total size: 0x88
class jot_line_block {
    // Members
    class jot_line jot_lines[4]; // offset 0x0, size 0x80
    class jot_line_block * next_block; // offset 0x80, size 0x4
    bool used; // offset 0x84, size 0x1
};
// total size: 0x20
class jot_line {
    // Members
    class basic_rect bounds; // offset 0x0, size 0x10
    float baseline; // offset 0x10, size 0x4
    unsigned long first; // offset 0x14, size 0x4
    unsigned long last; // offset 0x18, size 0x4
    bool page_break; // offset 0x1C, size 0x1
};
// total size: 0x4C
class context_buffer_block {
    // Members
    unsigned char context_buffer[64]; // offset 0x0, size 0x40
    unsigned long size; // offset 0x40, size 0x4
    class context_buffer_block * next_block; // offset 0x44, size 0x4
    bool used; // offset 0x48, size 0x1
};
// total size: 0x1
class xTagParser {
    // Members
    bool mSpam; // offset 0x0, size 0x1
};
// total size: 0x484
class xTextDepot {
    // Members
    char * strings[32]; // offset 0x0, size 0x80
    char characterBuffer[1024]; // offset 0x80, size 0x400
    int characterCount; // offset 0x480, size 0x4
};
// total size: 0x20
class xTimerAsset : public xBaseAsset {
    // Members
    float seconds; // offset 0x10, size 0x4
    float randomRange; // offset 0x14, size 0x4
    unsigned char runsInPause; // offset 0x18, size 0x1
    unsigned char pad[3]; // offset 0x19, size 0x3
};
// total size: 0x48
class xTimer : public xOGEntity {
    // Members
    class xTimerAsset * tasset; // offset 0x3C, size 0x4
    unsigned char state; // offset 0x40, size 0x1
    unsigned char runsInPause; // offset 0x41, size 0x1
    unsigned short flags; // offset 0x42, size 0x2
    float secondsLeft; // offset 0x44, size 0x4
};
// total size: 0xC
class _tagTRCPadInfo {
    // Members
    int id; // offset 0x0, size 0x4
    enum _tagTRCState state; // offset 0x4, size 0x4
    enum _tagTRCPadState padstate; // offset 0x8, size 0x4
};
enum _tagTRCState {
    TRC_Unknown = 0,
    TRC_PadMissing = 1,
    TRC_PadInserted = 2,
    TRC_PadActive = 3,
    TRC_PadPreInserted = 4,
    TRC_PadInvalidNoAnalog = 5,
    TRC_PadInvalidType = 6,
    TRC_DiskNotIdentified = 7,
    TRC_DiskIdentified = 8,
    TRC_DiskTrayOpen = 9,
    TRC_DiskTrayClosed = 10,
    TRC_DiskNoDisk = 11,
    TRC_DiskInvalid = 12,
    TRC_DiskRetry = 13,
    TRC_DiskFatal = 14,
    TRC_Total = 15,
};
enum _tagTRCPadState {
    TRC_PadStateUnknown = 0,
    TRC_PadStatePresent = 1,
    TRC_PadStateMissingDuringGameplay = 2,
    TRC_PadStateMissingDuringCutscene = 3,
    TRC_PadStateMissingDuringMainMenu = 4,
    TRC_PadStateMissingDuringMovie = 5,
    TRC_PadStateMissingDuringLoadSave = 6,
};
// total size: 0x8
class _tagTRCDiskInfo {
    // Members
    enum _tagTRCState state; // offset 0x0, size 0x4
    enum _tagTRCState id; // offset 0x4, size 0x4
};
// total size: 0x18
class xOGStubEntity : public Entity {};
// total size: 0x10
class xUIDMgrAsset {
    // Members
    unsigned int nameHash; // offset 0x0, size 0x4
    unsigned long long aid; // offset 0x8, size 0x8
};
// total size: 0x60
class UIDModelReference {
    // Members
    unsigned int nameHash; // offset 0x0, size 0x4
    unsigned int dummy1; // offset 0x4, size 0x4
    class ModelInstanceAsset mia; // offset 0x10, size 0x40
    class vec3 location; // offset 0x50, size 0xC
};
// total size: 0x10
class xUpdateCullEnt {
    // Members
    unsigned short index; // offset 0x0, size 0x2
    short groupIndex; // offset 0x2, size 0x2
    unsigned int (* update_cull_cb)(void * ent, void * cbdata); // offset 0x4, size 0x4
    void * cbdata; // offset 0x8, size 0x4
    class xUpdateCullEnt * nextInGroup; // offset 0xC, size 0x4
};
// total size: 0x2C
class xUpdateCullMgr {
    // Members
    unsigned int entCount; // offset 0x0, size 0x4
    unsigned int entActive; // offset 0x4, size 0x4
    void * * ent; // offset 0x8, size 0x4
    class xUpdateCullEnt * * mgr; // offset 0xC, size 0x4
    unsigned int mgrCount; // offset 0x10, size 0x4
    unsigned int mgrCurr; // offset 0x14, size 0x4
    class xUpdateCullEnt * mgrList; // offset 0x18, size 0x4
    unsigned int grpCount; // offset 0x1C, size 0x4
    class xUpdateCullGroup * grpList; // offset 0x20, size 0x4
    void (* activateCB)(void * ent); // offset 0x24, size 0x4
    void (* deactivateCB)(void * ent); // offset 0x28, size 0x4
};
// total size: 0xC
class xUpdateCullGroup {
    // Members
    unsigned int active; // offset 0x0, size 0x4
    unsigned short startIndex; // offset 0x4, size 0x2
    unsigned short endIndex; // offset 0x6, size 0x2
    class xGroup * groupObject; // offset 0x8, size 0x4
};
// total size: 0x4
class FloatAndVoid {
    // Members
    float f; // offset 0x0, size 0x4
    void * v; // offset 0x0, size 0x4
};
// total size: 0x4
class ThreadStackMarkSentry {
    // Members
    void * wm; // offset 0x0, size 0x4
};
// total size: 0x40
class xOGAnimationSetEntity : public xOGEntity {};
enum exAnimStateFlags {
    AnimState_IndexMask = 15,
    AnimState_EndStop = 0,
    AnimState_EndLoop = 16,
    AnimState_EndTransition = 32,
    AnimState_EndFadeOut = 48,
    AnimState_EndTranToSelf = 64,
    AnimState_EndMask = 112,
    AnimState_Randomize = 256,
    AnimState_FadeAtEnd = 512,
    AnimState_CopyOnWrite = 1024,
    AnimState_Temp = 2048,
};
// total size: 0x1D8
class BINKTEXTURESET {
    // Members
    class BINKFRAMETEXTURES textures[2]; // offset 0x0, size 0x100
    class BINKFRAMEBUFFERS bink_buffers; // offset 0x100, size 0x78
    void * base_ptr; // offset 0x178, size 0x4
    unsigned int framesize; // offset 0x17C, size 0x4
    unsigned int YAdeswizzle_width; // offset 0x180, size 0x4
    unsigned int YAdeswizzle_height; // offset 0x184, size 0x4
    unsigned int cRcBdeswizzle_width; // offset 0x188, size 0x4
    unsigned int cRcBdeswizzle_height; // offset 0x18C, size 0x4
    class _GXTexObj YAdeswizzle; // offset 0x190, size 0x20
    class _GXTexObj cRcBdeswizzle; // offset 0x1B0, size 0x20
    int drawing[2]; // offset 0x1D0, size 0x8
};
// total size: 0x80
class BINKFRAMETEXTURES {
    // Members
    class _GXTexObj Ytexture; // offset 0x0, size 0x20
    class _GXTexObj cRtexture; // offset 0x20, size 0x20
    class _GXTexObj cBtexture; // offset 0x40, size 0x20
    class _GXTexObj Atexture; // offset 0x60, size 0x20
};
// total size: 0x78
class BINKFRAMEBUFFERS {
    // Members
    int TotalFrames; // offset 0x0, size 0x4
    unsigned int YABufferWidth; // offset 0x4, size 0x4
    unsigned int YABufferHeight; // offset 0x8, size 0x4
    unsigned int cRcBBufferWidth; // offset 0xC, size 0x4
    unsigned int cRcBBufferHeight; // offset 0x10, size 0x4
    unsigned int FrameNum; // offset 0x14, size 0x4
    class BINKFRAMEPLANESET Frames[2]; // offset 0x18, size 0x60
};
// total size: 0x30
class BINKFRAMEPLANESET {
    // Members
    class BINKPLANE YPlane; // offset 0x0, size 0xC
    class BINKPLANE cRPlane; // offset 0xC, size 0xC
    class BINKPLANE cBPlane; // offset 0x18, size 0xC
    class BINKPLANE APlane; // offset 0x24, size 0xC
};
// total size: 0xC
class BINKPLANE {
    // Members
    int Allocate; // offset 0x0, size 0x4
    void * Buffer; // offset 0x4, size 0x4
    unsigned int BufferPitch; // offset 0x8, size 0x4
};
// total size: 0x388
class BINK {
    // Members
    unsigned int Width; // offset 0x0, size 0x4
    unsigned int Height; // offset 0x4, size 0x4
    unsigned int Frames; // offset 0x8, size 0x4
    unsigned int FrameNum; // offset 0xC, size 0x4
    unsigned int LastFrameNum; // offset 0x10, size 0x4
    unsigned int FrameRate; // offset 0x14, size 0x4
    unsigned int FrameRateDiv; // offset 0x18, size 0x4
    unsigned int ReadError; // offset 0x1C, size 0x4
    unsigned int OpenFlags; // offset 0x20, size 0x4
    unsigned int BinkType; // offset 0x24, size 0x4
    unsigned int Size; // offset 0x28, size 0x4
    unsigned int FrameSize; // offset 0x2C, size 0x4
    unsigned int SndSize; // offset 0x30, size 0x4
    class BINKRECT FrameRects[8]; // offset 0x34, size 0x80
    int NumRects; // offset 0xB4, size 0x4
    class BINKFRAMEBUFFERS * FrameBuffers; // offset 0xB8, size 0x4
    void * MaskPlane; // offset 0xBC, size 0x4
    unsigned int MaskPitch; // offset 0xC0, size 0x4
    unsigned int MaskLength; // offset 0xC4, size 0x4
    unsigned int LargestFrameSize; // offset 0xC8, size 0x4
    unsigned int InternalFrames; // offset 0xCC, size 0x4
    int NumTracks; // offset 0xD0, size 0x4
    unsigned int Highest1SecRate; // offset 0xD4, size 0x4
    unsigned int Highest1SecFrame; // offset 0xD8, size 0x4
    int Paused; // offset 0xDC, size 0x4
    unsigned int BackgroundThread; // offset 0xE0, size 0x4
    void * compframe; // offset 0xE4, size 0x4
    void * preloadptr; // offset 0xE8, size 0x4
    unsigned int * frameoffsets; // offset 0xEC, size 0x4
    class BINKIO bio; // offset 0xF0, size 0x144
    unsigned char * ioptr; // offset 0x234, size 0x4
    unsigned int iosize; // offset 0x238, size 0x4
    unsigned int decompwidth; // offset 0x23C, size 0x4
    unsigned int decompheight; // offset 0x240, size 0x4
    int * trackindexes; // offset 0x244, size 0x4
    unsigned int * tracksizes; // offset 0x248, size 0x4
    unsigned int * tracktypes; // offset 0x24C, size 0x4
    int * trackIDs; // offset 0x250, size 0x4
    unsigned int numrects; // offset 0x254, size 0x4
    unsigned int playedframes; // offset 0x258, size 0x4
    unsigned int firstframetime; // offset 0x25C, size 0x4
    unsigned int startframetime; // offset 0x260, size 0x4
    unsigned int startblittime; // offset 0x264, size 0x4
    unsigned int startsynctime; // offset 0x268, size 0x4
    unsigned int startsyncframe; // offset 0x26C, size 0x4
    unsigned int twoframestime; // offset 0x270, size 0x4
    unsigned int entireframetime; // offset 0x274, size 0x4
    unsigned int slowestframetime; // offset 0x278, size 0x4
    unsigned int slowestframe; // offset 0x27C, size 0x4
    unsigned int slowest2frametime; // offset 0x280, size 0x4
    unsigned int slowest2frame; // offset 0x284, size 0x4
    unsigned int soundon; // offset 0x288, size 0x4
    unsigned int videoon; // offset 0x28C, size 0x4
    unsigned int totalmem; // offset 0x290, size 0x4
    unsigned int timevdecomp; // offset 0x294, size 0x4
    unsigned int timeadecomp; // offset 0x298, size 0x4
    unsigned int timeblit; // offset 0x29C, size 0x4
    unsigned int timeopen; // offset 0x2A0, size 0x4
    unsigned int fileframerate; // offset 0x2A4, size 0x4
    unsigned int fileframeratediv; // offset 0x2A8, size 0x4
    unsigned int runtimeframes; // offset 0x2AC, size 0x4
    int rtindex; // offset 0x2B0, size 0x4
    unsigned int * rtframetimes; // offset 0x2B4, size 0x4
    unsigned int * rtadecomptimes; // offset 0x2B8, size 0x4
    unsigned int * rtvdecomptimes; // offset 0x2BC, size 0x4
    unsigned int * rtblittimes; // offset 0x2C0, size 0x4
    unsigned int * rtreadtimes; // offset 0x2C4, size 0x4
    unsigned int * rtidlereadtimes; // offset 0x2C8, size 0x4
    unsigned int * rtthreadreadtimes; // offset 0x2CC, size 0x4
    unsigned int lastblitflags; // offset 0x2D0, size 0x4
    unsigned int lastdecompframe; // offset 0x2D4, size 0x4
    unsigned int lastresynctime; // offset 0x2D8, size 0x4
    unsigned int doresync; // offset 0x2DC, size 0x4
    unsigned int skipcount; // offset 0x2E0, size 0x4
    unsigned int toofewskipstomask; // offset 0x2E4, size 0x4
    unsigned int playingtracks; // offset 0x2E8, size 0x4
    unsigned int soundskips; // offset 0x2EC, size 0x4
    class BINKSND * bsnd; // offset 0x2F0, size 0x4
    unsigned int skippedlastblit; // offset 0x2F4, size 0x4
    unsigned int skipped_status_this_frame; // offset 0x2F8, size 0x4
    unsigned int very_delayed; // offset 0x2FC, size 0x4
    unsigned int skippedblits; // offset 0x300, size 0x4
    class BUNDLEPOINTERS bunp; // offset 0x304, size 0x24
    unsigned int skipped_in_a_row; // offset 0x328, size 0x4
    unsigned int paused_sync_diff; // offset 0x32C, size 0x4
    unsigned int last_time_almost_empty; // offset 0x330, size 0x4
    unsigned int last_read_count; // offset 0x334, size 0x4
    unsigned int last_sound_count; // offset 0x338, size 0x4
    unsigned int snd_callback_buffer[16]; // offset 0x33C, size 0x40
    int allkeys; // offset 0x37C, size 0x4
    unsigned int compframesize; // offset 0x380, size 0x4
    class BINKFRAMEBUFFERS * allocatedframebuffers; // offset 0x384, size 0x4
};
// total size: 0x10
class BINKRECT {
    // Members
    int Left; // offset 0x0, size 0x4
    int Top; // offset 0x4, size 0x4
    int Width; // offset 0x8, size 0x4
    int Height; // offset 0xC, size 0x4
};
// total size: 0x144
class BINKIO {
    // Members
    unsigned int (* ReadHeader)(class BINKIO * Bnkio, int Offset, void * Dest, unsigned int Size); // offset 0x0, size 0x4
    unsigned int (* ReadFrame)(class BINKIO * Bnkio, unsigned int Framenum, int origofs, void * dest, unsigned int size); // offset 0x4, size 0x4
    unsigned int (* GetBufferSize)(class BINKIO * Bnkio, unsigned int Size); // offset 0x8, size 0x4
    void (* SetInfo)(class BINKIO * Bnkio, void * Buf, unsigned int Size, unsigned int FileSize, unsigned int simulate); // offset 0xC, size 0x4
    unsigned int (* Idle)(class BINKIO * Bnkio); // offset 0x10, size 0x4
    void (* Close)(class BINKIO * Bnkio); // offset 0x14, size 0x4
    int (* BGControl)(class BINKIO * Bnkio, unsigned int Control); // offset 0x18, size 0x4
    class BINK * bink; // offset 0x1C, size 0x4
    unsigned int ReadError; // offset 0x20, size 0x4
    unsigned int DoingARead; // offset 0x24, size 0x4
    unsigned int BytesRead; // offset 0x28, size 0x4
    unsigned int Working; // offset 0x2C, size 0x4
    unsigned int TotalTime; // offset 0x30, size 0x4
    unsigned int ForegroundTime; // offset 0x34, size 0x4
    unsigned int IdleTime; // offset 0x38, size 0x4
    unsigned int ThreadTime; // offset 0x3C, size 0x4
    unsigned int BufSize; // offset 0x40, size 0x4
    unsigned int BufHighUsed; // offset 0x44, size 0x4
    unsigned int CurBufSize; // offset 0x48, size 0x4
    unsigned int CurBufUsed; // offset 0x4C, size 0x4
    unsigned int Suspended; // offset 0x50, size 0x4
    unsigned char iodata[160]; // offset 0x54, size 0xA0
    void (* suspend_callback)(class BINKIO * Bnkio); // offset 0xF4, size 0x4
    int (* try_suspend_callback)(class BINKIO * Bnkio); // offset 0xF8, size 0x4
    void (* resume_callback)(class BINKIO * Bnkio); // offset 0xFC, size 0x4
    void (* idle_on_callback)(class BINKIO * Bnkio); // offset 0x100, size 0x4
    unsigned int callback_control[16]; // offset 0x104, size 0x40
};
// total size: 0x17C
class BINKSND {
    // Members
    int (* Ready)(class BINKSND * BnkSnd); // offset 0x0, size 0x4
    int (* Lock)(class BINKSND * BnkSnd, unsigned char * * addr, unsigned int * len); // offset 0x4, size 0x4
    int (* Unlock)(class BINKSND * BnkSnd, unsigned int filled); // offset 0x8, size 0x4
    void (* Volume)(class BINKSND * BnkSnd, int volume); // offset 0xC, size 0x4
    void (* Pan)(class BINKSND * BnkSnd, int pan); // offset 0x10, size 0x4
    int (* Pause)(class BINKSND * BnkSnd, int status); // offset 0x14, size 0x4
    int (* SetOnOff)(class BINKSND * BnkSnd, int status); // offset 0x18, size 0x4
    void (* Close)(class BINKSND * BnkSnd); // offset 0x1C, size 0x4
    void (* MixBins)(class BINKSND * BnkSnd, unsigned int * mix_bins, unsigned int total); // offset 0x20, size 0x4
    void (* MixBinVols)(class BINKSND * BnkSnd, unsigned int * vol_mix_bins, int * volumes, unsigned int total); // offset 0x24, size 0x4
    unsigned int sndbufsize; // offset 0x28, size 0x4
    unsigned char * sndbuf; // offset 0x2C, size 0x4
    unsigned char * sndend; // offset 0x30, size 0x4
    unsigned char * sndwritepos; // offset 0x34, size 0x4
    unsigned char * sndreadpos; // offset 0x38, size 0x4
    unsigned int sndcomp; // offset 0x3C, size 0x4
    unsigned int sndamt; // offset 0x40, size 0x4
    unsigned int sndconvert8; // offset 0x44, size 0x4
    unsigned int sndendframe; // offset 0x48, size 0x4
    unsigned int sndprime; // offset 0x4C, size 0x4
    unsigned int sndpad; // offset 0x50, size 0x4
    unsigned int BestSizeIn16; // offset 0x54, size 0x4
    unsigned int BestSizeMask; // offset 0x58, size 0x4
    unsigned int SoundDroppedOut; // offset 0x5C, size 0x4
    int NoThreadService; // offset 0x60, size 0x4
    int OnOff; // offset 0x64, size 0x4
    unsigned int Latency; // offset 0x68, size 0x4
    unsigned int VideoScale; // offset 0x6C, size 0x4
    unsigned int freq; // offset 0x70, size 0x4
    int bits; // offset 0x74, size 0x4
    int chans; // offset 0x78, size 0x4
    unsigned char snddata[256]; // offset 0x7C, size 0x100
};
// total size: 0x24
class BUNDLEPOINTERS {
    // Members
    void * typeptr; // offset 0x0, size 0x4
    void * type16ptr; // offset 0x4, size 0x4
    void * colorptr; // offset 0x8, size 0x4
    void * bits2ptr; // offset 0xC, size 0x4
    void * motionXptr; // offset 0x10, size 0x4
    void * motionYptr; // offset 0x14, size 0x4
    void * dctptr; // offset 0x18, size 0x4
    void * mdctptr; // offset 0x1C, size 0x4
    void * patptr; // offset 0x20, size 0x4
};
// total size: 0x3C
class _GXRenderModeObj {
    // Members
    enum VITVMode viTVmode; // offset 0x0, size 0x4
    unsigned short fbWidth; // offset 0x4, size 0x2
    unsigned short efbHeight; // offset 0x6, size 0x2
    unsigned short xfbHeight; // offset 0x8, size 0x2
    unsigned short viXOrigin; // offset 0xA, size 0x2
    unsigned short viYOrigin; // offset 0xC, size 0x2
    unsigned short viWidth; // offset 0xE, size 0x2
    unsigned short viHeight; // offset 0x10, size 0x2
    enum VIXFBMode xFBmode; // offset 0x14, size 0x4
    unsigned char field_rendering; // offset 0x18, size 0x1
    unsigned char aa; // offset 0x19, size 0x1
    unsigned char sample_pattern[12][2]; // offset 0x1A, size 0x18
    unsigned char vfilter[7]; // offset 0x32, size 0x7
};
enum VITVMode {
    VI_TVMODE_NTSC_INT = 0,
    VI_TVMODE_NTSC_DS = 1,
    VI_TVMODE_NTSC_PROG = 2,
    VI_TVMODE_PAL_INT = 4,
    VI_TVMODE_PAL_DS = 5,
    VI_TVMODE_EURGB60_INT = 20,
    VI_TVMODE_EURGB60_DS = 21,
    VI_TVMODE_EURGB60_PROG = 22,
    VI_TVMODE_MPAL_INT = 8,
    VI_TVMODE_MPAL_DS = 9,
    VI_TVMODE_MPAL_PROG = 10,
    VI_TVMODE_DEBUG_INT = 12,
    VI_TVMODE_DEBUG_PAL_INT = 16,
    VI_TVMODE_DEBUG_PAL_DS = 17,
};
enum VIXFBMode {
    VI_XFBMODE_SF = 0,
    VI_XFBMODE_DF = 1,
};
// total size: 0x68
class MemVolume {
    // Members
    signed char volIndex; // offset 0x0, size 0x1
    signed char pad[2]; // offset 0x1, size 0x2
    unsigned char useMalloc; // offset 0x3, size 0x1
    class MemOwner * memOwner; // offset 0x4, size 0x4
    class MemHandleList memHandleList; // offset 0x8, size 0x8
    class MemAllocTable mat; // offset 0x10, size 0x2C
    int currWatermark; // offset 0x3C, size 0x4
    class MemCompactor compactor; // offset 0x40, size 0x14
    char * memPoolRaw; // offset 0x54, size 0x4
    char * memMound; // offset 0x58, size 0x4
    int moundSize; // offset 0x5C, size 0x4
    class MemHandle * borrowedHandle; // offset 0x60, size 0x4
    void * borrowedMem; // offset 0x64, size 0x4
};
// total size: 0x4
class MemOwner {};
// total size: 0x8
class MemHandleList {
    // Members
    class BlockOfHandles * blockHead; // offset 0x0, size 0x4
    int numHandlesPerBlock; // offset 0x4, size 0x4
};
// total size: 0x18
class BlockOfHandles {
    // Members
    class PoolAllocator handleList; // offset 0x0, size 0x14
    class BlockOfHandles * next; // offset 0x14, size 0x4
};
// total size: 0x14
class PoolAllocator : public PoolAllocatorBase {};
// total size: 0x14
class PoolAllocatorBase {
    // Members
    int blockSize; // offset 0x0, size 0x4
    int maxBlocks; // offset 0x4, size 0x4
    int size; // offset 0x8, size 0x4
    unsigned char * buffer; // offset 0xC, size 0x4
    class NodeType * top; // offset 0x10, size 0x4
};
// total size: 0x4
class NodeType {
    // Members
    class NodeType * next; // offset 0x0, size 0x4
};
// total size: 0x2C
class MemAllocTable {
    // Members
    class AllocEntry * entryTable; // offset 0x0, size 0x4
    int numEntries; // offset 0x4, size 0x4
    class DLList unusedList; // offset 0x8, size 0xC
    class DLList freeList; // offset 0x14, size 0xC
    class DLList allocList; // offset 0x20, size 0xC
};
// total size: 0xC
class DLList {
    // Members
    class AllocEntry * head; // offset 0x0, size 0x4
    class AllocEntry * tail; // offset 0x4, size 0x4
    class AllocEntry * tailPrev; // offset 0x8, size 0x4
};
// total size: 0x14
class MemCompactor {
    // Members
    enum enStage stage; // offset 0x0, size 0x4
    class MemVolume * memVolume; // offset 0x4, size 0x4
    int workingDataOfSomeSortProbably; // offset 0x8, size 0x4
    int someKindOfStopMovingThresholdCriteria; // offset 0xC, size 0x4
    bool needMerge; // offset 0x10, size 0x1
};
enum enStage {
    INACTIVE = 0,
    READY = 1,
    FREEMERGE = 2,
    TETRIS = 3,
    CLEANING = 4,
    FLATLINE = 5,
    SIRTET = 6,
};
// total size: 0x8
class RADARAMCALLBACKS {
    // Members
    void * (* aram_malloc)(unsigned int num_bytes); // offset 0x0, size 0x4
    void (* aram_free)(void * ptr); // offset 0x4, size 0x4
};
enum _GameOstrich {
    eGameOstrich_Loading = 0,
    eGameOstrich_PlayingMovie = 1,
    eGameOstrich_InScene = 2,
    eGameOstrich_Total = 3,
};
// total size: 0x440
class PadInput {
    // Members
    enum PadLayout padLayout; // offset 0x0, size 0x4
    enum PadSubLayout padSubLayout; // offset 0x4, size 0x4
    bool gamecubeControllerConnected; // offset 0x8, size 0x1
    int flags; // offset 0xC, size 0x4
    int changed; // offset 0x10, size 0x4
    class PadStick stick[3]; // offset 0x14, size 0x54
    float pressure[18]; // offset 0x68, size 0x48
    class PadTilt tilt[2]; // offset 0xB0, size 0x330
    class PadIRData irPointer; // offset 0x3E0, size 0x10
    class @class extendedDPDState; // offset 0x3F0, size 0x24
    class Vector WMPCorrectedAcc; // offset 0x414, size 0x10
    class PadIRData WMPExtendedIR; // offset 0x424, size 0x10
    int wbc_err; // offset 0x434, size 0x4
    float tgc_weight; // offset 0x438, size 0x4
    bool zeroPointSet; // offset 0x43C, size 0x1
};
enum PadLayout {
    PL_INVALID = 0,
    PL_XBOX = 1,
    PL_PLAYSTATION = 2,
    PL_X360 = 3,
    PL_WII = 4,
    PL_WII_EXTENSION = 5,
};
enum PadSubLayout {
    PSL_NONE = 0,
    PSL_WII_NUNCHUK = 1,
    PSL_WII_CLASSIC = 2,
    PSL_WII_BALANCE = 3,
    PSL_WII_UNKNOWN = 4,
};
// total size: 0x1C
class PadStick {
    // Members
    class Vector2 off; // offset 0x0, size 0x8
    class Vector2 dir; // offset 0x8, size 0x8
    float mag; // offset 0x10, size 0x4
    float normMag; // offset 0x14, size 0x4
    float ang; // offset 0x18, size 0x4
};
// total size: 0x198
class PadTilt {
    // Members
    class Vector acc; // offset 0x0, size 0x10
    class Vector lastAcc; // offset 0x10, size 0x10
    float pitchAngle; // offset 0x20, size 0x4
    float rollAngle; // offset 0x24, size 0x4
    class Vector2 swing2D; // offset 0x28, size 0x8
    class Vector3 swing3D; // offset 0x30, size 0xC
    int swing2Stability; // offset 0x3C, size 0x4
    int swing3Stability; // offset 0x40, size 0x4
    class Vector3 shakeSpeed; // offset 0x44, size 0xC
    class Vector3 accRecord[16]; // offset 0x50, size 0xC0
    unsigned int accRecordLength; // offset 0x110, size 0x4
    class SwingRecognition swingRecognition; // offset 0x114, size 0x34
    bool wmp_connected; // offset 0x148, size 0x1
    float wmp_pitchVel; // offset 0x14C, size 0x4
    float wmp_yawVel; // offset 0x150, size 0x4
    float wmp_rollVel; // offset 0x154, size 0x4
    float wmp_pitchAngle; // offset 0x158, size 0x4
    float wmp_yawAngle; // offset 0x15C, size 0x4
    float wmp_rollAngle; // offset 0x160, size 0x4
    class Matrix33 wmp_orientation; // offset 0x164, size 0x30
    float wmp_calibration; // offset 0x194, size 0x4
};
// total size: 0x34
class SwingRecognition {
    // Members
    class Vector3 lastAcc; // offset 0x0, size 0xC
    class Vector3 deltaAcc; // offset 0xC, size 0xC
    class Vector2 dirVec2; // offset 0x18, size 0x8
    class Vector3 dirVec3; // offset 0x20, size 0xC
    float dirSpeedMax2; // offset 0x2C, size 0x4
    float dirSpeedMax3; // offset 0x30, size 0x4
};
// total size: 0x10
class PadIRData {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float distanceFromBar; // offset 0x8, size 0x4
    enum IRStatus status; // offset 0xC, size 0x4
};
enum IRStatus {
    INVALID = 0,
    VALID_1 = 1,
    VALID_2 = 2,
};
// total size: 0x24
class @class {
    // Members
    class Vector2 lastPosInAngleSpace; // offset 0x0, size 0x8
    class Vector2 lastHorizon; // offset 0x8, size 0x8
    class Vector lastAngle; // offset 0x10, size 0x10
    float lastDist; // offset 0x20, size 0x4
};
// total size: 0x44C
class Pad {
    // Members
    bool isActive; // offset 0x0, size 0x1
    unsigned int mDeviceID; // offset 0x4, size 0x4
    class PadInput istate; // offset 0x8, size 0x440
    class PadDevice * device; // offset 0x448, size 0x4
};
// total size: 0x18
class PadDevice {
    // Members
    char * name; // offset 0x4, size 0x4
    class Pad * owner; // offset 0x8, size 0x4
    bool connected; // offset 0xC, size 0x1
    int priority; // offset 0x10, size 0x4
    class PadDevice * registryNext; // offset 0x14, size 0x4
};
// total size: 0x14
class xCylinder {
    // Members
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
// total size: 0x8
class _GXColorS10 {
    // Members
    short r; // offset 0x0, size 0x2
    short g; // offset 0x2, size 0x2
    short b; // offset 0x4, size 0x2
    short a; // offset 0x6, size 0x2
};
// total size: 0x4
class _GXColor {
    // Members
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
enum _GXCompType {
    GX_U8 = 0,
    GX_S8 = 1,
    GX_U16 = 2,
    GX_S16 = 3,
    GX_F32 = 4,
    GX_RGB565 = 0,
    GX_RGB8 = 1,
    GX_RGBX8 = 2,
    GX_RGBA4 = 3,
    GX_RGBA6 = 4,
    GX_RGBA8 = 5,
};
// total size: 0x98
class Module {
    // Members
    char * name; // offset 0x0, size 0x4
    class EventSet events; // offset 0x4, size 0x10
    int contextFlags; // offset 0x18, size 0x4
    short eventBindingIndices[60]; // offset 0x1C, size 0x78
    bool enabled; // offset 0x94, size 0x1
};
// total size: 0x10
class EventSet {
    // Members
    int stage[4]; // offset 0x0, size 0x10
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
// total size: 0x1
class EntityHandleCmp {};
// total size: 0xC
class SingleBufferAllocator {
    // Members
    unsigned char * buffer; // offset 0x0, size 0x4
    int bufferSize; // offset 0x4, size 0x4
    int pos; // offset 0x8, size 0x4
};
// total size: 0x4E8
class xGlobals {
    // Members
    int profile; // offset 0x0, size 0x4
    char profFunc[6][128]; // offset 0x4, size 0x300
    class xUpdateCullMgr * updateMgr; // offset 0x304, size 0x4
    int sceneFirst; // offset 0x308, size 0x4
    char sceneStart[128]; // offset 0x30C, size 0x80
    unsigned int sceneStartID; // offset 0x38C, size 0x4
    int option_vibration[4]; // offset 0x390, size 0x10
    int default_option_subtitles; // offset 0x3A0, size 0x4
    int option_subtitles; // offset 0x3A4, size 0x4
    unsigned int slowdown; // offset 0x3A8, size 0x4
    float update_dt; // offset 0x3AC, size 0x4
    unsigned int dumpCutscene; // offset 0x3B0, size 0x4
    unsigned int dumpCinematics; // offset 0x3B4, size 0x4
    char dumpCinematicsFilePrefix[31]; // offset 0x3B8, size 0x1F
    float dumpCinematicsFrameRate; // offset 0x3D8, size 0x4
    short ForceCutscene; // offset 0x3DC, size 0x2
    bool NoMusic; // offset 0x3DE, size 0x1
    bool NoSoundFX; // offset 0x3DF, size 0x1
    bool NoCutscenes; // offset 0x3E0, size 0x1
    bool NoPadCheck; // offset 0x3E1, size 0x1
    bool skippableCutscenes; // offset 0x3E2, size 0x1
    bool wiiPerformanceWarnings; // offset 0x3E3, size 0x1
    bool firstStartPressed; // offset 0x3E4, size 0x1
    bool fromLauncher; // offset 0x3E5, size 0x1
    bool skipAssertWithController; // offset 0x3E6, size 0x1
    bool showReleaseMemInfo; // offset 0x3E7, size 0x1
    bool realVine; // offset 0x3E8, size 0x1
    class xVec3 sound3DListenerPosition[4]; // offset 0x3EC, size 0x30
    bool FlashWIP; // offset 0x41C, size 0x1
    bool inLoadingScreen; // offset 0x41D, size 0x1
    bool LoadingScene; // offset 0x41E, size 0x1
    bool InitializingLoadingScreen; // offset 0x41F, size 0x1
    unsigned int minVSyncCnt; // offset 0x420, size 0x4
    bool autoSaveFeature; // offset 0x424, size 0x1
    bool skipAsserts; // offset 0x425, size 0x1
    bool beforeFirstFrame; // offset 0x426, size 0x1
    class zPlayerContainer players; // offset 0x428, size 0x14
    class zScene * sceneCur; // offset 0x43C, size 0x4
    char watermark[127]; // offset 0x440, size 0x7F
    unsigned char watermarkAlpha; // offset 0x4BF, size 0x1
    float watermarkSize; // offset 0x4C0, size 0x4
    bool showMenuOnBoot; // offset 0x4C4, size 0x1
    bool enableHUD; // offset 0x4C5, size 0x1
    bool enableLetterboxDuringCinematic; // offset 0x4C6, size 0x1
    bool forceSelectDevice; // offset 0x4C7, size 0x1
    bool allowPadActiveOnStart; // offset 0x4C8, size 0x1
    unsigned int autoSaveSlot; // offset 0x4CC, size 0x4
    bool inSystemMessage; // offset 0x4D0, size 0x1
    bool clearXSerializer; // offset 0x4D1, size 0x1
    bool AutoSaving; // offset 0x4D2, size 0x1
    bool acceptButtonFlipped; // offset 0x4D3, size 0x1
    bool allowDeviceLostTRC; // offset 0x4D4, size 0x1
    int playerPort; // offset 0x4D8, size 0x4
    int player2Port; // offset 0x4DC, size 0x4
    bool enableWireFrameDebugger; // offset 0x4E0, size 0x1
    bool enableWireFrameDebuggerConvexShapes; // offset 0x4E1, size 0x1
    float wireFrameDebuggerDrawDistance; // offset 0x4E4, size 0x4
};
// total size: 0x14
class zPlayerContainer {
    // Members
    class zPlayer * playerArray[4]; // offset 0x0, size 0x10
    int numPlayers; // offset 0x10, size 0x4
};
// total size: 0xD1C
class zScene : public xScene {
    // Members
    class BaseInfo baseInfo[264]; // offset 0x28, size 0xC60
    class OGUpdateList update_list; // offset 0xC88, size 0x40
    unsigned int num_global_persistant; // offset 0xCC8, size 0x4
    class xBase * * global_persistant; // offset 0xCCC, size 0x4
    class zEnv * zen; // offset 0xCD0, size 0x4
    class Scene * parameters; // offset 0xCD4, size 0x4
    class zPortalPending pendingPortal; // offset 0xCD8, size 0x44
};
// total size: 0xC
class BaseInfo {
    // Members
    class EmbeddedList entz; // offset 0x0, size 0xC
};
// total size: 0x40
class OGUpdateList {
    // Members
    class BlockAllocatorArray objList; // offset 0x0, size 0x20
    class BlockAllocatorArray updFlags; // offset 0x20, size 0x20
};
// total size: 0x10
class Block {
    // Members
    class xBase * * pool; // offset 0x0, size 0x4
    class Block * next; // offset 0x4, size 0x4
    class Block * prev; // offset 0x8, size 0x4
    int idx; // offset 0xC, size 0x4
};
// total size: 0x10
class Block {
    // Members
    unsigned int * pool; // offset 0x0, size 0x4
    class Block * next; // offset 0x4, size 0x4
    class Block * prev; // offset 0x8, size 0x4
    int idx; // offset 0xC, size 0x4
};
// total size: 0x40
class zEnv : public xOGEntity {
    // Members
    class xEnvAsset * envAsset; // offset 0x3C, size 0x4
};
// total size: 0xD0
class Scene {
    // Members
    class __ExtraIdle03__ ExtraIdle03; // offset 0x0, size 0x8
    unsigned int ExtraIdle03Ptr; // offset 0x8, size 0x4
    class __ExtraIdle04__ ExtraIdle04; // offset 0xC, size 0x8
    unsigned int ExtraIdle04Ptr; // offset 0x14, size 0x4
    unsigned char MaxBombs; // offset 0x18, size 0x1
    unsigned char ExtraIdleDelay; // offset 0x19, size 0x1
    signed char NumCheckPoints; // offset 0x1A, size 0x1
    unsigned char pad0; // offset 0x1B, size 0x1
    unsigned int DefaultMusic; // offset 0x1C, size 0x4
    unsigned int flags; // offset 0x20, size 0x4
    float WaterTileWidth; // offset 0x24, size 0x4
    float LODFadeDistance; // offset 0x28, size 0x4
    float DefaultParticleCullDistance; // offset 0x2C, size 0x4
    float WaterTileOffsetX; // offset 0x30, size 0x4
    float WaterTileOffsetZ; // offset 0x34, size 0x4
    float GrassDistFade; // offset 0x38, size 0x4
    float GrassDistCull; // offset 0x3C, size 0x4
    unsigned int Piggybank; // offset 0x40, size 0x4
    unsigned int MaxVertCount; // offset 0x44, size 0x4
    float MaxPS3GlobalMemory; // offset 0x48, size 0x4
    float MaxPS3AnimationMemory; // offset 0x4C, size 0x4
    float MaxPS3ModelMemory; // offset 0x50, size 0x4
    float MaxPS3TextureMemory; // offset 0x54, size 0x4
    float MaxPS3CollMeshMemory; // offset 0x58, size 0x4
    float MaxPS3UIWidgetMemory; // offset 0x5C, size 0x4
    float MaxPS3OtherMemory; // offset 0x60, size 0x4
    float MaxWIIGlobalMemory; // offset 0x64, size 0x4
    float MaxWIIAnimationMemory; // offset 0x68, size 0x4
    float MaxWIIModelMemory; // offset 0x6C, size 0x4
    float MaxWIITextureMemory; // offset 0x70, size 0x4
    float MaxWIICollMeshMemory; // offset 0x74, size 0x4
    float MaxWIIUIWidgetMemory; // offset 0x78, size 0x4
    float MaxWIIOtherMemory; // offset 0x7C, size 0x4
    float MaxXBOXGlobalMemory; // offset 0x80, size 0x4
    float MaxXBOXAnimationMemory; // offset 0x84, size 0x4
    float MaxXBOXModelMemory; // offset 0x88, size 0x4
    float MaxXBOXTextureMemory; // offset 0x8C, size 0x4
    float MaxXBOXCollMeshMemory; // offset 0x90, size 0x4
    float MaxXBOXUIWidgetMemory; // offset 0x94, size 0x4
    float MaxXBOXOtherMemory; // offset 0x98, size 0x4
    bool HDREnable; // offset 0x9C, size 0x1
    float HDRThreshold; // offset 0xA0, size 0x4
    float HDRBloomScale; // offset 0xA4, size 0x4
    float HDRBloomSize; // offset 0xA8, size 0x4
    float HDRBloomBrightness; // offset 0xAC, size 0x4
    float HDRStarScale; // offset 0xB0, size 0x4
    float HDRBlurScale; // offset 0xB4, size 0x4
    class uid pauseMenu; // offset 0xB8, size 0x8
    class uid endLevelMenu; // offset 0xC0, size 0x8
    class LinkAsset EventLinksNew; // offset 0xC8, size 0x8
};
// total size: 0x8
class __ExtraIdle03__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __ExtraIdle04__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x44
class zPortalPending {
    // Members
    class zPortal * assetPortal; // offset 0x0, size 0x4
    char manualPortal[64]; // offset 0x4, size 0x40
};
// total size: 0x40
class zPortal : public xOGEntity {
    // Members
    class xPortalAsset * passet; // offset 0x3C, size 0x4
};
// total size: 0x18
class DoFEffectSettings {
    // Members
    bool enabled; // offset 0x0, size 0x1
    float blurAmt; // offset 0x4, size 0x4
    float nearPlaneStart; // offset 0x8, size 0x4
    float nearPlaneEnd; // offset 0xC, size 0x4
    float farPlaneStart; // offset 0x10, size 0x4
    float farPlaneEnd; // offset 0x14, size 0x4
};
// total size: 0x1F
class zPlayerInventory {
    // Members
    bool initialized; // offset 0x0, size 0x1
    signed char costumeBought[6][4]; // offset 0x1, size 0x18
    signed char selectedCostume[6]; // offset 0x19, size 0x6
};
// total size: 0x5A0
class zGlobals : public xGlobals {
    // Members
    class zGlobalSettings settings; // offset 0x4E8, size 0x18
    class zCheckPoint checkPoint; // offset 0x500, size 0x10
    unsigned long long curCheckPointUID; // offset 0x510, size 0x8
    unsigned int playerTag[4]; // offset 0x518, size 0x10
    class zAssetPickupTable * pickupTable; // offset 0x528, size 0x4
    class zCinematic * runningCinematic; // offset 0x52C, size 0x4
    class xBase * autoSaveRequestor; // offset 0x530, size 0x4
    long long gameTimer; // offset 0x538, size 0x8
    long long lastGameTick; // offset 0x540, size 0x8
    char startDebugMode[32]; // offset 0x548, size 0x20
    unsigned int noMovies; // offset 0x568, size 0x4
    unsigned int boundUpdateTime; // offset 0x56C, size 0x4
    int maxLevelUnlocked; // offset 0x570, size 0x4
    bool bAllowMasterCheats; // offset 0x574, size 0x1
    bool enableFriendlyFly; // offset 0x575, size 0x1
    bool stopCurrentConversation; // offset 0x576, size 0x1
    bool fmvJustFinished; // offset 0x577, size 0x1
    bool fmvPlaying; // offset 0x578, size 0x1
    bool playerLoaded; // offset 0x579, size 0x1
    bool needAutoSave; // offset 0x57A, size 0x1
    bool loadSavedCheckpoint; // offset 0x57B, size 0x1
    bool timingGame; // offset 0x57C, size 0x1
    bool timeGameAfterPortal; // offset 0x57D, size 0x1
    bool resettingSave; // offset 0x57E, size 0x1
    bool unpauseFromSystem; // offset 0x57F, size 0x1
    bool cameraControlOff; // offset 0x580, size 0x1
    unsigned int zShow4TO3Marker; // offset 0x584, size 0x4
    enum zGlobalDemoType demoType; // offset 0x588, size 0x4
    unsigned int subGameType; // offset 0x58C, size 0x4
    enum eAnimSetType firstPlayerAnimSetType; // offset 0x590, size 0x4
    float BWSwitchTime; // offset 0x594, size 0x4
    float BWSwitchTimerTick; // offset 0x598, size 0x4
    bool BWSwitchReversed; // offset 0x59C, size 0x1
    bool EverDieInStoryLevel; // offset 0x59D, size 0x1
    bool AllowIdleExtra; // offset 0x59E, size 0x1
};
// total size: 0x18
class zGlobalSettings {
    // Members
    unsigned short AnalogMin; // offset 0x0, size 0x2
    unsigned short AnalogMax; // offset 0x2, size 0x2
    unsigned int TakeDamage; // offset 0x4, size 0x4
    float DamageInvincibility; // offset 0x8, size 0x4
    float Gravity; // offset 0xC, size 0x4
    unsigned char AttractModeDuringGameplay; // offset 0x10, size 0x1
    unsigned char DisableScaleformRenderingInMasterDuringCinematics; // offset 0x11, size 0x1
    unsigned char ShowTimecodeDuringCinematics; // offset 0x12, size 0x1
    unsigned char pad; // offset 0x13, size 0x1
    float CameraFOV; // offset 0x14, size 0x4
};
// total size: 0x10
class zCheckPoint {
    // Members
    unsigned long long initCamID; // offset 0x0, size 0x8
    bool * jsp_active; // offset 0x8, size 0x4
};
// total size: 0x0
class zAssetPickupTable {};
enum zGlobalDemoType {
    zDT_NONE = 0,
    zDT_E3 = 1,
    zDT_PUBLICITY = 2,
    zDT_OPM = 3,
    zDT_PS3 = 4,
    zDT_LAST = 5,
};
// total size: 0x48
class __locale {
    // Members
    class __locale * next_locale; // offset 0x0, size 0x4
    char locale_name[48]; // offset 0x4, size 0x30
    class _loc_coll_cmpt * coll_cmpt_ptr; // offset 0x34, size 0x4
    class _loc_ctype_cmpt * ctype_cmpt_ptr; // offset 0x38, size 0x4
    class _loc_mon_cmpt * mon_cmpt_ptr; // offset 0x3C, size 0x4
    class _loc_num_cmpt * num_cmpt_ptr; // offset 0x40, size 0x4
    class _loc_time_cmpt * time_cmpt_ptr; // offset 0x44, size 0x4
};
// total size: 0x1C
class _loc_coll_cmpt {
    // Members
    char CmptName[8]; // offset 0x0, size 0x8
    int char_start_value; // offset 0x8, size 0x4
    int char_coll_tab_size; // offset 0xC, size 0x4
    short char_spec_accents; // offset 0x10, size 0x2
    unsigned short * char_coll_table_ptr; // offset 0x14, size 0x4
    unsigned short * wchar_coll_seq_ptr; // offset 0x18, size 0x4
};
// total size: 0x28
class _loc_ctype_cmpt {
    // Members
    char CmptName[8]; // offset 0x0, size 0x8
    unsigned short * ctype_map_ptr; // offset 0x8, size 0x4
    unsigned char * upper_map_ptr; // offset 0xC, size 0x4
    unsigned char * lower_map_ptr; // offset 0x10, size 0x4
    unsigned short * wctype_map_ptr; // offset 0x14, size 0x4
    unsigned short * wupper_map_ptr; // offset 0x18, size 0x4
    unsigned short * wlower_map_ptr; // offset 0x1C, size 0x4
    int (* decode_mb)(unsigned short *, char *, unsigned long); // offset 0x20, size 0x4
    int (* encode_wc)(char *, unsigned short); // offset 0x24, size 0x4
};
// total size: 0x34
class _loc_mon_cmpt {
    // Members
    char CmptName[8]; // offset 0x0, size 0x8
    char * mon_decimal_point; // offset 0x8, size 0x4
    char * mon_thousands_sep; // offset 0xC, size 0x4
    char * mon_grouping; // offset 0x10, size 0x4
    char * positive_sign; // offset 0x14, size 0x4
    char * negative_sign; // offset 0x18, size 0x4
    char * currency_symbol; // offset 0x1C, size 0x4
    char frac_digits; // offset 0x20, size 0x1
    char p_cs_precedes; // offset 0x21, size 0x1
    char n_cs_precedes; // offset 0x22, size 0x1
    char p_sep_by_space; // offset 0x23, size 0x1
    char n_sep_by_space; // offset 0x24, size 0x1
    char p_sign_posn; // offset 0x25, size 0x1
    char n_sign_posn; // offset 0x26, size 0x1
    char * int_curr_symbol; // offset 0x28, size 0x4
    char int_frac_digits; // offset 0x2C, size 0x1
    char int_p_cs_precedes; // offset 0x2D, size 0x1
    char int_n_cs_precedes; // offset 0x2E, size 0x1
    char int_p_sep_by_space; // offset 0x2F, size 0x1
    char int_n_sep_by_space; // offset 0x30, size 0x1
    char int_p_sign_posn; // offset 0x31, size 0x1
    char int_n_sign_posn; // offset 0x32, size 0x1
};
// total size: 0x14
class _loc_num_cmpt {
    // Members
    char CmptName[8]; // offset 0x0, size 0x8
    char * decimal_point; // offset 0x8, size 0x4
    char * thousands_sep; // offset 0xC, size 0x4
    char * grouping; // offset 0x10, size 0x4
};
// total size: 0x28
class _loc_time_cmpt {
    // Members
    char CmptName[8]; // offset 0x0, size 0x8
    char * am_pm; // offset 0x8, size 0x4
    char * DateTime_Format; // offset 0xC, size 0x4
    char * Twelve_hr_format; // offset 0x10, size 0x4
    char * Date_Format; // offset 0x14, size 0x4
    char * Time_Format; // offset 0x18, size 0x4
    char * Day_Names; // offset 0x1C, size 0x4
    char * MonthNames; // offset 0x20, size 0x4
    char * TimeZone; // offset 0x24, size 0x4
};
// total size: 0x20
class CHavokShapeBuilder : public hkReferencedObject, public hkSingleton {
    // Members
    class hkPointerMap m_shapeToGroupMap; // offset 0x8, size 0xC
    class hkArray m_shrunkenShapes; // offset 0x14, size 0xC
};
// total size: 0x1
class hkSingleton {};
// total size: 0xC
class hkArray {
    // Members
    class ShapePair * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x8
class ShapePair {
    // Members
    class hkpShape * originalShape; // offset 0x0, size 0x4
    class hkpShape * newShape; // offset 0x4, size 0x4
};
