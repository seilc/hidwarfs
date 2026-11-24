/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Graphics\SimpleShadow.cpp
*/
float gFloatTex[8]; // size: 0x20, address: 0x80709740
class EntityHandle * defaultShadowTexture; // size: 0x4, address: 0x8080185C
// Range: 0x8026DB18 -> 0x8026DC18
void Graphics::SimpleShadow_CacheInit(class ShadowSimpleCache * cache /* r28 */, class ModelInstanceArticle * article /* r29 */, float radius /* f31 */) {
    // References
    // -> class EntityHandle * defaultShadowTexture;
}
// Range: 0x8026DC18 -> 0x8026DF40
bool Graphics::SimpleShadow::CalcCorners(class ShadowSimpleCache * cache /* r29 */, class Matrix43 * mat /* r30 */) {
    // Local variables
    float ecc; // f31
    class Vector tempnorm; // r1+0x68
    float lenSqr; // f0
    class Vector shadowRight; // r1+0x58
    class Vector shadowAt; // r1+0x48
}
// signature: Graphics::SimpleShadow::UpdateSimpleShadow(Graphics::Renderable3D *, Graphics::Scene *, unsigned int)
// Range: 0x8026DF40 -> 0x8026E524
void Graphics::SimpleShadow::UpdateSimpleShadow(class SimpleShadow * this /* r26 */, class Renderable3D * castRend /* r27 */) {
    // Local variables
    unsigned int ownerMoved; // r28
    class Vector ownerPos; // r1+0x38

    {
        // Range: 0x8026E02C -> 0x8026E0E8
        // Local variables
        float ds2_moved; // f0
        class Vector delta; // r1+0x28
    }
}
// signature: Graphics::SimpleShadow::SceneCollide(Graphics::Renderable3D *, Graphics::Scene *, unsigned int)
// Range: 0x8026E524 -> 0x8026EC34
void Graphics::SimpleShadow::SceneCollide(unsigned int anyVisibleMask /* r21 */) {
    // Local variables
    float depth; // f0
    class BroadBound bound; // r1+0x88
    class LineGradient grad; // r1+0x70
    class RenderableSceneRef * in; // r0
    int insize; // r24

    {
        // Range: 0x8026E70C -> 0x8026EBC8
        // Local variables
        int i; // r23

        {
            // Range: 0x8026E70C -> 0x8026EBC8
            // Local variables
            unsigned int refFlags; // r22

            {
                // Range: 0x8026E70C -> 0x8026E734
                {
                    // Range: 0x8026E70C -> 0x8026E734
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
// Range: 0x8026FAD4 -> 0x8026FDCC
void Graphics::SimpleShadow::NudgeIt(class ShadowSimpleCache * cache /* r30 */, class Vector * ownerPos /* r31 */) {
    // Local variables
    class Vector * vert; // r5
    class Vector xformvert[3]; // r1+0x18
    class Vector xformnorm; // r1+0x8
    float nx; // f3
    float nz; // f4
    float pdot; // f1

    {
        // Range: 0x8026FC80 -> 0x8026FCB8
        // Local variables
        float poo; // f0
    }
    {
        // Range: 0x8026FCDC -> 0x8026FD54
        // Local variables
        int i; // r6

        {
            // Range: 0x8026FCDC -> 0x8026FD54
            // Local variables
            class Vector * v1; // r3
        }
    }

    // References
    // -> class Vector4 vec4Zero;
}
// signature: Graphics::SimpleShadow::Draw(Graphics::Viewport *, _GXTexObj *)
// Range: 0x8026FDCC -> 0x80270214
void Graphics::SimpleShadow::Draw(class SimpleShadow * this /* r29 */) {
    // Local variables
    class _GXColor shadowColor; // r1+0xC
    class Matrix43 * invCamMat; // r0
    class Texture * texture; // r0

    {
        // Range: 0x80270148 -> 0x80270168
        // Local variables
        int i; // r10
    }

    // References
    // -> class Viewport * activeViewport;
    // -> float gFloatTex[8];
    // -> enum _GXBlendFactor blendFactorTable[15];
    // -> static int dirtyCompoundFlags;
    // -> class StateNode stateNodes[92];
    // -> static class StateHandler stateHandlerTable[92];
}
