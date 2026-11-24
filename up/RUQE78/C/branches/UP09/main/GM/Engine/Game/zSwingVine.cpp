/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zSwingVine.cpp
*/
float StickMagSwing; // size: 0x4, address: 0x8077D94C
// Range: 0x800E3380 -> 0x800E3674
void zSwingVine::TimeStep(class zSwingVine * this /* r31 */, float dt /* f22 */) {
    // Local variables
    float length; // f0
    float rotation; // f23

    {
        // Range: 0x800E3484 -> 0x800E35FC
        // Local variables
        unsigned int x; // r25

        {
            // Range: 0x800E3484 -> 0x800E35FC
            // Local variables
            float lengthMod; // f22
            class xVec3 p1; // r1+0x14

            {
                // Range: 0x800E3498 -> 0x800E35FC
                // Local variables
                class xVec3 leafOffset; // r1+0x8
                class xMat4x3 leafMatBackup; // r1+0x20
                class xMat3x3 rotateMat; // r1+0x60
            }
        }
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x800E3690 -> 0x800E3FE0
void zSwingVine::Setup(class zSwingVine * this /* r29 */) {
    // Local variables
    class xVec3 newAxis; // r1+0x48
    float maxSwingAngle; // f2

    {
        // Range: 0x800E3854 -> 0x800E3E7C
        // Local variables
        unsigned int x; // r30

        {
            // Range: 0x800E3854 -> 0x800E3E7C
            // Local variables
            class xMat4x3 mat; // r1+0xA8

            {
                // Range: 0x800E3854 -> 0x800E386C
                // Local variables
                class ModelInstanceAsset * masset; // r15
            }
            {
                // Range: 0x800E386C -> 0x800E386C
                // Local variables
                class ModelInstanceAsset * masset; // r15
            }
        }
    }
    {
        // Range: 0x800E3F2C -> 0x800E3F78
        // Local variables
        unsigned int i; // r16

        {
            // Range: 0x800E3F2C -> 0x800E3F78
            // Local variables
            class zDirection * landingPos; // r0
        }
    }

    // References
    // -> class zGlobals globals;
    // -> unsigned long long simpleShadowID;
    // -> class WiiFastHeap wiiFastHeap;
    // -> class xOGModelUpdater g_modelUpdateNone;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class xMat4x3 g_I3;
}
// signature: zSwingVine::AttachPlayerToRope(int)
// Range: 0x800E3FE0 -> 0x800E400C
void zSwingVine::AttachPlayerToRope() {
}
// Range: 0x800E4020 -> 0x800E4228
void zSwingVine::ReleasePlayer(class zSwingVine * this /* r31 */) {
    // References
    // -> class xVec3 m_NegUnitAxisY;
}
// signature: zSwingVine::GetPosOfPlayer(zUPHumanPlayer *)
// Range: 0x800E4230 -> 0x800E4398
class xVec3 zSwingVine::GetPosOfPlayer() {
    // Local variables
    class xVec3 pos; // r1+0x8
    float posOnRope; // f3
}
// signature: zSwingVine::ApplySwingForce(float)
// Range: 0x800E43A0 -> 0x800E48C4
void zSwingVine::ApplySwingForce() {
    // Local variables
    class xVec3 pos; // r1+0xEC
    class xVec3 localVec; // r1+0xE0
    class xMat3x3 vineMat; // r1+0xF8

    {
        // Range: 0x800E44F4 -> 0x800E4754
        // Local variables
        class xVec3 forwardForce; // r1+0xD4
    }
    {
        // Range: 0x800E4758 -> 0x800E48BC
        // Local variables
        class xVec3 backForce; // r1+0xC8
    }

    // References
    // -> class xVec3 m_NegUnitAxisY;
}
// signature: zSwingVine::FallFaster(float)
// Range: 0x800E48D0 -> 0x800E4A0C
void zSwingVine::FallFaster() {
    // Local variables
    class xVec3 fallVec; // r1+0x38

    // References
    // -> class xVec3 m_NegUnitAxisY;
}
// Range: 0x800E4A10 -> 0x800E4A84
bool zSwingVine::Reverse() {
}
// Range: 0x800E4A90 -> 0x800E4B58
bool zSwingVine::ClimbRope(float dt /* f2 */) {
    {
        // Range: 0x800E4AD8 -> 0x800E4AE0
        // Local variables
        unsigned int x; // r7
    }
}
// signature: zSwingVine::GetNeighborInDirection(const xVec3 &)
// Range: 0x800E4B80 -> 0x800E4CC0
class zSwingVine * zSwingVine::GetNeighborInDirection() {
    // Local variables
    class xVec3 myPos; // r1+0x50
    class zSwingVine * best; // r8
    float bestDot; // f9

    {
        // Range: 0x800E4BA0 -> 0x800E4C30
        // Local variables
        float dotXZ; // f0
        class xVec3 toNeighbor; // r1+0x38
        class xVec3 posA; // r1+0x44
    }
    {
        // Range: 0x800E4C30 -> 0x800E4CB4
        // Local variables
        float dotXZ; // f0
        class xVec3 toNeighbor; // r1+0x20
        class xVec3 posB; // r1+0x2C
    }
}
// Range: 0x800E4CF0 -> 0x800E4F0C
bool zSwingVine::GetLanding(class zSwingVine * this /* r29 */, class xVec3 * playerPos /* r30 */, class xVec3 & pos /* r31 */) {
    // Local variables
    bool found; // r3
    float shortestDistXZ2; // f0
    class xVec3 candidate; // r1+0x44

    {
        // Range: 0x800E4D58 -> 0x800E4ED0
        // Local variables
        unsigned int x; // r0

        {
            // Range: 0x800E4D58 -> 0x800E4ED0
            // Local variables
            float front; // f0
            class xVec3 swinging; // r1+0x2C
            class xVec3 toLanding; // r1+0x38

            {
                // Range: 0x800E4D5C -> 0x800E4ED0
                // Local variables
                float distXZ2; // f0
                class xVec3 toLanding; // r1+0x20
            }
        }
    }
}
// signature: zSwingVine::Update(float)
// Range: 0x800E4F10 -> 0x800E4F14
void zSwingVine::Update() {
}
// signature: zSwingVine::CanStart(zCommonPlayer *)
// Range: 0x800E4F20 -> 0x800E50D8
bool zSwingVine::CanStart(class zSwingVine * this /* r30 */) {
    // Local variables
    class zUPHumanPlayer * player; // r31
    unsigned int actID; // r0
    class xVec3 playerPoint; // r1+0x14
    float attachDist; // f31
}
// signature: zSwingVine::Start(zCommonPlayer *)
// Range: 0x800E50E0 -> 0x800E5354
void zSwingVine::Start(class zSwingVine * this /* r30 */) {
    // Local variables
    class zUPHumanPlayer * player; // r31
    class xVec3 playerPoint; // r1+0x38
}
// Range: 0x800E5360 -> 0x800E5734
void zSwingVine::GetStartPosition(class zSwingVine * this /* r30 */, class zCommonPlayer * player /* r29 */, class xVec3 & pos /* r31 */) {
    // Local variables
    class xVec3 entryDir; // r1+0x74
    class xVec3 offset; // r1+0x68
    class xVec3 entryCross; // r1+0x5C

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x800E5740 -> 0x800E5998
void zSwingVine::GetStartDirection(class zSwingVine * this /* r30 */, class zCommonPlayer * player /* r29 */, class xVec3 & dir /* r31 */) {
    // Local variables
    class xVec3 ropePos; // r1+0x2C
    class xVec3 movingInThisDirection; // r1+0x20
}
// Range: 0x800E59A0 -> 0x800E5E34
void zSwingVine::ContextCheckForPresence(class zSwingVine * this /* r29 */, class zCommonPlayer * player /* r30 */) {
    {
        // Range: 0x800E5DC4 -> 0x800E5E14
        // Local variables
        class zUpContextAction * ca; // r0
    }

    // References
    // -> class xVec3 m_NegUnitAxisY;
}
// Range: 0x800E5E50 -> 0x800E6034
class Entity * Sext::zSwingVineAsset::Create(class EntityHandleBase * handle /* r31 */, class zSwingVineAsset * asset /* r29 */) {
    // References
    // -> struct {} __vt__10zSwingVine;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x800E6050 -> 0x800E6114
void zSwingVine::Init(class zSwingVine * this /* r30 */, void * inAsset /* r31 */) {
}
// Range: 0x800E6120 -> 0x800E6200
void * zSwingVine::~zSwingVine(class zSwingVine * this /* r28 */) {
    {
        // Range: 0x800E6178 -> 0x800E6180
        // Local variables
        unsigned int x; // r30
    }

    // References
    // -> struct {} __vt__10zSwingVine;
}
// Range: 0x800E6200 -> 0x800E6380
void zSwingVine::Reset(class zSwingVine * this /* r31 */) {
    // Local variables
    class xVec3 newAxis; // r1+0x8
    float maxSwingAngle; // f2
}
// signature: zSwingVine::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800E6380 -> 0x800E6460
void zSwingVine::HandleEvent() {
}
