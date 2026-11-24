/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Graphics\Light.cpp
*/
class LightKitManager * g_instance; // size: 0x4, address: 0x807FF2D8
class LightSectorManager g_lightSectorManager; // size: 0x44, address: 0x807FF2DC
// signature: Graphics::LightKitData::Create(const World::LightKitAsset &)
// Range: 0x80250FC4 -> 0x802511FC
void Graphics::LightKitData::Create(class LightKitData * this /* r28 */) {
    // Local variables
    class Vector tmpVec[5]; // r1+0x48
    class Matrix33 tmpEuler; // r1+0x18

    {
        // Range: 0x80251028 -> 0x802510E0
        // Local variables
        int i; // r29
    }
}
// signature: Graphics::WiiLightKitTexLookup::InitPixels(Graphics::LightKitData &)
// Range: 0x80251244 -> 0x802513FC
void Graphics::WiiLightKitTexLookup::InitPixels() {
    // Local variables
    unsigned char * tilePtr; // r8

    {
        // Range: 0x80251250 -> 0x802513D0
        // Local variables
        int tileY; // r9

        {
            // Range: 0x8025125C -> 0x802513C0
            // Local variables
            int tileX; // r10

            {
                // Range: 0x8025125C -> 0x802513C0
                // Local variables
                unsigned char * tileGB; // r12
                unsigned char * tileAR; // r11

                {
                    // Range: 0x8025125C -> 0x802513B4
                    // Local variables
                    int y; // r31

                    {
                        // Range: 0x8025125C -> 0x802513B4
                        // Local variables
                        float blue1; // f10
                        float green1; // f11
                        float red1; // f8
                        float lerp1; // f10

                        {
                            // Range: 0x8025125C -> 0x8025137C
                            // Local variables
                            int x; // r30

                            {
                                // Range: 0x8025125C -> 0x8025137C
                                // Local variables
                                float blue; // f12
                                float green; // f1
                                float red; // f13
                                float lerp0; // f12
                            }
                        }
                    }
                }
            }
        }
    }
}
// signature: Graphics::LightKitData::EnableLookupTexture(int) const
// Range: 0x802513FC -> 0x80251414
void Graphics::LightKitData::EnableLookupTexture() const {
}
// signature: Graphics::LightKitData::GetLookupMatrix(float (*)[4], const Math::Vector &, const Math::Vector &)
// Range: 0x80251414 -> 0x80251478
void Graphics::LightKitData::GetLookupMatrix() {
    // Local variables
    float centerCoord; // f7
    float rangeCoord; // f8
}
// signature: Graphics::LightKit::Create(const World::LightKitAsset &)
// Range: 0x802514A8 -> 0x802514B0
void Graphics::LightKit::Create() {
}
// Range: 0x802514B0 -> 0x802514D4
void Graphics::LightKitManager::RefreshLightKitList() {
    // Local variables
    unsigned char i; // r3

    {
        // Range: 0x802514B0 -> 0x802514C4
        // Local variables
        class LightKitData * d; // r4
    }
}
// Range: 0x802514D4 -> 0x802515A8
void Graphics::LightKitManager::AddLightKit(class LightKitData * lkd /* r30 */) {
}
// Range: 0x802515A8 -> 0x80251648
void Graphics::LightKitManager::RemoveLightKit(class LightKitManager * this /* r30 */, class LightKitData * lkd /* r31 */) {
    // Local variables
    class LightKitData * * before; // r4
    class LightKitData * * after; // r5
}
// Range: 0x80251648 -> 0x802518EC
void Graphics::LightPointSpot::Create(class LightPointSpot * this /* r29 */, class LightPointSpotAsset * asset /* r30 */) {
    {
        // Range: 0x80251734 -> 0x802518A8
        // Local variables
        class Vector tmpVec; // r1+0x18
        class Matrix33 tmpEuler; // r1+0x28
        float spotFalloffB; // f29
        float spotFalloffA; // f0
        float denom; // f30
        float outerSin; // f0
        float outer; // f0
        float inner; // f27
    }
}
// Range: 0x802518EC -> 0x80251914
void Graphics::LightSectorData::RenderAttach() {
    // References
    // -> class LightSectorManager g_lightSectorManager;
}
// Range: 0x80251914 -> 0x80251980
void Graphics::LightSectorData::RenderDetach() {
    // References
    // -> class LightSectorManager g_lightSectorManager;
}
// Range: 0x80251980 -> 0x80251A6C
void Graphics::LightSectorData::ClearIndices() {
    {
        // Range: 0x80251980 -> 0x80251990
        // Local variables
        int tot; // r8
        int i; // r4
    }
}
// signature: Graphics::LightSectorManager::SectorLightPoint(Graphics::LightPointSpot *, unsigned char)
// Range: 0x80251A6C -> 0x80251B74
bool Graphics::LightSectorManager::SectorLightPoint() {
    // Local variables
    bool result; // r7

    {
        // Range: 0x80251A6C -> 0x80251B60
        // Local variables
        int iend; // r9
        int i; // r8

        {
            // Range: 0x80251A6C -> 0x80251B60
            // Local variables
            class Vector4 * pointBound; // r10

            {
                // Range: 0x80251A6C -> 0x80251B50
                // Local variables
                int jend; // r0
                int j; // r11
            }
        }
    }
}
// signature: Graphics::LightSectorManager::SectorLightSpot(Graphics::LightPointSpot *, unsigned char)
// Range: 0x80251BA8 -> 0x80251D58
bool Graphics::LightSectorManager::SectorLightSpot() {
    // Local variables
    bool result; // r7

    {
        // Range: 0x80251BA8 -> 0x80251D44
        // Local variables
        int iend; // r9
        int i; // r8

        {
            // Range: 0x80251BA8 -> 0x80251D44
            // Local variables
            class Vector4 * spotBound; // r10

            {
                // Range: 0x80251BA8 -> 0x80251D34
                // Local variables
                int jend; // r0
                int j; // r11
            }
        }
    }
}
