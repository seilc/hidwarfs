/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xMovePoint.cpp
*/
class _OGMovePointSchema _OGMovePointschema; // size: 0x18, address: 0x80758AA0
class SchemaRegistrator _OGMovePointschemaReg; // size: 0x8, address: 0x80758AB8
// Range: 0x8004F3F0 -> 0x8004F400
void World::_OGMovePointEntity::Deactivate() {
}
// Range: 0x8004F400 -> 0x8004F450
void World::_OGMovePointEntity::Destroy(class _OGMovePointEntity * this /* r31 */) {
}
// signature: World::_OGMovePointSchema::Fix(World::Asset *, long, int)
// Range: 0x8004F4B0 -> 0x8004F4B8
void World::_OGMovePointSchema::Fix() {
}
// signature: World::_OGMovePointSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8004F4C0 -> 0x8004F50C
class EntityStub * World::_OGMovePointSchema::CreateStub(class _OGMovePointSchema * this /* r31 */) {
}
// signature: World::_OGMovePointSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8004F510 -> 0x8004F528
void World::_OGMovePointSchema::DestroyStub() {
}
// signature: World::_OGMovePointSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8004F530 -> 0x8004F594
class Entity * World::_OGMovePointSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World18_OGMovePointEntity;
}
// signature: xMovePointLifo::Push(xMovePoint *)
// Range: 0x8004F5E0 -> 0x8004F5F0
void xMovePointLifo::Push() {
}
// Range: 0x8004F5F0 -> 0x8004F620
class xMovePoint * xMovePointLifo::Pop() {
}
// signature: xMovePoint::Init(void *, void *)
// Range: 0x8004F620 -> 0x8004F694
void xMovePoint::Init() {
    // Local variables
    class xMovePoint * mp; // r0
}
// Range: 0x8004F6A0 -> 0x8004FC38
void xSceneMovePointSetup(class zScene * sc /* r19 */) {
    // Local variables
    int numberOfSceneMovePoints; // r31
    class xMovePoint * sceneMovePoints; // r30

    {
        // Range: 0x8004F724 -> 0x8004F724
        // Local variables
        int i; // r23
    }
    {
        // Range: 0x8004F948 -> 0x8004F948
        // Local variables
        int i; // r19
    }
    {
        // Range: 0x8004FB7C -> 0x8004FB7C
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x8004FBE4 -> 0x8004FBEC
        // Local variables
        int i; // r20
    }
    {
        // Range: 0x8004FC04 -> 0x8004FC0C
        // Local variables
        int i; // r19
    }

    // References
    // -> static class xMemWatermark memWatermark;
    // -> static class xAssetTypeIDEntry typeList[248];
}
// Range: 0x8004FC40 -> 0x8004FD68
void xMovePoint::SplinePreSetup() {
    // Local variables
    class xMovePoint * mptr; // r5
}
// Range: 0x8004FD70 -> 0x8005015C
void xMovePoint::SplineSetup(class xMovePoint * this /* r28 */) {
    // Local variables
    class xVec3 points[2]; // r1+0x20
    class xVec3 p1; // r1+0x14
    class xVec3 p2; // r1+0x8

    // References
    // -> static class xMemWatermark memWatermark;
}
// signature: xMovePoint::Save(xSerial *)
// Range: 0x80050160 -> 0x800501C4
void xMovePoint::Save() {
}
// signature: xMovePoint::Load(xSerial *)
// Range: 0x800501D0 -> 0x80050244
void xMovePoint::Load(class xMovePoint * this /* r31 */) {
}
// signature: xMovePoint::GetRandomChildren(xMovePoint **, const xMovePoint *, xVec3 *)
// Range: 0x80050250 -> 0x80050658
float xMovePoint::GetRandomChildren(class xVec3 * hdng /* r30 */) {
    // Local variables
    int rnd; // r12
    unsigned short idx; // r7
    class xMovePoint * previousOption; // r0

    // References
    // -> static unsigned int * next;
    // -> static unsigned int state[624];
    // -> static int left;
}
// signature: xMovePoint::EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80050660 -> 0x800506D4
void xMovePoint::EventCB() {
    // Local variables
    class xMovePoint * m; // r0
}
// Range: 0x800506E0 -> 0x80050734
class xMovePoint * xMovePoint::GetNextNotVisitedChild() {
    // Local variables
    int numberOfChildren; // r0

    {
        // Range: 0x800506E4 -> 0x80050724
        // Local variables
        int i; // r7
    }
}
// signature: xMovePoint::NetworkGetClosestPathXZ(const xVec3 &)
// Range: 0x80050740 -> 0x80050AD0
class xMovePoint * xMovePoint::NetworkGetClosestPathXZ() {
    // Local variables
    class CBNetworkClosestPath cbNetworkClosestPath; // r1+0x8
}
// Range: 0x80050AD0 -> 0x80051014
void xMovePointPathPoint::SetClosestToXZ(class xMovePointPathPoint * this /* r28 */, class xMovePoint * toMP /* r29 */, class xVec3 * point /* r30 */) {
    // Local variables
    unsigned int numberOfChildren; // r0
    unsigned int numberOfParents; // r0
    float maxParentDistance; // f31
    int parentIndex; // r24

    {
        // Range: 0x80050B70 -> 0x80050D54
        // Local variables
        int childIndex; // r25
        float maxChildDistance; // f31

        {
            // Range: 0x80050B78 -> 0x80050C44
            // Local variables
            unsigned int i; // r24

            {
                // Range: 0x80050B78 -> 0x80050C44
                // Local variables
                float distance; // f0
            }
        }
    }
    {
        // Range: 0x80050D5C -> 0x80050E28
        // Local variables
        unsigned int i; // r25

        {
            // Range: 0x80050D5C -> 0x80050E28
            // Local variables
            float distance; // f0
        }
    }

    // References
    // -> class xVec3 m_NegUnitAxisZ;
    // -> class xVec3 m_UnitAxisZ;
}
