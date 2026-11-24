/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Graphics\Viewport.cpp
*/
static int edgeIndices[12][2]; // size: 0x60, address: 0x806D5FD8
int pointSecCount; // size: 0x4, address: 0x808018E4
int spotSecCount; // size: 0x4, address: 0x808018E8
int pointDynCount; // size: 0x4, address: 0x808018EC
int spotDynCount; // size: 0x4, address: 0x808018F0
class LightPointSoA lightPointSec[16]; // size: 0x500, address: 0x808018F8
class LightSpotSoA lightSpotSec[16]; // size: 0xA00, address: 0x80801DF8
class LightPointSoA lightPointDyn[16]; // size: 0x500, address: 0x808027F8
class LightSpotSoA lightSpotDyn[16]; // size: 0xA00, address: 0x80802CF8
unsigned short lightSceneMasks[64]; // size: 0x80, address: 0x808036F8
// signature: Graphics::Viewport::AmendRendering(bool)
// Range: 0x80273CA4 -> 0x80273CE8
void Graphics::Viewport::AmendRendering() {
}
// signature: Graphics::Viewport::AmendCameraMatrix(const Math::Matrix43 &)
// Range: 0x80273CF0 -> 0x80273D34
void Graphics::Viewport::AmendCameraMatrix() {
}
// signature: Graphics::Viewport::AmendPerspProjection(float, float)
// Range: 0x80273D40 -> 0x80273D84
void Graphics::Viewport::AmendPerspProjection() {
}
// signature: Graphics::Viewport::AmendFOVY(float)
// Range: 0x80273E34 -> 0x80273E78
void Graphics::Viewport::AmendFOVY() {
}
// signature: Graphics::Viewport::AmendLodEnabled(bool)
// Range: 0x80273F3C -> 0x80273F80
void Graphics::Viewport::AmendLodEnabled() {
}
// signature: Graphics::Viewport::AmendZPlanes(float, float)
// Range: 0x80273F90 -> 0x80273FD4
void Graphics::Viewport::AmendZPlanes() {
}
// signature: Graphics::Viewport::AmendFogStartEnd(float, float)
// Range: 0x80273FE0 -> 0x80274024
void Graphics::Viewport::AmendFogStartEnd() {
}
// signature: Graphics::Viewport::AmendFogColor(float, float, float)
// Range: 0x80274024 -> 0x80274068
void Graphics::Viewport::AmendFogColor() {
}
// signature: Graphics::Viewport::AmendRelativeCorner(float, float, float, float)
// Range: 0x80274068 -> 0x802740AC
void Graphics::Viewport::AmendRelativeCorner() {
}
// signature: Graphics::Viewport::AmendMoBlurSettings(const Graphics::Viewport::MoBlurSettings &)
// Range: 0x802740C0 -> 0x80274104
void Graphics::Viewport::AmendMoBlurSettings() {
}
// signature: Graphics::FrustumPlanes::Init(const Graphics::ViewMatrix &, const Math::Matrix43 &)
// Range: 0x802745B0 -> 0x80274B2C
void Graphics::FrustumPlanes::Init(class FrustumPlanes * this /* r29 */, class Matrix43 * camMat /* r30 */) {
    // Local variables
    class Vector tmppos; // r1+0x8
}
// signature: Graphics::@unnamed@WAD01_cpp@::CornerISect(Math::Vector &, const Math::Vector4 &, const Math::Vector4 &, const Math::Vector4 &)
// Range: 0x80274138 -> 0x80274250
static void Graphics::@unnamed@WAD01_cpp@::CornerISect() {
    // Local variables
    float invdet; // f27
}
// Range: 0x80274250 -> 0x802745B0
void Graphics::Viewport::Refresh(class Viewport * this /* r30 */, class RenderTarget * target /* r29 */) {
    // Local variables
    class Matrix43 flipCameraMat; // r1+0x8
}
// signature: Graphics::Viewport::Start(Graphics::RenderTarget *)
// Range: 0x80274B2C -> 0x80274BC4
void Graphics::Viewport::Start(class Viewport * this /* r31 */) {
    // References
    // -> int gperf_postprocess;
    // -> class PostProcess g_PostProcess;
}
// Range: 0x80274BC4 -> 0x80274C40
void Graphics::Viewport::Finish() {
    {
        // Range: 0x80274BC4 -> 0x80274C3C
        // Local variables
        float y2; // f3
        float x2; // f2
        float y1; // f1
        float x1; // f0
    }

    // References
    // -> class PostProcess g_PostProcess;
}
// signature: Graphics::Viewport::ComputeProjectionMatrix(Graphics::ViewMatrix &) const
// Range: 0x80274C40 -> 0x80274D50
void Graphics::Viewport::ComputeProjectionMatrix() const {
}
// Range: 0x80274D50 -> 0x80274E04
void Graphics::Viewport::ConvertFovyAspectToWidthHeight(float * width /* r29 */, float * height /* r30 */, float fovy /* f29 */, float aspect /* f30 */) {
    // Local variables
    float fovsin; // f0
    float fovcos; // f0
}
// Range: 0x80274E04 -> 0x80275B18
void Graphics::Viewport::UpdateLightArrays(class Viewport * this /* r15 */, class Scene * scene /* r16 */) {
    // Local variables
    int lightArraySize; // r1+0x178
    int pointRemainder; // r8
    class LightPointSoA * psoa; // r9
    int spotRemainder; // r9
    class LightSpotSoA * ssoa; // r8

    {
        // Range: 0x80274FF8 -> 0x80275404
        // Local variables
        int end; // r18
        int i; // r19

        {
            // Range: 0x80274FF8 -> 0x80275404
            // Local variables
            class LightPointSpot * light; // r17

            {
                // Range: 0x80274FF8 -> 0x802753F4
                // Local variables
                class Vector worldPos; // r1+0xE0
                class Vector transformedPos; // r1+0xF0
                class _GXColor c; // r1+0x1C
                float atten; // f26

                {
                    // Range: 0x80274FF8 -> 0x80275000
                    // Local variables
                    class LightPointSoA * psoa; // r5
                    int pidx; // r4
                }
                {
                    // Range: 0x80275000 -> 0x802753F4
                    // Local variables
                    class Matrix33 m; // r1+0x130
                    class Vector worldDir; // r1+0xC0
                    class Vector transformedDir; // r1+0xD0
                    class LightSpotSoA * ssoa; // r5
                    int sidx; // r4
                }
            }
        }
    }
    {
        // Range: 0x80275420 -> 0x802754C8
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x802754D0 -> 0x80275594
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x80275594 -> 0x80275AAC
        // Local variables
        class LightKitData * d; // r16

        {
            // Range: 0x80275594 -> 0x80275AAC
            // Local variables
            class Vector tDir3; // r1+0x20
            class Vector tDir2; // r1+0x30
            class Vector tDir1; // r1+0x40
            class Vector tDir0; // r1+0x50
            class Vector dir3; // r1+0x60
            class Vector dir2; // r1+0x70
            class Vector dir1; // r1+0x80
            class Vector dir0; // r1+0x90
            class Matrix33 m; // r1+0x100
            float atten[4]; // r1+0xA0
            class _GXColor c[4]; // r1+0xB0
            class _GXLightObj * dirLights; // r17
        }
    }

    // References
    // -> class LightSpotSoA lightSpotSec[16];
    // -> class LightSpotSoA lightSpotDyn[16];
    // -> class LightPointSoA lightPointSec[16];
    // -> class LightPointSoA lightPointDyn[16];
    // -> unsigned short lightSceneMasks[64];
    // -> class BuildBuffer g_renderBuildBuffer;
    // -> class LightKitManager * g_instance;
    // -> int spotDynCount;
    // -> int pointDynCount;
    // -> int spotSecCount;
    // -> int pointSecCount;
    // -> class LightSectorManager g_lightSectorManager;
}
// Range: 0x80275B18 -> 0x80276648
bool Graphics::Viewport::ComputeScissorAABB(class Viewport * this /* r21 */, int * result /* r22 */, class BroadBound * bound /* r23 */, class Vector * frustCorners /* r24 */) const {
    // Local variables
    class Vector tmp; // r1+0x68
    class Vector criticalMin; // r1+0x58
    class Vector criticalMax; // r1+0x48
    class Vector boxCorner[8]; // r1+0xB8
    int boxOutside[8]; // r1+0x98
    int boxOr; // r19
    int boxAnd; // r28

    {
        // Range: 0x80275D80 -> 0x80275E14
        // Local variables
        int i; // r29

        {
            // Range: 0x80275D80 -> 0x80275E14
            // Local variables
            int boxTest; // r18
            int outsideMask; // r30

            {
                // Range: 0x80275D94 -> 0x80275DBC
                // Local variables
                int j; // r17

                {
                    // Range: 0x80275D94 -> 0x80275DBC
                    // Local variables
                    float dot; // f0
                }
            }
        }
    }
    {
        // Range: 0x80275E3C -> 0x8027642C
        // Local variables
        int frustInside; // r18
        int frustAnd; // r17
        int frustOutside[8]; // r1+0x78

        {
            // Range: 0x80275E44 -> 0x80275FFC
            // Local variables
            int i; // r29

            {
                // Range: 0x80275E44 -> 0x80275FFC
                // Local variables
                int edgeOr; // r30
                int corner1; // r18
                int corner0; // r17

                {
                    // Range: 0x80275E44 -> 0x80275FFC
                    // Local variables
                    bool blerp; // r28
                    bool alerp; // r19
                    int frustMask; // r18
                    int j; // r17
                    class Vector b; // r1+0x28
                    class Vector a; // r1+0x38

                    {
                        // Range: 0x80275E44 -> 0x80275F6C
                        // Local variables
                        float dotB; // f0
                        float dotA; // f29
                    }
                }
            }
        }
        {
            // Range: 0x8027601C -> 0x8027612C
            // Local variables
            int i; // r19

            {
                // Range: 0x8027601C -> 0x8027612C
                // Local variables
                int frustTest; // r27
            }
        }
        {
            // Range: 0x80276184 -> 0x802763FC
            // Local variables
            int i; // r28

            {
                // Range: 0x80276184 -> 0x802763FC
                // Local variables
                int edgeOr; // r26
                int corner1; // r27
                int corner0; // r17

                {
                    // Range: 0x80276184 -> 0x802763FC
                    // Local variables
                    int j; // r17
                    bool blerp; // r25
                    bool alerp; // r27
                    class Vector b; // r1+0x8
                    class Vector a; // r1+0x18

                    {
                        // Range: 0x80276184 -> 0x80276184
                        // Local variables
                        float dotB; // f0
                        float dotA; // f29
                    }
                    {
                        // Range: 0x80276184 -> 0x80276378
                        // Local variables
                        float dotB; // f0
                        float dotA; // f29
                    }
                }
            }
        }
    }

    // References
    // -> static int edgeIndices[12][2];
}
