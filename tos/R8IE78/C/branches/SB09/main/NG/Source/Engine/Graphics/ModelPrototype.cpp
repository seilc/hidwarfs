/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\ModelPrototype.cpp
*/
// signature: Graphics::ModelPrototype::Create(Graphics::Builder *const *, const unsigned short *, Math::Matrix43 *, const unsigned short *, const unsigned short *, const Graphics::ModelPrototype::ReferenceModelEntry *, int, int, int, int, int, const unsigned long long *, const World::ModelInstanceParamData *, const World::ModelPartDefinition *, unsigned short, Graphics::Skeleton *, bool)
// Range: 0x801C7C30 -> 0x801C7D1C
void Graphics::ModelPrototype::Create(int renderableCount /* r11 */, int nonRefChildTransformCount /* r11 */, int uniqueRenderableRefModelCount /* r0 */, int instanceParamCount /* r0 */, unsigned long long * instanceParamKey /* r22 */, class ModelInstanceParamData * instanceParamData /* r23 */, class ModelPartDefinition * modelPartDefinitions /* r24 */, unsigned short modelPartCount /* r25 */, class Skeleton * skel /* r26 */, bool segmentedModel /* r27 */) {
    {
        // Range: 0x801C7C4C -> 0x801C7CCC
        // Local variables
        int i; // r29

        {
            // Range: 0x801C7C4C -> 0x801C7CCC
            // Local variables
            unsigned short numInstances; // r28
        }
    }
}
// Range: 0x801C7D20 -> 0x801C7EE8
void Graphics::ModelPrototype::InitCreateModelSize(class ModelPrototype * this /* r29 */) {
    // Local variables
    int maxAlign; // r31
    int size; // r30

    {
        // Range: 0x801C7D9C -> 0x801C7E04
        // Local variables
        int end; // r0
        int i; // r26

        {
            // Range: 0x801C7D9C -> 0x801C7E04
            // Local variables
            int geomSize; // r0
            int geomAlign; // r1+0xC
        }
    }
    {
        // Range: 0x801C7E04 -> 0x801C7E70
        // Local variables
        int end; // r27
        int i; // r26

        {
            // Range: 0x801C7E04 -> 0x801C7E70
            // Local variables
            int rendSize; // r0
            int rendAlign; // r1+0x8
        }
    }
}
// signature: Graphics::ModelPrototype::CreateModel(Graphics::Model *, void *, int, const Math::Matrix43 &, bool, Math::Matrix43 *) const
// Range: 0x801C7EF0 -> 0x801C827C
void Graphics::ModelPrototype::CreateModel(class ModelPrototype * this /* r19 */, class Model * model /* r20 */, class Matrix43 & rootTransform /* r21 */, bool temporary /* r22 */, class Matrix43 * childTransforms /* r23 */) const {
    // Local variables
    class StackAllocator allocator; // r1+0x20
    class ModelJointBuffer * jointBuf; // r27
    class ModelMorphWeightBuffer * morphBuf; // r26
    class Renderable3DTransform * xformData; // r28
    class RefModelInstanceChildXform * refModelXformData; // r25

    {
        // Range: 0x801C7F58 -> 0x801C7F84
        // Local variables
        int numBytesAllocated; // r5
    }
    {
        // Range: 0x801C7F84 -> 0x801C8050
        // Local variables
        class Matrix43 * jointData; // r4

        {
            // Range: 0x801C7F90 -> 0x801C7FB0
            // Local variables
            unsigned int i; // r0
        }
        {
            // Range: 0x801C7FBC -> 0x801C8050
            // Local variables
            float * morphData; // r0

            {
                // Range: 0x801C7FCC -> 0x801C8034
                // Local variables
                unsigned int i; // r7
            }
            {
                // Range: 0x801C8038 -> 0x801C804C
                // Local variables
                unsigned int i; // r0
            }
        }
    }
    {
        // Range: 0x801C8054 -> 0x801C8058
        // Local variables
        unsigned int i; // r0
    }
    {
        // Range: 0x801C8058 -> 0x801C813C
        // Local variables
        int end; // r0
        int i; // r24

        {
            // Range: 0x801C8058 -> 0x801C813C
            // Local variables
            int geomAlign; // r1+0x1C
        }
    }
    {
        // Range: 0x801C813C -> 0x801C81C0
        // Local variables
        int end; // r31
        int i; // r24

        {
            // Range: 0x801C813C -> 0x801C81C0
            // Local variables
            int rendAlign; // r1+0x18
        }
    }
}
// signature: Graphics::ModelPrototype::InstanceParamLookup(unsigned long long, const World::ModelInstanceParamData *&) const
// Range: 0x801C8280 -> 0x801C8394
int Graphics::ModelPrototype::InstanceParamLookup() const {
    // Local variables
    unsigned int min; // r4
    unsigned int max; // r11
    int count; // r10

    {
        // Range: 0x801C8290 -> 0x801C82FC
        // Local variables
        unsigned int mid; // r12
    }
}
