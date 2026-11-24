/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zSnare.cpp
*/
static class xAnimTable * animTrapTables; // size: 0x4, address: 0x8081A58C
// signature: zTrapEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800C9340 -> 0x800C935C
static void zTrapEventWrapper(class xBase * from /* r0 */) {
}
// signature: zTrap::Init(void *)
// Range: 0x800C9360 -> 0x800C9984
void zTrap::Init(class zTrap * this /* r27 */) {
    // Local variables
    class zTrapAsset * typAsset; // r28

    // References
    // -> class xOGModelUpdater g_modelUpdateNone;
    // -> unsigned long long simpleShadowID;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class xMat4x3 g_I3;
    // -> class WiiFastHeap wiiFastHeap;
}
// Range: 0x800C9A20 -> 0x800C9B6C
void zTrap::Setup(class zTrap * this /* r31 */) {
    // Local variables
    class xAnimTable * table; // r5
    class EntityHandleBase * goodie; // r0

    // References
    // -> class zGlobals globals;
    // -> static class xAnimTable * animTrapTables;
}
// Range: 0x800C9B70 -> 0x800C9F90
void zTrap::SetupModels(class zTrap * this /* r30 */) {
    // Local variables
    class xVec3 k1; // r1+0x1C
    class xVec3 p1; // r1+0x10
    class xMat4x3 mat; // r1+0x28
    class hkpRigidBodyCinfo havokCinfo; // r1+0x70

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> class Scene * primaryScene;
}
// Range: 0x800C9F90 -> 0x800CA054
void zTrap::Reset(class zTrap * this /* r28 */) {
    // References
    // -> class Scene * primaryScene;
}
// signature: zTrap::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800CA060 -> 0x800CA614
void zTrap::HandleEvent(class zTrap * this /* r25 */) {
    {
        // Range: 0x800CA228 -> 0x800CA544
        // Local variables
        float secondDist; // f31
        float firstDist; // r31
        int secondCandidate; // r0
        int firstCandidate; // r27

        {
            // Range: 0x800CA244 -> 0x800CA3D8
            // Local variables
            int x; // r26

            {
                // Range: 0x800CA244 -> 0x800CA3D8
                // Local variables
                float dz; // f2
                float dy; // f7
                float dx; // f6
                class xVec3 snarePos; // r1+0x40
                class hkVector4 pos; // r1+0x50
            }
        }
        {
            // Range: 0x800CA3F4 -> 0x800CA538
            // Local variables
            class hkVector4 pos; // r1+0x30
        }
    }

    // References
    // -> class zPlayerInventory inventory;
    // -> class xVec3 m_Null;
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// Range: 0x800CA630 -> 0x800CA70C
class Entity * Sext::zTrapAsset::Create(class EntityHandleBase * handle /* r29 */, class zTrapAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__5zTrap;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: zTrap::Update(float)
// Range: 0x800CA720 -> 0x800CA800
void zTrap::Update(class zTrap * this /* r26 */) {
    {
        // Range: 0x800CA754 -> 0x800CA7D4
        // Local variables
        int x; // r27
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800CA800 -> 0x800CA81C
class xVec3 zTrap::getDirToKnot() {
}
// Range: 0x800CA820 -> 0x800CA8C8
void * zTrap::~zTrap(class zTrap * this /* r30 */) {
    // References
    // -> struct {} __vt__5zTrap;
}
// Range: 0x800CA8D0 -> 0x800CBA1C
void zTrap::TimeStep(class zTrap * this /* r28 */, float dt /* f31 */) {
    {
        // Range: 0x800CAA24 -> 0x800CAB34
        // Local variables
        float dif; // f3
        float change; // f0
        float maxDegrees; // f2
    }

    // References
    // -> float dt;
    // -> class Renderable3DTransform g_identity;
    // -> class xGlobals * xglobals;
}
// signature: zTrap::CanUntie(zUPPlayer *)
// Range: 0x800CBA20 -> 0x800CBAE8
bool zTrap::CanUntie(class zTrap * this /* r31 */) {
    {
        // Range: 0x800CBA40 -> 0x800CBACC
        // Local variables
        float dz; // f3
        float dy; // f3
        float dx; // f4
        class hkVector4 pos; // r1+0x10
    }
}
// Range: 0x800CBAF0 -> 0x800CBD0C
void zTrap::ContextCheckForActivity(class zTrap * this /* r30 */, class zCommonPlayer * player /* r31 */) {
    {
        // Range: 0x800CBB14 -> 0x800CBCAC
        // Local variables
        unsigned int currentAction; // r0

        {
            // Range: 0x800CBB78 -> 0x800CBCAC
            // Local variables
            class zUpContextAction * ca; // r0

            {
                // Range: 0x800CBC4C -> 0x800CBC98
                // Local variables
                int x; // r26
            }
        }
    }
    {
        // Range: 0x800CBCAC -> 0x800CBCF8
        // Local variables
        class zUpContextAction * ca; // r0
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zTrap::GetStartPosition(zCommonPlayer *, xVec3 &)
// Range: 0x800CBD20 -> 0x800CBD40
void zTrap::GetStartPosition() {
}
// signature: zTrap::GetStartDirection(zCommonPlayer *, xVec3 &)
// Range: 0x800CBD40 -> 0x800CBD60
void zTrap::GetStartDirection() {
}
// signature: zTrap::GetAnimPackage(ePlayerName)
// Range: 0x800CBD60 -> 0x800CBD9C
class zAnimPackage * zTrap::GetAnimPackage() {
}
// Range: 0x800CBDA0 -> 0x800CC214
class xAnimTable * zTrap::CreateAnimTable(unsigned long long animSetID /* r27:r26 */) {
    // Local variables
    class xAnimTable * table; // r25

    // References
    // -> static class xAnimTable * animTrapTables;
}
// signature: zTrap::RemoveAnimTable(unsigned long long)
// Range: 0x800CC2B0 -> 0x800CC364
void zTrap::RemoveAnimTable() {
    // Local variables
    class xAnimTable * table; // r31
    class xAnimTable * prev; // r30

    // References
    // -> static class xAnimTable * animTrapTables;
}
// Range: 0x800CC380 -> 0x800CC3D0
void zTrip::Init(class zTrip * this /* r30 */, void * inAsset /* r31 */) {
}
// Range: 0x800CC3D0 -> 0x800CC454
void zTrip::Setup(class zTrip * this /* r31 */) {
}
// Range: 0x800CC460 -> 0x800CC4B8
void zTrip::Reset(class zTrip * this /* r31 */) {
}
// signature: zTrip::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800CC4C0 -> 0x800CC5C4
void zTrip::HandleEvent(class zTrip * this /* r29 */) {
}
// Range: 0x800CC5D0 -> 0x800CC6AC
class Entity * Sext::zTripAsset::Create(class EntityHandleBase * handle /* r29 */, class zTripAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__5zTrip;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: zTrip::Update(float)
// Range: 0x800CC6B0 -> 0x800CC6B4
void zTrip::Update() {
}
// signature: zTrip::TimeStep(float)
// Range: 0x800CC6C0 -> 0x800CC838
void zTrip::TimeStep(class zTrip * this /* r28 */) {
    // Local variables
    class xVec3 p1; // r1+0x30

    {
        // Range: 0x800CC704 -> 0x800CC804
        // Local variables
        int x; // r29

        {
            // Range: 0x800CC704 -> 0x800CC804
            // Local variables
            class xVec3 posVec; // r1+0x10
            class hkVector4 pos; // r1+0x20
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zTrip::CheckPointInProximityTrip(const xVec3 &)
// Range: 0x800CC840 -> 0x800CC9C0
bool zTrip::CheckPointInProximityTrip(class zTrip * this /* r30 */) {
    // Local variables
    class xVec3 tripPos; // r1+0x14
    float distSquared; // f0

    {
        // Range: 0x800CC928 -> 0x800CC974
        // Local variables
        class zTrap * trapToMessage; // r0
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800CC9D0 -> 0x800CCE28
void zTrap::DrawBetweenPoints(class zTrap * this /* r28 */, class xVec3 & start /* r29 */, class xVec3 & end /* r30 */) {
    // Local variables
    class xVec3 leftStart; // r1+0xA8
    class xVec3 rightStart; // r1+0x9C
    class xVec3 leftEnd; // r1+0x90
    class xVec3 rightEnd; // r1+0x84
    class xVec3 leftStart1; // r1+0x78
    class xVec3 rightStart1; // r1+0x6C
    class xVec3 leftEnd1; // r1+0x60
    class xVec3 rightEnd1; // r1+0x54
    class xMat4x3 cameraMatrix; // r1+0xD8
    class xVec3 ropeVec; // r1+0x48
    float ropeLen; // f31
    class xVec3 ropeAt; // r1+0x3C
    class xVec3 ropeRight; // r1+0x30
    float crossLen; // f0
    class ImmediateContext immCtxt; // r1+0xB8
    class xVec3 dirVec; // r1+0x24
    class Renderable3D * rend; // r27
}
