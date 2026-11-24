/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zSurface.cpp
*/
static class zSurfaceProps * zsps; // size: 0x4, address: 0x807E3AC0
static int sMapperCount; // size: 0x4, address: 0x807E3AC4
static class zMaterialMapAsset * sMapper[20]; // size: 0x50, address: 0x807E3AC8
static class xSurface sDefaultSurface; // size: 0x38, address: 0x807E3B18
static class zSurfaceProps sDefaultSurfaceProps; // size: 0x120, address: 0x807E3B50
static class zSurfAssetIN sDefaultSurfaceAsset; // size: 0x1F8, address: 0x807E3C70
static class xSurface * pDefaultSurface; // size: 0x4, address: 0x807E3E68
// Range: 0x801C3DC0 -> 0x801C40D4
void zSurfaceInit() {
    // Local variables
    unsigned int size; // r1+0x8
    unsigned short nsurfs; // r28
    class zSurfAssetIN * defaultAsset; // r0

    {
        // Range: 0x801C3E34 -> 0x801C4008
        // Local variables
        unsigned short i; // r27

        {
            // Range: 0x801C3E34 -> 0x801C4008
            // Local variables
            class zSurfaceProps * moprops; // r25
            class xSurface * surf; // r22
            class zSurfAssetIN * asset; // r26

            {
                // Range: 0x801C3E34 -> 0x801C4008
                // Local variables
                int j; // r0
            }
        }
    }

    // References
    // -> static class xSurface sDefaultSurface;
    // -> static class zSurfaceProps sDefaultSurfaceProps;
    // -> static class zSurfAssetIN sDefaultSurfaceAsset;
    // -> static class xSurface * pDefaultSurface;
    // -> static class zSurfaceProps * zsps;
}
// signature: zSurfaceEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801C40E0 -> 0x801C41A0
static void zSurfaceEventCB() {
    // Local variables
    class xSurface * t; // r31
}
