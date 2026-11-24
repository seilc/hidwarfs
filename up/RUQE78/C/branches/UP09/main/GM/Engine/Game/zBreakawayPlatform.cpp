/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zBreakawayPlatform.cpp
*/
static class xAnimTable * animTables; // size: 0x4, address: 0x8081A4EC
// signature: @unnamed@WAD01_cpp@::BreakawayPlatformEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800B0F00 -> 0x800B0F1C
static void @unnamed@WAD01_cpp@::BreakawayPlatformEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x800B0F20 -> 0x800B1058
void zBreakawayPlatform::SetMovePoint(class zBreakawayPlatform * this /* r31 */, class xMovePoint * mp /* r30 */) {
    // Local variables
    class xVec3 heading; // r1+0x14

    {
        // Range: 0x800B0F6C -> 0x800B0FE4
        // Local variables
        class xMat3x3 tempmat; // r1+0x20
        class xVec3 tempdir; // r1+0x8
    }
}
// Range: 0x800B1060 -> 0x800B133C
void zBreakawayPlatform::Init(class zBreakawayPlatform * this /* r27 */, class zBreakawayPlatformAsset * asset /* r28 */) {
    // References
    // -> unsigned long long simpleShadowID;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class xMat4x3 g_I3;
    // -> class WiiFastHeap wiiFastHeap;
}
// Range: 0x800B1340 -> 0x800B1518
void zBreakawayPlatform::Setup(class zBreakawayPlatform * this /* r31 */) {
    // Local variables
    class xBox boundingBox; // r1+0x80

    {
        // Range: 0x800B135C -> 0x800B13F4
        // Local variables
        class xAnimTable * table; // r5
    }

    // References
    // -> class zGlobals globals;
    // -> static class xAnimTable * animTables;
}
// Range: 0x800B1560 -> 0x800B1770
void zBreakawayPlatform::DebugReset(class zBreakawayPlatform * this /* r31 */) {
    {
        // Range: 0x800B15A0 -> 0x800B1660
        // Local variables
        class xAnimTable * table; // r5
    }

    // References
    // -> class zGlobals globals;
    // -> static class xAnimTable * animTables;
}
// Range: 0x800B1770 -> 0x800B1C64
void zBreakawayPlatform::Reset(class zBreakawayPlatform * this /* r30 */, bool inPlace /* r27 */) {
}
// Range: 0x800B1C70 -> 0x800B1D1C
bool zBreakawayPlatform::ShouldMove(class zBreakawayPlatform * this /* r29 */) {
}
// Range: 0x800B1D20 -> 0x800B26B8
void zBreakawayPlatform::Move(class zBreakawayPlatform * this /* r31 */, float dt /* f31 */) {
    // Local variables
    float newdist; // f1
    class xVec3 tgt; // r1+0x6C
    class xVec3 scale; // r1+0x60

    {
        // Range: 0x800B1ED4 -> 0x800B2490
        // Local variables
        float u; // f30
        float qdot; // f1
        class xVec3 bank; // r1+0x24
        class xVec3 direction; // r1+0x30
        class xMat3x3 tmpmat; // r1+0x78
        class xQuat qold; // r1+0x40
        class xQuat quat; // r1+0x50

        {
            // Range: 0x800B1EF0 -> 0x800B2490
            {
                // Range: 0x800B2004 -> 0x800B2220
                // Local variables
                class xVec3 gravity; // r1+0x18
            }
        }
    }
    {
        // Range: 0x800B24F8 -> 0x800B267C
        // Local variables
        class xQuat quat; // r1+0x8
    }

    // References
    // -> class zGlobals globals;
}
// signature: zBreakawayPlatform::Mounted(xEnt *)
// Range: 0x800B26C0 -> 0x800B2810
void zBreakawayPlatform::Mounted(class zBreakawayPlatform * this /* r31 */) {
    {
        // Range: 0x800B270C -> 0x800B27A4
        // Local variables
        float maxDisp; // f0
        class xVec3 boundSize; // r1+0x8
    }
}
// Range: 0x800B2810 -> 0x800B293C
void zBreakawayPlatform::SetVisible(class zBreakawayPlatform * this /* r25 */, bool vis /* r26 */) {
    // References
    // -> class Scene * primaryScene;
}
// signature: zBreakawayPlatform::SetCollision(bool)
// Range: 0x800B2940 -> 0x800B29C0
void zBreakawayPlatform::SetCollision(class zBreakawayPlatform * this /* r30 */) {
}
// Range: 0x800B29C0 -> 0x800B2B98
void zBreakawayPlatform::SetupWarn(class zBreakawayPlatform * this /* r31 */) {
}
// Range: 0x800B2BA0 -> 0x800B2FF8
void zBreakawayPlatform::SetupDisappear(class zBreakawayPlatform * this /* r31 */) {
}
// Range: 0x800B3040 -> 0x800B351C
void zBreakawayPlatform::SetupReappear(class zBreakawayPlatform * this /* r31 */) {
}
// Range: 0x800B3520 -> 0x800B38C8
void zBreakawayPlatform::UpdateWarn(class zBreakawayPlatform * this /* r30 */, float dt /* f31 */) {
    {
        // Range: 0x800B36E8 -> 0x800B38A8
        // Local variables
        float b; // f1
        float g; // f3
        float r; // f6
        float fraction; // f8
    }
}
// Range: 0x800B38D0 -> 0x800B3DB0
void zBreakawayPlatform::UpdateDisappear(class zBreakawayPlatform * this /* r30 */, float dt /* f31 */) {
    {
        // Range: 0x800B399C -> 0x800B39F0
        // Local variables
        float delta; // f2
    }
    {
        // Range: 0x800B3AE0 -> 0x800B3D0C
        // Local variables
        float alpha; // f1
    }
}
// Range: 0x800B3DB0 -> 0x800B4158
void zBreakawayPlatform::UpdateReappear(class zBreakawayPlatform * this /* r30 */, float dt /* f31 */) {
    {
        // Range: 0x800B3F04 -> 0x800B40F8
        // Local variables
        float alpha; // f1
    }
}
// Range: 0x800B4160 -> 0x800B4464
void zBreakawayPlatform::ChangeState(class zBreakawayPlatform * this /* r25 */, unsigned int newState /* r26 */) {
    // References
    // -> class Scene * primaryScene;
}
// Range: 0x800B4470 -> 0x800B4B0C
void zBreakawayPlatform::Update(class zBreakawayPlatform * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class xMat4x3 tmpMat; // r1+0x80

    {
        // Range: 0x800B4A68 -> 0x800B4AE8
        // Local variables
        class xQuat quat; // r1+0x40
        class xMat4x3 * pMat; // r30
    }

    // References
    // -> class Scene * primaryScene;
}
// signature: zBreakawayPlatform::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800B4B10 -> 0x800B5088
void zBreakawayPlatform::HandleEvent(class zBreakawayPlatform * this /* r29 */, class EventAny * genericParams /* r26 */) {
    {
        // Range: 0x800B4CE4 -> 0x800B4D9C
        // Local variables
        class xOGEntity * possibleDriver; // r4
        unsigned int flags; // r27
        class EventActionDrivenBy * params; // r0
    }
    {
        // Range: 0x800B4F90 -> 0x800B4FE8
        // Local variables
        class EventActionOneFloat * params; // r0

        {
            // Range: 0x800B4FC4 -> 0x800B4FE4
            // Local variables
            class FloatAndVoid dist; // r1+0x8
        }
    }

    // References
    // -> class zGlobals globals;
    // -> class Scene * primaryScene;
}
// Range: 0x800B5090 -> 0x800B5384
class xAnimTable * zBreakawayPlatform::CreateAnimTable(unsigned long long animSetID /* r28:r27 */) {
    // Local variables
    class xAnimTable * table; // r26

