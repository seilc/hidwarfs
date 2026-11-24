/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zWallNet.cpp
*/
// signature: WallNetEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8028C990 -> 0x8028C9F4
static void WallNetEventWrapper() {
}
// Range: 0x8028CA00 -> 0x8028CAF8
class Entity * zWallNetAsset::Create(class EntityHandleBase * handle /* r29 */, class zWallNetAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__8zWallNet;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: zWallNet::FindClosestBoundEdgeIDXZ(const xVec3 &, xVec3 *, xVec3 *, int *, int *) const
// Range: 0x8028CB00 -> 0x8028CDFC
bool zWallNet::FindClosestBoundEdgeIDXZ() const {
    // Local variables
    int numberOfBoundEdges; // r0
    int numberOfTriangles; // r0
    class xVec3 curEdgeClosestPos; // r1+0x38
    class xVec3 curClosestPos; // r1+0x2C
    float curClosestDist2; // f10
    int curClosestEdgeId; // r0
    int curClosestEdgeTriId; // r11
    int curClosestEdgeSPTIndex; // r12
    class xVec3 closestEdgeNormal; // r1+0x20

    {
        // Range: 0x8028CB38 -> 0x8028CC94
        // Local variables
        int i; // r31

        {
            // Range: 0x8028CB38 -> 0x8028CC94
            {
                // Range: 0x8028CB38 -> 0x8028CC88
                // Local variables
                int j; // r30

                {
                    // Range: 0x8028CB38 -> 0x8028CC88
                    // Local variables
                    float dist2; // f0
                }
            }
        }
    }
}
// signature: zWallNet::TriEdgeIntersectsSweptCircle(const zWallNetTriangle *, int, zSweptCircle &) const
// Range: 0x8028CE00 -> 0x8028D1C0
bool zWallNet::TriEdgeIntersectsSweptCircle() const {
    // Local variables
    class xVec2 start; // r1+0x40
    class xVec2 end; // r1+0x38
    class xVec2 dir; // r1+0x30
    class xVec2 normal; // r1+0x28
    float edgeLength; // f0
    float R; // f12
    class xVec2 circleStartToWallStart; // r1+0x20
    class xVec2 circleEndToWallStart; // r1+0x18
    float circleStartDistance; // f0
    float circleEndDistance; // f0
    class xVec2 LineSweepStart; // r1+0x10
    float s; // f0

    {
        // Range: 0x8028CF48 -> 0x8028CFC8
        // Local variables
        float circleStartAlong; // f0
    }
    {
        // Range: 0x8028D098 -> 0x8028D1B0
        // Local variables
        float backDist2; // f5
        float backDist; // f9
        float startAlong; // f4
        float distAway; // f0
        class xVec2 toStart; // r1+0x8
    }
}
// signature: zWallNet::FindTriangleIDXZ(const xVec3 &) const
// Range: 0x8028D1C0 -> 0x8028D3C8
int zWallNet::FindTriangleIDXZ() const {
    // Local variables
    int numberOfTriangles; // r0

    {
        // Range: 0x8028D1C4 -> 0x8028D3B0
        // Local variables
        int i; // r7
    }
}
// signature: zWallNet::FindTriangleID(const xVec3 &) const
// Range: 0x8028D3D0 -> 0x8028D8B0
int zWallNet::FindTriangleID() const {
    // Local variables
    int numberOfTriangles; // r0

    {
        // Range: 0x8028D3D4 -> 0x8028D858
        // Local variables
        int i; // r11
    }
}
// signature: zWallNet::FindTriangleCenter(const zWallNetTriangle *, xVec3 &) const
// Range: 0x8028D8B0 -> 0x8028D9E4
void zWallNet::FindTriangleCenter() const {
    {
        // Range: 0x8028D8D4 -> 0x8028D9B0
        // Local variables
        int i; // r0
    }
}
// signature: zWallNet::CalcHausdorffDistance(const zWallNet *) const
// Range: 0x8028D9F0 -> 0x8028DB00
float zWallNet::CalcHausdorffDistance() const {
    // Local variables
    float h2; // f5

    {
        // Range: 0x8028D9FC -> 0x8028DAA0
        // Local variables
        int i; // r11

        {
            // Range: 0x8028D9FC -> 0x8028DAA0
            // Local variables
            class xVec3 * vert1; // r12
            float shortest2; // f6

            {
                // Range: 0x8028DA20 -> 0x8028DA20
                // Local variables
                int j; // r0

                {
                    // Range: 0x8028DA20 -> 0x8028DA20
                    // Local variables
                    float dist2; // f0
                }
            }
        }
    }
}
// signature: zWallNet::CanBeUsedBy(eWallNetUserType, xBase *)
// Range: 0x8028DB00 -> 0x8028DB44
bool zWallNet::CanBeUsedBy() {
}
