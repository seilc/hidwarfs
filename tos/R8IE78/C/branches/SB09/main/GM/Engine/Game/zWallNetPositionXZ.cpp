/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zWallNetPositionXZ.cpp
*/
// Range: 0x80186E10 -> 0x80186E24
void * zWallNetPositionXZ::zWallNetPositionXZ() {
}
// Range: 0x80186E30 -> 0x80186E74
void * zWallNetPositionXZ::zWallNetPositionXZ(class zWallNetPositionXZ * this /* r30 */, class zWallNetPositionXZ & wallNetPosition /* r31 */) {
}
// Range: 0x80186E80 -> 0x80186ED0
bool zWallNetPositionXZ::SetupPosition(class zWallNetPositionXZ * this /* r29 */, class xVec3 & newPos /* r30 */, class zWallNet * wallNet /* r31 */) {
}
// Range: 0x80186ED0 -> 0x801870A8
bool zWallNetPositionXZ::UpdatePosition(class zWallNetPositionXZ * this /* r29 */, class xVec3 & newPos /* r30 */) {
    // Local variables
    int curSearchTriangle; // r31
}
// signature: zWallNetPositionXZ::SwitchWallNet(const zWallNet *)
// Range: 0x801873D0 -> 0x80187414
bool zWallNetPositionXZ::SwitchWallNet(class zWallNetPositionXZ * this /* r31 */) {
}
// Range: 0x80187420 -> 0x8018769C
bool zWallNetPositionXZ::MakeValidByMovingInside(class zWallNetPositionXZ * this /* r30 */, float moveInsideAmt /* f30 */) {
    // Local variables
    class xVec3 closestWallNetPos; // r1+0x5C
    class xVec3 slideNormal; // r1+0x50
    int closestWallNetEdge; // r1+0x10
    class xVec3 iterationPos; // r1+0x44

    {
        // Range: 0x801874CC -> 0x80187580
        // Local variables
        float slideDistance; // f1
        float dot; // f0
        int iteClosestWallNetEdge; // r1+0xC
        class xVec3 iteEdgeNormal; // r1+0x2C
        class xVec3 slideDir; // r1+0x38
    }
    {
        // Range: 0x80187580 -> 0x8018766C
        // Local variables
        float toWallDistance; // f0
        int iteClosestWallNetEdge; // r1+0x8
        class xVec3 iteEdgeNormal; // r1+0x20

        {
            // Range: 0x801875B8 -> 0x8018766C
            // Local variables
            float slideDistance; // f2
            float dot; // f0
            class xVec3 slideDir; // r1+0x14
        }
    }
}
// Range: 0x801876A0 -> 0x801876AC
void zWallNetPositionXZ::SetOutOfWallNet() {
}
// Range: 0x801876B0 -> 0x80187774
bool zWallNetPositionXZ::IsInLineOfSight(class zWallNetPositionXZ * this /* r29 */, class xVec3 & newPos /* r30 */) const {
    // Local variables
    int curSearchTriangle; // r31
}
// Range: 0x80187780 -> 0x801877A8
bool zWallNetPositionXZ::IsOnWallNet() const {
}
// Range: 0x801877B0 -> 0x80187850
bool zWallNetPositionXZ::IsRInsideXZ(class zWallNetPositionXZ * this /* r31 */, float r /* f31 */) const {
    // Local variables
    class xVec3 closestEdgeNormal; // r1+0x18
    class xVec3 closestEdgePos; // r1+0xC
    int closestEdge; // r1+0x8
    float closestEdgeDistance; // f0
}
// signature: zWallNetDestinationXZ::SetupPosition(const xVec3 &, const zWallNet *, float)
// Range: 0x80187850 -> 0x80187908
bool zWallNetDestinationXZ::SetupPosition(class zWallNetDestinationXZ * this /* r29 */, float boundRadius /* f31 */) {
    // Local variables
    bool isWantedInsideWallnet; // r0
    bool isWantedRInsideWallnet; // r0
}
// Range: 0x80187910 -> 0x801879FC
bool zWallNetDestinationXZ::UpdatePosition(class zWallNetDestinationXZ * this /* r30 */, class xVec3 & newPos /* r31 */, float boundRadius /* f31 */) {
    // Local variables
    bool isWantedInsideWallnet; // r0
    bool isWantedRInsideWallnet; // r0
}
