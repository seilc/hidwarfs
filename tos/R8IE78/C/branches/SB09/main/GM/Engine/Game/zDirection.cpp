/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zDirection.cpp
*/
// signature: DirectionEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800AC160 -> 0x800AC17C
static void DirectionEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x800AC180 -> 0x800AC1C8
void zDirection::Init(class zDirection * this /* r30 */, class zDirectionAsset * inAsset /* r31 */) {
}
// Range: 0x800AC1D0 -> 0x800AC218
void zDirection::Setup(class zDirection * this /* r31 */) {
}
// Range: 0x800AC220 -> 0x800AC230
void zDirection::DebugReset() {
}
// signature: zDirection::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800AC230 -> 0x800AC270
void zDirection::HandleEvent() {
}
// Range: 0x800AC270 -> 0x800AC2F8
class Entity * Sext::zDirectionAsset::Create(class EntityHandleBase * handle /* r29 */, class zDirectionAsset * inAsset /* r30 */) {
    // References
    // -> struct {} __vt__10zDirection;
}
// Range: 0x800AC300 -> 0x800AC34C
void zDirection::GetDirection(class zDirection * this /* r5 */, class xVec3 & direction /* r31 */) {
    // Local variables
    class xMat3x3 mat; // r1+0x8
}
// Range: 0x800AC350 -> 0x800AC39C
void zDirection::GetRotation(class zDirection * this /* r5 */, class xQuat * quat /* r31 */) {
    // Local variables
    class xMat3x3 mat; // r1+0x8
}
