/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zHouseFloat.cpp
*/
static float liftTimeStart; // size: 0x4, address: 0x807AF0FC
static float driftAccel; // size: 0x4, address: 0x807AF100
static float driftDecel; // size: 0x4, address: 0x807AF104
static float playerMoveSpeed; // size: 0x4, address: 0x807AF108
static float maxDriftSpeed; // size: 0x4, address: 0x807AF10C
static float slowdownFromEdge; // size: 0x4, address: 0x807AF110
// Range: 0x8017B8D0 -> 0x8017B930
void zHouseFloat::Init(class zHouseFloat * this /* r30 */, void * inAsset /* r31 */) {
}
// Range: 0x8017B930 -> 0x8017C018
void zHouseFloat::Setup(class zHouseFloat * this /* r31 */) {
    // Local variables
    class Vector4 row_1; // r1+0xA0
    class Vector4 row_2; // r1+0x90
    class Vector4 row_3; // r1+0x80
    class Vector4 row_4; // r1+0x70
    class Vector4 row_5; // r1+0x60
    class Vector4 row_6; // r1+0x50
    class xVec3 scale; // r1+0x44

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x8017C020 -> 0x8017C094
void zHouseFloat::Reset(class zHouseFloat * this /* r31 */) {
}
// signature: zHouseFloat::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8017C0A0 -> 0x8017C1B4
void zHouseFloat::HandleEvent(class zHouseFloat * this /* r29 */) {
}
// Range: 0x8017C1C0 -> 0x8017C29C
class Entity * Sext::zHouseFloatAsset::Create(class EntityHandleBase * handle /* r29 */, class zHouseFloatAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__11zHouseFloat;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: zHouseFloat::Update(float)
// Range: 0x8017C2A0 -> 0x8017C2A4
void zHouseFloat::Update() {
}
// Range: 0x8017C2B0 -> 0x8017D024
void zHouseFloat::TimeStep(class zHouseFloat * this /* r29 */, float dt /* f31 */) {
    // Local variables
    class xVec3 houseCur; // r1+0xD8
    class xVec3 houseCurPY; // r1+0xCC
    class dirPair input; // r1+0x10

    {
        // Range: 0x8017C388 -> 0x8017C448
        // Local variables
        class EventActionMoveToLoc param; // r1+0xF8
    }
    {
        // Range: 0x8017C4F0 -> 0x8017C704
        // Local variables
        class EventActionMoveToLoc param; // r1+0xE4

        {
            // Range: 0x8017C670 -> 0x8017C6EC
            // Local variables
            int i; // r28
        }
    }
    {
        // Range: 0x8017C870 -> 0x8017C8F8
        // Local variables
        int i; // r28
    }
    {
        // Range: 0x8017C938 -> 0x8017C9E8
        // Local variables
        float percentageIn; // f30
    }
    {
        // Range: 0x8017C9EC -> 0x8017CA98
        // Local variables
        float percentageIn; // f30
    }
    {
        // Range: 0x8017CB64 -> 0x8017CC14
        // Local variables
        float percentageIn; // f30
    }
    {
        // Range: 0x8017CC18 -> 0x8017CCC4
        // Local variables
        float percentageIn; // f30
    }
    {
        // Range: 0x8017CE70 -> 0x8017CF64
        // Local variables
        class xVec3 desiredPos; // r1+0xC0
    }

    // References
    // -> static float driftDecel;
    // -> static float maxDriftSpeed;
    // -> static float slowdownFromEdge;
    // -> static float driftAccel;
    // -> static float liftTimeStart;
    // -> class xGlobals * xglobals;
}
// Range: 0x8017D0D0 -> 0x8017D2B8
class dirPair zHouseFloat::checkDir(float dt /* f28 */) {
    // Local variables
    class dirPair tempVal; // r1+0x18
    float threshold; // f31

    {
        // Range: 0x8017D110 -> 0x8017D260
        // Local variables
        int p; // r29

        {
            // Range: 0x8017D110 -> 0x8017D260
            // Local variables
            float mag2; // f1
            float z; // f29
            float x; // f30
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zHouseFloat::checkPlayer(zUPPlayer *, bool)
// Range: 0x8017D2C0 -> 0x8017D50C
bool zHouseFloat::checkPlayer(class zUPPlayer * player /* r31 */) {
    // References
    // -> static class xBox sUnitBoxhf;
}
// Range: 0x8017D510 -> 0x8017D5B8
class xVec3 zHouseFloat::startHFPlayer(class zHouseFloat * this /* r30 */, class zUPPlayer * player /* r31 */) {
    // Local variables
    class xVec3 temp; // r1+0x8
}
// Range: 0x8017D5C0 -> 0x8017D644
void zHouseFloat::stopHFPlayer(class zUPPlayer * player /* r31 */) {
    // References
    // -> class xVec3 m_Null;
}
// signature: zHouseFloat::updateHFPlayerToHouse(zUPPlayer *, xVec3 *, xVec3 *, float)
// Range: 0x8017D650 -> 0x8017D9D4
bool zHouseFloat::updateHFPlayerToHouse(class zHouseFloat * this /* r29 */, class zUPPlayer * player /* r30 */, float dt /* f31 */) {
    // Local variables
    bool done; // r31
    float movedist; // f0
    class xVec3 desiredPos; // r1+0x6C
    class xVec3 diff; // r1+0x60
    float len; // f0
    class hkVector4 hk_pos; // r1+0x50

    {
        // Range: 0x8017D850 -> 0x8017D8F8
        // Local variables
        float tiltAmount; // f2
    }

    // References
    // -> static float playerMoveSpeed;
}
// signature: zHouseFloat::posCheck(xVec3, xVec3, float)
// Range: 0x8017D9E0 -> 0x8017DA5C
bool zHouseFloat::posCheck() {
    // Local variables
    class xVec3 c; // r1+0x14
}
// signature: zHouseFloat::maxminSpeed(float, float, int)
// Range: 0x8017DA60 -> 0x8017DAE0
float zHouseFloat::maxminSpeed() {
}
