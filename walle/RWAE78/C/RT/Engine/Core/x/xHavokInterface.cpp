/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xHavokInterface.cpp
*/
static class hkArray collRecsSphereFloor; // size: 0xC, address: 0x80750A38
static class hkArray collRecsSphereCollide; // size: 0xC, address: 0x80750A50
static class hkArray collRecsSweptSphereCollide; // size: 0xC, address: 0x80750A68
static class hkArray collRecsRayCollide; // size: 0xC, address: 0x80750A80
// Range: 0x800074C0 -> 0x80007E88
bool HavokRayCastStopFilterCollide(class hkVector4 * from /* r19 */, class hkVector4 * to /* r20 */, class hkVector4 * pos /* r21 */, float * toHitDistance /* r22 */, void * * outputOwner /* r23 */, class hkBaseObject * * filteredEntityArray /* r24 */, int numFilteredEntities /* r25 */, unsigned int collFilter /* r26 */) {
    // Local variables
    class hkpAllRayHitCollector collector; // r1+0x70
    bool inFilterList; // r28

    {
        // Range: 0x80007594 -> 0x80007B1C
        // Local variables
        int i; // r27

        {
            // Range: 0x80007594 -> 0x80007B1C
            // Local variables
            class hkpWorldRayCastOutput hit; // r1+0x20

            {
                // Range: 0x800076E0 -> 0x80007704
                // Local variables
                int j; // r0
            }
            {
                // Range: 0x8000770C -> 0x80007B18
                // Local variables
                class hkVector4 targetVector; // r1+0x10
            }
        }
    }

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> float hkInfinity;
    // -> struct {} __vt__21hkpAllRayHitCollector;
}
// signature: HavokObjectLinearCastCollide(const hkpCollidable *, const hkVector4 &, const hkVector4 &, hkVector4 &, float &, void **, const hkBaseObject **, int)
// Range: 0x80008330 -> 0x800091FC
bool HavokObjectLinearCastCollide(class hkVector4 * from /* r24 */, class hkVector4 * to /* r25 */, class hkVector4 * pos /* r26 */, float * toHitDistance /* r27 */, void * * outputOwner /* r28 */, class hkBaseObject * * filteredEntityArray /* r29 */, int numFilteredEntities /* r30 */) {
    // Local variables
    class hkpAllCdPointCollector collector; // r1+0x340
    class hkpLinearCastInput castInput; // r1+0x30
    bool inFilterList; // r6
    class hkpBoxShape pshape; // r1+0x50
    class hkpRigidBodyCinfo ci; // r1+0x80
    class hkpRigidBody b; // r1+0x140

    {
        // Range: 0x80008488 -> 0x80008BB4
        // Local variables
        int i; // r7

        {
            // Range: 0x8000849C -> 0x800084DC
            // Local variables
            int j; // r0
        }
        {
            // Range: 0x800084E4 -> 0x80008BB4
            // Local variables
            class hkVector4 targetVector; // r1+0x20
        }
    }

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> float hkInfinity;
    // -> float hkConvexShapeDefaultRadius;
    // -> struct {} __vt__22hkpAllCdPointCollector;
}
// Range: 0x800093E0 -> 0x80009C50
static class hkpRigidBody * _getEntityRigidBodyCreateInfo(class xEnt * pXEnt /* r27 */) {
    // Local variables
    class hkVector4 pos; // r1+0x60
    class hkQuaternion rot; // r1+0x50
    float mass; // f31
    class hkpShape * sourceShape; // r0
    class hkVector4 vScale; // r1+0x40
    unsigned int filter; // r28
    class ModelPrototypeEntity * modelProto; // r0
    class hkpShape * scaled_shape; // r30
    class hkpRigidBody * pRigidBody; // r27

    {
        // Range: 0x800094A0 -> 0x80009ABC
        // Local variables
        class CollisionMeshBlobEntity * collMesh; // r0

        {
            // Range: 0x800094AC -> 0x80009AB0
            // Local variables
            class xMat4x3 * pMat; // r0

            {
                // Range: 0x80009620 -> 0x80009AB0
                // Local variables
                class xMat3x3 tempMat; // r1+0x70
                class xQuat quat; // r1+0x30
            }
        }
    }

