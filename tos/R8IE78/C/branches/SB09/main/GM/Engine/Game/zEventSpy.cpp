/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zEventSpy.cpp
*/
int spyCount; // size: 0x4, address: 0x80733D3C
class zEventSpy * * spyList; // size: 0x4, address: 0x80733D40
// Range: 0x800AC530 -> 0x800AC5B8
class Entity * Sext::zEventSpyAsset::Create(class EntityHandleBase * handle /* r29 */, class zEventSpyAsset * inAsset /* r30 */) {
    // References
    // -> struct {} __vt__9zEventSpy;
}
// signature: EventSpyEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800AC5C0 -> 0x800AC5DC
static void EventSpyEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x800AC5E0 -> 0x800AC620
void zEventSpy::Init(class zEventSpy * this /* r30 */, class zEventSpyAsset * inAsset /* r31 */) {
}
// Range: 0x800AC620 -> 0x800AC62C
void zEventSpy::Setup() {
}
// signature: zEventSpy::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800AC630 -> 0x800AC698
void zEventSpy::HandleEvent() {
}
// Range: 0x800AC6A0 -> 0x800AC6B8
void zEventSpy::DestroySpyList() {
    // References
    // -> class zEventSpy * * spyList;
    // -> int spyCount;
}
