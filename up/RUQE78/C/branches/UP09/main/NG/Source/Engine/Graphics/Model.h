/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Graphics\Model.h
*/
int numBitsInInt; // size: 0x4, address: 0x80773368
int numBitsInInt; // size: 0x4, address: 0x8077336C
// Range: 0x801F3720 -> 0x801F3728
int Graphics::Model::GetRenderableCount() const {
}
// Range: 0x8000BC60 -> 0x8000BC68
int Graphics::Model::GetChildTransformCount() const {
}
// Range: 0x8001C230 -> 0x8001C23C
int Graphics::Model::GetNonRefTransformCount() const {
}
// Range: 0x8000BC70 -> 0x8000BC78
unsigned short * Graphics::Model::GetRenderableTransformParents() const {
}
// signature: Graphics::Model::GetRenderable(int)
// Range: 0x8009D8E0 -> 0x8009D8F0
class Renderable3D * Graphics::Model::GetRenderable() {
}
// signature: Graphics::Model::SetRootTransform(const Math::Matrix43 &)
// Range: 0x8000B850 -> 0x8000BB7C
void Graphics::Model::SetRootTransform() {
}
// signature: Graphics::Model::SetChildTransform(int, const Math::Matrix43 &)
// Range: 0x8000C0A0 -> 0x8000C174
void Graphics::Model::SetChildTransform() {
}
// signature: Graphics::Model::SetTransform(int, const Math::Matrix43 &)
// Range: 0x8000BC90 -> 0x8000C094
void Graphics::Model::SetTransform() {
}
// Range: 0x80039620 -> 0x800396C8
void Graphics::Model::Show(class Model * this /* r27 */, class Scene * scene /* r28 */) {
    {
        // Range: 0x80039630 -> 0x80039630
        // Local variables
        int i; // r29
    }
}
// Range: 0x802DF214 -> 0x802DF294
void Graphics::Model::AttachTemporaryRenderables(class Model * this /* r25 */, void (* detachCB)(class Node * node) /* r26 */) {
    {
        // Range: 0x802DF22C -> 0x802DF234
        // Local variables
        int end; // r27
        int i; // r28
    }
}
// Range: 0x802DF294 -> 0x802DF300
void Graphics::Model::AttachRenderables(class Model * this /* r27 */) {
    {
        // Range: 0x802DF2A8 -> 0x802DF2B0
        // Local variables
        int end; // r28
        int i; // r29
    }
}
// Range: 0x802DE784 -> 0x802DF1FC
void Graphics::Model::CommitWorldTransformDetached(class Model * this /* r25 */) {
    // Local variables
    bool multipleXformAccess; // r19
    class Renderable3DTransform * xformData; // r28

    {
        // Range: 0x802DE7E8 -> 0x802DE804
        // Local variables
        class Renderable3DTransform * xformData; // r9
    }
    {
        // Range: 0x802DEA20 -> 0x802DEB98
        // Local variables
        class Renderable3DTransform * xformData; // r21

        {
            // Range: 0x802DEA30 -> 0x802DEB88
            // Local variables
            int end; // r23
            int transformIndex; // r22

            {
                // Range: 0x802DEA30 -> 0x802DEB88
                // Local variables
                int parent; // r4
                int currentDirtyBitInIntMask; // r7
                int currentDirtyIntIndex; // r9
                int childTransformIndex; // r0
            }
        }
    }
    {
        // Range: 0x802DEB9C -> 0x802DED40
        // Local variables
        int firstNonRefTransformIndex; // r17

        {
            // Range: 0x802DEBA8 -> 0x802DED2C
            // Local variables
            int dirtyRemainingCount; // r22
            int end; // r21
            int transformIndex; // r18

            {
                // Range: 0x802DEBA8 -> 0x802DED2C
                // Local variables
                class RefModelInstanceChildXform & currentRefChildXform; // r23
                class Renderable3DTransform * parentTransform; // r3
                int parentTransformIndex; // r8
                int currentDirtyBitInIntMask; // r6
                int currentDirtyIntIndex; // r5
                int childTransformIndex; // r0

                {
                    // Range: 0x802DEBAC -> 0x802DEBAC
                    // Local variables
                    class RefModelInstanceChildXform & parentRefChildXform; // r0
                }
            }
        }
    }
    {
        // Range: 0x802DED40 -> 0x802DF0C4
        // Local variables
        int notIdentity; // r0

        {
            // Range: 0x802DEDD0 -> 0x802DF0B8
            // Local variables
            int end; // r26
            int i; // r27

            {
                // Range: 0x802DEDD0 -> 0x802DF0B8
                // Local variables
                int refTransformIndex; // r5
                int transformIndex; // r4
            }
        }
    }

    // References
    // -> class Renderable3DTransform g_identity;
    // -> unsigned int updateFrameNumber;
}
// Range: 0x8001ABE0 -> 0x8001B540
void Graphics::Model::CommitWorldTransformAttached(class Model * this /* r31 */) {
    // Local variables
    class Renderable3DTransform * xformData; // r21
    int notIdentity; // r0

    {
        // Range: 0x8001AD48 -> 0x8001AFB8
        // Local variables
        class Renderable3DTransform * xformData; // r23

        {
            // Range: 0x8001AD60 -> 0x8001AFAC
            // Local variables
            int end; // r29
            int transformIndex; // r28

            {
                // Range: 0x8001AD60 -> 0x8001AFAC
                // Local variables
                int parent; // r3
                int currentDirtyBitInIntMask; // r6
                int currentDirtyIntIndex; // r8
                int childTransformIndex; // r0
            }
        }
    }
    {
        // Range: 0x8001AFBC -> 0x8001B0D4
        // Local variables
        class Renderable3DTransform * xformData; // r4
    }
    {
        // Range: 0x8001B0D8 -> 0x8001B270
        // Local variables
        int firstNonRefTransformIndex; // r22

        {
            // Range: 0x8001B0E4 -> 0x8001B25C
            // Local variables
            int dirtyRemainingCount; // r28
            int end; // r27
            int transformIndex; // r23

            {
                // Range: 0x8001B0E4 -> 0x8001B25C
                // Local variables
                class RefModelInstanceChildXform & currentRefChildXform; // r29
                class Renderable3DTransform * parentTransform; // r3
                int parentTransformIndex; // r7
                int currentDirtyBitInIntMask; // r5
                int currentDirtyIntIndex; // r4
                int childTransformIndex; // r0
            }
        }
    }
    {
        // Range: 0x8001B2FC -> 0x8001B40C
        // Local variables
        int end; // r19
        int i; // r20

        {
            // Range: 0x8001B2FC -> 0x8001B40C
            // Local variables
            int refTransformIndex; // r5
            int transformIndex; // r4
        }
    }

    // References
    // -> class Renderable3DTransform g_identity;
}
// Range: 0x802DF1FC -> 0x802DF214
void Graphics::Model::InvalidateUpdateFrame() {
    // References
    // -> unsigned int updateFrameNumber;
}
// Range: 0x8000BB90 -> 0x8000BBB0
bool Graphics::Model::JointsUpdatedThisFrame() {
    // References
    // -> unsigned int updateFrameNumber;
}
// signature: Graphics::Model::NextJointMatrices(bool &)
// Range: 0x8000BBB0 -> 0x8000BBF4
class Matrix43 * Graphics::Model::NextJointMatrices() {
    // References
    // -> unsigned int updateFrameNumber;
}
// Range: 0x8000CA10 -> 0x8000CA1C
class Matrix43 * Graphics::Model::GetJointMatrices() const {
}
// signature: Graphics::Model::NextMorphWeights(bool &)
// Range: 0x8001C1E0 -> 0x8001C224
float * Graphics::Model::NextMorphWeights() {
    // References
    // -> unsigned int updateFrameNumber;
}
