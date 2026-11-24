/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxMorphCharacter.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804F1270 -> 0x804F482C
*/
// total size: 0x10
class Edge {
    // Members
    float Cx; // offset 0x0, size 0x4
    float Cy; // offset 0x4, size 0x4
    float Ax; // offset 0x8, size 0x4
    float Ay; // offset 0xC, size 0x4
};
// total size: 0x24
class Path {
    // Members
    unsigned int Fill0; // offset 0x0, size 0x4
    unsigned int Fill1; // offset 0x4, size 0x4
    unsigned int Line; // offset 0x8, size 0x4
    float Ax; // offset 0xC, size 0x4
    float Ay; // offset 0x10, size 0x4
    class garray Edges; // offset 0x14, size 0xC
    bool NewShape; // offset 0x20, size 0x1
};
// total size: 0xC
class garray : public garray_base {};
// total size: 0xC
class garray_base {
    // Members
    class Edge * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0xA4
class GFxMorphCharacterDef : public GFxShapeCharacterDef {
    // Members
    class GFxShapeCharacterDef * pShape1; // offset 0x7C, size 0x4
    class GFxShapeCharacterDef * pShape2; // offset 0x80, size 0x4
    class garray Paths; // offset 0x84, size 0xC
    unsigned int Offset; // offset 0x90, size 0x4
    unsigned int FillStyleCount; // offset 0x94, size 0x4
    unsigned int LineStyleCount; // offset 0x98, size 0x4
    float LastRatio; // offset 0x9C, size 0x4
    class GFxMeshSet * pMesh; // offset 0xA0, size 0x4
};
// total size: 0xC
class garray_base {
    // Members
    class Path * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// Range: 0x804F1320 -> 0x804F13B4
void * GFxMorphCharacterDef::GFxMorphCharacterDef(class GFxMorphCharacterDef * this /* r31 */) {
    // References
    // -> struct {} __vt__20GFxMorphCharacterDef;
}
// Range: 0x804F1960 -> 0x804F1A0C
void * GFxMorphCharacterDef::~GFxMorphCharacterDef(class GFxMorphCharacterDef * this /* r30 */) {
    // References
    // -> struct {} __vt__20GFxMorphCharacterDef;
}
// Range: 0x804F1A10 -> 0x804F2170
void GFxMorphCharacterDef::Display(class GFxMorphCharacterDef * this /* r26 */, class GFxDisplayContext & context /* r27 */, class GFxCharacter * inst /* r28 */) {
    // Local variables
    unsigned long i; // r22
    unsigned long n; // r24
    float ratio; // f30
    class GRect NewBound; // r1+0x20
    unsigned int rest1; // r29
    unsigned int rest2; // r30
    unsigned int fill0; // r1+0x1C
    unsigned int fill1; // r1+0x18
    unsigned int line; // r1+0x14
    float ax1; // f29
    float ay1; // f28
    float ax2; // f27
    float ay2; // f26
    class PathsIterator pathIter1; // r1+0xB0
    class PathsIterator pathIter2; // r1+0x90
    class EdgesIterator edges1; // r1+0x148
    class EdgesIterator edges2; // r1+0x120
    class GMatrix2D mat; // r1+0x50
    class Cxform cx; // r1+0x30
    float maxError; // f26
    bool meshMismatch; // r7
    bool edgeAADisabled; // r5
    bool useEdgeAA; // r0

    {
        // Range: 0x804F1C94 -> 0x804F1F88
        // Local variables
        class Path & p; // r0

        {
            // Range: 0x804F1E98 -> 0x804F1EE4
            // Local variables
            unsigned long n; // r25
            unsigned long i; // r22

            {
                // Range: 0x804F1E98 -> 0x804F1EE4
                // Local variables
                class Edge edge2; // r1+0x68
                class Edge edge1; // r1+0x7C
            }
        }
    }
}
// signature: GFxMorphCharacterDef::Tesselate(GFxCompoundShapeAcceptor *, float, GFxDisplayContext &) const
// Range: 0x804F2170 -> 0x804F23F4
void GFxMorphCharacterDef::Tesselate(class GFxMorphCharacterDef * this /* r29 */, class GFxCompoundShapeAcceptor * p /* r30 */, class GFxDisplayContext & context /* r31 */) const {
    // Local variables
    class GCompoundShape cs; // r1+0x8

    {
        // Range: 0x804F2234 -> 0x804F22F0
        // Local variables
        unsigned long n; // r22
        unsigned long i; // r23
    }
}
// signature: GFxMorphCharacterDef::PointTestLocal(const GPoint<float> &, bool, const GFxPointTestCacheProvider *) const
// Range: 0x804F2400 -> 0x804F2C44
bool GFxMorphCharacterDef::PointTestLocal(class GFxMorphCharacterDef * this /* r22 */, class GPoint & pt /* r23 */, class GFxPointTestCacheProvider * pcache /* r24 */) const {
    // Local variables
    bool result; // r19
    unsigned int ishape; // r19

    {
        // Range: 0x804F2490 -> 0x804F24F4
        // Local variables
        class GPoint & lht; // r0
    }
    {
        // Range: 0x804F2508 -> 0x804F2814
        // Local variables
        class GCompoundShape cs; // r1+0x8

        {
            // Range: 0x804F258C -> 0x804F2718
            // Local variables
            unsigned int i; // r27
        }
    }
    {
        // Range: 0x804F2814 -> 0x804F2BDC
        // Local variables
        unsigned int shapeCount; // r25
        unsigned int i; // r0
    }
}
// Range: 0x804F2C50 -> 0x804F30C8
void GFxMorphCharacterDef::ReadMorphFillStyle(class GFxLoadProcess * p /* r24 */, enum GFxTagType tagType /* r25 */, class GFxFillStyle & fs1 /* r26 */, class GFxFillStyle & fs2 /* r27 */) {
    {
        // Range: 0x804F2CD8 -> 0x804F2D50
        // Local variables
        class GColor c2; // r1+0x14
        class GColor c1; // r1+0x18
    }
    {
        // Range: 0x804F2D54 -> 0x804F2FD8
        // Local variables
        bool linearRGB; // r28
        unsigned char numGradients; // r29

        {
            // Range: 0x804F2E80 -> 0x804F2E80
            // Local variables
            unsigned int j; // r23
        }
    }
    {
        // Range: 0x804F2FDC -> 0x804F30B0
        // Local variables
        int bitmapCharId; // r0
    }
}
// signature: GFxMorphCharacterDef::Read(GFxLoadProcess *, GFxTagType, bool)
// Range: 0x804F30D0 -> 0x804F45F8
void GFxMorphCharacterDef::Read(class GFxMorphCharacterDef * this /* r29 */, class GFxLoadProcess * p /* r30 */, enum GFxTagType tagType /* r31 */) {
    // Local variables
    class GRect bound1; // r1+0x40
    class GRect bound2; // r1+0x30
    class GRect rbound1; // r1+0x20
    class GRect rbound2; // r1+0x10
    unsigned int i; // r22
    unsigned int rest1; // r22
    unsigned int rest2; // r23
    class PathsIterator pathIter1; // r1+0x70
    class PathsIterator pathIter2; // r1+0x50

    {
        // Range: 0x804F331C -> 0x804F3660
        // Local variables
        class GFxFillStyle fs2; // r1+0x15C
        class GFxFillStyle fs1; // r1+0x188
    }
    {
        // Range: 0x804F370C -> 0x804F3C50
        {
            // Range: 0x804F3B78 -> 0x804F3C10
            // Local variables
            class GFxFillStyle fs2; // r1+0x104
            class GFxFillStyle fs1; // r1+0x130
        }
    }
}
