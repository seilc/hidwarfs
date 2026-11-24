/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Graphics\Skeleton.cpp
*/
// signature: Graphics::Skeleton::Create(const Graphics::Skeleton::EvaluatorInfo *, int, const Graphics::Skeleton::EvaluatorCallback *, const Graphics::Skeleton::GroupNode *, int, const Graphics::Skeleton::SkinCluster *, int, int, const signed char *)
// Range: 0x80270214 -> 0x8027027C
void Graphics::Skeleton::Create(int skinJointTotal /* r31 */, signed char * transformToGroupMap /* r12 */) {
}
// signature: Graphics::Skeleton::Evaluate(Math::Matrix43 *, Math::Matrix43 *, Math::Matrix33 *, const Animate::ComboStream *, float, bool, const bool *) const
// Range: 0x8027027C -> 0x8027103C
void Graphics::Skeleton::Evaluate(class Skeleton * this /* r1+0x8 */, class Matrix43 * groupMat /* r1+0xC */, class Matrix43 * skinMat /* r1+0x10 */, class Matrix33 * descaleSkinMat /* r1+0x14 */, class ComboStream * comboStream /* r14 */, float time /* f27 */, bool needScale /* r1+0x18 */) const {
    // Local variables
    class Vector * evalScale; // r1+0x2EC

    {
        // Range: 0x80270488 -> 0x80270B6C
        // Local variables
        int jointOffset; // r16
        int i; // r1+0x2E8

        {
            // Range: 0x80270488 -> 0x80270B6C
            // Local variables
            int sectionCount; // r1+0x2DC
            unsigned char * parentIndices; // r1+0x2E0
            class Matrix43 * mat; // r15
            class SkinCluster * skin; // r1+0x2E4

            {
                // Range: 0x80270488 -> 0x80270B44
                // Local variables
                int j; // r1+0x2D8

                {
                    // Range: 0x80270488 -> 0x80270B44
                    // Local variables
                    int sectionSize; // r14
                    int sectionStart; // r0
                    class EvaluatorSkinSection * section; // r3
                }
            }
        }
    }
    {
        // Range: 0x80270B8C -> 0x80270B8C
        // Local variables
        int i; // r24

        {
            // Range: 0x80270B8C -> 0x80270B8C
            // Local variables
            class Matrix43 mat; // r1+0x2A0
            int parent; // r25
            int evalIndex; // r26
            class GroupNode * group; // r3
        }
    }

    // References
    // -> class Vector4 vec4OneZ;
    // -> class Vector4 vec4OneY;
    // -> class Vector4 vec4OneX;
    // -> class Vector4 vec4Zero;
    // -> static class Matrix43 _matIdentity;
}
// Range: 0x802713A8 -> 0x802716BC
void Graphics::Skeleton::Evaluate(class Skeleton * this /* r25 */, class Model * model /* r26 */, class ComboStream * comboStream /* r27 */, float time /* f31 */) const {
    // Local variables
    bool bufferSwap; // r0
    int transformCount; // r3

    {
        // Range: 0x802715B8 -> 0x8027165C
        // Local variables
        int i; // r8

        {
            // Range: 0x802715B8 -> 0x8027165C
            // Local variables
            int groupIndex; // r3
        }
    }

    // References
    // -> unsigned int updateFrameNumber;
}
// Range: 0x802716BC -> 0x8027172C
void Graphics::Skeleton::ApplyInverseBind(class Matrix43 * skinMat /* r29 */) const {
    // Local variables
    class SkinCluster * skin; // r31
    class SkinCluster * skinEnd; // r30
}
// signature: Graphics::Skeleton::AmendSkinMatrices(Math::Matrix43 *, Graphics::Model *) const
// Range: 0x8027172C -> 0x80271830
void Graphics::Skeleton::AmendSkinMatrices() const {
    // Local variables
    class SkinGeometry * * geoms; // r10
}
