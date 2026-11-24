/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zCamFixed.cpp
*/
static class zCamPool FixedCamPool; // size: 0x20, address: 0x807329A8
static class zCamPool DrivableCamPool; // size: 0x20, address: 0x807329D8
// signature: zCamWorldFixed::update(xScene &, float)
// Range: 0x800AD780 -> 0x800AD7BC
void zCamWorldFixed::update(class zCamWorldFixed * this /* r31 */) {
}
// Range: 0x800950D0 -> 0x8009520C
void zCamWorldFixed::reset(class zCamWorldFixed * this /* r31 */) {
}
// Range: 0x80095860 -> 0x800958D4
class xVec3 zCamWorldFixed::GetPosition() {
    // References
    // -> class xVec3 m_Null;
}
// Range: 0x80095210 -> 0x800952A8
void zCamWorldFixed::UpdateOrigin() {
}
// Range: 0x800952B0 -> 0x8009533C
void zCamWorldFixed::ConvertToSphere(class zCamWorldFixed * this /* r31 */) {
    {
        // Range: 0x800952C4 -> 0x80095328
        // Local variables
        class xVec3 lookAt; // r1+0x8
        class xMat3x3 tmpMat; // r1+0x18
    }
}
// Range: 0x80094D20 -> 0x80094D68
void zCamFixed::Init(class zCamFixed * this /* r30 */, class xCamAsset * asset /* r31 */) {
}
// Range: 0x80094D70 -> 0x80094E24
class Entity * Sext::xCamAsset::Create(class EntityHandleBase * handle /* r31 */, class xCamAsset * asset /* r30 */) {
    // References
    // -> static class zCamPool FixedCamPool;
}
// Range: 0x80094EE0 -> 0x80094F84
bool zCamFixed::Activate(class zCamFixed * this /* r27 */, int viewportIndex /* r28 */, class xCamTransitionParams * transitionParams /* r29 */, bool forceRestart /* r30 */) {
    // References
    // -> static class zCamPool FixedCamPool;
}
// signature: zCamFixed::EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80094F90 -> 0x800950C8
void zCamFixed::EventCB(class xBase * to /* r30 */) {
    {
        // Range: 0x80094FC4 -> 0x8009504C
        {
            // Range: 0x80094FFC -> 0x8009504C
            // Local variables
            class zCamWorldFixed * worldCam; // r0
        }
    }
    {
        // Range: 0x80095050 -> 0x800950B0
        // Local variables
        class EventActionSwitch * params; // r0
        int viewportIndex; // r4
    }
}
// signature: zCamWorldDrivable::update(xScene &, float)
// Range: 0x800AD730 -> 0x800AD780
void zCamWorldDrivable::update(class zCamWorldDrivable * this /* r31 */) {
}
// Range: 0x800AD6F0 -> 0x800AD730
void zCamWorldDrivable::create(class zCamWorldDrivable * this /* r31 */) {
}
// Range: 0x800AD6A0 -> 0x800AD6E8
void zCamWorldDrivable::start(class zCamWorldDrivable * this /* r31 */) {
}
// Range: 0x80095800 -> 0x80095858
void zCamWorldDrivable::reset(class zCamWorldDrivable * this /* r31 */) {
    // References
    // -> class xVec3 m_Null;
    // -> class xMat4x3 g_I3;
}
// signature: zCamWorldDrivable::DriveAttach(World::xOGEntity *, unsigned int, int)
// Range: 0x800AD600 -> 0x800AD69C
void zCamWorldDrivable::DriveAttach(class zCamWorldDrivable * this /* r29 */, class xOGEntity * passenger /* r30 */, unsigned int flags /* r31 */) {
    // Local variables
    class xMat4x3 D; // r1+0x48
    class xVec3 euler; // r1+0xC
    class xMat3x3 a_descaled; // r1+0x18
    float dummy; // r1+0x8
}
// signature: zCamWorldDrivable::DriveGetCurMat(int)
// Range: 0x800AD5F0 -> 0x800AD5F8
class xMat4x3 * zCamWorldDrivable::DriveGetCurMat() {
}
// Range: 0x800AD520 -> 0x800AD5E8
void zCamWorldDrivable::DriveCauseMove(class zCamWorldDrivable * this /* r31 */) {
    // Local variables
    class xMat4x3 InvRel; // r1+0x48
    class xMat4x3 baseMat; // r1+0x8
}
// Range: 0x80095340 -> 0x80095388
void zCamDrivable::Init(class zCamDrivable * this /* r30 */, class xCamAssetD * asset /* r31 */) {
}
// Range: 0x80095390 -> 0x8009544C
class Entity * Sext::xCamAssetD::Create(class EntityHandleBase * handle /* r31 */, class xCamAssetD * asset /* r30 */) {
    // References
    // -> static class zCamPool DrivableCamPool;
    // -> struct {} __vt__12zCamDrivable;
}
// Range: 0x800954C0 -> 0x80095564
bool zCamDrivable::Activate(class zCamDrivable * this /* r27 */, int viewportIndex /* r28 */, class xCamTransitionParams * transitionParams /* r29 */, bool forceRestart /* r30 */) {
    // References
    // -> static class zCamPool DrivableCamPool;
}
// signature: zCamDrivable::EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80095570 -> 0x800957F4
void zCamDrivable::EventCB(class xBase * from /* r29 */, class xBase * to /* r30 */) {
    {
        // Range: 0x800955D8 -> 0x80095660
        {
            // Range: 0x80095610 -> 0x80095660
            // Local variables
            class zCamWorldDrivable * worldCam; // r0
        }
    }
    {
        // Range: 0x80095664 -> 0x80095700
        // Local variables
        class zCamWorldDrivable * worldCam; // r30
    }
    {
        // Range: 0x80095704 -> 0x80095728
        // Local variables
        class zCamWorldDrivable * worldCam; // r0
    }
    {
        // Range: 0x8009572C -> 0x80095750
        // Local variables
        class zCamWorldDrivable * worldCam; // r0
    }
    {
        // Range: 0x80095754 -> 0x80095778
        // Local variables
        class zCamWorldDrivable * worldCam; // r0
    }
    {
        // Range: 0x8009577C -> 0x800957DC
        // Local variables
        class EventActionSwitch * params; // r0
        int viewportIndex; // r4
    }

    // References
    // -> class xMat4x3 g_I3;
    // -> static class zCamPool DrivableCamPool;
}
