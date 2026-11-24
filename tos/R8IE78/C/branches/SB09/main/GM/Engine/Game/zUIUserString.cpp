/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zUIUserString.cpp
*/
// Range: 0x80184260 -> 0x801842D4
void zUIUserString::DoInit(class zUIUserString * this /* r30 */) {
}
// Range: 0x801842E0 -> 0x801842E8
void zUIUserString::DoExit() {
}
// Range: 0x801842F0 -> 0x80184368
void zUIUserString::DoReset(class zUIUserString * this /* r30 */) {
}
// signature: zUIUserString::DoHandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80184370 -> 0x80184574
void zUIUserString::DoHandleEvent(class zUIUserString * this /* r31 */) {
    // Local variables
    class EventActionLegacy * params; // r0

    {
        // Range: 0x801843B8 -> 0x80184450
        // Local variables
        char * asset; // r0
        unsigned int stringHash; // r3
        unsigned int len; // r1+0x8
    }
    {
        // Range: 0x80184454 -> 0x801844C0
        // Local variables
        char ch; // r7
    }
}
// Range: 0x80184580 -> 0x80184590
unsigned long long zUIUserString::GetSortKey() const {
}
// Range: 0x80184590 -> 0x8018460C
class Entity * Sext::UI_User_String::Create(class EntityHandleBase * handle /* r29 */, class UI_User_String * asset /* r30 */) {
    // References
    // -> struct {} __vt__13zUIUserString;
}
