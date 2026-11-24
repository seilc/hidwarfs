/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxMesh.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804EBE80 -> 0x804F1264
*/
// total size: 0xC
class garray : public garray_base {};
// total size: 0xC
class garray_base {
    // Members
    short * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x54
class GFxCachedStroke : public GNewOverrideBase {
    // Members
    int Style; // offset 0x0, size 0x4
    class garray Coords; // offset 0x4, size 0xC
    class CachedData CoordsCache; // offset 0x10, size 0x8
    class garray CoordCounts; // offset 0x18, size 0xC
    class GFxMesh * pCachedMesh; // offset 0x24, size 0x4
    float CachedWidth; // offset 0x28, size 0x4
    bool EdgeAADisabled; // offset 0x2C, size 0x1
    bool EdgeAA; // offset 0x2D, size 0x1
    bool AllowCxformAddAlpha; // offset 0x2E, size 0x1
    bool UsedStrokerAA; // offset 0x2F, size 0x1
    bool CachedScaleFlag; // offset 0x30, size 0x1
    float CachedStrokeMatrixSx; // offset 0x34, size 0x4
    float CachedStrokeMatrixSy; // offset 0x38, size 0x4
    class GFxVertexArray Vertices; // offset 0x3C, size 0x10
    class CachedData VerticesCache; // offset 0x4C, size 0x8
};
// total size: 0x7C
class GStrokerAA : public GStrokerTypes {
    // Members
    enum LineJoinType LineJoin; // offset 0x0, size 0x4
    enum LineCapType StartLineCap; // offset 0x4, size 0x4
    enum LineCapType EndLineCap; // offset 0x8, size 0x4
    float MiterLimit; // offset 0xC, size 0x4
    int StyleLeft; // offset 0x10, size 0x4
    int StyleRight; // offset 0x14, size 0x4
    float WidthLeft; // offset 0x18, size 0x4
    float WidthRight; // offset 0x1C, size 0x4
    float AaWidthLeft; // offset 0x20, size 0x4
    float AaWidthRight; // offset 0x24, size 0x4
    float Tolerance; // offset 0x28, size 0x4
    class GStrokePath Path; // offset 0x2C, size 0x18
    class GPodBVector Vertices; // offset 0x44, size 0x14
    class GPodBVector Triangles; // offset 0x58, size 0x14
    unsigned int SolidL; // offset 0x6C, size 0x4
    unsigned int SolidR; // offset 0x70, size 0x4
    unsigned int TotalL; // offset 0x74, size 0x4
    unsigned int TotalR; // offset 0x78, size 0x4
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
// total size: 0x58
class GFxMeshSet : public GFxCompoundShapeAcceptor, public GNewOverrideBase {
    // Members
    float ScreenPixelSize; // offset 0x4, size 0x4
    float PixelCurveError; // offset 0x8, size 0x4
    float ScaleMultiplier; // offset 0xC, size 0x4
    float ScaleMultiplierInv; // offset 0x10, size 0x4
    bool EdgeAADisabled; // offset 0x14, size 0x1
    bool EdgeAA; // offset 0x15, size 0x1
    bool EdgeAAFailed; // offset 0x16, size 0x1
    bool AllowCxformAddAlpha; // offset 0x17, size 0x1
    bool OptimizeTriangles; // offset 0x18, size 0x1
    class garray Meshes; // offset 0x1C, size 0xC
    class garray Strokes; // offset 0x28, size 0xC
    class GFxVertexArray Vertices; // offset 0x34, size 0x10
    class CachedData VerticesCache; // offset 0x44, size 0x8
    class garray Shapes; // offset 0x4C, size 0xC
};
// total size: 0x4
class GFxCompoundShapeAcceptor {};
// total size: 0xC
class garray_base {
    // Members
    class GFxCachedStroke * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0xC
class garray_base {
    // Members
    class MeshSubShape * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x10
class MeshSubShape {
    // Members
    unsigned int MeshCount; // offset 0x0, size 0x4
    unsigned int StrokeCount; // offset 0x4, size 0x4
    unsigned int VertexStartIndex; // offset 0x8, size 0x4
    unsigned int VertexCount; // offset 0xC, size 0x4
};
struct {} __vt__10GFxMeshSet; // size: 0x14, address: 0x80738B20
// Range: 0x804EBE80 -> 0x804EBEB4
void * GFxMesh::GFxMesh() {
}
// signature: GFxMesh::AddTriangles(unsigned int, const GTessellator &)
// Range: 0x804EBEC0 -> 0x804EC138
void GFxMesh::AddTriangles(class GFxMesh * this /* r28 */, class GTessellator & sourceTess /* r29 */) {
    // Local variables
    unsigned int index; // r0
    unsigned int triangle; // r9
}
// signature: GFxMesh::SetEdgeAAStyles(unsigned int, unsigned int, unsigned int, unsigned int)
// Range: 0x804EC140 -> 0x804EC154
void GFxMesh::SetEdgeAAStyles() {
}
// signature: GFxMesh::SetGouraudFillType(GRenderer::GouraudFillType)
// Range: 0x804EC160 -> 0x804EC168
void GFxMesh::SetGouraudFillType() {
}
// signature: GFxMesh::Display(const GFxDisplayContext &, const GFxFillStyle *, unsigned int, unsigned int, unsigned int, float, bool)
// Range: 0x804EC170 -> 0x804EC320
void GFxMesh::Display(class GFxMesh * this /* r29 */, class GFxDisplayContext & dc /* r22 */, class GFxFillStyle * pfills /* r23 */, unsigned int fillsSize /* r24 */, unsigned int vertexStartIndex /* r30 */, unsigned int vertexCount /* r31 */, float scaleMultiplier /* f31 */) {
    {
        // Range: 0x804EC188 -> 0x804EC304
        // Local variables
        class CacheProvider cp; // r1+0x8

        {
            // Range: 0x804EC1B8 -> 0x804EC278
            // Local variables
            class FillTexture * pft[3]; // r1+0x10
            class FillTexture ft[3]; // r1+0x1C

            {
                // Range: 0x804EC1D8 -> 0x804EC254
                // Local variables
                unsigned int styleIndex; // r24
            }
        }
    }
}
// Range: 0x804EC320 -> 0x804EC3C4
void * GFxCachedStroke::GFxCachedStroke(class GFxCachedStroke * this /* r30 */) {
}
// Range: 0x804EC3D0 -> 0x804EC598
void * GFxCachedStroke::~GFxCachedStroke(class GFxCachedStroke * this /* r30 */) {
}
// signature: GFxCachedStroke::AddShapePathVertices(const GCompoundShape &, unsigned int, float)
// Range: 0x804EC5A0 -> 0x804ECA08
void GFxCachedStroke::AddShapePathVertices(class GFxCachedStroke * this /* r27 */, float scaleMultiplier /* f31 */) {
    // Local variables
    unsigned int startIndex; // r28
    unsigned int j; // r3
}
// signature: GFxCachedStroke::Display(GFxDisplayContext &, const GFxLineStyle &, const GMatrix2D &, float, float, bool, bool)
// Range: 0x804ECA10 -> 0x804EE9BC
void GFxCachedStroke::Display(class GFxCachedStroke * this /* r21 */, class GFxDisplayContext & context /* r22 */, class GFxLineStyle & style /* r23 */, class GMatrix2D & mat /* r18 */, float scaleMultiplier /* f25 */, float errorTolerance /* f26 */, bool cxformAddAlpha /* r24 */) {
    // Local variables
    float strokeScaleFactor; // f31
    float resultScaleFactor; // f30
    float width; // f29
    bool matrixPreMultiply; // r30
    bool useCachedStroke; // r16
    float sx; // f28
    float sy; // f27
    float rot; // f30
    float rotf; // f31
    float screenSpaceWidth; // f2
    bool useStrokerAA; // r29
    bool useEdgeAA; // r17
    unsigned int j; // r17
    unsigned int index; // r18
    class CacheProvider cp; // r1+0x48

    {
        // Range: 0x804ECBD4 -> 0x804ECC48
        // Local variables
        float sy2; // f0
        float sx2; // f30
    }
    {
        // Range: 0x804ECC4C -> 0x804ECCC0
        // Local variables
        float sy2; // f0
        float sx2; // f30
    }
    {
        // Range: 0x804ECD7C -> 0x804ECDFC
        // Local variables
        float scaleTolerance; // f2
    }
    {
        // Range: 0x804ECF20 -> 0x804EE754
        // Local variables
        class GPoint pt; // r1+0x58
        unsigned int index; // r25
        unsigned int c; // r26
        unsigned int j; // r27
        unsigned int i; // r16
        class GCompoundShape lineShape; // r1+0x1F8
        bool needEdgeAA; // r28
        class GMatrix2D mInv; // r1+0x70
        class GMatrix2D m; // r1+0x88

        {
            // Range: 0x804ED324 -> 0x804ED960
            // Local variables
            class GStrokerAA strokerAA; // r1+0x178

            {
                // Range: 0x804ED470 -> 0x804ED4CC
                // Local variables
                float aaWidth; // f2
            }
            {
                // Range: 0x804ED500 -> 0x804ED77C
                // Local variables
                class GColor nc; // r1+0x10
                class GColor c; // r1+0x14
                unsigned long outsideFactor; // r19
                unsigned long fillFactor; // r18
                unsigned long outsideColor; // r16
            }
        }
        {
            // Range: 0x804ED960 -> 0x804EE4E0
            // Local variables
            float strokeWidth; // f2
            float edgeAAWidth; // f31
            class GCompoundShape strokeShape; // r1+0x128
            class GStroker stroker; // r1+0xF8
            class GTessellator strokeTess; // r1+0x2D8

            {
                // Range: 0x804EDE3C -> 0x804EE2B0
                // Local variables
                class GFxEdgeAAGenerator aaGen; // r1+0x248
                class garray strokeFillStyles; // r1+0x60

                {
                    // Range: 0x804EDE6C -> 0x804EE184
                    // Local variables
                    class GFxFillStyle strokeFillStyle; // r1+0xCC
                }
                {
                    // Range: 0x804EE1C8 -> 0x804EE2B0
                    // Local variables
                    bool edgeGenSuccess; // r0
                }
            }
        }
    }
    {
        // Range: 0x804EE828 -> 0x804EE8B4
        // Local variables
        float multiplier; // f1
        unsigned int fillsSize; // r6
        class GFxFillStyle * pfill; // r5
        class GFxFillStyle strokeFillStyle; // r1+0xA0
        class CacheProvider cp; // r1+0x50
    }
}
// signature: GFxCachedStroke::BoundCheckPoint(GPoint<float> *, float, float)
// Range: 0x804EF5B0 -> 0x804EF60C
void GFxCachedStroke::BoundCheckPoint() {
}
// Range: 0x804EF610 -> 0x804EF6F8
void * GFxMeshSet::GFxMeshSet(class GFxMeshSet * this /* r28 */, float screenPixelSize /* f30 */, float curveError /* f31 */, bool aaDisabled /* r29 */, bool optTriangles /* r30 */) {
    // References
    // -> struct {} __vt__10GFxMeshSet;
}
// Range: 0x804EFE40 -> 0x804F01A8
void GFxMeshSet::Display(class GFxMeshSet * this /* r16 */, class GFxDisplayContext & context /* r17 */, class GMatrix2D & mat /* r18 */, class Cxform & cx /* r22 */, enum BlendType blend /* r21 */, class garray & fills /* r19 */, class garray & lineStyles /* r20 */) {
    // Local variables
    class GRenderer * prenderer; // r26
    class GMatrix2D m; // r1+0x40
    bool canBlend; // r25
    unsigned int ishape; // r24
    unsigned int imesh; // r23
    unsigned int istrip; // r22
    bool needMeshData; // r27
    float strokeOffset; // f31

    {
        // Range: 0x804EFF28 -> 0x804F0130
        // Local variables
        unsigned int i; // r21

        {
            // Range: 0x804EFF44 -> 0x804EFFF8
            // Local variables
            class CacheProvider cp; // r1+0x8
        }
        {
            // Range: 0x804F0064 -> 0x804F0130
            // Local variables
            class GMatrix2D strokeMat; // r1+0x28
        }
    }
}
// signature: GFxMeshSet::SetShapeBounds(const GRect<float> &, float)
// Range: 0x804F01B0 -> 0x804F02B8
void GFxMeshSet::SetShapeBounds() {
    // Local variables
    float maxf; // f1

    {
        // Range: 0x804F025C -> 0x804F02A4
        // Local variables
        float edgeAAAdjust; // f0
    }
}
// Range: 0x804F02C0 -> 0x804F1138
void GFxMeshSet::AddTesselatedShape(class GFxMeshSet * this /* r30 */, class GCompoundShape & shape /* r31 */, class garray & fills /* r19 */, class GFxDisplayContext & context /* r20 */) {
    // Local variables
    unsigned int i; // r0
    unsigned int j; // r27
    class GTessellator tess; // r1+0xB8
    bool useEdgeAA; // r21
    class garray pathsMatched; // r1+0x8

    {
        // Range: 0x804F06A4 -> 0x804F08CC
        // Local variables
        unsigned int meshCount; // r26
        class GFxVertexArray newVertices; // r1+0x18
        class GFxEdgeAAGenerator aaGen; // r1+0x28

        {
            // Range: 0x804F06E8 -> 0x804F08C0
            // Local variables
            unsigned int count; // r6

            {
                // Range: 0x804F0718 -> 0x804F078C
                // Local variables
                enum VertexFormat vf; // r4

                {
                    // Range: 0x804F0750 -> 0x804F0774
                    // Local variables
                    unsigned int i; // r0
                }
            }
        }
    }
    {
        // Range: 0x804F0B08 -> 0x804F0BB4
        // Local variables
        int style; // r19
    }
}
