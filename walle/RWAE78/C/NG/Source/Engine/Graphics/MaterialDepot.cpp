/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Graphics\MaterialDepot.cpp
*/
class MaterialDepot * g_instance; // size: 0x4, address: 0x807FF330
static unsigned int s_specialRefs[6]; // size: 0x18, address: 0x806D5B48
// Range: 0x80251DE0 -> 0x80251E1C
void * Graphics::MaterialDepot::MaterialDepot() {
}
// Range: 0x80251E1C -> 0x80252EC4
void Graphics::MaterialDepot::Refresh(class MaterialDepot * this /* r1+0x8 */, class PoolArray * scenes /* r1+0xC */) {
    // Local variables
    unsigned char * curBuffer; // r0
    int effectCount; // r12
    int netTechCount; // r31
    int netPreprocCount; // r14
    class ShaderRefEntry * curShaderRefEntry; // r15
    class ShaderRefEntry * startShaderRefEntry; // r0
    class ShaderRefEntry * endShaderRefEntry; // r0
    unsigned int classIndex; // r9
    unsigned int keyIndex; // r10
    unsigned int curTypeID; // r11
    unsigned int curKey; // r12
    class EffectPreprocessLookup * preprocBuf; // r27
    class EffectLodFeatureLookup * techBuf; // r1+0x34
    int matCount; // r7
    class MaterialLookup * matLookup; // r1+0x30
    int curEntry; // r0

    {
        // Range: 0x80251E4C -> 0x8025210C
        {
            // Range: 0x80251E4C -> 0x8025210C
            // Local variables
            class Feature * feature; // r20
            enum RenderStage stageID; // r20
            int featureSet; // r19
            int lodIndex; // r18
            int stageIndex; // r0
            int isAlpha; // r17
            int techIndex; // r16

            {
                // Range: 0x80251E6C -> 0x80251E6C
                // Local variables
                int shaderHandle; // r16
            }
            {
                // Range: 0x80251E6C -> 0x802520EC
                // Local variables
                enum RenderStage stageTable[2]; // r1+0x28
            }
        }
    }
    {
        // Range: 0x802524F4 -> 0x80252844
        {
            // Range: 0x802524F4 -> 0x80252844
            // Local variables
            class Feature * feature; // r21
            enum RenderStage stageID; // r22
            int passIndex; // r28
            int featureSet; // r23
            int lodIndex; // r24
            int stageIndex; // r0
            int isAlpha; // r25
            int techIndex; // r26

            {
                // Range: 0x802524FC -> 0x8025282C
                // Local variables
                class EffectLodFeatureLookup * lodfeat; // r20

                {
                    // Range: 0x802524FC -> 0x80252814
                    // Local variables
                    enum RenderStage stageTable[2]; // r1+0x20

                    {
                        // Range: 0x80252514 -> 0x802527B8
                        // Local variables
                        int passesAdded; // r19
                    }
                }
            }
        }
    }
    {
        // Range: 0x80252920 -> 0x80252B14
        {
            // Range: 0x80252920 -> 0x80252B14
            // Local variables
            class EffectPreprocessLookup * effectPreproc; // r10

            {
                // Range: 0x80252938 -> 0x80252B00
                // Local variables
                int i; // r11

                {
                    // Range: 0x80252938 -> 0x80252B00
                    // Local variables
                    int layer; // r18
                    class PreprocessEntry * entry; // r12
                }
            }
        }
    }
    {
        // Range: 0x80252CE4 -> 0x80252CE4
        // Local variables
        int i; // r0

        {
            // Range: 0x80252CE4 -> 0x80252CE4
            // Local variables
            class PassInfo * passinf; // r0
        }
    }
    {
        // Range: 0x80252DE8 -> 0x80252E84
        // Local variables
        int scn; // r8

        {
            // Range: 0x80252DE8 -> 0x80252E84
            // Local variables
            class Scene * curScene; // r9

            {
                // Range: 0x80252DF8 -> 0x80252E70
                // Local variables
                int i; // r10
            }
        }
    }
}
// signature: Graphics::MaterialDepot::AddSpecialRefs(Util::PoolArray<Graphics::Space::RenderEntry> &)
// Range: 0x80254A78 -> 0x80254B6C
void Graphics::MaterialDepot::AddSpecialRefs() {
    {
        // Range: 0x80254A7C -> 0x80254B68
        // Local variables
        int i; // r0

        {
            // Range: 0x80254A7C -> 0x80254B68
            // Local variables
            unsigned int testCheckpoint; // r0
        }
    }

    // References
    // -> static unsigned int s_specialRefs[6];
}
