/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Entities\ShaderEntity.cpp
*/
// signature: World::ShaderEntity::ParamCargo::GetCreateInfo(World::ShaderEntity::ParamCargo::CreateInfo &, const World::MaterialParam *, int)
// Range: 0x801BCD90 -> 0x801BCDE4
void World::ShaderEntity::ParamCargo::GetCreateInfo() {
    // Local variables
    int textureCount; // r7

    {
        // Range: 0x801BCD94 -> 0x801BCDD4
        // Local variables
        int i; // r0
    }
}
// signature: World::ShaderEntity::ParamCargo::Create(void *, const World::ShaderEntity::ParamCargo::CreateInfo &, const World::MaterialParam *, int)
// Range: 0x801BCDF0 -> 0x801BCE44
void World::ShaderEntity::ParamCargo::Create(class ParamCargo * this /* r31 */) {
    // Local variables
    class StackAllocator allocator; // r1+0x8
}
// signature: World::ShaderEntity::ParamCargo::Activate(World::EntityHandleBase *, const World::MaterialParam *, int)
// Range: 0x801BCE50 -> 0x801BCEE4
void World::ShaderEntity::ParamCargo::Activate(class ParamCargo * this /* r25 */, class MaterialParam * iparams /* r26 */, int paramCount /* r27 */) {
    // Local variables
    int textureIndex; // r0

    {
        // Range: 0x801BCE70 -> 0x801BCED0
        // Local variables
        int i; // r29

        {
            // Range: 0x801BCE70 -> 0x801BCED0
            // Local variables
            class EntityHandle * textureHandle; // r28
            class MaterialParam & iparam; // r3
        }
    }
}
// Range: 0x801BCEF0 -> 0x801BCF4C
void World::ShaderEntity::ParamCargo::Deactivate(class ParamCargo * this /* r29 */) {
    {
        // Range: 0x801BCF04 -> 0x801BCF38
        // Local variables
        int i; // r30
    }
}
// signature: World::ShaderEntity::ParamCargo::LoadParam(void *, int *, const World::MaterialParam &, int, int)
// Range: 0x801BCF50 -> 0x801BD030
void World::ShaderEntity::ParamCargo::LoadParam() {
    {
        // Range: 0x801BCFCC -> 0x801BD020
        // Local variables
        class Texture * texture; // r4
        class SamplerContext context; // r1+0x8
        class Sampler & sampler; // r7
    }
}
// signature: World::ShaderEntity::ShaderEntity(World::EntityHandleBase *)
// Range: 0x801BD030 -> 0x801BD06C
void * World::ShaderEntity::ShaderEntity(class ShaderEntity * this /* r31 */) {
    // References
    // -> struct {} __vt__Q25World12ShaderEntity;
}
// Range: 0x801BD070 -> 0x801BD074
void World::ShaderEntity::Deactivate() {
}
// Range: 0x801BD080 -> 0x801BD0E4
void World::ShaderEntity::DeferDestroy(class ShaderEntity * this /* r31 */) {
}
