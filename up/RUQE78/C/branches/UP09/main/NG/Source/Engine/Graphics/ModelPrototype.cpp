/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Graphics\ModelPrototype.cpp
*/
// signature: Graphics::ModelPrototype::Create(Graphics::Builder *const *, const unsigned short *, Math::Matrix43 *, const unsigned short *, const unsigned short *, const Graphics::ModelPrototype::ReferenceModelEntry *, int, int, int, int, int, const unsigned long long *, const World::ModelInstanceParamData *, const World::ModelPartDefinition *, unsigned short, Graphics::Skeleton *, bool)
// Range: 0x802EC584 -> 0x802EC670
void Graphics::ModelPrototype::Create(int renderableCount /* r11 */, int nonRefChildTransformCount /* r11 */, int uniqueRenderableRefModelCount /* r0 */, int instanceParamCount /* r0 */, unsigned long long * instanceParamKey /* r22 */, class ModelInstanceParamData * instanceParamData /* r23 */, class ModelPartDefinition * modelPartDefinitions /* r24 */, unsigned short modelPartCount /* r25 */, class Skeleton * skel /* r26 */, bool segmentedModel /* r27 */) {
    {
        // Range: 0x802EC59C -> 0x802EC5E4
        // Local variables
        int i; // r29

        {
            // Range: 0x802EC59C -> 0x802EC5E4
            // Local variables
            unsigned short numInstances; // r28
        }
    }
}
// Range: 0x802EC670 -> 0x802EC838
void Graphics::ModelPrototype::InitCreateModelSize(class ModelPrototype * this /* r29 */) {
    // Local variables
    int maxAlign; // r31
    int size; // r30

    {
        // Range: 0x802EC6EC -> 0x802EC748
        // Local variables
        int end; // r0
        int i; // r26

        {
            // Range: 0x802EC6EC -> 0x802EC748
            // Local variables
            int geomSize; // r0
            int geomAlign; // r1+0xC
        }
    }
    {
        // Range: 0x802EC754 -> 0x802EC7B4
        // Local variables
        int end; // r27
        int i; // r26

        {
            // Range: 0x802EC754 -> 0x802EC7B4
            // Local variables
            int rendSize; // r0
            int rendAlign; // r1+0x8
        }
    }
}
// signature: Graphics::ModelPrototype::CreateModel(Graphics::Model *, void *, int, const Math::Matrix43 &, bool, Math::Matrix43 *) const
// Range: 0x802EC838 -> 0x802ECD5C
void Graphics::ModelPrototype::CreateModel(class ModelPrototype * this /* r24 */, class Model * model /* r25 */, void * buffer /* r18 */, class Matrix43 & rootTransform /* r26 */, bool temporary /* r27 */, class Matrix43 * childTransforms /* r28 */) const {
    // Local variables
    class StackAllocator allocator; // r1+0x20
    class ModelJointBuffer * jointBuf; // r31
    class ModelMorphWeightBuffer * morphBuf; // r30
    class Renderable3DTransform * xformData; // r0
    class RefModelInstanceChildXform * refModelXformData; // r29

    {
        // Range: 0x802EC8B4 -> 0x802EC8E4
        // Local variables
        int numBytesAllocated; // r5
    }
    {
        // Range: 0x802EC8E4 -> 0x802ECB10
        // Local variables
        class Matrix43 * jointData; // r0

        {
            // Range: 0x802EC91C -> 0x802ECB10
            {
                // Range: 0x802EC92C -> 0x802EC938
                // Local variables
                unsigned int i; // r4
            }
        }
    }
    {
        // Range: 0x802ECB18 -> 0x802ECC04
        // Local variables
        int end; // r0
        int i; // r17

        {
            // Range: 0x802ECB18 -> 0x802ECC04
            // Local variables
            int geomAlign; // r1+0x1C
        }
    }
    {
        // Range: 0x802ECC10 -> 0x802ECC94
        // Local variables
        int end; // r19
        int i; // r17

        {
            // Range: 0x802ECC10 -> 0x802ECC94
            // Local variables
            int rendAlign; // r1+0x18
            int geomIndex; // r0
        }
    }
}
// signature: Graphics::ModelPrototype::InstanceParamLookup(unsigned long long, const World::ModelInstanceParamData *&) const
// Range: 0x802ECD5C -> 0x802ECE70
int Graphics::ModelPrototype::InstanceParamLookup() const {
    // Local variables
    unsigned int min; // r4
    unsigned int max; // r11
    int count; // r10

    {
        // Range: 0x802ECD6C -> 0x802ECDD0
        // Local variables
        unsigned int mid; // r12
    }
}
