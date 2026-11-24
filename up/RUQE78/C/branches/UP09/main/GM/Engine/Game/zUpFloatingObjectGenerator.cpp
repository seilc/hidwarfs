/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zUpFloatingObjectGenerator.cpp
*/
static float xzSpeedDecreaseFactor; // size: 0x4, address: 0x807A3304
static float bounceMagic; // size: 0x4, address: 0x807A3308
// signature: BalloonAnimal::BalloonAnimalRayHitCollector::addRayHit(const hkpCdBody &, const hkpShapeRayCastCollectorOutput &)
// Range: 0x80155460 -> 0x80155534
void BalloonAnimal::BalloonAnimalRayHitCollector::addRayHit() {
    {
        // Range: 0x80155460 -> 0x80155530
        {
            // Range: 0x801554A8 -> 0x80155530
            // Local variables
            class xBase * obj; // r7
        }
    }
}
// Range: 0x800F4B00 -> 0x800F4C38
void * zUpFloatingObject::zUpFloatingObject(class zUpFloatingObject * this /* r31 */) {
    // References
    // -> struct {} __vt__33UpFloatingObjectCollisionListener;
    // -> struct {} __vt__17zUpFloatingObject;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: zUpFloatingObject::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800F4C40 -> 0x800F4EAC
void zUpFloatingObject::HandleEvent(class zUpFloatingObject * this /* r28 */, class EventAny * params /* r31 */) {
    {
        // Range: 0x800F4CF4 -> 0x800F4D84
        // Local variables
        float mass; // f3
        class hkVector4 toHit; // r1+0x10
        class EventActionHit * hitParams; // r0
    }
    {
        // Range: 0x800F4D88 -> 0x800F4E4C
        // Local variables
        class xOGEntity * possibleDriver; // r4
        unsigned int flags; // r29
        class EventActionDrivenBy * paramst; // r0
    }
}
// Range: 0x800F4EB0 -> 0x800F57B8
void zUpFloatingObject::Update(class zUpFloatingObject * this /* r29 */, float dt /* f31 */) {
    // Local variables
    class hkpRigidBody * rb; // r30
    class hkVector4 vel; // r1+0xD0

    {
        // Range: 0x800F4EE0 -> 0x800F503C
        // Local variables
        class zUpFloatingObjectGenerator * generator; // r0
    }
    {
        // Range: 0x800F50F8 -> 0x800F55F0
        // Local variables
        float vy; // f4
        float xzSpeedMul; // f30
        class BalloonAnimalRayHitCollector hit_collector_balloon; // r1+0xE0
        class BalloonAnimalRayHitCollector hit_collector_surface; // r1+0x100
        class hkVector4 rayTo; // r1+0xA0
        class hkVector4 rayFrom; // r1+0xB0
        class xVec3 pos; // r1+0xC0
        int origBounceCount; // r31

        {
            // Range: 0x800F514C -> 0x800F514C
            // Local variables
            class hkMonitorStream & mStream; // r0

            {
                // Range: 0x800F514C -> 0x800F514C
                // Local variables
                class TimerCommand * h; // r0
            }
        }
        {
            // Range: 0x800F5220 -> 0x800F5220
            // Local variables
            class hkMonitorStream & mStream; // r0

            {
                // Range: 0x800F5220 -> 0x800F5220
                // Local variables
                class TimerCommand * h; // r0
            }
        }
        {
            // Range: 0x800F52A0 -> 0x800F52A0
            // Local variables
            class hkMonitorStream & mStream; // r0

            {
                // Range: 0x800F52A0 -> 0x800F52A0
                // Local variables
                class TimerCommand * h; // r0
            }
        }
        {
            // Range: 0x800F5370 -> 0x800F5370
            // Local variables
            class hkMonitorStream & mStream; // r0

            {
                // Range: 0x800F5370 -> 0x800F5370
                // Local variables
                class TimerCommand * h; // r0
            }
        }
        {
            // Range: 0x800F5430 -> 0x800F552C
            // Local variables
            bool usingTriSurface; // r1+0x10
            class SurfaceGamePlay * surface; // r0

            {
                // Range: 0x800F54BC -> 0x800F552C
                // Local variables
                class zFXSpawn * fxAsset; // r27

                {
                    // Range: 0x800F54E0 -> 0x800F552C
                    // Local variables
                    class zFXSpawn * fxSpawn; // r0
                }
            }
        }
    }
    {
        // Range: 0x800F56F4 -> 0x800F578C
        // Local variables
        class xVec3 attachPos; // r1+0x88
    }

    // References
    // -> static float bounceMagic;
    // -> static float xzSpeedDecreaseFactor;
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
    // -> struct {} __vt__Q213BalloonAnimal28BalloonAnimalRayHitCollector;
    // -> class zBalloonGenerator * pInstance;
}
// Range: 0x800F5830 -> 0x800F58E0
void zUpFloatingObject::PlayPopFX(class zUpFloatingObject * this /* r29 */) {
    // Local variables
    class zFXSpawn * fxAsset; // r30

    {
        // Range: 0x800F5864 -> 0x800F58C4
        // Local variables
        class zFXSpawn * fxSpawn; // r31

        {
            // Range: 0x800F5878 -> 0x800F58C4
            // Local variables
            class xVec3 balloonPos; // r1+0x10
        }
    }
}
// Range: 0x800F58E0 -> 0x800F5E80
void zUpFloatingObject::DriveAttach(class zUpFloatingObject * this /* r29 */, class xOGEntity * passenger /* r30 */, unsigned int flags /* r31 */) {
    // Local variables
    class xMat4x3 mat; // r1+0x88
    class xMat4x3 D; // r1+0x48
    class xVec3 euler; // r1+0x8
    class xMat3x3 a_descaled; // r1+0x18
}
// Range: 0x800F5E80 -> 0x800F5EB8
class xMat4x3 * zUpFloatingObject::DriveGetCurMat(class zUpFloatingObject * this /* r31 */) {
}
// signature: zUpFloatingObject::DriveCauseMove(xMat4x3 *, xMat4x3 *, xMat4x3 *, xMat4x3 *, bool, bool, float, float)
// Range: 0x800F5EC0 -> 0x800F5EC4
void zUpFloatingObject::DriveCauseMove() {
}
// signature: zUpFloatingObject_HandleEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800F5ED0 -> 0x800F5EE0
void zUpFloatingObject_HandleEvent(class xBase * from /* r0 */) {
}
// Range: 0x800F5EE0 -> 0x800F6220
void zUpFloatingObject_BalloonAdaptee::Notify_BalloonPopped(class zUpFloatingObject_BalloonAdaptee * this /* r28 */) {
    // References
    // -> class zBalloonGenerator * pInstance;
}
// signature: zUpFloatingObjectGenerator::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800F6230 -> 0x800F6288
void zUpFloatingObjectGenerator::HandleEvent() {
}
// Range: 0x800F6290 -> 0x800F6790
bool zUpFloatingObjectGenerator::ActivateNextAvailable(class zUpFloatingObjectGenerator * this /* r25 */, class xVec3 * positionOverride /* r26 */, class xVec3 * atOverride /* r27 */) {
    // Local variables
    unsigned int i; // r30
    class hkpRigidBody * rb; // r29
    class hkpWorld * havokWorld; // r28
    class hkMotionState motionState; // r1+0x270
    class hkpRigidBodyCinfo cinfo; // r1+0x1B0
    class hkTransform transform; // r1+0xB0
    class hkAabb aabb; // r1+0x90
    class hkVector4 v; // r1+0x80
    float length; // f0
    class xVec3 attempts[9]; // r1+0x13C
    class xVec3 pos; // r1+0x60

    {
        // Range: 0x800F6498 -> 0x800F6584
        // Local variables
        int n; // r22

        {
            // Range: 0x800F6498 -> 0x800F6584
            // Local variables
            class hkpAllCdBodyPairCollector collector; // r1+0x320
            class hkpCollisionInput * input; // r21
            class hkpCollidable collA; // r1+0xF0
            class hkVector4 pos; // r1+0x70
        }
    }
    {
        // Range: 0x800F6674 -> 0x800F66D4
        // Local variables
        class hkVector4 hkv; // r1+0x50
    }
    {
        // Range: 0x800F66D4 -> 0x800F6750
        // Local variables
        class xVec3 cordForce; // r1+0x40
    }

    // References
    // -> static float forceStrength;
}
// Range: 0x800F6880 -> 0x800F68F8
void zUpFloatingObjectGenerator::TimeStep(float dt /* f31 */) {
    {
        // Range: 0x800F68A8 -> 0x800F68C4
        // Local variables
        int i; // r29
    }
}
// Range: 0x800F6900 -> 0x800F694C
void zUpFloatingObjectGenerator::Stop(class zUpFloatingObjectGenerator * this /* r30 */, class zCommonPlayer * player /* r31 */) {
}
// Range: 0x800F6950 -> 0x800F6A08
void zUpFloatingObjectGenerator::ContextCheckForActivity(class zUpFloatingObjectGenerator * this /* r30 */, class zCommonPlayer * player /* r31 */) {
    {
        // Range: 0x800F696C -> 0x800F69F0
        // Local variables
        class zUpContextAction * ca; // r0
    }
}
// Range: 0x800F6A20 -> 0x800F6AF0
bool zUpFloatingObjectGenerator::CanStart(class zUpFloatingObjectGenerator * this /* r30 */, class zCommonPlayer * player /* r31 */) {
    // Local variables
    class hkVector4 hkPos; // r1+0x20
    class xVec3 pos; // r1+0x10
}
// signature: zUpFloatingObjectGenerator::Start(zCommonPlayer *)
// Range: 0x800F6AF0 -> 0x800F6AF4
void zUpFloatingObjectGenerator::Start() {
}
// signature: zUpFloatingObjectGenerator::Update(float)
// Range: 0x800F6B20 -> 0x800F6B24
void zUpFloatingObjectGenerator::Update() {
}
// Range: 0x800F6B30 -> 0x800F6D84
class Entity * Sext::zUpFloatingObjectGeneratorAsset::Create(class EntityHandleBase * handle /* r29 */, class zUpFloatingObjectGeneratorAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__32zUpFloatingObject_BalloonAdaptee;
    // -> struct {} __vt__26zUpFloatingObjectGenerator;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x800F6E50 -> 0x800F6E98
void zUpFloatingObjectGenerator::Init(class zUpFloatingObjectGenerator * this /* r30 */, void * inAsset /* r31 */) {
}
// Range: 0x800F6EA0 -> 0x800F7084
void zUpFloatingObjectGenerator::Setup(class zUpFloatingObjectGenerator * this /* r31 */) {
    // Local variables
    class xVec3 * v; // r30
    class hkpRigidBodyCinfo cinfo; // r1+0x10

    {
        // Range: 0x800F6FD8 -> 0x800F7058
        // Local variables
        int i; // r28

        {
            // Range: 0x800F6FD8 -> 0x800F7058
            // Local variables
            int * indices; // r5
            char * sName; // r4
            class zUpFloatingObject * pFloat; // r27
        }
    }

    // References
    // -> class zBalloonGenerator * pInstance;
}
// Range: 0x800F7090 -> 0x800F73AC
void zUpFloatingObjectGenerator::Reset(class zUpFloatingObjectGenerator * this /* r25 */) {
    {
        // Range: 0x800F70B0 -> 0x800F7388
        // Local variables
        int i; // r26
    }

    // References
    // -> class zBalloonGenerator * pInstance;
}
// Range: 0x800F73B0 -> 0x800F7494
void * zUpFloatingObjectGenerator::~zUpFloatingObjectGenerator(class zUpFloatingObjectGenerator * this /* r28 */) {
    {
        // Range: 0x800F73E0 -> 0x800F7408
        // Local variables
        int i; // r30
    }

    // References
    // -> struct {} __vt__26zUpFloatingObjectGenerator;
}
// Range: 0x800F74A0 -> 0x800F74F8
void UpFloatingObjectCollisionListener::Add(class UpFloatingObjectCollisionListener * this /* r30 */, class hkpRigidBody * rb /* r31 */) {
}
// signature: UpFloatingObjectCollisionListener::contactPointAddedCallback(hkpContactPointAddedEvent &)
// Range: 0x800F7500 -> 0x800F7504
void UpFloatingObjectCollisionListener::contactPointAddedCallback() {
}
// signature: UpFloatingObjectCollisionListener::entityDeletedCallback(hkpEntity *)
// Range: 0x800F7510 -> 0x800F7514
void UpFloatingObjectCollisionListener::entityDeletedCallback() {
}
// signature: UpFloatingObjectCollisionListener::entityRemovedCallback(hkpEntity *)
// Range: 0x800F7520 -> 0x800F7524
void UpFloatingObjectCollisionListener::entityRemovedCallback() {
}
// Range: 0x800F7530 -> 0x800F7978
static void CollideAndTransferEnergy(class hkVector4 & contactNormal /* r28 */, class hkpRigidBody * rbOtherObj /* r29 */, class hkpRigidBody * rbFloater /* r30 */) {
    // Local variables
    class zUpFloatingObject * floatingObject; // r0
    bool isBalloonAnimal; // r0
    bool destroyFloater; // r31
    class xBase * baseFloater; // r0
    class xBase * baseOther; // r0
    class hkVector4 vel; // r1+0x80

    {
        // Range: 0x800F758C -> 0x800F75B0
        // Local variables
        int snakeSphereIndex; // r0
    }
    {
        // Range: 0x800F76C4 -> 0x800F7754
        // Local variables
        class zUpFloatingObject * obj; // r0
    }
    {
        // Range: 0x800F7760 -> 0x800F795C
        // Local variables
        class hkVector4 pos; // r1+0x50
        class hkVector4 dVel; // r1+0x60
        class hkVector4 incomingVel; // r1+0x70
    }

    // References
    // -> static float reduceContactRatioHitter;
    // -> static float reduceContactRatioHitee;
    // -> class zTailTracker sSingleton;
}
// signature: UpFloatingObjectCollisionListener::contactPointConfirmedCallback(hkpContactPointConfirmedEvent &)
// Range: 0x800F7980 -> 0x800F7C40
void UpFloatingObjectCollisionListener::contactPointConfirmedCallback() {
    // Local variables
    class hkpRigidBody * rbA; // r31
    class hkpRigidBody * rbB; // r30
    class hkVector4 contactNormal; // r1+0x40
}
