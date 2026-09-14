/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\plugin\dmorph\gcn\dmorphcommon.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x00000000 -> 0x00000000
*/
// total size: 0x8
struct RxGameCubeVertexAttr {
    // Members
    void * array; // offset 0x0, size 0x4
    unsigned char attr; // offset 0x4, size 0x1
    unsigned char stride; // offset 0x5, size 0x1
    unsigned char indexType; // offset 0x6, size 0x1
    unsigned char pad[1]; // offset 0x7, size 0x1
};
// total size: 0x14
struct RxGameCubeVertexBuffer {
    // Members
    unsigned short token; // offset 0x0, size 0x2
    unsigned short serialNumber; // offset 0x2, size 0x2
    unsigned int flags; // offset 0x4, size 0x4
    unsigned int numAttrArrays; // offset 0x8, size 0x4
    struct RxGameCubeVertexAttr attr[1]; // offset 0xC, size 0x8
};
// total size: 0x10
struct RwRGBAReal {
    // Members
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
};
// total size: 0x2C
struct RxGameCubePipeData {
    // Members
    struct RwResEntry * resEntry; // offset 0x0, size 0x4
    struct RpMeshHeader * meshHeader; // offset 0x4, size 0x4
    int flags; // offset 0x8, size 0x4
    struct RwRGBAReal ambientLightColor; // offset 0xC, size 0x10
    int ambientLight; // offset 0x1C, size 0x4
    unsigned int lightMask; // offset 0x20, size 0x4
    int numLights; // offset 0x24, size 0x4
    void * nodeData; // offset 0x28, size 0x4
};
// total size: 0x18
struct RpGameCubeVtxFmt {
    // Members
    unsigned char pos; // offset 0x0, size 0x1
    unsigned char norm; // offset 0x1, size 0x1
    unsigned char texCoord[8]; // offset 0x2, size 0x8
    unsigned char preLight; // offset 0xA, size 0x1
    unsigned char format; // offset 0xB, size 0x1
    unsigned char posFrac; // offset 0xC, size 0x1
    unsigned char nbt; // offset 0xD, size 0x1
    unsigned char texCoordFrac[8]; // offset 0xE, size 0x8
    unsigned short refCnt; // offset 0x16, size 0x2
};

