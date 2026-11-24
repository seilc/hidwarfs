/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Graphics\Model.cpp
*/
// signature: Graphics::Model::Create(const Graphics::ModelPrototype *, Graphics::Geometry *const *, Graphics::Renderable3D *const *, const Math::Matrix43 &, Graphics::ModelXformBuffer *, Graphics::RefModelInstanceChildXform *, Graphics::ModelJointBuffer *, Graphics::ModelMorphWeightBuffer *, unsigned int *, Math::Matrix43 *)
// Range: 0x802EBB80 -> 0x802EBE64
void Graphics::Model::Create(class Model * this /* r31 */, class ModelMorphWeightBuffer * morphBuf /* r15 */, unsigned int * dirtyTransformBits /* r16 */, class Matrix43 * childTransforms /* r17 */) {
    {
        // Range: 0x802EBBC8 -> 0x802EBBC8
        // Local variables
        int i; // r12
    }
}
// Range: 0x802EBE64 -> 0x802EBF20
void Graphics::Model::Destroy(class Model * this /* r25 */) {
    // Local variables
    int rendCount; // r0
    class Builder * * builders; // r0

    {
        // Range: 0x802EBE78 -> 0x802EBEC4
        // Local variables
        int i; // r26
    }
    {
        // Range: 0x802EBED0 -> 0x802EBEDC
        // Local variables
        int end; // r0
        int i; // r26
    }
}
// Range: 0x802EBF20 -> 0x802EC21C
void Graphics::Model::CalcWorldChildTransforms(class Model * this /* r24 */, class Matrix43 * out /* r25 */) const {
    {
        // Range: 0x802EBF48 -> 0x802EC0C4
        // Local variables
        int end; // r0
        int i; // r27

        {
            // Range: 0x802EBF48 -> 0x802EC0C4
            // Local variables
            int parent; // r0
            int currentDirtyBitInIntMask; // r5
            int currentDirtyIntIndex; // r8
            int transformIndex; // r6
        }
    }
    {
        // Range: 0x802EC0D4 -> 0x802EC1FC
        // Local variables
        int end; // r26
        int i; // r27

        {
            // Range: 0x802EC0D4 -> 0x802EC1FC
            // Local variables
            int parent; // r0
            int currentDirtyBitInIntMask; // r5
            int currentDirtyIntIndex; // r8
            int transformIndex; // r6

            {
                // Range: 0x802EC154 -> 0x802EC1FC
                // Local variables
                class RefModelInstanceChildXform & currentRefChildXform; // r6
            }
        }
    }
}
// Range: 0x802EC21C -> 0x802EC228
unsigned short Graphics::Model::GetPartCount() const {
}
// signature: Graphics::Model::ShowPart(Graphics::Scene *, unsigned int)
// Range: 0x802EC228 -> 0x802EC32C
void Graphics::Model::ShowPart(class Model * this /* r29 */, class Scene * scene /* r30 */) {
    // Local variables
    unsigned short modelPartCount; // r0

    {
        // Range: 0x802EC24C -> 0x802EC318
        // Local variables
        int i; // r6

        {
            // Range: 0x802EC268 -> 0x802EC310
            // Local variables
            int rendStartIndex; // r0
            int j; // r31
        }
    }
}
// signature: Graphics::Model::HidePart(Graphics::Scene *, unsigned int)
// Range: 0x802EC32C -> 0x802EC434
void Graphics::Model::HidePart(class Model * this /* r29 */, class Scene * scene /* r30 */) {
    // Local variables
    unsigned short modelPartCount; // r0

    {
        // Range: 0x802EC350 -> 0x802EC420
        // Local variables
        int i; // r6

        {
            // Range: 0x802EC36C -> 0x802EC418
            // Local variables
            int rendStartIndex; // r0
            int j; // r31
        }
    }
}
// Range: 0x802EC434 -> 0x802EC4F0
void Graphics::Model::AmendLODScale(class Model * this /* r28 */, float lodScale /* f31 */) {
    {
        // Range: 0x802EC450 -> 0x802EC4BC
        // Local variables
        int i; // r29
    }
}
// Range: 0x802EC4F0 -> 0x802EC584
void Graphics::Model::DisableLOD(class Model * this /* r26 */) {
    {
        // Range: 0x802EC504 -> 0x802EC560
        // Local variables
        int i; // r27
    }
}
