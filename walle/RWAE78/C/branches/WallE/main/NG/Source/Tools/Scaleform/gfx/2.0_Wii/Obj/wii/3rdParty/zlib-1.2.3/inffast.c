/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Obj\wii\3rdParty\zlib-1.2.3\inffast.c
    Producer: MW EABI PPC C-Compiler
    Language: C
    Code range: 0x805E7EB8 -> 0x805E837C
*/
// Range: 0x805E7EB8 -> 0x805E837C
void inflate_fast() {
    // Local variables
    struct inflate_state * state; // r6
    unsigned char * in; // r7
    unsigned char * last; // r0
    unsigned char * out; // r8
    unsigned char * beg; // r4
    unsigned char * end; // r9
    unsigned int wsize; // r10
    unsigned int whave; // r11
    unsigned int write; // r12
    unsigned char * window; // r31
    unsigned long hold; // r30
    unsigned int bits; // r29
    code * lcode; // r28
    code * dcode; // r27
    unsigned int lmask; // r26
    unsigned int dmask; // r25
    code this; // r1+0x8
    unsigned int op; // r24
    unsigned int len; // r23
    unsigned int dist; // r22
    unsigned char * from; // r21
}
