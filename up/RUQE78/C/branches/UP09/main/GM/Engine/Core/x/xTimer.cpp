/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xTimer.cpp
*/
// Range: 0x800836A0 -> 0x80083964
class Entity * Sext::xTimerAsset::Create(class EntityHandleBase * handle /* r29 */, class xTimerAsset * tasset /* r30 */) {
    // References
    // -> static unsigned int * next;
    // -> static unsigned int state[624];
    // -> static int left;
    // -> struct {} __vt__6xTimer;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x80083970 -> 0x80083A24
void xTimerSave(class xTimer * ent /* r30 */, class xSerial * s /* r31 */) {
}
// Range: 0x80083A30 -> 0x80083B0C
void xTimerLoad(class xTimer * ent /* r30 */, class xSerial * s /* r31 */) {
    {
        // Range: 0x80083AC8 -> 0x80083AF4
        // Local variables
        float tempSecondsLeft; // r1+0x10
        unsigned char tempState; // r1+0x8
    }
}
// signature: xTimerEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80083B10 -> 0x80083DC8
void xTimerEventCB(class xBase * to /* r30 */) {
    // Local variables
    class xTimer * t; // r0

    // References
    // -> static unsigned int * next;
    // -> static unsigned int state[624];
    // -> static int left;
}
// signature: xTimerUpdate(xBase *, xScene *, float)
// Range: 0x80083DD0 -> 0x80083E1C
void xTimerUpdate() {
    // Local variables
    class xTimer * t; // r3
}
