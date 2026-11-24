/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xRand.cpp
*/
static unsigned int state[624]; // size: 0x9C0, address: 0x8075D0A0
static int left; // size: 0x4, address: 0x806F2E64
static int initf; // size: 0x4, address: 0x8075DA60
static unsigned int * next; // size: 0x4, address: 0x8075DA64
// Range: 0x80055A30 -> 0x80055C98
void xrand_RandomInit() {
    // References
    // -> static int initf;
    // -> static int left;
    // -> static unsigned int state[624];
    // -> long long startupTicks;
}
// Range: 0x80055CA0 -> 0x80055DE8
unsigned int xrand_GenRandInt32() {
    // Local variables
    unsigned int y; // r4

    // References
    // -> static unsigned int * next;
    // -> static unsigned int state[624];
    // -> static int left;
}
// Range: 0x80055DF0 -> 0x80055F68
float xrand_GenRandFloat() {
    // Local variables
    unsigned int y; // r4
    float fRandFloat; // f1

    // References
    // -> static unsigned int * next;
    // -> static unsigned int state[624];
    // -> static int left;
}
// Range: 0x80055F70 -> 0x800560FC
float xrand_GenRandFloatLessThanOne() {
    // Local variables
    unsigned int y; // r5
    float fRandFloat; // f1

    // References
    // -> static unsigned int * next;
    // -> static unsigned int state[624];
    // -> static int left;
}
// Range: 0x80056100 -> 0x800562B0
float xrand_GenRandFloatBetweenZeroOne() {
    // Local variables
    unsigned long y; // r12
    float fRandFloat; // f1

    // References
    // -> static unsigned int state[624];
    // -> static int left;
    // -> static unsigned int * next;
}
