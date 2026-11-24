/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WADSpeed.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\Renderable3D.h
*/
// Range: 0x800121E0 -> 0x80012294
void Graphics::Renderable3DTransform::RefreshScale() {
    // Local variables
    float col0xy; // f0
    float col1xy; // f1
    float col2xy; // f1
    float col0z; // f2
    float col1z; // f3
    float col2z; // f3
    void * matPtr; // r0
    float epsilon; // f4
    float c_half; // f5
    float c_three; // f6
    float rsqrt; // f1
    float nwork0; // f3
    float nwork1; // f4
}
// Range: 0x801E4190 -> 0x801E41EC
void * Graphics::Renderable3DTransform::Renderable3DTransform(class Renderable3DTransform * this /* r31 */) {
    // References
    // -> static class Matrix43 _matIdentity;
}
// signature: Graphics::Renderable3D::SetProjectShadowCast(void *)
// Range: 0x801BEF70 -> 0x801BEF78
void Graphics::Renderable3D::SetProjectShadowCast() {
}
// signature: Graphics::Renderable3D::SetProjectShadowReceive(void *)
// Range: 0x80214CC0 -> 0x80214CC8
void Graphics::Renderable3D::SetProjectShadowReceive() {
}
// Range: 0x801C8CF0 -> 0x801C8D30
void * Graphics::Renderable3D::Renderable3D(class Renderable3D * this /* r31 */) {
    // References
    // -> struct {} __vt__Q28Graphics12Renderable3D;
}
// Range: 0x80051700 -> 0x80051750
void * Graphics::Renderable3D::~Renderable3D(class Renderable3D * this /* r30 */) {
}
// signature: Graphics::Renderable3D::SetTransform(Graphics::Renderable3DTransform *, bool)
// Range: 0x80012320 -> 0x80012478
void Graphics::Renderable3D::SetTransform(class Renderable3D * this /* r29 */, class Renderable3DTransform * transform /* r30 */) {
    // References
    // -> class Renderable3DTransform g_identity;
}
// signature: Graphics::Renderable3D::SetTransformInternal(Graphics::Renderable3DTransform *)
// Range: 0x80012310 -> 0x80012318
void Graphics::Renderable3D::SetTransformInternal() {
}
// signature: Graphics::Renderable3D::AmendTransform(Graphics::Renderable3DTransform *, bool)
// Range: 0x800122A0 -> 0x8001230C
void Graphics::Renderable3D::AmendTransform(class Renderable3D * this /* r30 */, class Renderable3DTransform * transform /* r31 */) {
}
// signature: Graphics::Renderable3D::SetShadowCastDepth(float)
// Range: 0x80114460 -> 0x80114468
void Graphics::Renderable3D::SetShadowCastDepth() {
}
// signature: Graphics::Renderable3D::SetCameraRelative(int)
// Range: 0x80114440 -> 0x8011445C
void Graphics::Renderable3D::SetCameraRelative() {
}
// Range: 0x801D35E0 -> 0x801D3670
void Graphics::Renderable3D::ComputeViewMatrix(class Renderable3D * this /* r29 */, class ViewMatrix & objectToViewMat /* r30 */, class Viewport & viewport /* r31 */) const {
    {
        // Range: 0x801D361C -> 0x801D3658
        // Local variables
        class Matrix43 tempMat; // r1+0x8
    }
}
// Range: 0x801D3670 -> 0x801D3C2C
void Graphics::Renderable3D::ComputeObjectMatrix(class Matrix43 & mat /* r28 */, class Matrix43 & cameraMat /* r29 */, float nearClip /* f28 */, float perspScale /* f29 */, float orthoScale /* f30 */, class Matrix43 & input /* r30 */, int cameraRelativeFlags /* r31 */) {
    {
        // Range: 0x801D36DC -> 0x801D3734
        // Local variables
        float yaw; // f31
    }
    {
        // Range: 0x801D3738 -> 0x801D37E4
        // Local variables
        class Vector forward; // r1+0x218
    }
    {
        // Range: 0x801D37E8 -> 0x801D3890
        // Local variables
        class Vector forward; // r1+0x208
    }
    {
        // Range: 0x801D3894 -> 0x801D3994
        // Local variables
        float dot; // f0
        class Vector pitchAxis; // r1+0x1E8
        class Vector forward; // r1+0x1F8
    }
    {
        // Range: 0x801D3998 -> 0x801D3A38
        // Local variables
        class Vector forward; // r1+0x1D8
    }
    {
        // Range: 0x801D3A48 -> 0x801D3A7C
        // Local variables
        class Vector temp; // r1+0x1C8
    }
    {
        // Range: 0x801D3A80 -> 0x801D3AD0
        // Local variables
        class Vector vec; // r1+0x1B8
    }
    {
        // Range: 0x801D3AD4 -> 0x801D3B28
        // Local variables
        class Vector vec; // r1+0x1A8
    }
    {
        // Range: 0x801D3B90 -> 0x801D3BF4
        // Local variables
        float camScale; // f1
        float nearPoint; // f0
        class Vector scaleLockPos; // r1+0x198

        {
            // Range: 0x801D3BB4 -> 0x801D3BD0
            // Local variables
            class Vector distVec; // r1+0x188
        }
    }

    // References
    // -> class Vector4 vec4OneY;
    // -> class Vector4 vec4Zero;
}
// signature: Graphics::Renderable3D::ComputeObjectMatrix(Math::Matrix43 &, const Graphics::Viewport &) const
// Range: 0x801D3E50 -> 0x801D3E84
void Graphics::Renderable3D::ComputeObjectMatrix(class Renderable3D * this /* r7 */) const {
}
// signature: Graphics::Renderable3D::SetLightKit(const Graphics::LightKitData *)
// Range: 0x8003AB80 -> 0x8003AB88
void Graphics::Renderable3D::SetLightKit() {
}
// Range: 0x801104F0 -> 0x801105A0
void Graphics::Renderable3D::ComputeBoundSphere(class Renderable3D * this /* r30 */, class Vector4 & sphere /* r31 */) const {
}
// signature: Graphics::Renderable3D::SetProjectShadowFlag(unsigned int)
// Range: 0x801BA6F0 -> 0x801BA6F8
void Graphics::Renderable3D::SetProjectShadowFlag() {
}
// signature: Graphics::Renderable3D::AmendProjectShadowFlag(unsigned int)
// Range: 0x801BAD00 -> 0x801BAD44
void Graphics::Renderable3D::AmendProjectShadowFlag() {
}
// signature: Graphics::Renderable3D::AmendLOD(float, float)
// Range: 0x801C7B70 -> 0x801C7BB4
void Graphics::Renderable3D::AmendLOD() {
}
