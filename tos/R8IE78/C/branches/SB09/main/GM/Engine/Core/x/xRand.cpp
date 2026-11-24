/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xRand.cpp
*/
static unsigned int state[624]; // size: 0x9C0, address: 0x80728A78
static int left; // size: 0x4, address: 0x806B4058
static int initf; // size: 0x4, address: 0x80729438
static unsigned int * next; // size: 0x4, address: 0x8072943C
// Range: 0x8003ED80 -> 0x8003EDB0
void xrand_RandomInit() {
}
// signature: init_genrand(unsigned int)
// Range: 0x8003EE10 -> 0x8003EE74
void init_genrand() {
    // Local variables
    int j; // r8

    // References
    // -> static int initf;
    // -> static int left;
    // -> static unsigned int state[624];
}
// Range: 0x8003EF00 -> 0x8003EFF4
void next_state() {
    // Local variables
    unsigned int * p; // r3
    int j; // r7

    // References
    // -> static unsigned int * next;
    // -> static int left;
    // -> static unsigned int state[624];
}
// Range: 0x8003EE80 -> 0x8003EEF8
unsigned int xrand_GenRandInt32() {
    // Local variables
    unsigned int y; // r4

    // References
    // -> static unsigned int * next;
    // -> static int left;
}
// Range: 0x8003F000 -> 0x8003F0A0
float xrand_GenRandFloat() {
    // Local variables
    unsigned int y; // r4
    float fRandFloat; // f1

    // References
    // -> static unsigned int * next;
    // -> static int left;
}
// Range: 0x8003F0A0 -> 0x8003F15C
float xrand_GenRandFloatLessThanOne() {
    // Local variables
    unsigned int y; // r7
    float fRandFloat; // f1

    // References
    // -> static unsigned int * next;
    // -> static int left;
}
// Range: 0x8003F160 -> 0x8003F270
float xrand_GenRandFloatBetweenZeroOne() {
    // Local variables
    unsigned long y; // r3
    float fRandFloat; // f1

    // References
    // -> static int left;
    // -> static unsigned int * next;
}
