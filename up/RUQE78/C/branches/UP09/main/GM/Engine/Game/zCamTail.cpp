/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zCamTail.cpp
*/
static float PITCH_INFO_LEVEL_ANGLE; // size: 0x4, address: 0x8081C2F0
// signature: zNearHitCollector::addRayHit(const hkpCdBody &, const hkpShapeRayCastCollectorOutput &)
// Range: 0x80154120 -> 0x80154160
void zNearHitCollector::addRayHit() {
}
// signature: zNearHitSphereCollector::addCdPoint(const hkpCdPoint &)
// Range: 0x801540D0 -> 0x80154114
void zNearHitSphereCollector::addCdPoint() {
}
// Range: 0x801540C0 -> 0x801540D0
void zNearHitSphereCollector::Reset() {
}
// Range: 0x801197E0 -> 0x801198D8
void zCamTail::create(class zCamTail * this /* r31 */) {
}
// Range: 0x801198E0 -> 0x80119934
void zCamTail::start(class zCamTail * this /* r31 */) {
}
// Range: 0x80119940 -> 0x80119944
void zCamTail::stop() {
}
// signature: zCamTail::SetTailPos(const xMat4x3 &, xVec3 *)
// Range: 0x80119950 -> 0x80119A3C
void zCamTail::SetTailPos() {
}
// signature: zCamTail::UpdateFollowVec(const xMat4x3 &, xVec3 *)
// Range: 0x80119A40 -> 0x80119B6C
void zCamTail::UpdateFollowVec() {
    // Local variables
    class xVec3 safety; // r1+0x8
}
// Range: 0x80119B70 -> 0x80119D14
void zCamTail::CapVector(class xVec3 * cappedVec /* r29 */, class xVec3 & referenceVec /* r30 */, class xVec3 & inputVec /* r31 */, float angle /* f31 */) {
    // Local variables
    float angleToReference; // f0

    {
        // Range: 0x80119BF4 -> 0x80119CD4
        // Local variables
        class xVec3 rotAxis; // r1+0x8
    }
}
// signature: zCamTail::UpdateSphereCollisionMoveIn(const xMat4x3 &, const xVec3 &, xVec3 *, float)
// Range: 0x80119D30 -> 0x8011A02C
void zCamTail::UpdateSphereCollisionMoveIn(class zCamTail * this /* r28 */, class xMat4x3 & targetMat /* r29 */, class xVec3 & startPos /* r30 */, class xVec3 * outPos /* r31 */) {
    // Local variables
    class zNearHitSphereCollector hitCollector; // r1+0x80
    class hkVector4 fromPos; // r1+0x70
    class hkVector4 toPos; // r1+0x60

    {
        // Range: 0x80119DC4 -> 0x80119DC4
        // Local variables
        class hkMonitorStream & mStream; // r0

        {
            // Range: 0x80119DC4 -> 0x80119DC4
            // Local variables
            class TimerCommand * h; // r0
        }
    }
    {
        // Range: 0x80119E98 -> 0x80119E98
        // Local variables
        class hkMonitorStream & mStream; // r0

        {
            // Range: 0x80119E98 -> 0x80119E98
            // Local variables
            class TimerCommand * h; // r0
        }
    }

    // References
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
    // -> struct {} __vt__23zNearHitSphereCollector;
}
// signature: zCamTail::LookAtUsingTargetUp(const xMat4x3 &, const xVec3 &, const xVec3 &, xMat3x3 *)
// Range: 0x8011A040 -> 0x8011A2F8
void zCamTail::LookAtUsingTargetUp() {
    // Local variables
    float len0; // f0
    float len1; // f0
    float len2; // f0
}
// signature: zCamTail::FadeEntitySpecial(float)
// Range: 0x8011A300 -> 0x8011A4A8
void zCamTail::FadeEntitySpecial() {
    {
        // Range: 0x8011A31C -> 0x8011A418
        // Local variables
        int i; // r25
        float fadeAmount; // f31
    }
}
// signature: zCamTail::update(xScene &, float)
// Range: 0x8011A500 -> 0x8011AB00
void zCamTail::update(class zCamTail * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class xMat4x3 driverMat; // r1+0x118
    class xVec3 vel; // r1+0xC4
    float speed; // f2
    class xVec3 tailVec; // r1+0xB8
    class xVec3 followVec; // r1+0xAC
    class xVec3 tailPos; // r1+0xA0
    class xVec3 followPos; // r1+0x94
    class xVec3 blendPos; // r1+0x88
    class xMat3x3 lookOffset; // r1+0xE8
    class MoBlurSettings settings; // r1+0xD0

    {
        // Range: 0x8011A660 -> 0x8011A74C
        // Local variables
        float tailToFollowBlendTarget; // f12
        float blend; // f11
    }
    {
        // Range: 0x8011A74C -> 0x8011A868
        // Local variables
        float tailToFollowBlendTarget; // f5
        float blend; // f30
    }
    {
        // Range: 0x8011A928 -> 0x8011A9E8
        // Local variables
        class Quaternion followQuat; // r1+0x68
        class Quaternion tailQuat; // r1+0x78
    }
}
