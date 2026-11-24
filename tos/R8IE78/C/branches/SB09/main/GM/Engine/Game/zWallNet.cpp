/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zWallNet.cpp
*/
// signature: WallNetEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80185DA0 -> 0x80185DB0
static void WallNetEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x80185DB0 -> 0x80185E2C
class Entity * zWallNetAsset::Create(class EntityHandleBase * handle /* r29 */, class zWallNetAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__8zWallNet;
}
// Range: 0x80185E30 -> 0x80185E90
void zWallNet::Init(class zWallNet * this /* r30 */, class zWallNetAsset * asset /* r31 */) {
}
// Range: 0x80185E90 -> 0x80185EB8
void zWallNet::Reset() {
}
// Range: 0x80185EC0 -> 0x801860E4
void zWallNet::CalcBoundingBox(class zWallNet * this /* r31 */) {
    // Local variables
    float big; // f31
    int numberOfTriangles; // r8

    {
        // Range: 0x80185F10 -> 0x801860C8
        // Local variables
        int i; // r9

        {
            // Range: 0x80185F10 -> 0x801860C8
            // Local variables
            class zWallNetTriangle * tri; // r10

            {
                // Range: 0x80185F28 -> 0x801860C8
                // Local variables
                int j; // r0
            }
        }
    }
}
// signature: zWallNet::InsideBoundingBox(const xVec3 &) const
// Range: 0x801860F0 -> 0x80186154
bool zWallNet::InsideBoundingBox() const {
}
// Range: 0x80186160 -> 0x80186304
bool zWallNet::FindClosestBoundEdgeIDXZ(class zWallNet * this /* r18 */, class xVec3 & pos /* r19 */, class xVec3 * closestPos /* r20 */, class xVec3 * edgeNormal /* r21 */, int * edgeID /* r22 */, int * triID /* r23 */) const {
    // Local variables
    int numberOfBoundEdges; // r0
    int numberOfTriangles; // r0
    class xVec3 curEdgeClosestPos; // r1+0x20
    class xVec3 curClosestPos; // r1+0x14
    float curClosestDist2; // f31
    int curClosestEdgeId; // r29
    int curClosestEdgeTriId; // r28
    int curClosestEdgeSPTIndex; // r27
    class xVec3 closestEdgeNormal; // r1+0x8

    {
        // Range: 0x801861CC -> 0x80186268
        // Local variables
        int i; // r26

        {
            // Range: 0x801861CC -> 0x80186268
            // Local variables
            class zWallNetTriangle * tri; // r25

            {
                // Range: 0x801861DC -> 0x80186268
                // Local variables
                int j; // r24

                {
                    // Range: 0x801861DC -> 0x80186268
                    // Local variables
                    float dist2; // f1
                }
            }
        }
    }
}
// Range: 0x801863F0 -> 0x801867A4
bool zWallNet::TriEdgeIntersectsSweptCircle(class zWallNet * this /* r27 */, class zWallNetTriangle * tri /* r30 */, int sptEdgeIndex /* r28 */, class zSweptCircle & swc /* r31 */) const {
    // Local variables
    class xVec2 start; // r1+0x40
    class xVec2 end; // r1+0x38
    class xVec2 dir; // r1+0x30
    class xVec2 normal; // r1+0x28
    float edgeLength; // f31
    float R; // f29
    class xVec2 circleStartToWallStart; // r1+0x20
    class xVec2 circleEndToWallStart; // r1+0x18
    float circleStartDistance; // f0
    float circleEndDistance; // f0
    class xVec2 LineSweepStart; // r1+0x10
    float s; // f0

    {
        // Range: 0x80186564 -> 0x801865E8
        // Local variables
        float circleStartAlong; // f29
    }
    {
        // Range: 0x801866C4 -> 0x80186774
        // Local variables
        float backDist2; // f1
        float backDist; // f1
        float startAlong; // f29
        float distAway; // f0
        class xVec2 toStart; // r1+0x8
    }
}
// Range: 0x801867B0 -> 0x8018682C
int zWallNet::FindTriangleIDXZ(class zWallNet * this /* r27 */, class xVec3 & pos /* r28 */) const {
    // Local variables
    int numberOfTriangles; // r30

    {
        // Range: 0x801867C8 -> 0x80186814
        // Local variables
        int i; // r29
    }
}
// Range: 0x80186830 -> 0x801868B0
int zWallNet::FindTriangleID(class zWallNet * this /* r28 */, class xVec3 & pos /* r29 */) const {
    // Local variables
    int numberOfTriangles; // r31

    {
        // Range: 0x80186860 -> 0x80186898
        // Local variables
        int i; // r30
    }
}
// Range: 0x80186BB0 -> 0x80186C74
void zWallNet::FindTriangleCenter(class zWallNet * this /* r25 */, class zWallNetTriangle * tri /* r26 */, class xVec3 & pos /* r27 */) const {
    {
        // Range: 0x80186BE0 -> 0x80186C4C
        // Local variables
        int i; // r28
    }
}
// Range: 0x80186C80 -> 0x80186D70
float zWallNet::CalcHausdorffDistance(class zWallNet * this /* r24 */, class zWallNet * wn2 /* r25 */) const {
    // Local variables
    float h2; // f31

    {
        // Range: 0x80186CB4 -> 0x80186D40
        // Local variables
        int i; // r28

        {
            // Range: 0x80186CB4 -> 0x80186D40
            // Local variables
            class xVec3 * vert1; // r27
            float shortest2; // f30

            {
                // Range: 0x80186CC8 -> 0x80186D1C
                // Local variables
                int j; // r26

                {
                    // Range: 0x80186CC8 -> 0x80186D1C
                    // Local variables
                    float dist2; // f1
                }
            }
        }
    }
}
// signature: zWallNet::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80186D70 -> 0x80186DB4
void zWallNet::HandleEvent() {
}
// signature: zWallNet::CanBeUsedBy(eWallNetUserType, xBase *)
// Range: 0x80186DC0 -> 0x80186E04
bool zWallNet::CanBeUsedBy() {
}
