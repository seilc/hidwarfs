/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zFactory.cpp
*/
static unsigned int gDefaultFactoryFormat[8]; // size: 0x20, address: 0x8077E120
// Range: 0x80153580 -> 0x801535B8
void * zFactory::zFactory() {
}
// signature: zFactory::Initialize(void *, unsigned int, const unsigned int *)
// Range: 0x801535C0 -> 0x801536E8
unsigned int zFactory::Initialize() {
    // Local variables
    void * guessedPagesStart; // r12

    {
        // Range: 0x801535E0 -> 0x8015363C
        // Local variables
        int i; // r6
    }

    // References
    // -> static unsigned int gDefaultFactoryFormat[8];
}
// Range: 0x801536F0 -> 0x80153744
void * zFactory::AllocMemStatic(unsigned int size /* r30 */) {
    // Local variables
    void * mem; // r31
}
// signature: zFactory::AllocMem(unsigned int, eFactoryMemType)
// Range: 0x80153750 -> 0x80153A2C
void * zFactory::AllocMem(class zFactory * this /* r30 */) {
    // Local variables
    class zFactoryPageInfo * page; // r4
}
// signature: zFactory::DeallocMem(void *)
// Range: 0x80153A30 -> 0x80153BF8
void zFactory::DeallocMem(class zFactory * this /* r30 */) {
    // Local variables
    class zFactoryPageInfo * page; // r31
}
// signature: zFactory::RemoveFromFormattedPages(zFactoryPageInfo *, unsigned int)
// Range: 0x80153C00 -> 0x80153C54
void zFactory::RemoveFromFormattedPages() {
    // Local variables
    class zFactoryPageInfo * curPage; // r6
    class zFactoryPageInfo * prevPage; // r7
}
// Range: 0x80153C60 -> 0x80153DE8
void zFactory::DPrintfStats(class zFactory * this /* r31 */) {
    // Local variables
    unsigned int pageNumbers[8]; // r1+0x28
    unsigned int blocksUsed[8]; // r1+0x8

    {
        // Range: 0x80153C94 -> 0x80153DC4
        // Local variables
        int i; // r9

        {
            // Range: 0x80153C94 -> 0x80153DC4
            // Local variables
            class zFactoryPageInfo * page; // r10

            {
                // Range: 0x80153CA4 -> 0x80153DB0
                // Local variables
                unsigned int j; // r11
            }
        }
    }
}
