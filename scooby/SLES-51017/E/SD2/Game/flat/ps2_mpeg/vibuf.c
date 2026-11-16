/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
// total size: 0x18
class TimeStamp {
    // Members
public:
    signed long pts; // offset 0x0, size 0x4
    signed long dts; // offset 0x8, size 0x4
    signed int pos; // offset 0x10, size 0x4
    signed int len; // offset 0x14, size 0x4
};
// total size: 0x60
class ViBuf {
    // Members
public:
    __int128 * data; // offset 0x0, size 0x4
    __int128 * tag; // offset 0x4, size 0x4
    signed int n; // offset 0x8, size 0x4
    signed int dmaStart; // offset 0xC, size 0x4
    signed int dmaN; // offset 0x10, size 0x4
    signed int readBytes; // offset 0x14, size 0x4
    signed int buffSize; // offset 0x18, size 0x4
    class sceIpuDmaEnv env; // offset 0x1C, size 0x24
    signed int sema; // offset 0x40, size 0x4
    signed int isActive; // offset 0x44, size 0x4
    signed long totalBytes; // offset 0x48, size 0x4
    class TimeStamp * ts; // offset 0x50, size 0x4
    signed int n_ts; // offset 0x54, size 0x4
    signed int count_ts; // offset 0x58, size 0x4
    signed int wt_ts; // offset 0x5C, size 0x4
};
// total size: 0x10
class QWORD {
    // Members
public:
    union { // inferred
        __int128 q; // offset 0x0, size 0x10
        unsigned long l[2]; // offset 0x0, size 0x8
        unsigned int i[4]; // offset 0x0, size 0x10
        unsigned short s[8]; // offset 0x0, size 0x10
        unsigned char c[16]; // offset 0x0, size 0x10
    };
};
// total size: 0x24
class sceIpuDmaEnv {
    // Members
public:
    unsigned int d4madr; // offset 0x0, size 0x4
    unsigned int d4tadr; // offset 0x4, size 0x4
    unsigned int d4qwc; // offset 0x8, size 0x4
    unsigned int d4chcr; // offset 0xC, size 0x4
    unsigned int d3madr; // offset 0x10, size 0x4
    unsigned int d3qwc; // offset 0x14, size 0x4
    unsigned int d3chcr; // offset 0x18, size 0x4
    unsigned int ipubp; // offset 0x1C, size 0x4
    unsigned int ipuctrl; // offset 0x20, size 0x4
};
// total size: 0x18
class SemaParam {
    // Members
public:
    signed int currentCount; // offset 0x0, size 0x4
    signed int maxCount; // offset 0x4, size 0x4
    signed int initCount; // offset 0x8, size 0x4
    signed int numWaitThreads; // offset 0xC, size 0x4
    unsigned int attr; // offset 0x10, size 0x4
    unsigned int option; // offset 0x14, size 0x4
};

/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00261320 -> 0x002614D4
*/
// Range: 0x261320 -> 0x2614D4
signed int viBufGetTs(class ViBuf * f /* r17 */, class TimeStamp * ts /* r16 */) {
    /* anonymous block */ {
        // Range: 0x261320 -> 0x2614D4
        signed int rd; // r9
        signed int i; // r3
        signed int tscount; // r2
        signed int isEnd; // r20
        signed int datasize; // r2
        unsigned int stop; // r5
        signed int bp; // r7
        unsigned int ipubp; // r19
        unsigned int d4madr; // r18
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002614E0 -> 0x0026160C
*/
// Range: 0x2614E0 -> 0x26160C
signed int viBufPutTs(class ViBuf * f /* r17 */, class TimeStamp * ts /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2614E0 -> 0x26160C
        signed int ret; // r18
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00261610 -> 0x0026175C
*/
// Range: 0x261610 -> 0x26175C
signed int viBufModifyPts(class ViBuf * f /* r2 */, class TimeStamp * new_ts /* r2 */) {
    /* anonymous block */ {
        // Range: 0x261610 -> 0x26175C
        signed int loop; // r3
        signed int datasize; // r2
        signed int rd; // r8
        class TimeStamp * ts; // r7
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00261760 -> 0x002617B0
*/
// Range: 0x261760 -> 0x2617B0
void viBufFlush(class ViBuf * f /* r16 */) {
    /* anonymous block */ {
        // Range: 0x261760 -> 0x2617B0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002617B0 -> 0x002617F4
*/
// Range: 0x2617B0 -> 0x2617F4
signed int viBufCount(class ViBuf * f /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2617B0 -> 0x2617F4
        signed int ret; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00261800 -> 0x00261890
*/
// Range: 0x261800 -> 0x261890
signed int viBufDelete(class ViBuf * f /* r16 */) {
    /* anonymous block */ {
        // Range: 0x261800 -> 0x261890
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00261890 -> 0x00261C40
*/
// Range: 0x261890 -> 0x261C40
signed int viBufRestartDMA(class ViBuf * f /* r17 */) {
    /* anonymous block */ {
        // Range: 0x261890 -> 0x261C40
        signed int index_next; // r2
        signed int index; // r2
        unsigned int d4chcr_next; // r21
        unsigned int d4tadr_next; // r2
        unsigned int d4qwc_next; // r20
        unsigned int d4madr_next; // r19
        signed int bp; // r18
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00261C40 -> 0x00261DA0
*/
// Range: 0x261C40 -> 0x261DA0
signed int viBufStopDMA(class ViBuf * f /* r16 */) {
    /* anonymous block */ {
        // Range: 0x261C40 -> 0x261DA0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00261DA0 -> 0x00262094
*/
// Range: 0x261DA0 -> 0x262094
signed int viBufAddDMA(class ViBuf * f /* r18 */) {
    /* anonymous block */ {
        // Range: 0x261DA0 -> 0x262094
        signed int read_n; // r3
        signed int read_start; // r2
        signed int consume; // r3
        signed int isNewData; // r17
        unsigned int d4chcr; // r16
        signed int last; // r8
        signed int index; // r2
        signed int i; // r10
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002620A0 -> 0x002620FC
*/
// Range: 0x2620A0 -> 0x2620FC
void viBufEndPut(class ViBuf * f /* r17 */, signed int size /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2620A0 -> 0x2620FC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00262100 -> 0x002621F4
*/
// Range: 0x262100 -> 0x2621F4
void viBufBeginPut(class ViBuf * f /* r20 */, unsigned char * * ptr0 /* r19 */, signed int * len0 /* r18 */, unsigned char * * ptr1 /* r17 */, signed int * len1 /* r16 */) {
    /* anonymous block */ {
        // Range: 0x262100 -> 0x2621F4
        signed int en; // r4
        signed int es; // r3
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00262200 -> 0x00262394
*/
// Range: 0x262200 -> 0x262394
signed int viBufReset(class ViBuf * f /* r2 */) {
    /* anonymous block */ {
        // Range: 0x262200 -> 0x262394
        signed int i; // r5
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002623A0 -> 0x00262414
*/
// Range: 0x2623A0 -> 0x262414
signed int viBufCreate(class ViBuf * f /* r16 */, __int128 * data /* r2 */, __int128 * tag /* r2 */, signed int size /* r2 */, class TimeStamp * ts /* r2 */, signed int n_ts /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2623A0 -> 0x262414
        class SemaParam param; // r29+0x20
    }
}


