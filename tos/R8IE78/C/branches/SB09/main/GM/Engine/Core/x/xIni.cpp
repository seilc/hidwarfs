/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xIni.cpp
*/
// Range: 0x80033820 -> 0x800338B4
static char * TrimWhitespace(char * str /* r31 */) {
    // Local variables
    char * c; // r3
}
// Range: 0x800338C0 -> 0x80033BB8
class xIniFile * xIniParse(char * buf /* r26 */, int len /* r27 */) {
    // Local variables
    int i; // r5
    int ccr; // r30
    int clf; // r6
    int copen; // r31
    int lastCRLF; // r29
    char * c; // r0
    char * tok; // r0
    char * val; // r0
    char * lastLine; // r28
    char * line; // r25
    char * ltoken; // r1+0x8
    class xIniFile * ini; // r27
}
// Range: 0x80033BC0 -> 0x80033C30
int xIniGetIndex(class xIniFile * ini /* r28 */, char * tok /* r29 */) {
    // Local variables
    int i; // r30
}
// signature: xIniGetInt(xIniFile *, const char *, int)
// Range: 0x80033C30 -> 0x80033C88
int xIniGetInt(class xIniFile * ini /* r30 */, int def /* r31 */) {
    // Local variables
    int index; // r0
}
// signature: xIniGetFloat(xIniFile *, const char *, float)
// Range: 0x80033C90 -> 0x80033CF8
float xIniGetFloat(class xIniFile * ini /* r31 */, float def /* f31 */) {
    // Local variables
    int index; // r0
}
// signature: xIniGetString(xIniFile *, const char *, const char *)
// Range: 0x80033D00 -> 0x80033D50
char * xIniGetString(class xIniFile * ini /* r30 */, char * def /* r31 */) {
    // Local variables
    int index; // r0
}
// Range: 0x80033D50 -> 0x80033DC4
class xIniSection * xIniGetSection(class xIniFile * ini /* r28 */, char * sec /* r29 */) {
    // Local variables
    int i; // r30
}
// signature: xIniGetIndex(xIniFile *, const char *, int)
// Range: 0x80033DD0 -> 0x80033E40
int xIniGetIndex(class xIniFile * ini /* r28 */, char * tok /* r29 */) {
    // Local variables
    int i; // r30
}
// signature: xIniGetString(xIniFile *, const char *, const char *, int &)
// Range: 0x80033E40 -> 0x80033EA4
char * xIniGetString(class xIniFile * ini /* r29 */, char * def /* r30 */, int & idx /* r31 */) {
}
