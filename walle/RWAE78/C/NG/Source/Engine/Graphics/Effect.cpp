/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Graphics\Effect.cpp
*/
static class EffectModule effectmod; // size: 0x98, address: 0x807FF008
static class ModuleRegistrator effectModReg; // size: 0x8, address: 0x807FF0A0
class Module * effectModule; // size: 0x4, address: 0x807093E0
static class DirSmapLight hackDirSMapLight[2]; // size: 0x158, address: 0x807FF0A8
static class RelativePriority priority[1]; // size: 0xC, address: 0x807093E4
char * standardTechniqueNames[5]; // size: 0x14, address: 0x807093F0
static enum RenderStage stageTableA[2]; // size: 0x8, address: 0x806D5AC8
static enum RenderStage stageTableB[4]; // size: 0x10, address: 0x806D5AD0
// signature: @unnamed@WAD01_cpp@::EffectModule::GetPriority(int &) const
// Range: 0x802503F4 -> 0x80250434
static class RelativePriority * @unnamed@WAD01_cpp@::EffectModule::GetPriority() const {
    // References
    // -> static class RelativePriority priority[1];
    // -> class Module * renderModule;
}
// signature: @unnamed@WAD01_cpp@::EffectModule::Startup(int)
// Range: 0x80250434 -> 0x80250614
static void @unnamed@WAD01_cpp@::EffectModule::Startup() {
    // Local variables
    float dir[2][3]; // r1+0x38
    class Vector4 color[2]; // r1+0x18

    {
        // Range: 0x80250480 -> 0x80250550
        // Local variables
        int lightIndex; // r28

        {
            // Range: 0x80250480 -> 0x80250550
            // Local variables
            class Vector vdir; // r1+0x8
        }
    }

    // References
    // -> static class DirSmapLight hackDirSMapLight[2];
}
// signature: @unnamed@WAD01_cpp@::EffectModule::FirstUpdate(int)
// Range: 0x80250748 -> 0x8025074C
static void @unnamed@WAD01_cpp@::EffectModule::FirstUpdate() {
}
// signature: @unnamed@WAD01_cpp@::EffectModule::RenderStartup(int)
// Range: 0x8025074C -> 0x80250750
static void @unnamed@WAD01_cpp@::EffectModule::RenderStartup() {
}
// Range: 0x80250750 -> 0x802507F0
int Graphics::Effect::GetGeometryContextListSize(class Effect * this /* r26 */, int * align /* r27 */) const {
    // Local variables
    int maxAlign; // r30
    int size; // r29

    {
        // Range: 0x80250774 -> 0x802507C4
        // Local variables
        int i; // r28

        {
            // Range: 0x80250774 -> 0x802507C4
            // Local variables
            int geomSize; // r0
            int geomAlign; // r1+0x8
        }
    }
}
// signature: Graphics::Effect::CreateGeometryContextList(void *, int, const unsigned char *) const
// Range: 0x802507F0 -> 0x802508D4
class GeometryContext * * Graphics::Effect::CreateGeometryContextList(class Effect * this /* r29 */) const {
    // Local variables
    class StackAllocator allocator; // r1+0xC
    unsigned char * streamMap; // r31

    {
        // Range: 0x80250828 -> 0x8025089C
        // Local variables
        int i; // r30

        {
            // Range: 0x80250828 -> 0x8025089C
            // Local variables
            int geomSize; // r0
            int geomAlign; // r1+0x8
        }
    }
}
// signature: Graphics::Effect::Create(Graphics::Effect::ShaderRef *, int, const Graphics::Effect::ParamFormatTable *, Graphics::Effect::Technique *, int, unsigned short)
// Range: 0x802508D4 -> 0x80250A30
void Graphics::Effect::Create(class Effect * this /* r31 */, class ShaderRef * shaderRefs /* r0 */) {
}
// Range: 0x80250AA8 -> 0x80250C80
void Graphics::Effect::ResolveStandardTechniques(class Effect * this /* r31 */) {
    {
        // Range: 0x80250AC0 -> 0x80250C5C
        // Local variables
        int techIdx; // r24

        {
            // Range: 0x80250AC8 -> 0x80250AD8
            // Local variables
            int stageMax; // r4
            enum RenderStage * stageTable; // r7

            {
                // Range: 0x80250AC8 -> 0x80250AD8
                // Local variables
                int stageTblIdx; // r8

                {
                    // Range: 0x80250AC8 -> 0x80250AD8
                    // Local variables
                    class Technique * tech; // r9

                    {
                        // Range: 0x80250AC8 -> 0x80250AD0
                        // Local variables
                        int stageIdx; // r0

                        {
                            // Range: 0x80250AC8 -> 0x80250AD0
                            // Local variables
                            enum RenderStage stageCur; // r4

                            {
                                // Range: 0x80250AC8 -> 0x80250AD0
                                // Local variables
                                class RenderStageEntry * rsEntry; // r0

                                {
                                    // Range: 0x80250AC8 -> 0x80250AD0
                                    // Local variables
                                    int lodIdx; // r10

                                    {
                                        // Range: 0x80250AC8 -> 0x80250AD0
                                        // Local variables
                                        class LOD * lod; // r11

                                        {
                                            // Range: 0x80250AC8 -> 0x80250AD0
                                            // Local variables
                                            int featIdx; // r12

                                            {
                                                // Range: 0x80250AC8 -> 0x80250AD0
                                                // Local variables
                                                unsigned char testShaderHandle; // r0
                                                class Feature * feat; // r20
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
// signature: Graphics::HackGetDirSMapLight(Graphics::eLightIndex)
// Range: 0x80250CF0 -> 0x80250D04
class DirSmapLight * Graphics::HackGetDirSMapLight() {
    // References
    // -> static class DirSmapLight hackDirSMapLight[2];
}
// Range: 0x80250D04 -> 0x80250D50
void Graphics::Effect::RenderAttach() {
    // References
    // -> class MaterialDepot * g_instance;
}
// Range: 0x80250D50 -> 0x80250D8C
void Graphics::Effect::RenderDetach() {
    // References
    // -> class MaterialDepot * g_instance;
}
// Range: 0x80250D8C -> 0x80250DB8
class Wii_GeometryStateOp * Graphics::Effect::GetWiiGeomStateOp() const {
    // Local variables
    class Shader * shader; // r4
}
