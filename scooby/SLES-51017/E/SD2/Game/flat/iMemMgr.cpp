/*
    Compile unit: E:\SD2\Game\flat\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned int StackBase; // size: 0x4, address: 0x35863C
static unsigned int StackSize; // size: 0x4, address: 0x358640
unsigned int gPiggyBankSize; // size: 0x4, address: 0x0
static void * sMemPiggyBank; // size: 0x4, address: 0x0
class xMemInfo_tag gMemInfo; // size: 0x30, address: 0x366C40
char _stack; // size: 0x1, address: 0x1FF0000
char _heap_size; // size: 0x1, address: 0x1C3F100
char _stack_size; // size: 0x1, address: 0x10000
char _end; // size: 0x1, address: 0x3B0F00
char _memtop; // size: 0x1, address: 0x2000000
char __data_start; // size: 0x1, address: 0x2877B0
// total size: 0x30
class xMemInfo_tag {
    // Members
public:
    class xMemArea_tag system; // offset 0x0, size 0xC
    class xMemArea_tag stack; // offset 0xC, size 0xC
    class xMemArea_tag DRAM; // offset 0x18, size 0xC
    class xMemArea_tag SRAM; // offset 0x24, size 0xC
};
// total size: 0xC
class xMemArea_tag {
    // Members
public:
    unsigned int addr; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    unsigned int flags; // offset 0x8, size 0x4
};

/*
    Compile unit: E:\SD2\Game\flat\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00126110 -> 0x00126138
*/
// Range: 0x126110 -> 0x126138
void iMemExit() {
    /* anonymous block */ {
        // Range: 0x126110 -> 0x126138
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00126140 -> 0x0012636C
*/
// Range: 0x126140 -> 0x12636C
void iMemInit() {
    /* anonymous block */ {
        // Range: 0x126140 -> 0x12636C
        void * p; // r2
        unsigned int malloc_max; // r16
        unsigned int HeapBase; // r18
        unsigned int MemTop; // r17
        unsigned int MemBase; // r16
    }
}


