/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Graphics\Effect.cpp
*/
static class EffectModule effectmod; // size: 0x98, address: 0x80846588
static class ModuleRegistrator effectModReg; // size: 0x8, address: 0x80846620
class Module * effectModule; // size: 0x4, address: 0x807BEFA0
static class RelativePriority priority[1]; // size: 0xC, address: 0x807BEFA4
char * standardTechniqueNames[5]; // size: 0x14, address: 0x807BEFB0
static enum RenderStage stageTableA[2]; // size: 0x8, address: 0x80787768
static enum RenderStage stageTableB[4]; // size: 0x10, address: 0x80787770
// signature: @unnamed@WAD01_cpp@::EffectModule::GetPriority(int &) const
// Range: 0x802E713C -> 0x802E717C
static class RelativePriority * @unnamed@WAD01_cpp@::EffectModule::GetPriority() const {
    // References
    // -> static class RelativePriority priority[1];
    // -> class Module * renderModule;
}
// signature: @unnamed@WAD01_cpp@::EffectModule::Startup(int)
// Range: 0x802E717C -> 0x802E7180
static void @unnamed@WAD01_cpp@::EffectModule::Startup() {
}
// signature: @unnamed@WAD01_cpp@::EffectModule::FirstUpdate(int)
// Range: 0x802E7180 -> 0x802E7184
static void @unnamed@WAD01_cpp@::EffectModule::FirstUpdate() {
}
// signature: @unnamed@WAD01_cpp@::EffectModule::RenderStartup(int)
// Range: 0x802E7184 -> 0x802E7188
static void @unnamed@WAD01_cpp@::EffectModule::RenderStartup() {
}
// Range: 0x802E7188 -> 0x802E7228
int Graphics::Effect::GetGeometryContextListSize(class Effect * this /* r26 */, int & align /* r27 */) const {
    // Local variables
    int maxAlign; // r30
    int size; // r29

    {
        // Range: 0x802E71AC -> 0x802E71FC
        // Local variables
        int i; // r28

        {
            // Range: 0x802E71AC -> 0x802E71FC
            // Local variables
            int geomSize; // r0
            int geomAlign; // r1+0x8
        }
    }
}
// signature: Graphics::Effect::CreateGeometryContextList(void *, int, const unsigned char *) const
// Range: 0x802E7228 -> 0x802E730C
class GeometryContext * * Graphics::Effect::CreateGeometryContextList(class Effect * this /* r29 */) const {
    // Local variables
    class StackAllocator allocator; // r1+0xC
    unsigned char * streamMap; // r31

    {
        // Range: 0x802E7260 -> 0x802E72D4
        // Local variables
        int i; // r30

        {
            // Range: 0x802E7260 -> 0x802E72D4
            // Local variables
            int geomSize; // r0
            int geomAlign; // r1+0x8
        }
    }
}
// signature: Graphics::Effect::Create(Graphics::Effect::ShaderRef *, int, const Graphics::Effect::ParamFormatTable *, Graphics::Effect::Technique *, int, unsigned short)
// Range: 0x802E730C -> 0x802E7700
void Graphics::Effect::Create(class Effect * this /* r31 */, class ShaderRef * shaderRefs /* r0 */) {
    {
        // Range: 0x802E75D0 -> 0x802E7650
        // Local variables
        int expose; // r23
    }
    {
        // Range: 0x802E7660 -> 0x802E76DC
        // Local variables
        int expose; // r23
    }
}
// Range: 0x802E7700 -> 0x802E78D8
void Graphics::Effect::ResolveStandardTechniques(class Effect * this /* r31 */) {
    {
        // Range: 0x802E7718 -> 0x802E78B4
        // Local variables
        int techIdx; // r24

        {
            // Range: 0x802E7720 -> 0x802E7730
            // Local variables
            int stageMax; // r4
            enum RenderStage * stageTable; // r7

            {
                // Range: 0x802E7720 -> 0x802E7730
                // Local variables
                int stageTblIdx; // r8

                {
                    // Range: 0x802E7720 -> 0x802E7730
                    // Local variables
                    class Technique & tech; // r9

                    {
                        // Range: 0x802E7720 -> 0x802E7728
                        // Local variables
                        int stageIdx; // r0

                        {
                            // Range: 0x802E7720 -> 0x802E7728
                            // Local variables
                            enum RenderStage stageCur; // r4

                            {
                                // Range: 0x802E7720 -> 0x802E7728
                                // Local variables
                                class RenderStageEntry & rsEntry; // r0

                                {
                                    // Range: 0x802E7720 -> 0x802E7728
                                    // Local variables
                                    int lodIdx; // r10

                                    {
                                        // Range: 0x802E7720 -> 0x802E7728
                                        // Local variables
                                        class LOD & lod; // r11

                                        {
                                            // Range: 0x802E7720 -> 0x802E7728
                                            // Local variables
                                            int featIdx; // r12

                                            {
                                                // Range: 0x802E7720 -> 0x802E7728
                                                // Local variables
                                                unsigned char testShaderHandle; // r0
                                                class Feature & feat; // r20
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    // References
    // -> static enum RenderStage stageTableA[2];
    // -> static enum RenderStage stageTableB[4];
    // -> char * standardTechniqueNames[5];
}
// Range: 0x802E7948 -> 0x802E7994
void Graphics::Effect::RenderAttach() {
    // References
    // -> class MaterialDepot * g_instance;
}
// Range: 0x802E7994 -> 0x802E79D0
void Graphics::Effect::RenderDetach() {
    // References
    // -> class MaterialDepot * g_instance;
}
// Range: 0x802E79D0 -> 0x802E79F4
class Wii_GeometryStateOp * Graphics::Effect::GetWiiGeomStateOp() const {
    // Local variables
    class Shader * shader; // r3
}
