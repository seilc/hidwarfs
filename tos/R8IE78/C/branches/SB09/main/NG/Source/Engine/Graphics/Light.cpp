/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\Light.cpp
*/
float colorScale; // size: 0x4, address: 0x80692D00
class LightKitDefaultTextureData * g_defaultData; // size: 0x4, address: 0x80774F40
class Texture * g_defaultTex; // size: 0x4, address: 0x80774F44
float s_ambientColor[3]; // size: 0xC, address: 0x806CD160
float s_dirColor0[3]; // size: 0xC, address: 0x806CD16C
float s_dirColor1[3]; // size: 0xC, address: 0x80779EBC
int TEX_SIZE; // size: 0x4, address: 0x80692D10
class LightKitManager * g_instance; // size: 0x4, address: 0x80774F48
float spotFalloffB; // size: 0x4, address: 0x80692D20
float spotFalloffA; // size: 0x4, address: 0x80692D24
float SPOT_EPSILON; // size: 0x4, address: 0x80692D2C
class LightSectorManager g_lightSectorManager; // size: 0x44, address: 0x80774F4C
// Range: 0x801C4860 -> 0x801C49D4
void Graphics::LightKitData::Create(class LightKitData * this /* r25 */, class LightKitAsset & asset /* r26 */, class Texture * lookupTex /* r27 */) {
    // Local variables
    class Vector tmpVec[4]; // r1+0x48
    class Matrix33 tmpEuler; // r1+0x18

    {
        // Range: 0x801C4888 -> 0x801C48F8
        // Local variables
        int i; // r28
    }

    // References
    // -> class Texture * g_defaultTex;
}
// signature: Graphics::LightKitDefaultTextureData::Init(float *, float *, float *)
// Range: 0x801C49E0 -> 0x801C4C30
void Graphics::LightKitDefaultTextureData::Init(class LightKitDefaultTextureData * this /* r31 */) {
    // Local variables
    unsigned char * tilePtr; // r10

    {
        // Range: 0x801C4A0C -> 0x801C4BAC
        // Local variables
        int tileY; // r11

        {
            // Range: 0x801C4A0C -> 0x801C4BAC
            // Local variables
            int tileX; // r12

            {
                // Range: 0x801C4A0C -> 0x801C4BAC
                // Local variables
                unsigned char * tileGB; // r28
                unsigned char * tileAR; // r29

                {
                    // Range: 0x801C4A0C -> 0x801C4BAC
                    // Local variables
                    int y; // r27

                    {
                        // Range: 0x801C4A0C -> 0x801C4BAC
                        // Local variables
                        float blue1; // f11
                        float green1; // f8
                        float red1; // f9
                        float lerp1; // f31

                        {
                            // Range: 0x801C4A0C -> 0x801C4BAC
                            // Local variables
                            int x; // r26

                            {
                                // Range: 0x801C4A0C -> 0x801C4BAC
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
// Range: 0x801C4C30 -> 0x801C4CB0
void Graphics::LightKitData::Startup() {
    // References
    // -> class Texture * g_defaultTex;
    // -> float s_dirColor1[3];
    // -> float s_dirColor0[3];
    // -> float s_ambientColor[3];
    // -> class LightKitDefaultTextureData * g_defaultData;
}
// Range: 0x801C4D20 -> 0x801C4D44
void Graphics::LightKitData::RenderStartup() {
    // References
    // -> class LightKitDefaultTextureData * g_defaultData;
}
// Range: 0x801C4D50 -> 0x801C4DC0
void Graphics::LightKitData::RenderShutdown() {
    // References
    // -> class Texture * g_defaultTex;
    // -> class LightKitDefaultTextureData * g_defaultData;
}
// signature: Graphics::LightKitData::EnableLookupTexture(int) const
// Range: 0x801C4DC0 -> 0x801C4DD8
void Graphics::LightKitData::EnableLookupTexture() const {
}
// signature: Graphics::LightKitData::GetLookupMatrix(float (*)[4], const Math::Vector &, const Math::Vector &)
// Range: 0x801C4DE0 -> 0x801C4E5C
void Graphics::LightKitData::GetLookupMatrix() {
    // Local variables
    float centerCoord; // f8
    float rangeCoord; // f9
}
// signature: Graphics::LightKit::Create(const World::LightKitAsset &, Graphics::Texture *)
// Range: 0x801C4E60 -> 0x801C4E68
void Graphics::LightKit::Create() {
}
// signature: Graphics::LightKitData::operator=(const Graphics::LightKitData &)
// Range: 0x801C4E70 -> 0x801C4F7C
class LightKitData & Graphics::LightKitData::operator=() {
}
// Range: 0x801C4F80 -> 0x801C4FA4
void Graphics::LightKitManager::RefreshLightKitList() {
    // Local variables
    unsigned char i; // r3

    {
        // Range: 0x801C4F80 -> 0x801C4FA0
        // Local variables
        class LightKitData * d; // r4
    }
}
// signature: Graphics::LightKitManager::AddLightKit(Graphics::LightKitData *)
// Range: 0x801C4FB0 -> 0x801C4FE8
void Graphics::LightKitManager::AddLightKit() {
}
// signature: Graphics::LightKitManager::RemoveLightKit(Graphics::LightKitData *)
// Range: 0x801C4FF0 -> 0x801C5048
void Graphics::LightKitManager::RemoveLightKit() {
    // Local variables
    class LightKitData * * before; // r6
    class LightKitData * * after; // r7
}
// signature: Graphics::LightPointSpot::Create(const Sext::LightPointSpotAsset &)
// Range: 0x801C5050 -> 0x801C5064
void Graphics::LightPointSpot::Create() {
}
// signature: Graphics::LightPointSpot::CalcTypeValues(float &, float &, Math::Vector &, const Sext::LightPointSpotAsset &)
// Range: 0x801C5070 -> 0x801C512C
void Graphics::LightPointSpot::CalcTypeValues(class Vector & outDirection /* r30 */, class LightPointSpotAsset & asset /* r31 */) {
    {
        // Range: 0x801C50BC -> 0x801C5114
        // Local variables
        class Matrix33 tmpEuler; // r1+0x18
    }
}
// Range: 0x801C5130 -> 0x801C5294
void Graphics::LightPointSpot::Reset(class LightPointSpot * this /* r29 */, class LightPointSpotAsset & asset /* r30 */) {
    // Local variables
    float spotFalloffA; // r1+0xC
    float spotFalloffB; // r1+0x8
    class Vector direction; // r1+0x10

    {
        // Range: 0x801C51D0 -> 0x801C5214
        // Local variables
        float outerSin; // f0
        float outer; // f31
    }
}
// Range: 0x801C52A0 -> 0x801C5464
void Graphics::LightPointSpot::AmendAsset(class LightPointSpot * this /* r30 */, class LightPointSpotAsset & asset /* r29 */, class Contents & contents /* r31 */) {
    // Local variables
    float val; // f1
    class Vector color; // r1+0x60
    class Vector pos; // r1+0x50

    {
        // Range: 0x801C5378 -> 0x801C53EC
        // Local variables
        class Matrix33 tmpEuler; // r1+0x70
        class Vector direction; // r1+0x40
    }
}
// signature: Graphics::LightPointSpot::Contents::BuildPoint(const Math::Vector &, float, const Math::Vector &, float)
// Range: 0x801C5520 -> 0x801C55F0
void Graphics::LightPointSpot::Contents::BuildPoint(class Contents * this /* r29 */, class Vector & position /* r30 */, float radius /* f31 */) {
}
// signature: Graphics::LightPointSpot::Contents::BuildSpot(const Math::Vector &, float, const Math::Vector &, float, const Math::Vector &, float, float)
// Range: 0x801C55F0 -> 0x801C5764
void Graphics::LightPointSpot::Contents::BuildSpot(class Contents * this /* r27 */, class Vector & color /* r28 */, float intensity /* f26 */, class Vector & position /* r29 */, float radius /* f27 */, class Vector & direction /* r30 */, float outerConeAngle /* f28 */) {
    // Local variables
    float inner; // f0
    float outer; // f30
    float outerSin; // f29
    float spotFalloffB; // f0
    float spotFalloffA; // f4
}
// Range: 0x801C5770 -> 0x801C5798
void Graphics::LightSectorData::RenderAttach() {
    // References
    // -> class LightSectorManager g_lightSectorManager;
}
// Range: 0x801C57A0 -> 0x801C57B0
void Graphics::LightSectorData::RenderDetach() {
    // References
    // -> class LightSectorManager g_lightSectorManager;
}
// Range: 0x801C57B0 -> 0x801C57E0
void Graphics::LightSectorData::ClearIndices() {
    {
        // Range: 0x801C57B0 -> 0x801C57DC
        // Local variables
        int tot; // r4
        int i; // r6
    }
}
// signature: Graphics::LightSectorManager::RemoveData(Graphics::LightSectorData *)
// Range: 0x801C57E0 -> 0x801C5834
void Graphics::LightSectorManager::RemoveData() {
    {
        // Range: 0x801C57E4 -> 0x801C5830
        // Local variables
        int i; // r0
    }
}
// Range: 0x801C5840 -> 0x801C5894
void Graphics::LightSectorManager::ClearAllIndices(class LightSectorManager * this /* r29 */) {
    {
        // Range: 0x801C5854 -> 0x801C5880
        // Local variables
        int i; // r30
    }
}
// Range: 0x801C58A0 -> 0x801C59A0
bool Graphics::LightSectorManager::SectorLightPoint(class LightSectorManager * this /* r20 */, class LightPointSpot * light /* r21 */, unsigned char lightIdx /* r22 */) {
    // Local variables
    bool result; // r28

    {
        // Range: 0x801C58B4 -> 0x801C5984
        // Local variables
        int iend; // r26
        int i; // r27

        {
            // Range: 0x801C58B4 -> 0x801C5984
            // Local variables
            class Vector4 * pointBound; // r25
            class LightSectorData & data; // r3

            {
                // Range: 0x801C58D0 -> 0x801C5984
                // Local variables
                int jend; // r23
                int j; // r24
            }
        }
    }
}
// Range: 0x801C59A0 -> 0x801C5B08
bool Graphics::LightSectorManager::SectorLightSpot(class LightSectorManager * this /* r19 */, class LightPointSpot * light /* r20 */, unsigned char lightIdx /* r21 */) {
    // Local variables
    bool result; // r28

    {
        // Range: 0x801C59B4 -> 0x801C5AEC
        // Local variables
        int iend; // r26
        int i; // r27

        {
            // Range: 0x801C59B4 -> 0x801C5AEC
            // Local variables
            class Vector4 * spotBound; // r24
            class LightSectorData & data; // r25

            {
                // Range: 0x801C59D0 -> 0x801C5AEC
                // Local variables
                int jend; // r22
                int j; // r23
            }
        }
    }
}
