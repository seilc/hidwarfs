/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zPry.cpp
*/
static class xBox sUnitBox; // size: 0x18, address: 0x80825650
// Range: 0x8021FED0 -> 0x8021FF20
void zPry::Init(class zPry * this /* r30 */, void * inAsset /* r31 */) {
}
// Range: 0x8021FF20 -> 0x80220094
void zPry::Setup(class zPry * this /* r30 */) {
    // Local variables
    class zDirection * direction; // r31
    class Vector4 row_1; // r1+0x28
    class Vector4 row_2; // r1+0x18
    class Vector4 row_3; // r1+0x8

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x802200A0 -> 0x8022015C
void zPry::SetupIcons(class zPry * this /* r31 */) {
    // Local variables
    class xVec3 iconPos; // r1+0x8
}
// Range: 0x80220160 -> 0x802201AC
void zPry::Reset(class zPry * this /* r31 */) {
}
// signature: zPry::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x802201B0 -> 0x80220280
void zPry::HandleEvent(class zPry * this /* r29 */, unsigned int toEvent /* r30 */) {
}
// Range: 0x80220280 -> 0x8022035C
class Entity * Sext::zPryAsset::Create(class EntityHandleBase * handle /* r29 */, class zPryAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__4zPry;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x80220360 -> 0x802203F8
void zPry::PrySuccess(class zPry * this /* r31 */) {
}
// signature: zPry::TimeStep(float)
// Range: 0x80220400 -> 0x80220438
void zPry::TimeStep(class zPry * this /* r31 */) {
}
// Range: 0x80220440 -> 0x802205D0
bool zPry::CanStart(class zPry * this /* r30 */, class zCommonPlayer * player /* r31 */) {
    // References
    // -> static class xBox sUnitBox;
}
// Range: 0x802205D0 -> 0x802206C8
void zPry::ContextCheckForActivity(class zPry * this /* r27 */, class zCommonPlayer * player /* r28 */) {
    {
        // Range: 0x802205E8 -> 0x80220678
        // Local variables
        class zUpContextAction * ca; // r0
    }
}
// signature: zPry::GetStartPosition(zCommonPlayer *, xVec3 &)
// Range: 0x802206E0 -> 0x802206FC
void zPry::GetStartPosition() {
}
// signature: zPry::GetStartDirection(zCommonPlayer *, xVec3 &)
// Range: 0x80220700 -> 0x8022071C
void zPry::GetStartDirection() {
}
// signature: zPry::GetAnimPackage(ePlayerName)
// Range: 0x80220720 -> 0x80220738
class zAnimPackage * zPry::GetAnimPackage() {
}
