/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\Viewport.cpp
*/
int NEARIDX; // size: 0x4, address: 0x8069322C
int TOPIDX; // size: 0x4, address: 0x80693230
int LEFTIDX; // size: 0x4, address: 0x80693234
float MYBIGNUM; // size: 0x4, address: 0x80693240
int edgeIndices[12][2]; // size: 0x60, address: 0x80693248
int pointSecCount; // size: 0x4, address: 0x807776D0
int spotSecCount; // size: 0x4, address: 0x807776D4
int pointDynCount; // size: 0x4, address: 0x807776D8
int spotDynCount; // size: 0x4, address: 0x807776DC
class LightPointSoA lightPointSec[16]; // size: 0x500, address: 0x807776E0
class LightSpotSoA lightSpotSec[16]; // size: 0xA00, address: 0x80777BE0
class LightPointSoA lightPointDyn[16]; // size: 0x500, address: 0x807785E0
class LightSpotSoA lightSpotDyn[16]; // size: 0xA00, address: 0x80778AE0
unsigned short lightSceneMasks[64]; // size: 0x80, address: 0x807794E0
// signature: Graphics::Viewport::AmendRendering(bool)
// Range: 0x801D51A0 -> 0x801D51E4
void Graphics::Viewport::AmendRendering() {
}
// signature: Graphics::Viewport::AmendCameraMatrix(const Math::Matrix43 &)
// Range: 0x801D5200 -> 0x801D5244
void Graphics::Viewport::AmendCameraMatrix() {
}
// signature: Graphics::Viewport::AmendPerspProjection(float, float)
// Range: 0x801D5260 -> 0x801D52A4
void Graphics::Viewport::AmendPerspProjection() {
}
// signature: Graphics::Viewport::AmendFOVY(float)
// Range: 0x801D5310 -> 0x801D5354
void Graphics::Viewport::AmendFOVY() {
}
// signature: Graphics::Viewport::AmendLodEnabled(bool)
// Range: 0x801D5380 -> 0x801D53C4
void Graphics::Viewport::AmendLodEnabled() {
}
// signature: Graphics::Viewport::AmendZPlanes(float, float)
// Range: 0x801D53E0 -> 0x801D5424
void Graphics::Viewport::AmendZPlanes() {
}
// signature: Graphics::Viewport::AmendFogStartEnd(float, float, unsigned int)
// Range: 0x801D5440 -> 0x801D5484
void Graphics::Viewport::AmendFogStartEnd() {
}
// signature: Graphics::Viewport::AmendFogColor(float, float, float)
// Range: 0x801D5660 -> 0x801D56A4
void Graphics::Viewport::AmendFogColor() {
}
// signature: Graphics::Viewport::AmendHeightFogStartEnd(float, float, unsigned int)
// Range: 0x801D56C0 -> 0x801D5704
void Graphics::Viewport::AmendHeightFogStartEnd() {
}
// signature: Graphics::Viewport::AmendRelativeCorner(float, float, float, float)
// Range: 0x801D5950 -> 0x801D5994
void Graphics::Viewport::AmendRelativeCorner() {
}
// signature: Graphics::Viewport::AmendMoBlurSettings(const Graphics::Viewport::MoBlurSettings &)
// Range: 0x801D59A0 -> 0x801D59E4
void Graphics::Viewport::AmendMoBlurSettings() {
}
// signature: Graphics::@unnamed@WAD01_cpp@::CornerISect(Math::Vector &, const Math::Vector4 &, const Math::Vector4 &, const Math::Vector4 &)
// Range: 0x801D5A30 -> 0x801D5B50
static void Graphics::@unnamed@WAD01_cpp@::CornerISect() {
    // Local variables
    float invdet; // f27
}
// Range: 0x801D5B50 -> 0x801D5C1C
void Graphics::FrustumPlanes::GetCorners(class FrustumPlanes * this /* r30 */, class Vector * corners /* r31 */) const {
}
// signature: Graphics::Viewport::Refresh(Graphics::RenderTarget *)
// Range: 0x801D5C20 -> 0x801D608C
void Graphics::Viewport::Refresh(class Viewport * this /* r30 */) {
}
// signature: Graphics::Viewport::Start(Graphics::RenderTarget *)
// Range: 0x801D6090 -> 0x801D6160
void Graphics::Viewport::Start(class Viewport * this /* r31 */) {
}
// Range: 0x801D6160 -> 0x801D61CC
void Graphics::Viewport::Finish(class Viewport * this /* r31 */) {
    {
        // Range: 0x801D6174 -> 0x801D61A0
        // Local variables
        float y2; // f4
        float x2; // f3
        float y1; // f2
        float x1; // f1
    }

    // References
    // -> class PostProcess g_PostProcess;
}
// signature: Graphics::Viewport::ComputeViewportRectangle(Graphics::Rect2D &, const Graphics::RenderTarget *, const float (*)[2], const float (*)[2])
// Range: 0x801D61D0 -> 0x801D62A8
void Graphics::Viewport::ComputeViewportRectangle() {
}
// signature: Graphics::Viewport::ComputeProjectionMatrix(Graphics::ViewMatrix &, const Graphics::Viewport::ProjectionMode, const float, const float, const float, const float)
// Range: 0x801D62B0 -> 0x801D62D0
void Graphics::Viewport::ComputeProjectionMatrix() {
}
// Range: 0x801D62D0 -> 0x801D6524
void Graphics::Viewport::ComputeCameraAndProjectionMatrix(class ViewMatrix & camProjMat /* r28 */, class Matrix43 & invCameraMat /* r29 */, class Matrix43 & cameraMat /* r30 */, class ViewMatrix & projMat /* r31 */) {
    // Local variables
    class Matrix43 flipCameraMat; // r1+0x118

    // References
    // -> class Vector4 vec4OneW;
    // -> static class Matrix43 _matIdentity;
}
// Range: 0x801D6530 -> 0x801D65DC
void Graphics::Viewport::ConvertFovyAspectToWidthHeight(float & width /* r29 */, float & height /* r30 */, float fovy /* f29 */, float aspect /* f30 */) {
    // Local variables
    float fovsin; // f0
    float fovcos; // f0
}
// signature: Graphics::Viewport::MakePerspMatrix(Graphics::ViewMatrix &, float, float, float, float)
// Range: 0x801D65E0 -> 0x801D66C0
void Graphics::Viewport::MakePerspMatrix(class ViewMatrix & mat /* r30 */, float h /* f29 */) {
    // Local variables
    float z0; // f31
    float z1; // f30
}
// signature: Graphics::Viewport::MakeOrthoMatrix(Graphics::ViewMatrix &, float, float, float, float)
// Range: 0x801D66C0 -> 0x801D67A4
void Graphics::Viewport::MakeOrthoMatrix(class ViewMatrix & mat /* r30 */, float h /* f29 */) {
    // Local variables
    float z0; // f31
    float z1; // f30
}
// signature: Graphics::AdjustLightColor(_GXColor &, float &, float, float, float)
// Range: 0x801D67B0 -> 0x801D6878
static void Graphics::AdjustLightColor(float r /* f2 */, float g /* f4 */, float b /* f3 */) {
    // Local variables
    float maxColorComp; // f0
    float componentScale; // f0
}
// Range: 0x801D6880 -> 0x801D6A00
void Graphics::Viewport::InitWiiLight(class Viewport * this /* r28 */, class _GXLightObj * wiiLight /* r29 */, class LightPointSpot * light /* r30 */) {
    // Local variables
    float atten; // r1+0x10
    class _GXColor c; // r1+0xC
    class Vector transformedPos; // r1+0x48
    class Vector worldPos; // r1+0x38

    {
        // Range: 0x801D6954 -> 0x801D69E8
        // Local variables
        class Matrix33 m; // r1+0x58
        class Vector worldDir; // r1+0x18
        class Vector transformedDir; // r1+0x28
    }
}
// Range: 0x801D6A30 -> 0x801D7034
void Graphics::Viewport::UpdateLightArrays(class Viewport * this /* r15 */, class Scene * scene /* r16 */) {
    // Local variables
    int lightArraySize; // r20
    int startFxLight; // r17
    int pointRemainder; // r8
    class LightPointSoA * psoa; // r9
    int spotRemainder; // r8
    class LightSpotSoA * ssoa; // r9

    {
        // Range: 0x801D6AB0 -> 0x801D6AD4
        // Local variables
        class VertexBuffer dummy; // r1+0x10
    }
    {
        // Range: 0x801D6AD4 -> 0x801D6D00
        // Local variables
        int end; // r18
        int i; // r19

        {
            // Range: 0x801D6AD4 -> 0x801D6D00
            // Local variables
            class LightPointSpot * light; // r17

            {
                // Range: 0x801D6AD4 -> 0x801D6ADC
                // Local variables
                class LightPointSoA * psoa; // r4
                int pidx; // r0
            }
            {
                // Range: 0x801D6ADC -> 0x801D6AE4
                // Local variables
                class LightSpotSoA * ssoa; // r4
                int sidx; // r0
            }
        }
    }
    {
        // Range: 0x801D6D04 -> 0x801D6D80
        // Local variables
        int end; // r19
        int i; // r18

        {
            // Range: 0x801D6D04 -> 0x801D6D80
            // Local variables
            class LightPointSpot * light; // r0
        }
    }
    {
        // Range: 0x801D6D88 -> 0x801D6E04
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x801D6E0C -> 0x801D6E98
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x801D6E98 -> 0x801D7000
        // Local variables
        class LightKitData * d; // r14

        {
            // Range: 0x801D6E98 -> 0x801D7000
            // Local variables
            class Vector tDir3; // r1+0x18
            class Vector tDir2; // r1+0x28
            class Vector dir3; // r1+0x38
            class Vector dir2; // r1+0x48
            float atten[4]; // r1+0x58
            class _GXColor c[4]; // r1+0x68
            class Matrix33 m; // r1+0x78
            class _GXLightObj * dirLights; // r16
        }
    }

    // References
    // -> unsigned short lightSceneMasks[64];
    // -> class LightSpotSoA lightSpotSec[16];
    // -> class LightSpotSoA lightSpotDyn[16];
    // -> class LightPointSoA lightPointSec[16];
    // -> class LightPointSoA lightPointDyn[16];
    // -> int spotDynCount;
    // -> int pointDynCount;
    // -> int spotSecCount;
    // -> int pointSecCount;
    // -> class LightKitManager * g_instance;
    // -> class LightSectorManager g_lightSectorManager;
}
// Range: 0x801D70C0 -> 0x801D7A5C
bool Graphics::Viewport::ComputeScissorAABB(class Viewport * this /* r15 */, int * result /* r16 */, class BroadBound & bound /* r17 */, class Vector * frustCorners /* r18 */) const {
    // Local variables
    class Vector tmp; // r1+0x68
    class Vector criticalMin; // r1+0x58
    class Vector criticalMax; // r1+0x48
    class Vector boxCorner[8]; // r1+0xB8
    int boxOutside[8]; // r1+0x98
    int boxOr; // r19
    int boxAnd; // r20

    {
        // Range: 0x801D71E8 -> 0x801D72A8
        // Local variables
        int i; // r21

        {
            // Range: 0x801D71E8 -> 0x801D72A8
            // Local variables
            int boxTest; // r23
            int outsideMask; // r22

            {
                // Range: 0x801D71E8 -> 0x801D71E8
                // Local variables
                int j; // r24

                {
                    // Range: 0x801D71E8 -> 0x801D71E8
                    // Local variables
                    float dot; // f0
                }
            }
        }
    }
    {
        // Range: 0x801D72B8 -> 0x801D7868
        // Local variables
        int frustInside; // r23
        int frustAnd; // r22
        int frustOutside[8]; // r1+0x78

        {
            // Range: 0x801D72C4 -> 0x801D74A0
            // Local variables
            int i; // r24

            {
                // Range: 0x801D72C4 -> 0x801D74A0
                // Local variables
                int edgeOr; // r23
                int corner1; // r6
                int corner0; // r5

                {
                    // Range: 0x801D72C4 -> 0x801D74A0
                    // Local variables
                    bool blerp; // r19
                    bool alerp; // r20
                    int frustMask; // r21
                    int j; // r22
                    class Vector b; // r1+0x28
                    class Vector a; // r1+0x38

                    {
                        // Range: 0x801D72C4 -> 0x801D7418
                        // Local variables
                        float dotB; // f0
                        float dotA; // f30
                    }
                }
            }
        }
        {
            // Range: 0x801D74A0 -> 0x801D7598
            // Local variables
            int i; // r24

            {
                // Range: 0x801D74A0 -> 0x801D7598
                // Local variables
                int frustTest; // r25
            }
        }
        {
            // Range: 0x801D75DC -> 0x801D7848
            // Local variables
            int i; // r24

            {
                // Range: 0x801D75DC -> 0x801D7848
                // Local variables
                int edgeOr; // r25
                int corner1; // r6
                int corner0; // r5

                {
                    // Range: 0x801D75DC -> 0x801D7848
                    // Local variables
                    int j; // r23
                    bool blerp; // r28
                    bool alerp; // r26
                    class Vector b; // r1+0x8
                    class Vector a; // r1+0x18

                    {
                        // Range: 0x801D75DC -> 0x801D75DC
                        // Local variables
                        float dotB; // f0
                        float dotA; // f3
                    }
                    {
                        // Range: 0x801D75DC -> 0x801D77C0
                        // Local variables
                        float dotB; // f0
                        float dotA; // f3
                    }
                }
            }
        }
    }

    // References
    // -> int edgeIndices[12][2];
}
