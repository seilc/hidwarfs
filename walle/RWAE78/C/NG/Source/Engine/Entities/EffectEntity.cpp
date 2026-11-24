/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Entities\EffectEntity.cpp
*/
class EffectSchema schema; // size: 0x18, address: 0x807FE890
class SchemaRegistrator schemaReg; // size: 0x8, address: 0x807FE8A8
class Schema * effectSchema; // size: 0x4, address: 0x807079C0
// signature: World::EffectSchema::Fix(World::Asset *, long, int)
// Range: 0x80238E98 -> 0x80239030
void World::EffectSchema::Fix() {
}
// signature: World::EffectSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80239030 -> 0x8023907C
class EntityStub * World::EffectSchema::CreateStub(class EffectSchema * this /* r31 */) {
}
// signature: World::EffectSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8023907C -> 0x80239094
void World::EffectSchema::DestroyStub() {
}
// signature: World::EffectSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80239094 -> 0x802390AC
class Entity * World::EffectSchema::ActivateEntity() {
}
// signature: World::EffectEntity::Create(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x802390EC -> 0x8023A27C
class EffectEntity * World::EffectEntity::Create(class EntityHandleBase * handle /* r1+0x8 */) {
    // Local variables
    class EffectAsset * asset; // r1+0x6C
    int techCount; // r1+0x68
    int lodCount; // r0
    int featureCount; // r0
    int passCount; // r1+0x64
    int shaderCount; // r14
    class Technique * itechs; // r29
    class LOD * ilods; // r1+0x60
    class Feature * ifeatures; // r1+0x5C
    class Pass * ipasses; // r1+0x58
    int totalParamCount; // r25
    int shaderTotalParamCount; // r15
    int stringBufferSize; // r16
    int memSize; // r20
    class StackAllocator allocator; // r1+0x28
    char * str; // r28
    unsigned char * paramIndices; // r26
    unsigned short * paramOffsets; // r25
    class LOD * lodIt; // r24
    class ParamFormatTable params[3]; // r1+0x34
    class ParamFormat * paramFormats; // r23

    {
        // Range: 0x80239194 -> 0x80239194
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x802391BC -> 0x802391C4
        // Local variables
        int i; // r18
    }
    {
        // Range: 0x802391EC -> 0x80239220
        // Local variables
        int i; // r19

        {
            // Range: 0x802391EC -> 0x80239220
            // Local variables
            int paramCount; // r20

            {
                // Range: 0x802391F4 -> 0x80239200
                // Local variables
                int j; // r21
            }
        }
    }
    {
        // Range: 0x8023934C -> 0x802399CC
        // Local variables
        int i; // r27
    }
    {
        // Range: 0x802399F8 -> 0x80239C40
        // Local variables
        int shaderIndex; // r15

        {
            // Range: 0x802399F8 -> 0x80239C40
            {
                // Range: 0x80239A5C -> 0x80239C08
                // Local variables
                int exposure; // r9

                {
                    // Range: 0x80239A5C -> 0x80239C08
                    // Local variables
                    int paramCount; // r10

                    {
                        // Range: 0x80239A6C -> 0x80239A70
                        // Local variables
                        int i; // r11

                        {
                            // Range: 0x80239A6C -> 0x80239A70
                            // Local variables
                            int paramIndex; // r12
                        }
                    }
                }
            }
        }
    }
    {
        // Range: 0x80239C60 -> 0x80239C60
        // Local variables
        int i; // r5
    }
    {
        // Range: 0x80239D98 -> 0x80239D98
        // Local variables
        int i; // r5

        {
            // Range: 0x80239D98 -> 0x80239D98
            // Local variables
            class Feature * feature; // r0
            class Feature * ifeature; // r0
        }
    }
    {
        // Range: 0x80239F60 -> 0x80239F60
        // Local variables
        int i; // r5

        {
            // Range: 0x80239F60 -> 0x80239F60
            // Local variables
            class LOD * lod; // r0
            class LOD * ilod; // r0
        }
    }
    {
        // Range: 0x8023A0E4 -> 0x8023A118
        // Local variables
        int techIndex; // r18

        {
            // Range: 0x8023A0E4 -> 0x8023A118
            // Local variables
            int lodStride; // r0
            int nameLen; // r0
        }
    }
    {
        // Range: 0x8023A174 -> 0x8023A1F4
        // Local variables
        int i; // r19

        {
            // Range: 0x8023A174 -> 0x8023A1F4
            // Local variables
            int paramCount; // r21

            {
                // Range: 0x8023A184 -> 0x8023A1B8
                // Local variables
                int j; // r22

                {
                    // Range: 0x8023A184 -> 0x8023A1B8
                    // Local variables
                    int nameLen; // r0
                }
            }
        }
    }

    // References
    // -> static class ScadMgrModule scadMgrMod;
    // -> struct {} __vt__Q28Graphics6Effect;
    // -> struct {} __vt__Q25World12EffectEntity;
}
// Range: 0x8023A2B0 -> 0x8023A49C
void World::EffectEntity::Deactivate(class EffectEntity * this /* r27 */) {
}
// Range: 0x8023A49C -> 0x8023A4EC
void World::EffectEntity::Destroy(class EffectEntity * this /* r31 */) {
    // Local variables
    void * mem; // reg65535
}
