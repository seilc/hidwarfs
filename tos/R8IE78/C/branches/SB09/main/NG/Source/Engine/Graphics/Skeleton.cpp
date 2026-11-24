/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\Skeleton.cpp
*/
// signature: Graphics::Skeleton::Create(const Graphics::Skeleton::EvaluatorInfo *, int, const Graphics::Skeleton::EvaluatorCallback *, const Graphics::Skeleton::GroupNode *, int, const Graphics::Skeleton::SkinCluster *, int, int, const signed char *, int)
// Range: 0x801D0330 -> 0x801D039C
void Graphics::Skeleton::Create(int skinJointTotal /* r30 */, signed char * transformToGroupMap /* r31 */, int morphWeightTotal /* r12 */) {
}
// signature: Graphics::Skeleton::InitWiiVBones(Graphics::Model &) const
// Range: 0x801D03A0 -> 0x801D0414
void Graphics::Skeleton::InitWiiVBones() const {
    // Local variables
    class SkinGeometry * * geoms; // r7

    {
        // Range: 0x801D03A4 -> 0x801D0410
        // Local variables
        int i; // r8

        {
            // Range: 0x801D03A4 -> 0x801D0410
            // Local variables
            class SkinCluster & clust; // r9

            {
                // Range: 0x801D03C4 -> 0x801D0410
                // Local variables
                int j; // r10

                {
                    // Range: 0x801D03C4 -> 0x801D0410
                    // Local variables
                    class SkinGeometry * geom; // r5
                }
            }
        }
    }
}
// signature: Graphics::Skeleton::Evaluate(Math::Matrix43 *, Math::Matrix43 *, Math::Matrix33 *, const World::ComboAnimBlobAssetV2 *, float, bool, const bool *) const
// Range: 0x801D0420 -> 0x801D1204
void Graphics::Skeleton::Evaluate(class Skeleton * this /* r14 */, class Matrix43 * groupMat /* r1+0x8 */, class Matrix43 * skinMat /* r1+0xC */, class ComboAnimBlobAssetV2 * v2data /* r18 */, float time /* f26 */, bool needScale /* r19 */) const {
    // Local variables
    class ThreadStackMarkSentry sentry; // r1+0x10
    class Vector * evalTran; // r17
    class Quaternion * evalQuat; // r16
    class Vector * evalScale; // r15

    // References
    // -> float g_wiiQuatPermuteLookup[8];
}
// Range: 0x801D1230 -> 0x801D16E0
void Graphics::Skeleton::ProcessEvaluatedJoints(class Skeleton * this /* r15 */, class Matrix43 * groupMat /* r16 */, class Matrix43 * skinMat /* r17 */, class Vector * evalTran /* r18 */, class Quaternion * evalQuat /* r19 */, class Vector * evalScale /* r20 */) const {
    {
        // Range: 0x801D1254 -> 0x801D1500
        // Local variables
        int jointOffset; // r25
        int i; // r26

        {
            // Range: 0x801D1254 -> 0x801D1500
            // Local variables
            int sectionCount; // r1+0x1E8
            unsigned char * parentIndices; // r1+0x1EC
            class Matrix43 * mat; // r23
            class SkinCluster & skin; // r24

            {
                // Range: 0x801D128C -> 0x801D1500
                // Local variables
                int j; // r22

                {
                    // Range: 0x801D128C -> 0x801D1500
                    // Local variables
                    int sectionSize; // r21
                    int sectionStart; // r0
                    class EvaluatorSkinSection & section; // r3
                }
            }
        }
    }
    {
        // Range: 0x801D1500 -> 0x801D16B4
        // Local variables
        int i; // r25

        {
            // Range: 0x801D1500 -> 0x801D16B4
            // Local variables
            class Matrix43 mat; // r1+0x1B8
            int parent; // r26
            int evalIndex; // r24
            class GroupNode & group; // r4
        }
    }

    // References
    // -> class Vector4 vec4OneZ;
    // -> class Vector4 vec4OneY;
    // -> class Vector4 vec4OneX;
    // -> static class Matrix43 _matIdentity;
}
// Range: 0x801D1780 -> 0x801D1AD4
void Graphics::Skeleton::Evaluate(class Skeleton * this /* r25 */, class Model * model /* r26 */, class ComboAnimBlobAssetV2 * v2data /* r27 */, float time /* f31 */) const {
    // Local variables
    class ThreadStackMarkSentry sentry; // r1+0x8
    bool streamScale; // r0
    bool bufferSwap; // r0
    class Matrix43 * groupMat; // r28

    // References
    // -> unsigned int updateFrameNumber;
}
// Range: 0x801D1B60 -> 0x801D1C4C
void Graphics::Skeleton::SendTransformToRenderables(class Skeleton * this /* r25 */, class Model * model /* r26 */, class Matrix43 * groupMat /* r27 */, class Matrix43 * skinMat /* r28 */) const {
    // Local variables
    int transformCount; // r30

    {
        // Range: 0x801D1B80 -> 0x801D1C2C
        // Local variables
        int i; // r29

        {
            // Range: 0x801D1B80 -> 0x801D1C2C
            // Local variables
            int groupIndex; // r0
        }
    }
}
// signature: Graphics::Skeleton::StreamHasScale(bool *, const World::ComboAnimBlobAssetV2 *) const
// Range: 0x801D1C50 -> 0x801D1C74
bool Graphics::Skeleton::StreamHasScale() const {
    // Local variables
    bool scaling; // r3
}
// Range: 0x801D1C80 -> 0x801D1CE0
void Graphics::Skeleton::ApplyInverseBind(class Matrix43 * skinMat /* r29 */) const {
    // Local variables
    class SkinCluster * skin; // r31
    class SkinCluster * skinEnd; // r30
}
// signature: Graphics::Skeleton::AmendSkinMatrices(Math::Matrix43 *, Graphics::Model *) const
// Range: 0x801D1CE0 -> 0x801D1CE8
void Graphics::Skeleton::AmendSkinMatrices() const {
}
// signature: Graphics::Skeleton::AmendMorphWeights(float *, Graphics::Model *) const
// Range: 0x801D1CF0 -> 0x801D1D04
void Graphics::Skeleton::AmendMorphWeights(class Model * model /* r6 */) const {
}
// signature: Graphics::Skeleton::SetSkinMatrices(Math::Matrix43 *, Graphics::SkinGeometry *const *) const
// Range: 0x801D1D10 -> 0x801D1D7C
void Graphics::Skeleton::SetSkinMatrices() const {
    // Local variables
    class SkinCluster * skin; // r7
    class SkinCluster * skinEnd; // r8

    {
        // Range: 0x801D1D10 -> 0x801D1D78
        // Local variables
        unsigned char * geomEnd; // r11
        unsigned char * geomIt; // r10
        class Matrix43 * startMat; // r9
    }
}
// signature: Graphics::Skeleton::SetMorphWeights(float *, Graphics::SkinGeometry *const *, int) const
// Range: 0x801D1D80 -> 0x801D1DB4
void Graphics::Skeleton::SetMorphWeights() const {
    {
        // Range: 0x801D1D80 -> 0x801D1DB0
        // Local variables
        int i; // r0
    }
}
