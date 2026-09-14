/*
    Compile unit: E:\SD2\Game\flat\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned int gActiveHeap; // size: 0x4, address: 0x357CAC
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
    Code range: 0x00185E30 -> 0x00185FA8
*/
// Range: 0x185E30 -> 0x185FA8
void XOrdSort(class st_XORDEREDARRAY * array /* r2 */, signed int (* test)(void *, void *) /* r23 */) {
    /* anonymous block */ {
        // Range: 0x185E30 -> 0x185FA8
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
    Code range: 0x00185FB0 -> 0x0018607C
*/
// Range: 0x185FB0 -> 0x18607C
signed int XOrdLookup(class st_XORDEREDARRAY * array /* r22 */, void * key /* r21 */, signed int (* test)(void *, void *) /* r20 */) {
    /* anonymous block */ {
        // Range: 0x185FB0 -> 0x18607C
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
    Code range: 0x00186080 -> 0x00186148
*/
// Range: 0x186080 -> 0x186148
void XOrdInsert(class st_XORDEREDARRAY * array /* r20 */, void * elt /* r19 */, signed int (* compare)(void *, void *) /* r18 */) {
    /* anonymous block */ {
        // Range: 0x186080 -> 0x186148
        signed int i; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00186150 -> 0x00186180
*/
// Range: 0x186150 -> 0x186180
void XOrdAppend(class st_XORDEREDARRAY * array /* r2 */, void * elt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x186150 -> 0x186180
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00186180 -> 0x00186194
*/
// Range: 0x186180 -> 0x186194
void XOrdDone(class st_XORDEREDARRAY * array /* r2 */) {
    /* anonymous block */ {
        // Range: 0x186180 -> 0x186194
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001861A0 -> 0x00186228
*/
// Range: 0x1861A0 -> 0x186228
void XOrdInit(class st_XORDEREDARRAY * array /* r16 */, signed int max /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1861A0 -> 0x186228
    }
}


