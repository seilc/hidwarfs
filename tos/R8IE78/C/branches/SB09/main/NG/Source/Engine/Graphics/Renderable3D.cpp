/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\Renderable3D.cpp
*/
class Renderable3DTransform g_identity; // size: 0x40, address: 0x80775F60
int MAX_SPOT; // size: 0x4, address: 0x80692DEC
// signature: Graphics::Renderable3D::Create(Graphics::Geometry *, Graphics::Effect::ParamData *, unsigned char *)
// Range: 0x801C9130 -> 0x801C92DC
void Graphics::Renderable3D::Create(class Renderable3D * this /* r30 */, class Geometry * geom /* r27 */, unsigned char * lightSectorIndices /* r28 */) {
    // References
    // -> class Renderable3DTransform g_identity;
}
// signature: Graphics::Renderable3D::RefreshLightState(const Math::Vector4 &, const Graphics::Viewport &)
// Range: 0x801C9360 -> 0x801C9710
void Graphics::Renderable3D::RefreshLightState(class Renderable3D * this /* r27 */, class Vector4 & bound /* r28 */) {
    // Local variables
    unsigned short lightMask; // r31

    {
        // Range: 0x801C9384 -> 0x801C94A8
        // Local variables
        unsigned int lightSector; // r0
        unsigned int lightIdx; // r4

        {
            // Range: 0x801C9398 -> 0x801C94A8
            // Local variables
            unsigned char testIdx; // r6

            {
                // Range: 0x801C93D4 -> 0x801C94A8
                // Local variables
                unsigned char testIdx; // r6

                {
                    // Range: 0x801C941C -> 0x801C94A8
                    // Local variables
                    unsigned char testIdx; // r6

                    {
                        // Range: 0x801C9464 -> 0x801C94A8
                        // Local variables
                        unsigned char testIdx; // r6
                    }
                }
            }
        }
    }
    {
        // Range: 0x801C94AC -> 0x801C9540
        // Local variables
        int end; // r29
        int i; // r30

        {
            // Range: 0x801C94AC -> 0x801C9540
            // Local variables
            class LightPointSoA & psoa; // r23
            unsigned int result[4]; // r1+0x38

            {
                // Range: 0x801C94B8 -> 0x801C9540
                // Local variables
                int idx; // r0
            }
        }
    }
    {
        // Range: 0x801C9540 -> 0x801C95D4
        // Local variables
        int end; // r30
        int i; // r29

        {
            // Range: 0x801C9540 -> 0x801C95D4
            // Local variables
            class LightSpotSoA & ssoa; // r23
            unsigned int result[4]; // r1+0x28

            {
                // Range: 0x801C954C -> 0x801C95D4
                // Local variables
                int idx; // r0
            }
        }
    }
    {
        // Range: 0x801C95D4 -> 0x801C9668
        // Local variables
        int end; // r30
        int i; // r29

        {
            // Range: 0x801C95D4 -> 0x801C9668
            // Local variables
            class LightPointSoA & psoa; // r23
            unsigned int result[4]; // r1+0x18

            {
                // Range: 0x801C95E0 -> 0x801C9668
                // Local variables
                int idx; // r0
            }
        }
    }
    {
        // Range: 0x801C9668 -> 0x801C96FC
        // Local variables
        int end; // r30
        int i; // r29

        {
            // Range: 0x801C9668 -> 0x801C96FC
            // Local variables
            class LightSpotSoA & ssoa; // r23
            unsigned int result[4]; // r1+0x8

            {
                // Range: 0x801C9674 -> 0x801C96FC
                // Local variables
                int idx; // r0
            }
        }
    }

    // References
    // -> class LightSpotSoA lightSpotDyn[16];
    // -> int spotDynCount;
    // -> class LightPointSoA lightPointDyn[16];
    // -> int pointDynCount;
    // -> class LightSpotSoA lightSpotSec[16];
    // -> int spotSecCount;
    // -> class LightPointSoA lightPointSec[16];
    // -> int pointSecCount;
    // -> unsigned short lightSceneMasks[64];
}
// signature: Graphics::Renderable3D::SetLOD(float, float)
// Range: 0x801C9DF0 -> 0x801C9E58
void Graphics::Renderable3D::SetLOD(class Renderable3D * this /* r31 */) {
}
