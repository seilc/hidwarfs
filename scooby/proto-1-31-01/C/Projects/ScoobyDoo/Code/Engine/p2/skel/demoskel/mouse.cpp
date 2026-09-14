/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\mouse.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char mousedat[836]; // size: 0x344, address: 0x41D880
// total size: 0x8
class _RwLLLink {
    // Members
public:
    class _RwLLLink * next; // offset 0x0, size 0x4
    class _RwLLLink * prev; // offset 0x4, size 0x4
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
// total size: 0x8
class _RwV2d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
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
// total size: 0x10
class _RwPlane {
    // Members
public:
    class _RwV3d normal; // offset 0x0, size 0xC
    float distance; // offset 0xC, size 0x4
};
// total size: 0x4
class PsMouse {};
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\mouse.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002023E0 -> 0x002024E4
*/
// Range: 0x2023E0 -> 0x2024E4
// this: r18
RsMouse::RsMouse(signed int visible /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2023E0 -> 0x2024E4
        class _RwImage * image; // r16
        signed int rasterFlags; // r29+0x4C
        signed int rasterDepth; // r29+0x48
        signed int rasterWidth; // r29+0x44
        signed int rasterHeight; // r29+0x40
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\mouse.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002024F0 -> 0x00202564
*/
// Range: 0x2024F0 -> 0x202564
// this: r17
RsMouse::~RsMouse() {
    /* anonymous block */ {
        // Range: 0x2024F0 -> 0x202564
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\mouse.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202570 -> 0x00202710
*/
// Range: 0x202570 -> 0x202710
// this: r17
void RsMouse::render(class _RwCamera * camera /* r16 */) {
    /* anonymous block */ {
        // Range: 0x202570 -> 0x202710
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\mouse.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202710 -> 0x0020271C
*/
// Range: 0x202710 -> 0x20271C
// this: r2
void RsMouse::setVisibility(signed int visible /* r2 */) {
    /* anonymous block */ {
        // Range: 0x202710 -> 0x20271C
    }
}


