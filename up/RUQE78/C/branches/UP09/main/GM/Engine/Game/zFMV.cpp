/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zFMV.cpp
*/
// signature: zFMVFileGetName(char *, unsigned int)
// Range: 0x80162180 -> 0x801621A4
void zFMVFileGetName() {
}
// Range: 0x801621B0 -> 0x801622A8
class Entity * Sext::FMVReference::Create(class EntityHandleBase * handle /* r29 */, class FMVReference * asset /* r30 */) {
    // References
    // -> struct {} __vt__13zFMVReference;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x801622B0 -> 0x801623C0
enum movieEndCode PlayMovieTemp(class MovieData * data /* r30 */) {
    // Local variables
    unsigned int retval; // r0

    // References
    // -> class zGlobals globals;
}
// Range: 0x801623C0 -> 0x80162588
unsigned int zFMVPlay(char * name /* r26 */, unsigned int buttons /* r27 */, float time /* f31 */, bool skippable /* r28 */) {
    // Local variables
    unsigned int retval; // r29

    {
        // Range: 0x80162404 -> 0x80162564
        // Local variables
        char fullFileName[256]; // r1+0x28

        {
            // Range: 0x801624B0 -> 0x801624DC
            // Local variables
            int i; // r30

            {
                // Range: 0x801624B0 -> 0x801624DC
                // Local variables
                class zPlayerInput * pad; // r0
            }
        }
    }

    // References
    // -> static float time_last;
    // -> float SECS_PER_VBLANK;
    // -> double secondsPerTick;
    // -> long long startupTicks;
    // -> class StartupConfig * config;
    // -> class zGlobals globals;
}
