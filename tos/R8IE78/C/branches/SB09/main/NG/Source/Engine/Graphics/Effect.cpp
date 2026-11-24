/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\Effect.cpp
*/
static class EffectModule effectmod; // size: 0x98, address: 0x80774DC0
static class ModuleRegistrator effectModReg; // size: 0x8, address: 0x80774E58
class Module * effectModule; // size: 0x4, address: 0x806CD12C
class RelativePriority priority[1]; // size: 0xC, address: 0x806CD130
char * standardTechniqueNames[6]; // size: 0x18, address: 0x806CD140
int lodMax; // size: 0x4, address: 0x80692CE0
int lodMax; // size: 0x4, address: 0x80692CE4
enum RenderStage stageTableA[2]; // size: 0x8, address: 0x80692CE8
enum RenderStage stageTableB[4]; // size: 0x10, address: 0x80692CF0
// Range: 0x801C4040 -> 0x801C4084
static void * @unnamed@WAD01_cpp@::EffectModule::EffectModule(class EffectModule * this /* r31 */) {
    // References
    // -> static struct {} __vt__Q219@unnamed@WAD01_cpp@12EffectModule;
}
// signature: @unnamed@WAD01_cpp@::EffectModule::GetPriority(int &) const
// Range: 0x801C4090 -> 0x801C40D0
static class RelativePriority * @unnamed@WAD01_cpp@::EffectModule::GetPriority() const {
    // References
    // -> class RelativePriority priority[1];
    // -> class Module * renderModule;
}
// Range: 0x801C40D0 -> 0x801C4170
int Graphics::Effect::GetGeometryContextListSize(class Effect * this /* r26 */, int & align /* r27 */) const {
    // Local variables
    int maxAlign; // r30
    int size; // r29

    {
        // Range: 0x801C40F4 -> 0x801C4154
        // Local variables
        int i; // r28

        {
            // Range: 0x801C40F4 -> 0x801C4154
            // Local variables
            int geomSize; // r0
            int geomAlign; // r1+0x8
        }
    }
}
// signature: Graphics::Effect::CreateGeometryContextList(void *, int, const unsigned char *) const
// Range: 0x801C4170 -> 0x801C4250
class GeometryContext * * Graphics::Effect::CreateGeometryContextList(class Effect * this /* r25 */, unsigned char * streamMapBuffer /* r26 */) const {
    // Local variables
    class StackAllocator allocator; // r1+0xC
    unsigned char * streamMap; // reg65535

    {
        // Range: 0x801C4194 -> 0x801C4238
        // Local variables
        int i; // r28

        {
            // Range: 0x801C4194 -> 0x801C4238
            // Local variables
            int geomSize; // r27
            int geomAlign; // r1+0x8
        }
    }
}
// signature: Graphics::Effect::Create(Graphics::Effect::ShaderRef *, int, const Graphics::Effect::ParamFormatTable *, Graphics::Effect::Technique *, int, unsigned short)
// Range: 0x801C4250 -> 0x801C43A8
void Graphics::Effect::Create(class Effect * this /* r29 */, class ShaderRef * shaderRefs /* r0 */) {
    {
        // Range: 0x801C431C -> 0x801C4354
        // Local variables
        int expose; // r30
    }
    {
        // Range: 0x801C4354 -> 0x801C4394
        // Local variables
        int expose; // r30
    }
}
// Range: 0x801C4410 -> 0x801C45A8
void Graphics::Effect::ResolveStandardTechniques(class Effect * this /* r23 */) {
    {
        // Range: 0x801C4420 -> 0x801C4594
        // Local variables
        int techIdx; // r24

        {
            // Range: 0x801C4434 -> 0x801C4444
            // Local variables
            int stageMax; // r7
            enum RenderStage * stageTable; // r4

            {
                // Range: 0x801C4434 -> 0x801C4444
                // Local variables
                int stageTblIdx; // r5

                {
                    // Range: 0x801C4434 -> 0x801C4444
                    // Local variables
                    class Technique & tech; // r6

                    {
                        // Range: 0x801C4434 -> 0x801C443C
                        // Local variables
                        int stageIdx; // r0

                        {
                            // Range: 0x801C4434 -> 0x801C443C
                            // Local variables
                            enum RenderStage stageCur; // r7

                            {
                                // Range: 0x801C4434 -> 0x801C443C
                                // Local variables
                                class RenderStageEntry & rsEntry; // r0

                                {
                                    // Range: 0x801C4434 -> 0x801C443C
                                    // Local variables
                                    int lodIdx; // r7

                                    {
                                        // Range: 0x801C4434 -> 0x801C443C
                                        // Local variables
                                        class LOD & lod; // r8

                                        {
                                            // Range: 0x801C4434 -> 0x801C443C
                                            // Local variables
                                            int featIdx; // r9

                                            {
                                                // Range: 0x801C4434 -> 0x801C443C
                                                // Local variables
                                                unsigned char testShaderHandle; // r0
                                                class Feature & feat; // r19
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
    // -> enum RenderStage stageTableA[2];
    // -> enum RenderStage stageTableB[4];
    // -> char * standardTechniqueNames[6];
}
// Range: 0x801C4620 -> 0x801C4630
void Graphics::Effect::RenderAttach() {
    // References
    // -> class MaterialDepot * g_instance;
}
// Range: 0x801C4630 -> 0x801C4640
void Graphics::Effect::RenderDetach() {
    // References
    // -> class MaterialDepot * g_instance;
}
// Range: 0x801C4640 -> 0x801C4664
class Wii_GeometryStateOp * Graphics::Effect::GetWiiGeomStateOp() const {
    // Local variables
    class Shader * shader; // r3
}
