/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
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
// total size: 0x18
class TimeStamp {
    // Members
public:
    signed long pts; // offset 0x0, size 0x4
    signed long dts; // offset 0x8, size 0x4
    signed int pos; // offset 0x10, size 0x4
    signed int len; // offset 0x14, size 0x4
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
    Code range: 0x00260A10 -> 0x00260BC4
*/
// Range: 0x260A10 -> 0x260BC4
signed int viBufGetTs(class ViBuf * f /* r17 */, class TimeStamp * ts /* r16 */) {
    /* anonymous block */ {
        // Range: 0x260A10 -> 0x260BC4
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
    Code range: 0x00260BD0 -> 0x00260CFC
*/
// Range: 0x260BD0 -> 0x260CFC
signed int viBufPutTs(class ViBuf * f /* r17 */, class TimeStamp * ts /* r16 */) {
    /* anonymous block */ {
        // Range: 0x260BD0 -> 0x260CFC
        signed int ret; // r18
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00260D00 -> 0x00260E4C
*/
// Range: 0x260D00 -> 0x260E4C
signed int viBufModifyPts(class ViBuf * f /* r2 */, class TimeStamp * new_ts /* r2 */) {
    /* anonymous block */ {
        // Range: 0x260D00 -> 0x260E4C
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
    Code range: 0x00260E50 -> 0x00260EA0
*/
// Range: 0x260E50 -> 0x260EA0
void viBufFlush(class ViBuf * f /* r16 */) {
    /* anonymous block */ {
        // Range: 0x260E50 -> 0x260EA0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00260EA0 -> 0x00260EE4
*/
// Range: 0x260EA0 -> 0x260EE4
signed int viBufCount(class ViBuf * f /* r16 */) {
    /* anonymous block */ {
        // Range: 0x260EA0 -> 0x260EE4
        signed int ret; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00260EF0 -> 0x00260F80
*/
// Range: 0x260EF0 -> 0x260F80
signed int viBufDelete(class ViBuf * f /* r16 */) {
    /* anonymous block */ {
        // Range: 0x260EF0 -> 0x260F80
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00260F80 -> 0x00261330
*/
// Range: 0x260F80 -> 0x261330
signed int viBufRestartDMA(class ViBuf * f /* r17 */) {
    /* anonymous block */ {
        // Range: 0x260F80 -> 0x261330
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
    Code range: 0x00261330 -> 0x00261490
*/
// Range: 0x261330 -> 0x261490
signed int viBufStopDMA(class ViBuf * f /* r16 */) {
    /* anonymous block */ {
        // Range: 0x261330 -> 0x261490
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00261490 -> 0x00261784
*/
// Range: 0x261490 -> 0x261784
signed int viBufAddDMA(class ViBuf * f /* r18 */) {
    /* anonymous block */ {
        // Range: 0x261490 -> 0x261784
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
    Code range: 0x00261790 -> 0x002617EC
*/
// Range: 0x261790 -> 0x2617EC
void viBufEndPut(class ViBuf * f /* r17 */, signed int size /* r16 */) {
    /* anonymous block */ {
        // Range: 0x261790 -> 0x2617EC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002617F0 -> 0x002618E4
*/
// Range: 0x2617F0 -> 0x2618E4
void viBufBeginPut(class ViBuf * f /* r20 */, unsigned char * * ptr0 /* r19 */, signed int * len0 /* r18 */, unsigned char * * ptr1 /* r17 */, signed int * len1 /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2617F0 -> 0x2618E4
        signed int en; // r4
        signed int es; // r3
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002618F0 -> 0x00261A84
*/
// Range: 0x2618F0 -> 0x261A84
signed int viBufReset(class ViBuf * f /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2618F0 -> 0x261A84
        signed int i; // r5
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00261A90 -> 0x00261B04
*/
// Range: 0x261A90 -> 0x261B04
signed int viBufCreate(class ViBuf * f /* r16 */, __int128 * data /* r2 */, __int128 * tag /* r2 */, signed int size /* r2 */, class TimeStamp * ts /* r2 */, signed int n_ts /* r2 */) {
    /* anonymous block */ {
        // Range: 0x261A90 -> 0x261B04
        class SemaParam param; // r29+0x20
    }
}


