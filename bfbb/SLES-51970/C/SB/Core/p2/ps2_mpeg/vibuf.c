/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
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
// total size: 0x18
class TimeStamp {
    // Members
public:
    signed long pts; // offset 0x0, size 0x4
    signed long dts; // offset 0x8, size 0x4
    signed int pos; // offset 0x10, size 0x4
    signed int len; // offset 0x14, size 0x4
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

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BD360 -> 0x001BD514
*/
// Range: 0x1BD360 -> 0x1BD514
signed int viBufGetTs(class ViBuf * f /* r18 */, class TimeStamp * ts /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1BD360 -> 0x1BD514
        unsigned int d4madr; // r20
        unsigned int ipubp; // r19
        signed int bp; // r3
        signed int datasize; // r7
        signed int isEnd; // r16
        signed int tscount; // r6
        signed int i; // r5
        signed int rd; // r10
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BD520 -> 0x001BD654
*/
// Range: 0x1BD520 -> 0x1BD654
signed int viBufPutTs(class ViBuf * f /* r17 */, class TimeStamp * ts /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1BD520 -> 0x1BD654
        signed int ret; // r18
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BD660 -> 0x001BD7B0
*/
// Range: 0x1BD660 -> 0x1BD7B0
signed int viBufModifyPts(class ViBuf * f /* r2 */, class TimeStamp * new_ts /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BD660 -> 0x1BD7B0
        class TimeStamp * ts; // r13
        signed int rd; // r6
        signed int datasize; // r3
        signed int loop; // r2
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BD7B0 -> 0x001BD800
*/
// Range: 0x1BD7B0 -> 0x1BD800
void viBufFlush(class ViBuf * f /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1BD7B0 -> 0x1BD800
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BD800 -> 0x001BD844
*/
// Range: 0x1BD800 -> 0x1BD844
signed int viBufCount(class ViBuf * f /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1BD800 -> 0x1BD844
        signed int ret; // r16
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BD850 -> 0x001BD8DC
*/
// Range: 0x1BD850 -> 0x1BD8DC
signed int viBufDelete(class ViBuf * f /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1BD850 -> 0x1BD8DC
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BD8E0 -> 0x001BDC80
*/
// Range: 0x1BD8E0 -> 0x1BDC80
signed int viBufRestartDMA(class ViBuf * f /* r21 */) {
    /* anonymous block */ {
        // Range: 0x1BD8E0 -> 0x1BDC80
        signed int bp; // r20
        unsigned int d4madr_next; // r19
        unsigned int d4qwc_next; // r18
        unsigned int d4tadr_next; // r17
        unsigned int d4chcr_next; // r16
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BDC80 -> 0x001BDDD0
*/
// Range: 0x1BDC80 -> 0x1BDDD0
signed int viBufStopDMA(class ViBuf * f /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1BDC80 -> 0x1BDDD0
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BDDD0 -> 0x001BE0D0
*/
// Range: 0x1BDDD0 -> 0x1BE0D0
signed int viBufAddDMA(class ViBuf * f /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1BDDD0 -> 0x1BE0D0
        signed int i; // r10
        signed int index; // r3
        signed int last; // r5
        unsigned int d4chcr; // r17
        signed int isNewData; // r16
        signed int consume; // r5
        signed int read_start; // r2
        signed int read_n; // r2
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BE0D0 -> 0x001BE12C
*/
// Range: 0x1BE0D0 -> 0x1BE12C
void viBufEndPut(class ViBuf * f /* r17 */, signed int size /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1BE0D0 -> 0x1BE12C
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BE130 -> 0x001BE228
*/
// Range: 0x1BE130 -> 0x1BE228
void viBufBeginPut(class ViBuf * f /* r20 */, unsigned char * * ptr0 /* r19 */, signed int * len0 /* r18 */, unsigned char * * ptr1 /* r17 */, signed int * len1 /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1BE130 -> 0x1BE228
        signed int es; // r5
        signed int en; // r3
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BE230 -> 0x001BE3C4
*/
// Range: 0x1BE230 -> 0x1BE3C4
signed int viBufReset(class ViBuf * f /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BE230 -> 0x1BE3C4
        signed int i; // r6
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BE3D0 -> 0x001BE444
*/
// Range: 0x1BE3D0 -> 0x1BE444
signed int viBufCreate(class ViBuf * f /* r16 */, __int128 * data /* r2 */, __int128 * tag /* r2 */, signed int size /* r2 */, class TimeStamp * ts /* r2 */, signed int n_ts /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BE3D0 -> 0x1BE444
        class SemaParam param; // r29+0x20
    }
}


