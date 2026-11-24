/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WADSpeed.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\BuildMemory.h
*/
int maxVertexSize; // size: 0x4, address: 0x80779DE4
int maxIndexcount; // size: 0x4, address: 0x80779DE8
// signature: Graphics::Alloc(unsigned char *, int, int, int, Graphics::VertexBuffer &)
// Range: 0x801B82E0 -> 0x801B8314
int Graphics::Alloc() {
    // Local variables
    int askedAllocSize; // r8
}
// signature: Graphics::Alloc(unsigned short *, int, int, int, Graphics::IndexBuffer &, int, Graphics::PrimitiveType)
// Range: 0x801B8390 -> 0x801B8430
int Graphics::Alloc(int numIndices /* r31 */, class IndexBuffer & indexStream /* r28 */, enum PrimitiveType primType /* r29 */) {
    // Local variables
    int displayListSize; // r8
    int askedAllocCount; // r30
}
// signature: Graphics::BuildBuffer<2, true>::Alloc(Graphics::VertexBuffer &, int)
// Range: 0x801B8270 -> 0x801B82DC
void * Graphics::BuildBuffer<2, true>::Alloc(class BuildBuffer * this /* r30 */, class VertexBuffer & buffer /* r31 */) {
    // Local variables
    int allocSize; // r0
}
// signature: Graphics::BuildBuffer<2, true>::Alloc(Graphics::IndexBuffer &, int, int, Graphics::PrimitiveType)
// Range: 0x801B8320 -> 0x801B8390
unsigned short * Graphics::BuildBuffer<2, true>::Alloc(class BuildBuffer * this /* r30 */, class IndexBuffer & buffer /* r31 */) {
    // Local variables
    int numIndicesAllocated; // r0
}
// Range: 0x801C2660 -> 0x801C26B8
void Graphics::BuildBuffer<2, true>::Swap() {
}
// Range: 0x80210750 -> 0x8021075C
void Graphics::BuildBuffer<2, true>::Activate() {
}
// Range: 0x801E5500 -> 0x801E551C
void Graphics::BuildBuffer<2, true>::Upload() {
}
// signature: Graphics::AllocRenderVertexBuffer(Graphics::VertexBuffer &, int)
// Range: 0x801D7040 -> 0x801D70B8
void * Graphics::AllocRenderVertexBuffer() {
    // References
    // -> class BuildBuffer g_renderBuildBuffer;
}
