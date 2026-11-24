/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xHavokPhysicsObject.cpp
*/
static class hkpSphereShape defaultSphereShape; // size: 0x20, address: 0x80805D68
class hkPointerMap * jointRelativeCreationMap; // size: 0x4, address: 0x80805D88
// signature: xHavokPhysicsObject::AddRigidBodyToSystem(const hkpShape *, const hkVector4 &, const hkTransform &, unsigned int, hkpMotion::MotionType, float, float, float, float, float, hkpCollidableQualityType, unsigned long long *)
// Range: 0x80006610 -> 0x8000683C
bool xHavokPhysicsObject::AddRigidBodyToSystem(class xHavokPhysicsObject * this /* r28 */, class hkVector4 & shapeScale /* r25 */, class hkTransform & worldTransform /* r26 */, unsigned int collisionFilter /* r29 */, enum MotionType motionType /* r30 */, float mass /* f27 */, float friction /* f28 */, float elasticity /* f29 */, float linearDamping /* f30 */, float angularDamping /* f31 */, enum hkpCollidableQualityType qualityType /* r31 */) {
    // Local variables
    class hkpShape * shape; // r27
    class hkQuaternion rotation; // r1+0x10
    class hkpRigidBodyCinfo createInfo; // r1+0x20
    class hkpRigidBody * newBody; // r0

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> class CHavokShapeBuilder * s_instance;
    // -> static class hkpSphereShape defaultSphereShape;
}
// Range: 0x80006880 -> 0x800069B4
void xHavokPhysicsObject::SystemSetHavokFloatScalar(class xHavokPhysicsObject * this /* r26 */, void (hkpRigidBody::* & setRoutine)(void * this, void * this, float) /* r31 */, float (hkpRigidBody::* & getRoutine)(void * this, void * this) /* r25 */, float val /* f31 */) {
    {
        // Range: 0x80006900 -> 0x80006994
        // Local variables
        unsigned int packedBodyIndex; // r0
        class hkArray & packedBodies; // r0
        class hkpPhysicsSystem * packedPhysicsSystem; // r0

        {
            // Range: 0x80006938 -> 0x80006974
            // Local variables
            class hkpRigidBody * * it; // r27

            {
                // Range: 0x80006938 -> 0x80006974
                // Local variables
                class hkpRigidBody * body; // r26
            }
        }
    }
}
// Range: 0x80006A00 -> 0x800072D4
bool xHavokPhysicsObject::CreateFromPackedData(class xHavokPhysicsObject * this /* r15 */, class Model & model /* r19 */, class CollisionMeshBlobEntity * packedPhysicsData /* r18 */, class hkTransform & worldTransform /* r1+0x10 */, float mass /* f22 */, float friction /* f23 */, float elasticity /* f24 */, float linearDamping /* f25 */, float angularDamping /* f26 */, enum hkpCollidableQualityType qualityType /* r16 */, enum MotionType motionType /* r1+0x14 */, unsigned int collisionFilter /* r1+0x18 */, class hkVector4 & scale /* r17 */, unsigned long long * id /* r28+0x8 */) {
    // Local variables
    class hkpShape * packedShape; // r14
    class hkpPhysicsSystem * packedPhysicsSystem; // r1+0x1EC

    {
        // Range: 0x80006AD8 -> 0x80007214
        // Local variables
        class hkArray & packedConstraints; // r18
        class hkArray & createdBodies; // r16
        class hkArray & packedBodies; // r23
        unsigned int rigidBodyIndex; // r24
        bool initializingRelativeTransforms; // r1+0x1E4
        int rootRigidBodyJointNumber; // r1+0x1F0
        class SkinCluster * skin; // r25
        class Dummy * skinnedTransformIt; // r26
        class Skeleton * skeleton; // r1+0x1E8
        int newSystemGroupFilter; // r27

        {
            // Range: 0x80006B78 -> 0x80006F78
            // Local variables
            class hkpRigidBody * * it; // r22

            {
                // Range: 0x80006B78 -> 0x80006F78
                // Local variables
                enum hkpCollidableQualityType bodyQualityType; // r18
                enum MotionType bodyMotionType; // r19
                unsigned int collFilter; // r14
                int subSystemNoCollideID; // r19
                int subSystemID; // r20
                class hkTransform newScaledBodyWorldTransform; // r1+0xA0
                class hkTransform bodyModelTransform; // r1+0xE0
                class hkpShape * packedShape; // r1+0x1E0
                class hkpRigidBody * packedBody; // r21

                {
                    // Range: 0x80006B7C -> 0x80006B7C
                    // Local variables
                    bool justCreatedJointRelativeTransformMap; // r14
                    unsigned int jointNumber; // r1+0x28

                    {
                        // Range: 0x80006B7C -> 0x80006B7C
                        {
                            // Range: 0x80006B7C -> 0x80006B7C
                            // Local variables
                            class RelativeJointEntry * it; // r18
                        }
                        {
                            // Range: 0x80006B7C -> 0x80006B7C
                            // Local variables
                            class Matrix43 invRigidBodyBindMatrix; // r1+0x180
                            class Matrix43 bindMatrix; // r1+0x1B0
                        }
                    }
                    {
                        // Range: 0x80006B7C -> 0x80006B7C
                        // Local variables
                        class Matrix43 invRigidBodyBindMatrix; // r1+0x120
                        class Matrix43 bindMatrix; // r1+0x150
                        class PhysicsJointRelativeTransforms * physicsCreationTransforms; // r0
                    }
                    {
                        // Range: 0x80006B7C -> 0x80006B7C
                        // Local variables
                        class PhysicsJointRelativeTransforms * physicsCreationTransforms; // r0
                    }
                }
                {
                    // Range: 0x80006B7C -> 0x80006B7C
                    // Local variables
                    class hkVector4 bodyScaledTranslation; // r1+0x30
                }
            }
        }
        {
            // Range: 0x80006F90 -> 0x800070D4
            // Local variables
            class Matrix43 modelspaceJointBindMatrix; // r1+0x40
            class Matrix43 rootRigidBodyJointInvBindMat; // r1+0x70
            class hkArray & jointEntries; // r16
            class PhysicsJointRelativeTransforms * physicsCreationTransforms; // r0

            {
                // Range: 0x80006FF0 -> 0x800070C4
                // Local variables
                int jointNum; // r18

                {
                    // Range: 0x80006FF0 -> 0x800070C4
                    // Local variables
                    unsigned char firstRigidBodyDescendantParentJointNum; // r21
                    unsigned char parentJointNum; // r20
                }
            }
        }
        {
            // Range: 0x80007128 -> 0x80007200
            // Local variables
            class hkpConstraintInstance * * it; // r19

            {
                // Range: 0x80007128 -> 0x80007200
                // Local variables
                class hkpConstraintData * scaledConstraintData; // r21
                class hkpRigidBody * newConstraintBodyB; // r22
                class hkpRigidBody * newConstraintBodyA; // r20
                int newBodyBIndex; // r21
                int newBodyAIndex; // r20
                class hkpConstraintInstance * packedConstraint; // r14
            }
        }
    }

    // References
    // -> class hkPointerMap * jointRelativeCreationMap;
}
// signature: xHavokPhysicsObject::CreateFromCollisionShape(const hkpShape *, const hkVector4 &, const xMat4x3 &, unsigned int, hkpMotion::MotionType, float, float, float, float, float, hkpCollidableQualityType, unsigned long long *)
// Range: 0x80008440 -> 0x800087C0
bool xHavokPhysicsObject::CreateFromCollisionShape(class xHavokPhysicsObject * this /* r24 */, class hkpShape * shape /* r25 */, class hkVector4 & shapeScale /* r26 */, unsigned int collisionFilter /* r27 */, enum MotionType motionType /* r28 */, float mass /* f27 */, float friction /* f28 */, float elasticity /* f29 */, float linearDamping /* f30 */, float angularDamping /* f31 */, enum hkpCollidableQualityType qualityType /* r29 */, unsigned long long * id /* r30 */) {
    // Local variables
    class Matrix43 mathmat; // r1+0x100
    class hkTransform transform; // r1+0xC0

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x80008830 -> 0x80008964
bool xHavokPhysicsObject::CreateFromCollisionShape(class xHavokPhysicsObject * this /* r24 */, class hkpShape * shape /* r25 */, class hkVector4 & shapeScale /* r26 */, class hkTransform & worldTransform /* r27 */, unsigned int collisionFilter /* r28 */, enum MotionType motionType /* r29 */, float mass /* f27 */, float friction /* f28 */, float elasticity /* f29 */, float linearDamping /* f30 */, float angularDamping /* f31 */, enum hkpCollidableQualityType qualityType /* r30 */, unsigned long long * id /* r31 */) {
    // Local variables
    bool success; // r3

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x80008970 -> 0x80008AD0
bool xHavokPhysicsObject::CreateFromCollisionShapes(class xHavokPhysicsObject * this /* r15 */, class hkArray & shapes /* r16 */, class hkArray & shapeScales /* r17 */, class hkArray & worldTransforms /* r18 */, class hkArray & collisionFilters /* r19 */, class hkArray & motionTypes /* r20 */, class hkArray & masses /* r21 */, class hkArray & frictions /* r22 */, class hkArray & elasticities /* r23 */, class hkArray & qualityTypes /* r24 */, unsigned long long * id /* r25 */) {
    // Local variables
    unsigned int numShapes; // r0
    bool success; // r27

    {
        // Range: 0x800089FC -> 0x80008A70
        // Local variables
        unsigned int c; // r26

        {
            // Range: 0x800089FC -> 0x80008A70
            // Local variables
            enum hkpCollidableQualityType curQuality; // r0
            float elasticity; // f3
            float friction; // f2
            float mass; // f1
            enum MotionType curMotionType; // r0
            unsigned int curFilter; // r0
            class hkTransform & curTransform; // r0
            class hkVector4 & curScale; // r0
            class hkpShape * curShape; // r0
        }
    }

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// signature: xHavokPhysicsObject::ScaleConstraintBodyAttachSpace(hkpConstraintData *, const hkVector4 &, const hkVector4 &, bool)
// Range: 0x80008AD0 -> 0x80009370
class hkpConstraintData * xHavokPhysicsObject::ScaleConstraintBodyAttachSpace(class hkpConstraintData * constraintData /* r28 */, class hkVector4 & scaleBodyA /* r29 */, class hkVector4 & scaleBodyB /* r30 */) {
    // Local variables
    class ConstraintInfo origConstraintSetup; // r1+0x140

    {
        // Range: 0x80008D48 -> 0x800090B8
        // Local variables
        class hkMatrix3 target; // r1+0x160
        class hkpRagdollConstraintData * newConstraint; // r25
        class hkVector4 twistAxisB; // r1+0xE0
        class hkVector4 twistAxisA; // r1+0xF0
        class hkVector4 planeAxisB; // r1+0x100
        class hkVector4 planeAxisA; // r1+0x110
        class hkpRagdollConstraintData * constraint; // reg65535
        class hkVector4 pivotB; // r1+0x120
        class hkVector4 pivotA; // r1+0x130
        class hkTransform & constraintBodyTransformB; // r25
        class hkTransform & constraintBodyTransformA; // r26
        class hkpSetLocalTransformsConstraintAtom & transformAtom; // r5
    }
    {
        // Range: 0x800090B8 -> 0x80009150
        // Local variables
        class hkpStiffSpringConstraintData * newConstraint; // r0
        class hkpStiffSpringConstraintData * constraint; // r0
        class hkVector4 pivotB; // r1+0xC0
        class hkVector4 pivotA; // r1+0xD0
        class hkpSetLocalTranslationsConstraintAtom & translateAtom; // r9
    }
    {
        // Range: 0x80009150 -> 0x8000933C
        // Local variables
        class hkpHingeConstraintData * newConstraint; // r0
        class hkVector4 hingeAxisB; // r1+0x80
        class hkVector4 hingeAxisA; // r1+0x90
        class hkpHingeConstraintData * constraint; // r0
        class hkVector4 pivotB; // r1+0xA0
        class hkVector4 pivotA; // r1+0xB0
        class hkTransform & constraintBodyTransformB; // r25
        class hkTransform & constraintBodyTransformA; // r12
        class hkpSetLocalTransformsConstraintAtom & transformAtom; // r3
    }
    {
        // Range: 0x80009340 -> 0x80009340
        // Local variables
        class hkpPrismaticConstraintData * constraint; // r0
    }
    {
        // Range: 0x80009340 -> 0x80009340
        // Local variables
        class hkpBallAndSocketConstraintData * constraint; // r0
    }
    {
        // Range: 0x80009340 -> 0x80009340
        // Local variables
        class hkpLimitedHingeConstraintData * constraint; // r0
    }
    {
        // Range: 0x80009340 -> 0x80009340
        // Local variables
        class hkpPointToPathConstraintData * constraint; // r0
    }
    {
        // Range: 0x80009340 -> 0x80009340
        // Local variables
        class hkpWheelConstraintData * constraint; // r0
    }
    {
        // Range: 0x80009340 -> 0x80009340
        // Local variables
        class hkpGenericConstraintData * constraint; // r0
    }
    {
        // Range: 0x80009340 -> 0x80009340
        // Local variables
        class hkpSimpleContactConstraintData * constraint; // r0
    }
    {
        // Range: 0x80009340 -> 0x80009340
        // Local variables
        class hkpBreakableConstraintData * constraint; // r0
    }
    {
        // Range: 0x80009340 -> 0x80009340
        // Local variables
        class hkpMalleableConstraintData * constraint; // r0
    }
    {
        // Range: 0x80009340 -> 0x80009340
        // Local variables
        class hkpPointToPlaneConstraintData * constraint; // r0
    }
    {
        // Range: 0x80009340 -> 0x80009340
        // Local variables
        class hkpPulleyConstraintData * constraint; // r0
    }
    {
        // Range: 0x80009340 -> 0x80009340
        // Local variables
        class hkpRotationalConstraintData * constraint; // r0
    }
    {
        // Range: 0x80009340 -> 0x80009340
        // Local variables
        class hkpHingeLimitsData * constraint; // r0
    }
    {
        // Range: 0x80009340 -> 0x80009340
        // Local variables
        class hkpRagdollLimitsData * constraint; // r0
    }

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x800093F0 -> 0x8000966C
void xHavokPhysicsObject::Cleanup(class xHavokPhysicsObject * this /* r31 */) {
    {
        // Range: 0x8000941C -> 0x80009644
        // Local variables
        class Dummy * it; // r4

        {
            // Range: 0x80009434 -> 0x80009644
            // Local variables
            class PhysicsJointRelativeTransforms * physicsCreationTransforms; // r30
        }
    }

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> class hkPointerMap * jointRelativeCreationMap;
}
// signature: xHavokPhysicsObject::IsAnchorBody(const hkpRigidBody *)
// Range: 0x80009670 -> 0x8000968C
bool xHavokPhysicsObject::IsAnchorBody() {
    // Local variables
    unsigned int userData; // r0
}
// signature: xHavokPhysicsObject::GetGraphicsAssociationDataFromRigidBody(const hkpRigidBody *, unsigned int &)
// Range: 0x80009690 -> 0x800096EC
enum GraphicsAssociationType xHavokPhysicsObject::GetGraphicsAssociationDataFromRigidBody() {
    {
        // Range: 0x80009690 -> 0x800096E4
        // Local variables
        unsigned int userData; // r0

        {
            // Range: 0x800096A4 -> 0x800096E4
            // Local variables
            bool renderableIndexData; // r0
        }
    }
}
// signature: xHavokPhysicsObject::SetOwner(const void *)
// Range: 0x800096F0 -> 0x80009730
void xHavokPhysicsObject::SetOwner() {
    {
        // Range: 0x800096F4 -> 0x8000972C
        {
            // Range: 0x800096FC -> 0x8000970C
            // Local variables
            class hkpRigidBody * * it; // r6
        }
    }
}
// signature: xHavokPhysicsObject::GetRigidBody(unsigned int)
// Range: 0x80009730 -> 0x80009760
class hkpRigidBody * xHavokPhysicsObject::GetRigidBody() {
}
// Range: 0x800097B0 -> 0x80009C80
void xHavokPhysicsObject::GetTransform(class hkTransform & worldTransform /* r28 */) {
    {
        // Range: 0x80009800 -> 0x80009BE8
        // Local variables
        class hkArray & bodies; // r0

        {
            // Range: 0x80009824 -> 0x80009B94
            // Local variables
            class PhysicsJointRelativeTransforms * physicsCreationTransforms; // r30

            {
                // Range: 0x80009830 -> 0x80009B40
                // Local variables
                int rootJointRigidBodyIndex; // r5
                class hkArray * bodyRelativeJointTransforms; // r29

                {
                    // Range: 0x8000988C -> 0x80009AF4
                    // Local variables
                    class Matrix43 modelRootMat; // r1+0xF0
                    class Matrix43 joint0WorldMat; // r1+0x120
                    class Matrix43 rootBodyWorldspaceJointMat; // r1+0x150
                    class Matrix43 rootBodyMat; // r1+0x180
                }
            }
        }
    }

    // References
    // -> class hkPointerMap * jointRelativeCreationMap;
}
// Range: 0x80009CF0 -> 0x8000A008
void xHavokPhysicsObject::GetTransform(class Matrix43 & worldTransform /* r31 */) {
    {
        // Range: 0x80009D14 -> 0x80009F80
        {
            // Range: 0x80009D28 -> 0x80009F14
            // Local variables
            class PhysicsJointRelativeTransforms * physicsCreationTransforms; // r29

            {
                // Range: 0x80009D34 -> 0x80009EA8
                // Local variables
                int rootJointRigidBodyIndex; // r0
                class hkArray * bodyRelativeJointTransforms; // r28

                {
                    // Range: 0x80009D90 -> 0x80009E40
                    // Local variables
                    class Matrix43 joint0WorldMat; // r1+0x10
                    class Matrix43 rootBodyWorldspaceJointMat; // r1+0x40
                    class Matrix43 rootBodyMat; // r1+0x70
                }
            }
        }
    }

    // References
    // -> static class Matrix43 _matIdentity;
    // -> class hkPointerMap * jointRelativeCreationMap;
}
// signature: xHavokPhysicsObject::SetTransform(const xMat4x3 &)
// Range: 0x8000A010 -> 0x8000A2A0
void xHavokPhysicsObject::SetTransform(class xHavokPhysicsObject * this /* r31 */) {
    // Local variables
    class Matrix43 mathmat; // r1+0x100
    class hkTransform transform; // r1+0xC0
}
// Range: 0x8000A2A0 -> 0x8000A37C
void xHavokPhysicsObject::SetTransform(class hkTransform & worldTransform /* r28 */) {
    {
        // Range: 0x8000A2D0 -> 0x8000A358
        // Local variables
        class hkArray & bodies; // r0

        {
            // Range: 0x8000A2F0 -> 0x8000A358
            // Local variables
            class hkTransform systemWorldTransform; // r1+0x50

            {
                // Range: 0x8000A308 -> 0x8000A33C
                // Local variables
                class hkpRigidBody * * it; // r30

                {
                    // Range: 0x8000A308 -> 0x8000A33C
                    // Local variables
                    class hkTransform newBodyTransform; // r1+0x10
                    class hkpRigidBody * body; // r29
                }
            }
        }
    }
}
// Range: 0x8000A380 -> 0x8000A3E8
void xHavokPhysicsObject::SetPosition(class xHavokPhysicsObject * this /* r30 */, class hkVector4 & pos /* r31 */) {
    // Local variables
    class hkTransform systemTransform; // r1+0x10
}
// Range: 0x8000A3F0 -> 0x8000A5BC
void xHavokPhysicsObject::SetMass(class xHavokPhysicsObject * this /* r26 */, float mass /* f29 */) {
    {
        // Range: 0x8000A478 -> 0x8000A58C
        // Local variables
        unsigned int packedBodyIndex; // r0
        float totalSystemMassScalar; // f29
        float totalSystemMass; // f30
        class hkpPhysicsSystem * packedPhysicsSystem; // r0

        {
            // Range: 0x8000A4B0 -> 0x8000A4D8
            // Local variables
            class hkpRigidBody * * it; // r27

            {
                // Range: 0x8000A4B0 -> 0x8000A4D8
                // Local variables
                class hkpRigidBody * body; // r0
            }
        }
        {
            // Range: 0x8000A514 -> 0x8000A56C
            // Local variables
            class hkpRigidBody * * it; // r27

            {
                // Range: 0x8000A514 -> 0x8000A56C
                // Local variables
                class hkpRigidBody * body; // r26

                {
                    // Range: 0x8000A51C -> 0x8000A56C
                    // Local variables
                    float packedMass; // f1
                }
            }
        }
    }
}
// signature: xHavokPhysicsObject::SetFriction(float)
// Range: 0x8000A5C0 -> 0x8000A620
void xHavokPhysicsObject::SetFriction() {
}
// signature: xHavokPhysicsObject::SetElasticity(float)
// Range: 0x8000A620 -> 0x8000A680
void xHavokPhysicsObject::SetElasticity() {
}
// signature: xHavokPhysicsObject::SetLinearDamping(float)
// Range: 0x8000A680 -> 0x8000A6E0
void xHavokPhysicsObject::SetLinearDamping() {
}
// signature: xHavokPhysicsObject::SetAngularDamping(float)
// Range: 0x8000A6F0 -> 0x8000A750
void xHavokPhysicsObject::SetAngularDamping() {
}
// Range: 0x8000A760 -> 0x8000A80C
void xHavokPhysicsObject::Activate() {
    // Local variables
    class hkArray & bodies; // r0

    {
        // Range: 0x8000A780 -> 0x8000A7D0
        // Local variables
        class hkpRigidBody * * it; // r29

        {
            // Range: 0x8000A780 -> 0x8000A7D0
            // Local variables
            class hkpRigidBody * body; // r28
        }
    }
}
// Range: 0x8000A810 -> 0x8000A884
void xHavokPhysicsObject::Deactivate() {
    // Local variables
    class hkArray & bodies; // r0

    {
        // Range: 0x8000A828 -> 0x8000A850
        // Local variables
        class hkpRigidBody * * it; // r30

        {
            // Range: 0x8000A828 -> 0x8000A850
            // Local variables
            class hkpRigidBody * body; // r3
        }
    }
}
// signature: xHavokPhysicsObject::SetCollisionFilter(unsigned int)
// Range: 0x8000A890 -> 0x8000A9B0
void xHavokPhysicsObject::SetCollisionFilter() {
    // Local variables
    unsigned int layer; // r30

    {
        // Range: 0x8000A8A8 -> 0x8000A99C
        // Local variables
        class hkArray & bodies; // r0

        {
            // Range: 0x8000A8BC -> 0x8000A8E8
            // Local variables
            class hkpRigidBody * * it; // r27

            {
                // Range: 0x8000A8BC -> 0x8000A8E8
                // Local variables
                class hkpRigidBody * body; // r3
            }
        }
        {
            // Range: 0x8000A904 -> 0x8000A99C
            // Local variables
            unsigned int bodyIndex; // r0
            class hkArray & packedBodies; // r0
            class hkpPhysicsSystem * packedPhysicsSystem; // r0

            {
                // Range: 0x8000A918 -> 0x8000A97C
                // Local variables
                class hkpRigidBody * * it; // r29

                {
                    // Range: 0x8000A918 -> 0x8000A97C
                    // Local variables
                    int oldSubSystemNoCollideID; // r7
                    int oldSubsystemID; // r6
                    class hkpRigidBody * body; // r3
                    class hkpRigidBody * packedBody; // r4
                }
            }
        }
    }
}
// signature: xHavokPhysicsObject::ApplyLinearImpulse(const hkVector4 &, xHavokPhysicsObject::SystemApplicationType)
// Range: 0x8000A9B0 -> 0x8000A9F8
void xHavokPhysicsObject::ApplyLinearImpulse() {
}
// signature: xHavokPhysicsObject::SetMotionType(hkpMotion::MotionType, xHavokPhysicsObject::SystemApplicationType)
// Range: 0x8000AB80 -> 0x8000ABD0
void xHavokPhysicsObject::SetMotionType() {
}
// signature: xHavokPhysicsObject::SetLinearVelocity(const hkVector4 &, xHavokPhysicsObject::SystemApplicationType)
// Range: 0x8000AD30 -> 0x8000AD78
void xHavokPhysicsObject::SetLinearVelocity() {
}
// signature: xHavokPhysicsObject::SetAngularVelocity(const hkVector4 &, xHavokPhysicsObject::SystemApplicationType)
// Range: 0x8000ADD0 -> 0x8000AE18
void xHavokPhysicsObject::SetAngularVelocity() {
}
// Range: 0x8000AE70 -> 0x8000AF7C
void xHavokPhysicsObject::UpdateKeyframedMotion(class xHavokPhysicsObject * this /* r31 */, float dt /* f31 */, class hkVector4 & pos /* r30 */, class hkQuaternion & rot /* r29 */) {
    {
        // Range: 0x8000AEAC -> 0x8000AF54
        // Local variables
        class hkArray & bodies; // r0
        class hkTransform newSystemTransform; // r1+0xA0
        class hkTransform systemWorldTransform; // r1+0xE0

        {
            // Range: 0x8000AEE0 -> 0x8000AF38
            // Local variables
            class hkpRigidBody * * it; // r30

            {
                // Range: 0x8000AEE0 -> 0x8000AF38
                // Local variables
                class hkpRigidBody * body; // r29

                {
                    // Range: 0x8000AEEC -> 0x8000AF38
                    // Local variables
                    class hkQuaternion newBodyRotation; // r1+0x10
                    class hkTransform newBodyTransform; // r1+0x60

                    {
                        // Range: 0x8000AEF8 -> 0x8000AF18
                        // Local variables
                        class hkTransform differenceTransform; // r1+0x20
                    }
                }
            }
        }
    }
}
// Range: 0x8000AF80 -> 0x8000B84C
void xHavokPhysicsObject::MatchRenderedModelToPhysics(class xHavokPhysicsObject * this /* r22 */, class Model & model /* r25 */, float physicsBlend /* f30 */, enum JointTransformSpace jointTransformSpace /* r23 */, bool applyInvBindMat /* r24 */) {
    {
        // Range: 0x8000AFE0 -> 0x8000B014
        // Local variables
        class Matrix43 graphicsMat; // r1+0x460
        class hkTransform rootTransform; // r1+0x490
    }
    {
        // Range: 0x8000B018 -> 0x8000B820
        // Local variables
        class Skeleton * skeleton; // r29
        class hkArray & bodies; // r30
        class hkArray & packedBodies; // r31
        class hkpPhysicsSystem * packedPhysicsSystem; // r0

        {
            // Range: 0x8000B05C -> 0x8000B560
            // Local variables
            int rootRigidBodyJointNum; // r19
            bool blendingAnimationPhysics; // r25
            class hkLocalArray physicsModelspaceJoints; // r1+0x50
            class hkLocalArray originalAnimatedModelspaceJoints; // r1+0x60
            class Matrix43 invModelRootTransform; // r1+0x430
            class hkArray * bodyRelativeJointTransforms; // r26
            class PhysicsJointRelativeTransforms * physicsCreationTransforms; // r1+0x1C
            class Matrix43 * jointMatrices; // r27
            bool modelJointsUpdatedThisFrame; // r0
            bool bufferSwap; // r1+0x10
            unsigned int numJoints; // r28
            class SkinCluster * skin; // r0

            {
                // Range: 0x8000B164 -> 0x8000B1B8
                // Local variables
                unsigned int jointNum; // r23

                {
                    // Range: 0x8000B164 -> 0x8000B1B8
                    // Local variables
                    class Matrix43 currentJointMat; // r1+0x3D0
                    class Matrix43 jointBindMat; // r1+0x400
                }
            }
            {
                // Range: 0x8000B1CC -> 0x8000B1D4
                // Local variables
                unsigned int jointNum; // r21
            }
            {
                // Range: 0x8000B1FC -> 0x8000B26C
                // Local variables
                class Matrix43 physicsJointWorldMat; // r1+0x370
                class Matrix43 rigidBodyWorldMat; // r1+0x3A0
                class hkpRigidBody * body; // r21
                class RelativeJointEntry & relativeJointEntry; // r20
            }
            {
                // Range: 0x8000B26C -> 0x8000B540
                // Local variables
                int jointNum; // r18

                {
                    // Range: 0x8000B26C -> 0x8000B540
                    // Local variables
                    class Matrix43 physicsJointParentSpaceMat; // r1+0x340
                    class RelativeJointEntry & relativeJointEntry; // r17
                    unsigned char parentJointIndex; // r0

                    {
                        // Range: 0x8000B2A0 -> 0x8000B300
                        // Local variables
                        class Matrix43 physicsJointWorldMat; // r1+0x2E0
                        class Matrix43 rigidBodyWorldMat; // r1+0x310
                        class hkpRigidBody * body; // r23
                    }
                    {
                        // Range: 0x8000B300 -> 0x8000B364
                        // Local variables
                        class Matrix43 invParentJointModelMat; // r1+0x2B0
                    }
                    {
                        // Range: 0x8000B3AC -> 0x8000B43C
                        // Local variables
                        class Matrix43 & rootRigidBodyJointModelspaceTransform; // r23

                        {
                            // Range: 0x8000B3D8 -> 0x8000B43C
                            // Local variables
                            class Matrix43 invParentJointModelMat; // r1+0x280
                        }
                    }
                    {
                        // Range: 0x8000B43C -> 0x8000B520
                        // Local variables
                        class Matrix43 unscaledBlendedJointModelMat; // r1+0x1C0
                        class Matrix43 blendedJointParentSpaceMat; // r1+0x1F0
                        class Matrix43 existingJointParentSpaceMat; // r1+0x250
                        class Matrix43 & existingJointModelMat; // r17

                        {
                            // Range: 0x8000B45C -> 0x8000B4AC
                            // Local variables
                            class Matrix43 invExistingParentJointModelMat; // r1+0x220
                        }
                    }
                }
            }
        }
        {
            // Range: 0x8000B560 -> 0x8000B814
            // Local variables
            unsigned int bodyIndex; // r17
            class hkLocalArray modelWorldTransforms; // r1+0x40

            {
                // Range: 0x8000B5B8 -> 0x8000B66C
                // Local variables
                class hkpRigidBody * * it; // r18

                {
                    // Range: 0x8000B5B8 -> 0x8000B66C
                    // Local variables
                    class Matrix43 unscaledFinalWorldMat; // r1+0x190
                    unsigned short renderableTransformIndex; // r0
                    unsigned int renderableIndex; // r1+0x18
                    class hkpRigidBody * packedBody; // r0
                    class hkpRigidBody * body; // r19

                    {
                        // Range: 0x8000B5C4 -> 0x8000B658
                        // Local variables
                        class Matrix43 tempMat; // r1+0x160
                    }
                }
            }
            {
                // Range: 0x8000B684 -> 0x8000B7FC
                // Local variables
                class hkpRigidBody * * it; // r17

                {
                    // Range: 0x8000B684 -> 0x8000B7FC
                    // Local variables
                    class Matrix43 scaledParentRelativeMat; // r1+0x70
                    class Matrix43 originalParentRelativeMat; // r1+0xA0
                    class Matrix43 parentRelativeMat; // r1+0xD0
                    class Matrix43 originalParentWorldMat; // r1+0x100
                    unsigned short parentTransformIndex; // r0
                    class Matrix43 parentWorldMat; // r1+0x130
                    unsigned short * parentTransformIndices; // r0
                    unsigned short renderableTransformIndex; // r0
                    unsigned int renderableIndex; // r1+0x14
                    class hkpRigidBody * packedBody; // r0
                }
            }
        }
    }

    // References
    // -> class hkPointerMap * jointRelativeCreationMap;
}
// Range: 0x8000C6B0 -> 0x8000CA0C
void xHavokPhysicsObject::MatchPhysicsToRenderedModel(class xHavokPhysicsObject * this /* r28 */, class Model & model /* r29 */, enum JointTransformSpace jointTransformSpace /* r30 */) {
    {
        // Range: 0x8000C6F4 -> 0x8000C72C
        // Local variables
        class hkpRigidBody * body; // r24

        {
            // Range: 0x8000C6FC -> 0x8000C72C
            // Local variables
            class hkTransform modelRootTransform; // r1+0x1D0
        }
    }
    {
        // Range: 0x8000C730 -> 0x8000C9F4
        // Local variables
        class Skeleton * skeleton; // r26
        int numBodies; // r0
        class hkArray & bodies; // r31
        class hkArray & packedBodies; // r25
        class hkpPhysicsSystem * packedPhysicsSystem; // r0

        {
            // Range: 0x8000C768 -> 0x8000C920
            // Local variables
            class PhysicsJointRelativeTransforms * physicsCreationTransforms; // r1+0x14
            class Matrix43 * jointMatrices; // r23
            bool jointTransformsSetup; // r0
            unsigned int numJoints; // r0
            class SkinCluster * skin; // r0

            {
                // Range: 0x8000C7D4 -> 0x8000C90C
                // Local variables
                int foundBodies; // r21
                int jointNum; // r22

                {
                    // Range: 0x8000C7D4 -> 0x8000C90C
                    // Local variables
                    class Matrix43 jointModelSpaceMat; // r1+0x1A0
                    int rigidBodyIndex; // r19
                    class RelativeJointEntry & relativeJointEntry; // r20

                    {
                        // Range: 0x8000C814 -> 0x8000C848
                        // Local variables
                        class Matrix43 jointBindMat; // r1+0x170
                    }
                    {
                        // Range: 0x8000C858 -> 0x8000C884
                        // Local variables
                        class Matrix43 jointBindMat; // r1+0x140
                    }
                    {
                        // Range: 0x8000C884 -> 0x8000C900
                        // Local variables
                        class hkTransform bodyTransform; // r1+0x70
                        class Matrix43 bodyWorldSpaceMat; // r1+0xB0
                        class Matrix43 inverseBodyToJointMat; // r1+0xE0
                        class Matrix43 jointWorldSpaceMat; // r1+0x110
                    }
                }
            }
        }
        {
            // Range: 0x8000C920 -> 0x8000C9E8
            // Local variables
            unsigned int bodyIndex; // r19
            class hkLocalArray modelWorldTransforms; // r1+0x18

            {
                // Range: 0x8000C960 -> 0x8000C9D0
                // Local variables
                class hkpRigidBody * * it; // r20

                {
                    // Range: 0x8000C960 -> 0x8000C9D0
                    // Local variables
                    class hkTransform bodyTransform; // r1+0x30
                    unsigned short renderableTransformIndex; // r0
                    unsigned int renderableIndex; // r1+0x10
                    class hkpRigidBody * packedBody; // r0
                    class hkpRigidBody * body; // r21
                }
            }
        }
    }

    // References
    // -> class hkPointerMap * jointRelativeCreationMap;
}
// signature: xHavokPhysicsObject::ConvertHKTransformToGraphicsTransform(const hkTransform &, Math::Matrix43 &)
// Range: 0x8000CA20 -> 0x8000CA84
void xHavokPhysicsObject::ConvertHKTransformToGraphicsTransform() {
}
// signature: xHavokPhysicsObject::ConvertGraphicsTransformToHKTransform(const Math::Matrix43 &, hkTransform &)
// Range: 0x8000CAD0 -> 0x8000CCC0
void xHavokPhysicsObject::ConvertGraphicsTransformToHKTransform(class hkTransform & trans /* r31 */) {
    // Local variables
    class Matrix43 normalizeGraphicsTrans; // r1+0x90
    class Vector posRef; // r1+0x80
    class Vector forwardRef; // r1+0x70
    class Vector leftRef; // r1+0x60
    class Vector upRef; // r1+0x50
    class hkRotation & rotation; // r0
}
// Range: 0x8000CCE0 -> 0x8000D4A4
void xHavokPhysicsObject::InterpolateTransformsNoScale(class Matrix43 & out /* r26 */, class Matrix43 & transformA /* r27 */, class Matrix43 & transformB /* r28 */, float blend /* f31 */) {
    // Local variables
    class Matrix43 normTransA; // r1+0xD8
    class Matrix43 normTransB; // r1+0xA8
    class Quaternion interpolatedQuat; // r1+0x98
    class Quaternion & quatA; // r0
    class Vector posA; // r1+0x68
    class Vector posB; // r1+0x58
    class Vector interpolatedPos; // r1+0x48

    // References
    // -> class Vector4 vec4OneW;
    // -> int next[3];
}
// Range: 0x8000D4B0 -> 0x8000D5D0
void xHavokPhysicsObject::GetBoundingSphere(class xSphere * pSphere /* r30 */) const {
    // Local variables
    class hkAabb aabb; // r1+0x30
    class hkArray & bodies; // r0
    class hkVector4 halfInternalDiagonal; // r1+0x20
    class hkVector4 center; // r1+0x10

    // References
    // -> float hkInfinity;
}
// Range: 0x8000D640 -> 0x8000D6E0
void xHavokPhysicsObject::GetBoundingBoxSize(class xVec3 * pBoundSize /* r31 */) const {
    // Local variables
    class hkAabb aabb; // r1+0x20
    class hkArray & bodies; // r0
    class hkVector4 dimensions; // r1+0x10
}
// Range: 0x8000D6E0 -> 0x8000D848
void xHavokPhysicsObject::GetFlattenedTransform(class hkpShape * shape /* r30 */, class hkTransform & flatTrans /* r31 */) {
    // Local variables
    enum hkpShapeType shapeType; // r20

    {
        // Range: 0x8000D738 -> 0x8000D814
        // Local variables
        class hkTransform childTrans; // r1+0x70

        {
            // Range: 0x8000D738 -> 0x8000D7E4
            // Local variables
            class hkpConvexTranslateShape * translateShape; // r0
        }
        {
            // Range: 0x8000D7E4 -> 0x8000D808
            // Local variables
            float hkMat[16]; // r1+0x30
            class hkpConvexTransformShape * transformShape; // r0
        }
    }
}
// Range: 0x8000D850 -> 0x8000D8BC
void xHavokPhysicsObject::SetFlattenedHKTransform(class hkpRigidBody * body /* r30 */, class hkTransform & finalFlatBodyTrans /* r31 */) {
    // Local variables
    class hkTransform flattenedShapeTransform; // r1+0x50
    class hkTransform finalBodyTransform; // r1+0x10
}
