/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zOption.cpp
*/
class _OGOptionSchema _OGOptionschema; // size: 0x18, address: 0x80792448
class SchemaRegistrator _OGOptionschemaReg; // size: 0x8, address: 0x80792460
// Range: 0x8014D2D0 -> 0x8014D2E0
void World::_OGOptionEntity::Deactivate() {
}
// Range: 0x8014D2E0 -> 0x8014D330
void World::_OGOptionEntity::Destroy(class _OGOptionEntity * this /* r31 */) {
}
// signature: World::_OGOptionSchema::Fix(World::Asset *, long, int)
// Range: 0x8014D390 -> 0x8014D398
void World::_OGOptionSchema::Fix() {
}
// signature: World::_OGOptionSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8014D3A0 -> 0x8014D3EC
class EntityStub * World::_OGOptionSchema::CreateStub(class _OGOptionSchema * this /* r31 */) {
}
// signature: World::_OGOptionSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8014D3F0 -> 0x8014D408
void World::_OGOptionSchema::DestroyStub() {
}
// signature: World::_OGOptionSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8014D410 -> 0x8014D478
class Entity * World::_OGOptionSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World15_OGOptionEntity;
}
// Range: 0x8014D4C0 -> 0x8014D5F0
void zOption::Save(class zOption * this /* r30 */, class xSerial * s /* r31 */) {
}
// Range: 0x8014D5F0 -> 0x8014D788
void zOption::Load(class zOption * this /* r29 */, class xSerial * s /* r30 */) {
    // Local variables
    unsigned int readBuffer; // r1+0xC
    unsigned char optionTypeReadBuffer; // r1+0x8
}
// signature: zOption::Init(xBase &, xDynAsset &, unsigned long)
// Range: 0x8014D790 -> 0x8014D7F4
void zOption::Init(class xBase * base /* r30 */, class xDynAsset * asset /* r31 */) {
    // Local variables
    class zOption * toInit; // r0
}
// signature: zOption::HandleEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8014D800 -> 0x8014DAE0
void zOption::HandleEvent(class xBase * to /* r30 */, class EventAny * genericParams /* r31 */) {
    {
        // Range: 0x8014D844 -> 0x8014D910
        // Local variables
        unsigned int option; // r4
        class zOption * toOption; // reg65535
        class xBase * toParamWidgetPtr; // r5
        class EventActionSetOption * params; // r0
    }
    {
        // Range: 0x8014D914 -> 0x8014DAC8
        // Local variables
        class EventActionSetCount sendParams; // r1+0x8
        float value; // f2
        class zOption * toOption; // r0
        class xBase * toParamWidgetPtr; // r5
        class EventActionSetCount * params; // r0
    }
}
// Range: 0x8014DAE0 -> 0x8014DCEC
void zOption::EffectOption(class zOption * this /* r30 */) {
    {
        // Range: 0x8014DC08 -> 0x8014DC54
        // Local variables
        int player; // r4
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x8014DCF0 -> 0x8014DD8C
void zOption::ReflectOSOption(class zOption * this /* r31 */) {
    {
        // Range: 0x8014DD1C -> 0x8014DD60
        // Local variables
        unsigned char soundMode; // r0
    }
}
