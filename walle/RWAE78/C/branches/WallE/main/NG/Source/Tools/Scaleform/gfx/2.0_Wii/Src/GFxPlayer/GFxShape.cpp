/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxShape.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80532C90 -> 0x8053B934
*/
// total size: 0x14
class PlainEdge {
    // Members
    long Data[4]; // offset 0x0, size 0x10
    unsigned int Size; // offset 0x10, size 0x4
};
static unsigned int pathSFactorTable[4]; // size: 0x10, address: 0x806E84A0
static unsigned int pathSFactorTable[4]; // size: 0x10, address: 0x806E84B0
static unsigned long GFx_Crc32Table[256]; // size: 0x400, address: 0x806E84C0
// signature: GFxPathAllocator::GFxPathAllocator(unsigned int)
// Range: 0x80532C90 -> 0x80532CA8
void * GFxPathAllocator::GFxPathAllocator() {
}
// Range: 0x80532CB0 -> 0x80532D24
void * GFxPathAllocator::~GFxPathAllocator(class GFxPathAllocator * this /* r29 */) {
    {
        // Range: 0x80532CD8 -> 0x80532CEC
        // Local variables
        class Page * pcurPage; // r3

        {
            // Range: 0x80532CD8 -> 0x80532CEC
            // Local variables
            class Page * pnextPage; // r31
        }
    }
}
// signature: GFxPathAllocator::AllocPath(unsigned int, unsigned int, unsigned int)
// Range: 0x80532D30 -> 0x80532EBC
unsigned char * GFxPathAllocator::AllocPath(class GFxPathAllocator * this /* r29 */) {
    // Local variables
    unsigned int freeBytes; // reg65535
    unsigned int size; // r31
    unsigned int sizeForCurrentPage; // r8

    {
        // Range: 0x80532D38 -> 0x80532E10
        // Local variables
        unsigned int delta; // r12

        {
            // Range: 0x80532D78 -> 0x80532DD0
            // Local variables
            unsigned int delta2; // r12
            unsigned char * ptr; // r28
        }
    }
    {
        // Range: 0x80532E10 -> 0x80532E80
        // Local variables
        class Page * pnewPage; // r0
        unsigned int pageSize; // r30
    }
}
// Range: 0x80532EC0 -> 0x80532F00
void * GFxPathPacker::GFxPathPacker(class GFxPathPacker * this /* r31 */) {
}
// Range: 0x80532F00 -> 0x80532F38
void GFxPathPacker::Reset() {
}
// Range: 0x80532F40 -> 0x805336F4
void GFxPathPacker::Pack(class GFxPathPacker * this /* r26 */, class GFxPathAllocator * pallocator /* r27 */, class GFxPathsInfo * ppathsInfo /* r28 */) {
    // Local variables
    unsigned int fillNumBits; // r0
    unsigned char * pbuf; // r3

    {
        // Range: 0x80533224 -> 0x80533344
        // Local variables
        unsigned char mask; // r0
        unsigned char i; // r5
        short * pbuf16; // r4
        unsigned char edgesTypes; // r30
        unsigned char flags; // r4
    }
    {
        // Range: 0x80533344 -> 0x80533678
        // Local variables
        unsigned int bufIndex; // r0
        unsigned int edgesSizeFactor; // r29
        unsigned int bytesToAllocate; // r6
        unsigned int pathSizeFactor; // r31
        unsigned char flags; // r30

        {
            // Range: 0x80533468 -> 0x80533484
            // Local variables
            short * pbuf16; // r0
        }
        {
            // Range: 0x80533484 -> 0x8053349C
            // Local variables
            long * pbuf32; // r0
        }
        {
            // Range: 0x8053349C -> 0x80533590
            // Local variables
            unsigned int mask; // r10
            unsigned int i; // r9
            short * pedgeInfo; // r8
            short * pbuf16; // r7
        }
        {
            // Range: 0x80533590 -> 0x80533678
            // Local variables
            unsigned int mask; // r10
            unsigned int i; // r9
            long * pedgeInfo; // r8
            long * pbuf32; // r7
        }
    }
}
// signature: GFxPathPacker::SetMoveTo(int, int, unsigned int)
// Range: 0x80533700 -> 0x80533A08
void GFxPathPacker::SetMoveTo() {
}
// signature: GFxPathPacker::LineToAbs(int, int)
// Range: 0x80533A10 -> 0x80533F08
void GFxPathPacker::LineToAbs(class GFxPathPacker * this /* r27 */) {
}
// signature: GFxPathPacker::CurveToAbs(int, int, int, int)
// Range: 0x80533F10 -> 0x80534460
void GFxPathPacker::CurveToAbs(class GFxPathPacker * this /* r25 */) {
}
// Range: 0x80534460 -> 0x80534978
void GFxPathPacker::ClosePath(class GFxPathPacker * this /* r27 */) {
}
// signature: GFxShapeCharacterDef::GFxShapeCharacterDef(unsigned int)
// Range: 0x80534980 -> 0x80534A4C
void * GFxShapeCharacterDef::GFxShapeCharacterDef() {
    // References
    // -> struct {} __vt__20GFxShapeCharacterDef;
}
// Range: 0x80534A50 -> 0x80534C78
void * GFxShapeCharacterDef::~GFxShapeCharacterDef(class GFxShapeCharacterDef * this /* r30 */) {
    // References
    // -> struct {} __vt__20GFxShapeCharacterDef;
}
// Range: 0x80534C80 -> 0x80534D44
void GFxShapeCharacterDef::ResetCache(class GFxShapeCharacterDef * this /* r29 */) {
    {
        // Range: 0x80534C98 -> 0x80534CD0
        // Local variables
        unsigned int i; // r30
    }
}
// Range: 0x80534D50 -> 0x8053605C
void GFxShapeCharacterDef::SetToImage(class GFxShapeCharacterDef * this /* r30 */, class GFxImageResource * pimage /* r29 */, bool bilinear /* r28 */) {
    // Local variables
    int iw; // r26
    int ih; // r31
    float width; // f31
    float height; // f30
    class GFxPathPacker currentPath; // r1+0x20
}
// Range: 0x80536060 -> 0x80536300
static void GFx_ReadFillStyles(class garray * styles /* r25 */, class GFxLoadProcess * p /* r26 */, enum GFxTagType tagType /* r27 */) {
    // Local variables
    unsigned int fillStyleCount; // r29
    unsigned int baseIndex; // r28

    {
        // Range: 0x805362A8 -> 0x805362A8
        // Local variables
        unsigned int i; // r23
    }
}
// Range: 0x80536300 -> 0x80538140
void GFxShapeCharacterDef::Read(class GFxShapeCharacterDef * this /* r15 */, class GFxLoadProcess * p /* r16 */, enum GFxTagType tagType /* r17 */, bool withStyle /* r23 */) {
    // Local variables
    float sfactor; // f31
    int NumFillBits; // r1+0x5C
    int NumLineBits; // r1+0x58
    int FillBase; // r1+0x54
    int LineBase; // r1+0x50
    int moveX; // r21
    int moveY; // r20
    int numMoveBits; // r19
    class GFxPathPacker CurrentPath; // r1+0x8
    unsigned long i; // r0
    unsigned long n; // r3

    {
        // Range: 0x805366CC -> 0x80538050
        // Local variables
        int TypeFlag; // r0

        {
            // Range: 0x805366CC -> 0x805366CC
            // Local variables
            int flags; // r0

            {
                // Range: 0x805366CC -> 0x805366CC
                // Local variables
                int style; // r0
            }
            {
                // Range: 0x805366CC -> 0x805366CC
                // Local variables
                int style; // r0
            }
            {
                // Range: 0x805366CC -> 0x805366CC
                // Local variables
                int style; // r0
            }
        }
        {
            // Range: 0x805366CC -> 0x80538050
            // Local variables
            int EdgeFlag; // r0

            {
                // Range: 0x805366CC -> 0x805366CC
                // Local variables
                int ay; // r0
                int ax; // r0
                int cy; // r0
                int cx; // r0
                unsigned int numbits; // r18
            }
            {
                // Range: 0x805366CC -> 0x80538050
                // Local variables
                int dy; // r23
                int dx; // r18
                int LineFlag; // r0
                unsigned int numbits; // r28

                {
                    // Range: 0x805366CC -> 0x805366CC
                    // Local variables
                    int VertFlag; // r0
                }
            }
        }
    }
}
// Range: 0x80538220 -> 0x80538364
void GFxShapeCharacterDef::Display(class GFxShapeCharacterDef * this /* r29 */, class GFxDisplayContext & context /* r30 */, class GFxCharacter * inst /* r31 */) {
    // Local variables
    class GMatrix2D mat; // r1+0x38
    class Cxform cx; // r1+0x18
    enum BlendType blend; // r0

    {
        // Range: 0x80538258 -> 0x805382FC
        // Local variables
        class GRect tbounds; // r1+0x8
    }
}
// Range: 0x80538370 -> 0x80538820
void GFxShapeCharacterDef::Display(class GFxShapeCharacterDef * this /* r21 */, class GFxDisplayContext & context /* r22 */, class GMatrix2D & mat /* r23 */, class Cxform & cx /* r24 */, enum BlendType blend /* r25 */, bool edgeAADisabled /* r29 */, class garray & fillStyles /* r26 */, class garray & lineStyles /* r27 */) const {
    // Local variables
    float maxScale; // f0
    float screenPixelSize; // f31
    float curveError; // f30
    bool cxformHasAddAlpha; // r28
    bool useEdgeAA; // r0

    {
        // Range: 0x80538494 -> 0x8053865C
        // Local variables
        unsigned long i; // r6

        {
            // Range: 0x80538494 -> 0x8053865C
            // Local variables
            class GFxMeshSet * pcandidate; // r29
        }
    }
}
// signature: GFxShapeCharacterDef::EdgesIterator::EdgesIterator(const GFxShapeCharacterDef::PathsIterator &)
// Range: 0x80538820 -> 0x805389D0
void * GFxShapeCharacterDef::EdgesIterator::EdgesIterator() {
    // Local variables
    unsigned char flags; // r0

    {
        // Range: 0x805388A8 -> 0x805389CC
        // Local variables
        unsigned char pathSizeType; // r7
        unsigned int vertexSFactor; // r0
    }

    // References
    // -> static unsigned int pathSFactorTable[4];
}
// signature: GFxShapeCharacterDef::EdgesIterator::GetEdge(GFxShapeCharacterDef::EdgesIterator::Edge *, bool)
// Range: 0x805389D0 -> 0x80538D0C
void GFxShapeCharacterDef::EdgesIterator::GetEdge() {
    {
        // Range: 0x805389D8 -> 0x80538D04
        // Local variables
        bool curve; // r6
        long ay; // r8
        long ax; // r0
        long cy; // r10
        long cx; // r11
    }
}
// signature: GFxShapeCharacterDef::EdgesIterator::GetPlainEdge(GFxShapeCharacterDef::EdgesIterator::PlainEdge *)
// Range: 0x80538D10 -> 0x80538EB0
void GFxShapeCharacterDef::EdgesIterator::GetPlainEdge() {
    {
        // Range: 0x80538D10 -> 0x80538EAC
        // Local variables
        long * p; // r0
    }
}
// signature: GFxShapeCharacterDef::PathsIterator::PathsIterator(const GFxShapeCharacterDef *)
// Range: 0x80538EB0 -> 0x80538F08
void * GFxShapeCharacterDef::PathsIterator::PathsIterator() {
}
// signature: GFxShapeCharacterDef::PathsIterator::GetStyles(unsigned int *, unsigned int *, unsigned int *) const
// Range: 0x80538F10 -> 0x80538FA0
void GFxShapeCharacterDef::PathsIterator::GetStyles() const {
    // Local variables
    unsigned char flags; // r0

    {
        // Range: 0x80538F18 -> 0x80538F44
        // Local variables
        unsigned char * ptr; // r0
    }
    {
        // Range: 0x80538F50 -> 0x80538F78
        // Local variables
        unsigned short * ptr16; // r3
    }
    {
        // Range: 0x80538F78 -> 0x80538F9C
        // Local variables
        unsigned long * ptr32; // r3
    }
}
// signature: GFxShapeCharacterDef::PathsIterator::AdvanceBy(const GFxShapeCharacterDef::EdgesIterator &)
// Range: 0x80538FA0 -> 0x80538FDC
void GFxShapeCharacterDef::PathsIterator::AdvanceBy() {
}
// Range: 0x80538FE0 -> 0x80539040
void GFxShapeCharacterDef::PathsIterator::CheckPage() {
}
// Range: 0x80539040 -> 0x805391C0
void GFxShapeCharacterDef::PathsIterator::SkipComplex() {
    // Local variables
    unsigned long edgesCount; // r8
    unsigned long curEdgesInfo; // r7
    unsigned long curEdgesInfoMask; // r0
    unsigned char flags; // r0
    short * pvertices16; // r4
    long * pvertices32; // r5

    {
        // Range: 0x80539074 -> 0x80539128
        // Local variables
        unsigned char pathSizeType; // r12
        unsigned int vertexSFactor; // r0
    }
    {
        // Range: 0x80539140 -> 0x80539170
        // Local variables
        unsigned int i; // r0
    }
    {
        // Range: 0x80539188 -> 0x805391B8
        // Local variables
        unsigned int i; // r0
    }

    // References
    // -> static unsigned int pathSFactorTable[4];
}
// Range: 0x805391C0 -> 0x805394EC
void GFxShapeCharacterDef::MakeCompoundShape(class GFxShapeCharacterDef * this /* r28 */, class GCompoundShape * cs /* r30 */, float tolerance /* f29 */) const {
    // Local variables
    class PathsIterator it; // r1+0x38
}
// Range: 0x805394F0 -> 0x80539874
unsigned long GFxShapeCharacterDef::ComputeGeometryHash() const {
    // Local variables
    unsigned long crc; // r31
    class PathsIterator pit; // r1+0x20

    {
        // Range: 0x8053961C -> 0x80539848
        // Local variables
        unsigned int numEdges; // r1+0x8
        class EdgesIterator eit; // r1+0x40

        {
            // Range: 0x8053961C -> 0x805397C8
            // Local variables
            class PlainEdge edge; // r1+0xC
        }
    }

    // References
    // -> static unsigned long GFx_Crc32Table[256];
}
// signature: GFxShapeCharacterDef::IsEqualGeometry(const GFxShapeCharacterDef &) const
// Range: 0x80539880 -> 0x80539B2C
bool GFxShapeCharacterDef::IsEqualGeometry() const {
    // Local variables
    class PathsIterator pit1; // r1+0x50
    class PathsIterator pit2; // r1+0x30

    {
        // Range: 0x80539950 -> 0x80539B08
        // Local variables
        class PlainEdge edge2; // r1+0x8
        class PlainEdge edge1; // r1+0x1C
        class EdgesIterator eit2; // r1+0x70
        class EdgesIterator eit1; // r1+0x98
    }
}
// signature: GFxShapeCharacterDef::Tesselate(GFxCompoundShapeAcceptor *, float, GFxDisplayContext &) const
// Range: 0x80539B30 -> 0x8053A090
void GFxShapeCharacterDef::Tesselate(class GFxShapeCharacterDef * this /* r28 */, class GFxCompoundShapeAcceptor * p /* r29 */, class GFxDisplayContext & context /* r30 */) const {
    // Local variables
    class GCompoundShape cs; // r1+0x80
    class PathsIterator it; // r1+0x38
}
// Range: 0x8053A090 -> 0x8053A598
bool GFxShapeCharacterDef::PointInShape(class GFxShapeCharacterDef * this /* r28 */, class GCompoundShape & shape /* r29 */, float x /* f27 */, float y /* f28 */) const {
    // Local variables
    class GStroker stroker; // r1+0x8
    class GCompoundShape strokeShape; // r1+0x38

    {
        // Range: 0x8053A12C -> 0x8053A420
        // Local variables
        unsigned int i; // r30
    }
}
// Range: 0x8053A5A0 -> 0x8053B394
bool GFxShapeCharacterDef::PointTestLocal(class GFxShapeCharacterDef * this /* r22 */, class GPoint & pt /* r23 */, bool testShape /* r21 */, class GFxPointTestCacheProvider * pcache /* r24 */) const {
    // Local variables
    class GRect b2; // r1+0x30
    bool result; // r25
    unsigned int ishape; // r26

    {
        // Range: 0x8053A68C -> 0x8053A6FC
        // Local variables
        class GPoint & lht; // r0
    }
    {
        // Range: 0x8053A710 -> 0x8053ACDC
        // Local variables
        class PathsIterator it; // r1+0x88
        class GCompoundShape cs; // r1+0xF8
    }
    {
        // Range: 0x8053ACDC -> 0x8053B2FC
        // Local variables
        unsigned int i; // r26

        {
            // Range: 0x8053AF84 -> 0x8053B2FC
            // Local variables
            class PathsIterator it; // r1+0x68
        }
    }
}
// Range: 0x8053B3A0 -> 0x8053B3C4
class GRect GFxShapeCharacterDef::GetBoundsLocal() const {
}
// Range: 0x8053B3D0 -> 0x8053B934
void GFxShapeCharacterDef::ComputeBound(class GRect * r /* r31 */) const {
    // Local variables
    class PathsIterator it; // r1+0x20

    {
        // Range: 0x8053B480 -> 0x8053B8E4
        // Local variables
        float ay; // f26
        float ax; // f27
        class EdgesIterator edgesIt; // r1+0x40

        {
            // Range: 0x8053B484 -> 0x8053B85C
            // Local variables
            class Edge edge; // r1+0x8

            {
                // Range: 0x8053B484 -> 0x8053B7E4
                // Local variables
                float y; // f2
                float x; // f3
                float t; // f0
            }
        }
    }
}
