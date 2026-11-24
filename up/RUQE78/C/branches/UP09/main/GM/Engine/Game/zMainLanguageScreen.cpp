/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zMainLanguageScreen.cpp
*/
class zUIImage * gFlagUIImages; // size: 0x4, address: 0x80822938
class zUIImage * gBackgroundImages; // size: 0x4, address: 0x8082293C
int gLanguageCount; // size: 0x4, address: 0x80822940
char gLanguages[16][8]; // size: 0x80, address: 0x80822948
char gDefaultLanguage[8]; // size: 0x8, address: 0x808229C8
char gConsoleLanguage[8]; // size: 0x8, address: 0x808229D0
bool isNorthAmericanRegion; // size: 0x1, address: 0x808229D8
bool isEuropeRegion; // size: 0x1, address: 0x808229D9
int gCurrentLanguage; // size: 0x4, address: 0x808229DC
class Time gPrevTime; // size: 0x8, address: 0x808229E0
int backgroundElementCount; // size: 0x4, address: 0x808229E8
int gAcceptButton; // size: 0x4, address: 0x808229EC
class ConsoleLanguageMapping gConsoleLanguageTable[10]; // size: 0xAA, address: 0x807AF678
static class zScaleform * mnlsScaleform; // size: 0x4, address: 0x808229F0
int gConsoleLanguageCount; // size: 0x4, address: 0x807AF724
// Range: 0x80195920 -> 0x80195A78
static bool IsEuropeRegion(char * region /* r30 */) {
}
// Range: 0x80195A80 -> 0x80195BB0
bool AllOurLanguagesAreSupported() {
    {
        // Range: 0x80195A9C -> 0x80195B8C
        // Local variables
        int i; // r25

        {
            // Range: 0x80195A9C -> 0x80195B8C
            // Local variables
            bool supported; // r24

            {
                // Range: 0x80195A9C -> 0x80195B6C
                // Local variables
                int j; // r23
            }
        }
    }

    // References
    // -> class ConsoleLanguageMapping gConsoleLanguageTable[10];
    // -> char gLanguages[16][8];
    // -> int gLanguageCount;
    // -> int gConsoleLanguageCount;
}
