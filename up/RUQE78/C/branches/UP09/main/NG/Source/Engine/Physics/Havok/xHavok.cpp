/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Physics\Havok\xHavok.cpp
*/
class hkTestEntry * hkUnitTestDatabase; // size: 0x4, address: 0x8084DB78
float gMoppBuildingTime; // size: 0x4, address: 0x8084DB7C
float gShapeShrinkingTime; // size: 0x4, address: 0x8084DB80
float gWorldResettingTime; // size: 0x4, address: 0x8084DB84
void * moppHavokBuffer; // size: 0x4, address: 0x8084DB8C
bool moppHavokBufferReady; // size: 0x1, address: 0x8084DB90
class hkVector4 gHavokCamFrom; // size: 0x10, address: 0x8084DBA0
class hkVector4 gHavokCamTo; // size: 0x10, address: 0x8084DBB0
class hkVector4 gHavokCamUp; // size: 0x10, address: 0x8084DBC0
float gHavokCamFOV; // size: 0x4, address: 0x8084DBD0
float gHavokCamZNear; // size: 0x4, address: 0x807C11A4
float gHavokCamZFar; // size: 0x4, address: 0x807C11A8
static class hkThreadMemory * gpThreadMemory; // size: 0x4, address: 0x8084DBD4
static char * gStackBuffer; // size: 0x4, address: 0x8084DBD8
static bool _gRenderingInited; // size: 0x1, address: 0x8084DBDC
static class HavokPrimObj gCollSphere; // size: 0x4, address: 0x8084DBEC
static class hkpWorld * ghkSimWorld; // size: 0x4, address: 0x8084DBF0
static class CriticalSection gSimWorldCS; // size: 0x20, address: 0x8084DC00
static float gHavokWorldSize; // size: 0x4, address: 0x807C11AC
static class hkArray gDoneShapes; // size: 0xC, address: 0x8084DC2C
static int added; // size: 0x4, address: 0x8084DC38
static class RelativePriority priority[1]; // size: 0xC, address: 0x807C11B0
class HavokModule havokmod; // size: 0x98, address: 0x8084DC40
static class ModuleRegistrator havokModReg; // size: 0x8, address: 0x8084DCD8
static int STEP_HKWORLD; // size: 0x4, address: 0x8084DCE0
// signature: hkPoolMemoryHI::allocateChunkBatch(void **, int, int)
// Range: 0x803700AC -> 0x803700B0
void hkPoolMemoryHI::allocateChunkBatch() {
}
// signature: hkPoolMemoryHI::deallocateChunkBatch(void **, int, int)
// Range: 0x803700A8 -> 0x803700AC
void hkPoolMemoryHI::deallocateChunkBatch() {
}
// signature: hkPoolMemoryHI::allocateChunk(int, HK_MEMORY_CLASS)
// Range: 0x80370068 -> 0x803700A8
void * hkPoolMemoryHI::allocateChunk() {
    // References
    // -> void * moppHavokBuffer;
    // -> bool moppHavokBufferReady;
}
// signature: hkPoolMemoryHI::deallocateChunk(void *, int, HK_MEMORY_CLASS)
// Range: 0x80370040 -> 0x80370068
void hkPoolMemoryHI::deallocateChunk() {
    // References
    // -> bool moppHavokBufferReady;
    // -> void * moppHavokBuffer;
}
// signature: hkPoolMemoryHI::getAllocatedSize(int)
// Range: 0x8037003C -> 0x80370040
int hkPoolMemoryHI::getAllocatedSize() {
}
// signature: hkPoolMemoryHI::preAllocateRuntimeBlock(int, HK_MEMORY_CLASS)
// Range: 0x80370038 -> 0x8037003C
void hkPoolMemoryHI::preAllocateRuntimeBlock() {
}
// signature: hkPoolMemoryHI::allocateRuntimeBlock(int, HK_MEMORY_CLASS)
// Range: 0x80370034 -> 0x80370038
void * hkPoolMemoryHI::allocateRuntimeBlock() {
}
// signature: hkPoolMemoryHI::deallocateRuntimeBlock(void *, int, HK_MEMORY_CLASS)
// Range: 0x80370030 -> 0x80370034
void hkPoolMemoryHI::deallocateRuntimeBlock() {
}
// signature: hkPoolMemoryHI::provideRuntimeBlock(void *, int, HK_MEMORY_CLASS)
// Range: 0x8037002C -> 0x80370030
void hkPoolMemoryHI::provideRuntimeBlock() {
}
// Range: 0x80370028 -> 0x8037002C
void hkPoolMemoryHI::freeRuntimeBlocks() {
}
// Range: 0x8032A5E0 -> 0x8032A5EC
class hkpWorld * xHavok_GetWorld() {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: _HavokAlloc(int, int)
// Range: 0x8032A5EC -> 0x8032AC58
static void * _HavokAlloc(int size /* r27 */) {
    // References
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// Range: 0x8032AC58 -> 0x8032B0A0
static void _HavokFree(void * p /* r30 */) {
    // References
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// signature: errorReport(const char *, void *)
// Range: 0x8032B0A0 -> 0x8032B0A4
static void errorReport() {
}
// Range: 0x8032B0A4 -> 0x8032B2D8
void HavokPrimObj::Create(class HavokPrimObj * this /* r31 */, enum hkpShapeType type /* r30 */) {
    // Local variables
    class hkpRigidBodyCinfo info; // r1+0x60

    // References
    // -> float hkConvexShapeDefaultRadius;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x8032B7D0 -> 0x8032B814
void HavokPrimObj::Delete(class HavokPrimObj * this /* r31 */) {
}
// signature: HavokPrimObj::SetSphere(const hkVector4 &, float)
// Range: 0x8032B814 -> 0x8032B828
void HavokPrimObj::SetSphere() {
}
// signature: HavokPrimObj::SetCylinder(const hkVector4 &, const hkVector4 &, const hkVector4 &, float)
// Range: 0x8032B828 -> 0x8032B8A0
void HavokPrimObj::SetCylinder(class HavokPrimObj * this /* r27 */, class hkVector4 & pos /* r28 */, class hkVector4 & p0 /* r29 */, class hkVector4 & p1 /* r30 */) {
    // Local variables
    class hkpCylinderShape * pShape; // r31
}
// signature: HavokPrimObj::SetBox(const hkVector4 &, const hkVector4 &)
// Range: 0x8032B8A0 -> 0x8032B8F0
void HavokPrimObj::SetBox(class HavokPrimObj * this /* r30 */, class hkVector4 & pos /* r31 */) {
}
// signature: _InSimWorld(const hkpCharacterProxy *)
// Range: 0x8032B8F0 -> 0x8032B900
static bool _InSimWorld() {
}
// Range: 0x8032B900 -> 0x8032BAB4
static class hkpGroupFilter * _GetCollFilter() {
    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x8032BAB4 -> 0x8032BC28
static void _MakeSimWorld() {
    // Local variables
    class hkpWorldCinfo info; // r1+0x20
    class hkpGroupFilter * filter; // r30

    // References
    // -> static class hkpWorld * ghkSimWorld;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x8032BC28 -> 0x8032BD80
static void _UpdateCharacterProxyMotion(class hkpCharacterProxy * pCharacterProxy /* r28 */, class hkVector4 & vel /* r29 */, float dTime /* f31 */, class hkpAllCdPointCollector * castCollector /* r30 */, class hkpAllCdPointCollector * startPointCollector /* r31 */) {
    {
        // Range: 0x8032BC6C -> 0x8032BD48
        // Local variables
        class hkStepInfo si; // r1+0x20
        class HavokSimWorldLock sentry; // r1+0x10

        {
            // Range: 0x8032BCF8 -> 0x8032BD30
            // Local variables
            class TriggerIdentifyingPointCollector defaultStartPointCollector; // r1+0x30
            class TriggerIdentifyingPointCollector defaultCastCollector; // r1+0x1F0
        }
    }

    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_GetRigidBodyDynamicData(const hkpRigidBody *, hkTransform *, hkVector4 *, hkVector4 *)
// Range: 0x8032BD80 -> 0x8032BE64
bool xHavok_GetRigidBodyDynamicData() {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// Range: 0x8032BE64 -> 0x8032BF54
void xHavok_GetWorldSize(class hkVector4 & min /* r29 */, class hkVector4 & max /* r30 */) {
    // Local variables
    class hkpWorldCinfo info; // r1+0x10

    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_SetWorldSize(const hkVector4 &, const hkVector4 &)
// Range: 0x8032BF54 -> 0x8032BF84
void xHavok_SetWorldSize() {
    // References
    // -> float gWorldResettingTime;
    // -> float gShapeShrinkingTime;
    // -> float gMoppBuildingTime;
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_LoadPhysicsData(const void *, const hkRootLevelContainer **, int *)
// Range: 0x8032BF84 -> 0x8032C058
void * xHavok_LoadPhysicsData(void * pBaseData /* r29 */, class hkRootLevelContainer * * container /* r30 */) {
    // Local variables
    char * pData; // r31
    class HavokChunkHeader * pHeader; // r0

    {
        // Range: 0x8032BFD0 -> 0x8032C028
        // Local variables
        class hkBinaryPackfileReader reader; // r1+0x8
    }
}
// signature: xHavok_TestStaticCollision(const hkpCollidable *, const hkpRigidBody *, hkArray<CollectedTriangle> &)
// Range: 0x8032C9B4 -> 0x8032D604
bool xHavok_TestStaticCollision(class hkArray & collTris /* r29 */) {
    // Local variables
    class hkpShape * pShapeB; // r0
    class hkpCollisionDispatcher * dispatcher; // r0
    class hkpCollisionInput input; // r1+0x10
    void (* testFunc)(class hkpCdBody & bodyA, class hkpCdBody & bodyB, class hkpCollisionInput & input, class hkpCdPointCollector & output); // r12
    class TrianglePointCollector collector; // r1+0x60

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> struct {} __vt__22TrianglePointCollector;
    // -> struct {} __vt__22hkpAllCdPointCollector;
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_TestRayInSimWorld(const hkVector4 &, const hkVector4 &, hkVector4 &, float &, void **, unsigned int)
// Range: 0x8032D604 -> 0x8032D998
bool xHavok_TestRayInSimWorld(class hkVector4 & pos /* r29 */, float & toHitDistance /* r30 */, void * * outputOwner /* r31 */) {
    // Local variables
    class hkpWorldRayCastInput input; // r1+0x20
    class hkpWorldRayCastOutput output; // r1+0x50

    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_TestRayAndCollectInSimWorld(const hkVector4 &, const hkVector4 &, hkpAllRayHitCollector &)
// Range: 0x8032D998 -> 0x8032DC78
bool xHavok_TestRayAndCollectInSimWorld(class hkpAllRayHitCollector & collector /* r31 */) {
    // Local variables
    class hkpWorldRayCastInput input; // r1+0x20

    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_TestRayInSimWorld(const hkVector4 &, const hkVector4 &, hkpRayHitCollector &, unsigned int, const hkpCollisionFilter *)
// Range: 0x8032DC78 -> 0x8032DF88
void xHavok_TestRayInSimWorld(class hkpRayHitCollector & collector /* r30 */, class hkpCollisionFilter * filter /* r31 */) {
    // Local variables
    class hkpWorldRayCastInput input; // r1+0x20
    class hkpWorldRayCaster rayCaster; // r1+0x50

    // References
    // -> struct {} __vt__17hkpWorldRayCaster;
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_TestRayInSimWorldPerFace(const hkVector4 &, const hkVector4 &, hkpRayHitCollector &, const E_HAVOK_COLLIDE_FILTER_LAYER)
// Range: 0x8032DF88 -> 0x8032E250
void xHavok_TestRayInSimWorldPerFace(class hkpRayHitCollector & collector /* r31 */) {
    // Local variables
    class hkpWorldRayCastInput input; // r1+0x20

    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_SphereCastInSimWorldPerFace(const hkVector4 &, const hkVector4 &, float, hkpCdPointCollector &, const E_HAVOK_COLLIDE_FILTER_LAYER)
// Range: 0x8032E250 -> 0x8032E3E8
void xHavok_SphereCastInSimWorldPerFace(class hkVector4 & to /* r29 */, float radius /* f31 */, class hkpCdPointCollector & collector /* r30 */, enum E_HAVOK_COLLIDE_FILTER_LAYER filter /* r31 */) {
    // Local variables
    class hkTransform hkCastPos; // r1+0x40
    class hkpSphereShape * sphereShape; // r0
    class hkpCollidable tempCollidable; // r1+0x80
    class hkpLinearCastInput input; // r1+0x20

    // References
    // -> static class hkpWorld * ghkSimWorld;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// signature: xHavok_GetPenetrationInformation(const hkpCollidable *, const hkpCollidable *, hkVector4 &, hkVector4 &)
// Range: 0x8032E3E8 -> 0x8032E4B4
void xHavok_GetPenetrationInformation(class hkVector4 & closestPoint /* r30 */, class hkVector4 & normal /* r31 */) {
    // Local variables
    class hkpCollisionDispatcher * theDispatcher; // r0
    class ClosestPointCollector collector; // r1+0x10

    // References
    // -> struct {} __vt__36ClosestPointCollector;
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: ClosestPointCollector::addCdPoint(const hkpCdPoint &)
// Range: 0x8036FFD8 -> 0x80370014
void ClosestPointCollector::addCdPoint() {
}
// signature: xHavok_LinearCast(const hkpCollidable *, const hkpLinearCastInput &, hkpCdPointCollector &)
// Range: 0x8032E4B8 -> 0x8032E4DC
void xHavok_LinearCast(class hkpCollidable * collA /* r7 */, class hkpLinearCastInput & input /* r0 */) {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: HavokModule::Startup(int)
// Range: 0x8032E4DC -> 0x8032EB34
void HavokModule::Startup() {
    // References
    // -> static class HavokPrimObj gCollSphere;
    // -> static char * gStackBuffer;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> int havokIndex;
    // -> int gInHavokInit;
    // -> static class hkThreadMemory * gpThreadMemory;
    // -> bool moppHavokBufferReady;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> void * moppHavokBuffer;
    // -> struct {} __vt__14hkPoolMemoryHI;
    // -> void (* hkSystemFree)(void * p);
    // -> void * (* hkSystemMalloc)(int size, int align);
}
// signature: HavokModule::Shutdown(int)
// Range: 0x8032EB34 -> 0x8032EBD8
void HavokModule::Shutdown() {
    // References
    // -> int gInHavokDeinit;
    // -> static char * gStackBuffer;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> static class hkThreadMemory * gpThreadMemory;
    // -> static class hkpWorld * ghkSimWorld;
    // -> static class HavokPrimObj gCollSphere;
}
// signature: HavokModule::GetPriority(int &) const
// Range: 0x8032EBD8 -> 0x8032EC18
class RelativePriority * HavokModule::GetPriority() const {
    // References
    // -> static class RelativePriority priority[1];
    // -> class Module * bootStrapModule;
}
// Range: 0x8032EC1C -> 0x8032ECD0
void xHavok_AddToSimWorld(class hkpPhysicsSystem * physicsSystem /* r31 */) {
    // References
    // -> static int added;
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_AddToSimWorld(hkpRigidBody *, hkpEntityActivation)
// Range: 0x8032ECD0 -> 0x8032ED50
void xHavok_AddToSimWorld(class hkpRigidBody * pRigidBody /* r31 */) {
    // References
    // -> static int added;
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_AddToSimWorldBatch(hkpEntity *const *, int, hkpEntityActivation)
// Range: 0x8032ED50 -> 0x8032EDDC
void xHavok_AddToSimWorldBatch(class hkpEntity * * entityBatch /* r28 */, int entityTotal /* r29 */) {
    {
        // Range: 0x8032ED8C -> 0x8032EDA8
        // Local variables
        int idx; // r30
    }

    // References
    // -> static int added;
    // -> static class hkpWorld * ghkSimWorld;
}
// Range: 0x8032EDDC -> 0x8032EE48
void xHavok_AddToSimWorld(class hkpPhantom * pPhantomObject /* r31 */) {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// Range: 0x8032EE48 -> 0x8032EEC4
void xHavok_RemoveFromSimWorld(class hkpRigidBody * pRigidBody /* r31 */) {
    // References
    // -> static int added;
    // -> static class hkpWorld * ghkSimWorld;
}
// Range: 0x8032EEC4 -> 0x8032EF90
void xHavok_RemoveFromSimWorld(class hkpPhysicsSystem * physicsSystem /* r29 */) {
    // References
    // -> static int added;
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_RemoveFromSimWorld(hkpPhantom *)
// Range: 0x8032EF90 -> 0x8032EFD0
void xHavok_RemoveFromSimWorld() {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_InSimWorld(const hkpRigidBody *)
// Range: 0x8032EFD0 -> 0x8032EFFC
int xHavok_InSimWorld() {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_UpdateRigidBodyMotion(hkpRigidBody *, const hkVector4 &, const hkQuaternion &, float)
// Range: 0x8032EFFC -> 0x8032F0D0
void xHavok_UpdateRigidBodyMotion(class hkpRigidBody * pRigidBody /* r30 */) {
    // References
    // -> class hkVector4 hkVector4Zero;
    // -> static class hkpWorld * ghkSimWorld;
}
// Range: 0x8032F0D0 -> 0x8032F150
void xHavok_ApplyLinearImpulse(class hkpRigidBody * pRigidBody /* r30 */, class hkVector4 & impulse /* r31 */) {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// Range: 0x8032F150 -> 0x8032F1D0
void xHavok_SetVelocity(class hkpRigidBody * pRigidBody /* r30 */, class hkVector4 & velocity /* r31 */) {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_SetCollisionFilterInfo(hkpRigidBody *, E_HAVOK_COLLIDE_FILTER_LAYER)
// Range: 0x8032F1D0 -> 0x8032F21C
void xHavok_SetCollisionFilterInfo() {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// Range: 0x8032F21C -> 0x8032F22C
void xHavok_BSPVisibilityChecked() {
    // References
    // -> static int STEP_HKWORLD;
}
// signature: xHavok_UpdateSimWorld(float)
// Range: 0x8032F22C -> 0x8032F29C
void xHavok_UpdateSimWorld() {
    // References
    // -> float gShapeShrinkingTime;
    // -> float gMoppBuildingTime;
    // -> static class hkpWorld * ghkSimWorld;
    // -> static int STEP_HKWORLD;
}
// Range: 0x8032F29C -> 0x8032F95C
void xHavok_DeleteAndCreate() {
    // References
    // -> static int STEP_HKWORLD;
    // -> int havokIndex;
    // -> int gInHavokInit;
    // -> bool moppHavokBufferReady;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> void * moppHavokBuffer;
    // -> struct {} __vt__14hkPoolMemoryHI;
    // -> void (* hkSystemFree)(void * p);
    // -> void * (* hkSystemMalloc)(int size, int align);
    // -> int gInHavokDeinit;
    // -> static char * gStackBuffer;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> static class hkThreadMemory * gpThreadMemory;
    // -> static class hkpWorld * ghkSimWorld;
    // -> static class HavokPrimObj gCollSphere;
}
// Range: 0x8032F95C -> 0x8032F96C
class hkVector4 & xHavok_GetGravity() {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_SetGravity(const hkVector4 &)
// Range: 0x8032F96C -> 0x8032F97C
void xHavok_SetGravity() {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_UpdateCharacterProxyMotion(hkpCharacterProxy *, const hkVector4 &, float, hkpAllCdPointCollector *, hkpAllCdPointCollector *)
// Range: 0x8032F97C -> 0x8032F980
void xHavok_UpdateCharacterProxyMotion() {
}
// signature: xHavok_UpdateCharacterProxyMotionCheat(hkpCharacterProxy *, const hkVector4 &)
// Range: 0x8032F980 -> 0x8033051C
void xHavok_UpdateCharacterProxyMotionCheat() {
    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> struct {} __vt__32TriggerIdentifyingPointCollector;
    // -> struct {} __vt__22hkpAllCdPointCollector;
}
// signature: xHavok_ReorientPhantomWithHitList(const hkRotation &, hkpShapePhantom *, hkpClosestCdPointCollector &)
// Range: 0x8033051C -> 0x803306D0
class hkVector4 * xHavok_ReorientPhantomWithHitList(class hkpShapePhantom * m_phantom /* r29 */, class hkpClosestCdPointCollector & collector /* r30 */) {
    // Local variables
    class hkpWorld * m_world; // r31
    class hkTransform oldTransform; // r1+0xD0
    class hkTransform newTransform; // r1+0x90

    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_ForceReorientPhantom(const hkRotation &, hkpShapePhantom *)
// Range: 0x803306D0 -> 0x803307B4
class hkBool xHavok_ForceReorientPhantom() {
    // Local variables
    class hkpWorld * m_world; // r0
    class hkTransform newTransform; // r1+0x50
}
// Range: 0x803307B4 -> 0x80330850
class hkpRigidBody * xHavok_CreateRigidBody(class hkpRigidBodyCinfo & info /* r29 */, int hkOwnerType /* r30 */) {
    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x80330850 -> 0x803309EC
class hkpRigidBody * xHavok_CreateRigidBody(class hkpShape * shape /* r27 */, class hkEnum & MotionType /* r28 */, float Mass /* f26 */, float Friction /* f27 */, float Restitution /* f28 */, unsigned int CollisionLayer /* r29 */, float AngularDamping /* f29 */, float LinearDamping /* f30 */, float AllowedPenetrationDepth /* f31 */, class hkEnum & DeactivatorType /* r30 */, class hkEnum & SolverDeactivation /* r31 */) {
    // Local variables
    class hkpRigidBodyCinfo info; // r1+0x20

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
