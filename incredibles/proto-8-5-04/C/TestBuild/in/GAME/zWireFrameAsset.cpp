/*
    Compile unit: C:\TestBuild\in\GAME\zWireFrameAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
// total size: 0xC
class zWireframeVertex {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x4
class zWireframeLine {
    // Members
public:
    unsigned short start; // offset 0x0, size 0x2
    unsigned short end; // offset 0x2, size 0x2
};
// total size: 0x14
class zWireframeAsset {
    // Members
public:
    unsigned int size; // offset 0x0, size 0x4
    unsigned int vertexCount; // offset 0x4, size 0x4
    unsigned int lineCount; // offset 0x8, size 0x4
    class zWireframeVertex * vertices; // offset 0xC, size 0x4
    class zWireframeLine * lines; // offset 0x10, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\GAME\zWireFrameAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0047C9F0 -> 0x0047CA18
*/
// Range: 0x47C9F0 -> 0x47CA18
void WireframeAssetSetupPointers(class zWireframeAsset * wireframe /* r2 */) {
    /* anonymous block */ {
        // Range: 0x47C9F0 -> 0x47CA18
    }
}


