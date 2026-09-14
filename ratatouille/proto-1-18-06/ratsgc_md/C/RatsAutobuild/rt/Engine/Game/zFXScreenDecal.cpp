/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zFXScreenDecal.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8014FFA4 -> 0x8015027C
*/
static int decalCount; // size: 0x4, address: 0x803C2FA8
static class Decal decals[8]; // size: 0x40, address: 0x803C2FAC
// total size: 0x10
struct xFRect {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
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
// total size: 0x28
class zFXScreenDecalConfig {
    // Members
public:
    float fadeInTime; // offset 0x0, size 0x4
    float fadeOutTime; // offset 0x4, size 0x4
    float lifetime; // offset 0x8, size 0x4
    struct xFRect screenSpace; // offset 0xC, size 0x10
    unsigned int textureID; // offset 0x1C, size 0x4
    struct RwRaster * raster; // offset 0x20, size 0x4
    unsigned char alpha; // offset 0x24, size 0x1
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
// Range: 0x8014FFA4 -> 0x8014FFB0
void zFXScreenDecalSceneEnter() {
    // References
    // -> static int decalCount;
}

// Range: 0x8014FFB0 -> 0x8014FFBC
void zFXScreenDecalSceneReset() {
    // References
    // -> static int decalCount;
}

// Range: 0x8014FFBC -> 0x8015006C
void zFXScreenDecalUpdate(float dt /* f30 */) {
    // Local variables
    int i; // r30

    // References
    // -> static int decalCount;
    // -> static class Decal decals[8];
}

// Range: 0x80150080 -> 0x801500D0
void zFXScreenDecalRender() {
    // Local variables
    int i; // r30

    // References
    // -> static int decalCount;
    // -> static class Decal decals[8];
}

void * RwEngineInstance; // size: 0x4, address: 0x803C4584
unsigned int FB_YRES; // size: 0x4, address: 0x803BE160
unsigned int FB_XRES; // size: 0x4, address: 0x803BE15C
// total size: 0x8
class Decal {
    // Functions
    static void Render();

    // Members
public:
    const class zFXScreenDecalConfig * config; // offset 0x0, size 0x4
    float timer; // offset 0x4, size 0x4
};
// Range: 0x801500D0 -> 0x8015027C
// this: r29
static void Decal::Render() {
    // Local variables
    unsigned int alpha; // r30
    float fadeInTime; // f3

    // References
    // -> unsigned int FB_XRES;
    // -> unsigned int FB_YRES;
    // -> void * RwEngineInstance;
}


