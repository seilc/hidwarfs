/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xutil.cpp
*/
static int g_xutilinit; // size: 0x4, address: 0x80815A30
static int g_crc_needinit; // size: 0x4, address: 0x807A23CC
static unsigned int g_crc32_table[256]; // size: 0x400, address: 0x80815A38
static char buf[6][10]; // size: 0x3C, address: 0x80815E38
// Range: 0x800868A0 -> 0x800868E0
int xUtilStartup() {
    // References
    // -> static int g_xutilinit;
}
// Range: 0x800868E0 -> 0x800868F4
int xUtilShutdown() {
    // References
    // -> static int g_xutilinit;
}
// signature: xUtil_idtag2string(unsigned int, int)
// Range: 0x80086900 -> 0x80086DB8
char * xUtil_idtag2string() {
    // Local variables
    unsigned int tag; // r1+0xC
    char * strptr; // r3
    char * uc; // r0

    {
        // Range: 0x8008692C -> 0x80086934
        // Local variables
        int l; // r1+0x8
    }
    {
        // Range: 0x80086934 -> 0x80086960
        // Local variables
        char t; // r7
    }

    // References
    // -> class __locale _current_locale;
    // -> static char buf[6][10];
}
// Range: 0x80086DC0 -> 0x80086EAC
unsigned int xUtil_crc_init() {
    // Local variables
    int i; // r5
    int j; // r0
    unsigned int crc_accum; // r0

    // References
    // -> static unsigned int g_crc32_table[256];
    // -> static int g_crc_needinit;
}
// signature: xUtil_yesno(const float)
// Range: 0x80086EB0 -> 0x80087068
int xUtil_yesno() {
    // References
    // -> static unsigned int * next;
    // -> static unsigned int state[624];
    // -> static int left;
}
