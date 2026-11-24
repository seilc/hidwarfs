/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Physics\Havok\HavokCollectors.cpp
*/
// Range: 0x801EEFD0 -> 0x801EF02C
void * TriggerIdentifyingPointCollector::TriggerIdentifyingPointCollector(class TriggerIdentifyingPointCollector * this /* r31 */) {
    // References
    // -> struct {} __vt__32TriggerIdentifyingPointCollector;
}
// Range: 0x801EF030 -> 0x801EF208
void TriggerIdentifyingPointCollector::addCdPoint(class TriggerIdentifyingPointCollector * this /* r30 */, class hkpCdPoint & event /* r31 */) {
}
// Range: 0x801EF210 -> 0x801EF540
void TrianglePointCollector::addCdPoint(class TrianglePointCollector * this /* r24 */, class hkpCdPoint & event /* r27 */) {
    {
        // Range: 0x801EF284 -> 0x801EF2CC
        // Local variables
        class hkpTriangleShape * triShape; // r0
        class CollectedTriangle & t; // r0
    }
    {
        // Range: 0x801EF2CC -> 0x801EF51C
        // Local variables
        class hkVector4 edge1; // r1+0x20
        class hkVector4 edge0; // r1+0x30
        class hkVector4 calcNorm; // r1+0x40
        int domAxis; // r6
        float d; // f0
        class hkVector4 pt; // r1+0x50
        class hkVector4 ext; // r1+0x60
        class hkVector4 norm; // r1+0x70
        class CollectedTriangle & t; // r0

        {
            // Range: 0x801EF4D8 -> 0x801EF514
            // Local variables
            class hkVector4 swap; // r1+0x10
        }
    }
}
