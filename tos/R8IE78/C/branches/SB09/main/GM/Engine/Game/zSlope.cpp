/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zSlope.cpp
*/
// Range: 0x80169C60 -> 0x80169CA8
void zSlope::Init(class zSlope * this /* r30 */, void * inAsset /* r31 */) {
}
// Range: 0x80169CB0 -> 0x80169D14
void zSlope::Setup(class zSlope * this /* r31 */) {
}
// Range: 0x80169D20 -> 0x80169DCC
void zSlope::LoadValuesFromAsset(class zSlope * this /* r28 */) {
    {
        // Range: 0x80169D38 -> 0x80169D80
        // Local variables
        unsigned int i; // r29
    }
}
// Range: 0x80169DD0 -> 0x80169E14
void zSlope::Reset(class zSlope * this /* r31 */) {
}
// Range: 0x80169E20 -> 0x80169E9C
void zSlope::DebugReset(class zSlope * this /* r29 */) {
}
// signature: zSlope::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80169EA0 -> 0x80169F1C
void zSlope::HandleEvent() {
}
// Range: 0x80169F20 -> 0x80169FA8
class Entity * Sext::zSlopeAsset::Create(class EntityHandleBase * handle /* r29 */, class zSlopeAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__6zSlope;
}
// signature: zSlope::TimeStep(float)
// Range: 0x8016A000 -> 0x8016A110
void zSlope::TimeStep(class zSlope * this /* r30 */) {
    {
        // Range: 0x8016A01C -> 0x8016A0F0
        // Local variables
        class xVec3 currentVec; // r1+0x14

        {
            // Range: 0x8016A03C -> 0x8016A0F0
            // Local variables
            int x; // r31

            {
                // Range: 0x8016A03C -> 0x8016A0F0
                // Local variables
                class xVec3 currentXZ; // r1+0x8
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8016A110 -> 0x8016A1DC
void zSlope::ContextCheckForPresence(class zSlope * this /* r30 */, class zCommonPlayer * player /* r31 */) {
    // Local variables
    class hkVector4 pos; // r1+0x20

    // References
    // -> class zGlobals globals;
}
// signature: zSlope::inBox(const hkVector4 *)
// Range: 0x8016A1E0 -> 0x8016A21C
bool zSlope::inBox() {
    // Local variables
    class xVec3 chkPos; // r1+0x8
}
// Range: 0x8016A220 -> 0x8016A2C0
bool zSlope::inBox(class zSlope * this /* r28 */, class xVec3 * chkPos /* r29 */) {
    {
        // Range: 0x8016A25C -> 0x8016A2A8
        // Local variables
        unsigned int i; // r30
    }
}
// signature: zSlope::GetAnimPackage(ePlayerName)
// Range: 0x8016A2C0 -> 0x8016A30C
class zAnimPackage * zSlope::GetAnimPackage() {
}
// Range: 0x8016A310 -> 0x8016A580
void zSlope::MovePlayerDownSlope(class zSlope * this /* r30 */, float dt /* f30 */, class zCommonPlayer * player /* r31 */, float slowDownRatio /* f31 */) {
    // Local variables
    class xVec3 closestPoint; // r1+0x50
    float u; // f0
    class xVec3 currentDirection; // r1+0x44
    class xVec3 currentDirNorm; // r1+0x38
    class zPlayerSlide * mySlideAction; // r30
    float forwardSpeed; // f0
    float forwardAcceleration; // f0
    float desiredSpeed; // f2
    class xVec3 mySlopeVec; // r1+0x2C

    {
        // Range: 0x8016A424 -> 0x8016A4BC
        // Local variables
        float normLength; // f0
        class xVec3 floorNormal; // r1+0x20
    }

    // References
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 g_Y3;
}
// Range: 0x8016A580 -> 0x8016A5FC
float zSlope::FindClosestPoint(class xVec3 & pos /* r7 */, class xVec3 & point /* r31 */) {
}
// Range: 0x8016A600 -> 0x8016A67C
float zSlope::FindClosestAIPoint(class xVec3 & pos /* r7 */, class xVec3 & point /* r31 */) {
}
