/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\Wii\iFMV.cpp
*/
class BINK * hBinkCurrMovie; // size: 0x4, address: 0x80767C68
int fbSize; // size: 0x4, address: 0x80767C6C
static class StaticStackAllocator binkMemAlloc; // size: 0xC, address: 0x80767C70
static void * binkMemAllocStart; // size: 0x4, address: 0x80767C7C
// signature: MemAlloc(unsigned int)
// Range: 0x8007DF30 -> 0x8007DF4C
void * MemAlloc() {
    // References
    // -> static class StaticStackAllocator binkMemAlloc;
}
// signature: FreeMem(void *)
// Range: 0x8007DF50 -> 0x8007DF54
void FreeMem() {
}
// signature: AllocAudioMem(unsigned int)
// Range: 0x8007DF60 -> 0x8007DF7C
void * AllocAudioMem() {
    // References
    // -> static class StaticStackAllocator binkMemAlloc;
}
// signature: FreeAudioMem(void *)
// Range: 0x8007DF80 -> 0x8007DF84
void FreeAudioMem() {
}
// Range: 0x8007DF90 -> 0x8007E0DC
class BINK * iFMVOpen(char * fullFile /* r28 */, unsigned int uBinkFlags /* r29 */) {
    // Local variables
    class RADARAMCALLBACKS audioMemCallback; // r1+0x8
    class BINK * hBinkMovie; // r31
    int curRetries; // r30

    {
        // Range: 0x8007E048 -> 0x8007E098
        // Local variables
        class DVDFileInfo fileInfo; // r1+0x10
    }
}
// signature: iFMVPlay(const char *, unsigned int, float, unsigned int, bool)
// Range: 0x8007E0E0 -> 0x8007E1D4
unsigned int iFMVPlay(unsigned int buttons /* r27 */, float time /* f31 */, unsigned int uSubtitlesAID /* r28 */, bool skippable /* r29 */) {
    // Local variables
    char fullname[64]; // r1+0x8
    char * extension; // r31
    enum _GameOstrich old; // r30
    unsigned int ret; // r29

    // References
    // -> static unsigned short g_localEnum;
    // -> static void (* sxFMVPauseSoundCB)(bool doPause);
}
// signature: iFMVPlay(const char *, unsigned int, float, unsigned int, bool, int)
// Range: 0x8007E1E0 -> 0x8007EAD0
unsigned int iFMVPlay(char * filename /* r18 */, bool skippable /* r14 */) {
    // Local variables
    int width; // r21
    int height; // r20
    class @class LCIDtoISO3166[18]; // r1+0xF0
    class @class * it; // r3
    unsigned int localeCode; // r1+0x18
    unsigned int uBinkFlags; // r17
    class BINK * hBinkMovie; // r19
    int destx; // r18
    int desty; // r17
    int destWidth; // r0
    int destHeight; // r16
    bool aborted; // r15

    {
        // Range: 0x8007E260 -> 0x8007E278
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x8007E660 -> 0x8007EA20
        // Local variables
        int currentTime; // r23

        {
            // Range: 0x8007E660 -> 0x8007E660
            // Local variables
            int i; // r23
        }
        {
            // Range: 0x8007E660 -> 0x8007E660
            // Local variables
            int i; // r23
        }
        {
            // Range: 0x8007E660 -> 0x8007E660
            // Local variables
            int i; // r23
        }
        {
            // Range: 0x8007E660 -> 0x8007E9C4
            // Local variables
            int srcx; // r0
        }
    }

    // References
    // -> class Module * homeMenuModule;
    // -> class Module * padModule;
    // -> class Module * consolePadModule;
    // -> void * WiiFrameBuffer2;
    // -> void * WiiFrameBuffer1;
    // -> void * WiiCurrentBuffer;
    // -> double secondsPerTick;
    // -> bool WiiFirstFrame;
    // -> bool bAllowInput;
    // -> int fbSize;
    // -> class BINK * hBinkCurrMovie;
    // -> static float volumeScale;
    // -> long long startupTicks;
    // -> static void * binkMemAllocStart;
    // -> static class StaticStackAllocator binkMemAlloc;
    // -> class Module * dynaMemModule;
}
// signature: iFMV_Play(Graphics::MovieData *)
// Range: 0x8007EB00 -> 0x8007EB04
void iFMV_Play() {
}
// signature: iFMV_Open(const char *, iRect &, iRect &, BINK *&)
// Range: 0x8007EB10 -> 0x8007EB14
void iFMV_Open() {
}
// Range: 0x8007EB20 -> 0x8007EB24
void iFMV_Stop() {
}
