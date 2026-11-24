/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zFXRibbonPool.cpp
*/
static bool ribbonInUse[128]; // size: 0x80, address: 0x807341B0
static class xFXRibbon ribbonPool[128]; // size: 0x400, address: 0x80734230
// Range: 0x800B4840 -> 0x800B48B8
void zFXRibbonPoolInit() {
    {
        // Range: 0x800B4854 -> 0x800B48A4
        // Local variables
        unsigned int i; // r27
    }

    // References
    // -> static class xFXRibbon ribbonPool[128];
}
// Range: 0x800B48C0 -> 0x800B49F4
class xFXRibbon * zFXRibbonPoolNew() {
    // Local variables
    unsigned int index; // r28

    {
        // Range: 0x800B48DC -> 0x800B4930
        // Local variables
        unsigned int i; // r27
    }
    {
        // Range: 0x800B4930 -> 0x800B4994
        // Local variables
        float remainingTime; // f31

        {
            // Range: 0x800B4940 -> 0x800B4994
            // Local variables
            unsigned int i; // r27

            {
                // Range: 0x800B4940 -> 0x800B4994
                // Local variables
                float remain; // f1
            }
        }
    }

    // References
    // -> static class xFXRibbon ribbonPool[128];
    // -> static bool ribbonInUse[128];
}
// signature: zFXRibbonPoolDelete(FX::Ribbon::xFXRibbon *&)
// Range: 0x800B4A00 -> 0x800B4A38
void zFXRibbonPoolDelete() {
    // References
    // -> static bool ribbonInUse[128];
    // -> static class xFXRibbon ribbonPool[128];
}
// Range: 0x800B4A40 -> 0x800B4A54
void zFXRibbonPool_SceneReset() {
    // References
    // -> static bool ribbonInUse[128];
}
