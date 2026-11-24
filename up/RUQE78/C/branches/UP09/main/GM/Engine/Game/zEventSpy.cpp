/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zEventSpy.cpp
*/
int spyCount; // size: 0x4, address: 0x8081D74C
class zEventSpy * * spyList; // size: 0x4, address: 0x8081D750
// Range: 0x80152890 -> 0x80152964
class Entity * Sext::zEventSpyAsset::Create(class EntityHandleBase * handle /* r29 */, class zEventSpyAsset * inAsset /* r30 */) {
    // References
    // -> struct {} __vt__9zEventSpy;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: EventSpyEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80152970 -> 0x8015298C
static void EventSpyEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x80152990 -> 0x801529D8
void zEventSpy::Init(class zEventSpy * this /* r30 */, class zEventSpyAsset * inAsset /* r31 */) {
}
// Range: 0x801529E0 -> 0x801529EC
void zEventSpy::Setup() {
}
// signature: zEventSpy::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80152A00 -> 0x80152A68
void zEventSpy::HandleEvent() {
}
// Range: 0x80152A70 -> 0x80152A88
void zEventSpy::DestroySpyList() {
    // References
    // -> class zEventSpy * * spyList;
    // -> int spyCount;
}
