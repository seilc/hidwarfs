/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\democom\menu.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class MenuStateTag MenuState; // size: 0x44, address: 0x41DBD0
static char * emptyString; // size: 0x4, address: 0x0
static char * helpLines[1500]; // size: 0x1770, address: 0x4A5360
static char test[22]; // size: 0x16, address: 0x41DC20
static char HelpFileName[13]; // size: 0xD, address: 0x41DC38
static char AltHelpFileName[10]; // size: 0xA, address: 0x41DC48
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x4400D8
// total size: 0x14
class RsMouse {
    // Members
public:
    class _RwV2d pos; // offset 0x0, size 0x8
    class _RwRaster * raster; // offset 0x8, size 0x4
    class PsMouse * psmouse; // offset 0xC, size 0x4
    signed int draw; // offset 0x10, size 0x4
};
// total size: 0x40
class _RwMatrix {
    // Members
public:
    class _RwV3d right; // offset 0x0, size 0xC
    unsigned int flags; // offset 0xC, size 0x4
    class _RwV3d up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class _RwV3d at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
    class _RwV3d pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x28
class MenuEntryTag {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
    char * description; // offset 0x4, size 0x4
    void * target; // offset 0x8, size 0x4
    signed int minValue; // offset 0xC, size 0x4
    signed int maxValue; // offset 0x10, size 0x4
    char * * enumStrings; // offset 0x14, size 0x4
    signed int shortcut; // offset 0x18, size 0x4
    signed int (* triggerCallBack)(); // offset 0x1C, size 0x4
    class MenuEntryTag * next; // offset 0x20, size 0x4
    class MenuEntryTag * prev; // offset 0x24, size 0x4
};
// total size: 0x8
class _RwV2d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x34
class _RwRaster {
    // Members
public:
    class _RwRaster * parent; // offset 0x0, size 0x4
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
// total size: 0x4
class PsMouse {};
enum RsEventStatus {
    rsEVENTERROR = 0,
    rsEVENTPROCESSED = 1,
    rsEVENTNOTPROCESSED = 2,
};
// total size: 0x8
class _RsKeyStatus {
    // Members
public:
    signed int keyScanCode; // offset 0x0, size 0x4
    signed int keyCharCode; // offset 0x4, size 0x4
};
// total size: 0x10
class _RwPlane {
    // Members
public:
    class _RwV3d normal; // offset 0x0, size 0xC
    float distance; // offset 0xC, size 0x4
};
enum RsMenuEvent {
    rsLEFTBUTTONDOWN = 0,
    rsLEFTBUTTONUP = 1,
    rsMOUSEMOVE = 2,
    rsKEYDOWN = 3,
    rsKEYUP = 4,
    rsPADBUTTONDOWN = 5,
    rsPADBUTTONUP = 6,
    rsPADANALOGUELEFT = 7,
    rsPADANALOGUERIGHT = 8,
};
// total size: 0x18
class _RsMouseStatus {
    // Members
public:
    class _RwV2d pos; // offset 0x0, size 0x8
    class _RwV2d delta; // offset 0x8, size 0x8
    signed int shift; // offset 0x10, size 0x4
    signed int control; // offset 0x14, size 0x4
};
// total size: 0x14
class _RtCharsetDesc {
    // Members
public:
    signed int width; // offset 0x0, size 0x4
    signed int height; // offset 0x4, size 0x4
    signed int count; // offset 0x8, size 0x4
    signed int tilewidth; // offset 0xC, size 0x4
    signed int tileheight; // offset 0x10, size 0x4
};
// total size: 0x8
class _RsPadButtonStatus {
    // Members
public:
    signed int padID; // offset 0x0, size 0x4
    unsigned int padButtons; // offset 0x4, size 0x4
};
// total size: 0x44
class MenuStateTag {
    // Members
public:
    class _RwRaster * InverseCharset; // offset 0x0, size 0x4
    class _RwRaster * MainCharset; // offset 0x4, size 0x4
    class MenuEntryTag * activeEntry; // offset 0x8, size 0x4
    class MenuEntryTag * menuList; // offset 0xC, size 0x4
    class _RwRGBA MBackground; // offset 0x10, size 0x4
    class _RwRGBA MForeground; // offset 0x14, size 0x4
    signed int Shifted; // offset 0x18, size 0x4
    unsigned int lastKeyPressed; // offset 0x1C, size 0x4
    signed int longestEntryLength; // offset 0x20, size 0x4
    signed int mode; // offset 0x24, size 0x4
    signed int numEntries; // offset 0x28, size 0x4
    signed int numEntriesPerColumn; // offset 0x2C, size 0x4
    signed int numHelpLines; // offset 0x30, size 0x4
    signed int topHelpLine; // offset 0x34, size 0x4
    unsigned int timeOfLastAutoRepeat; // offset 0x38, size 0x4
    unsigned int timeOfLastChange; // offset 0x3C, size 0x4
    unsigned int timeOfLastKeyPress; // offset 0x40, size 0x4
};
enum _RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x14
class _RwObjectHasFrame {
    // Members
public:
    class _RwObject object; // offset 0x0, size 0x8
    class _RwLLLink lFrame; // offset 0x8, size 0x8
    class _RwObjectHasFrame * (* sync)(class _RwObjectHasFrame *); // offset 0x10, size 0x4
};
// total size: 0xC
class _RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x190
class _RwCamera {
    // Members
public:
    class _RwObjectHasFrame object; // offset 0x0, size 0x14
    enum _RwCameraProjection projectionType; // offset 0x14, size 0x4
    class _RwCamera * (* beginUpdate)(class _RwCamera *); // offset 0x18, size 0x4
    class _RwCamera * (* endUpdate)(class _RwCamera *); // offset 0x1C, size 0x4
    class _RwMatrix viewMatrix; // offset 0x20, size 0x40
    class _RwRaster * frameBuffer; // offset 0x60, size 0x4
    class _RwRaster * zBuffer; // offset 0x64, size 0x4
    class _RwV2d viewWindow; // offset 0x68, size 0x8
    class _RwV2d recipViewWindow; // offset 0x70, size 0x8
    class _RwV2d viewOffset; // offset 0x78, size 0x8
    float nearPlane; // offset 0x80, size 0x4
    float farPlane; // offset 0x84, size 0x4
    float fogPlane; // offset 0x88, size 0x4
    float zScale; // offset 0x8C, size 0x4
    float zShift; // offset 0x90, size 0x4
    unsigned short renderFrame; // offset 0x94, size 0x2
    class _RwFrustumPlane frustumPlanes[6]; // offset 0x98, size 0x78
    class _RwBBox frustumBoundBox; // offset 0x110, size 0x18
    class _RwV3d frustumCorners[8]; // offset 0x128, size 0x60
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
class _RwObject {
    // Members
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};
// total size: 0x18
class _RwBBox {
    // Members
public:
    class _RwV3d sup; // offset 0x0, size 0xC
    class _RwV3d inf; // offset 0xC, size 0xC
};
// total size: 0x8
class _RwLLLink {
    // Members
public:
    class _RwLLLink * next; // offset 0x0, size 0x4
    class _RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x4
class _RwRGBA {
    // Members
public:
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// total size: 0x14
class _RwFrustumPlane {
    // Members
public:
    class _RwPlane plane; // offset 0x0, size 0x10
    unsigned char closestX; // offset 0x10, size 0x1
    unsigned char closestY; // offset 0x11, size 0x1
    unsigned char closestZ; // offset 0x12, size 0x1
    unsigned char pad; // offset 0x13, size 0x1
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\democom\menu.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00204B80 -> 0x0020521C
*/
// Range: 0x204B80 -> 0x20521C
signed int MenuRender(class _RwCamera * camera /* r29+0xA0 */, class _RwRaster * Charset /* r22 */, class RsMouse * mouse /* r17 */) {
    /* anonymous block */ {
        // Range: 0x204B80 -> 0x20521C
        signed int line; // r16
        signed int helpLine; // r3
        float value; // r1
        float min; // r2
        float max; // r29+0x160
        signed int index; // r3
        signed int levelOn; // r2
        char caption[128]; // r29+0xD0
        class _RtCharsetDesc charsetDesc; // r29+0xB0
        signed int invert; // r20
        signed int line; // r19
        signed int column; // r18
        signed int count; // r17
        class MenuEntryTag * ptr; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\democom\menu.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00205220 -> 0x002054EC
*/
// Range: 0x205220 -> 0x2054EC
enum RsEventStatus MenuKeyboardHandler(enum RsMenuEvent event /* r18 */, void * param /* r17 */) {
    /* anonymous block */ {
        // Range: 0x205220 -> 0x2054EC
        signed int key; // r16
        class _RsKeyStatus * keyStatus; // r2
        signed int exitMode; // @ 0x004A4B3C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\democom\menu.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002054F0 -> 0x002055E8
*/
// Range: 0x2054F0 -> 0x2055E8
static enum RsEventStatus MenuHandleKeyUp(void * param /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2054F0 -> 0x2055E8
        class _RsKeyStatus * keyStatus; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\democom\menu.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002055F0 -> 0x0020584C
*/
// Range: 0x2055F0 -> 0x20584C
static enum RsEventStatus MenuHandleKeyDown(void * param /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2055F0 -> 0x20584C
        class _RsKeyStatus * keyStatus; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\democom\menu.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00205850 -> 0x002059A8
*/
// Range: 0x205850 -> 0x2059A8
enum RsEventStatus MenuKeyboardShortcutHandler(enum RsMenuEvent event /* r2 */, void * param /* r2 */) {
    /* anonymous block */ {
        // Range: 0x205850 -> 0x2059A8
        class MenuEntryTag * ptr; // r5
        signed int key; // r3
        class _RsKeyStatus * keyStatus; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\democom\menu.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002059B0 -> 0x0020615C
*/
// Range: 0x2059B0 -> 0x20615C
enum RsEventStatus MenuPadHandler(enum RsMenuEvent event /* r2 */, void * param /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2059B0 -> 0x20615C
        float percentage; // r29+0x20
        float biggestDelta; // r2
        class _RwV2d * delta; // r2
        class _RsPadButtonStatus * pb; // r16
        class _RsPadButtonStatus * pb; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\democom\menu.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00206160 -> 0x0020626C
*/
// Range: 0x206160 -> 0x20626C
static signed int AutoRepeatPrepare(enum RsMenuEvent event /* r2 */, void * param /* r2 */) {
    /* anonymous block */ {
        // Range: 0x206160 -> 0x20626C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\democom\menu.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00206270 -> 0x002064A8
*/
// Range: 0x206270 -> 0x2064A8
static signed int MenuSelectionAddValue(signed int increment /* r16 */) {
    /* anonymous block */ {
        // Range: 0x206270 -> 0x2064A8
        float maxValue; // r3
        float minValue; // r2
        float value; // r29+0x20
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\democom\menu.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002064B0 -> 0x002066F0
*/
// Range: 0x2064B0 -> 0x2066F0
static signed int MenuSelectionAddPercentage(float percentage /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2064B0 -> 0x2066F0
        float maxValue; // r3
        float minValue; // r2
        float value; // r1
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\democom\menu.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002066F0 -> 0x002068A0
*/
// Range: 0x2066F0 -> 0x2068A0
static signed int MenuSelectPrevious() {
    /* anonymous block */ {
        // Range: 0x2066F0 -> 0x2068A0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\democom\menu.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002068A0 -> 0x00206AA8
*/
// Range: 0x2068A0 -> 0x206AA8
static signed int MenuSelectNext() {
    /* anonymous block */ {
        // Range: 0x2068A0 -> 0x206AA8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\democom\menu.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00206AB0 -> 0x00206BD4
*/
// Range: 0x206AB0 -> 0x206BD4
signed int MenuClose() {
    /* anonymous block */ {
        // Range: 0x206AB0 -> 0x206BD4
        signed int result; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\democom\menu.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00206BE0 -> 0x00206D18
*/
// Range: 0x206BE0 -> 0x206D18
static signed int MenuRemoveEntryByNumber(signed int entryNum /* r2 */) {
    /* anonymous block */ {
        // Range: 0x206BE0 -> 0x206D18
        signed int count; // r3
        class MenuEntryTag * ptr; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\democom\menu.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00206D20 -> 0x00206DA0
*/
// Range: 0x206D20 -> 0x206DA0
static signed int SelectByNumber(signed int entryNum /* r2 */) {
    /* anonymous block */ {
        // Range: 0x206D20 -> 0x206DA0
        signed int count; // r4
        class MenuEntryTag * ptr; // r3
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\democom\menu.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00206DA0 -> 0x00206DE0
*/
// Range: 0x206DA0 -> 0x206DE0
signed int MenuToggle() {
    /* anonymous block */ {
        // Range: 0x206DA0 -> 0x206DE0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\democom\menu.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00206DE0 -> 0x00206DF0
*/
// Range: 0x206DE0 -> 0x206DF0
signed int MenuGetStatus() {
    /* anonymous block */ {
        // Range: 0x206DE0 -> 0x206DF0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\democom\menu.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00206DF0 -> 0x00206F14
*/
// Range: 0x206DF0 -> 0x206F14
signed int MenuSetStatus(signed int newMode /* r2 */) {
    /* anonymous block */ {
        // Range: 0x206DF0 -> 0x206F14
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\democom\menu.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00206F20 -> 0x002071AC
*/
// Range: 0x206F20 -> 0x2071AC
static signed int LoadHelpFile() {
    /* anonymous block */ {
        // Range: 0x206F20 -> 0x2071AC
        signed int i; // r5
        signed int length; // r2
        void * buffer; // r17
        char line[79]; // r29+0x30
        class _RwFileFunctions * fileFuncs; // r16
    }
}


