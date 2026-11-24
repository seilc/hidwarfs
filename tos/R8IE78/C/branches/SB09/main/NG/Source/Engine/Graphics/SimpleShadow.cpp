/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WADSpeed.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\SimpleShadow.cpp
*/
float gFloatTex[8]; // size: 0x20, address: 0x806D1D20
class EntityHandle * defaultShadowTexture; // size: 0x4, address: 0x807841CC
// Range: 0x80216190 -> 0x80216288
void Graphics::SimpleShadow_CacheInit(class ShadowSimpleCache * cache /* r31 */, class ModelInstanceArticle * article /* r27 */, unsigned long long uid /* r30:r28 */, class ShadowSimpleParams * shadowSimpleParams /* r29 */) {
    // References
    // -> class EntityHandle * defaultShadowTexture;
}
// Range: 0x80216290 -> 0x80216608
bool Graphics::SimpleShadow::CalcCorners(class ShadowSimpleCache * cache /* r30 */, class Matrix43 * mat /* r31 */) {
    // Local variables
    class Vector tempnorm; // r1+0x68
    float lenSqr; // f0
    class Vector shadowLeft; // r1+0x58
    class Vector shadowAt; // r1+0x48
}
// signature: Graphics::SimpleShadow::UpdateSimpleShadow(Graphics::Renderable3D *, Graphics::Scene *, unsigned int)
// Range: 0x80216610 -> 0x80216BBC
void Graphics::SimpleShadow::UpdateSimpleShadow(class SimpleShadow * this /* r28 */, class Renderable3D * castRend /* r29 */) {
    // Local variables
    unsigned int ownerMoved; // r31
    class Vector ownerPos; // r1+0x38

    {
        // Range: 0x802166B8 -> 0x802167A8
        // Local variables
        float ds2_moved; // f0
        class Vector delta; // r1+0x28
    }
}
// signature: Graphics::ShadowSimpleCache::Collide(Graphics::RenderableSceneRef &, unsigned int)
// Range: 0x80216BC0 -> 0x8021706C
void Graphics::ShadowSimpleCache::Collide(class ShadowSimpleCache * this /* r27 */) {
    // Local variables
    unsigned int refFlags; // r28

    {
        // Range: 0x80216C6C -> 0x80216FE8
        {
            // Range: 0x80216CAC -> 0x80216FE8
            // Local variables
            class LineGradient xformGrad; // r1+0x88
            class Matrix43 invMat; // r1+0xB0
            class Vector xformLineEnd; // r1+0x38
            class Vector xformLineStart; // r1+0x48
        }
    }

    // References
    // -> static class Matrix43 _matZero;
}
// signature: Graphics::SimpleShadow::SceneCollide(Graphics::Renderable3D *, Graphics::Scene *, unsigned int)
// Range: 0x80218000 -> 0x80218204
void Graphics::SimpleShadow::SceneCollide(unsigned int anyVisibleMask /* r30 */) {
    // Local variables
    class ShadowSimpleCache * cache; // r31

    {
        // Range: 0x80218070 -> 0x802181C4
        // Local variables
        int rl; // r27

        {
            // Range: 0x80218070 -> 0x802181C4
            // Local variables
            int insize; // r26

            {
                // Range: 0x80218104 -> 0x802181C4
                // Local variables
                int i; // r25
            }
        }
    }
}
// Range: 0x80218210 -> 0x802184D8
void Graphics::SimpleShadow::NudgeIt(class ShadowSimpleCache * cache /* r30 */, class Vector & ownerPos /* r31 */) {
    // Local variables
    class Vector * vert; // r5
    class Vector xformvert[3]; // r1+0x18
    class Vector xformnorm; // r1+0x8
    float nx; // f3
    float nz; // f4
    float pdot; // f1

    {
        // Range: 0x802183A0 -> 0x802183E0
        // Local variables
        float poo; // f0
    }
    {
        // Range: 0x80218400 -> 0x8021848C
        // Local variables
        int i; // r6

        {
            // Range: 0x80218400 -> 0x8021848C
            // Local variables
            class Vector * v1; // r3
        }
    }

    // References
    // -> class Vector4 vec4Zero;
}
// signature: Graphics::SimpleShadow::Draw(Graphics::Viewport *, _GXTexObj *)
// Range: 0x802184E0 -> 0x802188CC
void Graphics::SimpleShadow::Draw(class SimpleShadow * this /* r30 */) {
    // Local variables
    class _GXColor shadowColor; // r1+0x1C
    class _GXColor ambColor; // r1+0x18
    class Matrix43 & invCamMat; // r0
    class Texture * texture; // r0

    {
        // Range: 0x8021870C -> 0x80218840
        // Local variables
        int i; // r31

        {
            // Range: 0x8021870C -> 0x80218840
            // Local variables
            class _GXColor ambColor; // r1+0x14
        }
    }

    // References
    // -> class Viewport * activeViewport;
    // -> float gFloatTex[8];
}
