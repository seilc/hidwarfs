/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00404C50 -> 0x00404DA8
*/
// Range: 0x404C50 -> 0x404DA8
void XOrdSort(class st_XORDEREDARRAY * array /* r2 */, signed int (* test)(void *, void *) /* r29+0xBC */) {
    /* anonymous block */ {
        // Range: 0x404C50 -> 0x404DA8
        void * * list; // r2
        signed int num; // r2
        signed int i; // r21
        signed int j; // r20
        signed int h; // r19
        void * v; // r22
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00404DB0 -> 0x00404E88
*/
// Range: 0x404DB0 -> 0x404E88
signed int XOrdLookup(class st_XORDEREDARRAY * array /* r21 */, void * key /* r20 */, signed int (* test)(void *, void *) /* r19 */) {
    /* anonymous block */ {
        // Range: 0x404DB0 -> 0x404E88
        signed int da_idx; // r22
        signed int k0; // r18
        signed int k1; // r17
        signed int k; // r2
        signed int v; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00404E90 -> 0x00404F5C
*/
// Range: 0x404E90 -> 0x404F5C
signed int XOrdFind(class st_XORDEREDARRAY * array /* r21 */, void * key /* r20 */, signed int (* test)(void *, void *) /* r19 */) {
    /* anonymous block */ {
        // Range: 0x404E90 -> 0x404F5C
        signed int da_idx; // r18
        signed int i; // r17
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00404F60 -> 0x00404FAC
*/
// Range: 0x404F60 -> 0x404FAC
void XOrdCopy(class st_XORDEREDARRAY * tgt /* r2 */, class st_XORDEREDARRAY * src /* r2 */) {
    /* anonymous block */ {
        // Range: 0x404F60 -> 0x404FAC
        signed int i; // r11
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00404FB0 -> 0x004050BC
*/
// Range: 0x404FB0 -> 0x4050BC
void * XOrdRemove(class st_XORDEREDARRAY * array /* r2 */, void * elt /* r2 */, signed int index /* r2 */) {
    /* anonymous block */ {
        // Range: 0x404FB0 -> 0x4050BC
        signed int i; // r8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004050C0 -> 0x00405194
*/
// Range: 0x4050C0 -> 0x405194
void XOrdInsert(class st_XORDEREDARRAY * array /* r20 */, void * elt /* r19 */, signed int (* compare)(void *, void *) /* r18 */) {
    /* anonymous block */ {
        // Range: 0x4050C0 -> 0x405194
        signed int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004051A0 -> 0x004051D0
*/
// Range: 0x4051A0 -> 0x4051D0
void XOrdAppend(class st_XORDEREDARRAY * array /* r2 */, void * elt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4051A0 -> 0x4051D0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004051D0 -> 0x00405218
*/
// Range: 0x4051D0 -> 0x405218
void XOrdDone(class st_XORDEREDARRAY * array /* r16 */, signed int wasTempAlloc /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4051D0 -> 0x405218
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00405220 -> 0x00405228
*/
// Range: 0x405220 -> 0x405228
void XOrdReset(class st_XORDEREDARRAY * array /* r2 */) {
    /* anonymous block */ {
        // Range: 0x405220 -> 0x405228
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xordarray.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00405230 -> 0x004052EC
*/
// Range: 0x405230 -> 0x4052EC
void XOrdInit(class st_XORDEREDARRAY * array /* r16 */, signed int size /* r2 */, signed int tempAlloc /* r2 */) {
    /* anonymous block */ {
        // Range: 0x405230 -> 0x4052EC
    }
}


