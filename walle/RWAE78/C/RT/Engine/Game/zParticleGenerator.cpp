/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zParticleGenerator.cpp
*/
class _OGparticle_generatorSchema _OGparticle_generatorschema; // size: 0x18, address: 0x807924C8
class SchemaRegistrator _OGparticle_generatorschemaReg; // size: 0x8, address: 0x807924E0
class zParticleSystem * * systems; // size: 0x4, address: 0x807924E8
static class zParticleSystem * * system_handler_set[7]; // size: 0x1C, address: 0x807924EC
static int system_handler_set_size[7]; // size: 0x1C, address: 0x80792508
static class zParticleGenerator * * generators; // size: 0x4, address: 0x80792524
static int max_generators; // size: 0x4, address: 0x80792528
static int generators_used; // size: 0x4, address: 0x8079252C
// Range: 0x8014E360 -> 0x8014E370
void World::_OGparticle_generatorEntity::Deactivate() {
}
// Range: 0x8014E370 -> 0x8014E3C0
void World::_OGparticle_generatorEntity::Destroy(class _OGparticle_generatorEntity * this /* r31 */) {
}
// signature: World::_OGparticle_generatorSchema::Fix(World::Asset *, long, int)
// Range: 0x8014E420 -> 0x8014E428
void World::_OGparticle_generatorSchema::Fix() {
}
// signature: World::_OGparticle_generatorSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8014E430 -> 0x8014E47C
class EntityStub * World::_OGparticle_generatorSchema::CreateStub(class _OGparticle_generatorSchema * this /* r31 */) {
}
// signature: World::_OGparticle_generatorSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8014E480 -> 0x8014E498
void World::_OGparticle_generatorSchema::DestroyStub() {
}
// signature: World::_OGparticle_generatorSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8014E4A0 -> 0x8014E508
class Entity * World::_OGparticle_generatorSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World27_OGparticle_generatorEntity;
}
// Range: 0x8014E550 -> 0x8014E660
static void @unnamed@WAD02_cpp@::create_handler_sets() {
    // Local variables
    int total_size; // r8
    class zParticleSystem * * set; // r3

    {
        // Range: 0x8014E574 -> 0x8014E5C4
        // Local variables
        int handler; // r9

        {
            // Range: 0x8014E574 -> 0x8014E5C4
            // Local variables
            class zParticleSystem * * end_sys; // r12
            class zParticleSystem * * sys; // r11
            int size; // r10
        }
    }
    {
        // Range: 0x8014E5F0 -> 0x8014E648
        // Local variables
        int handler; // r9

        {
            // Range: 0x8014E5F0 -> 0x8014E648
            // Local variables
            class zParticleSystem * * end_sys; // r11
            class zParticleSystem * * sys; // r10
        }
    }

    // References
    // -> static class zParticleSystem * * system_handler_set[7];
    // -> class zParticleSystem * * systems;
    // -> static int system_handler_set_size[7];
}
// signature: @unnamed@WAD02_cpp@::compare_generator_systems_function(const void *, const void *)
// Range: 0x8014E660 -> 0x8014E690
static int @unnamed@WAD02_cpp@::compare_generator_systems_function() {
    // Local variables
    class zParticleGenerator * g1; // r5
    class zParticleGenerator * g2; // r6
}
// Range: 0x8014E690 -> 0x8014E780
static void @unnamed@WAD02_cpp@::sort_generators() {
    // Local variables
    class zParticleSystem * * sys; // r5
    class zParticleSystem * * end_sys; // r6
    class zParticleGenerator * * first_gen; // r7
    class zParticleGenerator * * last_gen; // r8

    {
        // Range: 0x8014E6E8 -> 0x8014E75C
        // Local variables
        class zParticleGenerator * * found_gen; // r10
        int system_type; // r9
    }

    // References
    // -> class zParticleSystem * * systems;
    // -> static class zParticleGenerator * * generators;
    // -> static int generators_used;
}
// Range: 0x8014E780 -> 0x8014E884
static void @unnamed@WAD02_cpp@::create_generators() {
    // Local variables
    int total; // r0
    class zParticleGenerator * * gen; // r28

    {
        // Range: 0x8014E7D4 -> 0x8014E840
        // Local variables
        int i; // r27

        {
            // Range: 0x8014E7D4 -> 0x8014E840
            // Local variables
            class particle_generator * asset; // r0
            unsigned int asset_size; // r1+0x8
        }
    }

    // References
    // -> static int generators_used;
    // -> class zParticleSystem * * systems;
    // -> static class zParticleGenerator * * generators;
    // -> static int max_generators;
}
// Range: 0x8014E890 -> 0x8014E8EC
void zParticleSceneEnter() {
    // Local variables
    class zParticleSystem * * sys; // r3
    class zParticleSystem * * end_sys; // r5

    // References
    // -> class zParticleSystem * * systems;
}
// Range: 0x8014E8F0 -> 0x8014E97C
void zParticleSceneExit() {
    // Local variables
    class zParticleGenerator * * gen; // r30
    class zParticleGenerator * * end_gen; // r29

    // References
    // -> class zParticleSystem * * systems;
    // -> static class zParticleGenerator * * generators;
    // -> static int generators_used;
}
// Range: 0x8014E990 -> 0x8014EA00
void zParticleSetup() {
    // Local variables
    class zParticleSystem * * set; // r31
    class zParticleSystem * * end_set; // r30

    // References
    // -> static class zParticleSystem * * system_handler_set[7];
    // -> static int system_handler_set_size[7];
}
// Range: 0x8014EA10 -> 0x8014EA80
void zParticleReset() {
    // Local variables
    class zParticleSystem * * set; // r31
    class zParticleSystem * * end_set; // r30

    // References
    // -> static class zParticleSystem * * system_handler_set[7];
    // -> static int system_handler_set_size[7];
}
// Range: 0x8014EA80 -> 0x8014EB00
void zParticleUpdate(float dt /* f31 */) {
    // Local variables
    class zParticleSystem * * set; // r31
    class zParticleSystem * * end_set; // r30

    // References
    // -> static class zParticleSystem * * system_handler_set[7];
    // -> static int system_handler_set_size[7];
}
// Range: 0x8014EB10 -> 0x8014EB84
void zParticleSystem::reset(class zParticleSystem * this /* r29 */) {
    {
        // Range: 0x8014EB28 -> 0x8014EB58
        // Local variables
        int i; // r30

        {
            // Range: 0x8014EB28 -> 0x8014EB58
            // Local variables
            class zParticleGeneratorSpawnPt * gs; // r4
        }
    }
}
// Range: 0x8014EB90 -> 0x8014EBD8
void zParticleSystem::Init(class zParticleSystem * this /* r31 */) {
}
// Range: 0x8014EBE0 -> 0x8014EF90
void zParticleSystem::update_spawns(class zParticleSystem * this /* r25 */, float dt /* f28 */) {
    {
        // Range: 0x8014EC40 -> 0x8014EF20
        // Local variables
        int i; // r27

        {
            // Range: 0x8014EC40 -> 0x8014EF20
            // Local variables
            float emitted; // f0
            class zParticleLocator * locator; // r0
            float available; // f29
            float requested; // f29
            float rate; // f1
            float t; // f5
            float rateLifeTime; // f0
            float maxRate; // f4
            float minRate; // f3
            class zGradientCurve * rateCurve; // r4
            class zParticleGeneratorSpawnPt * particleGeneratorSpawnPoint; // r26

            {
                // Range: 0x8014EC40 -> 0x8014EC4C
                // Local variables
                float camera2SpawnDist2; // f0
                float cullDistance2; // f29
            }
            {
                // Range: 0x8014EC70 -> 0x8014EC74
                // Local variables
                float waitTime; // f0
            }
        }
    }

    // References
    // -> class zGlobals globals;
}
// signature: zParticleGeneratorEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8014EFC0 -> 0x8014EFDC
static void zParticleGeneratorEventWrapper(class xBase * from /* r0 */) {
}
// signature: zParticleGenerator::create(zParticleSystem &, Sext::particle_generator &)
// Range: 0x8014EFE0 -> 0x8014F224
void zParticleGenerator::create(class zParticleGenerator * this /* r30 */, class particle_generator * asset /* r31 */) {
    {
        // Range: 0x8014F0B8 -> 0x8014F208
        // Local variables
        float rowF; // f3
        float colF; // f4

        {
            // Range: 0x8014F0DC -> 0x8014F1F8
            // Local variables
            int j; // r3

            {
                // Range: 0x8014F0DC -> 0x8014F1D8
                // Local variables
                int i; // r4
            }
        }
    }
}
// signature: zParticleGenerator::reset(zParticleGeneratorSpawnPt &)
// Range: 0x8014F230 -> 0x8014F29C
void zParticleGenerator::reset() {
}
// Range: 0x8014F2A0 -> 0x8014F2AC
void zParticleGenerator::reset() {
}
// signature: zParticleGenerator::activate(zParticleGeneratorSpawnPt &, xEnt *)
// Range: 0x8014F2B0 -> 0x8014F2C0
void zParticleGenerator::activate() {
}
// signature: zParticleGenerator::deactivate(xEnt *)
// Range: 0x8014F2C0 -> 0x8014F2D0
void zParticleGenerator::deactivate() {
}
// Range: 0x8014F2D0 -> 0x8014F2D8
bool zParticleGenerator::cullUpdate() {
}
// Range: 0x8014F2E0 -> 0x8014F2F0
void zParticleGenerator::pause() {
}
// Range: 0x8014F2F0 -> 0x8014F300
void zParticleGenerator::resume() {
}
// signature: zParticleGenerator::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8014F300 -> 0x8014F32C
void zParticleGenerator::HandleEvent() {
}
