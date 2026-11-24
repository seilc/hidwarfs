/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xHavokPhysicsObject.cpp
*/
class hkPointerMap * jointRelativeCreationMap; // size: 0x4, address: 0x80719968
// signature: xHavokPhysicsObject::AddRigidBodyToSystem(const hkpShape *, const hkVector4 &, const hkTransform &, unsigned int, hkpMotion::MotionType, float, float, float, float, float, hkpCollidableQualityType, unsigned long long *)
// Range: 0x800067D0 -> 0x800069DC
bool xHavokPhysicsObject::AddRigidBodyToSystem(class xHavokPhysicsObject * this /* r31 */, class hkpShape * inshape /* r25 */, class hkVector4 & shapeScale /* r26 */, class hkTransform & worldTransform /* r27 */, unsigned int collisionFilter /* r28 */, enum MotionType motionType /* r29 */, float mass /* f27 */, float friction /* f28 */, float elasticity /* f29 */, float linearDamping /* f30 */, float angularDamping /* f31 */, enum hkpCollidableQualityType qualityType /* r30 */) {
    // Local variables
    class hkQuaternion rotation; // r1+0x10
    class hkpRigidBodyCinfo createInfo; // r1+0x20

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> class CHavokShapeBuilder * s_instance;
}
// Range: 0x80006A10 -> 0x80006B24
void xHavokPhysicsObject::SystemSetHavokFloatScalar(class xHavokPhysicsObject * this /* r27 */, void (hkpRigidBody::* & setRoutine)(void * this, void * this, float) /* r25 */, float (hkpRigidBody::* & getRoutine)(void * this, void * this) /* r26 */, float val /* f31 */) {
    {
        // Range: 0x80006A3C -> 0x80006A6C
        // Local variables
        class hkpRigidBody * body; // r0
    }
    {
        // Range: 0x80006A70 -> 0x80006B04
        // Local variables
        unsigned int packedBodyIndex; // r0
        class hkArray & packedBodies; // r0
        class hkpPhysicsSystem * packedPhysicsSystem; // r0

        {
            // Range: 0x80006AA8 -> 0x80006B04
            // Local variables
            class hkpRigidBody * * it; // r27
        }
    }
}
// Range: 0x80006B30 -> 0x8000751C
bool xHavokPhysicsObject::CreateFromPackedData(class xHavokPhysicsObject * this /* r15 */, class Model & model /* r21 */, class CollisionMeshBlobEntity * packedPhysicsData /* r20 */, class hkTransform & worldTransform /* r1+0x10 */, float mass /* f22 */, float friction /* f23 */, float elasticity /* f24 */, float linearDamping /* f25 */, float angularDamping /* f26 */, enum hkpCollidableQualityType qualityType /* r16 */, enum MotionType motionType /* r1+0x14 */, unsigned int collisionFilter /* r1+0x18 */, class hkVector4 & scale /* r17 */, unsigned long long * id /* r18 */) {
    // Local variables
    class hkpShape * packedShape; // r14
    class hkpPhysicsSystem * packedPhysicsSystem; // r0

    {
        // Range: 0x80006C08 -> 0x8000745C
        // Local variables
        unsigned int rigidBodyIndex; // r21
        bool initializingRelativeTransforms; // r22
        int rootRigidBodyJointNumber; // r23
        class SkinCluster * skin; // r24
        class Dummy * skinnedTransformIt; // r28

        {
            // Range: 0x80006C94 -> 0x80007124
            // Local variables
            class hkpRigidBody * * it; // r20

            {
                // Range: 0x80006C94 -> 0x80007124
                // Local variables
                enum hkpCollidableQualityType bodyQualityType; // r29
                enum MotionType bodyMotionType; // r25
                unsigned int collFilter; // r1+0x220
                class hkTransform newScaledBodyWorldTransform; // r1+0xE0
                class hkTransform bodyModelTransform; // r1+0x120
                class hkpRigidBody * packedBody; // r19

                {
                    // Range: 0x80006C94 -> 0x80006C94
                    // Local variables
                    bool justCreatedJointRelativeTransformMap; // r25
                    unsigned int jointNumber; // r1+0x24

                    {
                        // Range: 0x80006C94 -> 0x80006C94
                        {
                            // Range: 0x80006C94 -> 0x80006C94
                            // Local variables
                            class RelativeJointEntry * it; // r4
                        }
                        {
                            // Range: 0x80006C94 -> 0x80006C94
                            // Local variables
                            class Matrix43 invRigidBodyBindMatrix; // r1+0x1C0
                            class Matrix43 bindMatrix; // r1+0x1F0
                        }
                    }
                    {
                        // Range: 0x80006C94 -> 0x80006C94
                        // Local variables
                        class Matrix43 invRigidBodyBindMatrix; // r1+0x160
                        class Matrix43 bindMatrix; // r1+0x190
                        class PhysicsJointRelativeTransforms * physicsCreationTransforms; // r0
                    }
                    {
                        // Range: 0x80006C94 -> 0x80006C94
                        // Local variables
                        class PhysicsJointRelativeTransforms * physicsCreationTransforms; // r0
                    }
                }
                {
                    // Range: 0x80006C94 -> 0x80006C94
                    // Local variables
                    class hkVector4 bodyScaledTranslation; // r1+0x70
                }
            }
        }
        {
            // Range: 0x80007124 -> 0x80007260
            // Local variables
            class Matrix43 modelspaceJointBindMatrix; // r1+0x80
            class Matrix43 rootRigidBodyJointInvBindMat; // r1+0xB0
            class hkArray & jointEntries; // r16
            class PhysicsJointRelativeTransforms * physicsCreationTransforms; // r0

            {
                // Range: 0x80007184 -> 0x80007260
                // Local variables
                int jointNum; // r19

                {
                    // Range: 0x80007184 -> 0x80007260
                    // Local variables
                    unsigned char firstRigidBodyDescendantParentJointNum; // r6
                    unsigned char parentJointNum; // r5
                }
            }
        }
        {
            // Range: 0x80007360 -> 0x8000745C
            // Local variables
            class hkpConstraintInstance * * it; // r16

            {
                // Range: 0x80007360 -> 0x8000745C
                // Local variables
                class hkpConstraintData * scaledConstraintData; // r22
                class hkpRigidBody * newConstraintBodyB; // r24
                class hkpRigidBody * newConstraintBodyA; // r23
                int newBodyBIndex; // r0
                int newBodyAIndex; // r0
                class hkpConstraintInstance * packedConstraint; // r22
            }
        }
    }

    // References
    // -> static class Matrix43 _matIdentity;
    // -> struct {} __vt__Q219xHavokPhysicsObject30PhysicsJointRelativeTransforms;
    // -> class hkPointerMap * jointRelativeCreationMap;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x80007EE0 -> 0x80007FB0
bool xHavokPhysicsObject::CreateFromCollisionShape(class xHavokPhysicsObject * this /* r24 */, class hkpShape * shape /* r25 */, class hkVector4 & shapeScale /* r26 */, class xMat4x3 & worldTransformMat /* r27 */, unsigned int collisionFilter /* r28 */, enum MotionType motionType /* r29 */, float mass /* f27 */, float friction /* f28 */, float elasticity /* f29 */, float linearDamping /* f30 */, float angularDamping /* f31 */, enum hkpCollidableQualityType qualityType /* r30 */, unsigned long long * id /* r31 */) {
    // Local variables
    class Matrix43 mathmat; // r1+0x50
    class hkTransform transform; // r1+0x10
}
// Range: 0x80008140 -> 0x80008228
bool xHavokPhysicsObject::CreateFromCollisionShape(class xHavokPhysicsObject * this /* r24 */, class hkpShape * shape /* r25 */, class hkVector4 & shapeScale /* r26 */, class hkTransform & worldTransform /* r27 */, unsigned int collisionFilter /* r28 */, enum MotionType motionType /* r29 */, float mass /* f27 */, float friction /* f28 */, float elasticity /* f29 */, float linearDamping /* f30 */, float angularDamping /* f31 */, enum hkpCollidableQualityType qualityType /* r30 */, unsigned long long * id /* r31 */) {
    // Local variables
    bool success; // r3

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x80008230 -> 0x8000838C
bool xHavokPhysicsObject::CreateFromCollisionShapes(class xHavokPhysicsObject * this /* r15 */, class hkArray & shapes /* r16 */, class hkArray & shapeScales /* r17 */, class hkArray & worldTransforms /* r18 */, class hkArray & collisionFilters /* r19 */, class hkArray & motionTypes /* r20 */, class hkArray & masses /* r21 */, class hkArray & frictions /* r22 */, class hkArray & elasticities /* r23 */, class hkArray & qualityTypes /* r24 */, unsigned long long * id /* r25 */) {
    // Local variables
    unsigned int numShapes; // r28
    bool success; // r27

    {
        // Range: 0x800082B4 -> 0x80008350
        // Local variables
        unsigned int c; // r26

        {
            // Range: 0x800082B4 -> 0x80008350
            // Local variables
            float elasticity; // f3
            float friction; // f2
            float mass; // f1
        }
    }

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x800083B0 -> 0x80008890
class hkpConstraintData * xHavokPhysicsObject::ScaleConstraintBodyAttachSpace(class hkpConstraintData * constraintData /* r31 */, class hkVector4 & scaleBodyA /* r24 */, class hkVector4 & scaleBodyB /* r25 */, unsigned long long * id /* r26 */, bool forceCreateNewConstraint /* r27 */) {
    // Local variables
    class ConstraintInfo origConstraintSetup; // r1+0x100

    {
        // Range: 0x800084BC -> 0x800086D4
        // Local variables
        class hkMatrix3 target; // r1+0x120
        class hkpRagdollConstraintData * newConstraint; // r28
        class hkVector4 twistAxisB; // r1+0xA0
        class hkVector4 twistAxisA; // r1+0xB0
        class hkVector4 planeAxisB; // r1+0xC0
        class hkVector4 planeAxisA; // r1+0xD0
        class hkpRagdollConstraintData * constraint; // reg65535
        class hkVector4 pivotB; // r1+0xE0
        class hkVector4 pivotA; // r1+0xF0
        class hkTransform & constraintBodyTransformB; // r29
        class hkTransform & constraintBodyTransformA; // r28
        class hkpSetLocalTransformsConstraintAtom & transformAtom; // r4
    }
    {
        // Range: 0x800086D4 -> 0x80008760
        // Local variables
        class hkpStiffSpringConstraintData * newConstraint; // r0
        class hkpStiffSpringConstraintData * constraint; // r0
        class hkVector4 pivotB; // r1+0x80
        class hkVector4 pivotA; // r1+0x90
        class hkpSetLocalTranslationsConstraintAtom & translateAtom; // r28
    }
    {
        // Range: 0x80008760 -> 0x80008850
        // Local variables
        class hkpHingeConstraintData * newConstraint; // r0
        class hkVector4 hingeAxisB; // r1+0x40
        class hkVector4 hingeAxisA; // r1+0x50
        class hkpHingeConstraintData * constraint; // r0
        class hkVector4 pivotB; // r1+0x60
        class hkVector4 pivotA; // r1+0x70
        class hkTransform & constraintBodyTransformB; // r29
        class hkTransform & constraintBodyTransformA; // r28
        class hkpSetLocalTransformsConstraintAtom & transformAtom; // r4
    }
    {
        // Range: 0x80008854 -> 0x80008854
        // Local variables
        class hkpPrismaticConstraintData * constraint; // r0
    }
    {
        // Range: 0x80008854 -> 0x80008854
        // Local variables
        class hkpBallAndSocketConstraintData * constraint; // r0
    }
    {
        // Range: 0x80008854 -> 0x80008854
        // Local variables
        class hkpLimitedHingeConstraintData * constraint; // r0
    }
    {
        // Range: 0x80008854 -> 0x80008854
        // Local variables
        class hkpPointToPathConstraintData * constraint; // r0
    }
    {
        // Range: 0x80008854 -> 0x80008854
        // Local variables
        class hkpWheelConstraintData * constraint; // r0
    }
    {
        // Range: 0x80008854 -> 0x80008854
        // Local variables
        class hkpGenericConstraintData * constraint; // r0
    }
    {
        // Range: 0x80008854 -> 0x80008854
        // Local variables
        class hkpSimpleContactConstraintData * constraint; // r0
    }
    {
        // Range: 0x80008854 -> 0x80008854
        // Local variables
        class hkpBreakableConstraintData * constraint; // r0
    }
    {
        // Range: 0x80008854 -> 0x80008854
        // Local variables
        class hkpMalleableConstraintData * constraint; // r0
    }
    {
        // Range: 0x80008854 -> 0x80008854
        // Local variables
        class hkpPointToPlaneConstraintData * constraint; // r0
    }
    {
        // Range: 0x80008854 -> 0x80008854
        // Local variables
        class hkpPulleyConstraintData * constraint; // r0
    }
    {
        // Range: 0x80008854 -> 0x80008854
        // Local variables
        class hkpRotationalConstraintData * constraint; // r0
    }
    {
        // Range: 0x80008854 -> 0x80008854
        // Local variables
        class hkpHingeLimitsData * constraint; // r0
    }
    {
        // Range: 0x80008854 -> 0x80008854
        // Local variables
        class hkpRagdollLimitsData * constraint; // r0
    }

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x80008B00 -> 0x80008C0C
void xHavokPhysicsObject::Cleanup(class xHavokPhysicsObject * this /* r28 */) {
    {
        // Range: 0x80008B28 -> 0x80008BE8
        {
            // Range: 0x80008B44 -> 0x80008BE8
            // Local variables
            class PhysicsJointRelativeTransforms * physicsCreationTransforms; // r29
        }
    }

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> class hkPointerMap * jointRelativeCreationMap;
}
// signature: xHavokPhysicsObject::IsAnchorBody(const hkpRigidBody *)
// Range: 0x80008C90 -> 0x80008CAC
bool xHavokPhysicsObject::IsAnchorBody() {
    // Local variables
    unsigned int userData; // r0
}
// signature: xHavokPhysicsObject::GetGraphicsAssociationDataFromRigidBody(const hkpRigidBody *, unsigned int &)
// Range: 0x80008CB0 -> 0x80008D0C
enum GraphicsAssociationType xHavokPhysicsObject::GetGraphicsAssociationDataFromRigidBody() {
    {
        // Range: 0x80008CB0 -> 0x80008D04
        // Local variables
        unsigned int userData; // r0

        {
            // Range: 0x80008CC4 -> 0x80008D04
            // Local variables
            bool renderableIndexData; // r0
        }
    }
}
// Range: 0x80008D10 -> 0x80008D2C
unsigned int xHavokPhysicsObject::GetNumRigidBodies() {
}
// signature: xHavokPhysicsObject::SetOwner(const void *)
// Range: 0x80008D30 -> 0x80008D6C
void xHavokPhysicsObject::SetOwner() {
    {
        // Range: 0x80008D34 -> 0x80008D68
        {
            // Range: 0x80008D3C -> 0x80008D68
            // Local variables
            class hkpRigidBody * * it; // r6
        }
    }
}
// signature: xHavokPhysicsObject::GetRigidBody(unsigned int)
// Range: 0x80008D70 -> 0x80008DA0
class hkpRigidBody * xHavokPhysicsObject::GetRigidBody() {
}
// Range: 0x80008DF0 -> 0x80008F7C
void xHavokPhysicsObject::GetTransform(class hkTransform & worldTransform /* r31 */) {
    {
        // Range: 0x80008E08 -> 0x80008F5C
        {
            // Range: 0x80008E1C -> 0x80008F44
            // Local variables
            class PhysicsJointRelativeTransforms * physicsCreationTransforms; // r1+0x8

            {
                // Range: 0x80008E38 -> 0x80008F2C
                // Local variables
                int rootJointRigidBodyIndex; // r28
                class hkArray * bodyRelativeJointTransforms; // r29

                {
                    // Range: 0x80008E74 -> 0x80008F20
                    // Local variables
                    class Matrix43 modelRootMat; // r1+0x10
                    class Matrix43 joint0WorldMat; // r1+0x40
                    class Matrix43 rootBodyWorldspaceJointMat; // r1+0x70
                    class Matrix43 rootBodyMat; // r1+0xA0
                }
            }
        }
    }

    // References
    // -> class hkPointerMap * jointRelativeCreationMap;
}
// Range: 0x80009090 -> 0x80009214
void xHavokPhysicsObject::GetTransform(class Matrix43 & worldTransform /* r31 */) {
    {
        // Range: 0x800090A8 -> 0x800091EC
        {
            // Range: 0x800090BC -> 0x800091D8
            // Local variables
            class PhysicsJointRelativeTransforms * physicsCreationTransforms; // r1+0x8

            {
                // Range: 0x800090D8 -> 0x800091C0
                // Local variables
                int rootJointRigidBodyIndex; // r28
                class hkArray * bodyRelativeJointTransforms; // r29

                {
                    // Range: 0x80009114 -> 0x800091AC
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
// Range: 0x80009220 -> 0x80009288
void xHavokPhysicsObject::SetTransform(class xHavokPhysicsObject * this /* r30 */, class xMat4x3 & matrix /* r31 */) {
    // Local variables
    class Matrix43 mathmat; // r1+0x50
    class hkTransform transform; // r1+0x10
}
// Range: 0x80009290 -> 0x80009354
void xHavokPhysicsObject::SetTransform(class hkTransform & worldTransform /* r28 */) {
    {
        // Range: 0x800092B4 -> 0x8000933C
        // Local variables
        class hkArray & bodies; // r0

        {
            // Range: 0x800092D4 -> 0x8000933C
            // Local variables
            class hkTransform systemWorldTransform; // r1+0x50

            {
                // Range: 0x800092EC -> 0x8000933C
                // Local variables
                class hkpRigidBody * * it; // r30

                {
                    // Range: 0x800092EC -> 0x8000933C
                    // Local variables
                    class hkTransform newBodyTransform; // r1+0x10
                    class hkpRigidBody * body; // r29
                }
            }
        }
    }
}
// Range: 0x80009360 -> 0x800093BC
void xHavokPhysicsObject::SetPosition(class xHavokPhysicsObject * this /* r30 */, class hkVector4 & pos /* r31 */) {
    // Local variables
    class hkTransform systemTransform; // r1+0x10
}
// Range: 0x800093C0 -> 0x80009578
void xHavokPhysicsObject::SetMass(class xHavokPhysicsObject * this /* r26 */, float mass /* f29 */) {
    {
        // Range: 0x800093F8 -> 0x8000941C
        // Local variables
        class hkpRigidBody * body; // r0
    }
    {
        // Range: 0x80009420 -> 0x80009548
        // Local variables
        unsigned int packedBodyIndex; // r0
        float totalSystemMassScalar; // f29
        float totalSystemMass; // f30
        class hkpPhysicsSystem * packedPhysicsSystem; // r0

        {
            // Range: 0x8000945C -> 0x800094A0
            // Local variables
            class hkpRigidBody * * it; // r27
        }
        {
            // Range: 0x800094C4 -> 0x80009548
            // Local variables
            class hkpRigidBody * * it; // r26

            {
                // Range: 0x800094C4 -> 0x80009548
                {
                    // Range: 0x800094C4 -> 0x80009548
                    // Local variables
                    float packedMass; // f1
                }
            }
        }
    }
}
// Range: 0x80009580 -> 0x80009680
void xHavokPhysicsObject::SetFriction(class xHavokPhysicsObject * this /* r27 */, float friction /* f31 */) {
    {
        // Range: 0x800095A8 -> 0x800095D4
        // Local variables
        class hkpRigidBody * body; // r0
    }
    {
        // Range: 0x800095D8 -> 0x80009660
        // Local variables
        unsigned int packedBodyIndex; // r0
        class hkArray & packedBodies; // r0
        class hkpPhysicsSystem * packedPhysicsSystem; // r0

        {
            // Range: 0x80009610 -> 0x80009660
            // Local variables
            class hkpRigidBody * * it; // r27
        }
    }
}
// Range: 0x800096A0 -> 0x80009734
void xHavokPhysicsObject::Activate() {
    // Local variables
    class hkArray & bodies; // r0

    {
        // Range: 0x800096B4 -> 0x80009720
        // Local variables
        class hkpRigidBody * * it; // r29

        {
            // Range: 0x800096B4 -> 0x80009720
            // Local variables
            class hkpRigidBody * body; // r28
        }
    }
}
// Range: 0x80009740 -> 0x800097AC
void xHavokPhysicsObject::Deactivate() {
    // Local variables
    class hkArray & bodies; // r0

    {
        // Range: 0x80009754 -> 0x80009798
        // Local variables
        class hkpRigidBody * * it; // r30

        {
            // Range: 0x80009754 -> 0x80009798
            // Local variables
            class hkpRigidBody * body; // r3
        }
    }
}
// signature: xHavokPhysicsObject::SetCollisionFilter(unsigned int)
// Range: 0x800097B0 -> 0x800098D0
void xHavokPhysicsObject::SetCollisionFilter() {
    // Local variables
    unsigned int layer; // r30

    {
        // Range: 0x800097C8 -> 0x800098BC
        // Local variables
        class hkArray & bodies; // r0

        {
            // Range: 0x800097DC -> 0x80009824
            // Local variables
            class hkpRigidBody * * it; // r27

            {
                // Range: 0x800097DC -> 0x80009824
                // Local variables
                class hkpRigidBody * body; // r3
            }
        }
        {
            // Range: 0x80009824 -> 0x800098BC
            // Local variables
            unsigned int bodyIndex; // r0
            class hkArray & packedBodies; // r0
            class hkpPhysicsSystem * packedPhysicsSystem; // r0

            {
                // Range: 0x80009838 -> 0x800098BC
                // Local variables
                class hkpRigidBody * * it; // r29

                {
                    // Range: 0x80009838 -> 0x800098BC
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
// Range: 0x800098D0 -> 0x80009918
void xHavokPhysicsObject::ApplyLinearImpulse() {
}
// signature: xHavokPhysicsObject::SetMotionType(hkpMotion::MotionType, xHavokPhysicsObject::SystemApplicationType)
// Range: 0x80009A90 -> 0x80009BD8
void xHavokPhysicsObject::SetMotionType(class xHavokPhysicsObject * this /* r29 */, enum MotionType motionType /* r30 */) {
}
// signature: xHavokPhysicsObject::SetLinearVelocity(const hkVector4 &, xHavokPhysicsObject::SystemApplicationType)
// Range: 0x80009BE0 -> 0x80009C28
void xHavokPhysicsObject::SetLinearVelocity() {
}
// signature: xHavokPhysicsObject::SetAngularVelocity(const hkVector4 &, xHavokPhysicsObject::SystemApplicationType)
// Range: 0x80009C80 -> 0x80009CC8
void xHavokPhysicsObject::SetAngularVelocity() {
}
// Range: 0x80009D20 -> 0x80009E08
void xHavokPhysicsObject::UpdateKeyframedMotion(class xHavokPhysicsObject * this /* r31 */, float dt /* f31 */, class hkVector4 & pos /* r30 */, class hkQuaternion & rot /* r29 */) {
    {
        // Range: 0x80009D50 -> 0x80009DEC
        // Local variables
        class hkTransform newSystemTransform; // r1+0xA0
        class hkTransform systemWorldTransform; // r1+0xE0

        {
            // Range: 0x80009D78 -> 0x80009DEC
            // Local variables
            class hkpRigidBody * * it; // r30

            {
                // Range: 0x80009D78 -> 0x80009DEC
                // Local variables
                class hkpRigidBody * body; // r29

                {
                    // Range: 0x80009D84 -> 0x80009DEC
                    // Local variables
                    class hkQuaternion newBodyRotation; // r1+0x10
                    class hkTransform newBodyTransform; // r1+0x60

                    {
                        // Range: 0x80009D90 -> 0x80009DB0
                        // Local variables
                        class hkTransform differenceTransform; // r1+0x20
                    }
                }
            }
        }
    }
}
// Range: 0x80009E60 -> 0x80009F10
void xHavokPhysicsObject::ZeroKeyframedMotion() {
    {
        // Range: 0x80009E74 -> 0x80009EFC
        {
            // Range: 0x80009E7C -> 0x80009EFC
            // Local variables
            class hkpRigidBody * * it; // r28

            {
                // Range: 0x80009E7C -> 0x80009EFC
                // Local variables
                class hkpRigidBody * body; // r27
            }
        }
    }

    // References
    // -> class hkVector4 hkVector4Zero;
}
// Range: 0x80009F10 -> 0x8000A75C
void xHavokPhysicsObject::MatchRenderedModelToPhysics(class xHavokPhysicsObject * this /* r15 */, class Model & model /* r19 */, float physicsBlend /* f30 */, enum JointTransformSpace jointTransformSpace /* r17 */, bool applyInvBindMat /* r16 */) {
    {
        // Range: 0x80009F70 -> 0x80009F98
        // Local variables
        class Matrix43 graphicsMat; // r1+0x460
        class hkTransform rootTransform; // r1+0x490
    }
    {
        // Range: 0x80009F9C -> 0x8000A730
        // Local variables
        class hkArray & packedBodies; // r0
        class hkpPhysicsSystem * packedPhysicsSystem; // r0

        {
            // Range: 0x80009FD0 -> 0x8000A490
            // Local variables
            int rootRigidBodyJointNum; // r19
            bool blendingAnimationPhysics; // r20
            class hkLocalArray physicsModelspaceJoints; // r1+0x50
            class hkLocalArray originalAnimatedModelspaceJoints; // r1+0x60
            class Matrix43 invModelRootTransform; // r1+0x430
            class hkArray * bodyRelativeJointTransforms; // r21
            class PhysicsJointRelativeTransforms * physicsCreationTransforms; // r1+0x1C
            class Matrix43 * jointMatrices; // r22
            bool bufferSwap; // r1+0x10
            unsigned int numJoints; // r23
            class SkinCluster * skin; // r24

            {
                // Range: 0x8000A0D0 -> 0x8000A13C
                // Local variables
                unsigned int jointNum; // r18

                {
                    // Range: 0x8000A0D0 -> 0x8000A13C
                    // Local variables
                    class Matrix43 currentJointMat; // r1+0x3D0
                    class Matrix43 jointBindMat; // r1+0x400
                }
            }
            {
                // Range: 0x8000A140 -> 0x8000A16C
                // Local variables
                unsigned int jointNum; // r17
            }
            {
                // Range: 0x8000A170 -> 0x8000A1D4
                // Local variables
                class Matrix43 physicsJointWorldMat; // r1+0x370
                class Matrix43 rigidBodyWorldMat; // r1+0x3A0
                class hkpRigidBody * body; // r17
            }
            {
                // Range: 0x8000A1D4 -> 0x8000A47C
                // Local variables
                int jointNum; // r18

                {
                    // Range: 0x8000A1D4 -> 0x8000A47C
                    // Local variables
                    class Matrix43 physicsJointParentSpaceMat; // r1+0x340
                    unsigned char parentJointIndex; // r0

                    {
                        // Range: 0x8000A1E0 -> 0x8000A1E0
                        // Local variables
                        class Matrix43 physicsJointWorldMat; // r1+0x2E0
                        class Matrix43 rigidBodyWorldMat; // r1+0x310
                        class hkpRigidBody * body; // r17
                    }
                    {
                        // Range: 0x8000A1E0 -> 0x8000A1E0
                        // Local variables
                        class Matrix43 invParentJointModelMat; // r1+0x2B0
                    }
                    {
                        // Range: 0x8000A1E0 -> 0x8000A1E0
                        {
                            // Range: 0x8000A1E0 -> 0x8000A1E0
                            // Local variables
                            class Matrix43 invParentJointModelMat; // r1+0x280
                        }
                    }
                    {
                        // Range: 0x8000A1E0 -> 0x8000A454
                        // Local variables
                        class Matrix43 unscaledBlendedJointModelMat; // r1+0x1C0
                        class Matrix43 blendedJointParentSpaceMat; // r1+0x1F0
                        class Matrix43 existingJointParentSpaceMat; // r1+0x250

                        {
                            // Range: 0x8000A1E0 -> 0x8000A3E0
                            // Local variables
                            class Matrix43 invExistingParentJointModelMat; // r1+0x220
                        }
                    }
                }
            }
        }
        {
            // Range: 0x8000A490 -> 0x8000A724
            // Local variables
            unsigned int bodyIndex; // r0
            class hkLocalArray modelWorldTransforms; // r1+0x40

            {
                // Range: 0x8000A4D8 -> 0x8000A598
                // Local variables
                class hkpRigidBody * * it; // r16

                {
                    // Range: 0x8000A4D8 -> 0x8000A598
                    // Local variables
                    class Matrix43 unscaledFinalWorldMat; // r1+0x190
                    unsigned short renderableTransformIndex; // r0
                    unsigned int renderableIndex; // r1+0x18
                    class hkpRigidBody * body; // r20

                    {
                        // Range: 0x8000A4D8 -> 0x8000A564
                        // Local variables
                        class Matrix43 tempMat; // r1+0x160
                    }
                }
            }
            {
                // Range: 0x8000A5A0 -> 0x8000A724
                // Local variables
                class hkpRigidBody * * it; // r18

                {
                    // Range: 0x8000A5A0 -> 0x8000A724
                    // Local variables
                    class Matrix43 scaledParentRelativeMat; // r1+0x70
                    class Matrix43 originalParentRelativeMat; // r1+0xA0
                    class Matrix43 parentRelativeMat; // r1+0xD0
                    class Matrix43 originalParentWorldMat; // r1+0x100
                    unsigned short parentTransformIndex; // r0
                    class Matrix43 parentWorldMat; // r1+0x130
                    unsigned short renderableTransformIndex; // r0
                    unsigned int renderableIndex; // r1+0x14
                }
            }
        }
    }

    // References
    // -> static class Matrix43 _matIdentity;
    // -> class hkPointerMap * jointRelativeCreationMap;
    // -> unsigned int updateFrameNumber;
}
// Range: 0x8000ACD0 -> 0x8000B080
void xHavokPhysicsObject::MatchPhysicsToRenderedModel(class xHavokPhysicsObject * this /* r19 */, class Model & model /* r30 */, enum PhysicsRenderableMatchType matchType /* r31 */, enum JointTransformSpace jointTransformSpace /* r17 */) {
    {
        // Range: 0x8000AD1C -> 0x8000AD84
        // Local variables
        class hkpRigidBody * body; // r15

        {
            // Range: 0x8000AD24 -> 0x8000AD84
            // Local variables
            class hkTransform modelRootTransform; // r1+0x1F0

            {
                // Range: 0x8000AD3C -> 0x8000AD74
                // Local variables
                class hkQuaternion rotation; // r1+0x40
            }
        }
    }
    {
        // Range: 0x8000AD88 -> 0x8000B064
        // Local variables
        int numBodies; // r21
        class hkArray & packedBodies; // r0
        class hkpPhysicsSystem * packedPhysicsSystem; // r0

        {
            // Range: 0x8000ADAC -> 0x8000AFB0
            // Local variables
            class PhysicsJointRelativeTransforms * physicsCreationTransforms; // r1+0x14
            unsigned int numJoints; // r0
            class SkinCluster * skin; // r20

            {
                // Range: 0x8000AE04 -> 0x8000AFB0
                // Local variables
                int foundBodies; // r18
                int jointNum; // r19

                {
                    // Range: 0x8000AE04 -> 0x8000AFB0
                    // Local variables
                    class Matrix43 jointModelSpaceMat; // r1+0x1C0
                    int rigidBodyIndex; // r0

                    {
                        // Range: 0x8000AE10 -> 0x8000AE10
                        // Local variables
                        class Matrix43 jointBindMat; // r1+0x190
                    }
                    {
                        // Range: 0x8000AE10 -> 0x8000AE10
                        // Local variables
                        class Matrix43 jointBindMat; // r1+0x160
                    }
                    {
                        // Range: 0x8000AE10 -> 0x8000AF90
                        // Local variables
                        class hkTransform bodyTransform; // r1+0x90
                        class Matrix43 bodyWorldSpaceMat; // r1+0xD0
                        class Matrix43 inverseBodyToJointMat; // r1+0x100
                        class Matrix43 jointWorldSpaceMat; // r1+0x130

                        {
                            // Range: 0x8000AE10 -> 0x8000AF78
                            // Local variables
                            class hkQuaternion rotation; // r1+0x30
                        }
                    }
                }
            }
        }
        {
            // Range: 0x8000AFB0 -> 0x8000B058
            // Local variables
            unsigned int bodyIndex; // r0
            class hkLocalArray modelWorldTransforms; // r1+0x18

            {
                // Range: 0x8000AFE0 -> 0x8000B058
                // Local variables
                class hkpRigidBody * * it; // r18

                {
                    // Range: 0x8000AFE0 -> 0x8000B058
                    // Local variables
                    class hkTransform bodyTransform; // r1+0x50
                    unsigned int renderableIndex; // r1+0x10
                    class hkpRigidBody * body; // r15
                }
            }
        }
    }

    // References
    // -> class hkPointerMap * jointRelativeCreationMap;
    // -> unsigned int updateFrameNumber;
    // -> float dt;
}
// Range: 0x8000B080 -> 0x8000B114
void xHavokPhysicsObject::ConvertHKTransformToGraphicsTransform(class hkTransform & hkTrans /* r30 */, class Matrix43 & trans /* r31 */) {
}
// Range: 0x8000B140 -> 0x8000B278
void xHavokPhysicsObject::ConvertGraphicsTransformToHKTransform(class Matrix43 & graphicsTrans /* r31 */, class hkTransform & trans /* r30 */) {
    // Local variables
    class Matrix43 normalizeGraphicsTrans; // r1+0x90
    class Vector posRef; // r1+0x80
    class Vector forwardRef; // r1+0x70
    class Vector leftRef; // r1+0x60
    class Vector upRef; // r1+0x50
}
// Range: 0x8000B280 -> 0x8000B3CC
void xHavokPhysicsObject::InterpolateTransformsNoScale(class Matrix43 & out /* r29 */, class Matrix43 & transformA /* r30 */, class Matrix43 & transformB /* r31 */, float blend /* f31 */) {
    // Local variables
    class Matrix43 normTransA; // r1+0x98
    class Matrix43 normTransB; // r1+0x68
    class Quaternion interpolatedQuat; // r1+0x58
    class Vector posA; // r1+0x28
    class Vector posB; // r1+0x18
    class Vector interpolatedPos; // r1+0x8
}
// Range: 0x8000B780 -> 0x8000B83C
void xHavokPhysicsObject::GetBoundingSphere(class xSphere * pSphere /* r31 */) const {
    // Local variables
    class hkAabb aabb; // r1+0x30
    class hkArray & bodies; // r0
    class hkVector4 halfInternalDiagonal; // r1+0x20
    class hkVector4 center; // r1+0x10
}
// Range: 0x8000B8B0 -> 0x8000B940
void xHavokPhysicsObject::GetBoundingBoxSize(class xVec3 * pBoundSize /* r31 */) const {
    // Local variables
    class hkAabb aabb; // r1+0x20
    class hkArray & bodies; // r0
    class hkVector4 dimensions; // r1+0x10
}
// Range: 0x8000B940 -> 0x8000B9E8
void xHavokPhysicsObject::GetFlattenedTransform(class hkpShape * shape /* r29 */, class hkTransform & flatTrans /* r30 */) {
    // Local variables
    enum hkpShapeType shapeType; // r31

    {
        // Range: 0x8000B974 -> 0x8000B9D0
        // Local variables
        class hkTransform childTrans; // r1+0x50

        {
            // Range: 0x8000B974 -> 0x8000B990
            // Local variables
            class hkpConvexTranslateShape * translateShape; // r0
        }
        {
            // Range: 0x8000B990 -> 0x8000B9B4
            // Local variables
            float hkMat[16]; // r1+0x10
            class hkpConvexTransformShape * transformShape; // r0
        }
    }
}
// Range: 0x8000B9F0 -> 0x8000BAA8
void xHavokPhysicsObject::SetFlattenedHKTransform(class hkpRigidBody * body /* r29 */, class hkTransform & finalFlatBodyTrans /* r30 */, enum PhysicsRenderableMatchType setType /* r31 */) {
    // Local variables
    class hkTransform flattenedShapeTransform; // r1+0x60
    class hkTransform finalBodyTransform; // r1+0x20

    {
        // Range: 0x8000BA38 -> 0x8000BA70
        // Local variables
        class hkQuaternion rotation; // r1+0x10
    }

    // References
    // -> float dt;
}
