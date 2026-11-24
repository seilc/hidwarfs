/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xTimer.cpp
*/
// Range: 0x80046F90 -> 0x80047030
static float GetRandomizedTime(class xTimerAsset * tasset /* r29 */) {
    // Local variables
    unsigned int halfRangeMilli; // r0
    float time; // f1
}
// Range: 0x80047030 -> 0x800470AC
class Entity * Sext::xTimerAsset::Create(class EntityHandleBase * handle /* r29 */, class xTimerAsset * tasset /* r30 */) {
    // References
    // -> struct {} __vt__6xTimer;
}
// Range: 0x800470B0 -> 0x80047118
void xTimerInit(class xBase * b /* r29 */, class xTimerAsset * tasset /* r30 */) {
    // Local variables
    class xTimer * t; // r0
}
// Range: 0x80047120 -> 0x8004716C
void xTimerReset(class xTimer * t /* r30 */) {
}
// Range: 0x80047170 -> 0x800471E0
void xTimerSave(class xTimer * ent /* r30 */, class xSerial * s /* r31 */) {
}
// Range: 0x800471E0 -> 0x8004726C
void xTimerLoad(class xTimer * ent /* r30 */, class xSerial * s /* r31 */) {
    {
        // Range: 0x8004722C -> 0x80047258
        // Local variables
        float tempSecondsLeft; // r1+0xC
        unsigned char tempState; // r1+0x8
    }
}
// signature: xTimerEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80047270 -> 0x80047320
void xTimerEventCB() {
    // Local variables
    class xTimer * t; // r4
}
// signature: xTimerUpdate(xBase *, xScene *, float)
// Range: 0x80047320 -> 0x8004736C
void xTimerUpdate() {
    // Local variables
    class xTimer * t; // r3
}
