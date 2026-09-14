/*
    Compile unit: C:\TestBuild\in\Core\x\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
float scale; // size: 0x4, address: 0x0
unsigned int gActiveHeap; // size: 0x4, address: 0x608A5C
// total size: 0x10
class st_XORDEREDARRAY {
    // Members
public:
    void * * list; // offset 0x0, size 0x4
    signed int cnt; // offset 0x4, size 0x4
    signed int max; // offset 0x8, size 0x4
    signed int warnlvl; // offset 0xC, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\Core\x\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A59C0 -> 0x001A5B18
*/
// Range: 0x1A59C0 -> 0x1A5B18
void XOrdSort(class st_XORDEREDARRAY * array /* r2 */, signed int (* test)(void *, void *) /* r29+0xBC */) {
    /* anonymous block */ {
        // Range: 0x1A59C0 -> 0x1A5B18
        void * * list; // r2
        signed int num; // r2
        signed int i; // r21
        signed int j; // r20
        signed int h; // r19
        void * v; // r22
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A5B20 -> 0x001A5BF8
*/
// Range: 0x1A5B20 -> 0x1A5BF8
signed int XOrdLookup(class st_XORDEREDARRAY * array /* r21 */, void * key /* r20 */, signed int (* test)(void *, void *) /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1A5B20 -> 0x1A5BF8
        signed int da_idx; // r22
        signed int k0; // r18
        signed int k1; // r17
        signed int k; // r2
        signed int v; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A5C00 -> 0x001A5CD4
*/
// Range: 0x1A5C00 -> 0x1A5CD4
void XOrdInsert(class st_XORDEREDARRAY * array /* r20 */, void * elt /* r19 */, signed int (* compare)(void *, void *) /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1A5C00 -> 0x1A5CD4
        signed int i; // r17
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A5CE0 -> 0x001A5D10
*/
// Range: 0x1A5CE0 -> 0x1A5D10
void XOrdAppend(class st_XORDEREDARRAY * array /* r2 */, void * elt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A5CE0 -> 0x1A5D10
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A5D10 -> 0x001A5D58
*/
// Range: 0x1A5D10 -> 0x1A5D58
void XOrdDone(class st_XORDEREDARRAY * array /* r16 */, signed int wasTempAlloc /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A5D10 -> 0x1A5D58
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A5D60 -> 0x001A5E1C
*/
// Range: 0x1A5D60 -> 0x1A5E1C
void XOrdInit(class st_XORDEREDARRAY * array /* r16 */, signed int size /* r2 */, signed int tempAlloc /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A5D60 -> 0x1A5E1C
    }
}


