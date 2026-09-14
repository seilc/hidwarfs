/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\skyfs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int gdfsOpenFiles; // size: 0x4, address: 0x4A4B04
static class _RwModuleInfo gdfsModuleInfo; // size: 0x8, address: 0x4A51E8
static signed int rwID_SKYDEVICEMODULE; // size: 0x4, address: 0x4A2B04
void * _rwSkyFSClose(void *, signed int, signed int); // size: 0x0, address: 0x202DA0
void * _rwSkyFSOpen(void *, signed int, signed int); // size: 0x0, address: 0x202E70
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x4400D8
signed int skyFflush(void *); // size: 0x0, address: 0x202FF0
signed int skyFseek(void *, signed long, signed int); // size: 0x0, address: 0x2032E0
signed int skyFeof(void *); // size: 0x0, address: 0x203000
signed int skyFputs(char *, void *); // size: 0x0, address: 0x203060
char * skyFgets(char *, signed int, void *); // size: 0x0, address: 0x203150
unsigned int skyFwrite(void *, unsigned int, unsigned int, void *); // size: 0x0, address: 0x2034D0
unsigned int skyFread(void *, unsigned int, unsigned int, void *); // size: 0x0, address: 0x2035E0
signed int skyFclose(void *); // size: 0x0, address: 0x203800
void * skyFopen(char *, char *); // size: 0x0, address: 0x2038C0
signed int skyFexist(char *); // size: 0x0, address: 0x203780
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
// total size: 0x28
class _RwFileFunctions {
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
};
// total size: 0x8
class _RwModuleInfo {
    // Members
public:
    signed int globalsOffset; // offset 0x0, size 0x4
    signed int numInstances; // offset 0x4, size 0x4
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\skyfs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202D60 -> 0x00202DA0
*/
// Range: 0x202D60 -> 0x202DA0
signed int SkyInstallFileSystem() {
    /* anonymous block */ {
        // Range: 0x202D60 -> 0x202DA0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\skyfs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202DA0 -> 0x00202E68
*/
// Range: 0x202DA0 -> 0x202E68
static void * _rwSkyFSClose(void * instance /* r16 */) {
    /* anonymous block */ {
        // Range: 0x202DA0 -> 0x202E68
        class _RwFileFunctions * FS; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\skyfs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202E70 -> 0x00202FF0
*/
// Range: 0x202E70 -> 0x202FF0
static void * _rwSkyFSOpen(void * instance /* r16 */, signed int offset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x202E70 -> 0x202FF0
        class _RwFileFunctions * FS; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\skyfs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202FF0 -> 0x00202FFC
*/
// Range: 0x202FF0 -> 0x202FFC
static signed int skyFflush() {
    /* anonymous block */ {
        // Range: 0x202FF0 -> 0x202FFC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\skyfs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203000 -> 0x00203058
*/
// Range: 0x203000 -> 0x203058
static signed int skyFeof(void * fptr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x203000 -> 0x203058
        class skyFile * fp; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\skyfs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203060 -> 0x00203150
*/
// Range: 0x203060 -> 0x203150
static signed int skyFputs(char * buffer /* r18 */, void * fptr /* r17 */) {
    /* anonymous block */ {
        // Range: 0x203060 -> 0x203150
        signed int j; // r2
        signed int i; // r16
        class skyFile * fp; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\skyfs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203150 -> 0x002032D8
*/
// Range: 0x203150 -> 0x2032D8
static char * skyFgets(char * buffer /* r19 */, signed int maxLen /* r17 */, void * fptr /* r18 */) {
    /* anonymous block */ {
        // Range: 0x203150 -> 0x2032D8
        signed int numBytesRead; // r17
        signed int i; // r16
        class skyFile * fp; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\skyfs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002032E0 -> 0x002034C8
*/
// Range: 0x2032E0 -> 0x2034C8
static signed int skyFseek(void * fptr /* r2 */, signed long offset /* r20 */, signed int origin /* r19 */) {
    /* anonymous block */ {
        // Range: 0x2032E0 -> 0x2034C8
        signed int noBuffer; // r18
        signed int bufStart; // r4
        signed int oldFPos; // r17
        class skyFile * fp; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\skyfs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002034D0 -> 0x002035DC
*/
// Range: 0x2034D0 -> 0x2035DC
static unsigned int skyFwrite(void * addr /* r19 */, unsigned int size /* r17 */, unsigned int count /* r2 */, void * fptr /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2034D0 -> 0x2035DC
        signed int numBytesToWrite; // r18
        class skyFile * fp; // r2
        signed int bytesWritten; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\skyfs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002035E0 -> 0x0020377C
*/
// Range: 0x2035E0 -> 0x20377C
static unsigned int skyFread(void * addr /* r20 */, unsigned int size /* r19 */, unsigned int count /* r2 */, void * fptr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2035E0 -> 0x20377C
        signed int bytesRead2; // r17
        signed int bytesRead; // r18
        unsigned int numBytesToRead; // r17
        class skyFile * fp; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\skyfs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203780 -> 0x002037F8
*/
// Range: 0x203780 -> 0x2037F8
static signed int skyFexist(char * name /* r16 */) {
    /* anonymous block */ {
        // Range: 0x203780 -> 0x2037F8
        void * res; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\skyfs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203800 -> 0x002038B4
*/
// Range: 0x203800 -> 0x2038B4
static signed int skyFclose(void * fptr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x203800 -> 0x2038B4
        class skyFile * fp; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\skyfs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002038C0 -> 0x002038F4
*/
// Range: 0x2038C0 -> 0x2038F4
static void * skyFopen(char * name /* r2 */, char * access /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2038C0 -> 0x2038F4
        void * res; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\skyfs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203900 -> 0x00203BD4
*/
// Range: 0x203900 -> 0x203BD4
static void * trySkyFopen(char * fname /* r16 */, char * access /* r17 */) {
    /* anonymous block */ {
        // Range: 0x203900 -> 0x203BD4
        char * nameptr; // r4
        char name[256]; // r29+0x30
        signed int mode; // r17
        class skyFile * fp; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\skyfs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203BE0 -> 0x00203D34
*/
// Range: 0x203BE0 -> 0x203D34
static signed int skyTransMode(char * access /* r21 */) {
    /* anonymous block */ {
        // Range: 0x203BE0 -> 0x203D34
        char * d; // r2
        char * n; // r20
        char * plus; // r19
        char * a; // r18
        char * w; // r17
        char * r; // r16
        signed int mode; // r3
    }
}


