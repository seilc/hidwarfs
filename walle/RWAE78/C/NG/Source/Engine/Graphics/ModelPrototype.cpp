/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Graphics\ModelPrototype.cpp
*/
// signature: Graphics::ModelPrototype::Create(Graphics::Builder *const *, const unsigned short *, Math::Matrix43 *, const unsigned short *, const unsigned short *, int, int, int, int, int, const unsigned long long *, const World::ModelInstanceParamData *, const World::ModelPartDefinition *, unsigned short, Graphics::Skeleton *)
// Range: 0x80255748 -> 0x802557CC
void Graphics::ModelPrototype::Create(int childTransformCount /* r27 */, int refRenderableCount /* r28 */, int instanceParamCount /* r29 */, unsigned long long * instanceParamKey /* r30 */, class ModelInstanceParamData * instanceParamData /* r31 */, class ModelPartDefinition * modelPartDefinitions /* r12 */, unsigned short modelPartCount /* r11 */, class Skeleton * skel /* r0 */) {
}
// Range: 0x802557CC -> 0x80255908
void Graphics::ModelPrototype::InitCreateModelSize(class ModelPrototype * this /* r29 */) {
    // Local variables
    int maxAlign; // r31
    int size; // r30

    {
        // Range: 0x80255818 -> 0x80255874
        // Local variables
        int end; // r0
        int i; // r26

        {
            // Range: 0x80255818 -> 0x80255874
            // Local variables
            int geomSize; // r0
            int geomAlign; // r1+0xC
        }
    }
    {
        // Range: 0x80255880 -> 0x802558E0
        // Local variables
        int end; // r27
        int i; // r26

        {
            // Range: 0x80255880 -> 0x802558E0
            // Local variables
            int rendSize; // r0
            int rendAlign; // r1+0x8
        }
    }
}
// signature: Graphics::ModelPrototype::CreateModel(Graphics::Model *, void *, int, const Math::Matrix43 &, bool, Math::Matrix43 *) const
// Range: 0x80255908 -> 0x80255B58
void Graphics::ModelPrototype::CreateModel(class ModelPrototype * this /* r29 */, class Model * model /* r30 */, class Matrix43 * rootTransform /* r31 */, bool temporary /* r20 */, class Matrix43 * childTransforms /* r19 */) const {
    // Local variables
    class StackAllocator allocator; // r1+0x10
    class ModelJointBuffer * jointBuf; // r22
    class Renderable3DTransform * xformData; // r0

    {
        // Range: 0x80255958 -> 0x80255984
        // Local variables
        class Matrix43 * jointData; // r0
    }
    {
        // Range: 0x8025598C -> 0x80255A78
        // Local variables
        int end; // r0
        int i; // r21

        {
            // Range: 0x8025598C -> 0x80255A78
            // Local variables
            int geomAlign; // r1+0xC
        }
    }
    {
        // Range: 0x80255A84 -> 0x80255B08
        // Local variables
        int end; // r20
        int i; // r21

        {
            // Range: 0x80255A84 -> 0x80255B08
            // Local variables
            int rendAlign; // r1+0x8
            int geomIndex; // r0
        }
    }
}
// signature: Graphics::ModelPrototype::InstanceParamLookup(unsigned long long, const World::ModelInstanceParamData *&) const
// Range: 0x80255B5C -> 0x80255C70
int Graphics::ModelPrototype::InstanceParamLookup() const {
    // Local variables
    unsigned int min; // r4
    unsigned int max; // r11
    int count; // r10

    {
        // Range: 0x80255B6C -> 0x80255BD0
        // Local variables
        unsigned int mid; // r12
    }
}
