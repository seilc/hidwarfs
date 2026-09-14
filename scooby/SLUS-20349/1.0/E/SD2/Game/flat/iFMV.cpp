/*
    Compile unit: E:\SD2\Game\flat\iFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
// total size: 0x18
class RwResEntry {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
    signed int size; // offset 0x8, size 0x4
    void * owner; // offset 0xC, size 0x4
    class RwResEntry * * ownerRef; // offset 0x10, size 0x4
    void (* destroyNotify)(class RwResEntry *); // offset 0x14, size 0x4
};
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};

/*
    Compile unit: E:\SD2\Game\flat\iFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00270460 -> 0x00270518
*/
// Range: 0x270460 -> 0x270518
unsigned int iFMVPlay(char * filename /* r18 */, unsigned int buttons /* r17 */, float time /* r20 */) {
    /* anonymous block */ {
        // Range: 0x270460 -> 0x270518
        class RwResEntry * repEntryOwner; // r29+0x5C
        class RwResEntry * repEntry; // r16
    }
}


