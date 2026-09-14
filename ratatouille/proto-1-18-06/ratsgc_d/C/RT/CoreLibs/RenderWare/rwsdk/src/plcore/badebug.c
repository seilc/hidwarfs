/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\src\plcore\badebug.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80430374 -> 0x8043086C
*/
char * rw_errcomstr[31]; // size: 0x7C, address: 0x80554144
char * rw_errcomcstr[31]; // size: 0x7C, address: 0x80554400
// Range: 0x80430374 -> 0x80430394
int _rwDebugOpen() {
    // References
    // -> void * RwEngineInstance;
}

// Range: 0x80430394 -> 0x8043039C
int _rwDebugClose() {}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EC6F0
// Range: 0x8043039C -> 0x8043040C
void (* RwDebugSetHandler(void (* handler)(enum RwDebugType, char *) /* r30 */))(enum RwDebugType, char *) {
    // Local variables
    void (* old)(enum RwDebugType, char *); // r31

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[18];
}

enum RwDebugType {
    rwNADEBUGTYPE = 0,
    rwDEBUGASSERT = 1,
    rwDEBUGERROR = 2,
    rwDEBUGMESSAGE = 3,
    rwDEBUGTRACE = 4,
    rwDEBUGTYPEFORCEENUMSIZEINT = 2147483647,
};
// Range: 0x8043040C -> 0x8043052C
void _rwDebugSendMessage(enum RwDebugType type /* r30 */, const char * fileName /* r1+0x8 */, int line /* r1+0xC */, const char * funcName /* r1+0x10 */, const char * message /* r1+0x14 */) {
    // Local variables
    const char * typeString; // r31
    char buffer[512]; // r1+0x18

    // References
    // -> void * RwEngineInstance;
}

// Range: 0x8043052C -> 0x80430694
static void debugWriteHeader() {
    // Local variables
    char buffer[256]; // r1+0x108
    char timeBuffer[256]; // r1+0x8
    int i; // r31
    char * b; // r30

    // References
    // -> void * RwEngineInstance;
}

static char dberr[512]; // size: 0x200, address: 0x80D5D1B0
// Range: 0x80430694 -> 0x804307BC
char * _rwdberrcommon(int code /* r31 */) {
    // Local variables
    struct __va_list_struct ap[1]; // r1+0x68

    // References
    // -> static char dberr[512];
    // -> char * rw_errcomstr[31];
    // -> void * RwEngineInstance;
    // -> char * rw_errcomcstr[31];
}

// Range: 0x804307BC -> 0x8043086C
char * _rwdbsprintf(const char * format /* r31 */) {
    // Local variables
    struct __va_list_struct ap[1]; // r1+0x68

    // References
    // -> static char dberr[512];
    // -> void * RwEngineInstance;
}


