/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Graphics\Model.h
*/
// Range: 0x80238AD8 -> 0x80238AE0
int Graphics::Model::GetRenderableCount() const {
}
// Range: 0x8024B944 -> 0x8024B94C
int Graphics::Model::GetChildTransformCount() const {
}
// signature: Graphics::Model::GetRenderable(int)
// Range: 0x80238AE8 -> 0x80238AF8
class Renderable3D * Graphics::Model::GetRenderable() {
}
// signature: Graphics::Model::SetChildTransform(int, const Math::Matrix43 &)
// Range: 0x8024BCC0 -> 0x8024BD34
void Graphics::Model::SetChildTransform() {
}
// Range: 0x802385A0 -> 0x8023863C
void Graphics::Model::Show(class Model * this /* r27 */, class Scene * scene /* r28 */) {
    {
        // Range: 0x802385B0 -> 0x802385B0
        // Local variables
        int i; // r29
    }
}
// Range: 0x80238D74 -> 0x80238E14
void Graphics::Model::Hide(class Model * this /* r26 */, class Scene * scene /* r27 */) {
    {
        // Range: 0x80238D84 -> 0x80238D84
        // Local variables
        int i; // r28
    }
}
// Range: 0x802428F4 -> 0x80242974
void Graphics::Model::AttachTemporaryRenderables(class Model * this /* r25 */, void (* detachCB)(class Node * node) /* r26 */) {
    {
        // Range: 0x8024290C -> 0x80242914
        // Local variables
        int end; // r27
        int i; // r28
    }
}
// Range: 0x80242974 -> 0x802429E0
void Graphics::Model::AttachRenderables(class Model * this /* r27 */) {
    {
        // Range: 0x80242988 -> 0x80242990
        // Local variables
        int end; // r28
        int i; // r29
    }
}
// Range: 0x80242638 -> 0x802428DC
void Graphics::Model::CommitWorldTransformDetached(class Model * this /* r20 */) {
    // Local variables
    bool multipleXformAccess; // r21
    class Renderable3DTransform * xformData; // r23

    {
        // Range: 0x802426A8 -> 0x802428AC
        // Local variables
        int notIdentity; // r0

        {
            // Range: 0x80242734 -> 0x802428A0
            // Local variables
            int end; // r21
            int i; // r22

            {
                // Range: 0x80242734 -> 0x802428A0
                // Local variables
                int transformIndex; // r3
            }
        }
    }

    // References
    // -> class Renderable3DTransform g_identity;
    // -> unsigned int updateFrameNumber;
}
// Range: 0x802386C8 -> 0x80238AC4
void Graphics::Model::CommitWorldTransformAttached(class Model * this /* r30 */) {
    // Local variables
    class Renderable3DTransform * xformData; // r31
    int notIdentity; // r0

    {
        // Range: 0x80238A28 -> 0x80238AA0
        // Local variables
        int end; // r23
        int i; // r24

        {
            // Range: 0x80238A28 -> 0x80238AA0
            // Local variables
            int transformIndex; // r3
        }
    }

    // References
    // -> class Renderable3DTransform g_identity;
}
// Range: 0x802428DC -> 0x802428F4
void Graphics::Model::InvalidateUpdateFrame() {
    // References
    // -> unsigned int updateFrameNumber;
}
