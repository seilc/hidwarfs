/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Physics\Havok\HavokCollectors.cpp
*/
// Range: 0x80296BC0 -> 0x80296C10
void * TriggerIdentifyingPointCollector::TriggerIdentifyingPointCollector() {
    // References
    // -> struct {} __vt__32TriggerIdentifyingPointCollector;
}
// Range: 0x80296C10 -> 0x80296F58
void TriggerIdentifyingPointCollector::addCdPoint(class TriggerIdentifyingPointCollector * this /* r29 */, class hkpCdPoint * event /* r30 */) {
    // Local variables
    class hkpCollidable * rootCollidable; // r0
    class hkpWorldObject * wo; // r31
}
// Range: 0x80296F58 -> 0x80296FA8
void * NPCChargerPointCollector::NPCChargerPointCollector() {
    // References
    // -> struct {} __vt__24NPCChargerPointCollector;
}
// Range: 0x80296FA8 -> 0x8029734C
void NPCChargerPointCollector::addCdPoint(class NPCChargerPointCollector * this /* r29 */, class hkpCdPoint * event /* r30 */) {
    // Local variables
    class hkpCollidable * rootCollidable; // r0
    class hkpWorldObject * wo; // r31
}
// Range: 0x8029734C -> 0x8029739C
void * NPCEvePointCollector::NPCEvePointCollector() {
    // References
    // -> struct {} __vt__20NPCEvePointCollector;
}
// Range: 0x8029739C -> 0x80297740
void NPCEvePointCollector::addCdPoint(class NPCEvePointCollector * this /* r29 */, class hkpCdPoint * event /* r30 */) {
    // Local variables
    class hkpCollidable * rootCollidable; // r0
    class hkpWorldObject * wo; // r31
}
// Range: 0x80297740 -> 0x80297C08
void TrianglePointCollector::addCdPoint(class TrianglePointCollector * this /* r29 */, class hkpCdPoint * event /* r30 */) {
    // Local variables
    class hkpShape * shapeB; // r31

    {
        // Range: 0x802977BC -> 0x80297848
        // Local variables
        class hkpTriangleShape * triShape; // r0
        class CollectedTriangle * t; // r0
    }
    {
        // Range: 0x80297848 -> 0x80297BD0
        // Local variables
        class hkVector4 edge1; // r1+0x20
        class hkVector4 edge0; // r1+0x30
        class hkVector4 calcNorm; // r1+0x40
        int i1; // r0
        int i0; // r0
        int domAxis; // r8
        float d; // f0
        class hkVector4 pt; // r1+0x50
        class hkVector4 ext; // r1+0x60
        class hkVector4 * pos; // r0
        class hkVector4 norm; // r1+0x70
        class CollectedTriangle * t; // r0

        {
            // Range: 0x80297B64 -> 0x80297BC8
            // Local variables
            class hkVector4 swap; // r1+0x10
        }
    }
}
