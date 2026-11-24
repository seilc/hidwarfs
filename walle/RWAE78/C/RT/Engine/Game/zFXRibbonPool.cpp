/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zFXRibbonPool.cpp
*/
static bool ribbonInUse[128]; // size: 0x80, address: 0x8076D360
static class xFXRibbon ribbonPool[128]; // size: 0xC00, address: 0x8076D3E0
// Range: 0x800D71B0 -> 0x800D7234
void zFXRibbonPoolInit() {
    {
        // Range: 0x800D71D0 -> 0x800D7208
        // Local variables
        unsigned int i; // r29
    }

    // References
    // -> static class xFXRibbon ribbonPool[128];
}
// Range: 0x800D7240 -> 0x800D74E4
class xFXRibbon * zFXRibbonPoolNew() {
    // Local variables
    unsigned int index; // r31

    {
        // Range: 0x800D7268 -> 0x800D72B0
        // Local variables
        unsigned int i; // r6
    }
    {
        // Range: 0x800D7364 -> 0x800D7488
        // Local variables
        float remainingTime; // f4

        {
            // Range: 0x800D737C -> 0x800D7480
            // Local variables
            unsigned int i; // r5

            {
                // Range: 0x800D737C -> 0x800D7480
                // Local variables
                float remain; // f0
            }
        }
    }

    // References
    // -> static bool ribbonInUse[128];
    // -> static class xFXRibbon ribbonPool[128];
}
// signature: zFXRibbonPoolDelete(xFXRibbon *&)
// Range: 0x800D74F0 -> 0x800D7538
void zFXRibbonPoolDelete() {
    // References
    // -> static bool ribbonInUse[128];
    // -> static class xFXRibbon ribbonPool[128];
}
// Range: 0x800D7540 -> 0x800D7554
void zFXRibbonPool_SceneReset() {
    // References
    // -> static bool ribbonInUse[128];
}
