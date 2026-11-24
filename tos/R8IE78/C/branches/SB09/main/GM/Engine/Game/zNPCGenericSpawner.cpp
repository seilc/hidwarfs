/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zNPCGenericSpawner.cpp
*/
// signature: zNPCGenericSpawner::zNPCGenericSpawner(World::EntityHandleBase *)
// Range: 0x800F25B0 -> 0x800F25EC
void * zNPCGenericSpawner::zNPCGenericSpawner(class zNPCGenericSpawner * this /* r31 */) {
    // References
    // -> struct {} __vt__18zNPCGenericSpawner;
}
// signature: zNPCGenericSpawner::Initialize(const zNPCStatus *)
// Range: 0x800F2650 -> 0x800F26A0
void zNPCGenericSpawner::Initialize(class zNPCGenericSpawner * this /* r31 */) {
}
// signature: zNPCGenericSpawner::Activate(const zNPCStatus *)
// Range: 0x800F26A0 -> 0x800F2700
bool zNPCGenericSpawner::Activate(class zNPCGenericSpawner * this /* r30 */) {
    // Local variables
    bool ret; // r31
}
// signature: zNPCGenericSpawner::Update(float)
// Range: 0x800F2700 -> 0x800F2710
void zNPCGenericSpawner::Update() {
}
// Range: 0x800F2710 -> 0x800F2738
void zNPCGenericSpawner::Reset() {
}
// Range: 0x800F2740 -> 0x800F281C
void zNPCGenericSpawner::SystemEvent(class zNPCGenericSpawner * this /* r27 */, class xBase * from /* r28 */, class xBase * to /* r29 */, unsigned int to_event /* r30 */, class EventAny * params /* r31 */) {
}
// signature: zNPCGenericSpawner::NPCWasSpawned(zNPCGeneric *)
// Range: 0x800F2820 -> 0x800F286C
void zNPCGenericSpawner::NPCWasSpawned() {
}
// signature: zNPCGenericSpawner::GetSpawnPos(xVec3 *, const zNPCGeneric *)
// Range: 0x800F2870 -> 0x800F2888
void zNPCGenericSpawner::GetSpawnPos() {
    // Local variables
    class NPCAsset * theirAsset; // r0
}
// signature: zNPCGenericSpawner::CalcLaunchVelocity(const xVec3 *, const xVec3 *, float, float, float, xVec3 *, float *, float *, float *)
// Range: 0x800F2890 -> 0x800F29E0
bool zNPCGenericSpawner::CalcLaunchVelocity(class zNPCGenericSpawner * this /* r31 */, class xVec3 * posFrom /* r0 */, float gravity /* f28 */, float h0 /* f30 */, float hMax /* f29 */, class xVec3 * oLaunchVel /* r27 */, float * oTime /* r28 */, float * oHeight /* r29 */, float * oTimeMaxHeight /* r30 */) {
    // Local variables
    float g; // f0
    class xVec3 dist; // r1+0x14
    float dy_max; // f0
    float vy; // f0
    float t1; // f29
    float t2; // f0
    float t; // f2
}
// signature: zNPCGenericSpawner::HelperIncrFunc(float, float, float)
// Range: 0x800F29E0 -> 0x800F2A40
float zNPCGenericSpawner::HelperIncrFunc() {
}
// Range: 0x800F2A40 -> 0x800F2B5C
void zNPCGenericSpawner::xMat3x3FromUpVec(class xVec3 * downIn /* r30 */, class xMat3x3 * oRot /* r31 */) {
    // Local variables
    class xVec3 down; // r1+0x8
}
