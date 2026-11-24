/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Entities\EffectEntity.cpp
*/
// Range: 0x802DA308 -> 0x802DAEB8
class Entity * World::EffectAsset::Create(class EntityHandleBase * handle /* r21 */, class EffectAsset * asset /* r1+0x8 */) {
    // Local variables
    int techCount; // r1+0x5C
    int lodCount; // r1+0x58
    int featureCount; // r1+0x54
    int passCount; // r1+0x50
    int shaderCount; // r18
    class Technique * itechs; // r17
    class LOD * ilods; // r1+0x4C
    class Feature * ifeatures; // r1+0x48
    class Pass * ipasses; // r1+0x44
    int totalParamCount; // r19
    int shaderTotalParamCount; // r16
    int stringBufferSize; // r15
    int memSize; // r20
    class StackAllocator allocator; // r1+0x14
    char * str; // r16
    unsigned char * paramIndices; // r30
    unsigned short * paramOffsets; // r29
    class LOD * lodIt; // r28
    class ParamFormatTable params[3]; // r1+0x20
    class ParamFormat * paramFormats; // r27

    {
        // Range: 0x802DA3B0 -> 0x802DA3B0
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x802DA3D8 -> 0x802DA3E0
        // Local variables
        int i; // r20
    }
    {
        // Range: 0x802DA408 -> 0x802DA43C
        // Local variables
        int i; // r22

        {
            // Range: 0x802DA408 -> 0x802DA43C
            // Local variables
            class MaterialParamFormat * iformats; // r0
            int paramCount; // r24

            {
                // Range: 0x802DA410 -> 0x802DA41C
                // Local variables
                int j; // r25
            }
        }
    }
    {
        // Range: 0x802DA578 -> 0x802DA63C
        // Local variables
        int i; // r31
    }
    {
        // Range: 0x802DA64C -> 0x802DA890
        // Local variables
        int shaderIndex; // r14

        {
            // Range: 0x802DA64C -> 0x802DA890
            {
                // Range: 0x802DA6A8 -> 0x802DA854
                // Local variables
                int exposure; // r9

                {
                    // Range: 0x802DA6A8 -> 0x802DA854
                    // Local variables
                    unsigned char * iparamIndices; // r0
                    int paramCount; // r10

                    {
                        // Range: 0x802DA6B8 -> 0x802DA6BC
                        // Local variables
                        int i; // r11

                        {
                            // Range: 0x802DA6B8 -> 0x802DA6BC
                            // Local variables
                            int paramIndex; // r12
                        }
                    }
                }
            }
        }
    }
    {
        // Range: 0x802DA89C -> 0x802DA89C
        // Local variables
        int i; // r5
    }
    {
        // Range: 0x802DA9D4 -> 0x802DA9D4
        // Local variables
        int i; // r5

        {
            // Range: 0x802DA9D4 -> 0x802DA9D4
            // Local variables
            class Feature & feature; // r0
            class Feature & ifeature; // r0
        }
    }
    {
        // Range: 0x802DAB9C -> 0x802DAB9C
        // Local variables
        int i; // r5

        {
            // Range: 0x802DAB9C -> 0x802DAB9C
            // Local variables
            class LOD & lod; // r0
            class LOD & ilod; // r0
        }
    }
    {
        // Range: 0x802DAD20 -> 0x802DAD54
        // Local variables
        int techIndex; // r20

        {
            // Range: 0x802DAD20 -> 0x802DAD54
            // Local variables
            int lodStride; // r0
            int nameLen; // r0
        }
    }
    {
        // Range: 0x802DADB0 -> 0x802DAE30
        // Local variables
        int i; // r20

        {
            // Range: 0x802DADB0 -> 0x802DAE30
            // Local variables
            class MaterialParamFormat * iformats; // r0
            int paramCount; // r21

            {
                // Range: 0x802DADC0 -> 0x802DADF4
                // Local variables
                int j; // r22

                {
                    // Range: 0x802DADC0 -> 0x802DADF4
                    // Local variables
                    int nameLen; // r0
                }
            }
        }
    }

    // References
    // -> struct {} __vt__Q28Graphics6Effect;
    // -> struct {} __vt__Q25World12EffectEntity;
}
// Range: 0x802DAEB8 -> 0x802DAFAC
void World::EffectEntity::Deactivate(class EffectEntity * this /* r25 */) {
}
