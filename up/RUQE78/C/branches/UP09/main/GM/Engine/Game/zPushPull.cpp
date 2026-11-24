/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zPushPull.cpp
*/
// signature: zPushPull::SetVisible(bool)
// Range: 0x80220740 -> 0x80220914
void zPushPull::SetVisible(class zPushPull * this /* r29 */) {
    // References
    // -> class Scene * primaryScene;
}
// Range: 0x80220920 -> 0x80220964
void zPushPull::SetBSPVisible(class zPushPull * this /* r30 */, bool visibleValue /* r31 */) {
}
// signature: zPushPull::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80220970 -> 0x80220E08
void zPushPull::HandleEvent(class zPushPull * this /* r31 */, class EventAny * params /* r29 */) {
    {
        // Range: 0x80220B54 -> 0x80220B60
        // Local variables
        unsigned int i; // r30
    }
    {
        // Range: 0x80220CBC -> 0x80220D88
        // Local variables
        class xOGEntity * possibleDriver; // r4
        unsigned int flags; // r28
        class EventActionDrivenBy * paramst; // r0
    }
}
// Range: 0x80220E10 -> 0x80221174
void zPushPull::FindStickDir(class zPushPull * this /* r29 */, class zCommonPlayer * player /* r30 */, class xVec3 & dir /* r31 */, float dt /* f30 */) const {
    // Local variables
    float x; // f29
    float z; // f30
    float mag2; // f1
    float angle; // f0
    class xVec3 stickDir; // r1+0x18

    // References
    // -> class xVec3 m_NegUnitAxisZ;
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_NegUnitAxisX;
    // -> class xVec3 m_UnitAxisX;
    // -> class xVec3 m_Null;
}
// Range: 0x80221180 -> 0x80221A10
bool zPushPull::CanStartTranslate(class zPushPull * this /* r31 */, class zCommonPlayer * player /* r30 */) const {
    // Local variables
    class xVec3 localPlayerPos; // r1+0x20
    class xVec3 localPlayerAt; // r1+0x14
    class xVec3 localPlayerStick; // r1+0x8
    float playerCenter; // f1

    {
        // Range: 0x802213E0 -> 0x80221538
        // Local variables
        float dx; // f1
    }
    {
        // Range: 0x80221538 -> 0x8022168C
        // Local variables
        float dx; // f1
    }
    {
        // Range: 0x80221710 -> 0x80221868
        // Local variables
        float dz; // f1
    }
    {
        // Range: 0x80221868 -> 0x802219BC
        // Local variables
        float dz; // f1
    }

    // References
    // -> class xVec3 m_NegUnitAxisZ;
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_NegUnitAxisX;
    // -> class xVec3 m_UnitAxisX;
}
// Range: 0x80221A10 -> 0x802222CC
bool zPushPull::CanStartRotate(class zPushPull * this /* r31 */, class zCommonPlayer * player /* r30 */) const {
    // Local variables
    class xVec3 localPlayerPos; // r1+0x68
    class xVec3 localPlayerAt; // r1+0x5C
    class xVec3 localPlayerStick; // r1+0x50
    float playerCenter; // f1
    enum @enum pushDir; // r0
    class xVec3 arm; // r1+0x44
    bool pushable; // r3

    {
        // Range: 0x80221D24 -> 0x80221E10
        // Local variables
        float dx; // f1

        {
            // Range: 0x80221D98 -> 0x80221E10
            // Local variables
            class xVec3 t; // r1+0x38
        }
    }
    {
        // Range: 0x80221E14 -> 0x80221EFC
        // Local variables
        float dx; // f1

        {
            // Range: 0x80221E84 -> 0x80221EFC
            // Local variables
            class xVec3 t; // r1+0x2C
        }
    }
    {
        // Range: 0x80221F00 -> 0x80221FEC
        // Local variables
        float dz; // f1

        {
            // Range: 0x80221F74 -> 0x80221FEC
            // Local variables
            class xVec3 t; // r1+0x20
        }
    }
    {
        // Range: 0x80221FF0 -> 0x802220D8
        // Local variables
        float dz; // f1

        {
            // Range: 0x80222060 -> 0x802220D8
            // Local variables
            class xVec3 t; // r1+0x14
        }
    }

    // References
    // -> class xVec3 m_NegUnitAxisZ;
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_NegUnitAxisX;
    // -> class xVec3 m_UnitAxisX;
}
// signature: zPushPull::UpdateMoveTranslate(float)
// Range: 0x802222D0 -> 0x802230A8
void zPushPull::UpdateMoveTranslate(class zPushPull * this /* r31 */) {
    {
        // Range: 0x80222340 -> 0x802224A4
        // Local variables
        unsigned int i; // r5
    }
    {
        // Range: 0x80222574 -> 0x80223050
        // Local variables
        class xVec3 disp; // r1+0x98
        float newZCurr; // f3
        float dz; // f1
        float newXCurr; // f4
        float lower; // f2
        float upper; // f3
        float dx; // f4

        {
            // Range: 0x802227D4 -> 0x80222C18
            // Local variables
            class xVec3 localRightVFX; // r1+0x74
            class xVec3 localMiddleVFX; // r1+0x80
            class xVec3 localLeftVFX; // r1+0x8C
            float zMidpoint; // f2

            {
                // Range: 0x802228E8 -> 0x802228F4
                // Local variables
                unsigned int i; // r29
            }
        }
        {
            // Range: 0x80222C1C -> 0x80223050
            // Local variables
            class xVec3 localRightVFX; // r1+0x50
            class xVec3 localMiddleVFX; // r1+0x5C
            class xVec3 localLeftVFX; // r1+0x68
            float xMidpoint; // f2

            {
                // Range: 0x80222D20 -> 0x80222D2C
                // Local variables
                unsigned int i; // r29
            }
        }
    }
}
// Range: 0x802230B0 -> 0x802239B8
void zPushPull::UpdateMoveRotate(class zPushPull * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x80223114 -> 0x802232C8
        // Local variables
        unsigned int i; // r4

        {
            // Range: 0x80223114 -> 0x802232C8
            // Local variables
            class xVec3 t; // r1+0x5C
            class xVec3 arm; // r1+0x68
        }
    }
    {
        // Range: 0x8022331C -> 0x80223960
        // Local variables
        float newCurr; // f2
        float dAngle; // f0
        float angVel; // f0

        {
            // Range: 0x80223444 -> 0x80223960
            // Local variables
            class xVec3 localRightVFX; // r1+0x38
            class xVec3 localMiddleVFX; // r1+0x44
            class xVec3 localLeftVFX; // r1+0x50
            float zMidpoint; // f5
            float xMidpoint; // f6

            {
                // Range: 0x802235C8 -> 0x802235D4
                // Local variables
                unsigned int i; // r29
            }
        }
    }
}
// signature: zPushPull::UpdateVFX(float)
// Range: 0x802239C0 -> 0x80223B58
void zPushPull::UpdateVFX(class zPushPull * this /* r31 */) {
    {
        // Range: 0x80223A1C -> 0x80223A7C
        // Local variables
        class zFXSpawn * fxSpawnPtMiddle; // r0
    }
    {
        // Range: 0x80223A7C -> 0x80223B20
        // Local variables
        class zFXSpawn * fxSpawnPtRight; // r30
        class zFXSpawn * fxSpawnPtLeft; // r29
    }
}
// Range: 0x80223B60 -> 0x80223CA4
bool zPushPull::CanStart(class zPushPull * this /* r27 */, class zCommonPlayer * player /* r28 */) {
    // Local variables
    bool haveHuman; // r30

    {
        // Range: 0x80223BD8 -> 0x80223C24
        // Local variables
        unsigned int i; // r29
    }
}
// Range: 0x80223CB0 -> 0x80223F08
void zPushPull::ContextCheckForPresence(class zPushPull * this /* r30 */, class zCommonPlayer * player /* r31 */) {
    {
        // Range: 0x80223E94 -> 0x80223EF0
        // Local variables
        class zUpContextAction * ca; // r0
    }
}
// Range: 0x80223F20 -> 0x80223FFC
class Entity * Sext::zPushPullAsset::Create(class EntityHandleBase * handle /* r29 */, class zPushPullAsset * inAsset /* r30 */) {
    // References
    // -> struct {} __vt__9zPushPull;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x80224000 -> 0x80224044
void zPushPull::Init(class zPushPull * this /* r30 */, void * inAsset /* r31 */) {
}
// Range: 0x80224050 -> 0x802241B4
void zPushPull::Setup(class zPushPull * this /* r31 */) {
}
// Range: 0x802241C0 -> 0x802244DC
void zPushPull::LoadValuesFromAsset(class zPushPull * this /* r31 */) {
    // Local variables
    class hkAabb collisionBounds; // r1+0x10

    {
        // Range: 0x80224380 -> 0x80224474
        // Local variables
        float zExtent; // f1
        float xExtent; // f2
    }

    // References
    // -> class xVec3 m_UnitAxisX;
    // -> class xVec3 m_UnitAxisZ;
    // -> class hkTransform hkTransformIdentity;
    // -> class xMat4x3 g_I3;
}
// Range: 0x802244E0 -> 0x80224F0C
void zPushPull::SetupAttachPoints(class zPushPull * this /* r25 */) {
    // Local variables
    bool facingX; // r31
    bool facingNegX; // r30
    bool facingZ; // r29
    bool facingNegZ; // r28
    float xExtent; // f31
    float zExtent; // f30
    int xSegments; // r27
    int zSegments; // r26
    float inBetweenSpaceX; // f0
    float inBetweenSpaceZ; // f1
    int index; // r3

    {
        // Range: 0x802247BC -> 0x8022480C
        // Local variables
        int i; // r7
    }
    {
        // Range: 0x80224980 -> 0x802249DC
        // Local variables
        int i; // r6
    }
    {
        // Range: 0x80224B50 -> 0x80224BB0
        // Local variables
        int i; // r7
    }
    {
        // Range: 0x80224D24 -> 0x80224D80
        // Local variables
        int i; // r6
    }

    // References
    // -> class xVec3 m_NegUnitAxisZ;
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_NegUnitAxisX;
    // -> class xVec3 m_UnitAxisX;
}
// Range: 0x80224F10 -> 0x80225188
int zPushPull::FindClosestAIAttachPoint(class zPushPull * this /* r31 */, class xVec3 * pos /* r27 */) const {
    // Local variables
    int humanAttachPoint; // r29

    {
        // Range: 0x80224F38 -> 0x80224F84
        // Local variables
        unsigned int i; // r28
    }
    {
        // Range: 0x80224F98 -> 0x80225164
        // Local variables
        class xVec3 localPos; // r1+0x14
        float closestDist2; // f0
        int closest; // r3

        {
            // Range: 0x80224FA4 -> 0x80225158
            // Local variables
            unsigned int i; // r9

            {
                // Range: 0x80224FA4 -> 0x80225158
                // Local variables
                float dist2; // f0
            }
        }
    }
}
// Range: 0x80225190 -> 0x80225358
void zPushPull::Reset(class zPushPull * this /* r31 */) {
    {
        // Range: 0x802251B4 -> 0x802251DC
        // Local variables
        unsigned int i; // r7
    }
    {
        // Range: 0x80225204 -> 0x8022520C
        // Local variables
        unsigned int i; // r6
    }

    // References
    // -> class xMat4x3 g_I3;
}
// Range: 0x80225360 -> 0x80225400
void zPushPull::DebugReset(class zPushPull * this /* r31 */) {
}
// Range: 0x80225400 -> 0x802257CC
void zPushPull::UpdateObjectRigidBody(class zPushPull * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class xMat3x3 tempQuatMat; // r1+0x40
    class xQuat quat; // r1+0x30
}
// Range: 0x802257D0 -> 0x80225CFC
void zPushPull::Update(class zPushPull * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x8022582C -> 0x8022585C
        // Local variables
        unsigned int i; // r29
    }
}
// signature: zPushPull::TimeStep(float)
// Range: 0x80225D00 -> 0x80225E18
void zPushPull::TimeStep(class zPushPull * this /* r31 */) {
    {
        // Range: 0x80225D94 -> 0x80225DFC
        // Local variables
        unsigned int i; // r6
    }
}
// Range: 0x80225E20 -> 0x802260B0
void zPushPull::Start(class zPushPull * this /* r30 */, class zCommonPlayer * player /* r31 */) {
    {
        // Range: 0x80225E78 -> 0x80226044
        // Local variables
        unsigned int i; // r6
    }
}
// Range: 0x802260B0 -> 0x80226500
void zPushPull::Stop(class zPushPull * this /* r31 */, class zCommonPlayer * player /* r30 */) {
    {
        // Range: 0x802260EC -> 0x8022614C
        // Local variables
        unsigned int i; // r5
    }
}
// signature: zPushPull::GetStartPosition(zCommonPlayer *, xVec3 &)
// Range: 0x80226500 -> 0x80226784
void zPushPull::GetStartPosition() {
    {
        // Range: 0x8022664C -> 0x80226754
        // Local variables
        class xVec3 offsetPos; // r1+0x2C
    }
}
// signature: zPushPull::GetStartDirection(zCommonPlayer *, xVec3 &)
// Range: 0x80226790 -> 0x80226988
void zPushPull::GetStartDirection() {
}
// signature: zPushPull::GetAnimPackage(ePlayerName)
// Range: 0x80226990 -> 0x802269BC
class zAnimPackage * zPushPull::GetAnimPackage() {
}
