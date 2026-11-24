/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Graphics\Space.cpp
*/
// signature: Graphics::MaterialDepotSpace::GetBatches(Graphics::Viewport *, Util::PoolArray<Graphics::Space::RenderEntry> &, Util::PoolArray<Graphics::Renderable *> &, Graphics::RenderableSceneRef *, int, unsigned short, unsigned int)
// Range: 0x8031B360 -> 0x8031BC2C
void Graphics::MaterialDepotSpace::GetBatches(class Viewport * viewport /* r26 */, class PoolArray & renderEntries /* r27 */, class PoolArray & dynamics /* r28 */, int insize /* r29 */, unsigned short visibleMask /* r30 */, unsigned int flagClearMask /* r31 */) {
    // Local variables
    unsigned int shiftSpaceFilter; // r21
    unsigned int shiftVisibleMask; // r0

    {
        // Range: 0x8031B414 -> 0x8031BB78
        // Local variables
        int i; // r20

        {
            // Range: 0x8031B414 -> 0x8031BB78
            // Local variables
            class PassInfo * passes; // r0
            class Renderable * renderable; // r6
            unsigned int sortMask; // r0
            int renderableCount; // r7
            float alphaFadeF; // f30
            int isAlpha; // r4
            int featureSet; // r0
            float alphaFade; // r31
            int vertLOD; // r18
            unsigned int refFlags; // r19

            {
                // Range: 0x8031B414 -> 0x8031B414
                // Local variables
                class Renderable3D * rend3d; // r17
            }
            {
                // Range: 0x8031B414 -> 0x8031BB78
                // Local variables
                int rendIdx; // r0

                {
                    // Range: 0x8031B414 -> 0x8031BB78
                    // Local variables
                    unsigned int sortMethod; // r4

                    {
                        // Range: 0x8031B414 -> 0x8031BB78
                        // Local variables
                        unsigned int depthKey; // r10
                        float viewdepthSquared; // r1+0x8

                        {
                            // Range: 0x8031B414 -> 0x8031BAA0
                            // Local variables
                            float depthBias; // f0
                            class Vector v; // r1+0x60
                        }
                        {
                            // Range: 0x8031BAA4 -> 0x8031BB2C
                            // Local variables
                            class Vector pos; // r1+0x50
                        }
                    }
                }
            }
        }
    }

    // References
    // -> class MaterialDepot * g_instance;
}
// signature: Graphics::MaterialSpace::GetBatches(Graphics::Viewport *, Util::PoolArray<Graphics::Space::RenderEntry> &, Util::PoolArray<Graphics::Renderable *> &, Graphics::RenderableSceneRef *, int, unsigned short, unsigned int)
// Range: 0x8031BC2C -> 0x8031BDF4
void Graphics::MaterialSpace::GetBatches(class PoolArray & renderEntries /* r22 */, class PoolArray & dynamics /* r23 */, int insize /* r24 */, unsigned short visibleMask /* r25 */, unsigned int flagClearMask /* r26 */) {
    // Local variables
    unsigned int shiftSpaceFilter; // r29
    unsigned int shiftVisibleMask; // r0

    {
        // Range: 0x8031BC68 -> 0x8031BDC8
        // Local variables
        int i; // r28

        {
            // Range: 0x8031BC68 -> 0x8031BDC8
            // Local variables
            class Renderable * renderable; // r4
            unsigned int refFlags; // r27
        }
    }
}
