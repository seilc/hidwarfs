/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\gc\water\texconv.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80126220 -> 0x801265A8
*/
// total size: 0x4
struct RwRGBA {
    // Members
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// total size: 0x1C
struct RwImage {
    // Members
    int flags; // offset 0x0, size 0x4
    int width; // offset 0x4, size 0x4
    int height; // offset 0x8, size 0x4
    int depth; // offset 0xC, size 0x4
    int stride; // offset 0x10, size 0x4
    unsigned char * cpPixels; // offset 0x14, size 0x4
    struct RwRGBA * palette; // offset 0x18, size 0x4
};
// Range: 0x80126220 -> 0x801263AC
static struct RwImage * ImageForwardDiff(struct RwImage * srcImage /* r24 */, float range_scale /* f31 */) {
    // Local variables
    struct RwImage * dstImage; // r31
    struct RwRGBA * dst; // r3
    unsigned char * src; // r4
    unsigned int width; // r30
    unsigned int height; // r29
    unsigned int iu; // r5
    unsigned int iv; // r6
    int vStep; // r28
    int uStep; // r27
    int uWrap; // r26
    int vWrap; // r25
    int scale; // r0
}

// total size: 0x34
struct RwRaster {
    // Members
    struct RwRaster * parent; // offset 0x0, size 0x4
    unsigned char * cpPixels; // offset 0x4, size 0x4
    unsigned char * palette; // offset 0x8, size 0x4
    int width; // offset 0xC, size 0x4
    int height; // offset 0x10, size 0x4
    int depth; // offset 0x14, size 0x4
    int stride; // offset 0x18, size 0x4
    signed short nOffsetX; // offset 0x1C, size 0x2
    signed short nOffsetY; // offset 0x1E, size 0x2
    unsigned char cType; // offset 0x20, size 0x1
    unsigned char cFlags; // offset 0x21, size 0x1
    unsigned char privateFlags; // offset 0x22, size 0x1
    unsigned char cFormat; // offset 0x23, size 0x1
    unsigned char * originalPixels; // offset 0x24, size 0x4
    int originalWidth; // offset 0x28, size 0x4
    int originalHeight; // offset 0x2C, size 0x4
    int originalStride; // offset 0x30, size 0x4
};
// total size: 0x8
struct RwObject {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};
// total size: 0x8
struct RwLLLink {
    // Members
    struct RwLLLink * next; // offset 0x0, size 0x4
    struct RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x8
struct RwLinkList {
    // Members
    struct RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0x18
struct RwTexDictionary {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLinkList texturesInDict; // offset 0x8, size 0x8
    struct RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0x58
struct RwTexture {
    // Members
    struct RwRaster * raster; // offset 0x0, size 0x4
    struct RwTexDictionary * dict; // offset 0x4, size 0x4
    struct RwLLLink lInDictionary; // offset 0x8, size 0x8
    char name[32]; // offset 0x10, size 0x20
    char mask[32]; // offset 0x30, size 0x20
    unsigned int filterAddressing; // offset 0x50, size 0x4
    int refCount; // offset 0x54, size 0x4
};
// Range: 0x801263AC -> 0x80126488
struct RwTexture * TextureDiffBumpRGBA8(struct RwTexture * tex /* r30 */, float range_scale /* f31 */) {
    // Local variables
    struct RwImage * bumpImage; // r31
    struct RwImage * diffImage; // r31
    int i; // r6
}

// Range: 0x80126488 -> 0x801265A8
struct RwTexture * TextureDiffBumpRGBA8(struct RwTexture * tex /* r30 */, struct RwTexture * bump /* r31 */) {
    // Local variables
    struct RwImage * bumpImage; // r29
    struct RwImage * diffImage; // r28
    struct RwRaster * raster; // r0
    int i; // r6
}


