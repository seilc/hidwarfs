/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\ScreenWarp.cpp
*/
float UVMapUOffset; // size: 0x4, address: 0x8077A0D0
float UVMapVOffset; // size: 0x4, address: 0x8077A0D4
float UVMapUScale; // size: 0x4, address: 0x8077A0D8
float UVMapVScale; // size: 0x4, address: 0x8077A0DC
class FixedAllocator WarpList; // size: 0x38, address: 0x8077A0F0
class StaticArray WarpTypeList; // size: 0x1C, address: 0x8077A128
class Vector2 UVMap[1][16][16]; // size: 0x800, address: 0x8077A148
bool RenderThisFrame[1]; // size: 0x1, address: 0x8077A948
static float UHALF; // size: 0x4, address: 0x80693C10
static float VHALF; // size: 0x4, address: 0x80693C14
class ImmediatePrototypeEntity * mScreenQuadEntity; // size: 0x4, address: 0x8077A94C
void (* ScreenWarpRenderFunctions[6])(class Warp & warp, class Vector2 & loc, float baseIntensity, float iz, float s); // size: 0x18, address: 0x806CE848
int mCurrentFrame; // size: 0x4, address: 0x8077A950
class ScreenWarpManager screenWarpMod; // size: 0x98, address: 0x8077A958
static class ModuleRegistrator screenWarpModReg; // size: 0x8, address: 0x8077A9F0
class ScreenWarpManager * gScreenWarpManager; // size: 0x4, address: 0x806CE860
// Range: 0x801E55A0 -> 0x801E55F4
void * Graphics::ScreenWarpManager::ScreenWarpManager(class ScreenWarpManager * this /* r31 */) {
    // References
    // -> int mCurrentFrame;
    // -> struct {} __vt__Q28Graphics17ScreenWarpManager;
}
// signature: Graphics::ScreenWarpManager::InitializeScreenWarp(World::GlobalFXEntity *)
// Range: 0x801E5600 -> 0x801E56B0
void Graphics::ScreenWarpManager::InitializeScreenWarp() {
    // References
    // -> class StaticArray WarpTypeList;
    // -> class FixedAllocator WarpList;
    // -> class ImmediatePrototypeEntity * mScreenQuadEntity;
    // -> bool RenderThisFrame[1];
    // -> int mCurrentFrame;
    // -> float UVMapVScale;
    // -> float UVMapUScale;
}
// Range: 0x801E56B0 -> 0x801E572C
void Graphics::ScreenWarpManager::ClearAll() {
    {
        // Range: 0x801E56C0 -> 0x801E5718
        // Local variables
        int i; // r25

        {
            // Range: 0x801E56C0 -> 0x801E5718
            // Local variables
            class Warp * start; // r4

            {
                // Range: 0x801E56CC -> 0x801E56CC
                // Local variables
                class Warp * nextWarp; // r24
            }
        }
    }

    // References
    // -> class FixedAllocator WarpList;
    // -> class StaticArray WarpTypeList;
}
// signature: Graphics::ScreenWarpManager::Update(int)
// Range: 0x801E5730 -> 0x801E59D8
void Graphics::ScreenWarpManager::Update(class ScreenWarpManager * this /* r24 */) {
    // Local variables
    float dt; // f0

    {
        // Range: 0x801E5794 -> 0x801E59A0
        // Local variables
        int i; // r26

        {
            // Range: 0x801E5794 -> 0x801E59A0
            // Local variables
            class Warp * start; // r4

            {
                // Range: 0x801E5794 -> 0x801E59A0
                // Local variables
                float iz; // f0
                float radius; // f2
                class Vector2 loc; // r1+0x8
                class Warp * nextWarp; // r25
            }
        }
    }

    // References
    // -> class StaticArray WarpTypeList;
    // -> bool RenderThisFrame[1];
    // -> void (* ScreenWarpRenderFunctions[6])(class Warp & warp, class Vector2 & loc, float baseIntensity, float iz, float s);
    // -> int mCurrentFrame;
    // -> float dt;
}
// Range: 0x801E59E0 -> 0x801E627C
void Graphics::ScreenWarpManager::RenderScreenWarp(class ScreenWarpManager * this /* r28 */, class Texture * screenTexture /* r26 */, class TextureRenderTargetWii * destTexture /* r27 */) {
    {
        // Range: 0x801E59F4 -> 0x801E6264
        // Local variables
        class Sampler samplerData; // r1+0x20
        unsigned short paramHandle1; // r0
        class ImmediateContext immQuadGeom; // r1+0x2C
        class ImmediateContext immTriStripGeom; // r1+0x58
        class Renderable3D * renderable; // r1+0x10
        float modelview[3][4]; // r1+0x88
        float projection[4][4]; // r1+0xB8
        class _GXRenderModeObj * renderMode; // r0

        {
            // Range: 0x801E5FD0 -> 0x801E6078
            // Local variables
            class SamplerContext samplerContext; // r1+0x18
        }
    }

    // References
    // -> class StateDelta stateDeltas[92];
    // -> int stateDeltaSize;
    // -> class StateDelta stateStack[372];
    // -> int stateStackSize;
    // -> class StateNode stateNodes[92];
    // -> bool RenderThisFrame[1];
    // -> class BuildBuffer g_renderBuildBuffer;
    // -> class ImmediatePrototypeEntity * mScreenQuadEntity;
}
// signature: Graphics::ScreenWarpManager::GenerateQuadGeom(World::ImmediateContext<Sext::ImmediateVertex> &, int, int, int)
// Range: 0x801E6460 -> 0x801E6908
void Graphics::ScreenWarpManager::GenerateQuadGeom(class ImmediateContext & immQuadGeom /* r22 */, int hSize /* r23 */, int vSize /* r24 */) {
    // Local variables
    int i; // r27
    int j; // r26
    int verts; // r25
    float stepX; // f28
    float stepY; // f27
    float x; // f26
    float y; // f25
    float posx; // f24
    float posy; // f0

    {
        // Range: 0x801E6510 -> 0x801E686C
        // Local variables
        float v3; // f0
        float u3; // f18
        float v2; // f20
        float u2; // f21
        float v1; // f22
        float u1; // f23
        float v0; // f5
        float u0; // f4
    }

    // References
    // -> static float VHALF;
    // -> class Vector2 UVMap[1][16][16];
    // -> static float UHALF;
}
// signature: Graphics::ScreenWarpManager::GenerateTriStripGeom(World::ImmediateContext<Sext::VertexUV> &, int, int, int)
// Range: 0x801E6910 -> 0x801E6D30
void Graphics::ScreenWarpManager::GenerateTriStripGeom(class ImmediateContext & immTriStripGeom /* r15 */, int hSize /* r16 */, int vSize /* r17 */) {
    // Local variables
    int i; // r20
    int j; // r19
    int idx; // r18
    float stepX; // f31
    float stepY; // f30
    float x; // f29
    float y; // f28
    float posx; // f27
    float posy; // f0

    {
        // Range: 0x801E69C0 -> 0x801E6CAC
        // Local variables
        float v2; // f21
        float u2; // f22
        float v0; // f5
        float u0; // f4
    }

    // References
    // -> static float VHALF;
    // -> static float UHALF;
    // -> class Vector2 UVMap[1][16][16];
}
// signature: Graphics::ScreenWarpManager::GetUVMapRange(int &, int &, int &, int &, float, float, float)
// Range: 0x801E6D30 -> 0x801E6E04
void Graphics::ScreenWarpManager::GetUVMapRange() {
}
// Range: 0x801E6E10 -> 0x801E6E80
void Graphics::ScreenWarpManager::ResetUVMap() {
    // Local variables
    float u; // f1

    {
        // Range: 0x801E6E14 -> 0x801E6E7C
        // Local variables
        int i; // r10

        {
            // Range: 0x801E6E14 -> 0x801E6E7C
            // Local variables
            float v; // f2

            {
                // Range: 0x801E6E14 -> 0x801E6E7C
                // Local variables
                int j; // r0
            }
        }
    }

    // References
    // -> float UVMapVOffset;
    // -> float UVMapUOffset;
    // -> class Vector2 UVMap[1][16][16];
    // -> int mCurrentFrame;
}
// Range: 0x801E6E80 -> 0x801E6F00
class Warp * Graphics::ScreenWarpManager::AllocateWarp(enum eScreenWarpTypes type /* r31 */) {
    // Local variables
    class Warp * one; // r3

