/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSnd.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8006D984 -> 0x8006D9C0
*/
// Range: 0x8006D984 -> 0x8006D98C
// this: r3
int xSndVoiceRefInfo::GetVoiceIndex() const {}

// Range: 0x8006D98C -> 0x8006D998
// this: r0
int xSndVoiceRefInfo::GetID() {}

// Range: 0x8006D998 -> 0x8006D9A8
// this: r0
void xSndVoiceRefInfo::SetID(unsigned int ID /* r0 */) {}

// Range: 0x8006D9A8 -> 0x8006D9B8
void xSndSelectListenerMode(enum xSndListener listenerMode /* r0 */) {
    // References
    // -> struct xSndGlobals gSnd;
}

// Range: 0x8006D9B8 -> 0x8006D9C0
// this: r0
void xSndVoiceRefInfo::SetVoiceIndex(int index /* r0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSnd.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8008A938 -> 0x8008A9BC
*/
// Range: 0x8008A938 -> 0x8008A964
void xSndSetMode(enum xSndMode mode /* r0 */) {
    // References
    // -> struct xSndGlobals gSnd;
}

// Range: 0x8008A964 -> 0x8008A9BC
float xSndFreqFromXPitch(float xpitch /* f2 */, unsigned int sample_rate /* r31 */) {
    // Local variables
    float upitch; // f1
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSnd.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8009C718 -> 0x8009C718
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSnd.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800B3390 -> 0x800B342C
*/
// Range: 0x800B3390 -> 0x800B342C
void xSndSetListenerData(enum xSndListener listenerType /* r30 */, const struct xMat4x3 * pMat /* r0 */, const struct xVec3 & velocity /* r31 */) {
    // References
    // -> struct xSndGlobals gSnd;
    // -> struct xVec3 m_Null;
    // -> float speedOfSound;
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSnd.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800BDF28 -> 0x800BDF28
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSnd.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800D36B0 -> 0x800D36B0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSnd.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8015B714 -> 0x8015B714
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSnd.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018D584 -> 0x8018D594
*/
// Range: 0x8018D584 -> 0x8018D594
int xSndGetMode() {
    // References
    // -> struct xSndGlobals gSnd;
}


