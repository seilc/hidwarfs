/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Graphics\SimpleShadow.cpp
*/
float gFloatTex[8]; // size: 0x20, address: 0x807BF300
class EntityHandle * defaultShadowTexture; // size: 0x4, address: 0x80848DCC
// Range: 0x802FE99C -> 0x802FEA60
void Graphics::SimpleShadow_CacheInit(class ShadowSimpleCache * cache /* r27 */, class ModelInstanceArticle * article /* r28 */, unsigned long long uid /* r30:r29 */, class ShadowSimpleParams * shadowSimpleParams /* r31 */) {
    // References
    // -> class EntityHandle * defaultShadowTexture;
}
// Range: 0x802FEA60 -> 0x802FED90
bool Graphics::SimpleShadow::CalcCorners(class ShadowSimpleCache * cache /* r29 */, class Matrix43 * mat /* r30 */) {
    // Local variables
    float ecc; // f31
    class Vector tempnorm; // r1+0x68
    float lenSqr; // f0
    class Vector shadowRight; // r1+0x58
    class Vector shadowAt; // r1+0x48
}
// signature: Graphics::SimpleShadow::UpdateSimpleShadow(Graphics::Renderable3D *, Graphics::Scene *, unsigned int)
// Range: 0x802FED90 -> 0x802FF33C
void Graphics::SimpleShadow::UpdateSimpleShadow(class SimpleShadow * this /* r27 */, class Renderable3D * castRend /* r28 */) {
    // Local variables
    unsigned int ownerMoved; // r31
    class Vector ownerPos; // r1+0x38

    {
        // Range: 0x802FEE64 -> 0x802FEF18
        // Local variables
        float ds2_moved; // f0
        class Vector delta; // r1+0x28
    }
}
// signature: Graphics::SimpleShadow::SceneCollide(Graphics::Renderable3D *, Graphics::Scene *, unsigned int)
// Range: 0x802FF33C -> 0x802FFA3C
void Graphics::SimpleShadow::SceneCollide(unsigned int anyVisibleMask /* r21 */) {
    // Local variables
    float depth; // f0
    class BroadBound bound; // r1+0x88
    class LineGradient grad; // r1+0x70
    class RenderableSceneRef * in; // r0
    int insize; // r24

    {
        // Range: 0x802FF524 -> 0x802FF9D0
        // Local variables
        int i; // r23

        {
            // Range: 0x802FF524 -> 0x802FF9D0
            // Local variables
            unsigned int refFlags; // r22

            {
                // Range: 0x802FF524 -> 0x802FF54C
                {
                    // Range: 0x802FF524 -> 0x802FF54C
                    // Local variables
                    class LineGradient xformGrad; // r1+0x58
                    class Matrix43 invMat; // r1+0xD8
                    class Vector xformLineEnd; // r1+0x38
                    class Vector xformLineStart; // r1+0x48
                }
            }
        }
    }

    // References
    // -> static class Matrix43 _matZero;
}
// Range: 0x80300900 -> 0x80300BB0
void Graphics::SimpleShadow::NudgeIt(class ShadowSimpleCache * cache /* r30 */, class Vector & ownerPos /* r31 */) {
    // Local variables
    class Vector * vert; // r5
    class Vector xformvert[3]; // r1+0x18
    class Vector xformnorm; // r1+0x8
    float nx; // f3
    float nz; // f4
    float pdot; // f1

    {
        // Range: 0x80300A84 -> 0x80300ABC
        // Local variables
        float poo; // f0
    }
    {
        // Range: 0x80300AE0 -> 0x80300B58
        // Local variables
        int i; // r6

        {
            // Range: 0x80300AE0 -> 0x80300B58
            // Local variables
            class Vector * v1; // r3
        }
    }

    // References
    // -> class Vector4 vec4Zero;
}
// signature: Graphics::SimpleShadow::Draw(Graphics::Viewport *, _GXTexObj *)
// Range: 0x80300BB0 -> 0x80301220
void Graphics::SimpleShadow::Draw(class SimpleShadow * this /* r29 */) {
    // Local variables
    class _GXColor shadowColor; // r1+0x20
    class _GXColor ambColor; // r1+0x1C
    class Matrix43 & invCamMat; // r0
    class Texture * texture; // r0

    {
        // Range: 0x80301068 -> 0x80301108
        // Local variables
        int i; // r31

        {
            // Range: 0x80301068 -> 0x80301108
            // Local variables
            class _GXColor ambColor; // r1+0x18
        }
    }

    // References
    // -> class Viewport * activeViewport;
    // -> float gFloatTex[8];
    // -> enum _GXBlendFactor blendFactorTable[15];
    // -> static int dirtyCompoundFlags;
    // -> class StateNode stateNodes[92];
    // -> static class StateHandler stateHandlerTable[92];
}
