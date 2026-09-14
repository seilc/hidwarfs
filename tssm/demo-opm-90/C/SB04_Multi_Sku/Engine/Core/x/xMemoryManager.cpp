/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMemoryManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040B620 -> 0x0040B680
*/
// Range: 0x40B620 -> 0x40B680
// this: r2
void * xMemoryManager::RemoveDebugBlock(void * memory /* r2 */, unsigned int * size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40B620 -> 0x40B680
        class DebugAllocationHeader * header; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMemoryManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040B680 -> 0x0040B718
*/
// Range: 0x40B680 -> 0x40B718
// this: r2
void * xMemoryManager::SetupDebugBlock(void * memory /* r2 */, unsigned int size /* r2 */, char * file /* r2 */, char * function /* r2 */, signed int line /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40B680 -> 0x40B718
        class DebugAllocationHeader * header; // r2
        class DebugAllocationTrailer * trailer; // r7
        signed int i; // r6
        signed int i; // r4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMemoryManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040B720 -> 0x0040B8D4
*/
// Range: 0x40B720 -> 0x40B8D4
// this: r19
void * xMemoryManager::DoReallocate(void * pointer /* r18 */, unsigned int size /* r20 */, unsigned int options /* r16 */) {
    /* anonymous block */ {
        // Range: 0x40B720 -> 0x40B8D4
        unsigned int copySize; // r17
        void * newBlock; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMemoryManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040B8E0 -> 0x0040B8E8
*/
// Range: 0x40B8E0 -> 0x40B8E8
void HandleOutOfMemory() {
    /* anonymous block */ {
        // Range: 0x40B8E0 -> 0x40B8E8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMemoryManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040B8F0 -> 0x0040B914
*/
// Range: 0x40B8F0 -> 0x40B914
// this: r2
void xMemoryManager::DoInit(void * start /* r2 */, unsigned int size /* r2 */, unsigned char debugging /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40B8F0 -> 0x40B914
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMemoryManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040B920 -> 0x0040B968
*/
// Range: 0x40B920 -> 0x40B968
// this: r16
unsigned int xMemoryManager::GetBlockSize(void * pointer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40B920 -> 0x40B968
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMemoryManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040B970 -> 0x0040BBF8
*/
// Range: 0x40B970 -> 0x40BBF8
// this: r18
void * xMemoryManager::Reallocate(void * pointer /* r2 */, unsigned int size /* r16 */, unsigned int options /* r17 */) {
    /* anonymous block */ {
        // Range: 0x40B970 -> 0x40BBF8
        void * newBlock; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMemoryManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040BC00 -> 0x0040BC8C
*/
// Range: 0x40BC00 -> 0x40BC8C
// this: r16
void xMemoryManager::Free(void * pointer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40BC00 -> 0x40BC8C
        unsigned int size; // r29+0x2C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMemoryManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040BC90 -> 0x0040BDCC
*/
// Range: 0x40BC90 -> 0x40BDCC
// this: r18
void * xMemoryManager::Allocate(unsigned int size /* r17 */, unsigned int options /* r16 */) {
    /* anonymous block */ {
        // Range: 0x40BC90 -> 0x40BDCC
        void * memory; // r2
    }
}


