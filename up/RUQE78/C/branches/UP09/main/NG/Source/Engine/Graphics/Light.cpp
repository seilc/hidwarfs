/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Graphics\Light.cpp
*/
class LightKitDefaultTextureData * g_defaultData; // size: 0x4, address: 0x80846710
class Texture * g_defaultTex; // size: 0x4, address: 0x80846714
static float s_ambientColor[3]; // size: 0xC, address: 0x807BEFF0
static float s_dirColor0[3]; // size: 0xC, address: 0x807BEFFC
static float s_dirColor1[3]; // size: 0xC, address: 0x80846718
class LightKitManager * g_instance; // size: 0x4, address: 0x80846724
class LightSectorManager g_lightSectorManager; // size: 0x44, address: 0x80846728
// Range: 0x802E7C78 -> 0x802E7E80
void Graphics::LightKitData::Create(class LightKitData * this /* r26 */, class LightKitAsset & asset /* r27 */, class Texture * lookupTex /* r28 */) {
    // Local variables
    class Vector tmpVec[4]; // r1+0x48
    class Matrix33 tmpEuler; // r1+0x18

    {
        // Range: 0x802E7CE0 -> 0x802E7CFC
        // Local variables
        int i; // r29
    }

    // References
    // -> class Texture * g_defaultTex;
}
// signature: Graphics::LightKitDefaultTextureData::Init(float *, float *, float *)
// Range: 0x802E7E80 -> 0x802E8108
void Graphics::LightKitDefaultTextureData::Init(class LightKitDefaultTextureData * this /* r31 */) {
    // Local variables
    unsigned char * tilePtr; // r10

    {
        // Range: 0x802E7EAC -> 0x802E8040
        // Local variables
        int tileY; // r11

        {
            // Range: 0x802E7EAC -> 0x802E8030
            // Local variables
            int tileX; // r12

            {
                // Range: 0x802E7EAC -> 0x802E8030
                // Local variables
                unsigned char * tileGB; // r28
                unsigned char * tileAR; // r29

                {
                    // Range: 0x802E7EAC -> 0x802E8024
                    // Local variables
                    int y; // r27

                    {
                        // Range: 0x802E7EAC -> 0x802E8024
                        // Local variables
                        float blue1; // f11
                        float green1; // f8
                        float red1; // f9
                        float lerp1; // f31

                        {
                            // Range: 0x802E7EAC -> 0x802E7FEC
                            // Local variables
                            int x; // r26

                            {
                                // Range: 0x802E7EAC -> 0x802E7FEC
                                // Local variables
                                float blue; // f12
                                float green; // f1
                                float red; // f31
                                float lerp0; // f12
                            }
                        }
                    }
                }
            }
        }
    }
}
// Range: 0x802E8108 -> 0x802E81B8
void Graphics::LightKitData::Startup() {
    // References
    // -> class Texture * g_defaultTex;
    // -> static float s_dirColor1[3];
    // -> class LightKitDefaultTextureData * g_defaultData;
    // -> static float s_dirColor0[3];
    // -> static float s_ambientColor[3];
    // -> struct {} __vt__Q28Graphics7Texture;
}
// Range: 0x802E8200 -> 0x802E8224
void Graphics::LightKitData::RenderStartup() {
    // References
    // -> class LightKitDefaultTextureData * g_defaultData;
}
// Range: 0x802E8224 -> 0x802E8294
void Graphics::LightKitData::RenderShutdown() {
    // References
    // -> class Texture * g_defaultTex;
    // -> class LightKitDefaultTextureData * g_defaultData;
}
// signature: Graphics::LightKitData::EnableLookupTexture(int) const
// Range: 0x802E8294 -> 0x802E82AC
void Graphics::LightKitData::EnableLookupTexture() const {
}
// signature: Graphics::LightKitData::GetLookupMatrix(float (*)[4], const Math::Vector &, const Math::Vector &)
// Range: 0x802E82AC -> 0x802E8328
void Graphics::LightKitData::GetLookupMatrix() {
    // Local variables
    float centerCoord; // f8
    float rangeCoord; // f9
}
// signature: Graphics::LightKit::Create(const World::LightKitAsset &, Graphics::Texture *)
// Range: 0x802E8328 -> 0x802E8330
void Graphics::LightKit::Create() {
}
// Range: 0x802E8330 -> 0x802E8354
void Graphics::LightKitManager::RefreshLightKitList() {
    // Local variables
    unsigned char i; // r3

    {
        // Range: 0x802E8330 -> 0x802E8344
        // Local variables
        class LightKitData * d; // r4
    }
}
// signature: Graphics::LightKitManager::AddLightKit(Graphics::LightKitData *)
// Range: 0x802E8354 -> 0x802E838C
void Graphics::LightKitManager::AddLightKit() {
}
// signature: Graphics::LightKitManager::RemoveLightKit(Graphics::LightKitData *)
// Range: 0x802E838C -> 0x802E83E4
void Graphics::LightKitManager::RemoveLightKit() {
    // Local variables
    class LightKitData * * before; // r6
    class LightKitData * * after; // r7
}
// Range: 0x802E83E4 -> 0x802E85E4
void Graphics::LightPointSpot::Create(class LightPointSpot * this /* r29 */, class LightPointSpotAsset & asset /* r30 */) {
}
// Range: 0x802E85E4 -> 0x802E88F8
void Graphics::LightPointSpot::AmendAsset(class LightPointSpot * this /* r28 */, class LightPointSpotAsset & asset /* r29 */, class Contents & contents /* r30 */) {
    // Local variables
    class Vector color; // r1+0x50
    class Vector pos; // r1+0x40

    {
        // Range: 0x802E86F8 -> 0x802E8858
        // Local variables
        class Matrix33 tmpEuler; // r1+0x60
        class Vector direction; // r1+0x30
    }
}
// Range: 0x802E898C -> 0x802E89B4
void Graphics::LightSectorData::RenderAttach() {
    // References
    // -> class LightSectorManager g_lightSectorManager;
}
// Range: 0x802E89B4 -> 0x802E8A20
void Graphics::LightSectorData::RenderDetach() {
    // References
    // -> class LightSectorManager g_lightSectorManager;
}
// Range: 0x802E8A20 -> 0x802E8B0C
void Graphics::LightSectorData::ClearIndices() {
    {
        // Range: 0x802E8A20 -> 0x802E8A30
        // Local variables
        int tot; // r8
        int i; // r4
    }
}
// signature: Graphics::LightSectorManager::SectorLightPoint(Graphics::LightPointSpot *, unsigned char)
// Range: 0x802E8B0C -> 0x802E8C14
bool Graphics::LightSectorManager::SectorLightPoint() {
    // Local variables
    bool result; // r7

    {
        // Range: 0x802E8B0C -> 0x802E8C00
        // Local variables
        int iend; // r9
        int i; // r8

        {
            // Range: 0x802E8B0C -> 0x802E8C00
            // Local variables
            class Vector4 * pointBound; // r10

            {
                // Range: 0x802E8B0C -> 0x802E8BF0
                // Local variables
                int jend; // r0
                int j; // r11
            }
        }
    }
}
// signature: Graphics::LightSectorManager::SectorLightSpot(Graphics::LightPointSpot *, unsigned char)
// Range: 0x802E8C14 -> 0x802E8DC4
bool Graphics::LightSectorManager::SectorLightSpot() {
    // Local variables
    bool result; // r7

    {
        // Range: 0x802E8C14 -> 0x802E8DB0
        // Local variables
        int iend; // r9
        int i; // r8

        {
            // Range: 0x802E8C14 -> 0x802E8DB0
            // Local variables
            class Vector4 * spotBound; // r10

            {
                // Range: 0x802E8C14 -> 0x802E8DA0
                // Local variables
                int jend; // r0
                int j; // r11
            }
        }
    }
}
