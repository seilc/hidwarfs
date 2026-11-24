/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xutil.cpp
*/
static int g_xutilinit; // size: 0x4, address: 0x807656F0
static int g_crc_needinit; // size: 0x4, address: 0x806F3118
static unsigned int g_crc32_table[256]; // size: 0x400, address: 0x807656F8
static unsigned short ascii_table[3][2]; // size: 0xC, address: 0x806F311C
static unsigned short ascii_k_table[33]; // size: 0x42, address: 0x806F3128
static unsigned short ascii_special_table[33]; // size: 0x42, address: 0x806F316C
static char buf[6][10]; // size: 0x3C, address: 0x80765AF8
// Range: 0x8006A3C0 -> 0x8006A400
int xUtilStartup() {
    // References
    // -> static int g_xutilinit;
}
// Range: 0x8006A400 -> 0x8006A414
int xUtilShutdown() {
    // References
    // -> static int g_xutilinit;
}
// signature: xUtil_idtag2string(unsigned int, int)
// Range: 0x8006A420 -> 0x8006A8D8
char * xUtil_idtag2string() {
    // Local variables
    unsigned int tag; // r1+0xC
    char * strptr; // r3
    char * uc; // r0

    {
        // Range: 0x8006A44C -> 0x8006A454
        // Local variables
        int l; // r1+0x8
    }
    {
        // Range: 0x8006A454 -> 0x8006A480
        // Local variables
        char t; // r7
    }

    // References
    // -> class __locale _current_locale;
    // -> static char buf[6][10];
}
// Range: 0x8006A8E0 -> 0x8006A9CC
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
// Range: 0x8006A9D0 -> 0x8006AB88
int xUtil_yesno() {
    // References
    // -> static unsigned int * next;
    // -> static unsigned int state[624];
    // -> static int left;
}
