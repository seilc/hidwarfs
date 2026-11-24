/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WADSpeed.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\Space.cpp
*/
// signature: Graphics::MaterialDepotSpace::GetBatches(Graphics::Viewport *, Util::PoolArray<Graphics::Space::RenderEntry> &, Util::PoolArray<Graphics::Renderable *> &, Graphics::Scene *, unsigned short, unsigned int)
// Range: 0x802188D0 -> 0x80219074
void Graphics::MaterialDepotSpace::GetBatches(class Viewport * viewport /* r18 */, class PoolArray & renderEntries /* r19 */, class PoolArray & dynamics /* r20 */, unsigned short visibleMask /* r21 */, unsigned int flagClearMask /* r22 */) {
    // Local variables
    int totalSize; // r5
    unsigned int shiftSpaceFilter; // r25
    unsigned int shiftVisibleMask; // r0

    {
        // Range: 0x8021891C -> 0x80218980
        // Local variables
        int rl; // r0
    }
    {
        // Range: 0x8021898C -> 0x80219014
        // Local variables
        int rl; // r14

        {
            // Range: 0x8021898C -> 0x80219014
            // Local variables
            int insize; // r24

            {
                // Range: 0x8021898C -> 0x80219014
                // Local variables
                int i; // r23

                {
                    // Range: 0x8021898C -> 0x80219014
                    // Local variables
                    class Renderable * renderable; // r3
                    unsigned int sortMask; // r15
                    int renderableCount; // r5
                    float alphaFadeF; // f1
                    int isAlpha; // r3
                    int featureSet; // r0
                    unsigned int refFlags; // r15

                    {
                        // Range: 0x8021898C -> 0x8021898C
                        // Local variables
                        class Renderable3D * rend3d; // r16
                    }
                    {
                        // Range: 0x8021898C -> 0x80219014
                        // Local variables
                        int rendIdx; // r0

                        {
                            // Range: 0x8021898C -> 0x80219014
                            // Local variables
                            unsigned int sortMethod; // r4

                            {
                                // Range: 0x8021898C -> 0x80219014
                                // Local variables
                                unsigned int depthKey; // r7
                                float viewdepthSquared; // r1+0x8

                                {
                                    // Range: 0x8021898C -> 0x80218F14
                                    // Local variables
                                    float depthBias; // f0
                                    class Vector v; // r1+0x50
                                }
                                {
                                    // Range: 0x80218F18 -> 0x80218FA0
                                    // Local variables
                                    class Vector pos; // r1+0x40
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    // References
    // -> class MaterialDepot * g_instance;
}
