/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zConditional.cpp
*/
class _OGConditionalSchema _OGConditionalschema; // size: 0x18, address: 0x8076D070
class SchemaRegistrator _OGConditionalschemaReg; // size: 0x8, address: 0x8076D088
// Range: 0x800C4C00 -> 0x800C4C10
void World::_OGConditionalEntity::Deactivate() {
}
// Range: 0x800C4C10 -> 0x800C4C60
void World::_OGConditionalEntity::Destroy(class _OGConditionalEntity * this /* r31 */) {
}
// signature: World::_OGConditionalSchema::Fix(World::Asset *, long, int)
// Range: 0x800C4CC0 -> 0x800C4CC8
void World::_OGConditionalSchema::Fix() {
}
// signature: World::_OGConditionalSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800C4CD0 -> 0x800C4D1C
class EntityStub * World::_OGConditionalSchema::CreateStub(class _OGConditionalSchema * this /* r31 */) {
}
// signature: World::_OGConditionalSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x800C4D20 -> 0x800C4D38
void World::_OGConditionalSchema::DestroyStub() {
}
// signature: World::_OGConditionalSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800C4D40 -> 0x800C4DA4
class Entity * World::_OGConditionalSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World20_OGConditionalEntity;
}
// Range: 0x800C4DF0 -> 0x800C4E8C
void zConditionalInit(void * b /* r30 */, void * asset /* r31 */) {
    // References
    // -> class zVarEntry zVarEntryTable[62];
}
// signature: zConditionalSave(_zConditional *, xSerial *)
// Range: 0x800C4E90 -> 0x800C4E94
void zConditionalSave() {
}
// signature: zConditionalLoad(_zConditional *, xSerial *)
// Range: 0x800C4EA0 -> 0x800C4EA4
void zConditionalLoad() {
}
// Range: 0x800C4EB0 -> 0x800C4FB0
unsigned int zConditional_GetCount(class _zConditional * c /* r26 */) {
    // Local variables
    class zVarEntry * v; // r27
    void * context; // r5
    unsigned int temp; // r0

    {
        // Range: 0x800C4ED4 -> 0x800C4F68
        // Local variables
        int i; // r0

        {
            // Range: 0x800C4ED4 -> 0x800C4F68
            // Local variables
            unsigned int entry; // r0

            {
                // Range: 0x800C4ED8 -> 0x800C4ED8
                // Local variables
                unsigned long long id; // r3:r4
            }
            {
                // Range: 0x800C4ED8 -> 0x800C4F68
                // Local variables
                unsigned long long id; // r3:r4
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class zVarEntry zVarEntryTable[62];
}
// Range: 0x800C4FB0 -> 0x800C5170
unsigned int zConditional_Evaluate(class _zConditional * c /* r31 */) {
    // Local variables
    unsigned int temp; // r0
    void * context; // r5

    // References
    // -> class xGlobals * xglobals;
}
// signature: zConditionalEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800C5170 -> 0x800C5260
void zConditionalEventCB() {
    // Local variables
    class _zConditional * t; // r31

    {
        // Range: 0x800C5210 -> 0x800C523C
        // Local variables
        class EventNotifyCountIs params; // r1+0x8
        unsigned int count; // r0
    }
}
