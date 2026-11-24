/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zScript.cpp
*/
// Range: 0x8024C9B0 -> 0x8024CAF8
void zScript::Fix(class zScript * this /* r31 */) {
    // Local variables
    unsigned int oldSize; // r30
    float time; // f1
    unsigned char prevState; // r30

    {
        // Range: 0x8024CA3C -> 0x8024CA54
        // Local variables
        unsigned int i; // r7
    }
}
// Range: 0x8024CB00 -> 0x8024CBC8
class Entity * Sext::Script::Create(class EntityHandleBase * handle /* r29 */, class Script * tasset /* r30 */) {
    // References
    // -> struct {} __vt__7zScript;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x8024CBD0 -> 0x8024CCD0
void zScriptInit(class xBase * b /* r30 */, class Script * tasset /* r31 */) {
    // Local variables
    class zScript * t; // reg65535
    float time; // f31

    {
        // Range: 0x8024CC3C -> 0x8024CC50
        // Local variables
        unsigned int i; // r7
    }
}
// signature: zScriptEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8024CCD0 -> 0x8024CF50
void zScriptEventCB() {
    // Local variables
    class zScript * t; // r31

    {
        // Range: 0x8024CE14 -> 0x8024CE2C
        // Local variables
        class EventActionTimer * params; // r0
    }
    {
        // Range: 0x8024CEF8 -> 0x8024CF08
        // Local variables
        class EventActionOneFloat * params; // r0
    }
}
// Range: 0x8024CF50 -> 0x8024D10C
static bool zScriptExecuteEvents(class zScript * t /* r31 */, float start /* f30 */, float end /* f31 */) {
    // Local variables
    float lastAbsTime; // f0

    // References
    // -> unsigned long long gThisPlayer;
}
