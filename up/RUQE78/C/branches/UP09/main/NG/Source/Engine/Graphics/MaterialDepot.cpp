/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Graphics\MaterialDepot.cpp
*/
class MaterialDepot * g_instance; // size: 0x4, address: 0x8084677C
static unsigned int s_specialRefs[6]; // size: 0x18, address: 0x807877F0
// Range: 0x802E8E14 -> 0x802E8E50
void * Graphics::MaterialDepot::MaterialDepot() {
}
// Range: 0x802E8E50 -> 0x802E9EF4
void Graphics::MaterialDepot::Refresh(class MaterialDepot * this /* r1+0x8 */, class PoolArray & scenes /* r1+0xC */) {
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
    unsigned int curKey; // r11
    enum NodeTypeEnum curTypeID; // r12
    class EffectPreprocessLookup * preprocBuf; // r27
    class EffectLodFeatureLookup * techBuf; // r1+0x34
    int matCount; // r7
    class MaterialLookup * matLookup; // r1+0x30
    int curEntry; // r0

    {
        // Range: 0x802E8E80 -> 0x802E9140
        {
            // Range: 0x802E8E80 -> 0x802E9140
            // Local variables
            class Feature * feature; // r20
            enum RenderStage stageID; // r20
            int featureSet; // r19
            int lodIndex; // r18
            int stageIndex; // r0
            int isAlpha; // r17
            int techIndex; // r16

            {
                // Range: 0x802E8EA0 -> 0x802E8EA0
                // Local variables
                int shaderHandle; // r16
            }
            {
                // Range: 0x802E8EA0 -> 0x802E9120
                // Local variables
                enum RenderStage stageTable[2]; // r1+0x28
            }
        }
    }
    {
        // Range: 0x802E9524 -> 0x802E9874
        {
            // Range: 0x802E9524 -> 0x802E9874
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
                // Range: 0x802E952C -> 0x802E985C
                // Local variables
                class EffectLodFeatureLookup * lodfeat; // r20

                {
                    // Range: 0x802E952C -> 0x802E9844
                    // Local variables
                    enum RenderStage stageTable[2]; // r1+0x20

                    {
                        // Range: 0x802E9544 -> 0x802E97E8
                        // Local variables
                        int passesAdded; // r19
                    }
                }
            }
        }
    }
    {
        // Range: 0x802E9950 -> 0x802E9B44
        {
            // Range: 0x802E9950 -> 0x802E9B44
            // Local variables
            class EffectPreprocessLookup * effectPreproc; // r10

            {
                // Range: 0x802E9968 -> 0x802E9B30
                // Local variables
                int i; // r11

                {
                    // Range: 0x802E9968 -> 0x802E9B30
                    // Local variables
                    int layer; // r18
                    class PreprocessEntry & entry; // r12
                }
            }
        }
    }
    {
        // Range: 0x802E9D14 -> 0x802E9D14
        // Local variables
        int i; // r0

        {
            // Range: 0x802E9D14 -> 0x802E9D14
            // Local variables
            class PassInfo & passinf; // r0
        }
    }
    {
        // Range: 0x802E9E18 -> 0x802E9EB4
        // Local variables
        int scn; // r8

        {
            // Range: 0x802E9E18 -> 0x802E9EB4
            // Local variables
            class Scene & curScene; // r9

            {
                // Range: 0x802E9E28 -> 0x802E9EA0
                // Local variables
                int i; // r10
            }
        }
    }
}
// signature: Graphics::MaterialDepot::AddSpecialRefs(Util::PoolArray<Graphics::Space::RenderEntry> &)
// Range: 0x802EBA8C -> 0x802EBB80
void Graphics::MaterialDepot::AddSpecialRefs() {
    {
        // Range: 0x802EBA90 -> 0x802EBB7C
        // Local variables
        int i; // r0

        {
            // Range: 0x802EBA90 -> 0x802EBB7C
            // Local variables
            unsigned int testCheckpoint; // r0
        }
    }

    // References
    // -> static unsigned int s_specialRefs[6];
}
