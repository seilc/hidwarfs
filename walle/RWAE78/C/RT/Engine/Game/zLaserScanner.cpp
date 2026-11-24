/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zLaserScanner.cpp
*/
// signature: zLaserScannerNS::zLaserScannerLOSHitCollector::addRayHit(const hkpCdBody &, const hkpShapeRayCastCollectorOutput &)
// Range: 0x80151F30 -> 0x80151FE0
void zLaserScannerNS::zLaserScannerLOSHitCollector::addRayHit() {
    // Local variables
    class xBase * base; // r7
}
// signature: zLaserScanner::Init(xEnt *)
// Range: 0x800E6120 -> 0x800E6188
void zLaserScanner::Init(class zLaserScanner * this /* r31 */) {
    // References
    // -> class xVec3 m_Null;
}
// Range: 0x800E6190 -> 0x800E65FC
void zLaserScanner::Start(class zLaserScanner * this /* r30 */) {
    {
        // Range: 0x800E61B8 -> 0x800E65E4
        // Local variables
        float forceAgeRate; // f0
    }
}
// signature: zLaserScanner::Update(float)
// Range: 0x800E6600 -> 0x800E66B4
void zLaserScanner::Update(class zLaserScanner * this /* r31 */) {
}
// Range: 0x800E66C0 -> 0x800E6BB4
void zLaserScanner::UpdateScan(class zLaserScanner * this /* r28 */, float dt /* f30 */) {
    // Local variables
    class xVec3 pos; // r1+0x74
    class xVec3 * at; // r27
    class xVec3 * up; // r29
    class xVec3 fullFrustumNormals[6]; // r1+0x1B8
    class xVec3 fullFrustumPts[6]; // r1+0x170
    class xVec3 fullFrustumLeftCorners[4]; // r1+0x140
    class xVec3 fullFrustumRightCorners[4]; // r1+0x110
    class xVec3 down; // r1+0x68
    class xVec3 tempLeft; // r1+0x5C
    class xVec3 tempRight; // r1+0x50
    class xVec3 cur[4]; // r1+0xE0
    class xVec3 curNormal; // r1+0x44
    class xVec3 bottomBack_bottomFront; // r1+0x38
    class xVec3 bottomBack_topBack; // r1+0x2C
    class xVec3 normals[4]; // r1+0xB0
    class xVec3 pts[4]; // r1+0x80
    class xVec3 temp; // r1+0x20
    class zScene * s; // r27
    int typeIndex; // r0
    class zFloatingCollectible * target; // r27
    class zFloatingCollectible * end; // r26

    {
        // Range: 0x800E6A5C -> 0x800E6B4C
        // Local variables
        float dist; // f0
        class xVec3 test; // r1+0x8
        bool inside; // r25
        class xVec3 targetPos; // r1+0x14

        {
            // Range: 0x800E6A5C -> 0x800E6B1C
            // Local variables
            int i; // r24

            {
                // Range: 0x800E6A5C -> 0x800E6B1C
                // Local variables
                float dotted; // f0
            }
        }
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x800E6CE0 -> 0x800E71B4
void zLaserScanner::End(class zLaserScanner * this /* r27 */) {
}
// signature: zLaserScanner::LockOn(xBase *)
// Range: 0x800E71C0 -> 0x800E71D0
void zLaserScanner::LockOn() {
}
// Range: 0x800E71D0 -> 0x800E71D8
bool zLaserScanner::Collecting() {
}
// Range: 0x800E71E0 -> 0x800E71E8
bool zLaserScanner::Collected() {
}
// signature: zLaserScanner::SetScanOriginLocalOffset(const xVec3 &)
// Range: 0x800E71F0 -> 0x800E720C
void zLaserScanner::SetScanOriginLocalOffset() {
}
// signature: zLaserScanner::HasObjectWithinRange(const xMat4x3 &, float)
// Range: 0x800E7210 -> 0x800E7638
bool zLaserScanner::HasObjectWithinRange(class xMat4x3 * mat /* r29 */) {
    // Local variables
    class zScene * s; // r30
    int typeIndex; // r0
    class zFloatingCollectible * target; // r31
    class zFloatingCollectible * end; // r30
    float cosHorizontal; // f0
    float cosVertical; // f0

    {
        // Range: 0x800E72CC -> 0x800E75B8
        // Local variables
        class xVec3 localTargetDirYZ; // r1+0x8
        class xVec3 localTargetDirXZ; // r1+0x14
        class xVec3 localTargetDir; // r1+0x20
        float dist2; // f0
        class xVec3 targetDir; // r1+0x2C
        class xVec3 targetPos; // r1+0x38
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x800E7640 -> 0x800E78EC
void zLaserScanner::getScanPolygon(float sweepAngle /* f29 */, class xVec3 * pos /* r26 */, class xVec3 * cornerPts /* r27 */) {
    // Local variables
    class xVec3 * at; // r29
    class xVec3 * up; // r28
    class xVec3 bottomVec; // r1+0x14
    class xVec3 topVec; // r1+0x8
}
