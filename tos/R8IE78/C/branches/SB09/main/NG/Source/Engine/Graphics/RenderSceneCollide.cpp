/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WADSpeed.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\RenderSceneCollide.cpp
*/
// signature: Graphics::RenderSceneCollider::Create(Graphics::Scene *, Graphics::ProjectShadowView *, Graphics::ProjectFXLight *)
// Range: 0x80215B50 -> 0x80215B74
void Graphics::RenderSceneCollider::Create(class Scene * scene /* r7 */) {
}
// signature: Graphics::RenderSceneCollider::AddViewport(Graphics::Viewport *)
// Range: 0x80215B80 -> 0x80215BC8
void Graphics::RenderSceneCollider::AddViewport() {
    {
        // Range: 0x80215B98 -> 0x80215BAC
        // Local variables
        unsigned int i; // r0
    }
}
// Range: 0x80215BD0 -> 0x80216190
void Graphics::RenderSceneCollider::Collide(class RenderSceneCollider * this /* r28 */) {
    // Local variables
    unsigned int anyVisibleMask; // r31
    int simpCacheCount; // r30
    class ShadowSimpleCache * simpCacheList[2]; // r1+0x8
    class BroadBound simpCacheBound[2]; // r1+0x10
    int psviewCacheCount; // r24
    int pfxLightCount; // r29

    {
        // Range: 0x80215C4C -> 0x80215C6C
        // Local variables
        unsigned int cvp; // r0
    }
    {
        // Range: 0x80215C88 -> 0x80215D4C
        // Local variables
        int qnum; // r0

        {
            // Range: 0x80215C88 -> 0x80215D4C
            // Local variables
            class ShadowSimpleCache * cache; // r6
        }
    }
    {
        // Range: 0x80215D90 -> 0x80215F74
        // Local variables
        float simp1Z; // f28
        float simp1X; // f29
        float simp0Z; // f30
        float simp0X; // f31

        {
            // Range: 0x80215DA4 -> 0x80215F74
            // Local variables
            int rl; // r24

            {
                // Range: 0x80215DA4 -> 0x80215F74
                // Local variables
                int insize; // r27

                {
                    // Range: 0x80215DBC -> 0x80215F74
                    // Local variables
                    int i; // r30

                    {
                        // Range: 0x80215DBC -> 0x80215F74
                        // Local variables
                        float simpDX1; // f0
                        float simpDX0; // f0
                        float boundR; // f24
                        float boundZ; // f25
                        float boundY; // f26
                        float boundX; // f27
                    }
                }
            }
        }
    }
    {
        // Range: 0x80215F78 -> 0x80216124
        // Local variables
        int rl; // r23

        {
            // Range: 0x80215F78 -> 0x80216124
            // Local variables
            int insize; // r22

            {
                // Range: 0x80215F84 -> 0x80216124
                // Local variables
                int i; // r21

                {
                    // Range: 0x80215F9C -> 0x80216048
                    // Local variables
                    int qnum; // r20

                    {
                        // Range: 0x80215F9C -> 0x80216048
                        // Local variables
                        class ShadowSimpleCache * cache; // r3
                    }
                }
            }
        }
    }
}
