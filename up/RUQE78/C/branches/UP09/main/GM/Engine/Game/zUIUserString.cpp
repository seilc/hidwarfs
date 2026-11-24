/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zUIUserString.cpp
*/
// Range: 0x80271440 -> 0x802714BC
void zUIUserString::DoInit(class zUIUserString * this /* r30 */) {
}
// Range: 0x802714C0 -> 0x802714DC
void zUIUserString::DoExit() {
}
// Range: 0x802714E0 -> 0x80271560
void zUIUserString::DoReset(class zUIUserString * this /* r30 */) {
}
// signature: zUIUserString::DoHandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80271560 -> 0x80271764
void zUIUserString::DoHandleEvent(class zUIUserString * this /* r31 */) {
    // Local variables
    class EventActionLegacy * params; // r0

    {
        // Range: 0x802715A8 -> 0x80271640
        // Local variables
        char * asset; // r0
        unsigned int stringHash; // r3
        unsigned int len; // r1+0x8
    }
    {
        // Range: 0x80271644 -> 0x802716B0
        // Local variables
        char ch; // r7
    }
}
// Range: 0x80271770 -> 0x80271780
unsigned long long zUIUserString::GetSortKey() const {
}
// Range: 0x80271780 -> 0x80271880
class Entity * Sext::UI_User_String::Create(class EntityHandleBase * handle /* r29 */, class UI_User_String * asset /* r30 */) {
    // References
    // -> struct {} __vt__13zUIUserString;
    // -> struct {} __vt__Q25World9xOGEntity;
}
