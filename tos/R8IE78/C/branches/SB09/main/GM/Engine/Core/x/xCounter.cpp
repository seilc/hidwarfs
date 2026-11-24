/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xCounter.cpp
*/
// Range: 0x80022150 -> 0x800221CC
class Entity * Sext::xCounterAsset::Create(class EntityHandleBase * handle /* r29 */, class xCounterAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__8xCounter;
}
// Range: 0x800221D0 -> 0x80022228
void xCounterInit(class xBase * b /* r30 */, class xCounterAsset * asset /* r31 */) {
    // Local variables
    class xCounter * t; // r0
}
// Range: 0x80022230 -> 0x800222A8
void xCounter::Reset(class xCounter * this /* r31 */) {
    // Local variables
    short oldCount; // r0
}
// Range: 0x800222B0 -> 0x80022318
void xCounterSave(class xCounter * ent /* r30 */, class xSerial * s /* r31 */) {
}
// Range: 0x80022320 -> 0x800223AC
void xCounterLoad(class xCounter * ent /* r30 */, class xSerial * s /* r31 */) {
    {
        // Range: 0x8002236C -> 0x80022398
        // Local variables
        unsigned char tempState; // r1+0x8
        short tempCount; // r1+0xA
    }
}
// signature: xCounterEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800223B0 -> 0x80022690
void xCounterEventCB(class xBase * from /* r30 */, class xBase * to /* r31 */, class EventAny * genericParams /* r29 */) {
    // Local variables
    class xCounter * t; // reg65535
    short oldCount; // r0

    {
        // Range: 0x8002241C -> 0x800224B4
        {
            // Range: 0x8002248C -> 0x800224B4
            // Local variables
            class EventNotifyCountIs params; // r1+0x10
        }
    }
    {
        // Range: 0x800224BC -> 0x80022554
        {
            // Range: 0x8002252C -> 0x80022554
            // Local variables
            class EventNotifyCountIs params; // r1+0xC
        }
    }
    {
        // Range: 0x800225D8 -> 0x8002267C
        // Local variables
        class xBase * toParamWidgetPtr; // r5
        class EventActionSetCount * params; // r0

        {
            // Range: 0x80022628 -> 0x8002267C
            // Local variables
            class EventNotifyCountIs params; // r1+0x8
        }
    }
}
