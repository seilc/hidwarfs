/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80072ED4 -> 0x80072FFC
*/
// Range: 0x80072ED4 -> 0x80072EE4
// this: r0
sound_queue::sound_queue() {}

// Range: 0x80072EE4 -> 0x80072F3C
// this: r31
void sound_queue::play(enum iSndGroupHandle hSoundToPlay /* r4 */, int uFlags /* r5 */, const struct xVec3 * pPos_WS /* r6 */, const struct xVec3 * pVel /* r7 */, struct xEnt * pParentEnt /* r8 */, float * pfOverrideVolume /* r9 */, float * pfOverridePitch /* r10 */) {
    // Local variables
    enum xSndHandle handle; // r4
}

// Range: 0x80072F3C -> 0x80072FFC
// this: r30
void sound_queue::push(enum xSndHandle handle /* r0 */) {
    // Local variables
    int begin; // r29
    int end; // r31
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C270C -> 0x800C2714
*/
// Range: 0x800C270C -> 0x800C2710
struct xSndGroup * xSndMgr_GetGroup(enum iSndGroupHandle hHandle /* r0 */) {}

// Range: 0x800C2710 -> 0x800C2714
enum iSndGroupHandle xSndMgr_GetHandle(struct xSndGroup * pSnd /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C32E4 -> 0x800C33A4
*/
// Range: 0x800C32E4 -> 0x800C331C
unsigned char xSndMgrIsLoopedStream(enum iSndGroupHandle hSound /* r0 */) {}

// Range: 0x800C331C -> 0x800C3390
unsigned char xSndMgrIsStream(enum iSndGroupHandle hSound /* r31 */) {
    // Local variables
    struct iSndFileInfo * ip; // r0
}

// Range: 0x800C3390 -> 0x800C33A4
unsigned char xSndMgrIsDialogPlaying() {
    // References
    // -> struct xSndGlobals gSnd;
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800D7044 -> 0x800D7044
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F11E0 -> 0x800F1218
*/
// Range: 0x800F11E0 -> 0x800F1218
void xSndMgrSetDialogPlaying(unsigned char bPlaying /* r0 */) {
    // References
    // -> struct xSndGlobals gSnd;
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801101DC -> 0x80110200
*/
// Range: 0x801101DC -> 0x80110200
enum iSndGroupHandle xSndMgrGetSoundGroup(char * pszSoundGroupName /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012DFDC -> 0x8012E210
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8013E5D4 -> 0x8013E5D4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8013F948 -> 0x8013F948
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8014B02C -> 0x8014B02C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801546F4 -> 0x801546F4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80165264 -> 0x80165264
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80170D6C -> 0x80171010
*/
// Range: 0x80170D6C -> 0x80170E24
// this: r31
void sound_queue::pop() {
    // References
    // -> char __FUNCTION__$localstatic1$pop__14sound_queue<4>Fv[4];
}

// Range: 0x80170E24 -> 0x80170E44
// this: r0
int sound_queue::size() const {}

// Range: 0x80170E44 -> 0x80170E88
// this: r31
void sound_queue::clear() {}

// Range: 0x80170E88 -> 0x80170F6C
// this: r29
unsigned char sound_queue::playing(int amount /* r30 */, unsigned char all /* r31 */) const {
    // Local variables
    int s; // r3
    int i; // r31
    enum xSndHandle hRecent; // r1+0xC
    int i; // r31
    enum xSndHandle hRecent; // r1+0x8
}

// Range: 0x80170F6C -> 0x80171010
// this: r30
enum xSndHandle sound_queue::recent(int index /* r31 */) const {
    // Local variables
    int i; // r3

    // References
    // -> char __FUNCTION__$localstatic1$recent__14sound_queue<4>CFi[7];
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801D3890 -> 0x801D3890
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8021D63C -> 0x8021D63C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8021E368 -> 0x8021E368
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80223530 -> 0x80223530
*/

