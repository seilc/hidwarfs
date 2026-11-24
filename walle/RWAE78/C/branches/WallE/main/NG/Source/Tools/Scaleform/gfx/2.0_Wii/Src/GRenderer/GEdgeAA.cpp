/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GRenderer\GEdgeAA.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x805AA260 -> 0x805ADEF0
*/
// total size: 0x8
class EdgeIdxLess {
    // Members
    class GPodBVector & Vertices; // offset 0x0, size 0x4
    class GPodBVector & Edges; // offset 0x4, size 0x4
};
// total size: 0x8
class EdgeLess {
    // Members
    class GPodBVector & Vertices; // offset 0x0, size 0x4
    class GPodBVector & Edges; // offset 0x4, size 0x4
};
enum AA_Method {
    AA_OuterEdges = 0,
    AA_AllEdges = 1,
    AA_AllTriangles = 2,
};
unsigned int VertexIdx[6]; // size: 0x18, address: 0x806E8FF8
// signature: GEdgeAA::AddVertex(const GPointType &)
// Range: 0x805AA260 -> 0x805AA37C
void GEdgeAA::AddVertex(class GEdgeAA * this /* r31 */) {
    // Local variables
    class VertexType tv; // r1+0x8
}
// signature: GEdgeAA::AddTriangle(unsigned int, unsigned int, unsigned int, unsigned int)
// Range: 0x805AA380 -> 0x805AA794
void GEdgeAA::AddTriangle(class GEdgeAA * this /* r26 */, unsigned int v1 /* r27 */, unsigned int v2 /* r28 */, unsigned int v3 /* r29 */) {
    // Local variables
    class MeshTriType tri; // r1+0x8
}
// Range: 0x805AA7A0 -> 0x805AA8DC
void GEdgeAA::buildAdjacencyTable(class GEdgeAA * this /* r31 */) {
    // Local variables
    unsigned int i; // r5
    class EdgeIdxLess edgeLess; // r1+0x10
}
// signature: GEdgeAA::buildEdgesFan(unsigned int)
// Range: 0x805AAD40 -> 0x805AB190
bool GEdgeAA::buildEdgesFan(class GEdgeAA * this /* r23 */) {
    // Local variables
    int adjStart; // r28
    int adj; // r27
    int adj1; // r0
    int adj2; // r0
    bool cyclic; // r26
    int lastEdge; // r25
    unsigned int lastIdx; // r24

    // References
    // -> unsigned int VertexIdx[6];
}
// signature: GEdgeAA::calcIntersectionPoint(float, float, unsigned int, unsigned int, float *, float *) const
// Range: 0x805AB1E0 -> 0x805AB680
void GEdgeAA::calcIntersectionPoint(float width /* f25 */, float miterLimit /* f26 */, float * x /* r30 */, float * y /* r31 */) const {
    // Local variables
    class VertexType v1; // r1+0x2C
    class VertexType v2; // r1+0x20
    class VertexType v3; // r1+0x14
    class VertexType v4; // r1+0x8
    float vx; // f0
    float vy; // f0
    float dx1; // f0
    float dy1; // f0
    float dx2; // f0
    float dy2; // f0
    float epsilon; // f27

    {
        // Range: 0x805AB488 -> 0x805AB5D4
        // Local variables
        float lim; // f1
        float dist; // f0

        {
            // Range: 0x805AB5A0 -> 0x805AB5D4
            // Local variables
            float k; // f1
        }
    }

    // References
    // -> unsigned int VertexIdx[6];
}
// signature: GEdgeAA::findAdjacentTriangle(unsigned int) const
// Range: 0x805AB680 -> 0x805AB750
int GEdgeAA::findAdjacentTriangle(class GEdgeAA * this /* r31 */) const {
    // Local variables
    class EdgeType e; // r1+0x18
    class EdgeLess edgeLess; // r1+0x10
    unsigned int pos; // r0
}
// Range: 0x805AB7F0 -> 0x805ACDE8
void GEdgeAA::ProcessEdges(class GEdgeAA * this /* r15 */, float width /* f28 */, enum AA_Method aaMethod /* r16 */) {
    // Local variables
    unsigned int i; // r25
    unsigned int j; // r26
    unsigned int k; // r0

    {
        // Range: 0x805AB88C -> 0x805AC7CC
        // Local variables
        class MeshTriType & tri; // r27

        {
            // Range: 0x805AB88C -> 0x805AC7B8
            // Local variables
            unsigned int adjVal; // r3
            float y; // r1+0x8
            float x; // r1+0xC
            bool cyclic; // r0

            {
                // Range: 0x805AB88C -> 0x805AB88C
                // Local variables
                unsigned int end; // r24
                unsigned int start; // r23
            }
            {
                // Range: 0x805AB88C -> 0x805AC590
                // Local variables
                unsigned int triVerIdx; // r28

                {
                    // Range: 0x805AC0D8 -> 0x805AC4E4
                    // Local variables
                    class VertexType v3; // r1+0x28
                    class VertexType v2; // r1+0x34
                    class VertexType v1; // r1+0x40
                }
            }
            {
                // Range: 0x805AC5C0 -> 0x805AC7B0
                // Local variables
                unsigned int i3; // r4
                unsigned int i1; // r8
                unsigned int maxIdx; // r20
                float maxDist; // f22

                {
                    // Range: 0x805AC5C8 -> 0x805AC634
                    // Local variables
                    float d; // f0
                }
            }
        }
    }
    {
        // Range: 0x805AC7DC -> 0x805ACD70
        {
            // Range: 0x805AC7DC -> 0x805ACD58
            // Local variables
            int v4; // r19
            int v3; // r18
            int v2; // r17
            int adj; // r17
        }
    }

    // References
    // -> unsigned int VertexIdx[6];
}
// Range: 0x805AD3E0 -> 0x805AD520
void GEdgeAA::SortTrianglesByStyle() {
    // Local variables
    unsigned int i; // r5
}
