/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\src\pipe\p2\p2resort.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80469B08 -> 0x80469EE0
*/
static char __dbFunctionName[10]; // size: 0xA, address: 0x804EF7E8
// Range: 0x80469B08 -> 0x80469B60
static unsigned int _msbitpos(unsigned int un /* r3 */) {
    // Local variables
    unsigned int pos; // r31

    // References
    // -> static char __dbFunctionName[10];
}

static char __dbFunctionName[13]; // size: 0xD, address: 0x804EF7F2
// total size: 0xC
struct tagStackEntry {
    // Members
    unsigned char * l; // offset 0x0, size 0x4
    unsigned char * r; // offset 0x4, size 0x4
    unsigned int bit; // offset 0x8, size 0x4
};
// Range: 0x80469B60 -> 0x80469CC4
static void _repartition(unsigned char * l /* r3 */, unsigned char * r /* r4 */, unsigned int elementSize /* r5 */, unsigned int elementKeyOffset /* r6 */, unsigned int partitioningBit /* r7 */) {
    // Local variables
    struct tagStackEntry stack[32]; // r1+0x18
    struct tagStackEntry * stackptr; // r31
    unsigned char * savel; // r25
    unsigned char * saver; // r24
    unsigned char * _l; // r30
    unsigned char * _r; // r29
    unsigned int _elementSize; // r28
    unsigned int t0; // r23
    unsigned int t1; // r22
    unsigned char * defer_l; // r27
    unsigned char * defer_r; // r26

    // References
    // -> static char __dbFunctionName[13];
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804EF7FF
// Range: 0x80469CC4 -> 0x80469D80
static void _insertionsort(unsigned char * elements /* r3 */, unsigned int numElements /* r4 */, unsigned int elementSize /* r5 */, unsigned int elementKeyOffset /* r6 */) {
    // Local variables
    unsigned int keyToPlace; // r27
    unsigned char * p; // r31
    unsigned char * _l; // r30
    unsigned char * _r; // r29
    unsigned int _elementSize; // r28
    unsigned int t0; // r26
    unsigned int t1; // r25

    // References
    // -> static char __dbFunctionName[15];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EF80E
// Range: 0x80469D80 -> 0x80469EE0
void _rx_rxRadixExchangeSort(void * elements /* r29 */, unsigned int numElements /* r28 */, unsigned int elementSize /* r30 */, unsigned int elementKeyOffset /* r25 */, unsigned int keyLo /* r1+0x8 */, unsigned int keyHi /* r17 */) {
    // Local variables
    unsigned int i; // r31
    unsigned int minKey; // r22
    unsigned int minKeyIndex; // r24
    unsigned int key; // r21
    unsigned char * _l; // r27
    unsigned char * _r; // r26
    unsigned int _elementSize; // r23
    unsigned int t0; // r20
    unsigned int t1; // r19

    // References
    // -> static char __dbFunctionName[24];
}


