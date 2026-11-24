/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GRenderer\GTessellator.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x805BDBC0 -> 0x805CC438
*/
// signature: GTessellator::monoChainLess(const GTessellator::MonoChainType *, const GTessellator::MonoChainType *)
// Range: 0x805C75C0 -> 0x805C75D8
bool GTessellator::monoChainLess() {
}
// signature: GTessellator::styleLess(const GTessellator::MonotoneType &, const GTessellator::MonotoneType &)
// Range: 0x805C8160 -> 0x805C817C
bool GTessellator::styleLess() {
}
// signature: GTessellator::activeChainLess(const GTessellator::MonoChainType *, const GTessellator::MonoChainType *)
// Range: 0x805BF340 -> 0x805BF378
bool GTessellator::activeChainLess() {
}
// signature: GTessellator::intersectionLess(const GTessellator::IntersectionType &, const GTessellator::IntersectionType &)
// Range: 0x805BF320 -> 0x805BF338
bool GTessellator::intersectionLess() {
}
// Range: 0x805BDBC0 -> 0x805BDF3C
void GTessellator::SetStyleVisibility(class GTessellator * this /* r28 */, unsigned int style /* r29 */, bool visible /* r30 */) {
    {
        // Range: 0x805BDBEC -> 0x805BDEF8
        // Local variables
        unsigned int i; // r0

        {
            // Range: 0x805BDBF4 -> 0x805BDD6C
            // Local variables
            class GPodVector t; // r1+0x8
        }
    }
}
// Range: 0x805BDF40 -> 0x805BE284
void GTessellator::buildEdgeList(class GTessellator * this /* r22 */, unsigned int start /* r23 */, unsigned int numEdges /* r24 */, int step /* r25 */, unsigned int leftStyle /* r26 */, unsigned int rightStyle /* r27 */) {
    // Local variables
    class EdgeType e; // r1+0x8
    unsigned int i; // r28
    class MonoChainType mc; // r1+0x18
}
// Range: 0x805BE290 -> 0x805BE5C0
void GTessellator::addPath(class GTessellator * this /* r25 */, class SPath & path /* r28 */, int addStyle /* r26 */) {
    // Local variables
    unsigned int i; // r27

    {
        // Range: 0x805BE2C0 -> 0x805BE4C0
        // Local variables
        class GPointType v; // r1+0x8
    }
}
// Range: 0x805BE5C0 -> 0x805BE878
void GTessellator::decomposePath(class GTessellator * this /* r28 */, class PathInfoType & path /* r29 */) {
    // Local variables
    int min; // r30
    int max; // r8
    int numEdges; // r27
}
// signature: GTessellator::perceiveStyles(const GPodVector<GTessellator::MonoChainType *> &)
// Range: 0x805BE880 -> 0x805BE9D4
void GTessellator::perceiveStyles() {
    // Local variables
    unsigned int i; // r6
    unsigned int j; // r8
    unsigned int leftAbove; // r0

    {
        // Range: 0x805BE8B8 -> 0x805BE9C0
        // Local variables
        class MonoChainType * mc; // r7
    }
}
// signature: GTessellator::calcX(const GTessellator::EdgeType *, float) const
// Range: 0x805C6080 -> 0x805C60B4
float GTessellator::calcX() const {
}
// signature: GTessellator::nextScanbeam(float, float, unsigned int, unsigned int)
// Range: 0x805BE9E0 -> 0x805BF18C
unsigned int GTessellator::nextScanbeam(class GTessellator * this /* r24 */, float yb /* f30 */, float yt /* f31 */, unsigned int numMc /* r25 */) {
    // Local variables
    unsigned int i; // r6
    unsigned int pos; // r0
    class MonoChainType * mc; // r1+0x8
    class IntersectionType in; // r1+0xC
    unsigned int retFlags; // r27
    float height; // f28

    {
        // Range: 0x805BEEA4 -> 0x805BF124
        // Local variables
        int j; // r26

        {
            // Range: 0x805BEEA4 -> 0x805BF0BC
            // Local variables
            float den; // f1
            float nom; // f2
            class MonoChainType * mc2; // r25
            class MonoChainType * mc1; // r30
        }
    }
}
// signature: GTessellator::addEventVertex(const GPointType &)
// Range: 0x805C60C0 -> 0x805C61F0
unsigned int GTessellator::addEventVertex(class GTessellator * this /* r31 */) {
}
// Range: 0x805C0150 -> 0x805C03A0
void GTessellator::growMonotone(class GTessellator * this /* r28 */, class MonotoneType * m /* r29 */, unsigned int vertex /* r30 */) {
}
// Range: 0x805BF380 -> 0x805BF760
void GTessellator::startMonotone(class GTessellator * this /* r27 */, class ScanChainType * scan /* r28 */, unsigned int vertex /* r29 */) {
}
// signature: GTessellator::addPendingEnd(GTessellator::ScanChainType *, GTessellator::ScanChainType *, float)
// Range: 0x805BF760 -> 0x805BF9DC
void GTessellator::addPendingEnd(class GTessellator * this /* r27 */, class ScanChainType * pending /* r29 */) {
    {
        // Range: 0x805BF774 -> 0x805BF9C4
        {
            // Range: 0x805BF7A4 -> 0x805BF8F4
            // Local variables
            class BaseLineType lowerBase; // r1+0x8
        }
    }
}
// Range: 0x805BF9E0 -> 0x805C0150
void GTessellator::connectPendingToLeft(class GTessellator * this /* r15 */, class ScanChainType * scan /* r16 */, unsigned int targetVertex /* r17 */) {
    // Local variables
    class BaseLineType * lowerBase; // r1+0x10
    unsigned int styleAbove; // r18
    class PendingEndType scanLeft; // r1+0x8
}
// Range: 0x805C03A0 -> 0x805C0AAC
void GTessellator::connectPendingToRight(class GTessellator * this /* r19 */, class ScanChainType * scan /* r24 */, unsigned int targetVertex /* r20 */) {
    // Local variables
    class BaseLineType * lowerBase; // r22
    unsigned int styleAbove; // r21
    class PendingEndType scanLeft; // r1+0x8
}
// Range: 0x805C0AB0 -> 0x805C12E8
void GTessellator::connectStartingToLeft(class GTessellator * this /* r20 */, class ScanChainType * scan /* r21 */, class BaseLineType * upperBase /* r1+0x8 */, unsigned int targetVertex /* r22 */) {
    // Local variables
    unsigned int styleBelow; // r23
}
// signature: GTessellator::connectStartingToRight(GTessellator::ScanChainType *, GTessellator::BaseLineType *, unsigned int)
// Range: 0x805C12F0 -> 0x805C19EC
void GTessellator::connectStartingToRight(class GTessellator * this /* r20 */, class BaseLineType * upperBase /* r1+0x8 */, unsigned int targetVertex /* r21 */) {
    // Local variables
    unsigned int styleBelow; // r22
}
// signature: GTessellator::connectStartingToPending(GTessellator::ScanChainType *, GTessellator::BaseLineType *)
// Range: 0x805C19F0 -> 0x805C2BC8
void GTessellator::connectStartingToPending(class GTessellator * this /* r19 */, class BaseLineType * upperBase /* r1+0x8 */) {
    // Local variables
    class BaseLineType * lowerBase; // r1+0x18
    unsigned int styleBetween; // r20
    class PendingEndType scanLeft; // r1+0x10
    unsigned int lowerTarget; // r15
    unsigned int stopNum; // r0

    {
        // Range: 0x805C21CC -> 0x805C2B4C
        // Local variables
        class MonotoneType * monotone; // r16
    }
}
// Range: 0x805C2BD0 -> 0x805C3234
void GTessellator::connectStarting(class GTessellator * this /* r24 */, class ScanChainType * scan /* r25 */, class BaseLineType * upperBase /* r26 */) {
    {
        // Range: 0x805C2BE4 -> 0x805C3214
        // Local variables
        unsigned int targetVertex; // r27
        unsigned int i; // r0
    }
}
// signature: GTessellator::nextChainInBundle(unsigned int, unsigned int, unsigned int) const
// Range: 0x805C3240 -> 0x805C32E0
unsigned int GTessellator::nextChainInBundle() const {
    // Local variables
    class ScanChainType * thisBelow; // r7
    class ScanChainType * thisAbove; // r8
}
// Range: 0x805C32E0 -> 0x805C5F24
void GTessellator::sweepScanbeam(class GTessellator * this /* r15 */, class GPodVector & aet /* r1+0x8 */, float yb /* f31 */) {
    // Local variables
    unsigned int i; // r10
    class MonoChainType * mc; // r11
    unsigned int below; // r21
    unsigned int above; // r22
    unsigned int prevAbove; // r17
    class ScanChainType * thisBelow; // r19
    class ScanChainType * thisAbove; // r18
    class ScanChainType * leftBelow; // r17
    class ScanChainType * leftAbove; // r16
    class BaseLineType upperBase; // r1+0x60

    {
        // Range: 0x805C3A14 -> 0x805C5608
        // Local variables
        unsigned int chainFlag; // r5
    }
}
// signature: GTessellator::processInterior(float, float, unsigned int)
// Range: 0x805C6210 -> 0x805C66B4
void GTessellator::processInterior(class GTessellator * this /* r29 */, float yb /* f28 */, float yTop /* f29 */) {
    // Local variables
    unsigned int startIn; // r31
    unsigned int endIn; // r30
    float yt; // f31

    {
        // Range: 0x805C6450 -> 0x805C664C
        // Local variables
        float yt2; // f30
    }
}
// Range: 0x805C66C0 -> 0x805C6718
void GTessellator::RemoveAll() {
}
// Range: 0x805C6720 -> 0x805C6D48
void GTessellator::optimizeDirection(class GTessellator * this /* r25 */) {
    // Local variables
    float dx; // f30
    float dy; // f28

    {
        // Range: 0x805C678C -> 0x805C6D10
        // Local variables
        unsigned int ratioVer; // r9
        unsigned int ratioHor; // r8
        float ky; // f30
        float kx; // f31
        unsigned int pathIdx; // r27
        unsigned int j; // reg65535
        unsigned int i; // r28

        {
            // Range: 0x805C6840 -> 0x805C6B5C
            {
                // Range: 0x805C6844 -> 0x805C6B4C
                // Local variables
                unsigned int i2; // r3
                unsigned int i1; // r26
            }
        }
        {
            // Range: 0x805C6C90 -> 0x805C6D10
            // Local variables
            float t; // f1
        }
    }
}
// Range: 0x805C6D50 -> 0x805C6FA4
void GTessellator::prepareChainsAndScanbeams(class GTessellator * this /* r31 */) {
    // Local variables
    float c1; // f1
    float c2; // f0
    float y1; // f2
    unsigned int i; // r7
    unsigned int j; // r8
}
// Range: 0x805C75E0 -> 0x805C7A44
void GTessellator::Monotonize(class GTessellator * this /* r28 */) {
    // Local variables
    unsigned int sb; // r30
    unsigned int mc; // r29
    float yb; // f31
    float yt; // f30

    {
        // Range: 0x805C7894 -> 0x805C79CC
        // Local variables
        unsigned int flags; // r27
        unsigned int startMc; // r4

        {
            // Range: 0x805C7960 -> 0x805C79C4
            // Local variables
            unsigned int pos; // r7
            unsigned int i; // r6

            {
                // Range: 0x805C7968 -> 0x805C79A4
                // Local variables
                class MonoChainType * mc; // r8
            }
        }
    }
    {
        // Range: 0x805C79D4 -> 0x805C7A1C
        // Local variables
        unsigned int i; // r5

        {
            // Range: 0x805C79E0 -> 0x805C79F4
            // Local variables
            float t; // f1
        }
    }
}
// Range: 0x805C7A50 -> 0x805C7B08
void GTessellator::Monotonize(class GTessellator * this /* r26 */, class GCompoundShape & shape /* r27 */, int addStyle /* r28 */) {
}
// Range: 0x805C7B10 -> 0x805C7B24
void GTessellator::SortMonotonesByStyle() {
}
// signature: GTessellator::shapeCoherent(unsigned int)
// Range: 0x805C8180 -> 0x805C86A8
bool GTessellator::shapeCoherent() {
    // Local variables
    float cp; // f0

    {
        // Range: 0x805C839C -> 0x805C8400
        // Local variables
        enum Coherence_e coherences[4]; // r1+0x8
    }
}
// signature: GTessellator::findMaxDiameter(unsigned int *, unsigned int *) const
// Range: 0x805C86B0 -> 0x805C88D4
void GTessellator::findMaxDiameter() const {
    // Local variables
    unsigned int i; // r6
    unsigned int p1; // r7
    unsigned int q1; // r8
    unsigned int nv; // r0
    float dMax; // f9

    {
        // Range: 0x805C86C8 -> 0x805C88B0
        // Local variables
        unsigned int c; // r12
        float d; // f4
        float d3; // f0
        float d2; // f0
        float d1; // f0
        unsigned int q2; // r10
        unsigned int p2; // r9
    }
}
// Range: 0x805C88E0 -> 0x805C91D0
void GTessellator::triangulateCoherentCurve(class GTessellator * this /* r27 */) {
    // Local variables
    unsigned int lastLeft; // r31
    unsigned int lastRight; // r30
    unsigned int topLeft; // r29
    unsigned int topRight; // r28

    {
        // Range: 0x805C8A04 -> 0x805C8F68
        // Local variables
        bool t2Valid; // r4
        bool t1Valid; // r0
    }
}
// Range: 0x805C91D0 -> 0x805C9B8C
void GTessellator::triangulateConvexShape(class GTessellator * this /* r29 */) {
    // Local variables
    unsigned int lastLeft; // r31
    unsigned int lastRight; // r30
    unsigned int i; // r23
    unsigned int p; // r1+0xC
    unsigned int q; // r1+0x8
    unsigned int nextLeft; // r22
    unsigned int nextRight; // r21
}
// Range: 0x805C9B90 -> 0x805CA460
void GTessellator::createCoherentNucleus(class GTessellator * this /* r26 */, unsigned int v1 /* r27 */, unsigned int v2 /* r28 */, unsigned int v3 /* r29 */) {
}
// Range: 0x805CA460 -> 0x805CA828
void GTessellator::addTriangle(class GTessellator * this /* r25 */, unsigned int v1 /* r26 */, unsigned int v2 /* r27 */, unsigned int v3 /* r28 */) {
}
// signature: GTessellator::triangulateMonotonePilot(unsigned int)
// Range: 0x805CA830 -> 0x805CBCA4
bool GTessellator::triangulateMonotonePilot(class GTessellator * this /* r27 */) {
    // Local variables
    class MonoVertexType * vertex; // r17
    bool convex; // r18
    class GPointType * vl1; // r19
    class GPointType * vl2; // r20
    class GPointType * vr1; // r21
    class GPointType * vr2; // r22
    unsigned int iLeft; // r31
    unsigned int iRight; // r30
    unsigned int p1; // r0
    unsigned int p2; // r3
    unsigned int lastQueuePoint; // r0

    {
        // Range: 0x805CADEC -> 0x805CB92C
        // Local variables
        unsigned int topStack; // r28
        unsigned int topStrip; // r29

        {
            // Range: 0x805CADEC -> 0x805CADEC
            // Local variables
            bool t2Valid; // r6
            bool t1Valid; // r0
        }
        {
            // Range: 0x805CADEC -> 0x805CB870
            // Local variables
            float cp; // f0
        }
    }
}
// signature: GTessellator::triangulateMonotoneRegular(unsigned int)
// Range: 0x805CBCB0 -> 0x805CC3DC
void GTessellator::triangulateMonotoneRegular(class GTessellator * this /* r27 */) {
    // Local variables
    class MonoVertexType * vertex; // r0
    unsigned int p1; // r6
    unsigned int p2; // r6
    unsigned int lastQueuePoint; // r28

    {
        // Range: 0x805CBE88 -> 0x805CC2B0
        // Local variables
        unsigned int topStrip; // r28

        {
            // Range: 0x805CBE88 -> 0x805CC1F0
            // Local variables
            float cp; // f0
        }
    }
}
// Range: 0x805CC3E0 -> 0x805CC438
void GTessellator::TriangulateMonotone(class GTessellator * this /* r30 */, unsigned int idx /* r31 */) {
}
