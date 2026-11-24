/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Graphics\ShadowMapView.cpp
*/
class ViewMatrix depthReplaceMatrix; // size: 0x40, address: 0x808013D0
float depthReplaceBias; // size: 0x4, address: 0x80801410
static float hackBoxScale; // size: 0x4, address: 0x807096F0
static float hackLightDist; // size: 0x4, address: 0x807096F4
static float tsmDelta; // size: 0x4, address: 0x807096F8
static bool unitCubeClip; // size: 0x1, address: 0x80801414
static float floorSize; // size: 0x4, address: 0x807096FC
static float floorHeight; // size: 0x4, address: 0x80801418
static bool terrainBoundingBox; // size: 0x1, address: 0x8080141C
static float depthBias; // size: 0x4, address: 0x80709700
static float fOffsetX; // size: 0x4, address: 0x80801420
static float fOffsetY; // size: 0x4, address: 0x80801428
static class Matrix43 texScaleBiasMat; // size: 0x30, address: 0x80801430
static bool useStaticShadowProjection; // size: 0x1, address: 0x80801460
static class Vector lastGoodLeft; // size: 0x10, address: 0x80801468
static float xi; // size: 0x4, address: 0x8070970C
static class ScreenView * currentView; // size: 0x4, address: 0x80801478
class Texture ShadowMapTexture[1]; // size: 0x24, address: 0x80801488
class DepthTextureRenderTarget texTarget[1]; // size: 0x1C, address: 0x808014B8
class MaterialSpace LightSpace[1]; // size: 0x20, address: 0x808014E0
class ShadowMapView SMapView[1]; // size: 0x118, address: 0x80801510
class Viewport oneShadowMapViewport; // size: 0x224, address: 0x80801634
class Viewport * shadowMapViewPorts[1]; // size: 0x4, address: 0x80709720
static bool renderInit; // size: 0x1, address: 0x80801858
bool gEnableDropShadows; // size: 0x1, address: 0x80709730
// signature: @unnamed@WAD01_cpp@::BoundingBox::BoundingBox(const Math::Vector *, int)
// Range: 0x8026C9A8 -> 0x8026CC08
static void * @unnamed@WAD01_cpp@::BoundingBox::BoundingBox() {
    {
        // Range: 0x8026C9EC -> 0x8026C9EC
        // Local variables
        int i; // r0
    }
}
// signature: @unnamed@WAD01_cpp@::BoundingBox::Point(int) const
// Range: 0x80267978 -> 0x802679C4
static class Vector @unnamed@WAD01_cpp@::BoundingBox::Point() const {
}
// signature: @unnamed@WAD01_cpp@::MatrixOrthoOffCenter(Math::Matrix43 &, float, float, float, float, float, float)
// Range: 0x802675AC -> 0x80267630
static void @unnamed@WAD01_cpp@::MatrixOrthoOffCenter() {
}
// signature: @unnamed@WAD01_cpp@::XFormBoundingBox(@unnamed@WAD01_cpp@::BoundingBox *, const @unnamed@WAD01_cpp@::BoundingBox *, const Math::Matrix43 &)
// Range: 0x80267630 -> 0x80267978
static void @unnamed@WAD01_cpp@::XFormBoundingBox(class BoundingBox * result /* r28 */, class Matrix43 * mat /* r29 */) {
    // Local variables
    class Vector pts[8]; // r1+0x108

    {
        // Range: 0x80267654 -> 0x8026765C
        // Local variables
        int i; // r8
    }
    {
        // Range: 0x802676E4 -> 0x80267914
        // Local variables
        int i; // r30

        {
            // Range: 0x802676E4 -> 0x80267914
            // Local variables
            class Vector tmp; // r1+0xF8
        }
    }
}
// signature: @unnamed@WAD01_cpp@::Frustum::Frustum(const Graphics::ViewMatrix &)
// Range: 0x802679C4 -> 0x802681DC
static void * @unnamed@WAD01_cpp@::Frustum::Frustum(class Frustum * this /* r30 */) {
    // Local variables
    class Vector4 column1; // r1+0x138
    class Vector4 column2; // r1+0x128
    class Vector4 column3; // r1+0x118
    class Vector4 column4; // r1+0x108
    class Vector4 planes[6]; // r1+0x148
    int p; // r15

    {
        // Range: 0x80267CE4 -> 0x80267D44
        // Local variables
        int i; // r5
    }
    {
        // Range: 0x80267EA4 -> 0x80268170
        // Local variables
        int i; // r4
    }
}
// signature: @unnamed@WAD01_cpp@::Frustum::TestBox(const @unnamed@WAD01_cpp@::BoundingBox *) const
// Range: 0x802681DC -> 0x80268310
static int @unnamed@WAD01_cpp@::Frustum::TestBox() const {
    // Local variables
    bool intersect; // r7

    {
        // Range: 0x802681DC -> 0x802682F8
        // Local variables
        int i; // r0

        {
            // Range: 0x802681DC -> 0x802682F8
            // Local variables
            class Vector pVertex; // r1+0x8
            class Vector nVertex; // r1+0x18
            int nV; // r8
        }
    }
}
// signature: @unnamed@WAD01_cpp@::SweptSpherePlaneIntersect(float &, float &, const Math::Vector4 &, const @unnamed@WAD01_cpp@::BoundingSphere *, const Math::Vector *)
// Range: 0x80268310 -> 0x802683E0
static bool @unnamed@WAD01_cpp@::SweptSpherePlaneIntersect() {
    // Local variables
    float b_dot_n; // f0
    float d_dot_n; // f0

    {
        // Range: 0x80268394 -> 0x802683DC
        // Local variables
        float tmp1; // f2
        float tmp0; // f1
    }
}
// Range: 0x802683E0 -> 0x802685FC
static bool @unnamed@WAD01_cpp@::Frustum::TestSweptSphere(class Frustum * this /* r28 */, class BoundingSphere * sphere /* r29 */, class Vector * sweepDir /* r30 */) const {
    // Local variables
    float displacements[12]; // r1+0x38
    int cnt; // r24
    float a; // r1+0xC
    float b; // r1+0x8
    bool inFrustum; // r31

    {
        // Range: 0x802683FC -> 0x80268480
        // Local variables
        int i; // r23
    }
    {
        // Range: 0x80268490 -> 0x802685D8
        // Local variables
        int i; // r0

        {
            // Range: 0x80268490 -> 0x802685D8
            // Local variables
            class BoundingSphere displacedSphere; // r1+0x20
        }
    }
}
// Range: 0x80268640 -> 0x802693D8
static void @unnamed@WAD01_cpp@::GetTerrainBoundingBox(class StackPoolArray * shadowReceivers /* r22 */, class Matrix43 * modelView /* r23 */, class Frustum * sceneFrustum /* r24 */) {
    // Local variables
    class Vector smq_start; // r1+0x228
    class Vector smq_width; // r1+0x218
    class Vector smq_height; // r1+0x208

    {
        // Range: 0x8026871C -> 0x80269324
        // Local variables
        int k; // r29

        {
            // Range: 0x8026871C -> 0x80269324
            // Local variables
            int hugeResult; // r0
            class BoundingBox hugeBox; // r1+0x298
            float ky; // r1+0x2D4
            float kx; // r1+0x2D8

            {
                // Range: 0x80268728 -> 0x80269318
                // Local variables
                int j; // r28

                {
                    // Range: 0x80268728 -> 0x80269318
                    // Local variables
                    int bigResult; // r0
                    class BoundingBox bigBox; // r1+0x278
                    float jy; // r1+0x2CC
                    float jx; // r1+0x2D0

                    {
                        // Range: 0x80268728 -> 0x8026930C
                        // Local variables
                        int q; // r27

                        {
                            // Range: 0x80268728 -> 0x8026930C
                            // Local variables
                            int stack; // r26
                            float iy; // r1+0x2C8

                            {
                                // Range: 0x80268728 -> 0x8026874C
                                // Local variables
                                int r; // r25

                                {
                                    // Range: 0x80268728 -> 0x8026874C
                                    // Local variables
                                    class BoundingBox smallBox; // r1+0x258
                                    float ix; // f1
                                }
                            }
                            {
                                // Range: 0x8026874C -> 0x8026930C
                                // Local variables
                                class BoundingBox coalescedBox; // r1+0x238
                                int i; // r3
                                float lastX; // f0
                                float firstX; // f4
                            }
                        }
                    }
                }
            }
        }
    }

    // References
    // -> static float floorHeight;
    // -> static float floorSize;
}
// Range: 0x8026941C -> 0x80269F4C
static void @unnamed@WAD01_cpp@::ComputeVirtualCameraParameters(class Matrix43 * viewMat /* r21 */, class ViewMatrix * projMat /* r29 */, float * cosGamma /* r22 */, class StackPoolArray * casterPoints /* r23 */, class StackPoolArray * receiverPoints /* r24 */, class Viewport * viewport /* r25 */, class Vector * lightDir /* r26 */, class RenderableSceneRef * renderables /* r27 */, int renderablesSize /* r28 */) {
    // Local variables
    class Matrix43 modelView; // r1+0x230
    class ViewMatrix modelViewProjection; // r1+0x1F0
    class Vector sweepDir; // r1+0x188
    class Frustum sceneFrustum; // r1+0x260
    unsigned int shiftViewportVisible; // r30

    {
        // Range: 0x80269A6C -> 0x80269E98
        // Local variables
        int i; // r29

        {
            // Range: 0x80269A6C -> 0x80269E98
            // Local variables
            int inFrustum; // r0
            class BoundingBox instanceBox; // r1+0x1D0
            float sizeSqr; // f0
            class Vector upper; // r1+0x168
            class Vector lower; // r1+0x178
            class Renderable3D * rend; // r4
            unsigned int isCaster; // r31

            {
                // Range: 0x80269A6C -> 0x80269DC0
                // Local variables
                class BoundingSphere instanceSphere; // r1+0x1B8
            }
        }
    }

    // References
    // -> static bool terrainBoundingBox;
    // -> class Vector4 vec4OneW;
    // -> static class Matrix43 _matIdentity;
}
// Range: 0x8026A61C -> 0x8026A65C
void * Graphics::ShadowMapView::~ShadowMapView(class ShadowMapView * this /* r31 */) {
}
// Range: 0x8026A65C -> 0x8026A660
void Graphics::ShadowMapView::Refresh() {
}
// signature: Graphics::ShadowMapView::Start(Graphics::Scene &, Graphics::RenderTarget *)
// Range: 0x8026A660 -> 0x8026A6B0
void Graphics::ShadowMapView::Start(class ShadowMapView * this /* r30 */, class Scene * scene /* r31 */) {
}
// Range: 0x8026A6B0 -> 0x8026AB34
void Graphics::ShadowMapView::SetViewport(class ShadowMapView * this /* r29 */, class Viewport * viewport /* r30 */) {
    // Local variables
    class Vector lightDir; // r1+0x68
    class Matrix43 lightView; // r1+0xA8
    class Matrix43 lightProj; // r1+0x78

    // References
    // -> static float hackBoxScale;
    // -> class Vector4 vec4OneY;
    // -> class Vector4 vec4Zero;
    // -> static float hackLightDist;
    // -> class Viewport * activeViewport;
}
// Range: 0x8026AB44 -> 0x8026B1F0
void Graphics::ShadowMapView::Finish(class ShadowMapView * this /* r28 */) {
    // Local variables
    class ViewMatrix m_LightViewProj; // r1+0xF0
    class Matrix43 pplsMat; // r1+0xC0
    class ViewMatrix worldToDepthMat; // r1+0x80
    class Sampler smapSampler; // r1+0x70

    // References
    // -> class Vector4 vec4OneW;
    // -> static class Matrix43 texScaleBiasMat;
    // -> static float fOffsetY;
    // -> static float fOffsetX;
    // -> class Viewport * activeViewport;
}
// Range: 0x8026B73C -> 0x8026BB10
void Graphics::ShadowMapView::BuildStaticShadowProjectionMatrix(class ShadowMapView * this /* r30 */) {
    // Local variables
    class Matrix43 lightView; // r1+0xB8
    class Matrix43 lightProj; // r1+0x88
    class Vector yAxis; // r1+0x78
    class Vector zero; // r1+0x68
    class Vector lightPt; // r1+0x58

    // References
    // -> class Vector4 vec4OneW;
    // -> static float hackBoxScale;
    // -> static float hackLightDist;
}
// Range: 0x8026BB10 -> 0x8026C99C
void Graphics::ShadowMapView::BuildTSMProjectionMatrix(class ShadowMapView * this /* r28 */, class RenderableSceneRef * renderables /* r25 */, int renderablesSize /* r24 */) {
    // Local variables
    class StackPoolArray casterPoints; // r1+0xFC
    class StackPoolArray receiverPoints; // r1+0xF0

    {
        // Range: 0x8026BBE4 -> 0x8026C934
        // Local variables
        class Matrix43 biasedScaleX; // r1+0x1D8
        class ViewMatrix trapezoid_projection; // r1+0x208
        float z_aspect; // f5
        class Matrix33 trapezoid_shear; // r1+0x248
        float shear_amt; // f2
        class Matrix43 ptQ_xlate; // r1+0x278
        float xf; // f31
        float xn; // f0
        float min_slope; // f25
        float max_slope; // f26
        class Vector2 projectionPtQ; // r1+0x48
        float eta; // f28
        float delta_proj; // f4
        float lambda; // f29
        class Matrix33 scale_center; // r1+0x2A8
        float y_scale; // f0
        float x_scale; // f0
        class BoundingBox frustumAABB2D; // r1+0x148
        class Matrix33 rot_center; // r1+0x2D8
        float sin_theta; // f4
        float cos_theta; // f1
        float y_len; // f27
        float x_len; // f29
        float half_center_len; // f28
        class Vector2 centerPtsMinusCenterOrig; // r1+0x50
        class Matrix43 xlate_center; // r1+0x308
        class ViewMatrix trapezoid_space; // r1+0x338
        class Vector2 centerOrig; // r1+0x58
        class Vector2 centerPts[2]; // r1+0x90
        class Matrix43 lightSpaceOrtho; // r1+0x378
        float max_z; // f28
        float min_z; // f27
        class BoundingBox casterBox; // r1+0x168
        class Vector * shadowCasterPnts; // r24
        class BoundingBox frustumBox; // r1+0x188
        class Matrix43 lightSpaceBasis; // r1+0x3A8
        class Vector eyeVector; // r1+0xB0
        class Vector viewVector; // r1+0xC0
        class Vector upVector; // r1+0xD0
        class Vector leftVector; // r1+0xE0
        class Frustum eyeFrustum; // r1+0x458
        class Vector frustumPnts[8]; // r1+0x3D8

        {
            // Range: 0x8026BC38 -> 0x8026BC78
            // Local variables
            int i; // r24
        }
        {
            // Range: 0x8026BDF0 -> 0x8026BE40
            // Local variables
            int i; // r26

            {
                // Range: 0x8026BDFC -> 0x8026BE30
                // Local variables
                int j; // r27
            }
        }
        {
            // Range: 0x8026BEF0 -> 0x8026BF7C
            // Local variables
            class Vector trans; // r1+0xA0

            {
                // Range: 0x8026BF40 -> 0x8026BF44
                // Local variables
                int i; // r24
            }
        }
        {
            // Range: 0x8026C420 -> 0x8026C4DC
            // Local variables
            int i; // r24

            {
                // Range: 0x8026C420 -> 0x8026C4DC
                // Local variables
                float x_dist; // f27
                class Vector2 tmp; // r1+0x40
            }
        }
        {
            // Range: 0x8026C6AC -> 0x8026C924
            // Local variables
            float boxHeight; // f26
            float boxWidth; // f25
            class BoundingBox rcvrBox; // r1+0x128
            class Vector * shadowReceiverPnts; // r24

            {
                // Range: 0x8026C6D4 -> 0x8026C724
                // Local variables
                int i; // r26

                {
                    // Range: 0x8026C6E0 -> 0x8026C6E4
                    // Local variables
                    int j; // r27
                }
            }
            {
                // Range: 0x8026C844 -> 0x8026C924
                // Local variables
                class Matrix43 trapezoidUnitCube; // r1+0x1A8
                float boxY; // f6
                float boxX; // f27
            }
        }
    }

    // References
    // -> static bool unitCubeClip;
    // -> static float xi;
    // -> static float tsmDelta;
    // -> static class Vector lastGoodLeft;
    // -> static bool useStaticShadowProjection;
}
// signature: Graphics::ShadowMap::HackShadowMapCreate(Graphics::Scene *)
// Range: 0x8026D728 -> 0x8026D9C0
void Graphics::ShadowMap::HackShadowMapCreate() {
    // Local variables
    float fovy; // f27
    float aspect; // f26
    float znear; // f25
    float zfar; // f24

    {
        // Range: 0x8026D794 -> 0x8026D968
        // Local variables
        int lightIndex; // r21
    }

    // References
    // -> static class Matrix43 _matIdentity;
    // -> class ShadowMapView SMapView[1];
    // -> class DepthTextureRenderTarget texTarget[1];
    // -> class MaterialSpace LightSpace[1];
    // -> static class DirSmapLight hackDirSMapLight[2];
    // -> class Viewport * shadowMapViewPorts[1];
}
// Range: 0x8026D9C8 -> 0x8026DB18
void Graphics::ShadowMap::InitRender(class Scene * scene /* r24 */) {
    // References
    // -> class DepthTextureRenderTarget texTarget[1];
    // -> class ShadowMapView SMapView[1];
    // -> class Texture ShadowMapTexture[1];
    // -> class MaterialSpace LightSpace[1];
    // -> class Viewport * shadowMapViewPorts[1];
    // -> static bool renderInit;
    // -> bool gEnableDropShadows;
}