    // References
    // -> static class xAnimTable * animTables;
}
// signature: zBreakawayPlatform::RemoveAnimTable(unsigned long long)
// Range: 0x800B5420 -> 0x800B54D4
void zBreakawayPlatform::RemoveAnimTable() {
    // Local variables
    class xAnimTable * table; // r31
    class xAnimTable * prev; // r30

    // References
    // -> static class xAnimTable * animTables;
}
// Range: 0x800B54E0 -> 0x800B56F0
class Entity * Sext::zBreakawayPlatformAsset::Create(class EntityHandleBase * handle /* r29 */, class zBreakawayPlatformAsset * asset /* r30 */) {
    // References
    // -> class xMat4x3 g_I3;
    // -> struct {} __vt__11zCollidable;
    // -> struct {} __vt__18zBreakawayPlatform;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x800B5760 -> 0x800B5C64
void zBreakawayPlatform::DriveAttach(class zBreakawayPlatform * this /* r29 */, class xOGEntity * passenger /* r30 */, unsigned int flags /* r31 */) {
    // Local variables
    class xMat4x3 D; // r1+0x48
    class xVec3 euler; // r1+0x8
    class xMat3x3 a_descaled; // r1+0x18
}
// Range: 0x800B5C70 -> 0x800B5C78
class xMat4x3 * zBreakawayPlatform::DriveGetCurMat() {
}
// signature: zBreakawayPlatform::DriveCauseMove(xMat4x3 *, xMat4x3 *, xMat4x3 *, xMat4x3 *, bool, bool, float, float)
// Range: 0x800B5C80 -> 0x800B6148
void zBreakawayPlatform::DriveCauseMove(class zBreakawayPlatform * this /* r27 */, class xMat4x3 * parent /* r28 */, class xMat4x3 * oldMat /* r29 */, bool rotate /* r30 */, bool yaw /* r31 */, float givenYaw /* f31 */) {
    // Local variables
    class xMat4x3 baseMat; // r1+0x78
    class xVec3 newEuler; // r1+0x8

    {
        // Range: 0x800B5CC4 -> 0x800B5FC0
        // Local variables
        class xMat3x3 a_descaled; // r1+0x48
    }
    {
        // Range: 0x800B5FC0 -> 0x800B6104
        // Local variables
        class xMat3x3 rot; // r1+0x18

        {
            // Range: 0x800B5FD0 -> 0x800B5FE8
            // Local variables
            float yawDiff; // f1
        }
    }
}
