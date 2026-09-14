/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zWireFrameAsset.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80126A98 -> 0x80126AB8
*/
// total size: 0xC
struct zWireframeVertex {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x4
struct zWireframeLine {
    // Members
    unsigned short start; // offset 0x0, size 0x2
    unsigned short end; // offset 0x2, size 0x2
};
// total size: 0x14
struct zWireframeAsset {
    // Members
    unsigned int size; // offset 0x0, size 0x4
    unsigned int vertexCount; // offset 0x4, size 0x4
    unsigned int lineCount; // offset 0x8, size 0x4
    struct zWireframeVertex * vertices; // offset 0xC, size 0x4
    struct zWireframeLine * lines; // offset 0x10, size 0x4
};
// Range: 0x80126A98 -> 0x80126AB8
void WireframeAssetSetupPointers(struct zWireframeAsset * wireframe /* r0 */) {}


