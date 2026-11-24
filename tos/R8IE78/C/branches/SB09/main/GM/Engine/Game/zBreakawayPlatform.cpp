/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zBreakawayPlatform.cpp
*/
static class xAnimTable * animTables; // size: 0x4, address: 0x807311C8
// signature: @unnamed@WAD01_cpp@::BreakawayPlatformEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80074EA0 -> 0x80074EBC
static void @unnamed@WAD01_cpp@::BreakawayPlatformEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x80074EC0 -> 0x80074FDC
void zBreakawayPlatform::SetMovePoint(class zBreakawayPlatform * this /* r31 */, class xMovePoint * mp /* r30 */) {
    // Local variables
    class xVec3 heading; // r1+0x14

    {
        // Range: 0x80074F24 -> 0x80074F68
        // Local variables
        class xMat3x3 tempmat; // r1+0x20
        class xVec3 tempdir; // r1+0x8
    }
}
// Range: 0x80074FE0 -> 0x800750FC
void zBreakawayPlatform::Init(class zBreakawayPlatform * this /* r30 */, class zBreakawayPlatformAsset * asset /* r31 */) {
}
// Range: 0x80075100 -> 0x80075164
void zBreakawayPlatform::SceneExit(class zBreakawayPlatform * this /* r31 */) {
}
// Range: 0x80075170 -> 0x80075314
void zBreakawayPlatform::Setup(class zBreakawayPlatform * this /* r31 */) {
    // Local variables
    class xBox boundingBox; // r1+0x8

    {
        // Range: 0x8007518C -> 0x80075224
        // Local variables
        class xAnimTable * table; // r5
    }

    // References
    // -> class zGlobals globals;
    // -> static class xAnimTable * animTables;
}
// Range: 0x80075360 -> 0x80075568
void zBreakawayPlatform::DebugReset(class zBreakawayPlatform * this /* r31 */) {
    {
        // Range: 0x8007539C -> 0x8007545C
        // Local variables
        class xAnimTable * table; // r5
    }

    // References
    // -> class zGlobals globals;
    // -> static class xAnimTable * animTables;
}
// Range: 0x80075570 -> 0x80075784
void zBreakawayPlatform::Reset(class zBreakawayPlatform * this /* r31 */, bool inPlace /* r30 */) {
    {
        // Range: 0x8007574C -> 0x8007576C
        // Local variables
        class FloatAndVoid dist; // r1+0x8
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x800758C0 -> 0x8007595C
bool zBreakawayPlatform::ShouldMove(class zBreakawayPlatform * this /* r29 */) {
}
// Range: 0x80075960 -> 0x80075E1C
void zBreakawayPlatform::Move(class zBreakawayPlatform * this /* r31 */, float dt /* f31 */) {
    // Local variables
    float newdist; // f29
    class xVec3 tgt; // r1+0x6C
    class xVec3 scale; // r1+0x60

    {
        // Range: 0x80075A34 -> 0x80075CFC
        // Local variables
        float u; // f29
        float qdot; // f29
        class xVec3 bank; // r1+0x24
        class xVec3 direction; // r1+0x30
        class xMat3x3 tmpmat; // r1+0x78
        class xQuat qold; // r1+0x40
        class xQuat quat; // r1+0x50

        {
            // Range: 0x80075A50 -> 0x80075CFC
            {
                // Range: 0x80075B3C -> 0x80075BE0
                // Local variables
                class xVec3 gravity; // r1+0x18
            }
        }
    }
    {
        // Range: 0x80075D24 -> 0x80075DD8
        // Local variables
        class xQuat quat; // r1+0x8
    }

    // References
    // -> class zGlobals globals;
}
// signature: zBreakawayPlatform::Mounted(xEnt *)
// Range: 0x80075E70 -> 0x80075FC0
void zBreakawayPlatform::Mounted(class zBreakawayPlatform * this /* r31 */) {
    {
        // Range: 0x80075EBC -> 0x80075F54
        // Local variables
        float maxDisp; // f0
        class xVec3 boundSize; // r1+0x8
    }
}
// Range: 0x80075FC0 -> 0x8007601C
void zBreakawayPlatform::ResetCommonVars() {
}
// Range: 0x80076020 -> 0x80076080
void zBreakawayPlatform::SetVisible(class zBreakawayPlatform * this /* r30 */, bool vis /* r31 */) {
}
// signature: zBreakawayPlatform::SetCollision(bool)
// Range: 0x80076080 -> 0x800760F8
void zBreakawayPlatform::SetCollision(class zBreakawayPlatform * this /* r30 */) {
}
// signature: zBreakawayPlatform::SetAxis(unsigned char, xVec3 &, bool)
// Range: 0x80076100 -> 0x8007619C
void zBreakawayPlatform::SetAxis(class zBreakawayPlatform * this /* r6 */) {
    // Local variables
    float a; // f0
}
// Range: 0x800761A0 -> 0x800761BC
void zBreakawayPlatform::SetupNormal() {
}
// Range: 0x800761C0 -> 0x800762BC
void zBreakawayPlatform::SetupWarn(class zBreakawayPlatform * this /* r31 */) {
}
// Range: 0x800762C0 -> 0x800764AC
void zBreakawayPlatform::SetupDisappear(class zBreakawayPlatform * this /* r30 */) {
}
// Range: 0x800764B0 -> 0x800764D4
void zBreakawayPlatform::SetupGone() {
}
// Range: 0x800764E0 -> 0x80076768
void zBreakawayPlatform::SetupReappear(class zBreakawayPlatform * this /* r31 */) {
}
// signature: zBreakawayPlatform::UpdateNormal(float)
// Range: 0x80076770 -> 0x80076830
void zBreakawayPlatform::UpdateNormal(class zBreakawayPlatform * this /* r31 */) {
}
// Range: 0x80076830 -> 0x800769D0
void zBreakawayPlatform::UpdateWarn(class zBreakawayPlatform * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x8007691C -> 0x800769B4
        // Local variables
        float b; // f3
        float g; // f2
        float r; // f1
        float fraction; // f7
    }
}
// Range: 0x80076A00 -> 0x80076D3C
void zBreakawayPlatform::UpdateDisappear(class zBreakawayPlatform * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x80076AD0 -> 0x80076B28
        // Local variables
        float delta; // f2
    }
    {
        // Range: 0x80076BF0 -> 0x80076CC4
        // Local variables
        float alpha; // f1
    }
}
// signature: zBreakawayPlatform::UpdateGone(float)
// Range: 0x80076D40 -> 0x80076D7C
void zBreakawayPlatform::UpdateGone() {
}
// Range: 0x80076D80 -> 0x8007702C
void zBreakawayPlatform::UpdateReappear(class zBreakawayPlatform * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x80076EF4 -> 0x80076FC4
        // Local variables
        float alpha; // f1
    }
}
// Range: 0x80077030 -> 0x80077190
void zBreakawayPlatform::ChangeState(class zBreakawayPlatform * this /* r30 */, unsigned int newState /* r31 */) {
}
// Range: 0x80077190 -> 0x800773DC
void zBreakawayPlatform::Update(class zBreakawayPlatform * this /* r29 */, float dt /* f31 */) {
    // Local variables
    class xMat4x3 tmpMat; // r1+0x70

    {
        // Range: 0x80077344 -> 0x800773B8
        // Local variables
        class xQuat quat; // r1+0x30
        class xMat4x3 * pMat; // r30
    }
}
// signature: zBreakawayPlatform::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800773E0 -> 0x80077844
void zBreakawayPlatform::HandleEvent(class zBreakawayPlatform * this /* r31 */, class EventAny * genericParams /* r29 */) {
    {
        // Range: 0x800775B4 -> 0x80077674
        // Local variables
        class xOGEntity * possibleDriver; // r4
        unsigned int flags; // r28
        class EventActionDrivenBy * params; // r0
    }
    {
        // Range: 0x8007773C -> 0x80077794
        // Local variables
        class EventActionOneFloat * params; // r0

        {
            // Range: 0x80077770 -> 0x80077790
            // Local variables
            class FloatAndVoid dist; // r1+0x8
        }
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x80077850 -> 0x80077B44
class xAnimTable * zBreakawayPlatform::CreateAnimTable(unsigned long long animSetID /* r28:r27 */) {
    // Local variables
    class xAnimTable * table; // r26

    // References
    // -> static class xAnimTable * animTables;
}
// signature: zBreakawayPlatform::RemoveAnimTable(unsigned long long)
// Range: 0x80077C10 -> 0x80077CB8
void zBreakawayPlatform::RemoveAnimTable() {
    // Local variables
    class xAnimTable * table; // r31
    class xAnimTable * prev; // r30

    // References
    // -> static class xAnimTable * animTables;
}
// Range: 0x80077CC0 -> 0x80077D6C
class Entity * Sext::zBreakawayPlatformAsset::Create(class EntityHandleBase * handle /* r29 */, class zBreakawayPlatformAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__18zBreakawayPlatform;
}
// signature: zBreakawayPlatform::DriveAttach(World::xOGEntity *, unsigned int, int)
// Range: 0x80077E80 -> 0x80077F1C
void zBreakawayPlatform::DriveAttach(class zBreakawayPlatform * this /* r29 */, class xOGEntity * passenger /* r30 */, unsigned int flags /* r31 */) {
    // Local variables
    class xMat4x3 D; // r1+0x48
    class xVec3 euler; // r1+0xC
    class xMat3x3 a_descaled; // r1+0x18
    float dummy; // r1+0x8
}
// signature: zBreakawayPlatform::DriveGetCurMat(int)
// Range: 0x80077F20 -> 0x80077F28
class xMat4x3 * zBreakawayPlatform::DriveGetCurMat() {
}
// signature: zBreakawayPlatform::DriveCauseMove(xMat4x3 *, xMat4x3 *, xMat4x3 *, xMat4x3 *, bool, bool, float, float)
// Range: 0x80077F30 -> 0x80078064
void zBreakawayPlatform::DriveCauseMove(class zBreakawayPlatform * this /* r27 */, class xMat4x3 * parent /* r28 */, class xMat4x3 * oldMat /* r29 */, bool rotate /* r30 */, bool yaw /* r31 */, float givenYaw /* f31 */) {
    // Local variables
    class xMat4x3 baseMat; // r1+0x78
    class xVec3 newEuler; // r1+0xC

    {
        // Range: 0x80077F74 -> 0x80077FB8
        // Local variables
        float dummy; // r1+0x8
        class xMat3x3 a_descaled; // r1+0x48
    }
    {
        // Range: 0x80077FB8 -> 0x80078020
        // Local variables
        class xMat3x3 rot; // r1+0x18

        {
            // Range: 0x80077FC8 -> 0x80077FE0
            // Local variables
            float yawDiff; // f1
        }
    }
}
// Range: 0x80078070 -> 0x80078078
class xVec3 * zBreakawayPlatform::GetSoundPosition() const {
}
// Range: 0x80078080 -> 0x800780D8
void zBreakawayPlatformSceneExit() {
    // References
    // -> class zGlobals globals;
}
