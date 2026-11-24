/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zNPCGenericSpawner.cpp
*/
// signature: zNPCGenericSpawner::Initialize(const zNPCStatus *)
// Range: 0x801D67B0 -> 0x801D692C
void zNPCGenericSpawner::Initialize(class zNPCGenericSpawner * this /* r31 */) {
    // References
    // -> static class zNPCHitReactionTable sNPCGenericHitReactionTable[2];
    // -> class zFactory factory;
    // -> class zNPCEntityParams sEntParams;
}
// signature: zNPCGenericSpawner::Activate(const zNPCStatus *)
// Range: 0x801D6930 -> 0x801D69A0
bool zNPCGenericSpawner::Activate(class zNPCGenericSpawner * this /* r29 */) {
    // Local variables
    bool ret; // r30
}
// Range: 0x801D69A0 -> 0x801D6C38
void zNPCGenericSpawner::Update(class zNPCGenericSpawner * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x801D6C40 -> 0x801D6C44
void zNPCGenericSpawner::Reset() {
}
// signature: zNPCGenericSpawner::SystemEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801D6C60 -> 0x801D6CD0
void zNPCGenericSpawner::SystemEvent() {
}
// signature: zNPCGenericSpawner::CalcLaunchVelocity(const xVec3 *, const xVec3 *, float, float, xVec3 *, float *, float *, float *)
// Range: 0x801D6CD0 -> 0x801D6E80
bool zNPCGenericSpawner::CalcLaunchVelocity(float gravity /* f31 */, class xVec3 * oLaunchVel /* r27 */, float * oTime /* r28 */, float * oHeight /* r29 */, float * oTimeMaxHeight /* r30 */) {
    // Local variables
    float g; // f0
    class xVec3 dist; // r1+0x14
    float dy_max; // f0
    float vy; // f0
    float t1; // f28
    float t2; // f0
    float t; // f2
}
