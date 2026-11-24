/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Physics\Havok\HavokCollectors.cpp
*/
// Range: 0x803309EC -> 0x80330A3C
void * TriggerIdentifyingPointCollector::TriggerIdentifyingPointCollector() {
    // References
    // -> struct {} __vt__32TriggerIdentifyingPointCollector;
}
// Range: 0x80330A3C -> 0x80330D84
void TriggerIdentifyingPointCollector::addCdPoint(class TriggerIdentifyingPointCollector * this /* r29 */, class hkpCdPoint & event /* r30 */) {
    // Local variables
    class hkpCollidable * rootCollidable; // r0
    class hkpWorldObject * wo; // r31
}
// Range: 0x80330D84 -> 0x803311CC
void TrianglePointCollector::addCdPoint(class TrianglePointCollector * this /* r29 */, class hkpCdPoint & event /* r30 */) {
    // Local variables
    class hkpShape * shapeB; // r31

    {
        // Range: 0x80330DFC -> 0x80330E88
        // Local variables
        class hkpTriangleShape * triShape; // r0
        class CollectedTriangle & t; // r0
    }
    {
        // Range: 0x80330E88 -> 0x803311A0
        // Local variables
        class hkVector4 edge1; // r1+0x20
        class hkVector4 edge0; // r1+0x30
        class hkVector4 calcNorm; // r1+0x40
        int i1; // r0
        int i0; // r0
        int domAxis; // r7
        float d; // f0
        class hkVector4 pt; // r1+0x50
        class hkVector4 ext; // r1+0x60
        class hkVector4 & pos; // r0
        class hkVector4 norm; // r1+0x70
        class CollectedTriangle & t; // r0

        {
            // Range: 0x80331070 -> 0x80331198
            // Local variables
            class hkVector4 swap; // r1+0x10
        }
    }
}
