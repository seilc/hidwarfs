/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\os\src\OSAddress.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803CEC4C -> 0x803CEDB4
*/
// Range: 0x803CEC4C -> 0x803CECA0
void * OSPhysicalToCached(unsigned long paddr /* r31 */) {}

// Range: 0x803CECA0 -> 0x803CECF4
void * OSPhysicalToUncached(unsigned long paddr /* r31 */) {}

// Range: 0x803CECF4 -> 0x803CED54
unsigned long OSCachedToPhysical(void * caddr /* r31 */) {}

// Range: 0x803CED54 -> 0x803CEDB4
unsigned long OSUncachedToPhysical(void * ucaddr /* r31 */) {}


