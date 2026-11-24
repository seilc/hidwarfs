/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zDirection.cpp
*/
// signature: DirectionEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8014A500 -> 0x8014A51C
static void DirectionEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x8014A520 -> 0x8014A570
void zDirection::Init(class zDirection * this /* r30 */, class zDirectionAsset * inAsset /* r31 */) {
}
// Range: 0x8014A570 -> 0x8014A5A8
void zDirection::Setup() {
}
// Range: 0x8014A5C0 -> 0x8014A8B0
void zDirection::DebugReset(class zDirection * this /* r31 */) {
    // References
    // -> class zGlobals globals;
}
// signature: zDirection::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8014A8B0 -> 0x8014A8F0
void zDirection::HandleEvent() {
}
// Range: 0x8014A8F0 -> 0x8014A9C4
class Entity * Sext::zDirectionAsset::Create(class EntityHandleBase * handle /* r29 */, class zDirectionAsset * inAsset /* r30 */) {
    // References
    // -> struct {} __vt__10zDirection;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x8014A9D0 -> 0x8014AA28
void zDirection::GetDirection(class zDirection * this /* r5 */, class xVec3 & direction /* r31 */) {
    // Local variables
    class xMat3x3 mat; // r1+0x8
}
// Range: 0x8014AA30 -> 0x8014AA7C
void zDirection::GetRotation(class zDirection * this /* r5 */, class xQuat * quat /* r31 */) {
    // Local variables
    class xMat3x3 mat; // r1+0x8
}
