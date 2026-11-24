/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80006500 -> 0x80084578
*/
extern float hkUFloat8_intToReal[256]; // size: 0x400
extern float hkTransformIdentity[65536]; // size: 0x0
extern class __locale _current_locale; // size: 0x48
extern class hkQuaternion hkQuaternionIdentity; // size: 0x10
extern class hkQuadReal hkQuadReal0000; // size: 0x10
extern float hkConvexShapeDefaultRadius; // size: 0x4
extern float hkInfinity; // size: 0x4
extern struct {} __vt__21hkpAllRayHitCollector; // size: 0x10
extern class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance; // size: 0x4
extern struct {} __vt__22hkpAllCdPointCollector; // size: 0x10
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
// total size: 0x40
class xMat4x3 : public xMat3x3 {
    // Members
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x30
class xMat3x3 {
    // Members
    class xVec3 right; // offset 0x0, size 0xC
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
// total size: 0x4C
class hkpCollidable : public hkpCdBody {
    // Members
    signed char m_ownerOffset; // offset 0x10, size 0x1
    unsigned char m_forceCollideOntoPpu; // offset 0x11, size 0x1
    unsigned short m_shapeSizeOnSpu; // offset 0x12, size 0x2
    class hkpTypedBroadPhaseHandle m_broadPhaseHandle; // offset 0x14, size 0xC
    class BoundingVolumeData m_boundingVolumeData; // offset 0x20, size 0x28
    float m_allowedPenetrationDepth; // offset 0x48, size 0x4
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
// total size: 0x8
class hkReferencedObject : public hkBaseObject {
    // Members
    unsigned short m_memSizeAndFlags; // offset 0x4, size 0x2
    short m_referenceCount; // offset 0x6, size 0x2
};
// total size: 0x4
class hkBaseObject {};
// total size: 0x4
class hkEnum {
    // Members
    unsigned int m_storage; // offset 0x0, size 0x4
};
// total size: 0xC
class hkpTypedBroadPhaseHandle : public hkpBroadPhaseHandle {
    // Members
    signed char m_type; // offset 0x4, size 0x1
    signed char m_ownerOffset; // offset 0x5, size 0x1
    unsigned short m_objectQualityType; // offset 0x6, size 0x2
    unsigned int m_collisionFilterInfo; // offset 0x8, size 0x4
};
// total size: 0x4
class hkpBroadPhaseHandle {
    // Members
    unsigned int m_id; // offset 0x0, size 0x4
};
// total size: 0x28
class BoundingVolumeData {
    // Members
    unsigned int m_min[3]; // offset 0x0, size 0xC
    unsigned char m_expansionMin[3]; // offset 0xC, size 0x3
    unsigned char m_expansionShift; // offset 0xF, size 0x1
    unsigned int m_max[3]; // offset 0x10, size 0xC
    unsigned char m_expansionMax[3]; // offset 0x1C, size 0x3
    unsigned char m_padding; // offset 0x1F, size 0x1
    unsigned short m_numChildShapeAabbs; // offset 0x20, size 0x2
    class hkAabbUint32 * m_childShapeAabbs; // offset 0x24, size 0x4
};
// total size: 0x20
class hkAabbUint32 {
    // Members
    unsigned int m_min[3]; // offset 0x0, size 0xC
    unsigned char m_expansionMin[3]; // offset 0xC, size 0x3
    unsigned char m_expansionShift; // offset 0xF, size 0x1
    unsigned int m_max[3]; // offset 0x10, size 0xC
    unsigned char m_expansionMax[3]; // offset 0x1C, size 0x3
    unsigned char m_sortIndex; // offset 0x1F, size 0x1
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
// total size: 0x10
class hkVector4 {
    // Members
    class hkQuadReal m_quad; // offset 0x0, size 0x10
};
// total size: 0x10
class hkQuadReal {
    // Members
    __vec2x32float__ m_a; // offset 0x0, size 0x8
    __vec2x32float__ m_b; // offset 0x8, size 0x8
};
// total size: 0x200
class hkpRigidBody : public hkpEntity {};
// total size: 0x200
class hkpEntity : public hkpWorldObject {
    // Members
    class hkpMaterial m_material; // offset 0x80, size 0xC
    void * m_breakOffPartsUtil; // offset 0x8C, size 0x4
    unsigned int m_solverData; // offset 0x90, size 0x4
    unsigned short m_storageIndex; // offset 0x94, size 0x2
    unsigned short m_processContactCallbackDelay; // offset 0x96, size 0x2
    class hkSmallArray m_constraintsMaster; // offset 0x98, size 0x8
    class hkArray m_constraintsSlave; // offset 0xA0, size 0xC
    class hkArray m_constraintRuntime; // offset 0xAC, size 0xC
    class hkpSimulationIsland * m_simulationIsland; // offset 0xB8, size 0x4
    signed char m_autoRemoveLevel; // offset 0xBC, size 0x1
    unsigned char m_numUserDatasInContactPointProperties; // offset 0xBD, size 0x1
    unsigned int m_uid; // offset 0xC0, size 0x4
    class SpuCollisionCallback m_spuCollisionCallback; // offset 0xC4, size 0x8
    class ExtendedListeners * m_extendedListeners; // offset 0xCC, size 0x4
    class hkpMaxSizeMotion m_motion; // offset 0xD0, size 0x120
    class hkSmallArray m_collisionListeners; // offset 0x1F0, size 0x8
    class hkSmallArray m_actions; // offset 0x1F8, size 0x8
};
// total size: 0x80
class hkpWorldObject : public hkReferencedObject {
    // Members
    class hkpWorld * m_world; // offset 0x8, size 0x4
    unsigned long m_userData; // offset 0xC, size 0x4
    class hkpLinkedCollidable m_collidable; // offset 0x10, size 0x58
    class hkMultiThreadCheck m_multiThreadCheck; // offset 0x68, size 0x8
    char * m_name; // offset 0x70, size 0x4
    class hkArray m_properties; // offset 0x74, size 0xC
};
// total size: 0x310
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
    class hkpTypedBroadPhaseDispatcher * m_broadPhaseDispatcher; // offset 0x58, size 0x4
    class hkpPhantomBroadPhaseListener * m_phantomBroadPhaseListener; // offset 0x5C, size 0x4
    class hkpEntityEntityBroadPhaseListener * m_entityEntityBroadPhaseListener; // offset 0x60, size 0x4
    class hkpBroadPhaseBorderListener * m_broadPhaseBorderListener; // offset 0x64, size 0x4
    class hkpMultithreadedSimulationJobData * m_multithreadedSimulationJobData; // offset 0x68, size 0x4
    class hkpProcessCollisionInput * m_collisionInput; // offset 0x6C, size 0x4
    class hkpCollisionFilter * m_collisionFilter; // offset 0x70, size 0x4
    class hkpCollisionDispatcher * m_collisionDispatcher; // offset 0x74, size 0x4
    class hkpConvexListFilter * m_convexListFilter; // offset 0x78, size 0x4
    class hkpWorldOperationQueue * m_pendingOperations; // offset 0x7C, size 0x4
    int m_pendingOperationsCount; // offset 0x80, size 0x4
    int m_criticalOperationsLockCount; // offset 0x84, size 0x4
    int m_criticalOperationsLockCountForPhantoms; // offset 0x88, size 0x4
    class hkBool m_blockExecutingPendingOperations; // offset 0x8C, size 0x1
    class hkBool m_criticalOperationsAllowed; // offset 0x8D, size 0x1
    class hkpDebugInfoOnPendingOperationQueues * m_pendingOperationQueues; // offset 0x90, size 0x4
    int m_pendingOperationQueueCount; // offset 0x94, size 0x4
    class hkMultiThreadCheck m_multiThreadCheck; // offset 0x98, size 0x8
    class hkBool m_processActionsInSingleThread; // offset 0xA0, size 0x1
    unsigned int m_minDesiredIslandSize; // offset 0xA4, size 0x4
    class hkCriticalSection * m_modifyConstraintCriticalSection; // offset 0xA8, size 0x4
    class hkCriticalSection * m_worldLock; // offset 0xAC, size 0x4
    class hkCriticalSection * m_islandDirtyListCriticalSection; // offset 0xB0, size 0x4
    class hkCriticalSection * m_propertyMasterLock; // offset 0xB4, size 0x4
    class hkBool m_wantSimulationIslands; // offset 0xB8, size 0x1
    float m_snapCollisionToConvexEdgeThreshold; // offset 0xBC, size 0x4
    float m_snapCollisionToConcaveEdgeThreshold; // offset 0xC0, size 0x4
    class hkBool m_enableToiWeldRejection; // offset 0xC4, size 0x1
    class hkBool m_wantDeactivation; // offset 0xC5, size 0x1
    class hkBool m_shouldActivateOnRigidBodyTransformChange; // offset 0xC6, size 0x1
    float m_deactivationReferenceDistance; // offset 0xC8, size 0x4
    float m_toiCollisionResponseRotateNormal; // offset 0xCC, size 0x4
    class hkBool m_processToisMultithreaded; // offset 0xD0, size 0x1
    int m_maxSectorsPerCollideTask; // offset 0xD4, size 0x4
    int m_maxEntriesPerToiCollideTask; // offset 0xD8, size 0x4
    class hkEnum m_simulationType; // offset 0xDC, size 0x4
    unsigned int m_lastEntityUid; // offset 0xE0, size 0x4
    class hkArray m_phantoms; // offset 0xE4, size 0xC
    class hkArray m_actionListeners; // offset 0xF0, size 0xC
    class hkArray m_entityListeners; // offset 0xFC, size 0xC
    class hkArray m_phantomListeners; // offset 0x108, size 0xC
    class hkArray m_constraintListeners; // offset 0x114, size 0xC
    class hkArray m_worldDeletionListeners; // offset 0x120, size 0xC
    class hkArray m_islandActivationListeners; // offset 0x12C, size 0xC
    class hkArray m_worldPostSimulationListeners; // offset 0x138, size 0xC
    class hkArray m_worldPostIntegrateListeners; // offset 0x144, size 0xC
    class hkArray m_worldPostCollideListeners; // offset 0x150, size 0xC
    class hkArray m_islandPostIntegrateListeners; // offset 0x15C, size 0xC
    class hkArray m_islandPostCollideListeners; // offset 0x168, size 0xC
    class hkArray m_collisionListeners; // offset 0x174, size 0xC
    class hkArray m_contactImpulseLimitBreachedListeners; // offset 0x180, size 0xC
    class hkpBroadPhaseBorder * m_broadPhaseBorder; // offset 0x18C, size 0x4
    class hkpWorldDynamicsStepInfo m_dynamicsStepInfo; // offset 0x190, size 0x140
    class hkVector4 m_broadPhaseExtents[2]; // offset 0x2D0, size 0x20
    int m_broadPhaseNumMarkers; // offset 0x2F0, size 0x4
    int m_sizeOfToiEventQueue; // offset 0x2F4, size 0x4
    int m_broadPhaseQuerySize; // offset 0x2F8, size 0x4
    int m_broadPhaseUpdateSize; // offset 0x2FC, size 0x4
    class hkEnum m_contactPointGeneration; // offset 0x300, size 0x1
};
// total size: 0x2C
class hkpSimulation : public hkReferencedObject {
    // Members
    unsigned int m_determinismCheckFrameCounter; // offset 0x8, size 0x4
    class hkpWorld * m_world; // offset 0xC, size 0x4
    class hkEnum m_lastProcessingStep; // offset 0x10, size 0x1
    float m_currentTime; // offset 0x14, size 0x4
    float m_currentPsiTime; // offset 0x18, size 0x4
    float m_physicsDeltaTime; // offset 0x1C, size 0x4
    float m_simulateUntilTime; // offset 0x20, size 0x4
    float m_frameMarkerPsiSnap; // offset 0x24, size 0x4
    unsigned int m_previousStepResult; // offset 0x28, size 0x4
};
// total size: 0x1
class hkEnum {
    // Members
    unsigned char m_storage; // offset 0x0, size 0x1
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
// total size: 0x18
class hkpAction : public hkReferencedObject {
    // Members
    class hkpWorld * m_world; // offset 0x8, size 0x4
    class hkpSimulationIsland * m_island; // offset 0xC, size 0x4
    unsigned long m_userData; // offset 0x10, size 0x4
    char * m_name; // offset 0x14, size 0x4
};
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
// total size: 0x1
class hkCriticalSection {};
// total size: 0x10C
class hkpTypedBroadPhaseDispatcher {
    // Members
    class hkpBroadPhaseListener * m_broadPhaseListeners[8][8]; // offset 0x0, size 0x100
    class hkpNullBroadPhaseListener m_nullBroadPhaseListener; // offset 0x100, size 0xC
};
// total size: 0x4
class hkpBroadPhaseListener {};
// total size: 0xC
class hkpNullBroadPhaseListener : public hkReferencedObject, public hkpBroadPhaseListener {};
// total size: 0xC
class hkpPhantomBroadPhaseListener : public hkReferencedObject, public hkpBroadPhaseListener {};
// total size: 0x10
class hkpEntityEntityBroadPhaseListener : public hkReferencedObject, public hkpBroadPhaseListener {
    // Members
    class hkpWorld * m_world; // offset 0xC, size 0x4
};
// total size: 0xC
class hkpBroadPhaseBorderListener : public hkReferencedObject, public hkpBroadPhaseListener {};
// total size: 0x0
class hkpMultithreadedSimulationJobData {};
// total size: 0x70
class hkpProcessCollisionInput : public hkpCollisionInput {
    // Members
    class hkStepInfo m_stepInfo; // offset 0x50, size 0x10
    class hkPadSpu m_collisionQualityInfo; // offset 0x60, size 0x4
    void * m_dynamicsInfo; // offset 0x64, size 0x4
    bool m_enableDeprecatedWelding; // offset 0x68, size 0x1
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
// total size: 0x1D50
class hkpCollisionDispatcher : public hkReferencedObject {
    // Members
    class hkpCollisionAgent * (* m_defaultCollisionAgent)(class hkpCdBody * collA, class hkpCdBody * collB, class hkpCollisionInput * env, class hkpContactMgr * mgr); // offset 0x8, size 0x4
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
// total size: 0x8
class hkpContactMgrFactory : public hkReferencedObject {};
// total size: 0x14
class AgentFuncs {
    // Members
    class hkpCollisionAgent * (* m_createFunc)(class hkpCdBody * collA, class hkpCdBody * collB, class hkpCollisionInput * env, class hkpContactMgr * mgr); // offset 0x0, size 0x4
    void (* m_getPenetrationsFunc)(class hkpCdBody * bodyA, class hkpCdBody * bodyB, class hkpCollisionInput * input, class hkpCdBodyPairCollector * collector); // offset 0x4, size 0x4
    void (* m_getClosestPointFunc)(class hkpCdBody * bodyA, class hkpCdBody * bodyB, class hkpCollisionInput * input, class hkpCdPointCollector * output); // offset 0x8, size 0x4
    void (* m_linearCastFunc)(class hkpCdBody * bodyA, class hkpCdBody * bodyB, class hkpLinearCastCollisionInput * input, class hkpCdPointCollector * castCollector, class hkpCdPointCollector * startCollector); // offset 0xC, size 0x4
    class hkBool m_isFlipped; // offset 0x10, size 0x1
    class hkBool m_isPredictive; // offset 0x11, size 0x1
};
// total size: 0x8
class hkpCdBodyPairCollector {
    // Members
    class hkBool m_earlyOut; // offset 0x4, size 0x1
};
// total size: 0x1
class hkBool {
    // Members
    char m_bool; // offset 0x0, size 0x1
};
// total size: 0x8
class hkpCdPointCollector {
    // Members
    float m_earlyOutDistance; // offset 0x4, size 0x4
};
// total size: 0x70
class hkpLinearCastCollisionInput : public hkpCollisionInput {
    // Members
    class hkVector4 m_path; // offset 0x50, size 0x10
    float m_maxExtraPenetration; // offset 0x60, size 0x4
    float m_cachedPathLength; // offset 0x64, size 0x4
    class hkpCollisionAgentConfig * m_config; // offset 0x68, size 0x4
};
// total size: 0x10
class hkpCollisionAgentConfig {
    // Members
    float m_iterativeLinearCastEarlyOutDistance; // offset 0x0, size 0x4
    int m_iterativeLinearCastMaxIterations; // offset 0x4, size 0x4
};
// total size: 0x40
class Agent3FuncsIntern : public Agent3Funcs {
    // Members
    enum Symmetric m_symmetric; // offset 0x34, size 0x4
};
// total size: 0x40
class Agent3Funcs {
    // Members
    void * (* m_createFunc)(class hkpAgent3Input * input, class hkpAgentEntry * entry, void * agentData); // offset 0x0, size 0x4
    void (* m_destroyFunc)(class hkpAgentEntry * entry, void * agentData, class hkpContactMgr * mgr, class hkpConstraintOwner * constraintOwner, class hkpCollisionDispatcher * dispatcher); // offset 0x4, size 0x4
    void * (* m_cleanupFunc)(class hkpAgentEntry * entry, void * agentData, class hkpContactMgr * mgr, class hkpConstraintOwner * constraintOwner); // offset 0x8, size 0x4
    void (* m_removePointFunc)(class hkpAgentEntry * entry, void * agentData, unsigned short idToRemove); // offset 0xC, size 0x4
    void (* m_commitPotentialFunc)(class hkpAgentEntry * entry, void * agentData, unsigned short newId); // offset 0x10, size 0x4
    void (* m_createZombieFunc)(class hkpAgentEntry * entry, void * agentData, unsigned short idTobecomeZombie); // offset 0x14, size 0x4
    void (* m_updateFilterFunc)(class hkpAgentEntry * entry, void * agentData, class hkpCdBody * bodyA, class hkpCdBody * bodyB, class hkpCollisionInput * input, class hkpContactMgr * mgr, class hkpConstraintOwner * constraintOwner); // offset 0x18, size 0x4
    void (* m_calcStatisticsFunc)(class hkpAgentEntry * entry, void * agentData, class hkpCollisionInput * input, class hkStatisticsCollector * collector); // offset 0x1C, size 0x4
    void (* m_invalidateTimFunc)(class hkpAgentEntry * entry, void * agentData, class hkpCollisionInput * input); // offset 0x20, size 0x4
    void (* m_warpTimeFunc)(class hkpAgentEntry * entry, void * agentData, float oldTime, float newTime, class hkpCollisionInput * input); // offset 0x24, size 0x4
    void (* m_sepNormalFunc)(class hkpAgent3Input * input, class hkpAgentEntry * entry, void * agentData, class hkVector4 * separatingNormalOut); // offset 0x28, size 0x4
    void * (* m_processFunc)(class hkpAgent3ProcessInput * input, class hkpAgentEntry * entry, void * agentData, class hkVector4 * separatingNormalOut, class hkpProcessCollisionOutput * result); // offset 0x2C, size 0x4
    class hkBool m_isPredictive; // offset 0x30, size 0x1
    class hkBool m_ignoreSymmetricVersion; // offset 0x31, size 0x1
    class hkBool m_reusePreviousEntry; // offset 0x32, size 0x1
};
// total size: 0x50
class hkpAgent3Input {
    // Members
    class hkPadSpu m_bodyA; // offset 0x0, size 0x4
    class hkPadSpu m_bodyB; // offset 0x4, size 0x4
    class hkPadSpu m_input; // offset 0x8, size 0x4
    class hkPadSpu m_contactMgr; // offset 0xC, size 0x4
    class hkTransform m_aTb; // offset 0x10, size 0x40
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
// total size: 0x4
class hkpAgentEntry {
    // Members
    unsigned char m_streamCommand; // offset 0x0, size 0x1
    unsigned char m_agentType; // offset 0x1, size 0x1
    unsigned char m_numContactPoints; // offset 0x2, size 0x1
    unsigned char m_size; // offset 0x3, size 0x1
};
// total size: 0x8
class hkStatisticsCollector {
    // Members
    void * m_clientData; // offset 0x4, size 0x4
};
// total size: 0x70
class hkpAgent3ProcessInput : public hkpAgent3Input {
    // Members
    class hkPadSpu m_distAtT1; // offset 0x50, size 0x4
    class hkPadSpu m_offsetPpuSectorMinusSpuSector; // offset 0x54, size 0x4
    class hkVector4 m_linearTimInfo; // offset 0x60, size 0x10
};
// total size: 0x4
class hkPadSpu {
    // Members
    float m_storage; // offset 0x0, size 0x4
};
// total size: 0x4
class hkPadSpu {
    // Members
    int m_storage; // offset 0x0, size 0x4
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
// total size: 0x20
class hkContactPoint {
    // Members
    class hkVector4 m_position; // offset 0x0, size 0x10
    class hkVector4 m_separatingNormal; // offset 0x10, size 0x10
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
// total size: 0x30
class hkContactPointPropertiesWithExtendedUserData16 : public hkpContactPointProperties {
    // Members
    unsigned int m_extendedUserDatas[7]; // offset 0x14, size 0x1C
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
// total size: 0x1
class hkUFloat8 {
    // Members
    unsigned char m_value; // offset 0x0, size 0x1
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
    float m_minSeparation; // offset 0x14, size 0x4
    float m_minExtraSeparation; // offset 0x18, size 0x4
    float m_minSafeDeltaTime; // offset 0x1C, size 0x4
    float m_minAbsoluteSafeDeltaTime; // offset 0x20, size 0x4
    float m_toiSeparation; // offset 0x24, size 0x4
    float m_toiExtraSeparation; // offset 0x28, size 0x4
    float m_toiAccuracy; // offset 0x2C, size 0x4
    float m_maxContraintViolation; // offset 0x30, size 0x4
    float m_minToiDeltaTime; // offset 0x34, size 0x4
    unsigned short m_constraintPriority; // offset 0x38, size 0x2
    class hkBool m_enableToiWeldRejection; // offset 0x3A, size 0x1
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
enum hkpShapeType {
    HK_SHAPE_INVALID = 0,
    HK_SHAPE_CONVEX = 1,
    HK_FIRST_SHAPE_TYPE = 1,
    HK_SHAPE_SPHERE = 2,
    HK_SHAPE_CYLINDER = 3,
    HK_SHAPE_TRIANGLE = 4,
    HK_SHAPE_BOX = 5,
    HK_SHAPE_CAPSULE = 6,
    HK_SHAPE_CONVEX_VERTICES = 7,
    HK_SHAPE_COLLECTION = 8,
    HK_SHAPE_BV_TREE = 9,
    HK_SHAPE_LIST = 10,
    HK_SHAPE_MOPP = 11,
    HK_SHAPE_CONVEX_TRANSLATE = 12,
    HK_SHAPE_CONVEX_TRANSFORM = 13,
    HK_SHAPE_SAMPLED_HEIGHT_FIELD = 14,
    HK_SHAPE_EXTENDED_MESH = 15,
    HK_SHAPE_USER_SPU_COLLECTION_0 = 16,
    HK_SHAPE_MAX_ID_SPU = 16,
    HK_SHAPE_PACKED_CONVEX_VERTICES = 17,
    HK_SHAPE_MOPP_EMBEDDED = 18,
    HK_SHAPE_CONVEX_PIECE = 19,
    HK_SHAPE_MULTI_SPHERE = 20,
    HK_SHAPE_CONVEX_LIST = 21,
    HK_SHAPE_TRIANGLE_COLLECTION = 22,
    HK_SHAPE_MULTI_RAY = 23,
    HK_SHAPE_HEIGHT_FIELD = 24,
    HK_SHAPE_SPHERE_REP = 25,
    HK_SHAPE_BV = 26,
    HK_SHAPE_PLANE = 27,
    HK_SHAPE_TRANSFORM = 28,
    HK_SHAPE_PHANTOM_CALLBACK = 29,
    HK_SHAPE_USER0 = 30,
    HK_SHAPE_USER1 = 31,
    HK_SHAPE_USER2 = 32,
    HK_SHAPE_MAX_ID = 33,
    HK_SHAPE_ALL = 4294967295,
};
// total size: 0x3
class DebugEntry {
    // Members
    char m_typeA; // offset 0x0, size 0x1
    char m_typeB; // offset 0x1, size 0x1
    char m_priority; // offset 0x2, size 0x1
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
// total size: 0x20
class hkpWorldOperationQueue {
    // Members
    class hkArray m_pending; // offset 0x0, size 0xC
    class hkpWorld * m_world; // offset 0xC, size 0x4
    class hkArray m_islandMerges; // offset 0x10, size 0xC
    class hkBool m_storeIslandMergesOnSeparateList; // offset 0x1C, size 0x1
    class hkCriticalSection m_queueOperationCriticalSection; // offset 0x1D, size 0x1
};
// total size: 0xC
class hkArray {
    // Members
    class BiggestOperation * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x14
class BiggestOperation : public BaseOperation {
    // Members
    unsigned long dummy[4]; // offset 0x4, size 0x10
};
// total size: 0x1
class BaseOperation {
    // Members
    class hkEnum m_type; // offset 0x0, size 0x1
};
// total size: 0x10
class hkpDebugInfoOnPendingOperationQueues {
    // Members
    class hkArray * m_pending; // offset 0x0, size 0x4
    int m_nextPendingOperationIndex; // offset 0x4, size 0x4
    class hkpDebugInfoOnPendingOperationQueues * m_nextQueue; // offset 0x8, size 0x4
    class hkpDebugInfoOnPendingOperationQueues * m_prevQueue; // offset 0xC, size 0x4
};
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
// total size: 0x98
class hkpPhantom : public hkpWorldObject {
    // Members
    class hkArray m_overlapListeners; // offset 0x80, size 0xC
    class hkArray m_phantomListeners; // offset 0x8C, size 0xC
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
// total size: 0x4
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
// total size: 0x4
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
// total size: 0x4
class hkpIslandPostIntegrateListener {};
// total size: 0xC
class hkArray {
    // Members
    class hkpIslandPostCollideListener * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x4
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
// total size: 0x4
class hkpContactImpulseLimitBreachedListener {};
// total size: 0x30
class hkpBroadPhaseBorder : public hkReferencedObject, protected hkpWorldDeletionListener, protected hkpPhantomOverlapListener {
    // Members
    class hkpWorld * m_world; // offset 0x10, size 0x4
    class hkpPhantom * m_phantoms[6]; // offset 0x14, size 0x18
    enum BroadPhaseBorderBehaviour m_type; // offset 0x2C, size 0x4
};
enum BroadPhaseBorderBehaviour {
    BROADPHASE_BORDER_ASSERT = 0,
    BROADPHASE_BORDER_FIX_ENTITY = 1,
    BROADPHASE_BORDER_REMOVE_ENTITY = 2,
    BROADPHASE_BORDER_DO_NOTHING = 3,
};
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
// total size: 0x58
class hkpLinkedCollidable : public hkpCollidable {
    // Members
    class hkArray m_collisionEntries; // offset 0x4C, size 0xC
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
// total size: 0x2C
class hkpConstraintInstance : public hkReferencedObject {
    // Members
    class hkpConstraintOwner * m_owner; // offset 0x8, size 0x4
    class hkpConstraintData * m_data; // offset 0xC, size 0x4
    class hkpModifierConstraintAtom * m_constraintModifiers; // offset 0x10, size 0x4
    class hkpEntity * m_entities[2]; // offset 0x14, size 0x8
    class hkEnum m_priority; // offset 0x1C, size 0x1
    class hkBool m_wantRuntime; // offset 0x1D, size 0x1
    char * m_name; // offset 0x20, size 0x4
    unsigned long m_userData; // offset 0x24, size 0x4
    class hkConstraintInternal * m_internal; // offset 0x28, size 0x4
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
// total size: 0x4
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
// total size: 0xE0
class xSweptSphere {
    // Members
    bool detect_initial_penetration; // offset 0x0, size 0x1
    bool init_collide; // offset 0x1, size 0x1
    class xVec3 start; // offset 0x4, size 0xC
    class xVec3 end; // offset 0x10, size 0xC
    float radius; // offset 0x1C, size 0x4
    unsigned short xEntFilterFlags; // offset 0x20, size 0x2
    float dist; // offset 0x24, size 0x4
    class xVec3 dir; // offset 0x28, size 0xC
    class xBox box; // offset 0x34, size 0x18
    float curdist; // offset 0x4C, size 0x4
    unsigned long long oid; // offset 0x50, size 0x8
    void * optr; // offset 0x58, size 0x4
    class xModelInstance * mptr; // offset 0x5C, size 0x4
    class xVec3 worldContact; // offset 0x60, size 0xC
    int hitIt; // offset 0x6C, size 0x4
    class xVec3 worldPos; // offset 0x70, size 0xC
    class xVec3 worldNormal; // offset 0x7C, size 0xC
    class xVec3 worldTangent; // offset 0x88, size 0xC
    class xJSPHeader * jsp; // offset 0x94, size 0x4
    enum xCollideSphereHitType type; // offset 0x98, size 0x4
    class xPlane tri_plane; // offset 0x9C, size 0x10
    class TriangleInfo * triInfo; // offset 0xAC, size 0x4
    unsigned long long surfaceID; // offset 0xB0, size 0x8
    class xVec3 v[3]; // offset 0xB8, size 0x24
    int chkby; // offset 0xDC, size 0x4
};
// total size: 0x18
class xBox {
    // Members
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
};
// total size: 0xA0
class xModelInstance {
    // Members
    class xModelInstance * Next; // offset 0x0, size 0x4
    class xModelPool * Pool; // offset 0x4, size 0x4
    class xAnimPlay * Anim; // offset 0x8, size 0x4
    float RedMultiplier; // offset 0xC, size 0x4
    float GreenMultiplier; // offset 0x10, size 0x4
    float BlueMultiplier; // offset 0x14, size 0x4
    float Alpha; // offset 0x18, size 0x4
    class xSurface * Surf; // offset 0x1C, size 0x4
    class xMat4x3 Mat; // offset 0x20, size 0x40
    unsigned long long modelID; // offset 0x60, size 0x8
    void * Object; // offset 0x68, size 0x4
    unsigned short Flags; // offset 0x6C, size 0x2
    unsigned short pad; // offset 0x6E, size 0x2
    class xVec3 Scale; // offset 0x70, size 0xC
    class ModelInstanceArticle * ngModelArt; // offset 0x7C, size 0x4
    class ModelInstanceAsset * modelInstanceAsset; // offset 0x80, size 0x4
    class ModelPrototypeEntity * modelProto; // offset 0x84, size 0x4
    class LightKit * lightkit; // offset 0x88, size 0x4
    bool hasLightKit; // offset 0x8C, size 0x1
    unsigned int renderCustomizerMask; // offset 0x90, size 0x4
    unsigned int pad16[3]; // offset 0x94, size 0xC
};
// total size: 0x4
class xModelPool {
    // Members
    class xModelInstance * List; // offset 0x0, size 0x4
};
// total size: 0x30
class xAnimPlay {
    // Members
    class xAnimPlay * Next; // offset 0x0, size 0x4
    unsigned short NumSingle; // offset 0x4, size 0x2
    unsigned short BoneCount; // offset 0x6, size 0x2
    class xAnimSingle * Single; // offset 0x8, size 0x4
    void * Object; // offset 0xC, size 0x4
    class xAnimTable * Table; // offset 0x10, size 0x4
    class xMemPool * Pool; // offset 0x14, size 0x4
    class xModelInstance * ModelInst; // offset 0x18, size 0x4
    void (* BeforeAnimMatrices)(class xAnimPlay * play, class xQuat * quat, class xVec3 * scale, class xVec3 * tran, int boneCount); // offset 0x1C, size 0x4
    void (* AfterAnimMatrices)(class xAnimPlay * play, class Matrix43 * skinMat, class xQuat * quat, class xVec3 * scale, class xVec3 * tran, int boneCount); // offset 0x20, size 0x4
    unsigned int padding[3]; // offset 0x24, size 0xC
};
// total size: 0x50
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
    unsigned int pad[1]; // offset 0x4C, size 0x4
};
// total size: 0x60
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
    class xAnimVFX_Effect * VFXEffects; // offset 0x28, size 0x4
    class xAnimTransitionList * Default; // offset 0x2C, size 0x4
    class xAnimTransitionList * List; // offset 0x30, size 0x4
    float * BoneBlend; // offset 0x34, size 0x4
    float * TimeSnap; // offset 0x38, size 0x4
    float FadeRecip; // offset 0x3C, size 0x4
    unsigned short * FadeOffset; // offset 0x40, size 0x4
    void * CallbackData; // offset 0x44, size 0x4
    void * UserData; // offset 0x48, size 0x4
    class xAnimMultiFile * MultiFile; // offset 0x4C, size 0x4
    void (* BeforeEnter)(class xAnimPlay * play, class xAnimState * state, void * object); // offset 0x50, size 0x4
    void (* StateCallback)(class xAnimState * state, class xAnimSingle * anim, void * object); // offset 0x54, size 0x4
    void (* BeforeAnimMatrices)(class xAnimPlay * play, class xQuat * quat, class xVec3 * scale, class xVec3 * tran, int boneCount); // offset 0x58, size 0x4
};
// total size: 0x24
class xAnimFile {
    // Members
    class xAnimFile * Next; // offset 0x0, size 0x4
    char * Name; // offset 0x4, size 0x4
    unsigned int ID; // offset 0x8, size 0x4
    unsigned int FileFlags; // offset 0xC, size 0x4
    float Duration; // offset 0x10, size 0x4
    float TimeOffset; // offset 0x14, size 0x4
    unsigned short BoneCount; // offset 0x18, size 0x2
    unsigned char pad1[2]; // offset 0x1A, size 0x2
    unsigned char NumAnims[3]; // offset 0x1C, size 0x3
    unsigned char pad2[1]; // offset 0x1F, size 0x1
    void * * RawData; // offset 0x20, size 0x4
};
// total size: 0x98
class xAnimSoundEffect : public xAnimEffectTiming {
    // Members
    class xAnimSoundEffect * Next; // offset 0xC, size 0x4
    class zSoundAsset SoundAsset; // offset 0x10, size 0x74
    void (* Callback)(void * effect, class xEnt * owner, class xAnimState * state); // offset 0x84, size 0x4
    unsigned long long surfaceTypeID; // offset 0x88, size 0x8
    bool bIsPlaying; // offset 0x90, size 0x1
};
// total size: 0xC
class xAnimEffectTiming {
    // Members
    float totalTime; // offset 0x0, size 0x4
    float startTime; // offset 0x4, size 0x4
    float endTime; // offset 0x8, size 0x4
};
// total size: 0x74
class zSoundAsset {
    // Members
    char * soundSourceName; // offset 0x0, size 0x4
    int soundSourceIdx; // offset 0x4, size 0x4
    int indicesCount; // offset 0x8, size 0x4
    int * indicesTree; // offset 0xC, size 0x4
    int level; // offset 0x10, size 0x4
    class Event * event; // offset 0x14, size 0x4
    class Channel * channel; // offset 0x18, size 0x4
    class FMOD_VECTOR * pos; // offset 0x1C, size 0x4
    enum FMOD_RESULT (* userCallback)(class FMOD_EVENT * event, enum FMOD_EVENT_CALLBACKTYPE type, void * param1, void * param2, void * userdata); // offset 0x20, size 0x4
    void * userCallbackData; // offset 0x24, size 0x4
    int levelDyn; // offset 0x28, size 0x4
    int indicesTreeDyn[16]; // offset 0x2C, size 0x40
    char rootGroupName[6]; // offset 0x6C, size 0x6
    bool streamed; // offset 0x72, size 0x1
    bool stopOnAnimEnd; // offset 0x73, size 0x1
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
    FMOD_ERR_INVALID_SPEAKER = 38,
    FMOD_ERR_INVALID_VECTOR = 39,
    FMOD_ERR_IRX = 40,
    FMOD_ERR_MAXAUDIBLE = 41,
    FMOD_ERR_MEMORY = 42,
    FMOD_ERR_MEMORY_IOP = 43,
    FMOD_ERR_MEMORY_SRAM = 44,
    FMOD_ERR_MEMORY_CANTPOINT = 45,
    FMOD_ERR_NEEDS2D = 46,
    FMOD_ERR_NEEDS3D = 47,
    FMOD_ERR_NEEDSHARDWARE = 48,
    FMOD_ERR_NEEDSSOFTWARE = 49,
    FMOD_ERR_NET_CONNECT = 50,
    FMOD_ERR_NET_SOCKET_ERROR = 51,
    FMOD_ERR_NET_URL = 52,
    FMOD_ERR_NET_WOULD_BLOCK = 53,
    FMOD_ERR_NOTREADY = 54,
    FMOD_ERR_OUTPUT_ALLOCATED = 55,
    FMOD_ERR_OUTPUT_CREATEBUFFER = 56,
    FMOD_ERR_OUTPUT_DRIVERCALL = 57,
    FMOD_ERR_OUTPUT_ENUMERATION = 58,
    FMOD_ERR_OUTPUT_FORMAT = 59,
    FMOD_ERR_OUTPUT_INIT = 60,
    FMOD_ERR_OUTPUT_NOHARDWARE = 61,
    FMOD_ERR_OUTPUT_NOSOFTWARE = 62,
    FMOD_ERR_PAN = 63,
    FMOD_ERR_PLUGIN = 64,
    FMOD_ERR_PLUGIN_MISSING = 65,
    FMOD_ERR_PLUGIN_RESOURCE = 66,
    FMOD_ERR_PLUGIN_INSTANCES = 67,
    FMOD_ERR_RECORD = 68,
    FMOD_ERR_REVERB_INSTANCE = 69,
    FMOD_ERR_SUBSOUNDS = 70,
    FMOD_ERR_SUBSOUND_ALLOCATED = 71,
    FMOD_ERR_TAGNOTFOUND = 72,
    FMOD_ERR_TOOMANYCHANNELS = 73,
    FMOD_ERR_UNIMPLEMENTED = 74,
    FMOD_ERR_UNINITIALIZED = 75,
    FMOD_ERR_UNSUPPORTED = 76,
    FMOD_ERR_UPDATE = 77,
    FMOD_ERR_VERSION = 78,
    FMOD_ERR_EVENT_FAILED = 79,
    FMOD_ERR_EVENT_INTERNAL = 80,
    FMOD_ERR_EVENT_INFOONLY = 81,
    FMOD_ERR_EVENT_MAXSTREAMS = 82,
    FMOD_ERR_EVENT_MISMATCH = 83,
    FMOD_ERR_EVENT_NAMECONFLICT = 84,
    FMOD_ERR_EVENT_NOTFOUND = 85,
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
};
// total size: 0xB8
class xEnt : public xBase {
    // Members
    class xEntAsset * asset; // offset 0x20, size 0x4
    enum E_HAVOK_COLLIDE_FILTER_LAYER storedCollisionLayer; // offset 0x24, size 0x4
    unsigned int idx : 16; // offset 0x28, size 0x4, bit offset 0
    unsigned int moreFlags : 16; // offset 0x28, size 0x4, bit offset 16
    unsigned int flags : 8; // offset 0x2C, size 0x4, bit offset 0
    unsigned int miscflags : 8; // offset 0x2C, size 0x4, bit offset 8
    unsigned int subType : 8; // offset 0x2C, size 0x4, bit offset 16
    unsigned int pflags : 8; // offset 0x2C, size 0x4, bit offset 24
    unsigned char isCulled : 4; // offset 0x30, size 0x1, bit offset 0
    unsigned char collisionEventReceived : 4; // offset 0x30, size 0x1, bit offset 4
    unsigned char driving_count : 7; // offset 0x31, size 0x1, bit offset 0
    unsigned char drivingReset : 1; // offset 0x31, size 0x1, bit offset 7
    unsigned char num_ffx; // offset 0x32, size 0x1
    unsigned char collType; // offset 0x33, size 0x1
    unsigned char chkby; // offset 0x34, size 0x1
    unsigned char penby; // offset 0x35, size 0x1
    unsigned char hasModelStored : 4; // offset 0x36, size 0x1, bit offset 0
    unsigned char collisionOn : 2; // offset 0x36, size 0x1, bit offset 4
    void (* visUpdate)(class xEnt *); // offset 0x38, size 0x4
    class xModelInstance * model; // offset 0x3C, size 0x4
    class xModelInstance * storageModel; // offset 0x40, size 0x4
    void (* update)(class xEnt *, class xScene *, float); // offset 0x44, size 0x4
    void (* endUpdate)(class xEnt *, class xScene *, float); // offset 0x48, size 0x4
    void (* bupdate)(class xEnt *, class xVec3 *); // offset 0x4C, size 0x4
    void (* move)(class xEnt *, class xScene *, float, class xEntFrame *); // offset 0x50, size 0x4
    void (* render)(class xEnt *); // offset 0x54, size 0x4
    class xEntFrame * frame; // offset 0x58, size 0x4
    class xBound bound; // offset 0x5C, size 0x2C
    void (* transl)(class xEnt *, class xVec3 *, class xMat4x3 *); // offset 0x88, size 0x4
    class xFFX * ffx; // offset 0x8C, size 0x4
    class xEnt * driver; // offset 0x90, size 0x4
    class xEnt * driven; // offset 0x94, size 0x4
    class xEntDriveInfo * driveInfo; // offset 0x98, size 0x4
    class xEntShadow * entShadow; // offset 0x9C, size 0x4
    class SurfaceGamePlay * pSurface; // offset 0xA0, size 0x4
    class hkpRigidBody * pRigidBody; // offset 0xA4, size 0x4
    class xVec3 pRigidBodyPostScale; // offset 0xA8, size 0xC
    void * user_data; // offset 0xB4, size 0x4
};
// total size: 0x20
class xBase {
    // Members
    unsigned long long id; // offset 0x0, size 0x8
    unsigned int baseType; // offset 0x8, size 0x4
    unsigned char UNUSED_linkCount; // offset 0xC, size 0x1
    unsigned char pad; // offset 0xD, size 0x1
    unsigned short baseFlags; // offset 0xE, size 0x2
    class xOGEntity * worldEntity; // offset 0x10, size 0x4
    class LinkAsset * linkArray; // offset 0x14, size 0x4
    void (* eventFunc)(class xBase * from, class xBase * to, unsigned int toEvent, class EventAny * params); // offset 0x18, size 0x4
};
// total size: 0x10
class xOGEntity : public Entity {};
// total size: 0x10
class Entity {
    // Members
    unsigned int typeID; // offset 0x0, size 0x4
    void * hackOwner; // offset 0x8, size 0x4
    class EntityHandleBase * handle; // offset 0xC, size 0x4
};
// total size: 0x14
class EntityHandleBase {
    // Members
    void * hackOwner; // offset 0x0, size 0x4
    class @class __anon; // offset 0x4, size 0x4
    class Entity * entity; // offset 0x4, size 0x4
    class EntityStub * stub; // offset 0x4, size 0x4
    class ReferenceCounter rc; // offset 0x8, size 0x4
    class Goodie * goodie; // offset 0xC, size 0x4
    int updateFlags; // offset 0x10, size 0x4
};
// total size: 0x4
class @class {
    // Members
    class Entity * entity; // offset 0x0, size 0x4
    class EntityStub * stub; // offset 0x0, size 0x4
};
// total size: 0x4
class EntityStub {
    // Members
    unsigned int typeIndex; // offset 0x0, size 0x4
};
// total size: 0x4
class ReferenceCounter {
    // Members
    int count; // offset 0x0, size 0x4
};
// total size: 0x38
class Goodie {
    // Members
    class Blobloid blobloid; // offset 0x0, size 0x20
    class Schema * schema; // offset 0x20, size 0x4
    class EntityHandleBase entityHandle; // offset 0x24, size 0x14
};
// total size: 0x20
class Blobloid {
    // Members
    unsigned long long blobUID; // offset 0x0, size 0x8
    int wmlTypeID; // offset 0x8, size 0x4
    int blobSize; // offset 0xC, size 0x4
    unsigned short blobFlags; // offset 0x10, size 0x2
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
// total size: 0x18
class Schema {
    // Members
    unsigned int typeID; // offset 0x4, size 0x4
    int typeIndex; // offset 0x8, size 0x4
    unsigned int typeWML; // offset 0xC, size 0x4
    char * name; // offset 0x10, size 0x4
    char * tName; // offset 0x14, size 0x4
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
// total size: 0x4
class Pointer32 {
    // Members
    unsigned int _p; // offset 0x0, size 0x4
};
// total size: 0x1
class EventAny {};
// total size: 0xF0
class xEntAsset : public xBaseAsset {
    // Members
    unsigned char flags; // offset 0x10, size 0x1
    unsigned char subtype; // offset 0x11, size 0x1
    unsigned char pad; // offset 0x12, size 0x1
    unsigned char moreFlags; // offset 0x13, size 0x1
    unsigned long long surfaceID; // offset 0x18, size 0x8
    class xVec3 ang; // offset 0x20, size 0xC
    class xVec3 pos; // offset 0x2C, size 0xC
    class xVec3 scale; // offset 0x38, size 0xC
    float redMult; // offset 0x44, size 0x4
    float greenMult; // offset 0x48, size 0x4
    float blueMult; // offset 0x4C, size 0x4
    float seeThru; // offset 0x50, size 0x4
    float seeThruSpeed; // offset 0x54, size 0x4
    class ModelInstanceAsset modelInstance; // offset 0x60, size 0x40
    unsigned long long animListID; // offset 0xA0, size 0x8
    class PhysicsData physicsData; // offset 0xA8, size 0x48
};
// total size: 0x10
class xBaseAsset {
    // Members
    unsigned long long id; // offset 0x0, size 0x8
    unsigned int baseType; // offset 0x8, size 0x4
    unsigned short linkCount; // offset 0xC, size 0x2
    unsigned short baseFlags; // offset 0xE, size 0x2
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
    unsigned int shadowFlags; // offset 0x20, size 0x4
    unsigned int shadowColorOverride; // offset 0x24, size 0x4
    float shadowMaxDepthOverride; // offset 0x28, size 0x4
    float shadowStartDepthOverride; // offset 0x2C, size 0x4
    unsigned int shadowMinBlurOverride; // offset 0x30, size 0x4
    unsigned int shadowMaxBlurOverride; // offset 0x34, size 0x4
    unsigned int alignmentPadding; // offset 0x38, size 0x4
    void * modelSwapInfo; // offset 0x3C, size 0x4
};
// total size: 0x48
class PhysicsData {
    // Members
    float mass; // offset 0x0, size 0x4
    float friction; // offset 0x4, size 0x4
    float elasticity; // offset 0x8, size 0x4
    int magnetic_Charge; // offset 0xC, size 0x4
    class SoundSourcesPhysics SoundsPhysics; // offset 0x10, size 0x38
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
    eNPCEveLayer = 20,
};
// total size: 0x50
class xScene {
    // Members
    unsigned int sceneID; // offset 0x0, size 0x4
    unsigned short flags; // offset 0x4, size 0x2
    unsigned short numTrigs; // offset 0x6, size 0x2
    unsigned short numActEnts; // offset 0x8, size 0x2
    unsigned short pad; // offset 0xA, size 0x2
    float gravity; // offset 0xC, size 0x4
    float drag; // offset 0x10, size 0x4
    float friction; // offset 0x14, size 0x4
    unsigned short numEntsAllocd; // offset 0x18, size 0x2
    unsigned short numTrigsAllocd; // offset 0x1A, size 0x2
    class xEnt * * trigs; // offset 0x1C, size 0x4
    class xEnt * * actEnts; // offset 0x20, size 0x4
    class xEnv * env; // offset 0x24, size 0x4
    class xMemPool mempool; // offset 0x28, size 0x1C
    class xBase * (* resolvID)(unsigned long long baseID); // offset 0x44, size 0x4
    char * (* base2Name)(class xBase * baseP); // offset 0x48, size 0x4
    char * (* id2Name)(unsigned long long baseID); // offset 0x4C, size 0x4
};
// total size: 0x30
class xEnv : public xBase {
    // Members
    class xEnvAsset * envAsset; // offset 0x20, size 0x4
    class LightKit * lightkitBSP; // offset 0x24, size 0x4
    class LightKit * lightkitObject; // offset 0x28, size 0x4
};
// total size: 0xA0
class xEnvAsset : public xBaseAsset {
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
// total size: 0x10
class xBaseAsset {
    // Members
    class uid id; // offset 0x0, size 0x8
    unsigned int baseType; // offset 0x8, size 0x4
    unsigned short linkCount; // offset 0xC, size 0x2
    unsigned short baseFlags; // offset 0xE, size 0x2
};
// total size: 0x8
class uid {
    // Members
    unsigned long long internalUid; // offset 0x0, size 0x8
};
// total size: 0xC
class vec3 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0xAC
class LightKit : public Node {
    // Members
    class LightKitData data; // offset 0xC, size 0xA0
};
// total size: 0xC
class Node {
    // Members
    unsigned int type; // offset 0x4, size 0x4
    bool attached; // offset 0x8, size 0x1
    bool detachPending; // offset 0x9, size 0x1
    bool updateThread; // offset 0xA, size 0x1
};
// total size: 0xA0
class LightKitData {
    // Members
    class Vector4 ambientColor; // offset 0x0, size 0x10
    class Vector4 specDirectional[2]; // offset 0x10, size 0x20
    class Vector4 directionalColor[3]; // offset 0x30, size 0x30
    class Vector4 directionalVec[3]; // offset 0x60, size 0x30
    class LightKitData * next; // offset 0x90, size 0x4
    class LightKitData * prev; // offset 0x94, size 0x4
    unsigned char index; // offset 0x98, size 0x1
    class WiiLightKitTexLookup * lookup; // offset 0x9C, size 0x4
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
// total size: 0x124
class xEntFrame {
    // Members
    class xMat4x3 mat; // offset 0x0, size 0x40
    class xMat4x3 oldmat; // offset 0x40, size 0x40
    class xVec3 oldvel; // offset 0x80, size 0xC
    class xRot oldrot; // offset 0x8C, size 0x10
    class xRot drot; // offset 0x9C, size 0x10
    class xRot rot; // offset 0xAC, size 0x10
    class xVec3 dvel; // offset 0xBC, size 0xC
    class xVec3 vel; // offset 0xC8, size 0xC
    unsigned int mode; // offset 0xD4, size 0x4
    class xVec3 dpos; // offset 0xD8, size 0xC
    class xMat4x3 accumRelMat; // offset 0xE4, size 0x40
};
// total size: 0x10
class xRot {
    // Members
    class xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
};
// total size: 0x2C
class xBound {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char pad[3]; // offset 0x1, size 0x3
    class @class __anon; // offset 0x4, size 0x24
    class xSphere sph; // offset 0x4, size 0x10
    class xBBox box; // offset 0x4, size 0x24
    class xCylinder cyl; // offset 0x4, size 0x14
    class xMat4x3 * mat; // offset 0x28, size 0x4
};
// total size: 0x24
class @class {
    // Members
    class xSphere sph; // offset 0x0, size 0x10
    class xBBox box; // offset 0x0, size 0x24
    class xCylinder cyl; // offset 0x0, size 0x14
};
// total size: 0x10
class xSphere {
    // Members
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
// total size: 0x24
class xBBox {
    // Members
    class xVec3 center; // offset 0x0, size 0xC
    class xBox box; // offset 0xC, size 0x18
};
// total size: 0x14
class xCylinder {
    // Members
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
// total size: 0x10
class xFFX {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    void (* doEffect)(class xEnt * ent, class xScene * sc, float dt, void * fdata); // offset 0x4, size 0x4
    void * fdata; // offset 0x8, size 0x4
    class xFFX * next; // offset 0xC, size 0x4
};
// total size: 0x50
class xEntDriveInfo {
    // Members
    class xMat4x3 driveMat; // offset 0x0, size 0x40
    class xVec3 centerOffset; // offset 0x40, size 0xC
    unsigned int flags; // offset 0x4C, size 0x4
};
// total size: 0x28
class xEntShadow {
    // Members
    class xVec3 pos; // offset 0x0, size 0xC
    class xVec3 vec; // offset 0xC, size 0xC
    float dst_cast; // offset 0x18, size 0x4
    float radius[2]; // offset 0x1C, size 0x8
    int flg_castOnOneDFF : 1; // offset 0x24, size 0x4, bit offset 0
    int flg_castOnAllDFF : 1; // offset 0x24, size 0x4, bit offset 1
    int flg_disableEnvCast : 1; // offset 0x24, size 0x4, bit offset 2
    int flg_shadowUnused : 29; // offset 0x24, size 0x4, bit offset 3
};
// total size: 0xA0
class SurfaceGamePlay : public Surface {
    // Members
    bool Reflective; // offset 0x10, size 0x1
    unsigned int InstantDamageAmount; // offset 0x14, size 0x4
    unsigned int DotDamageAmount; // offset 0x18, size 0x4
    float DotDamageFreq; // offset 0x1C, size 0x4
    unsigned int SoundType; // offset 0x20, size 0x4
    unsigned int VFXType; // offset 0x24, size 0x4
    float VFXEmitRateMutliplier; // offset 0x28, size 0x4
    float VFXLifeTimeMutliplier; // offset 0x2C, size 0x4
    unsigned int DamageType; // offset 0x30, size 0x4
    float Friction; // offset 0x34, size 0x4
    class VelocityStruct SurfaceVelocity; // offset 0x38, size 0x10
    class fx fx; // offset 0x48, size 0x50
    class LinkAsset EventLinksNew; // offset 0x98, size 0x8
};
// total size: 0x10
class Surface : public xBaseAsset {};
// total size: 0x10
class VelocityStruct {
    // Members
    float magnitude; // offset 0x0, size 0x4
    class vec3 direction; // offset 0x4, size 0xC
};
// total size: 0x50
class fx {
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
// total size: 0x20
class xAnimVFX_Effect : public xAnimEffectTiming {
    // Members
    class xAnimVFX_Effect * Next; // offset 0xC, size 0x4
    class AnimVFX * spawnSource; // offset 0x10, size 0x4
    void (* Callback)(void * effect, class xEnt * owner, class xAnimState * state); // offset 0x14, size 0x4
    class SurfaceGamePlay * surface; // offset 0x18, size 0x4
    unsigned short flags; // offset 0x1C, size 0x2
};
// total size: 0x8
class AnimVFX {
    // Members
    class uid FXScriptSpawn; // offset 0x0, size 0x8
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
// total size: 0x10
class xQuat {
    // Members
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
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
// total size: 0x38
class xSurface : public xBase {
    // Members
    unsigned int idx; // offset 0x20, size 0x4
    unsigned int type; // offset 0x24, size 0x4
    class @class __anon; // offset 0x28, size 0x4
    unsigned int mat_idx; // offset 0x28, size 0x4
    class xEnt * ent; // offset 0x28, size 0x4
    void * obj; // offset 0x28, size 0x4
    float friction; // offset 0x2C, size 0x4
    unsigned char state; // offset 0x30, size 0x1
    unsigned char pad[3]; // offset 0x31, size 0x3
    void * moprops; // offset 0x34, size 0x4
};
// total size: 0x4
class @class {
    // Members
    unsigned int mat_idx; // offset 0x0, size 0x4
    class xEnt * ent; // offset 0x0, size 0x4
    void * obj; // offset 0x0, size 0x4
};
// total size: 0x90
class ModelInstanceArticle : public Article {
    // Members
    unsigned int projectShadowCache; // offset 0x4, size 0x4
    class ShadowSimpleCache * simpleShadowCachePtr; // offset 0x8, size 0x4
    class Renderable3DLink simpleShadowCastOn; // offset 0xC, size 0xC
    int sceneRefCount; // offset 0x18, size 0x4
    class ModelPrototypeEntity * protoEnt; // offset 0x1C, size 0x4
    class ParamCargo paramCargo; // offset 0x20, size 0x8
    class Model model; // offset 0x28, size 0x58
    class LightKitEntity * lightKitEnt; // offset 0x80, size 0x4
    class RenderCustomizerInfo * renderCustomizers; // offset 0x84, size 0x4
    int renderCustomizerCount; // offset 0x88, size 0x4
    void * memoryPtr; // offset 0x8C, size 0x4
};
// total size: 0x4
class Article {};
// total size: 0xCC
class ShadowSimpleCache {
    // Members
    float radius; // offset 0x0, size 0x4
    unsigned short flags; // offset 0x4, size 0x2
    unsigned short castOnEnt; // offset 0x6, size 0x2
    unsigned int collPriority; // offset 0x8, size 0x4
    float tol_movement; // offset 0xC, size 0x4
    float radiusOptional; // offset 0x10, size 0x4
    class Renderable3DLink * castOnPtr; // offset 0x14, size 0x4
    class ShadowSimplePoly poly; // offset 0x18, size 0x40
    float shadowHeight; // offset 0x58, size 0x4
    class EntityHandle * textureHandle; // offset 0x5C, size 0x4
    float dydx; // offset 0x60, size 0x4
    float dydz; // offset 0x64, size 0x4
    class Vector3 corner[4]; // offset 0x68, size 0x30
    float boundUpperY; // offset 0x98, size 0x4
    class Vector boundCenter; // offset 0x9C, size 0x10
    class Vector boundHalf; // offset 0xAC, size 0x10
    class Vector4 rayStart; // offset 0xBC, size 0x10
};
// total size: 0xC
class Renderable3DLink {
    // Members
    class Renderable3D * rend; // offset 0x0, size 0x4
    class Renderable3DLink * rendPrev; // offset 0x4, size 0x4
    class Renderable3DLink * rendNext; // offset 0x8, size 0x4
};
// total size: 0xF0
class Renderable3D : public Renderable {
    // Members
    class Vector4 lodData; // offset 0x30, size 0x10
    class BroadBound worldBound; // offset 0x40, size 0x20
    class LightingState lightState; // offset 0x60, size 0x20
    class Vector4 postColorMul; // offset 0x80, size 0x10
    class Vector4 shadowColor; // offset 0x90, size 0x10
    float shadowCastDepth; // offset 0xA0, size 0x4
    float shadowCastStartDepth; // offset 0xA4, size 0x4
    unsigned short shadowMinBlur; // offset 0xA8, size 0x2
    unsigned short shadowMaxBlur; // offset 0xAA, size 0x2
    int cameraRelativeFlags; // offset 0xAC, size 0x4
    class Vector scaleLockPos; // offset 0xB0, size 0x10
    class Renderable3DTransform * xform; // offset 0xC0, size 0x4
    void * projectShadowCast; // offset 0xC4, size 0x4
    void * projectShadowReceive; // offset 0xC8, size 0x4
    class Scene * showScene; // offset 0xCC, size 0x4
    class ModelInstanceArticle * parentInstance; // offset 0xD0, size 0x4
    class Renderable3DLink links; // offset 0xD4, size 0xC
    unsigned int projectShadowCache; // offset 0xE0, size 0x4
    unsigned int * projectShadowCachePtr; // offset 0xE4, size 0x4
    unsigned int projectShadowFlags; // offset 0xE8, size 0x4
    class ShadowSimpleCache * simpleShadowCachePtr; // offset 0xEC, size 0x4
};
// total size: 0x30
class Renderable : public Node {
    // Members
    class Scene * scene; // offset 0xC, size 0x4
    class RenderableSceneRef * sceneRef; // offset 0x10, size 0x4
    class ParamData * paramData; // offset 0x14, size 0x4
    class RenderMode * instRenderMode; // offset 0x18, size 0x4
    class Geometry * geom; // offset 0x1C, size 0x4
    float hackAlphaFade; // offset 0x20, size 0x4
    unsigned short colorMulHandle; // offset 0x24, size 0x2
    unsigned short outlineColorHandle; // offset 0x26, size 0x2
    unsigned short viewportVisibleMask; // offset 0x28, size 0x2
    unsigned char hackVertLOD; // offset 0x2A, size 0x1
    unsigned char activeTechIndex; // offset 0x2B, size 0x1
    class RenderAttrib viewAttrib; // offset 0x2C, size 0x1
};
// total size: 0x10A4
class Scene : public Node {
    // Members
    bool autoRefresh; // offset 0xB, size 0x1
    bool needRefresh; // offset 0xC, size 0x1
    class PoolArray views; // offset 0x10, size 0xC
    class PoolArray renderables; // offset 0x1C, size 0xC
    int dynamicCount; // offset 0x28, size 0x4
    class PoolArray lightsPointSpot; // offset 0x2C, size 0xC
    class Space * hackWorldSpace; // offset 0x38, size 0x4
    class VoidList components; // offset 0x3C, size 0x8
    class PoolArray renderThreadDebugDraw; // offset 0x44, size 0xC
    int lightKitSceneApplied; // offset 0x50, size 0x4
    class LightKitData initialKit; // offset 0x54, size 0xA0
    class LightKitData kitArray[5]; // offset 0xF4, size 0x320
    class Data pointSpotData[64]; // offset 0x414, size 0xC00
    unsigned int cullViewportCount; // offset 0x1014, size 0x4
    unsigned int pad[3]; // offset 0x1018, size 0xC
    class CullViewport cullViewportList[1]; // offset 0x1024, size 0x80
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
    class RenderableSceneRef * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
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
    class LightPointSpot * * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x58
class LightPointSpot : public Node {
    // Members
    class Scene * scene; // offset 0xC, size 0x4
    unsigned short sceneIndex; // offset 0x10, size 0x2
    class Flags flags; // offset 0x12, size 0x4
    class Data data; // offset 0x18, size 0x30
    class Vector4 boundData; // offset 0x48, size 0x10
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
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class Renderable * * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x80
class CullViewport {
    // Members
    class FrustumPlanes frust; // offset 0x0, size 0x70
    class Vector4 camDir; // offset 0x70, size 0x10
};
// total size: 0x70
class FrustumPlanes {
    // Members
    class Vector4 campos; // offset 0x0, size 0x10
    class Vector4 planes[6]; // offset 0x10, size 0x60
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
// total size: 0xB8
class Geometry : public Node {
    // Members
    bool hackBuilt; // offset 0xB, size 0x1
    bool hackCompleteBuilt; // offset 0xC, size 0x1
    class BroadBound bbound; // offset 0x10, size 0x20
    class Vector4 boundSphere; // offset 0x30, size 0x10
    bool degenerateBound; // offset 0x40, size 0x1
    float offDist; // offset 0x44, size 0x4
    float vertLodDist; // offset 0x48, size 0x4
    class Builder * builder; // offset 0x4C, size 0x4
    class Effect * effect; // offset 0x50, size 0x4
    class Material * material; // offset 0x54, size 0x4
    class ParamData * paramData; // offset 0x58, size 0x4
    class GeometryContext * * shaderContextList; // offset 0x5C, size 0x4
    enum PrimitiveType primType; // offset 0x60, size 0x4
    int vertexCount; // offset 0x64, size 0x4
    class IndexLOD indexLods[2]; // offset 0x68, size 0x38
    int indexLodCount; // offset 0xA0, size 0x4
    class VertexBuffer * vertexBuffers; // offset 0xA4, size 0x4
    int vertexBufferCount; // offset 0xA8, size 0x4
    unsigned int sectorLight; // offset 0xAC, size 0x4
    bool wiiDirect; // offset 0xB0, size 0x1
    class Wii_GeometryStateOp * wiiGeomStateOp; // offset 0xB4, size 0x4
};
// total size: 0x20
class BroadBound {
    // Members
    class Vector lower; // offset 0x0, size 0x10
    class Vector upper; // offset 0x10, size 0x10
};
// total size: 0x10
class Vector : private Vector4 {};
// total size: 0x10
class Builder : public Node {
    // Members
    class ParamData * rendParamData; // offset 0xC, size 0x4
};
// total size: 0x64
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
    signed char standardTechIndices[5]; // offset 0x54, size 0x5
    unsigned char standardTechShaders[5]; // offset 0x59, size 0x5
    unsigned short effectFlags; // offset 0x5E, size 0x2
    unsigned short colorMulHandle; // offset 0x60, size 0x2
    unsigned short outlineColorHandle; // offset 0x62, size 0x2
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
// total size: 0x3C
class Wii_GeometryStateOp : public StateOp {
    // Members
    class Wii_MaterialSettings mat; // offset 0x4, size 0x8
    class ChannelInfo pos; // offset 0xC, size 0x8
    class ChannelInfo norm; // offset 0x14, size 0x8
    class ChannelInfo color; // offset 0x1C, size 0x8
    class ChannelInfo uv[3]; // offset 0x24, size 0x18
};
// total size: 0x4
class StateOp {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char pad; // offset 0x1, size 0x1
    unsigned short size; // offset 0x2, size 0x2
};
// total size: 0x8
class Wii_MaterialSettings {
    // Members
    unsigned char diffuseMapParamIndex; // offset 0x0, size 0x1
    unsigned char lightMapParamIndex; // offset 0x1, size 0x1
    unsigned char envMapParamIndex; // offset 0x2, size 0x1
    unsigned char colorMulParamIndex; // offset 0x3, size 0x1
    unsigned char lightMapScaleParamIndex; // offset 0x4, size 0x1
    unsigned char envMapScaleParamIndex; // offset 0x5, size 0x1
    unsigned char uvSet1ParamIndex; // offset 0x6, size 0x1
    unsigned char uvSet2ParamIndex; // offset 0x7, size 0x1
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
    unsigned char layer : 3; // offset 0x0, size 0x1, bit offset 0
    unsigned char pad : 2; // offset 0x0, size 0x1, bit offset 3
    unsigned char spaceFilter : 3; // offset 0x0, size 0x1, bit offset 5
};
// total size: 0x20
class LightingState {
    // Members
    class LightKitData * kit[2]; // offset 0x0, size 0x8
    class @class kitScale; // offset 0x8, size 0x2
    bool includeAmbient; // offset 0xA, size 0x1
    unsigned char pad1; // offset 0xB, size 0x1
    unsigned short lightMask; // offset 0xC, size 0x2
    unsigned char pointSpotCount; // offset 0xE, size 0x1
    unsigned char pointSpotIdx[7]; // offset 0xF, size 0x7
    unsigned short pad2; // offset 0x16, size 0x2
    unsigned char * lightSectorIndices; // offset 0x18, size 0x4
    unsigned int lightSector; // offset 0x1C, size 0x4
};
// total size: 0x2
class @class {
    // Members
    unsigned char val[2]; // offset 0x0, size 0x2
    unsigned short state; // offset 0x0, size 0x2
};
// total size: 0x40
class Renderable3DTransform {
    // Members
    class Matrix43 worldMat; // offset 0x0, size 0x30
    class Vector4 recipScale; // offset 0x30, size 0x10
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
// total size: 0x80
class ModelPrototypeEntity : public Entity {
    // Members
    int memSize; // offset 0x10, size 0x4
    int refModelActivated; // offset 0x14, size 0x4
    class ModelPrototype modelProto; // offset 0x18, size 0x3C
    class SkeletonBlobEntity * skelBlob; // offset 0x54, size 0x4
    class CollisionMeshBlobEntity * collmeshBlob; // offset 0x58, size 0x4
    class RefColl * pRefColl; // offset 0x5C, size 0x4
    int refCollCnt; // offset 0x60, size 0x4
    class LightSectorData lightSectorData; // offset 0x64, size 0x1C
};
// total size: 0x3C
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
    unsigned short geomCount; // offset 0x24, size 0x2
    unsigned short renderableCount; // offset 0x26, size 0x2
    unsigned short childTransformCount; // offset 0x28, size 0x2
    unsigned short refRenderableCount; // offset 0x2A, size 0x2
    unsigned short modelPartCount; // offset 0x2C, size 0x2
    class Skeleton * skeleton; // offset 0x30, size 0x4
    int createSize; // offset 0x34, size 0x4
    int createAlign; // offset 0x38, size 0x4
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
// total size: 0x3C
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
    signed char * transformToGroupMap; // offset 0x30, size 0x4
    bool userScale; // offset 0x34, size 0x1
    class Matrix43 * hackEvalResults; // offset 0x38, size 0x4
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
// total size: 0x1C
class SkinCluster {
    // Members
    unsigned char * parentIndices; // offset 0x0, size 0x4
    class EvaluatorSkinSection * sections; // offset 0x4, size 0x4
    class Matrix43 * invBindMat; // offset 0x8, size 0x4
    class Matrix33 * descaleInvBindMat; // offset 0xC, size 0x4
    unsigned char * geomIndices; // offset 0x10, size 0x4
    int geomCount; // offset 0x14, size 0x4
    unsigned char sectionCount; // offset 0x18, size 0x1
    unsigned char jointCount; // offset 0x19, size 0x1
    unsigned short jointStart; // offset 0x1A, size 0x2
};
// total size: 0x4
class EvaluatorSkinSection {
    // Members
    unsigned short start; // offset 0x0, size 0x2
    unsigned char size; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
};
// total size: 0x4C
class SkeletonBlobEntity : public BlobEntity {
    // Members
    class Skeleton skel; // offset 0x10, size 0x3C
};
// total size: 0x10
class BlobEntity : public Entity {};
// total size: 0x44
class CollisionMeshBlobEntity : public BlobEntity {
    // Members
    class dxTriMeshData triMesh; // offset 0x10, size 0x1C
    class hkpShape * pBodyShape; // offset 0x2C, size 0x4
    int collFilter; // offset 0x30, size 0x4
    unsigned char * memBlock; // offset 0x34, size 0x4
    int numSurfaces; // offset 0x38, size 0x4
    class Goodie * * surfaceTable; // offset 0x3C, size 0x4
    class Owner * owners; // offset 0x40, size 0x4
};
// total size: 0x1C
class dxTriMeshData {
    // Members
    float AABBCenter[3]; // offset 0x0, size 0xC
    float AABBExtents[3]; // offset 0xC, size 0xC
    class TriangleInfo * triInfo; // offset 0x18, size 0x4
};
// total size: 0xC
class Owner {
    // Members
    class Owner * prev; // offset 0x4, size 0x4
    class Owner * next; // offset 0x8, size 0x4
};
// total size: 0x38
class RefColl {
    // Members
    class Matrix43 mat; // offset 0x0, size 0x30
    class CollisionMeshBlobEntity * pCollMeshBlobEnt; // offset 0x30, size 0x4
    int collFilter; // offset 0x34, size 0x4
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
// total size: 0x28
class TextureResourceEntity : public Entity {
    // Members
    class TextureContainer * texMem; // offset 0x10, size 0x4
    class EntityHandle * imageBlob; // offset 0x14, size 0x4
    class BlobOwner imageOwner; // offset 0x18, size 0x10
};
// total size: 0x28
class TextureContainer : public BlobCustomAlloc {
    // Members
    class Texture texture; // offset 0x4, size 0x24
};
// total size: 0x24
class Texture : public Node {
    // Members
    class _GXTexObj * tex; // offset 0xC, size 0x4
    int numTextures; // offset 0x10, size 0x4
    class WiiTextureFileHeader * header; // offset 0x14, size 0x4
    int width; // offset 0x18, size 0x4
    int height; // offset 0x1C, size 0x4
    bool ownTex; // offset 0x20, size 0x1
    signed char tileX; // offset 0x21, size 0x1
    signed char tileY; // offset 0x22, size 0x1
    signed char tileZ; // offset 0x23, size 0x1
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
    char pad[28]; // offset 0x4, size 0x1C
};
// total size: 0x10
class BlobOwner : public Owner {
    // Members
    class EntityHandle * res; // offset 0xC, size 0x4
};
// total size: 0x58
class Model {
    // Members
    class Matrix43 rootTransform; // offset 0x0, size 0x30
    class ModelPrototype * modelProto; // offset 0x30, size 0x4
    class Geometry * * geoms; // offset 0x34, size 0x4
    class Renderable3D * * renderables; // offset 0x38, size 0x4
    class Matrix43 * childTransforms; // offset 0x3C, size 0x4
    unsigned short * childTransformParents; // offset 0x40, size 0x4
    unsigned short * renderableTransformMap; // offset 0x44, size 0x4
    unsigned short renderableCount; // offset 0x48, size 0x2
    unsigned short childTransformCount; // offset 0x4A, size 0x2
    unsigned short refRenderableCount; // offset 0x4C, size 0x2
    bool childTransformDirty; // offset 0x4E, size 0x1
    unsigned char pad; // offset 0x4F, size 0x1
    class ModelXformBuffer * xforms; // offset 0x50, size 0x4
    class ModelJointBuffer * joints; // offset 0x54, size 0x4
};
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
// total size: 0xBC
class LightKitEntity : public Entity {
    // Members
    class LightKit lightKit; // offset 0x10, size 0xAC
};
// total size: 0x8
class RenderCustomizerInfo {
    // Members
    class RenderCustomizerData * instanceData; // offset 0x0, size 0x4
    class RenderCustomizerBaseEntity * renderCustomizerEntity; // offset 0x4, size 0x4
};
// total size: 0x4
class RenderCustomizerData {};
// total size: 0x10
class RenderCustomizerBaseEntity : public Entity {};
// total size: 0x0
class xJSPHeader {};
enum xCollideSphereHitType {
    exCOLLIDESPHEREHITTYPE_UNKNOWN = 0,
    exCOLLIDESPHEREHITTYPE_INTERIOR = 1,
    exCOLLIDESPHEREHITTYPE_EDGE = 2,
    exCOLLIDESPHEREHITTYPE_VERTEX = 3,
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
// total size: 0x14
class hkpConvexShape : public hkpSphereRepShape {
    // Members
    float m_radius; // offset 0x10, size 0x4
};
// total size: 0x10
class hkpSphereRepShape : public hkpShape {};
// total size: 0xC0
class hkpRigidBodyCinfo {
    // Members
    unsigned int m_collisionFilterInfo; // offset 0x0, size 0x4
    class hkpShape * m_shape; // offset 0x4, size 0x4
    class hkEnum m_collisionResponse; // offset 0x8, size 0x1
    unsigned short m_processContactCallbackDelay; // offset 0xA, size 0x2
    class hkVector4 m_position; // offset 0x10, size 0x10
    class hkQuaternion m_rotation; // offset 0x20, size 0x10
    class hkVector4 m_linearVelocity; // offset 0x30, size 0x10
    class hkVector4 m_angularVelocity; // offset 0x40, size 0x10
    class hkMatrix3 m_inertiaTensor; // offset 0x50, size 0x30
    class hkVector4 m_centerOfMass; // offset 0x80, size 0x10
    float m_mass; // offset 0x90, size 0x4
    float m_linearDamping; // offset 0x94, size 0x4
    float m_angularDamping; // offset 0x98, size 0x4
    float m_friction; // offset 0x9C, size 0x4
    float m_restitution; // offset 0xA0, size 0x4
    float m_maxLinearVelocity; // offset 0xA4, size 0x4
    float m_maxAngularVelocity; // offset 0xA8, size 0x4
    float m_allowedPenetrationDepth; // offset 0xAC, size 0x4
    class hkEnum m_motionType; // offset 0xB0, size 0x1
    class hkEnum m_rigidBodyDeactivatorType; // offset 0xB1, size 0x1
    class hkEnum m_solverDeactivation; // offset 0xB2, size 0x1
    class hkEnum m_qualityType; // offset 0xB3, size 0x1
    signed char m_autoRemoveLevel; // offset 0xB4, size 0x1
    signed char m_numUserDatasInContactPointProperties; // offset 0xB5, size 0x1
    class hkBool m_forceCollideOntoPpu; // offset 0xB6, size 0x1
};
// total size: 0x1A0
class hkpAllCdPointCollector : public hkpCdPointCollector {
    // Members
    class hkInplaceArray m_hits; // offset 0x10, size 0x190
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
// total size: 0x20
class CHavokShapeBuilder : public hkReferencedObject, public hkSingleton {
    // Members
    class hkPointerMap m_shapeToGroupMap; // offset 0x8, size 0xC
    class hkArray m_shrunkenShapes; // offset 0x14, size 0xC
};
// total size: 0x1
class hkSingleton {};
// total size: 0xC
class hkPointerMap {
    // Members
    class hkPointerMapBase m_map; // offset 0x0, size 0xC
};
// total size: 0xC
class hkPointerMapBase {
    // Members
    unsigned long * m_elem; // offset 0x0, size 0x4
    int m_numElems; // offset 0x4, size 0x4
    int m_hashMod; // offset 0x8, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    class ShapeCache * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x8
class ShapeCache {
    // Members
    class hkpShape * originalShape; // offset 0x0, size 0x4
    class hkpShape * newShape; // offset 0x4, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    class hkpRigidBody * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
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
// total size: 0xF58
class zPlayer : public zEnt {
    // Members
    class zPlayerActionManager actionManager; // offset 0xBC, size 0x1C
    class zPlayerInventory inventory; // offset 0xD8, size 0x24
    class SurfaceGamePlay * pLastValidSurface; // offset 0xFC, size 0x4
    int playerIndex; // offset 0x100, size 0x4
    int viewportIndex; // offset 0x104, size 0x4
    class xAnimSoundEffect * sndAnimEffect; // offset 0x108, size 0x4
    class xAnimVFX_Effect * vfxAnimEffect; // offset 0x10C, size 0x4
    class xVec3 trigLastFramePos; // offset 0x110, size 0xC
    class zCamFirstPerson camFirstPerson; // offset 0x120, size 0x1B0
    class zCamAiming camAiming; // offset 0x2D0, size 0x2A8
    class xScene * sc; // offset 0x578, size 0x4
    class xMat4x3 lastmat; // offset 0x57C, size 0x40
    class PlayerStats playStats; // offset 0x5BC, size 0x24
    enum eAnimSetType playerAnimSetType; // offset 0x5E0, size 0x4
    class xVec3 floor_pos; // offset 0x5E4, size 0xC
    class xVec3 floor_normal; // offset 0x5F0, size 0xC
    unsigned int floor_surfaceID; // offset 0x5FC, size 0x4
    class xSphere extraSpheres[5]; // offset 0x600, size 0x50
    int numExtraSpheres; // offset 0x650, size 0x4
    int zPlayerFlags; // offset 0x654, size 0x4
    float collision_underneath_height; // offset 0x658, size 0x4
    float collision_underneath_time; // offset 0x65C, size 0x4
    class mblur_data * mblur; // offset 0x660, size 0x4
    class zUIImage * markerGreen; // offset 0x664, size 0x4
    class zUIImage * markerRed; // offset 0x668, size 0x4
    class zUIImage * markerIRWarning; // offset 0x66C, size 0x4
    class zUIImage * markerIRError; // offset 0x670, size 0x4
    class zUIImage * markerHealth; // offset 0x674, size 0x4
    class zUIImage * view; // offset 0x678, size 0x4
    class zTarget * target; // offset 0x67C, size 0x4
    class xAnimSoundEffect * contextEffect; // offset 0x680, size 0x4
    bool drawVelocity; // offset 0x684, size 0x1
    bool drawBonePos; // offset 0x685, size 0x1
    float cubeLinearVel; // offset 0x688, size 0x4
    float cubeAngVel; // offset 0x68C, size 0x4
    int ignoreInputThisFrame; // offset 0x690, size 0x4
    class zPlayerInput * pad; // offset 0x694, size 0x4
    float controlOffTimer; // offset 0x698, size 0x4
    float controlOnTime; // offset 0x69C, size 0x4
    unsigned int controlOff; // offset 0x6A0, size 0x4
    unsigned int controlOnEvent; // offset 0x6A4, size 0x4
    class zPlayerCheckPoint checkPoint; // offset 0x6A8, size 0x10
    bool cheatMode; // offset 0x6B8, size 0x1
    class zPlayerInput * playerInput; // offset 0x6BC, size 0x4
    bool unmounted; // offset 0x6C0, size 0x1
    class hkpShapePhantom * pPhantomObject; // offset 0x6C4, size 0x4
    class hkpCharacterProxy * pCharacterProxy; // offset 0x6C8, size 0x4
    float capRadius; // offset 0x6CC, size 0x4
    float pWeight; // offset 0x6D0, size 0x4
    class xVec3 lastDeltaPos; // offset 0x6D4, size 0xC
    float update_dt; // offset 0x6E0, size 0x4
    float last_update_dt; // offset 0x6E4, size 0x4
    class xVec3 update_motion; // offset 0x6E8, size 0xC
    class xVec3 previous_position; // offset 0x6F4, size 0xC
    class xVec3 predictRotate; // offset 0x700, size 0xC
    class xVec3 predictTranslate; // offset 0x70C, size 0xC
    float predictAngV; // offset 0x718, size 0x4
    class xVec3 predictCurrDir; // offset 0x71C, size 0xC
    float predictCurrVel; // offset 0x728, size 0x4
    class xVec3 positionBuffer[8]; // offset 0x72C, size 0x60
    float bufferFrameRate; // offset 0x78C, size 0x4
    class xEnt * floor_entity; // offset 0x790, size 0x4
    class xEnt * prev_teeter; // offset 0x794, size 0x4
    class xSurface * floor_surface; // offset 0x798, size 0x4
    unsigned int collisionFlags; // offset 0x79C, size 0x4
    class xAnimTable * playerAnimTable; // offset 0x7A0, size 0x4
    enum zMGAwardState awardState; // offset 0x7A4, size 0x4
    enum ePlayerName eName; // offset 0x7A8, size 0x4
    bool currentIsNearLedge; // offset 0x7AC, size 0x1
    bool currentIsNearLedgeValid; // offset 0x7AD, size 0x1
    float fallingTime; // offset 0x7B0, size 0x4
    float idleAnimationTimer; // offset 0x7B4, size 0x4
    unsigned int lorezModelID; // offset 0x7B8, size 0x4
    class xModelInstance * lorezModel; // offset 0x7BC, size 0x4
    class xModelInstance * hirezModel; // offset 0x7C0, size 0x4
    class zNPCAttackerData npcAttacker[3]; // offset 0x7C4, size 0x618
    class zNPCBase * roundRobinMelee; // offset 0xDDC, size 0x4
    float roundRobinTimeOut; // offset 0xDE0, size 0x4
    float enemyKilledComboTimer; // offset 0xDE4, size 0x4
    int enemyKilledCombo; // offset 0xDE8, size 0x4
    float depenetration_velocity; // offset 0xDEC, size 0x4
    class xEntShadow entShadow_embedded; // offset 0xDF0, size 0x28
    unsigned int loaded_assetid; // offset 0xE18, size 0x4
    class xEntDrive drv; // offset 0xE1C, size 0xB8
    unsigned short parametersSize; // offset 0xED4, size 0x2
    class xModelAssetParam * parameters; // offset 0xED8, size 0x4
    float idleSoundTimer; // offset 0xEDC, size 0x4
    unsigned int * hitSoundsMap; // offset 0xEE0, size 0x4
    class xVec3 impartedVel; // offset 0xEE4, size 0xC
    class xVec3 impartedDraglessVel; // offset 0xEF0, size 0xC
    class xVec3 impartedImpulse; // offset 0xEFC, size 0xC
    class xVec3 impartedForce; // offset 0xF08, size 0xC
    class xVec3 characterGenVel; // offset 0xF14, size 0xC
    class xVec3 groundCharacterGenVel; // offset 0xF20, size 0xC
    float characterMomentum; // offset 0xF2C, size 0x4
    float characterMomentumDest; // offset 0xF30, size 0x4
    class xVec3 targetSurfaceVelocity; // offset 0xF34, size 0xC
    class xVec3 currentSurfaceVelocity; // offset 0xF40, size 0xC
    class xVec3 motionAppliedThisFrame; // offset 0xF4C, size 0xC
};
// total size: 0xC0
class zEnt : public xEnt {
    // Members
    class xAnimTable * atbl; // offset 0xB8, size 0x4
};
// total size: 0x1C
class zPlayerActionManager {
    // Members
    class zPlayerAction * * actionList; // offset 0x0, size 0x4
    class zPlayerAction * currentAction; // offset 0x4, size 0x4
    unsigned int listSize; // offset 0x8, size 0x4
    unsigned int prevActionID; // offset 0xC, size 0x4
    unsigned int nextActionID; // offset 0x10, size 0x4
    unsigned int * enableFlags; // offset 0x14, size 0x4
    unsigned int enableFlagsCount; // offset 0x18, size 0x4
};
// total size: 0xC
class zPlayerAction {
    // Members
    class zPlayerActionManager * manager; // offset 0x0, size 0x4
    class zPlayer * player; // offset 0x4, size 0x4
};
// total size: 0x24
class zPlayerInventory {
    // Members
    int colonyItemsCollected[6]; // offset 0x0, size 0x18
    unsigned char recipes[6]; // offset 0x18, size 0x6
    int minigameItems; // offset 0x20, size 0x4
};
// total size: 0x1B0
class zCamFirstPerson : public xCam {
    // Members
    float fovStepMin; // offset 0x138, size 0x4
    float fovStepMax; // offset 0x13C, size 0x4
    float fovStep; // offset 0x140, size 0x4
    float fovStepChange; // offset 0x144, size 0x4
    float fovMin; // offset 0x148, size 0x4
    float fovMax; // offset 0x14C, size 0x4
    float fovShift; // offset 0x150, size 0x4
    float fovCurMin; // offset 0x154, size 0x4
    float fovCurMax; // offset 0x158, size 0x4
    float angleStepMin; // offset 0x15C, size 0x4
    float angleStepMax; // offset 0x160, size 0x4
    float xRot; // offset 0x164, size 0x4
    float yRot; // offset 0x168, size 0x4
    float accumulatedTime; // offset 0x16C, size 0x4
    float maxXAngleRad; // offset 0x170, size 0x4
    float maxYAngleRad; // offset 0x174, size 0x4
    float yOffset; // offset 0x178, size 0x4
    float atOffset; // offset 0x17C, size 0x4
    float timerZoomIn; // offset 0x180, size 0x4
    float timerZoomOut; // offset 0x184, size 0x4
    float multipl; // offset 0x188, size 0x4
    float TIME_TO_ZOOM; // offset 0x18C, size 0x4
    class zTarget * target; // offset 0x190, size 0x4
    class zPlayerInput * pad; // offset 0x194, size 0x4
    class xMat4x3 * baseMat; // offset 0x198, size 0x4
    class xVec3 basePos; // offset 0x19C, size 0xC
    class zPlayer * mPlayerOwner; // offset 0x1A8, size 0x4
};
// total size: 0x138
class xCam {
    // Members
    class xMat4x3 mat; // offset 0x4, size 0x40
    class xMat4x3 coll_mat; // offset 0x44, size 0x40
    float fov; // offset 0x84, size 0x4
    int flags; // offset 0x88, size 0x4
    int viewportIndex; // offset 0x8C, size 0x4
    unsigned long long owner; // offset 0x90, size 0x8
    class xCamGroup * group; // offset 0x98, size 0x4
    class xCam * next; // offset 0x9C, size 0x4
    class xVec2 analog; // offset 0xA0, size 0x8
    enum xCamCoordType coord_type; // offset 0xA8, size 0x4
    enum xCamOrientType orient_type; // offset 0xAC, size 0x4
    class xCamSpatialInfo spatial; // offset 0xB0, size 0x30
    class xCamSpatialInfo coll_spatial; // offset 0xE0, size 0x30
    class xCamConfigCommon cfg_common; // offset 0x110, size 0x8
    bool dofEnabled; // offset 0x118, size 0x1
    float dofBlur; // offset 0x11C, size 0x4
    float dofNearFocusPoint; // offset 0x120, size 0x4
    float dofNearFocusFalloff; // offset 0x124, size 0x4
    float dofFarFocusPoint; // offset 0x128, size 0x4
    float dofFarFocusFalloff; // offset 0x12C, size 0x4
    int group_flags; // offset 0x130, size 0x4
    class xCamBlend * blender; // offset 0x134, size 0x4
};
// total size: 0x154
class xCamGroup {
    // Members
    class iCamera * iCam; // offset 0x0, size 0x4
    bool isExternalICam; // offset 0x4, size 0x1
    int viewportIndex; // offset 0x8, size 0x4
    class Viewport * viewport; // offset 0xC, size 0x4
    class xCamShake shake; // offset 0x10, size 0x88
    float fov; // offset 0x98, size 0x4
    float fov_default; // offset 0x9C, size 0x4
    class xMat4x3 mat; // offset 0xA0, size 0x40
    class xMat4x3 coll_mat; // offset 0xE0, size 0x40
    class xVec3 coll_atXZ; // offset 0x120, size 0xC
    class hkpAabbPhantom * phantomCamera; // offset 0x12C, size 0x4
    class xCam * primary; // offset 0x130, size 0x4
    class xVec2 analog; // offset 0x134, size 0x8
    int child_flags; // offset 0x13C, size 0x4
    int child_flags_mask; // offset 0x140, size 0x4
    class xCamBlend * blend_cam[4]; // offset 0x144, size 0x10
};
// total size: 0x48
class iCamera {
    // Members
    class Viewport * camViewport; // offset 0x0, size 0x4
    float fov; // offset 0x4, size 0x4
    class xMat4x3 frame; // offset 0x8, size 0x40
};
// total size: 0x224
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
    enum ViewportIndex viewportIndex; // offset 0x84, size 0x4
    bool hackTransparentDepthWrite; // offset 0x88, size 0x1
    bool isCullViewport; // offset 0x89, size 0x1
    unsigned char cullViewportIndex; // offset 0x8A, size 0x1
    class Matrix43 cameraMat; // offset 0x8C, size 0x30
    class Matrix43 invCameraMat; // offset 0xBC, size 0x30
    class ViewMatrix viewMat[2]; // offset 0xEC, size 0x80
    class Vector4 fogLerpParam; // offset 0x16C, size 0x10
    class Vector4 fogColor; // offset 0x17C, size 0x10
    class FrustumPlanes frust; // offset 0x18C, size 0x70
    float depthFirstPerspFudgeFactor; // offset 0x1FC, size 0x4
    float depthFirstOrthoFudgeFactor; // offset 0x200, size 0x4
    class _GXLightObj * lights; // offset 0x204, size 0x4
    int kitLightIndex; // offset 0x208, size 0x4
    class MoBlurSettings moBlurSettings; // offset 0x20C, size 0x18
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
};
// total size: 0x40
class ViewMatrix {
    // Members
    class Matrix43 mat; // offset 0x0, size 0x30
    class Vector4 col3; // offset 0x30, size 0x10
};
// total size: 0x40
class _GXLightObj {
    // Members
    unsigned long dummy[16]; // offset 0x0, size 0x40
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
};
// total size: 0x20
class hkAabb {
    // Members
    class hkVector4 m_min; // offset 0x0, size 0x10
    class hkVector4 m_max; // offset 0x10, size 0x10
};
// total size: 0xC
class hkArray {
    // Members
    class hkpCollidable * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x8
class xVec2 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x160
class xCamBlend : public xCam {
    // Members
    class xCam * src; // offset 0x138, size 0x4
    class xCam * dst; // offset 0x13C, size 0x4
    class xCamBias * bias; // offset 0x140, size 0x4
    class xCamTimeBias timeBias; // offset 0x144, size 0x14
    class xCamTransition * transition; // offset 0x158, size 0x4
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
// total size: 0x38
class xCamTransition : public xBase {
    // Members
    class xCamTransitionAsset * mAsset; // offset 0x20, size 0x4
    class zTrigger * mTransitionVolume; // offset 0x24, size 0x4
    int mType; // offset 0x28, size 0x4
    bool mActive; // offset 0x2C, size 0x1
    class xCamBias * mCamBlendBias; // offset 0x30, size 0x4
    class xCamGroup * mCamGroup; // offset 0x34, size 0x4
};
// total size: 0x60
class xCamTransitionAsset : public xDynAsset {
    // Members
    class LinkAsset EventLinksNew; // offset 0x20, size 0x8
    unsigned int mVersion; // offset 0x28, size 0x4
    int mType; // offset 0x2C, size 0x4
    unsigned int mFlags; // offset 0x30, size 0x4
    class @class __anon; // offset 0x38, size 0x8
    class @class __anon; // offset 0x38, size 0x1
    class @class __anon; // offset 0x38, size 0x8
    unsigned long long mDestCameraID; // offset 0x38, size 0x8
    int destType; // offset 0x40, size 0x4
    class @class __anon; // offset 0x48, size 0x18
    class @class __anon; // offset 0x48, size 0xC
    float mTime; // offset 0x48, size 0x4
    float mAccel; // offset 0x4C, size 0x4
    float mDecel; // offset 0x50, size 0x4
    class @class __anon; // offset 0x48, size 0x18
    unsigned long long mSrcCameraID; // offset 0x48, size 0x8
    unsigned long long mCurveID; // offset 0x50, size 0x8
    unsigned long long mTriggerID; // offset 0x58, size 0x8
};
// total size: 0x20
class xDynAsset : public xBaseAsset {
    // Members
    unsigned int type; // offset 0x10, size 0x4
    unsigned short version; // offset 0x14, size 0x2
    unsigned short handle; // offset 0x16, size 0x2
    unsigned int padda[2]; // offset 0x18, size 0x8
};
// total size: 0x8
class @class {
    // Members
    class @class __anon; // offset 0x0, size 0x1
    class @class __anon; // offset 0x0, size 0x8
    unsigned long long mDestCameraID; // offset 0x0, size 0x8
};
// total size: 0x1
class @class {};
// total size: 0x8
class @class {
    // Members
    unsigned long long mDestCameraID; // offset 0x0, size 0x8
};
// total size: 0x18
class @class {
    // Members
    class @class __anon; // offset 0x0, size 0xC
    float mTime; // offset 0x0, size 0x4
    float mAccel; // offset 0x4, size 0x4
    float mDecel; // offset 0x8, size 0x4
    class @class __anon; // offset 0x0, size 0x18
    unsigned long long mSrcCameraID; // offset 0x0, size 0x8
    unsigned long long mCurveID; // offset 0x8, size 0x8
    unsigned long long mTriggerID; // offset 0x10, size 0x8
};
// total size: 0xC
class @class {
    // Members
    float mTime; // offset 0x0, size 0x4
    float mAccel; // offset 0x4, size 0x4
    float mDecel; // offset 0x8, size 0x4
};
// total size: 0x18
class @class {
    // Members
    unsigned long long mSrcCameraID; // offset 0x0, size 0x8
    unsigned long long mCurveID; // offset 0x8, size 0x8
    unsigned long long mTriggerID; // offset 0x10, size 0x8
};
// total size: 0x188
class zTrigger : public zEnt {
    // Members
    unsigned int entered; // offset 0xBC, size 0x4
    class xEntDrive drive; // offset 0xC0, size 0xB8
    class xVec3 trigDir; // offset 0x178, size 0xC
    class zPolygonalVolume * polygonBounds; // offset 0x184, size 0x4
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
// total size: 0x10C
class zTarget {
    // Members
    class xVec3 targetPosLocked; // offset 0x0, size 0xC
    class xVec3 targetDirLocked; // offset 0xC, size 0xC
    float toHitDistLocked; // offset 0x18, size 0x4
    class zPlayerInput * pad; // offset 0x1C, size 0x4
    class zUIImage * marker; // offset 0x20, size 0x4
    class zUIImage * markerGreen; // offset 0x24, size 0x4
    class zUIImage * markerRed; // offset 0x28, size 0x4
    class zUIImage * markerIRWarning; // offset 0x2C, size 0x4
    class zUIImage * markerIRError; // offset 0x30, size 0x4
    class zUIImage * markerHealth; // offset 0x34, size 0x4
    class zUIImage * view; // offset 0x38, size 0x4
    int viewportIndex; // offset 0x3C, size 0x4
    class hkpWorld * havokWorld; // offset 0x40, size 0x4
    float xMin; // offset 0x44, size 0x4
    float xMax; // offset 0x48, size 0x4
    float yMin; // offset 0x4C, size 0x4
    float yMax; // offset 0x50, size 0x4
    float xCenter; // offset 0x54, size 0x4
    float yCenter; // offset 0x58, size 0x4
    float xMinLocked; // offset 0x5C, size 0x4
    float xMaxLocked; // offset 0x60, size 0x4
    float yMinLocked; // offset 0x64, size 0x4
    float yMaxLocked; // offset 0x68, size 0x4
    float cMarkerX; // offset 0x6C, size 0x4
    float cMarkerY; // offset 0x70, size 0x4
    float elapsed; // offset 0x74, size 0x4
    class xMat4x3 targetSourceMatrix; // offset 0x78, size 0x40
    class xMat4x3 cameraMatrix; // offset 0xB8, size 0x40
    class xBase * owner; // offset 0xF8, size 0x4
    void * outputOwner; // offset 0xFC, size 0x4
    class xEnt * pHitEnt; // offset 0x100, size 0x4
    bool overThresholdX : 1; // offset 0x104, size 0x1, bit offset 0
    bool overThresholdY : 1; // offset 0x104, size 0x1, bit offset 1
    bool markersEnabled : 1; // offset 0x104, size 0x1, bit offset 2
    bool autoReturning : 1; // offset 0x104, size 0x1, bit offset 3
    bool aimAtCameraCenter : 1; // offset 0x104, size 0x1, bit offset 4
    bool aimWithPlayerFacing : 1; // offset 0x104, size 0x1, bit offset 5
    bool enableAutoReturn : 1; // offset 0x104, size 0x1, bit offset 6
    bool hitDetected : 1; // offset 0x104, size 0x1, bit offset 7
    enum IRStatus targetStatus; // offset 0x108, size 0x4
};
// total size: 0x38
class zPlayerInput {
    // Members
    class Time tapHoldBaseTime; // offset 0x0, size 0x8
    unsigned int tapHoldTimerStart; // offset 0x8, size 0x4
    class Time timerBadIR; // offset 0x10, size 0x8
    class xVec2 prevIR; // offset 0x18, size 0x8
    float prevIntensity; // offset 0x20, size 0x4
    enum PadType curPadType; // offset 0x24, size 0x4
    class Pad * curPad; // offset 0x28, size 0x4
    unsigned int curPort; // offset 0x2C, size 0x4
    bool isDisabled; // offset 0x30, size 0x1
    bool isStickDisabled; // offset 0x31, size 0x1
    bool disabledTypes[4]; // offset 0x32, size 0x4
    bool wiiRemoteConnected; // offset 0x36, size 0x1
    bool nunchukConnected; // offset 0x37, size 0x1
};
// total size: 0x8
class Time {
    // Members
    long long ticks; // offset 0x0, size 0x8
};
enum PadType {
    PADTYPE_DEBUG = 0,
    PADTYPE_MENU = 1,
    PADTYPE_GAME = 2,
    PADTYPE_MISC = 3,
    PADTYPE_LAST = 4,
};
// total size: 0x151C
class Pad {
    // Members
    bool isActive; // offset 0x0, size 0x1
    unsigned int mDeviceID; // offset 0x4, size 0x4
    class PadInput istate; // offset 0x8, size 0x1510
    class PadDevice * device; // offset 0x1518, size 0x4
};
// total size: 0x1510
class PadInput {
    // Members
    enum PadLayout padLayout; // offset 0x0, size 0x4
    enum PadSubLayout padSubLayout; // offset 0x4, size 0x4
    int flags; // offset 0x8, size 0x4
    int changed; // offset 0xC, size 0x4
    class PadStick stick[2]; // offset 0x10, size 0x38
    float pressure[18]; // offset 0x48, size 0x48
    class PadTilt tilt[2]; // offset 0x90, size 0x48
    class PadIRData irPointer; // offset 0xD8, size 0x14
    class CircularQueue wiimoteDataQueue[2]; // offset 0xEC, size 0x20
    class AccelData wiimoteDataQueueMain[128]; // offset 0x10C, size 0xA00
    class AccelData wiimoteDataQueueExt[128]; // offset 0xB0C, size 0xA00
    bool created; // offset 0x150C, size 0x1
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
    PSL_WII_UNKNOWN = 3,
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
// total size: 0x24
class PadTilt {
    // Members
    class Vector acc; // offset 0x0, size 0x10
    float speed; // offset 0x10, size 0x4
    class Vector3 swing; // offset 0x14, size 0xC
    int swingStability; // offset 0x20, size 0x4
};
// total size: 0x14
class PadIRData {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float angleToGround; // offset 0x8, size 0x4
    float distanceFromBar; // offset 0xC, size 0x4
    enum IRStatus status; // offset 0x10, size 0x4
};
enum IRStatus {
    INVALID = 0,
    VALID_1 = 1,
    VALID_2 = 2,
};
// total size: 0x10
class CircularQueue {
    // Members
    unsigned int start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    unsigned int mask; // offset 0x8, size 0x4
    class AccelData * pool; // offset 0xC, size 0x4
};
// total size: 0x14
class AccelData {
    // Members
    class Vector acc; // offset 0x0, size 0x10
    float accSpeed; // offset 0x10, size 0x4
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
// total size: 0x130
class zUIImage : public zUI {
    // Members
    class ImageState currentImage; // offset 0xD8, size 0x8
    class ImageState startMovementImage; // offset 0xE0, size 0x8
    class xTextureHandle texture; // offset 0xE8, size 0x10
    unsigned long long currentID; // offset 0xF8, size 0x8
    void (* customUVCallback)(void *, class UIVertex *, class UIVertex *, class UIVertex *, class UIVertex *); // offset 0x100, size 0x4
    void * customUVCallbackData; // offset 0x104, size 0x4
    void * cachedImmediateProtoHandle; // offset 0x108, size 0x4
    class ImmediateInstanceArticle * cachedImmediateArticle; // offset 0x10C, size 0x4
    bool overrideTexture; // offset 0x110, size 0x1
    unsigned short textureParamHandle; // offset 0x112, size 0x2
    class Sampler overrideSamplerData; // offset 0x114, size 0xC
    class Material * material; // offset 0x120, size 0x4
    class RenderMode * brightRenderMode; // offset 0x124, size 0x4
};
// total size: 0xE0
class zUI : public xBase {
    // Members
    enum VisibilityMask UIViewportMask; // offset 0x20, size 0x4
    class zUI * asset; // offset 0x24, size 0x4
    class State current; // offset 0x30, size 0x40
    class State startMovement; // offset 0x70, size 0x40
    class UI_Motion * selectedMotion; // offset 0xB0, size 0x4
    class UI_Motion * unselectedMotion; // offset 0xB4, size 0x4
    int port; // offset 0xB8, size 0x4
    class zUI * parent; // offset 0xBC, size 0x4
    bool visible; // offset 0xC0, size 0x1
    bool focus; // offset 0xC1, size 0x1
    bool lastFocus; // offset 0xC2, size 0x1
    bool selected; // offset 0xC3, size 0x1
    bool brighten; // offset 0xC4, size 0x1
    bool hdrPass; // offset 0xC5, size 0x1
    bool locked; // offset 0xC6, size 0x1
    bool forcehdr; // offset 0xC7, size 0x1
    bool restoreFocus; // offset 0xC8, size 0x1
    class UI_Motion * motion; // offset 0xCC, size 0x4
    float motionTime; // offset 0xD0, size 0x4
    bool motionFiredEvent; // offset 0xD4, size 0x1
    bool motionLoop; // offset 0xD5, size 0x1
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
};
// total size: 0xC0
class zUI : public zUIMessageTarget {
    // Members
    class Matrix43POD Transform; // offset 0x20, size 0x30
    enum eAnchorType anchor; // offset 0x50, size 0x4
    class uid anchorWidget; // offset 0x58, size 0x8
    unsigned int flags; // offset 0x60, size 0x4
    enum eFocusType focusType; // offset 0x64, size 0x4
    unsigned int color; // offset 0x68, size 0x4
    class uid selectedMotion; // offset 0x70, size 0x8
    class uid unselectedMotion; // offset 0x78, size 0x8
    unsigned char brightness; // offset 0x80, size 0x1
    unsigned char pad1; // offset 0x81, size 0x1
    unsigned char pad2; // offset 0x82, size 0x1
    unsigned char pad3; // offset 0x83, size 0x1
    class uid autoMenuUp; // offset 0x88, size 0x8
    class uid autoMenuDown; // offset 0x90, size 0x8
    class uid autoMenuLeft; // offset 0x98, size 0x8
    class uid autoMenuRight; // offset 0xA0, size 0x8
    enum CustomFuncType customFunction; // offset 0xA8, size 0x4
    class uid customFunctionWidget; // offset 0xB0, size 0x8
};
// total size: 0x20
class zUIMessageTarget : public xDynAsset {};
// total size: 0x20
class xDynAsset : public xBaseAsset {
    // Members
    unsigned int type; // offset 0x10, size 0x4
    unsigned short version; // offset 0x14, size 0x2
    unsigned short handle; // offset 0x16, size 0x2
    unsigned int padda1; // offset 0x18, size 0x4
    unsigned int padda2; // offset 0x1C, size 0x4
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
    FocusPrimaryPlayer = 22,
    FocusAll = 255,
    END_FocusENUM = 256,
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
// total size: 0x40
class State {
    // Members
    class Vector position; // offset 0x0, size 0x10
    class Vector scale; // offset 0x10, size 0x10
    class Vector rotation; // offset 0x20, size 0x10
    class xColor_tag color; // offset 0x30, size 0x4
    unsigned char brightness; // offset 0x34, size 0x1
    unsigned char pad[3]; // offset 0x35, size 0x3
};
// total size: 0x4
class xColor_tag {
    // Members
    unsigned int rgbaU32; // offset 0x0, size 0x4
};
// total size: 0x48
class UI_Motion : public xDynAsset {
    // Members
    class LinkAsset EventLinksNew; // offset 0x20, size 0x8
    unsigned char cmdCount; // offset 0x28, size 0x1
    unsigned char in; // offset 0x29, size 0x1
    unsigned short parameterType; // offset 0x2A, size 0x2
    class uid parameterWidget; // offset 0x30, size 0x8
    unsigned int cmdSize; // offset 0x38, size 0x4
    float totalTime; // offset 0x3C, size 0x4
    float loopTime; // offset 0x40, size 0x4
    bool lockInput; // offset 0x44, size 0x1
};
// total size: 0x8
class ImageState {
    // Members
    float offsetU; // offset 0x0, size 0x4
    float offsetV; // offset 0x4, size 0x4
};
// total size: 0x10
class xTextureHandle {
    // Members
    class RwTexture * m_pTexture; // offset 0x0, size 0x4
    class xInternalMovieNode * m_pMovie; // offset 0x4, size 0x4
    class xInternalTextureNode * m_pNode; // offset 0x8, size 0x4
    class xInternalTextureNode * m_pPrevNode; // offset 0xC, size 0x4
};
// total size: 0x0
class RwTexture {};
// total size: 0x40
class xInternalMovieNode {
    // Members
    unsigned int hash_id; // offset 0x0, size 0x4
    class PKRAssetTOCInfo info; // offset 0x8, size 0x20
    class MOVIE * pMovie; // offset 0x28, size 0x4
    class RwTexture * pTexture; // offset 0x2C, size 0x4
    unsigned char used; // offset 0x30, size 0x1
    unsigned char m_looping; // offset 0x31, size 0x1
    unsigned short m_freezeframed; // offset 0x32, size 0x2
    unsigned int m_startframe; // offset 0x34, size 0x4
    unsigned int m_endframe; // offset 0x38, size 0x4
};
// total size: 0x20
class PKRAssetTOCInfo {
    // Members
    unsigned long long aid; // offset 0x0, size 0x8
    unsigned int typetag; // offset 0x8, size 0x4
    unsigned int sector; // offset 0xC, size 0x4
    unsigned int plus_offset; // offset 0x10, size 0x4
    unsigned int size; // offset 0x14, size 0x4
    void * mempos; // offset 0x18, size 0x4
};
// total size: 0x0
class MOVIE {};
// total size: 0x30
class xInternalTextureNode {
    // Members
    class PKRAssetTOCInfo info; // offset 0x0, size 0x20
    class @class __anon; // offset 0x20, size 0x4
    void * pAssetMemory; // offset 0x20, size 0x4
    class RwTexture * pTexture; // offset 0x20, size 0x4
    unsigned short LRU; // offset 0x24, size 0x2
    unsigned char refCount; // offset 0x26, size 0x1
    signed char state; // offset 0x27, size 0x1
    bool used; // offset 0x28, size 0x1
};
// total size: 0x4
class @class {
    // Members
    void * pAssetMemory; // offset 0x0, size 0x4
    class RwTexture * pTexture; // offset 0x0, size 0x4
};
// total size: 0xC
class UIVertex {
    // Members
    float uCoordinate; // offset 0x0, size 0x4
    float vCoordinate; // offset 0x4, size 0x4
    unsigned int color; // offset 0x8, size 0x4
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
enum IRStatus {
    IR_VALID = 0,
    IR_WARNING = 1,
    IR_ERROR = 2,
};
// total size: 0x2A8
class zCamAiming : public zCamDriver {
    // Members
    float phiComposite; // offset 0x2A4, size 0x4
};
// total size: 0x2A8
class zCamDriver : public xCam {
    // Members
    class zCamBlendValues * blendValues; // offset 0x138, size 0x4
    class zCamTarget * targets[4]; // offset 0x13C, size 0x10
    int targetCount; // offset 0x14C, size 0x4
    class zCamBasis resetBasis; // offset 0x150, size 0x30
    unsigned int resetComponents; // offset 0x180, size 0x4
    class zCamBasis basis; // offset 0x184, size 0x30
    class xVec3 targetLoc; // offset 0x1B4, size 0xC
    class xVec3 targetLocUnrooted; // offset 0x1C0, size 0xC
    class xVec3 targetMotion; // offset 0x1CC, size 0xC
    class zCamRestConfig restConfig; // offset 0x1D8, size 0x34
    class zCamBasis goalBasis; // offset 0x20C, size 0x30
    class zCamBasis blendedGoalBasis; // offset 0x23C, size 0x30
    float occludeTimer; // offset 0x26C, size 0x4
    bool wasOccluded; // offset 0x270, size 0x1
    class zCamVelocity inputVel; // offset 0x274, size 0x10
    class zCamVelocity userVel; // offset 0x284, size 0x10
    class xVec3 lookLoc; // offset 0x294, size 0xC
    float lookLocVel; // offset 0x2A0, size 0x4
};
// total size: 0x6C
class zCamBlendValues {
    // Members
    class @class target; // offset 0x0, size 0x8
    class @class goal; // offset 0x8, size 0x18
    class @class input; // offset 0x20, size 0x24
    class @class occlude; // offset 0x44, size 0xC
    class @class rest; // offset 0x50, size 0x4
    class @class look; // offset 0x54, size 0x18
};
// total size: 0x8
class @class {
    // Members
    float pos_scale; // offset 0x0, size 0x4
    float teleport_dist; // offset 0x4, size 0x4
};
// total size: 0x18
class @class {
    // Members
    float pos_vmax; // offset 0x0, size 0x4
    float pos_scale; // offset 0x4, size 0x4
    float blend_vmax; // offset 0x8, size 0x4
    float blend_scale; // offset 0xC, size 0x4
    float pos_cheat_vmax; // offset 0x10, size 0x4
    bool constrain_visible; // offset 0x14, size 0x1
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
// total size: 0x18
class xCamCoordPolar {
    // Members
    class xVec3 origin; // offset 0x0, size 0xC
    float theta; // offset 0xC, size 0x4
    float phi; // offset 0x10, size 0x4
    float dist; // offset 0x14, size 0x4
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
enum eAnimSetType {
    TYPE_UNKNOWN = 0,
    PLAYER_TYPE_EVE_CORE = 1,
    PLAYER_TYPE_WALLE_CORE = 2,
    PLAYER_TYPE_MP_REMY = 3,
    PLAYER_TYPE_MP_EMILE = 4,
    PLAYER_TYPE_MP_CELINE = 5,
    PLAYER_TYPE_MP_GIT = 6,
    PLAYER_TYPE_MP_CORE = 7,
    PLAYER_TYPE_CARL_CORE = 8,
    PLAYER_TYPE_RUSSELL_CORE = 9,
    PLAYER_TYPE_DUG_CORE = 10,
    PLAYER_TYPE_KEVIN_CORE = 11,
    PLAYER_TYPE_HOUSE_CORE = 12,
    NPC_TYPE_ANIMVIEWER = 13,
    NPC_TYPE_CHARGER = 14,
    NPC_TYPE_TRAP_PROJECTILE = 15,
    NPC_TYPE_DETECTOR_HUMAN = 16,
    NPC_TYPE_EVE = 17,
    NPC_TYPE_AXIOM_HUMAN = 18,
    NPC_TYPE_SWARMER = 19,
    NPC_TYPE_PUPPET = 20,
    NPC_TYPE_STEWARD = 21,
    NPC_TYPE_MOWBOT = 22,
    OBJ_TYPE_SPRINGBOARD = 23,
    OBJ_TYPE_CARRYABLE = 24,
    OBJ_TYPE_CARRYABLE_FULLANIM = 25,
    OBJ_TYPE_LAUNCH = 26,
    OBJ_TYPE_BREAKAWAY = 27,
    END_eAnimSetTypeENUM = 28,
};
// total size: 0x28
class mblur_data {
    // Members
    class config_data cfg; // offset 0x0, size 0x24
    class xModelBlur blur; // offset 0x24, size 0x4
};
// total size: 0x24
class config_data {
    // Members
    int flags; // offset 0x0, size 0x4
    float radius; // offset 0x4, size 0x4
    float color_red; // offset 0x8, size 0x4
    float color_green; // offset 0xC, size 0x4
    float color_blue; // offset 0x10, size 0x4
    float color_alpha; // offset 0x14, size 0x4
    float card_dist; // offset 0x18, size 0x4
    float zbias; // offset 0x1C, size 0x4
    int max_card_renders; // offset 0x20, size 0x4
};
// total size: 0x4
class xModelBlur {
    // Members
    class activity_data * activity; // offset 0x0, size 0x4
};
// total size: 0x4D0
class activity_data {
    // Members
    int index; // offset 0x0, size 0x4
    class xModelBlur * owner; // offset 0x4, size 0x4
    class config_data * cfg; // offset 0x8, size 0x4
    class xModelInstance * model; // offset 0xC, size 0x4
    class xVec3 center; // offset 0x10, size 0xC
    class path_node path[32]; // offset 0x1C, size 0x280
    class card_data cards[32]; // offset 0x29C, size 0x200
    int path_start; // offset 0x49C, size 0x4
    int path_size; // offset 0x4A0, size 0x4
    int cards_size; // offset 0x4A4, size 0x4
    class interpolator lifetime; // offset 0x4A8, size 0x14
    class interpolator alpha; // offset 0x4BC, size 0x14
};
// total size: 0x14
class path_node {
    // Members
    bool just_added; // offset 0x0, size 0x1
    float age; // offset 0x4, size 0x4
    class xVec3 center; // offset 0x8, size 0xC
};
// total size: 0x10
class card_data {
    // Members
    float alpha; // offset 0x0, size 0x4
    class xVec3 center; // offset 0x4, size 0xC
};
// total size: 0x14
class interpolator {
    // Members
    float value; // offset 0x0, size 0x4
    float start; // offset 0x4, size 0x4
    float end; // offset 0x8, size 0x4
    float t; // offset 0xC, size 0x4
    float trate; // offset 0x10, size 0x4
};
// total size: 0x10
class zPlayerCheckPoint {
    // Members
    class xVec3 position; // offset 0x0, size 0xC
    float rotation; // offset 0xC, size 0x4
};
// total size: 0x150
class hkpShapePhantom : public hkpPhantom {
    // Members
    class hkMotionState m_motionState; // offset 0xA0, size 0xB0
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
// total size: 0xC
class hkArray {
    // Members
    class hkpCharacterProxyListener * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x4
class hkpCharacterProxyListener {};
enum zMGAwardState {
    MGAward_None = 0,
    MGAward_Win = 1,
    MGAward_Lose = 2,
};
enum ePlayerName {
    PLAYER_WALLE = 0,
    PLAYER_EVE = 1,
};
// total size: 0x208
class zNPCAttackerData {
    // Members
    class zNPCBase * npcAttacker[128]; // offset 0x0, size 0x200
    int npcAttackerTotal; // offset 0x200, size 0x4
    int npcAttackerTotalLastFrame; // offset 0x204, size 0x4
};
// total size: 0x80
class zNPCBase : public xBase {
    // Members
    class zNPCStatus npcStatus; // offset 0x20, size 0x1C
    class zNPCType * type; // offset 0x3C, size 0x4
    class NPCAsset * npcAsset; // offset 0x40, size 0x4
    class xModelAssetInfo * modelAsset; // offset 0x44, size 0x4
    class zCharacterAsset * characterAsset; // offset 0x48, size 0x4
    class zNPCGroupBase * parentGroup; // offset 0x4C, size 0x4
    bool alive : 1; // offset 0x50, size 0x1, bit offset 0
    bool present : 1; // offset 0x50, size 0x1, bit offset 1
    bool activated : 1; // offset 0x50, size 0x1, bit offset 2
    bool spawned : 1; // offset 0x50, size 0x1, bit offset 3
    bool paused : 1; // offset 0x50, size 0x1, bit offset 4
    bool updateInCinematicAlways : 1; // offset 0x50, size 0x1, bit offset 5
    bool updateInCinematicNever : 1; // offset 0x50, size 0x1, bit offset 6
    bool infoNodesUpdating : 1; // offset 0x50, size 0x1, bit offset 7
    bool quietKill : 1; // offset 0x51, size 0x1, bit offset 0
    bool updating : 1; // offset 0x51, size 0x1, bit offset 1
    unsigned int pad : 22; // offset 0x50, size 0x4, bit offset 10
    class zNPCLogic * npcLogic; // offset 0x54, size 0x4
    class zNPCEntity * npcEntity; // offset 0x58, size 0x4
    class zNPCSteeringOld * npcSteeringOld; // offset 0x5C, size 0x4
    class zNPCSteering * npcSteering; // offset 0x60, size 0x4
    class zNPCPerception * npcPerception; // offset 0x64, size 0x4
    class zNPCCombat * npcCombat; // offset 0x68, size 0x4
    class zNPCFX * npcFX; // offset 0x6C, size 0x4
    class zNPCExtraModel * npcExtraModels[2]; // offset 0x70, size 0x8
    class zNPCInfoNode * npcInfoNodesFront; // offset 0x78, size 0x4
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
    class zNPCBase * (* allocateNPCFunction)(); // offset 0xC, size 0x4
    unsigned int npcTID_ID; // offset 0x10, size 0x4
    unsigned int npcTID_Mask; // offset 0x14, size 0x4
    class zCreatorI * logicCreator; // offset 0x18, size 0x4
    class zCreatorI * entityCreator; // offset 0x1C, size 0x4
    class zCreatorI * steeringCreator; // offset 0x20, size 0x4
    class zCreatorI * perceptionCreator; // offset 0x24, size 0x4
    class zCreatorI * combatCreator; // offset 0x28, size 0x4
    class zCreatorI * fxCreator; // offset 0x2C, size 0x4
    class zCreatorI * extraModelCreator[2]; // offset 0x30, size 0x8
};
enum eNPCType {
    eNPCType_Unknown = 4294967295,
    eNPCType_AnimViewer = 0,
    eNPCType_SwarmMean = 1,
    eNPCType_Eve = 2,
    eNPCType_AxiomHuman = 3,
    eNPCType_Charger = 4,
    eNPCType_Puppet = 5,
    eNPCType_Steward = 6,
    eNPCType_TrapProjectile = 7,
    eNPCType_Mowbot = 8,
    eNPCType_DetectorHuman = 9,
    eNPCType_Thief = 10,
    eNPCType_Gusteau = 11,
    eNPCType_Melee = 12,
    eNPCType_InstaKill = 13,
    eNPCType_Ranger = 14,
    eNPCType_TrapMimic = 15,
    eNPCType_TrapMouse = 16,
    eNPCType_TrapRadial = 17,
    eNPCType_TrapSpin = 18,
    eNPCType_Chaser = 19,
    eNPCType_ChaserProp = 20,
    eNPCType_DetectorHumanProp = 21,
    eNPCType_AmbientHuman = 22,
    eNPCType_Emile = 23,
    eNPCType_StationThuggo = 24,
    eNPCType_StationCeline = 25,
    eNPCType_StationRemy = 26,
    eNPCType_StationTwitch = 27,
    eNPCType_StationGitHammer = 28,
    eNPCType_StationGitPull = 29,
    eNPCType_LinguiniCooking = 30,
    eNPCTypeCount = 31,
    eNPCTypeForceInt = 2147483647,
};
// total size: 0x180
class NPCAsset : public xDynAsset {
    // Members
    class xEntAsset EntAsset; // offset 0x20, size 0x100
    class uid LightKitID; // offset 0x120, size 0x8
    class uid ChrAssetID; // offset 0x128, size 0x8
    unsigned int shadowColor; // offset 0x130, size 0x4
    float shadowMaxDepth; // offset 0x134, size 0x4
    float shadowStartDepth; // offset 0x138, size 0x4
    unsigned int shadowMinBlur; // offset 0x13C, size 0x4
    unsigned int shadowMaxBlur; // offset 0x140, size 0x4
    class uid WallNet; // offset 0x148, size 0x8
    class uid NPC_Perception; // offset 0x150, size 0x8
    unsigned int EnemyFlags; // offset 0x158, size 0x4
    unsigned int SpawnType; // offset 0x15C, size 0x4
    class LinkAsset EventLinksNew; // offset 0x160, size 0x8
    class @class __anon; // offset 0x168, size 0x8
    class SpawnNoData SpawnPop; // offset 0x168, size 0x8
    class SpawnNoData SpawnNormal; // offset 0x168, size 0x8
    class SpawnWithMP SpawnJump; // offset 0x168, size 0x8
    class SpawnWithRange SpawnSwarmPop; // offset 0x168, size 0x4
    class SpawnNoData SpawnSwarmCopy; // offset 0x168, size 0x8
    class SpawnWithMP SpawnSwarmEmit; // offset 0x168, size 0x8
    unsigned int LODType; // offset 0x170, size 0x4
    class @class __anon; // offset 0x174, size 0xC
    class LODTypeAlwaysUpdate LODAlwaysUpdate; // offset 0x174, size 0x1
    class LODTypeCylinder LODCylinder; // offset 0x174, size 0xC
};
// total size: 0x100
class xEntAsset {
    // Members
    class baseAsset baseAsset; // offset 0x0, size 0x10
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
};
// total size: 0x10
class baseAsset {
    // Members
    class uid id; // offset 0x0, size 0x8
    unsigned int baseType; // offset 0x8, size 0x4
    unsigned short linkCount; // offset 0xC, size 0x2
    unsigned short flags; // offset 0xE, size 0x2
};
// total size: 0xC
class Rotation3 {
    // Members
    float yaw; // offset 0x0, size 0x4
    float pitch; // offset 0x4, size 0x4
    float roll; // offset 0x8, size 0x4
};
// total size: 0x8
class ClearToOpaque {
    // Members
    float Value; // offset 0x0, size 0x4
    float Speed; // offset 0x4, size 0x4
};
// total size: 0x48
class PhysicsDataStruct {
    // Members
    float Mass; // offset 0x0, size 0x4
    float Friction; // offset 0x4, size 0x4
    float Elasticity; // offset 0x8, size 0x4
    unsigned char Magnetic_Charge; // offset 0xC, size 0x1
    unsigned char pad1; // offset 0xD, size 0x1
    unsigned char pad2; // offset 0xE, size 0x1
    unsigned char pad3; // offset 0xF, size 0x1
    class SoundSourcesPhysics SoundsPhysics; // offset 0x10, size 0x38
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
// total size: 0xD0
class zCharacterAsset : public CharacterAssets {};
// total size: 0xD0
class CharacterAssets {
    // Members
    class ModelInstanceAsset ModelInstance; // offset 0x0, size 0x40
    class __IncludedCharacterAssets__ IncludedCharacterAssets; // offset 0x40, size 0x8
    class __ExtraModels__ ExtraModels; // offset 0x48, size 0x8
    class uid AnimationSet; // offset 0x50, size 0x8
    class __ExtraAnimations__ ExtraAnimations; // offset 0x58, size 0x8
    class __Shrapnel__ Shrapnel; // offset 0x60, size 0x8
    class uid lightEffect; // offset 0x68, size 0x8
    class __UIDReferences__ UIDReferences; // offset 0x70, size 0x8
    class __UIDModelReferences__ UIDModelReferences; // offset 0x78, size 0x8
    class uid DefaultPerception; // offset 0x80, size 0x8
    class __Parameters__ Parameters; // offset 0x88, size 0x8
    class __NPCFXs__ NPCFXs; // offset 0x90, size 0x8
    class SoundSourcesPhysics SoundsPhysics; // offset 0x98, size 0x38
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
class __Shrapnel__ {
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
class __Parameters__ {
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
class zNPCLogic : public zNPCComponent {};
// total size: 0x8
class zNPCComponent {
    // Members
    class zNPCBase * owner; // offset 0x0, size 0x4
};
// total size: 0x230
class zNPCEntity : public xEnt, public zNPCComponent {
    // Members
    class xMat3x3 modelOnlyMat; // offset 0xC0, size 0x30
    class zNPCBound npcBound; // offset 0xF0, size 0x2C
    class xVec3 modelScale; // offset 0x11C, size 0xC
    float shadowRadius; // offset 0x128, size 0x4
    float scalePhysDisp; // offset 0x12C, size 0x4
    class zNPCType * type; // offset 0x130, size 0x4
    class zNPCEntityParams * parameters; // offset 0x134, size 0x4
    class ModelInstanceAsset * modelInstanceAsset; // offset 0x138, size 0x4
    class zNPCCollisionListener * collisionListeners[4]; // offset 0x13C, size 0x10
    class ModelHelperInfo * modelHelperInfo; // offset 0x14C, size 0x4
    class xEntDrive * npcDrive; // offset 0x150, size 0x4
    class hkpShapePhantom * pPhantomObject; // offset 0x154, size 0x4
    class hkpCharacterProxy * pCharacterProxy; // offset 0x158, size 0x4
    class xAnimVFX_Effect * currVFX; // offset 0x15C, size 0x4
    class ShadowSimpleCache simpleShadowCache; // offset 0x160, size 0xCC
    bool enabled; // offset 0x22C, size 0x1
    bool visible; // offset 0x22D, size 0x1
    bool modelOnlyMatSet; // offset 0x22E, size 0x1
};
// total size: 0x2C
class zNPCBound {
    // Members
    class xVec3 center; // offset 0x0, size 0xC
    class xVec3 extent; // offset 0xC, size 0xC
    class xModelInstance * modelInst; // offset 0x18, size 0x4
    class xVec3 finalBoundScale; // offset 0x1C, size 0xC
    bool isInit; // offset 0x28, size 0x1
};
// total size: 0x44
class zNPCEntityParams {
    // Members
    float modelScaleMultiplier; // offset 0x0, size 0x4
    enum eNPCEntityCollType collisionType; // offset 0x4, size 0x4
    enum eNPCEntityCollShape collisionShape; // offset 0x8, size 0x4
    class xVec3 boundOffset; // offset 0xC, size 0xC
    class xVec3 boundScaleV; // offset 0x18, size 0xC
    float cpStaticFriction; // offset 0x24, size 0x4
    float cpDynamicFriction; // offset 0x28, size 0x4
    float cpMaxSlope; // offset 0x2C, size 0x4
    float cpMass; // offset 0x30, size 0x4
    void (* beforeAnimMatricesFn)(class zNPCBase * npc, class xAnimPlay * play, class xQuat * quat, class xVec3 * scale, class xVec3 * tran, int boneCount); // offset 0x34, size 0x4
    class ModelInstanceAsset * model; // offset 0x38, size 0x4
    class xAnimTable * animTable; // offset 0x3C, size 0x4
    unsigned char collisionChkBy; // offset 0x40, size 0x1
    unsigned char collisionPenBy; // offset 0x41, size 0x1
    bool castShadow : 1; // offset 0x42, size 0x1, bit offset 0
    bool complexShadow : 1; // offset 0x42, size 0x1, bit offset 1
    bool pushOffPlayer : 1; // offset 0x42, size 0x1, bit offset 2
    bool mountable : 1; // offset 0x42, size 0x1, bit offset 3
    unsigned int pad : 12; // offset 0x40, size 0x4, bit offset 20
};
enum eNPCEntityCollType {
    eNPCEntityCollType_None = 0,
    eNPCEntityCollType_CharacterProxy = 1,
    eNPCEntityCollType_Fixed = 2,
    eNPCEntityCollTypeForceInt = 2147483647,
};
enum eNPCEntityCollShape {
    eNPCEntityCollShape_CapsuleFromModel = 0,
    eNPCEntityCollShape_CapsuleCustom = 1,
    eNPCEntityCollShape_SphereFromModel = 2,
    eNPCEntityCollShape_SphereCustom = 3,
    eNPCEntityCollShape_CollisionMesh = 4,
    eNPCEntityCollShapeForceInt = 2147483647,
};
// total size: 0x8
class zNPCCollisionListener : public hkpCharacterProxyListener {
    // Members
    class zNPCBase * npc; // offset 0x4, size 0x4
};
// total size: 0x2C
class ModelHelperInfo : public HelperInfo {
    // Members
    class ModelInstanceArticle * modelArticle; // offset 0x28, size 0x4
};
// total size: 0x28
class HelperInfo {
    // Members
    class EntityHandle * protoHandle; // offset 0x0, size 0x4
    class EntityHandle * lightKitHandle; // offset 0x4, size 0x4
    class ModelInstanceAsset * modelInstanceAsset; // offset 0x8, size 0x4
    enum eShadow castShadow; // offset 0xC, size 0x4
    unsigned int projectShadowCache; // offset 0x10, size 0x4
    class Vector4 colorMultiplier; // offset 0x14, size 0x10
};
// total size: 0x14
class EntityHandle : public EntityHandleBase {};
enum eShadow {
    eDontCastShadow = 0,
    eCastShadow = 1,
    eCastSimpleShadow = 2,
    eCastSimpleShadowIfNeeded = 3,
};
// total size: 0x198
class zNPCPerception : public zNPCComponent {
    // Members
    class zWallNet * npcWallNet; // offset 0x8, size 0x4
    class NPCPerceptionAsset * perceptionAsset; // offset 0xC, size 0x4
    class zNPCPerceptionTarget targets[4]; // offset 0x10, size 0x180
    unsigned int targetBitMask; // offset 0x190, size 0x4
    enum eStatus status; // offset 0x194, size 0x4
};
// total size: 0x8
class NPCPerceptionAsset {
    // Members
    class __PerceptionTypes__ PerceptionTypes; // offset 0x0, size 0x8
};
// total size: 0x8
class __PerceptionTypes__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x60
class zNPCPerceptionTarget {
    // Members
    class xEnt * targetEnt; // offset 0x0, size 0x4
    class zNPCPerception * ownerNpcPerc; // offset 0x4, size 0x4
    class zPerceptionType types[5]; // offset 0x8, size 0x50
    class zLOSCache losCache; // offset 0x58, size 0x8
};
// total size: 0x10
class zPerceptionType {
    // Members
    class PerceptionType * typeAsset; // offset 0x0, size 0x4
    class zNPCPerceptionTarget * ownerTarget; // offset 0x4, size 0x4
    float perceivedTimer; // offset 0x8, size 0x4
    bool isDirty; // offset 0xC, size 0x1
    bool isPerceived; // offset 0xD, size 0x1
};
// total size: 0x10
class PerceptionType {
    // Members
    unsigned char Type; // offset 0x0, size 0x1
    float MemoryTime; // offset 0x4, size 0x4
    class __PerceptionNodes__ PerceptionNodes; // offset 0x8, size 0x8
};
// total size: 0x8
class __PerceptionNodes__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class zLOSCache {
    // Members
    float LOSTimer; // offset 0x0, size 0x4
    bool isInLOS; // offset 0x4, size 0x1
};
enum eStatus {
    Normal = 0,
    Never = 1,
    Always = 2,
};
// total size: 0x10
class zNPCInfoNode {
    // Members
    class zNPCInfoNode * next; // offset 0x0, size 0x4
    class zNPCBase * owner; // offset 0x4, size 0x4
    enum eNPCInfoNodeType infoNodeType; // offset 0x8, size 0x4
};
enum eNPCInfoNodeType {
    eNPCInfoNodeType_First = 0,
    eNPCInfoNodeType_AnimationSignaler = 0,
    eNPCInfoNodeType_MovePointSave = 1,
    eNPCInfoNodeType_PathInfo = 2,
    eNPCInfoNodeTypeCount = 3,
    eNPCInfoNodeTypeForceInt = 2147483647,
};
// total size: 0x8
class xModelAssetParam {
    // Members
    unsigned int HashID; // offset 0x0, size 0x4
    unsigned char WordLength; // offset 0x4, size 0x1
    unsigned char String[3]; // offset 0x5, size 0x3
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
// total size: 0x3740
class zWallePlayer : public zCommonPlayer {
    // Members
    class xMat4x3 prevLeftTreadMat; // offset 0x1454, size 0x40
    class xMat4x3 curLeftTreadMat; // offset 0x1494, size 0x40
    class xMat4x3 prevRightTreadMat; // offset 0x14D4, size 0x40
    class xMat4x3 curRightTreadMat; // offset 0x1514, size 0x40
    float leftTreadTravel; // offset 0x1554, size 0x4
    float rightTreadTravel; // offset 0x1558, size 0x4
    float leftTrackBlend; // offset 0x155C, size 0x4
    float rightTrackBlend; // offset 0x1560, size 0x4
    float gearRotateLeft[3]; // offset 0x1564, size 0xC
    float gearRotateRight[3]; // offset 0x1570, size 0xC
    class xVec3 actualVelocity; // offset 0x157C, size 0xC
    float chevronTimer; // offset 0x1588, size 0x4
    bool playedRegenAnim; // offset 0x158C, size 0x1
    class zNPCEve * eve; // offset 0x1590, size 0x4
    class xVec3 * evePos; // offset 0x1594, size 0x4
    unsigned int waleProjectileObjID; // offset 0x1598, size 0x4
    unsigned int projectileEveID; // offset 0x159C, size 0x4
    bool gEveVisible; // offset 0x15A0, size 0x1
    bool gEveHasTarget; // offset 0x15A1, size 0x1
    bool gEveControl; // offset 0x15A2, size 0x1
    bool inStorkJump; // offset 0x15A3, size 0x1
    bool wantEndStorkJump; // offset 0x15A4, size 0x1
    bool eveGrabbed; // offset 0x15A5, size 0x1
    float eveGasTank; // offset 0x15A8, size 0x4
    bool overheadHammer; // offset 0x15AC, size 0x1
    class xMat4x3 overheadHammerMatrix; // offset 0x15B0, size 0x40
    class xQuat overheadHammerHackQuat; // offset 0x15F0, size 0x10
    bool flameThrower; // offset 0x1600, size 0x1
    bool shield; // offset 0x1601, size 0x1
    bool carryingGun; // offset 0x1602, size 0x1
    bool turnFirstFrame; // offset 0x1603, size 0x1
    float turnStartRot; // offset 0x1604, size 0x4
    float turnTargetRot; // offset 0x1608, size 0x4
    float turnCurBlend; // offset 0x160C, size 0x4
    float turnDBlend; // offset 0x1610, size 0x4
    class xVec3 turnDirection; // offset 0x1614, size 0xC
    float turnTime; // offset 0x1620, size 0x4
    class zLaser laser[16]; // offset 0x1628, size 0x1C00
    class zRuntimeEntityCreateInfo laserCI; // offset 0x3228, size 0x8
    class zRuntimeEntityCreateInfo laserUpgradedCI; // offset 0x3230, size 0x8
    class hkBaseObject * laserFilterList[1]; // offset 0x3238, size 0x4
    float timeSinceLastMoveInput; // offset 0x323C, size 0x4
    float twistAngle; // offset 0x3240, size 0x4
    bool forwardFocus; // offset 0x3244, size 0x1
    float walkLerp; // offset 0x3248, size 0x4
    float pitchLerp; // offset 0x324C, size 0x4
    bool setCounterTwistThisFrame; // offset 0x3250, size 0x1
    float counterTwistBlend; // offset 0x3254, size 0x4
    float AimBlend0; // offset 0x3258, size 0x4
    float AimBlend1; // offset 0x325C, size 0x4
    bool laserRateLimited; // offset 0x3260, size 0x1
    float laserRateCounter; // offset 0x3264, size 0x4
    float laserHoldRateCounter; // offset 0x3268, size 0x4
    bool stunIsEnabled; // offset 0x326C, size 0x1
    bool stunned; // offset 0x326D, size 0x1
    float stunValue; // offset 0x3270, size 0x4
    float stunRecoveryTimer; // offset 0x3274, size 0x4
    float proceduralHitTimer; // offset 0x3278, size 0x4
    bool compactTrash; // offset 0x327C, size 0x1
    int cubeType; // offset 0x3280, size 0x4
    int toBuildCube; // offset 0x3284, size 0x4
    class xBase * powGroup; // offset 0x3288, size 0x4
    unsigned long long powGroupID; // offset 0x3290, size 0x8
    int powObjIndices[16]; // offset 0x3298, size 0x40
    class zWalleProjectileManager projectileManager; // offset 0x32D8, size 0x9C
    bool targetingLocked; // offset 0x3374, size 0x1
    class xVec3 dpos; // offset 0x3378, size 0xC
    float landVFXTimer; // offset 0x3384, size 0x4
    float updateDelay; // offset 0x3388, size 0x4
    bool canAutoHit; // offset 0x338C, size 0x1
    class xEnt * priorityEnt; // offset 0x3390, size 0x4
    float laserAutoTargetUpdateDelay; // offset 0x3394, size 0x4
    bool laserAutoTargetCanAutoHit; // offset 0x3398, size 0x1
    class xEnt * laserAutoTargetPriorityEnt; // offset 0x339C, size 0x4
    float autoTargetCubeTimer; // offset 0x33A0, size 0x4
    unsigned int lastAutoTargetCubeID; // offset 0x33A4, size 0x4
    bool gOverHeadGrab; // offset 0x33A8, size 0x1
    int gSwitchLever; // offset 0x33AC, size 0x4
    bool fixVendingMachine; // offset 0x33B0, size 0x1
    class xEnt * prevLookAtEnt; // offset 0x33B4, size 0x4
    class xEnt * curLookAtEnt; // offset 0x33B8, size 0x4
    float headTrackingUpdateDelay; // offset 0x33BC, size 0x4
    class xEnt * poiEnt; // offset 0x33C0, size 0x4
    int hitControlState; // offset 0x33C4, size 0x4
    float hitControlTimer; // offset 0x33C8, size 0x4
    float dotTimer; // offset 0x33CC, size 0x4
    class xVec3 targetOrientation; // offset 0x33D0, size 0xC
    class xVec3 cappedSurfaceNormal; // offset 0x33DC, size 0xC
    class xVec3 trueSurfaceNormal; // offset 0x33E8, size 0xC
    class xVec3 movementSurfaceNormal; // offset 0x33F4, size 0xC
    class xVec3 oldUpHillVec; // offset 0x3400, size 0xC
    float slopeControlDamp; // offset 0x340C, size 0x4
    float airTimer; // offset 0x3410, size 0x4
    float yProxyOffset; // offset 0x3414, size 0x4
    float boxBounceTime; // offset 0x3418, size 0x4
    bool boxBounceControlInAir; // offset 0x341C, size 0x1
    int boxBounceCount; // offset 0x3420, size 0x4
    class xVec3 boxFormTumbleNormal; // offset 0x3424, size 0xC
    float boxFormDampenMovementTimer; // offset 0x3430, size 0x4
    class hkRotation boxFormMovementDirection; // offset 0x3440, size 0x30
    bool isJumping; // offset 0x3470, size 0x1
    int lastUsedPadMRI; // offset 0x3474, size 0x4
    class xVec3 bone_adjust; // offset 0x3478, size 0xC
    unsigned int * atomics_order; // offset 0x3484, size 0x4
    unsigned int atomics_count; // offset 0x3488, size 0x4
    class hkpRigidBody * pRigidBodyCube; // offset 0x348C, size 0x4
    class hkpRigidBody * pRigidBodyBall; // offset 0x3490, size 0x4
    enum zWallePlayerRigidBodyType pRigidBodyTypeCurrent; // offset 0x3494, size 0x4
    unsigned int currentOnCubeSurf; // offset 0x3498, size 0x4
    unsigned int previousOnCubeSurf; // offset 0x349C, size 0x4
    float rigidBodySlipperyTimer; // offset 0x34A0, size 0x4
    unsigned int cubeSurfState; // offset 0x34A4, size 0x4
    class hkpAabbPhantom * pTreadRayPhantom; // offset 0x34A8, size 0x4
    class xMat4x3 treadTransform[2]; // offset 0x34AC, size 0x80
    float treadSuspensionPos[2]; // offset 0x352C, size 0x8
    class xVec3 treadRotationUp[2]; // offset 0x3534, size 0x18
    float treadUnsupportedAngularVelocity[2]; // offset 0x354C, size 0x8
    float treadPivotDrift[2]; // offset 0x3554, size 0x8
    bool treadSupported[2]; // offset 0x355C, size 0x2
    class hkVector4 halfExtents; // offset 0x3560, size 0x10
    class zSoundWalleEngine engineSound; // offset 0x3570, size 0x5C
    class zPlayerHeadTracker headTracker; // offset 0x35CC, size 0x88
    float shieldRotAngle; // offset 0x3654, size 0x4
    bool swingHammer; // offset 0x3658, size 0x1
    float hammerRotPercent; // offset 0x365C, size 0x4
    bool swingHammerDown; // offset 0x3660, size 0x1
    float hammerDownTimer; // offset 0x3664, size 0x4
    int steepStateCurrent; // offset 0x3668, size 0x4
    int steepStatePrevious; // offset 0x366C, size 0x4
    float steepStateTimer; // offset 0x3670, size 0x4
    class zDecal * curTreadDecal; // offset 0x3674, size 0x4
    unsigned long long lastTreadDecalID; // offset 0x3678, size 0x8
    float treadSurfaceTimeLeft; // offset 0x3680, size 0x4
    float lastTreadEmitTime; // offset 0x3684, size 0x4
    class zDecal * treadDefaultDecal; // offset 0x3688, size 0x4
    class xMat4x3 treadOffsetLf; // offset 0x368C, size 0x40
    class xMat4x3 treadOffsetRt; // offset 0x36CC, size 0x40
    class xVec3 lastTreadEmitPosLf; // offset 0x370C, size 0xC
    class xVec3 lastTreadEmitPosRt; // offset 0x3718, size 0xC
    unsigned long long lastTreadFXScriptID; // offset 0x3728, size 0x8
    bool threadFXStarted; // offset 0x3730, size 0x1
    class zPlayerRigidBodyCollisionListener * pcollisionListenerCube; // offset 0x3734, size 0x4
    class zPlayerRigidBodyCollisionListener * pcollisionListenerBall; // offset 0x3738, size 0x4
};
// total size: 0x1458
class zCommonPlayer : public zPlayer {
    // Members
    class zContextObjectManager contextManager; // offset 0xF58, size 0x1C
    enum zHitSource lastDamageType; // offset 0xF74, size 0x4
    bool has_picked_up_health; // offset 0xF78, size 0x1
    float stickFlickMinTimer; // offset 0xF7C, size 0x4
    float stickFlickMaxTimer; // offset 0xF80, size 0x4
    float stickFlickAngle; // offset 0xF84, size 0x4
    float stickFlickUnit[2]; // offset 0xF88, size 0x8
    class LedgeGrabParams ledge; // offset 0xF90, size 0x3C
    bool gBoostChevron; // offset 0xFCC, size 0x1
    class zPlayerOneLinerData oneLinerData; // offset 0xFD0, size 0xAC
    float collisionMasterRadius; // offset 0x107C, size 0x4
    int surfaceDamage; // offset 0x1080, size 0x4
    enum zHitSource surfaceSource; // offset 0x1084, size 0x4
    class xVec3 surfaceKnockback; // offset 0x1088, size 0xC
    class xBase * prevCarry; // offset 0x1094, size 0x4
    class xVec3 drivenBydpos; // offset 0x1098, size 0xC
    float hangTimer; // offset 0x10A4, size 0x4
    float last_dt; // offset 0x10A8, size 0x4
    enum HitType currentHitType; // offset 0x10AC, size 0x4
    class xVec3 damageVec; // offset 0x10B0, size 0xC
    float hitTimer; // offset 0x10BC, size 0x4
    int hitJuggleCount; // offset 0x10C0, size 0x4
    class zSoundSourcesPhysics * soundSourcesPhysics; // offset 0x10C4, size 0x4
    class MoveSupressParams move_supress; // offset 0x10C8, size 0x28
    class zInteraction * currAction; // offset 0x10F0, size 0x4
    float walkToActionTimer; // offset 0x10F4, size 0x4
    float autoMoveSpeed; // offset 0x10F8, size 0x4
    enum AutoMoveMode autoMoveMode; // offset 0x10FC, size 0x4
    float autoMoveDist; // offset 0x1100, size 0x4
    class pointer_asset * autoMovePointer; // offset 0x1104, size 0x4
    class xBase * autoMoveSender; // offset 0x1108, size 0x4
    float extraIdleTimer; // offset 0x110C, size 0x4
    class zSpringboard * springboard; // offset 0x1110, size 0x4
    class zSpringboard * lastSpringboard; // offset 0x1114, size 0x4
    class zNPCBase * interactingNPC; // offset 0x1118, size 0x4
    float walkLerp; // offset 0x111C, size 0x4
    int finishingMove; // offset 0x1120, size 0x4
    class zNPCBase * lastHitNPC; // offset 0x1124, size 0x4
    unsigned int powerUpTbl[5]; // offset 0x1128, size 0x14
    unsigned int health; // offset 0x113C, size 0x4
    float healthRegenRate; // offset 0x1140, size 0x4
    float healthRegenWait; // offset 0x1144, size 0x4
    unsigned int expPoints; // offset 0x1148, size 0x4
    unsigned int expPointsToUpgrade; // offset 0x114C, size 0x4
    unsigned int nukes; // offset 0x1150, size 0x4
    signed char speed; // offset 0x1154, size 0x1
    signed char lastSpeed; // offset 0x1155, size 0x1
    class zSoundFX * pSoundVocal; // offset 0x1158, size 0x4
    unsigned int vocalInputAction; // offset 0x115C, size 0x4
    unsigned int upgradeLevel; // offset 0x1160, size 0x4
    unsigned int uCommonPlayerFlags; // offset 0x1164, size 0x4
    class xMat4x3 playerAbsMat; // offset 0x1168, size 0x40
    float maxVelmag; // offset 0x11A8, size 0x4
    float leanLerp; // offset 0x11AC, size 0x4
    bool WALK_USE_MINSPEED; // offset 0x11B0, size 0x1
    bool bReverse; // offset 0x11B1, size 0x1
    float moveSpeedNormal[6]; // offset 0x11B4, size 0x18
    float moveSpeedJump[6]; // offset 0x11CC, size 0x18
    float normalTurnFactor; // offset 0x11E4, size 0x4
    float attackTurnFactor; // offset 0x11E8, size 0x4
    float airTurnFactor; // offset 0x11EC, size 0x4
    float stoppedTurnSpeedUp; // offset 0x11F0, size 0x4
    float animWalk[3]; // offset 0x11F4, size 0xC
    float animRun[3]; // offset 0x1200, size 0xC
    float SETTLE_RATE; // offset 0x120C, size 0x4
    float ENV_COLLS_BUFFER; // offset 0x1210, size 0x4
    float SPEED_INCREASE_MULTIPLIER; // offset 0x1214, size 0x4
    float Y_SPEED_NPC_KNOCK_BACK; // offset 0x1218, size 0x4
    float BOULDER_FORCE_MAX; // offset 0x121C, size 0x4
    float LEAN_MIN_ANGLE; // offset 0x1220, size 0x4
    float LEAN_MAX_ANGLE; // offset 0x1224, size 0x4
    float LEAN_SMOOTH_CONSTANT; // offset 0x1228, size 0x4
    float LEAN_SMOOTH_MINRATE; // offset 0x122C, size 0x4
    float LEAN_MOVE_MAXDEFLECT; // offset 0x1230, size 0x4
    float MOUNT_DELAY_TIME; // offset 0x1234, size 0x4
    float SHORT_TIME; // offset 0x1238, size 0x4
    float THROW_TURN_SPEED; // offset 0x123C, size 0x4
    float sAutoMoveMaxParam; // offset 0x1240, size 0x4
    float DEFAULT_BLEND_TIME; // offset 0x1244, size 0x4
    float MIN_MOVEMENT_ANGLE; // offset 0x1248, size 0x4
    float MIN_ANIMATE_MOVEMENT_ANGLE; // offset 0x124C, size 0x4
    float MAX_TURN_INPLACE_TIME; // offset 0x1250, size 0x4
    float KNOCKBACK_HORIZ; // offset 0x1254, size 0x4
    float KNOCKBACK_VERT; // offset 0x1258, size 0x4
    int MAX_JUGGLE_COUNT; // offset 0x125C, size 0x4
    float LOW_HEALTH_THRESHOLD; // offset 0x1260, size 0x4
    float CHASE_USE_LIGHT_DAMAGE; // offset 0x1264, size 0x4
    float SLIDE_AIR_FADE_TIME; // offset 0x1268, size 0x4
    float SLIDE_GROUND_FADE_TIME; // offset 0x126C, size 0x4
    float MAX_VEL_DOT_NORM; // offset 0x1270, size 0x4
    float CAMERA_ENEMY_DISTANCE_TWEAK; // offset 0x1274, size 0x4
    float CAMERA_CROUCH_TWEAK; // offset 0x1278, size 0x4
    float ZOOM_IN_DELAY; // offset 0x127C, size 0x4
    float ZOOM_IN_BLEND_TIME; // offset 0x1280, size 0x4
    float ZOOM_IN_DISTANCE; // offset 0x1284, size 0x4
    float REVERSE_ZONE; // offset 0x1288, size 0x4
    float FAST_RUN_TURN_FACTOR; // offset 0x128C, size 0x4
    float MIN_WALK_ANALOGMAG; // offset 0x1290, size 0x4
    float STICKY_RUN_MULT; // offset 0x1294, size 0x4
    float GLIDE_DAMP_FACTOR; // offset 0x1298, size 0x4
    bool NO_HIT_POINT_DAMAGE; // offset 0x129C, size 0x1
    class @class checkpoint; // offset 0x129E, size 0x2
    bool shouldTurnToFace; // offset 0x12A0, size 0x1
    bool allowTurnToFaceAbort; // offset 0x12A1, size 0x1
    float turnToFaceAngle; // offset 0x12A4, size 0x4
    float turnToFaceSpeed; // offset 0x12A8, size 0x4
    float lastMag; // offset 0x12AC, size 0x4
    float lastAngle; // offset 0x12B0, size 0x4
    float moveAcceleration; // offset 0x12B4, size 0x4
    float moveDeceleration; // offset 0x12B8, size 0x4
    float runTimer; // offset 0x12BC, size 0x4
    float minimumRunTime; // offset 0x12C0, size 0x4
    float turnInPlaceTimer; // offset 0x12C4, size 0x4
    float stickMagnitude; // offset 0x12C8, size 0x4
    float stickAngle; // offset 0x12CC, size 0x4
    float facingAngle; // offset 0x12D0, size 0x4
    bool facingAngleValid; // offset 0x12D4, size 0x1
    bool useThrowTarget; // offset 0x12D5, size 0x1
    class xVec3 throwTarget; // offset 0x12D8, size 0xC
    float skidStopDeceleration; // offset 0x12E4, size 0x4
    float skidStopDecelTime; // offset 0x12E8, size 0x4
    float skidStopLerpTime; // offset 0x12EC, size 0x4
    class zPlayerConstrainer constrainer; // offset 0x12F0, size 0x1
    bool pushedPlayerLastFrame; // offset 0x12F1, size 0x1
    class xVec3 pushedPlayerEnemyPos; // offset 0x12F4, size 0xC
    int bouncedBackToSafety; // offset 0x1300, size 0x4
    float bounceBackTimer; // offset 0x1304, size 0x4
    class xVec3 floor_safe_vec[4]; // offset 0x1308, size 0x30
    float floor_safe_tmr; // offset 0x1338, size 0x4
    class zNPCBase * activeZeroPoint; // offset 0x133C, size 0x4
    enum ZeroPointState zeroPointState; // offset 0x1340, size 0x4
    enum ZeroPointFacing zeroPointFacing; // offset 0x1344, size 0x4
    class zFXScriptSpawnPt * spawnDamageFlash_Asset; // offset 0x1348, size 0x4
    class zFXScriptSpawnPt * spawnDamageSparks_Top_Asset; // offset 0x134C, size 0x4
    class zFXScriptSpawnPt * spawnDamageSparks_Top_Right_Asset; // offset 0x1350, size 0x4
    class zFXScriptSpawnPt * spawnDamageSparks_Bottom_Asset; // offset 0x1354, size 0x4
    class zFXScriptSpawnPt * spawnDamageKnockback_Asset; // offset 0x1358, size 0x4
    class zFXScriptSpawnPt * spawnDOT_Asset; // offset 0x135C, size 0x4
    class zFXScriptSpawnPt * spawnDamageLaser_Asset; // offset 0x1360, size 0x4
    class zFXScriptSpawnPt * spawnDamageCube_Asset; // offset 0x1364, size 0x4
    class zFXScriptSpawnPt * spawnDamageExplosion_Asset; // offset 0x1368, size 0x4
    class zFXScriptSpawnPt * spawnDamageFlash; // offset 0x136C, size 0x4
    class zFXScriptSpawnPt * spawnDamageSparks_Top; // offset 0x1370, size 0x4
    class zFXScriptSpawnPt * spawnDamageSparks_Top_Right; // offset 0x1374, size 0x4
    class zFXScriptSpawnPt * spawnDamageSparks_Bottom; // offset 0x1378, size 0x4
    class zFXScriptSpawnPt * spawnDamageKnockback; // offset 0x137C, size 0x4
    class zPlayerCarryInfo carry; // offset 0x1380, size 0xD0
    bool forcedRigidBodyForm : 1; // offset 0x1450, size 0x1, bit offset 0
    bool lockedRigidBodyForm : 1; // offset 0x1450, size 0x1, bit offset 1
    bool forcedCharProxyForm : 1; // offset 0x1450, size 0x1, bit offset 2
    bool lockedInCharProxyForm : 1; // offset 0x1450, size 0x1, bit offset 3
    unsigned char unusedFlagPadding : 4; // offset 0x1450, size 0x1, bit offset 4
};
// total size: 0x1C
class zContextObjectManager {
    // Members
    class MountData mountData; // offset 0x0, size 0x10
    class zContextObject * currentObject; // offset 0x10, size 0x4
    bool mounted; // offset 0x14, size 0x1
    bool attemptContextMove; // offset 0x15, size 0x1
    class bit_array transition; // offset 0x16, size 0x1
    unsigned int animStateID; // offset 0x18, size 0x4
};
// total size: 0x10
class MountData {
    // Members
    class @class tightrope; // offset 0x0, size 0x4
    class @class poleSwing; // offset 0x0, size 0x10
    class @class pointJump; // offset 0x0, size 0xC
};
// total size: 0x4
class @class {
    // Members
    float u; // offset 0x0, size 0x4
};
// total size: 0x10
class @class {
    // Members
    class xVec3 pos; // offset 0x0, size 0xC
    bool forward; // offset 0xC, size 0x1
};
// total size: 0xC
class @class {
    // Members
    class xVec3 pos; // offset 0x0, size 0xC
};
// total size: 0x28
class zContextObject : public xBase {
    // Members
    bool collide : 1; // offset 0x20, size 0x1, bit offset 0
    bool visible : 1; // offset 0x20, size 0x1, bit offset 1
    unsigned int pad : 30; // offset 0x20, size 0x4, bit offset 2
};
// total size: 0x1
class bit_array {
    // Members
    unsigned char bytes[1]; // offset 0x0, size 0x1
};
enum zHitSource {
    zHS_EVENT = 0,
    zHS_GENERAL = 1,
    zHS_EXPLOSION = 2,
    zHS_ZERO_POINT = 3,
    zHS_JUGGLE = 4,
    zHS_LASER_PLAYER = 5,
    zHS_LASER_ENEMY = 6,
    zHS_SURFACE = 7,
    zHS_DEATHPLANE = 8,
    zHS_KNOCKBACK = 9,
    zHS_ENEMY_HEAVY = 10,
    zHS_ENEMY_LIGHT = 11,
    zHS_EVE_POWERSURGE = 12,
    zHS_WALE_ENERGY_CUBE = 13,
    zHS_EVENT_KILL = 14,
    zHS_WALE_BASIC_CUBE = 15,
    zHS_DOT = 16,
    zHS_WALE_HEAVY_CUBE = 17,
    zHS_WALE_MAGNET_CUBE = 18,
    zHS_DOT_DROWN = 19,
    zHS_DEATHPLANE_DROWN = 20,
    zHS_DEATHPLANE_FALL = 21,
    zHS_EVE_COLLISION = 22,
    zHS_COUNT = 23,
    zHS_FORCE_INT = 4294967295,
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
// total size: 0xAC
class zPlayerOneLinerData {
    // Members
    int currentDamageIndex; // offset 0x0, size 0x4
    int killCount; // offset 0x4, size 0x4
    class @class damageRecord[20]; // offset 0x8, size 0xA0
    class zPlayer * player; // offset 0xA8, size 0x4
};
// total size: 0x8
class @class {
    // Members
    float time; // offset 0x0, size 0x4
    short damageValue; // offset 0x4, size 0x2
};
enum HitType {
    eHitType_None = 4294967295,
    eHitType_Light = 0,
    eHitType_BackPlayerHit = 1,
    eHitType_FrontPlayerHit = 2,
    eHitType_InfiniteFall = 3,
    eHitType_Drown = 4,
};
// total size: 0x174
class zSoundSourcesPhysics {
    // Members
    class zSoundAsset m_soundHit; // offset 0x0, size 0x74
    class zSoundAsset m_soundScrape; // offset 0x74, size 0x74
    class zSoundAsset m_soundRoll; // offset 0xE8, size 0x74
    class SoundPhysicsData m_soundPhysicsData; // offset 0x15C, size 0x14
    bool m_bScheduledForDelete; // offset 0x170, size 0x1
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
// total size: 0x38
class zInteraction : public xBase {
    // Members
    class zCommonPlayer * interactingPlayer; // offset 0x20, size 0x4
    class zInteractionAsset * asset; // offset 0x24, size 0x4
    enum zInteractionType type; // offset 0x28, size 0x4
    class xEnt * object; // offset 0x2C, size 0x4
    bool activated; // offset 0x30, size 0x1
    bool available; // offset 0x31, size 0x1
};
// total size: 0x28
class zInteractionAsset : public xDynAsset {
    // Members
    bool initiallyActive; // offset 0x20, size 0x1
    bool initiallyAvailable; // offset 0x21, size 0x1
};
enum zInteractionType {
    eInteractionTypeSwitchLever = 0,
    eInteractionTypeLaunch = 1,
    eInteractionTypeLookoutPoint = 2,
    eInteractionTypeDistractionPoint = 3,
    eInteractionTypeCount = 4,
};
enum AutoMoveMode {
    eAutoMoveOff = 0,
    eAutoMoveMoving = 1,
    eAutoMoveInterp = 2,
};
// total size: 0x38
class pointer_asset : public xDynAsset {
    // Members
    class xVec3 loc; // offset 0x20, size 0xC
    float yaw; // offset 0x2C, size 0x4
    float pitch; // offset 0x30, size 0x4
    float roll; // offset 0x34, size 0x4
};
// total size: 0xC8
class zSpringboard : public xEnt {
    // Members
    class Springboard * asset; // offset 0xB8, size 0x4
    enum State state; // offset 0xBC, size 0x4
    float anglePitch; // offset 0xC0, size 0x4
    float angleYaw; // offset 0xC4, size 0x4
};
// total size: 0x60
class Springboard : public xDynAsset {
    // Members
    class vec3 Location; // offset 0x20, size 0xC
    class Rotation3 Orientation; // offset 0x2C, size 0xC
    class uid characterAssetsID; // offset 0x38, size 0x8
    float Adjustment; // offset 0x40, size 0x4
    bool Top; // offset 0x44, size 0x1
    unsigned char Type; // offset 0x45, size 0x1
    float Angle; // offset 0x48, size 0x4
    float AngleYaw; // offset 0x4C, size 0x4
    unsigned char Size; // offset 0x50, size 0x1
    bool isWet; // offset 0x51, size 0x1
    class LinkAsset EventLinksNew; // offset 0x54, size 0x8
};
enum State {
    Idle = 0,
    Compressing = 1,
    Compressed = 2,
    Launching = 3,
    Failed = 4,
};
// total size: 0xA0
class zSoundFX : public xBase {
    // Members
    class zSoundAsset zsa; // offset 0x20, size 0x74
    class zSoundFXAsset * asset; // offset 0x94, size 0x4
    class xEnt * attachedTo; // offset 0x98, size 0x4
};
// total size: 0x38
class zSoundFXAsset : public SoundEntity {
    // Members
    class vec3 pos; // offset 0x10, size 0xC
    class uid attach; // offset 0x20, size 0x8
    class SoundBankSource source; // offset 0x28, size 0xC
};
// total size: 0x10
class SoundEntity : public xBaseAsset {};
// total size: 0x2
class @class {
    // Members
    short incrediPower; // offset 0x0, size 0x2
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
// total size: 0x110
class zFXScriptSpawnPt : public xBase {
    // Members
    bool toFree; // offset 0x20, size 0x1
    void * owner; // offset 0x24, size 0x4
    int unpausedState; // offset 0x28, size 0x4
    class FXScriptSpawnPtAsset * asset; // offset 0x2C, size 0x4
    class FXScriptAsset * fxAsset; // offset 0x30, size 0x4
    class zFXScript * fxScript; // offset 0x34, size 0x4
    unsigned int state; // offset 0x38, size 0x4
    float baseTime; // offset 0x3C, size 0x4
    class zFXScriptSpawnPtState * fxState; // offset 0x40, size 0x4
    int numFXEvents; // offset 0x44, size 0x4
    bool setupRan; // offset 0x48, size 0x1
    bool hasRan; // offset 0x49, size 0x1
    bool autoRelease; // offset 0x4A, size 0x1
    bool useInitialRotationPointDrive; // offset 0x4B, size 0x1
    int iterations; // offset 0x4C, size 0x4
    class xVec3 * vfxOffset; // offset 0x50, size 0x4
    class xEnt * driver; // offset 0x54, size 0x4
    class xModelInstance * model; // offset 0x58, size 0x4
    class xVec3 * driverPos; // offset 0x5C, size 0x4
    class xVec3 * driverDPos; // offset 0x60, size 0x4
    int attachBone; // offset 0x64, size 0x4
    class xMat4x3 initDrvMat; // offset 0x68, size 0x40
    int auxBone; // offset 0xA8, size 0x4
    class xVec3 * floorNormal; // offset 0xAC, size 0x4
    class zParticleGeneratorSpawnPt * pgSpawnPts; // offset 0xB0, size 0x4
    class zObjectGeneratorSpawnPt * ogSpawnPts; // offset 0xB4, size 0x4
    class zShrapnelSpawnPt * shrapSpawnPts; // offset 0xB8, size 0x4
    class zDecalEmitter * decSpawnPts; // offset 0xBC, size 0x4
    class zRibbonEmitter * ribbSpawnPts; // offset 0xC0, size 0x4
    class zDynaLightSpawnPt * dlSpawnPts; // offset 0xC4, size 0x4
    class xBaseTransform baseTransform; // offset 0xC8, size 0x48
};
// total size: 0x58
class FXScriptSpawnPtAsset : public xBaseAsset {
    // Members
    bool autoStart; // offset 0x10, size 0x1
    class vec3 position; // offset 0x14, size 0xC
    class Rotation3 orientation; // offset 0x20, size 0xC
    float cullDistance; // offset 0x2C, size 0x4
    int cullPriority; // offset 0x30, size 0x4
    class uid fxScript; // offset 0x38, size 0x8
    class Entity Entity; // offset 0x40, size 0x10
    class LinkAsset EventLinksNew; // offset 0x50, size 0x8
};
// total size: 0x10
class Entity {
    // Members
    class uid entity; // offset 0x0, size 0x8
    float velScale; // offset 0x8, size 0x4
    unsigned char bone; // offset 0xC, size 0x1
    bool locked; // offset 0xD, size 0x1
};
// total size: 0x38
class FXScriptAsset : public xBaseAsset {
    // Members
    float playTime; // offset 0x10, size 0x4
    float cycleTime; // offset 0x14, size 0x4
    bool loop; // offset 0x18, size 0x1
    class vec3 position; // offset 0x1C, size 0xC
    float cullDistance; // offset 0x28, size 0x4
    int cullPriority; // offset 0x2C, size 0x4
    class __fxScriptList__ fxScriptList; // offset 0x30, size 0x8
};
// total size: 0x8
class __fxScriptList__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x4
class zFXScriptSpawnPtState {
    // Members
    int state; // offset 0x0, size 0x4
};
// total size: 0x78
class zDynaLightSpawnPt : public xBase {
    // Members
    class DynaLightSpawnPtAsset * asset; // offset 0x20, size 0x4
    class xLightAsset * lasset; // offset 0x24, size 0x4
    class xLight * lObj; // offset 0x28, size 0x4
    unsigned int state; // offset 0x2C, size 0x4
    class xBaseTransform baseTransform; // offset 0x30, size 0x48
};
// total size: 0x30
class DynaLightSpawnPtAsset : public xBaseAsset {
    // Members
    class vec3 position; // offset 0x10, size 0xC
    class Rotation3 orientation; // offset 0x1C, size 0xC
    class uid dynaLightAsset; // offset 0x28, size 0x8
};
// total size: 0xD0
class xLightAsset : public LightAsset {};
// total size: 0xD0
class LightAsset : public xDynAsset {
    // Members
    class uid lightEffect; // offset 0x20, size 0x8
    float lightEffectSpeed; // offset 0x28, size 0x4
    unsigned int flags; // offset 0x2C, size 0x4
    class uid attachTo; // offset 0x30, size 0x8
    class ModelInstanceAsset lightCardModelInstance; // offset 0x40, size 0x40
    float lightCardScale; // offset 0x80, size 0x4
    float LODDistance; // offset 0x84, size 0x4
    class LightPointSpotAsset PointSpotAsset; // offset 0x88, size 0x38
    class LinkAsset EventLinksNew; // offset 0xC0, size 0x8
};
// total size: 0x38
class LightPointSpotAsset {
    // Members
    unsigned short lightType; // offset 0x0, size 0x2
    unsigned short lightMask; // offset 0x2, size 0x2
    class FloatColorRGB color; // offset 0x4, size 0xC
    float intensity; // offset 0x10, size 0x4
    class vec3 pos; // offset 0x14, size 0xC
    float radius; // offset 0x20, size 0x4
    class Rotation3 orientation; // offset 0x24, size 0xC
    class vec2 coneAngles; // offset 0x30, size 0x8
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
// total size: 0xC0
class xLight : public xBase {
    // Members
    unsigned int flags; // offset 0x20, size 0x4
    class xLightAsset * tasset; // offset 0x24, size 0x4
    class LightPointSpot * ngLight; // offset 0x28, size 0x4
    class xBase * attachedTo; // offset 0x2C, size 0x4
    class xVec3 attachedOffset; // offset 0x30, size 0xC
    class xModelInstance * lightCard; // offset 0x3C, size 0x4
    float lightCardScale; // offset 0x40, size 0x4
    class _xFColor startColor; // offset 0x44, size 0x10
    class _xFColor endColor; // offset 0x54, size 0x10
    float transTimeLeft; // offset 0x64, size 0x4
    float totalTransTime; // offset 0x68, size 0x4
    class xLightEffectBase * lightEffect; // offset 0x6C, size 0x4
    bool lightEffectRunning; // offset 0x70, size 0x1
    float lightEffectSpeed; // offset 0x74, size 0x4
    class @class __anon; // offset 0x78, size 0x18
    class xLightEffectFlickerData flickerData; // offset 0x78, size 0x14
    class xLightEffectStrobeData strobeData; // offset 0x78, size 0x18
    class xVec3 lightPos; // offset 0x90, size 0xC
    class xVec3 lightDir; // offset 0x9C, size 0xC
    float lightRadius; // offset 0xA8, size 0x4
    class _xFColor lightColor; // offset 0xAC, size 0x10
};
// total size: 0x10
class _xFColor {
    // Members
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
};
// total size: 0x20
class xLightEffectBase : public xBase {};
// total size: 0x18
class @class {
    // Members
    class xLightEffectFlickerData flickerData; // offset 0x0, size 0x14
    class xLightEffectStrobeData strobeData; // offset 0x0, size 0x18
};
// total size: 0x14
class xLightEffectFlickerData {
    // Members
    class _xFColor initialColor; // offset 0x0, size 0x10
    float time; // offset 0x10, size 0x4
};
// total size: 0x18
class xLightEffectStrobeData {
    // Members
    class _xFColor maxColor; // offset 0x0, size 0x10
    float time; // offset 0x10, size 0x4
    unsigned char stage; // offset 0x14, size 0x1
};
// total size: 0x48
class xBaseTransform {
    // Members
    class xMat4x3 transform; // offset 0x0, size 0x40
    class xVec3 * dPos; // offset 0x40, size 0x4
    float dPosScale; // offset 0x44, size 0x4
};
// total size: 0xD0
class zPlayerCarryInfo {
    // Members
    class zCarryableObject * grabbed; // offset 0x0, size 0x4
    unsigned long long grabbedModelID; // offset 0x8, size 0x8
    unsigned int animCode; // offset 0x10, size 0x4
    class xVec3 targetVelocity; // offset 0x14, size 0xC
    unsigned int lerpedIn; // offset 0x20, size 0x4
    class xMat4x3 spin; // offset 0x24, size 0x40
    class xQuat startQuat; // offset 0x64, size 0x10
    class xQuat endQuat; // offset 0x74, size 0x10
    class xVec3 objScale; // offset 0x84, size 0xC
    class xVec3 physicsTranslation; // offset 0x90, size 0xC
    float radius; // offset 0x9C, size 0x4
    bool orientToPlayer; // offset 0xA0, size 0x1
    bool destroyed; // offset 0xA1, size 0x1
    float targetRot; // offset 0xA4, size 0x4
    float startRot; // offset 0xA8, size 0x4
    unsigned int grabTarget; // offset 0xAC, size 0x4
    class xVec3 grabOffset; // offset 0xB0, size 0xC
    float grabLerpLast; // offset 0xBC, size 0x4
    unsigned int grabYclear; // offset 0xC0, size 0x4
    float grab_emit_remaining; // offset 0xC4, size 0x4
    float grab_dust_time; // offset 0xC8, size 0x4
};
// total size: 0x188
class zCarryableObject : public zEntSimpleObj {
    // Members
    class zCarryableObjectAsset * carryAsset; // offset 0xDC, size 0x4
    class zCarryableProperty * property; // offset 0xE0, size 0x4
    float time; // offset 0xE4, size 0x4
    class xEnt * carriedBy; // offset 0xE8, size 0x4
    class xEnt * pendingDriver; // offset 0xEC, size 0x4
    class xVec3 driveOffset; // offset 0xF0, size 0xC
    int killNextUpdate; // offset 0xFC, size 0x4
    float dropStartY; // offset 0x100, size 0x4
    float resetTimer; // offset 0x104, size 0x4
    bool gravityOn; // offset 0x108, size 0x1
    bool springboardLaunching; // offset 0x109, size 0x1
    class xParabola launchPath; // offset 0x10C, size 0x24
    float launchTime; // offset 0x130, size 0x4
    unsigned int persistentVisible; // offset 0x134, size 0x4
    unsigned char persistentChkby; // offset 0x138, size 0x1
    class xFXRibbon * arRibbon; // offset 0x13C, size 0x4
    class config_type arRibbonConfig; // offset 0x140, size 0x28
    float arRadius; // offset 0x168, size 0x4
    bool firstUpdateAfterReset; // offset 0x16C, size 0x1
    bool dropped; // offset 0x16D, size 0x1
    bool cheatFly; // offset 0x16E, size 0x1
    bool isDestructable; // offset 0x16F, size 0x1
    bool lockedInPlace; // offset 0x170, size 0x1
    class xVec3 originCorrection; // offset 0x174, size 0xC
    int respawnState; // offset 0x180, size 0x4
};
// total size: 0xE0
class zEntSimpleObj : public zEnt, public zEntAnimData {
    // Members
    class xSimpleObjAsset * sasset; // offset 0xC4, size 0x4
    unsigned int sflags; // offset 0xC8, size 0x4
    unsigned int orientRef; // offset 0xCC, size 0x4
    class zDestructible * destructible; // offset 0xD0, size 0x4
    class zSimpleMgr * smgr; // offset 0xD4, size 0x4
    class zSoundSourcesPhysics * soundSourcesPhysics; // offset 0xD8, size 0x4
};
// total size: 0x8
class zEntAnimData {
    // Members
    class @class __anon; // offset 0x0, size 0x8
    class @class __anon; // offset 0x0, size 0x4
    class zSimpleMgr * smgrExtra; // offset 0x0, size 0x4
    class @class __anon; // offset 0x0, size 0x8
    void * anim; // offset 0x0, size 0x4
    float animTime; // offset 0x4, size 0x4
};
// total size: 0x8
class @class {
    // Members
    class @class __anon; // offset 0x0, size 0x4
    class zSimpleMgr * smgrExtra; // offset 0x0, size 0x4
    class @class __anon; // offset 0x0, size 0x8
    void * anim; // offset 0x0, size 0x4
    float animTime; // offset 0x4, size 0x4
};
// total size: 0x4
class @class {
    // Members
    class zSimpleMgr * smgrExtra; // offset 0x0, size 0x4
};
// total size: 0x2C
class zSimpleMgr {
    // Members
    class xSphere worldBound; // offset 0x0, size 0x10
    float noRenderDist; // offset 0x10, size 0x4
    float lodDist0; // offset 0x14, size 0x4
    float fadeDist; // offset 0x18, size 0x4
    unsigned int flags; // offset 0x1C, size 0x4
    class xMat4x3 * mat; // offset 0x20, size 0x4
    class xModelInstance * model; // offset 0x24, size 0x4
    class zEntSimpleObj * ent; // offset 0x28, size 0x4
};
// total size: 0x8
class @class {
    // Members
    void * anim; // offset 0x0, size 0x4
    float animTime; // offset 0x4, size 0x4
};
// total size: 0xC
class xSimpleObjAsset {
    // Members
    float animSpeed; // offset 0x0, size 0x4
    unsigned int initAnimState; // offset 0x4, size 0x4
    unsigned char collType; // offset 0x8, size 0x1
    unsigned char flags; // offset 0x9, size 0x1
    unsigned char orientRef; // offset 0xA, size 0x1
    unsigned char pad0; // offset 0xB, size 0x1
};
// total size: 0xB0
class zDestructible {
    // Members
    class DestructibleAsset * asset; // offset 0x0, size 0x4
    unsigned int curStateIdx; // offset 0x4, size 0x4
    unsigned int curHitPoints; // offset 0x8, size 0x4
    unsigned int statesCount; // offset 0xC, size 0x4
    unsigned int hitPoints; // offset 0x10, size 0x4
    unsigned int hitFilter; // offset 0x14, size 0x4
    unsigned int hitFilterExcluded; // offset 0x18, size 0x4
    unsigned int playerFilter; // offset 0x1C, size 0x4
    unsigned int healthPoints; // offset 0x20, size 0x4
    class zSoundAsset soundIdle; // offset 0x24, size 0x74
    float timer; // offset 0x98, size 0x4
    float respawnTime; // offset 0x9C, size 0x4
    class zDestructibleState * states; // offset 0xA0, size 0x4
    class xEnt * root_ent; // offset 0xA4, size 0x4
    bool active; // offset 0xA8, size 0x1
    bool pendingSwapModel; // offset 0xA9, size 0x1
    bool swapModel; // offset 0xAA, size 0x1
    class ModelInstanceAsset * modelInstanceSwap; // offset 0xAC, size 0x4
};
// total size: 0x48
class DestructibleAsset : public xBaseAsset {
    // Members
    unsigned int HitPoints; // offset 0x10, size 0x4
    unsigned int HitFilter; // offset 0x14, size 0x4
    unsigned int HitFilterExcluded; // offset 0x18, size 0x4
    unsigned int PlayerFilter; // offset 0x1C, size 0x4
    unsigned int HealthPoints; // offset 0x20, size 0x4
    class __States__ States; // offset 0x24, size 0x8
    class uid InitialFX; // offset 0x30, size 0x8
    class SoundBankSource SoundIdle; // offset 0x38, size 0xC
};
// total size: 0x8
class __States__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x170
class zDestructibleState {
    // Members
    unsigned int percent; // offset 0x0, size 0x4
    class ModelInstanceAsset * modelInstance; // offset 0x4, size 0x4
    class zSoundAsset soundIdle; // offset 0x8, size 0x74
    class zSoundAsset soundHit; // offset 0x7C, size 0x74
    class zSoundAsset soundSwitch; // offset 0xF0, size 0x74
    class zFXScript * idleFX; // offset 0x164, size 0x4
    class zFXScript * hitFX; // offset 0x168, size 0x4
    class zFXScript * switchFX; // offset 0x16C, size 0x4
};
// total size: 0x160
class zCarryableObjectAsset : public Carryable_Object {};
// total size: 0x160
class Carryable_Object : public xDynAsset {
    // Members
    class xEntAsset EntAsset; // offset 0x20, size 0x100
    class xSimpleObjAssetStruct simpObjAsset; // offset 0x120, size 0x18
    class uid Property; // offset 0x138, size 0x8
    bool PersistentRespawn; // offset 0x140, size 0x1
    bool pad1; // offset 0x141, size 0x1
    bool pad2; // offset 0x142, size 0x1
    bool pad3; // offset 0x143, size 0x1
    class uid Carryable_Object_Animations; // offset 0x148, size 0x8
    class LinkAsset EventLinksNew; // offset 0x150, size 0x8
};
// total size: 0x18
class xSimpleObjAssetStruct {
    // Members
    class uid Destructible; // offset 0x0, size 0x8
    float AnimationSpeed; // offset 0x8, size 0x4
    unsigned int InitialState; // offset 0xC, size 0x4
    unsigned char Collision; // offset 0x10, size 0x1
    unsigned char flags; // offset 0x11, size 0x1
};
// total size: 0x30
class zCarryableProperty : public xDynAsset {
    // Members
    unsigned long long shrapnelID; // offset 0x20, size 0x8
    unsigned int animCode; // offset 0x28, size 0x4
    class @class flags; // offset 0x2C, size 0x4
};
// total size: 0x4
class @class {
    // Members
    bool destroyDrop; // offset 0x0, size 0x1
    bool pad1; // offset 0x1, size 0x1
    bool pad2; // offset 0x2, size 0x1
    bool pad3; // offset 0x3, size 0x1
};
// total size: 0x24
class xParabola {
    // Members
    class xVec3 initPos; // offset 0x0, size 0xC
    class xVec3 initVel; // offset 0xC, size 0xC
    float gravity; // offset 0x18, size 0x4
    float minTime; // offset 0x1C, size 0x4
    float maxTime; // offset 0x20, size 0x4
};
// total size: 0x18
class xFXRibbon {
    // Members
    float alphaModifier; // offset 0x0, size 0x4
    float texture_offset; // offset 0x4, size 0x4
    float texture_increment_scale; // offset 0x8, size 0x4
    class ImmediatePrototypeEntity * entity; // offset 0xC, size 0x4
    class activity_data * act; // offset 0x10, size 0x4
    class config_type * cfg; // offset 0x14, size 0x4
};
// total size: 0x18
class ImmediatePrototypeEntity : public Entity {
    // Members
    int memSize; // offset 0x10, size 0x4
    int geomCount; // offset 0x14, size 0x4
};
// total size: 0xA8
class activity_data {
    // Members
    class xFXRibbon * owner; // offset 0x0, size 0x4
    class activity_data * * position; // offset 0x4, size 0x4
    class tier_queue joints; // offset 0x8, size 0x90
    int curve_index; // offset 0x98, size 0x4
    float ilife; // offset 0x9C, size 0x4
    unsigned int mtime; // offset 0xA0, size 0x4
    unsigned int mlife; // offset 0xA4, size 0x4
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
// total size: 0x28
class config_type {
    // Members
    float life_time; // offset 0x0, size 0x4
    unsigned int blend_src; // offset 0x4, size 0x4
    unsigned int blend_dst; // offset 0x8, size 0x4
    float pivot; // offset 0xC, size 0x4
    int flags; // offset 0x10, size 0x4
    class curve_node * curve; // offset 0x14, size 0x4
    int curve_size; // offset 0x18, size 0x4
    unsigned long long entity; // offset 0x20, size 0x8
};
// total size: 0xC
class curve_node {
    // Members
    float time; // offset 0x0, size 0x4
    class xColor_tag color; // offset 0x4, size 0x4
    float scale; // offset 0x8, size 0x4
};
// total size: 0x1D98
class zNPCEve : public zNPCBase {
    // Members
    class zPlayerInput * pad; // offset 0x7C, size 0x4
    class zUIImage * markerGreen; // offset 0x80, size 0x4
    class zUIImage * markerRed; // offset 0x84, size 0x4
    class zUIImage * markerIRWarning; // offset 0x88, size 0x4
    class zUIImage * markerIRError; // offset 0x8C, size 0x4
    class zUIImage * markerHealth; // offset 0x90, size 0x4
    class zUIImage * view; // offset 0x94, size 0x4
    class zUIImage * saved_markerGreen; // offset 0x98, size 0x4
    class zUIImage * saved_markerRed; // offset 0x9C, size 0x4
    class zUIImage * saved_view; // offset 0xA0, size 0x4
    bool uiInit; // offset 0xA4, size 0x1
    class zTarget * target; // offset 0xA8, size 0x4
    bool initMat; // offset 0xAC, size 0x1
    class xMat4x3 oMat; // offset 0xB0, size 0x40
    class xVec3 oldAt; // offset 0xF0, size 0xC
    class xMat4x3 gunBarrelMatrix; // offset 0xFC, size 0x40
    int defaultCollisionFilter; // offset 0x13C, size 0x4
    int noPlayerCollisionFilter; // offset 0x140, size 0x4
    class zLaser laser[16]; // offset 0x148, size 0x1C00
    class zRuntimeEntityCreateInfo laserCI; // offset 0x1D48, size 0x8
    class zRuntimeEntityCreateInfo laserUpgradedCI; // offset 0x1D50, size 0x8
    class hkBaseObject * laserFilterList[2]; // offset 0x1D58, size 0x8
    float laserHoldFireTimer; // offset 0x1D60, size 0x4
    float laserRapidFireTimer; // offset 0x1D64, size 0x4
    float updateDelay; // offset 0x1D68, size 0x4
    bool canAutoHit; // offset 0x1D6C, size 0x1
    class xEnt * autoTargetEnt; // offset 0x1D70, size 0x4
    float autoTargetCubeTimer; // offset 0x1D74, size 0x4
    unsigned int currentAutoTargetProjectileID; // offset 0x1D78, size 0x4
    unsigned int lastAutoTargetProjectileID; // offset 0x1D7C, size 0x4
    class xVec3 autoTargetCubeDir; // offset 0x1D80, size 0xC
    class zPlayer * attachedPlayer; // offset 0x1D8C, size 0x4
    bool startStorkJump; // offset 0x1D90, size 0x1
    bool landStorkJump; // offset 0x1D91, size 0x1
    bool landHardStorkJump; // offset 0x1D92, size 0x1
    bool hitDropStorkJump; // offset 0x1D93, size 0x1
    bool inStorkJump; // offset 0x1D94, size 0x1
    bool storkJumpReady; // offset 0x1D95, size 0x1
};
// total size: 0x1C0
class zLaser {
    // Members
    class xEnt * owner; // offset 0x0, size 0x4
    class zTarget * target; // offset 0x4, size 0x4
    int targetFilterListSize; // offset 0x8, size 0x4
    class hkBaseObject * * targetFilterList; // offset 0xC, size 0x4
    int filterListSize; // offset 0x10, size 0x4
    class xBase * filterList[4]; // offset 0x14, size 0x10
    class xEnt * targetEnt; // offset 0x24, size 0x4
    class LaserInfo basicLI; // offset 0x28, size 0x1C
    class LaserInfo upgradedLI; // offset 0x44, size 0x1C
    float upgradeTimer; // offset 0x60, size 0x4
    bool upgraded; // offset 0x64, size 0x1
    bool permanentlyUpgraded; // offset 0x65, size 0x1
    class zRunEntLaser laserBase; // offset 0x68, size 0x158
};
// total size: 0x1C
class LaserInfo {
    // Members
    class zRuntimeEntityCreateInfo * laserCI; // offset 0x0, size 0x4
    float damage; // offset 0x4, size 0x4
    float damageRadius; // offset 0x8, size 0x4
    float speed; // offset 0xC, size 0x4
    float lifeSpan; // offset 0x10, size 0x4
    enum zHitSource hitSource; // offset 0x14, size 0x4
    enum eLaserType type; // offset 0x18, size 0x4
};
// total size: 0x8
class zRuntimeEntityCreateInfo {
    // Members
    class RuntimeEntityAsset * reAsset; // offset 0x0, size 0x4
    class xBase * owner; // offset 0x4, size 0x4
};
// total size: 0xB0
class RuntimeEntityAsset {
    // Members
    class ModelInstanceAsset ModelInstance; // offset 0x0, size 0x40
    class uid RibbonEffectID; // offset 0x40, size 0x8
    class uid ActiveFXScriptID; // offset 0x48, size 0x8
    class uid SpawnFXScriptID; // offset 0x50, size 0x8
    class uid DeathFXScriptID; // offset 0x58, size 0x8
    class uid PingFXScriptID; // offset 0x60, size 0x8
    class uid TimeoutFXScriptID; // offset 0x68, size 0x8
    class SoundSourcesPhysics SoundsPhysics; // offset 0x70, size 0x38
};
enum eLaserType {
    eLaserType_Default = 0,
    eLaserType_Player_Basic = 1,
    eLaserType_Player_Upgraded = 2,
    eLaserType_Count = 3,
};
// total size: 0x158
class zRunEntLaser : public zRuntimeEntity {
    // Members
    class xMat4x3 currentMat; // offset 0x3C, size 0x40
    class xVec3 startPos; // offset 0x7C, size 0xC
    class xVec3 targetDir; // offset 0x88, size 0xC
    class xVec3 dPos; // offset 0x94, size 0xC
    float totalLaserTime; // offset 0xA0, size 0x4
    float curLaserTime; // offset 0xA4, size 0x4
    float speed; // offset 0xA8, size 0x4
    float lifeSpan; // offset 0xAC, size 0x4
    float damage; // offset 0xB0, size 0x4
    float damageRadius; // offset 0xB4, size 0x4
    enum zHitSource hitSource; // offset 0xB8, size 0x4
    enum zHitTarget hitTarget; // offset 0xBC, size 0x4
    enum eLaserType type; // offset 0xC0, size 0x4
    unsigned int killedFrameDelay; // offset 0xC4, size 0x4
    bool targetDirSet; // offset 0xC8, size 0x1
    bool startPosSet; // offset 0xC9, size 0x1
    bool lifeSpanSet; // offset 0xCA, size 0x1
    bool alwaysKillOnHit; // offset 0xCB, size 0x1
    int filterSize; // offset 0xCC, size 0x4
    class xBase * filterList[4]; // offset 0xD0, size 0x10
    class zRuntimeEntityFX fxComp; // offset 0xE0, size 0x78
};
// total size: 0x40
class zRuntimeEntity : public xBase {
    // Members
    class zRuntimeEntity * next; // offset 0x20, size 0x4
    class zRuntimeEntity * prev; // offset 0x24, size 0x4
    unsigned int refCount; // offset 0x28, size 0x4
    class xBase * owner; // offset 0x2C, size 0x4
    class RuntimeEntityAsset * asset; // offset 0x30, size 0x4
    class zRuntimeEntityFX * FX; // offset 0x34, size 0x4
    unsigned int isAlive : 1; // offset 0x38, size 0x4, bit offset 0
    unsigned int updateWhilePaused : 1; // offset 0x38, size 0x4, bit offset 1
    unsigned int updateInCinematic : 1; // offset 0x38, size 0x4, bit offset 2
    unsigned int pad : 29; // offset 0x38, size 0x4, bit offset 3
};
// total size: 0x78
class zRuntimeEntityFX {
    // Members
    bool active; // offset 0x0, size 0x1
    class zRuntimeEntity * owner; // offset 0x4, size 0x4
    class zRibbon * ribbonEffect; // offset 0x8, size 0x4
    class xFXRibbon * ribbon; // offset 0xC, size 0x4
    class zFXScriptSpawnPt * activeFXAsset; // offset 0x10, size 0x4
    class zFXScriptSpawnPt * spawnFXAsset; // offset 0x14, size 0x4
    class zFXScriptSpawnPt * deathFXAsset; // offset 0x18, size 0x4
    class zFXScriptSpawnPt * pingFXAsset; // offset 0x1C, size 0x4
    class zFXScriptSpawnPt * timeoutFXAsset; // offset 0x20, size 0x4
    class zFXScriptSpawnPt * activeFXScriptSpawnPoint; // offset 0x24, size 0x4
    class zFXScriptSpawnPt * spawnFXScriptSpawnPoint; // offset 0x28, size 0x4
    class zFXScriptSpawnPt * deathFXScriptSpawnPoint; // offset 0x2C, size 0x4
    class zFXScriptSpawnPt * pingFXScriptSpawnPoint; // offset 0x30, size 0x4
    class zFXScriptSpawnPt * timeoutFXScriptSpawnPoint; // offset 0x34, size 0x4
    class xMat4x3 ownerInitialMat; // offset 0x38, size 0x40
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
// total size: 0x9C
class zWalleProjectileManager {
    // Members
    class zWallePlayer * pPlayer; // offset 0x0, size 0x4
    class zProjectileController * m_ProjectileGenerationControllerCache; // offset 0x4, size 0x4
    class zProjectileLaunchData m_ProjectileLaunchData; // offset 0x8, size 0x3C
    unsigned int m_projectileIDArr[3]; // offset 0x44, size 0xC
    unsigned int m_droppedProjectileIDArr[3]; // offset 0x50, size 0xC
    class hkpConstraintInstance * m_projectileConstraints[2]; // offset 0x5C, size 0x8
    class hkBaseObject * m_projectileFilterList[6]; // offset 0x64, size 0x18
    float m_timeConstraintsBroken[2]; // offset 0x7C, size 0x8
    int m_projectileFilterListSize; // offset 0x84, size 0x4
    int m_numProjectiles; // offset 0x88, size 0x4
    int m_numProjectileConstraints; // offset 0x8C, size 0x4
    int m_numDroppedProjectiles; // offset 0x90, size 0x4
    enum ezWalleProjectileManagerState eState; // offset 0x94, size 0x4
    bool lockTargeting : 1; // offset 0x98, size 0x1, bit offset 0
    int pad : 7; // offset 0x98, size 0x4, bit offset 1
};
// total size: 0x40
class zProjectileController {
    // Members
    enum eProjectileType projectileType; // offset 0x0, size 0x4
    enum eProjectileTrajectoryType initialTrajectoryType; // offset 0x4, size 0x4
    bool updateInCinematic : 1; // offset 0x8, size 0x1, bit offset 0
    bool pingOnContact : 1; // offset 0x8, size 0x1, bit offset 1
    float timeToStartFXPriorToTimeout; // offset 0xC, size 0x4
    float timeToTarget; // offset 0x10, size 0x4
    float mass; // offset 0x14, size 0x4
    float friction; // offset 0x18, size 0x4
    float elasticity; // offset 0x1C, size 0x4
    float killWithTimeAlive; // offset 0x20, size 0x4
    float killWithTimeInAir; // offset 0x24, size 0x4
    float killWithLifeTimeDrop; // offset 0x28, size 0x4
    class xVec3 ribbonOffset; // offset 0x2C, size 0xC
    bool checkStatDynColl : 1; // offset 0x38, size 0x1, bit offset 0
    bool checkPlayerColl : 1; // offset 0x38, size 0x1, bit offset 1
    bool checkNPCColl : 1; // offset 0x38, size 0x1, bit offset 2
    bool checkPlayerCombat : 1; // offset 0x38, size 0x1, bit offset 3
};
enum eProjectileType {
    eProjectileType_Unknown = 4294967295,
    eProjectileType_First = 0,
    eProjectileType_DefaultSphere_Straight = 0,
    eProjectileType_DefaultSphere_Lob = 1,
    eProjectileType_DefaultSphere_Static = 2,
    eProjectileType_Chaser_Lob = 3,
    eProjectileType_Chaser_Straight = 4,
    eProjectileType_GenericFloatingItem = 5,
    eProjectileType_RangerCat_Hairball = 6,
    eProjectileType_RangerLobster_Rubberband = 7,
    eProjectileType_TrapProjectile = 8,
    eProjectileType_WALLE_Begin = 9,
    eProjectileType_WALLE_Cube_Heavy = 9,
    eProjectileType_WALLE_Cube_Magnetic_Attractive = 10,
    eProjectileType_WALLE_Cube_Energy = 11,
    eProjectileType_WALLE_Cube_Basic = 12,
    eProjectileType_WALLE_Cube_Heavy_Multiplayer = 13,
    eProjectileType_WALLE_Cube_Heavy_Flag_Red = 14,
    eProjectileType_WALLE_Cube_Heavy_Flag_Blue = 15,
    eProjectileType_WALLE_Cube_Super_Heavy = 16,
    eProjectileType_WALLE_Cube_Magnetic_Repulsive = 17,
    eProjectileType_WALLE_Cube_Super_Energy = 18,
    eProjectileType_WALLE_Cube_Super_Heavy_Cluster_Bomb = 19,
    eProjectileType_WALLE_End = 19,
    eProjectileType_Eve_Laser_Basic = 20,
    eProjectileType_Eve_Laser_Power_Up_C = 21,
    eProjectileType_Eve_Laser_Reflect = 22,
    eProjectileTypeCount = 23,
    eProjectileTypeForceInt = 2147483647,
};
enum eProjectileTrajectoryType {
    eProjectileTrajectoryType_Unknown = 4294967295,
    eProjectileTrajectoryType_Straight = 0,
    eProjectileTrajectoryType_Parabola = 1,
    eProjectileTrajectoryType_TrackTarget = 2,
    eProjectileTrajectoryType_Hover = 3,
    eProjectileTrajectoryType_WALLE_Cube_Heavy = 4,
    eProjectileTrajectoryType_WALLE_Cube_Magnetic = 5,
    eProjectileTrajectoryType_WALLE_Cube_Battery = 6,
    eProjectileTrajectoryType_WALLE_Cube_Basic = 7,
    eProjectileTrajectoryType_Eve_Laser = 8,
    eProjectileTrajectoryType_Count = 9,
};
// total size: 0x3C
class zProjectileLaunchData {
    // Members
    class xVec3 launchPos; // offset 0x0, size 0xC
    class xVec3 launchDir; // offset 0xC, size 0xC
    float parabolaDuration; // offset 0x18, size 0x4
    float parabolaSpeed; // offset 0x1C, size 0x4
    class xEnt * target; // offset 0x20, size 0x4
    class ModelInstanceAsset * model; // offset 0x24, size 0x4
    class xEnt * driver; // offset 0x28, size 0x4
    class xEnt * attachedEnt; // offset 0x2C, size 0x4
    int attachedEntBone; // offset 0x30, size 0x4
    class xMat4x3 * mat; // offset 0x34, size 0x4
    enum eHavok_Mode havokMotion; // offset 0x38, size 0x4
};
enum eHavok_Mode {
    KEYFRAME_HAVOK = 0,
    NORMAL_HAVOK = 1,
    CONSTRAINED_HAVOK = 2,
    NUM_WALLE_CUBE_TRAJECTORY_MODES = 3,
};
enum ezWalleProjectileManagerState {
    STATE_NONE = 0,
    STATE_THROWING = 1,
    NUM_STATES = 2,
};
enum zWallePlayerRigidBodyType {
    ezWallePlayerRigidBodyType_Cube = 0,
    ezWallePlayerRigidBodyType_Ball = 1,
    ezWallePlayerRigidBodyType_Count = 2,
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
class zSoundProgAsset {
    // Members
    class Event * m_pProgAssetEvent; // offset 0x4, size 0x4
    class FMOD_VECTOR m_pos; // offset 0x8, size 0xC
    char * m_pStrProject; // offset 0x14, size 0x4
    char * m_pStrGroup; // offset 0x18, size 0x4
    char * m_pStrEvent; // offset 0x1C, size 0x4
};
// total size: 0x20
class DynamicParamRPM : public DynamicParam {
    // Members
    float m_accel; // offset 0x18, size 0x4
    float m_deAccel; // offset 0x1C, size 0x4
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
// total size: 0x1
class EventParameter {};
// total size: 0x18
class DynamicParamLoad : public DynamicParam {};
// total size: 0x88
class zPlayerHeadTracker {
    // Members
    class xVec3 lastAtVector; // offset 0x0, size 0xC
    class xVec3 lastSetAtVector; // offset 0xC, size 0xC
    class zPlayer * player; // offset 0x18, size 0x4
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
    float currentRoll; // offset 0x70, size 0x4
    float rollMin; // offset 0x74, size 0x4
    float rollMax; // offset 0x78, size 0x4
    float distanceThreshold; // offset 0x7C, size 0x4
    bool stopTrackingWhenClipped : 1; // offset 0x80, size 0x1, bit offset 0
    bool usePlayerFrame : 1; // offset 0x80, size 0x1, bit offset 1
    unsigned int pad : 30; // offset 0x80, size 0x4, bit offset 2
    enum eTrackingState trackingState; // offset 0x84, size 0x4
};
enum eTrackingState {
    TRACKING_OFF = 0,
    TRACKING_BEGIN_LOOK_AT = 1,
    TRACKING_LOOK_AT = 2,
    TRACKING_BLEND_LOOK_AT = 3,
    TRACKING_END_LOOK_AT = 4,
    TRACKING_COMPOUND_ORIENTATION = 5,
    numTrackingState = 6,
};
// total size: 0x10
class Quaternion {
    // Members
    class Vector4 v; // offset 0x0, size 0x10
};
// total size: 0x8
class node_base {
    // Members
    class node_base * prev; // offset 0x0, size 0x4
    class node_base * next; // offset 0x4, size 0x4
};
// total size: 0x20
class pool_list_base {
    // Members
    int _size; // offset 0x0, size 0x4
    int _max_size; // offset 0x4, size 0x4
    class node_base head; // offset 0x8, size 0x8
    class node_base tail; // offset 0x10, size 0x8
    class node_base * stack; // offset 0x18, size 0x4
    void * buffer; // offset 0x1C, size 0x4
};
// total size: 0x2800
class xAnimWorkBlock {
    // Members
    class xQuat q[256]; // offset 0x0, size 0x1000
    class xVec3 t[256]; // offset 0x1000, size 0xC00
    class xVec3 s[256]; // offset 0x1C00, size 0xC00
};
// total size: 0x1008
class zQueue {
    // Members
    int first; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    class xAnimVFXPair data[128]; // offset 0x8, size 0x1000
};
// total size: 0x20
class xAnimVFXPair : public xAnimPair {
    // Members
    class zFXScriptSpawnPt * spawnPt[4]; // offset 0x10, size 0x10
};
// total size: 0x10
class xAnimPair {
    // Members
    class xEnt * owner; // offset 0x0, size 0x4
    class xAnimState * state; // offset 0x4, size 0x4
    class SurfaceGamePlay * lastSurface; // offset 0x8, size 0x4
};
// total size: 0x1008
class zQueue {
    // Members
    int first; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    class xAnimSFXPair data[128]; // offset 0x8, size 0x1000
};
// total size: 0x20
class xAnimSFXPair : public xAnimPair {
    // Members
    class zSoundAsset * pSoundAssets[4]; // offset 0x10, size 0x10
};
// total size: 0x460
class zSoundModule : public Module {
    // Members
    float masterVolumeMusic; // offset 0x98, size 0x4
    float masterVolumeSFX; // offset 0x9C, size 0x4
    float masterVolumeCine; // offset 0xA0, size 0x4
    bool masterVolumeChanged; // offset 0xA4, size 0x1
    class SoundCategoryFadeUp categoryFadeUpTimes[7]; // offset 0xA8, size 0x8C
    char spuProgram[256]; // offset 0x134, size 0x100
    char spuProgramMpeg[256]; // offset 0x234, size 0x100
    char mediaPath[256]; // offset 0x334, size 0x100
    class zSoundProgMgr soundProgAssetManager; // offset 0x434, size 0x28
    void * soundMemory; // offset 0x45C, size 0x4
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
// total size: 0x14
class SoundCategoryFadeUp {
    // Members
    float fadeUpTime; // offset 0x0, size 0x4
    float currentTime; // offset 0x4, size 0x4
    float currentVolume; // offset 0x8, size 0x4
    float finalVolume; // offset 0xC, size 0x4
    char * categoryName; // offset 0x10, size 0x4
};
// total size: 0x28
class zSoundProgMgr {
    // Members
    class zQueue sound_prog_queue; // offset 0x0, size 0x28
};
// total size: 0x28
class zQueue {
    // Members
    int first; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    class zSoundProgAsset * data[8]; // offset 0x8, size 0x20
};
// total size: 0x14
class xAssetTypeIDEntry {
    // Members
    char * name; // offset 0x0, size 0x4
    unsigned int type; // offset 0x4, size 0x4
    bool isBaseAsset; // offset 0x8, size 0x1
    void * (* assetReadFunc)(void * userdata, unsigned long long aid, void * indata, unsigned int insize, unsigned int * outsize); // offset 0xC, size 0x4
    void (* assetUnloadFunc)(void * userdata, unsigned long long aid); // offset 0x10, size 0x4
};
// total size: 0x68
class st_FILELOADINFO {
    // Members
    void (* destroy)(class st_FILELOADINFO *); // offset 0x0, size 0x4
    int (* readBytes)(class st_FILELOADINFO * load, char * buf, int n); // offset 0x4, size 0x4
    int (* readMShorts)(class st_FILELOADINFO * load, short * buf, int n); // offset 0x8, size 0x4
    int (* readMLongs)(class st_FILELOADINFO * load, int * buf, int n); // offset 0xC, size 0x4
    int (* readMFloats)(class st_FILELOADINFO * load, float * buf, int n); // offset 0x10, size 0x4
    int (* readMDoubles)(class st_FILELOADINFO * load, double * buf, int n); // offset 0x14, size 0x4
    int (* readIShorts)(class st_FILELOADINFO * load, short * buf, int n); // offset 0x18, size 0x4
    int (* readILongs)(class st_FILELOADINFO * load, int * buf, int n); // offset 0x1C, size 0x4
    int (* readIFloats)(class st_FILELOADINFO * load, float * buf, int n); // offset 0x20, size 0x4
    int (* readIDoubles)(class st_FILELOADINFO * load, double * buf, int n); // offset 0x24, size 0x4
    int (* skipBytes)(class st_FILELOADINFO * load, int n); // offset 0x28, size 0x4
    int (* seekSpot)(class st_FILELOADINFO * load, int n); // offset 0x2C, size 0x4
    void (* setDoubleBuf)(class st_FILELOADINFO *, char * dblbuf, int bufsize); // offset 0x30, size 0x4
    void (* discardDblBuf)(class st_FILELOADINFO *); // offset 0x34, size 0x4
    int (* asyncIRead)(class st_FILELOADINFO * load, int offset, char * buf, int elesize, int n); // offset 0x38, size 0x4
    int (* asyncMRead)(class st_FILELOADINFO * load, int offset, char * buf, int elesize, int n); // offset 0x3C, size 0x4
    enum en_BIO_ASYNC_ERRCODES (* asyncReadStatus)(class st_FILELOADINFO * load); // offset 0x40, size 0x4
    unsigned int lockid; // offset 0x44, size 0x4
    enum en_FIOERRCODES error; // offset 0x48, size 0x4
    unsigned int basesector; // offset 0x4C, size 0x4
    void * privdata; // offset 0x50, size 0x4
    void * xtradata; // offset 0x54, size 0x4
    void * asyndata; // offset 0x58, size 0x4
    int filesize; // offset 0x5C, size 0x4
    int remain; // offset 0x60, size 0x4
    int position; // offset 0x64, size 0x4
};
enum en_BIO_ASYNC_ERRCODES {
    BINIO_ASYNC_FAIL = 4294967295,
    BINIO_ASYNC_NOOP = 0,
    BINIO_ASYNC_INPROG = 1,
    BINIO_ASYNC_DONE = 2,
    BINIO_ASYNC_FORCEENUMSIZEINT = 2147483647,
};
enum en_FIOERRCODES {
    FIOERR_NONE = 0,
    FIOERR_READFAIL = 1,
    FIOERR_WRITEFAIL = 2,
    FIOERR_SEEKFAIL = 3,
    FIOERR_USERABORT = 4,
};
// total size: 0x114
class tag_xFile {
    // Members
    char relname[32]; // offset 0x0, size 0x20
    class tag_iFile ps; // offset 0x20, size 0xF0
    void * user_data; // offset 0x110, size 0x4
};
// total size: 0xF0
class tag_iFile {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    char path[128]; // offset 0x4, size 0x80
    int fd; // offset 0x84, size 0x4
    class DVDFileInfo file; // offset 0x88, size 0x3C
    void (* cb)(class tag_xFile * file); // offset 0xC4, size 0x4
    int akey; // offset 0xC8, size 0x4
    int buffer[8]; // offset 0xCC, size 0x20
    int real_pos; // offset 0xEC, size 0x4
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
// total size: 0x3C
class st_BINIO_XTRADATA {
    // Members
    char * dbl_buf; // offset 0x0, size 0x4
    int dblbuf_size; // offset 0x4, size 0x4
    int dbl_beg; // offset 0x8, size 0x4
    int dbl_end; // offset 0xC, size 0x4
    int dbl_amt; // offset 0x10, size 0x4
    unsigned int fpos; // offset 0x14, size 0x4
    char * asyn_data; // offset 0x18, size 0x4
    int asyn_amt; // offset 0x1C, size 0x4
    int asyn_elesize; // offset 0x20, size 0x4
    int asyn_ismot; // offset 0x24, size 0x4
    enum en_BIO_ASYNC_ERRCODES asyn_status; // offset 0x28, size 0x4
    unsigned int pad[3]; // offset 0x2C, size 0xC
    int gcaskey; // offset 0x38, size 0x4
};
enum XFILE_READSECTOR_STATUS {
    XFILE_RDSTAT_NOOP = 0,
    XFILE_RDSTAT_INPROG = 1,
    XFILE_RDSTAT_DONE = 2,
    XFILE_RDSTAT_FAIL = 3,
    XFILE_RDSTAT_QUEUED = 4,
    XFILE_RDSTAT_EXPIRED = 5,
};
// total size: 0x18
class xOGSchema : public Schema {};
// total size: 0x8
class SchemaRegistrator {
    // Members
    class Schema * schema; // offset 0x0, size 0x4
    class SchemaRegistrator * next; // offset 0x4, size 0x4
};
// total size: 0xD0
class xBSP : public zEnt {
    // Members
    int collEntCnt; // offset 0xBC, size 0x4
    class xCollisionEnt * * pCollEnt; // offset 0xC0, size 0x4
    unsigned char visibilityCount : 8; // offset 0xC4, size 0x1, bit offset 0
    unsigned char prevVisibilityCount : 8; // offset 0xC5, size 0x1, bit offset 0
    bool alwaysVisible : 1; // offset 0xC6, size 0x1, bit offset 0
    bool alwaysCollide : 1; // offset 0xC6, size 0x1, bit offset 1
    int __pad__ : 14; // offset 0xC4, size 0x4, bit offset 18
    class xGroup * referenceGroup; // offset 0xC8, size 0x4
};
// total size: 0xB8
class xCollisionEnt : public xEnt {};
// total size: 0x38
class xGroup : public xBase {
    // Members
    class xGroupAsset * asset; // offset 0x20, size 0x4
    class xBase * * item; // offset 0x24, size 0x4
    unsigned int last_index; // offset 0x28, size 0x4
    unsigned int ptr_last_index; // offset 0x2C, size 0x4
    int flg_group; // offset 0x30, size 0x4
};
// total size: 0x18
class xGroupAsset : public xBaseAsset {
    // Members
    unsigned short itemCount; // offset 0x10, size 0x2
    unsigned short groupFlags; // offset 0x12, size 0x2
};
// total size: 0x208
class zBreakawayPlatform : public xBase {
    // Members
    class zBreakawayPlatformAsset * asset; // offset 0x20, size 0x4
    class zCollidable collEnt; // offset 0x28, size 0xC0
    class xGroup * breakawayGroup; // offset 0xE8, size 0x4
    class xMovePoint * firstMP; // offset 0xEC, size 0x4
    float moveSpeed; // offset 0xF0, size 0x4
    class xEntMPData mpData; // offset 0xF4, size 0x44
    class xEnt * driver; // offset 0x138, size 0x4
    class xVec3 refPointLocal; // offset 0x13C, size 0xC
    class xVec3 prevRefPointWorld; // offset 0x148, size 0xC
    class xQuat prevDrvRot; // offset 0x154, size 0x10
    bool drivenbyOn; // offset 0x164, size 0x1
    bool mounted; // offset 0x165, size 0x1
    float delay; // offset 0x168, size 0x4
    bool stopped; // offset 0x16C, size 0x1
    class xMat4x3 mat; // offset 0x170, size 0x40
    class xModelInstance * model; // offset 0x1B0, size 0x4
    bool visible; // offset 0x1B4, size 0x1
    int visDelay; // offset 0x1B8, size 0x4
    unsigned int breakawayState; // offset 0x1BC, size 0x4
    class xEnt * mounter; // offset 0x1C0, size 0x4
    bool breakable; // offset 0x1C4, size 0x1
    float timer; // offset 0x1C8, size 0x4
    float speed; // offset 0x1CC, size 0x4
    float accel; // offset 0x1D0, size 0x4
    float dispDist; // offset 0x1D4, size 0x4
    class xVec3 dispDir; // offset 0x1D8, size 0xC
    float angle; // offset 0x1E4, size 0x4
    float angularVel; // offset 0x1E8, size 0x4
    class xVec3 rotateAxis; // offset 0x1EC, size 0xC
    float angularParam; // offset 0x1F8, size 0x4
    float angularParamSpeed; // offset 0x1FC, size 0x4
    bool flip; // offset 0x200, size 0x1
    bool buoyancy; // offset 0x201, size 0x1
    float scale; // offset 0x204, size 0x4
};
// total size: 0x100
class zBreakawayPlatformAsset : public xBaseAsset {
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
    bool FakeBuoyancy; // offset 0xF0, size 0x1
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
// total size: 0xC0
class zCollidable : public xEnt {
    // Members
    class xBase * owner; // offset 0xB8, size 0x4
};
// total size: 0x48
class xMovePoint : public xBase {
    // Members
    class xMovePointAsset * asset; // offset 0x20, size 0x4
    class xVec3 * pos; // offset 0x24, size 0x4
    class xMovePoint * * children; // offset 0x28, size 0x4
    class xMovePoint * * parents; // offset 0x2C, size 0x4
    unsigned int numParents; // offset 0x30, size 0x4
    unsigned int nodeWeightSum; // offset 0x34, size 0x4
    class xSpline3 * spl; // offset 0x38, size 0x4
    unsigned char on; // offset 0x3C, size 0x1
    unsigned char bezIndex; // offset 0x3D, size 0x1
    unsigned char visited; // offset 0x3E, size 0x1
    unsigned char pad; // offset 0x3F, size 0x1
    class xMovePoint * lifoNext; // offset 0x40, size 0x4
};
// total size: 0x38
class xMovePointAsset : public xBaseAsset {
    // Members
    class vec3 Pos; // offset 0x10, size 0xC
    unsigned short Weight; // offset 0x1C, size 0x2
    unsigned short flags; // offset 0x1E, size 0x2
    float delay; // offset 0x20, size 0x4
    class __Connections__ Connections; // offset 0x24, size 0x8
    class LinkAsset EventLinksNew; // offset 0x2C, size 0x8
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
// total size: 0x44
class xEntMPData {
    // Members
    class xEntSpeedData speed_data; // offset 0x0, size 0xC
    float curdist; // offset 0xC, size 0x4
    class xMovePoint * dest; // offset 0x10, size 0x4
    class xMovePoint * src; // offset 0x14, size 0x4
    class xSpline3 * spl; // offset 0x18, size 0x4
    float dist; // offset 0x1C, size 0x4
    unsigned int padalign; // offset 0x20, size 0x4
    class xQuat aquat; // offset 0x24, size 0x10
    class xQuat bquat; // offset 0x34, size 0x10
};
// total size: 0xC
class xEntSpeedData {
    // Members
    float speed; // offset 0x0, size 0x4
    float acceleration; // offset 0x4, size 0x4
    float dest_speed; // offset 0x8, size 0x4
};
// total size: 0x1A0
class zFloatingCollectible : public xBase {
    // Members
    class zFloatingCollectibleAsset * asset; // offset 0x20, size 0x4
    class ModelHelperInfo * modelRenderInfo; // offset 0x24, size 0x4
    class xMat4x3 matrix; // offset 0x28, size 0x40
    class xVec3 position; // offset 0x68, size 0xC
    class xVec3 dPos; // offset 0x74, size 0xC
    class xVec3 oldPos; // offset 0x80, size 0xC
    float floatOffset; // offset 0x8C, size 0x4
    bool floatUp; // offset 0x90, size 0x1
    class xEnt * collector; // offset 0x94, size 0x4
    bool toBeCollected; // offset 0x98, size 0x1
    bool reachedCollector; // offset 0x99, size 0x1
    bool collected; // offset 0x9A, size 0x1
    bool visible; // offset 0x9B, size 0x1
    float collectDist2; // offset 0x9C, size 0x4
    float collectVel; // offset 0xA0, size 0x4
    class zFXScriptSpawnPt * fxSpawnPtIdle; // offset 0xA4, size 0x4
    class zFXScriptSpawnPt * fxSpawnPtIdle_Asset; // offset 0xA8, size 0x4
    class zFXScriptSpawnPt * fxSpawnPtCollect; // offset 0xAC, size 0x4
    class zFXScriptSpawnPt * fxSpawnPtCollect_Asset; // offset 0xB0, size 0x4
    float boundRadius; // offset 0xB4, size 0x4
    class xVec3 prevTargetDirection; // offset 0xB8, size 0xC
    class ShadowSimpleCache simpleShadowCache; // offset 0xC4, size 0xCC
    class xEnt * driver; // offset 0x190, size 0x4
    class xVec3 driveOffset; // offset 0x194, size 0xC
};
// total size: 0x90
class zFloatingCollectibleAsset : public xBaseAsset {
    // Members
    class LinkAsset EventLinksNew; // offset 0x10, size 0x8
    class ModelInstanceAsset ModelInstance; // offset 0x20, size 0x40
    class vec3 Position; // offset 0x60, size 0xC
    float CollectDistance; // offset 0x6C, size 0x4
    class uid VFX; // offset 0x70, size 0x8
    class uid VFXCollect; // offset 0x78, size 0x8
    enum eFloatingItemType ItemType; // offset 0x80, size 0x4
    unsigned char DriveType; // offset 0x84, size 0x1
    class @class __anon; // offset 0x88, size 0x8
    class DriveTypeNone_Type DrivenByNone; // offset 0x88, size 0x1
    class DriveTypeObject_Type DrivenByObject; // offset 0x88, size 0x8
};
enum eFloatingItemType {
    eFloatingItemType_HealthItem1 = 0,
    eFloatingItemType_HealthItem2 = 1,
    eFloatingItemType_HealthItem4 = 2,
    eFloatingItemType_FullHealthItem = 3,
    eFloatingItemType_MinigameItem = 4,
    eFloatingItemType_GameplayItem = 5,
    eFloatingItemType_MultiplayerItem = 6,
    eFloatingItemType_ScannableItem = 7,
    eFloatingItemType_WeaponUpgradeItem = 8,
    END_eFloatingItemType_ENUM = 9,
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
// total size: 0x110
class BSP : public xBaseAsset {
    // Members
    unsigned char flags; // offset 0x10, size 0x1
    unsigned char subtype; // offset 0x11, size 0x1
    unsigned char pad; // offset 0x12, size 0x1
    unsigned char moreFlags; // offset 0x13, size 0x1
    class uid Surface; // offset 0x18, size 0x8
    class Rotation3 orientation; // offset 0x20, size 0xC
    class vec3 pos; // offset 0x2C, size 0xC
    class vec3 scale; // offset 0x38, size 0xC
    class vec3 colorMult; // offset 0x44, size 0xC
    class ClearToOpaque ClearToOpaque; // offset 0x50, size 0x8
    class ModelInstanceAsset ModelInstance; // offset 0x60, size 0x40
    class uid AnimList; // offset 0xA0, size 0x8
    class PhysicsDataStruct PhysicsData; // offset 0xA8, size 0x48
    unsigned int Pad1; // offset 0xF0, size 0x4
    unsigned int Pad2; // offset 0xF4, size 0x4
    unsigned int Pad3; // offset 0xF8, size 0x4
    bool AlwaysVisible; // offset 0xFC, size 0x1
    bool AlwaysCollide; // offset 0xFD, size 0x1
    class uid ReferenceGroup; // offset 0x100, size 0x8
    class LinkAsset EventLinksNew; // offset 0x108, size 0x8
};
// total size: 0x4
class xOGEntityModelContext : public xOGEntityContext {
    // Members
    class xModelInstance * model; // offset 0x0, size 0x4
};
// total size: 0x1
class xOGEntityContext {};
// total size: 0xBC
class BSPEntity : public xOGEntityWithModel {};
// total size: 0xBC
class xOGEntityWithModel : public xOGEntity {
    // Members
    class Vector4 colorMultiplier; // offset 0x10, size 0x10
    class ModelInstanceArticle mModelArt; // offset 0x20, size 0x90
    class ModelHelperInfo * modelHelperInfo; // offset 0xB0, size 0x4
    int mMemSize; // offset 0xB4, size 0x4
    class xModelInstance * modelOG; // offset 0xB8, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    class hkpConvexShape * * m_data; // offset 0x0, size 0x4
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
    int * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
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
    class CollisionMeshBlobEntity * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    class xMat4x3 * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
enum eMemMgrTag {
    eMemMgrTag_2D = 0,
    eMemMgrTag_Anim = 1,
    eMemMgrTag_Audio = 2,
    eMemMgrTag_Camera = 3,
    eMemMgrTag_Cinematic = 4,
    eMemMgrTag_Components = 5,
    eMemMgrTag_ContextObjs = 6,
    eMemMgrTag_Destructible = 7,
    eMemMgrTag_Debug = 8,
    eMemMgrTag_DebugTweak = 9,
    eMemMgrTag_Decal = 10,
    eMemMgrTag_Duplicator = 11,
    eMemMgrTag_Event = 12,
    eMemMgrTag_FMV = 13,
    eMemMgrTag_FXActionLine = 14,
    eMemMgrTag_FXRibbon = 15,
    eMemMgrTag_Enemy = 16,
    eMemMgrTag_EnergyStream = 17,
    eMemMgrTag_EntityMisc = 18,
    eMemMgrTag_EnvSpatial = 19,
    eMemMgrTag_EnvAbstract = 20,
    eMemMgrTag_Explosion = 21,
    eMemMgrTag_Flame = 22,
    eMemMgrTag_FlameThrower = 23,
    eMemMgrTag_ForceFieldEffect = 24,
    eMemMgrTag_Grass = 25,
    eMemMgrTag_HierarchyBound = 26,
    eMemMgrTag_Havok = 27,
    eMemMgrTag_HUD = 28,
    eMemMgrTag_Im3DHelper = 29,
    eMemMgrTag_LaserBolt = 30,
    eMemMgrTag_Light = 31,
    eMemMgrTag_Lightning = 32,
    eMemMgrTag_Lightweight = 33,
    eMemMgrTag_Message = 34,
    eMemMgrTag_Model = 35,
    eMemMgrTag_MotionBlur = 36,
    eMemMgrTag_Movable = 37,
    eMemMgrTag_MovePoint = 38,
    eMemMgrTag_NPCFX = 39,
    eMemMgrTag_WallNet = 40,
    eMemMgrTag_EntityTrigger = 41,
    eMemMgrTag_OneLiner = 42,
    eMemMgrTag_OrdArrayMgr = 43,
    eMemMgrTag_Packer = 44,
    eMemMgrTag_Particle = 45,
    eMemMgrTag_Physics = 46,
    eMemMgrTag_Player = 47,
    eMemMgrTag_Projectile = 48,
    eMemMgrTag_RenderBuffer = 49,
    eMemMgrTag_Rubble = 50,
    eMemMgrTag_RuntimeEntity = 51,
    eMemMgrTag_SaveLoad = 52,
    eMemMgrTag_Scene = 53,
    eMemMgrTag_ScreenFX = 54,
    eMemMgrTag_Serializer = 55,
    eMemMgrTag_Shadow = 56,
    eMemMgrTag_Shower = 57,
    eMemMgrTag_SmashRing = 58,
    eMemMgrTag_Splash = 59,
    eMemMgrTag_Spline = 60,
    eMemMgrTag_SpotLight = 61,
    eMemMgrTag_Subtitle = 62,
    eMemMgrTag_Texture = 63,
    eMemMgrTag_Throwable = 64,
    eMemMgrTag_ThrowableSystem = 65,
    eMemMgrTag_Trigger = 66,
    eMemMgrTag_UI = 67,
    eMemMgrTag_UpdateCullMgr = 68,
    eMemMgrTag_ReactiveAnim = 69,
    eMemMgrTag_RenderWare = 70,
    eMemMgrTag_Shrapnel = 71,
    eMemMgrTag_Water = 72,
    eMemMgrTag_AnimCustom = 73,
    eMemMgrTag_SwitchLever = 74,
    eMemMgrTag_PlayerFX = 75,
    eMemMgrTag_DecalRWMalloc = 76,
    eMemMgrTag_Heists = 77,
    eMemMgrTag_MiniGame = 78,
    eMemMgrTag_CookingMinigame = 79,
    eMemMgrTag_MissionSystem = 80,
    eMemMgrTag_Checkpoint = 81,
    eMemMgrTag_Springboard = 82,
    eMemMgrTag_Volume = 83,
    eMemMgrTag_BufferAllocation = 84,
    eMemMgrTag_IO = 85,
    eMemMgrTag_Graphics = 86,
    eMemMgrTag_Utils = 87,
    eMemMgrTag_Builders = 88,
    eMemMgrTag_Animate = 89,
    eMemMgrTag_World = 90,
    eMemMgrTag_EntBlobs = 91,
    eMemMgrTag_EntBlobsAnim = 92,
    eMemMgrTag_EntShaders = 93,
    eMemMgrTag_UnknownEnt = 94,
    eMemMgrTag_BasicEnt = 95,
    eMemMgrTag_TextureEnt = 96,
    eMemMgrTag_StaticGeoEnt = 97,
    eMemMgrTag_TriggerEnt = 98,
    eMemMgrTag_VertexDeclEnt = 99,
    eMemMgrTag_Immediate = 100,
    eMemMgrTag_SkinGeoEnt = 101,
    eMemMgrTag_RenderModeEnt = 102,
    eMemMgrTag_MaterialEnt = 103,
    eMemMgrTag_EffectEnt = 104,
    eMemMgrTag_GeometryEnt = 105,
    eMemMgrTag_RawBlobEnt = 106,
    eMemMgrTag_System = 107,
    eMemMgrTag_AssetManager = 108,
    eMemMgrTag_xOGEntity = 109,
    eMemMgrTag_xOGEntModel = 110,
    eMemMgrTag_xOGEntBasic = 111,
    eMemMgrTag_zMainOGMod = 112,
    eMemMgrTag_GoodEditor = 113,
    eMemMgrTag_3rdPartyLibs = 114,
    eMemMgrTag_OPCMemAlloc = 115,
    eMemMgrTag_zShrapnelLauncher = 116,
    eMemMgrTag_Rope = 117,
    eMemMgrTag_FXScript = 118,
    eMemMgrTag_POW = 119,
    eMemMgrTag_PSGL = 120,
    eMemMgrTag_ModuleMissionRibbon = 121,
    eMemMgrTag_MissionRibbon = 122,
    eMemMgrTag_Gust = 123,
    eMemMgrTag_Option = 124,
    eMemMgrTag_IK = 125,
    eMemMgrTag_Piggybank = 126,
    eMemMgrTag_ExceptionHandler = 127,
    eMemMgrTag_FastMemAssets = 128,
    eMemMgrTag_Scaleform = 129,
    eMemMgrTag_Strings = 130,
    eMemMgrTag_RomFont = 131,
    eMemMgrTag_ShadowAndHDRShared = 132,
    eMemMgrTag_NumTags = 133,
};
// total size: 0x168
class xCamDebug : public xCam {
    // Members
    class config cfg; // offset 0x138, size 0x1C
    class xVec2 dpad; // offset 0x154, size 0x8
    float slow_input; // offset 0x15C, size 0x4
    class xVec3 * followTarget; // offset 0x160, size 0x4
    float followCamDist; // offset 0x164, size 0x4
};
// total size: 0x1C
class config {
    // Members
    class xVec2 stick_vel; // offset 0x0, size 0x8
    class xVec3 move_vel; // offset 0x8, size 0xC
    float slow_turn; // offset 0x14, size 0x4
    float slow_move; // offset 0x18, size 0x4
};
// total size: 0xAC
class xCamSupportPath {
    // Members
    class config cfg; // offset 0x0, size 0x10
    class path_node * path; // offset 0x10, size 0x4
    int power; // offset 0x14, size 0x4
    int max_size; // offset 0x18, size 0x4
    int front; // offset 0x1C, size 0x4
    int used; // offset 0x20, size 0x4
    float dist; // offset 0x24, size 0x4
    float subdist; // offset 0x28, size 0x4
    bool isCreated; // offset 0x2C, size 0x1
    float weights[31]; // offset 0x30, size 0x7C
};
// total size: 0x10
class config {
    // Members
    float min_segment_dist; // offset 0x0, size 0x4
    float smooth_factor; // offset 0x4, size 0x4
    int smooth_passes; // offset 0x8, size 0x4
    float subdiv_thresh; // offset 0xC, size 0x4
};
// total size: 0xC
class path_node {
    // Members
    class xVec3 loc; // offset 0x0, size 0xC
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
// total size: 0x10
class _OGtransition_timeEntity : public xOGEntity {};
// total size: 0xC
class StackAllocator : private StaticStackAllocator {};
// total size: 0xC
class StaticStackAllocator {
    // Members
    unsigned char * mark; // offset 0x0, size 0x4
    unsigned char * buffer; // offset 0x4, size 0x4
    unsigned char * bufferEnd; // offset 0x8, size 0x4
};
// total size: 0x18
class _OGtransition_timeSchema : public Schema {};
// total size: 0x254
class zCam {
    // Members
    class xCamGroup camGroup; // offset 0x0, size 0x154
    int transTimeTypeIndex; // offset 0x154, size 0x4
    class zCamFollow * follow_cam; // offset 0x158, size 0x4
    class zTargetBlender blendedLookat; // offset 0x15C, size 0x48
    class zTargetBlender blendedMidPoint; // offset 0x1A4, size 0x48
    class zTargetBlender blendedFloorMount; // offset 0x1EC, size 0x48
    class xVec3 cameraPlayersMidpoint; // offset 0x234, size 0xC
    class xVec3 cameraLookAt; // offset 0x240, size 0xC
    bool sYTrackingBelowFloorEnabled; // offset 0x24C, size 0x1
    bool allow60fpsEmulation; // offset 0x24D, size 0x1
    bool enableFirstPersonCamera; // offset 0x24E, size 0x1
    bool enableAimingCamera; // offset 0x24F, size 0x1
    int savedCameraType; // offset 0x250, size 0x4
};
// total size: 0x448
class zCamFollow : public zCamDriver {
    // Members
    class zCamTargetHistory targetHistory; // offset 0x2A4, size 0x198
    float lastDistTweak; // offset 0x43C, size 0x4
    bool updateRestDist; // offset 0x440, size 0x1
    bool distOccludeOn; // offset 0x441, size 0x1
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
// total size: 0xAC
class xCamPathBias : public xCamBias {
    // Members
    class xSpringyF32 mBias; // offset 0x8, size 0x18
    float mLastU; // offset 0x20, size 0x4
    class xNurbs mCurve; // offset 0x24, size 0x4C
    class xCamTransition * mTrans; // offset 0x70, size 0x4
    class xVec3 mMappingPlaneNormal; // offset 0x74, size 0xC
    float mGuessSpanU; // offset 0x80, size 0x4
    class xVec3 mCurveEnd0; // offset 0x84, size 0xC
    class xVec3 mCurveEnd1; // offset 0x90, size 0xC
    int mReversed; // offset 0x9C, size 0x4
    int mDirection; // offset 0xA0, size 0x4
    bool mIsActive; // offset 0xA4, size 0x1
    int viewportIndex; // offset 0xA8, size 0x4
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
// total size: 0x4C
class xNurbs {
    // Members
    int degree; // offset 0x0, size 0x4
    int knotMaxIndex; // offset 0x4, size 0x4
    int controlMaxIndex; // offset 0x8, size 0x4
    float * knot; // offset 0xC, size 0x4
    class xVec3 * control; // offset 0x10, size 0x4
    class Curve * curve; // offset 0x14, size 0x4
    class Vector4 BPx; // offset 0x18, size 0x10
    class Vector4 BPy; // offset 0x28, size 0x10
    class Vector4 BPz; // offset 0x38, size 0x10
    bool isBezier; // offset 0x48, size 0x1
};
// total size: 0x10
class Curve {
    // Members
    class __Knots__ Knots; // offset 0x0, size 0x8
    class __ControlPoints__ ControlPoints; // offset 0x8, size 0x8
};
// total size: 0x8
class __Knots__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __ControlPoints__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
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
// total size: 0xC0
class xBoxFace {
    // Members
    class xPlane surface; // offset 0x0, size 0x10
    class xEdge edges[4]; // offset 0x10, size 0xB0
};
// total size: 0x2C
class xEdge {
    // Members
    class xCollideLineSegment segment; // offset 0x0, size 0x1C
    class xPlane edge; // offset 0x1C, size 0x10
};
// total size: 0x1C
class xCollideLineSegment {
    // Members
    class xVec3 start; // offset 0x0, size 0xC
    class xVec3 dir; // offset 0xC, size 0xC
    float length; // offset 0x18, size 0x4
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
// total size: 0x10
class basic_rect {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
// total size: 0x10
class _OGCounterEntity : public xOGEntity {};
// total size: 0x18
class _OGCounterSchema : public Schema {};
// total size: 0x28
class xCounter : public xBase {
    // Members
    class xCounterAsset * asset; // offset 0x20, size 0x4
    short count; // offset 0x24, size 0x2
    unsigned char state; // offset 0x26, size 0x1
    unsigned char pad; // offset 0x27, size 0x1
};
// total size: 0x18
class xCounterAsset : public xBaseAsset {
    // Members
    short count; // offset 0x10, size 0x2
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
// total size: 0x1
class EventActionNew : public EventAny {};
// total size: 0x14
class tag_type {
    // Members
    class substr name; // offset 0x0, size 0x8
    void (* parse_tag)(class jot * j, class xtextbox * tb, class xtextbox * ctb, class split_tag * ti); // offset 0x8, size 0x4
    void (* reset_tag)(class jot * j, class xtextbox * tb, class xtextbox * ctb, class split_tag * ti); // offset 0xC, size 0x4
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
    void (* render)(class jot * j, class xtextbox * tb, float x, float y); // offset 0x0, size 0x4
    void (* layout_update)(class jot * j, class xtextbox * tb, class xtextbox * ctb); // offset 0x4, size 0x4
    void (* render_update)(class jot * j, class xtextbox * tb, class xtextbox * ctb); // offset 0x8, size 0x4
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
};
// total size: 0x38
class xfont {
    // Members
    unsigned long long id; // offset 0x0, size 0x8
    float width; // offset 0x8, size 0x4
    float height; // offset 0xC, size 0x4
    float space; // offset 0x10, size 0x4
    class xColor_tag color; // offset 0x14, size 0x4
    class xColor_tag shadowColor; // offset 0x18, size 0x4
    float shadowOffsetX; // offset 0x1C, size 0x4
    float shadowOffsetY; // offset 0x20, size 0x4
    class basic_rect clip; // offset 0x24, size 0x10
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
    void (* on_change)(class tweak_info * info); // offset 0x0, size 0x4
    void (* on_select)(class tweak_info * info); // offset 0x4, size 0x4
    void (* on_unselect)(class tweak_info * info); // offset 0x8, size 0x4
    void (* on_start_edit)(class tweak_info * info); // offset 0xC, size 0x4
    void (* on_stop_edit)(class tweak_info * info); // offset 0x10, size 0x4
    void (* on_expand)(class tweak_info * info); // offset 0x14, size 0x4
    void (* on_collapse)(class tweak_info * info); // offset 0x18, size 0x4
    void (* on_update)(class tweak_info * info); // offset 0x1C, size 0x4
    void (* convert_mem_to_tweak)(class tweak_info *, void * value); // offset 0x20, size 0x4
    void (* convert_tweak_to_mem)(class tweak_info *, void * value); // offset 0x24, size 0x4
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
// total size: 0xDC
class decal_instance {
    // Members
    class owner_group_type * owner_group; // offset 0x0, size 0x4
    class decal_instance * group_prev; // offset 0x4, size 0x4
    class decal_instance * group_next; // offset 0x8, size 0x4
    class emit_context ec; // offset 0xC, size 0x60
    enum decal_type type; // offset 0x6C, size 0x4
    float age; // offset 0x70, size 0x4
    float animation_age; // offset 0x74, size 0x4
    float age_rate; // offset 0x78, size 0x4
    class xEnt * driver_ent; // offset 0x7C, size 0x4
    class xMat4x3 * driver; // offset 0x80, size 0x4
    int order; // offset 0x84, size 0x4
    class ImmediatePrototypeEntity * entity; // offset 0x88, size 0x4
    float time_start; // offset 0x8C, size 0x4
    float time_scale; // offset 0x90, size 0x4
    class animix ani; // offset 0x94, size 0x18
    class xColor_tag color; // offset 0xAC, size 0x4
    class _xMat3x2 uvmat; // offset 0xB0, size 0x18
    int startFrame; // offset 0xC8, size 0x4
    int lastFrame; // offset 0xCC, size 0x4
    float conv_translation; // offset 0xD0, size 0x4
    class @class __anon; // offset 0xD4, size 0x4
    unsigned short blend_mode[2]; // offset 0xD4, size 0x4
    unsigned int blend_mode_id; // offset 0xD4, size 0x4
    class @class data; // offset 0xD8, size 0x4
};
// total size: 0x14
class owner_group_type {
    // Members
    unsigned int owner; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    int max_size; // offset 0x8, size 0x4
    class decal_instance * head; // offset 0xC, size 0x4
    class decal_instance * tail; // offset 0x10, size 0x4
};
// total size: 0x60
class emit_context {
    // Members
    unsigned int owner; // offset 0x0, size 0x4
    int flags; // offset 0x4, size 0x4
    int priority; // offset 0x8, size 0x4
    int max_owned; // offset 0xC, size 0x4
    int hard_max_owned; // offset 0x10, size 0x4
    float life; // offset 0x14, size 0x4
    float pause_time; // offset 0x18, size 0x4
    float accel_aging; // offset 0x1C, size 0x4
    float max_dist; // offset 0x20, size 0x4
    float lod_dist; // offset 0x24, size 0x4
    class xVec2 size; // offset 0x28, size 0x8
    int blend_mode; // offset 0x30, size 0x4
    class ImmediatePrototypeEntity * entity; // offset 0x34, size 0x4
    class xVec2 uv[2]; // offset 0x38, size 0x10
    unsigned int animRows; // offset 0x48, size 0x4
    unsigned int animCols; // offset 0x4C, size 0x4
    float fps; // offset 0x50, size 0x4
    float animTime; // offset 0x54, size 0x4
    bool randomStart; // offset 0x58, size 0x1
    class xResponseCurve * curve; // offset 0x5C, size 0x4
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
enum decal_type {
    DECAL_TYPE_ATOMIC = 0,
    DECAL_TYPE_IMMEDIATE = 1,
    DECAL_TYPE_CARD = 2,
    DECAL_TYPE_FAILED = 3,
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
// total size: 0x18
class _xMat3x2 {
    // Members
    class xVec2 right; // offset 0x0, size 0x8
    class xVec2 up; // offset 0x8, size 0x8
    class xVec2 pos; // offset 0x10, size 0x8
};
// total size: 0x4
class @class {
    // Members
    unsigned short blend_mode[2]; // offset 0x0, size 0x4
    unsigned int blend_mode_id; // offset 0x0, size 0x4
};
// total size: 0x4
class @class {
    // Members
    class immediate_mode_data * immediate; // offset 0x0, size 0x4
    int card; // offset 0x0, size 0x4
};
// total size: 0x4F8
class immediate_mode_data {
    // Members
    class xVec3 vert[25]; // offset 0x0, size 0x12C
    class xVec2 uv[25]; // offset 0x12C, size 0xC8
    class xVec3 norm[25]; // offset 0x1F4, size 0x12C
    unsigned short index[225]; // offset 0x320, size 0x1C2
    int vert_size; // offset 0x4E4, size 0x4
    int index_size; // offset 0x4E8, size 0x4
    float x_min; // offset 0x4EC, size 0x4
    float x_max; // offset 0x4F0, size 0x4
    class immediate_mode_data * next; // offset 0x4F4, size 0x4
};
// total size: 0x20
class pool_list : public pool_list_base {};
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
// total size: 0x10
class combo_vertex {
    // Members
    unsigned short index[3]; // offset 0x0, size 0x6
    unsigned short count; // offset 0x6, size 0x2
    float n; // offset 0x8, size 0x4
    float m; // offset 0xC, size 0x4
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
// total size: 0x258
class zPlatform : public zEnt {
    // Members
    class xEntMotionAsset * plat_asset; // offset 0xBC, size 0x4
    class xEntMotion motion; // offset 0xC0, size 0xAC
    unsigned short state; // offset 0x16C, size 0x2
    unsigned short plat_flags; // offset 0x16E, size 0x2
    float tmr; // offset 0x170, size 0x4
    int ctr; // offset 0x174, size 0x4
    class xMovePoint * src; // offset 0x178, size 0x4
    class xModelInstance * am; // offset 0x17C, size 0x4
    class xModelInstance * bm; // offset 0x180, size 0x4
    int moving; // offset 0x184, size 0x4
    int num_updates; // offset 0x188, size 0x4
    class xEntDrive drv; // offset 0x18C, size 0xB8
    class zPlatFMRunTime * fmrt; // offset 0x244, size 0x4
    class zDestructible * destructible; // offset 0x248, size 0x4
    float elapsedTime; // offset 0x24C, size 0x4
    bool hasStoppedRotating; // offset 0x250, size 0x1
    bool hasReachedEnd; // offset 0x251, size 0x1
    bool canLedgeGrab; // offset 0x252, size 0x1
};
// total size: 0x40
class xEntMotionAsset {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char use_banking; // offset 0x1, size 0x1
    unsigned short ent_motion_flags; // offset 0x2, size 0x2
    unsigned int pad; // offset 0x4, size 0x4
    class @class __anon; // offset 0x8, size 0x38
    class xEntMotionSplineData spl; // offset 0x8, size 0x10
    class xEntMotionMPData mp; // offset 0x8, size 0x10
    class xEntMotionMechData mech; // offset 0x8, size 0x38
    class xEntMotionConvBeltData cb; // offset 0x8, size 0x8
    class xEntMotionTeeterData teet; // offset 0x8, size 0x14
};
// total size: 0x38
class @class {
    // Members
    class xEntMotionSplineData spl; // offset 0x0, size 0x10
    class xEntMotionMPData mp; // offset 0x0, size 0x10
    class xEntMotionMechData mech; // offset 0x0, size 0x38
    class xEntMotionConvBeltData cb; // offset 0x0, size 0x8
    class xEntMotionTeeterData teet; // offset 0x0, size 0x14
};
// total size: 0x10
class xEntMotionSplineData {
    // Members
    unsigned long long spline_id; // offset 0x0, size 0x8
    float speed; // offset 0x8, size 0x4
    float lean_modifier; // offset 0xC, size 0x4
};
// total size: 0x10
class xEntMotionMPData {
    // Members
    unsigned long long mp_id; // offset 0x0, size 0x8
    unsigned int flags; // offset 0x8, size 0x4
    float speed; // offset 0xC, size 0x4
};
// total size: 0x38
class xEntMotionMechData {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char flags; // offset 0x1, size 0x1
    unsigned char sld_axis; // offset 0x2, size 0x1
    unsigned char rot_axis; // offset 0x3, size 0x1
    unsigned char scale_axis; // offset 0x4, size 0x1
    unsigned char pad[3]; // offset 0x5, size 0x3
    float sld_dist; // offset 0x8, size 0x4
    float sld_tm; // offset 0xC, size 0x4
    float sld_acc_tm; // offset 0x10, size 0x4
    float sld_dec_tm; // offset 0x14, size 0x4
    float rot_dist; // offset 0x18, size 0x4
    float rot_tm; // offset 0x1C, size 0x4
    float rot_acc_tm; // offset 0x20, size 0x4
    float rot_dec_tm; // offset 0x24, size 0x4
    float ret_delay; // offset 0x28, size 0x4
    float post_ret_delay; // offset 0x2C, size 0x4
    float scale_amount; // offset 0x30, size 0x4
    float scale_duration; // offset 0x34, size 0x4
};
// total size: 0x8
class xEntMotionConvBeltData {
    // Members
    float speed; // offset 0x0, size 0x4
    unsigned int axis; // offset 0x4, size 0x4
};
// total size: 0x14
class xEntMotionTeeterData {
    // Members
    float itilt; // offset 0x0, size 0x4
    float maxtilt; // offset 0x4, size 0x4
    float invmass; // offset 0x8, size 0x4
    unsigned int soundGroupCreak; // offset 0xC, size 0x4
    unsigned int soundGroupEnd; // offset 0x10, size 0x4
};
// total size: 0xAC
class xEntMotion {
    // Members
    class xEntMotionAsset * asset; // offset 0x0, size 0x4
    unsigned char type; // offset 0x4, size 0x1
    unsigned char pad; // offset 0x5, size 0x1
    unsigned short ent_motion_flags; // offset 0x6, size 0x2
    float t; // offset 0x8, size 0x4
    float tmr; // offset 0xC, size 0x4
    float d; // offset 0x10, size 0x4
    class @class __anon; // offset 0x14, size 0x84
    class xEntSplineData spl; // offset 0x14, size 0x30
    class xEntMPData mp; // offset 0x14, size 0x44
    class xEntMechData mech; // offset 0x14, size 0x84
    class xEntConveyorData conv; // offset 0x14, size 0x1
    class xEnt * owner; // offset 0x98, size 0x4
    class xEnt * target; // offset 0x9C, size 0x4
    class xVec3 our_rotation; // offset 0xA0, size 0xC
};
// total size: 0x84
class @class {
    // Members
    class xEntSplineData spl; // offset 0x0, size 0x30
    class xEntMPData mp; // offset 0x0, size 0x44
    class xEntMechData mech; // offset 0x0, size 0x84
    class xEntConveyorData conv; // offset 0x0, size 0x1
};
// total size: 0x30
class xEntSplineData {
    // Members
    class xEntSpeedData speed_data; // offset 0x0, size 0xC
    class xNurbs * spline; // offset 0xC, size 0x4
    float u; // offset 0x10, size 0x4
    bool arrived; // offset 0x14, size 0x1
    bool arrivedSent; // offset 0x15, size 0x1
    float position_blend_v; // offset 0x18, size 0x4
    float orient_blend_v; // offset 0x1C, size 0x4
    class xQuat current_orient; // offset 0x20, size 0x10
};
// total size: 0x84
class xEntMechData {
    // Members
    class xBound original_bound; // offset 0x0, size 0x2C
    class xVec3 original_position; // offset 0x2C, size 0xC
    class xVec3 destination_position; // offset 0x38, size 0xC
    class xVec3 direction; // offset 0x44, size 0xC
    float original_rotation; // offset 0x50, size 0x4
    float destination_rotation; // offset 0x54, size 0x4
    float sliding_speed; // offset 0x58, size 0x4
    float rotation_speed; // offset 0x5C, size 0x4
    int state; // offset 0x60, size 0x4
    float sliding_forth_decel_time; // offset 0x64, size 0x4
    float rotation_forth_decel_time; // offset 0x68, size 0x4
    float sliding_back_decel_time; // offset 0x6C, size 0x4
    float rotating_back_decel_time; // offset 0x70, size 0x4
    float scale_speed; // offset 0x74, size 0x4
    float current_scale; // offset 0x78, size 0x4
    float * entity_rotation_angle; // offset 0x7C, size 0x4
    int num_iterations; // offset 0x80, size 0x4
};
// total size: 0x1
class xEntConveyorData {
    // Members
    bool reverse; // offset 0x0, size 0x1
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
// total size: 0x20
class ImmediateContext {
    // Members
    class DecalVertex * verts; // offset 0x0, size 0x4
    unsigned short * indices; // offset 0x4, size 0x4
    class ImmediateGeometryEntity * geomEnt; // offset 0x8, size 0x4
    class ImmediateGeometry * geom; // offset 0xC, size 0x4
    int vertexCount; // offset 0x10, size 0x4
    int primCount; // offset 0x14, size 0x4
    int indexCount; // offset 0x18, size 0x4
    enum StateEnum state; // offset 0x1C, size 0x4
};
// total size: 0x30
class DecalVertex : public ImmediateVertexBase {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    unsigned int color; // offset 0xC, size 0x4
    float tu; // offset 0x10, size 0x4
    float tv; // offset 0x14, size 0x4
    float nx; // offset 0x18, size 0x4
    float ny; // offset 0x1C, size 0x4
    float nz; // offset 0x20, size 0x4
    float tx; // offset 0x24, size 0x4
    float ty; // offset 0x28, size 0x4
    float tz; // offset 0x2C, size 0x4
};
// total size: 0x1
class ImmediateVertexBase {};
// total size: 0x58
class ImmediateGeometryEntity : public Entity {
    // Members
    int memSize; // offset 0x10, size 0x4
    class BuilderInfo builderInfo; // offset 0x14, size 0x24
    class BuilderData builderData; // offset 0x38, size 0x1C
    unsigned int vertexDeclHash; // offset 0x54, size 0x4
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
// total size: 0x50
class MaterialEntity : public Entity {
    // Members
    int memSize; // offset 0x10, size 0x4
    class EffectEntity * effectEnt; // offset 0x14, size 0x4
    class RenderModeEntity * renderModeEnt; // offset 0x18, size 0x4
    class ParamCargo paramCargo; // offset 0x1C, size 0x8
    class Material material; // offset 0x24, size 0x2C
};
// total size: 0x8
class CreateInfo {
    // Members
    int bufferSize; // offset 0x0, size 0x4
    int textureCount; // offset 0x4, size 0x4
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
// total size: 0xE0
class ImmediateGeometry : public Geometry {
    // Members
    int vertexSize; // offset 0xB8, size 0x4
    void * vertexData; // offset 0xBC, size 0x4
    unsigned short * indexData; // offset 0xC0, size 0x4
    class VertexBuffer vertexBuffer; // offset 0xC4, size 0x8
    class IndexBuffer indexBuffer; // offset 0xCC, size 0xC
    int indexStride; // offset 0xD8, size 0x4
    bool flushVertexData; // offset 0xDC, size 0x1
    bool isRenderThread; // offset 0xDD, size 0x1
};
enum StateEnum {
    STATE_ERROR = 4294967295,
    STATE_Constructed = 0,
    STATE_Committed = 1,
    STATE_Added = 2,
};
// total size: 0x20
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
// total size: 0xE8
class StaticBuilder : public Builder {
    // Members
    class StaticGeometry geom; // offset 0x10, size 0xB8
    class RenderAttrib viewAttrib; // offset 0xC8, size 0x1
    class FixedIndexBuffer * indexBuffers; // offset 0xCC, size 0x4
    class FixedVertexBuffer * fixedVertexBuffers; // offset 0xD0, size 0x4
    unsigned char * lightSectorIndices; // offset 0xD4, size 0x4
    class CollKDTree colltree; // offset 0xD8, size 0x10
};
// total size: 0xB8
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
    class Vector3 * v0; // offset 0x0, size 0x4
    unsigned short v1; // offset 0x4, size 0x2
    unsigned short v2; // offset 0x6, size 0x2
    unsigned int flags; // offset 0x8, size 0x4
    unsigned int userdata; // offset 0xC, size 0x4
};
// total size: 0x68
class xDecalEmitter {
    // Members
    class config cfg; // offset 0x0, size 0x28
    class @class texture; // offset 0x28, size 0x1C
    class static_queue units; // offset 0x44, size 0x14
    class curve_node * curve; // offset 0x58, size 0x4
    unsigned long curve_size; // offset 0x5C, size 0x4
    unsigned long curve_index; // offset 0x60, size 0x4
    float ilife; // offset 0x64, size 0x4
};
// total size: 0x28
class config {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    float life_time; // offset 0x4, size 0x4
    unsigned int blend_src; // offset 0x8, size 0x4
    unsigned int blend_dst; // offset 0xC, size 0x4
    class @class texture; // offset 0x10, size 0x18
};
// total size: 0x18
class @class {
    // Members
    class xVec2 uv[2]; // offset 0x0, size 0x10
    unsigned char rows; // offset 0x10, size 0x1
    unsigned char cols; // offset 0x11, size 0x1
    enum texture_mode mode; // offset 0x14, size 0x4
};
enum texture_mode {
    TM_DEFAULT = 0,
    TM_RANDOM = 1,
    TM_CYCLE = 2,
    MAX_TM = 3,
    FORCE_INT_TM = 4294967295,
};
// total size: 0x1C
class @class {
    // Members
    class ImmediatePrototypeEntity * entity; // offset 0x0, size 0x4
    unsigned long units; // offset 0x4, size 0x4
    class xVec2 size; // offset 0x8, size 0x8
    class xVec2 isize; // offset 0x10, size 0x8
    int prev; // offset 0x18, size 0x4
};
// total size: 0x14
class static_queue {
    // Members
    unsigned long _first; // offset 0x0, size 0x4
    unsigned long _size; // offset 0x4, size 0x4
    unsigned long _max_size; // offset 0x8, size 0x4
    unsigned long _max_size_mask; // offset 0xC, size 0x4
    class unit_data * _buffer; // offset 0x10, size 0x4
};
// total size: 0x50
class unit_data {
    // Members
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char curve_index; // offset 0x1, size 0x1
    unsigned char u; // offset 0x2, size 0x1
    unsigned char v; // offset 0x3, size 0x1
    float frac; // offset 0x4, size 0x4
    float age; // offset 0x8, size 0x4
    float cull_size; // offset 0xC, size 0x4
    class xMat4x3 mat; // offset 0x10, size 0x40
};
// total size: 0x8
class iterator {
    // Members
    unsigned long _it; // offset 0x0, size 0x4
    class static_queue * _owner; // offset 0x4, size 0x4
};
// total size: 0x10
class _OGBoulderGeneratorEntity : public xOGEntity {};
// total size: 0x18
class _OGBoulderGeneratorSchema : public Schema {};
// total size: 0x148
class xEntBoulder : public xEnt {
    // Members
    class xEntBoulderAsset * basset; // offset 0xB8, size 0x4
    class xEntShadow entShadow_embedded; // offset 0xBC, size 0x28
    class xVec3 localCenter; // offset 0xE4, size 0xC
    class xVec3 vel; // offset 0xF0, size 0xC
    class xVec3 rotVec; // offset 0xFC, size 0xC
    class xVec3 force; // offset 0x108, size 0xC
    class xVec3 instForce; // offset 0x114, size 0xC
    float angVel; // offset 0x120, size 0x4
    float timeToLive; // offset 0x124, size 0x4
    int hitpoints; // offset 0x128, size 0x4
    float initNonCollideTime; // offset 0x12C, size 0x4
    float fOOSphRadius; // offset 0x130, size 0x4
    unsigned int lastRolling; // offset 0x134, size 0x4
    unsigned long long rollingID; // offset 0x138, size 0x8
    unsigned char collis_chk; // offset 0x140, size 0x1
    unsigned char collis_pen; // offset 0x141, size 0x1
    unsigned char pad1[2]; // offset 0x142, size 0x2
};
// total size: 0x48
class xEntBoulderAsset {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    unsigned char railRiderFlags; // offset 0x4, size 0x1
    float gravity; // offset 0x8, size 0x4
    float mass; // offset 0xC, size 0x4
    float bounce; // offset 0x10, size 0x4
    float friction; // offset 0x14, size 0x4
    float maxVel; // offset 0x18, size 0x4
    float maxAngVel; // offset 0x1C, size 0x4
    float fInitNonCollideTime; // offset 0x20, size 0x4
    unsigned int hitpoints; // offset 0x24, size 0x4
    float stickiness; // offset 0x28, size 0x4
    float bounceDamp; // offset 0x2C, size 0x4
    unsigned char damageTo; // offset 0x30, size 0x1
    unsigned char damagedBy; // offset 0x31, size 0x1
    unsigned char useKillTimer; // offset 0x32, size 0x1
    float killtimer; // offset 0x34, size 0x4
    unsigned char useBoneSettings; // offset 0x38, size 0x1
    unsigned char uBoneIndex; // offset 0x39, size 0x1
    unsigned char boneAxis; // offset 0x3A, size 0x1
    float fSphereRadius; // offset 0x3C, size 0x4
    float minSoundVel; // offset 0x40, size 0x4
    float maxSoundVel; // offset 0x44, size 0x4
};
// total size: 0x160
class xEntBoulderAsset : public xBaseAsset {
    // Members
    unsigned char flags; // offset 0x10, size 0x1
    unsigned char Type; // offset 0x11, size 0x1
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
    unsigned int AssetFlags; // offset 0xFC, size 0x4
    unsigned char RailRiderFlags; // offset 0x100, size 0x1
    float Gravity; // offset 0x104, size 0x4
    float Mass; // offset 0x108, size 0x4
    float Bounce; // offset 0x10C, size 0x4
    float Friction; // offset 0x110, size 0x4
    float MaxVel; // offset 0x114, size 0x4
    float MaxAngVel; // offset 0x118, size 0x4
    float INCTime; // offset 0x11C, size 0x4
    unsigned int HP; // offset 0x120, size 0x4
    float Stickiness; // offset 0x124, size 0x4
    float BounceDamp; // offset 0x128, size 0x4
    unsigned char DamageTo; // offset 0x12C, size 0x1
    unsigned char DamageBy; // offset 0x12D, size 0x1
    class KillTimerStruct KillTimerStruct; // offset 0x130, size 0x8
    class WTAdditions WTAdditions; // offset 0x138, size 0x8
    class SoundBankSource BounceSnd; // offset 0x140, size 0xC
    float MinSndVel; // offset 0x14C, size 0x4
    float MaxSndVel; // offset 0x150, size 0x4
    class LinkAsset EventLinksNew; // offset 0x154, size 0x8
};
// total size: 0x8
class KillTimerStruct {
    // Members
    unsigned char flags; // offset 0x0, size 0x1
    float KillTimer; // offset 0x4, size 0x4
};
// total size: 0x8
class WTAdditions {
    // Members
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char BoneIdx; // offset 0x1, size 0x1
    unsigned char BoneAxis; // offset 0x2, size 0x1
    float SphRad; // offset 0x4, size 0x4
};
// total size: 0x84
class LightKitAsset {
    // Members
    class FloatColorRGB ambientColor; // offset 0x0, size 0xC
    class DirLight dir[5]; // offset 0xC, size 0x78
};
// total size: 0x18
class DirLight {
    // Members
    class FloatColorRGB color; // offset 0x0, size 0xC
    class Rotation3 orientation; // offset 0xC, size 0xC
};
// total size: 0x4
class EventActionOneFloat : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
};
// total size: 0x4
class FloatAndVoid {
    // Members
    float f; // offset 0x0, size 0x4
    void * v; // offset 0x0, size 0x4
};
// total size: 0x78
class xBoulderGenerator : public xBase {
    // Members
    class xBoulderGeneratorAsset * bgasset; // offset 0x20, size 0x4
    int numBoulders; // offset 0x24, size 0x4
    int nextBoulder; // offset 0x28, size 0x4
    class xEntBoulder * * boulderList; // offset 0x2C, size 0x4
    int * boulderAges; // offset 0x30, size 0x4
    bool isDirection; // offset 0x34, size 0x1
    class xBase * objectPtr; // offset 0x38, size 0x4
    float lengthOfInitVel; // offset 0x3C, size 0x4
    float angvel; // offset 0x40, size 0x4
    class xVec3 initaxis; // offset 0x44, size 0xC
    class xVec3 initvel; // offset 0x50, size 0xC
    class xVec3 perp1; // offset 0x5C, size 0xC
    class xVec3 perp2; // offset 0x68, size 0xC
};
// total size: 0x60
class xBoulderGeneratorAsset : public xDynAsset {
    // Members
    unsigned long long object; // offset 0x20, size 0x8
    class xVec3 offset; // offset 0x28, size 0xC
    float offsetRand; // offset 0x34, size 0x4
    class xVec3 initdir; // offset 0x38, size 0xC
    float initspeed; // offset 0x44, size 0x4
    float velAngleRand; // offset 0x48, size 0x4
    float velMagRand; // offset 0x4C, size 0x4
    class xVec3 rotation; // offset 0x50, size 0xC
    unsigned int flags; // offset 0x5C, size 0x4
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
// total size: 0x10
class hkpDynamicsContactMgr : public hkpContactMgr {
    // Members
    class hkpWorld * m_world; // offset 0xC, size 0x4
};
// total size: 0x38
class EntCollisionListener : public hkpCollisionListener, public hkpEntityListener {
    // Members
    class SoundPlayData m_hitPlayData; // offset 0x8, size 0x14
    class SoundPlayData m_processPlayData; // offset 0x1C, size 0x14
    float m_timerHitSoundInterval; // offset 0x30, size 0x4
    float m_timerHitSoundNextAllowed; // offset 0x34, size 0x4
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
// total size: 0x2C
class hkInplaceArray : public hkArray {
    // Members
    unsigned int m_storage[8]; // offset 0xC, size 0x20
};
// total size: 0xC
class hkArray {
    // Members
    unsigned int * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
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
// total size: 0x28
class LinkAssetBaseNew {
    // Members
    class __srcEvent__ srcEvent; // offset 0x0, size 0x8
    class __dstEvent__ dstEvent; // offset 0x8, size 0x8
    class uid dstAssetID; // offset 0x10, size 0x8
    class uid chkAssetID; // offset 0x18, size 0x8
    bool chkSourceParams; // offset 0x20, size 0x1
    bool disabled; // offset 0x21, size 0x1
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
// total size: 0x2
class EventActionTeleportPlayer : public EventActionNew {
    // Members
    bool ForceSameScene; // offset 0x0, size 0x1
    bool SameScene; // offset 0x1, size 0x1
};
// total size: 0x10
class EventActionMount : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
    class uid paramWidgetAssetID; // offset 0x8, size 0x8
};
// total size: 0x10
class EventActionOn : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
    class uid paramWidgetAssetID; // offset 0x8, size 0x8
};
// total size: 0x10
class EventActionSwitch : public EventActionNew {
    // Members
    unsigned int viewport; // offset 0x0, size 0x4
    bool forceRestart; // offset 0x4, size 0x1
    class uid paramWidgetAssetID; // offset 0x8, size 0x8
};
// total size: 0x18
class EventActionHit : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
    float param1; // offset 0x4, size 0x4
    float param2; // offset 0x8, size 0x4
    float param3; // offset 0xC, size 0x4
    bool SentByDestructable; // offset 0x10, size 0x1
    int FromWhichPlayer; // offset 0x14, size 0x4
};
// total size: 0xC
class EventActionAnimPlay : public EventActionNew {
    // Members
    unsigned int param0; // offset 0x0, size 0x4
    float param2; // offset 0x4, size 0x4
    float param3; // offset 0x8, size 0x4
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
// total size: 0x8
class EventActionAccelerate : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
    float param1; // offset 0x4, size 0x4
};
// total size: 0x10
class EventActionMoveToTarget : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
    float param1; // offset 0x4, size 0x4
    class uid paramWidgetAssetID; // offset 0x8, size 0x8
};
// total size: 0xC
class EventActionSetSkyDome : public EventActionNew {
    // Members
    int param0; // offset 0x0, size 0x4
    bool param1; // offset 0x4, size 0x1
    bool param2; // offset 0x5, size 0x1
    int param3; // offset 0x8, size 0x4
};
// total size: 0x10
class EventActionPlayMovie : public EventActionNew {
    // Members
    unsigned int param0; // offset 0x0, size 0x4
    bool param1; // offset 0x4, size 0x1
    class uid paramWidgetAssetID; // offset 0x8, size 0x8
};
// total size: 0x10
class EventActionCreditsSetDest : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
    float param1; // offset 0x4, size 0x4
    float param2; // offset 0x8, size 0x4
    float param3; // offset 0xC, size 0x4
};
// total size: 0x8
class EventActionSetZPlaneParams : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
    float param1; // offset 0x4, size 0x4
};
// total size: 0x8
class EventActionSetFogStartEnd : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
    float param1; // offset 0x4, size 0x4
};
// total size: 0xC
class EventActionSetFogColor : public EventActionNew {
    // Members
    unsigned int param0; // offset 0x0, size 0x4
    unsigned int param1; // offset 0x4, size 0x4
    unsigned int param2; // offset 0x8, size 0x4
};
// total size: 0xC
class EventActionSetGravity : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
    float param1; // offset 0x4, size 0x4
    float param2; // offset 0x8, size 0x4
};
// total size: 0x8
class EventActionSetOpacity : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
    float param1; // offset 0x4, size 0x4
};
// total size: 0x10
class EventActionSetPlayerPosition : public EventActionNew {
    // Members
    bool param0; // offset 0x0, size 0x1
    class uid paramWidgetAssetID; // offset 0x8, size 0x8
};
// total size: 0x10
class EventActionPlayCustomAnim : public EventActionNew {
    // Members
    unsigned int param0; // offset 0x0, size 0x4
    class uid paramWidgetAssetID; // offset 0x8, size 0x8
};
// total size: 0x8
class EventActionSetSplitScreenMode : public EventActionNew {
    // Members
    unsigned int param0; // offset 0x0, size 0x4
    unsigned int param1; // offset 0x4, size 0x4
};
// total size: 0x10
class EventActionCompactTrashStart : public EventActionNew {
    // Members
    enum eCubeType param0; // offset 0x0, size 0x4
    unsigned int param1; // offset 0x4, size 0x4
    class uid paramWidgetAssetID; // offset 0x8, size 0x8
};
enum eCubeType {
    CUBETYPE_RANDOM = 0,
    CUBETYPE_HEAVY = 1,
    CUBETYPE_MAGNETIC_ATTRACT = 2,
    CUBETYPE_ENERGY = 3,
    CUBETYPE_BASIC = 4,
    CUBETYPE_HEAVY_MULTIPLAYER = 5,
    CUBETYPE_HEAVY_RED = 6,
    CUBETYPE_HEAVY_BLUE = 7,
    CUBETYPE_SUPER_HEAVY = 8,
    CUBETYPE_MAGNETIC_REPEL = 9,
    CUBETYPE_SUPER_ENERGY = 10,
    END_CUBETYPE_ENUM = 11,
};
// total size: 0x10
class EventActionSetOption : public EventActionNew {
    // Members
    unsigned char param0; // offset 0x0, size 0x1
    class uid paramWidgetAssetID; // offset 0x8, size 0x8
};
// total size: 0x8
class EventActionDamagePlayer : public EventActionNew {
    // Members
    unsigned int param0; // offset 0x0, size 0x4
    enum eHitSource param1; // offset 0x4, size 0x4
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
    eHitSourceEVE_POWERSURGE = 12,
    eHitSourceWALE_BATTERY_CUBE = 13,
    eHitSourceEVENT_KILL = 14,
    eHitSourceWALE_BASIC_CUBE = 15,
    eHitSourceDOT = 16,
    eHitSourceWALE_HEAVY_CUBE = 17,
    eHitSourceWALE_MAGNET_CUBE = 18,
    eHitSourceEVE_COLLISION = 19,
    END_eHitSourceENUM = 20,
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
// total size: 0x10
class EventActionSaveInfoToTextDepot : public EventActionNew {
    // Members
    unsigned int param0; // offset 0x0, size 0x4
    unsigned int param1; // offset 0x4, size 0x4
    unsigned int param2; // offset 0x8, size 0x4
    unsigned int param3; // offset 0xC, size 0x4
};
// total size: 0x10
class EventActionScale : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
    float param1; // offset 0x4, size 0x4
    float param2; // offset 0x8, size 0x4
    float param3; // offset 0xC, size 0x4
};
// total size: 0x10
class EventActionPlatformMotion : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
    float param1; // offset 0x4, size 0x4
    float param2; // offset 0x8, size 0x4
    float param3; // offset 0xC, size 0x4
};
// total size: 0xC
class EventActionRotSetOrientation : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
    float param1; // offset 0x4, size 0x4
    float param2; // offset 0x8, size 0x4
};
// total size: 0xC
class EventActionRotGotoOrientation : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
    float param1; // offset 0x4, size 0x4
    float param2; // offset 0x8, size 0x4
};
// total size: 0x18
class EventActionTransToAbsoluteDirection : public EventActionNew {
    // Members
    float param1; // offset 0x0, size 0x4
    float param2; // offset 0x4, size 0x4
    float param3; // offset 0x8, size 0x4
    class uid paramWidgetAssetID; // offset 0x10, size 0x8
};
// total size: 0x10
class EventActionDispatcher_SetPlayerCharacter : public EventActionNew {
    // Members
    unsigned int param0; // offset 0x0, size 0x4
    class uid paramWidgetAssetID; // offset 0x8, size 0x8
};
// total size: 0x10
class EventActionGuideInvokeDeviceSelect : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
    float param1; // offset 0x4, size 0x4
    float param2; // offset 0x8, size 0x4
    float param3; // offset 0xC, size 0x4
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
// total size: 0x44
class xFFXRotMatchState {
    // Members
    int lgrounded; // offset 0x0, size 0x4
    class xVec3 lfup; // offset 0x4, size 0xC
    class xVec3 lfat; // offset 0x10, size 0xC
    class xVec3 plfat; // offset 0x1C, size 0xC
    float tmr; // offset 0x28, size 0x4
    float mrate; // offset 0x2C, size 0x4
    float tmatch; // offset 0x30, size 0x4
    float rrate; // offset 0x34, size 0x4
    float trelax; // offset 0x38, size 0x4
    float max_decl; // offset 0x3C, size 0x4
    class xFFXRotMatchState * next; // offset 0x40, size 0x4
};
// total size: 0x10
class _OGFunction_GeneratorEntity : public xOGEntity {};
// total size: 0x18
class _OGFunction_GeneratorSchema : public Schema {};
// total size: 0x40
class xFunctionGenerator : public xBase {
    // Members
    class xFunctionGeneratorAsset * asset; // offset 0x20, size 0x4
    bool started; // offset 0x24, size 0x1
    bool currentState; // offset 0x25, size 0x1
    bool override; // offset 0x26, size 0x1
    float currentCycleWidth; // offset 0x28, size 0x4
    float currentPulseWidth; // offset 0x2C, size 0x4
    float currentTime; // offset 0x30, size 0x4
    float lastUpTime; // offset 0x34, size 0x4
    float lastDownTime; // offset 0x38, size 0x4
};
// total size: 0x48
class xFunctionGeneratorAsset : public xDynAsset {
    // Members
    float startCycleWidth; // offset 0x20, size 0x4
    float middleCycleWidth; // offset 0x24, size 0x4
    float endCycleWidth; // offset 0x28, size 0x4
    float startPulseWidth; // offset 0x2C, size 0x4
    float middlePulseWidth; // offset 0x30, size 0x4
    float endPulseWidth; // offset 0x34, size 0x4
    float middleTime; // offset 0x38, size 0x4
    float endTime; // offset 0x3C, size 0x4
    bool middleEnabled; // offset 0x40, size 0x1
    bool endEnabled; // offset 0x41, size 0x1
};
// total size: 0x2C
class joint_data {
    // Members
    int flags; // offset 0x0, size 0x4
    unsigned int born; // offset 0x4, size 0x4
    class xVec3 loc; // offset 0x8, size 0xC
    class xVec3 norm; // offset 0x14, size 0xC
    float orient; // offset 0x20, size 0x4
    float scale; // offset 0x24, size 0x4
    float alpha; // offset 0x28, size 0x4
};
// total size: 0x8
class iterator {
    // Members
    unsigned long it; // offset 0x0, size 0x4
    class tier_queue * owner; // offset 0x4, size 0x4
};
// total size: 0x10
class _OGGroupEntity : public xOGEntity {};
// total size: 0x18
class _OGGroupSchema : public Schema {};
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
// total size: 0xA8
class st_HIPLOADDATA {
    // Members
    class st_FILELOADINFO * fli; // offset 0x0, size 0x4
    int lockid; // offset 0x4, size 0x4
    int bypass; // offset 0x8, size 0x4
    int bypass_recover; // offset 0xC, size 0x4
    unsigned int base_sector; // offset 0x10, size 0x4
    int use_async; // offset 0x14, size 0x4
    enum en_READ_ASYNC_STATUS asyn_stat; // offset 0x18, size 0x4
    int pos; // offset 0x1C, size 0x4
    int top; // offset 0x20, size 0x4
    int readTop; // offset 0x24, size 0x4
    class st_HIPLOADBLOCK stk[8]; // offset 0x28, size 0x80
};
enum en_READ_ASYNC_STATUS {
    HIP_RDSTAT_NONE = 4294967295,
    HIP_RDSTAT_INPROG = 0,
    HIP_RDSTAT_SUCCESS = 1,
    HIP_RDSTAT_FAILED = 2,
    HIP_RDSTAT_NOBYPASS = 3,
    HIP_RDSTAT_NOASYNC = 4,
};
// total size: 0x10
class st_HIPLOADBLOCK {
    // Members
    int endpos; // offset 0x0, size 0x4
    unsigned int blk_id; // offset 0x4, size 0x4
    int blk_remain; // offset 0x8, size 0x4
    int flags; // offset 0xC, size 0x4
};
// total size: 0x34
class st_HIPLOADFUNCS {
    // Members
    class st_HIPLOADDATA * (* create)(char * filename, char * dblbuf, int bufsize, int fileflags); // offset 0x0, size 0x4
    void (* destroy)(class st_HIPLOADDATA * load); // offset 0x4, size 0x4
    unsigned int (* basesector)(class st_HIPLOADDATA * load); // offset 0x8, size 0x4
    unsigned int (* enter)(class st_HIPLOADDATA * load); // offset 0xC, size 0x4
    void (* exit)(class st_HIPLOADDATA * load); // offset 0x10, size 0x4
    int (* readBytes)(class st_HIPLOADDATA * load, char * buf, int n); // offset 0x14, size 0x4
    int (* readShorts)(class st_HIPLOADDATA * load, short * buf, int n); // offset 0x18, size 0x4
    int (* readLongs)(class st_HIPLOADDATA * load, int * buf, int n); // offset 0x1C, size 0x4
    int (* readFloats)(class st_HIPLOADDATA * load, float * buf, int n); // offset 0x20, size 0x4
    int (* readString)(class st_HIPLOADDATA * load, char * buf); // offset 0x24, size 0x4
    int (* setBypass)(class st_HIPLOADDATA * load, int enable, int use_async); // offset 0x28, size 0x4
    void (* setSpot)(class st_HIPLOADDATA * load, int offset); // offset 0x2C, size 0x4
    enum en_READ_ASYNC_STATUS (* pollRead)(class st_HIPLOADDATA * load); // offset 0x30, size 0x4
};
// total size: 0x2C
class st_HIPSAVEFUNCS {
    // Members
    class st_HIPSAVEDATA * (* create)(char * filename); // offset 0x0, size 0x4
    void (* destroy)(class st_HIPSAVEDATA *); // offset 0x4, size 0x4
    void (* open)(class st_HIPSAVEDATA * save, unsigned int id); // offset 0x8, size 0x4
    void (* close)(class st_HIPSAVEDATA * save); // offset 0xC, size 0x4
    void (* writeBytes)(class st_HIPSAVEDATA * save, char * data, int n); // offset 0x10, size 0x4
    void (* writeShorts)(class st_HIPSAVEDATA * save, short * data, int n); // offset 0x14, size 0x4
    void (* writeLongs)(class st_HIPSAVEDATA * save, int * data, int n); // offset 0x18, size 0x4
    void (* writeFloats)(class st_HIPSAVEDATA * save, float * data, int n); // offset 0x1C, size 0x4
    void (* writeString)(class st_HIPSAVEDATA * save, char * str); // offset 0x20, size 0x4
    int (* curSpot)(class st_HIPSAVEDATA * save); // offset 0x24, size 0x4
    int (* spotLong)(class st_HIPSAVEDATA * save, int spot, unsigned int val); // offset 0x28, size 0x4
};
// total size: 0x74
class st_HIPSAVEDATA {
    // Members
    class st_FILESAVEINFO * fsi; // offset 0x0, size 0x4
    int lockid; // offset 0x4, size 0x4
    int pos; // offset 0x8, size 0x4
    int top; // offset 0xC, size 0x4
    int writeTop; // offset 0x10, size 0x4
    class st_HIPSAVEBLOCK stk[8]; // offset 0x14, size 0x60
};
// total size: 0x44
class st_FILESAVEINFO {
    // Members
    void (* destroy)(class st_FILESAVEINFO *); // offset 0x0, size 0x4
    int (* writeBytes)(class st_FILESAVEINFO * save, char * data, int n); // offset 0x4, size 0x4
    int (* writeMShorts)(class st_FILESAVEINFO * save, short * data, int n); // offset 0x8, size 0x4
    int (* writeMLongs)(class st_FILESAVEINFO * save, int * data, int n); // offset 0xC, size 0x4
    int (* writeMFloats)(class st_FILESAVEINFO * save, float * data, int n); // offset 0x10, size 0x4
    int (* writeMDoubles)(class st_FILESAVEINFO * save, double * data, int n); // offset 0x14, size 0x4
    int (* writeIShorts)(class st_FILESAVEINFO * save, short * data, int n); // offset 0x18, size 0x4
    int (* writeILongs)(class st_FILESAVEINFO * save, int * data, int n); // offset 0x1C, size 0x4
    int (* writeIFloats)(class st_FILESAVEINFO * save, float * data, int n); // offset 0x20, size 0x4
    int (* writeIDoubles)(class st_FILESAVEINFO * save, double * data, int n); // offset 0x24, size 0x4
    int (* seekSpot)(class st_FILESAVEINFO * save, int offset); // offset 0x28, size 0x4
    int length; // offset 0x2C, size 0x4
    int position; // offset 0x30, size 0x4
    enum en_FIOERRCODES error; // offset 0x34, size 0x4
    unsigned int lockid; // offset 0x38, size 0x4
    void * privdata; // offset 0x3C, size 0x4
    void * xtradata; // offset 0x40, size 0x4
};
// total size: 0xC
class st_HIPSAVEBLOCK {
    // Members
    int pos; // offset 0x0, size 0x4
    int len; // offset 0x4, size 0x4
    int flags; // offset 0x8, size 0x4
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
// total size: 0x10
class _OGlightEntity : public xOGEntity {};
// total size: 0x18
class _OGlightSchema : public Schema {};
// total size: 0x10
class _OGLight_Effect_FlickerEntity : public xOGEntity {};
// total size: 0x18
class _OGLight_Effect_FlickerSchema : public Schema {};
// total size: 0x10
class _OGLight_Effect_StrobeEntity : public xOGEntity {};
// total size: 0x18
class _OGLight_Effect_StrobeSchema : public Schema {};
// total size: 0x28
class xLightEffectFlicker : private xLightEffectBase {
    // Members
    class xLightEffectFlickerAsset * tasset; // offset 0x20, size 0x4
};
// total size: 0x40
class xLightEffectFlickerAsset : public xDynAsset {
    // Members
    class _xFColor maxColorVariation; // offset 0x20, size 0x10
    float flickerRate; // offset 0x30, size 0x4
    float randomFlickerRate; // offset 0x34, size 0x4
    float blendTime; // offset 0x38, size 0x4
    unsigned int flags; // offset 0x3C, size 0x4
};
// total size: 0x28
class xLightEffectStrobe : private xLightEffectBase {
    // Members
    class xLightEffectStrobeAsset * tasset; // offset 0x20, size 0x4
};
// total size: 0x48
class xLightEffectStrobeAsset : public xDynAsset {
    // Members
    class _xFColor minColor; // offset 0x20, size 0x10
    float fadeUpTime; // offset 0x30, size 0x4
    float fadeDownTime; // offset 0x34, size 0x4
    float timeMax; // offset 0x38, size 0x4
    float timeMin; // offset 0x3C, size 0x4
    float randomTimeMax; // offset 0x40, size 0x4
    float randomTimeMin; // offset 0x44, size 0x4
};
enum GlobalHeapEnum {
    GlobalHeapMain = 0,
    GlobalHeapSecondary = 1,
    GlobalHeap = 0,
};
// total size: 0xA4
class xMemWatermark {
    // Members
    class BlockAllocatorArray allocList; // offset 0x0, size 0x20
    int numWatermarks; // offset 0x20, size 0x4
    int watermarkList[32]; // offset 0x24, size 0x80
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
// total size: 0x24
class xMemoryManager {
    // Members
    void * arenaStart; // offset 0x4, size 0x4
    void * arenaEnd; // offset 0x8, size 0x4
    unsigned int size; // offset 0xC, size 0x4
    char * lastFile; // offset 0x10, size 0x4
    char * lastFunction; // offset 0x14, size 0x4
    int lastLine; // offset 0x18, size 0x4
    unsigned int debugDataSize; // offset 0x1C, size 0x4
    class DebugAllocationHeader * activeList; // offset 0x20, size 0x4
};
// total size: 0x30
class DebugAllocationHeader {
    // Members
    char * file; // offset 0x0, size 0x4
    int line; // offset 0x4, size 0x4
    char * function; // offset 0x8, size 0x4
    unsigned int size; // offset 0xC, size 0x4
    class DebugAllocationHeader * prev; // offset 0x10, size 0x4
    class DebugAllocationHeader * next; // offset 0x14, size 0x4
    class xMemoryManager * manager; // offset 0x18, size 0x4
    unsigned int magic[5]; // offset 0x1C, size 0x14
};
// total size: 0x4
class FixedHeader {
    // Members
    class FixedHeader * next; // offset 0x0, size 0x4
};
// total size: 0x10
class FreeNode {
    // Members
    class FreeNode * next; // offset 0x0, size 0x4
    class FreeNode * prev; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    unsigned int pad[1]; // offset 0xC, size 0x4
};
// total size: 0x10
class AllocatedNode {
    // Members
    unsigned int size; // offset 0x0, size 0x4
    unsigned int pad[3]; // offset 0x4, size 0xC
};
// total size: 0x34
class xMemoryManagerGeneral : public xMemoryManager {
    // Members
    class FreeNode * freeStart; // offset 0x24, size 0x4
    class FreeNode * freeEnd; // offset 0x28, size 0x4
    enum Dir dir; // offset 0x2C, size 0x4
    enum Strategy strategy; // offset 0x30, size 0x4
};
enum Dir {
    Up = 0,
    Down = 1,
};
enum Strategy {
    FirstFit = 0,
    BestFit = 1,
};
// total size: 0x10
class _OGMovePointEntity : public xOGEntity {};
// total size: 0x18
class _OGMovePointSchema : public Schema {};
// total size: 0x838
class zScene : public xScene {
    // Members
    class zPortalPending pendingPortal; // offset 0x50, size 0x8
    int num_base; // offset 0x58, size 0x4
    class xBase * * base; // offset 0x5C, size 0x4
    unsigned int num_update_base; // offset 0x60, size 0x4
    class xBase * * update_base; // offset 0x64, size 0x4
    unsigned int num_global_persistant; // offset 0x68, size 0x4
    class xBase * * global_persistant; // offset 0x6C, size 0x4
    int baseCount[248]; // offset 0x70, size 0x3E0
    class xBase * baseList[248]; // offset 0x450, size 0x3E0
    class zEnv * zen; // offset 0x830, size 0x4
    class zSceneParameters * parameters; // offset 0x834, size 0x4
};
// total size: 0x8
class zPortalPending {
    // Members
    class zPortal * assetPortal; // offset 0x0, size 0x4
    char * manualPortal; // offset 0x4, size 0x4
};
// total size: 0x28
class zPortal : public xBase {
    // Members
    class xPortalAsset * passet; // offset 0x20, size 0x4
};
// total size: 0x38
class xPortalAsset : public xBaseAsset {
    // Members
    class uid cameraID; // offset 0x10, size 0x8
    class Pointer32 sceneID; // offset 0x18, size 0x4
    class uid loadingScreenID; // offset 0x20, size 0x8
    class __directionID__ directionID; // offset 0x28, size 0x8
    class LinkAsset EventLinksNew; // offset 0x30, size 0x8
};
// total size: 0x8
class __directionID__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x30
class zEnv : public xBase {
    // Members
    class xEnvAsset * envAsset; // offset 0x20, size 0x4
    class LightKit * lightkitBSP; // offset 0x24, size 0x4
    class LightKit * lightkitObject; // offset 0x28, size 0x4
};
// total size: 0xA0
class zSceneParameters : public xDynAsset {
    // Members
    unsigned int idle03ExtraCount; // offset 0x20, size 0x4
    class xAnimFile * * idle03Extras; // offset 0x24, size 0x4
    unsigned int moreRandomCrap3; // offset 0x28, size 0x4
    unsigned int idle04ExtraCount; // offset 0x2C, size 0x4
    class xAnimFile * * idle04Extras; // offset 0x30, size 0x4
    unsigned int moreRandomCrap4; // offset 0x34, size 0x4
    unsigned char bombCount; // offset 0x38, size 0x1
    unsigned char extraIdleDelay; // offset 0x39, size 0x1
    unsigned short pad0; // offset 0x3A, size 0x2
    unsigned int uDefaultMusicHash; // offset 0x3C, size 0x4
    unsigned int flags; // offset 0x40, size 0x4
    float waterTileWidth; // offset 0x44, size 0x4
    float lodFadeDistance; // offset 0x48, size 0x4
    float waterTileOffsetX; // offset 0x4C, size 0x4
    float waterTileOffsetZ; // offset 0x50, size 0x4
    unsigned char numCheckpoints; // offset 0x54, size 0x1
    unsigned char pad1[3]; // offset 0x55, size 0x3
    float grassDistFade; // offset 0x58, size 0x4
    float grassDistCull; // offset 0x5C, size 0x4
    unsigned int piggybank; // offset 0x60, size 0x4
    unsigned int maxAnimationMem; // offset 0x64, size 0x4
    unsigned int maxArtMem; // offset 0x68, size 0x4
    unsigned int maxDesignMem; // offset 0x6C, size 0x4
    unsigned int maxProgrammingMem; // offset 0x70, size 0x4
    bool HDREnable; // offset 0x74, size 0x1
    float HDRThreshold; // offset 0x78, size 0x4
    float HDRBloomScale; // offset 0x7C, size 0x4
    float HDRBloomSize; // offset 0x80, size 0x4
    float HDRBloomBrightness; // offset 0x84, size 0x4
    float HDRStarScale; // offset 0x88, size 0x4
    float HDRBlurScale; // offset 0x8C, size 0x4
    unsigned int pad[3]; // offset 0x90, size 0xC
};
// total size: 0x10
class CBNetworkClosestPath {
    // Members
    class xVec3 * toPos; // offset 0x0, size 0x4
    class xMovePoint * minDistPathToMP; // offset 0x4, size 0x4
    class xMovePoint * minDistPathFromMP; // offset 0x8, size 0x4
    float minPathDistance2; // offset 0xC, size 0x4
};
// total size: 0x14
class xMovePointPathPoint {
    // Members
    class xMovePoint * from; // offset 0x0, size 0x4
    class xVec3 dir; // offset 0x4, size 0xC
    float t; // offset 0x10, size 0x4
};
// total size: 0x60
class UVMovementInstanceData : public RenderCustomizerData {
    // Members
    class Matrix43 uvMatrix; // offset 0x4, size 0x30
    class Vector2 scale; // offset 0x34, size 0x8
    class Vector2 scalePerSec; // offset 0x3C, size 0x8
    float rotation; // offset 0x44, size 0x4
    float rotationPerSec; // offset 0x48, size 0x4
    class Vector2 translation; // offset 0x4C, size 0x8
    class Vector2 translationPerSec; // offset 0x54, size 0x8
    float * rows; // offset 0x5C, size 0x4
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
// total size: 0x10
class xOneLiner {
    // Members
    char * mAssetName; // offset 0x0, size 0x4
    float mCycleTime; // offset 0x4, size 0x4
    unsigned int mFlags; // offset 0x8, size 0x4
    float mSoonestTimeToPlay; // offset 0xC, size 0x4
};
// total size: 0x34
class internal_system : public xParticleBatchSystem {
    // Members
    class block_info * block_list; // offset 0x1C, size 0x4
    int blocks_used; // offset 0x20, size 0x4
    int units_used; // offset 0x24, size 0x4
    int units_per_block; // offset 0x28, size 0x4
    class block_info * best_block; // offset 0x2C, size 0x4
    class internal_system * next; // offset 0x30, size 0x4
};
// total size: 0x1C
class xParticleBatchSystem {
    // Members
    enum ptank_group_type pool_type; // offset 0x0, size 0x4
    bool sorted; // offset 0x4, size 0x1
    class ImmediatePrototypeEntity * entity; // offset 0x8, size 0x4
    int stride; // offset 0xC, size 0x4
    int (* preroll)(unsigned char * mem, int count, float dt, int rolltimes, void * context); // offset 0x10, size 0x4
    int (* update)(unsigned char * mem, int count, class ParticleGeometry * geom, float dt, void * context, class Matrix43 * camMat); // offset 0x14, size 0x4
    void * context; // offset 0x18, size 0x4
};
enum ptank_group_type {
    PGT_STANDARD = 0,
    MAX_PGT = 1,
};
// total size: 0x30
class ParticleGeometry {
    // Members
    class ImmediateContext immCtxt; // offset 0x0, size 0x20
    int ioffset; // offset 0x20, size 0x4
    int voffset; // offset 0x24, size 0x4
    class Renderable3DTransform * xform; // offset 0x28, size 0x4
    class ParticleSorter * sorter; // offset 0x2C, size 0x4
};
// total size: 0x20
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
// total size: 0x10
class xVec4 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
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
};
// total size: 0x10
class _OGRumbleEntity : public xOGEntity {};
// total size: 0x18
class _OGRumbleSchema : public Schema {};
// total size: 0x10
class _OGRumble_Box_EmitterEntity : public xOGEntity {};
// total size: 0x18
class _OGRumble_Box_EmitterSchema : public Schema {};
// total size: 0x10
class _OGRumble_Spherical_EmitterEntity : public xOGEntity {};
// total size: 0x18
class _OGRumble_Spherical_EmitterSchema : public Schema {};
// total size: 0x28
class emitterBase : public xBase {
    // Members
    class effectAsset * pEffectAsset; // offset 0x20, size 0x4
};
// total size: 0x48
class effectAsset : public xDynAsset {
    // Members
    float time; // offset 0x20, size 0x4
    float intensity; // offset 0x24, size 0x4
    unsigned int id; // offset 0x28, size 0x4
    unsigned char priority; // offset 0x2C, size 0x1
    unsigned char type; // offset 0x2D, size 0x1
    unsigned char rumbleInPause; // offset 0x2E, size 0x1
    unsigned char focusType; // offset 0x2F, size 0x1
    float param1; // offset 0x30, size 0x4
    float param2; // offset 0x34, size 0x4
    float shakeMagnitude; // offset 0x38, size 0x4
    float shakeCycleMax; // offset 0x3C, size 0x4
    float shakeRotationalMagnitude; // offset 0x40, size 0x4
    bool shakeY; // offset 0x44, size 0x1
};
// total size: 0x28
class boxEmitter : public emitterBase {
    // Members
    class boxEmitterAsset * pAsset; // offset 0x24, size 0x4
};
// total size: 0x48
class boxEmitterAsset : public xDynAsset {
    // Members
    unsigned long long effectID; // offset 0x20, size 0x8
    class xVec3 minCorner; // offset 0x28, size 0xC
    class xVec3 maxCorner; // offset 0x34, size 0xC
    bool onlyOnFloor; // offset 0x40, size 0x1
};
// total size: 0x30
class sphericalEmitter : public emitterBase {
    // Members
    class sphericalEmitterAsset * pAsset; // offset 0x24, size 0x4
    float radiusSqrd; // offset 0x28, size 0x4
};
// total size: 0x40
class sphericalEmitterAsset : public xDynAsset {
    // Members
    unsigned long long effectID; // offset 0x20, size 0x8
    float radius; // offset 0x28, size 0x4
    class xVec3 position; // offset 0x2C, size 0xC
    bool onlyRumbleOnY; // offset 0x38, size 0x1
    bool fallOff; // offset 0x39, size 0x1
    bool onlyOnFloor; // offset 0x3A, size 0x1
};
// total size: 0x70
class FreezableObjectEffect : public emitterBase {
    // Members
    class sphericalEmitterAsset mModifiableAsset; // offset 0x28, size 0x40
    class sphericalEmitterAsset * mDefaultSphericalEmitterAsset; // offset 0x68, size 0x4
    float mRadiusSqrd; // offset 0x6C, size 0x4
};
// total size: 0x10
class effectInternal {
    // Members
    class emitterBase * pEmitter; // offset 0x0, size 0x4
    float timeToLive; // offset 0x4, size 0x4
    float prevMagFraction; // offset 0x8, size 0x4
    bool rumbleForever; // offset 0xC, size 0x1
};
// total size: 0x104
class padInfo {
    // Members
    class effectInternal m_effects[16]; // offset 0x0, size 0x100
    class effectInternal * m_currentExclusive; // offset 0x100, size 0x4
};
// total size: 0x428
class Manager {
    // Members
    class padInfo m_padInfo[4]; // offset 0x0, size 0x410
    class effectInternal m_shakeFX; // offset 0x410, size 0x10
    bool rumbleEnabled[4]; // offset 0x420, size 0x4
    bool rumbleEnabledAll; // offset 0x424, size 0x1
};
// total size: 0x10
class _OGSaveLoadEntity : public xOGEntity {};
// total size: 0x18
class _OGSaveLoadSchema : public Schema {};
// total size: 0xC
class SaveDataHeader {
    // Members
    unsigned int version; // offset 0x0, size 0x4
    unsigned int sceneID; // offset 0x4, size 0x4
    unsigned char percentComplete; // offset 0x8, size 0x1
};
// total size: 0x8
class EventActionOneWidget : public EventActionNew {
    // Members
    class uid paramWidgetAssetID; // offset 0x0, size 0x8
};
// total size: 0x8
class EventActionPortal : public EventActionNew {
    // Members
    class uid paramWidgetAssetID; // offset 0x0, size 0x8
};
// total size: 0x20
class zSaveLoad : public xBase {};
// total size: 0x20
class zSaveLoadAsset : public xBaseAsset {
    // Members
    class uid portalID; // offset 0x10, size 0x8
    class LinkAsset EventLinksNew; // offset 0x18, size 0x8
};
// total size: 0x10
class _OGScreenFadeEntity : public xOGEntity {};
// total size: 0x18
class _OGScreenFadeSchema : public Schema {};
// total size: 0x38
class xScreenFade : public xBase {
    // Members
    class asset_type * asset; // offset 0x20, size 0x4
    enum eScreenFadeState state; // offset 0x24, size 0x4
    class xColor_tag current_color; // offset 0x28, size 0x4
    float time_passed; // offset 0x2C, size 0x4
    class xBase * owner; // offset 0x30, size 0x4
};
// total size: 0x30
class asset_type : public xDynAsset {
    // Members
    class xColor_tag dest; // offset 0x20, size 0x4
    float fadeDownTime; // offset 0x24, size 0x4
    float waitTime; // offset 0x28, size 0x4
    float fadeUpTime; // offset 0x2C, size 0x4
};
enum eScreenFadeState {
    eScreenFadeStateOff = 0,
    eScreenFadeStateFadeDown = 1,
    eScreenFadeStateWait = 2,
    eScreenFadeStateFadeUp = 3,
    eScreenFadeStateMax = 4,
};
// total size: 0x170
class zScaleform : public zUI, public ScaleformOGAsset {
    // Members
    class ScaleformBlobEntity * ngScaleform; // offset 0xDC, size 0x4
    class zDispatcherAsset * dispatcher; // offset 0xE0, size 0x4
    class zSoundsNamedAsset * soundArray; // offset 0xE4, size 0x4
    class Rumble * rumbleEmitter; // offset 0xE8, size 0x4
    unsigned int viewnum; // offset 0xEC, size 0x4
    unsigned int playerPort; // offset 0xF0, size 0x4
    char levelName[5]; // offset 0xF4, size 0x5
    char portalString[80]; // offset 0xF9, size 0x50
    bool portalActivated; // offset 0x149, size 0x1
    bool deferPlayMovie; // offset 0x14A, size 0x1
    bool player1LoggedIn; // offset 0x14B, size 0x1
    bool needSceneReset; // offset 0x14C, size 0x1
    bool moviePlaying; // offset 0x14D, size 0x1
    bool holdingCube[4]; // offset 0x14E, size 0x4
    bool holdingGun[4]; // offset 0x152, size 0x4
    bool superGun[4]; // offset 0x156, size 0x4
    enum eScaleformStatus status; // offset 0x15C, size 0x4
    class zPlayerInput * curPad; // offset 0x160, size 0x4
    bool isCenterOrigin; // offset 0x164, size 0x1
};
// total size: 0x4
class ScaleformOGAsset {};
// total size: 0x1C
class ScaleformBlobEntity : public BlobEntity {
    // Members
    class ScaleformBlobAsset * asset; // offset 0x10, size 0x4
    int assetSize; // offset 0x14, size 0x4
    bool deferDestroy : 1; // offset 0x18, size 0x1, bit offset 0
    unsigned int pad : 31; // offset 0x18, size 0x4, bit offset 1
};
// total size: 0x1
class ScaleformBlobAsset : public Asset {
    // Members
    unsigned char data[1]; // offset 0x0, size 0x1
};
// total size: 0x1
class Asset {};
// total size: 0x18
class zDispatcherAsset : public xBaseAsset {
    // Members
    class LinkAsset EventLinksNew; // offset 0x10, size 0x8
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
// total size: 0x50
class Rumble : public xDynAsset {
    // Members
    float time; // offset 0x20, size 0x4
    float intensity; // offset 0x24, size 0x4
    unsigned int effectId; // offset 0x28, size 0x4
    unsigned char priority; // offset 0x2C, size 0x1
    unsigned char rumbleType; // offset 0x2D, size 0x1
    unsigned char flags; // offset 0x2E, size 0x1
    unsigned char focusType; // offset 0x2F, size 0x1
    float param1; // offset 0x30, size 0x4
    float param2; // offset 0x34, size 0x4
    class Screen_Shake Screen_Shake; // offset 0x38, size 0x10
    class LinkAsset EventLinksNew; // offset 0x48, size 0x8
};
// total size: 0x10
class Screen_Shake {
    // Members
    float magnitude; // offset 0x0, size 0x4
    float cycleMax; // offset 0x4, size 0x4
    float rotational_magnitude; // offset 0x8, size 0x4
    unsigned char flags; // offset 0xC, size 0x1
};
enum eScaleformStatus {
    eStatus_Stopped = 0,
    eStatus_Paused = 1,
    eStatus_Playing = 2,
};
// total size: 0x10
class EventActionInvokeASFunc : public EventActionNew {
    // Members
    class Pointer32 param0; // offset 0x0, size 0x4
    unsigned int param1; // offset 0x4, size 0x4
    class uid param2; // offset 0x8, size 0x8
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
// total size: 0x14
class SkyDomeInfo {
    // Members
    class xEnt * ent; // offset 0x0, size 0x4
    int sortorder; // offset 0x4, size 0x4
    int lockXZ; // offset 0x8, size 0x4
    int lockY; // offset 0xC, size 0x4
    int zReadWrite; // offset 0x10, size 0x4
};
// total size: 0xD0
class xSpacePartitionTree2D {
    // Members
    class xVec2 origin; // offset 0x0, size 0x8
    class xVec2 size; // offset 0x8, size 0x8
    float cell_size[9]; // offset 0x10, size 0x24
    float cell_isize[9]; // offset 0x34, size 0x24
    float cell_frac[9]; // offset 0x58, size 0x24
    int max_depth; // offset 0x7C, size 0x4
    float ilogdepth; // offset 0x80, size 0x4
    int grid_size_x; // offset 0x84, size 0x4
    int grid_shift_x; // offset 0x88, size 0x4
    int grid_mask_x; // offset 0x8C, size 0x4
    int grid_size_y; // offset 0x90, size 0x4
    int grid_shift_y; // offset 0x94, size 0x4
    int grid_mask_y; // offset 0x98, size 0x4
    unsigned short current_searchid; // offset 0x9C, size 0x2
    class entry_data * free_entries; // offset 0xA0, size 0x4
    class entry_node * free_nodes; // offset 0xA4, size 0x4
    class cell * free_cells; // offset 0xA8, size 0x4
    int free_cells_size; // offset 0xAC, size 0x4
    int safety_free_cells_size; // offset 0xB0, size 0x4
    class cell * grid; // offset 0xB4, size 0x4
    class entry_data * entry_buffer; // offset 0xB8, size 0x4
    int entry_buffer_size; // offset 0xBC, size 0x4
    class entry_node * node_buffer; // offset 0xC0, size 0x4
    int node_buffer_size; // offset 0xC4, size 0x4
    class cell * cell_buffer; // offset 0xC8, size 0x4
    int cell_buffer_size; // offset 0xCC, size 0x4
};
// total size: 0x14
class entry_data {
    // Members
    class entry_data * next_free_entry; // offset 0x0, size 0x4
    class @class __anon; // offset 0x0, size 0x14
    void * value; // offset 0x0, size 0x4
    int type; // offset 0x4, size 0x4
    unsigned short searchid; // offset 0x8, size 0x2
    unsigned short owner_size; // offset 0xA, size 0x2
    unsigned short owner[4]; // offset 0xC, size 0x8
};
// total size: 0x14
class @class {
    // Members
    void * value; // offset 0x0, size 0x4
    int type; // offset 0x4, size 0x4
    unsigned short searchid; // offset 0x8, size 0x2
    unsigned short owner_size; // offset 0xA, size 0x2
    unsigned short owner[4]; // offset 0xC, size 0x8
};
// total size: 0x4
class entry_node {
    // Members
    class entry_node * next_free_node; // offset 0x0, size 0x4
    class @class __anon; // offset 0x0, size 0x4
    unsigned short next; // offset 0x0, size 0x2
    unsigned short entry; // offset 0x2, size 0x2
};
// total size: 0x4
class @class {
    // Members
    unsigned short next; // offset 0x0, size 0x2
    unsigned short entry; // offset 0x2, size 0x2
};
// total size: 0xC
class cell {
    // Members
    class cell * next_free_cell; // offset 0x0, size 0x4
    class @class __anon; // offset 0x0, size 0xC
    unsigned short parent; // offset 0x0, size 0x2
    unsigned short children; // offset 0x2, size 0x2
    unsigned short entries; // offset 0x4, size 0x2
    unsigned char cid; // offset 0x6, size 0x1
    unsigned char level; // offset 0x7, size 0x1
    unsigned short xcode; // offset 0x8, size 0x2
    unsigned short ycode; // offset 0xA, size 0x2
};
// total size: 0xC
class @class {
    // Members
    unsigned short parent; // offset 0x0, size 0x2
    unsigned short children; // offset 0x2, size 0x2
    unsigned short entries; // offset 0x4, size 0x2
    unsigned char cid; // offset 0x6, size 0x1
    unsigned char level; // offset 0x7, size 0x1
    unsigned short xcode; // offset 0x8, size 0x2
    unsigned short ycode; // offset 0xA, size 0x2
};
// total size: 0x10
class _OGCurveEntity : public xOGEntity {};
// total size: 0x18
class _OGCurveSchema : public Schema {};
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
    class Goodie * goodie; // offset 0x0, size 0x4
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
// total size: 0x18
class xSubtitlesAsset : public xBaseAsset {
    // Members
    unsigned short m_uAssetNumLines; // offset 0x10, size 0x2
    unsigned short m_uAssetByteCount; // offset 0x12, size 0x2
    class xSubtitleLine m_paSubtitleLines[65536]; // offset 0x14, size 0x0
};
// total size: 0xC
class xSubtitleLine {
    // Members
    float fStartTime; // offset 0x0, size 0x4
    float fStopTime; // offset 0x4, size 0x4
    unsigned int uStringOffset; // offset 0x8, size 0x4
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
// total size: 0x488
class xTextDepot {
    // Members
    char * strings[32]; // offset 0x0, size 0x80
    int stringCount; // offset 0x80, size 0x4
    char characterBuffer[1024]; // offset 0x84, size 0x400
    int characterCount; // offset 0x484, size 0x4
};
// total size: 0x2DF0
class xTextureManager {
    // Members
    unsigned int m_maxPoolSize; // offset 0x0, size 0x4
    unsigned int m_currentPoolSize; // offset 0x4, size 0x4
    int m_lru; // offset 0x8, size 0x4
    class xInternalTextureNode m_texture_nodes[192]; // offset 0x10, size 0x2400
    class xInternalMovieNode m_movie_nodes[4]; // offset 0x2410, size 0x100
    class tag_xFile m_files[8]; // offset 0x2510, size 0x8A0
    unsigned long long m_clearIDs[8]; // offset 0x2DB0, size 0x40
};
// total size: 0x10
class _OGTimerEntity : public xOGEntity {};
// total size: 0x18
class _OGTimerSchema : public Schema {};
// total size: 0x20
class xTimerAsset : public xBaseAsset {
    // Members
    float seconds; // offset 0x10, size 0x4
    float randomRange; // offset 0x14, size 0x4
    unsigned char runsInPause; // offset 0x18, size 0x1
    unsigned char pad[3]; // offset 0x19, size 0x3
};
// total size: 0x30
class xTimer : public xBase {
    // Members
    class xTimerAsset * tasset; // offset 0x20, size 0x4
    unsigned char state; // offset 0x24, size 0x1
    unsigned char runsInPause; // offset 0x25, size 0x1
    unsigned short flags; // offset 0x26, size 0x2
    float secondsLeft; // offset 0x28, size 0x4
};
// total size: 0xC
class _tagTRCPadInfo : public _tagiTRCPadInfo {
    // Members
    int id; // offset 0x0, size 0x4
    enum _tagTRCState state; // offset 0x4, size 0x4
    enum _tagTRCPadState padstate; // offset 0x8, size 0x4
};
// total size: 0x1
class _tagiTRCPadInfo {};
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
// total size: 0x10
class _OGUIDReferenceEntity : public xOGEntity {};
// total size: 0x18
class _OGUIDReferenceSchema : public Schema {};
// total size: 0x10
class _OGUIDModelReferenceEntity : public xOGEntity {};
// total size: 0x18
class _OGUIDModelReferenceSchema : public Schema {};
// total size: 0x10
class xUIDMgrAsset {
    // Members
    unsigned int nameHash; // offset 0x0, size 0x4
    unsigned long long aid; // offset 0x8, size 0x8
};
// total size: 0x50
class UIDModelReference {
    // Members
    unsigned int nameHash; // offset 0x0, size 0x4
    unsigned int dummy1; // offset 0x4, size 0x4
    class ModelInstanceAsset mia; // offset 0x10, size 0x40
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
// total size: 0x70
class CurveCamera : public xBaseAsset {
    // Members
    class LinkAsset EventLinksNew; // offset 0x10, size 0x8
    int Version; // offset 0x18, size 0x4
    unsigned int CamType; // offset 0x1C, size 0x4
    class @class __anon; // offset 0x20, size 0x4
    class POILookAtCurve CurvePOI; // offset 0x20, size 0x4
    class RailLookAtCurve CurveRail; // offset 0x20, size 0x4
    class @class NumCurvesData; // offset 0x28, size 0x28
    unsigned int NumCurvesType; // offset 0x50, size 0x4
    bool dofEnabled; // offset 0x54, size 0x1
    float dofBlur; // offset 0x58, size 0x4
    float dofNearFocusPoint; // offset 0x5C, size 0x4
    float dofNearFocusFalloff; // offset 0x60, size 0x4
    float dofFarFocusPoint; // offset 0x64, size 0x4
    float dofFarFocusFalloff; // offset 0x68, size 0x4
};
// total size: 0x4
class @class {
    // Members
    class POILookAtCurve CurvePOI; // offset 0x0, size 0x4
    class RailLookAtCurve CurveRail; // offset 0x0, size 0x4
};
// total size: 0x4
class POILookAtCurve {
    // Members
    float dummy; // offset 0x0, size 0x4
};
// total size: 0x4
class RailLookAtCurve {
    // Members
    int LookCurve; // offset 0x0, size 0x4
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
// total size: 0x150
class xPlatformAsset : public xBaseAsset {
    // Members
    unsigned char flags; // offset 0x10, size 0x1
    unsigned char Type; // offset 0x11, size 0x1
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
    class LinkAsset EventLinksNew; // offset 0xFC, size 0x8
    class @class __anon; // offset 0x108, size 0x40
    class Spline_Type Spline; // offset 0x108, size 0x18
    class MP_Type MP; // offset 0x108, size 0x18
    class Mech_Type Mech; // offset 0x108, size 0x40
    class ConvBelt_Type ConvBelt; // offset 0x108, size 0x10
    class Teeter_Type Teeter; // offset 0x108, size 0x2C
    class FM_Type FM; // offset 0x108, size 0x8
    class uid Destructible; // offset 0x148, size 0x8
};
// total size: 0x40
class @class {
    // Members
    class Spline_Type Spline; // offset 0x0, size 0x18
    class MP_Type MP; // offset 0x0, size 0x18
    class Mech_Type Mech; // offset 0x0, size 0x40
    class ConvBelt_Type ConvBelt; // offset 0x0, size 0x10
    class Teeter_Type Teeter; // offset 0x0, size 0x2C
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
// total size: 0x2C
class Teeter_Type {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char use_banking; // offset 0x1, size 0x1
    unsigned short MotionFlags; // offset 0x2, size 0x2
    unsigned int pad; // offset 0x4, size 0x4
    class degToRad InitialTilt; // offset 0x8, size 0x4
    class degToRad MaxTilt; // offset 0xC, size 0x4
    float Speed; // offset 0x10, size 0x4
    class SoundBankSource SoundGroupCreak; // offset 0x14, size 0xC
    class SoundBankSource SoundGroupEnd; // offset 0x20, size 0xC
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
// total size: 0x30
class Script : public xBaseAsset {
    // Members
    float ScaleFactor; // offset 0x10, size 0x4
    unsigned int eventCount; // offset 0x14, size 0x4
    bool Loop; // offset 0x18, size 0x1
    bool RunWhenPaused; // offset 0x19, size 0x1
    bool RunInCinematic; // offset 0x1A, size 0x1
    unsigned char pad2; // offset 0x1B, size 0x1
    class __ScriptList__ ScriptList; // offset 0x1C, size 0x8
    class LinkAsset EventLinksNew; // offset 0x24, size 0x8
    class Pointer32 EventLinks; // offset 0x2C, size 0x4
};
// total size: 0x8
class __ScriptList__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0xA0
class TriggerPhantomAsset : public xBaseAsset {
    // Members
    class LinkAsset EventLinksNew; // offset 0x10, size 0x8
    unsigned char Type; // offset 0x18, size 0x1
    class @class __anon; // offset 0x20, size 0x30
    class AABB_Type AABBox; // offset 0x20, size 0x30
    class Box_Type Box; // offset 0x20, size 0x30
    class Sphere_Type Sphere; // offset 0x20, size 0x30
    class Capsule_Type Capsule; // offset 0x20, size 0x30
    unsigned int Threshold; // offset 0x50, size 0x4
    unsigned int DotDamageAmount; // offset 0x54, size 0x4
    float DotDamageFreq; // offset 0x58, size 0x4
    bool DotDrownThePlayer; // offset 0x5C, size 0x1
    float VelocityDampeningDelay; // offset 0x60, size 0x4
    class __EntitiesInclude__ EntitiesInclude; // offset 0x64, size 0x8
    class __EntitiesExclude__ EntitiesExclude; // offset 0x6C, size 0x8
    float WeightThreshold; // offset 0x74, size 0x4
    unsigned int Action; // offset 0x78, size 0x4
    class @class __anon; // offset 0x7C, size 0x20
    class NoneStruct None; // offset 0x7C, size 0x1
    class VelocityTriggerStruct VelocityTrigger; // offset 0x7C, size 0x10
    class VelocityPointStruct VelocityPoint; // offset 0x7C, size 0x1C
    class ImpulseTriggerStruct ImpulseTrigger; // offset 0x7C, size 0x10
    class ImpulsePointStruct ImpulsePoint; // offset 0x7C, size 0x18
    class ForceTorqueTriggerStruct ForceTorqueTrigger; // offset 0x7C, size 0x18
    class ForceTorquePointStruct ForceTorquePoint; // offset 0x7C, size 0x20
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
// total size: 0x160
class TriggerEntityAsset : public TriggerOGBase {
    // Members
    class __Entities__ Entities; // offset 0x150, size 0x8
    unsigned int Threshold; // offset 0x158, size 0x4
};
// total size: 0x150
class TriggerOGBase : public xBaseAsset {
    // Members
    unsigned char flags; // offset 0x10, size 0x1
    unsigned char Type; // offset 0x11, size 0x1
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
    class LinkAsset EventLinksNew; // offset 0xFC, size 0x8
    class @class __anon; // offset 0x110, size 0x30
    class Box_Type Box; // offset 0x110, size 0x30
    class Sphere_Type Sphere; // offset 0x110, size 0x10
    class Cylinder_Type Cylinder; // offset 0x110, size 0x14
    class Circle_Type Circle; // offset 0x110, size 0x10
    class Polygon_Type Polygon; // offset 0x110, size 0x8
    class @class __anon; // offset 0x140, size 0xC
    class NoDir_Type NoDir; // offset 0x140, size 0x1
    class YesDir_Type YesDir; // offset 0x140, size 0xC
    unsigned int DirFlag; // offset 0x14C, size 0x4
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
// total size: 0x8
class __Entities__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0xA0
class zPOWGroupAsset : public xBaseAsset {
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
// total size: 0xA0
class zBeaconAsset : public xBaseAsset {
    // Members
    class LinkAsset EventLinksNew; // offset 0x10, size 0x8
    class vec3 position; // offset 0x18, size 0xC
    float proximity; // offset 0x24, size 0x4
    class uid stringReference; // offset 0x28, size 0x8
    unsigned char beaconType; // offset 0x30, size 0x1
    class @class data; // offset 0x40, size 0x60
};
// total size: 0x60
class @class {
    // Members
    class LinguiniMinigame LinguiniMinigame; // offset 0x0, size 0x1
    class TimedChallenge TimedChallenge; // offset 0x0, size 0x1
    class WorldExitToSewer WorldExitToSewer; // offset 0x0, size 0x60
    class Minigame Minigame; // offset 0x0, size 0x18
    class Heist Heist; // offset 0x0, size 0x1
    class Mission Mission; // offset 0x0, size 0x18
    class Task Task; // offset 0x0, size 0x50
    class PlaceMarker PlaceMarker; // offset 0x0, size 0x40
};
// total size: 0x1
class LinguiniMinigame {};
// total size: 0x1
class TimedChallenge {};
// total size: 0x60
class WorldExitToSewer {
    // Members
    bool exitFromSewer; // offset 0x0, size 0x1
    class ModelInstanceAsset customModelInstance; // offset 0x10, size 0x40
    class uid stringReference; // offset 0x50, size 0x8
};
// total size: 0x18
class Minigame {
    // Members
    class uid minigamePortal; // offset 0x0, size 0x8
    class uid lockedStringReference; // offset 0x8, size 0x8
    int tollCost; // offset 0x10, size 0x4
};
// total size: 0x1
class Heist {};
// total size: 0x18
class Mission {
    // Members
    class uid missionPortal; // offset 0x0, size 0x8
    class uid mission; // offset 0x8, size 0x8
    class uid lockedStringReference; // offset 0x10, size 0x8
};
// total size: 0x50
class Task {
    // Members
    class uid task; // offset 0x0, size 0x8
    class ModelInstanceAsset modelInstance; // offset 0x10, size 0x40
};
// total size: 0x40
class PlaceMarker {
    // Members
    class ModelInstanceAsset modelInstance; // offset 0x0, size 0x40
};
// total size: 0x190
class object_generator : public xDynAsset {
    // Members
    class LinkAsset EventLinksNew; // offset 0x20, size 0x8
    unsigned char generalFlags; // offset 0x28, size 0x1
    unsigned char locationFlags; // offset 0x29, size 0x1
    unsigned char motionFlags; // offset 0x2A, size 0x1
    unsigned char volumeFlags; // offset 0x2B, size 0x1
    float rate; // offset 0x2C, size 0x4
    class ModelInstanceAsset modelInstance; // offset 0x30, size 0x40
    unsigned char anim_rows; // offset 0x70, size 0x1
    unsigned char anim_cols; // offset 0x71, size 0x1
    float cullDistance; // offset 0x74, size 0x4
    int cullPriority; // offset 0x78, size 0x4
    unsigned char motion_type; // offset 0x7C, size 0x1
    unsigned char volume_type; // offset 0x7D, size 0x1
    unsigned char system_type; // offset 0x7E, size 0x1
    class @class motion_data; // offset 0x80, size 0x14
    class @class volume_data; // offset 0x98, size 0x10
    class @class system_data; // offset 0xA8, size 0xE0
};
// total size: 0x14
class @class {
    // Members
    class NoneMotion None; // offset 0x0, size 0x1
    class SpiralMotion Spiral; // offset 0x0, size 0x14
};
// total size: 0x1
class NoneMotion {};
// total size: 0x14
class SpiralMotion {
    // Members
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char points; // offset 0x1, size 0x1
    unsigned char pad1; // offset 0x2, size 0x1
    unsigned char pad2; // offset 0x3, size 0x1
    float radius_inner; // offset 0x4, size 0x4
    float radius_outer; // offset 0x8, size 0x4
    float duration; // offset 0xC, size 0x4
    float frequency; // offset 0x10, size 0x4
};
// total size: 0x10
class @class {
    // Members
    class PointVolume Point; // offset 0x0, size 0x1
    class SphereVolume Sphere; // offset 0x0, size 0x4
    class CircleVolume Circle; // offset 0x0, size 0x10
    class LineVolume Line; // offset 0x0, size 0x10
    class ModelVolume Model; // offset 0x0, size 0x8
    class BoxVolume Box; // offset 0x0, size 0xC
    class CurveVolume Curve; // offset 0x0, size 0x8
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
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char pad1; // offset 0x1, size 0x1
    unsigned char pad2; // offset 0x2, size 0x1
    unsigned char pad3; // offset 0x3, size 0x1
    float xRadius; // offset 0x4, size 0x4
    float yRadius; // offset 0x8, size 0x4
    float length; // offset 0xC, size 0x4
};
// total size: 0x8
class ModelVolume {
    // Members
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char ExcludeAtomics; // offset 0x1, size 0x1
    unsigned char pad1; // offset 0x2, size 0x1
    unsigned char pad2; // offset 0x3, size 0x1
    float expand; // offset 0x4, size 0x4
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
// total size: 0xE0
class @class {
    // Members
    class UberStruct uber; // offset 0x0, size 0xE0
};
// total size: 0xE0
class UberStruct {
    // Members
    float life; // offset 0x0, size 0x4
    float life_var; // offset 0x4, size 0x4
    class velocity velocity; // offset 0x8, size 0x30
    class acceleration acceleration; // offset 0x38, size 0x20
    class color color; // offset 0x58, size 0x28
    class alpha alpha; // offset 0x80, size 0x10
    class scale scale; // offset 0x90, size 0x30
    class rotation rotation; // offset 0xC0, size 0x18
    class animation animation; // offset 0xD8, size 0x8
};
// total size: 0x30
class velocity {
    // Members
    class vec3 velDir; // offset 0x0, size 0xC
    bool velWrldSpc; // offset 0xC, size 0x1
    float velHAngle; // offset 0x10, size 0x4
    float velWAngle; // offset 0x14, size 0x4
    class uid speedCurve; // offset 0x18, size 0x8
    float minSpeed; // offset 0x20, size 0x4
    float maxSpeed; // offset 0x24, size 0x4
    float speedDelta; // offset 0x28, size 0x4
};
// total size: 0x20
class acceleration {
    // Members
    class vec3 accelDir; // offset 0x0, size 0xC
    bool accelWrldSpc; // offset 0xC, size 0x1
    class uid accelCurve; // offset 0x10, size 0x8
    float minAccel; // offset 0x18, size 0x4
    float maxAccel; // offset 0x1C, size 0x4
};
// total size: 0x28
class color {
    // Members
    class uid colorCurve; // offset 0x0, size 0x8
    class FloatColorRGBA minColor; // offset 0x8, size 0x10
    class FloatColorRGBA maxColor; // offset 0x18, size 0x10
};
// total size: 0x10
class FloatColorRGBA {
    // Members
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
};
// total size: 0x10
class alpha {
    // Members
    class uid alphaCurve; // offset 0x0, size 0x8
    float minAlpha; // offset 0x8, size 0x4
    float maxAlpha; // offset 0xC, size 0x4
};
// total size: 0x30
class scale {
    // Members
    class uid widthCurve; // offset 0x0, size 0x8
    float minWidth; // offset 0x8, size 0x4
    float maxWidth; // offset 0xC, size 0x4
    class uid heightCurve; // offset 0x10, size 0x8
    float minHeight; // offset 0x18, size 0x4
    float maxHeight; // offset 0x1C, size 0x4
    class uid depthCurve; // offset 0x20, size 0x8
    float minDepth; // offset 0x28, size 0x4
    float maxDepth; // offset 0x2C, size 0x4
};
// total size: 0x18
class rotation {
    // Members
    unsigned char rotationType; // offset 0x0, size 0x1
    class uid omegaCurve; // offset 0x8, size 0x8
    float minOmega; // offset 0x10, size 0x4
    float maxOmega; // offset 0x14, size 0x4
};
// total size: 0x8
class animation {
    // Members
    bool startRnd; // offset 0x0, size 0x1
    float fps; // offset 0x4, size 0x4
};
// total size: 0x1B0
class SwarmMean : public NPCAsset {
    // Members
    int MemberNumber; // offset 0x180, size 0x4
    float SpawnPeriod; // offset 0x184, size 0x4
    class __AttractorsList__ AttractorsList; // offset 0x188, size 0x8
    class __RepellersList__ RepellersList; // offset 0x190, size 0x8
    unsigned char SwarmVariant; // offset 0x198, size 0x1
    class @class __anon; // offset 0x19C, size 0x8
    class NPCVariantEmpty StinkBug; // offset 0x19C, size 0x1
    class NPCVariantEmpty StinkBugMiniGame; // offset 0x19C, size 0x1
    class NPCVariantSwarmMoth Moth; // offset 0x19C, size 0x8
    class NPCVariantAnt Ant; // offset 0x19C, size 0x4
};
// total size: 0x8
class __AttractorsList__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __RepellersList__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class @class {
    // Members
    class NPCVariantEmpty StinkBug; // offset 0x0, size 0x1
    class NPCVariantEmpty StinkBugMiniGame; // offset 0x0, size 0x1
    class NPCVariantSwarmMoth Moth; // offset 0x0, size 0x8
    class NPCVariantAnt Ant; // offset 0x0, size 0x4
};
// total size: 0x1
class NPCVariantEmpty {};
// total size: 0x8
class NPCVariantSwarmMoth {
    // Members
    float HeightUp; // offset 0x0, size 0x4
    float HeightDown; // offset 0x4, size 0x4
};
// total size: 0x4
class NPCVariantAnt {
    // Members
    int NumberOfMembersCarryingObject; // offset 0x0, size 0x4
};
// total size: 0x1D0
class DetectorHuman : public NPCAsset {
    // Members
    class __PropsList__ PropsList; // offset 0x180, size 0x8
    float DetectionRadius; // offset 0x188, size 0x4
    float DetectionFOV; // offset 0x18C, size 0x4
    float DetectionAngleStation1; // offset 0x190, size 0x4
    float DetectionAngleStation2; // offset 0x194, size 0x4
    float DetectionAngleStation3; // offset 0x198, size 0x4
    float DetectionAngleStation4; // offset 0x19C, size 0x4
    float DetectionMaxHeight; // offset 0x1A0, size 0x4
    float DetectionMinHeight; // offset 0x1A4, size 0x4
    unsigned int InitialStationNum; // offset 0x1A8, size 0x4
    unsigned int DetectorType; // offset 0x1AC, size 0x4
    bool NeverDetect; // offset 0x1B0, size 0x1
    bool KillPlayerWhenDetected; // offset 0x1B1, size 0x1
    class uid First_Move_Point; // offset 0x1B8, size 0x8
    float TurnSpeed; // offset 0x1C0, size 0x4
    class __EventLinks__ EventLinks; // offset 0x1C4, size 0x8
};
// total size: 0x8
class __PropsList__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __EventLinks__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x1B0
class BugCollection : public NPCAsset {
    // Members
    int MemberNumber; // offset 0x180, size 0x4
    float SpawnPeriod; // offset 0x184, size 0x4
    class __AttractorsList__ AttractorsList; // offset 0x188, size 0x8
    class __RepellersList__ RepellersList; // offset 0x190, size 0x8
    unsigned char SwarmVariant; // offset 0x198, size 0x1
    class @class __anon; // offset 0x19C, size 0x8
    class NPCVariantEmpty StinkBug; // offset 0x19C, size 0x1
    class NPCVariantEmpty StinkBugMiniGame; // offset 0x19C, size 0x1
    class NPCVariantSwarmMoth Moth; // offset 0x19C, size 0x8
    class NPCVariantAnt Ant; // offset 0x19C, size 0x4
};
// total size: 0x24
class ComboAnimBlobAssetV2 {
    // Members
    float duration; // offset 0x0, size 0x4
    float timeToFrames; // offset 0x4, size 0x4
    unsigned int frameDuration; // offset 0x8, size 0x4
    unsigned short jointCount; // offset 0xC, size 0x2
    unsigned short locatorCount; // offset 0xE, size 0x2
    unsigned short visCount; // offset 0x10, size 0x2
    unsigned short userCount; // offset 0x12, size 0x2
    unsigned short flags; // offset 0x14, size 0x2
    unsigned short numJointSegments; // offset 0x16, size 0x2
    unsigned short numLocatorSegments; // offset 0x18, size 0x2
    unsigned short numUserSegments; // offset 0x1A, size 0x2
    class SegmentTable segments[1]; // offset 0x1C, size 0x8
};
// total size: 0x8
class SegmentTable {
    // Members
    unsigned int frameStart; // offset 0x0, size 0x4
    unsigned int offset; // offset 0x4, size 0x4
};
// total size: 0x4
class ThreadStackMarkSentry {
    // Members
    void * wm; // offset 0x0, size 0x4
};
// total size: 0x20
class SegmentHeader {
    // Members
    unsigned short frameUnique; // offset 0x0, size 0x2
    unsigned short numStreams; // offset 0x2, size 0x2
    unsigned short rotIdent; // offset 0x4, size 0x2
    unsigned short rotConst; // offset 0x6, size 0x2
    unsigned short rotInterleave; // offset 0x8, size 0x2
    unsigned short rotSingle; // offset 0xA, size 0x2
    unsigned short scaleIdent; // offset 0xC, size 0x2
    unsigned short scaleConst; // offset 0xE, size 0x2
    unsigned short scaleInterleave; // offset 0x10, size 0x2
    unsigned short scaleSingle; // offset 0x12, size 0x2
    unsigned short scaleRaw; // offset 0x14, size 0x2
    unsigned short tranIdent; // offset 0x16, size 0x2
    unsigned short tranConst; // offset 0x18, size 0x2
    unsigned short tranInterleave; // offset 0x1A, size 0x2
    unsigned short tranSingle; // offset 0x1C, size 0x2
    unsigned short tranRaw; // offset 0x1E, size 0x2
};
// total size: 0x1A
class QuatInterleaveKey {
    // Members
    short quatX[4]; // offset 0x0, size 0x8
    short quatY[4]; // offset 0x8, size 0x8
    short quatZ[4]; // offset 0x10, size 0x8
    unsigned short time; // offset 0x18, size 0x2
};
// total size: 0x8
class QuatSingleKey {
    // Members
    short quat[3]; // offset 0x0, size 0x6
    unsigned short time; // offset 0x6, size 0x2
};
// total size: 0x1A
class VecInterleaveKey {
    // Members
    short vec[4][3]; // offset 0x0, size 0x18
    unsigned short time; // offset 0x18, size 0x2
};
// total size: 0x8
class VecSingleKey {
    // Members
    short vec[3]; // offset 0x0, size 0x6
    unsigned short time; // offset 0x6, size 0x2
};
// total size: 0x10
class VecRawKey {
    // Members
    float vec[3]; // offset 0x0, size 0xC
    unsigned int time; // offset 0xC, size 0x4
};
// total size: 0x10
class _OGAnimationSetEntity : public xOGEntity {};
// total size: 0x18
class _OGAnimationSetSchema : public Schema {};
// total size: 0x2008
class zQueue {
    // Members
    int first; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    class AnimSoundEntry data[1024]; // offset 0x8, size 0x2000
};
// total size: 0x8
class AnimSoundEntry {
    // Members
    class AnimationSet * animset; // offset 0x0, size 0x4
    class zSoundAsset * sasset; // offset 0x4, size 0x4
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
// total size: 0x64
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
// total size: 0x8
class @class {
    // Members
    int LCID; // offset 0x0, size 0x4
    int code; // offset 0x4, size 0x4
};
// total size: 0x28
class OSCalendarTime {
    // Members
    int sec; // offset 0x0, size 0x4
    int min; // offset 0x4, size 0x4
    int hour; // offset 0x8, size 0x4
    int mday; // offset 0xC, size 0x4
    int mon; // offset 0x10, size 0x4
    int year; // offset 0x14, size 0x4
    int wday; // offset 0x18, size 0x4
    int yday; // offset 0x1C, size 0x4
    int msec; // offset 0x20, size 0x4
    int usec; // offset 0x24, size 0x4
};
// total size: 0x2B0
class SaveData {
    // Members
    class SaveDataHeader headerData[10]; // offset 0x0, size 0x78
    int curFileCount; // offset 0x78, size 0x4
    void (* curCB)(int result, void * data, bool requestSucceeded); // offset 0x7C, size 0x4
    int lastRequest; // offset 0x80, size 0x4
    void * curBuffer; // offset 0x84, size 0x4
    int curBufferSize; // offset 0x88, size 0x4
    unsigned char * internalBuffer; // offset 0x8C, size 0x4
    int internalBuffSize; // offset 0x90, size 0x4
    int curRequest; // offset 0x94, size 0x4
    bool isSaving; // offset 0x98, size 0x1
    int userCancelled; // offset 0x9C, size 0x4
    bool lastRequestSucceeded; // offset 0xA0, size 0x1
    class SaveDataHeader curHeader; // offset 0xA4, size 0xC
    void * callBackData; // offset 0xB0, size 0x4
    char filePath[64]; // offset 0xB4, size 0x40
    char bannerPath[64]; // offset 0xF4, size 0x40
    class NANDCommandBlock block; // offset 0x134, size 0xBC
    class NANDFileInfo fileInfo; // offset 0x1F0, size 0x8C
    void * bannerImage; // offset 0x27C, size 0x4
    void * bannerIcon[1]; // offset 0x280, size 0x4
    class Time SAVE_WAIT_TIME; // offset 0x288, size 0x8
    class Time lastSaveTime; // offset 0x290, size 0x8
    unsigned char dummyVar8; // offset 0x298, size 0x1
    unsigned long dummyVar32; // offset 0x29C, size 0x4
    bool savingBanner; // offset 0x2A0, size 0x1
    bool needToSaveBanner; // offset 0x2A1, size 0x1
    bool stepDone; // offset 0x2A2, size 0x1
    int copyBufferSize; // offset 0x2A4, size 0x4
    unsigned char * copyBuffer; // offset 0x2A8, size 0x4
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
// total size: 0x4
class EventNotifyDispatcher_SaveState : public EventNotifyNew {
    // Members
    enum eSaveState param0; // offset 0x0, size 0x4
};
enum eSaveState {
    eSaveState_SelectMemCard = 0,
    eSaveState_SelectSlot = 1,
    eSaveState_Saving = 2,
    END_eSaveState_ENUM = 3,
};
// total size: 0xC
class LightKitManager {
    // Members
    class LightKitData * head; // offset 0x0, size 0x4
    class LightKitData * tail; // offset 0x4, size 0x4
    unsigned char count; // offset 0x8, size 0x1
};
enum eGameMode {
    eGameMode_Boot = 0,
    eGameMode_Intro = 1,
    eGameMode_Title = 2,
    eGameMode_Start = 3,
    eGameMode_Load = 4,
    eGameMode_Options = 5,
    eGameMode_Save = 6,
    eGameMode_Pause = 7,
    eGameMode_WorldMap = 8,
    eGameMode_MonsterGallery = 9,
    eGameMode_ConceptArtGallery = 10,
    eGameMode_Game = 11,
    eGameMode_Count = 12,
};
// total size: 0x1
class ModelInstanceArticlePool {};
// total size: 0xC
class SingleBufferAllocator {
    // Members
    unsigned char * buffer; // offset 0x0, size 0x4
    int bufferSize; // offset 0x4, size 0x4
    int pos; // offset 0x8, size 0x4
};
// total size: 0x4C8
class xGlobals {
    // Members
    int profile; // offset 0x0, size 0x4
    char profFunc[6][128]; // offset 0x4, size 0x300
    class xUpdateCullMgr * updateMgr; // offset 0x304, size 0x4
    int sceneFirst; // offset 0x308, size 0x4
    char sceneStart[128]; // offset 0x30C, size 0x80
    unsigned int sceneStartID; // offset 0x38C, size 0x4
    int option_vibration[4]; // offset 0x390, size 0x10
    int option_vibration_p1_menu; // offset 0x3A0, size 0x4
    int option_vibration_p2_menu; // offset 0x3A4, size 0x4
    int option_subtitles; // offset 0x3A8, size 0x4
    int option_useTilt; // offset 0x3AC, size 0x4
    unsigned int slowdown; // offset 0x3B0, size 0x4
    float update_dt; // offset 0x3B4, size 0x4
    unsigned int dumpCutscene; // offset 0x3B8, size 0x4
    short ForceCutscene; // offset 0x3BC, size 0x2
    int useHIPHOP; // offset 0x3C0, size 0x4
    bool NoMusic; // offset 0x3C4, size 0x1
    bool NoSoundFX; // offset 0x3C5, size 0x1
    bool EnableOneLiner; // offset 0x3C6, size 0x1
    bool NoCutscenes; // offset 0x3C7, size 0x1
    bool NoPadCheck; // offset 0x3C8, size 0x1
    bool skippableCutscenes; // offset 0x3C9, size 0x1
    bool firstStartPressed; // offset 0x3CA, size 0x1
    bool fromLauncher; // offset 0x3CB, size 0x1
    bool skipAssertWithController; // offset 0x3CC, size 0x1
    bool enableHelperAI; // offset 0x3CD, size 0x1
    bool enableHelperAIAttack; // offset 0x3CE, size 0x1
    bool enableDebugControls; // offset 0x3CF, size 0x1
    bool showReleaseMemInfo; // offset 0x3D0, size 0x1
    bool FlashWIP; // offset 0x3D1, size 0x1
    bool inLoadingScreen; // offset 0x3D2, size 0x1
    bool LoadingScene; // offset 0x3D3, size 0x1
    bool InitializingLoadingScreen; // offset 0x3D4, size 0x1
    bool ForceMono; // offset 0x3D5, size 0x1
    bool UnlimitedNukes; // offset 0x3D6, size 0x1
    unsigned int minVSyncCnt; // offset 0x3D8, size 0x4
    bool dontShowPadMessageDuringLoadingOrCutScene; // offset 0x3DC, size 0x1
    bool autoSaveFeature; // offset 0x3DD, size 0x1
    bool skipAsserts; // offset 0x3DE, size 0x1
    bool beforeFirstFrame; // offset 0x3DF, size 0x1
    int asyncLoadingScreen; // offset 0x3E0, size 0x4
    int asyncLoadingFlags; // offset 0x3E4, size 0x4
    char fromLauncherUser[32]; // offset 0x3E8, size 0x20
    class zPlayerContainer players; // offset 0x408, size 0x14
    class zScene * sceneCur; // offset 0x41C, size 0x4
    class zScene * scenePreload; // offset 0x420, size 0x4
    class PS2DemoGlobals * PS2demo; // offset 0x424, size 0x4
    char watermark[127]; // offset 0x428, size 0x7F
    unsigned char watermarkAlpha; // offset 0x4A7, size 0x1
    float watermarkSize; // offset 0x4A8, size 0x4
    bool showMenuOnBoot; // offset 0x4AC, size 0x1
    bool enableHUD; // offset 0x4AD, size 0x1
    bool skipAnimViewer; // offset 0x4AE, size 0x1
    bool allowPadActiveOnStart; // offset 0x4AF, size 0x1
    unsigned int autoSaveSlot; // offset 0x4B0, size 0x4
    bool inSystemMessage; // offset 0x4B4, size 0x1
    bool clearXSerializer; // offset 0x4B5, size 0x1
    bool AutoSaving; // offset 0x4B6, size 0x1
    bool acceptButtonFlipped; // offset 0x4B7, size 0x1
    bool allowDeviceLostTRC; // offset 0x4B8, size 0x1
    int playerPort; // offset 0x4BC, size 0x4
    bool enableWireFrameDebugger; // offset 0x4C0, size 0x1
    bool enableWireFrameDebuggerConvexShapes; // offset 0x4C1, size 0x1
    float wireFrameDebuggerDrawDistance; // offset 0x4C4, size 0x4
};
// total size: 0x14
class zPlayerContainer {
    // Members
    class zPlayer * playerArray[4]; // offset 0x0, size 0x10
    int numPlayers; // offset 0x10, size 0x4
};
// total size: 0x38
class PS2DemoGlobals {
    // Members
    unsigned short language; // offset 0x0, size 0x2
    unsigned short aspect; // offset 0x2, size 0x2
    unsigned short play_mode; // offset 0x4, size 0x2
    unsigned short inactive_timeout; // offset 0x6, size 0x2
    unsigned short gameplay_timeout; // offset 0x8, size 0x2
    enum sceDemoEndReason exit_code; // offset 0xC, size 0x4
    unsigned int FMV_playing : 1; // offset 0x10, size 0x4, bit offset 0
    unsigned int more_padding : 31; // offset 0x10, size 0x4, bit offset 1
    float bail_timer; // offset 0x14, size 0x4
    int inactive_detect; // offset 0x18, size 0x4
    float inactive_timer; // offset 0x1C, size 0x4
    float gameplay_timer; // offset 0x20, size 0x4
    char subdir[16]; // offset 0x24, size 0x10
    unsigned short quit; // offset 0x34, size 0x2
    unsigned short vmode; // offset 0x36, size 0x2
};
enum sceDemoEndReason {
    SCE_DEMO_ENDREASON_ATTRACT_INTERRUPTED = 0,
    SCE_DEMO_ENDREASON_ATTRACT_COMPLETE = 1,
    SCE_DEMO_ENDREASON_PLAYABLE_INACTIVITY_TIMEOUT = 2,
    SCE_DEMO_ENDREASON_PLAYABLE_GAMEPLAY_TIMEOUT = 3,
    SCE_DEMO_ENDREASON_PLAYABLE_COMPLETE = 4,
    SCE_DEMO_ENDREASON_PLAYABLE_QUIT = 5,
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
// total size: 0x568
class zGlobals : public xGlobals {
    // Members
    class zGlobalSettings settings; // offset 0x4C8, size 0x18
    class zCheckPoint checkPoint; // offset 0x4E0, size 0x10
    unsigned long long curCheckPointUID; // offset 0x4F0, size 0x8
    unsigned int playerTag[4]; // offset 0x4F8, size 0x10
    class zAssetPickupTable * pickupTable; // offset 0x508, size 0x4
    class zTortureChamberManager * tortureChamberMgr; // offset 0x50C, size 0x4
    class zCinematic * runningCinematic; // offset 0x510, size 0x4
    class zCameraFly * runningCameraFly; // offset 0x514, size 0x4
    long long gameTimer; // offset 0x518, size 0x8
    long long lastGameTick; // offset 0x520, size 0x8
    char startDebugMode[32]; // offset 0x528, size 0x20
    unsigned int noMovies; // offset 0x548, size 0x4
    unsigned int boundUpdateTime; // offset 0x54C, size 0x4
    int maxLevelUnlocked; // offset 0x550, size 0x4
    bool bAllowMasterCheats; // offset 0x554, size 0x1
    bool enableFriendlyFly; // offset 0x555, size 0x1
    bool stopCurrentConversation; // offset 0x556, size 0x1
    bool fmvJustFinished; // offset 0x557, size 0x1
    bool fmvPlaying; // offset 0x558, size 0x1
    bool playerLoaded; // offset 0x559, size 0x1
    bool needAutoSave; // offset 0x55A, size 0x1
    bool loadSavedCheckpoint; // offset 0x55B, size 0x1
    bool timingGame; // offset 0x55C, size 0x1
    bool timeGameAfterPortal; // offset 0x55D, size 0x1
    bool saveGameEnabled; // offset 0x55E, size 0x1
    bool resettingSave; // offset 0x55F, size 0x1
    enum zGlobalDemoType demoType; // offset 0x560, size 0x4
    enum eAnimSetType firstPlayerAnimSetType; // offset 0x564, size 0x4
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
// total size: 0x220
class zTortureChamberManager : public xBase {
    // Members
    class TortureRow rows[21]; // offset 0x20, size 0x1F8
    bool shouldReset; // offset 0x218, size 0x1
};
// total size: 0x18
class TortureRow {
    // Members
    int validCellCount; // offset 0x0, size 0x4
    int playIndex; // offset 0x4, size 0x4
    class TortureCell * cells[4]; // offset 0x8, size 0x10
};
// total size: 0x18
class TortureCell {
    // Members
    unsigned long long ownerAssetID; // offset 0x0, size 0x8
    unsigned long long cineID; // offset 0x8, size 0x8
    class zCinematic * cine; // offset 0x10, size 0x4
};
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
// total size: 0x320
class hkThreadMemory {
    // Members
    class hkMemory * m_memory; // offset 0x4, size 0x4
    int m_referenceCount; // offset 0x8, size 0x4
    class Stack m_stack; // offset 0x10, size 0x10
    int m_stackSize; // offset 0x20, size 0x4
    int m_maxNumElemsOnFreeList; // offset 0x24, size 0x4
    class FreeList m_free_list[17]; // offset 0x28, size 0x88
    int m_row_to_size_lut[17]; // offset 0xB0, size 0x44
    char m_small_size_to_row_lut[513]; // offset 0xF4, size 0x201
    int m_large_size_to_row_lut[8]; // offset 0x2F8, size 0x20
};
// total size: 0xA18
class hkMemory {
    // Members
    enum MemoryState m_memoryState; // offset 0x4, size 0x4
    int m_criticalMemoryLimit; // offset 0x8, size 0x4
    int m_memoryUsed; // offset 0xC, size 0x4
    int m_referenceCount; // offset 0x10, size 0x4
    int m_numValidBigBlocks; // offset 0x14, size 0x4
    class BigBlockData m_bigBlockDataArray[128]; // offset 0x18, size 0xA00
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
    HK_MEMORY_CLASS_TOOLS = 17,
    HK_MEMORY_CLASS_DEMO_FRAMEWORK = 18,
    HK_MEMORY_CLASS_DEMO = 19,
    HK_MEMORY_CLASS_USER = 20,
    HK_MEMORY_CLASS_BASE_CLASS = 21,
    HK_MEMORY_CLASS_STRING = 22,
    HK_MEMORY_CLASS_ARRAY = 23,
    HK_MEMORY_CLASS_SINGLETON = 24,
    HK_MEMORY_CLASS_SCRATCHPAD = 25,
    HK_MEMORY_CLASS_STREAM = 26,
    HK_MEMORY_CLASS_MONITOR = 27,
    HK_MEMORY_CLASS_MAP = 28,
    HK_MEMORY_CLASS_TREE = 29,
    HK_MEMORY_CLASS_HKCLASS = 30,
    HK_MEMORY_CLASS_AGENT = 31,
    HK_MEMORY_CLASS_ALGORITHM = 32,
    HK_MEMORY_CLASS_BROAD_PHASE = 33,
    HK_MEMORY_CLASS_CONTACT = 34,
    HK_MEMORY_CLASS_DISPATCH = 35,
    HK_MEMORY_CLASS_MANIFOLD = 36,
    HK_MEMORY_CLASS_SHAPE = 37,
    HK_MEMORY_CLASS_COLLIDABLE = 38,
    HK_MEMORY_CLASS_CDINFO = 39,
    HK_MEMORY_CLASS_MOPP = 40,
    HK_MEMORY_CLASS_ACTION = 41,
    HK_MEMORY_CLASS_DYNCOLLIDE = 42,
    HK_MEMORY_CLASS_DEACTIVATOR = 43,
    HK_MEMORY_CLASS_CONSTRAINT = 44,
    HK_MEMORY_CLASS_ENTITY = 45,
    HK_MEMORY_CLASS_MOTION = 46,
    HK_MEMORY_CLASS_WORLD = 47,
    HK_MEMORY_CLASS_RIGID_BODY = 48,
    HK_MEMORY_CLASS_PHANTOM = 49,
    HK_MEMORY_CLASS_SIMISLAND = 50,
    HK_MEMORY_CLASS_CAMERA = 51,
    HK_MEMORY_CLASS_CHARACTER = 52,
    HK_MEMORY_CLASS_VDB = 53,
    HK_MEMORY_CLASS_INERTIA = 54,
    HK_MEMORY_CLASS_ANIM_UNCOMPRESSED = 55,
    HK_MEMORY_CLASS_ANIM_COMPRESSED = 56,
    HK_MEMORY_CLASS_ANIM_DATA = 57,
    HK_MEMORY_CLASS_ANIM_MOTION = 58,
    HK_MEMORY_CLASS_ANIM_RIG = 59,
    HK_MEMORY_CLASS_ANIM_CONTROL = 60,
    HK_MEMORY_CLASS_ANIM_RUNTIME = 61,
    HK_MEMORY_CLASS_ANIM_CACHE = 62,
    HK_MEMORY_CLASS_BEHAVIOR_RUNTIME = 63,
    HK_MEMORY_CLASS_BEHAVIOR_DEMOS = 64,
    HK_MEMORY_CLASS_CLOTH_RUNTIME = 65,
    HK_MEMORY_CLASS_CLOTH_DATA = 66,
    HK_MEMORY_CLASS_USER_1 = 67,
    HK_MEMORY_CLASS_USER_2 = 68,
    HK_MEMORY_CLASS_USER_3 = 69,
    HK_MEMORY_CLASS_USER_4 = 70,
    HK_MEMORY_CLASS_PRE_ALLOCATED = 71,
    HK_MEMORY_CLASS_MAX = 72,
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
