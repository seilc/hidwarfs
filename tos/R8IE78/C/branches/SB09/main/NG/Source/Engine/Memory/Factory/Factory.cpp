/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Memory\Factory\Factory.cpp
*/
static unsigned int gDefaultFactoryFormat[8]; // size: 0x20, address: 0x806942E0
// Range: 0x801EC500 -> 0x801EC530
void Memory::FactoryPageInfo::ResetUsageData() {
    {
        // Range: 0x801EC500 -> 0x801EC52C
        // Local variables
        unsigned int i; // r7
    }
}
// signature: Memory::FactoryPageInfo::GetBlock(unsigned int)
// Range: 0x801EC720 -> 0x801EC734
void * Memory::FactoryPageInfo::GetBlock() {
}
// Range: 0x801EC380 -> 0x801EC3BC
void * Memory::Factory::Factory() {
    {
        // Range: 0x801EC38C -> 0x801EC3A0
        // Local variables
        unsigned int i; // r0
    }
}
// signature: Memory::Factory::Initialize(void *, unsigned int, unsigned int, const unsigned int *)
// Range: 0x801EC3C0 -> 0x801EC4FC
unsigned int Memory::Factory::Initialize(class Factory * this /* r27 */, unsigned int memSize /* r28 */, unsigned int pageSize /* r29 */) {
    // Local variables
    unsigned int usageDataSize; // r31
    void * guessedPagesStart; // r7
    unsigned int totalUsedMem; // r0
    unsigned int wasted; // r3

    {
        // Range: 0x801EC400 -> 0x801EC4C8
        // Local variables
        unsigned int i; // r30
    }

    // References
    // -> static unsigned int gDefaultFactoryFormat[8];
}
// Range: 0x801EC530 -> 0x801EC584
void * Memory::Factory::AllocMemStatic(unsigned int size /* r30 */) {
    // Local variables
    void * mem; // r31
}
// signature: Memory::Factory::AllocMem(unsigned int, Memory::eFactoryMemType)
// Range: 0x801EC590 -> 0x801EC720
void * Memory::Factory::AllocMem(class Factory * this /* r29 */) {
    // Local variables
    int formatIndex; // r30
    class FactoryPageInfo * page; // r31
}
// Range: 0x801EC740 -> 0x801EC844
void Memory::Factory::DeallocMem(class Factory * this /* r30 */, void * mem /* r28 */) {
    // Local variables
    unsigned int pageIndex; // r0

    {
        // Range: 0x801EC7F0 -> 0x801EC830
        // Local variables
        unsigned int pageFormatIndex; // r0
    }
}
// Range: 0x801EC850 -> 0x801EC884
void Memory::Factory::Deinitialize() {
    {
        // Range: 0x801EC858 -> 0x801EC870
        // Local variables
        unsigned int i; // r0
    }
}
// signature: Memory::Factory::AddToFormattedPages(Memory::FactoryPageInfo *, unsigned int)
// Range: 0x801EC890 -> 0x801EC8A4
void Memory::Factory::AddToFormattedPages() {
}
// signature: Memory::Factory::RemoveFromFormattedPages(Memory::FactoryPageInfo *, unsigned int)
// Range: 0x801EC8B0 -> 0x801EC904
void Memory::Factory::RemoveFromFormattedPages() {
    // Local variables
    class FactoryPageInfo * curPage; // r6
    class FactoryPageInfo * prevPage; // r7
}
// signature: Memory::Factory::GetFormattedPageWithFreeBlock(unsigned int)
// Range: 0x801EC910 -> 0x801EC940
class FactoryPageInfo * Memory::Factory::GetFormattedPageWithFreeBlock() {
    // Local variables
    class FactoryPageInfo * curPage; // r3
}
// signature: Memory::Factory::CheckOtherFormattedPagesWithFreeBlock(unsigned int)
// Range: 0x801EC940 -> 0x801EC998
class FactoryPageInfo * Memory::Factory::CheckOtherFormattedPagesWithFreeBlock(class Factory * this /* r30 */) {
    {
        // Range: 0x801EC95C -> 0x801EC980
        // Local variables
        unsigned int i; // r31

        {
            // Range: 0x801EC95C -> 0x801EC980
            // Local variables
            class FactoryPageInfo * page; // r0
        }
    }
}
// Range: 0x801EC9A0 -> 0x801EC9C4
class FactoryPageInfo * Memory::Factory::PopFromFreePages() {
}
// signature: Memory::Factory::GetPageIndexFromAddress(void *)
// Range: 0x801EC9D0 -> 0x801EC9FC
unsigned int Memory::Factory::GetPageIndexFromAddress() {
    // Local variables
    unsigned int pageIndex; // r3
}
// signature: Memory::Factory::GetFormatIndexFromSize(unsigned int)
// Range: 0x801ECA00 -> 0x801ECA3C
unsigned int Memory::Factory::GetFormatIndexFromSize() {
    {
        // Range: 0x801ECA04 -> 0x801ECA34
        // Local variables
        unsigned int i; // r7
    }
}
// signature: Memory::Factory::FormatPage(Memory::FactoryPageInfo *, unsigned int)
// Range: 0x801ECA40 -> 0x801ECA70
void Memory::Factory::FormatPage() {
}
// signature: Memory::Factory::UnformatPage(Memory::FactoryPageInfo *)
// Range: 0x801ECA70 -> 0x801ECA88
void Memory::Factory::UnformatPage() {
}
// Range: 0x801ECA90 -> 0x801ECC7C
void Memory::Factory::DPrintfStats(class Factory * this /* r26 */) {
    // Local variables
    unsigned int pageNumbers[8]; // r1+0x28
    unsigned int blocksUsed[8]; // r1+0x8
    unsigned int freePages; // r28

    {
        // Range: 0x801ECAC8 -> 0x801ECB6C
        // Local variables
        unsigned int i; // r27

        {
            // Range: 0x801ECAC8 -> 0x801ECB6C
            // Local variables
            int format; // r0

            {
                // Range: 0x801ECAD4 -> 0x801ECB6C
                // Local variables
                unsigned int j; // r5
            }
        }
    }
    {
        // Range: 0x801ECC10 -> 0x801ECC48
        // Local variables
        unsigned int i; // r25
    }
}
