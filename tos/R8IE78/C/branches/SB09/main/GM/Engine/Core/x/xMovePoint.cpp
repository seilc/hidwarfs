/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xMovePoint.cpp
*/
// Range: 0x8003B080 -> 0x8003B0B0
class xMovePoint * xMovePointLifo::Pop() {
}
// signature: xMovePointPriorityList::Insert(xMovePoint *, float)
// Range: 0x8003B0B0 -> 0x8003B180
void xMovePointPriorityList::Insert() {
    // Local variables
    class xMovePoint * current; // r6
    class xMovePoint * previous; // r7
    class xMovePoint * storedNext; // r8
    bool inserted; // r5
}
// Range: 0x8003B180 -> 0x8003B1FC
class Entity * Sext::xMovePointAsset::Create(class EntityHandleBase * handle /* r29 */, class xMovePointAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__10xMovePoint;
}
// Range: 0x8003B200 -> 0x8003B280
void xMovePoint::Init(class xMovePoint * this /* r30 */, class xMovePointAsset * asset /* r31 */) {
}
// signature: xSceneMovePointSetup(zScene *)
// Range: 0x8003B280 -> 0x8003B364
void xSceneMovePointSetup() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x8003B370 -> 0x8003B488
void xMovePoint::SetupChildren(class xMovePoint * this /* r28 */) {
    // Local variables
    unsigned int numChildMovepoints; // r0

    {
        // Range: 0x8003B3D0 -> 0x8003B474
        // Local variables
        unsigned int i; // r29

        {
            // Range: 0x8003B3D0 -> 0x8003B474
            // Local variables
            class xMovePoint * child; // r26
        }
    }

    // References
    // -> static class xMemWatermark memWatermark;
}
// signature: xMovePoint::IsAlreadyParent(const unsigned long long &) const
// Range: 0x8003B490 -> 0x8003B4F8
bool xMovePoint::IsAlreadyParent() const {
    {
        // Range: 0x8003B4A8 -> 0x8003B4F0
        // Local variables
        unsigned int idx; // r0
    }
}
// Range: 0x8003B500 -> 0x8003B560
void xMovePoint::SetupParents(class xMovePoint * this /* r29 */) {
    {
        // Range: 0x8003B514 -> 0x8003B54C
        // Local variables
        unsigned int i; // r30
    }
}
// Range: 0x8003B560 -> 0x8003B69C
void xMovePoint::AddParent(class xMovePoint * this /* r30 */, class xMovePoint * parent /* r31 */) {
    {
        // Range: 0x8003B5E4 -> 0x8003B650
        // Local variables
        class xMovePoint * * newParents; // r0
    }
    {
        // Range: 0x8003B650 -> 0x8003B688
        // Local variables
        unsigned int i; // r0
    }

    // References
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x8003B6A0 -> 0x8003B7C4
void xMovePoint::SplinePreSetup() {
    // Local variables
    class xMovePoint * mptr; // r5
}
// Range: 0x8003B7D0 -> 0x8003B948
void xMovePoint::SplineSetup(class xMovePoint * this /* r31 */) {
    // Local variables
    class xVec3 points[2]; // r1+0x20
    class xVec3 p1; // r1+0x14
    class xVec3 p2; // r1+0x8
}
// Range: 0x8003B950 -> 0x8003B9B4
void xMovePoint::DebugReset(class xMovePoint * this /* r31 */) {
}
// Range: 0x8003B9C0 -> 0x8003B9E4
void xMovePoint::Reset() {
}
// signature: xMovePoint::Load(xSerial *)
// Range: 0x8003B9F0 -> 0x8003B9F4
void xMovePoint::Load() {
}
// Range: 0x8003BA00 -> 0x8003BC40
float xMovePoint::GetRandomChildren(class xMovePoint * this /* r27 */, class xMovePoint * * next /* r28 */, class xMovePoint * exclude /* r29 */, class xVec3 * hdng /* r30 */) const {
    // Local variables
    class xMovePoint * previousOption; // r31
    int rnd; // r9

    {
        // Range: 0x8003BA70 -> 0x8003BB00
        // Local variables
        unsigned int idx; // r10
    }
}
// signature: xMovePoint::EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8003BC40 -> 0x8003BC9C
void xMovePoint::EventCB() {
    // Local variables
    class xMovePoint * m; // r4
}
// Range: 0x8003BCA0 -> 0x8003BCEC
class xMovePoint * xMovePoint::GetNextNotVisitedChild() {
    // Local variables
    int numberOfChildren; // r0

    {
        // Range: 0x8003BCA4 -> 0x8003BCE4
        // Local variables
        int i; // r0
    }
}
// Range: 0x8003BCF0 -> 0x8003BE30
int xMovePoint::NetworkGetNumberOfMPs() {
}
// signature: CBNetworkFiller::operator()(xMovePoint *)
// Range: 0x8003BFA0 -> 0x8003BFD4
bool CBNetworkFiller::operator()() {
}
// signature: xMovePoint::NetworkFillMovepoints(xMovePoint **, int)
// Range: 0x8003BE30 -> 0x8003BF9C
int xMovePoint::NetworkFillMovepoints(class xMovePoint * this /* r28 */) {
    // Local variables
    class CBNetworkFiller cbFiller; // r1+0x10
}
// Range: 0x8003C160 -> 0x8003C1B8
bool CBNetworkClosestMP::operator()(class CBNetworkClosestMP * this /* r30 */, class xMovePoint * mp /* r31 */) {
    // Local variables
    float curMPDist2; // f0
}
// signature: xMovePoint::NetworkGetClosestXZ(const xVec3 &)
// Range: 0x8003BFE0 -> 0x8003C154
class xMovePoint * xMovePoint::NetworkGetClosestXZ(class xMovePoint * this /* r28 */) {
    // Local variables
    class CBNetworkClosestMP cbNetworkClosestMP; // r1+0x10
}
// Range: 0x8003C390 -> 0x8003C3E8
bool CBNetworkFarthestMP::operator()(class CBNetworkFarthestMP * this /* r30 */, class xMovePoint * mp /* r31 */) {
    // Local variables
    float curMPDist2; // f0
}
// signature: xMovePoint::NetworkGetFarthestXZ(const xVec3 &)
// Range: 0x8003C220 -> 0x8003C390
class xMovePoint * xMovePoint::NetworkGetFarthestXZ(class xMovePoint * this /* r28 */) {
    // Local variables
    class CBNetworkFarthestMP cbNetworkFarthestMP; // r1+0x10
}
// signature: CBNetworkIndexedMP::operator()(xMovePoint *)
// Range: 0x8003C5B0 -> 0x8003C5DC
bool CBNetworkIndexedMP::operator()() {
}
// Range: 0x8003C3F0 -> 0x8003C5A8
class xMovePoint * xMovePoint::NetworkGetRandom(class xMovePoint * this /* r31 */, bool excludeThis /* r28 */) {
    // Local variables
    unsigned int networkSize; // r0
    class CBNetworkIndexedMP cbNetworkIndexedMP; // r1+0x10
}
// Range: 0x8003C5E0 -> 0x8003C7C8
void xMovePoint::NetworkGetNextOnPath_Null(class xMovePoint * this /* r27 */, class xMovePoint * destination /* r28 */, class xMovePoint * & next /* r29 */) {
}
// Range: 0x8003C7D0 -> 0x8003C970
class xMovePoint * xMovePoint::NetworkGetNextOnPath(class xMovePoint * this /* r29 */, class xMovePoint * destination /* r30 */) {
}
