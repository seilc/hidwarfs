/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\Model.cpp
*/
int numBitsInInt; // size: 0x4, address: 0x80692D84
// signature: Graphics::Model::Create(const Graphics::ModelPrototype *, Graphics::Geometry *const *, Graphics::Renderable3D *const *, const Math::Matrix43 &, Graphics::ModelXformBuffer *, Graphics::RefModelInstanceChildXform *, Graphics::ModelJointBuffer *, Graphics::ModelMorphWeightBuffer *, unsigned int *, Math::Matrix43 *)
// Range: 0x801C7500 -> 0x801C7618
void Graphics::Model::Create(class Model * this /* r21 */, class ModelXformBuffer * xformBuf /* r22 */, class RefModelInstanceChildXform * refModelInstanceChildXforms /* r23 */, class ModelJointBuffer * jointBuf /* r24 */, class ModelMorphWeightBuffer * morphBuf /* r25 */, unsigned int * dirtyTransformBits /* r26 */, class Matrix43 * childTransforms /* r27 */) {
    // Local variables
    int renderableCount; // r0

    {
        // Range: 0x801C7550 -> 0x801C7574
        // Local variables
        int i; // r0
    }
}
// Range: 0x801C7620 -> 0x801C76DC
void Graphics::Model::Destroy(class Model * this /* r24 */) {
    // Local variables
    int rendCount; // r28
    class Builder * * builders; // r27
    unsigned short * rendGeomMap; // r26

    {
        // Range: 0x801C7634 -> 0x801C7690
        // Local variables
        int i; // r25
    }
    {
        // Range: 0x801C7690 -> 0x801C76C8
        // Local variables
        int end; // r0
        int i; // r25
    }
}
// Range: 0x801C76E0 -> 0x801C78C4
void Graphics::Model::CalcWorldChildTransforms(class Model * this /* r23 */, class Matrix43 * out /* r24 */) const {
    // Local variables
    int numNonRefTransforms; // r0

    {
        // Range: 0x801C7708 -> 0x801C77DC
        // Local variables
        int end; // r0
        int i; // r29

        {
            // Range: 0x801C7708 -> 0x801C77DC
            // Local variables
            int parent; // r27
            int currentDirtyBitInIntMask; // r25
            int currentDirtyIntIndex; // r28
            int transformIndex; // r5
        }
    }
    {
        // Range: 0x801C77DC -> 0x801C78B0
        // Local variables
        int end; // r28
        int i; // r27

        {
            // Range: 0x801C77DC -> 0x801C78B0
            // Local variables
            int parent; // r25
            int currentDirtyBitInIntMask; // r26
            int currentDirtyIntIndex; // r29
            int transformIndex; // r5
        }
    }
}
// Range: 0x801C78D0 -> 0x801C78DC
unsigned short Graphics::Model::GetPartCount() const {
}
// signature: Graphics::Model::ShowPart(Graphics::Scene *, unsigned int)
// Range: 0x801C78E0 -> 0x801C79D4
void Graphics::Model::ShowPart(class Model * this /* r27 */, class Scene * scene /* r28 */) {
    // Local variables
    class ModelPartDefinition * modelParts; // r0
    unsigned short modelPartCount; // r0

    {
        // Range: 0x801C7904 -> 0x801C79C0
        // Local variables
        int i; // r0

        {
            // Range: 0x801C791C -> 0x801C79C0
            // Local variables
            int j; // r29
        }
    }
}
// signature: Graphics::Model::HidePart(Graphics::Scene *, unsigned int)
// Range: 0x801C79E0 -> 0x801C7AD8
void Graphics::Model::HidePart(class Model * this /* r27 */, class Scene * scene /* r28 */) {
    // Local variables
    class ModelPartDefinition * modelParts; // r0
    unsigned short modelPartCount; // r0

    {
        // Range: 0x801C7A04 -> 0x801C7AC4
        // Local variables
        int i; // r0

        {
            // Range: 0x801C7A1C -> 0x801C7AC4
            // Local variables
            int j; // r29
        }
    }
}
// Range: 0x801C7AE0 -> 0x801C7B64
void Graphics::Model::AmendLODScale(class Model * this /* r29 */, float lodScale /* f31 */) {
    {
        // Range: 0x801C7AFC -> 0x801C7B44
        // Local variables
        int i; // r30
    }
}
// Range: 0x801C7BC0 -> 0x801C7C2C
void Graphics::Model::DisableLOD(class Model * this /* r27 */) {
    {
        // Range: 0x801C7BD4 -> 0x801C7C14
        // Local variables
        int i; // r28
    }
}
