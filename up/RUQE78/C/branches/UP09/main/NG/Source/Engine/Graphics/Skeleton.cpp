/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Graphics\Skeleton.cpp
*/
// signature: Graphics::Skeleton::Create(const Graphics::Skeleton::EvaluatorInfo *, int, const Graphics::Skeleton::EvaluatorCallback *, const Graphics::Skeleton::GroupNode *, int, const Graphics::Skeleton::SkinCluster *, int, int, const signed char *, int)
// Range: 0x80301220 -> 0x80301294
void Graphics::Skeleton::Create(int skinJointTotal /* r30 */, signed char * transformToGroupMap /* r31 */, int morphWeightTotal /* r12 */) {
}
// signature: Graphics::Skeleton::InitWiiVBones(Graphics::Model &) const
// Range: 0x80301294 -> 0x80301308
void Graphics::Skeleton::InitWiiVBones() const {
    // Local variables
    class SkinGeometry * * geoms; // r7

    {
        // Range: 0x80301298 -> 0x803012F4
        // Local variables
        int i; // r8

        {
            // Range: 0x80301298 -> 0x803012F4
            // Local variables
            class SkinCluster & clust; // r9

            {
                // Range: 0x803012B8 -> 0x803012CC
                // Local variables
                int j; // r10

                {
                    // Range: 0x803012B8 -> 0x803012CC
                    // Local variables
                    class SkinGeometry * geom; // r4
                }
            }
        }
    }
}
// signature: Graphics::Skeleton::Evaluate(Math::Matrix43 *, Math::Matrix43 *, Math::Matrix33 *, const World::ComboAnimBlobAssetV2 *, float, bool, const bool *) const
// Range: 0x80301308 -> 0x80301594
void Graphics::Skeleton::Evaluate(class Skeleton * this /* r15 */, class Matrix43 * groupMat /* r1+0x8 */, class Matrix43 * skinMat /* r16 */, class Matrix33 * descaleSkinMat /* r14 */, class ComboAnimBlobAssetV2 * v2data /* r19 */, float time /* f31 */, bool needScale /* r17 */) const {
    // Local variables
    class ThreadStackMarkSentry sentry; // r1+0xC
    class Vector * evalTran; // r29
    class Quaternion * evalQuat; // r28
    class Vector * evalScale; // r27

    {
        // Range: 0x803013AC -> 0x80301470
        // Local variables
        int jointOffset; // r25
        int i; // r26

        {
            // Range: 0x803013AC -> 0x80301470
            // Local variables
            int sectionCount; // r20
            unsigned char * parentIndices; // r21
            class Matrix33 * normMat; // r22
            class Matrix43 * mat; // r23
            class SkinCluster & skin; // r24

            {
                // Range: 0x803013E4 -> 0x80301460
                // Local variables
                int j; // r19

                {
                    // Range: 0x803013E4 -> 0x80301460
                    // Local variables
                    int sectionSize; // r18
                    int sectionStart; // r0
                    class EvaluatorSkinSection & section; // r3
                }
            }
        }
    }
    {
        // Range: 0x80301484 -> 0x8030155C
        // Local variables
        int i; // r20

        {
            // Range: 0x80301484 -> 0x8030155C
            // Local variables
            class Matrix43 mat; // r1+0x10
            int parent; // r21
            int evalIndex; // r19
            class GroupNode & group; // r4
        }
    }
}
// Range: 0x80301CD4 -> 0x803023D8
void Graphics::Skeleton::Evaluate(class Skeleton * this /* r29 */, class Model * model /* r30 */, class ComboAnimBlobAssetV2 * v2data /* r31 */, float time /* f31 */) const {
    // Local variables
    bool bufferSwap; // r0
    int transformCount; // r0

    {
        // Range: 0x80302270 -> 0x80302370
        // Local variables
        int i; // r4

        {
            // Range: 0x80302270 -> 0x80302370
            // Local variables
            int groupIndex; // r0
        }
    }

    // References
    // -> unsigned int updateFrameNumber;
}
// Range: 0x8030241C -> 0x8030248C
void Graphics::Skeleton::ApplyInverseBind(class Matrix43 * skinMat /* r29 */) const {
    // Local variables
    class SkinCluster * skin; // r31
    class SkinCluster * skinEnd; // r30
}
// signature: Graphics::Skeleton::AmendSkinMatrices(Math::Matrix43 *, Graphics::Model *) const
// Range: 0x8030248C -> 0x80302590
void Graphics::Skeleton::AmendSkinMatrices() const {
    // Local variables
    class SkinGeometry * * geoms; // r10
}
// signature: Graphics::Skeleton::AmendMorphWeights(float *, Graphics::Model *) const
// Range: 0x80302590 -> 0x8030271C
void Graphics::Skeleton::AmendMorphWeights() const {
    // Local variables
    class SkinGeometry * * geoms; // r0
}
