/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xTimer.cpp
*/
class _OGTimerSchema _OGTimerschema; // size: 0x18, address: 0x807653C8
class SchemaRegistrator _OGTimerschemaReg; // size: 0x8, address: 0x807653E0
// Range: 0x80066DA0 -> 0x80066DB0
void World::_OGTimerEntity::Deactivate() {
}
// Range: 0x80066DB0 -> 0x80066E00
void World::_OGTimerEntity::Destroy(class _OGTimerEntity * this /* r31 */) {
}
// signature: World::_OGTimerSchema::Fix(World::Asset *, long, int)
// Range: 0x80066E60 -> 0x80066E68
void World::_OGTimerSchema::Fix() {
}
// signature: World::_OGTimerSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80066E70 -> 0x80066EBC
class EntityStub * World::_OGTimerSchema::CreateStub(class _OGTimerSchema * this /* r31 */) {
}
// signature: World::_OGTimerSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x80066EC0 -> 0x80066ED8
void World::_OGTimerSchema::DestroyStub() {
}
// signature: World::_OGTimerSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80066EE0 -> 0x80066F44
class Entity * World::_OGTimerSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World14_OGTimerEntity;
}
// Range: 0x80066F90 -> 0x800671CC
void xTimerInit(void * b /* r30 */, void * tasset /* r31 */) {
    // References
    // -> static unsigned int * next;
    // -> static unsigned int state[624];
    // -> static int left;
}
// Range: 0x800671D0 -> 0x80067284
void xTimerSave(class xTimer * ent /* r30 */, class xSerial * s /* r31 */) {
}
// Range: 0x80067290 -> 0x8006736C
void xTimerLoad(class xTimer * ent /* r30 */, class xSerial * s /* r31 */) {
    {
        // Range: 0x80067328 -> 0x80067354
        // Local variables
        float tempSecondsLeft; // r1+0x10
        unsigned char tempState; // r1+0x8
    }
}
// signature: xTimerEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80067370 -> 0x80067628
void xTimerEventCB(class xBase * to /* r30 */) {
    // Local variables
    class xTimer * t; // r0

    // References
    // -> static unsigned int * next;
    // -> static unsigned int state[624];
    // -> static int left;
}
// signature: xTimerUpdate(xBase *, xScene *, float)
// Range: 0x80067630 -> 0x8006767C
void xTimerUpdate() {
    // Local variables
    class xTimer * t; // r3
}
