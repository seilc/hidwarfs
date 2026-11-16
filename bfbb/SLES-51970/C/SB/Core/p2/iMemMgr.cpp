/*
    Compile unit: C:\SB\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned int StackBase; // size: 0x4, address: 0x50ECF0
static unsigned int StackSize; // size: 0x4, address: 0x50ECF4
class xMemInfo_tag gMemInfo; // size: 0x30, address: 0x567E00
char _stack; // size: 0x1, address: 0x1FF0000
char _heap_size; // size: 0x1, address: 0x19D2C80
char _stack_size; // size: 0x1, address: 0x10000
char _end; // size: 0x1, address: 0x61D380
char _memtop; // size: 0x1, address: 0x2000000
char __data_start; // size: 0x1, address: 0x4010C0
// total size: 0xC
class xMemArea_tag {
    // Members
public:
    unsigned int addr; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    unsigned int flags; // offset 0x8, size 0x4
};
// total size: 0x30
class xMemInfo_tag {
    // Members
public:
    class xMemArea_tag system; // offset 0x0, size 0xC
    class xMemArea_tag stack; // offset 0xC, size 0xC
    class xMemArea_tag DRAM; // offset 0x18, size 0xC
    class xMemArea_tag SRAM; // offset 0x24, size 0xC
};

/*
    Compile unit: C:\SB\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AC250 -> 0x001AC278
*/
// Range: 0x1AC250 -> 0x1AC278
void iMemExit() {
    /* anonymous block */ {
        // Range: 0x1AC250 -> 0x1AC278
    }
}


/*
    Compile unit: C:\SB\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AC280 -> 0x001AC4A4
*/
// Range: 0x1AC280 -> 0x1AC4A4
void iMemInit() {
    /* anonymous block */ {
        // Range: 0x1AC280 -> 0x1AC4A4
        unsigned int MemBase; // r16
        unsigned int MemTop; // r18
        unsigned int HeapBase; // r17
        unsigned int malloc_max; // r16
        void * p; // r2
    }
}


