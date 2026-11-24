/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\Wii\iFMV.cpp
*/
static class BINKTEXTURESET texture_set; // size: 0x1D8, address: 0x8072DF78
static float Width_scale; // size: 0x4, address: 0x8072E150
static float Height_scale; // size: 0x4, address: 0x8072E154
static float Video_adjust; // size: 0x4, address: 0x8072E158
static float X_adjust; // size: 0x4, address: 0x8072E15C
static float Y_adjust; // size: 0x4, address: 0x8072E160
static float Alpha_level; // size: 0x4, address: 0x806B430C
class BINK * hBinkCurrMovie; // size: 0x4, address: 0x8072E164
int fbSize; // size: 0x4, address: 0x8072E168
static class StaticStackAllocator binkMemAlloc; // size: 0xC, address: 0x8072E16C
static void * binkMemAllocStart; // size: 0x4, address: 0x8072E178
float dt; // size: 0x4, address: 0x8072EC78
// Range: 0x8004F280 -> 0x8004F338
void SwapFrameBuffer() {
    // References
    // -> void * WiiFrameBuffer2;
    // -> void * WiiFrameBuffer1;
    // -> bool WiiFirstFrame;
    // -> void * WiiCurrentBuffer;
}
// Range: 0x8004F340 -> 0x8004F450
void SetupViewportBeforeRender() {
    // Local variables
    float projection[4][4]; // r1+0x38
    float modelview[3][4]; // r1+0x8
    class _GXRenderModeObj * renderMode; // r0
}
// Range: 0x8004F450 -> 0x8004F4B0
void CopyToFrameBuffer(int swap /* r31 */) {
    // References
    // -> void * WiiCurrentBuffer;
}
// Range: 0x8004F4B0 -> 0x8004F510
void BinkPrepAlloc() {
    // Local variables
    class MemVolume * memVolume; // r0
    void * mem; // r0

    // References
    // -> static void * binkMemAllocStart;
    // -> static class StaticStackAllocator binkMemAlloc;
    // -> class Module * dynaMemModule;
}
// Range: 0x8004F510 -> 0x8004F584
void BinkClearAlloc() {
    // References
    // -> static void * binkMemAllocStart;
    // -> static class StaticStackAllocator binkMemAlloc;
}
// Range: 0x8004F590 -> 0x8004F610
void BinkDestroyAlloc() {
    // Local variables
    class MemVolume * memVolume; // r0

    // References
    // -> class Module * dynaMemModule;
    // -> static class StaticStackAllocator binkMemAlloc;
}
// signature: MemAlloc(unsigned int)
// Range: 0x8004F610 -> 0x8004F62C
void * MemAlloc() {
    // References
    // -> static class StaticStackAllocator binkMemAlloc;
}
// Range: 0x8004F630 -> 0x8004F728
class BINK * iFMVOpen(char * fullFile /* r28 */, unsigned int uBinkFlags /* r29 */) {
    // Local variables
    class RADARAMCALLBACKS audioMemCallback; // r1+0x8
    class BINK * hBinkMovie; // r31
    int curRetries; // r30
}
// signature: iFMVPlay(const char *, unsigned int, float, bool)
// Range: 0x8004F730 -> 0x8004F820
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
// signature: HaveTrack(BINK *, int)
// Range: 0x8004F820 -> 0x8004F860
bool HaveTrack() {
    // Local variables
    bool bTrackFound; // r7

    {
        // Range: 0x8004F828 -> 0x8004F858
        // Local variables
        int track; // r0
    }
}
// signature: iFMVPlay(const char *, unsigned int, float, bool, unsigned int)
// Range: 0x8004F860 -> 0x80050038
unsigned int iFMVPlay(char * filename /* r17 */, bool skippable /* r15 */, unsigned int localRegion /* r1+0x8 */) {
    // Local variables
    int width; // r0
    int height; // r0
    unsigned int uBinkFlags; // r16
    class BINK * hBinkMovie; // r18
    bool aborted; // r17

    {
        // Range: 0x8004FB0C -> 0x8004FF9C
        // Local variables
        int numFramesSinceDisplayedFrame; // r16
        class PadInput istate; // r1+0x48

        {
            // Range: 0x8004FB0C -> 0x8004FB0C
            // Local variables
            int i; // r16

            {
                // Range: 0x8004FB0C -> 0x8004FB0C
                // Local variables
                bool homeButtonPressed; // r0
                class Pad * pad; // r0
            }
        }
    }

    // References
    // -> class Module * scaleformModule;
    // -> static float Y_adjust;
    // -> static float X_adjust;
    // -> static float Alpha_level;
    // -> class Module * homeMenuModule;
    // -> class Module * padModule;
    // -> class Module * consolePadModule;
    // -> class zGlobals globals;
    // -> float dt;
    // -> double secondsPerTick;
    // -> bool bAllowInput;
    // -> bool WiiFirstFrame;
    // -> static float Height_scale;
    // -> static float Width_scale;
    // -> static float Video_adjust;
    // -> int fbSize;
    // -> class BINK * hBinkCurrMovie;
    // -> static class BINKTEXTURESET texture_set;
}
