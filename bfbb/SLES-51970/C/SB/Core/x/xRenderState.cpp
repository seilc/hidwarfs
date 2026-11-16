/*
    Compile unit: C:\SB\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
static signed int sBlendTable[11]; // size: 0x2C, address: 0x4DEEC0
// total size: 0x58
class RwTexture {
    // Members
public:
    class RwRaster * raster; // offset 0x0, size 0x4
    class RwTexDictionary * dict; // offset 0x4, size 0x4
    class RwLLLink lInDictionary; // offset 0x8, size 0x8
    char name[32]; // offset 0x10, size 0x20
    char mask[32]; // offset 0x30, size 0x20
    unsigned int filterAddressing; // offset 0x50, size 0x4
    signed int refCount; // offset 0x54, size 0x4
};
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
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
// total size: 0x18
class RwTexDictionary {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
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
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};

/*
    Compile unit: C:\SB\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003010B0 -> 0x003010CC
*/
// Range: 0x3010B0 -> 0x3010CC
void xRenderStateSetDstBlendMode(signed int xmode /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3010B0 -> 0x3010CC
    }
}


/*
    Compile unit: C:\SB\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003010D0 -> 0x003010EC
*/
// Range: 0x3010D0 -> 0x3010EC
void xRenderStateSetSrcBlendMode(signed int xmode /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3010D0 -> 0x3010EC
    }
}


/*
    Compile unit: C:\SB\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003010F0 -> 0x00301134
*/
// Range: 0x3010F0 -> 0x301134
void xRenderStateSetTexture(class RwTexture * texture /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3010F0 -> 0x301134
        class RwRaster * raster; // r2
    }
}


