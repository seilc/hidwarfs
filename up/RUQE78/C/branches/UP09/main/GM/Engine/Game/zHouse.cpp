/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zHouse.cpp
*/
static float returnSpeed; // size: 0x4, address: 0x807A3238
static float yChangeSpeed; // size: 0x4, address: 0x807A323C
static bool houseAdded; // size: 0x1, address: 0x8081A5E0
// Range: 0x800DC3E0 -> 0x800DC4B8
class Entity * Sext::zHouseAsset::Create(class EntityHandleBase * handle /* r29 */, class zHouseAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__6zHouse;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x800DC4C0 -> 0x800DC5C0
void zHouse::Init(class zHouse * this /* r30 */, class zHouseAsset * inAsset /* r31 */) {
    // Local variables
    class rpmHavokSetupInfo rpmInfo; // r1+0x8

    // References
    // -> class zGlobals globals;
    // -> static bool houseAdded;
}
// Range: 0x800DC5C0 -> 0x800DC738
void zHouse::Setup(class zHouse * this /* r30 */) {
}
// Range: 0x800DC740 -> 0x800DC7A8
void zHouse::Reset(class zHouse * this /* r30 */) {
}
// signature: zHouse::SetVisible(bool)
// Range: 0x800DC7B0 -> 0x800DC7CC
void zHouse::SetVisible() {
}
// signature: zHouse::SetCollision(bool)
// Range: 0x800DC7D0 -> 0x800DC7E8
void zHouse::SetCollision() {
}
// signature: zHouse::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800DC7F0 -> 0x800DCCC0
void zHouse::HandleEvent(class zHouse * this /* r31 */, class EventAny * params /* r29 */) {
    {
        // Range: 0x800DC93C -> 0x800DC9C0
        // Local variables
        class EventActionMoveToLoc * local_params; // r0
    }
    {
        // Range: 0x800DC9C4 -> 0x800DCA78
        // Local variables
        class xVec3 myHousePos; // r1+0x4C
        class EventActionMoveToLoc * local_params; // r0
    }
    {
        // Range: 0x800DCB9C -> 0x800DCC60
        // Local variables
        class xOGEntity * possibleDriver; // r4
        unsigned int flags; // r28
        class EventActionDrivenBy * paramst; // r0
    }
}
// Range: 0x800DCCC0 -> 0x800DD600
void zHouse::Update(class zHouse * this /* r30 */, float dt /* f31 */) {
    // Local variables
    class hkpRigidBody * rb; // r31
    class xVec3 housePos; // r1+0x1D0
    class xVec3 pos1; // r1+0x1C4
    class xVec3 pos2; // r1+0x1B8
    class xVec3 houseToEnd; // r1+0x1AC
    float targetY; // f0
    class xVec3 newVel; // r1+0x1A0
    class hkVector4 hkHousePos; // r1+0x190
    class xVec3 myHousePos; // r1+0x180
    float newFloorY; // f0
    float newY; // f1
    float distY; // f4
    class Quaternion quat; // r1+0x170
    class Vector * initRot; // r0
    class hkQuaternion havokQuat; // r1+0x160

    {
        // Range: 0x800DCF74 -> 0x800DD0B8
        // Local variables
        float floorY; // f0
    }

    // References
    // -> static float yChangeSpeed;
    // -> static float returnSpeed;
}
// signature: zHouse::WarpToLocation(xVec3 *, bool, bool)
// Range: 0x800DD610 -> 0x800DD6D4
void zHouse::WarpToLocation() {
    // Local variables
    class hkVector4 hkHousePos; // r1+0x10
}
// Range: 0x800DD6E0 -> 0x800DD780
void * zHouse::~zHouse(class zHouse * this /* r29 */) {
    // References
    // -> static bool houseAdded;
    // -> struct {} __vt__6zHouse;
}
// Range: 0x800DD790 -> 0x800DD7C8
class xMat4x3 * zHouse::GetAttachMat(class zHouse * this /* r31 */) {
}
// Range: 0x800DD800 -> 0x800DDD10
void zHouse::DriveAttach(class zHouse * this /* r29 */, class xOGEntity * passenger /* r30 */, unsigned int flags /* r31 */) {
    // Local variables
    class xMat4x3 D; // r1+0x48
    class xVec3 euler; // r1+0x8
    class xMat3x3 a_descaled; // r1+0x18
}
// signature: zHouse::DriveCauseMove(xMat4x3 *, xMat4x3 *, xMat4x3 *, xMat4x3 *, bool, bool, float, float)
// Range: 0x800DDD20 -> 0x800DDD24
void zHouse::DriveCauseMove() {
}
