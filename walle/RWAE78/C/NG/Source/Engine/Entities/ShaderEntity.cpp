/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Entities\ShaderEntity.cpp
*/
static float s_ambient[4]; // size: 0x10, address: 0x80707BE0
static float s_colorScale; // size: 0x4, address: 0x80707BF0
// signature: World::ShaderEntity::ParamCargo::Activate(Overseer::Goodie *, const World::MaterialParam *, int)
// Range: 0x802467B8 -> 0x80246CB8
void World::ShaderEntity::ParamCargo::Activate(class ParamCargo * this /* r23 */, class Goodie * goodie /* r24 */, int paramCount /* r25 */) {
    {
        // Range: 0x802467C8 -> 0x80246C98
        // Local variables
        int i; // r26

        {
            // Range: 0x802467C8 -> 0x80246C98
            // Local variables
            class EntityHandle * textureHandle; // r15
        }
    }

    // References
    // -> static class ScadMgrModule scadMgrMod;
}
// signature: World::ShaderEntity::ParamCargo::LoadParam(void *, int *, const World::MaterialParam &, int, int)
// Range: 0x80246CB8 -> 0x80246E28
void World::ShaderEntity::ParamCargo::LoadParam() {
    {
        // Range: 0x80246D44 -> 0x80246DF4
        // Local variables
        class Texture * texture; // r9
        class SamplerContext context; // r1+0x8
        class Sampler * sampler; // r0
    }
}
// signature: World::ShaderEntity::HackSetupLightParams(Graphics::Effect::ParamData *, const Graphics::Effect *, Graphics::Effect::ExposureEnum)
// Range: 0x80246E28 -> 0x80247008
void World::ShaderEntity::HackSetupLightParams(class ParamData * paramData /* r31 */) {
    // Local variables
    int lightAmbientColorHandle; // r3
    int lightDir0Handle; // r3
    int lightDirSmap0Handle; // r3

    // References
    // -> static float s_colorScale;
    // -> static float s_ambient[4];
}
// Range: 0x80247008 -> 0x8024706C
void World::ShaderEntity::Deactivate(class ShaderEntity * this /* r31 */) {
}
