/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iCart.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char p2CartDataBuffer[16384]; // size: 0x4000, address: 0xAFB3D0
signed int cbDrive; // size: 0x4, address: 0x0
signed int cbOp; // size: 0x4, address: 0x4A4F58
signed int cbStatus; // size: 0x4, address: 0x4A4F5C
unsigned int cbParam; // size: 0x4, address: 0x0
static void * gBupBuf; // size: 0x4, address: 0x0
unsigned char * sBupWork; // size: 0x4, address: 0x4A4F60
static signed int lStatus; // size: 0x4, address: 0x4A4678
static signed int lOp; // size: 0x4, address: 0x4A467C
static char * msg_01_01[8]; // size: 0x20, address: 0x44FE50
static char * msg_02_01; // size: 0x4, address: 0x4A4680
class tagxCartControl gCartControl; // size: 0x578, address: 0xAAC620
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
// total size: 0x578
class tagxCartControl {
    // Members
public:
    unsigned char state; // offset 0x0, size 0x1
    unsigned char cart; // offset 0x1, size 0x1
    unsigned char slot; // offset 0x2, size 0x1
    unsigned char done; // offset 0x3, size 0x1
    unsigned char ok; // offset 0x4, size 0x1
    unsigned char wrongDisk; // offset 0x5, size 0x1
    unsigned char formatError; // offset 0x6, size 0x1
    unsigned char pad; // offset 0x7, size 0x1
    unsigned char saveID[12]; // offset 0x8, size 0xC
    unsigned char description[32]; // offset 0x14, size 0x20
    class tagiCartControl platform; // offset 0x34, size 0x538
    unsigned char * dataBuffer; // offset 0x56C, size 0x4
    unsigned char * compressionBuffer; // offset 0x570, size 0x4
    unsigned short dataBufferSize; // offset 0x574, size 0x2
    unsigned short compressionBufferSize; // offset 0x576, size 0x2
};
// total size: 0x4698
class XStreamHeader {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int versionID; // offset 0x4, size 0x4
    unsigned char month; // offset 0x8, size 0x1
    unsigned char day; // offset 0x9, size 0x1
    unsigned char hour; // offset 0xA, size 0x1
    unsigned char minute; // offset 0xB, size 0x1
    unsigned int mdsOffset; // offset 0xC, size 0x4
    unsigned int mdsLength; // offset 0x10, size 0x4
    class tagXStreamMDSDirectory directory; // offset 0x14, size 0x3E84
    char safety[2048]; // offset 0x3E98, size 0x800
};
enum p2CartActions {
    I_CART_IDLE = 0,
    I_CART_WRITE = 1,
    I_CART_READ = 2,
    I_CART_FORMAT = 3,
};
// total size: 0x10
class tagXStreamDirectoryEntry {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int type; // offset 0x4, size 0x4
    unsigned int offset; // offset 0x8, size 0x4
    unsigned int length; // offset 0xC, size 0x4
};
enum p2CartStatus {
    I_CART_WRITE_BEGIN = 0,
    I_CART_WRITE_WRITE = 1,
    I_CART_WRITE_END = 2,
    I_CART_READ_BEGIN = 3,
    I_CART_READ_READ = 4,
    I_CART_READ_END = 5,
};
// total size: 0x538
class tagiCartControl {
    // Members
public:
    signed int port; // offset 0x0, size 0x4
    enum p2CartActions action; // offset 0x4, size 0x4
    enum p2CartStatus state; // offset 0x8, size 0x4
    signed int firstOp; // offset 0xC, size 0x4
    signed int retry; // offset 0x10, size 0x4
    char name[32]; // offset 0x14, size 0x20
    signed int status[8]; // offset 0x34, size 0x20
    signed int count; // offset 0x54, size 0x4
    char names[24][16]; // offset 0x58, size 0x180
    char descs[24][36]; // offset 0x1D8, size 0x360
};
// total size: 0x3E84
class tagXStreamMDSDirectory {
    // Members
public:
    unsigned int count; // offset 0x0, size 0x4
    class tagXStreamDirectoryEntry directory[1000]; // offset 0x4, size 0x3E80
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iCart.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038A800 -> 0x0038A858
*/
// Range: 0x38A800 -> 0x38A858
void iCartBeep(signed int flag /* r2 */) {
    /* anonymous block */ {
        // Range: 0x38A800 -> 0x38A858
        signed int beepActive; // @ 0x004A4F64
        signed char init; // @ 0x004A4F68
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iCart.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038A860 -> 0x0038A86C
*/
// Range: 0x38A860 -> 0x38A86C
signed int iCartIsCardPresent() {
    /* anonymous block */ {
        // Range: 0x38A860 -> 0x38A86C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iCart.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038A870 -> 0x0038A92C
*/
// Range: 0x38A870 -> 0x38A92C
char * iCartTextFind(signed int assetId /* r2 */) {
    /* anonymous block */ {
        // Range: 0x38A870 -> 0x38A92C
        signed int value; // r4
        signed int group; // r3
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iCart.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038A930 -> 0x0038AA08
*/
// Range: 0x38A930 -> 0x38AA08
signed int iCartFormat() {
    /* anonymous block */ {
        // Range: 0x38A930 -> 0x38AA08
        signed int cart; // r17
        signed int cmd; // r29+0x3C
        signed int result; // r29+0x38
        signed int retry; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iCart.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038AA10 -> 0x0038AA1C
*/
// Range: 0x38AA10 -> 0x38AA1C
signed int iCartCountValidCardSlots() {
    /* anonymous block */ {
        // Range: 0x38AA10 -> 0x38AA1C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iCart.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038AA20 -> 0x0038AA34
*/
// Range: 0x38AA20 -> 0x38AA34
signed int iCartSetSlot(signed int slot /* r2 */) {
    /* anonymous block */ {
        // Range: 0x38AA20 -> 0x38AA34
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iCart.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038AA40 -> 0x0038AA4C
*/
// Range: 0x38AA40 -> 0x38AA4C
signed int iCartCheckValidSlot() {
    /* anonymous block */ {
        // Range: 0x38AA40 -> 0x38AA4C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iCart.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038AA50 -> 0x0038AB10
*/
// Range: 0x38AA50 -> 0x38AB10
signed int iCartGetSlotTime(signed int slot /* r2 */) {
    /* anonymous block */ {
        // Range: 0x38AA50 -> 0x38AB10
        signed int s; // r2
        signed int m; // r17
        signed int h; // r16
        signed int l; // r2
        char * src; // r16
        char timeStr[16]; // r29+0x30
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iCart.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038AB10 -> 0x0038AB1C
*/
// Range: 0x38AB10 -> 0x38AB1C
signed int iCartGetCardFreeBlocks() {
    /* anonymous block */ {
        // Range: 0x38AB10 -> 0x38AB1C
        signed int bfree; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iCart.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038AB20 -> 0x0038AB28
*/
// Range: 0x38AB20 -> 0x38AB28
void iCartDelete() {
    /* anonymous block */ {
        // Range: 0x38AB20 -> 0x38AB28
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iCart.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038AB30 -> 0x0038AB38
*/
// Range: 0x38AB30 -> 0x38AB38
void iCartSlotInfo() {
    /* anonymous block */ {
        // Range: 0x38AB30 -> 0x38AB38
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iCart.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038AB40 -> 0x0038AB58
*/
// Range: 0x38AB40 -> 0x38AB58
unsigned char * iCartGetCompressionBuffer(unsigned short * size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x38AB40 -> 0x38AB58
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iCart.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038AB60 -> 0x0038AB78
*/
// Range: 0x38AB60 -> 0x38AB78
unsigned char * iCartGetDataBuffer(unsigned short * size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x38AB60 -> 0x38AB78
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iCart.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038AB80 -> 0x0038ABA8
*/
// Range: 0x38AB80 -> 0x38ABA8
void iCartWrite() {
    /* anonymous block */ {
        // Range: 0x38AB80 -> 0x38ABA8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iCart.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038ABB0 -> 0x0038ABDC
*/
// Range: 0x38ABB0 -> 0x38ABDC
void iCartRead() {
    /* anonymous block */ {
        // Range: 0x38ABB0 -> 0x38ABDC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iCart.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038ABE0 -> 0x0038ABEC
*/
// Range: 0x38ABE0 -> 0x38ABEC
signed int iCartAppendHeader() {
    /* anonymous block */ {
        // Range: 0x38ABE0 -> 0x38ABEC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iCart.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038ABF0 -> 0x0038AC14
*/
// Range: 0x38ABF0 -> 0x38AC14
void iCartSetDescription(unsigned char * desc /* r2 */) {
    /* anonymous block */ {
        // Range: 0x38ABF0 -> 0x38AC14
        signed int length; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iCart.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038AC20 -> 0x0038AC2C
*/
// Range: 0x38AC20 -> 0x38AC2C
signed int iCartGetHeaderSize() {
    /* anonymous block */ {
        // Range: 0x38AC20 -> 0x38AC2C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iCart.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038AC30 -> 0x0038AC48
*/
// Range: 0x38AC30 -> 0x38AC48
signed int iCartOpen() {
    /* anonymous block */ {
        // Range: 0x38AC30 -> 0x38AC48
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iCart.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038AC50 -> 0x0038AC5C
*/
// Range: 0x38AC50 -> 0x38AC5C
signed int iCartCountValidSlots() {
    /* anonymous block */ {
        // Range: 0x38AC50 -> 0x38AC5C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iCart.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038AC60 -> 0x0038AD24
*/
// Range: 0x38AC60 -> 0x38AD24
void iCartIdle() {
    /* anonymous block */ {
        // Range: 0x38AC60 -> 0x38AD24
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iCart.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038AD30 -> 0x0038AD50
*/
// Range: 0x38AD30 -> 0x38AD50
void iCartRefresh() {
    /* anonymous block */ {
        // Range: 0x38AD30 -> 0x38AD50
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iCart.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038AD50 -> 0x0038AD5C
*/
// Range: 0x38AD50 -> 0x38AD5C
signed int iCartAccessCard() {
    /* anonymous block */ {
        // Range: 0x38AD50 -> 0x38AD5C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iCart.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038AD60 -> 0x0038AD88
*/
// Range: 0x38AD60 -> 0x38AD88
void iCartEnd() {
    /* anonymous block */ {
        // Range: 0x38AD60 -> 0x38AD88
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iCart.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038AD90 -> 0x0038AE84
*/
// Range: 0x38AD90 -> 0x38AE84
void iCartBegin() {
    /* anonymous block */ {
        // Range: 0x38AD90 -> 0x38AE84
        signed int memneed; // r16
    }
}


