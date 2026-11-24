/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zLever.cpp
*/
// signature: zLeverCollisionListener::contactPointRemovedCallback(hkpContactPointRemovedEvent &)
// Range: 0x802CC240 -> 0x802CC244
void zLeverCollisionListener::contactPointRemovedCallback() {
}
// Range: 0x802BA850 -> 0x802BA904
void zLever::Init(class zLever * this /* r30 */, class zLeverAsset * inAsset /* r31 */) {
}
// signature: zLever::SetVisible(bool)
// Range: 0x802BA910 -> 0x802BA928
void zLever::SetVisible() {
}
// signature: zLever::SetCollision(bool)
// Range: 0x802BA930 -> 0x802BA948
void zLever::SetCollision() {
}
// Range: 0x802BA950 -> 0x802BAC6C
void zLever::Setup(class zLever * this /* r31 */) {
    // Local variables
    class hkpRigidBody * rb; // r0
    class Vector rvec; // r1+0x70
    class Quaternion mquat; // r1+0x60

    // References
    // -> struct {} __vt__23zLeverCollisionListener;
}
// Range: 0x802BAC70 -> 0x802BAF3C
void zLever::Reset(class zLever * this /* r31 */) {
}
// signature: zLever::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x802BAF40 -> 0x802BB1D0
void zLever::HandleEvent(class zLever * this /* r28 */, class EventAny * params /* r30 */) {
    {
        // Range: 0x802BB068 -> 0x802BB120
        // Local variables
        class xOGEntity * possibleDriver; // r4
        unsigned int flags; // r29
        class EventActionDrivenBy * paramst; // r0
    }
}
// Range: 0x802BB1D0 -> 0x802BB264
void zLever::Update(class zLever * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x802BB270 -> 0x802BBE74
void zLever::TeeterTotterUpdate(class zLever * this /* r26 */, float dt /* f22 */) {
    // Local variables
    float lastPitchAngle; // f23

    {
        // Range: 0x802BB3AC -> 0x802BBD40
        // Local variables
        bool playTiltSound; // r4
        bool someoneThisFrame; // r29

        {
            // Range: 0x802BB3B0 -> 0x802BB718
            // Local variables
            int playerIdx; // r28

            {
                // Range: 0x802BB3B0 -> 0x802BB718
                // Local variables
                class zPlayer * player; // r27
            }
        }
        {
            // Range: 0x802BB7A8 -> 0x802BB858
            // Local variables
            float desiredPitch; // f1
        }
        {
            // Range: 0x802BB858 -> 0x802BB8F0
            // Local variables
            class hkpRigidBody * rb; // r0

            {
                // Range: 0x802BB8AC -> 0x802BB8F0
                // Local variables
                float force; // f0
            }
        }
        {
            // Range: 0x802BB908 -> 0x802BBB04
            // Local variables
            class xVec3 dustPos; // r1+0x7C
            class xMat4x3 barMatL; // r1+0x148

            {
                // Range: 0x802BB9D4 -> 0x802BBB04
                // Local variables
                class FMOD_VECTOR tempFV; // r1+0x70

                {
                    // Range: 0x802BBA24 -> 0x802BBA30
                    // Local variables
                    int i; // r23
                }
                {
                    // Range: 0x802BBA60 -> 0x802BBA6C
                    // Local variables
                    int i; // r23
                }
            }
        }
        {
            // Range: 0x802BBB1C -> 0x802BBD00
            // Local variables
            class xVec3 dustPos; // r1+0x64
            class xMat4x3 barMatL; // r1+0x108

            {
                // Range: 0x802BBBD0 -> 0x802BBD00
                // Local variables
                class FMOD_VECTOR tempFV; // r1+0x58

                {
                    // Range: 0x802BBC20 -> 0x802BBC2C
                    // Local variables
                    int i; // r23
                }
                {
                    // Range: 0x802BBC5C -> 0x802BBC68
                    // Local variables
                    int i; // r23
                }
            }
        }
        {
            // Range: 0x802BBD04 -> 0x802BBD38
            // Local variables
            class xMat4x3 barMatL; // r1+0xC8
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x802BBE80 -> 0x802BBF98
bool zLever::LaunchCharacterOnThisSide(class zLever * this /* r24 */, class LeverLaunch * launchInfo /* r25 */) {
    // Local variables
    bool launchedAPlayer; // r27
    int playerNameLookUp[4]; // r1+0x8

    {
        // Range: 0x802BBE9C -> 0x802BBF6C
        // Local variables
        int playerIdx; // r26

        {
            // Range: 0x802BBE9C -> 0x802BBF6C
            // Local variables
            class zDirection * targetDirection; // r5
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x802BBFA0 -> 0x802BCB14
void zLever::LaunchUpdate(class zLever * this /* r30 */, float dt /* f26 */) {
    // Local variables
    bool playLaunchSound; // r31

    {
        // Range: 0x802BBFEC -> 0x802BC058
        // Local variables
        unsigned int launchIndex; // r7
    }
    {
        // Range: 0x802BC300 -> 0x802BC554
        // Local variables
        unsigned int aIndex; // r24
    }
    {
        // Range: 0x802BC80C -> 0x802BCA60
        // Local variables
        unsigned int bIndex; // r24
    }
    {
        // Range: 0x802BCA84 -> 0x802BCAB8
        // Local variables
        class xMat4x3 barMatL; // r1+0x1B8
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x802BCB20 -> 0x802BCCC8
class Entity * Sext::zLeverAsset::Create(class EntityHandleBase * handle /* r29 */, class zLeverAsset * inAsset /* r30 */) {
    // References
    // -> struct {} __vt__6zLever;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x802BCCD0 -> 0x802BCEEC
void zLever::applyPlayerRotation(class zPlayer * player /* r31 */, class zDirection * targetDirection /* r29 */, enum eRotateDir rotateTo /* r30 */) {
}
// Range: 0x802BCEF0 -> 0x802BCEF8
class zNeoDrivenLink * zLever::DriveGetDriver() {
}
// signature: zLever::DriveSetDriver(zNeoDrivenLink *)
// Range: 0x802BCF00 -> 0x802BCF08
void zLever::DriveSetDriver() {
}
// Range: 0x802BCF10 -> 0x802BD414
void zLever::DriveAttach(class zLever * this /* r29 */, class xOGEntity * passenger /* r30 */, unsigned int flags /* r31 */) {
    // Local variables
    class xMat4x3 D; // r1+0x48
    class xVec3 euler; // r1+0x8
    class xMat3x3 a_descaled; // r1+0x18
}
// Range: 0x802BD420 -> 0x802BD428
class xMat4x3 * zLever::DriveGetCurMat() {
}
// signature: zLever::DriveCauseMove(xMat4x3 *, xMat4x3 *, xMat4x3 *, xMat4x3 *, bool, bool, float, float)
// Range: 0x802BD430 -> 0x802BDDA4
void zLever::DriveCauseMove(class zLever * this /* r27 */, class xMat4x3 * parent /* r28 */, class xMat4x3 * lastMat /* r29 */, bool rotate /* r30 */, bool yaw /* r31 */) {
    // Local variables
    class xVec3 newEuler; // r1+0x38
    class xVec3 lastEuler; // r1+0x2C
    class xMat4x3 baseMat; // r1+0x128
    class xMat4x3 InvRel; // r1+0xE8
    class xVec3 Rl; // r1+0x20

    {
        // Range: 0x802BD520 -> 0x802BDBF8
        // Local variables
        class xMat3x3 a_descaled; // r1+0xB8
    }
    {
        // Range: 0x802BDBF8 -> 0x802BDD58
        // Local variables
        class xMat4x3 tempMat; // r1+0x78

        {
            // Range: 0x802BDC1C -> 0x802BDD30
            // Local variables
            float yawDiff; // f1
            class xMat3x3 rot; // r1+0x48
        }
    }
}
// Range: 0x802BDDB0 -> 0x802BDE54
void * zLever::~zLever(class zLever * this /* r30 */) {
    // References
    // -> struct {} __vt__6zLever;
}
// Range: 0x802BDE60 -> 0x802BDEB8
void zLeverCollisionListener::entityDeletedCallback(class zLeverCollisionListener * this /* r30 */, class hkpEntity * entity /* r31 */) {
}
// signature: zLeverCollisionListener::contactProcessCallback(hkpContactProcessEvent &)
// Range: 0x802BDEC0 -> 0x802BE160
void zLeverCollisionListener::contactProcessCallback() {
    // Local variables
    class hkpPhantom * pPhantomTestA; // reg65535
    class hkpPhantom * pPhantomTestB; // r0
    class hkpPhantom * pPhantom; // r6
    class hkpRigidBody * pBody; // r3
    class hkpProcessCollisionData * pCollisionData; // r5

    {
        // Range: 0x802BDF94 -> 0x802BE144
        // Local variables
        class zLever * lever; // r4
        class zPlayer * player; // r7
        class xBase * pBaseBody; // r6
        class xBase * pBasePlayer; // r4

        {
            // Range: 0x802BDFEC -> 0x802BDFF8
            // Local variables
            int i; // r6

            {
                // Range: 0x802BDFEC -> 0x802BDFF8
                // Local variables
                float velocityOffNormal; // f0
                class hkVector4 offNormalVelocityVector; // r1+0x20
                class hkVector4 worldRelativeVelocity; // r1+0x30
                class hkVector4 velPointOnB; // r1+0x40
                class hkVector4 velPointOnA; // r1+0x50
                class hkVector4 normal; // r1+0x60
                class hkVector4 & start; // r0
                class hkContactPoint & contactPoint; // r19
            }
        }
    }
}
// signature: zLeverCollisionListener::contactPointAddedCallback(hkpContactPointAddedEvent &)
// Range: 0x802BE160 -> 0x802BE164
void zLeverCollisionListener::contactPointAddedCallback() {
}
// signature: zLeverCollisionListener::contactPointConfirmedCallback(hkpContactPointConfirmedEvent &)
// Range: 0x802BE170 -> 0x802BE1B0
void zLeverCollisionListener::contactPointConfirmedCallback() {
}
