/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Graphics\Renderable3D.cpp
*/
class Renderable3DTransform g_identity; // size: 0x40, address: 0x807FFD20
// signature: Graphics::Renderable3D::Create(Graphics::Geometry *, Graphics::Effect::ParamData *, unsigned char *)
// Range: 0x80260120 -> 0x80260360
void Graphics::Renderable3D::Create() {
    // References
    // -> class Renderable3DTransform g_identity;
}
// Range: 0x80260360 -> 0x80260440
void Graphics::Renderable3D::ComputeBroadBound(class Vector * lower /* r30 */, class Vector * upper /* r31 */) const {
    // Local variables
    class BroadBound bbound; // r1+0x8
}
// signature: Graphics::Renderable3D::RefreshLightState(const Math::Vector4 &, const Graphics::Viewport &)
// Range: 0x80260440 -> 0x8026096C
void Graphics::Renderable3D::RefreshLightState(class Renderable3D * this /* r29 */, class Vector4 * bound /* r30 */) {
    // Local variables
    unsigned short lightMask; // r31

    {
        // Range: 0x80260464 -> 0x80260588
        // Local variables
        unsigned int lightSector; // r0
        unsigned int lightIdx; // r4

        {
            // Range: 0x80260478 -> 0x80260588
            // Local variables
            unsigned char testIdx; // r6

            {
                // Range: 0x802604B4 -> 0x80260588
                // Local variables
                unsigned char testIdx; // r6

                {
                    // Range: 0x802604FC -> 0x80260588
                    // Local variables
                    unsigned char testIdx; // r6

                    {
                        // Range: 0x80260544 -> 0x80260588
                        // Local variables
                        unsigned char testIdx; // r6
                    }
                }
            }
        }
    }
    {
        // Range: 0x8026058C -> 0x80260670
        // Local variables
        int end; // r25
        int i; // r26

        {
            // Range: 0x8026058C -> 0x80260670
            // Local variables
            class LightPointSoA * psoa; // r24
            unsigned int result[4]; // r1+0x38

            {
                // Range: 0x802605BC -> 0x80260670
                // Local variables
                int idx; // r0
            }
        }
    }
    {
        // Range: 0x8026067C -> 0x80260764
        // Local variables
        int end; // r25
        int i; // r24

        {
            // Range: 0x8026067C -> 0x80260764
            // Local variables
            class LightSpotSoA * ssoa; // r26
            unsigned int result[4]; // r1+0x28

            {
                // Range: 0x802606B0 -> 0x80260764
                // Local variables
                int idx; // r0
            }
        }
    }
    {
        // Range: 0x80260770 -> 0x80260858
        // Local variables
        int end; // r25
        int i; // r24

        {
            // Range: 0x80260770 -> 0x80260858
            // Local variables
            class LightPointSoA * psoa; // r26
            unsigned int result[4]; // r1+0x18

            {
                // Range: 0x802607A4 -> 0x80260858
                // Local variables
                int idx; // r0
            }
        }
    }
    {
        // Range: 0x80260864 -> 0x8026094C
        // Local variables
        int end; // r25
        int i; // r24

        {
            // Range: 0x80260864 -> 0x8026094C
            // Local variables
            class LightSpotSoA * ssoa; // r26
            unsigned int result[4]; // r1+0x8

            {
                // Range: 0x80260898 -> 0x8026094C
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
// Range: 0x80261160 -> 0x8026120C
void Graphics::Renderable3D::SetLOD() {
}
