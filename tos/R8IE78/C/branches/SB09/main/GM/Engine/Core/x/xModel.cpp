/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xModel.cpp
*/
class ModelInstanceAsset * defaultModelRef; // size: 0x4, address: 0x807215DC
unsigned long long simpleShadowID; // size: 0x8, address: 0x807215E0
unsigned long long simpleShadowSquareID; // size: 0x8, address: 0x807215E8
unsigned int referenceAnimationLimit; // size: 0x4, address: 0x806B4024
float referenceAnimationLODMinFPS; // size: 0x4, address: 0x806B4028
float referenceAnimationLODCurrentFPS; // size: 0x4, address: 0x807215F0
float refAnimLimitRefreshTimeElapsed; // size: 0x4, address: 0x8072E3FC
class RefUniqueAnimation uniqueRefAnimations[50]; // size: 0x12C0, address: 0x807215F8
class RefUniqueAnimation * uniqueRefAnimationsUsed; // size: 0x4, address: 0x807228B8
class RefUniqueAnimation * uniqueRefAnimationsAvailable; // size: 0x4, address: 0x807228BC
class xMemPool refAnimPool; // size: 0x1C, address: 0x807228C0
class xOGModelUpdater g_modelUpdateDefault; // size: 0x10, address: 0x807228E0
class xOGModelUpdater g_modelUpdateNone; // size: 0x10, address: 0x807228F0
// signature: xModelInstance::UpdateReferenceAnimationLODFPS(float)
// Range: 0x800392B0 -> 0x800393D0
void xModelInstance::UpdateReferenceAnimationLODFPS() {
    {
        // Range: 0x8003933C -> 0x800393A8
        // Local variables
        unsigned int animationDecrementAmnt; // r0
        float percentOverFPSLimit; // f2
    }

    // References
    // -> unsigned int referenceAnimationLimit;
    // -> float referenceAnimationLODMinFPS;
    // -> float referenceAnimationLODCurrentFPS;
    // -> float refAnimLimitRefreshTimeElapsed;
}
// signature: xModelInstance::GetRefAnimationEntry(const xAnimFile *)
// Range: 0x800393D0 -> 0x80039414
class RefUniqueAnimation * xModelInstance::GetRefAnimationEntry() {
    // Local variables
    class RefUniqueAnimation * curUniqueAnimation; // r4
    int c; // r5

    // References
    // -> class RefUniqueAnimation uniqueRefAnimations[50];
}
// signature: xModelInstance::GetRefAnimationEntry(unsigned long long)
// Range: 0x80039420 -> 0x80039460
class RefUniqueAnimation * xModelInstance::GetRefAnimationEntry() {
    {
        // Range: 0x80039420 -> 0x80039458
        // Local variables
        class RefUniqueAnimation * curUniqueAnimEntry; // r6
    }

    // References
    // -> class RefUniqueAnimation * uniqueRefAnimationsUsed;
}
// Range: 0x80039460 -> 0x800394F4
class xAnimFile * xModelInstance::AddRefAnimation(unsigned long long animationID /* r29:r28 */, unsigned int numRefsToAdd /* r30 */, unsigned int & numInstancesCurrentlyBound /* r31 */) {
    // Local variables
    class RefUniqueAnimation * uniqueAnimEntry; // r3

