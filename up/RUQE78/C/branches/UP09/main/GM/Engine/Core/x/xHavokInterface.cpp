/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xHavokInterface.cpp
*/
static class hkArray collRecsSphereFloor; // size: 0xC, address: 0x80805D98
static class hkArray collRecsSphereCollide; // size: 0xC, address: 0x80805DB0
static class hkArray collRecsSweptSphereCollide; // size: 0xC, address: 0x80805DC8
static class hkArray collRecsRayCollide; // size: 0xC, address: 0x80805DE0
// Range: 0x8000E5E0 -> 0x8000EF84
bool HavokRayCastStopFilterCollide(class hkVector4 & from /* r20 */, class hkVector4 & to /* r21 */, class hkVector4 & pos /* r22 */, float & toHitDistance /* r23 */, void * * outputOwner /* r24 */, class hkBaseObject * * filteredEntityArray /* r25 */, int numFilteredEntities /* r26 */, unsigned int collFilter /* r27 */) {
    // Local variables
    class hkpAllRayHitCollector collector; // r1+0x70
    bool inFilterList; // r29

    {
        // Range: 0x8000E6B4 -> 0x8000EC14
        // Local variables
        int i; // r28

        {
            // Range: 0x8000E6B4 -> 0x8000EC14
            // Local variables
            class hkpWorldRayCastOutput hit; // r1+0x20

            {
                // Range: 0x8000E800 -> 0x8000E824
                // Local variables
                int j; // r0
            }
            {
                // Range: 0x8000E82C -> 0x8000EC10
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
// Range: 0x8000F340 -> 0x800101FC
bool HavokObjectLinearCastCollide(class hkVector4 & from /* r24 */, class hkVector4 & to /* r25 */, class hkVector4 & pos /* r26 */, float & toHitDistance /* r27 */, void * * outputOwner /* r28 */, class hkBaseObject * * filteredEntityArray /* r29 */, int numFilteredEntities /* r30 */) {
    // Local variables
    class hkpAllCdPointCollector collector; // r1+0x140
    class hkpLinearCastInput castInput; // r1+0x30
    bool inFilterList; // r6
    class hkpBoxShape pshape; // r1+0x50
    class hkpRigidBodyCinfo ci; // r1+0x80
    class hkpRigidBody b; // r1+0x2E0

    {
        // Range: 0x8000F498 -> 0x8000FBA4
        // Local variables
        int i; // r7

        {
            // Range: 0x8000F4AC -> 0x8000F4EC
            // Local variables
            int j; // r0
        }
        {
            // Range: 0x8000F4F4 -> 0x8000FBA4
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
// Range: 0x80010340 -> 0x800109D0
static bool _createEntityPhysicsObject(class xEnt * pXEnt /* r25 */) {
    // Local variables
    float mass; // f31
    class hkVector4 scale; // r1+0x50
    unsigned int collisionFilter; // r27
    class ModelPrototypeEntity * modelProto; // r0

    {
        // Range: 0x80010414 -> 0x800109A8
        // Local variables
        enum E_HAVOK_COLLIDE_FILTER_LAYER packedFilterLayer; // r0
        class CollisionMeshBlobEntity * packedPhysicsData; // r26

        {
            // Range: 0x80010440 -> 0x800109A0
            // Local variables
            class hkTransform worldTransform; // r1+0x60
            class xMat4x3 * mat; // r0
            class hkQuaternion quat; // r1+0x30
            class hkVector4 pos; // r1+0x40

            {
                // Range: 0x80010574 -> 0x800108D8
                // Local variables
                class xMat3x3 tempMat; // r1+0xA0
                class xQuat tempQuat; // r1+0x20
            }
        }
    }
}
// Range: 0x80010DB0 -> 0x800114C8
static void _ResetBody(class xEnt * pEnt /* r30 */) {
    // Local variables
    class Model & ngModel; // r31
    class hkVector4 scale; // r1+0x20
    class xMat4x3 * pMat; // r0
    unsigned int collisionFilter; // r29

    {
        // Range: 0x80010E04 -> 0x8001131C
        // Local variables
        class Matrix43 rootModelMat; // r1+0x30
    }
}
// Range: 0x800116E0 -> 0x80011A10
void AddToHavokSimWorld(class xEnt * pEnt /* r30 */) {
    {
        // Range: 0x80011740 -> 0x800119EC
        // Local variables
        class ModelPrototypeEntity * modelProto; // r0

        {
            // Range: 0x80011784 -> 0x800119EC
            // Local variables
            class CollisionMeshBlobEntity * collMesh; // r0

            {
                // Range: 0x8001178C -> 0x800119EC
                // Local variables
                class hkVector4 scale; // r1+0x10
                class xMat4x3 * pMat; // r0

                {
                    // Range: 0x80011968 -> 0x800119C4
                    // Local variables
                    unsigned int c; // r28
                }
            }
        }
    }
}
// Range: 0x80011A40 -> 0x80011BCC
bool xHavok_SetNPCFromCharacterProxyMotion(class zNPCEntity * NPC /* r28 */, class hkpCharacterProxy * pCharacterProxy /* r27 */) {
    // Local variables
    class xEntFrame * frame; // r30
    class hkVector4 & proxy_pos; // r29
    class hkVector4 & proxy_vel; // r28
    class hkpShapePhantom * m_phantom; // r0
    class hkpSurfaceInfo ground; // r1+0x30
    class hkVector4 up; // r1+0x20
    class hkVector4 down; // r1+0x10
}
// signature: xHavok_SetFrameFromCharacterProxy(xEntFrame *, hkpCharacterProxy *)
// Range: 0x80011C30 -> 0x80011C78
void xHavok_SetFrameFromCharacterProxy(class xEntFrame * frame /* r31 */) {
    // Local variables
    class hkVector4 & proxy_pos; // r0
}
// signature: xHavok_CheckGroundSupportFromCharacterProxy(hkpCharacterProxy *)
// Range: 0x80011C80 -> 0x80011D28
bool xHavok_CheckGroundSupportFromCharacterProxy() {
    // Local variables
    class hkpSurfaceInfo ground; // r1+0x20
    class hkVector4 down; // r1+0x10
}
