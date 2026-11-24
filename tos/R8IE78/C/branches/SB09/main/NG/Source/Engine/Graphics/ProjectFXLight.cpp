/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WADSpeed.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\ProjectFXLight.cpp
*/
static unsigned int s_lightCirclePixels[1280]; // size: 0x1400, address: 0x806D0860
static class _GXTexObj s_lightCircleTexObj; // size: 0x20, address: 0x80784198
float g_wiiBackfaceScale; // size: 0x4, address: 0x806D1C60
unsigned char g_wiiBackfaceOffset; // size: 0x1, address: 0x806D1C64
class ProjectFXLight * g_current; // size: 0x4, address: 0x807841B8
// signature: Graphics::ProjectFXLight::Create(Graphics::Scene *)
// Range: 0x8020B5A0 -> 0x8020B630
void Graphics::ProjectFXLight::Create() {
    // References
    // -> static unsigned int s_lightCirclePixels[1280];
    // -> static class _GXTexObj s_lightCircleTexObj;
}
// Range: 0x8020B630 -> 0x8020B7EC
void Graphics::ProjectFXLight::PreProcess() {
    // Local variables
    class PoolArray & lights; // r0
    unsigned char baseIndex; // r9

    {
        // Range: 0x8020B668 -> 0x8020B7E8
        // Local variables
        unsigned int i; // r10

        {
            // Range: 0x8020B668 -> 0x8020B7E8
            // Local variables
            float pz; // f0
            float py; // f0
            float px; // f0
            float radius; // f0
        }
    }
}
// signature: Graphics::ProjectFXLight::CacheCollide(Graphics::RenderableSceneRef &, unsigned int)
// Range: 0x8020B830 -> 0x8020BFCC
void Graphics::ProjectFXLight::CacheCollide(class RenderableSceneRef & ref /* r21 */) {
    // Local variables
    unsigned int refFlags; // r7

    {
        // Range: 0x8020B94C -> 0x8020BF74
        // Local variables
        unsigned int cacheidx; // r22

        {
            // Range: 0x8020B94C -> 0x8020BF74
            // Local variables
            float diff2; // f0

            {
                // Range: 0x8020B94C -> 0x8020BF30
                // Local variables
                class ChannelInfo & ninfo; // r0

                {
                    // Range: 0x8020B94C -> 0x8020BF30
                    // Local variables
                    class Vector localBoundUpper; // r1+0xB8
                    class Vector localBoundLower; // r1+0xC8
                    float localRadius; // f24
                    class Matrix43 invMat; // r1+0x118
                    class Vector localCenter; // r1+0xD8
                }
            }
        }
    }

    // References
    // -> static class Matrix43 _matZero;
}
// Range: 0x8020C430 -> 0x8020CD08
void Graphics::ProjectFXLight::DrawReceivers(class ProjectFXLight * this /* r14 */, class Viewport * viewp /* r28 */) {
    // Local variables
    class FrustumPlanes & frustPlanes; // r31
    bool lodEnabled; // r0
    class Matrix43 & invCamMat; // r30
    class _GXColor ambOffsetColor; // r1+0x3C

    {
        // Range: 0x8020C6C0 -> 0x8020CC70
        // Local variables
        unsigned int cacheidx; // r29

        {
            // Range: 0x8020C6C0 -> 0x8020CC70
            // Local variables
            class Matrix43 texMtxZ; // r1+0xB0
            class Matrix43 texMtxXY; // r1+0xE0
            float invdiam; // f29
            class _GXColor wiiLightColor; // r1+0x38
            class Vector & lightColor; // r15
            float projectScale; // f28
            class _GXLightObj tmpLight; // r1+0x110
            class Vector xformPos; // r1+0x40
            class FXLightCache & curCache; // r0

            {
                // Range: 0x8020C6C4 -> 0x8020C6C4
                // Local variables
                long ipoly; // r15
            }
            {
                // Range: 0x8020C6C4 -> 0x8020CC70
                // Local variables
                int entidx; // r15

                {
                    // Range: 0x8020C6C4 -> 0x8020CC70
                    // Local variables
                    unsigned char curShaderHandle; // r0
                    class Effect * effect; // r16
                    int vertLOD; // r1+0x2C
                    float alphaFade; // r1+0x30
                    class Renderable3D * rend3d; // r1+0x34

                    {
                        // Range: 0x8020CB58 -> 0x8020CC70
                        // Local variables
                        class Matrix43 objectToWorldMat; // r1+0x50
                        class Matrix43 objectTexMtx; // r1+0x80
                        class Shader * shader; // r17
                    }
                }
            }
        }
    }

    // References
    // -> float g_wiiBackfaceScale;
    // -> unsigned char g_wiiBackfaceOffset;
    // -> static class _GXTexObj s_lightCircleTexObj;
}
