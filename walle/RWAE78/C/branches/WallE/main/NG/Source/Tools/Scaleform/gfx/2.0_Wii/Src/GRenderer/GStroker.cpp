/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GRenderer\GStroker.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x805B1A10 -> 0x805B43C0
*/
// signature: GStrokePath::ClosePath(bool)
// Range: 0x805B1A10 -> 0x805B1EA8
void GStrokePath::ClosePath(class GStrokePath * this /* r30 */) {
    {
        // Range: 0x805B1C2C -> 0x805B1DD0
        // Local variables
        class GStrokeVertexType t; // r1+0x8
    }
}
// Range: 0x805B1EB0 -> 0x805B22F0
void GStroker::calcArc(class GStroker * this /* r28 */, class GCompoundShape & dstShape /* r29 */, float x /* f27 */, float y /* f28 */, float dx1 /* f24 */, float dy1 /* f26 */, float dx2 /* f29 */, float dy2 /* f30 */) {
    // Local variables
    float a1; // f25
    float a2; // f25
    float da; // f26
    int n; // r31
    int i; // r30
}
// signature: GStroker::calcMiter(GCompoundShape &, const GStrokeVertexType &, const GStrokeVertexType &, const GStrokeVertexType &, float, float, float, float, GStrokerTypes::LineJoinType, float, float, float)
// Range: 0x805B22F0 -> 0x805B2D98
void GStroker::calcMiter(class GStroker * this /* r26 */, class GCompoundShape & dstShape /* r27 */, class GStrokeVertexType & v1 /* r28 */, float dx1 /* f26 */, float dy1 /* f27 */, float dx2 /* f28 */, float dy2 /* f29 */, enum LineJoinType lineJoin /* r29 */, float miterLimit /* f30 */, float dbevel /* f31 */) {
    // Local variables
    float xi; // f0
    float yi; // f0
    float di; // f23
    float lim; // f22
    bool miterLimitExceeded; // r31
    bool intersectionFailed; // r30

    {
        // Range: 0x805B25A4 -> 0x805B26F0
        // Local variables
        float y2; // f6
        float x2; // f5
    }
    {
        // Range: 0x805B2B00 -> 0x805B2D08
        // Local variables
        float y2; // f17
        float x2; // f22
        float y1; // f5
        float x1; // f4
    }
}
// signature: GStroker::calcCap(GCompoundShape &, const GStrokeVertexType &, const GStrokeVertexType &, float, GStrokerTypes::LineCapType)
// Range: 0x805B2DA0 -> 0x805B33CC
void GStroker::calcCap(class GStroker * this /* r26 */, class GCompoundShape & dstShape /* r27 */, class GStrokeVertexType & v0 /* r28 */) {
    // Local variables
    float dx1; // f30
    float dy1; // f29
    float dx2; // f31
    float dy2; // f28

    {
        // Range: 0x805B3014 -> 0x805B338C
        // Local variables
        int n; // r29
        int i; // r30
        float da; // f5
        float a2; // f27
        float a1; // f27
    }
}
// signature: GStroker::calcJoin(GCompoundShape &, const GStrokeVertexType &, const GStrokeVertexType &, const GStrokeVertexType &, float, float)
// Range: 0x805B33D0 -> 0x805B3A78
void GStroker::calcJoin(class GStroker * this /* r27 */, class GCompoundShape & dstShape /* r30 */, class GStrokeVertexType & v0 /* r29 */, class GStrokeVertexType & v1 /* r31 */, class GStrokeVertexType & v2 /* r28 */) {
    // Local variables
    float dx1; // f31
    float dy1; // f30
    float dx2; // f29
    float dy2; // f28
    float epsilon; // f27

    {
        // Range: 0x805B345C -> 0x805B34F0
        // Local variables
        float minLen; // f0
    }
    {
        // Range: 0x805B34F0 -> 0x805B3A30
        // Local variables
        enum LineJoinType lineJoin; // r8
        float dbevel; // f7
        float dy; // f0
        float dx; // f2
    }
}
// Range: 0x805B3A80 -> 0x805B3EB8
void GStroker::generateEquidistant(class GStroker * this /* r28 */, class GCompoundShape & dstShape /* r29 */, bool bothSides /* r30 */) {
    // Local variables
    unsigned int i; // r31

    {
        // Range: 0x805B3BD8 -> 0x805B3C88
        // Local variables
        int j; // r31
    }
}
// Range: 0x805B3EC0 -> 0x805B43C0
void GStroker::generateEquidistant(class GStroker * this /* r21 */, class GCompoundShape & srcShape /* r22 */, int srcStyle /* r23 */, class GCompoundShape & dstShape /* r24 */, bool bothSides /* r25 */) {
    // Local variables
    unsigned int i; // r26
    unsigned int j; // r27

    {
        // Range: 0x805B3EF4 -> 0x805B4360
        // Local variables
        class SPath & srcPath; // r0

        {
            // Range: 0x805B3EF4 -> 0x805B4360
            // Local variables
            bool merge; // r27

            {
                // Range: 0x805B3EF4 -> 0x805B3EF4
                // Local variables
                class GPointType v1; // r1+0x8
            }
        }
    }
}
