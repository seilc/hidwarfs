/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zSlope.cpp
*/
// Range: 0x80250AC0 -> 0x80250B10
void zSlope::Init(class zSlope * this /* r30 */, void * inAsset /* r31 */) {
}
// Range: 0x80250B10 -> 0x80250B74
void zSlope::Setup(class zSlope * this /* r31 */) {
}
// Range: 0x80250B80 -> 0x80250CB8
void zSlope::LoadValuesFromAsset(class zSlope * this /* r31 */) {
    {
        // Range: 0x80250BF0 -> 0x80250C30
        // Local variables
        unsigned int i; // r28
    }
}
// Range: 0x80250CC0 -> 0x80250CFC
void zSlope::Reset(class zSlope * this /* r31 */) {
}
// signature: zSlope::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80250D00 -> 0x80250E08
void zSlope::HandleEvent(class zSlope * this /* r29 */) {
}
// Range: 0x80250E10 -> 0x80250EEC
class Entity * Sext::zSlopeAsset::Create(class EntityHandleBase * handle /* r29 */, class zSlopeAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__6zSlope;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: zSlope::Update(float)
// Range: 0x80250EF0 -> 0x80250EF4
void zSlope::Update() {
}
// Range: 0x80250F00 -> 0x80250F04
void zSlope::SceneExit() {
}
// signature: zSlope::TimeStep(float)
// Range: 0x80250F10 -> 0x80251090
void zSlope::TimeStep(class zSlope * this /* r29 */) {
    {
        // Range: 0x80250F2C -> 0x80251070
        // Local variables
        class xVec3 currentVec; // r1+0x14

        {
            // Range: 0x80250F40 -> 0x8025105C
            // Local variables
            int x; // r30

            {
                // Range: 0x80250F68 -> 0x8025105C
                // Local variables
                class xVec3 currentXZ; // r1+0x8
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80251090 -> 0x80251218
void zSlope::ContextCheckForPresence(class zSlope * this /* r30 */, class zCommonPlayer * player /* r31 */) {
    {
        // Range: 0x802510DC -> 0x802511F8
        // Local variables
        class zUpContextAction * ca; // r0
    }

    // References
    // -> class zGlobals globals;
}
// signature: zSlope::GetAnimPackage(ePlayerName)
// Range: 0x80251250 -> 0x8025129C
class zAnimPackage * zSlope::GetAnimPackage() {
}
// Range: 0x802512A0 -> 0x80251A14
void zSlope::MovePlayerDownSlope(class zSlope * this /* r29 */, float dt /* f30 */, class zUPPlayer * player /* r30 */, float slowDownRatio /* f31 */) {
    // Local variables
    class xVec3 closestPoint; // r1+0xF0
    float u; // f0
    class xVec3 currentDirection; // r1+0xE4
    class xVec3 currentDirNorm; // r1+0xD8
    class zPlayerSlide * mySlideAction; // r31
    float forwardSpeed; // f0
    float forwardAcceleration; // f0
    float desiredSpeed; // f2
    class xVec3 vecToOtherPlayer; // r1+0xCC
    float separation; // f10
    class xVec3 mySlopeVec; // r1+0xC0

    {
        // Range: 0x802514C0 -> 0x802514C4
        // Local variables
        int x; // r5
    }
    {
        // Range: 0x80251584 -> 0x80251610
        // Local variables
        float speedMultiplier; // f7
    }
    {
        // Range: 0x80251614 -> 0x8025168C
        // Local variables
        float speedMultiplier; // f7
    }
    {
        // Range: 0x802516CC -> 0x80251864
        // Local variables
        float normLength; // f0
        class xVec3 floorNormal; // r1+0xB4
    }

    // References
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 g_Y3;
    // -> class xGlobals * xglobals;
}
