/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zScript.cpp
*/
// Range: 0x80167F10 -> 0x80168038
void zScript::Fix(class zScript * this /* r31 */) {
    // Local variables
    unsigned int oldSize; // r30
    float time; // f1
    unsigned char prevState; // r30

    {
        // Range: 0x80167F9C -> 0x80167FE0
        // Local variables
        unsigned int i; // r7
    }
}
// Range: 0x80168040 -> 0x801680BC
class Entity * Sext::Script::Create(class EntityHandleBase * handle /* r29 */, class Script * tasset /* r30 */) {
    // References
    // -> struct {} __vt__7zScript;
}
// Range: 0x801680C0 -> 0x80168198
void zScriptInit(class xBase * b /* r30 */, class Script * tasset /* r31 */) {
    // Local variables
    class zScript * t; // reg65535
    float time; // f31

    {
        // Range: 0x8016812C -> 0x80168168
        // Local variables
        unsigned int i; // r7
    }
}
// Range: 0x801681A0 -> 0x801681F4
void zScriptReset(class zScript * t /* r31 */) {
}
// signature: zScriptGetTotalTime(const zScript *)
// Range: 0x80168200 -> 0x80168234
float zScriptGetTotalTime() {
}
// signature: zScriptEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80168240 -> 0x8016844C
void zScriptEventCB() {
    // Local variables
    class zScript * t; // r31

    {
        // Range: 0x80168384 -> 0x8016839C
        // Local variables
        class EventActionTimer * params; // r0
    }
    {
        // Range: 0x801683F4 -> 0x80168404
        // Local variables
        class EventActionOneFloat * params; // r0
    }
}
// Range: 0x80168450 -> 0x801685FC
static bool zScriptExecuteEvents(class zScript * t /* r31 */, float start /* f30 */, float end /* f31 */) {
    // Local variables
    float lastAbsTime; // f0

    // References
    // -> unsigned long long gThisPlayer;
}
// signature: zScriptUpdate(xBase *, xScene *, float)
// Range: 0x80168600 -> 0x80168670
void zScriptUpdate(float dt /* f31 */) {
    // Local variables
    class zScript * t; // r31
}
