/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\src\plcore\baerr.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8043086C -> 0x80430AE0
*/
static char __dbFunctionName[13]; // size: 0xD, address: 0x804EC708
static struct RwModuleInfo errorModule; // size: 0x8, address: 0x80D6C308
// Range: 0x8043086C -> 0x804308C0
void * _rwErrorOpen(void * object /* r3 */, int offset /* r4 */) {
    // References
    // -> static struct RwModuleInfo errorModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[13];
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804EC715
// Range: 0x804308C0 -> 0x804308EC
void * _rwErrorClose(void * object /* r3 */) {
    // References
    // -> static struct RwModuleInfo errorModule;
    // -> static char __dbFunctionName[14];
}

static char __dbFunctionName[11]; // size: 0xB, address: 0x804EC723
// Range: 0x804308EC -> 0x804309CC
struct RwError * RwErrorSet(struct RwError * code /* r31 */) {
    // References
    // -> static struct RwModuleInfo errorModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[11];
}

static char __dbFunctionName[11]; // size: 0xB, address: 0x804EC72E
// Range: 0x804309CC -> 0x80430A74
struct RwError * RwErrorGet(struct RwError * code /* r31 */) {
    // References
    // -> static struct RwModuleInfo errorModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[11];
}

// Range: 0x80430A74 -> 0x80430AE0
int _rwerror(int code /* r3 */) {
    // Local variables
    struct __va_list_struct ap[1]; // r1+0x68
}


