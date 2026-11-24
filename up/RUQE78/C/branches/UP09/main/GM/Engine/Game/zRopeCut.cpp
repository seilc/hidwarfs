/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zRopeCut.cpp
*/
static class xBox sUnitBox; // size: 0x18, address: 0x80826300
// Range: 0x80228040 -> 0x80228084
void zRopeCut::Init(class zRopeCut * this /* r30 */, void * inAsset /* r31 */) {
}
// Range: 0x80228090 -> 0x80228194
void zRopeCut::Setup(class zRopeCut * this /* r31 */) {
    // Local variables
    class Vector4 row_1; // r1+0x28
    class Vector4 row_2; // r1+0x18
    class Vector4 row_3; // r1+0x8
}
// Range: 0x802281A0 -> 0x8022825C
void zRopeCut::SetupIcons(class zRopeCut * this /* r31 */) {
    // Local variables
    class xVec3 iconPos; // r1+0x8
}
// Range: 0x80228260 -> 0x802282B4
void zRopeCut::Reset(class zRopeCut * this /* r31 */) {
}
// signature: zRopeCut::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x802282C0 -> 0x80228390
void zRopeCut::HandleEvent(class zRopeCut * this /* r29 */, unsigned int toEvent /* r30 */) {
}
// Range: 0x80228390 -> 0x8022846C
class Entity * Sext::zRopeCutAsset::Create(class EntityHandleBase * handle /* r29 */, class zRopeCutAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__8zRopeCut;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x80228480 -> 0x802285C4
bool zRopeCut::CanStart(class zRopeCut * this /* r30 */, class zCommonPlayer * player /* r31 */) {
    // References
    // -> static class xBox sUnitBox;
}
// Range: 0x802285D0 -> 0x802286DC
void zRopeCut::ContextCheckForActivity(class zRopeCut * this /* r28 */, class zCommonPlayer * player /* r29 */) {
    {
        // Range: 0x802285F4 -> 0x80228680
        // Local variables
        class zUpContextAction * ca; // r0
    }
}
// signature: zRopeCut::GetStartDirection(zCommonPlayer *, xVec3 &)
// Range: 0x80228700 -> 0x802287E0
void zRopeCut::GetStartDirection() {
}
// signature: zRopeCut::GetAnimPackage(ePlayerName)
// Range: 0x802287E0 -> 0x802287F8
class zAnimPackage * zRopeCut::GetAnimPackage() {
}
