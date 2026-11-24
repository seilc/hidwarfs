/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zHammer.cpp
*/
float strikeSpeed; // size: 0x4, address: 0x806BD694
float recoilSpeed; // size: 0x4, address: 0x806BD698
int damageBone; // size: 0x4, address: 0x806BD69C
class xVec3 damageOffset; // size: 0xC, address: 0x806BD6A0
float damageRadius; // size: 0x4, address: 0x806BD6AC
float damageAmount; // size: 0x4, address: 0x806BD6B0
float knockBackSpeedAway; // size: 0x4, address: 0x806BD6B4
float knockBackSpeedUp; // size: 0x4, address: 0x806BD6B8
float rumbleRadius2; // size: 0x4, address: 0x806BD6BC
static class xAnimTable * animHammerTables; // size: 0x4, address: 0x80734BA4
// Range: 0x800C5330 -> 0x800C5390
class Entity * Sext::zHammerAsset::Create(class EntityHandleBase * handle /* r30 */, class zHammerAsset * asset /* r31 */) {
}
// Range: 0x800C5390 -> 0x800C5498
void zHammer::Reset(class zHammer * this /* r31 */) {
    // References
    // -> class xMat4x3 g_I3;
    // -> float damageRadius;
}
// Range: 0x800C54A0 -> 0x800C55F8
void zHammer::Setup(class zHammer * this /* r31 */) {
    // Local variables
    class hkpRigidBodyCinfo cinfo; // r1+0x10
    class xAnimTable * table; // r5

    // References
    // -> class zGlobals globals;
    // -> static class xAnimTable * animHammerTables;
}
// signature: zHammer::zHammer(World::EntityHandleBase *, Sext::zHammerAsset *)
// Range: 0x800C5600 -> 0x800C5730
void * zHammer::zHammer(class zHammer * this /* r29 */, class zHammerAsset * inAsset /* r30 */) {
    // References
    // -> struct {} __vt__Q27zHammer12State_Recoil;
    // -> struct {} __vt__Q27zHammer12State_Impact;
    // -> struct {} __vt__Q27zHammer12State_Strike;
    // -> struct {} __vt__Q27zHammer8State_Up;
    // -> struct {} __vt__7zHammer;
}
// Range: 0x800C5730 -> 0x800C57C0
void * zHammer::~zHammer(class zHammer * this /* r30 */) {
    // References
    // -> struct {} __vt__7zHammer;
}
// signature: zHammer::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800C57C0 -> 0x800C5814
void zHammer::HandleEvent() {
}
// signature: zHammer::HandleEventWrap(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800C5820 -> 0x800C5830
void zHammer::HandleEventWrap(class xBase * from /* r0 */) {
}
// signature: zHammer::SetVisible(bool)
// Range: 0x800C5830 -> 0x800C589C
void zHammer::SetVisible(class zHammer * this /* r31 */) {
}
// Range: 0x800C58A0 -> 0x800C5958
void zHammer::UpdateDamageSphere(class zHammer * this /* r29 */) {
    // Local variables
    class xMat4x3 transform; // r1+0x58

    {
        // Range: 0x800C58D8 -> 0x800C5920
        // Local variables
        class xMat4x3 boneMat; // r1+0x18
    }

    // References
    // -> class xVec3 damageOffset;
    // -> int damageBone;
    // -> float damageRadius;
}
// Range: 0x800C5960 -> 0x800C5AD8
void zHammer::CheckForHit(class zHammer * this /* r28 */) {
    // Local variables
    class hkpSphereShape shape; // r1+0x30
    class hkVector4 pos; // r1+0x20
    class hkMotionState motionState; // r1+0xA0
    class hkpWorld * havokWorld; // r30
    class hkpCollidable collA; // r1+0x50
    class hkpCollisionInput * input; // r31
    class hkpAllCdBodyPairCollector collector; // r1+0x150

    {
        // Range: 0x800C5A24 -> 0x800C5AB0
        // Local variables
        int i; // r29

        {
            // Range: 0x800C5A24 -> 0x800C5AB0
            // Local variables
            class xBase * hitObject; // r4
            class hkpRigidBody * hitRB; // r0
            class hkpPhantom * hitPhantom; // r0
        }
    }
}
// Range: 0x800C5C70 -> 0x800C5D8C
void zHammer::DoHitDamage(class zHammer * this /* r31 */, class xEnt * hitEnt /* r29 */) {
    // Local variables
    class zCombatDamageInfo damageInfo; // r1+0x20
    class xVec3 knockDir; // r1+0x14

    // References
    // -> float knockBackSpeedUp;
    // -> float knockBackSpeedAway;
    // -> float damageAmount;
}
// Range: 0x800C5D90 -> 0x800C5E30
void zHammer::DoImpactEffects(class zHammer * this /* r30 */) {
    // Local variables
    class zSBPlayer * player; // r0
    float distance2; // f0

    {
        // Range: 0x800C5DCC -> 0x800C5E18
        // Local variables
        class effect * rumble; // r30
    }

    // References
    // -> float rumbleRadius2;
}
// Range: 0x800C5E30 -> 0x800C5ED4
void zHammer::Update(class zHammer * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x800C5EE0 -> 0x800C5F34
void zHammer::UpdatePhysFromRender(class zHammer * this /* r31 */) {
    // Local variables
    class hkTransform transf; // r1+0x10
}
// Range: 0x800C5F40 -> 0x800C5FB8
void zHammer::ChangeState(class zHammer * this /* r30 */, class State * newState /* r31 */) {
}
// Range: 0x800C5FC0 -> 0x800C6014
void zHammer::State_Up::Enter(class State_Up * this /* r31 */) {
}
// signature: zHammer::State_Up::Update(float)
// Range: 0x800C6020 -> 0x800C6054
void zHammer::State_Up::Update() {
}
// Range: 0x800C6060 -> 0x800C608C
void zHammer::State_Strike::Enter() {
}
// signature: zHammer::State_Strike::Update(float)
// Range: 0x800C6090 -> 0x800C6170
void zHammer::State_Strike::Update(class State_Strike * this /* r31 */) {
    // Local variables
    float dy; // f31

    // References
    // -> float strikeSpeed;
}
// Range: 0x800C6170 -> 0x800C6188
void zHammer::State_Impact::Enter() {
}
// signature: zHammer::State_Impact::Update(float)
// Range: 0x800C6190 -> 0x800C6198
void zHammer::State_Impact::Update() {
}
// Range: 0x800C61A0 -> 0x800C61B4
void zHammer::State_Recoil::Enter() {
}
// signature: zHammer::State_Recoil::Update(float)
// Range: 0x800C61C0 -> 0x800C6258
void zHammer::State_Recoil::Update() {
    // Local variables
    float dy; // f4

    // References
    // -> float recoilSpeed;
}
// Range: 0x800C6260 -> 0x800C654C
class xAnimTable * zHammer::CreateAnimTable(unsigned long long animSetID /* r28:r27 */) {
    // Local variables
    class xAnimTable * table; // r26

    // References
    // -> static class xAnimTable * animHammerTables;
}
// signature: zHammer::RemoveAnimTable(unsigned long long)
// Range: 0x800C6620 -> 0x800C66C8
void zHammer::RemoveAnimTable() {
    // Local variables
    class xAnimTable * table; // r31
    class xAnimTable * prev; // r30

    // References
    // -> static class xAnimTable * animHammerTables;
}
// signature: zHammer::HammerStrikeCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800C66D0 -> 0x800C6720
unsigned int zHammer::HammerStrikeCheck() {
}
// signature: zHammer::DrivePrep(World::xOGEntity *)
// Range: 0x800C6720 -> 0x800C6750
bool zHammer::DrivePrep() {
    // References
    // -> class xMat4x3 g_I3;
}
// signature: zHammer::DriveCauseMove(xMat4x3 *, xMat4x3 *, xMat4x3 *, xMat4x3 *, bool, bool, float, float)
// Range: 0x800C6750 -> 0x800C67BC
void zHammer::DriveCauseMove(class zHammer * this /* r30 */, class xMat4x3 * driverCurMat /* r0 */, class xMat4x3 * psgOrigMat /* r31 */) {
    // Local variables
    class xMat4x3 newMat; // r1+0x8
}
