/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WADSpeed.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\ProjectShadow.cpp
*/
unsigned int g_shadowCachesPerFrame; // size: 0x4, address: 0x806D1C68
float g_gutter; // size: 0x4, address: 0x806D1C6C
int halfPixelOffsets[13][3]; // size: 0x9C, address: 0x806D1C74
class ProjectShadowView * g_current; // size: 0x4, address: 0x807841BC
class ImmediatePrototypeEntity * shadowReceiveImm; // size: 0x4, address: 0x807841C0
class ImmediatePrototypeEntity * shadowPostProcessImm; // size: 0x4, address: 0x807841C4
unsigned int tileCount; // size: 0x4, address: 0x807841C8
// signature: Graphics::ProjectShadowSpace::GetBatches(Graphics::Viewport *, Util::PoolArray<Graphics::Space::RenderEntry> &, Util::PoolArray<Graphics::Renderable *> &, Graphics::Scene *, unsigned short, unsigned int)
// Range: 0x8020CF90 -> 0x8020E314
void Graphics::ProjectShadowSpace::GetBatches(class PoolArray & renderEntries /* r26 */, class PoolArray & dynamics /* r14 */, unsigned int flagClearMask /* r27 */) {
    // Local variables
    class RenderableSceneRef * in; // r31
    int insize; // r1+0x17C
    class ProjectShadowView * psview; // r30
    unsigned int anyVisibleMask; // r1+0x178
    unsigned int visibleMasks[4]; // r1+0x110
    class FrustumPlanes * frustums[4]; // r1+0x100
    class Vector positions[4]; // r1+0x120
    bool lodEnabled[4]; // r1+0x14
    unsigned int visCount; // r29
    unsigned int casterViewportCount; // r0
    unsigned int casterCount; // r28

    {
        // Range: 0x8020D0A4 -> 0x8020D128
        // Local variables
        unsigned int cvp; // r0
    }
    {
        // Range: 0x8020D13C -> 0x8020D518
        // Local variables
        int i; // r21

        {
            // Range: 0x8020D13C -> 0x8020D518
            // Local variables
            float minDist; // f1
            unsigned int visibleMaskBits; // r18
            unsigned int curMask; // r19
            class Vector boxHalf; // r1+0xE0
            class Vector boxCenter; // r1+0xF0
            float halfCastDepth; // f5
            float castDepth; // f2
            unsigned int refFlags; // r20

            {
                // Range: 0x8020D13C -> 0x8020D440
                // Local variables
                unsigned int vvp; // r17

                {
                    // Range: 0x8020D13C -> 0x8020D440
                    // Local variables
                    float alphaFade; // f2

                    {
                        // Range: 0x8020D148 -> 0x8020D440
                        // Local variables
                        float testDist; // f0
                    }
                }
            }
            {
                // Range: 0x8020D46C -> 0x8020D4AC
                // Local variables
                class Renderable3D * rend; // r6
            }
        }
    }
    {
        // Range: 0x8020D518 -> 0x8020E25C
        // Local variables
        unsigned int moreCache; // r7
        unsigned int numCache; // r6
        unsigned int freeCacheSearch; // r10
        class Bucket * curBucket; // r7
        unsigned int castidx; // r6
        unsigned int casterUsed; // r16
        unsigned int bucketUsed; // r5

        {
            // Range: 0x8020D520 -> 0x8020D574
            // Local variables
            unsigned int i; // r0
        }
        {
            // Range: 0x8020D574 -> 0x8020D594
            // Local variables
            unsigned int i; // r0
        }
        {
            // Range: 0x8020D594 -> 0x8020D65C
            // Local variables
            unsigned int i; // r3
        }
        {
            // Range: 0x8020D6E8 -> 0x8020D78C
            {
                // Range: 0x8020D6E8 -> 0x8020D770
                // Local variables
                class Renderable3D * rend; // r6
            }
        }
        {
            // Range: 0x8020D7A8 -> 0x8020D9C0
            // Local variables
            class Vector4 shadowColor; // r1+0xD0
            class Renderable3D * rend; // r9
        }
        {
            // Range: 0x8020D9C0 -> 0x8020DA74
            // Local variables
            unsigned int bucketidx; // r3

            {
                // Range: 0x8020D9C0 -> 0x8020DA74
                // Local variables
                unsigned int casterFirst; // r12

                {
                    // Range: 0x8020D9CC -> 0x8020DA74
                    // Local variables
                    unsigned int casteridx; // r15

                    {
                        // Range: 0x8020D9CC -> 0x8020DA74
                        // Local variables
                        class CasterSort & curCaster; // r17
                    }
                }
            }
        }
        {
            // Range: 0x8020DA78 -> 0x8020DB28
            // Local variables
            unsigned int bucketidx; // r11
        }
        {
            // Range: 0x8020DB28 -> 0x8020DB68
            // Local variables
            unsigned int bucketidx; // r0

            {
                // Range: 0x8020DB28 -> 0x8020DB68
                // Local variables
                unsigned int cacheIndex; // r7
            }
        }
        {
            // Range: 0x8020DB68 -> 0x8020DBB4
            // Local variables
            unsigned int castidx; // r0
        }
        {
            // Range: 0x8020DBB8 -> 0x8020E0A8
            // Local variables
            unsigned int bucketidx; // r0

            {
                // Range: 0x8020DBB8 -> 0x8020E0A8
                // Local variables
                float addZ; // f3
                float addY; // f18
                float addX; // f6
                float gutterZ; // f0
                float gutterX; // f0
                float WPos; // f0
                float ZPos; // f0
                float YPos; // f28
                float XPos; // f29
                float texelRatio; // f18
                float rangePixelsF[2]; // r1+0x18
                float rasterSize; // f2
                float YRange; // f30
                float XRange; // f31
                float blurLerp; // f0
                float castStartHeight; // f4
                class Vector pos; // r1+0xC0
                float translateZ; // f0
                float translateY; // f0
                float translateX; // f0
                float scaleZ; // f3
                float scaleY; // f5
                float scaleX; // f16
                class ShadowCache & curCache; // r7
            }
        }
        {
            // Range: 0x8020E0A8 -> 0x8020E1A4
            // Local variables
            unsigned int caster; // r15

            {
                // Range: 0x8020E0A8 -> 0x8020E1A4
                // Local variables
                class Renderable3D * rend3D; // r8
                unsigned int refFlags; // r18
                class RenderableSceneRef & cur; // r17
            }
        }
    }

    // References
    // -> unsigned int g_shadowCachesPerFrame;
    // -> float g_gutter;
}
// Range: 0x8020F3B0 -> 0x8020F53C
void * Graphics::ProjectShadowView::ProjectShadowView(class ProjectShadowView * this /* r30 */) {
    // References
    // -> struct {} __vt__Q28Graphics8Viewport;
    // -> struct {} __vt__Q28Graphics18ProjectShadowSpace;
    // -> struct {} __vt__Q28Graphics17ProjectShadowView;
}
// Range: 0x8020F540 -> 0x8020F5A8
void * Graphics::ProjectShadowView::~ProjectShadowView(class ProjectShadowView * this /* r30 */) {
}
// signature: Graphics::ProjectShadowView::Create(Graphics::Scene *, int, Graphics::ProjectShadowView::Bucket *, unsigned int)
// Range: 0x8020F5B0 -> 0x8020F874
void Graphics::ProjectShadowView::Create(class ProjectShadowView * this /* r29 */, class Scene * scene /* r27 */) {
    // Local variables
    class Matrix43 tempMat; // r1+0x10

    {
        // Range: 0x8020F750 -> 0x8020F7A4
        // Local variables
        int i; // r5

        {
            // Range: 0x8020F76C -> 0x8020F7A4
            // Local variables
            int j; // r0
        }
    }

    // References
    // -> static class Matrix43 _matIdentity;
}
// Range: 0x8020F880 -> 0x8020F8E0
void Graphics::ProjectShadowView::Destroy(class ProjectShadowView * this /* r31 */) {
}
// signature: Graphics::ProjectShadowView::Start(Graphics::Scene &, Graphics::RenderTarget *)
// Range: 0x8020F8E0 -> 0x8020FDC0
void Graphics::ProjectShadowView::Start() {
    // References
    // -> class StateDelta stateDeltas[92];
    // -> int stateDeltaSize;
    // -> class StateDelta stateStack[372];
    // -> int stateStackSize;
    // -> class StateNode stateNodes[92];
}
// signature: Graphics::@unnamed@WADSpeed_cpp@::GetSampleOffsets_BlurrySomething(int, int, Math::Vector4 *, Math::Vector4 *, float)
// Range: 0x8020FEC0 -> 0x80210004
static void Graphics::@unnamed@WADSpeed_cpp@::GetSampleOffsets_BlurrySomething() {
    // Local variables
    float tu; // f6
    float tv; // f7
    class Vector4 vWhite; // r1+0x38
    float weightSum; // f8
    float weight; // f1

    {
        // Range: 0x8020FF34 -> 0x8020FFB8
        // Local variables
        int index; // r0

        {
            // Range: 0x8020FF34 -> 0x8020FFB8
            // Local variables
            float curWeight; // f0
        }
    }
    {
        // Range: 0x8020FFC4 -> 0x8020FFFC
        // Local variables
        int i; // r0
    }

    // References
    // -> int halfPixelOffsets[13][3];
}
// Range: 0x80210010 -> 0x802103A4
void Graphics::ProjectShadowView::Finish(class ProjectShadowView * this /* r26 */) {
    {
        // Range: 0x80210050 -> 0x80210384
        // Local variables
        int techniqueIndex; // r0
        class Shader * shader; // r20
        unsigned char shaderHandle; // r0
        class ParamData * rendParamData; // r21
        class Effect * effectPostProcess; // r22
        class Vector4 * mPostProcessAvgSampleWeights; // r23
        class Vector4 * mPostProcessAvgSampleOffsets; // r24
        unsigned short paramHandle2; // r0
        unsigned short paramHandle1; // r0
        class ImmediateContext immPostProcessGeom; // r1+0x28
        class Renderable3D * mPostProcessRenderable; // r1+0x18
    }

    // References
    // -> class BuildBuffer g_renderBuildBuffer;
    // -> class ImmediatePrototypeEntity * shadowPostProcessImm;
}
// Range: 0x80210770 -> 0x80210854
void Graphics::ProjectShadowView::RenderAttach(class ProjectShadowView * this /* r30 */) {
    // References
    // -> unsigned int tileCount;
}
// Range: 0x80210860 -> 0x802108E8
void Graphics::ProjectShadowView::RenderDetach(class ProjectShadowView * this /* r30 */) {
}
// signature: Graphics::ProjectShadowView::TileBuckets(Graphics::ProjectShadowView::Bucket *, int, int, int)
// Range: 0x802108F0 -> 0x80210B9C
void Graphics::ProjectShadowView::TileBuckets(class Bucket * buckets /* r16 */, int numTiles /* r17 */) {
    // Local variables
    unsigned int fbMask; // r21
    class Vector4 compVec; // r1+0x8

    {
        // Range: 0x80210938 -> 0x80210B64
        // Local variables
        int j; // r20

        {
            // Range: 0x80210938 -> 0x80210B64
            // Local variables
            int i; // r19

            {
                // Range: 0x80210938 -> 0x80210B64
                // Local variables
                class Bucket & cur; // r18
            }
        }
    }

    // References
    // -> unsigned int tileCount;
}
// signature: Graphics::ProjectShadowView::CacheCollide(Graphics::RenderableSceneRef &, unsigned int)
// Range: 0x80210BA0 -> 0x80211780
void Graphics::ProjectShadowView::CacheCollide(class ProjectShadowView * this /* r16 */, class RenderableSceneRef & ref /* r17 */) {
    // Local variables
    unsigned int refFlags; // r8
    float distToLargeCaster; // f25

    {
        // Range: 0x80210C74 -> 0x802116EC
        // Local variables
        unsigned int cacheidx; // r22

        {
            // Range: 0x80210C74 -> 0x802116EC
            // Local variables
            class Bucket & curBucket; // r21
            class ShadowCache & cache; // reg65535

            {
                // Range: 0x80210C74 -> 0x80211180
                // Local variables
                class StaticReceiverRayCaster rayCaster; // r1+0x258

                {
                    // Range: 0x80210C74 -> 0x80211180
                    // Local variables
                    int parentModelCount; // r20

                    {
                        // Range: 0x80210C74 -> 0x802110C8
                        // Local variables
                        int parentModelIdx; // r19

                        {
                            // Range: 0x80210C74 -> 0x802110C8
                            {
                                // Range: 0x80210C74 -> 0x802110C8
                                {
                                    // Range: 0x80210C74 -> 0x802110C8
                                    // Local variables
                                    float maxScale; // f0
                                    class Matrix43 invMat; // r1+0x228
                                    class Vector xformCapsuleEnd; // r1+0x168
                                    class Vector4 xformCapsuleStart; // r1+0x178
                                }
                            }
                        }
                    }
                    {
                        // Range: 0x802110C8 -> 0x80211180
                        // Local variables
                        class Vector4 postColor; // r1+0x158
                    }
                }
            }
            {
                // Range: 0x8021129C -> 0x80211688
                {
                    // Range: 0x802112E4 -> 0x80211688
                    // Local variables
                    float quarterZ; // f6
                    float quarterX; // f5
                    float boundSqr; // f4
                    float boundZ; // f3
                    float boundX; // f2
                    float maxScale; // f0
                    class Matrix43 invMat; // r1+0x1F8
                    class Vector xformCapsuleEnd; // r1+0x138
                    class Vector4 xformCapsuleStart; // r1+0x148

                    {
                        // Range: 0x802115CC -> 0x80211688
                        // Local variables
                        class ShadowCache_CapsuleNoRay * cacheNoRay; // r18
                    }
                }
            }
        }
    }
}
// Range: 0x80213C40 -> 0x80213CE8
void Graphics::ProjectShadowView::FlushQueueSimple(class ProjectShadowView * this /* r27 */) {
    // Local variables
    unsigned int casterViewportCount; // r0
    unsigned int anyVisibleMask; // r29
    class ShadowSimpleCache * simpleCacheNext; // r28

    {
        // Range: 0x80213C7C -> 0x80213C98
        // Local variables
        unsigned int cvp; // r0
    }
}
// Range: 0x80213CF0 -> 0x80213EE4
void Graphics::ApplyMaterialForReceivedShadow() {
    // References
    // -> class WiiPipeState wiiPipeState;
}
// Range: 0x80213EF0 -> 0x802140D0
void Graphics::ApplyMaterialForReceivedShadowWithNormals(class _GXColor & shadowColor /* r31 */) {
    // Local variables
    class _GXColor ambColor; // r1+0x14
    class _GXLightObj dirLight; // r1+0x68
    class Matrix33 m; // r1+0x38
    class Vector dir0; // r1+0x28
    class Vector tDir0; // r1+0x18

    // References
    // -> class Viewport * activeViewport;
}
// Range: 0x802140E0 -> 0x80214CAC
void Graphics::ProjectShadowView::DrawReceivers(class ProjectShadowView * this /* r15 */, class Viewport * viewp /* r16 */) {
    // Local variables
    class RenderSceneCollider * rscoll; // r0
    unsigned int casterViewportCount; // r4
    unsigned int cvp; // r5
    class FrustumPlanes & frustPlanes; // r24
    bool lodEnabled; // r0
    class Vector frustCorners[8]; // r1+0xD0
    class _GXTexObj * lastTex; // r23

    {
        // Range: 0x8021421C -> 0x802143C4
        // Local variables
        class Renderable * shadowImmRend[12]; // r1+0xA0
        unsigned int shadowImmCount; // r23

        {
            // Range: 0x80214244 -> 0x80214348
            // Local variables
            unsigned int cacheidx; // r25

            {
                // Range: 0x80214244 -> 0x80214348
                {
                    // Range: 0x80214244 -> 0x80214348
                    // Local variables
                    class ImmediateContext shadowImm; // r1+0x70
                    class Bucket * bucket; // r26

                    {
                        // Range: 0x8021424C -> 0x80214348
                        // Local variables
                        class Renderable3D * rend3d; // r30
                    }
                }
            }
        }
        {
            // Range: 0x80214354 -> 0x802143C4
            // Local variables
            class Shader * shader; // r19
            class Effect * effect; // r18
        }
    }
    {
        // Range: 0x802143C8 -> 0x802147D0
        // Local variables
        class Matrix43 & invCamMat; // r0

        {
            // Range: 0x80214404 -> 0x802147D0
            // Local variables
            unsigned int cacheidx; // r20

            {
                // Range: 0x80214404 -> 0x802147D0
                // Local variables
                class ShadowCache & curCache; // r0

                {
                    // Range: 0x80214404 -> 0x802147D0
                    // Local variables
                    class _GXColor shadowColor; // r1+0x28
                    class _GXTexObj * currTex; // r14
                    class Bucket * bucket; // r21

                    {
                        // Range: 0x80214704 -> 0x802147B8
                        // Local variables
                        long ipoly; // r28
                    }
                }
            }
        }
    }
    {
        // Range: 0x802147D0 -> 0x80214BFC
        // Local variables
        unsigned int cacheidx; // r1+0x168

        {
            // Range: 0x802147D0 -> 0x80214BFC
            // Local variables
            class Bucket * bucket; // r22
            class ShadowCache & curCache; // r0

            {
                // Range: 0x802147D0 -> 0x80214BFC
                // Local variables
                int entidx; // r21

                {
                    // Range: 0x802147D0 -> 0x80214BFC
                    // Local variables
                    class ViewMatrix objectToWorldMat; // r1+0x30
                    class _GXTexObj * currTex; // r17
                    class _GXColor shadowColor; // r1+0x18
                    class Shader * shader; // r18
                    unsigned char curShaderHandle; // r0
                    class Effect * effect; // r19
                    class Renderable * rend; // r1+0x1C
                    int vertLOD; // r1+0x20
                    float alphaFade; // r1+0x24
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
// Range: 0x802153A0 -> 0x8021561C
void Graphics::ProjectShadowView::PreProcess() {
    {
        // Range: 0x802154B8 -> 0x80215618
        // Local variables
        unsigned int cacheidx; // r8

        {
            // Range: 0x802154B8 -> 0x80215618
            // Local variables
            class ShadowCache & cache; // r9

            {
                // Range: 0x802154DC -> 0x8021553C
                // Local variables
                int entidx; // r10
            }
        }
    }
}
// Range: 0x80215620 -> 0x80215B44
void Graphics::ProjectShadowView::PostProcess(class ProjectShadowView * this /* r28 */) {
    {
        // Range: 0x802156DC -> 0x8021596C
        // Local variables
        unsigned int cacheidx; // r30

        {
            // Range: 0x802156DC -> 0x8021596C
            // Local variables
            float maxCastDepth; // f1
            float sortRayDepth[5]; // r1+0x8
            class ShadowCache & cache; // r29

            {
                // Range: 0x802156DC -> 0x802156DC
                // Local variables
                int i; // r0

                {
                    // Range: 0x802156DC -> 0x802156DC
                    // Local variables
                    int j; // r0

                    {
                        // Range: 0x802156DC -> 0x802156DC
                        // Local variables
                        float tmpswap; // f0
                    }
                }
            }
            {
                // Range: 0x802156F8 -> 0x802156F8
                // Local variables
                int i; // r3
            }
            {
                // Range: 0x802156F8 -> 0x802156F8
                // Local variables
                int i; // r5
            }
            {
                // Range: 0x802156F8 -> 0x8021596C
                // Local variables
                int entidx; // r8
            }
        }
    }
    {
        // Range: 0x8021596C -> 0x80215B0C
        // Local variables
        unsigned int bucketidx; // r7

        {
            // Range: 0x8021596C -> 0x80215B0C
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
