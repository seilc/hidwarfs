/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xGroup.cpp
*/
class _OGGroupSchema _OGGroupschema; // size: 0x18, address: 0x80755668
class SchemaRegistrator _OGGroupschemaReg; // size: 0x8, address: 0x80755680
// Range: 0x80043A10 -> 0x80043A20
void World::_OGGroupEntity::Deactivate() {
}
// Range: 0x80043A20 -> 0x80043A70
void World::_OGGroupEntity::Destroy(class _OGGroupEntity * this /* r31 */) {
}
// signature: World::_OGGroupSchema::Fix(World::Asset *, long, int)
// Range: 0x80043AD0 -> 0x80043AD8
void World::_OGGroupSchema::Fix() {
}
// signature: World::_OGGroupSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80043AE0 -> 0x80043B2C
class EntityStub * World::_OGGroupSchema::CreateStub(class _OGGroupSchema * this /* r31 */) {
}
// signature: World::_OGGroupSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x80043B30 -> 0x80043B48
void World::_OGGroupSchema::DestroyStub() {
}
// signature: World::_OGGroupSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80043B50 -> 0x80043BB4
class Entity * World::_OGGroupSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World14_OGGroupEntity;
}
// signature: xGroupInit(void *, void *)
// Range: 0x80043C00 -> 0x80043E5C
void xGroupInit(void * b /* r29 */) {
    // References
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x80043E60 -> 0x80043F88
void xGroupSetup(class xGroup * g /* r27 */) {
    {
        // Range: 0x80043E74 -> 0x80043F74
        {
            // Range: 0x80043EA4 -> 0x80043F5C
            // Local variables
            unsigned int i; // r28
        }
    }
}
// signature: xGroupSave(xGroup *, xSerial *)
// Range: 0x80043F90 -> 0x80043FF4
void xGroupSave() {
}
// signature: xGroupLoad(xGroup *, xSerial *)
// Range: 0x80044000 -> 0x80044080
void xGroupLoad(class xGroup * ent /* r31 */) {
}
// signature: xGroupEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80044080 -> 0x800443C8
void xGroupEventCB(class xBase * to /* r28 */, unsigned int toEvent /* r29 */, class EventAny * params /* r30 */) {
    // Local variables
    class xGroup * g; // r0
    int rand; // r31

    {
        // Range: 0x800442A0 -> 0x80044354
        // Local variables
        void (* entVisEventHandler)(class xEnt *); // r26

        {
            // Range: 0x800442CC -> 0x80044340
            // Local variables
            int i; // r25

            {
                // Range: 0x800442D8 -> 0x80044340
                // Local variables
                class xBase * b; // r3
            }
        }
    }
    {
        // Range: 0x80044358 -> 0x800443A0
        // Local variables
        int i; // r25

        {
            // Range: 0x80044364 -> 0x800443A0
            // Local variables
            class xBase * b; // r5
        }
    }

    // References
    // -> static unsigned int * next;
    // -> static unsigned int state[624];
    // -> static int left;
}
// signature: xGroupGetCount(xGroup *)
// Range: 0x80044430 -> 0x8004444C
unsigned int xGroupGetCount() {
}
// Range: 0x80044450 -> 0x800444B0
class xBase * xGroupGetItemPtr(class xGroup * g /* r30 */, unsigned int index /* r31 */) {
}
