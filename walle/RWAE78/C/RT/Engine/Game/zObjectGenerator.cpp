/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zObjectGenerator.cpp
*/
class _OGobject_generatorSchema _OGobject_generatorschema; // size: 0x18, address: 0x80792550
class SchemaRegistrator _OGobject_generatorschemaReg; // size: 0x8, address: 0x80792568
class zObjectSystem * * systems; // size: 0x4, address: 0x80792570
class zObjectSystem * * object_handler_set[7]; // size: 0x1C, address: 0x80792574
int object_handler_set_size[7]; // size: 0x1C, address: 0x80792590
class zObjectGenerator * * obj_generators; // size: 0x4, address: 0x807925AC
int max_generators; // size: 0x4, address: 0x807925B0
int obj_generators_used; // size: 0x4, address: 0x807925B4
// Range: 0x8014F560 -> 0x8014F570
void World::_OGobject_generatorEntity::Deactivate() {
}
// Range: 0x8014F570 -> 0x8014F5C0
void World::_OGobject_generatorEntity::Destroy(class _OGobject_generatorEntity * this /* r31 */) {
}
// signature: World::_OGobject_generatorSchema::Fix(World::Asset *, long, int)
// Range: 0x8014F620 -> 0x8014F628
void World::_OGobject_generatorSchema::Fix() {
}
// signature: World::_OGobject_generatorSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8014F630 -> 0x8014F67C
class EntityStub * World::_OGobject_generatorSchema::CreateStub(class _OGobject_generatorSchema * this /* r31 */) {
}
// signature: World::_OGobject_generatorSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8014F680 -> 0x8014F698
void World::_OGobject_generatorSchema::DestroyStub() {
}
// signature: World::_OGobject_generatorSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8014F6A0 -> 0x8014F708
class Entity * World::_OGobject_generatorSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World25_OGobject_generatorEntity;
}
// Range: 0x8014F750 -> 0x8014F860
void zObjectGeneratorNS::create_obj_handler_sets() {
    // Local variables
    int total_size; // r8
    class zObjectSystem * * set; // r3

    {
        // Range: 0x8014F774 -> 0x8014F7C4
        // Local variables
        int handler; // r9

        {
            // Range: 0x8014F774 -> 0x8014F7C4
            // Local variables
            class zObjectSystem * * end_sys; // r12
            class zObjectSystem * * sys; // r11
            int size; // r10
        }
    }
    {
        // Range: 0x8014F7F0 -> 0x8014F848
        // Local variables
        int handler; // r9

        {
            // Range: 0x8014F7F0 -> 0x8014F848
            // Local variables
            class zObjectSystem * * end_sys; // r11
            class zObjectSystem * * sys; // r10
        }
    }

    // References
    // -> class zObjectSystem * * object_handler_set[7];
    // -> class zObjectSystem * * systems;
    // -> int object_handler_set_size[7];
}
// signature: zObjectGeneratorNS::compare_generator_systems_function(const void *, const void *)
// Range: 0x8014F860 -> 0x8014F890
int zObjectGeneratorNS::compare_generator_systems_function() {
    // Local variables
    class zObjectGenerator * g1; // r5
    class zObjectGenerator * g2; // r6
}
// Range: 0x8014F890 -> 0x8014F980
void zObjectGeneratorNS::sort_generators() {
    // Local variables
    class zObjectSystem * * sys; // r5
    class zObjectSystem * * end_sys; // r6
    class zObjectGenerator * * first_gen; // r7
    class zObjectGenerator * * last_gen; // r8

    {
        // Range: 0x8014F8E8 -> 0x8014F95C
        // Local variables
        class zObjectGenerator * * found_gen; // r10
        int system_type; // r9
    }

    // References
    // -> class zObjectSystem * * systems;
    // -> class zObjectGenerator * * obj_generators;
    // -> int obj_generators_used;
}
// Range: 0x8014F980 -> 0x8014FAC4
void zObjectSceneEnter() {
    // Local variables
    class zObjectSystem * * sys; // r3
    class zObjectSystem * * end_sys; // r5
    class zObjectSystem * * set; // r27
    class zObjectSystem * * end_set; // r28

    // References
    // -> int obj_generators_used;
    // -> class zObjectGenerator * * obj_generators;
    // -> int max_generators;
    // -> class zObjectSystem * * object_handler_set[7];
    // -> int object_handler_set_size[7];
    // -> class zObjectSystem * * systems;
}
// Range: 0x8014FAE0 -> 0x8014FBAC
void zObjectSceneExit() {
    // Local variables
    class zObjectGenerator * * gen; // r30
    class zObjectGenerator * * end_gen; // r29
    class zObjectSystem * * set; // r29
    class zObjectSystem * * end_set; // r30

    // References
    // -> class zObjectSystem * * object_handler_set[7];
    // -> int object_handler_set_size[7];
    // -> class zObjectSystem * * systems;
    // -> class zObjectGenerator * * obj_generators;
    // -> int obj_generators_used;
}
// Range: 0x8014FBD0 -> 0x8014FC40
void zObjectSetup() {
    // Local variables
    class zObjectSystem * * set; // r31
    class zObjectSystem * * end_set; // r30

    // References
    // -> class zObjectSystem * * object_handler_set[7];
    // -> int object_handler_set_size[7];
}
// Range: 0x8014FC50 -> 0x8014FCC0
void zObjectReset() {
    // Local variables
    class zObjectSystem * * set; // r31
    class zObjectSystem * * end_set; // r30

    // References
    // -> class zObjectSystem * * object_handler_set[7];
    // -> int object_handler_set_size[7];
}
// Range: 0x8014FCC0 -> 0x8014FD40
void zObjectUpdate(float dt /* f31 */) {
    // Local variables
    class zObjectSystem * * set; // r31
    class zObjectSystem * * end_set; // r30

    // References
    // -> class zObjectSystem * * object_handler_set[7];
    // -> int object_handler_set_size[7];
}
// Range: 0x8014FD70 -> 0x8014FDE4
void zObjectSystem::reset(class zObjectSystem * this /* r29 */) {
    {
        // Range: 0x8014FD88 -> 0x8014FDB8
        // Local variables
        int i; // r30

        {
            // Range: 0x8014FD88 -> 0x8014FDB8
            // Local variables
            class zObjectGeneratorSpawnPt * gs; // r4
        }
    }
}
// Range: 0x8014FDF0 -> 0x8014FE38
void zObjectSystem::Init(class zObjectSystem * this /* r31 */) {
}
// Range: 0x8014FE40 -> 0x801501B8
void zObjectSystem::update_spawns(class zObjectSystem * this /* r24 */, float dt /* f22 */) {
    // Local variables
    int i; // r26
    float emitted; // f1

    {
        // Range: 0x8014FEB8 -> 0x80150130
        // Local variables
        class zObjectLocator * locator; // r0
        float requested; // f0
        class zObjectGeneratorSpawnPt * ObjectGeneratorSpawnPoint; // r25

        {
            // Range: 0x8014FEB8 -> 0x8014FED4
            // Local variables
            float camera2SpawnDist2; // f0
            float cullDistance2; // f0
        }
        {
            // Range: 0x8014FEEC -> 0x8014FEEC
            // Local variables
            float limit; // f1
        }
    }

    // References
    // -> class zGlobals globals;
}
// signature: zObjectGeneratorEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801501E0 -> 0x801501FC
static void zObjectGeneratorEventWrapper(class xBase * from /* r0 */) {
}
// signature: zObjectGenerator::create(zObjectSystem &, Sext::object_generator &)
// Range: 0x80150200 -> 0x80150278
void zObjectGenerator::create(class zObjectGenerator * this /* r30 */, class object_generator * asset /* r31 */) {
}
// signature: zObjectGenerator::reset(zObjectGeneratorSpawnPt &)
// Range: 0x80150280 -> 0x801502C0
void zObjectGenerator::reset() {
}
// Range: 0x801502C0 -> 0x801502C4
void zObjectGenerator::reset() {
}
// signature: zObjectGenerator::activate(zObjectGeneratorSpawnPt &, xEnt *)
// Range: 0x801502D0 -> 0x801502E0
void zObjectGenerator::activate() {
}
// signature: zObjectGenerator::deactivate(xEnt *)
// Range: 0x801502E0 -> 0x801502F0
void zObjectGenerator::deactivate() {
}
// Range: 0x801502F0 -> 0x801502F8
bool zObjectGenerator::cullUpdate() {
}
// Range: 0x80150300 -> 0x80150310
void zObjectGenerator::pause() {
}
// Range: 0x80150310 -> 0x80150320
void zObjectGenerator::resume() {
}
// signature: zObjectGenerator::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80150320 -> 0x8015034C
void zObjectGenerator::HandleEvent() {
}
