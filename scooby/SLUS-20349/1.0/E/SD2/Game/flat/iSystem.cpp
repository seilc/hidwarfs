/*
    Compile unit: E:\SD2\Game\flat\iSystem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
void * hackResourceArenaPointer; // size: 0x4, address: 0x0
signed int DVD; // size: 0x4, address: 0x357CA4
class RwVideoMode sVideoMode; // size: 0x10, address: 0x3692B0
signed int gFB_Flags; // size: 0x4, address: 0x3574A8
unsigned int gVsyncCount; // size: 0x4, address: 0x357CA8
signed int vsyncCounterHandler(signed int); // size: 0x0, address: 0x1239F0
class RwTexture * TextureRead(char *, char *); // size: 0x0, address: 0x1237A0
signed int sweMaxFlips; // size: 0x4, address: 0x3576E0
// total size: 0x34
class RwRaster {
    // Members
public:
    class RwRaster * parent; // offset 0x0, size 0x4
    unsigned char * cpPixels; // offset 0x4, size 0x4
    unsigned char * palette; // offset 0x8, size 0x4
    signed int width; // offset 0xC, size 0x4
    signed int height; // offset 0x10, size 0x4
    signed int depth; // offset 0x14, size 0x4
    signed int stride; // offset 0x18, size 0x4
    signed short nOffsetX; // offset 0x1C, size 0x2
    signed short nOffsetY; // offset 0x1E, size 0x2
    unsigned char cType; // offset 0x20, size 0x1
    unsigned char cFlags; // offset 0x21, size 0x1
    unsigned char privateFlags; // offset 0x22, size 0x1
    unsigned char cFormat; // offset 0x23, size 0x1
    unsigned char * originalPixels; // offset 0x24, size 0x4
    signed int originalWidth; // offset 0x28, size 0x4
    signed int originalHeight; // offset 0x2C, size 0x4
    signed int originalStride; // offset 0x30, size 0x4
};
enum RwTextureFilterMode {
    rwFILTERNAFILTERMODE = 0,
    rwFILTERNEAREST = 1,
    rwFILTERLINEAR = 2,
    rwFILTERMIPNEAREST = 3,
    rwFILTERMIPLINEAR = 4,
    rwFILTERLINEARMIPNEAREST = 5,
    rwFILTERLINEARMIPLINEAR = 6,
    rwTEXTUREFILTERMODEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x18
class RwTexDictionary {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
};
enum RwVideoModeFlag {
    rwVIDEOMODEEXCLUSIVE = 1,
    rwVIDEOMODEINTERLACE = 2,
    rwVIDEOMODEFFINTERLACE = 4,
    rwVIDEOMODEFSAA0 = 8,
    rwVIDEOMODEFSAA1 = 16,
    rwVIDEOMODEFLAGFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x10
class RwMemoryFunctions {
    // Members
public:
    void * (* rwmalloc)(unsigned int); // offset 0x0, size 0x4
    void (* rwfree)(void *); // offset 0x4, size 0x4
    void * (* rwrealloc)(void *, unsigned int); // offset 0x8, size 0x4
    void * (* rwcalloc)(unsigned int, unsigned int); // offset 0xC, size 0x4
};
// total size: 0x8
class sceCdCLOCK {
    // Members
public:
    unsigned char stat; // offset 0x0, size 0x1
    unsigned char second; // offset 0x1, size 0x1
    unsigned char minute; // offset 0x2, size 0x1
    unsigned char hour; // offset 0x3, size 0x1
    unsigned char pad; // offset 0x4, size 0x1
    unsigned char day; // offset 0x5, size 0x1
    unsigned char month; // offset 0x6, size 0x1
    unsigned char year; // offset 0x7, size 0x1
};
// total size: 0x60
class RwTexture {
    // Members
public:
    class RwRaster * raster; // offset 0x0, size 0x4
    class RwTexDictionary * dict; // offset 0x4, size 0x4
    class RwLLLink lInDictionary; // offset 0x8, size 0x8
    char name[32]; // offset 0x10, size 0x20
    char mask[32]; // offset 0x30, size 0x20
    signed int refCount; // offset 0x50, size 0x4
    enum RwTextureFilterMode filtering; // offset 0x54, size 0x4
    enum RwTextureAddressMode addressingU; // offset 0x58, size 0x4
    enum RwTextureAddressMode addressingV; // offset 0x5C, size 0x4
};
// total size: 0x10
class RwVideoMode {
    // Members
public:
    signed int width; // offset 0x0, size 0x4
    signed int height; // offset 0x4, size 0x4
    signed int depth; // offset 0x8, size 0x4
    enum RwVideoModeFlag flags; // offset 0xC, size 0x4
};
// total size: 0x4
class RwEngineOpenParams {
    // Members
public:
    void * displayID; // offset 0x0, size 0x4
};
enum RwTextureAddressMode {
    rwTEXTUREADDRESSNATEXTUREADDRESS = 0,
    rwTEXTUREADDRESSWRAP = 1,
    rwTEXTUREADDRESSMIRROR = 2,
    rwTEXTUREADDRESSCLAMP = 3,
    rwTEXTUREADDRESSBORDER = 4,
    rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x8
class RwObject {
    // Members
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
};

/*
    Compile unit: E:\SD2\Game\flat\iSystem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001234D0 -> 0x00123628
*/
// Range: 0x1234D0 -> 0x123628
unsigned int iGetCurrFormattedTime(char * str /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1234D0 -> 0x123628
        class sceCdCLOCK clock; // r29+0x28
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iSystem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00123630 -> 0x00123724
*/
// Range: 0x123630 -> 0x123724
unsigned int iGetCurrFormattedDate(char * str /* r16 */) {
    /* anonymous block */ {
        // Range: 0x123630 -> 0x123724
        class sceCdCLOCK clock; // r29+0x28
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iSystem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00123730 -> 0x0012375C
*/
// Range: 0x123730 -> 0x12375C
unsigned char iGetMonth() {
    /* anonymous block */ {
        // Range: 0x123730 -> 0x12375C
        class sceCdCLOCK clock; // r29+0x18
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iSystem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00123760 -> 0x0012378C
*/
// Range: 0x123760 -> 0x12378C
unsigned char iGetDay() {
    /* anonymous block */ {
        // Range: 0x123760 -> 0x12378C
        class sceCdCLOCK clock; // r29+0x18
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iSystem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00123790 -> 0x00123798
*/
// Range: 0x123790 -> 0x123798
void iVSync() {
    /* anonymous block */ {
        // Range: 0x123790 -> 0x123798
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iSystem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001237A0 -> 0x00123850
*/
// Range: 0x1237A0 -> 0x123850
static class RwTexture * TextureRead(char * name /* r18 */, char * maskName /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1237A0 -> 0x123850
        unsigned int tmpsize; // r29+0x14C
        unsigned int assetid; // r2
        class RwTexture * result; // r16
        char tmpname[256]; // r29+0x40
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iSystem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00123850 -> 0x001239E8
*/
// Range: 0x123850 -> 0x1239E8
static unsigned int RenderWareInit() {
    /* anonymous block */ {
        // Range: 0x123850 -> 0x1239E8
        class RwEngineOpenParams openParams; // r29+0x1C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iSystem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001239F0 -> 0x00123A04
*/
// Range: 0x1239F0 -> 0x123A04
static signed int vsyncCounterHandler() {
    /* anonymous block */ {
        // Range: 0x1239F0 -> 0x123A04
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iSystem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00123A10 -> 0x00123A84
*/
// Range: 0x123A10 -> 0x123A84
void iSystemExit() {
    /* anonymous block */ {
        // Range: 0x123A10 -> 0x123A84
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iSystem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00123A90 -> 0x00123BE8
*/
// Range: 0x123A90 -> 0x123BE8
void iSystemInit() {
    /* anonymous block */ {
        // Range: 0x123A90 -> 0x123BE8
        signed int disk_type; // r2
        char * iopImageFile; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iSystem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00123BF0 -> 0x00123CDC
*/
// Range: 0x123BF0 -> 0x123CDC
unsigned int psSelectDevice() {
    /* anonymous block */ {
        // Range: 0x123BF0 -> 0x123CDC
        signed int num; // r17
        signed int i; // r16
        class RwVideoMode videoMode; // r29+0x40
    }
}


