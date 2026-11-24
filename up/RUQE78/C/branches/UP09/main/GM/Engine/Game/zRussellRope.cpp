/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zRussellRope.cpp
*/
// Range: 0x8023E320 -> 0x8023E394
void zRussellRope::TimeStep(class zRussellRope * this /* r31 */, float dt /* f31 */) {
}
// signature: zRussellRope::Init(void *)
// Range: 0x8023E3A0 -> 0x8023E458
void zRussellRope::Init(class zRussellRope * this /* r31 */) {
    // Local variables
    class EntityHandleBase * goodie; // r0
}
// Range: 0x8023E460 -> 0x8023E76C
void zRussellRope::Setup(class zRussellRope * this /* r31 */) {
}
// Range: 0x8023E7D0 -> 0x8023E880
void zRussellRope::SetupIcons(class zRussellRope * this /* r31 */) {
    // Local variables
    class xVec3 iconPos; // r1+0x8
}
// signature: zRussellRope::AttachCarl(zCarlPlayer *)
// Range: 0x8023E880 -> 0x8023E8D4
void zRussellRope::AttachCarl(class zRussellRope * this /* r31 */) {
}
// Range: 0x8023E8E0 -> 0x8023E978
void zRussellRope::ReleaseCarl(class zRussellRope * this /* r30 */) {
}
// Range: 0x8023E980 -> 0x8023F038
void zRussellRope::Update(class zRussellRope * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x8023E9A8 -> 0x8023F018
        // Local variables
        float distLeft; // f1
        class xVec3 russellToLedgeVec; // r1+0x98
        class xMat4x3 russellMat; // r1+0xA8

        {
            // Range: 0x8023EB48 -> 0x8023EBA4
            // Local variables
            class xVec3 end; // r1+0x8C
        }
        {
            // Range: 0x8023EBB4 -> 0x8023EFE8
            // Local variables
            float underRadical; // f0
            float carlDistToLedge; // f1
            class xVec3 carlOffset; // r1+0x74
            float currentCarlDistToRussell; // f0
            class xVec3 carlPos; // r1+0x80
        }
    }

    // References
    // -> bool gSysForceExit;
    // -> bool gSoundReadyToExit;
}
// Range: 0x8023F050 -> 0x8023F4A8
void zRussellRope::DrawRope(class zRussellRope * this /* r28 */, class xVec3 & start /* r29 */, class xVec3 & end /* r30 */) {
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
// Range: 0x8023F4B0 -> 0x8023F7FC
bool zRussellRope::CanStart(class zRussellRope * this /* r30 */, class zCommonPlayer * player /* r31 */) {
    // Local variables
    class xVec3 closestPoint; // r1+0x38
    class xVec3 ledgeDir; // r1+0x2C
    class xVec3 airDir; // r1+0x20
    float u; // f0
    float yDiff; // f1
    class xVec3 toClosest; // r1+0x14
    float length2; // f0
    float dot; // f0
}
// signature: zRussellRopeCastCollector::addRayHit(const hkpCdBody &, const hkpShapeRayCastCollectorOutput &)
// Range: 0x80290610 -> 0x80290670
void zRussellRopeCastCollector::addRayHit() {
    {
        // Range: 0x80290610 -> 0x8029066C
        // Local variables
        class xBase * base; // r6
    }
}
// Range: 0x8023F800 -> 0x8023F9DC
void zRussellRope::Start(class zRussellRope * this /* r30 */, class zCommonPlayer * comPlayer /* r31 */) {
    // Local variables
    class xVec3 ropeStart; // r1+0x30
    class hkVector4 hkRopeStart; // r1+0x20
    class hkVector4 hkRopeEnd; // r1+0x10
    class zRussellRopeCastCollector collector; // r1+0x40

    // References
    // -> static class zSoundModule * sMod;
    // -> struct {} __vt__25zRussellRopeCastCollector;
}
// Range: 0x8023F9F0 -> 0x8023FB6C
void zRussellRope::GetStartPosition(class zCommonPlayer * player /* r30 */, class xVec3 & pos /* r31 */) {
    // Local variables
    class xVec3 closestPoint; // r1+0x20
    class xVec3 toPlayer; // r1+0x14
}
// Range: 0x8023FB70 -> 0x8023FCB8
void zRussellRope::GetStartDirection(class zCommonPlayer * player /* r30 */, class xVec3 & dir /* r31 */) {
    // Local variables
    class xVec3 closestPoint; // r1+0x20
}
// signature: zRussellRope::Stop(zCommonPlayer *)
// Range: 0x8023FCC0 -> 0x8023FD88
void zRussellRope::Stop(class zRussellRope * this /* r31 */) {
    // References
    // -> bool gSysForceExit;
    // -> bool gSoundReadyToExit;
}
// Range: 0x8023FD90 -> 0x8023FE90
void zRussellRope::ContextCheckForActivity(class zRussellRope * this /* r28 */, class zCommonPlayer * player /* r29 */) {
    {
        // Range: 0x8023FDC4 -> 0x8023FE58
        // Local variables
        class zUpContextAction * ca; // r0
    }
}
// signature: zRussellRope::CarlTriggerHandler(unsigned int, xBase *)
// Range: 0x8023FEA0 -> 0x8023FEDC
void zRussellRope::CarlTriggerHandler() {
}
// signature: zRussellRope::RussellTriggerHandler(unsigned int, xBase *)
// Range: 0x8023FEE0 -> 0x8023FF1C
void zRussellRope::RussellTriggerHandler() {
}
// Range: 0x8023FF20 -> 0x80240090
class Entity * Sext::zRussellRopeAsset::Create(class EntityHandleBase * handle /* r29 */, class zRussellRopeAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__12zRussellRope;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x80240090 -> 0x802401A4
void zRussellRope::Reset(class zRussellRope * this /* r30 */) {
    // References
    // -> bool gSysForceExit;
    // -> bool gSoundReadyToExit;
}
// Range: 0x802401B0 -> 0x8024028C
void zRussellRope::HandleEvent(class zRussellRope * this /* r28 */, class xBase * from /* r29 */, unsigned int toEvent /* r30 */, class EventAny * params /* r31 */) {
    {
        // Range: 0x8024022C -> 0x80240258
        // Local variables
        class zLedge * newLedge; // r0
    }
}
// signature: zRussellRope::GetAnimPackage(ePlayerName)
// Range: 0x80240290 -> 0x802402BC
class zAnimPackage * zRussellRope::GetAnimPackage() {
}
