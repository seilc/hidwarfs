/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zFactory.cpp
*/
static unsigned int gDefaultFactoryFormat[8]; // size: 0x20, address: 0x806CC340
// Range: 0x800CA680 -> 0x800CA6B8
void * zFactory::zFactory() {
}
// signature: zFactory::Initialize(void *, unsigned int, const unsigned int *)
// Range: 0x800CA6C0 -> 0x800CA7E8
unsigned int zFactory::Initialize() {
    // Local variables
    void * guessedPagesStart; // r12

    {
        // Range: 0x800CA6E0 -> 0x800CA73C
        // Local variables
        int i; // r6
    }

    // References
    // -> static unsigned int gDefaultFactoryFormat[8];
}
// Range: 0x800CA7F0 -> 0x800CA844
void * zFactory::AllocMemStatic(unsigned int size /* r30 */) {
    // Local variables
    void * mem; // r31
}
// signature: zFactory::AllocMem(unsigned int, eFactoryMemType)
// Range: 0x800CA850 -> 0x800CAB2C
void * zFactory::AllocMem(class zFactory * this /* r30 */) {
    // Local variables
    class zFactoryPageInfo * page; // r4
}
// signature: zFactory::DeallocMem(void *)
// Range: 0x800CAB30 -> 0x800CAD0C
void zFactory::DeallocMem() {
    // Local variables
    class zFactoryPageInfo * page; // r5
}
// Range: 0x800CAD10 -> 0x800CAD48
void zFactory::Deinitialize() {
}
// Range: 0x800CAD50 -> 0x800CAED8
void zFactory::DPrintfStats(class zFactory * this /* r31 */) {
    // Local variables
    unsigned int pageNumbers[8]; // r1+0x28
    unsigned int blocksUsed[8]; // r1+0x8

    {
        // Range: 0x800CAD84 -> 0x800CAEB4
        // Local variables
        int i; // r9

        {
            // Range: 0x800CAD84 -> 0x800CAEB4
            // Local variables
            class zFactoryPageInfo * page; // r10

            {
                // Range: 0x800CAD94 -> 0x800CAEA0
                // Local variables
                unsigned int j; // r11
            }
        }
    }
}
