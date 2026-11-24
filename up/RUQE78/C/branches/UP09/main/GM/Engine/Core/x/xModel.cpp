/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xModel.cpp
*/
class ModelInstanceAsset * defaultModelRef; // size: 0x4, address: 0x80809760
unsigned long long simpleShadowID; // size: 0x8, address: 0x80809768
unsigned int referenceAnimationLimit; // size: 0x4, address: 0x807A215C
float referenceAnimationLODMinFPS; // size: 0x4, address: 0x807A2160
float referenceAnimationLODCurrentFPS; // size: 0x4, address: 0x80809770
static float refAnimLimitRefreshTimeElapsed; // size: 0x4, address: 0x80809774
class RefUniqueAnimation uniqueRefAnimations[50]; // size: 0x12C0, address: 0x80809778
class RefUniqueAnimation * uniqueRefAnimationsUsed; // size: 0x4, address: 0x8080AA38
class RefUniqueAnimation * uniqueRefAnimationsAvailable; // size: 0x4, address: 0x8080AA3C
class xMemPool refAnimPool; // size: 0x1C, address: 0x8080AA40
class xOGModelUpdater g_modelUpdateDefault; // size: 0x10, address: 0x8080AA60
class xOGModelUpdater g_modelUpdateNone; // size: 0x10, address: 0x8080AA70
class WiiFastHeap wiiFastHeap; // size: 0x14, address: 0x8080AA80
// signature: xModelInstance::UpdateReferenceAnimationLODFPS(float)
// Range: 0x8006A100 -> 0x8006A21C
void xModelInstance::UpdateReferenceAnimationLODFPS() {
    {
        // Range: 0x8006A190 -> 0x8006A1F4
        // Local variables
        unsigned int animationDecrementAmnt; // r0
        float percentOverFPSLimit; // f2
    }

    // References
    // -> unsigned int referenceAnimationLimit;
    // -> float referenceAnimationLODMinFPS;
    // -> float referenceAnimationLODCurrentFPS;
    // -> static float refAnimLimitRefreshTimeElapsed;
}
// signature: xModelInstance::RemoveRefAnimation(xModelInstance::RefUniqueAnimation *, unsigned int)
// Range: 0x8006A220 -> 0x8006A28C
void xModelInstance::RemoveRefAnimation() {
    {
        // Range: 0x8006A244 -> 0x8006A288
        // Local variables
        class RefUniqueAnimation * firstAvail; // r6
    }

    // References
    // -> class RefUniqueAnimation * uniqueRefAnimationsAvailable;
}
// signature: xModelInstance::RefAnimationEnable(xModelInstance::RefInstanceAnimation *)
// Range: 0x8006A290 -> 0x8006A338
void xModelInstance::RefAnimationEnable() {
}
// signature: xModelInstance::RefAnimationDisable(xModelInstance::RefInstanceAnimation *)
// Range: 0x8006A340 -> 0x8006A3E8
void xModelInstance::RefAnimationDisable() {
}
// Range: 0x8006A3F0 -> 0x8006A44C
class RefInstanceAnimation * xModelInstance::GetNextAnimationLODUpdateNode() {
}
// Range: 0x8006A450 -> 0x8006AD64
void World::xOGModel::UpdateReferenceAnimationLOD(class xOGModel * this /* r20 */) {
    {
        // Range: 0x8006A49C -> 0x8006A9A8
        // Local variables
        class RefInstanceAnimation * nextLODUpdateNode; // r0
        class RefInstanceAnimation * & currentLODUpdateNode; // r0

        {
            // Range: 0x8006A510 -> 0x8006A7AC
            // Local variables
            class Matrix43 cameraMat; // r1+0xC8
            class Matrix43 curRefModelInstanceMat; // r1+0xF8
            unsigned short curRefModelInstanceNum; // r10
            class ReferenceModelEntry * curRefModelEntry; // r9
        }
        {
            // Range: 0x8006A7E0 -> 0x8006A810
            // Local variables
            class RefInstanceAnimation * startStitchNode; // r6
        }
        {
            // Range: 0x8006A810 -> 0x8006A840
            // Local variables
            class RefInstanceAnimation * * animListHeadToUpdate; // r4
        }
        {
            // Range: 0x8006A840 -> 0x8006A99C
            // Local variables
            bool lastEnabledNode; // r3

            {
                // Range: 0x8006A8CC -> 0x8006A924
                // Local variables
                class RefInstanceAnimation * endStitch2; // r7
                class RefInstanceAnimation * startStitch2; // r6
                class RefInstanceAnimation * endStitch1; // r5
                class RefInstanceAnimation * startStitch1; // r4
            }
        }
    }
    {
        // Range: 0x8006A9AC -> 0x8006AD14
        // Local variables
        class ModelPrototype * modelProto; // r25

        {
            // Range: 0x8006A9BC -> 0x8006AD04
            // Local variables
            unsigned int c; // r24

            {
                // Range: 0x8006A9BC -> 0x8006AD04
                // Local variables
                class RefInstanceAnimation * nextAnimationLODUpdate; // r0
                class RefInstanceAnimation * animInst; // r23

                {
                    // Range: 0x8006A9BC -> 0x8006AD04
                    // Local variables
                    bool outsideLODDist; // r3
                    float lodOutDistSquared; // f0
                    class ReferenceModelEntry * curRefModelEntry; // r22

                    {
                        // Range: 0x8006A9BC -> 0x8006A9BC
                        // Local variables
                        class Matrix43 cameraMat; // r1+0x68
                        class Matrix43 curRefModelInstanceMat; // r1+0x98
                        unsigned short curRefModelInstanceNum; // r21
                    }
                }
            }
        }
    }

    // References
    // -> static class Matrix43 _matIdentity;
    // -> unsigned int referenceAnimationLimit;
}
// Range: 0x8006AD70 -> 0x8006B2BC
bool World::xOGModel::AllocAnimationInstances(class xOGModel * this /* r31 */) {
    // Local variables
    class RefInstanceAnimation * recent; // r20
    class RefInstanceAnimation * newInst; // r23
    unsigned int cmax; // r19

    {
        // Range: 0x8006AFB8 -> 0x8006B230
        // Local variables
        unsigned int c; // r18
    }

    // References
    // -> static class xMemWatermark memWatermark;
    // -> class xMemPool refAnimPool;
}
// signature: World::xOGModel::GetRefAnimation(unsigned long long, unsigned short)
// Range: 0x8006B2C0 -> 0x8006B3DC
class RefInstanceAnimation * World::xOGModel::GetRefAnimation() {
    // Local variables
    unsigned short refInstanceOffset; // r7
    unsigned short refModelIndex; // r9
    class ModelPrototype * modelProto; // r0
    class RefInstanceAnimation * animInst; // r3

