/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zButtonMasherWidget.cpp
*/
class _OGButton_Masher_WidgetSchema _OGButton_Masher_Widgetschema; // size: 0x18, address: 0x8076A5E0
class SchemaRegistrator _OGButton_Masher_WidgetschemaReg; // size: 0x8, address: 0x8076A5F8
class zButtonMasherMashChecker * * objectArray; // size: 0x4, address: 0x8076A600
int objectCount; // size: 0x4, address: 0x8076A604
// Range: 0x8008A220 -> 0x8008A230
void World::_OGButton_Masher_WidgetEntity::Deactivate() {
}
// Range: 0x8008A230 -> 0x8008A280
void World::_OGButton_Masher_WidgetEntity::Destroy(class _OGButton_Masher_WidgetEntity * this /* r31 */) {
}
// signature: World::_OGButton_Masher_WidgetSchema::Fix(World::Asset *, long, int)
// Range: 0x8008A2E0 -> 0x8008A2E8
void World::_OGButton_Masher_WidgetSchema::Fix() {
}
// signature: World::_OGButton_Masher_WidgetSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8008A2F0 -> 0x8008A33C
class EntityStub * World::_OGButton_Masher_WidgetSchema::CreateStub(class _OGButton_Masher_WidgetSchema * this /* r31 */) {
}
// signature: World::_OGButton_Masher_WidgetSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8008A340 -> 0x8008A358
void World::_OGButton_Masher_WidgetSchema::DestroyStub() {
}
// signature: World::_OGButton_Masher_WidgetSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8008A360 -> 0x8008A3C8
class Entity * World::_OGButton_Masher_WidgetSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World29_OGButton_Masher_WidgetEntity;
}
// Range: 0x8008A410 -> 0x8008A428
void zButtonMasherController::Init() {
    // References
    // -> class zButtonMasherMashChecker * * objectArray;
    // -> int objectCount;
}
// Range: 0x8008A430 -> 0x8008A4BC
void zButtonMasherController::UpdateAll(float dt /* f31 */) {
    {
        // Range: 0x8008A448 -> 0x8008A448
        // Local variables
        int i; // r28
    }

    // References
    // -> class zButtonMasherMashChecker * * objectArray;
    // -> int objectCount;
}
// Range: 0x8008A4C0 -> 0x8008A584
void * zButtonMasherMashChecker::zButtonMasherMashChecker(class zButtonMasherMashChecker * this /* r30 */, class zButtonMasherWidgetAsset * theAsset /* r31 */) {
    // Local variables
    class zPlayer * player; // r0

    // References
    // -> int objectCount;
    // -> struct {} __vt__24zButtonMasherMashChecker;
}
// signature: zButtonMasherMashChecker::Init(xBase &, xDynAsset &, unsigned long)
// Range: 0x8008A590 -> 0x8008A5A0
void zButtonMasherMashChecker::Init() {
}
// signature: zButtonMasherMashChecker::EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8008A5A0 -> 0x8008A68C
void zButtonMasherMashChecker::EventCB() {
    // Local variables
    class zButtonMasherMashChecker * obj; // r29

    // References
    // -> int objectCount;
    // -> class zButtonMasherMashChecker * * objectArray;
}
// Range: 0x8008A690 -> 0x8008A698
bool zButtonMasherMashChecker::CycleDone() {
}
// signature: zButtonMasherMashChecker::Update(float)
// Range: 0x8008A6A0 -> 0x8008AA60
void zButtonMasherMashChecker::Update(class zButtonMasherMashChecker * this /* r31 */) {
    // Local variables
    float retRate; // f31
}
// Range: 0x8008AA60 -> 0x8008AA70
void zButtonMasherMashChecker::ResetButton() {
}
