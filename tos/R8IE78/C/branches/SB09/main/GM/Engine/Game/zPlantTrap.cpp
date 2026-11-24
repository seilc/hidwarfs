/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zPlantTrap.cpp
*/
static class xAnimTable * animPlantTables; // size: 0x4, address: 0x80754044
static float PLANTSPHEREOFFSET; // size: 0x4, address: 0x806C1BC8
static float PLANTBITE; // size: 0x4, address: 0x806C1BCC
int TotalChewCycles; // size: 0x4, address: 0x806C1BD0
float CaptureRadius; // size: 0x4, address: 0x806C1BD4
float WarnRadius; // size: 0x4, address: 0x806C1BD8
float HoldTime; // size: 0x4, address: 0x806C1BDC
float CooldownTime; // size: 0x4, address: 0x806C1BE0
int OriginalStrength; // size: 0x4, address: 0x806C1BE4
float playerTrapDamage; // size: 0x4, address: 0x806C1BE8
// Range: 0x8010C4D0 -> 0x8010C530
class Entity * Sext::zPlantTrapAsset::Create(class EntityHandleBase * handle /* r30 */, class zPlantTrapAsset * asset /* r31 */) {
}
// Range: 0x8010C530 -> 0x8010C5C8
void zPlantTrap::CreateCB(class zPlantTrap * this /* r31 */) {
}
// signature: zPlantTrap::zPlantTrap(World::EntityHandleBase *, Sext::zPlantTrapAsset *)
// Range: 0x8010C5D0 -> 0x8010C670
void * zPlantTrap::zPlantTrap(class zPlantTrap * this /* r30 */, class zPlantTrapAsset * inAsset /* r31 */) {
    // References
    // -> struct {} __vt__10zPlantTrap;
}
// Range: 0x8010C670 -> 0x8010C984
void zPlantTrap::Setup(class zPlantTrap * this /* r29 */) {
    // Local variables
    class xAnimTable * table; // r5
    class hkpRigidBodyCinfo havokCinfo; // r1+0x10

    {
        // Range: 0x8010C6F4 -> 0x8010C7D4
        // Local variables
        int x; // r30
    }

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> class zGlobals globals;
    // -> static class xAnimTable * animPlantTables;
    // -> class xGlobals * xglobals;
}
// Range: 0x8010C9A0 -> 0x8010C9D4
void zPlantTrap::LoadValuesFromAsset() {
    // References
    // -> int OriginalStrength;
}
// Range: 0x8010C9E0 -> 0x8010CAA4
void zPlantTrap::SetupModel(class zPlantTrap * this /* r31 */) {
    // Local variables
    class xVec3 p1; // r1+0x8
    class xMat4x3 mat; // r1+0x18
}
// Range: 0x8010CAB0 -> 0x8010CB70
void zPlantTrap::Reset(class zPlantTrap * this /* r29 */) {
    // References
    // -> int OriginalStrength;
}
// Range: 0x8010CB70 -> 0x8010CC54
void zPlantTrap::DebugReset(class zPlantTrap * this /* r29 */) {
    // Local variables
    class Vector * pos; // r0
    class hkVector4 havokPos; // r1+0x30
    class Quaternion quat; // r1+0x20
    class hkQuaternion havokQuat; // r1+0x10
}
// Range: 0x8010CC60 -> 0x8010CDBC
void zPlantTrap::ChangeState(class zPlantTrap * this /* r30 */, enum plantState newState /* r31 */) {
}
// signature: zPlantTrap::EventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8010CDC0 -> 0x8010CDD0
void zPlantTrap::EventWrapper(class xBase * from /* r0 */) {
}
// signature: zPlantTrap::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8010CDD0 -> 0x8010D028
void zPlantTrap::HandleEvent(class zPlantTrap * this /* r30 */, class xBase * from /* r29 */, unsigned int toEvent /* r31 */) {
}
// signature: zPlantTrap::SetVisible(bool)
// Range: 0x8010D030 -> 0x8010D048
void zPlantTrap::SetVisible() {
}
// Range: 0x8010D050 -> 0x8010D0FC
void zPlantTrap::Release(class zPlantTrap * this /* r30 */) {
    // References
    // -> float CooldownTime;
}
// Range: 0x8010D100 -> 0x8010D904
void zPlantTrap::Update(class zPlantTrap * this /* r28 */, float dt /* f31 */) {
    // Local variables
    class xVec3 p1; // r1+0x60

    {
        // Range: 0x8010D26C -> 0x8010D564
        // Local variables
        int i; // r29

        {
            // Range: 0x8010D26C -> 0x8010D564
            // Local variables
            class xVec3 playerPos; // r1+0x44
            class hkVector4 pos; // r1+0x50

            {
                // Range: 0x8010D26C -> 0x8010D26C
                // Local variables
                class zCommonPlayer * player; // r3

                {
                    // Range: 0x8010D26C -> 0x8010D26C
                    {
                        // Range: 0x8010D26C -> 0x8010D26C
                        // Local variables
                        class PlantWasDestroyed destroyEvent; // r1+0x10
                    }
                }
            }
        }
    }
    {
        // Range: 0x8010D884 -> 0x8010D8D8
        // Local variables
        class xMat4x3 mat; // r1+0x70
    }

    // References
    // -> class zPlayerInputPadMgr padManager;
    // -> class zGlobals globals;
    // -> int OriginalStrength;
    // -> float HoldTime;
    // -> float CaptureRadius;
    // -> float WarnRadius;
    // -> class xGlobals * xglobals;
    // -> static float PLANTSPHEREOFFSET;
}
// signature: zPlantTrap::UpdateSimpleObj(float)
// Range: 0x8010D930 -> 0x8010DC28
void zPlantTrap::UpdateSimpleObj(class zPlantTrap * this /* r25 */) {
    {
        // Range: 0x8010D960 -> 0x8010DBFC
        // Local variables
        int x; // r26

        {
            // Range: 0x8010D960 -> 0x8010DBFC
            // Local variables
            class xVec3 newPos; // r1+0x20

            {
                // Range: 0x8010D964 -> 0x8010D97C
                // Local variables
                class hkVector4 pos; // r1+0x10
                class xHavokPhysicsObject & physicsObject; // r20
            }
        }
    }

    // References
    // -> int TotalChewCycles;
    // -> float CaptureRadius;
    // -> float WarnRadius;
}
// signature: zPlantTrap::UpdateNPC(float)
// Range: 0x8010DC30 -> 0x8010DEDC
void zPlantTrap::UpdateNPC(class zPlantTrap * this /* r28 */) {
    {
        // Range: 0x8010DC4C -> 0x8010DEBC
        // Local variables
        unsigned int x; // r30

        {
            // Range: 0x8010DC4C -> 0x8010DEBC
            // Local variables
            class xVec3 npcPos; // r1+0x18
            class zNPCBase * npcBase; // r29

            {
                // Range: 0x8010DC64 -> 0x8010DC64
                // Local variables
                class EventNotifyTrap trapParams; // r1+0x8
                class xMat4x3 newNPCpos; // r1+0x28
            }
        }
    }

    // References
    // -> float HoldTime;
    // -> float CaptureRadius;
    // -> float WarnRadius;
}
// Range: 0x8010DEE0 -> 0x8010DEFC
class xOGModelRef * zPlantTrap::GetAttachModel() {
}
// Range: 0x8010DF00 -> 0x8010DF08
class xVec3 * zPlantTrap::GetAttachDPos() {
}
// signature: zPlantTrap::inSphere(xVec3 *, float)
// Range: 0x8010DF10 -> 0x8010DF64
bool zPlantTrap::inSphere() {
    // Local variables
    float dx; // f3
    float dy; // f6
    float dz; // f2

    // References
    // -> static float PLANTSPHEREOFFSET;
}
// Range: 0x8010DF70 -> 0x8010EA58
class xAnimTable * zPlantTrap::CreateAnimTable(unsigned long long animSetID /* r24:r23 */) {
    // Local variables
    class xAnimTable * table; // r31

