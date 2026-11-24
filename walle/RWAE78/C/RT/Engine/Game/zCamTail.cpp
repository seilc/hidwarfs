/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zCamTail.cpp
*/
static float PITCH_INFO_LEVEL_ANGLE; // size: 0x4, address: 0x8076BF08
// signature: zNearHitCollector::addRayHit(const hkpCdBody &, const hkpShapeRayCastCollectorOutput &)
// Range: 0x800CB520 -> 0x800CB560
void zNearHitCollector::addRayHit() {
}
// signature: zNearHitSphereCollector::addCdPoint(const hkpCdPoint &)
// Range: 0x800CB4D0 -> 0x800CB514
void zNearHitSphereCollector::addCdPoint() {
}
// Range: 0x800CB4C0 -> 0x800CB4D0
void zNearHitSphereCollector::Reset() {
}
// Range: 0x800A95F0 -> 0x800A9700
void zCamTail::create(class zCamTail * this /* r30 */) {
}
// Range: 0x800A9700 -> 0x800A9734
void zCamTail::start(class zCamTail * this /* r31 */) {
}
// Range: 0x800A9740 -> 0x800A9744
void zCamTail::stop() {
}
// signature: zCamTail::SetDriver(xEnt *)
// Range: 0x800A9750 -> 0x800A98B0
void zCamTail::SetDriver() {
}
// signature: zCamTail::SetTailPos(const xMat4x3 &, xVec3 *)
// Range: 0x800A98B0 -> 0x800A999C
void zCamTail::SetTailPos() {
}
// signature: zCamTail::UpdateFollowVec(const xMat4x3 &, xVec3 *)
// Range: 0x800A99A0 -> 0x800A9B1C
void zCamTail::UpdateFollowVec(class xVec3 * outVec /* r30 */) {
    // Local variables
    class xVec3 safety; // r1+0x8
}
// Range: 0x800A9B20 -> 0x800A9D4C
void zCamTail::CapVector(class xVec3 * cappedVec /* r28 */, class xVec3 * referenceVec /* r29 */, class xVec3 * inputVec /* r30 */, float angle /* f29 */) {
    // Local variables
    float angleToReference; // f0

    {
        // Range: 0x800A9BC0 -> 0x800A9CF0
        // Local variables
        class xQuat capRotQuat; // r1+0x18
        class xVec3 rotAxis; // r1+0x28
        float blendedAngle; // f28
        float capFraction; // f11
    }
}
// signature: zCamTail::UpdateSphereCollisionMoveIn(const xMat4x3 &, const xVec3 &, xVec3 *, float)
// Range: 0x800A9D90 -> 0x800AA0AC
void zCamTail::UpdateSphereCollisionMoveIn(class zCamTail * this /* r27 */, class xMat4x3 * targetMat /* r28 */, class xVec3 * startPos /* r29 */, class xVec3 * outPos /* r30 */) {
    // Local variables
    class zNearHitSphereCollector hitCollector; // r1+0x80
    class hkVector4 fromPos; // r1+0x70
    class hkVector4 toPos; // r1+0x60

    {
        // Range: 0x800A9EB8 -> 0x800A9EB8
        // Local variables
        class hkMonitorStream * mStream; // r0

        {
            // Range: 0x800A9EB8 -> 0x800A9EB8
            // Local variables
            class TimerCommand * h; // r0
        }
    }
    {
        // Range: 0x800A9F24 -> 0x800A9F24
        // Local variables
        class hkMonitorStream * mStream; // r0

        {
            // Range: 0x800A9F24 -> 0x800A9F24
            // Local variables
            class TimerCommand * h; // r0
        }
    }

    // References
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
    // -> struct {} __vt__23zNearHitSphereCollector;
}
// signature: zCamTail::LookAtUsingTargetUp(const xMat4x3 &, const xVec3 &, const xVec3 &, xMat3x3 *)
// Range: 0x800AA3D0 -> 0x800AA6CC
void zCamTail::LookAtUsingTargetUp(class xVec3 * upOrient /* r29 */, class xMat3x3 * outMat /* r30 */) {
    // Local variables
    float len0; // f0
    float len1; // f0
    float len2; // f0
}
// signature: zCamTail::FadeEntitySpecial(float)
// Range: 0x800AA6D0 -> 0x800AA828
void zCamTail::FadeEntitySpecial() {
    {
        // Range: 0x800AA6F4 -> 0x800AA7E8
        // Local variables
        class Model * model; // r0
        int i; // r26
        float fadeAmount; // f31
    }
}
// signature: zCamTail::update(xScene &, float)
// Range: 0x800AA830 -> 0x800AAFE8
void zCamTail::update(class zCamTail * this /* r30 */, float dt /* f31 */) {
    // Local variables
    class xMat4x3 driverMat; // r1+0x1E8
    class zEvePlayer * eve; // r28
    class xVec3 vel; // r1+0x160
    float speed; // f2
    class xVec3 tailVec; // r1+0x13C
    class xVec3 followVec; // r1+0x130
    class xVec3 tailPos; // r1+0x124
    class xVec3 followPos; // r1+0x118
    class xVec3 blendPos; // r1+0xE0
    class xMat3x3 lookOffset; // r1+0x188
    class MoBlurSettings settings; // r1+0x170

    {
        // Range: 0x800AA9DC -> 0x800AAA7C
        // Local variables
        float tailToFollowBlendTarget; // f13
        float blend; // f12
    }
    {
        // Range: 0x800AAA7C -> 0x800AAB28
        // Local variables
        float tailToFollowBlendTarget; // f7
        float blend; // f13
    }
    {
        // Range: 0x800AAB40 -> 0x800AAC1C
        // Local variables
        class xMat3x3 lookOffset; // r1+0x1B8
        class xVec3 followPos; // r1+0x148
        class xVec3 followVec; // r1+0x154
    }
    {
        // Range: 0x800AACD0 -> 0x800AAE04
        // Local variables
        class xVec3 endLocToTarget; // r1+0xEC
        float blendAmount; // f31
        class xQuat targetOrientation; // r1+0xF8
        class xQuat currentOrientation; // r1+0x108
    }
    {
        // Range: 0x800AAE04 -> 0x800AAEC4
        // Local variables
        class Quaternion followQuat; // r1+0xC0
        class Quaternion tailQuat; // r1+0xD0
    }

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x800AB050 -> 0x800AB05C
void zCamTail::SetSpaceHubMode() {
}
// Range: 0x800AB060 -> 0x800AB06C
void zCamTail::SetEarthHubMode() {
}
// signature: zCamTail::SetSpeedwayMode(zTunnelCurve *)
// Range: 0x800AB070 -> 0x800AB108
void zCamTail::SetSpeedwayMode() {
}