    // References
    // -> class RefUniqueAnimation * uniqueRefAnimationsUsed;
    // -> class RefUniqueAnimation * uniqueRefAnimationsAvailable;
}
// signature: xModelInstance::RemoveRefAnimation(xModelInstance::RefUniqueAnimation *, unsigned int)
// Range: 0x80039500 -> 0x8003956C
void xModelInstance::RemoveRefAnimation() {
    {
        // Range: 0x80039524 -> 0x80039568
        // Local variables
        class RefUniqueAnimation * firstAvail; // r6
    }

    // References
    // -> class RefUniqueAnimation * uniqueRefAnimationsAvailable;
}
// signature: xModelInstance::RefAnimationEnable(xModelInstance::RefInstanceAnimation *)
// Range: 0x80039570 -> 0x80039618
void xModelInstance::RefAnimationEnable() {
}
// signature: xModelInstance::RefAnimationDisable(xModelInstance::RefInstanceAnimation *)
// Range: 0x80039620 -> 0x800396C8
void xModelInstance::RefAnimationDisable() {
}
// Range: 0x800396D0 -> 0x8003972C
class RefInstanceAnimation * xModelInstance::GetNextAnimationLODUpdateNode() {
}
// Range: 0x80039730 -> 0x80039C24
void World::xOGModel::UpdateReferenceAnimationLOD(class xOGModel * this /* r25 */) {
    {
        // Range: 0x8003974C -> 0x80039A78
        // Local variables
        class RefInstanceAnimation * nextLODUpdateNode; // r0
        class RefInstanceAnimation * & currentLODUpdateNode; // r0

        {
            // Range: 0x800397C0 -> 0x8003987C
            // Local variables
            class Matrix43 cameraMat; // r1+0xD8
            class Matrix43 curRefModelInstanceMat; // r1+0x108
            unsigned short curRefModelInstanceNum; // r1+0xA
            class ReferenceModelEntry * curRefModelEntry; // r1+0x10
        }
        {
            // Range: 0x800398B0 -> 0x800398E0
            // Local variables
            class RefInstanceAnimation * startStitchNode; // r6
        }
        {
            // Range: 0x800398E0 -> 0x80039910
            // Local variables
            class RefInstanceAnimation * * animListHeadToUpdate; // r4
        }
        {
            // Range: 0x80039910 -> 0x80039A6C
            // Local variables
            bool lastEnabledNode; // r3

            {
                // Range: 0x8003999C -> 0x800399F4
                // Local variables
                class RefInstanceAnimation * endStitch2; // r7
                class RefInstanceAnimation * startStitch2; // r6
                class RefInstanceAnimation * endStitch1; // r5
                class RefInstanceAnimation * startStitch1; // r4
            }
        }
    }
    {
        // Range: 0x80039A7C -> 0x80039C04
        // Local variables
        class ModelPrototype * modelProto; // r28
        class Model & model; // r29

        {
            // Range: 0x80039A8C -> 0x80039C04
            // Local variables
            unsigned int c; // r27

            {
                // Range: 0x80039A8C -> 0x80039C04
                // Local variables
                class RefInstanceAnimation * nextAnimationLODUpdate; // r0
                class RefInstanceAnimation * animInst; // r26

                {
                    // Range: 0x80039A8C -> 0x80039BF8
                    // Local variables
                    bool outsideLODDist; // r3
                    float lodOutDistSquared; // f0
                    class ReferenceModelEntry * curRefModelEntry; // r1+0xC

                    {
                        // Range: 0x80039A8C -> 0x80039A8C
                        // Local variables
                        class Matrix43 cameraMat; // r1+0x78
                        class Matrix43 curRefModelInstanceMat; // r1+0xA8
                        unsigned short curRefModelInstanceNum; // r1+0x8
                    }
                }
            }
        }
    }

    // References
    // -> unsigned int referenceAnimationLimit;
}
// Range: 0x80039C30 -> 0x80039D40
bool World::xOGModel::AllocAnimationInstances(class xOGModel * this /* r31 */) {
    // Local variables
    class RefInstanceAnimation * recent; // r29
    class RefInstanceAnimation * newInst; // r28
    unsigned int cmax; // r27

    {
        // Range: 0x80039C84 -> 0x80039D18
        // Local variables
        unsigned int c; // r26
    }

    // References
    // -> class xMemPool refAnimPool;
}
// Range: 0x80039D80 -> 0x80039DE4
void World::xOGModel::DeallocAnimationInstances(class xOGModel * this /* r29 */) {
    {
        // Range: 0x80039D94 -> 0x80039DB8
        // Local variables
        class RefInstanceAnimation * animInst; // r30
    }

    // References
    // -> class xMemPool refAnimPool;
}
// signature: World::xOGModel::GetRefAnimation(unsigned long long, unsigned short)
// Range: 0x80039DF0 -> 0x80039EA0
class RefInstanceAnimation * World::xOGModel::GetRefAnimation(class xOGModel * this /* r28 */) {
    // Local variables
    unsigned short refInstanceOffset; // r31
    unsigned short refModelIndex; // r1+0x8
    class ReferenceModelEntry * refModelEntry; // r0
    class ModelPrototype * modelProto; // r30
    class RefInstanceAnimation * animInst; // r3

