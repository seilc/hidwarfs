/*
    Compile unit: C:\RT\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zUIBox.cpp
*/
class _OGUI_BoxSchema _OGUI_Boxschema; // size: 0x18, address: 0x807FBAC0
class SchemaRegistrator _OGUI_BoxschemaReg; // size: 0x8, address: 0x807FBAD8
// Range: 0x8020EC70 -> 0x8020EC80
void World::_OGUI_BoxEntity::Deactivate() {
}
// Range: 0x8020EC80 -> 0x8020ECD0
void World::_OGUI_BoxEntity::Destroy(class _OGUI_BoxEntity * this /* r31 */) {
}
// signature: World::_OGUI_BoxSchema::Fix(World::Asset *, long, int)
// Range: 0x8020ED30 -> 0x8020ED38
void World::_OGUI_BoxSchema::Fix() {
}
// signature: World::_OGUI_BoxSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8020ED40 -> 0x8020ED8C
class EntityStub * World::_OGUI_BoxSchema::CreateStub(class _OGUI_BoxSchema * this /* r31 */) {
}
// signature: World::_OGUI_BoxSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8020ED90 -> 0x8020EDA8
void World::_OGUI_BoxSchema::DestroyStub() {
}
// signature: World::_OGUI_BoxSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8020EDB0 -> 0x8020EE18
class Entity * World::_OGUI_BoxSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World15_OGUI_BoxEntity;
}
// Range: 0x8020EE60 -> 0x8020EEA4
void zUIBox::DoInit(class zUIBox * this /* r31 */) {
}
// Range: 0x8020EEB0 -> 0x8020EFB4
void zUIBox::DoReset(class zUIBox * this /* r31 */) {
}
// Range: 0x8020EFC0 -> 0x8020EFF8
void zUIBox::DoResetMotion(class zUIBox * this /* r31 */) {
}
// signature: zUIBox::DoHandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8020F000 -> 0x8020F178
void zUIBox::DoHandleEvent(class zUIBox * this /* r29 */, class EventAny * genericParams /* r28 */) {
    {
        // Range: 0x8020F038 -> 0x8020F14C
        // Local variables
        int which; // r4
        class EventActionLegacy * params; // r0
        class RwTexture * pTexture; // r30

        {
            // Range: 0x8020F0EC -> 0x8020F0EC
            // Local variables
            int i; // r29
        }
    }
}
// Range: 0x8020F180 -> 0x8020F1C0
void zUIBox::DoApplyMotionFrame(class zUIBox * this /* r30 */, class zUIMotionFrame * frame /* r31 */) {
}
// signature: zUIBox_Init(xBase &, xDynAsset &, unsigned long)
// Range: 0x8020F1C0 -> 0x8020F234
void zUIBox_Init(class xBase * data /* r30 */, class xDynAsset * asset /* r31 */) {
    // References
    // -> struct {} __vt__6zUIBox;
}
