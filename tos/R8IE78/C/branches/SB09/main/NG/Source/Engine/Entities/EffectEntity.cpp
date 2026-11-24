/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Entities\EffectEntity.cpp
*/
// signature: World::EffectEntity::EffectEntity(World::EntityHandleBase *)
// Range: 0x801B6AA0 -> 0x801B6B58
void * World::EffectEntity::EffectEntity(class EffectEntity * this /* r30 */) {
    // References
    // -> struct {} __vt__Q28Graphics6Effect;
    // -> struct {} __vt__Q25World12EffectEntity;
}
// Range: 0x801B6B60 -> 0x801B71E8
class Entity * World::EffectAsset::Create(class EntityHandleBase * handle /* r28 */, class EffectAsset * asset /* r15 */) {
    // Local variables
    int techCount; // r25
    int lodCount; // r1+0x5C
    int featureCount; // r24
    int passCount; // r1+0x58
    int shaderCount; // r23
    class Technique * itechs; // r1+0x54
    class LOD * ilods; // r1+0x50
    class Feature * ifeatures; // r1+0x4C
    class Pass * ipasses; // r1+0x48
    int totalParamCount; // r22
    int shaderTotalParamCount; // r14
    int stringBufferSize; // r18
    int memSize; // r19
    class StackAllocator allocator; // r1+0x10
    char * str; // r22
    unsigned char * paramIndices; // r21
    unsigned short * paramOffsets; // r20
    class LOD * lodIt; // r17
    class ParamFormatTable params[3]; // r1+0x1C
    class ParamFormat * paramFormats; // r16

    {
        // Range: 0x801B6B84 -> 0x801B6C04
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x801B6C08 -> 0x801B6C48
        // Local variables
        int i; // r6

        {
            // Range: 0x801B6C1C -> 0x801B6C48
            // Local variables
            int j; // r7
        }
    }
    {
        // Range: 0x801B6C4C -> 0x801B6C7C
        // Local variables
        int i; // r17
    }
    {
        // Range: 0x801B6C7C -> 0x801B6CD4
        // Local variables
        int i; // r19

        {
            // Range: 0x801B6C7C -> 0x801B6CD4
            // Local variables
            class MaterialParamFormat * iformats; // r21
            int paramCount; // r20

            {
                // Range: 0x801B6C90 -> 0x801B6CD4
                // Local variables
                int j; // r26
            }
        }
    }
    {
        // Range: 0x801B6DC4 -> 0x801B6E50
        // Local variables
        int i; // r30
    }
    {
        // Range: 0x801B6E50 -> 0x801B6F74
        // Local variables
        int shaderIndex; // r19

        {
            // Range: 0x801B6E50 -> 0x801B6F74
            // Local variables
            class ShaderRef & oshader; // r18
            class Shader & ishader; // r1+0x44

            {
                // Range: 0x801B6EBC -> 0x801B6F74
                // Local variables
                int exposure; // r3

                {
                    // Range: 0x801B6EBC -> 0x801B6F74
                    // Local variables
                    unsigned char * iparamIndices; // r0
                    int paramCount; // r0

                    {
                        // Range: 0x801B6EDC -> 0x801B6F28
                        // Local variables
                        int i; // r4

                        {
                            // Range: 0x801B6EDC -> 0x801B6F28
                            // Local variables
                            int paramIndex; // r10
                        }
                    }
                }
            }
        }
    }
    {
        // Range: 0x801B6F74 -> 0x801B6FB0
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x801B6FB0 -> 0x801B7004
        // Local variables
        int i; // r0

        {
            // Range: 0x801B6FB0 -> 0x801B7004
            // Local variables
            class Feature & feature; // r7
            class Feature & ifeature; // r6
        }
    }
    {
        // Range: 0x801B7004 -> 0x801B7048
        // Local variables
        int i; // r0

        {
            // Range: 0x801B7004 -> 0x801B7048
            // Local variables
            class LOD & lod; // r6
            class LOD & ilod; // r5
        }
    }
    {
        // Range: 0x801B7048 -> 0x801B70E4
        // Local variables
        int techIndex; // r14

        {
            // Range: 0x801B7048 -> 0x801B70E4
            // Local variables
            int nameLen; // r0
            class Technique & tech; // r19
            class Technique & itech; // r18

            {
                // Range: 0x801B709C -> 0x801B70E4
                // Local variables
                int renderStage; // r0
            }
        }
    }
    {
        // Range: 0x801B70E4 -> 0x801B71A8
        // Local variables
        int i; // r21

        {
            // Range: 0x801B70E4 -> 0x801B71A8
            // Local variables
            class MaterialParamFormat * iformats; // r1+0x40
            class ParamFormatTable & param; // r27
            int paramCount; // r24

            {
                // Range: 0x801B7108 -> 0x801B717C
                // Local variables
                int j; // r28

                {
                    // Range: 0x801B7108 -> 0x801B717C
                    // Local variables
                    int nameLen; // r0
                    class ParamFormat & format; // r30
                    class MaterialParamFormat & iformat; // r29
                }
            }
        }
    }
}
// Range: 0x801B71F0 -> 0x801B71F4
void World::EffectEntity::Deactivate() {
}
// Range: 0x801B7200 -> 0x801B7254
void World::EffectEntity::Destroy(class EffectEntity * this /* r30 */) {
    // Local variables
    int memSize; // r31
}
// Range: 0x801B72C0 -> 0x801B7370
void World::EffectEntity::DeferDestroy(class EffectEntity * this /* r26 */) {
    // Local variables
    int shaderCount; // r0
    class ShaderEntity * * shaderEnts; // r29
    class RenderModeEntity * * renderModeEnts; // r28

    {
        // Range: 0x801B72E4 -> 0x801B7330
        // Local variables
        int i; // r27
    }
}
