/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zFXRibbonPool.cpp
*/
static bool ribbonInUse[128]; // size: 0x80, address: 0x8081D830
static class xFXRibbon ribbonPool[128]; // size: 0xC00, address: 0x8081D8B0
// Range: 0x80162BD0 -> 0x80162C54
void zFXRibbonPoolInit() {
    {
        // Range: 0x80162BF0 -> 0x80162C28
        // Local variables
        unsigned int i; // r29
    }

    // References
    // -> static class xFXRibbon ribbonPool[128];
}
// Range: 0x80162C60 -> 0x80162F00
class xFXRibbon * zFXRibbonPoolNew() {
    // Local variables
    unsigned int index; // r31

    {
        // Range: 0x80162C88 -> 0x80162CD0
        // Local variables
        unsigned int i; // r6
    }
    {
        // Range: 0x80162D84 -> 0x80162EA4
        // Local variables
        float remainingTime; // f4

        {
            // Range: 0x80162D9C -> 0x80162E9C
            // Local variables
            unsigned int i; // r5

            {
                // Range: 0x80162D9C -> 0x80162E9C
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
// Range: 0x80162F00 -> 0x80162F48
void zFXRibbonPoolDelete() {
    // References
    // -> static bool ribbonInUse[128];
    // -> static class xFXRibbon ribbonPool[128];
}
// Range: 0x80162F50 -> 0x80162F64
void zFXRibbonPool_SceneReset() {
    // References
    // -> static bool ribbonInUse[128];
}
