/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zMainLanguageScreen.cpp
*/
class zUIImage * gFlagUIImages; // size: 0x4, address: 0x80752FE4
class zUIImage * gBackgroundImages; // size: 0x4, address: 0x80752FE8
int gLanguageCount; // size: 0x4, address: 0x80752FEC
char gLanguages[16][8]; // size: 0x80, address: 0x80752FF0
char gDefaultLanguage[8]; // size: 0x8, address: 0x80753070
char gConsoleLanguage[8]; // size: 0x8, address: 0x80753078
bool isNorthAmericanRegion; // size: 0x1, address: 0x80753080
bool isEuropeRegion; // size: 0x1, address: 0x80753081
int gCurrentLanguage; // size: 0x4, address: 0x80753084
class Time gPrevTime; // size: 0x8, address: 0x80753088
int backgroundElementCount; // size: 0x4, address: 0x80753090
int gAcceptButton; // size: 0x4, address: 0x80753094
class ConsoleLanguageMapping gConsoleLanguageTable[10]; // size: 0xAA, address: 0x806BD9F8
static class zScaleform * mnlsScaleform; // size: 0x4, address: 0x80753098
int gConsoleLanguageCount; // size: 0x4, address: 0x806BDAA4
// Range: 0x800D5070 -> 0x800D50F8
static bool IsNorthAmericanRegion(char * region /* r30 */) {
}
// Range: 0x800D5100 -> 0x800D530C
void zMainLanguageSelectionINI(class xIniFile * ini /* r27 */) {
    // Local variables
    char * _buf; // r28
    int index; // r1+0x8

    // References
    // -> int gLanguageCount;
    // -> char gLanguages[16][8];
    // -> bool isEuropeRegion;
    // -> bool isNorthAmericanRegion;
    // -> char gDefaultLanguage[8];
}
// Range: 0x800D5310 -> 0x800D53F8
bool AllOurLanguagesAreSupported() {
    {
        // Range: 0x800D5320 -> 0x800D53E0
        // Local variables
        int i; // r24

        {
            // Range: 0x800D5320 -> 0x800D53E0
            // Local variables
            bool supported; // r23

            {
                // Range: 0x800D5320 -> 0x800D53BC
                // Local variables
                int j; // r22
            }
        }
    }

    // References
    // -> int gLanguageCount;
    // -> int gConsoleLanguageCount;
    // -> char gLanguages[16][8];
    // -> class ConsoleLanguageMapping gConsoleLanguageTable[10];
}
// Range: 0x800D5400 -> 0x800D5474
bool ConsoleIsSetToOneOfOurLanguages() {
    {
        // Range: 0x800D5414 -> 0x800D545C
        // Local variables
        int i; // r27
    }

    // References
    // -> char gConsoleLanguage[8];
    // -> char gLanguages[16][8];
    // -> int gLanguageCount;
}
// Range: 0x800D5480 -> 0x800D5580
bool zMainSetLanguage() {
    // References
    // -> char gDefaultLanguage[8];
    // -> class zGlobals globals;
    // -> int gLanguageCount;
    // -> char gConsoleLanguage[8];
    // -> bool isNorthAmericanRegion;
    // -> class ConsoleLanguageMapping gConsoleLanguageTable[10];
    // -> int gConsoleLanguageCount;
}
// Range: 0x800D5580 -> 0x800D5630
bool zMainLanguageSelectionSetup() {
    // Local variables
    class zScaleformAsset * mnlsAsset; // r30

    // References
    // -> static class zScaleform * mnlsScaleform;
}
// Range: 0x800D5630 -> 0x800D5684
bool zMainLanguageSelectionStep() {
    // References
    // -> static class zScaleform * mnlsScaleform;
}
// Range: 0x800D5690 -> 0x800D56D8
void zMainLanguageSelectionCleanup() {
    // References
    // -> static class zScaleform * mnlsScaleform;
}
