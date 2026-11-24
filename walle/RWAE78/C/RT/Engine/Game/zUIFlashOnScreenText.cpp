/*
    Compile unit: C:\RT\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zUIFlashOnScreenText.cpp
*/
class _OGUI_Flash_On_Screen_TextSchema _OGUI_Flash_On_Screen_Textschema; // size: 0x18, address: 0x807FBB30
class SchemaRegistrator _OGUI_Flash_On_Screen_TextschemaReg; // size: 0x8, address: 0x807FBB48
// Range: 0x80210400 -> 0x80210410
void World::_OGUI_Flash_On_Screen_TextEntity::Deactivate() {
}
// Range: 0x80210410 -> 0x80210460
void World::_OGUI_Flash_On_Screen_TextEntity::Destroy(class _OGUI_Flash_On_Screen_TextEntity * this /* r31 */) {
}
// signature: World::_OGUI_Flash_On_Screen_TextSchema::Fix(World::Asset *, long, int)
// Range: 0x802104C0 -> 0x802104C8
void World::_OGUI_Flash_On_Screen_TextSchema::Fix() {
}
// signature: World::_OGUI_Flash_On_Screen_TextSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x802104D0 -> 0x8021051C
class EntityStub * World::_OGUI_Flash_On_Screen_TextSchema::CreateStub(class _OGUI_Flash_On_Screen_TextSchema * this /* r31 */) {
}
// signature: World::_OGUI_Flash_On_Screen_TextSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x80210520 -> 0x80210538
void World::_OGUI_Flash_On_Screen_TextSchema::DestroyStub() {
}
// signature: World::_OGUI_Flash_On_Screen_TextSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80210540 -> 0x802105A4
class Entity * World::_OGUI_Flash_On_Screen_TextSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World32_OGUI_Flash_On_Screen_TextEntity;
}
// Range: 0x802105F0 -> 0x80210700
void zUIFlashOnScreenText::init(class zUIFlashOnScreenText * this /* r31 */, class xDynAsset * dynAsset /* r30 */) {
}
// signature: zUIFlashOnScreenText::doHandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80210700 -> 0x80210BE4
void zUIFlashOnScreenText::doHandleEvent(class zUIFlashOnScreenText * this /* r31 */) {
    // Local variables
    class xCounter * counter; // r0
    class xTimer * timer; // r0
}
// signature: zUIFlashOnScreenText::Update(float)
// Range: 0x80210BF0 -> 0x80210EFC
void zUIFlashOnScreenText::Update(class zUIFlashOnScreenText * this /* r31 */) {
    // Local variables
    class xCounter * counter; // r0
    class xTimer * timer; // r0
}
// signature: zUIFlashOnScreenText_StaticHandleEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80210F00 -> 0x80210F10
static void zUIFlashOnScreenText_StaticHandleEvent(class xBase * from /* r0 */) {
}
// signature: zUIFlashOnScreenText_Init(xBase &, xDynAsset &, unsigned long)
// Range: 0x80210F10 -> 0x80210F14
void zUIFlashOnScreenText_Init() {
}
