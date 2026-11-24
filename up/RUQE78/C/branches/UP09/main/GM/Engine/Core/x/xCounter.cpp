/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xCounter.cpp
*/
static class tag_type xCounterTag; // size: 0x14, address: 0x807750CC
// Range: 0x80044240 -> 0x80044334
class Entity * Sext::xCounterAsset::Create(class EntityHandleBase * handle /* r30 */, class xCounterAsset * asset /* r31 */) {
    // References
    // -> struct {} __vt__8xCounter;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x80044340 -> 0x800443AC
void xCounter::Reset() {
    // Local variables
    short oldCount; // r0
}
// Range: 0x800443B0 -> 0x80044464
void xCounterSave(class xCounter * ent /* r30 */, class xSerial * s /* r31 */) {
}
// Range: 0x80044470 -> 0x8004454C
void xCounterLoad(class xCounter * ent /* r30 */, class xSerial * s /* r31 */) {
    {
        // Range: 0x80044508 -> 0x80044534
        // Local variables
        unsigned char tempState; // r1+0x8
        short tempCount; // r1+0xA
    }
}
// signature: xCounterEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80044550 -> 0x80044840
void xCounterEventCB(class xBase * from /* r30 */, class xBase * to /* r31 */, class EventAny * genericParams /* r29 */) {
    // Local variables
    class xCounter * t; // reg65535
    short oldCount; // r0

    {
        // Range: 0x800445C4 -> 0x8004465C
        {
            // Range: 0x80044634 -> 0x8004465C
            // Local variables
            class EventNotifyCountIs params; // r1+0x10
        }
    }
    {
        // Range: 0x80044664 -> 0x800446FC
        {
            // Range: 0x800446D4 -> 0x800446FC
            // Local variables
            class EventNotifyCountIs params; // r1+0xC
        }
    }
    {
        // Range: 0x80044780 -> 0x80044824
        // Local variables
        class xBase * toParamWidgetPtr; // r5
        class EventActionSetCount * params; // r0

        {
            // Range: 0x800447D0 -> 0x80044824
            // Local variables
            class EventNotifyCountIs params; // r1+0x8
        }
    }
}
// signature: xCounterParseTag(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80044840 -> 0x80044A0C
void xCounterParseTag(class jot & j /* r31 */) {
    // Local variables
    char buffer[64]; // r1+0x8
    char * c; // r4
    unsigned int size; // r7
    class xCounter * counter; // r0
}
