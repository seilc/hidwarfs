/*
    Compile unit: C:\TestBuild\in\Core\x\xJaw.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
float scale; // size: 0x4, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
// total size: 0xC
class xJawDataTable {
    // Members
public:
    unsigned int soundHashID; // offset 0x0, size 0x4
    unsigned int dataStart; // offset 0x4, size 0x4
    unsigned int dataLength; // offset 0x8, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\Core\x\xJaw.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F43C0 -> 0x001F44E8
*/
// Range: 0x1F43C0 -> 0x1F44E8
float xJaw_EvalData(void * data /* r18 */, float time /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1F43C0 -> 0x1F44E8
        float lerp; // r3
        signed int idx; // r2
        signed int numdata; // r2
        unsigned char * jawdata; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xJaw.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F44F0 -> 0x001F45CC
*/
// Range: 0x1F44F0 -> 0x1F45CC
void * xJaw_FindData(unsigned int soundID /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1F44F0 -> 0x1F45CC
        signed int i; // r17
        signed int numJawTables; // r2
        unsigned int j; // r7
        void * data; // r2
        unsigned int jawcount; // r2
        class xJawDataTable * tbl; // r2
        void * rawdata; // r2
    }
}


