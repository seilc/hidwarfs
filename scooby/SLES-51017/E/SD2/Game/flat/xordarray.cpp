/*
    Compile unit: E:\SD2\Game\flat\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned int gActiveHeap; // size: 0x4, address: 0x358634
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
    Compile unit: E:\SD2\Game\flat\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001865D0 -> 0x00186748
*/
// Range: 0x1865D0 -> 0x186748
void XOrdSort(class st_XORDEREDARRAY * array /* r2 */, signed int (* test)(void *, void *) /* r23 */) {
    /* anonymous block */ {
        // Range: 0x1865D0 -> 0x186748
        void * v; // r19
        signed int h; // r18
        signed int j; // r17
        signed int i; // r30
        signed int num; // r29+0xA0
        void * * list; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00186750 -> 0x0018681C
*/
// Range: 0x186750 -> 0x18681C
signed int XOrdLookup(class st_XORDEREDARRAY * array /* r22 */, void * key /* r21 */, signed int (* test)(void *, void *) /* r20 */) {
    /* anonymous block */ {
        // Range: 0x186750 -> 0x18681C
        signed int v; // r2
        signed int k; // r19
        signed int k1; // r18
        signed int k0; // r17
        signed int da_idx; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00186820 -> 0x001868E8
*/
// Range: 0x186820 -> 0x1868E8
void XOrdInsert(class st_XORDEREDARRAY * array /* r20 */, void * elt /* r19 */, signed int (* compare)(void *, void *) /* r18 */) {
    /* anonymous block */ {
        // Range: 0x186820 -> 0x1868E8
        signed int i; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001868F0 -> 0x00186920
*/
// Range: 0x1868F0 -> 0x186920
void XOrdAppend(class st_XORDEREDARRAY * array /* r2 */, void * elt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1868F0 -> 0x186920
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00186920 -> 0x00186934
*/
// Range: 0x186920 -> 0x186934
void XOrdDone(class st_XORDEREDARRAY * array /* r2 */) {
    /* anonymous block */ {
        // Range: 0x186920 -> 0x186934
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00186940 -> 0x001869C8
*/
// Range: 0x186940 -> 0x1869C8
void XOrdInit(class st_XORDEREDARRAY * array /* r16 */, signed int max /* r17 */) {
    /* anonymous block */ {
        // Range: 0x186940 -> 0x1869C8
    }
}


