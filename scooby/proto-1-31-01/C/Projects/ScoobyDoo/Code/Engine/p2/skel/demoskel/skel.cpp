/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\skel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
// total size: 0x64
struct /* @anon0 */ {} RwSkel::__vtable; // size: 0x64, address: 0x4A2670
class _RwImage * RwImageReadPNG(char *); // size: 0x0, address: 0x27EFB8
class _RwImage * RwImageReadBMP(char *); // size: 0x0, address: 0x2A0F80
// total size: 0x8
class _RwLLLink {
    // Members
public:
    class _RwLLLink * next; // offset 0x0, size 0x4
    class _RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x4
class PsMouse {};
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
// total size: 0x1C
class _RwImage {
    // Members
public:
    signed int flags; // offset 0x0, size 0x4
    signed int width; // offset 0x4, size 0x4
    signed int height; // offset 0x8, size 0x4
    signed int depth; // offset 0xC, size 0x4
    signed int stride; // offset 0x10, size 0x4
    unsigned char * cpPixels; // offset 0x14, size 0x4
    class _RwRGBA * palette; // offset 0x18, size 0x4
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
// total size: 0x64
struct /* @anon0 */ {};
// total size: 0x8
class Platform {
    // Members
public:
    signed int quit; // offset 0x0, size 0x4
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
// total size: 0x4
class _RwEngineOpenParams {
    // Members
public:
    void * displayID; // offset 0x0, size 0x4
};
// total size: 0x10
class _RwPlane {
    // Members
public:
    class _RwV3d normal; // offset 0x0, size 0xC
    float distance; // offset 0xC, size 0x4
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
// total size: 0x18
class _RsMouseStatus {
    // Members
public:
    class _RwV2d pos; // offset 0x0, size 0x8
    class _RwV2d delta; // offset 0x8, size 0x8
    signed int shift; // offset 0x10, size 0x4
    signed int control; // offset 0x14, size 0x4
};
// total size: 0x18
class RwSkel {
    // Members
public:
    char * appName; // offset 0x0, size 0x4
    signed int maximumWidth; // offset 0x4, size 0x4
    signed int maximumHeight; // offset 0x8, size 0x4
    class RsMouse * mouse; // offset 0xC, size 0x4
    class Platform * ps; // offset 0x10, size 0x4
};
// total size: 0x14
class RsMouse {
    // Members
public:
    class _RwV2d pos; // offset 0x0, size 0x8
    class _RwRaster * raster; // offset 0x8, size 0x4
    class PsMouse * psmouse; // offset 0xC, size 0x4
    signed int draw; // offset 0x10, size 0x4
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
// total size: 0x8
class _RwV2d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
enum _RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
class _RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x14
class _RwObjectHasFrame {
    // Members
public:
    class _RwObject object; // offset 0x0, size 0x8
    class _RwLLLink lFrame; // offset 0x8, size 0x8
    class _RwObjectHasFrame * (* sync)(class _RwObjectHasFrame *); // offset 0x10, size 0x4
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

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\skel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202720 -> 0x00202754
*/
// Range: 0x202720 -> 0x202754
// this: r2
RwSkel::RwSkel(signed int width /* r2 */, signed int height /* r2 */) {
    /* anonymous block */ {
        // Range: 0x202720 -> 0x202754
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\skel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202760 -> 0x002027E0
*/
// Range: 0x202760 -> 0x2027E0
// this: r17
RwSkel::~RwSkel() {
    /* anonymous block */ {
        // Range: 0x202760 -> 0x2027E0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\skel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002027E0 -> 0x002027EC
*/
// Range: 0x2027E0 -> 0x2027EC
signed int PadButtonRight() {
    /* anonymous block */ {
        // Range: 0x2027E0 -> 0x2027EC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\skel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002027F0 -> 0x002027FC
*/
// Range: 0x2027F0 -> 0x2027FC
signed int PadButtonLeft() {
    /* anonymous block */ {
        // Range: 0x2027F0 -> 0x2027FC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\skel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202800 -> 0x0020280C
*/
// Range: 0x202800 -> 0x20280C
signed int PadButtonUp() {
    /* anonymous block */ {
        // Range: 0x202800 -> 0x20280C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\skel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202810 -> 0x0020281C
*/
// Range: 0x202810 -> 0x20281C
signed int PadButtonDown() {
    /* anonymous block */ {
        // Range: 0x202810 -> 0x20281C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\skel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202820 -> 0x0020282C
*/
// Range: 0x202820 -> 0x20282C
signed int KeyUp() {
    /* anonymous block */ {
        // Range: 0x202820 -> 0x20282C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\skel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202830 -> 0x0020283C
*/
// Range: 0x202830 -> 0x20283C
signed int KeyDown() {
    /* anonymous block */ {
        // Range: 0x202830 -> 0x20283C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\skel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202840 -> 0x0020284C
*/
// Range: 0x202840 -> 0x20284C
signed int Update(float timeDelta /* r29 */) {
    /* anonymous block */ {
        // Range: 0x202840 -> 0x20284C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\skel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202850 -> 0x00202880
*/
// Range: 0x202850 -> 0x202880
// this: r2
signed int RwSkel::SelectDevice() {
    /* anonymous block */ {
        // Range: 0x202850 -> 0x202880
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\skel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202880 -> 0x002028B4
*/
// Range: 0x202880 -> 0x2028B4
signed int RwTerminate() {
    /* anonymous block */ {
        // Range: 0x202880 -> 0x2028B4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\skel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002028C0 -> 0x00202918
*/
// Range: 0x2028C0 -> 0x202918
// this: r17
void RwSkel::CameraShowRaster(class _RwCamera * camera /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2028C0 -> 0x202918
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\skel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202920 -> 0x00202AB4
*/
// Range: 0x202920 -> 0x202AB4
// this: r17
signed int RwSkel::RwInitialize(void * displayID /* r16 */) {
    /* anonymous block */ {
        // Range: 0x202920 -> 0x202AB4
        class _RwEngineOpenParams openParams; // r29+0x3C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\skel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202AC0 -> 0x00202ACC
*/
// Range: 0x202AC0 -> 0x202ACC
signed int RightButtonUp() {
    /* anonymous block */ {
        // Range: 0x202AC0 -> 0x202ACC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\skel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202AD0 -> 0x00202ADC
*/
// Range: 0x202AD0 -> 0x202ADC
signed int RightButtonDown() {
    /* anonymous block */ {
        // Range: 0x202AD0 -> 0x202ADC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\skel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202AE0 -> 0x00202B48
*/
// Range: 0x202AE0 -> 0x202B48
signed int RegisterImageLoader() {
    /* anonymous block */ {
        // Range: 0x202AE0 -> 0x202B48
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\skel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202B50 -> 0x00202BC4
*/
// Range: 0x202B50 -> 0x202BC4
signed int PluginAttach() {
    /* anonymous block */ {
        // Range: 0x202B50 -> 0x202BC4
        signed int rv; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\skel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202BD0 -> 0x00202BDC
*/
// Range: 0x202BD0 -> 0x202BDC
signed int MouseMove() {
    /* anonymous block */ {
        // Range: 0x202BD0 -> 0x202BDC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\skel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202BE0 -> 0x00202BEC
*/
// Range: 0x202BE0 -> 0x202BEC
signed int LeftButtonUp() {
    /* anonymous block */ {
        // Range: 0x202BE0 -> 0x202BEC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\skel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202BF0 -> 0x00202BFC
*/
// Range: 0x202BF0 -> 0x202BFC
signed int LeftButtonDown() {
    /* anonymous block */ {
        // Range: 0x202BF0 -> 0x202BFC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\skel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202C00 -> 0x00202C6C
*/
// Range: 0x202C00 -> 0x202C6C
// this: r16
signed int RwSkel::InitDebug() {
    /* anonymous block */ {
        // Range: 0x202C00 -> 0x202C6C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\skel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202C70 -> 0x00202C7C
*/
// Range: 0x202C70 -> 0x202C7C
signed int FileLoad() {
    /* anonymous block */ {
        // Range: 0x202C70 -> 0x202C7C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\skel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202C80 -> 0x00202D44
*/
// Range: 0x202C80 -> 0x202D44
// this: r17
signed int RwSkel::CommandLine(char * command /* r2 */) {
    /* anonymous block */ {
        // Range: 0x202C80 -> 0x202D44
        char fileName[256]; // r29+0x30
        char * s2; // r4
        char * s1; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\skel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202D50 -> 0x00202D5C
*/
// Range: 0x202D50 -> 0x202D5C
signed int CameraSize() {
    /* anonymous block */ {
        // Range: 0x202D50 -> 0x202D5C
    }
}


