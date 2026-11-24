/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xMovePoint.cpp
*/
// signature: xMovePointPriorityList::Insert(xMovePoint *, float)
// Range: 0x8006F2B0 -> 0x8006F380
void xMovePointPriorityList::Insert() {
    // Local variables
    class xMovePoint * current; // r6
    class xMovePoint * previous; // r7
    class xMovePoint * storedNext; // r8
    bool inserted; // r5
}
// Range: 0x8006F380 -> 0x8006F4A0
class Entity * Sext::xMovePointAsset::Create(class EntityHandleBase * handle /* r30 */, class xMovePointAsset * asset /* r31 */) {
    // References
    // -> struct {} __vt__10xMovePoint;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: xSceneMovePointSetup(zScene *)
// Range: 0x8006F4A0 -> 0x8006F5B8
void xSceneMovePointSetup() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x8006F5C0 -> 0x8006F894
void xMovePoint::SetupChildren(class xMovePoint * this /* r27 */) {
    // Local variables
    unsigned int numChildMovepoints; // r0

    {
        // Range: 0x8006F78C -> 0x8006F874
        // Local variables
        unsigned int i; // r28

        {
            // Range: 0x8006F78C -> 0x8006F874
            // Local variables
            class xMovePoint * child; // r0
        }
    }

    // References
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x8006F8A0 -> 0x8006FCD4
void xMovePoint::AddParent(class xMovePoint * this /* r28 */, class xMovePoint * parent /* r29 */) {
    {
        // Range: 0x8006FA98 -> 0x8006FC78
        // Local variables
        class xMovePoint * * newParents; // r0
    }
    {
        // Range: 0x8006FC78 -> 0x8006FCB8
        // Local variables
        unsigned int i; // r5
    }

    // References
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x8006FCE0 -> 0x8006FE08
void xMovePoint::SplinePreSetup() {
    // Local variables
    class xMovePoint * mptr; // r5
}
// Range: 0x8006FE10 -> 0x800701FC
void xMovePoint::SplineSetup(class xMovePoint * this /* r28 */) {
    // Local variables
    class xVec3 points[2]; // r1+0x20
    class xVec3 p1; // r1+0x14
    class xVec3 p2; // r1+0x8

    // References
    // -> static class xMemWatermark memWatermark;
}
// signature: xMovePoint::GetRandomChildren(xMovePoint **, const xMovePoint *, xVec3 *) const
// Range: 0x80070200 -> 0x80070544
float xMovePoint::GetRandomChildren() const {
    // Local variables
    class xMovePoint * previousOption; // r0
    int rnd; // r30

    {
        // Range: 0x80070344 -> 0x800703F4
        // Local variables
        unsigned int idx; // r9
    }

    // References
    // -> static unsigned int * next;
    // -> static unsigned int state[624];
    // -> static int left;
}
// signature: xMovePoint::EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80070550 -> 0x80070694
void xMovePoint::EventCB() {
    // Local variables
    class xMovePoint * m; // r29
}
// signature: xMovePoint::NetworkGetClosestXZ(const xVec3 &)
// Range: 0x800706A0 -> 0x800708B8
class xMovePoint * xMovePoint::NetworkGetClosestXZ() {
    // Local variables
    class CBNetworkClosestMP cbNetworkClosestMP; // r1+0x20
}
// signature: xMovePoint::NetworkGetFarthestXZ(const xVec3 &)
// Range: 0x800708C0 -> 0x80070AD8
class xMovePoint * xMovePoint::NetworkGetFarthestXZ() {
    // Local variables
    class CBNetworkFarthestMP cbNetworkFarthestMP; // r1+0x20
}
// signature: xMovePoint::NetworkGetRandom(bool)
// Range: 0x80070AE0 -> 0x80070FD8
class xMovePoint * xMovePoint::NetworkGetRandom() {
    // Local variables
    unsigned int networkSize; // r0

    // References
    // -> static unsigned int * next;
    // -> static unsigned int state[624];
    // -> static int left;
}
// signature: xMovePoint::NetworkGetNextOnPath_Test(const xMovePoint *, xMovePoint *&, xMovePoint *&)
// Range: 0x80070FE0 -> 0x80071304
void xMovePoint::NetworkGetNextOnPath_Test(class xMovePoint * & next /* r24 */, class xMovePoint * & next2 /* r25 */) {
    // Local variables
    class CBNetworkNextOnPathMP_Test cbNetworkNextOnPathMP; // r1+0x18
}
