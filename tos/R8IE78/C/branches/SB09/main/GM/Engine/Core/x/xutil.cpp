/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xutil.cpp
*/
static int g_xutilinit; // size: 0x4, address: 0x8072DA68
static int g_crc_needinit; // size: 0x4, address: 0x806B4204
static unsigned int g_crc32_table[256]; // size: 0x400, address: 0x8072DA70
char buf[6][10]; // size: 0x3C, address: 0x8072EC3C
// Range: 0x80048F30 -> 0x80048F70
int xUtilStartup() {
    // References
    // -> static int g_xutilinit;
}
// Range: 0x80048F70 -> 0x80048F84
int xUtilShutdown() {
    // References
    // -> static int g_xutilinit;
}
// signature: xUtil_idtag2string(unsigned int, int)
// Range: 0x80048F90 -> 0x800491C8
char * xUtil_idtag2string(int bufidx /* r30 */) {
    // Local variables
    unsigned int tag; // r1+0xC
    char * strptr; // r31
    char * uc; // r0

    {
        // Range: 0x80048FCC -> 0x80048FD4
        // Local variables
        int l; // r1+0x8
    }
    {
        // Range: 0x80048FD4 -> 0x80049000
        // Local variables
        char t; // r6
    }

    // References
    // -> char buf[6][10];
}
// Range: 0x80049210 -> 0x8004927C
unsigned int xUtil_crc_init() {
    // Local variables
    int i; // r6
    int j; // r0
    unsigned int crc_accum; // r7

    // References
    // -> static unsigned int g_crc32_table[256];
    // -> static int g_crc_needinit;
}
// Range: 0x80049280 -> 0x8004931C
int xUtil_yesno(float wt_yes /* f31 */) {
}
