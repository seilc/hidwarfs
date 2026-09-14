/*
    Compile unit: E:\SD2\Game\flat\p2skyfs.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class RwSkyFSState SkyFSState; // size: 0x10C, address: 0x3694D0
void * _rwSkyFSClose(void *, signed int, signed int); // size: 0x0, address: 0x1276F0
void * _rwSkyFSOpen(void *, signed int, signed int); // size: 0x0, address: 0x1277B0
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x2B5AD0
signed int skyFtell(void *); // size: 0x0, address: 0x127BB0
signed int skyFflush(void *); // size: 0x0, address: 0x127930
signed int skyFseek(void *, signed long, signed int); // size: 0x0, address: 0x127C00
signed int skyFeof(void *); // size: 0x0, address: 0x127940
signed int skyFputs(char *, void *); // size: 0x0, address: 0x127990
char * skyFgets(char *, signed int, void *); // size: 0x0, address: 0x127A60
unsigned int skyFwrite(void *, unsigned int, unsigned int, void *); // size: 0x0, address: 0x127D70
unsigned int skyFread(void *, unsigned int, unsigned int, void *); // size: 0x0, address: 0x127E50
signed int skyFclose(void *); // size: 0x0, address: 0x127FF0
void * skyFopen(char *, char *); // size: 0x0, address: 0x128090
signed int skyFexist(char *); // size: 0x0, address: 0x127F90
// total size: 0x2814
class skyFile {
    // Members
public:
    signed int gdfs; // offset 0x0, size 0x4
    signed int POS; // offset 0x4, size 0x4
    signed int SOF; // offset 0x8, size 0x4
    unsigned char readBuffer[10240]; // offset 0xC, size 0x2800
    unsigned int bufferPos; // offset 0x280C, size 0x4
    signed int bufferValid; // offset 0x2810, size 0x4
};
// total size: 0x10C
class RwSkyFSState {
    // Members
public:
    signed int gdfsOpenFiles; // offset 0x0, size 0x4
    char SubDir[256]; // offset 0x4, size 0x100
    class RwModuleInfo gdfsModuleInfo; // offset 0x104, size 0x8
};
// total size: 0x8
class RwModuleInfo {
    // Members
public:
    signed int globalsOffset; // offset 0x0, size 0x4
    signed int numInstances; // offset 0x4, size 0x4
};
// total size: 0x2C
class RwFileFunctions {
    // Members
public:
    signed int (* rwfexist)(char *); // offset 0x0, size 0x4
    void * (* rwfopen)(char *, char *); // offset 0x4, size 0x4
    signed int (* rwfclose)(void *); // offset 0x8, size 0x4
    unsigned int (* rwfread)(void *, unsigned int, unsigned int, void *); // offset 0xC, size 0x4
    unsigned int (* rwfwrite)(void *, unsigned int, unsigned int, void *); // offset 0x10, size 0x4
    char * (* rwfgets)(char *, signed int, void *); // offset 0x14, size 0x4
    signed int (* rwfputs)(char *, void *); // offset 0x18, size 0x4
    signed int (* rwfeof)(void *); // offset 0x1C, size 0x4
    signed int (* rwfseek)(void *, signed long, signed int); // offset 0x20, size 0x4
    signed int (* rwfflush)(void *); // offset 0x24, size 0x4
    signed int (* rwftell)(void *); // offset 0x28, size 0x4
};

/*
    Compile unit: E:\SD2\Game\flat\p2skyfs.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00127670 -> 0x001276F0
*/
// Range: 0x127670 -> 0x1276F0
signed int SkyInstallFileSystem(char * subdir /* r17 */) {
    /* anonymous block */ {
        // Range: 0x127670 -> 0x1276F0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2skyfs.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001276F0 -> 0x001277AC
*/
// Range: 0x1276F0 -> 0x1277AC
static void * _rwSkyFSClose(void * instance /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1276F0 -> 0x1277AC
        class RwFileFunctions * FS; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2skyfs.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001277B0 -> 0x00127928
*/
// Range: 0x1277B0 -> 0x127928
static void * _rwSkyFSOpen(void * instance /* r18 */, signed int offset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1277B0 -> 0x127928
        class RwFileFunctions * FS; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2skyfs.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00127930 -> 0x00127938
*/
// Range: 0x127930 -> 0x127938
static signed int skyFflush() {
    /* anonymous block */ {
        // Range: 0x127930 -> 0x127938
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2skyfs.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00127940 -> 0x0012798C
*/
// Range: 0x127940 -> 0x12798C
static signed int skyFeof(void * fptr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x127940 -> 0x12798C
        class skyFile * fp; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2skyfs.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00127990 -> 0x00127A60
*/
// Range: 0x127990 -> 0x127A60
static signed int skyFputs(char * buffer /* r17 */, void * fptr /* r16 */) {
    /* anonymous block */ {
        // Range: 0x127990 -> 0x127A60
        signed int j; // r2
        signed int i; // r17
        class skyFile * fp; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2skyfs.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00127A60 -> 0x00127BB0
*/
// Range: 0x127A60 -> 0x127BB0
static char * skyFgets(char * buffer /* r19 */, signed int maxLen /* r16 */, void * fptr /* r18 */) {
    /* anonymous block */ {
        // Range: 0x127A60 -> 0x127BB0
        signed int numBytesRead; // r17
        signed int i; // r16
        class skyFile * fp; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2skyfs.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00127BB0 -> 0x00127BFC
*/
// Range: 0x127BB0 -> 0x127BFC
static signed int skyFtell(void * fptr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x127BB0 -> 0x127BFC
        class skyFile * fp; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2skyfs.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00127C00 -> 0x00127D70
*/
// Range: 0x127C00 -> 0x127D70
static signed int skyFseek(void * fptr /* r2 */, signed long offset /* r20 */, signed int origin /* r19 */) {
    /* anonymous block */ {
        // Range: 0x127C00 -> 0x127D70
        signed int noBuffer; // r18
        signed int bufStart; // r3
        signed int oldFPos; // r17
        class skyFile * fp; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2skyfs.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00127D70 -> 0x00127E44
*/
// Range: 0x127D70 -> 0x127E44
static unsigned int skyFwrite(void * addr /* r19 */, unsigned int size /* r18 */, unsigned int count /* r2 */, void * fptr /* r17 */) {
    /* anonymous block */ {
        // Range: 0x127D70 -> 0x127E44
        signed int numBytesToWrite; // r16
        class skyFile * fp; // r2
        signed int bytesWritten; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2skyfs.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00127E50 -> 0x00127F90
*/
// Range: 0x127E50 -> 0x127F90
static unsigned int skyFread(void * addr /* r20 */, unsigned int size /* r19 */, unsigned int count /* r2 */, void * fptr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x127E50 -> 0x127F90
        signed int bytesRead2; // r2
        signed int bytesRead; // r2
        unsigned int numBytesToRead; // r2
        class skyFile * fp; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2skyfs.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00127F90 -> 0x00127FEC
*/
// Range: 0x127F90 -> 0x127FEC
static signed int skyFexist(char * name /* r16 */) {
    /* anonymous block */ {
        // Range: 0x127F90 -> 0x127FEC
        void * res; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2skyfs.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00127FF0 -> 0x00128090
*/
// Range: 0x127FF0 -> 0x128090
static signed int skyFclose(void * fptr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x127FF0 -> 0x128090
        class skyFile * fp; // r17
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2skyfs.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00128090 -> 0x001280B4
*/
// Range: 0x128090 -> 0x1280B4
static void * skyFopen(char * name /* r2 */, char * access /* r2 */) {
    /* anonymous block */ {
        // Range: 0x128090 -> 0x1280B4
        void * res; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2skyfs.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001280C0 -> 0x001282E8
*/
// Range: 0x1280C0 -> 0x1282E8
static void * trySkyFopen(char * fname /* r16 */, char * access /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1280C0 -> 0x1282E8
        char * nameptr; // r5
        char name[256]; // r29+0x50
        signed int mode; // r19
        class skyFile * fp; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2skyfs.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001282F0 -> 0x00128408
*/
// Range: 0x1282F0 -> 0x128408
static signed int skyTransMode(char * access /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1282F0 -> 0x128408
        char * d; // r2
        char * n; // r20
        char * plus; // r19
        char * a; // r18
        char * w; // r17
        char * r; // r16
        signed int mode; // r3
    }
}


