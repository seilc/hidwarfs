/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xSaveLoad.cpp
*/
class _OGSaveLoadSchema _OGSaveLoadschema; // size: 0x18, address: 0x8075DF00
class SchemaRegistrator _OGSaveLoadschemaReg; // size: 0x8, address: 0x8075DF18
static bool sceneLoad; // size: 0x1, address: 0x8075DF20
// Range: 0x80058560 -> 0x80058570
void World::_OGSaveLoadEntity::Deactivate() {
}
// Range: 0x80058570 -> 0x800585C0
void World::_OGSaveLoadEntity::Destroy(class _OGSaveLoadEntity * this /* r31 */) {
}
// signature: World::_OGSaveLoadSchema::Fix(World::Asset *, long, int)
// Range: 0x80058620 -> 0x80058628
void World::_OGSaveLoadSchema::Fix() {
}
// signature: World::_OGSaveLoadSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80058630 -> 0x8005867C
class EntityStub * World::_OGSaveLoadSchema::CreateStub(class _OGSaveLoadSchema * this /* r31 */) {
}
// signature: World::_OGSaveLoadSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x80058680 -> 0x80058698
void World::_OGSaveLoadSchema::DestroyStub() {
}
// signature: World::_OGSaveLoadSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800586A0 -> 0x80058704
class Entity * World::_OGSaveLoadSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World17_OGSaveLoadEntity;
}
// signature: zSaveDataResultCB(int, void *, bool)
// Range: 0x80058750 -> 0x800589DC
void zSaveDataResultCB(int result /* r30 */, void * data /* r31 */) {
    // References
    // -> class xGlobals * xglobals;
    // -> class SaveData g_saveData;
    // -> static bool sceneLoad;
    // -> static bool g_bufferLock;
    // -> class zGlobals globals;
}
// signature: zSaveLoadEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800589E0 -> 0x80058E50
void zSaveLoadEventCB(class xBase * from /* r29 */, class EventAny * genericParams /* r30 */) {
    // Local variables
    class SaveDataHeader header; // r1+0x38
    int bufferSize; // r27

    {
        // Range: 0x80058AE8 -> 0x80058B88
        // Local variables
        unsigned long long * id; // r9
        class EventActionOneWidget * params; // r0
    }
    {
        // Range: 0x80058BEC -> 0x80058D30
        // Local variables
        class zPortal vportal; // r1+0xA0
        class xSerial xser; // r1+0x44
        class EventActionPortal * params; // r0

        {
            // Range: 0x80058C20 -> 0x80058CB0
            // Local variables
            class xPortalAsset * passet; // r0
        }
    }

    // References
    // -> struct {} __vt__7zPortal;
    // -> static bool sceneLoad;
    // -> class zGlobals globals;
    // -> class SaveData g_saveData;
    // -> static class st_XSERIAL_DATA_PRIV g_xserdata;
    // -> static bool g_bufferLock;
    // -> class xGlobals * xglobals;
}
// signature: zSaveLoad_Init(void *, void *)
// Range: 0x80058E90 -> 0x80058ECC
void zSaveLoad_Init() {
    // Local variables
    class zSaveLoad * t; // r0
    class zSaveLoadAsset * sasset; // r0
}
