/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Graphics\Renderable3D.cpp
*/
class Renderable3DTransform g_identity; // size: 0x40, address: 0x80847708
// signature: Graphics::Renderable3D::Create(Graphics::Geometry *, Graphics::Effect::ParamData *, unsigned char *)
// Range: 0x802F6F2C -> 0x802F7150
void Graphics::Renderable3D::Create(class Renderable3D * this /* r30 */, class Geometry * geom /* r28 */, unsigned char * lightSectorIndices /* r29 */) {
    // References
    // -> class Renderable3DTransform g_identity;
}
// signature: Graphics::Renderable3D::RefreshLightState(const Math::Vector4 &, const Graphics::Viewport &)
// Range: 0x802F7150 -> 0x802F767C
void Graphics::Renderable3D::RefreshLightState(class Renderable3D * this /* r29 */, class Vector4 & bound /* r30 */) {
    // Local variables
    unsigned short lightMask; // r31

    {
        // Range: 0x802F7174 -> 0x802F7298
        // Local variables
        unsigned int lightSector; // r0
        unsigned int lightIdx; // r4

        {
            // Range: 0x802F7188 -> 0x802F7298
            // Local variables
            unsigned char testIdx; // r6

            {
                // Range: 0x802F71C4 -> 0x802F7298
                // Local variables
                unsigned char testIdx; // r6

                {
                    // Range: 0x802F720C -> 0x802F7298
                    // Local variables
                    unsigned char testIdx; // r6

                    {
                        // Range: 0x802F7254 -> 0x802F7298
                        // Local variables
                        unsigned char testIdx; // r6
                    }
                }
            }
        }
    }
    {
        // Range: 0x802F729C -> 0x802F7380
        // Local variables
        int end; // r25
        int i; // r26

        {
            // Range: 0x802F729C -> 0x802F7380
            // Local variables
            class LightPointSoA & psoa; // r24
            unsigned int result[4]; // r1+0x38

            {
                // Range: 0x802F72CC -> 0x802F7380
                // Local variables
                int idx; // r0
            }
        }
    }
    {
        // Range: 0x802F738C -> 0x802F7474
        // Local variables
        int end; // r25
        int i; // r24

        {
            // Range: 0x802F738C -> 0x802F7474
            // Local variables
            class LightSpotSoA & ssoa; // r26
            unsigned int result[4]; // r1+0x28

            {
                // Range: 0x802F73C0 -> 0x802F7474
                // Local variables
                int idx; // r0
            }
        }
    }
    {
        // Range: 0x802F7480 -> 0x802F7568
        // Local variables
        int end; // r25
        int i; // r24

        {
            // Range: 0x802F7480 -> 0x802F7568
            // Local variables
            class LightPointSoA & psoa; // r26
            unsigned int result[4]; // r1+0x18

            {
                // Range: 0x802F74B4 -> 0x802F7568
                // Local variables
                int idx; // r0
            }
        }
    }
    {
        // Range: 0x802F7574 -> 0x802F765C
        // Local variables
        int end; // r25
        int i; // r24

        {
            // Range: 0x802F7574 -> 0x802F765C
            // Local variables
            class LightSpotSoA & ssoa; // r26
            unsigned int result[4]; // r1+0x8

            {
                // Range: 0x802F75A8 -> 0x802F765C
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
// Range: 0x802F7E2C -> 0x802F7ED8
void Graphics::Renderable3D::SetLOD() {
}
