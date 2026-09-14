/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\democom\padmap.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
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
// total size: 0x8
class _RsPadButtonStatus {
    // Members
public:
    signed int padID; // offset 0x0, size 0x4
    unsigned int padButtons; // offset 0x4, size 0x4
};
// total size: 0x1C
class PadMap {
    // Members
public:
    class RwSkel * skel; // offset 0x0, size 0x4
    class _RsMouseStatus ms; // offset 0x4, size 0x18
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
class RsMouse {
    // Members
public:
    class _RwV2d pos; // offset 0x0, size 0x8
    class _RwRaster * raster; // offset 0x8, size 0x4
    class PsMouse * psmouse; // offset 0xC, size 0x4
    signed int draw; // offset 0x10, size 0x4
};
// total size: 0x8
class Platform {
    // Members
public:
    signed int quit; // offset 0x0, size 0x4
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
// total size: 0x8
class _RwV2d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\democom\padmap.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00204B50 -> 0x00204B78
*/
// Range: 0x204B50 -> 0x204B78
// this: r2
PadMap::PadMap(class RwSkel * skel /* r2 */) {
    /* anonymous block */ {
        // Range: 0x204B50 -> 0x204B78
    }
}


