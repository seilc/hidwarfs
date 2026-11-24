/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\TRC\DiscError.cpp
*/
static void (* pauseSoundCB)(); // size: 0x4, address: 0x80852938
static void (* unpauseSoundCB)(); // size: 0x4, address: 0x8085293C
static unsigned short masterVolume; // size: 0x2, address: 0x80852940
static int doForcedDVDCheck; // size: 0x4, address: 0x80852944
char * WiiDVDNoDiskMessages[10]; // size: 0x28, address: 0x807C16D0
char * WiiDVDWrongDiskMessages[10]; // size: 0x28, address: 0x807C16F8
char * WiiDVDRetryErrorMessages[10]; // size: 0x28, address: 0x807C1720
class Thread s_wiiDVDErrorThread; // size: 0x40, address: 0x80852958
class WiiDVDErrorRunnable s_wiiDVDErrorRunner; // size: 0xC, address: 0x80852998
class CriticalSection wiiDVDErrorCriticalSection; // size: 0x20, address: 0x808529B0
// signature: TRC::SetSoundControlCallbacks(void (*)(), void (*)())
// Range: 0x80358A80 -> 0x80358A94
void TRC::SetSoundControlCallbacks() {
    // References
    // -> static void (* unpauseSoundCB)();
    // -> static void (* pauseSoundCB)();
}
// Range: 0x80358A94 -> 0x80358AE0
bool TRC::RestorePreviousMasterVolume() {
    // References
    // -> static unsigned short masterVolume;
}
// signature: TRC::GetErrorMessage(TRC::WiiDVDError, unsigned char, char *, int)
// Range: 0x80358AE0 -> 0x80358BC4
void TRC::GetErrorMessage(char * msgBuf /* r9 */, int msgBufLen /* r8 */) {
    // References
    // -> char * WiiDVDRetryErrorMessages[10];
    // -> char * WiiDVDWrongDiskMessages[10];
    // -> char * WiiDVDNoDiskMessages[10];
    // -> class Game * singleton;
}
// signature: TRC::GetDVDErrorState(DVDFileInfo *)
// Range: 0x80358BC4 -> 0x80358C54
enum WiiDVDError TRC::GetDVDErrorState() {
    // Local variables
    int dvdStatus; // r3
}
// Range: 0x80372074 -> 0x80372158
void TRC::WiiDVDErrorRunnable::Run(class WiiDVDErrorRunnable * this /* r28 */) {
    // Local variables
    unsigned char language; // r0
    char message[2048]; // r1+0x8

    // References
    // -> static unsigned short masterVolume;
    // -> bool shutdown;
}
// Range: 0x80358C58 -> 0x80358D0C
enum WiiDVDError TRC::DVDStateCheckDelayedError(class DVDFileInfo * fileInfo /* r29 */, bool busyIsOK /* r30 */) {
    // Local variables
    enum WiiDVDError errorStatus; // r0

    // References
    // -> static int doForcedDVDCheck;
    // -> bool shutdown;
}
// Range: 0x80358D0C -> 0x8035990C
enum WiiDVDError TRC::WaitForGoodDVDState(class DVDFileInfo * fileInfo /* r29 */, bool busyIsOK /* r27 */) {
    // Local variables
    enum WiiDVDError errorStatus; // r0

    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> class Thread s_wiiDVDErrorThread;
    // -> class WiiDVDErrorRunnable s_wiiDVDErrorRunner;
    // -> class CriticalSection wiiDVDErrorCriticalSection;
    // -> bool shutdown;
}
// signature: TRC::ShowDiscError(TRC::DiscAccessType, const char *)
// Range: 0x8035990C -> 0x8035A4D8
void TRC::ShowDiscError() {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> class Thread s_wiiDVDErrorThread;
    // -> class WiiDVDErrorRunnable s_wiiDVDErrorRunner;
    // -> class CriticalSection wiiDVDErrorCriticalSection;
    // -> bool shutdown;
}
