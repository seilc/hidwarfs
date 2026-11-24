/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zWallNet.cpp
*/
class _OGWallNetSchema _OGWallNetschema; // size: 0x18, address: 0x807E55D8
class SchemaRegistrator _OGWallNetschemaReg; // size: 0x8, address: 0x807E55F0
struct {} __vt__Q25World36xOGSchema<Q25World15_UI_ModelEntity>; // size: 0x28, address: 0x80703120
struct {} __vt__Q25World38xOGSchema<Q25World17SpringboardEntity>; // size: 0x28, address: 0x80703148
static struct {} __vt__Q219@unnamed@WAD03_cpp@26zSoundAssetPreloadRunnable; // size: 0x10, address: 0x80703170
struct {} __vt__Q25World43xOGSchema<Q25World22xOGEntitySoundBankWrap>; // size: 0x28, address: 0x80703180
struct {} __vt__62SpawnerProjectileController<31zProjectileControllerSuperHeavy>; // size: 0x24, address: 0x807031A8
struct {} __vt__65SpawnerProjectileController<34zProjectileControllerMagneticRepel>; // size: 0x24, address: 0x807031CC
struct {} __vt__67SpawnerProjectileController<36zProjectileControllerMagneticAttract>; // size: 0x24, address: 0x807031F0
struct {} __vt__63SpawnerProjectileController<32zProjectileControllerSuperEnergy>; // size: 0x24, address: 0x80703214
struct {} __vt__58SpawnerProjectileController<27zProjectileControllerEnergy>; // size: 0x24, address: 0x80703238
struct {} __vt__68SpawnerProjectileController<37zProjectileControllerHeavyMultiplayer>; // size: 0x24, address: 0x8070325C
struct {} __vt__64SpawnerProjectileController<33zProjectileControllerHeavyFlagRed>; // size: 0x24, address: 0x80703280
struct {} __vt__65SpawnerProjectileController<34zProjectileControllerHeavyFlagBlue>; // size: 0x24, address: 0x807032A4
struct {} __vt__57SpawnerProjectileController<26zProjectileControllerHeavy>; // size: 0x24, address: 0x807032C8
struct {} __vt__57SpawnerProjectileController<26zProjectileControllerBasic>; // size: 0x24, address: 0x807032EC
struct {} __vt__Q25World35xOGSchema<Q25World14PlayerEntityOG>; // size: 0x28, address: 0x80703310
struct {} __vt__8xSurface; // size: 0x10, address: 0x80703338
struct {} __vt__Q25World35xOGSchema<Q25World14PlatformEntity>; // size: 0x28, address: 0x80703348
struct {} __vt__5zFrag; // size: 0x10, address: 0x80703370
// Range: 0x801D22F0 -> 0x801D2300
void World::_OGWallNetEntity::Deactivate() {
}
// Range: 0x801D2300 -> 0x801D2350
void World::_OGWallNetEntity::Destroy(class _OGWallNetEntity * this /* r31 */) {
}
// signature: World::_OGWallNetSchema::Fix(World::Asset *, long, int)
// Range: 0x801D23B0 -> 0x801D23B8
void World::_OGWallNetSchema::Fix() {
}
// signature: World::_OGWallNetSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801D23C0 -> 0x801D240C
class EntityStub * World::_OGWallNetSchema::CreateStub(class _OGWallNetSchema * this /* r31 */) {
}
// signature: World::_OGWallNetSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x801D2410 -> 0x801D2428
void World::_OGWallNetSchema::DestroyStub() {
}
// signature: World::_OGWallNetSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801D2430 -> 0x801D2494
class Entity * World::_OGWallNetSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World16_OGWallNetEntity;
}
// Range: 0x801D24E0 -> 0x801D25F4
void zWallNet::Init(void * ent /* r30 */, void * asset /* r31 */) {
    // References
    // -> struct {} __vt__8zWallNet;
}
// signature: zWallNet::FindClosestBoundEdgeID(const xVec3 &, xVec3 &, xVec3 &) const
// Range: 0x801D2600 -> 0x801D28B0
int zWallNet::FindClosestBoundEdgeID() const {
    // Local variables
    int numberOfBoundEdges; // r0
    int numberOfTriangles; // r7
    class xVec3 curEdgeClosestPos; // r1+0x20
    float curClosestDist2; // f10
    int curClosestEdgeId; // r8
    int curClosestEdgeTriId; // r9
    int curClosestEdgeSPTIndex; // r10

    {
        // Range: 0x801D2618 -> 0x801D2780
        // Local variables
        int i; // r11

        {
            // Range: 0x801D2618 -> 0x801D2780
            {
                // Range: 0x801D2618 -> 0x801D2774
                // Local variables
                int j; // r12

                {
                    // Range: 0x801D2618 -> 0x801D2774
                    // Local variables
                    float dist2; // f0
                }
            }
        }
    }
}
// signature: zWallNet::TriEdgeIntersectsCircle(const zWallNetTriangle *, int, const xVec3 &, float, xVec3 &) const
// Range: 0x801D28B0 -> 0x801D2A44
bool zWallNet::TriEdgeIntersectsCircle() const {
    // Local variables
    float dist2; // f0
}
// signature: zWallNet::TriEdgeIntersectsSweptCircle(const zWallNetTriangle *, int, zSweptCircle &) const
// Range: 0x801D2A50 -> 0x801D2E64
bool zWallNet::TriEdgeIntersectsSweptCircle(class zSweptCircle * swc /* r31 */) const {
    // Local variables
    class xVec2 start; // r1+0x40
    class xVec2 end; // r1+0x38
    class xVec2 dir; // r1+0x30
    class xVec2 normal; // r1+0x28
    float edgeLength; // f0
    float R; // f12
    class xVec2 circleStartToWallStart; // r1+0x20
    class xVec2 circleEndToWallStart; // r1+0x18
    float circleStartDistance; // f0
    float circleEndDistance; // f0
    class xVec2 LineSweepStart; // r1+0x10
    float s; // f0

    {
        // Range: 0x801D2BC0 -> 0x801D2C40
        // Local variables
        float circleStartAlong; // f0
    }
    {
        // Range: 0x801D2D10 -> 0x801D2E30
        // Local variables
        float backDist2; // f28
        float backDist; // f9
        float startAlong; // f29
        float distAway; // f0
        class xVec2 toStart; // r1+0x8
    }
}
// signature: zWallNet::FindTriangleID(const xVec3 &) const
// Range: 0x801D2E70 -> 0x801D3078
int zWallNet::FindTriangleID() const {
    // Local variables
    int numberOfTriangles; // r0

    {
        // Range: 0x801D2E74 -> 0x801D3060
        // Local variables
        int i; // r7
    }
}
