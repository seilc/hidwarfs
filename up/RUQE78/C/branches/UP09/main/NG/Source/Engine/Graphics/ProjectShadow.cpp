/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Graphics\ProjectShadow.cpp
*/
unsigned int g_shadowCachesPerFrame; // size: 0x4, address: 0x807BF160
float ANGLE_SIN; // size: 0x4, address: 0x8078785C
float EPSILON_SQR; // size: 0x4, address: 0x80787860
static int halfPixelOffsets[13][3]; // size: 0x9C, address: 0x807BF170
class ProjectShadowView * g_current; // size: 0x4, address: 0x808476F8
class ImmediatePrototypeEntity * shadowReceiveImm; // size: 0x4, address: 0x808476FC
class ImmediatePrototypeEntity * shadowPostProcessImm; // size: 0x4, address: 0x80847700
unsigned int tileCount; // size: 0x4, address: 0x80847704
// Range: 0x802F45C0 -> 0x802F4BF0
static bool @unnamed@WAD01_cpp@::StaticReceiverRayCaster::LeafCapsule(class StaticReceiverRayCaster * this /* r29 */, class Triangle * tri /* r30 */, class Renderable3D * data /* r31 */) {
    {
        // Range: 0x802F45DC -> 0x802F4B64
        // Local variables
        class Vector v2; // r1+0x58
        class Vector v1; // r1+0x68
        class Vector v0; // r1+0x78
    }
}
// signature: Graphics::ProjectShadowSpace::GetBatches(Graphics::Viewport *, Util::PoolArray<Graphics::Space::RenderEntry> &, Util::PoolArray<Graphics::Renderable *> &, Graphics::RenderableSceneRef *, int, unsigned short, unsigned int)
// Range: 0x802EDF68 -> 0x802EF594
void Graphics::ProjectShadowSpace::GetBatches(class PoolArray & renderEntries /* r1+0x8 */, class PoolArray & dynamics /* r1+0xC */, class RenderableSceneRef * in /* r27 */, int insize /* r1+0x10 */, unsigned int flagClearMask /* r28 */) {
    // Local variables
    class ProjectShadowView * psview; // r31
    unsigned int anyVisibleMask; // r1+0x1E0
    unsigned int visibleMasks[4]; // r1+0x148
    class FrustumPlanes * frustums[4]; // r1+0x138
    class Vector positions[4]; // r1+0x188
    bool lodEnabled[4]; // r1+0x20
    unsigned int casterViewportCount; // r3
    unsigned int visCount; // r30
    class ShadowSimpleCache * simpleCacheList; // r29
    unsigned int casterCount; // r14
    unsigned int cacheCount; // r22
    class CacheSort cacheList[12]; // r1+0x158
    class ShadowSimpleCache * simpleCacheNext; // r15

    {
        // Range: 0x802EE064 -> 0x802EE0E8
        // Local variables
        unsigned int cvp; // r0
    }
    {
        // Range: 0x802EE0FC -> 0x802EE4B4
        // Local variables
        int i; // r18

        {
            // Range: 0x802EE0FC -> 0x802EE4B4
            // Local variables
            float minDist; // f1
            unsigned int visibleMaskBits; // r15
            unsigned int curMask; // r16
            class Vector boxHalf; // r1+0x118
            class Vector boxCenter; // r1+0x128
            float halfCastDepth; // f5
            float castDepth; // f2
            unsigned int refFlags; // r17

            {
                // Range: 0x802EE0FC -> 0x802EE3D4
                // Local variables
                unsigned int vvp; // r3

                {
                    // Range: 0x802EE0FC -> 0x802EE3D4
                    // Local variables
                    float alphaFade; // f2

                    {
                        // Range: 0x802EE0FC -> 0x802EE3D4
                        // Local variables
                        float testDist; // f0
                    }
                }
            }
            {
                // Range: 0x802EE420 -> 0x802EE458
                // Local variables
                class Renderable3D * rend; // r5
            }
        }
    }
    {
        // Range: 0x802EE4C4 -> 0x802EF39C
        // Local variables
        unsigned int moreCache; // r6
        unsigned int numCache; // r5
        unsigned int freeCacheSearch; // r9
        class Bucket * curBucket; // r6
        unsigned int castidx; // r6
        unsigned int casterUsed; // r15
        unsigned int bucketUsed; // r5

        {
            // Range: 0x802EE4CC -> 0x802EE520
            // Local variables
            unsigned int i; // r0
        }
        {
            // Range: 0x802EE520 -> 0x802EE540
            // Local variables
            unsigned int i; // r0
        }
        {
            // Range: 0x802EE540 -> 0x802EE540
            // Local variables
            unsigned int i; // r3
        }
        {
            // Range: 0x802EE690 -> 0x802EE72C
            {
                // Range: 0x802EE690 -> 0x802EE710
                // Local variables
                class Renderable3D * rend; // r6
            }
        }
        {
            // Range: 0x802EE750 -> 0x802EE7E0
            // Local variables
            class Vector4 shadowColor; // r1+0x108
            class Renderable3D * rend; // r8
        }
        {
            // Range: 0x802EE948 -> 0x802EE9F0
            // Local variables
            unsigned int bucketidx; // r3

            {
                // Range: 0x802EE948 -> 0x802EE9F0
                // Local variables
                unsigned int casterFirst; // r11

                {
                    // Range: 0x802EE954 -> 0x802EE9E4
                    // Local variables
                    unsigned int casteridx; // r12

                    {
                        // Range: 0x802EE954 -> 0x802EE9E4
                        // Local variables
                        class CasterSort & curCaster; // r16
                    }
                }
            }
        }
        {
            // Range: 0x802EEA00 -> 0x802EEA90
            // Local variables
            unsigned int bucketidx; // r10
        }
        {
            // Range: 0x802EEAA8 -> 0x802EEAE8
            // Local variables
            unsigned int bucketidx; // r0

            {
                // Range: 0x802EEAA8 -> 0x802EEAE8
                // Local variables
                unsigned int cacheIndex; // r6
            }
        }
        {
            // Range: 0x802EEAE8 -> 0x802EEB34
            // Local variables
            unsigned int castidx; // r0
        }
        {
            // Range: 0x802EEB34 -> 0x802EEFBC
            // Local variables
            unsigned int bucketidx; // r23

            {
                // Range: 0x802EEB34 -> 0x802EEFBC
                // Local variables
                float addZ; // f3
                float addY; // f1
                float addX; // f0
                float WPos; // f0
                float ZPos; // f0
                float YPos; // f7
                float XPos; // f6
                float rangePixelsF; // f2
                float YRange; // f21
                float XRange; // f22
                float castStartHeight; // f2
                class Vector pos; // r1+0xF8
                float translateZ; // f0
                float translateY; // f0
                float translateX; // f0
                float scaleZ; // f9
                float scaleY; // f2
                float scaleX; // f5
                class ShadowCache & curCache; // r24
            }
        }
        {
            // Range: 0x802EEFC8 -> 0x802EF064
            // Local variables
            unsigned int caster; // r17

            {
                // Range: 0x802EEFC8 -> 0x802EF064
                // Local variables
                class Renderable3D * rend3D; // r3
                unsigned int refFlags; // r19
                class RenderableSceneRef & cur; // r18
            }
        }
        {
            // Range: 0x802EF218 -> 0x802EF39C
            // Local variables
            unsigned int bucketidx; // r0

            {
                // Range: 0x802EF218 -> 0x802EF39C
                // Local variables
                float translateZ; // f0
                float translateY; // f0
                float translateX; // f0
                float scaleZ; // f9
                float scaleY; // f6
                float scaleX; // f7
                float VPos; // f0
                float UPos; // f0
                float VRange; // f5
                float URange; // f7
                float maxCastDepth; // f1
                class ShadowCache & curCache; // r0
            }
        }
    }

    // References
    // -> unsigned int g_shadowCachesPerFrame;
}
// Range: 0x802F0694 -> 0x802F0AF8
void * Graphics::ProjectShadowView::ProjectShadowView() {
    // References
    // -> struct {} __vt__Q28Graphics8Viewport;
    // -> struct {} __vt__Q28Graphics18ProjectShadowSpace;
    // -> struct {} __vt__Q28Graphics22TextureRenderTargetWii;
    // -> struct {} __vt__Q28Graphics7Texture;
    // -> struct {} __vt__Q28Graphics17ProjectShadowView;
}
// signature: Graphics::ProjectShadowView::Create(Graphics::Scene *, int, Graphics::ProjectShadowView::Bucket *, unsigned int)
// Range: 0x802F0B00 -> 0x802F0DD8
void Graphics::ProjectShadowView::Create(class ProjectShadowView * this /* r29 */, class Scene * scene /* r27 */) {
    // Local variables
    class Matrix43 tempMat; // r1+0x8

    {
        // Range: 0x802F0CB4 -> 0x802F0CF8
        // Local variables
        int i; // r5

        {
            // Range: 0x802F0CD0 -> 0x802F0CF8
            // Local variables
            int j; // r0
        }
    }

    // References
    // -> static class Matrix43 _matIdentity;
    // -> class ProjectShadowView * g_current;
}
// Range: 0x802F0F70 -> 0x802F0FC8
void Graphics::ProjectShadowView::Destroy(class ProjectShadowView * this /* r31 */) {
}
// signature: Graphics::ProjectShadowView::AddCasterViewport(Graphics::Viewport *)
// Range: 0x802F0FC8 -> 0x802F100C
void Graphics::ProjectShadowView::AddCasterViewport() {
    {
        // Range: 0x802F0FDC -> 0x802F0FF0
        // Local variables
        unsigned int i; // r0
    }
}
// signature: Graphics::ProjectShadowView::Start(Graphics::Scene &, Graphics::RenderTarget *)
// Range: 0x802F100C -> 0x802F14FC
void Graphics::ProjectShadowView::Start() {
    // References
    // -> class StateDelta stateDeltas[92];
    // -> int stateDeltaSize;
    // -> class StateDelta stateStack[372];
    // -> int stateStackSize;
    // -> class StateNode stateNodes[92];
    // -> class Texture * currentTextures[16];
}
// signature: Graphics::@unnamed@WAD01_cpp@::GetSampleOffsets_BlurrySomething(int, int, Math::Vector4 *, Math::Vector4 *, float)
// Range: 0x802F14FC -> 0x802F1638
static void Graphics::@unnamed@WAD01_cpp@::GetSampleOffsets_BlurrySomething() {
    // Local variables
    float tu; // f6
    float tv; // f7
    class Vector4 vWhite; // r1+0x38
    float weightSum; // f8
    float weight; // f1

    {
        // Range: 0x802F1568 -> 0x802F15EC
        // Local variables
        int index; // r0

        {
            // Range: 0x802F1568 -> 0x802F15EC
            // Local variables
            float curWeight; // f0
        }
    }
    {
        // Range: 0x802F15F8 -> 0x802F1630
        // Local variables
        int i; // r0
    }

    // References
    // -> static int halfPixelOffsets[13][3];
}
// Range: 0x802F1638 -> 0x802F19CC
void Graphics::ProjectShadowView::Finish(class ProjectShadowView * this /* r29 */) {
    {
        // Range: 0x802F1680 -> 0x802F19AC
        // Local variables
        int techniqueIndex; // r0
        class Shader * shader; // r21
        unsigned char shaderHandle; // r0
        class ParamData * rendParamData; // r22
        class Effect * effectPostProcess; // r23
        class Vector4 * mPostProcessAvgSampleWeights; // r24
        class Vector4 * mPostProcessAvgSampleOffsets; // r25
        unsigned short paramHandle2; // r0
        unsigned short paramHandle1; // r0
        class ImmediateContext immPostProcessGeom; // r1+0x28
        class Renderable3D * mPostProcessRenderable; // r1+0x18
    }

    // References
    // -> class BuildBuffer g_renderBuildBuffer;
    // -> class ImmediatePrototypeEntity * shadowPostProcessImm;
}
// Range: 0x802F1A48 -> 0x802F1B2C
void Graphics::ProjectShadowView::RenderAttach(class ProjectShadowView * this /* r30 */) {
    // References
    // -> unsigned int tileCount;
}
// Range: 0x802F1B2C -> 0x802F1BB4
void Graphics::ProjectShadowView::RenderDetach(class ProjectShadowView * this /* r30 */) {
}
// signature: Graphics::ProjectShadowView::TileBuckets(Graphics::ProjectShadowView::Bucket *, int, int, int)
// Range: 0x802F1BB4 -> 0x802F1E58
void Graphics::ProjectShadowView::TileBuckets(class Bucket * buckets /* r16 */, int numTiles /* r17 */) {
    // Local variables
    unsigned int fbMask; // r21
    class Vector4 compVec; // r1+0x8

    {
        // Range: 0x802F1C18 -> 0x802F1E14
        // Local variables
        int j; // r20

        {
            // Range: 0x802F1C18 -> 0x802F1DCC
            // Local variables
            int i; // r19

            {
                // Range: 0x802F1C18 -> 0x802F1DCC
                // Local variables
                class Bucket & cur; // r18
            }
        }
    }

    // References
    // -> unsigned int tileCount;
}
// Range: 0x802F1E58 -> 0x802F2770
void Graphics::ProjectShadowView::FillCache(class ProjectShadowView * this /* r15 */, class CacheSort * caches /* r16 */, unsigned int cacheCount /* r17 */) {
    // Local variables
    class BroadBound allBound; // r1+0xE0
    unsigned int anyVisibleMask; // r14
    unsigned int visibleMasks[4]; // r1+0x88
    class RenderableSceneRef * in; // r26
    int insize; // r0

    {
        // Range: 0x802F1ED0 -> 0x802F1F5C
        // Local variables
        unsigned int cacheidx; // r20

        {
            // Range: 0x802F1ED0 -> 0x802F1F5C
            // Local variables
            class ShadowCache & cache; // r21

            {
                // Range: 0x802F1ED0 -> 0x802F1ED0
                // Local variables
                int entidx; // r22
            }
        }
    }
    {
        // Range: 0x802F1F74 -> 0x802F1FA8
        // Local variables
        unsigned int cvp; // r20
    }
    {
        // Range: 0x802F1FD4 -> 0x802F2520
        // Local variables
        int i; // r25

        {
            // Range: 0x802F1FD4 -> 0x802F2520
            // Local variables
            class Renderable3D * rend3D; // r24
            unsigned int refFlags; // r18
            float distToLargeCaster; // f28

            {
                // Range: 0x802F1FD4 -> 0x802F2504
                // Local variables
                unsigned int cacheidx; // r23

                {
                    // Range: 0x802F1FD4 -> 0x802F2504
                    // Local variables
                    class Geometry * geom; // r18
                    class Bucket & curBucket; // r21
                    class ShadowCache & cache; // r22

                    {
                        // Range: 0x802F1FD4 -> 0x802F234C
                        // Local variables
                        class StaticReceiverRayCaster rayCaster; // r1+0x160

                        {
                            // Range: 0x802F2194 -> 0x802F2288
                            // Local variables
                            unsigned int casterIdx; // r20

                            {
                                // Range: 0x802F2194 -> 0x802F2288
                                // Local variables
                                class Renderable3D * casterRend3D; // r19

                                {
                                    // Range: 0x802F21B0 -> 0x802F2288
                                    // Local variables
                                    class CollKDTree & colltree; // r18
                                    class StaticBuilder * builder; // r0

                                    {
                                        // Range: 0x802F21D4 -> 0x802F2288
                                        // Local variables
                                        float maxScale; // f0
                                        class Matrix43 invMat; // r1+0x130
                                        class Vector xformCapsuleEnd; // r1+0x68
                                        class Vector4 xformCapsuleStart; // r1+0x78
                                    }
                                }
                            }
                        }
                        {
                            // Range: 0x802F2298 -> 0x802F234C
                            // Local variables
                            class Vector4 postColor; // r1+0x58
                        }
                    }
                    {
                        // Range: 0x802F23A4 -> 0x802F249C
                        // Local variables
                        class CollKDTree & colltree; // r18
                        class StaticBuilder * builder; // r0

                        {
                            // Range: 0x802F23F4 -> 0x802F249C
                            // Local variables
                            float maxScale; // f0
                            class Matrix43 invMat; // r1+0x100
                            class Vector xformCapsuleEnd; // r1+0x38
                            class Vector4 xformCapsuleStart; // r1+0x48
                        }
                    }
                }
            }
        }
    }
    {
        // Range: 0x802F2530 -> 0x802F272C
        // Local variables
        unsigned int cacheidx; // r14

        {
            // Range: 0x802F2530 -> 0x802F272C
            // Local variables
            float maxCastDepth; // f28
            float sortRayDepth[5]; // r1+0xC8
            class ShadowCache & cache; // r15

            {
                // Range: 0x802F2530 -> 0x802F2530
                // Local variables
                int i; // r0

                {
                    // Range: 0x802F2530 -> 0x802F2530
                    // Local variables
                    int j; // r0

                    {
                        // Range: 0x802F2530 -> 0x802F2530
                        // Local variables
                        float tmpswap; // f0
                    }
                }
            }
            {
                // Range: 0x802F262C -> 0x802F268C
                // Local variables
                int i; // r20
            }
            {
                // Range: 0x802F2698 -> 0x802F26EC
                // Local variables
                int i; // r5
            }
            {
                // Range: 0x802F26FC -> 0x802F2718
                // Local variables
                int entidx; // r20
            }
        }
    }
}
// Range: 0x802F4C3C -> 0x802F4E30
void Graphics::ApplyMaterialForReceivedShadow() {
    // References
    // -> class WiiPipeState wiiPipeState;
}
// Range: 0x802F4E3C -> 0x802F5014
void Graphics::ApplyMaterialForReceivedShadowWithNormals(class _GXColor & shadowColor /* r30 */) {
    // Local variables
    class _GXColor ambColor; // r1+0x14
    class _GXLightObj dirLight; // r1+0x68
    class Matrix33 m; // r1+0x38
    class Vector dir0; // r1+0x28
    class Vector tDir0; // r1+0x18

    // References
    // -> class Viewport * activeViewport;
}
// Range: 0x802F5028 -> 0x802F5BF4
void Graphics::ProjectShadowView::DrawReceivers(class ProjectShadowView * this /* r15 */, class Viewport * viewp /* r16 */) {
    // Local variables
    unsigned int cvp; // r5
    class FrustumPlanes & frustPlanes; // r24
    bool lodEnabled; // r0
    class Vector frustCorners[8]; // r1+0xC8
    class _GXTexObj * lastTex; // r23

    {
        // Range: 0x802F5160 -> 0x802F5318
        // Local variables
        class Renderable * shadowImmRend[12]; // r1+0x98
        unsigned int shadowImmCount; // r25

        {
            // Range: 0x802F5188 -> 0x802F5288
            // Local variables
            unsigned int cacheidx; // r26

            {
                // Range: 0x802F5188 -> 0x802F5288
                {
                    // Range: 0x802F5188 -> 0x802F527C
                    // Local variables
                    class ImmediateContext shadowImm; // r1+0x38
                    class Bucket * bucket; // r29

                    {
                        // Range: 0x802F5190 -> 0x802F527C
                        // Local variables
                        class Renderable3D * rend3d; // r30
                    }
                }
            }
        }
        {
            // Range: 0x802F52A8 -> 0x802F5318
            // Local variables
            class Shader * shader; // r19
            class Effect * effect; // r18
        }
    }
    {
        // Range: 0x802F531C -> 0x802F5714
        // Local variables
        class Matrix43 & invCamMat; // r0

        {
            // Range: 0x802F5358 -> 0x802F5700
            // Local variables
            unsigned int cacheidx; // r21

            {
                // Range: 0x802F5358 -> 0x802F5700
                // Local variables
                class ShadowCache & curCache; // r0

                {
                    // Range: 0x802F5358 -> 0x802F5700
                    // Local variables
                    class _GXColor shadowColor; // r1+0x30
                    class _GXTexObj * currTex; // r14
                    class Bucket * bucket; // r22

                    {
                        // Range: 0x802F5648 -> 0x802F56EC
                        // Local variables
                        long ipoly; // r29
                    }
                }
            }
        }
    }
    {
        // Range: 0x802F5714 -> 0x802F5B18
        // Local variables
        unsigned int cacheidx; // r1+0x160

        {
            // Range: 0x802F5718 -> 0x802F5B18
            // Local variables
            class Bucket * bucket; // r22
            class ShadowCache & curCache; // r0

            {
                // Range: 0x802F5718 -> 0x802F5B08
                // Local variables
                int entidx; // r21

                {
                    // Range: 0x802F5718 -> 0x802F5B08
                    // Local variables
                    class ViewMatrix objectToWorldMat; // r1+0x58
                    class _GXTexObj * currTex; // r17
                    class _GXColor shadowColor; // r1+0x20
                    class Shader * shader; // r18
                    unsigned char curShaderHandle; // r0
                    class Effect * effect; // r19
                    class Renderable * rend; // r1+0x24
                    int vertLOD; // r1+0x28
                    float alphaFade; // r1+0x2C
                    class Renderable3D * rend3d; // r20
                }
            }
        }
    }

    // References
    // -> class BuildBuffer g_renderBuildBuffer;
    // -> class ImmediatePrototypeEntity * shadowReceiveImm;
    // -> int gperf_shadows;
}
