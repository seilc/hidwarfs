/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zScript.cpp
*/
class _OGScriptSchema _OGScriptschema; // size: 0x18, address: 0x8079BE50
class SchemaRegistrator _OGScriptschemaReg; // size: 0x8, address: 0x8079BE68
static int sScriptTypeIndex; // size: 0x4, address: 0x80700D70
// Range: 0x801BB6D0 -> 0x801BB6E0
void World::_OGScriptEntity::Deactivate() {
}
// Range: 0x801BB6E0 -> 0x801BB730
void World::_OGScriptEntity::Destroy(class _OGScriptEntity * this /* r31 */) {
}
// signature: World::_OGScriptSchema::Fix(World::Asset *, long, int)
// Range: 0x801BB790 -> 0x801BB798
void World::_OGScriptSchema::Fix() {
}
// signature: World::_OGScriptSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801BB7A0 -> 0x801BB7EC
class EntityStub * World::_OGScriptSchema::CreateStub(class _OGScriptSchema * this /* r31 */) {
}
// signature: World::_OGScriptSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x801BB7F0 -> 0x801BB808
void World::_OGScriptSchema::DestroyStub() {
}
// signature: World::_OGScriptSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801BB810 -> 0x801BB874
class Entity * World::_OGScriptSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World15_OGScriptEntity;
}
// signature: zScriptInit(void *, void *)
// Range: 0x801BB8C0 -> 0x801BB8C4
void zScriptInit() {
}
// Range: 0x801BB8D0 -> 0x801BB9EC
void zScriptInit(class xBase * b /* r31 */, class Script * tasset /* r30 */) {
    // Local variables
    class zScript * t; // reg65535
    float time; // f31

    {
        // Range: 0x801BB93C -> 0x801BB950
        // Local variables
        unsigned int i; // r7
    }

    // References
    // -> static int sScriptTypeIndex;
}
// signature: zScriptEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801BB9F0 -> 0x801BBC64
void zScriptEventCB() {
    // Local variables
    class zScript * t; // r31

    {
        // Range: 0x801BBB34 -> 0x801BBB4C
        // Local variables
        class EventActionTimer * params; // r0
    }
    {
        // Range: 0x801BBC0C -> 0x801BBC1C
        // Local variables
        class EventActionOneFloat * params; // r0
    }
}
// Range: 0x801BBC70 -> 0x801BBE74
static bool zScriptExecuteEvents(class zScript * t /* r30 */, float start /* f30 */, float end /* f31 */) {
    // Local variables
    float lastAbsTime; // f0

    {
        // Range: 0x801BBC98 -> 0x801BBE08
        {
            // Range: 0x801BBC98 -> 0x801BBDEC
            // Local variables
            unsigned long long widget; // r10:r11
        }
    }

    // References
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
    // -> unsigned long long gThisPlayer;
}
