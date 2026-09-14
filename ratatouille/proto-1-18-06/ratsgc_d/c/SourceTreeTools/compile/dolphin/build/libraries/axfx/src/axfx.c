/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\axfx\src\axfx.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x8039AC88 -> 0x8039ACE0
*/
int __OSCurrHeap; // size: 0x4, address: 0x80D681E0
// Range: 0x8039AC88 -> 0x8039ACB4
static void * __AXFXAllocFunction(unsigned long bytes /* r1+0x8 */) {
    // References
    // -> int __OSCurrHeap;
}

// Range: 0x8039ACB4 -> 0x8039ACE0
static void __AXFXFreeFunction(void * p /* r1+0x8 */) {
    // References
    // -> int __OSCurrHeap;
}

void * (* __AXFXAlloc)(unsigned long); // size: 0x4, address: 0x80D67FF0
void (* __AXFXFree)(void *); // size: 0x4, address: 0x80D67FF4