    {
        // Range: 0x8006B354 -> 0x8006B354
        // Local variables
        unsigned short refModelIndexCount; // r8
    }
    {
        // Range: 0x8006B3B0 -> 0x8006B3B0
        // Local variables
        int c; // r4
    }
}
// Range: 0x8006B3E0 -> 0x8006BA88
unsigned short World::xOGModel::BindRefModelAnimation(class xOGModel * this /* r18 */, class xRefModelAnimationData & animBindData /* r19 */) {
    // Local variables
    unsigned int totalNumInstancesBoundToUniqueAnim; // r25
    unsigned short modelProtoRefModelIndex; // r9
    class RefInstanceAnimation * firstRefInstAnim; // reg65535
    unsigned short numInstancesToBind; // r23
    class xAnimFile * uniqueRefAnimation; // r22
    unsigned short instance; // r21

    {
        // Range: 0x8006B55C -> 0x8006B61C
        // Local variables
        class RefInstanceAnimation * refInstAnim; // r4
        unsigned short numInstancesWithoutThisAnimation; // r8

        {
            // Range: 0x8006B564 -> 0x8006B590
            // Local variables
            unsigned short refInstCount; // r7
        }
    }
    {
        // Range: 0x8006B6B0 -> 0x8006B748
        // Local variables
        void * * rawData; // r4
        void * buf; // r1+0x10
    }
    {
        // Range: 0x8006B74C -> 0x8006BA30
        // Local variables
        class RefInstanceAnimation * refInstAnimation; // r20
    }

    // References
    // -> class RefUniqueAnimation uniqueRefAnimations[50];
    // -> static int left;
    // -> static unsigned int * next;
    // -> static unsigned int state[624];
    // -> class RefUniqueAnimation * uniqueRefAnimationsAvailable;
    // -> class RefUniqueAnimation * uniqueRefAnimationsUsed;
}
// signature: World::xOGModel::UnbindRefModelAnimation(unsigned long long, unsigned short, int)
// Range: 0x8006BA90 -> 0x8006C754
unsigned short World::xOGModel::UnbindRefModelAnimation(class xOGModel * this /* r27 */, unsigned short firstInstanceIndex /* r29 */) {
    // Local variables
    unsigned short refModelIndex; // r10
    int numRefChildTransforms; // r19
    class xAnimFile * animFile; // r5
    class RefInstanceAnimation * refInstanceAnimation; // r20
    unsigned short numSuccessfullyUnbound; // r28

    {
        // Range: 0x8006BB84 -> 0x8006BDBC
        // Local variables
        unsigned short instance; // reg65535

        {
            // Range: 0x8006BB84 -> 0x8006BDBC
            // Local variables
            int refInstanceChildTransformOffset; // r7
            class Matrix43 * modelProtoChildTransforms; // r6

            {
                // Range: 0x8006BB84 -> 0x8006BCA4
                // Local variables
                int i; // r8
            }
        }
    }

    // References
    // -> class xMemPool refAnimPool;
    // -> class Renderable3DTransform g_identity;
    // -> class RefUniqueAnimation uniqueRefAnimations[50];
}
// Range: 0x8006C760 -> 0x8006C8A4
void xModelUniqueRefAnimationPoolInit(unsigned int count /* r31 */) {
    // Local variables
    class RefUniqueAnimation * previous; // r0

    {
        // Range: 0x8006C794 -> 0x8006C794
        // Local variables
        unsigned int c; // r10

        {
            // Range: 0x8006C794 -> 0x8006C794
            // Local variables
            class RefUniqueAnimation * cur; // r11
        }
    }

    // References
    // -> class RefUniqueAnimation * uniqueRefAnimationsAvailable;
    // -> class RefUniqueAnimation * uniqueRefAnimationsUsed;
    // -> class RefUniqueAnimation uniqueRefAnimations[50];
}
// Range: 0x8006C8B0 -> 0x8006CA08
void xModelUpdatePartsVis(class xOGModel * modelInst /* r25 */) {
    // Local variables
    class ModelVisibility * visModel; // r27

    {
        // Range: 0x8006C8E4 -> 0x8006C9E0
        // Local variables
        unsigned char j; // r26
    }

    // References
    // -> class Scene * primaryScene;
}
// Range: 0x8006CA10 -> 0x8006CAE4
void xModelUpdate(class xOGModel * modelInst /* r28 */, float timeDelta /* f31 */) {
}
// Range: 0x8006CAF0 -> 0x8006CB54
void xModelEval(class xOGModel * modelInst /* r31 */) {
}
// signature: xModelGetBoneLocationNoScale(xVec3 &, const World::xOGModel &, unsigned long)
// Range: 0x8006CB60 -> 0x8006CE0C
void xModelGetBoneLocationNoScale(class xVec3 & loc /* r29 */, class xOGModel & model /* r30 */) {
    // Local variables
    class xMat4x3 mat; // r1+0x48
}
// signature: xModelGetBoneMatNoScale(xMat4x3 &, const World::xOGModel &, unsigned long)
// Range: 0x8006CE10 -> 0x8006D0A4
void xModelGetBoneMatNoScale(class xMat4x3 & mat /* r29 */, class xOGModel & model /* r30 */) {
    {
        // Range: 0x8006CEEC -> 0x8006D088
        // Local variables
        class Matrix43 m; // r1+0x18
        class Matrix43 * ngBoneMat; // r31
    }
}
// signature: xModelGetBoneMatNoScale(xMat4x3 &, const World::xOGModel &, unsigned long, const xVec3 &)
// Range: 0x8006D0B0 -> 0x8006D494
void xModelGetBoneMatNoScale(class xMat4x3 & mat /* r28 */, class xOGModel & model /* r29 */, class xVec3 & offset /* r30 */) {
    // Local variables
    class xVec3 newOffset; // r1+0x14
}
// signature: xModelGetBoneLocationScaled(xVec3 &, const World::xOGModel &, unsigned long)
// Range: 0x8006D4A0 -> 0x8006D848
void xModelGetBoneLocationScaled(class xVec3 & loc /* r29 */) {
    // Local variables
    class xMat4x3 temp_mat; // r1+0x88
    class xMat4x3 * root_mat; // r30

    {
        // Range: 0x8006D5B8 -> 0x8006D82C
        // Local variables
        class xMat4x3 mat; // r1+0x48
    }
}
// signature: xModelGetBoneMatScaled(xMat4x3 &, const World::xOGModel &, unsigned long)
// Range: 0x8006D850 -> 0x8006DC48
void xModelGetBoneMatScaled(class xMat4x3 & mat /* r29 */) {
    // Local variables
    class xMat4x3 temp_mat; // r1+0x48
    class xMat4x3 * root_mat; // r30
}
// Range: 0x8006DC50 -> 0x8006DCDC
void xModelSetLightKit(class xOGModel * minst /* r27 */, class LightKit * lightKit /* r28 */) {
    {
        // Range: 0x8006DC70 -> 0x8006DCB8
        // Local variables
        int i; // r29
    }
}
// signature: xModelGetBoneCount(const World::xOGModel *)
// Range: 0x8006DCF0 -> 0x8006DD28
unsigned long xModelGetBoneCount() {
}
// signature: XModelAmendViewportVisibleMask(World::xOGModel *, unsigned int)
// Range: 0x8006DD30 -> 0x8006DD40
void XModelAmendViewportVisibleMask() {
}
// signature: World::xOGModel::SwapXModel(World::xOGModel &)
// Range: 0x8006DD40 -> 0x8006DEF4
void World::xOGModel::SwapXModel() {
}
// Range: 0x8006DF00 -> 0x8006E204
void World::xOGModel::DeferDestroy(class xOGModel * this /* r30 */) {
    {
        // Range: 0x8006E088 -> 0x8006E1B4
        // Local variables
        class RefInstanceAnimation * animInst; // r25
    }

    // References
    // -> class xMemPool refAnimPool;
    // -> class RefUniqueAnimation uniqueRefAnimations[50];
    // -> static class xMemPool sxAnimTempTranPool;
    // -> class Scene * primaryScene;
}
// Range: 0x8006E2B0 -> 0x8006F1B0
void World::xOGModelUpdater::DoUpdate() {
    // References
    // -> float dt;
    // -> class Renderable3DTransform g_identity;
}
// Range: 0x8006F1B0 -> 0x8006F2A4
void World::xOGModel::WiiFastHeapInit(int bufSize /* r28 */, int instances /* r30 */, int maxInstanceSize /* r29 */) {
    // Local variables
    int heapSize; // r30

    // References
    // -> class WiiFastHeap wiiFastHeap;
}
