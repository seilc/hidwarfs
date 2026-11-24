/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Physics\Havok\xHavok.cpp
*/
class hkTestEntry * hkUnitTestDatabase; // size: 0x4, address: 0x8077CDA8
float gMoppBuildingTime; // size: 0x4, address: 0x8077CDAC
float gShapeShrinkingTime; // size: 0x4, address: 0x8077CDB0
float gWorldResettingTime; // size: 0x4, address: 0x8077CDB4
void * moppHavokBuffer; // size: 0x4, address: 0x8077CDBC
bool moppHavokBufferReady; // size: 0x1, address: 0x8077CDC0
class hkVector4 gHavokCamFrom; // size: 0x10, address: 0x8077CDD0
class hkVector4 gHavokCamTo; // size: 0x10, address: 0x8077CDE0
class hkVector4 gHavokCamUp; // size: 0x10, address: 0x8077CDF0
float gHavokCamFOV; // size: 0x4, address: 0x8077CE00
float gHavokCamZNear; // size: 0x4, address: 0x806CEE84
float gHavokCamZFar; // size: 0x4, address: 0x806CEE88
static class hkThreadMemory * gpThreadMemory; // size: 0x4, address: 0x8077CE04
static char * gStackBuffer; // size: 0x4, address: 0x8077CE08
static bool _gRenderingInited; // size: 0x1, address: 0x8077CE0C
static class HavokPrimObj gCollSphere; // size: 0x4, address: 0x8077CE1C
static class hkpWorld * ghkSimWorld; // size: 0x4, address: 0x8077CE20
static class CriticalSection gSimWorldCS; // size: 0x20, address: 0x8077CE30
static float gHavokWorldSize; // size: 0x4, address: 0x806CEE8C
static class hkArray gDoneShapes; // size: 0xC, address: 0x8077CE5C
static int added; // size: 0x4, address: 0x8077CE68
class RelativePriority priority[1]; // size: 0xC, address: 0x806CEE90
class HavokModule havokmod; // size: 0x98, address: 0x8077CE70
static class ModuleRegistrator havokModReg; // size: 0x8, address: 0x8077CF08
static int STEP_HKWORLD; // size: 0x4, address: 0x8077CF10
// signature: hkPoolMemoryHI::allocateChunkBatch(void **, int, int, HK_MEMORY_CLASS)
// Range: 0x8020A280 -> 0x8020A284
void hkPoolMemoryHI::allocateChunkBatch() {
}
// signature: hkPoolMemoryHI::deallocateChunkBatch(void **, int, int, HK_MEMORY_CLASS)
// Range: 0x8020A270 -> 0x8020A274
void hkPoolMemoryHI::deallocateChunkBatch() {
}
// signature: hkPoolMemoryHI::allocateChunk(int, HK_MEMORY_CLASS)
// Range: 0x8020A230 -> 0x8020A270
void * hkPoolMemoryHI::allocateChunk() {
    // References
    // -> void * moppHavokBuffer;
    // -> bool moppHavokBufferReady;
}
// signature: hkPoolMemoryHI::deallocateChunk(void *, int, HK_MEMORY_CLASS)
// Range: 0x8020A200 -> 0x8020A228
void hkPoolMemoryHI::deallocateChunk() {
    // References
    // -> bool moppHavokBufferReady;
    // -> void * moppHavokBuffer;
}
// signature: hkPoolMemoryHI::getAllocatedSize(int)
// Range: 0x8020A1F0 -> 0x8020A1F4
int hkPoolMemoryHI::getAllocatedSize() {
}
// signature: hkPoolMemoryHI::preAllocateRuntimeBlock(int, HK_MEMORY_CLASS)
// Range: 0x8020A1E0 -> 0x8020A1E4
void hkPoolMemoryHI::preAllocateRuntimeBlock() {
}
// signature: hkPoolMemoryHI::allocateRuntimeBlock(int, HK_MEMORY_CLASS)
// Range: 0x8020A1D0 -> 0x8020A1D4
void * hkPoolMemoryHI::allocateRuntimeBlock() {
}
// signature: hkPoolMemoryHI::deallocateRuntimeBlock(void *, int, HK_MEMORY_CLASS)
// Range: 0x8020A1C0 -> 0x8020A1C4
void hkPoolMemoryHI::deallocateRuntimeBlock() {
}
// signature: hkPoolMemoryHI::provideRuntimeBlock(void *, int, HK_MEMORY_CLASS)
// Range: 0x8020A1B0 -> 0x8020A1B4
void hkPoolMemoryHI::provideRuntimeBlock() {
}
// Range: 0x8020A1A0 -> 0x8020A1A4
void hkPoolMemoryHI::freeRuntimeBlocks() {
}
// Range: 0x801ECE20 -> 0x801ECE2C
class hkpWorld * xHavok_GetWorld() {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: _HavokAlloc(int, int)
// Range: 0x801ECE30 -> 0x801ECE44
static void * _HavokAlloc() {
}
// Range: 0x801ECE50 -> 0x801ED0B8
void HavokPrimObj::Create(class HavokPrimObj * this /* r31 */, enum hkpShapeType type /* r28 */) {
    // Local variables
    class hkpRigidBodyCinfo info; // r1+0x60

    // References
    // -> float hkConvexShapeDefaultRadius;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x801ED1A0 -> 0x801ED1E4
void HavokPrimObj::Delete(class HavokPrimObj * this /* r31 */) {
}
// signature: HavokPrimObj::SetSphere(const hkVector4 &, float)
// Range: 0x801ED1F0 -> 0x801ED204
void HavokPrimObj::SetSphere() {
}
// signature: HavokPrimObj::SetCylinder(const hkVector4 &, const hkVector4 &, const hkVector4 &, float)
// Range: 0x801ED210 -> 0x801ED278
void HavokPrimObj::SetCylinder(class HavokPrimObj * this /* r27 */, class hkVector4 & pos /* r28 */, class hkVector4 & p0 /* r29 */, class hkVector4 & p1 /* r30 */) {
    // Local variables
    class hkpCylinderShape * pShape; // r31
}
// signature: HavokPrimObj::SetBox(const hkVector4 &, const hkVector4 &)
// Range: 0x801ED280 -> 0x801ED2C8
void HavokPrimObj::SetBox(class HavokPrimObj * this /* r30 */, class hkVector4 & pos /* r31 */) {
}
// signature: _InSimWorld(const hkpPhysicsSystem *)
// Range: 0x801ED2D0 -> 0x801ED318
static bool _InSimWorld() {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// Range: 0x801ED320 -> 0x801ED61C
static void _InitSimWorld() {
    // References
    // -> static class hkpWorld * ghkSimWorld;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x801ED620 -> 0x801ED6F0
bool xHavok_GetRigidBodyDynamicData(class hkpRigidBody * pRigidBody /* r27 */, class hkTransform * pXform /* r28 */, class hkVector4 * pVel /* r29 */, class hkVector4 * pAngvel /* r30 */) {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// Range: 0x801ED6F0 -> 0x801ED870
static void _Init() {
    // References
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
// Range: 0x801ED870 -> 0x801ED8F8
static void _CleanUp() {
    // References
    // -> int gInHavokDeinit;
    // -> static char * gStackBuffer;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> static class hkThreadMemory * gpThreadMemory;
    // -> static class hkpWorld * ghkSimWorld;
    // -> static class HavokPrimObj gCollSphere;
}
// signature: xHavok_GetCollMeshBlobData(void *)
// Range: 0x801ED900 -> 0x801ED928
void * xHavok_GetCollMeshBlobData() {
    // Local variables
    class HavokChunkHeader * pHeader; // r0
}
// Range: 0x801ED930 -> 0x801ED9A8
void xHavok_GetWorldSize(class hkVector4 & min /* r30 */, class hkVector4 & max /* r31 */) {
    // Local variables
    class hkpWorldCinfo info; // r1+0x10

    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_SetWorldSize(const hkVector4 &, const hkVector4 &)
// Range: 0x801ED9B0 -> 0x801ED9E0
void xHavok_SetWorldSize() {
    // References
    // -> float gWorldResettingTime;
    // -> float gShapeShrinkingTime;
    // -> float gMoppBuildingTime;
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_LoadPhysicsData(const void *, const hkRootLevelContainer **, int *)
// Range: 0x801ED9E0 -> 0x801EDAA4
void * xHavok_LoadPhysicsData(void * pBaseData /* r29 */, class hkRootLevelContainer * * container /* r30 */) {
    // Local variables
    char * pData; // r31
    class HavokChunkHeader * pHeader; // r0

    {
        // Range: 0x801EDA24 -> 0x801EDA7C
        // Local variables
        class hkBinaryPackfileReader reader; // r1+0x8
    }
}
// Range: 0x801EDCB0 -> 0x801EDDA0
bool xHavok_TestStaticCollision(class hkpCollidable * pColl /* r27 */, class hkpRigidBody * pRigidBody /* r28 */, class hkArray & collTris /* r29 */) {
    // Local variables
    class hkpCollisionInput input; // r1+0x10
    void (* testFunc)(class hkpCdBody & bodyA, class hkpCdBody & bodyB, class hkpCollisionInput & input, class hkpCdPointCollector & output); // r30
    class TrianglePointCollector collector; // r1+0x60

    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// Range: 0x801EDE50 -> 0x801EE0C4
void ClipRayToWorldAABB(class hkVector4 & from /* r29 */, class hkVector4 & to /* r30 */) {
    // Local variables
    class hkpWorldCinfo info; // r1+0x20
    class hkVector4 & min; // r0
    class hkVector4 & max; // r0
    class hkVector4 direction; // r1+0x10
    float t; // f3
    float tx; // r31
    float ty; // r31
    float tz; // r31
    float txmin; // f4
    float txmax; // f5
    float tymin; // f6
    float tymax; // f7
    float tzmin; // f8
    float tzmax; // f9

    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// Range: 0x801EE0D0 -> 0x801EE15C
bool xHavok_TestRayAndCollectInSimWorld(class hkVector4 & from /* r29 */, class hkVector4 & to /* r30 */, class hkpAllRayHitCollector & collector /* r31 */) {
    // Local variables
    class hkpWorldRayCastInput input; // r1+0x10

    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// Range: 0x801EE160 -> 0x801EE228
void xHavok_TestRayInSimWorld(class hkVector4 & from /* r27 */, class hkVector4 & to /* r28 */, class hkpRayHitCollector & collector /* r29 */, unsigned int collFilterLayer /* r30 */, class hkpCollisionFilter * filter /* r31 */) {
    // Local variables
    class hkpWorldRayCastInput input; // r1+0x10
    class hkpWorldRayCaster rayCaster; // r1+0x40

    // References
    // -> struct {} __vt__17hkpWorldRayCaster;
    // -> static class hkpWorld * ghkSimWorld;
}
// Range: 0x801EE230 -> 0x801EE2C0
void xHavok_TestRayInSimWorldPerFace(class hkVector4 & from /* r28 */, class hkVector4 & to /* r29 */, class hkpRayHitCollector & collector /* r30 */, enum E_HAVOK_COLLIDE_FILTER_LAYER filter /* r31 */) {
    // Local variables
    class hkpWorldRayCastInput input; // r1+0x10

    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// Range: 0x801EE2C0 -> 0x801EE410
void xHavok_SphereCastInSimWorldPerFace(class hkVector4 & from /* r29 */, class hkVector4 & to /* r26 */, float radius /* f31 */, class hkpCdPointCollector & collector /* r27 */, enum E_HAVOK_COLLIDE_FILTER_LAYER filter /* r28 */) {
    // Local variables
    class hkTransform hkCastPos; // r1+0x30
    class hkpCollidable tempCollidable; // r1+0x70
    class hkpLinearCastInput input; // r1+0x10

    // References
    // -> static class hkpWorld * ghkSimWorld;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x801EE410 -> 0x801EE4F0
void xHavok_GetPenetrationInformation(class hkpCollidable * collA /* r26 */, class hkpCollidable * collB /* r27 */, class hkVector4 & closestPoint /* r28 */, class hkVector4 & normal /* r29 */) {
    // Local variables
    class ClosestPointCollector collector; // r1+0x10

    // References
    // -> struct {} __vt__36ClosestPointCollector;
    // -> struct {} __vt__19hkpCdPointCollector;
    // -> static class hkpWorld * ghkSimWorld;
}
// Range: 0x8020A140 -> 0x8020A1A0
void ClosestPointCollector::addCdPoint(class ClosestPointCollector * this /* r30 */, class hkpCdPoint & point /* r31 */) {
}
// Range: 0x801EE4F0 -> 0x801EE534
void * HavokModule::HavokModule(class HavokModule * this /* r31 */) {
    // References
    // -> struct {} __vt__11HavokModule;
}
// signature: HavokModule::Startup(int)
// Range: 0x801EE540 -> 0x801EE56C
void HavokModule::Startup() {
}
// signature: HavokModule::Shutdown(int)
// Range: 0x801EE570 -> 0x801EE580
void HavokModule::Shutdown() {
}
// signature: HavokModule::GetPriority(int &) const
// Range: 0x801EE580 -> 0x801EE5C0
class RelativePriority * HavokModule::GetPriority() const {
    // References
    // -> class RelativePriority priority[1];
    // -> class Module * bootStrapModule;
}
// Range: 0x801EE5C0 -> 0x801EE638
void xHavok_AddToSimWorld(class hkpPhysicsSystem * physicsSystem /* r31 */) {
    // References
    // -> static int added;
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_AddToSimWorld(hkpRigidBody *, hkpEntityActivation)
// Range: 0x801EE640 -> 0x801EE6C0
void xHavok_AddToSimWorld(class hkpRigidBody * pRigidBody /* r31 */) {
    // References
    // -> static int added;
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_AddToSimWorldBatch(hkpEntity *const *, int, hkpEntityActivation)
// Range: 0x801EE6C0 -> 0x801EE738
void xHavok_AddToSimWorldBatch(class hkpEntity * * entityBatch /* r27 */, int entityTotal /* r28 */) {
    {
        // Range: 0x801EE6F0 -> 0x801EE724
        // Local variables
        int idx; // r29
    }

    // References
    // -> static int added;
    // -> static class hkpWorld * ghkSimWorld;
}
// Range: 0x801EE740 -> 0x801EE7AC
void xHavok_AddToSimWorld(class hkpPhantom * pPhantomObject /* r31 */) {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// Range: 0x801EE7B0 -> 0x801EE82C
void xHavok_RemoveFromSimWorld(class hkpRigidBody * pRigidBody /* r31 */) {
    // References
    // -> static int added;
    // -> static class hkpWorld * ghkSimWorld;
}
// Range: 0x801EE830 -> 0x801EE8B0
void xHavok_RemoveFromSimWorld(class hkpPhysicsSystem * physicsSystem /* r29 */) {
    // References
    // -> static class hkpWorld * ghkSimWorld;
    // -> static int added;
}
// signature: xHavok_RemoveFromSimWorld(hkpPhantom *)
// Range: 0x801EE8B0 -> 0x801EE8F0
void xHavok_RemoveFromSimWorld() {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_InSimWorld(const hkpRigidBody *)
// Range: 0x801EE8F0 -> 0x801EE91C
int xHavok_InSimWorld() {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_UpdateRigidBodyMotion(hkpRigidBody *, const hkVector4 &, const hkQuaternion &, float)
// Range: 0x801EE920 -> 0x801EE9F4
void xHavok_UpdateRigidBodyMotion(class hkpRigidBody * pRigidBody /* r30 */) {
    // References
    // -> class hkVector4 hkVector4Zero;
    // -> static class hkpWorld * ghkSimWorld;
}
// Range: 0x801EEA00 -> 0x801EEA78
void xHavok_ApplyLinearImpulse(class hkpRigidBody * pRigidBody /* r30 */, class hkVector4 & impulse /* r31 */) {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_SetCollisionFilterInfo(hkpRigidBody *, E_HAVOK_COLLIDE_FILTER_LAYER)
// Range: 0x801EEA80 -> 0x801EEACC
void xHavok_SetCollisionFilterInfo() {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// Range: 0x801EEAD0 -> 0x801EEAE0
void xHavok_BSPVisibilityChecked() {
    // References
    // -> static int STEP_HKWORLD;
}
// signature: xHavok_UpdateSimWorld(float)
// Range: 0x801EEAE0 -> 0x801EEB50
void xHavok_UpdateSimWorld() {
    // References
    // -> float gShapeShrinkingTime;
    // -> float gMoppBuildingTime;
    // -> static class hkpWorld * ghkSimWorld;
    // -> static int STEP_HKWORLD;
}
// Range: 0x801EEB50 -> 0x801EEB84
void xHavok_DeleteAndCreate() {
    // References
    // -> static int STEP_HKWORLD;
}
// Range: 0x801EEB90 -> 0x801EEBA0
class hkVector4 & xHavok_GetGravity() {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_SetGravity(const hkVector4 &)
// Range: 0x801EEBA0 -> 0x801EEBB0
void xHavok_SetGravity() {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_UpdateCharacterProxyMotion(hkpCharacterProxy *, const hkVector4 &, float, hkpAllCdPointCollector *, hkpAllCdPointCollector *)
// Range: 0x801EEBB0 -> 0x801EECB8
void xHavok_UpdateCharacterProxyMotion(class hkpCharacterProxy * pCharacterProxy /* r29 */, float dTime /* f31 */, class hkpAllCdPointCollector * castCollector /* r30 */, class hkpAllCdPointCollector * startPointCollector /* r31 */) {
    // References
    // -> static class hkpWorld * ghkSimWorld;
}
// signature: xHavok_UpdateCharacterProxyMotionCheat(hkpCharacterProxy *, const hkVector4 &)
// Range: 0x801EECC0 -> 0x801EED24
void xHavok_UpdateCharacterProxyMotionCheat(class hkpCharacterProxy * pCharacterProxy /* r31 */) {
}
// signature: xHavok_UpdateCharacterRigidBodyMotionCheat(hkpCharacterRigidBody *, const hkVector4 &)
// Range: 0x801EED30 -> 0x801EED6C
void xHavok_UpdateCharacterRigidBodyMotionCheat(class hkVector4 & pos /* r31 */) {
}
// Range: 0x801EED70 -> 0x801EEDEC
class hkBool xHavok_ForceReorientPhantom(class hkRotation & rotation /* r30 */, class hkpShapePhantom * m_phantom /* r31 */) {
    // Local variables
    class hkTransform newTransform; // r1+0x10
}
// Range: 0x801EEDF0 -> 0x801EEE7C
class hkpRigidBody * xHavok_CreateRigidBody(class hkpRigidBodyCinfo & info /* r29 */, int hkOwnerType /* r30 */) {
    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x801EEE80 -> 0x801EEFD0
class hkpRigidBody * xHavok_CreateRigidBody(class hkpShape * shape /* r27 */, class hkEnum & MotionType /* r28 */, float Mass /* f26 */, float Friction /* f27 */, float Restitution /* f28 */, unsigned int CollisionLayer /* r29 */, float AngularDamping /* f29 */, float LinearDamping /* f30 */, float AllowedPenetrationDepth /* f31 */, class hkEnum & DeactivatorType /* r30 */, class hkEnum & SolverDeactivation /* r31 */) {
    // Local variables
    class hkpRigidBodyCinfo info; // r1+0x10
    class hkpRigidBody * pRigidBody; // r0
}
