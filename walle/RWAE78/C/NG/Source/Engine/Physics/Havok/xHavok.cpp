/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Physics\Havok\xHavok.cpp
*/
class hkTestEntry * hkUnitTestDatabase; // size: 0x4, address: 0x80806710
float gMoppBuildingTime; // size: 0x4, address: 0x80806714
float gShapeShrinkingTime; // size: 0x4, address: 0x80806718
float gWorldResettingTime; // size: 0x4, address: 0x8080671C
void * moppHavokBuffer; // size: 0x4, address: 0x80806724
bool moppHavokBufferReady; // size: 0x1, address: 0x80806728
class hkVector4 gHavokCamFrom; // size: 0x10, address: 0x80806730
class hkVector4 gHavokCamTo; // size: 0x10, address: 0x80806740
class hkVector4 gHavokCamUp; // size: 0x10, address: 0x80806750
float gHavokCamFOV; // size: 0x4, address: 0x80806760
float gHavokCamZNear; // size: 0x4, address: 0x8070B13C
float gHavokCamZFar; // size: 0x4, address: 0x8070B140
static class hkThreadMemory * gpThreadMemory; // size: 0x4, address: 0x80806764
static char * gStackBuffer; // size: 0x4, address: 0x80806768
static bool _gRenderingInited; // size: 0x1, address: 0x8080676C
static class HavokPrimObj gCollSphere; // size: 0x4, address: 0x8080677C
static class hkpWorld * ghkSimWorld; // size: 0x4, address: 0x80806780
static class CriticalSection gSimWorldCS; // size: 0x18, address: 0x80806790
static float gHavokWorldSize; // size: 0x4, address: 0x8070B144
static class hkArray gDoneShapes; // size: 0xC, address: 0x808067B4
static int added; // size: 0x4, address: 0x808067C0
static class RelativePriority priority[1]; // size: 0xC, address: 0x8070B148
class HavokModule havokmod; // size: 0x98, address: 0x808067C8
static class ModuleRegistrator havokModReg; // size: 0x8, address: 0x80806860
static int STEP_HKWORLD; // size: 0x4, address: 0x80806868
// signature: hkPoolMemoryHI::allocateChunkBatch(void **, int, int)
// Range: 0x802C3CB4 -> 0x802C3CB8
void hkPoolMemoryHI::allocateChunkBatch() {
}
// signature: hkPoolMemoryHI::deallocateChunkBatch(void **, int, int)
// Range: 0x802C3CB0 -> 0x802C3CB4
void hkPoolMemoryHI::deallocateChunkBatch() {
}
// signature: hkPoolMemoryHI::allocateChunk(int, HK_MEMORY_CLASS)
// Range: 0x802C3C70 -> 0x802C3CB0
void * hkPoolMemoryHI::allocateChunk() {
    // References
    // -> void * moppHavokBuffer;
    // -> bool moppHavokBufferReady;
}
// signature: hkPoolMemoryHI::deallocateChunk(void *, int, HK_MEMORY_CLASS)
// Range: 0x802C3C48 -> 0x802C3C70
void hkPoolMemoryHI::deallocateChunk() {
    // References
    // -> bool moppHavokBufferReady;
    // -> void * moppHavokBuffer;
}
// signature: hkPoolMemoryHI::getAllocatedSize(int)
// Range: 0x802C3C44 -> 0x802C3C48
int hkPoolMemoryHI::getAllocatedSize() {
}
// signature: hkPoolMemoryHI::preAllocateRuntimeBlock(int, HK_MEMORY_CLASS)
// Range: 0x802C3C40 -> 0x802C3C44
void hkPoolMemoryHI::preAllocateRuntimeBlock() {
}
// signature: hkPoolMemoryHI::allocateRuntimeBlock(int, HK_MEMORY_CLASS)
// Range: 0x802C3C3C -> 0x802C3C40
void * hkPoolMemoryHI::allocateRuntimeBlock() {
}
// signature: hkPoolMemoryHI::deallocateRuntimeBlock(void *, int, HK_MEMORY_CLASS)
// Range: 0x802C3C38 -> 0x802C3C3C
void hkPoolMemoryHI::deallocateRuntimeBlock() {
}
// signature: hkPoolMemoryHI::provideRuntimeBlock(void *, int, HK_MEMORY_CLASS)
// Range: 0x802C3C34 -> 0x802C3C38
void hkPoolMemoryHI::provideRuntimeBlock() {
}
// Range: 0x802C3C30 -> 0x802C3C34
void hkPoolMemoryHI::freeRuntimeBlocks() {
}
// Range: 0x80292204 -> 0x80292210
class hkpWorld * xHavok_GetWorld() {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// Range: 0x802930A4 -> 0x802930A8
void * SimWorldSentry::SimWorldSentry() {
}
// signature: _HavokAlloc(int, int)
// Range: 0x80292210 -> 0x80292224
static void * _HavokAlloc() {
}
// Range: 0x80292224 -> 0x802924F8
static void _HavokFree(void * p /* r30 */) {
    // References
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// signature: errorReport(const char *, void *)
// Range: 0x802924F8 -> 0x802924FC
static void errorReport() {
}
// Range: 0x802924FC -> 0x80292768
void HavokPrimObj::Create(class HavokPrimObj * this /* r31 */, enum hkpShapeType type /* r30 */) {
    // Local variables
    class hkpRigidBodyCinfo info; // r1+0x60

    // References
    // -> float hkConvexShapeDefaultRadius;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x80292E24 -> 0x80292E68
void HavokPrimObj::Delete(class HavokPrimObj * this /* r31 */) {
}
// signature: HavokPrimObj::SetBox(const hkVector4 &, const hkVector4 &)
// Range: 0x80292E68 -> 0x80292EB8
void HavokPrimObj::SetBox(class HavokPrimObj * this /* r30 */, class hkVector4 * pos /* r31 */) {
}
// signature: _InSimWorldCharacterProxy(const hkpCharacterProxy *)
// Range: 0x80292EB8 -> 0x80292EC8
static bool _InSimWorldCharacterProxy() {
}
// Range: 0x80292EC8 -> 0x802930A4
static class hkpGroupFilter * _GetCollFilter() {
    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x802930A8 -> 0x802931F8
static void _UpdateCharacterProxyMotion(class hkpCharacterProxy * pCharacterProxy /* r28 */, class hkVector4 * vel /* r29 */, float dTime /* f31 */, class hkpAllCdPointCollector * castCollector /* r30 */, class hkpAllCdPointCollector * startPointCollector /* r31 */) {
    {
        // Range: 0x802930EC -> 0x802931C8
        // Local variables
        class hkStepInfo si; // r1+0x20
        class SimWorldSentry sentry; // r1+0x10

        {
            // Range: 0x80293178 -> 0x802931B0
            // Local variables
            class TriggerIdentifyingPointCollector defaultStartPointCollector; // r1+0x30
            class TriggerIdentifyingPointCollector defaultCastCollector; // r1+0x1F0
        }
    }

    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_GetRigidBodyDynamicData(const hkpRigidBody *, hkTransform *, hkVector4 *, hkVector4 *)
// Range: 0x8029320C -> 0x802932D4
bool xHavok_GetRigidBodyDynamicData() {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_GetCollMeshBlobData(void *)
// Range: 0x802932D4 -> 0x802932FC
void * xHavok_GetCollMeshBlobData() {
    // Local variables
    class HavokChunkHeader * pHeader; // r0
}
// Range: 0x802932FC -> 0x80293378
void xHavok_GetWorldSize(class hkVector4 * min /* r30 */, class hkVector4 * max /* r31 */) {
    // Local variables
    class hkpWorldCinfo info; // r1+0x10

    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_SetWorldSize(const hkVector4 &, const hkVector4 &)
// Range: 0x80293378 -> 0x802933A8
void xHavok_SetWorldSize() {
    // References
    // -> float gWorldResettingTime;
    // -> float gShapeShrinkingTime;
    // -> float gMoppBuildingTime;
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_LoadBodyShape(const void *, hkpShape **, int *)
// Range: 0x802933A8 -> 0x80293480
void * xHavok_LoadBodyShape(void * pBaseData /* r29 */, class hkpShape * * ppBodyShape /* r30 */) {
    // Local variables
    char * pData; // r31
    class HavokChunkHeader * pHeader; // r0

    {
        // Range: 0x802933F4 -> 0x8029344C
        // Local variables
        class hkBinaryPackfileReader reader; // r1+0x8
    }
}
// signature: xHavok_TestStaticCollision(const hkpCollidable *, const hkpRigidBody *, hkArray<CollectedTriangle> &)
// Range: 0x80293DC4 -> 0x80294954
bool xHavok_TestStaticCollision(class hkArray * collTris /* r29 */) {
    // Local variables
    class hkpShape * pShapeB; // r0
    class hkpCollisionDispatcher * dispatcher; // r0
    class hkpCollisionInput input; // r1+0x10
    void (* testFunc)(class hkpCdBody * bodyA, class hkpCdBody * bodyB, class hkpCollisionInput * input, class hkpCdPointCollector * output); // r12
    class TrianglePointCollector collector; // r1+0x60

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> struct {} __vt__22TrianglePointCollector;
    // -> struct {} __vt__22hkpAllCdPointCollector;
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_TestRayInSimWorld(const hkVector4 &, const hkVector4 &, hkVector4 &, float &, void **, unsigned int)
// Range: 0x80294954 -> 0x80294CD0
bool xHavok_TestRayInSimWorld(class hkVector4 * pos /* r29 */, float * toHitDistance /* r30 */, void * * outputOwner /* r31 */) {
    // Local variables
    class hkpWorldRayCastInput input; // r1+0x20
    class hkpWorldRayCastOutput output; // r1+0x50

    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_TestRayAndCollectInSimWorld(const hkVector4 &, const hkVector4 &, hkpAllRayHitCollector &)
// Range: 0x80294CD0 -> 0x80294F9C
bool xHavok_TestRayAndCollectInSimWorld(class hkpAllRayHitCollector * collector /* r31 */) {
    // Local variables
    class hkpWorldRayCastInput input; // r1+0x20

    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_TestRayInSimWorld(const hkVector4 &, const hkVector4 &, hkpRayHitCollector &, unsigned int, const hkpCollisionFilter *)
// Range: 0x80294F9C -> 0x80295298
void xHavok_TestRayInSimWorld(class hkpRayHitCollector * collector /* r30 */, class hkpCollisionFilter * filter /* r31 */) {
    // Local variables
    class hkpWorldRayCastInput input; // r1+0x20
    class hkpWorldRayCaster rayCaster; // r1+0x50

    // References
    // -> struct {} __vt__17hkpWorldRayCaster;
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_TestRayInSimWorldPerFace(const hkVector4 &, const hkVector4 &, hkpRayHitCollector &, const E_HAVOK_COLLIDE_FILTER_LAYER)
// Range: 0x80295298 -> 0x80295558
void xHavok_TestRayInSimWorldPerFace(class hkpRayHitCollector * collector /* r31 */) {
    // Local variables
    class hkpWorldRayCastInput input; // r1+0x20

    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_SphereCastInSimWorldPerFace(const hkVector4 &, const hkVector4 &, float, hkpCdPointCollector &, const E_HAVOK_COLLIDE_FILTER_LAYER)
// Range: 0x80295558 -> 0x80295760
void xHavok_SphereCastInSimWorldPerFace(class hkVector4 * to /* r28 */, float radius /* f31 */, class hkpCdPointCollector * collector /* r29 */, enum E_HAVOK_COLLIDE_FILTER_LAYER filter /* r30 */) {
    // Local variables
    class hkTransform hkCastPos; // r1+0x40
    class hkpSphereShape * sphereShape; // r0
    class hkpCollidable tempCollidable; // r1+0x80
    class hkpLinearCastInput input; // r1+0x20

    // References
    // -> static class hkpWorld * ghkSimWorld;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// signature: xHavok_IsShapeTypeConvex(const hkpShapeType, const hkpShapeType)
// Range: 0x80295760 -> 0x80295794
bool xHavok_IsShapeTypeConvex() {
    // Local variables
    class hkpCollisionDispatcher * theDispatcher; // r0
    bool isConvex; // r0

    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_LinearCast(const hkpCollidable *, const hkpLinearCastInput &, hkpCdPointCollector &)
// Range: 0x80295794 -> 0x802957B8
void xHavok_LinearCast(class hkpCollidable * collA /* r7 */, class hkpLinearCastInput * input /* r0 */) {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: HavokModule::Startup(int)
// Range: 0x802957B8 -> 0x80295A60
void HavokModule::Startup() {
    // References
    // -> static class hkpWorld * ghkSimWorld;
    // -> static class HavokPrimObj gCollSphere;
    // -> static char * gStackBuffer;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> int havokIndex;
    // -> int gInHavokInit;
    // -> static class hkThreadMemory * gpThreadMemory;
    // -> bool moppHavokBufferReady;
    // -> void * moppHavokBuffer;
    // -> struct {} __vt__14hkPoolMemoryHI;
    // -> void (* hkSystemFree)(void * p);
    // -> void * (* hkSystemMalloc)(int size, int align);
}
// signature: HavokModule::Shutdown(int)
// Range: 0x80295A60 -> 0x80295B34
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
// Range: 0x80295B34 -> 0x80295B74
class RelativePriority * HavokModule::GetPriority() const {
    // References
    // -> static class RelativePriority priority[1];
    // -> class Module * bootStrapModule;
}
// signature: xHavok_AddToSimWorld(hkpRigidBody *, hkpEntityActivation)
// Range: 0x80295E80 -> 0x80295F00
void xHavok_AddToSimWorld(class hkpRigidBody * pRigidBody /* r31 */) {
    // References
    // -> static int added;
    // -> static class hkpWorld * ghkSimWorld;
}
// Range: 0x80295F00 -> 0x80295F7C
void xHavok_RemoveFromSimWorld(class hkpRigidBody * pRigidBody /* r31 */) {
    // References
    // -> static int added;
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_ImmediateAddToSimWorld(hkpRigidBody *, hkpEntityActivation)
// Range: 0x80295F7C -> 0x80295FFC
void xHavok_ImmediateAddToSimWorld(class hkpRigidBody * pRigidBody /* r31 */) {
    // References
    // -> static int added;
    // -> static class hkpWorld * ghkSimWorld;
}
// Range: 0x80295FFC -> 0x80296078
void xHavok_ImmediateRemoveFromSimWorld(class hkpRigidBody * pRigidBody /* r31 */) {
    // References
    // -> static int added;
    // -> static class hkpWorld * ghkSimWorld;
}
// Range: 0x80296078 -> 0x802960E4
void xHavok_AddToSimWorldPhantom(class hkpShapePhantom * pPhantomObject /* r31 */) {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_RemoveFromSimWorldPhantom(hkpShapePhantom *)
// Range: 0x802960E4 -> 0x80296124
void xHavok_RemoveFromSimWorldPhantom() {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// Range: 0x80296124 -> 0x80296190
void xHavok_ImmediateAddToSimWorldPhantom(class hkpShapePhantom * pPhantomObject /* r31 */) {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_ImmediateRemoveFromSimWorldPhantom(hkpShapePhantom *)
// Range: 0x80296190 -> 0x802961D0
void xHavok_ImmediateRemoveFromSimWorldPhantom() {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// Range: 0x802961D0 -> 0x8029623C
void xHavok_ImmediateAddToSimWorldPhantomObject(class hkpPhantom * pPhantomObject /* r31 */) {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_ImmediateRemoveFromSimWorldPhantomObject(hkpPhantom *)
// Range: 0x8029623C -> 0x8029627C
void xHavok_ImmediateRemoveFromSimWorldPhantomObject() {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// Range: 0x8029627C -> 0x802962FC
void xHavok_AddToSimWorldConstraint(class hkpConstraintInstance * pInstance /* r31 */) {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_RemoveFromSimWorldConstraint(hkpConstraintInstance *)
// Range: 0x802962FC -> 0x80296318
void xHavok_RemoveFromSimWorldConstraint() {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_UpdateRigidBodyMotion(hkpRigidBody *, const hkVector4 &, const hkQuaternion &, float)
// Range: 0x80296318 -> 0x802963EC
void xHavok_UpdateRigidBodyMotion(class hkpRigidBody * pRigidBody /* r30 */) {
    // References
    // -> class hkQuadReal hkQuadReal0000;
    // -> static class hkpWorld * ghkSimWorld;
}
// Range: 0x802963EC -> 0x8029646C
void xHavok_ApplyLinearImpulse(class hkpRigidBody * pRigidBody /* r30 */, class hkVector4 * impulse /* r31 */) {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// Range: 0x8029646C -> 0x802964EC
void xHavok_SetVelocity(class hkpRigidBody * pRigidBody /* r30 */, class hkVector4 * velocity /* r31 */) {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_SetCollisionFilterInfo(hkpRigidBody *, E_HAVOK_COLLIDE_FILTER_LAYER)
// Range: 0x802964EC -> 0x80296538
void xHavok_SetCollisionFilterInfo() {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_GetCollisionFilterInfo(hkpRigidBody *)
// Range: 0x80296538 -> 0x80296540
enum E_HAVOK_COLLIDE_FILTER_LAYER xHavok_GetCollisionFilterInfo() {
}
// Range: 0x80296540 -> 0x80296550
void xHavok_BSPVisibilityChecked() {
    // References
    // -> static int STEP_HKWORLD;
}
// signature: xHavok_UpdateSimWorld(float)
// Range: 0x80296550 -> 0x802965C0
void xHavok_UpdateSimWorld() {
    // References
    // -> float gShapeShrinkingTime;
    // -> float gMoppBuildingTime;
    // -> static class hkpWorld * ghkSimWorld;
    // -> static int STEP_HKWORLD;
}
// Range: 0x802965C0 -> 0x80296904
void xHavok_DeleteAndCreate() {
    // References
    // -> static int STEP_HKWORLD;
    // -> int havokIndex;
    // -> int gInHavokInit;
    // -> bool moppHavokBufferReady;
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
// signature: xHavok_SetGravity(const hkVector4 &)
// Range: 0x80296904 -> 0x80296914
void xHavok_SetGravity() {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_UpdateCharacterProxyMotion(hkpCharacterProxy *, const hkVector4 &, float, hkpAllCdPointCollector *, hkpAllCdPointCollector *)
// Range: 0x80296914 -> 0x80296918
void xHavok_UpdateCharacterProxyMotion() {
}
// signature: xHavok_UpdateCharacterProxyMotionCheat(hkpCharacterProxy *, const hkVector4 &)
// Range: 0x80296918 -> 0x80296928
void xHavok_UpdateCharacterProxyMotionCheat() {
}
// signature: xHavok_ForceReorientPhantom(const hkRotation &, hkpShapePhantom *)
// Range: 0x80296928 -> 0x80296A68
class hkBool xHavok_ForceReorientPhantom() {
    // Local variables
    class hkpWorld * m_world; // r0
    class hkTransform newTransform; // r1+0x50
}
// Range: 0x80296A68 -> 0x80296BC0
class hkpRigidBody * xHavok_CreateRigidBody(class hkpShape * shape /* r27 */, class hkEnum * MotionType /* r28 */, float Mass /* f27 */, float Friction /* f28 */, float Restitution /* f29 */, unsigned int CollisionLayer /* r29 */, float AngularDamping /* f30 */, float AllowedPenetrationDepth /* f31 */, class hkEnum * DeactivatorType /* r30 */, class hkEnum * SolverDeactivation /* r31 */) {
    // Local variables
    class hkpRigidBodyCinfo info; // r1+0x10

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
