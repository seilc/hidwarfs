/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zKevinSpringboard.cpp
*/
// Range: 0x800DB8A0 -> 0x800DB8E4
void zKevinSpringboard::Init(class zKevinSpringboard * this /* r30 */, void * inAsset /* r31 */) {
}
// Range: 0x800DB8F0 -> 0x800DBB10
void zKevinSpringboard::Setup(class zKevinSpringboard * this /* r31 */) {
    // Local variables
    class zDirection * tempDir; // r0
    class Vector4 row_1; // r1+0x40
    class Vector4 row_2; // r1+0x30
    class Vector4 row_3; // r1+0x20
    class xVec3 scale; // r1+0x14
}
// Range: 0x800DBB10 -> 0x800DBB9C
void zKevinSpringboard::Reset(class zKevinSpringboard * this /* r31 */) {
    {
        // Range: 0x800DBB3C -> 0x800DBB6C
        // Local variables
        int x; // r7
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zKevinSpringboard::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800DBBA0 -> 0x800DBCF4
void zKevinSpringboard::HandleEvent(class zKevinSpringboard * this /* r29 */) {
}
// Range: 0x800DBD00 -> 0x800DBDDC
class Entity * Sext::zKevinSpringboardAsset::Create(class EntityHandleBase * handle /* r29 */, class zKevinSpringboardAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__17zKevinSpringboard;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: zKevinSpringboard::TimeStep(float)
// Range: 0x800DBDE0 -> 0x800DBE04
void zKevinSpringboard::TimeStep() {
}
// Range: 0x800DBE10 -> 0x800DBEA0
void zKevinSpringboard::Start(class zKevinSpringboard * this /* r30 */, class zCommonPlayer * player /* r31 */) {
    // Local variables
    class xVec3 newIconPos; // r1+0x8
}
// signature: zKevinSpringboard::Stop(zCommonPlayer *)
// Range: 0x800DBEA0 -> 0x800DBED4
void zKevinSpringboard::Stop(class zKevinSpringboard * this /* r31 */) {
}
// Range: 0x800DBEE0 -> 0x800DC110
void zKevinSpringboard::ContextCheckForPresence(class zKevinSpringboard * this /* r31 */, class zCommonPlayer * player /* r29 */) {
    // Local variables
    class zKevinPlayer * kevinPlayer; // r0

    {
        // Range: 0x800DBF34 -> 0x800DC0F4
        // Local variables
        class zUpContextAction * ca; // r0
    }

    // References
    // -> static class xBox sUnitBoxc;
}
// signature: zKevinSpringboard::GetAnimPackage(ePlayerName)
// Range: 0x800DC120 -> 0x800DC16C
class zAnimPackage * zKevinSpringboard::GetAnimPackage() {
}
// Range: 0x800DC170 -> 0x800DC3C8
bool zKevinSpringboard::checkPlayer(class zKevinSpringboard * this /* r31 */, class zUPPlayer * player /* r28 */, bool perm /* r29 */) {
}
