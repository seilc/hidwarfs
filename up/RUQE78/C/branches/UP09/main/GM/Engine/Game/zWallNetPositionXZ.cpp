/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zWallNetPositionXZ.cpp
*/
// Range: 0x8028DB50 -> 0x8028DB64
void * zWallNetPositionXZ::zWallNetPositionXZ() {
}
// signature: zWallNetPositionXZ::zWallNetPositionXZ(const zWallNetPositionXZ &)
// Range: 0x8028DB70 -> 0x8028DB9C
void * zWallNetPositionXZ::zWallNetPositionXZ() {
}
// signature: zWallNetPositionXZ::SetupPosition(const xVec3 &, const zWallNet *)
// Range: 0x8028DBB0 -> 0x8028DE00
bool zWallNetPositionXZ::SetupPosition() {
}
// Range: 0x8028DE00 -> 0x8028DF40
bool zWallNetPositionXZ::UpdatePosition(class zWallNetPositionXZ * this /* r29 */, class xVec3 & newPos /* r30 */) {
    // Local variables
    int curSearchTriangle; // r31
}
// signature: zWallNetPositionXZ::SwitchWallNet(const zWallNet *)
// Range: 0x8028E560 -> 0x8028E790
bool zWallNetPositionXZ::SwitchWallNet() {
}
// Range: 0x8028E790 -> 0x8028ECE8
bool zWallNetPositionXZ::MakeValidByMovingInside(class zWallNetPositionXZ * this /* r31 */, float moveInsideAmt /* f31 */) {
    // Local variables
    class xVec3 closestWallNetPos; // r1+0x74
    class xVec3 slideNormal; // r1+0x68
    int closestWallNetEdge; // r1+0x10
    class xVec3 iterationPos; // r1+0x5C

    {
        // Range: 0x8028EA34 -> 0x8028EB7C
        // Local variables
        float slideDistance; // f7
        float dot; // f0
        int iteClosestWallNetEdge; // r1+0xC
        class xVec3 iteEdgeNormal; // r1+0x44
        class xVec3 slideDir; // r1+0x50
    }
    {
        // Range: 0x8028EB7C -> 0x8028ECA0
        // Local variables
        float toWallDistance; // f0
        int iteClosestWallNetEdge; // r1+0x8
        class xVec3 iteEdgeNormal; // r1+0x38

        {
            // Range: 0x8028EC10 -> 0x8028ECA0
            // Local variables
            float slideDistance; // f9
            float dot; // f0
            class xVec3 slideDir; // r1+0x2C
        }
    }
}
// Range: 0x8028ECF0 -> 0x8028ECFC
void zWallNetPositionXZ::SetOutOfWallNet() {
}
// signature: zWallNetPositionXZ::IsInLineOfSight(const xVec3 &) const
// Range: 0x8028ED00 -> 0x8028F6C4
bool zWallNetPositionXZ::IsInLineOfSight() const {
    // Local variables
    int curSearchTriangle; // r11
}
// Range: 0x8028F6D0 -> 0x8028F6FC
bool zWallNetPositionXZ::IsOnWallNet() const {
}
// signature: zWallNetDestinationXZ::SetupPosition(const xVec3 &, const zWallNet *, float)
// Range: 0x8028F700 -> 0x8028FADC
bool zWallNetDestinationXZ::SetupPosition(class zWallNetDestinationXZ * this /* r31 */, float boundRadius /* f31 */) {
}
// signature: zWallNetDestinationXZ::UpdatePosition(const xVec3 &, float)
// Range: 0x8028FAE0 -> 0x8028FCCC
bool zWallNetDestinationXZ::UpdatePosition(class zWallNetDestinationXZ * this /* r30 */, float boundRadius /* f31 */) {
    // Local variables
    bool isWantedInsideWallnet; // r0
}
