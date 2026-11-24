/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zWallNetPosition.cpp
*/
// Range: 0x801D35D0 -> 0x801D35E4
void * zWallNetPosition::zWallNetPosition() {
}
// signature: zWallNetPosition::zWallNetPosition(const zWallNetPosition &)
// Range: 0x801D35F0 -> 0x801D361C
void * zWallNetPosition::zWallNetPosition() {
}
// Range: 0x801D3620 -> 0x801D3660
void * zWallNetPosition::~zWallNetPosition(class zWallNetPosition * this /* r31 */) {
}
// signature: zWallNetPosition::SetupPosition(const xVec3 &, const zWallNet *)
// Range: 0x801D3660 -> 0x801D38B0
bool zWallNetPosition::SetupPosition() {
}
// Range: 0x801D38B0 -> 0x801D39F0
bool zWallNetPosition::UpdatePosition(class zWallNetPosition * this /* r29 */, class xVec3 * newPos /* r30 */) {
    // Local variables
    int curSearchTriangle; // r31
}
// signature: zWallNetPosition::SwitchWallNet(const zWallNet *)
// Range: 0x801D4010 -> 0x801D4240
bool zWallNetPosition::SwitchWallNet() {
}
// Range: 0x801D4240 -> 0x801D47C8
bool zWallNetPosition::MakeValidByMovingInside(class zWallNetPosition * this /* r31 */, float moveInsideAmt /* f31 */) {
    // Local variables
    class xVec3 closestWallNetPos; // r1+0x68
    class xVec3 slideNormal; // r1+0x5C
    class xVec3 iterationPos; // r1+0x50

    {
        // Range: 0x801D44F4 -> 0x801D463C
        // Local variables
        float slideDistance; // f7
        float dot; // f0
        class xVec3 iteEdgeNormal; // r1+0x38
        class xVec3 slideDir; // r1+0x44
    }
    {
        // Range: 0x801D463C -> 0x801D4760
        // Local variables
        float toWallDistance; // f0
        class xVec3 iteEdgeNormal; // r1+0x2C

        {
            // Range: 0x801D46D0 -> 0x801D4760
            // Local variables
            float slideDistance; // f9
            float dot; // f0
            class xVec3 slideDir; // r1+0x20
        }
    }
}
// Range: 0x801D47D0 -> 0x801D47DC
void zWallNetPosition::SetOutOfWallNet() {
}
// Range: 0x801D47E0 -> 0x801D480C
bool zWallNetPosition::IsOnWallNet() const {
}
// signature: zWallNetDestination::SetupPosition(const xVec3 &, const zWallNet *, float)
// Range: 0x801D4810 -> 0x801D4C1C
bool zWallNetDestination::SetupPosition(class zWallNetDestination * this /* r31 */, float boundRadius /* f31 */) {
}
// signature: zWallNetDestination::UpdatePosition(const xVec3 &, float)
// Range: 0x801D4C20 -> 0x801D4E3C
bool zWallNetDestination::UpdatePosition(class zWallNetDestination * this /* r30 */, float boundRadius /* f31 */) {
    // Local variables
    bool isWantedInsideWallnet; // r0
}
// signature: zWallNetDestination::SwitchWallNet(const zWallNet *, float)
// Range: 0x801D4E40 -> 0x801D5224
bool zWallNetDestination::SwitchWallNet(class zWallNetDestination * this /* r31 */, float boundRadius /* f31 */) {
}
