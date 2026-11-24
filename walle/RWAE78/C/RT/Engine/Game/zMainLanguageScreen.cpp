/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zMainLanguageScreen.cpp
*/
class zUIImage * gFlagUIImages; // size: 0x4, address: 0x807910C0
class zUIImage * gBackgroundImages; // size: 0x4, address: 0x807910C4
int gLanguageCount; // size: 0x4, address: 0x807910C8
char gLanguages[16][8]; // size: 0x80, address: 0x807910D0
char gDefaultLanguage[8]; // size: 0x8, address: 0x80791150
char gConsoleLanguage[8]; // size: 0x8, address: 0x80791158
bool isNorthAmericanRegion; // size: 0x1, address: 0x80791160
int gCurrentLanguage; // size: 0x4, address: 0x80791164
class Time gPrevTime; // size: 0x8, address: 0x80791168
int backgroundElementCount; // size: 0x4, address: 0x80791170
int gAcceptButton; // size: 0x4, address: 0x80791174
class ConsoleLanguageMapping gConsoleLanguageTable[10]; // size: 0xAA, address: 0x806FB6A8
static class zScaleform * mnlsScaleform; // size: 0x4, address: 0x80791178
int gConsoleLanguageCount; // size: 0x4, address: 0x806FB754
// Range: 0x800ECCD0 -> 0x800ECCDC
int zMainGetLanguageCount() {
    // References
    // -> int gLanguageCount;
}
// signature: zMainGetLanguage(int)
// Range: 0x800ECCE0 -> 0x800ECCF4
char * zMainGetLanguage() {
    // References
    // -> char gLanguages[16][8];
}
// Range: 0x800ECD00 -> 0x800ECE30
bool AllOurLanguagesAreSupported() {
    {
        // Range: 0x800ECD1C -> 0x800ECE0C
        // Local variables
        int i; // r25

        {
            // Range: 0x800ECD1C -> 0x800ECE0C
            // Local variables
            bool supported; // r24

            {
                // Range: 0x800ECD1C -> 0x800ECDEC
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
