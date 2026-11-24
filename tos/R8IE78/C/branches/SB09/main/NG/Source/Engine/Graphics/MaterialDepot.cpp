/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\MaterialDepot.cpp
*/
class MaterialDepot * g_instance; // size: 0x4, address: 0x80774FA0
unsigned int s_specialRefs[6]; // size: 0x18, address: 0x80692D60
int NUM_SPECIAL_REFS; // size: 0x4, address: 0x80692D78
// Range: 0x801C6870 -> 0x801C6B40
bool Graphics::ShaderRefEntry::operator<(const Graphics::ShaderRefEntry &) const(class ShaderRefEntry & other /* r31 */) {
    // Local variables
    class ShaderRef * sref; // r0
    class ShaderRef * osref; // r0
    class Shader * shad; // r7
    class Shader * oshad; // r12

    {
        // Range: 0x801C68DC -> 0x801C6AE8
        // Local variables
        class StateDelta * orstate; // r6
        class StateDelta * rstate; // r5
        int rsCount; // r0
        class RenderMode * ormode; // r0
        class RenderMode * rmode; // r0

        {
            // Range: 0x801C6948 -> 0x801C6A0C
            // Local variables
            int i; // r12

            {
                // Range: 0x801C6948 -> 0x801C6A0C
                // Local variables
                int paramCount; // r0

                {
                    // Range: 0x801C6984 -> 0x801C6A0C
                    // Local variables
                    int j; // r30
                }
            }
        }
        {
            // Range: 0x801C6A78 -> 0x801C6AE0
            // Local variables
            int i; // r0
        }
    }
}
// Range: 0x801C5B30 -> 0x801C5B8C
void * Graphics::MaterialDepot::MaterialDepot(class MaterialDepot * this /* r31 */) {
}
// signature: Graphics::MaterialDepot::AddMaterial(Graphics::Material *)
// Range: 0x801C5B90 -> 0x801C5BD8
void Graphics::MaterialDepot::AddMaterial(class MaterialDepot * this /* r31 */) {
}
// signature: Graphics::MaterialDepot::RemoveMaterial(Graphics::Material *)
// Range: 0x801C5BE0 -> 0x801C5C24
void Graphics::MaterialDepot::RemoveMaterial(class MaterialDepot * this /* r31 */) {
}
// signature: Graphics::MaterialDepot::AddEffect(Graphics::Effect *)
// Range: 0x801C5C70 -> 0x801C5CB8
void Graphics::MaterialDepot::AddEffect(class MaterialDepot * this /* r31 */) {
}
// signature: Graphics::MaterialDepot::RemoveEffect(Graphics::Effect *)
// Range: 0x801C5CC0 -> 0x801C5D04
void Graphics::MaterialDepot::RemoveEffect(class MaterialDepot * this /* r31 */) {
}
// Range: 0x801C5D10 -> 0x801C6810
void Graphics::MaterialDepot::Refresh(class MaterialDepot * this /* r15 */, class PoolArray & scenes /* r1+0x8 */) {
    // Local variables
    unsigned char * curBuffer; // r0
    int effectCount; // r21
    int netTechCount; // r22
    int netPreprocCount; // r23
    class ShaderRefEntry * curShaderRefEntry; // r24
    class ShaderRefEntry * startShaderRefEntry; // r0
    class ShaderRefEntry * endShaderRefEntry; // r0
    unsigned int classIndex; // r17
    unsigned int keyIndex; // r18
    unsigned int curKey; // r19
    enum NodeTypeEnum curTypeID; // r20
    class ThreadStackMarkSentry wm; // r1+0x10
    class EffectPreprocessLookup * preprocBuf; // r26
    class EffectLodFeatureLookup * techBuf; // r25
    int matCount; // r7
    class MaterialLookup * matLookup; // r16
    int curEntry; // r26

    {
        // Range: 0x801C5D50 -> 0x801C5EDC
        {
            // Range: 0x801C5D50 -> 0x801C5EDC
            // Local variables
            class Feature * feature; // r0
            enum RenderStage stageID; // r4
            int featureSet; // r30
            int lodIndex; // r29
            int stageIndex; // r28
            int isAlpha; // r27
            int techIndex; // r26

            {
                // Range: 0x801C5D74 -> 0x801C5D9C
                // Local variables
                int shaderHandle; // r3
            }
            {
                // Range: 0x801C5DB4 -> 0x801C5EDC
                // Local variables
                enum RenderStage stageTable[2]; // r1+0x20
            }
        }
    }
    {
        // Range: 0x801C603C -> 0x801C6344
        {
            // Range: 0x801C603C -> 0x801C6344
            // Local variables
            class Feature * feature; // r18
            enum RenderStage stageID; // r19
            int passIndex; // r20
            int featureSet; // r21
            int lodIndex; // r22
            int stageIndex; // r1+0x2C
            int isAlpha; // r23
            int techIndex; // r24

            {
                // Range: 0x801C6054 -> 0x801C6344
                // Local variables
                class EffectLodFeatureLookup * lodfeat; // r1+0x28

                {
                    // Range: 0x801C6064 -> 0x801C6344
                    // Local variables
                    enum RenderStage stageTable[2]; // r1+0x18

                    {
                        // Range: 0x801C6064 -> 0x801C628C
                        // Local variables
                        int passesAdded; // r17
                    }
                }
            }
        }
    }
    {
        // Range: 0x801C63F8 -> 0x801C6418
        // Local variables
        int i; // r5
    }
    {
        // Range: 0x801C6420 -> 0x801C65CC
        {
            // Range: 0x801C6420 -> 0x801C65CC
            // Local variables
            class EffectPreprocessLookup * effectPreproc; // r27

            {
                // Range: 0x801C6420 -> 0x801C65CC
                // Local variables
                int i; // r28

                {
                    // Range: 0x801C6420 -> 0x801C65CC
                    // Local variables
                    int layer; // r3
                    class PreprocessEntry & entry; // r29
                }
            }
        }
    }
    {
        // Range: 0x801C65CC -> 0x801C65EC
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x801C6618 -> 0x801C6720
        // Local variables
        int i; // r0

        {
            // Range: 0x801C6618 -> 0x801C6720
            // Local variables
            class PassInfo & passinf; // r0
        }
    }
    {
        // Range: 0x801C6720 -> 0x801C67E8
        // Local variables
        int scn; // r8

        {
            // Range: 0x801C6720 -> 0x801C67E8
            // Local variables
            class Scene & curScene; // r9

            {
                // Range: 0x801C6730 -> 0x801C67E8
                // Local variables
                int rl; // r10

                {
                    // Range: 0x801C6730 -> 0x801C67E8
                    // Local variables
                    int insize; // r0
                    class RenderableSceneRef * in; // r11

                    {
                        // Range: 0x801C6744 -> 0x801C67E8
                        // Local variables
                        int i; // r0

                        {
                            // Range: 0x801C6744 -> 0x801C67E8
                            // Local variables
                            class RenderableSceneRef & ref; // r12
                        }
                    }
                }
            }
        }
    }
}
// signature: Graphics::DefaultOrderComparator::operator()(const void *, const void *) const
// Range: 0x801C72A0 -> 0x801C745C
int Graphics::DefaultOrderComparator::operator()() const {
    // Local variables
    class PreprocessEntry & a; // r31
    class PreprocessEntry & b; // r30
}
// Range: 0x801C6F70 -> 0x801C7294
void Graphics::MaterialDepot::DefaultSortFunction(class PreprocessEntry * entries /* r23 */, int count /* r24 */) {
    // Local variables
    class DefaultOrderComparator cmp; // r1+0x8
    unsigned int bucketIndex; // r27

    {
        // Range: 0x801C7240 -> 0x801C7280
        // Local variables
        int i; // r28
    }
}
// signature: Graphics::MaterialDepot::AddSpecialRefs(Util::PoolArray<Graphics::Space::RenderEntry> &)
// Range: 0x801C7480 -> 0x801C74F4
void Graphics::MaterialDepot::AddSpecialRefs() {
    {
        // Range: 0x801C748C -> 0x801C74F0
        // Local variables
        int i; // r11

        {
            // Range: 0x801C748C -> 0x801C74F0
            // Local variables
            unsigned int testCheckpoint; // r0
        }
    }

    // References
    // -> unsigned int s_specialRefs[6];
}
