/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\TRC\DiscError.cpp
*/
static void (* pauseSoundCB)(); // size: 0x4, address: 0x80782950
static void (* unpauseSoundCB)(); // size: 0x4, address: 0x80782954
static unsigned short masterVolume; // size: 0x2, address: 0x80782958
static bool doForcedDVDCheck; // size: 0x1, address: 0x8078295A
char * WiiDVDNoDiskMessages[11]; // size: 0x2C, address: 0x806CF388
char * WiiDVDWrongDiskMessages[11]; // size: 0x2C, address: 0x806CF3B4
char * WiiDVDRetryErrorMessages[11]; // size: 0x2C, address: 0x806CF3E0
class Thread s_wiiDVDErrorThread; // size: 0x40, address: 0x80782968
class WiiDVDErrorRunnable s_wiiDVDErrorRunner; // size: 0xC, address: 0x807829A8
class CriticalSection wiiDVDErrorCriticalSection; // size: 0x20, address: 0x807829C0
// signature: TRC::SetSoundControlCallbacks(void (*)(), void (*)())
// Range: 0x801FE680 -> 0x801FE694
void TRC::SetSoundControlCallbacks() {
    // References
    // -> static void (* unpauseSoundCB)();
    // -> static void (* pauseSoundCB)();
}
// Range: 0x801FE6A0 -> 0x801FE6EC
bool TRC::RestorePreviousMasterVolume() {
    // References
    // -> static unsigned short masterVolume;
}
// signature: TRC::GetErrorMessage(TRC::WiiDVDError, unsigned char, char *, int)
// Range: 0x801FE6F0 -> 0x801FE8B8
void TRC::GetErrorMessage(unsigned char language /* r28 */, char * msgBuf /* r30 */, int msgBufLen /* r31 */) {
    {
        // Range: 0x801FE744 -> 0x801FE7A8
        // Local variables
        unsigned int screenMode; // r0
    }
    {
        // Range: 0x801FE7AC -> 0x801FE810
        // Local variables
        unsigned int screenMode; // r0
    }
    {
        // Range: 0x801FE814 -> 0x801FE878
        // Local variables
        unsigned int screenMode; // r0
    }

    // References
    // -> char * WiiDVDRetryErrorMessages[11];
    // -> char * WiiDVDWrongDiskMessages[11];
    // -> char * WiiDVDNoDiskMessages[11];
    // -> class Game * singleton;
}
// signature: TRC::GetDVDErrorState(DVDFileInfo *)
// Range: 0x801FE8C0 -> 0x801FE950
enum WiiDVDError TRC::GetDVDErrorState() {
    // Local variables
    int dvdStatus; // r3
}
// Range: 0x8020B4B0 -> 0x8020B57C
void TRC::WiiDVDErrorRunnable::Run(class WiiDVDErrorRunnable * this /* r28 */) {
    // Local variables
    unsigned char language; // r0
    char message[2048]; // r1+0x8

    // References
    // -> static unsigned short masterVolume;
    // -> bool shutdown;
}
// Range: 0x801FE950 -> 0x801FE9DC
enum WiiDVDError TRC::QuickDVDStateCheck(class DVDFileInfo * fileInfo /* r29 */, bool busyIsOK /* r30 */) {
    // Local variables
    enum WiiDVDError errorStatus; // r3

    // References
    // -> bool shutdown;
}
// signature: TRC::DVDStateCheckDelayedError(DVDFileInfo *, bool)
// Range: 0x801FE9E0 -> 0x801FEA10
enum WiiDVDError TRC::DVDStateCheckDelayedError() {
    // Local variables
    enum WiiDVDError errorStatus; // r0

    // References
    // -> static bool doForcedDVDCheck;
}
// Range: 0x801FEA10 -> 0x801FEA5C
void TRC::DoForcedDVDCheck() {
    // References
    // -> static bool doForcedDVDCheck;
}
// Range: 0x801FEA60 -> 0x801FEB2C
enum WiiDVDError TRC::WaitForGoodDVDState(class DVDFileInfo * fileInfo /* r28 */, bool busyIsOK /* r29 */) {
    // Local variables
    enum WiiDVDError errorStatus; // r0

    // References
    // -> class Thread s_wiiDVDErrorThread;
    // -> class WiiDVDErrorRunnable s_wiiDVDErrorRunner;
    // -> class CriticalSection wiiDVDErrorCriticalSection;
}
// signature: TRC::ShowDiscError(TRC::DiscAccessType, const char *)
// Range: 0x801FEB30 -> 0x801FEB3C
void TRC::ShowDiscError() {
}
