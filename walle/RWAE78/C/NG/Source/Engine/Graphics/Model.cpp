/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Graphics\Model.cpp
*/
// signature: Graphics::Model::Create(const Graphics::ModelPrototype *, Graphics::Geometry *const *, Graphics::Renderable3D *const *, const Math::Matrix43 &, Graphics::ModelXformBuffer *, Graphics::ModelJointBuffer *, Math::Matrix43 *)
// Range: 0x80254B6C -> 0x80254CFC
void Graphics::Model::Create() {
    {
        // Range: 0x80254B94 -> 0x80254B94
        // Local variables
        int i; // r29
    }
}
// Range: 0x80254CFC -> 0x80254DB8
void Graphics::Model::Destroy(class Model * this /* r25 */) {
    // Local variables
    int rendCount; // r0
    class Builder * * builders; // r0

    {
        // Range: 0x80254D10 -> 0x80254D5C
        // Local variables
        int i; // r26
    }
    {
        // Range: 0x80254D68 -> 0x80254D74
        // Local variables
        int end; // r0
        int i; // r26
    }
}
// Range: 0x80254DB8 -> 0x80254DBC
void Graphics::Model::DestroyTemporary() {
}
// Range: 0x80254DBC -> 0x8025526C
void Graphics::Model::CalcWorldChildTransforms(class Model * this /* r25 */, class Renderable3DTransform * out /* r26 */) const {
    {
        // Range: 0x80254FF0 -> 0x802551FC
        // Local variables
        int end; // r27
        int i; // r28
    }
}
// Range: 0x8025548C -> 0x80255498
unsigned short Graphics::Model::GetPartCount() const {
}
// signature: Graphics::Model::ShowPart(Graphics::Scene *, unsigned int)
// Range: 0x80255498 -> 0x80255590
void Graphics::Model::ShowPart(class Model * this /* r30 */, class Scene * scene /* r31 */) {
    // Local variables
    unsigned short modelPartCount; // r0

    {
        // Range: 0x802554BC -> 0x8025557C
        // Local variables
        int i; // r6

        {
            // Range: 0x802554D8 -> 0x80255574
            // Local variables
            int rendStartIndex; // r0
            int j; // r25
        }
    }
}
// signature: Graphics::Model::HidePart(Graphics::Scene *, unsigned int)
// Range: 0x80255590 -> 0x8025568C
void Graphics::Model::HidePart(class Model * this /* r29 */, class Scene * scene /* r30 */) {
    // Local variables
    unsigned short modelPartCount; // r0

    {
        // Range: 0x802555B4 -> 0x80255678
        // Local variables
        int i; // r6

        {
            // Range: 0x802555D0 -> 0x80255670
            // Local variables
            int rendStartIndex; // r0
            int j; // r31
        }
    }
}
// Range: 0x8025568C -> 0x80255748
void Graphics::Model::AmendLODScale(class Model * this /* r28 */, float lodScale /* f31 */) {
    {
        // Range: 0x802556A8 -> 0x80255714
        // Local variables
        int i; // r29
    }
}
