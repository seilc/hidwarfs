/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xIni.cpp
*/
// Range: 0x80061AB0 -> 0x80061F28
class xIniFile * xIniParse(char * buf /* r27 */, int len /* r26 */) {
    // Local variables
    int i; // r5
    int ccr; // r29
    int clf; // r6
    int copen; // r30
    int lastCRLF; // r31
    char * lastLine; // r28
    char * line; // r27
    char * ltoken; // r1+0x8
    class xIniFile * ini; // r26
}
// signature: xIniDestroy(xIniFile *)
// Range: 0x80061F30 -> 0x80061F48
void xIniDestroy() {
}
// Range: 0x80061F50 -> 0x80061FE4
int xIniGetInt(class xIniFile * ini /* r27 */, char * tok /* r28 */, int def /* r29 */) {
}
// Range: 0x80061FF0 -> 0x800620B0
float xIniGetFloat(class xIniFile * ini /* r28 */, char * tok /* r29 */, float def /* f31 */) {
}
// Range: 0x800620B0 -> 0x80062140
char * xIniGetString(class xIniFile * ini /* r27 */, char * tok /* r28 */, char * def /* r29 */) {
}
// Range: 0x80062140 -> 0x800621D0
class xIniSection * xIniGetSection(class xIniFile * ini /* r28 */, char * sec /* r29 */) {
    // Local variables
    int i; // r30
}
// Range: 0x800621D0 -> 0x80062270
char * xIniGetString(class xIniFile * ini /* r26 */, char * tok /* r27 */, char * def /* r28 */, int & idx /* r29 */) {
}