    // References
    // -> class CHavokShapeBuilder * s_instance;
    // -> class xQuat g_IQ;
    // -> class hkQuaternion hkQuaternionIdentity;
    // -> class hkQuadReal hkQuadReal0000;
}
// signature: AddToHavokEntityWorld(hkpRigidBody *, xEnt *)
// Range: 0x8000A2B0 -> 0x8000A2BC
void AddToHavokEntityWorld() {
}
// Range: 0x8000A2C0 -> 0x8000AA40
static void _ResetBody(class xEnt * pEnt /* r28 */) {
    // Local variables
    class hkVector4 pos; // r1+0x50
    class hkQuaternion rot; // r1+0x40
    class hkVector4 vScale; // r1+0x30
    unsigned int filter; // r29
    class xMat4x3 * pMat; // r0

    {
        // Range: 0x8000A4F0 -> 0x8000A980
        // Local variables
        class xMat3x3 tempMat; // r1+0x60
        class xQuat quat; // r1+0x20
    }

    // References
    // -> class xQuat g_IQ;
    // -> class hkQuaternion hkQuaternionIdentity;
    // -> class hkQuadReal hkQuadReal0000;
}
// Range: 0x8000ACE0 -> 0x8000B0CC
void AddToHavokSimWorld(class xEnt * pEnt /* r31 */) {
    {
        // Range: 0x8000AD6C -> 0x8000B06C
        // Local variables
        class ModelPrototypeEntity * modelProto; // r0

        {
            // Range: 0x8000ADB0 -> 0x8000B06C
            // Local variables
            class CollisionMeshBlobEntity * collMesh; // r0

            {
                // Range: 0x8000ADBC -> 0x8000B06C
                // Local variables
                class hkVector4 vScale; // r1+0x30
                class xMat4x3 * pMat; // r0
            }
        }
    }

    // References
    // -> double secondsPerTick;
    // -> struct {} __vt__20EntCollisionListener;
}
// signature: xHavok_SetEvePlayerFromCharacterProxyMotion(zPlayer *, hkpCharacterProxy *)
// Range: 0x8000B0D0 -> 0x8000B250
bool xHavok_SetEvePlayerFromCharacterProxyMotion(class zPlayer * player /* r29 */) {
    // Local variables
    class hkpSurfaceInfo ground; // r1+0x60
    class xEntFrame * frame; // r30
    class hkpShapePhantom * m_phantom; // r0
    class hkTransform * proxyTransform; // r0
    class xVec3 proxyUp; // r1+0x4C
    class xVec3 proxyPos; // r1+0x40
}
// Range: 0x8000B250 -> 0x8000BC14
bool xHavok_SetWallePlayerFromCharacterProxyMotion(class zWallePlayer * player /* r25 */, class hkpCharacterProxy * pCharacterProxy /* r26 */, float dt /* f28 */) {
    // Local variables
    class xEntFrame * frame; // r30
    class hkVector4 * proxy_pos; // r29
    class hkpShapePhantom * m_phantom; // r28
    class hkTransform * proxy_transform; // r0
    class hkpSurfaceInfo ground; // r1+0x170
    class xVec3 up; // r1+0x130
    class hkVector4 down; // r1+0x120
    class zPlayerInput * pad; // r27
    class xVec3 oldPos; // r1+0x108
    class xVec3 adjustVec; // r1+0xFC
    class xVec3 deltaPos; // r1+0xF0
    float yDiff; // f4
    class xVec3 * surfaceNorm; // r0
    float tiltedCosAngle; // f0
    float tiltedAngle; // f0
    class Quaternion oldOrientationQuat; // r1+0xB0
    class Quaternion surfaceNormalQuat; // r1+0xA0
    class Quaternion targetOrientationQuat; // r1+0x90
    float diffBlendAngle; // f0
    float blendAmount; // f0
    class xVec3 targetMovementSurfaceNormal; // r1+0x80
    class Quaternion moveNormQuat; // r1+0x70
    class Quaternion targetNormQuat; // r1+0x60
    class Quaternion blendedQuat; // r1+0x50
    class hkRotation rotation; // r1+0x140
    class hkVector4 * col0; // r3
    class hkVector4 * col1; // r5
    class hkVector4 * col2; // r6
    class hkVector4 playerRight; // r1+0x40

    {
        // Range: 0x8000B618 -> 0x8000B730
        // Local variables
        class Quaternion cappedQuat; // r1+0xC0
        class Quaternion surfaceNormalQuat; // r1+0xD0
        class Quaternion upQuat; // r1+0xE0
        float capFraction; // f25
    }

    // References
    // -> class xVec3 m_UnitAxisY;
}
// signature: xHavok_SetNPCFromCharacterProxyMotion(zNPCEntity *, hkpCharacterProxy *)
// Range: 0x8000BCC0 -> 0x8000BE34
bool xHavok_SetNPCFromCharacterProxyMotion(class hkpCharacterProxy * pCharacterProxy /* r27 */) {
    // Local variables
    class xEntFrame * frame; // r30
    class hkVector4 * proxy_pos; // r29
    class hkVector4 * proxy_vel; // r28
    class hkpShapePhantom * m_phantom; // r0
    class hkpSurfaceInfo ground; // r1+0x30
    class hkVector4 up; // r1+0x20
    class hkVector4 down; // r1+0x10
}
