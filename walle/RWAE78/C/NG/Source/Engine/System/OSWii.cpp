/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\System\OSWii.cpp
*/
bool shutdown; // size: 0x1, address: 0x808074F8
bool restartOnShutdown; // size: 0x1, address: 0x808074F9
bool wiiMenuOnShutdown; // size: 0x1, address: 0x808074FA
static bool (* shutdownCallback)(); // size: 0x4, address: 0x808074FC
static void (* pauseSoundCB)(); // size: 0x4, address: 0x80807500
static void (* unpauseSoundCB)(); // size: 0x4, address: 0x80807504
static unsigned short masterVolume; // size: 0x2, address: 0x80807508
char * WiiDVDNoDiskMessages[7]; // size: 0x1C, address: 0x8070B63C
char * WiiDVDWrongDiskMessages[7]; // size: 0x1C, address: 0x8070B658
char * WiiDVDRetryErrorMessages[7]; // size: 0x1C, address: 0x8070B674
// Range: 0x802B3D98 -> 0x802B3DC4
void OSWii::ResetCallback() {
    // References
    // -> bool wiiMenuOnShutdown;
    // -> bool restartOnShutdown;
    // -> bool shutdown;
}
// Range: 0x802B3DC4 -> 0x802B3DF0
void OSWii::PowerCallback() {
    // References
    // -> bool wiiMenuOnShutdown;
    // -> bool restartOnShutdown;
    // -> bool shutdown;
}
// Range: 0x802B3DF0 -> 0x802B3E1C
void OSWii::WiiMenuCallback() {
    // References
    // -> bool wiiMenuOnShutdown;
    // -> bool restartOnShutdown;
    // -> bool shutdown;
}
// Range: 0x802B3E1C -> 0x802B3E30
bool (* OSWii::SetShutdownCallback(bool (* callback)() /* r0 */))() {
    // Local variables
    bool (* oldCallback)(); // r0

    // References
    // -> static bool (* shutdownCallback)();
}
// Range: 0x802B3E30 -> 0x802B3E3C
bool OSWii::IsShutdownInProgress() {
    // References
    // -> bool shutdown;
}
// Range: 0x802B3E3C -> 0x802B3F14
void OSWii::ProcessShutdown() {
    {
        // Range: 0x802B3E54 -> 0x802B3F00
        // Local variables
        bool shutdownAllowed; // r3
    }

    // References
    // -> bool wiiMenuOnShutdown;
    // -> bool restartOnShutdown;
    // -> static bool (* shutdownCallback)();
    // -> bool shutdown;
}
// signature: OSWii::SetSoundControlCallbacks(void (*)(), void (*)())
// Range: 0x802B3F14 -> 0x802B3F28
void OSWii::SetSoundControlCallbacks() {
    // References
    // -> static void (* unpauseSoundCB)();
    // -> static void (* pauseSoundCB)();
}
// signature: OSWii::GetDVDErrorState(DVDFileInfo *)
// Range: 0x802B3F28 -> 0x802B3FB0
enum WiiDVDError OSWii::GetDVDErrorState() {
    // Local variables
    int dvdStatus; // r0
}
// Range: 0x802B3FB0 -> 0x802B4210
enum WiiDVDError OSWii::WaitForGoodDVDState(class DVDFileInfo * fileInfo /* r26 */, bool busyIsOK /* r21 */) {
    // Local variables
    enum WiiDVDError dvdStatus; // r28
    unsigned char language; // r27
    char * message; // r21

    // References
    // -> static unsigned short masterVolume;
    // -> char * WiiDVDNoDiskMessages[7];
    // -> char * WiiDVDWrongDiskMessages[7];
    // -> char * WiiDVDRetryErrorMessages[7];
    // -> bool shutdown;
}
// Range: 0x802B4210 -> 0x802B425C
bool OSWii::RestorePreviousMasterVolume() {
    // References
    // -> static unsigned short masterVolume;
}
