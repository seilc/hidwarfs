/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80087E14 -> 0x80087F6C
*/
// Range: 0x80087E14 -> 0x80087E28
// this: r3
sound_queue::sound_queue() {}

// Range: 0x80087E28 -> 0x80087E9C
// this: r1+0x8
void sound_queue::play(enum iSndGroupHandle hSoundToPlay /* r1+0xC */, int uFlags /* r1+0x10 */, const struct xVec3 * pPos_WS /* r1+0x14 */, const struct xVec3 * pVel /* r1+0x18 */, struct xEnt * pParentEnt /* r1+0x1C */, float * pfOverrideVolume /* r1+0x20 */, float * pfOverridePitch /* r1+0x24 */) {
    // Local variables
    enum xSndHandle handle; // r31
}

// Range: 0x80087E9C -> 0x80087F6C
// this: r31
void sound_queue::push(enum xSndHandle handle /* r1+0x8 */) {
    // Local variables
    int begin; // r30
    int end; // r29
    int len; // r28
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800EEB8C -> 0x800EEB94
*/
// Range: 0x800EEB8C -> 0x800EEB90
struct xSndGroup * xSndMgr_GetGroup(enum iSndGroupHandle hHandle /* r3 */) {}

// Range: 0x800EEB90 -> 0x800EEB94
enum iSndGroupHandle xSndMgr_GetHandle(struct xSndGroup * pSnd /* r3 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800EF89C -> 0x800EF97C
*/
// Range: 0x800EF89C -> 0x800EF8E4
unsigned char xSndMgrIsLoopedStream(enum iSndGroupHandle hSound /* r31 */) {}

// Range: 0x800EF8E4 -> 0x800EF968
unsigned char xSndMgrIsStream(enum iSndGroupHandle hSound /* r30 */) {
    // Local variables
    struct iSndFileInfo * ip; // r31
}

// Range: 0x800EF968 -> 0x800EF97C
unsigned char xSndMgrIsDialogPlaying() {
    // References
    // -> struct xSndGlobals gSnd;
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801096A8 -> 0x801096A8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012B11C -> 0x8012B164
*/
// Range: 0x8012B11C -> 0x8012B164
void xSndMgrSetDialogPlaying(unsigned char bPlaying /* r3 */) {
    // References
    // -> struct xSndGlobals gSnd;
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8014F9B8 -> 0x8014F9E4
*/
// Range: 0x8014F9B8 -> 0x8014F9E4
enum iSndGroupHandle xSndMgrGetSoundGroup(char * pszSoundGroupName /* r1+0x8 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801720B4 -> 0x801722E8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80184D84 -> 0x80184D84
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80186828 -> 0x80186828
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80193B44 -> 0x80193B44
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8019E8E8 -> 0x8019E8E8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B3468 -> 0x801B3468
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C1088 -> 0x801C137C
*/
// Range: 0x801C1088 -> 0x801C1150
// this: r31
void sound_queue::pop() {
    // References
    // -> char __FUNCTION__$localstatic1$pop__14sound_queue<4>Fv[4];
}

// Range: 0x801C1150 -> 0x801C1198
// this: r3
int sound_queue::size() const {}

// Range: 0x801C1198 -> 0x801C11DC
// this: r31
void sound_queue::clear() {}

// Range: 0x801C11DC -> 0x801C12C0
// this: r27
unsigned char sound_queue::playing(int amount /* r29 */, unsigned char all /* r1+0x8 */) const {
    // Local variables
    int s; // r28
    int i; // r31
    enum xSndHandle hRecent; // r1+0x10
    int i; // r30
    enum xSndHandle hRecent; // r1+0xC
}

// Range: 0x801C12C0 -> 0x801C137C
// this: r30
enum xSndHandle sound_queue::recent(int index /* r29 */) const {
    // Local variables
    int i; // r31

    // References
    // -> char __FUNCTION__$localstatic1$recent__14sound_queue<4>CFi[7];
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80233568 -> 0x80233568
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802872A8 -> 0x802872A8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80288104 -> 0x80288104
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8028DA58 -> 0x8028DA58
*/