    // References
    // -> static class xAnimTable * animPlantTables;
}
// signature: zPlantTrap::RemoveAnimTable(unsigned long long)
// Range: 0x8010EC20 -> 0x8010ECC4
void zPlantTrap::RemoveAnimTable() {
    // Local variables
    class xAnimTable * table; // r31
    class xAnimTable * prev; // r30

    // References
    // -> static class xAnimTable * animPlantTables;
}
// signature: zPlantTrap::GoToSpitCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8010ECD0 -> 0x8010ECE0
unsigned int zPlantTrap::GoToSpitCheck() {
}
// signature: zPlantTrap::DoneChewCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8010ECE0 -> 0x8010ED14
unsigned int zPlantTrap::DoneChewCheck() {
}
// signature: zPlantTrap::WarnCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8010ED20 -> 0x8010ED70
unsigned int zPlantTrap::WarnCheck() {
}
// signature: zPlantTrap::ProneOutCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8010ED70 -> 0x8010EE10
unsigned int zPlantTrap::ProneOutCheck(class zPlantTrap * this /* r31 */) {
}
// signature: zPlantTrap::EatCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8010EE10 -> 0x8010EE68
unsigned int zPlantTrap::EatCheck() {
}
// signature: zPlantTrap::IdleCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8010EE70 -> 0x8010EEB8
unsigned int zPlantTrap::IdleCheck() {
}
// signature: zPlantTrap::HitCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8010EEC0 -> 0x8010EED4
unsigned int zPlantTrap::HitCheck() {
}
// signature: zPlantTrap::SpitCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8010EEE0 -> 0x8010F1AC
unsigned int zPlantTrap::SpitCheck(class zPlantTrap * this /* r27 */) {
    {
        // Range: 0x8010EF10 -> 0x8010F17C
        // Local variables
        class hkVector4 blockPos; // r1+0x20
        class hkVector4 newVelocity; // r1+0x30
        float iz; // f3
        float ix; // f30
        float iy; // f31
        float mass; // f0
        class xHavokPhysicsObject & physicsObject; // r28
        class xVec3 newPos; // r1+0x40
        int x; // r0
    }

    // References
    // -> float CooldownTime;
}
// signature: zPlantTrap::ReleaseCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8010F1B0 -> 0x8010F1F4
unsigned int zPlantTrap::ReleaseCheck() {
    // Local variables
    bool holdingSomething; // r4
}
// signature: zPlantTrap::SnapCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8010F200 -> 0x8010F228
unsigned int zPlantTrap::SnapCheck() {
}
// signature: zPlantTrap::SnapEntityCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8010F230 -> 0x8010F258
unsigned int zPlantTrap::SnapEntityCheck() {
}
// Range: 0x8010F260 -> 0x8010F2E0
class zFXSpawn * zPlantTrap::EmitEffect(class zFXSpawn * fx /* r29 */, class xMat4x3 & location /* r30 */) {
    // Local variables
    class zFXSpawn * fxSpawn; // r31
}
// signature: zPlantTrap::DriveCauseMove(xMat4x3 *, xMat4x3 *, xMat4x3 *, xMat4x3 *, bool, bool, float, float)
// Range: 0x8010F2E0 -> 0x8010F3A0
void zPlantTrap::DriveCauseMove(class zPlantTrap * this /* r29 */, class xMat4x3 * parent /* r0 */, class xMat4x3 * oldMat /* r30 */) {
    // Local variables
    class xMat4x3 newMat; // r1+0x40
    class xMat4x3 * pMat; // r30
    class xQuat quat; // r1+0x30
}
// signature: zPlantTrap::CustomBehavior::CustomBehavior(zPlantTrap *)
// Range: 0x8010F3A0 -> 0x8010F3CC
void * zPlantTrap::CustomBehavior::CustomBehavior() {
    // References
    // -> struct {} __vt__Q210zPlantTrap14CustomBehavior;
}
// Range: 0x8010F3D0 -> 0x8010F42C
void * zPlantTrap::CustomBehavior::~CustomBehavior(class CustomBehavior * this /* r30 */) {
    // References
    // -> struct {} __vt__Q210zPlantTrap14CustomBehavior;
}
// Range: 0x8010F430 -> 0x8010F510
void zPlantTrap::CustomBehavior::PlayerReleased(class CustomBehavior * this /* r30 */) {
    // Local variables
    class hkVector4 pos; // r1+0x30
}
// Range: 0x8010F510 -> 0x8010F644
void zPlantTrap::CustomBehavior::SetupCaptureSpheres(class CustomBehavior * this /* r31 */) {
    // Local variables
    class xVec3 p1; // r1+0x38
    class xVec3 leafVec; // r1+0x2C

    {
        // Range: 0x8010F59C -> 0x8010F62C
        // Local variables
        unsigned int i; // r27
    }
}
// signature: zPlantTrap::CustomBehavior::inCaptureSpheres(xVec3 *)
// Range: 0x8010F650 -> 0x8010F6D0
bool zPlantTrap::CustomBehavior::inCaptureSpheres() {
    {
        // Range: 0x8010F654 -> 0x8010F6C8
        // Local variables
        unsigned int i; // r0

        {
            // Range: 0x8010F654 -> 0x8010F6C8
            // Local variables
            float dz; // f2
            float dy; // f3
            float dx; // f6
        }
    }

    // References
    // -> static float PLANTSPHEREOFFSET;
}
// Range: 0x8010F6D0 -> 0x8010F8A0
void zPlantTrap::CustomBehavior::PlayerTrapped(class CustomBehavior * this /* r31 */) {
    // Local variables
    class zCombatDamageInfo damageInfo; // r1+0x70
    class hkVector4 pos; // r1+0x60

    // References
    // -> float playerTrapDamage;
    // -> class xVec3 m_Null;
    // -> static float PLANTBITE;
}
// signature: zSBKelpTrapBehavior::zSBKelpTrapBehavior(zPlantTrap *)
// Range: 0x8010F8A0 -> 0x8010F8E4
void * zSBKelpTrapBehavior::zSBKelpTrapBehavior(class zSBKelpTrapBehavior * this /* r31 */) {
    // References
    // -> struct {} __vt__19zSBKelpTrapBehavior;
}
// signature: zSBKelpTrapBehavior::PreUpdate(float)
// Range: 0x8010F8F0 -> 0x8010F9B4
void zSBKelpTrapBehavior::PreUpdate(class zSBKelpTrapBehavior * this /* r31 */) {
    {
        // Range: 0x8010F918 -> 0x8010F9A0
        // Local variables
        class zCombatDamageInfo damageInfo; // r1+0x10
    }

    // References
    // -> class xVec3 m_Null;
    // -> static float PLANTBITE;
}
// signature: zSBKelpTrapBehavior::PlayerInteractsWithTrap(zCommonPlayer *)
// Range: 0x8010F9C0 -> 0x8010F9D4
bool zSBKelpTrapBehavior::PlayerInteractsWithTrap() {
}
// Range: 0x8010F9E0 -> 0x8010FB64
void zSBKelpTrapBehavior::PlayerTrapped(class zSBKelpTrapBehavior * this /* r31 */) {
    // Local variables
    class hkVector4 pos; // r1+0x60
    class zSBPlayer * sb; // r0
}
// signature: zSBKelpTrapBehavior::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8010FB70 -> 0x8010FBF8
bool zSBKelpTrapBehavior::HandleEvent(class zSBKelpTrapBehavior * this /* r31 */) {
    {
        // Range: 0x8010FBA8 -> 0x8010FBD8
        // Local variables
        class PlantWasDestroyed destroyEvent; // r1+0x8
    }
}
// Range: 0x8010FC00 -> 0x8010FD2C
void zSBKelpTrapBehavior::Destroy(class zSBKelpTrapBehavior * this /* r31 */) {
    // Local variables
    class zFXSpawn * mowFXAsset; // r30
    class zCollectibleSpawner * spawner; // r0

    {
        // Range: 0x8010FC98 -> 0x8010FD08
        // Local variables
        class xVec3 pos; // r1+0x8
        class xVec3 scale; // r1+0x14
    }
}
