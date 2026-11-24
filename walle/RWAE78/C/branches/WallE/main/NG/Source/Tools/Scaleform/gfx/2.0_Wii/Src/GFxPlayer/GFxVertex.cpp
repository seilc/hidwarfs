/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxVertex.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x805A8B80 -> 0x805A95B8
*/
// total size: 0x4
class GFxVertexInterface_XY16i : public GFxVertexInterface {};
// total size: 0x4
class GFxVertexInterface_XY32f : public GFxVertexInterface {};
// total size: 0x4
class GFxVertexInterface_XY16iC32 : public GFxVertexInterface {};
// total size: 0x4
class GFxVertexInterface_XY16iCF32 : public GFxVertexInterface {};
// total size: 0x8
class GFxVertexRef {
    // Members
    class GFxVertexType * pVertex; // offset 0x0, size 0x4
    class GFxVertexInterface * pVI; // offset 0x4, size 0x4
};
// total size: 0x1
class GFxVertexType {
    // Members
    unsigned char ByteVal; // offset 0x0, size 0x1
};
// total size: 0x4
class Vertex {
    // Members
    short x; // offset 0x0, size 0x2
    short y; // offset 0x2, size 0x2
};
// total size: 0x8
class Vertex {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0xC
class Vertex {
    // Members
    short x; // offset 0x0, size 0x2
    short y; // offset 0x2, size 0x2
    unsigned long Color; // offset 0x4, size 0x4
    unsigned long Factor; // offset 0x8, size 0x4
};
static class GFxVertexInterface viNone; // size: 0x4, address: 0x808DEC6C
static class GFxVertexInterface_XY16i viXY16i; // size: 0x4, address: 0x808DEC74
static class GFxVertexInterface_XY32f viXY32f; // size: 0x4, address: 0x808DEC7C
static class GFxVertexInterface_XY16iC32 viXY16iC32; // size: 0x4, address: 0x808DEC84
static class GFxVertexInterface_XY16iCF32 viXY16iCF32; // size: 0x4, address: 0x808DEC8C
static class GFxVertexDesc descTable[5]; // size: 0x3C, address: 0x8073F6D8
static class GFxVertexInterface viNone; // size: 0x4, address: 0x808DEC94
struct {} __vt__28GFxVertexInterface_XY16iCF32; // size: 0x28, address: 0x8073F718
struct {} __vt__27GFxVertexInterface_XY16iC32; // size: 0x28, address: 0x8073F740
struct {} __vt__24GFxVertexInterface_XY32f; // size: 0x28, address: 0x8073F768
struct {} __vt__24GFxVertexInterface_XY16i; // size: 0x28, address: 0x8073F790
struct {} __vt__18GFxVertexInterface; // size: 0x28, address: 0x8073F7B8
// signature: GFxVertexInterface::InitVertex(GFxVertexType *, float, float, unsigned long)
// Range: 0x805A8B80 -> 0x805A8B84
void GFxVertexInterface::InitVertex() {
}
// signature: GFxVertexInterface::SetXY(GFxVertexType *, float, float)
// Range: 0x805A8B90 -> 0x805A8B94
void GFxVertexInterface::SetXY() {
}
// signature: GFxVertexInterface::GetXY(GFxVertexType *, float *, float *)
// Range: 0x805A8BA0 -> 0x805A8BB0
void GFxVertexInterface::GetXY() {
}
// signature: GFxVertexInterface::SetColor(GFxVertexType *, unsigned long)
// Range: 0x805A8BB0 -> 0x805A8BB4
void GFxVertexInterface::SetColor() {
}
// signature: GFxVertexInterface::SetFactor(GFxVertexType *, unsigned long)
// Range: 0x805A8BC0 -> 0x805A8BC4
void GFxVertexInterface::SetFactor() {
}
// signature: GFxVertexInterface::GetColor(GFxVertexType *)
// Range: 0x805A8BD0 -> 0x805A8BD8
unsigned long GFxVertexInterface::GetColor() {
}
// signature: GFxVertexInterface::GetFactor(GFxVertexType *)
// Range: 0x805A8BE0 -> 0x805A8BE8
unsigned long GFxVertexInterface::GetFactor() {
}
// signature: GFxVertexInterface_XY16i::InitVertex(GFxVertexType *, float, float, unsigned long)
// Range: 0x805A9300 -> 0x805A932C
void GFxVertexInterface_XY16i::InitVertex() {
    // Local variables
    class Vertex * p; // r0
}
// signature: GFxVertexInterface_XY16i::SetXY(GFxVertexType *, float, float)
// Range: 0x805A9330 -> 0x805A935C
void GFxVertexInterface_XY16i::SetXY() {
    // Local variables
    class Vertex * p; // r0
}
// signature: GFxVertexInterface_XY16i::GetXY(GFxVertexType *, float *, float *)
// Range: 0x805A9360 -> 0x805A93AC
void GFxVertexInterface_XY16i::GetXY() {
    // Local variables
    class Vertex * p; // r0
}
// signature: GFxVertexInterface_XY32f::InitVertex(GFxVertexType *, float, float, unsigned long)
// Range: 0x805A93B0 -> 0x805A93BC
void GFxVertexInterface_XY32f::InitVertex() {
    // Local variables
    class Vertex * p; // r0
}
// signature: GFxVertexInterface_XY32f::SetXY(GFxVertexType *, float, float)
// Range: 0x805A93C0 -> 0x805A93CC
void GFxVertexInterface_XY32f::SetXY() {
    // Local variables
    class Vertex * p; // r0
}
// signature: GFxVertexInterface_XY32f::GetXY(GFxVertexType *, float *, float *)
// Range: 0x805A93D0 -> 0x805A93E4
void GFxVertexInterface_XY32f::GetXY() {
    // Local variables
    class Vertex * p; // r0
}
// signature: GFxVertexInterface_XY16iC32::InitVertex(GFxVertexType *, float, float, unsigned long)
// Range: 0x805A93F0 -> 0x805A9420
void GFxVertexInterface_XY16iC32::InitVertex() {
    // Local variables
    class VertexXY16iC32 * p; // r0
}
// signature: GFxVertexInterface_XY16iC32::SetXY(GFxVertexType *, float, float)
// Range: 0x805A9420 -> 0x805A944C
void GFxVertexInterface_XY16iC32::SetXY() {
    // Local variables
    class VertexXY16iC32 * p; // r0
}
// signature: GFxVertexInterface_XY16iC32::GetXY(GFxVertexType *, float *, float *)
// Range: 0x805A9450 -> 0x805A949C
void GFxVertexInterface_XY16iC32::GetXY() {
    // Local variables
    class VertexXY16iC32 * p; // r0
}
// signature: GFxVertexInterface_XY16iC32::SetColor(GFxVertexType *, unsigned long)
// Range: 0x805A94A0 -> 0x805A94A8
void GFxVertexInterface_XY16iC32::SetColor() {
}
// signature: GFxVertexInterface_XY16iC32::GetColor(GFxVertexType *)
// Range: 0x805A94B0 -> 0x805A94B8
unsigned long GFxVertexInterface_XY16iC32::GetColor() {
}
// signature: GFxVertexInterface_XY16iCF32::InitVertex(GFxVertexType *, float, float, unsigned long)
// Range: 0x805A94C0 -> 0x805A94F8
void GFxVertexInterface_XY16iCF32::InitVertex() {
    // Local variables
    class Vertex * p; // r0
}
// signature: GFxVertexInterface_XY16iCF32::SetXY(GFxVertexType *, float, float)
// Range: 0x805A9500 -> 0x805A952C
void GFxVertexInterface_XY16iCF32::SetXY() {
    // Local variables
    class Vertex * p; // r0
}
// signature: GFxVertexInterface_XY16iCF32::GetXY(GFxVertexType *, float *, float *)
// Range: 0x805A9530 -> 0x805A957C
void GFxVertexInterface_XY16iCF32::GetXY() {
    // Local variables
    class Vertex * p; // r0
}
// signature: GFxVertexInterface_XY16iCF32::SetColor(GFxVertexType *, unsigned long)
// Range: 0x805A9580 -> 0x805A9588
void GFxVertexInterface_XY16iCF32::SetColor() {
}
// signature: GFxVertexInterface_XY16iCF32::GetColor(GFxVertexType *)
// Range: 0x805A9590 -> 0x805A9598
unsigned long GFxVertexInterface_XY16iCF32::GetColor() {
}
// signature: GFxVertexInterface_XY16iCF32::SetFactor(GFxVertexType *, unsigned long)
// Range: 0x805A95A0 -> 0x805A95A8
void GFxVertexInterface_XY16iCF32::SetFactor() {
}
// signature: GFxVertexInterface_XY16iCF32::GetFactor(GFxVertexType *)
// Range: 0x805A95B0 -> 0x805A95B8
unsigned long GFxVertexInterface_XY16iCF32::GetFactor() {
}
// signature: GFxVertexArray::GetFormatDesc(GRenderer::VertexFormat)
// Range: 0x805A8CF0 -> 0x805A8E14
class GFxVertexDesc * GFxVertexArray::GetFormatDesc() {
    // References
    // -> static class GFxVertexDesc descTable[5];
    // -> static class GFxVertexInterface_XY16iCF32 viXY16iCF32;
    // -> struct {} __vt__28GFxVertexInterface_XY16iCF32;
    // -> static class GFxVertexInterface_XY16iC32 viXY16iC32;
    // -> struct {} __vt__27GFxVertexInterface_XY16iC32;
    // -> static class GFxVertexInterface_XY32f viXY32f;
    // -> struct {} __vt__24GFxVertexInterface_XY32f;
    // -> static class GFxVertexInterface_XY16i viXY16i;
    // -> struct {} __vt__24GFxVertexInterface_XY16i;
    // -> static class GFxVertexInterface viNone;
    // -> struct {} __vt__18GFxVertexInterface;
}
// signature: GFxVertexArray::GFxVertexArray(GRenderer::VertexFormat, unsigned int)
// Range: 0x805A8E60 -> 0x805A8EBC
void * GFxVertexArray::GFxVertexArray(class GFxVertexArray * this /* r30 */, unsigned int size /* r31 */) {
}
// Range: 0x805A8EC0 -> 0x805A8F20
void * GFxVertexArray::~GFxVertexArray(class GFxVertexArray * this /* r30 */) {
}
// signature: GFxVertexArray::SetFormat(GRenderer::VertexFormat)
// Range: 0x805A8F20 -> 0x805A8F8C
bool GFxVertexArray::SetFormat(class GFxVertexArray * this /* r30 */) {
    // Local variables
    unsigned int oldSize; // r31
}
// Range: 0x805A8F90 -> 0x805A901C
void GFxVertexArray::Resize(class GFxVertexArray * this /* r30 */, unsigned int vertexCount /* r31 */) {
}
// signature: GFxVertexArray::Reserve(unsigned int, bool)
// Range: 0x805A9020 -> 0x805A9104
void GFxVertexArray::Reserve(class GFxVertexArray * this /* r29 */, unsigned int reserveVertexCount /* r30 */) {
}
// Range: 0x805A9110 -> 0x805A9140
void GFxVertexArray::Clear() {
}
// Range: 0x805A9140 -> 0x805A9204
class GFxVertexRef GFxVertexArray::AppendVertex(class GFxVertexArray * this /* r30 */) {
    // References
    // -> static class GFxVertexInterface viNone;
    // -> struct {} __vt__18GFxVertexInterface;
}
// Range: 0x805A9210 -> 0x805A92C8
void GFxVertexArray::AppendVertices(class GFxVertexArray * this /* r31 */, class GFxVertexArray & src /* r30 */) {
}
// signature: GFxVertexArray::ApplyToRenderer(GRenderer *, GRenderer::CacheProvider *) const
// Range: 0x805A92D0 -> 0x805A92FC
void GFxVertexArray::ApplyToRenderer(class GFxVertexArray * this /* r8 */) const {
}
