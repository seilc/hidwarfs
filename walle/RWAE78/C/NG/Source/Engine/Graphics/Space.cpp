/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Graphics\Space.cpp
*/
// signature: Graphics::MaterialDepotSpace::Create(Graphics::Scene *)
// Range: 0x8028603C -> 0x80286044
void Graphics::MaterialDepotSpace::Create() {
}
// Range: 0x80286044 -> 0x80286048
void Graphics::MaterialDepotSpace::Destroy() {
}
// Range: 0x80286048 -> 0x80286B80
void Graphics::MaterialDepotSpace::GetBatches(class Viewport * viewport /* r15 */, class PoolArray * renderEntries /* r16 */, class PoolArray * dynamics /* r17 */, class RenderableSceneRef * in /* r18 */, int insize /* r1+0x8 */, unsigned short visibleMask /* r1+0xC */, unsigned int flagClearMask /* r19 */) {
    // Local variables
    unsigned int shiftSpaceFilter; // r1+0x128
    unsigned int shiftVisibleMask; // r0
    unsigned int featureMask; // r14
    class DirSmapLight * hackDirLight; // r0

    {
        // Range: 0x80286144 -> 0x80286AC8
        // Local variables
        int i; // r27

        {
            // Range: 0x80286144 -> 0x80286AC8
            // Local variables
            class PassInfo * passes; // r22
            class Renderable * renderable; // r23
            unsigned int sortMask; // r24
            int renderableCount; // r25
            float alphaFadeF; // f29
            int isAlpha; // r3
            int featureSet; // r0
            float alphaFade; // r31
            int vertLOD; // r26
            unsigned int refFlags; // r20

            {
                // Range: 0x80286144 -> 0x80286144
                // Local variables
                class Renderable3D * rend3d; // r21
            }
            {
                // Range: 0x80286144 -> 0x80286AB8
                // Local variables
                int rendIdx; // r21

                {
                    // Range: 0x80286144 -> 0x80286AB8
                    // Local variables
                    unsigned int sortMethod; // r20

                    {
                        // Range: 0x80286144 -> 0x80286AB8
                        // Local variables
                        unsigned int depthKey; // r6
                        float viewdepthSquared; // r1+0x10

                        {
                            // Range: 0x80286144 -> 0x802869E8
                            // Local variables
                            float depthBias; // f0
                            class BroadBound bbound; // r1+0xA8
                            class Vector v; // r1+0x98
                        }
                        {
                            // Range: 0x802869EC -> 0x80286A74
                            // Local variables
                            class Vector pos; // r1+0x88
                        }
                    }
                }
            }
        }
    }

    // References
    // -> class MaterialDepot * g_instance;
    // -> int numVertsBuf[3];
    // -> int numTrisBuf[3];
    // -> int gperf_shadows;
}
// signature: Graphics::MaterialSpace::Create(Graphics::Scene *)
// Range: 0x80286B80 -> 0x80286B88
void Graphics::MaterialSpace::Create() {
}
// signature: Graphics::MaterialSpace::GetBatches(Graphics::Viewport *, Util::PoolArray<Graphics::Space::RenderEntry> &, Util::PoolArray<Graphics::Renderable *> &, Graphics::RenderableSceneRef *, int, unsigned short, unsigned int)
// Range: 0x80286B88 -> 0x80286D50
void Graphics::MaterialSpace::GetBatches(class PoolArray * renderEntries /* r22 */, class PoolArray * dynamics /* r23 */, int insize /* r24 */, unsigned short visibleMask /* r25 */, unsigned int flagClearMask /* r26 */) {
    // Local variables
    unsigned int shiftSpaceFilter; // r29
    unsigned int shiftVisibleMask; // r0

    {
        // Range: 0x80286BC4 -> 0x80286D24
        // Local variables
        int i; // r28

        {
            // Range: 0x80286BC4 -> 0x80286D24
            // Local variables
            class Renderable * renderable; // r4
            unsigned int refFlags; // r27
        }
    }
}
