/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Graphics\ProjectShadow.cpp
*/
unsigned int g_shadowCachesPerFrame; // size: 0x4, address: 0x80709578
float ANGLE_SIN; // size: 0x4, address: 0x806D5B74
float EPSILON_SQR; // size: 0x4, address: 0x806D5B78
static int halfPixelOffsets[13][3]; // size: 0x9C, address: 0x80709588
class ProjectShadowView * g_current; // size: 0x4, address: 0x807FFD10
class ImmediatePrototypeEntity * shadowReceiveImm; // size: 0x4, address: 0x807FFD14
class ImmediatePrototypeEntity * shadowPostProcessImm; // size: 0x4, address: 0x807FFD18
unsigned int tileCount; // size: 0x4, address: 0x807FFD1C
// Range: 0x8025D8FC -> 0x8025DF34
static bool @unnamed@WAD01_cpp@::StaticReceiverRayCaster::LeafCapsule(class StaticReceiverRayCaster * this /* r29 */, class Triangle * tri /* r30 */, class Renderable3D * data /* r31 */) {
    {
        // Range: 0x8025D980 -> 0x8025DEA8
        // Local variables
        class Vector v2; // r1+0x58
        class Vector v1; // r1+0x68
        class Vector v0; // r1+0x78
    }
}
// signature: Graphics::ProjectShadowSpace::GetBatches(Graphics::Viewport *, Util::PoolArray<Graphics::Space::RenderEntry> &, Util::PoolArray<Graphics::Renderable *> &, Graphics::RenderableSceneRef *, int, unsigned short, unsigned int)
// Range: 0x80256DB4 -> 0x80258420
void Graphics::ProjectShadowSpace::GetBatches(class PoolArray * renderEntries /* r14 */, class PoolArray * dynamics /* r1+0x8 */, class RenderableSceneRef * in /* r22 */, int insize /* r1+0xC */, unsigned int flagClearMask /* r23 */) {
    // Local variables
    class ProjectShadowView * psview; // r27
    unsigned int anyVisibleMask; // r1+0x1E8
    unsigned int visibleMasks[4]; // r1+0x150
    class FrustumPlanes * frustums[4]; // r1+0x140
    class Vector positions[4]; // r1+0x190
    bool lodEnabled[4]; // r1+0x1C
    unsigned int casterViewportCount; // r3
    unsigned int visCount; // r26
    unsigned int casterCount; // r25
    unsigned int cacheCount; // r16
    class CacheSort cacheList[12]; // r1+0x160

    {
        // Range: 0x80256EAC -> 0x80256F30
        // Local variables
        unsigned int cvp; // r0
    }
    {
        // Range: 0x80256F44 -> 0x8025732C
        // Local variables
        int i; // r24

        {
            // Range: 0x80256F44 -> 0x8025732C
            // Local variables
            float minDist; // f0
            unsigned int visibleMaskBits; // r15
            unsigned int curMask; // r16
            class Vector boxHalf; // r1+0x120
            class Vector boxCenter; // r1+0x130
            float halfCastDepth; // f4
            float castDepth; // f1
            unsigned int refFlags; // r17

            {
                // Range: 0x80256F44 -> 0x8025721C
                // Local variables
                unsigned int vvp; // r3

                {
                    // Range: 0x80256F44 -> 0x8025721C
                    // Local variables
                    float alphaFade; // f1

                    {
                        // Range: 0x80256F44 -> 0x8025721C
                        // Local variables
                        float testDist; // f0
                    }
                }
            }
            {
                // Range: 0x80257268 -> 0x802572D0
                // Local variables
                class Renderable3D * rend; // r0
            }
        }
    }
    {
        // Range: 0x8025733C -> 0x80258298
        // Local variables
        unsigned int moreCache; // r6
        unsigned int numCache; // r5
        unsigned int freeCacheSearch; // r9
        class Bucket * curBucket; // r6
        unsigned int castidx; // r16
        unsigned int casterUsed; // r17
        unsigned int bucketUsed; // r5

        {
            // Range: 0x80257344 -> 0x80257398
            // Local variables
            unsigned int i; // r0
        }
        {
            // Range: 0x80257398 -> 0x802573B8
            // Local variables
            unsigned int i; // r0
        }
        {
            // Range: 0x802573B8 -> 0x802573B8
            // Local variables
            unsigned int i; // r3
        }
        {
            // Range: 0x802574FC -> 0x802575C8
            {
                // Range: 0x802574FC -> 0x802575AC
                // Local variables
                class Renderable3D * rend; // r0
            }
        }
        {
            // Range: 0x802575F4 -> 0x8025777C
            // Local variables
            class Vector4 shadowColor; // r1+0x110
            class Renderable3D * rend; // r8
        }
        {
            // Range: 0x8025782C -> 0x802578D4
            // Local variables
            unsigned int bucketidx; // r3

            {
                // Range: 0x8025782C -> 0x802578D4
                // Local variables
                unsigned int casterFirst; // r11

                {
                    // Range: 0x80257838 -> 0x802578C8
                    // Local variables
                    unsigned int casteridx; // r12

                    {
                        // Range: 0x80257838 -> 0x802578C8
                        // Local variables
                        class CasterSort * curCaster; // r16
                    }
                }
            }
        }
        {
            // Range: 0x802578E4 -> 0x80257974
            // Local variables
            unsigned int bucketidx; // r10
        }
        {
            // Range: 0x8025798C -> 0x802579CC
            // Local variables
            unsigned int bucketidx; // r0

            {
                // Range: 0x8025798C -> 0x802579CC
                // Local variables
                unsigned int cacheIndex; // r6
            }
        }
        {
            // Range: 0x802579CC -> 0x80257A18
            // Local variables
            unsigned int castidx; // r0
        }
        {
            // Range: 0x80257A18 -> 0x80257EA8
            // Local variables
            unsigned int bucketidx; // r26

            {
                // Range: 0x80257A18 -> 0x80257EA8
                // Local variables
                float addZ; // f3
                float addY; // f1
                float addX; // f0
                float WPos; // f0
                float ZPos; // f0
                float YPos; // f27
                float XPos; // f28
                float rangePixelsF; // f2
                float YRange; // f29
                float XRange; // f30
                float castStartHeight; // f2
                class Vector pos; // r1+0x100
                float translateZ; // f0
                float translateY; // f0
                float translateX; // f0
                float scaleZ; // f7
                float scaleY; // f2
                float scaleX; // f5
                class ShadowCache * curCache; // r28
            }
        }
        {
            // Range: 0x80257EB4 -> 0x80257F88
            // Local variables
            unsigned int caster; // r21

            {
                // Range: 0x80257EB4 -> 0x80257F88
                // Local variables
                class Renderable3D * rend3D; // r24
                unsigned int refFlags; // r20
                class RenderableSceneRef * cur; // r19
            }
        }
        {
            // Range: 0x80258114 -> 0x80258298
            // Local variables
            unsigned int bucketidx; // r0

            {
                // Range: 0x80258114 -> 0x80258298
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
                class ShadowCache * curCache; // r0
            }
        }
    }

    // References
    // -> unsigned int g_shadowCachesPerFrame;
}
// Range: 0x802595F0 -> 0x802599E8
void * Graphics::ProjectShadowView::ProjectShadowView() {
    // References
    // -> struct {} __vt__Q28Graphics8Viewport;
    // -> struct {} __vt__Q28Graphics18ProjectShadowSpace;
    // -> struct {} __vt__Q28Graphics4Node;
    // -> struct {} __vt__Q28Graphics7Texture;
    // -> struct {} __vt__Q28Graphics19TextureRenderTarget;
    // -> struct {} __vt__Q28Graphics17ProjectShadowView;
}
// Range: 0x80259A9C -> 0x80259ADC
void * Graphics::ProjectShadowView::~ProjectShadowView(class ProjectShadowView * this /* r31 */) {
}
// signature: Graphics::ProjectShadowView::Create(Graphics::Scene *, int, Graphics::ProjectShadowView::Bucket *, unsigned int)
// Range: 0x80259ADC -> 0x80259DB0
void Graphics::ProjectShadowView::Create(class ProjectShadowView * this /* r29 */, class Scene * scene /* r27 */) {
    // Local variables
    class Matrix43 tempMat; // r1+0x8

    {
        // Range: 0x80259C8C -> 0x80259CD0
        // Local variables
        int i; // r5

        {
            // Range: 0x80259CA8 -> 0x80259CD0
            // Local variables
            int j; // r0
        }
    }

    // References
    // -> static class Matrix43 _matIdentity;
    // -> class ProjectShadowView * g_current;
}
// Range: 0x80259F4C -> 0x80259FE0
void Graphics::ProjectShadowView::Destroy(class ProjectShadowView * this /* r30 */) {
}
// signature: Graphics::ProjectShadowView::AddCasterViewport(Graphics::Viewport *)
// Range: 0x80259FE0 -> 0x8025A024
void Graphics::ProjectShadowView::AddCasterViewport() {
    {
        // Range: 0x80259FF4 -> 0x8025A008
        // Local variables
        unsigned int i; // r0
    }
}
// signature: Graphics::ProjectShadowView::Start(Graphics::Scene &, Graphics::RenderTarget *)
// Range: 0x8025A024 -> 0x8025A514
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
// Range: 0x8025A514 -> 0x8025A650
static void Graphics::@unnamed@WAD01_cpp@::GetSampleOffsets_BlurrySomething() {
    // Local variables
    float tu; // f6
    float tv; // f7
    class Vector4 vWhite; // r1+0x38
    float weightSum; // f8
    float weight; // f1

    {
        // Range: 0x8025A580 -> 0x8025A604
        // Local variables
        int index; // r0

        {
            // Range: 0x8025A580 -> 0x8025A604
            // Local variables
            float curWeight; // f0
        }
    }
    {
        // Range: 0x8025A610 -> 0x8025A648
        // Local variables
        int i; // r0
    }

    // References
    // -> static int halfPixelOffsets[13][3];
}
// signature: Graphics::SetSampler(const Graphics::Effect *, const Graphics::Effect::ParamData *, const char *, Graphics::Texture *, Graphics::Renderable3D *)
// Range: 0x8025A650 -> 0x8025A654
void Graphics::SetSampler() {
}
// Range: 0x8025A654 -> 0x8025AA38
void Graphics::ProjectShadowView::Finish(class ProjectShadowView * this /* r29 */) {
    // Local variables
    class TextureRenderTarget * texTarget; // r27

    {
        // Range: 0x8025A6A0 -> 0x8025A9BC
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
        class ImmediateContext immPostProcessGeom; // r1+0x30
        class Renderable3D * mPostProcessRenderable; // r1+0x18
    }

    // References
    // -> class BuildBuffer g_renderBuildBuffer;
    // -> class ImmediatePrototypeEntity * shadowPostProcessImm;
}
// Range: 0x8025AAC8 -> 0x8025ABA4
void Graphics::ProjectShadowView::RenderAttach(class ProjectShadowView * this /* r30 */) {
    // References
    // -> unsigned int tileCount;
}
// Range: 0x8025ABA4 -> 0x8025AC2C
void Graphics::ProjectShadowView::RenderDetach(class ProjectShadowView * this /* r30 */) {
}
// signature: Graphics::ProjectShadowView::TileBuckets(Graphics::ProjectShadowView::Bucket *, int, int, int)
// Range: 0x8025AC2C -> 0x8025AED0
void Graphics::ProjectShadowView::TileBuckets(class Bucket * buckets /* r16 */, int numTiles /* r17 */) {
    // Local variables
    unsigned int fbMask; // r21
    class Vector4 compVec; // r1+0x8

    {
        // Range: 0x8025AC90 -> 0x8025AE8C
        // Local variables
        int j; // r20

        {
            // Range: 0x8025AC90 -> 0x8025AE44
            // Local variables
            int i; // r19

            {
                // Range: 0x8025AC90 -> 0x8025AE44
                // Local variables
                class Bucket * cur; // r18
            }
        }
    }

    // References
    // -> unsigned int tileCount;
}
// Range: 0x8025AED0 -> 0x8025B7F4
void Graphics::ProjectShadowView::FillCache(class ProjectShadowView * this /* r15 */, class CacheSort * caches /* r16 */, unsigned int cacheCount /* r17 */) {
    // Local variables
    class BroadBound allBound; // r1+0xE0
    unsigned int anyVisibleMask; // r14
    unsigned int visibleMasks[4]; // r1+0x88
    class RenderableSceneRef * in; // r26
    int insize; // r0

    {
        // Range: 0x8025AF48 -> 0x8025AFD4
        // Local variables
        unsigned int cacheidx; // r20

        {
            // Range: 0x8025AF48 -> 0x8025AFD4
            // Local variables
            class ShadowCache * cache; // r21

            {
                // Range: 0x8025AF48 -> 0x8025AF48
                // Local variables
                int entidx; // r22
            }
        }
    }
    {
        // Range: 0x8025AFEC -> 0x8025B020
        // Local variables
        unsigned int cvp; // r20
    }
    {
        // Range: 0x8025B04C -> 0x8025B5A4
        // Local variables
        int i; // r25

        {
            // Range: 0x8025B04C -> 0x8025B5A4
            // Local variables
            class Renderable3D * rend3D; // r24
            unsigned int refFlags; // r18
            float distToLargeCaster; // f28

            {
                // Range: 0x8025B04C -> 0x8025B588
                // Local variables
                unsigned int cacheidx; // r23

                {
                    // Range: 0x8025B04C -> 0x8025B588
                    // Local variables
                    class Geometry * geom; // r18
                    class Bucket * curBucket; // r21
                    class ShadowCache * cache; // r22

                    {
                        // Range: 0x8025B04C -> 0x8025B3C8
                        // Local variables
                        class StaticReceiverRayCaster rayCaster; // r1+0x160

                        {
                            // Range: 0x8025B20C -> 0x8025B304
                            // Local variables
                            unsigned int casterIdx; // r20

                            {
                                // Range: 0x8025B20C -> 0x8025B304
                                // Local variables
                                class Renderable3D * casterRend3D; // r19

                                {
                                    // Range: 0x8025B228 -> 0x8025B304
                                    // Local variables
                                    class CollKDTree * colltree; // r18
                                    class StaticBuilder * builder; // r0

                                    {
                                        // Range: 0x8025B250 -> 0x8025B304
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
                            // Range: 0x8025B314 -> 0x8025B3C8
                            // Local variables
                            class Vector4 postColor; // r1+0x58
                        }
                    }
                    {
                        // Range: 0x8025B420 -> 0x8025B51C
                        // Local variables
                        class CollKDTree * colltree; // r18
                        class StaticBuilder * builder; // r0

                        {
                            // Range: 0x8025B474 -> 0x8025B51C
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
        // Range: 0x8025B5B4 -> 0x8025B7B0
        // Local variables
        unsigned int cacheidx; // r14

        {
            // Range: 0x8025B5B4 -> 0x8025B7B0
            // Local variables
            float maxCastDepth; // f28
            float sortRayDepth[5]; // r1+0xC8
            class ShadowCache * cache; // r15

            {
                // Range: 0x8025B5B4 -> 0x8025B5B4
                // Local variables
                int i; // r0

                {
                    // Range: 0x8025B5B4 -> 0x8025B5B4
                    // Local variables
                    int j; // r0

                    {
                        // Range: 0x8025B5B4 -> 0x8025B5B4
                        // Local variables
                        float tmpswap; // f0
                    }
                }
            }
            {
                // Range: 0x8025B6B0 -> 0x8025B710
                // Local variables
                int i; // r20
            }
            {
                // Range: 0x8025B71C -> 0x8025B770
                // Local variables
                int i; // r5
            }
            {
                // Range: 0x8025B780 -> 0x8025B79C
                // Local variables
                int entidx; // r20
            }
        }
    }
}
// Range: 0x8025DFA8 -> 0x8025E1B0
void Graphics::ApplyMaterialForReceivedShadow() {
    // References
    // -> class WiiPipeState wiiPipeState;
}
// Range: 0x8025E1B0 -> 0x8025E3CC
void Graphics::ApplyMaterialForReceivedShadowWithNormals(class _GXColor * shadowColor /* r30 */) {
    // Local variables
    class _GXColor ambColor; // r1+0x18
    class _GXLightObj dirLight; // r1+0x70
    class _GXColor c0; // r1+0x14
    class Matrix33 m; // r1+0x40
    class Vector dir0; // r1+0x30
    class Vector tDir0; // r1+0x20

    // References
    // -> class Viewport * activeViewport;
}
// Range: 0x8025E3D4 -> 0x8025FD98
void Graphics::ProjectShadowView::DrawReceivers(class ProjectShadowView * this /* r21 */, class Viewport * viewp /* r22 */) {
    // Local variables
    unsigned int cvp; // r6
    class FrustumPlanes * frustPlanes; // r0
    class Vector frustCorners[8]; // r1+0x1C0
    class _GXTexObj * lastTex; // r1+0x27C

    {
        // Range: 0x8025E590 -> 0x8025EC90
        // Local variables
        class Renderable * shadowImmRend[12]; // r1+0x190
        unsigned int shadowImmCount; // r1+0x260

        {
            // Range: 0x8025E5AC -> 0x8025EBEC
            // Local variables
            unsigned int cacheidx; // r17

            {
                // Range: 0x8025E5AC -> 0x8025EBEC
                {
                    // Range: 0x8025E5AC -> 0x8025EBEC
                    // Local variables
                    class ImmediateContext shadowImm; // r1+0x100
                    class Bucket * bucket; // r1+0x25C
                }
            }
        }
    }
    {
        // Range: 0x8025EC98 -> 0x8025F148
        {
            // Range: 0x8025ECD8 -> 0x8025F134
            // Local variables
            unsigned int cacheidx; // r26

            {
                // Range: 0x8025ECD8 -> 0x8025F134
                {
                    // Range: 0x8025ECD8 -> 0x8025F134
                    // Local variables
                    class _GXColor shadowColor; // r1+0x34
                    class _GXTexObj * currTex; // r18
                    class Bucket * bucket; // r20

                    {
                        // Range: 0x8025ED08 -> 0x8025F0DC
                        // Local variables
                        long ipoly; // r4
                    }
                }
            }
        }
    }
    {
        // Range: 0x8025F148 -> 0x8025FAC4
        // Local variables
        unsigned int cacheidx; // r1+0x258

        {
            // Range: 0x8025F148 -> 0x8025FAC4
            {
                // Range: 0x8025F148 -> 0x8025FAB0
                // Local variables
                int entidx; // r25

                {
                    // Range: 0x8025F148 -> 0x8025FAB0
                    // Local variables
                    class ViewMatrix objectToWorldMat; // r1+0x150
                    class _GXTexObj * currTex; // r23
                    class _GXColor shadowColor; // r1+0x2C
                    class Renderable * rend; // r1+0x30
                    int vertLOD; // r24
                    float alphaFade; // f21
                }
            }
        }
    }

    // References
    // -> class Vector4 vec4OneZ;
    // -> class Vector4 vec4OneY;
    // -> class Vector4 vec4OneX;
    // -> static int dirtyCompoundFlags;
    // -> enum _GXBlendFactor blendFactorTable[15];
    // -> class StateNode stateNodes[92];
    // -> class Viewport * activeViewport;
    // -> class SingleBufferAllocator updateFrameAllocator;
    // -> struct {} __vt__Q28Graphics12Renderable3D;
    // -> struct {} __vt__Q25World17ImmediateGeometry;
    // -> class BuildBuffer g_renderBuildBuffer;
    // -> class ImmediatePrototypeEntity * shadowReceiveImm;
    // -> int gperf_shadows;
}
