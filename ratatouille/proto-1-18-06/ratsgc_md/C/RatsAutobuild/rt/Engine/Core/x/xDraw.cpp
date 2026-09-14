/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDraw.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80024E18 -> 0x80024FDC
*/
void * RwEngineInstance; // size: 0x4, address: 0x803C4584
// total size: 0x18
struct rwGameCube2DVertex {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    unsigned char r; // offset 0xC, size 0x1
    unsigned char g; // offset 0xD, size 0x1
    unsigned char b; // offset 0xE, size 0x1
    unsigned char a; // offset 0xF, size 0x1
    float u; // offset 0x10, size 0x4
    float v; // offset 0x14, size 0x4
};
// Range: 0x80024E18 -> 0x80024EF0
int Im2DRenderQuad(float x1 /* f0 */, float y1 /* f0 */, float x2 /* f0 */, float y2 /* f0 */, float z /* f0 */, float uvOffset /* f0 */) {
    // Local variables
    struct rwGameCube2DVertex vx[4]; // r1+0x8

    // References
    // -> void * RwEngineInstance;
}

// Range: 0x80024EF0 -> 0x80024FDC
int Im2DRenderQuadAlpha(float x1 /* f0 */, float y1 /* f0 */, float x2 /* f0 */, float y2 /* f0 */, float alpha /* f0 */, float z /* f0 */, float uvOffset /* f0 */) {
    // Local variables
    struct rwGameCube2DVertex vx[4]; // r1+0x8
    unsigned char alphaI; // r7

    // References
    // -> void * RwEngineInstance;
}


