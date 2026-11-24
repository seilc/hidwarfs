/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zManEatingPlant.cpp
*/
static class xAnimTable * animPlantTables; // size: 0x4, address: 0x8081A590
static float PLANTSPHEREOFFSET; // size: 0x4, address: 0x807A31C4
static float TIMETOBITE; // size: 0x4, address: 0x807A31C8
static float PLANTBITE; // size: 0x4, address: 0x807A31CC
float CaptureRadius; // size: 0x4, address: 0x807A31D0
float WarnRadius; // size: 0x4, address: 0x807A31D4
float HoldTime; // size: 0x4, address: 0x807A31D8
float CooldownTime; // size: 0x4, address: 0x807A31DC
float miniTrigRadius; // size: 0x4, address: 0x807A31E0
int OriginalStrength; // size: 0x4, address: 0x807A31E4
int TotalChewCycles; // size: 0x4, address: 0x807A31E8
// signature: zManEatingPlant::Init(void *)
// Range: 0x800CCE90 -> 0x800CD1DC
void zManEatingPlant::Init(class zManEatingPlant * this /* r27 */) {
    // Local variables
    class zManEatingPlantAsset * typAsset; // r28

    // References
    // -> unsigned long long simpleShadowID;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class xMat4x3 g_I3;
    // -> class WiiFastHeap wiiFastHeap;
}
// Range: 0x800CD1E0 -> 0x800CD524
void zManEatingPlant::Setup(class zManEatingPlant * this /* r28 */) {
    // Local variables
    class xAnimTable * table; // r5
    class hkpRigidBodyCinfo havokCinfo; // r1+0x10

    {
        // Range: 0x800CD264 -> 0x800CD320
        // Local variables
        int x; // r29
    }

    // References
    // -> int OriginalStrength;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> class zGlobals globals;
    // -> static class xAnimTable * animPlantTables;
    // -> class xGlobals * xglobals;
}
// Range: 0x800CD530 -> 0x800CD8D4
void zManEatingPlant::SetupModel(class zManEatingPlant * this /* r31 */) {
    // Local variables
    class xVec3 p1; // r1+0x5C
    class xMat4x3 mat; // r1+0x68
    class xVec3 leafVec; // r1+0x50

    {
        // Range: 0x800CD714 -> 0x800CD864
        // Local variables
        int leaf; // r29
    }

    // References
    // -> class Scene * primaryScene;
}
// Range: 0x800CD8E0 -> 0x800CD9D8
void zManEatingPlant::Reset(class zManEatingPlant * this /* r29 */) {
    // References
    // -> int OriginalStrength;
}
// signature: zManEatingPlant::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800CD9E0 -> 0x800CDE90
void zManEatingPlant::HandleEvent(class zManEatingPlant * this /* r31 */) {
    // References
    // -> static float TIMETOBITE;
    // -> int OriginalStrength;
}
// Range: 0x800CDE90 -> 0x800CDF6C
class Entity * Sext::zManEatingPlantAsset::Create(class EntityHandleBase * handle /* r29 */, class zManEatingPlantAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__15zManEatingPlant;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: zManEatingPlant::Update(float)
// Range: 0x800CDF70 -> 0x800CDF74
void zManEatingPlant::Update() {
}
// Range: 0x800CDF80 -> 0x800CE0AC
void zManEatingPlant::Release(class zManEatingPlant * this /* r27 */) {
    {
        // Range: 0x800CDFCC -> 0x800CE074
        // Local variables
        int x; // r28
    }

    // References
    // -> float CooldownTime;
    // -> class xGlobals * xglobals;
}
// Range: 0x800CE0C0 -> 0x800CF3D8
void zManEatingPlant::TimeStep(class zManEatingPlant * this /* r15 */, float dt /* f30 */) {
    // Local variables
    class xVec3 p1; // r1+0xA8

    {
        // Range: 0x800CE204 -> 0x800CE988
        // Local variables
        int x; // r22

        {
            // Range: 0x800CE204 -> 0x800CE988
            // Local variables
            class xVec3 posx; // r1+0x90

            {
                // Range: 0x800CE204 -> 0x800CE208
                // Local variables
                int y; // r23

                {
                    // Range: 0x800CE204 -> 0x800CE208
                    // Local variables
                    class xVec3 posx; // r1+0x9C
                }
            }
            {
                // Range: 0x800CE234 -> 0x800CE234
                // Local variables
                class hkVector4 pos; // r1+0x80
            }
        }
    }
    {
        // Range: 0x800CE9B0 -> 0x800CED94
        // Local variables
        int x; // r16

        {
            // Range: 0x800CE9B0 -> 0x800CED94
            // Local variables
            class xVec3 newPos; // r1+0x70

            {
                // Range: 0x800CE9B4 -> 0x800CED6C
                // Local variables
                class hkVector4 pos; // r1+0x60
                class xHavokPhysicsObject & physicsObject; // r17
            }
        }
    }
    {
        // Range: 0x800CEDB0 -> 0x800CF118
        // Local variables
        unsigned int x; // r16

        {
            // Range: 0x800CEDB0 -> 0x800CF118
            // Local variables
            class xVec3 npcPos; // r1+0x50
            class zNPCBase * npcBase; // r17

            {
                // Range: 0x800CEDD0 -> 0x800CEDD0
                // Local variables
                class EventNotifyTrap trapParams; // r1+0x40
                class xMat4x3 newNPCpos; // r1+0x130
            }
        }
    }
    {
        // Range: 0x800CF300 -> 0x800CF3A4
        // Local variables
        class xMat4x3 mat; // r1+0xF0
    }

    // References
    // -> int OriginalStrength;
    // -> int TotalChewCycles;
    // -> class Scene * primaryScene;
    // -> static float PLANTBITE;
    // -> class xVec3 m_Null;
    // -> float CaptureRadius;
    // -> float HoldTime;
    // -> static float TIMETOBITE;
    // -> float WarnRadius;
    // -> class xGlobals * xglobals;
    // -> static float PLANTSPHEREOFFSET;
}
// signature: zManEatingPlant::ContextCheckForActivity(zCommonPlayer *)
// Range: 0x800CF400 -> 0x800CF430
void zManEatingPlant::ContextCheckForActivity() {
}
// Range: 0x800CF430 -> 0x800CF44C
class xOGModel * zManEatingPlant::GetAttachModel() {
}
// Range: 0x800CF460 -> 0x800CF468
class xVec3 * zManEatingPlant::GetAttachDPos() {
}
// signature: zManEatingPlant::inSpheres(xVec3 *)
// Range: 0x800CF470 -> 0x800CF558
bool zManEatingPlant::inSpheres() {
    {
        // Range: 0x800CF470 -> 0x800CF4DC
        // Local variables
        int leaf; // r0

        {
            // Range: 0x800CF470 -> 0x800CF4DC
            // Local variables
            float dz; // f2
            float dy; // f7
            float dx; // f3
        }
    }
    {
        // Range: 0x800CF4DC -> 0x800CF550
        // Local variables
        int leaf; // r0

        {
            // Range: 0x800CF4DC -> 0x800CF550
            // Local variables
            float dz; // f2
            float dy; // f7
            float dx; // f3
        }
    }

    // References
    // -> static float PLANTSPHEREOFFSET;
    // -> float miniTrigRadius;
}
// signature: zManEatingPlant::GetAnimPackage(ePlayerName)
// Range: 0x800CF580 -> 0x800CF5CC
class zAnimPackage * zManEatingPlant::GetAnimPackage() {
}
// Range: 0x800CF5D0 -> 0x800D00F4
class xAnimTable * zManEatingPlant::CreateAnimTable(unsigned long long animSetID /* r24:r23 */) {
    // Local variables
    class xAnimTable * table; // r31

    // References
    // -> static class xAnimTable * animPlantTables;
}
// signature: zManEatingPlant::RemoveAnimTable(unsigned long long)
// Range: 0x800D04C0 -> 0x800D0574
void zManEatingPlant::RemoveAnimTable() {
    // Local variables
    class xAnimTable * table; // r31
    class xAnimTable * prev; // r30

    // References
    // -> static class xAnimTable * animPlantTables;
}
// signature: zManEatingPlant::SpitCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800D0580 -> 0x800D08F8
unsigned int zManEatingPlant::SpitCheck(class zManEatingPlant * this /* r29 */) {
    {
        // Range: 0x800D05B0 -> 0x800D08C8
        // Local variables
        class hkVector4 blockPos; // r1+0x20
        class hkVector4 newVelocity; // r1+0x30
        float iz; // f0
        float ix; // f30
        float iy; // f31
        float mass; // f0
        class xHavokPhysicsObject & physicsObject; // r30
        class xVec3 newPos; // r1+0x40
        class xVec3 pos; // r1+0x4C
        int x; // r0
    }

    // References
    // -> float CooldownTime;
    // -> class Scene * primaryScene;
}
