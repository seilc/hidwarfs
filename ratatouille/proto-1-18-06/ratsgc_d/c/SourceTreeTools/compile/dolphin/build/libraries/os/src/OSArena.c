/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\os\src\OSArena.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803D075C -> 0x803D08C8
*/
static void * __OSArenaHi; // size: 0x4, address: 0x80D6C0D0
static void * __OSArenaLo; // size: 0x4, address: 0x80D681E8
// Range: 0x803D075C -> 0x803D07D4
void * OSGetArenaHi() {
    // References
    // -> static void * __OSArenaHi;
    // -> static void * __OSArenaLo;
}

// Range: 0x803D07D4 -> 0x803D084C
void * OSGetArenaLo() {
    // References
    // -> static void * __OSArenaLo;
    // -> static void * __OSArenaHi;
}

// Range: 0x803D084C -> 0x803D0854
void OSSetArenaHi(void * newHi /* r3 */) {
    // References
    // -> static void * __OSArenaHi;
}

// Range: 0x803D0854 -> 0x803D085C
void OSSetArenaLo(void * newLo /* r3 */) {
    // References
    // -> static void * __OSArenaLo;
}

// Range: 0x803D085C -> 0x803D08C8
void * OSAllocFromArenaLo(unsigned long size /* r1+0x8 */, unsigned long align /* r29 */) {
    // Local variables
    void * ptr; // r30
    unsigned char * arenaLo; // r31
}