    {
        // Range: 0x80039E30 -> 0x80039E64
        // Local variables
        unsigned short refModelIndexCount; // r29

        {
            // Range: 0x80039E30 -> 0x80039E64
            // Local variables
            class ReferenceModelEntry * refEntry; // r0
        }
    }
    {
        // Range: 0x80039E68 -> 0x80039E8C
        // Local variables
        int c; // r4
    }
}
// Range: 0x80039F30 -> 0x8003A21C
unsigned short World::xOGModel::BindRefModelAnimation(class xOGModel * this /* r26 */, class xRefModelAnimationData & animBindData /* r27 */) {
    // Local variables
    unsigned int totalNumInstancesBoundToUniqueAnim; // r1+0x18
    unsigned short modelProtoRefModelIndex; // r1+0x10
    class ReferenceModelEntry * refModelEntry; // r0
    class RefInstanceAnimation * firstRefInstAnim; // reg65535
    unsigned short numInstancesToBind; // r31
    class xAnimFile * uniqueRefAnimation; // r30
    unsigned short instance; // r29

    {
        // Range: 0x8003A004 -> 0x8003A064
        // Local variables
        class RefInstanceAnimation * refInstAnim; // r4
        unsigned short numInstancesWithoutThisAnimation; // r5

        {
            // Range: 0x8003A010 -> 0x8003A054
            // Local variables
            unsigned short refInstCount; // r6
        }
    }
    {
        // Range: 0x8003A090 -> 0x8003A0F4
        // Local variables
        void * buf; // r1+0x14
    }
    {
        // Range: 0x8003A0F8 -> 0x8003A1E4
        // Local variables
        class RefInstanceAnimation * refInstAnimation; // r28
    }
}
// Range: 0x8003A220 -> 0x8003A36C
unsigned short World::xOGModel::UnbindRefModelAnimation(class xOGModel * this /* r26 */, unsigned long long refId /* r22:r23 */, unsigned short firstInstanceIndex /* r27 */, int numInstances /* r21 */) {
    // Local variables
    unsigned short refModelIndex; // r1+0x8
    class RefUniqueAnimation * uniqueAnimEntry; // r0
    class ReferenceModelEntry * refModelEntry; // r0
    int numRefChildTransforms; // r30
    class xAnimFile * animFile; // r3
    class RefInstanceAnimation * refInstanceAnimation; // r29
    unsigned short numSuccessfullyUnbound; // r28

    {
        // Range: 0x8003A2A0 -> 0x8003A338
        // Local variables
        unsigned short instance; // reg65535

        {
            // Range: 0x8003A2C8 -> 0x8003A338
            // Local variables
            int refInstanceChildTransformOffset; // r22
            class Matrix43 * modelProtoChildTransforms; // r23

            {
                // Range: 0x8003A2CC -> 0x8003A338
                // Local variables
                int i; // r21
            }
        }
    }
}
// Range: 0x8003A370 -> 0x8003A414
void xModelUniqueRefAnimationPoolInit(unsigned int count /* r30 */) {
    // Local variables
    class RefUniqueAnimation * previous; // r6

    {
        // Range: 0x8003A3B8 -> 0x8003A3E4
        // Local variables
        unsigned int c; // r0

        {
            // Range: 0x8003A3B8 -> 0x8003A3E4
            // Local variables
            class RefUniqueAnimation * cur; // r5
        }
    }

    // References
    // -> class RefUniqueAnimation * uniqueRefAnimationsUsed;
    // -> class RefUniqueAnimation * uniqueRefAnimationsAvailable;
    // -> class RefUniqueAnimation uniqueRefAnimations[50];
}
// Range: 0x8003A420 -> 0x8003A498
void xModelPoolInit() {
    // References
    // -> class xMemPool refAnimPool;
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x8003A4A0 -> 0x8003A5F0
void xModelUpdatePartsVis(class xOGModel * modelInst /* r27 */) {
    // Local variables
    class ModelVisibility * visModel; // r29

    {
        // Range: 0x8003A4D4 -> 0x8003A5DC
        // Local variables
        unsigned char j; // r28
    }

    // References
    // -> class Scene * primaryScene;
}
// Range: 0x8003A5F0 -> 0x8003A660
void xModelUpdate(class xOGModel * modelInst /* r31 */, float timeDelta /* f31 */) {
}
// Range: 0x8003A660 -> 0x8003A6B0
void xModelEvalSingle(class xOGModel * modelInst /* r31 */) {
}
// Range: 0x8003A6B0 -> 0x8003A6F0
void xModelEval(class xOGModel * modelInst /* r31 */) {
}
// signature: xModelGetBoneLocationNoScale(xVec3 &, const World::xOGModel &, unsigned long)
// Range: 0x8003A6F0 -> 0x8003A72C
void xModelGetBoneLocationNoScale(class xVec3 & loc /* r31 */) {
    // Local variables
    class xMat4x3 mat; // r1+0x8
}
// Range: 0x8003A730 -> 0x8003A810
void xModelGetBoneMatNoScale(class xMat4x3 & mat /* r27 */, class xOGModel & model /* r28 */, unsigned long index /* r29 */) {
    // Local variables
    class xMat4x3 & root_mat; // reg65535

    {
        // Range: 0x8003A768 -> 0x8003A7FC
        // Local variables
        class Matrix43 m; // r1+0x18
    }
}
// Range: 0x8003A810 -> 0x8003A8F4
void xModelGetBoneMatNoScale(class xMat4x3 & mat /* r27 */, class xOGModel & model /* r30 */, unsigned long index /* r29 */, class xMat4x3 & root /* r28 */) {
    {
        // Range: 0x8003A84C -> 0x8003A8E0
        // Local variables
        class Matrix43 m; // r1+0x18
    }
}
// Range: 0x8003A900 -> 0x8003A980
void xModelGetBoneMatNoScale(class xMat4x3 & mat /* r28 */, class xOGModel & model /* r29 */, unsigned long index /* r30 */, class xVec3 & offset /* r31 */) {
    // Local variables
    class xMat4x3 & root_mat; // reg65535
    class xVec3 newOffset; // r1+0x8
}
// Range: 0x8003AA40 -> 0x8003AAE4
void xModelGetBoneMatScaled(class xMat4x3 & mat /* r28 */, class xOGModel & model /* r29 */, unsigned long index /* r30 */) {
    // Local variables
    class xMat4x3 temp_mat; // r1+0x8
    class xMat4x3 * root_mat; // r31
}
// Range: 0x8003AAF0 -> 0x8003AB7C
void xModelSetLightKit(class xOGModel * minst /* r27 */, class LightKit * lightKit /* r28 */) {
    {
        // Range: 0x8003AB10 -> 0x8003AB68
        // Local variables
        int i; // r29
    }
}
// signature: xModelGetBoneCount(const World::xOGModel *)
// Range: 0x8003AB90 -> 0x8003ABC8
unsigned long xModelGetBoneCount() {
}
// signature: xModelGetMorphCount(const World::xOGModel *)
// Range: 0x8003ABD0 -> 0x8003ABF8
unsigned long xModelGetMorphCount() {
}
// Range: 0x8003AC00 -> 0x8003AD04
void World::xOGModel::SwapXModel(class xOGModel * this /* r30 */, class xOGModel & src /* r31 */) {
}
// Range: 0x8003AD10 -> 0x8003AE14
void World::xOGModel::DeferDestroy(class xOGModel * this /* r29 */) {
    {
        // Range: 0x8003AD80 -> 0x8003ADC4
        // Local variables
        class RefInstanceAnimation * animInst; // r30
    }

    // References
    // -> class xMemPool refAnimPool;
    // -> class Scene * primaryScene;
}
// Range: 0x8003AE80 -> 0x8003AEC4
void World::xOGModelUpdater::DoUpdate() {
}
