/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8003F664 -> 0x8003F75C
*/
// Range: 0x8003F664 -> 0x8003F674
// this: r0
sound_queue::sound_queue() {}

// Range: 0x8003F674 -> 0x8003F6CC
// this: r31
void sound_queue::play(enum iSndGroupHandle hSoundToPlay /* r4 */, int uFlags /* r5 */, const struct xVec3 * pPos_WS /* r6 */, const struct xVec3 * pVel /* r7 */, struct xEnt * pParentEnt /* r8 */, float * pfOverrideVolume /* r9 */, float * pfOverridePitch /* r10 */) {
    // Local variables
    enum xSndHandle handle; // r4
}

// Range: 0x8003F6CC -> 0x8003F75C
// this: r29
void sound_queue::push(enum xSndHandle handle /* r0 */) {
    // Local variables
    int begin; // r31
    int end; // r30
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8006DB8C -> 0x8006DB94
*/
// Range: 0x8006DB8C -> 0x8006DB90
struct xSndGroup * xSndMgr_GetGroup(enum iSndGroupHandle hHandle /* r0 */) {}

// Range: 0x8006DB90 -> 0x8006DB94
enum iSndGroupHandle xSndMgr_GetHandle(struct xSndGroup * pSnd /* r0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8006E250 -> 0x8006E2D8
*/
// Range: 0x8006E250 -> 0x8006E2C4
unsigned char xSndMgrIsStream(enum iSndGroupHandle hSound /* r31 */) {
    // Local variables
    struct iSndFileInfo * ip; // r0
}

// Range: 0x8006E2C4 -> 0x8006E2D8
unsigned char xSndMgrIsDialogPlaying() {
    // References
    // -> struct xSndGlobals gSnd;
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8007B26C -> 0x8007B26C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8008AA14 -> 0x8008AA4C
*/
// Range: 0x8008AA14 -> 0x8008AA4C
void xSndMgrSetDialogPlaying(unsigned char bPlaying /* r0 */) {
    // References
    // -> struct xSndGlobals gSnd;
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8009F8A0 -> 0x8009F8C4
*/
// Range: 0x8009F8A0 -> 0x8009F8C4
enum iSndGroupHandle xSndMgrGetSoundGroup(char * pszSoundGroupName /* r0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800BEE20 -> 0x800BEE20
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800BFC30 -> 0x800BFC30
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C8370 -> 0x800C8370
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800CE4BC -> 0x800CE4BC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800D8F24 -> 0x800D8F24
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800E10C4 -> 0x800E1270
*/
// Range: 0x800E10C4 -> 0x800E1118
// this: r31
void sound_queue::pop() {}

// Range: 0x800E1118 -> 0x800E1138
// this: r0
int sound_queue::size() const {}

// Range: 0x800E1138 -> 0x800E117C
// this: r31
void sound_queue::clear() {}

// Range: 0x800E117C -> 0x800E1250
// this: r29
unsigned char sound_queue::playing(int amount /* r30 */, unsigned char all /* r31 */) const {
    // Local variables
    int s; // r3
    int i; // r31
    enum xSndHandle hRecent; // r1+0xC
    int i; // r31
    enum xSndHandle hRecent; // r1+0x8
}

// Range: 0x800E1250 -> 0x800E1270
// this: r3
enum xSndHandle sound_queue::recent(int index /* r0 */) const {
    // Local variables
    int i; // r4
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801226EC -> 0x801226EC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80152300 -> 0x80152300
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSndMgr.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8015684C -> 0x8015684C
*/

