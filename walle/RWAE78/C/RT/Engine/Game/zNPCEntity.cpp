/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zNPCEntity.cpp
*/
// signature: zNPCBound::GetCapsuleLocal(xVec3 &, xVec3 &, float &)
// Range: 0x80102620 -> 0x80102890
void zNPCBound::GetCapsuleLocal() {
}
// signature: zNPCBound::GetModelBoundFromArticle(const xModelInstance *, xVec3 &, xVec3 &)
// Range: 0x80102890 -> 0x80102A3C
bool zNPCBound::GetModelBoundFromArticle() {
    // Local variables
    class Model * model; // r0
    unsigned int numberOfRenderables; // r0
    class BroadBound mergedBound; // r1+0x8
    class Vector * lowerNG; // r0
    class Vector * upperNG; // r0
    bool initialized; // r29

    {
        // Range: 0x801028D0 -> 0x801029E8
        // Local variables
        unsigned int i; // r0

        {
            // Range: 0x801028D0 -> 0x801029E8
            // Local variables
            class BroadBound * curBound; // r28
        }
    }
}
// signature: zNPCBound::GetModelBoundFromCollMesh(const xModelInstance *, xVec3 &, xVec3 &)
// Range: 0x80102A40 -> 0x80102B18
bool zNPCBound::GetModelBoundFromCollMesh(class xVec3 * lower /* r30 */, class xVec3 * upper /* r31 */) {
    // Local variables
    class ModelPrototypeEntity * proto; // r0
}
// Range: 0x80102B20 -> 0x80102DB0
void zNPCBound::Init(class zNPCBound * this /* r27 */, class xModelInstance * modelInst /* r28 */, class zNPCEntityParams * parameters /* r29 */, class xVec3 * modelScale /* r30 */) {
    // Local variables
    class xVec3 lower; // r1+0x14
    class xVec3 upper; // r1+0x8
}
// signature: zNPCEntity::BupdateWrapper(xEnt *, xVec3 *)
// Range: 0x80102DB0 -> 0x80102EA4
void zNPCEntity::BupdateWrapper() {
    // Local variables
    class zNPCEntity * npcEntity; // r0
}
// signature: zNPCEntity::NPCBeforeAnimMatrices(xAnimPlay *, xQuat *, xVec3 *, xVec3 *, int)
// Range: 0x80102EB0 -> 0x80102EF4
void zNPCEntity::NPCBeforeAnimMatrices(class xQuat * quat /* r11 */, class xVec3 * scale /* r10 */, class xVec3 * tran /* r0 */) {
    // Local variables
    class zNPCEntity * npcEntity; // r9
}
// signature: zNPCEntity::EventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80102F00 -> 0x80102F30
void zNPCEntity::EventWrapper(class xBase * from /* r9 */, class xBase * to /* r8 */, unsigned int to_event /* r0 */) {
}
// signature: zNPCEntity::AnimationVFXCB(void *)
// Range: 0x80102F30 -> 0x80102F44
void zNPCEntity::AnimationVFXCB() {
}
// signature: zNPCEntity::SetParameters(zNPCEntityParams *)
// Range: 0x80102F50 -> 0x80102F64
void zNPCEntity::SetParameters() {
}
// Range: 0x80102F70 -> 0x8010338C
void zNPCEntity::Attached(class zNPCEntity * this /* r28 */, class zNPCStatus * npcStatus /* r29 */) {
    // Local variables
    class NPCNGEntityContext context; // r1+0x8
    class xAnimTable * animTable; // r5

    // References
    // -> class xMat4x3 g_I3;
    // -> class zGlobals globals;
    // -> static class zNPCManager gNPCManager;
    // -> class zFactory factory;
}
// Range: 0x801033A0 -> 0x80103724
void zNPCEntity::Detached(class zNPCEntity * this /* r31 */, class zNPCStatus * npcStatus /* r25 */) {
    {
        // Range: 0x801033CC -> 0x80103418
        // Local variables
        class xVec3 orientation; // r1+0x14
    }
    {
        // Range: 0x8010347C -> 0x801034E0
        // Local variables
        unsigned int i; // r26
    }

    // References
    // -> class zFactory factory;
    // -> class Scene * primaryScene;
}
// Range: 0x80103730 -> 0x80103D54
void zNPCEntity::EnableCollision(class zNPCEntity * this /* r29 */) {
    // Local variables
    class hkpShape * collisionShape; // r30

    {
        // Range: 0x801037A0 -> 0x80103828
        // Local variables
        float r; // r1+0x10
        class xVec3 top; // r1+0x80
        class xVec3 bottom; // r1+0x8C
    }
    {
        // Range: 0x8010382C -> 0x80103898
        // Local variables
        float r; // f0
    }
    {
        // Range: 0x8010389C -> 0x801038F4
        // Local variables
        class CollisionMeshBlobEntity * collMesh; // r0
        class ModelPrototypeEntity * proto; // r3
    }
    {
        // Range: 0x8010391C -> 0x80103BC4
        // Local variables
        class hkpPropertyValue val; // r1+0x30
        class hkpCharacterProxyCinfo cpci; // r1+0xA0

        {
            // Range: 0x80103B44 -> 0x80103BB4
            // Local variables
            unsigned int i; // r31
        }
    }
    {
        // Range: 0x80103BC8 -> 0x80103D28
        // Local variables
        class hkpPropertyValue val; // r1+0x28
        class xQuat quat; // r1+0x70
        class hkpRigidBodyCinfo rbci; // r1+0x120
    }

    // References
    // -> float hkTransformIdentity[65536];
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// signature: zNPCEntity::RegisterCollisionListener(zNPCCollisionListener *)
// Range: 0x80103DA0 -> 0x80103E9C
void zNPCEntity::RegisterCollisionListener() {
    // Local variables
    bool registered; // r6

    {
        // Range: 0x80103DA0 -> 0x80103DF4
        // Local variables
        unsigned int i; // r0
    }
    {
        // Range: 0x80103E04 -> 0x80103E38
        // Local variables
        unsigned int i; // r6
    }
}
// signature: zNPCEntity::Reset(const zNPCStatus *)
// Range: 0x80103EA0 -> 0x80104708
void zNPCEntity::Reset(class zNPCEntity * this /* r30 */) {
    // Local variables
    float yaw; // f0

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_Ones;
    // -> class xVec3 m_Null;
}
// signature: zNPCEntity::SetAnimState(const unsigned int, float, xModelInstance *, const char *)
// Range: 0x80104710 -> 0x801047EC
void zNPCEntity::SetAnimState(unsigned int new_stateID /* r29 */, float blend /* f31 */, class xModelInstance * model /* r30 */) {
    // Local variables
    class xAnimTransition * transition; // r31
}
// signature: zNPCEntity::SetAnimState(const unsigned int, float, float, xModelInstance *, const char *)
// Range: 0x801047F0 -> 0x801048E4
void zNPCEntity::SetAnimState(unsigned int new_stateID /* r29 */, float blend /* f30 */, float dest_time /* f31 */, class xModelInstance * model /* r30 */) {
    // Local variables
    class xAnimTransition * transition; // r31
}
// Range: 0x801048F0 -> 0x801048F4
void zNPCEntity::_ApplyAnimPhysics() {
}
// signature: zNPCEntity::PreUpdate(float)
// Range: 0x80104900 -> 0x80104A98
void zNPCEntity::PreUpdate() {
    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80104AA0 -> 0x80104CF4
void zNPCEntity::UpdateWithVelocity(class zNPCEntity * this /* r30 */, float dt /* f29 */) {
    {
        // Range: 0x80104B48 -> 0x80104CB4
        // Local variables
        class hkVector4 vel; // r1+0x10

        {
            // Range: 0x80104BD0 -> 0x80104C30
            // Local variables
            class NPCChargerPointCollector startPointCollector; // r1+0x3A0
            class NPCChargerPointCollector castPointCollector; // r1+0x560
        }
        {
            // Range: 0x80104C30 -> 0x80104C90
            // Local variables
            class NPCEvePointCollector startPointCollector; // r1+0x20
            class NPCEvePointCollector castPointCollector; // r1+0x1E0
        }
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x80106300 -> 0x80106554
void zNPCEntity::UpdateWithPos(class zNPCEntity * this /* r29 */, float dt /* f31 */) {
    {
        // Range: 0x801063A4 -> 0x80106528
        // Local variables
        class hkVector4 velHk; // r1+0x10
        class xVec3 vel; // r1+0x20

        {
            // Range: 0x80106444 -> 0x801064A4
            // Local variables
            class NPCChargerPointCollector startPointCollector; // r1+0x3B0
            class NPCChargerPointCollector castPointCollector; // r1+0x570
        }
        {
            // Range: 0x801064A4 -> 0x80106504
            // Local variables
            class NPCEvePointCollector startPointCollector; // r1+0x30
            class NPCEvePointCollector castPointCollector; // r1+0x1F0
        }
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x80106570 -> 0x80106670
void zNPCEntity::UpdateWithTeleport(class zNPCEntity * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x8010660C -> 0x8010664C
        // Local variables
        class hkVector4 posHk; // r1+0x10
        class xVec3 * pos; // r0
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x80106670 -> 0x801066DC
void zNPCEntity::PostUpdate(class zNPCEntity * this /* r31 */, float dt /* f31 */) {
    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x801066E0 -> 0x80106778
void zNPCEntity::Paused(class zNPCEntity * this /* r31 */) {
    // References
    // -> class zGlobals globals;
}
// Range: 0x80106780 -> 0x80106810
void zNPCEntity::Resumed(class zNPCEntity * this /* r31 */) {
}
// signature: zNPCEntity::SetFrameFromHeading(xVec3 &)
// Range: 0x80106810 -> 0x80106870
void zNPCEntity::SetFrameFromHeading() {
    // Local variables
    class xMat4x3 * mat; // r7

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x80106870 -> 0x8010692C
void zNPCEntity::SetFrameFromYaw(class zNPCEntity * this /* r30 */, float yaw /* f31 */) {
    // Local variables
    class xVec3 heading; // r1+0x8

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x80106930 -> 0x80106A84
void zNPCEntity::GetAABBCenter(class xVec3 * center /* r30 */) const {
    {
        // Range: 0x80106944 -> 0x80106A30
        // Local variables
        class hkVector4 aabbCenter; // r1+0x10
        class hkAabb aabb; // r1+0x20
        class hkTransform xform; // r1+0x40
    }
}
