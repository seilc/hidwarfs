/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zSpinner.cpp
*/
static class xAnimTable * animSpinnerTables; // size: 0x4, address: 0x8075A6E0
float knockbackSpeedAway; // size: 0x4, address: 0x806C23B0
float knockbackSpeedUp; // size: 0x4, address: 0x806C23B4
// Range: 0x801707D0 -> 0x80170830
class Entity * Sext::zSpinnerAsset::Create(class EntityHandleBase * handle /* r30 */, class zSpinnerAsset * asset /* r31 */) {
}
// signature: zSpinner::zSpinner(World::EntityHandleBase *, Sext::zSpinnerAsset *)
// Range: 0x80170830 -> 0x801708D4
void * zSpinner::zSpinner(class zSpinner * this /* r30 */, class zSpinnerAsset * inAsset /* r31 */) {
    // References
    // -> struct {} __vt__8zSpinner;
}
// Range: 0x801708E0 -> 0x80170964
void * zSpinner::~zSpinner(class zSpinner * this /* r30 */) {
    // References
    // -> struct {} __vt__8zSpinner;
}
// Range: 0x80170970 -> 0x80170A44
void zSpinner::Update(class zSpinner * this /* r31 */, float dt /* f31 */) {
    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80170A50 -> 0x80170AA8
void zSpinner::Reset(class zSpinner * this /* r31 */) {
}
// Range: 0x80170AB0 -> 0x80170C28
void zSpinner::Setup(class zSpinner * this /* r31 */) {
    // Local variables
    class xVec3 p1; // r1+0x8
    class xMat4x3 mat; // r1+0x18
    class xAnimTable * table; // r5

    // References
    // -> class zGlobals globals;
    // -> static class xAnimTable * animSpinnerTables;
}
// Range: 0x80170C30 -> 0x80170E3C
void zSpinner::UpdatePhysicsFromRender(class zSpinner * this /* r31 */) {
    // Local variables
    class xMat4x3 mat; // r1+0x140
    class Matrix43 matx; // r1+0x110
}
// signature: zSpinner::SetPhysicsTransform(const xMat4x3 *)
// Range: 0x80170E40 -> 0x80170E94
void zSpinner::SetPhysicsTransform(class zSpinner * this /* r31 */) {
    // Local variables
    class hkTransform hkTransf; // r1+0x10
}
// Range: 0x80170EA0 -> 0x80170F68
void zSpinner::HKAddBody(class zSpinner * this /* r31 */) {
    // Local variables
    class hkpRigidBodyCinfo cinfo; // r1+0x10
}
// Range: 0x80170F70 -> 0x80170FA4
class hkpListShape * zSpinner::HKBuildShape() {
    // Local variables
    class ModelPrototypeEntity * proto; // r0
    class hkpShape * shape; // r0
}
// Range: 0x80170FB0 -> 0x801710A4
void zSpinner::DoHitDamage(class zSpinner * this /* r30 */, class xEnt * hitEnt /* r31 */) {
    // Local variables
    class zCombatDamageInfo damageInfo; // r1+0x20
    class xVec3 knockDir; // r1+0x14

    // References
    // -> float knockbackSpeedUp;
    // -> float knockbackSpeedAway;
}
// signature: zSpinner::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801710B0 -> 0x80171104
void zSpinner::HandleEvent() {
}
// signature: zSpinner::HandleEventWrap(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80171110 -> 0x80171120
void zSpinner::HandleEventWrap(class xBase * from /* r0 */) {
}
// Range: 0x80171120 -> 0x801713D0
class xAnimTable * zSpinner::CreateAnimTable(unsigned long long animSetID /* r28:r27 */) {
    // Local variables
    class xAnimTable * table; // r26

    // References
    // -> static class xAnimTable * animSpinnerTables;
}
// signature: zSpinner::RemoveAnimTable(unsigned long long)
// Range: 0x801714A0 -> 0x80171544
void zSpinner::RemoveAnimTable() {
    // Local variables
    class xAnimTable * table; // r31
    class xAnimTable * prev; // r30

    // References
    // -> static class xAnimTable * animSpinnerTables;
}
// signature: zSpinner::IdleToSpinCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80171550 -> 0x80171584
unsigned int zSpinner::IdleToSpinCheck() {
}
// signature: zSpinner::SpinToSpinCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80171590 -> 0x801715E0
unsigned int zSpinner::SpinToSpinCheck() {
}
// signature: zSpinner::DrivePrep(World::xOGEntity *)
// Range: 0x801715E0 -> 0x80171640
bool zSpinner::DrivePrep(class zSpinner * this /* r31 */) {
    // Local variables
    class xMat4x3 invDriverMat; // r1+0x8
}
// signature: zSpinner::DriveCauseMove(xMat4x3 *, xMat4x3 *, xMat4x3 *, xMat4x3 *, bool, bool, float, float)
// Range: 0x80171640 -> 0x80171684
void zSpinner::DriveCauseMove(class zSpinner * this /* r31 */) {
    // Local variables
    class xMat4x3 newMat; // r1+0x8
}
