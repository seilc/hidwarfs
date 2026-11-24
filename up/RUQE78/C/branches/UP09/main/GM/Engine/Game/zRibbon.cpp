/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zRibbon.cpp
*/
// signature: Local::RibbonEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x802270D0 -> 0x80227120
void Local::RibbonEventWrapper(class xBase * to /* r31 */) {
}
// Range: 0x80227120 -> 0x802271E8
class Entity * Sext::Ribbon::Create(class EntityHandleBase * handle /* r29 */, class Ribbon * asset /* r30 */) {
    // References
    // -> struct {} __vt__7zRibbon;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: zRibbon::init(Sext::Ribbon *)
// Range: 0x802271F0 -> 0x8022746C
void zRibbon::init(class zRibbon * this /* r30 */) {
    // Local variables
    int numCurves; // r31

    {
        // Range: 0x802272B8 -> 0x80227310
        // Local variables
        int i; // r0
    }
}
// Range: 0x80227470 -> 0x802274BC
class xFXRibbon * zRibbon::createRibbon(class zRibbon * this /* r30 */) {
    // Local variables
    class xFXRibbon * ribbon; // r31
}
// Range: 0x802274C0 -> 0x802274F0
void zRibbon::destroyRibbon(class xFXRibbon * ribbon /* r1+0x8 */) {
}
// signature: zRibbon::emit(xFXRibbon *, const xMat4x3 &)
// Range: 0x802274F0 -> 0x80227520
void zRibbon::emit() {
}
// signature: FX::Ribbons::SystemInstance::SystemInstance(zRibbon *)
// Range: 0x80227520 -> 0x80227540
void * FX::Ribbons::SystemInstance::SystemInstance() {
}
// Range: 0x80227540 -> 0x80227590
void FX::Ribbons::SystemInstance::UnregisterSelf(class SystemInstance * this /* r31 */) {
}
// Range: 0x80227590 -> 0x802275D0
bool FX::Ribbons::SystemInstance::IsRunning() const {
}
// signature: FX::Ribbons::SystemInstance::SetRunning(bool)
// Range: 0x802275D0 -> 0x802275F0
void FX::Ribbons::SystemInstance::SetRunning() {
}
// Range: 0x802275F0 -> 0x80227694
void FX::Ribbons::SystemInstance::emit(class SystemInstance * this /* r29 */) {
}
