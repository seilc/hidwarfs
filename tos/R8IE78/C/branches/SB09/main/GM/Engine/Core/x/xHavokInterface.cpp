/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xHavokInterface.cpp
*/
static class hkArray collRecsSphereFloor; // size: 0xC, address: 0x8071C984
static class hkArray collRecsSphereCollide; // size: 0xC, address: 0x8071C99C
static class hkArray collRecsSweptSphereCollide; // size: 0xC, address: 0x8071C9B4
static class hkArray collRecsRayCollide; // size: 0xC, address: 0x8071C9CC
// Range: 0x8000BFE0 -> 0x8000C290
bool HavokRayCastStopFilterCollide(class hkVector4 & from /* r19 */, class hkVector4 & to /* r20 */, class hkVector4 & pos /* r21 */, float & toHitDistance /* r22 */, void * * outputOwner /* r23 */, class hkBaseObject * * filteredEntityArray /* r24 */, int numFilteredEntities /* r25 */, unsigned int collFilter /* r26 */) {
    // Local variables
    class hkpAllRayHitCollector collector; // r1+0x70
    bool inFilterList; // r28

    {
        // Range: 0x8000C0A8 -> 0x8000C264
        // Local variables
        int i; // r27

        {
            // Range: 0x8000C0A8 -> 0x8000C264
            // Local variables
            class hkpWorldRayCastOutput hit; // r1+0x20

            {
                // Range: 0x8000C180 -> 0x8000C1AC
                // Local variables
                int j; // r0
            }
            {
                // Range: 0x8000C1AC -> 0x8000C24C
                // Local variables
                class hkVector4 targetVector; // r1+0x10
            }
        }
    }

    // References
    // -> struct {} __vt__21hkpAllRayHitCollector;
}
// Range: 0x8000C7F0 -> 0x8000CE10
void AddToHavokSimWorld(class xEnt * pEnt /* r30 */) {
    {
        // Range: 0x8000C9A4 -> 0x8000CDD4
        // Local variables
        class ModelPrototypeEntity * modelProto; // r0

        {
            // Range: 0x8000C9E4 -> 0x8000CDD4
            // Local variables
            class CollisionMeshBlobEntity * collMesh; // r0

            {
                // Range: 0x8000C9EC -> 0x8000CDD4
                // Local variables
                class hkVector4 scale; // r1+0x80
                class xMat4x3 * pMat; // r24

                {
                    // Range: 0x8000CD74 -> 0x8000CDD4
                    // Local variables
                    unsigned int c; // r25
                }
            }
        }
    }

    // References
    // -> class xOGModelUpdater g_modelUpdateDefault;
}
// Range: 0x8000CE10 -> 0x8000D00C
bool xHavok_SetNPCFromCharacterProxyMotion(class zNPCEntity * NPC /* r28 */, class xHavokCharacterController * characterController /* r29 */) {
    // Local variables
    class xEntFrame * frame; // r30
    class hkVector4 proxy_pos; // r1+0x50
    class hkVector4 proxy_vel; // r1+0x40
    class hkpSurfaceInfo ground; // r1+0x60
    class hkVector4 up; // r1+0x30
    class hkVector4 down; // r1+0x20
    class hkpCharacterProxy * proxy; // r0

    {
        // Range: 0x8000CF7C -> 0x8000CFB8
        // Local variables
        class hkStepInfo stepInfo; // r1+0x10
    }
}
// signature: xHavok_SetFrameFromCharacterProxy(xMat4x3 *, hkpCharacterProxy *)
// Range: 0x8000D100 -> 0x8000D144
void xHavok_SetFrameFromCharacterProxy(class xMat4x3 * mat /* r31 */) {
    // Local variables
    class hkVector4 & proxy_pos; // r0
}
// Range: 0x8000D150 -> 0x8000D1C0
void xHavok_SetFrameFromCharacterProxy(class xMat4x3 * mat /* r29 */, class xVec3 * vel /* r30 */, class hkpCharacterRigidBody * pCharacterProxy /* r31 */) {
    // Local variables
    class hkVector4 & proxy_pos; // r0
    class hkVector4 & proxy_vel; // r0
}
// Range: 0x8000D1C0 -> 0x8000D2A0
bool xHavok_CheckGroundSupportFromCharacterProxy(class hkpCharacterProxy * pCharacterProxy /* r29 */, class hkpAllCdPointCollector * startPointCollector /* r30 */, class xVec3 * normal /* r31 */) {
    // Local variables
    class hkpSurfaceInfo ground; // r1+0x20
    class hkVector4 down; // r1+0x10

    {
        // Range: 0x8000D230 -> 0x8000D250
        // Local variables
        class TriggerIdentifyingPointCollector defaultStartPointCollector; // r1+0x60
    }
}
// Range: 0x8000D450 -> 0x8000D558
bool xHavok_CheckGroundSupportFromCharacterRigidBody(class hkpCharacterRigidBody * pCharacterProxy /* r28 */, class hkpAllCdPointCollector * startPointCollector /* r29 */, class xVec3 * normal /* r30 */) {
    // Local variables
    class hkpSurfaceInfo ground; // r1+0x40
    class hkVector4 down; // r1+0x30

    {
        // Range: 0x8000D4A4 -> 0x8000D4D4
        // Local variables
        class hkStepInfo stepInfo; // r1+0x20
    }
    {
        // Range: 0x8000D4D4 -> 0x8000D508
        // Local variables
        class hkStepInfo stepInfo; // r1+0x10
        class TriggerIdentifyingPointCollector defaultStartPointCollector; // r1+0x80
    }

    // References
    // -> float dt;
}
