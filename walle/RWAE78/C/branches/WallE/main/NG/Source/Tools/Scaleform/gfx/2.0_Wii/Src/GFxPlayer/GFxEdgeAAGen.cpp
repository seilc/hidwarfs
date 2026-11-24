/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxEdgeAAGen.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804B01B0 -> 0x804B2D9C
*/
// total size: 0x90
class GFxEdgeAAGenerator {
    // Members
    class GEdgeAA EdgeAA; // offset 0x0, size 0x84
    class garray * pFills; // offset 0x84, size 0x4
    bool UsingTextures; // offset 0x88, size 0x1
    unsigned long DefFactorRGB; // offset 0x8C, size 0x4
};
// total size: 0x84
class GEdgeAA {
    // Members
    class GPodBVector Vertices; // offset 0x0, size 0x14
    class GPodBVector Edges; // offset 0x14, size 0x14
    class GPodBVector MeshTriangles; // offset 0x28, size 0x14
    class GPodVector EdgeIdx; // offset 0x3C, size 0xC
    class GPodBVector FanEdges; // offset 0x48, size 0x14
    class GPodBVector TmpStarVer; // offset 0x5C, size 0x14
    class GPodBVector Triangles; // offset 0x70, size 0x14
};
// total size: 0x14
class GPodBVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int NumBlocks; // offset 0x4, size 0x4
    unsigned int MaxBlocks; // offset 0x8, size 0x4
    class VertexType * * Blocks; // offset 0xC, size 0x4
    unsigned int BlockPtrInc; // offset 0x10, size 0x4
};
// total size: 0xC
class VertexType {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    int id; // offset 0x8, size 0x4
};
// total size: 0x14
class GPodBVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int NumBlocks; // offset 0x4, size 0x4
    unsigned int MaxBlocks; // offset 0x8, size 0x4
    class EdgeType * * Blocks; // offset 0xC, size 0x4
    unsigned int BlockPtrInc; // offset 0x10, size 0x4
};
// total size: 0xC
class EdgeType {
    // Members
    unsigned int v1; // offset 0x0, size 0x4
    unsigned int v2; // offset 0x4, size 0x4
    unsigned int tri; // offset 0x8, size 0x4
};
// total size: 0x14
class GPodBVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int NumBlocks; // offset 0x4, size 0x4
    unsigned int MaxBlocks; // offset 0x8, size 0x4
    class MeshTriType * * Blocks; // offset 0xC, size 0x4
    unsigned int BlockPtrInc; // offset 0x10, size 0x4
};
// total size: 0x3C
class MeshTriType {
    // Members
    unsigned int iniVer[3]; // offset 0x0, size 0xC
    unsigned int newVer[3]; // offset 0xC, size 0xC
    unsigned int startEdge; // offset 0x18, size 0x4
    int adjTri[3]; // offset 0x1C, size 0xC
    int extVer[3]; // offset 0x28, size 0xC
    char edgeStat[3]; // offset 0x34, size 0x3
    int style; // offset 0x38, size 0x4
};
// total size: 0xC
class GPodVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int Capacity; // offset 0x4, size 0x4
    unsigned int * Array; // offset 0x8, size 0x4
};
// total size: 0x14
class GPodBVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int NumBlocks; // offset 0x4, size 0x4
    unsigned int MaxBlocks; // offset 0x8, size 0x4
    int * * Blocks; // offset 0xC, size 0x4
    unsigned int BlockPtrInc; // offset 0x10, size 0x4
};
// total size: 0x14
class GPodBVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int NumBlocks; // offset 0x4, size 0x4
    unsigned int MaxBlocks; // offset 0x8, size 0x4
    unsigned int * * Blocks; // offset 0xC, size 0x4
    unsigned int BlockPtrInc; // offset 0x10, size 0x4
};
// total size: 0x14
class GPodBVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int NumBlocks; // offset 0x4, size 0x4
    unsigned int MaxBlocks; // offset 0x8, size 0x4
    class TriangleType * * Blocks; // offset 0xC, size 0x4
    unsigned int BlockPtrInc; // offset 0x10, size 0x4
};
// total size: 0xC
class TriangleType {
    // Members
    unsigned int v1; // offset 0x0, size 0x4
    unsigned int v2; // offset 0x4, size 0x4
    unsigned int v3; // offset 0x8, size 0x4
};
// total size: 0x214
class GTessellator {
    // Members
    enum FillRuleType FillRule; // offset 0x0, size 0x4
    bool OptimizeDirection; // offset 0x4, size 0x1
    bool OptimizeCoherence; // offset 0x5, size 0x1
    bool OptimizeMonotones; // offset 0x6, size 0x1
    bool PilotTriangulation; // offset 0x7, size 0x1
    bool SwapCoordinates; // offset 0x8, size 0x1
    class GPodVector HistHor; // offset 0xC, size 0xC
    class GPodVector HistVer; // offset 0x18, size 0xC
    class GPodVector VisibleStyles; // offset 0x24, size 0xC
    class GPodBVector Vertices; // offset 0x30, size 0x14
    class GPodBVector Paths; // offset 0x44, size 0x14
    class GPodBVector Edges; // offset 0x58, size 0x14
    class GPodBVector MonoChains; // offset 0x6C, size 0x14
    class GPodVector MonoChainsSorted; // offset 0x80, size 0xC
    class GPodBVector Scanbeams; // offset 0x8C, size 0x14
    class GPodVector ActiveChains; // offset 0xA0, size 0xC
    class GPodVector InteriorChains; // offset 0xAC, size 0xC
    class GPodVector ValidChains; // offset 0xB8, size 0xC
    class GPodVector InteriorOrder; // offset 0xC4, size 0xC
    class GPodBVector Intersections; // offset 0xD0, size 0x14
    class GPodVector StyleCounts; // offset 0xE4, size 0xC
    unsigned int MinStyle; // offset 0xF0, size 0x4
    unsigned int MaxStyle; // offset 0xF4, size 0x4
    float MinX; // offset 0xF8, size 0x4
    float MinY; // offset 0xFC, size 0x4
    float MaxX; // offset 0x100, size 0x4
    float MaxY; // offset 0x104, size 0x4
    float EpsilonX; // offset 0x108, size 0x4
    float EpsilonY; // offset 0x10C, size 0x4
    class GPodVector SwapEdgesTable; // offset 0x110, size 0xC
    class GPodBVector EventVertices; // offset 0x11C, size 0x14
    class GPointType LastVertex; // offset 0x130, size 0x8
    class GPodVector ChainsBelow; // offset 0x138, size 0xC
    class GPodVector ChainsAbove; // offset 0x144, size 0xC
    class GPodBVector BaseLines; // offset 0x150, size 0x14
    class GPodBVector PendingEnds; // offset 0x164, size 0x14
    class GPodBVector Monotones; // offset 0x178, size 0x14
    class GPodBVector MonoVertices; // offset 0x18C, size 0x14
    class GPodBVector MonoStack; // offset 0x1A0, size 0x14
    class GPodBVector Triangles; // offset 0x1B4, size 0x14
    class GPodBVector LeftVertices; // offset 0x1C8, size 0x14
    class GPodBVector RightVertices; // offset 0x1DC, size 0x14
    class GPodBVector ConvexShape; // offset 0x1F0, size 0x14
    unsigned int TrianglesCutOff; // offset 0x204, size 0x4
    enum Coherence_e ShapeCoherence; // offset 0x208, size 0x4
    enum Coherence_e LeftCoherence; // offset 0x20C, size 0x4
    enum Coherence_e RightCoherence; // offset 0x210, size 0x4
};
enum FillRuleType {
    FillNonZero = 0,
    FillEvenOdd = 1,
};
// total size: 0xC
class GPodVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int Capacity; // offset 0x4, size 0x4
    bool * Array; // offset 0x8, size 0x4
};
// total size: 0x14
class GPodBVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int NumBlocks; // offset 0x4, size 0x4
    unsigned int MaxBlocks; // offset 0x8, size 0x4
    class GPointType * * Blocks; // offset 0xC, size 0x4
    unsigned int BlockPtrInc; // offset 0x10, size 0x4
};
// total size: 0x14
class GPodBVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int NumBlocks; // offset 0x4, size 0x4
    unsigned int MaxBlocks; // offset 0x8, size 0x4
    class PathInfoType * * Blocks; // offset 0xC, size 0x4
    unsigned int BlockPtrInc; // offset 0x10, size 0x4
};
// total size: 0x10
class PathInfoType {
    // Members
    int start; // offset 0x0, size 0x4
    int end; // offset 0x4, size 0x4
    unsigned int leftStyle; // offset 0x8, size 0x4
    unsigned int rightStyle; // offset 0xC, size 0x4
};
// total size: 0x10
class EdgeType {
    // Members
    unsigned int lower; // offset 0x0, size 0x4
    unsigned int upper; // offset 0x4, size 0x4
    float slope; // offset 0x8, size 0x4
    class EdgeType * next; // offset 0xC, size 0x4
};
// total size: 0x14
class GPodBVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int NumBlocks; // offset 0x4, size 0x4
    unsigned int MaxBlocks; // offset 0x8, size 0x4
    class MonoChainType * * Blocks; // offset 0xC, size 0x4
    unsigned int BlockPtrInc; // offset 0x10, size 0x4
};
// total size: 0x38
class MonoChainType {
    // Members
    class EdgeType * edge; // offset 0x0, size 0x4
    float ySort; // offset 0x4, size 0x4
    float xb; // offset 0x8, size 0x4
    float xt; // offset 0xC, size 0x4
    int dir; // offset 0x10, size 0x4
    unsigned int leftStyle; // offset 0x14, size 0x4
    unsigned int rightStyle; // offset 0x18, size 0x4
    unsigned int leftBelow; // offset 0x1C, size 0x4
    unsigned int leftAbove; // offset 0x20, size 0x4
    unsigned int rightBelow; // offset 0x24, size 0x4
    unsigned int rightAbove; // offset 0x28, size 0x4
    unsigned int flags; // offset 0x2C, size 0x4
    unsigned int posIntr; // offset 0x30, size 0x4
    unsigned int posScan; // offset 0x34, size 0x4
};
// total size: 0xC
class GPodVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int Capacity; // offset 0x4, size 0x4
    class MonoChainType * * Array; // offset 0x8, size 0x4
};
// total size: 0x14
class GPodBVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int NumBlocks; // offset 0x4, size 0x4
    unsigned int MaxBlocks; // offset 0x8, size 0x4
    class IntersectionType * * Blocks; // offset 0xC, size 0x4
    unsigned int BlockPtrInc; // offset 0x10, size 0x4
};
// total size: 0xC
class IntersectionType {
    // Members
    unsigned int pos1; // offset 0x0, size 0x4
    unsigned int pos2; // offset 0x4, size 0x4
    float y; // offset 0x8, size 0x4
};
// total size: 0xC
class GPodVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int Capacity; // offset 0x4, size 0x4
    int * Array; // offset 0x8, size 0x4
};
// total size: 0xC
class GPodVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int Capacity; // offset 0x4, size 0x4
    class ScanChainType * Array; // offset 0x8, size 0x4
};
// total size: 0xC
class ScanChainType {
    // Members
    class MonoChainType * chain; // offset 0x0, size 0x4
    class MonotoneType * monotone; // offset 0x4, size 0x4
    unsigned int vertex; // offset 0x8, size 0x4
};
// total size: 0x18
class MonotoneType {
    // Members
    class MonoVertexType * start; // offset 0x0, size 0x4
    unsigned int lastVertex; // offset 0x4, size 0x4
    unsigned int prevVertex1; // offset 0x8, size 0x4
    unsigned int prevVertex2; // offset 0xC, size 0x4
    unsigned int style; // offset 0x10, size 0x4
    class BaseLineType * lowerBase; // offset 0x14, size 0x4
};
// total size: 0x8
class MonoVertexType {
    // Members
    unsigned int vertex; // offset 0x0, size 0x4
    class MonoVertexType * next; // offset 0x4, size 0x4
};
// total size: 0x1C
class BaseLineType {
    // Members
    float y; // offset 0x0, size 0x4
    unsigned int styleLeft; // offset 0x4, size 0x4
    unsigned int vertexLeft; // offset 0x8, size 0x4
    unsigned int vertexRight; // offset 0xC, size 0x4
    unsigned int firstChain; // offset 0x10, size 0x4
    unsigned int numChains; // offset 0x14, size 0x4
    unsigned int leftAbove; // offset 0x18, size 0x4
};
// total size: 0x14
class GPodBVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int NumBlocks; // offset 0x4, size 0x4
    unsigned int MaxBlocks; // offset 0x8, size 0x4
    class BaseLineType * * Blocks; // offset 0xC, size 0x4
    unsigned int BlockPtrInc; // offset 0x10, size 0x4
};
// total size: 0x14
class GPodBVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int NumBlocks; // offset 0x4, size 0x4
    unsigned int MaxBlocks; // offset 0x8, size 0x4
    class PendingEndType * * Blocks; // offset 0xC, size 0x4
    unsigned int BlockPtrInc; // offset 0x10, size 0x4
};
// total size: 0x8
class PendingEndType {
    // Members
    unsigned int vertex; // offset 0x0, size 0x4
    class MonotoneType * monotone; // offset 0x4, size 0x4
};
// total size: 0x14
class GPodBVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int NumBlocks; // offset 0x4, size 0x4
    unsigned int MaxBlocks; // offset 0x8, size 0x4
    class MonotoneType * * Blocks; // offset 0xC, size 0x4
    unsigned int BlockPtrInc; // offset 0x10, size 0x4
};
// total size: 0x14
class GPodBVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int NumBlocks; // offset 0x4, size 0x4
    unsigned int MaxBlocks; // offset 0x8, size 0x4
    class MonoVertexType * * Blocks; // offset 0xC, size 0x4
    unsigned int BlockPtrInc; // offset 0x10, size 0x4
};
enum Coherence_e {
    CoherenceUndefined = 0,
    CoherencePincushion = 1,
    CoherenceConvex = 2,
    CoherenceLeftCurve = 3,
    CoherenceRightCurve = 4,
};
// total size: 0x8
class VertexXY16iC32 {
    // Members
    short x; // offset 0x0, size 0x2
    short y; // offset 0x2, size 0x2
    unsigned long Color; // offset 0x4, size 0x4
};
// total size: 0xC
class VertexXY16iCF32 {
    // Members
    short x; // offset 0x0, size 0x2
    short y; // offset 0x2, size 0x2
    unsigned long Color; // offset 0x4, size 0x4
    unsigned long Factors; // offset 0x8, size 0x4
};
// total size: 0x10
class GFxVertexArray : public GNewOverrideBase {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int AllocSize; // offset 0x4, size 0x4
    unsigned char * pData; // offset 0x8, size 0x4
    class GFxVertexDesc * pVertexDesc; // offset 0xC, size 0x4
};
// total size: 0xC
class GFxVertexDesc {
    // Members
    enum VertexFormat VFormat; // offset 0x0, size 0x4
    unsigned int VertexSize; // offset 0x4, size 0x4
    class GFxVertexInterface * pInterface; // offset 0x8, size 0x4
};
// total size: 0x4
class GFxVertexInterface {};
// total size: 0x28
class GFxMesh : public GNewOverrideBase {
    // Members
    unsigned int StyleCount; // offset 0x0, size 0x4
    unsigned int Styles[3]; // offset 0x4, size 0xC
    enum GouraudFillType FillType; // offset 0x10, size 0x4
    class garray TriangleIndices; // offset 0x14, size 0xC
    class CachedData TriangleIndicesCache; // offset 0x20, size 0x8
};
// total size: 0xC
class garray : public garray_base {};
// total size: 0xC
class garray_base {
    // Members
    unsigned short * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0xC
class garray_base {
    // Members
    class GFxMesh * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x10
class GFxEdgeAAGenerator_VertexCollector {
    // Members
    class GFxVertexArray & NewVertices; // offset 0x0, size 0x4
    class garray UsedVertices; // offset 0x4, size 0xC
};
// signature: GFxEdgeAAGenerator::GFxEdgeAAGenerator(GTessellator &, const std::garray<GFxFillStyle> *)
// Range: 0x804B01B0 -> 0x804B03A4
void * GFxEdgeAAGenerator::GFxEdgeAAGenerator(class GFxEdgeAAGenerator * this /* r28 */, class GTessellator & tess /* r29 */) {
    // Local variables
    unsigned int i; // r27
    int fillSize; // r30

    {
        // Range: 0x804B02CC -> 0x804B0378
        // Local variables
        unsigned int triangle; // r24
        unsigned int triangleCount; // r25
        int style; // r26
    }
}
// Range: 0x804B0410 -> 0x804B06C4
void * GFxEdgeAAGenerator::~GFxEdgeAAGenerator(class GFxEdgeAAGenerator * this /* r30 */) {
}
// signature: GFxEdgeAAGenerator::ProcessAndSortEdges(float, GEdgeAA::AA_Method)
// Range: 0x804B06D0 -> 0x804B0710
void GFxEdgeAAGenerator::ProcessAndSortEdges(class GFxEdgeAAGenerator * this /* r31 */) {
}
// Range: 0x804B0710 -> 0x804B0718
unsigned int GFxEdgeAAGenerator::GetVertexCount() const {
}
// signature: CalcTriangleColorWeight<GRenderer::VertexXY16iC32>(const GRenderer::VertexXY16iC32 &, const GRenderer::VertexXY16iC32 &, const GRenderer::VertexXY16iC32 &)
// Range: 0x804B0B30 -> 0x804B0C48
float CalcTriangleColorWeight<GRenderer::VertexXY16iC32>() {
    // Local variables
    float ratio; // f1
    float dxB; // f9
    float dyB; // f10
    float dxA; // f2
    float dyA; // f5
    float dotAB; // f2
    float lenBsq; // f8
}
// signature: CalcTriangleColorWeight<GRenderer::VertexXY16iCF32>(const GRenderer::VertexXY16iCF32 &, const GRenderer::VertexXY16iCF32 &, const GRenderer::VertexXY16iCF32 &)
// Range: 0x804B1110 -> 0x804B1228
float CalcTriangleColorWeight<GRenderer::VertexXY16iCF32>() {
    // Local variables
    float ratio; // f1
    float dxB; // f9
    float dyB; // f10
    float dxA; // f2
    float dyA; // f5
    float dotAB; // f2
    float lenBsq; // f8
}
// signature: UpdateTriangleColors(GRenderer::VertexXY16iC32 &, GRenderer::VertexXY16iC32 &, GRenderer::VertexXY16iC32 &, int, int, int)
// Range: 0x804B0720 -> 0x804B0B2C
void UpdateTriangleColors(class VertexXY16iC32 & v1 /* r29 */, class VertexXY16iC32 & v2 /* r30 */, class VertexXY16iC32 & v3 /* r31 */) {
    {
        // Range: 0x804B07D0 -> 0x804B08C4
        // Local variables
        float ratio; // f0
    }
    {
        // Range: 0x804B0900 -> 0x804B09FC
        // Local variables
        float ratio; // f0
    }
    {
        // Range: 0x804B0A00 -> 0x804B0B04
        // Local variables
        float ratio; // f0
    }
}
// signature: UpdateTriangleColors(GRenderer::VertexXY16iCF32 &, GRenderer::VertexXY16iCF32 &, GRenderer::VertexXY16iCF32 &, int, int, int)
// Range: 0x804B0C50 -> 0x804B110C
void UpdateTriangleColors(class VertexXY16iCF32 & v1 /* r29 */, class VertexXY16iCF32 & v2 /* r30 */, class VertexXY16iCF32 & v3 /* r31 */) {
    {
        // Range: 0x804B0CDC -> 0x804B0E14
        // Local variables
        float ratio; // f0
    }
    {
        // Range: 0x804B0E4C -> 0x804B0F8C
        // Local variables
        float ratio; // f0
    }
    {
        // Range: 0x804B0FA8 -> 0x804B10EC
        // Local variables
        float ratio; // f0
    }
}
// signature: GFxEdgeAAGenerator::UpdateEdgeAATriangleColors(GFxVertexArray *)
// Range: 0x804B1230 -> 0x804B13E4
void GFxEdgeAAGenerator::UpdateEdgeAATriangleColors(class GFxEdgeAAGenerator * this /* r29 */) {
    // Local variables
    enum VertexFormat vf; // r0
    unsigned int i; // r31

    {
        // Range: 0x804B1274 -> 0x804B131C
        // Local variables
        class VertexXY16iC32 * prawVertices; // r30
    }
    {
        // Range: 0x804B1320 -> 0x804B13C8
        // Local variables
        class VertexXY16iCF32 * prawVertices; // r30
    }
}
// Range: 0x804B13F0 -> 0x804B14B0
void GFxEdgeAAGenerator::AddTrianglesAndUpdateColors(class GFxEdgeAAGenerator * this /* r28 */, class GFxVertexArray * pvertices /* r29 */, class GFxMesh * pmesh /* r30 */) {
    // Local variables
    unsigned int i; // r31
}
// Range: 0x804B1620 -> 0x804B17E4
bool GFxEdgeAAGenerator::GenerateSolidMesh(class GFxEdgeAAGenerator * this /* r27 */, class GFxVertexArray * pvertices /* r28 */, class GFxMesh * pmesh /* r29 */, float scaleMultiplier /* f31 */) {
    // Local variables
    int fillsSize; // r31
    unsigned int i; // r30

    {
        // Range: 0x804B1670 -> 0x804B17A0
        {
            // Range: 0x804B16FC -> 0x804B17A0
            // Local variables
            int id; // r0
        }
    }
}
// Range: 0x804B17F0 -> 0x804B1A28
bool GFxEdgeAAGenerator::GenerateSolidMesh(class GFxEdgeAAGenerator * this /* r25 */, class GFxVertexArray * pvertices /* r26 */, class GFxMesh * pmesh /* r27 */, class GMatrix2D & mat /* r28 */) {
    // Local variables
    int fillsSize; // r30
    unsigned int i; // r29
    class GPoint pt; // r1+0x18

    {
        // Range: 0x804B1840 -> 0x804B19E4
        {
            // Range: 0x804B1940 -> 0x804B19E4
            // Local variables
            int id; // r0
        }
    }
}
// Range: 0x804B1A30 -> 0x804B29D4
unsigned int GFxEdgeAAGenerator::GenerateTexturedMeshes(class GFxEdgeAAGenerator * this /* r15 */, class GFxVertexArray * pvertices /* r17 */, class garray * pmeshes /* r16 */, float scaleMultiplier /* f31 */) {
    // Local variables
    class GFxEdgeAAGenerator_VertexCollector vertices; // r1+0x50
    unsigned int i; // r14
    int s1; // r20
    int s2; // r19
    int s3; // r18
    unsigned int meshCount; // r14

    {
        // Range: 0x804B1BB4 -> 0x804B1CE4
        {
            // Range: 0x804B1C40 -> 0x804B1CE4
            // Local variables
            int id; // r4
        }
    }
    {
        // Range: 0x804B1D10 -> 0x804B2994
        // Local variables
        bool haveTextures; // r0

        {
            // Range: 0x804B1D14 -> 0x804B1D14
            // Local variables
            bool sharePrimitives; // r4
            enum GouraudFillType gft; // r17
        }
        {
            // Range: 0x804B1D14 -> 0x804B2940
            // Local variables
            unsigned long v3Factor; // r25
            unsigned long v2Factor; // r29
            unsigned long v1Factor; // r24
            unsigned int iv3; // r23
            unsigned int iv2; // r22
            unsigned int iv1; // r17
        }
        {
            // Range: 0x804B2940 -> 0x804B2994
            // Local variables
            unsigned int iv2; // r5
            unsigned int iv1; // r3
        }
    }
}
