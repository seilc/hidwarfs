/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\Model.h
*/
// Range: 0x801BFE20 -> 0x801BFE28
int Graphics::Model::GetChildTransformCount() const {
}
// signature: Graphics::Model::GetRenderable(int)
// Range: 0x801047E0 -> 0x801047F0
class Renderable3D * Graphics::Model::GetRenderable() {
}
// Range: 0x8000A760 -> 0x8000A80C
void Graphics::Model::SetRootTransform(class Model * this /* r29 */, class Matrix43 & mat /* r30 */) {
}
// Range: 0x801B4FF0 -> 0x801B5030
void Graphics::Model::DirtyTransformBitsClean() {
    // Local variables
    unsigned int numDirtyInts; // r0

    {
        // Range: 0x801B4FF4 -> 0x801B5020
        // Local variables
        unsigned int dirtyIntIndex; // r6
    }
}
// Range: 0x801B4F00 -> 0x801B4F48
void Graphics::Model::DirtyTransformBitsSet() {
    // Local variables
    unsigned int numDirtyInts; // r5

    {
        // Range: 0x801B4F04 -> 0x801B4F30
        // Local variables
        unsigned int dirtyIntIndex; // r0
    }
}
// signature: Graphics::Model::XformIsDirty(unsigned int) const
// Range: 0x800121B0 -> 0x800121D8
bool Graphics::Model::XformIsDirty() const {
}
// signature: Graphics::Model::XformSetDirty(unsigned int)
// Range: 0x8000A8F0 -> 0x8000A954
void Graphics::Model::XformSetDirty() {
    // Local variables
    int dirtyBitMask; // r8
}
// signature: Graphics::Model::SetChildTransform(int, const Math::Matrix43 &)
// Range: 0x8000AA10 -> 0x8000AA5C
void Graphics::Model::SetChildTransform(class Model * this /* r30 */, int index /* r31 */) {
}
// Range: 0x80039EA0 -> 0x80039F2C
class ReferenceModelEntry * Graphics::Model::GetReferenceModel(class Model * this /* r28 */, unsigned long long uid /* r30:r29 */, unsigned short & refIndex /* r31 */) {
    // Local variables
    class ReferenceModelEntry * entry; // r3
}
// Range: 0x800595F0 -> 0x80059698
void Graphics::Model::Show(class Model * this /* r27 */, class Scene * scene /* r28 */) {
    {
        // Range: 0x80059600 -> 0x80059684
        // Local variables
        int i; // r29
    }
}
// Range: 0x8001C4F0 -> 0x8001C59C
void Graphics::Model::Hide(class Model * this /* r26 */, class Scene * scene /* r27 */) {
    {
        // Range: 0x8001C500 -> 0x8001C588
        // Local variables
        int i; // r28
    }
}
// Range: 0x80011D70 -> 0x800121B0
void Graphics::Model::CommitWorldTransformAttached(class Model * this /* r31 */) {
    // Local variables
    bool rootTransformDirty; // r0
    class Renderable3DTransform * xformData; // r21
    int notIdentity; // r0
    int numNonRefChildTransforms; // r3

    {
        // Range: 0x80011DFC -> 0x80011EE0
        // Local variables
        class Renderable3DTransform * xformData; // r27

        {
            // Range: 0x80011E2C -> 0x80011EE0
            // Local variables
            int end; // r25
            int transformIndex; // r26

            {
                // Range: 0x80011E2C -> 0x80011EE0
                // Local variables
                int parent; // r21
                int currentDirtyBitInIntMask; // r22
                int currentDirtyIntIndex; // r23
                int childTransformIndex; // r24
            }
        }
    }
    {
        // Range: 0x80011EE4 -> 0x80011F0C
        // Local variables
        class Renderable3DTransform * xformData; // r19
    }
    {
        // Range: 0x80011F10 -> 0x80012004
        // Local variables
        int firstNonRefTransformIndex; // r22

        {
            // Range: 0x80011F1C -> 0x80012004
            // Local variables
            int dirtyRemainingCount; // r25
            int end; // r24
            int transformIndex; // r23

            {
                // Range: 0x80011F1C -> 0x80012004
                // Local variables
                class RefModelInstanceChildXform & currentRefChildXform; // r19
                class Renderable3DTransform * parentTransform; // r20
                int parentTransformIndex; // r4
                int currentDirtyBitInIntMask; // r30
                int currentDirtyIntIndex; // r27
                int childTransformIndex; // r26
            }
        }
    }
    {
        // Range: 0x8001209C -> 0x80012160
        // Local variables
        int end; // r20
        int i; // r19

        {
            // Range: 0x8001209C -> 0x80012160
            // Local variables
            int refTransformIndex; // r25
            int transformIndex; // r4
        }
    }

    // References
    // -> class Renderable3DTransform g_identity;
}
// signature: Graphics::Model::NextJointMatrices(bool &)
// Range: 0x8000A960 -> 0x8000A9A4
class Matrix43 * Graphics::Model::NextJointMatrices() {
    // References
    // -> unsigned int updateFrameNumber;
}
