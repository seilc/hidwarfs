/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xCounter.cpp
*/
class _OGCounterSchema _OGCounterschema; // size: 0x18, address: 0x80753B58
class SchemaRegistrator _OGCounterschemaReg; // size: 0x8, address: 0x80753B70
static class tag_type xCounterTag; // size: 0x14, address: 0x806C6E00
// Range: 0x80025480 -> 0x80025490
void World::_OGCounterEntity::Deactivate() {
}
// Range: 0x80025490 -> 0x800254E0
void World::_OGCounterEntity::Destroy(class _OGCounterEntity * this /* r31 */) {
}
// signature: World::_OGCounterSchema::Fix(World::Asset *, long, int)
// Range: 0x80025540 -> 0x80025548
void World::_OGCounterSchema::Fix() {
}
// signature: World::_OGCounterSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80025550 -> 0x8002559C
class EntityStub * World::_OGCounterSchema::CreateStub(class _OGCounterSchema * this /* r31 */) {
}
// signature: World::_OGCounterSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x800255A0 -> 0x800255B8
void World::_OGCounterSchema::DestroyStub() {
}
// signature: World::_OGCounterSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800255C0 -> 0x80025624
class Entity * World::_OGCounterSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World16_OGCounterEntity;
}
// Range: 0x80025670 -> 0x80025674
void xCounterInit() {
}
// signature: xCounterInit(void *, void *)
// Range: 0x80025680 -> 0x800256D0
void xCounterInit() {
}
// signature: xCounterReset(xBase *)
// Range: 0x800256D0 -> 0x8002573C
void xCounterReset() {
    // Local variables
    class xCounter * t; // r3
    short oldCount; // r0
}
// Range: 0x80025740 -> 0x800257F4
void xCounterSave(class xCounter * ent /* r30 */, class xSerial * s /* r31 */) {
}
// Range: 0x80025800 -> 0x800258DC
void xCounterLoad(class xCounter * ent /* r30 */, class xSerial * s /* r31 */) {
    {
        // Range: 0x80025898 -> 0x800258C4
        // Local variables
        unsigned char tempState; // r1+0x8
        short tempCount; // r1+0xA
    }
}
// signature: xCounterEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800258E0 -> 0x80025BD4
void xCounterEventCB(class xBase * from /* r30 */, class xBase * to /* r31 */, class EventAny * genericParams /* r29 */) {
    // Local variables
    class xCounter * t; // reg65535
    short oldCount; // r0

    {
        // Range: 0x80025954 -> 0x800259EC
        {
            // Range: 0x800259C4 -> 0x800259EC
            // Local variables
            class EventNotifyCountIs params; // r1+0x10
        }
    }
    {
        // Range: 0x800259F4 -> 0x80025A8C
        {
            // Range: 0x80025A64 -> 0x80025A8C
            // Local variables
            class EventNotifyCountIs params; // r1+0xC
        }
    }
    {
        // Range: 0x80025B10 -> 0x80025BB8
        // Local variables
        class xBase * toParamWidgetPtr; // r5
        class EventActionSetCount * params; // r0

        {
            // Range: 0x80025B64 -> 0x80025BB8
            // Local variables
            class EventNotifyCountIs params; // r1+0x8
        }
    }
}
// signature: xCounterParseTag(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80025BE0 -> 0x80025D9C
void xCounterParseTag(class jot * j /* r31 */) {
    // Local variables
    char buffer[64]; // r1+0x8
    char * c; // r4
    unsigned int size; // r7
    class xCounter * counter; // r0
}
