/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zUIUserString.cpp
*/
class _OGUI_User_StringSchema _OGUI_User_Stringschema; // size: 0x18, address: 0x807E5488
class SchemaRegistrator _OGUI_User_StringschemaReg; // size: 0x8, address: 0x807E54A0
// Range: 0x801D09A0 -> 0x801D09B0
void World::_OGUI_User_StringEntity::Deactivate() {
}
// Range: 0x801D09B0 -> 0x801D0A00
void World::_OGUI_User_StringEntity::Destroy(class _OGUI_User_StringEntity * this /* r31 */) {
}
// signature: World::_OGUI_User_StringSchema::Fix(World::Asset *, long, int)
// Range: 0x801D0A60 -> 0x801D0A68
void World::_OGUI_User_StringSchema::Fix() {
}
// signature: World::_OGUI_User_StringSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801D0A70 -> 0x801D0ABC
class EntityStub * World::_OGUI_User_StringSchema::CreateStub(class _OGUI_User_StringSchema * this /* r31 */) {
}
// signature: World::_OGUI_User_StringSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x801D0AC0 -> 0x801D0AD8
void World::_OGUI_User_StringSchema::DestroyStub() {
}
// signature: World::_OGUI_User_StringSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801D0AE0 -> 0x801D0B48
class Entity * World::_OGUI_User_StringSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World23_OGUI_User_StringEntity;
}
// Range: 0x801D0B90 -> 0x801D0C0C
void zUIUserString::DoInit(class zUIUserString * this /* r30 */) {
}
// Range: 0x801D0C10 -> 0x801D0C2C
void zUIUserString::DoExit() {
}
// Range: 0x801D0C30 -> 0x801D0CB0
void zUIUserString::DoReset(class zUIUserString * this /* r30 */) {
}
// signature: zUIUserString::DoHandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801D0CB0 -> 0x801D0EB4
void zUIUserString::DoHandleEvent(class zUIUserString * this /* r31 */) {
    // Local variables
    class EventActionLegacy * params; // r0

    {
        // Range: 0x801D0CF8 -> 0x801D0D90
        // Local variables
        char * asset; // r0
        unsigned int stringHash; // r3
        unsigned int len; // r1+0x8
    }
    {
        // Range: 0x801D0D94 -> 0x801D0E00
        // Local variables
        char ch; // r7
    }
}
// Range: 0x801D0EC0 -> 0x801D0ED0
unsigned long long zUIUserString::GetSortKey() const {
}
// signature: zUIUserString_Init(xBase &, xDynAsset &, unsigned long)
// Range: 0x801D0ED0 -> 0x801D0F5C
void zUIUserString_Init(class xBase * data /* r30 */, class xDynAsset * asset /* r31 */) {
    // References
    // -> struct {} __vt__13zUIUserString;
}
