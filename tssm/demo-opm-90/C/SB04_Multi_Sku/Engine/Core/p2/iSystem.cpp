/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSystem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0049E5F0 -> 0x0049E7C4
*/
// Range: 0x49E5F0 -> 0x49E7C4
void iLoadModule(char * moduleName /* r19 */, char * arguments /* r18 */) {
    /* anonymous block */ {
        // Range: 0x49E5F0 -> 0x49E7C4
        char workingName[256]; // r29+0x50
        char * demo; // r2
        signed int j; // r7
        signed int errorCode; // r2
        char * PATHS_CDROM[4]; // @ 0x006059B0
        char * PATHS_HOST[3]; // @ 0x006059C0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSystem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0049E7D0 -> 0x0049E91C
*/
// Range: 0x49E7D0 -> 0x49E91C
unsigned int iGetCurrFormattedTime(char * str /* r16 */) {
    /* anonymous block */ {
        // Range: 0x49E7D0 -> 0x49E91C
        class sceCdCLOCK clock; // r29+0x28
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSystem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0049E920 -> 0x0049EA10
*/
// Range: 0x49E920 -> 0x49EA10
unsigned int iGetCurrFormattedDate(char * str /* r16 */) {
    /* anonymous block */ {
        // Range: 0x49E920 -> 0x49EA10
        class sceCdCLOCK clock; // r29+0x28
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSystem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0049EA10 -> 0x0049EA3C
*/
// Range: 0x49EA10 -> 0x49EA3C
unsigned char iGetMonth() {
    /* anonymous block */ {
        // Range: 0x49EA10 -> 0x49EA3C
        class sceCdCLOCK clock; // r29+0x18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSystem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0049EA40 -> 0x0049EA6C
*/
// Range: 0x49EA40 -> 0x49EA6C
unsigned char iGetDay() {
    /* anonymous block */ {
        // Range: 0x49EA40 -> 0x49EA6C
        class sceCdCLOCK clock; // r29+0x18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSystem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0049EA70 -> 0x0049EA9C
*/
// Range: 0x49EA70 -> 0x49EA9C
unsigned char iGetHour() {
    /* anonymous block */ {
        // Range: 0x49EA70 -> 0x49EA9C
        class sceCdCLOCK clock; // r29+0x18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSystem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0049EAA0 -> 0x0049EACC
*/
// Range: 0x49EAA0 -> 0x49EACC
unsigned char iGetMinute() {
    /* anonymous block */ {
        // Range: 0x49EAA0 -> 0x49EACC
        class sceCdCLOCK clock; // r29+0x18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSystem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0049EAD0 -> 0x0049EAD8
*/
// Range: 0x49EAD0 -> 0x49EAD8
void iVSync() {
    /* anonymous block */ {
        // Range: 0x49EAD0 -> 0x49EAD8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSystem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0049EAE0 -> 0x0049EBD0
*/
// Range: 0x49EAE0 -> 0x49EBD0
static class RwTexture * TextureRead(char * name /* r18 */, char * maskName /* r17 */) {
    /* anonymous block */ {
        // Range: 0x49EAE0 -> 0x49EBD0
        char tmpname[256]; // r29+0x40
        class RwTexture * result; // r16
        unsigned int assetid; // r2
        unsigned int tmpsize; // r29+0x14C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSystem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0049EBD0 -> 0x0049EBEC
*/
// Range: 0x49EBD0 -> 0x49EBEC
static signed int vsyncCounterHandler() {
    /* anonymous block */ {
        // Range: 0x49EBD0 -> 0x49EBEC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSystem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0049EBF0 -> 0x0049F3F0
*/
// Range: 0x49EBF0 -> 0x49F3F0
static unsigned int RWAttachPlugins() {
    /* anonymous block */ {
        // Range: 0x49EBF0 -> 0x49F3F0
        class RpPDSRegister _objPipe; // r29+0x4B0
        class RpPDSRegister _matPipe; // r29+0x490
        class RpPDSRegister _objPipe; // r29+0x470
        class RpPDSRegister _matPipe; // r29+0x450
        class RpPDSRegister _objPipe; // r29+0x430
        class RpPDSRegister _objPipe; // r29+0x410
        class RpPDSRegister _matPipe; // r29+0x3F0
        class RpPDSRegister _matPipe; // r29+0x3D0
        class RpPDSRegister _matPipe; // r29+0x3B0
        class RpPDSRegister _matPipe; // r29+0x390
        class RpPDSRegister _matPipe; // r29+0x370
        class RpPDSRegister _matPipe; // r29+0x350
        class RpPDSRegister _matPipe; // r29+0x330
        class RpPDSRegister _matPipe; // r29+0x310
        class RpPDSRegister _matPipe; // r29+0x2F0
        class RpPDSRegister _matPipe; // r29+0x2D0
        class RpPDSRegister _matPipe; // r29+0x2B0
        class RpPDSRegister _matPipe; // r29+0x290
        class RpPDSRegister _matPipe; // r29+0x270
        class RpPDSRegister _matPipe; // r29+0x250
        class RpPDSRegister _objPipe; // r29+0x230
        class RpPDSRegister _matPipe; // r29+0x210
        class RpPDSRegister _matPipe; // r29+0x1F0
        class RpPDSRegister _objPipe; // r29+0x1D0
        class RpPDSRegister _matPipe; // r29+0x1B0
        class RpPDSRegister _matPipe; // r29+0x190
        class RpPDSRegister _objPipe; // r29+0x170
        class RpPDSRegister _objPipe; // r29+0x150
        class RpPDSRegister _matPipe; // r29+0x130
        class RpPDSRegister _matPipe; // r29+0x110
        class RpPDSRegister _objPipe; // r29+0xF0
        class RpPDSRegister _objPipe; // r29+0xD0
        class RpPDSRegister _matPipe; // r29+0xB0
        class RpPDSRegister _objPipe; // r29+0x90
        class RpPDSRegister _matPipe; // r29+0x70
        class RpPDSRegister _matPipe; // r29+0x50
        class RpPDSRegister _objPipe; // r29+0x30
        class RpPDSRegister _objPipe; // r29+0x10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSystem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0049F3F0 -> 0x0049F3F8
*/
// Range: 0x49F3F0 -> 0x49F3F8
void iSystemExit() {
    /* anonymous block */ {
        // Range: 0x49F3F0 -> 0x49F3F8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSystem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0049F400 -> 0x0049F484
*/
// Range: 0x49F400 -> 0x49F484
void iSystemInitGraphics() {
    /* anonymous block */ {
        // Range: 0x49F400 -> 0x49F484
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSystem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0049F490 -> 0x0049F8DC
*/
// Range: 0x49F490 -> 0x49F8DC
void iSystemInit(unsigned int options /* r17 */) {
    /* anonymous block */ {
        // Range: 0x49F490 -> 0x49F8DC
        char CDROM_IMAGE_FILE[128]; // r29+0x70
        char * HOSTIO_IMAGE_FILE; // r2
        char * iopImageFile; // r17
        signed int disk_type; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSystem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0049F8E0 -> 0x0049F90C
*/
// Range: 0x49F8E0 -> 0x49F90C
void iSystemGetWidthHeight(unsigned int & uWidth /* r2 */, unsigned int & uHeight /* r2 */, unsigned char bPALMode /* r2 */) {
    /* anonymous block */ {
        // Range: 0x49F8E0 -> 0x49F90C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSystem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0049F910 -> 0x0049F960
*/
// Range: 0x49F910 -> 0x49F960
void iSystemDemoDiskExit() {
    /* anonymous block */ {
        // Range: 0x49F910 -> 0x49F960
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSystem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0049F960 -> 0x0049FE5C
*/
// Range: 0x49F960 -> 0x49FE5C
void iSystemDemoDiskInit(signed int argc /* r21 */, char * * argv /* r20 */) {
    /* anonymous block */ {
        // Range: 0x49F960 -> 0x49FE5C
        signed int i; // r19
        char * first; // r18
        char * second; // r22
        unsigned int force_demo; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSystem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0049FE60 -> 0x0049FF64
*/
// Range: 0x49FE60 -> 0x49FF64
unsigned int psSelectDevice() {
    /* anonymous block */ {
        // Range: 0x49FE60 -> 0x49FF64
        class RwVideoMode videoMode; // r29+0x60
        signed int i; // r20
        signed int num; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSystem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0049FF70 -> 0x004A067C
*/
// Range: 0x49FF70 -> 0x4A067C
static void hack_16bit_frontbuffer() {
    /* anonymous block */ {
        // Range: 0x49FF70 -> 0x4A067C
        class RwSkyVideoMode & mode; // r16
        class mixed_display_env db; // r29+0xF0
        class _SkyRasterExt * rasExt; // r2
        unsigned long smode2; // @ 0x0062EAA8
        unsigned long pmode; // @ 0x0062EAA0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSystem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A0680 -> 0x004A0A1C
*/
// Range: 0x4A0680 -> 0x4A0A1C
static void setup_flip_blit(class RwSkyVideoMode & mode /* r2 */, class rwDMA_flipData * fd /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4A0680 -> 0x4A0A1C
        signed int width; // r2
        signed int height; // r2
        signed int gsregs; // r2
        __int128 * pkt; // r4
        signed int endx; // r2
        signed int y1; // r2
        float t1; // r29+0x2C
        signed int x; // r3
        float s; // r29+0x28
        __int128 packet_buffer[76]; // @ 0x007C55C0
        float t0; // @ 0x0062EAB8
        float one; // @ 0x0062EAB0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSystem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A0A20 -> 0x004A0D08
*/
// Range: 0x4A0A20 -> 0x4A0D08
static void setup_mixed_display(class mixed_display_env & db /* r2 */, signed int tv_type /* r2 */, signed int width /* r2 */, signed int height /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4A0A20 -> 0x4A0D08
    }
}


