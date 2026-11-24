/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Graphics\Viewport.cpp
*/
static int edgeIndices[12][2]; // size: 0x60, address: 0x80787CE0
int pointSecCount; // size: 0x4, address: 0x80848E78
int spotSecCount; // size: 0x4, address: 0x80848E7C
int pointDynCount; // size: 0x4, address: 0x80848E80
int spotDynCount; // size: 0x4, address: 0x80848E84
class LightPointSoA lightPointSec[16]; // size: 0x500, address: 0x80848E88
class LightSpotSoA lightSpotSec[16]; // size: 0xA00, address: 0x80849388
class LightPointSoA lightPointDyn[16]; // size: 0x500, address: 0x80849D88
class LightSpotSoA lightSpotDyn[16]; // size: 0xA00, address: 0x8084A288
unsigned short lightSceneMasks[64]; // size: 0x80, address: 0x8084AC88
// signature: Graphics::Viewport::AmendRendering(bool)
// Range: 0x80304EE0 -> 0x80304F24
void Graphics::Viewport::AmendRendering() {
}
// signature: Graphics::Viewport::AmendCameraMatrix(const Math::Matrix43 &)
// Range: 0x80304F2C -> 0x80304F70
void Graphics::Viewport::AmendCameraMatrix() {
}
// signature: Graphics::Viewport::AmendPerspProjection(float, float)
// Range: 0x80304F7C -> 0x80304FC0
void Graphics::Viewport::AmendPerspProjection() {
}
// signature: Graphics::Viewport::AmendFOVY(float)
// Range: 0x80305070 -> 0x803050B4
void Graphics::Viewport::AmendFOVY() {
}
// signature: Graphics::Viewport::AmendLodEnabled(bool)
// Range: 0x80305174 -> 0x803051B8
void Graphics::Viewport::AmendLodEnabled() {
}
// signature: Graphics::Viewport::AmendZPlanes(float, float)
// Range: 0x803051C8 -> 0x8030520C
void Graphics::Viewport::AmendZPlanes() {
}
// signature: Graphics::Viewport::AmendFogStartEnd(float, float, unsigned int)
// Range: 0x80305218 -> 0x8030525C
void Graphics::Viewport::AmendFogStartEnd() {
}
// signature: Graphics::Viewport::AmendFogColor(float, float, float)
// Range: 0x80305548 -> 0x8030558C
void Graphics::Viewport::AmendFogColor() {
}
// signature: Graphics::Viewport::AmendRelativeCorner(float, float, float, float)
// Range: 0x803055A8 -> 0x803055EC
void Graphics::Viewport::AmendRelativeCorner() {
}
// signature: Graphics::Viewport::AmendMoBlurSettings(const Graphics::Viewport::MoBlurSettings &)
// Range: 0x80305600 -> 0x80305644
void Graphics::Viewport::AmendMoBlurSettings() {
}
// signature: Graphics::@unnamed@WAD01_cpp@::CornerISect(Math::Vector &, const Math::Vector4 &, const Math::Vector4 &, const Math::Vector4 &)
// Range: 0x80305678 -> 0x80305790
static void Graphics::@unnamed@WAD01_cpp@::CornerISect() {
    // Local variables
    float invdet; // f27
}
// Range: 0x80305790 -> 0x80305864
void Graphics::FrustumPlanes::GetCorners(class FrustumPlanes * this /* r30 */, class Vector * corners /* r31 */) const {
}
// signature: Graphics::Viewport::Refresh(Graphics::RenderTarget *)
// Range: 0x80305864 -> 0x803060E8
void Graphics::Viewport::Refresh(class Viewport * this /* r30 */) {
}
// signature: Graphics::Viewport::Start(Graphics::RenderTarget *)
// Range: 0x803060E8 -> 0x80306190
void Graphics::Viewport::Start(class Viewport * this /* r31 */) {
}
// Range: 0x80306190 -> 0x8030620C
void Graphics::Viewport::Finish() {
    {
        // Range: 0x80306190 -> 0x80306208
        // Local variables
        float y2; // f3
        float x2; // f2
        float y1; // f1
        float x1; // f0
    }

    // References
    // -> class PostProcess g_PostProcess;
}
// signature: Graphics::Viewport::ComputeCameraAndProjectionMatrix(Graphics::ViewMatrix &, Math::Matrix43 &, const Math::Matrix43 &, const Graphics::ViewMatrix &)
// Range: 0x8030620C -> 0x80306780
void Graphics::Viewport::ComputeCameraAndProjectionMatrix(class ViewMatrix & camProjMat /* r29 */, class Matrix43 & invCameraMat /* r30 */, class ViewMatrix & projMat /* r31 */) {
    // Local variables
    class Matrix43 flipCameraMat; // r1+0x118

    // References
    // -> class Vector4 vec4OneW;
    // -> static class Matrix43 _matIdentity;
}
// Range: 0x80306780 -> 0x80306834
void Graphics::Viewport::ConvertFovyAspectToWidthHeight(float & width /* r29 */, float & height /* r30 */, float fovy /* f29 */, float aspect /* f30 */) {
    // Local variables
    float fovsin; // f0
    float fovcos; // f0
}
// Range: 0x80306834 -> 0x80307374
void Graphics::Viewport::UpdateLightArrays(class Viewport * this /* r15 */, class Scene * scene /* r16 */) {
    // Local variables
    int lightArraySize; // r1+0x130
    int pointRemainder; // r8
    class LightPointSoA * psoa; // r9
    int spotRemainder; // r9
    class LightSpotSoA * ssoa; // r8

    {
        // Range: 0x80306A50 -> 0x80306E7C
        // Local variables
        int end; // r18
        int i; // r19

        {
            // Range: 0x80306A50 -> 0x80306E7C
            // Local variables
            class LightPointSpot * light; // r17

            {
                // Range: 0x80306A50 -> 0x80306E6C
                // Local variables
                class Vector worldPos; // r1+0x98
                class Vector transformedPos; // r1+0xA8
                class _GXColor c; // r1+0x14
                float atten; // f25

                {
                    // Range: 0x80306A50 -> 0x80306A58
                    // Local variables
                    class LightPointSoA * psoa; // r5
                    int pidx; // r4
                }
                {
                    // Range: 0x80306A58 -> 0x80306E6C
                    // Local variables
                    class Matrix33 m; // r1+0xE8
                    class Vector worldDir; // r1+0x78
                    class Vector transformedDir; // r1+0x88
                    class LightSpotSoA * ssoa; // r5
                    int sidx; // r4
                }
            }
        }
    }
    {
        // Range: 0x80306E98 -> 0x80306F40
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x80306F48 -> 0x8030700C
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x8030700C -> 0x80307300
        // Local variables
        class LightKitData * d; // r14

        {
            // Range: 0x8030700C -> 0x80307300
            // Local variables
            class Vector tDir3; // r1+0x18
            class Vector tDir2; // r1+0x28
            class Vector dir3; // r1+0x38
            class Vector dir2; // r1+0x48
            float atten[4]; // r1+0x58
            class _GXColor c[4]; // r1+0x68
            class Matrix33 m; // r1+0xB8
            class _GXLightObj * dirLights; // r16
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
// Range: 0x80307374 -> 0x80307EC0
bool Graphics::Viewport::ComputeScissorAABB(class Viewport * this /* r21 */, int * result /* r22 */, class BroadBound & bound /* r23 */, class Vector * frustCorners /* r24 */) const {
    // Local variables
    class Vector tmp; // r1+0x68
    class Vector criticalMin; // r1+0x58
    class Vector criticalMax; // r1+0x48
    class Vector boxCorner[8]; // r1+0xB8
    int boxOutside[8]; // r1+0x98
    int boxOr; // r19
    int boxAnd; // r28

    {
        // Range: 0x803075DC -> 0x80307670
        // Local variables
        int i; // r29

        {
            // Range: 0x803075DC -> 0x80307670
            // Local variables
            int boxTest; // r18
            int outsideMask; // r30

            {
                // Range: 0x803075F0 -> 0x80307618
                // Local variables
                int j; // r17

                {
                    // Range: 0x803075F0 -> 0x80307618
                    // Local variables
                    float dot; // f0
                }
            }
        }
    }
    {
        // Range: 0x80307698 -> 0x80307C88
        // Local variables
        int frustInside; // r18
        int frustAnd; // r17
        int frustOutside[8]; // r1+0x78

        {
            // Range: 0x803076A0 -> 0x80307858
            // Local variables
            int i; // r29

            {
                // Range: 0x803076A0 -> 0x80307858
                // Local variables
                int edgeOr; // r30
                int corner1; // r18
                int corner0; // r17

                {
                    // Range: 0x803076A0 -> 0x80307858
                    // Local variables
                    bool blerp; // r28
                    bool alerp; // r19
                    int frustMask; // r18
                    int j; // r17
                    class Vector b; // r1+0x28
                    class Vector a; // r1+0x38

                    {
                        // Range: 0x803076A0 -> 0x803077C8
                        // Local variables
                        float dotB; // f0
                        float dotA; // f29
                    }
                }
            }
        }
        {
            // Range: 0x80307878 -> 0x80307988
            // Local variables
            int i; // r19

            {
                // Range: 0x80307878 -> 0x80307988
                // Local variables
                int frustTest; // r27
            }
        }
        {
            // Range: 0x803079E0 -> 0x80307C58
            // Local variables
            int i; // r28

            {
                // Range: 0x803079E0 -> 0x80307C58
                // Local variables
                int edgeOr; // r26
                int corner1; // r27
                int corner0; // r17

                {
                    // Range: 0x803079E0 -> 0x80307C58
                    // Local variables
                    int j; // r17
                    bool blerp; // r25
                    bool alerp; // r27
                    class Vector b; // r1+0x8
                    class Vector a; // r1+0x18

                    {
                        // Range: 0x803079E0 -> 0x803079E0
                        // Local variables
                        float dotB; // f0
                        float dotA; // f29
                    }
                    {
                        // Range: 0x803079E0 -> 0x80307BD4
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
