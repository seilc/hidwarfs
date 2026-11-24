/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\Wii\iFMV.cpp
*/
static class BINKTEXTURESET texture_set; // size: 0x1D8, address: 0x80817F88
static float Width_scale; // size: 0x4, address: 0x80818160
static float Height_scale; // size: 0x4, address: 0x80818164
static float Video_adjust; // size: 0x4, address: 0x80818168
static float X_adjust; // size: 0x4, address: 0x8081816C
static float Y_adjust; // size: 0x4, address: 0x80818170
static float Alpha_level; // size: 0x4, address: 0x807A24C8
class BINK * hBinkCurrMovie; // size: 0x4, address: 0x80818174
int fbSize; // size: 0x4, address: 0x80818178
static class StaticStackAllocator binkMemAlloc; // size: 0xC, address: 0x8081817C
static void * binkMemAllocStart; // size: 0x4, address: 0x80818188
static float dt; // size: 0x4, address: 0x8081818C
// signature: MemAlloc(unsigned int)
// Range: 0x800960D0 -> 0x800960EC
void * MemAlloc() {
    // References
    // -> static class StaticStackAllocator binkMemAlloc;
}
// signature: FreeMem(void *)
// Range: 0x800960F0 -> 0x800960F4
void FreeMem() {
}
// signature: FreeAudioMem(void *)
// Range: 0x80096110 -> 0x80096114
void FreeAudioMem() {
}
// Range: 0x80096120 -> 0x80096230
class BINK * iFMVOpen(char * fullFile /* r28 */, unsigned int uBinkFlags /* r29 */) {
    // Local variables
    class RADARAMCALLBACKS audioMemCallback; // r1+0x8
    class BINK * hBinkMovie; // r31
    int curRetries; // r30
}
// signature: iFMVPlay(const char *, unsigned int, float, bool)
// Range: 0x80096230 -> 0x80096334
unsigned int iFMVPlay(unsigned int buttons /* r28 */, float time /* f31 */, bool skippable /* r29 */) {
    // Local variables
    char fullname[64]; // r1+0x8
    char * extension; // r31
    enum _GameOstrich old; // r30
    unsigned int ret; // r29

    // References
    // -> static unsigned short g_localEnum;
    // -> static void (* sxFMVPauseSoundCB)(bool doPause);
}
// signature: iFMVPlay(const char *, unsigned int, float, bool, unsigned int)
// Range: 0x80096340 -> 0x800973A0
unsigned int iFMVPlay(char * filename /* r16 */, bool skippable /* r15 */, unsigned int localRegion /* r1+0x8 */) {
    // Local variables
    int width; // r0
    int height; // r0
    unsigned int uBinkFlags; // r14
    class BINK * hBinkMovie; // r17
    bool aborted; // r1+0x520

    {
        // Range: 0x80096824 -> 0x800972A0
        // Local variables
        int numFramesSinceDisplayedFrame; // r18
        class PadInput istate; // r1+0x130

        {
            // Range: 0x80096824 -> 0x80096824
            // Local variables
            int i; // r16

            {
                // Range: 0x80096824 -> 0x80096824
                // Local variables
                bool homeButtonPressed; // r0
                class Pad * pad; // r0
            }
        }
    }

    // References
    // -> void * WiiFrameBuffer2;
    // -> void * WiiFrameBuffer1;
    // -> void * WiiCurrentBuffer;
    // -> class Module * scaleformModule;
    // -> static float Y_adjust;
    // -> static float X_adjust;
    // -> static float Alpha_level;
    // -> class Module * padModule;
    // -> class Module * consolePadModule;
    // -> class Module * homeMenuModule;
    // -> static float dt;
    // -> class zGlobals globals;
    // -> double secondsPerTick;
    // -> bool WiiFirstFrame;
    // -> bool bAllowInput;
    // -> static float Height_scale;
    // -> static float Width_scale;
    // -> static float Video_adjust;
    // -> int fbSize;
    // -> class BINK * hBinkCurrMovie;
    // -> static class BINKTEXTURESET texture_set;
    // -> static float volumeScale;
    // -> long long startupTicks;
    // -> static void * binkMemAllocStart;
    // -> static class StaticStackAllocator binkMemAlloc;
    // -> class Module * dynaMemModule;
}
// signature: iFMV_Play(Graphics::MovieData *)
// Range: 0x800973D0 -> 0x800973D4
void iFMV_Play() {
}