    {
        // Range: 0x801E6EA8 -> 0x801E6EE8
        // Local variables
        class Warp * head; // r5
    }

    // References
    // -> class StaticArray WarpTypeList;
    // -> class FixedAllocator WarpList;
}
// Range: 0x801E6F00 -> 0x801E6FC0
void Graphics::ScreenWarpManager::FreeWarp(class Warp * warpToFree /* r31 */) {
    // References
    // -> class FixedAllocator WarpList;
    // -> class StaticArray WarpTypeList;
}
// Range: 0x801E6FC0 -> 0x801E70C8
class Warp * Graphics::ScreenWarpManager::Emit(class Vector2 & loc /* r27 */, float radius /* f28 */, float duration /* f29 */, enum eScreenWarpTypes type /* r28 */, float intensity /* f30 */, float freq /* f31 */, int flags /* r29 */, void (* callback)(class Warp & warp) /* r30 */, void * userData /* r31 */) {
    // Local variables
    class Warp * one; // r3
}
// signature: Graphics::ScreenWarpManager::AnimateWarble(Graphics::ScreenWarp::Warp &, Math::Vector2 &, float, float, float)
// Range: 0x801E70D0 -> 0x801E7390
void Graphics::ScreenWarpManager::AnimateWarble(class Vector2 & loc /* r29 */, float s /* f1 */) {
    // Local variables
    float randomU; // f26
    float randomV; // f25
    float radius; // f2
    float r2; // f24
    float ir2; // f23
    int istart; // r1+0x14
    int iend; // r1+0x10
    int jstart; // r1+0xC
    int jend; // r1+0x8
    float x; // f22

    {
        // Range: 0x801E71E8 -> 0x801E7310
        // Local variables
        int i; // r30

        {
            // Range: 0x801E71E8 -> 0x801E7310
            // Local variables
            float y; // f21

            {
                // Range: 0x801E71E8 -> 0x801E7310
                // Local variables
                int j; // r25

                {
                    // Range: 0x801E71E8 -> 0x801E7310
                    // Local variables
                    float randV; // f1
                    float randU; // f19
                    float intensity; // f20
                    float dist2; // f0
                    float yoff; // f0
                    float xoff; // f1
                }
            }
        }
    }

    // References
    // -> int mCurrentFrame;
    // -> class Vector2 UVMap[1][16][16];
    // -> float UVMapVScale;
    // -> float UVMapUScale;
}
// signature: Graphics::ScreenWarpManager::AnimateRipple(Graphics::ScreenWarp::Warp &, Math::Vector2 &, float, float, float)
// Range: 0x801E7390 -> 0x801E7658
void Graphics::ScreenWarpManager::AnimateRipple(class Vector2 & loc /* r29 */, float s /* f20 */) {
    // Local variables
    float mag; // f5
    float radius; // f6
    float magU; // f28
    float magV; // f27
    float freq; // f26
    float r2; // f25
    float ir2; // f24
    int istart; // r1+0x14
    int iend; // r1+0x10
    int jstart; // r1+0xC
    int jend; // r1+0x8
    float x; // f23

    {
        // Range: 0x801E7440 -> 0x801E7478
        // Local variables
        float m; // f2
    }
    {
        // Range: 0x801E74E0 -> 0x801E75D0
        // Local variables
        int i; // r30

        {
            // Range: 0x801E74E0 -> 0x801E75D0
            // Local variables
            float y; // f22

            {
                // Range: 0x801E74E0 -> 0x801E75D0
                // Local variables
                int j; // r24

                {
                    // Range: 0x801E74E0 -> 0x801E75D0
                    // Local variables
                    float scale; // f1
                    float t; // f18
                    float intensity; // f0
                    float dist2; // f0
                    float yoff; // f21
                    float xoff; // f19
                }
            }
        }
    }

    // References
    // -> int mCurrentFrame;
    // -> class Vector2 UVMap[1][16][16];
    // -> float UVMapVScale;
    // -> float UVMapUScale;
}
// signature: Graphics::ScreenWarpManager::AnimateShockWave(Graphics::ScreenWarp::Warp &, Math::Vector2 &, float, float, float)
// Range: 0x801E7660 -> 0x801E798C
void Graphics::ScreenWarpManager::AnimateShockWave(class Vector2 & loc /* r28 */, float s /* f14 */) {
    // Local variables
    float freq; // f23
    float mag; // f7
    float radius; // f8
    float magU; // f22
    float magV; // f21
    float r2; // f20
    float ir; // f19
    float ir2; // f0
    int istart; // r1+0x14
    int iend; // r1+0x10
    int jstart; // r1+0xC
    int jend; // r1+0x8
    float x; // f18

    {
        // Range: 0x801E7794 -> 0x801E78E4
        // Local variables
        int i; // r29

        {
            // Range: 0x801E7794 -> 0x801E78E4
            // Local variables
            float y; // f17

            {
                // Range: 0x801E7794 -> 0x801E78E4
                // Local variables
                int j; // r24

                {
                    // Range: 0x801E7794 -> 0x801E78E4
                    // Local variables
                    float scale; // f1
                    float theta; // f1
                    float t; // f1
                    float dist; // f0
                    float dist2; // f1
                    float yoff; // f15
                    float xoff; // f16
                }
            }
        }
    }

    // References
    // -> int mCurrentFrame;
    // -> class Vector2 UVMap[1][16][16];
    // -> float UVMapVScale;
    // -> float UVMapUScale;
}
// signature: Graphics::ScreenWarpManager::AnimateLens(Graphics::ScreenWarp::Warp &, Math::Vector2 &, float, float, float)
// Range: 0x801E7990 -> 0x801E7B98
void Graphics::ScreenWarpManager::AnimateLens(class Warp & warp /* r27 */, class Vector2 & loc /* r30 */, float baseIntensity /* f30 */, float s /* f28 */) {
    // Local variables
    float freq; // f1
    float mag; // f5
    float radius; // f3
    float magU; // f31
    float magV; // f30
    float r2; // f29
    float ir2; // f28
    int istart; // r1+0x14
    int iend; // r1+0x10
    int jstart; // r1+0xC
    int jend; // r1+0x8
    float x; // f7

    {
        // Range: 0x801E7A70 -> 0x801E7B60
        // Local variables
        int i; // r27

        {
            // Range: 0x801E7A70 -> 0x801E7B60
            // Local variables
            float y; // f8

            {
                // Range: 0x801E7A70 -> 0x801E7B60
                // Local variables
                int j; // r29

                {
                    // Range: 0x801E7A70 -> 0x801E7B60
                    // Local variables
                    float scale; // f10
                    float dist2; // f0
                    float yoff; // f9
                    float xoff; // f1
                }
            }
        }
    }

    // References
    // -> int mCurrentFrame;
    // -> class Vector2 UVMap[1][16][16];
    // -> float UVMapVScale;
    // -> float UVMapUScale;
}
// signature: Graphics::ScreenWarpManager::AnimateStaticLens(Graphics::ScreenWarp::Warp &, Math::Vector2 &, float, float, float)
// Range: 0x801E7BA0 -> 0x801E7D78
void Graphics::ScreenWarpManager::AnimateStaticLens(class Vector2 & loc /* r30 */) {
    // Local variables
    float freq; // f0
    float mag; // f5
    float radius; // f2
    float magU; // f31
    float magV; // f30
    float r2; // f29
    float ir2; // f28
    int istart; // r1+0x14
    int iend; // r1+0x10
    int jstart; // r1+0xC
    int jend; // r1+0x8
    float x; // f7

    {
        // Range: 0x801E7C50 -> 0x801E7D40
        // Local variables
        int i; // r27

        {
            // Range: 0x801E7C50 -> 0x801E7D40
            // Local variables
            float y; // f8

            {
                // Range: 0x801E7C50 -> 0x801E7D40
                // Local variables
                int j; // r29

                {
                    // Range: 0x801E7C50 -> 0x801E7D40
                    // Local variables
                    float scale; // f10
                    float dist2; // f0
                    float yoff; // f9
                    float xoff; // f1
                }
            }
        }
    }

    // References
    // -> int mCurrentFrame;
    // -> class Vector2 UVMap[1][16][16];
    // -> float UVMapVScale;
    // -> float UVMapUScale;
}
// signature: Graphics::ScreenWarpManager::AnimateHeatShimmer(Graphics::ScreenWarp::Warp &, Math::Vector2 &, float, float, float)
// Range: 0x801E7D80 -> 0x801E805C
void Graphics::ScreenWarpManager::AnimateHeatShimmer(class Vector2 & loc /* r29 */) {
    // Local variables
    float radius; // f31
    float mag; // f30
    float startTheta; // f29
    int istart; // r1+0x14
    int iend; // r1+0x10
    int jstart; // r1+0xC
    int jend; // r1+0x8
    float phase; // f29
    float startcos0; // f29
    float startsin0; // f5
    float freq; // f0
    float magU; // f0
    float magV; // f0
    float ir; // f8
    float r2; // f0
    float ir2; // f0
    float xstart; // r31
    float ystart; // f4
    float dx; // f9
    float dy; // f0
    float x; // f7

    {
        // Range: 0x801E7F3C -> 0x801E802C
        // Local variables
        int i; // r10

        {
            // Range: 0x801E7F3C -> 0x801E802C
            // Local variables
            float x2; // f12
            float y; // f11
            float sin0; // f10
            float cos0; // f8
            float tempcos; // r31

            {
                // Range: 0x801E7F3C -> 0x801E800C
                // Local variables
                int j; // r11

                {
                    // Range: 0x801E7F3C -> 0x801E800C
                    // Local variables
                    float dist2; // f0
                }
            }
        }
    }

    // References
    // -> class Vector2 UVMap[1][16][16];
    // -> int mCurrentFrame;
    // -> float UVMapUScale;
}
