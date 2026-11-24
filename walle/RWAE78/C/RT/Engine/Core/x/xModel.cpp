/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xModel.cpp
*/
static class xModelPool * sxModelPoolList; // size: 0x4, address: 0x80758A68
int xModelLookupCount; // size: 0x4, address: 0x80758A6C
int xModelInstStaticAlloc; // size: 0x4, address: 0x80758A70
int xModelBucketEnabled; // size: 0x4, address: 0x80758A74
int xModelAlphaBucketEnabled; // size: 0x4, address: 0x806F2CEC
// Range: 0x8004E060 -> 0x8004E064
void xModelInitOnce() {
}
// signature: xModelInstanceAllocReuse(void *, unsigned short, unsigned char, unsigned char *, xModelInstance *)
// Range: 0x8004E070 -> 0x8004E378
class xModelInstance * xModelInstanceAllocReuse(void * object /* r29 */, unsigned short flags /* r30 */) {
    // Local variables
    class xModelInstance * dude; // r7

    // References
    // -> class xMat4x3 g_I3;
    // -> static class xModelPool * sxModelPoolList;
    // -> static class xMemWatermark memWatermark;
    // -> int xModelInstStaticAlloc;
}
// signature: xModelInstanceFree(xModelInstance *, bool)
// Range: 0x8004E380 -> 0x8004E480
void xModelInstanceFree(class xModelInstance * modelInst /* r28 */) {
    // References
    // -> static class xMemPool sxAnimTempTranPool;
}
// Range: 0x8004E480 -> 0x8004E554
void xModelUpdate(class xModelInstance * modelInst /* r28 */, float timeDelta /* f31 */) {
}
// signature: xModelEval(xModelInstance *)
// Range: 0x8004E560 -> 0x8004E58C
void xModelEval() {
}
// signature: xModelRenderSingle(xModelInstance *)
// Range: 0x8004E590 -> 0x8004E75C
void xModelRenderSingle() {
    {
        // Range: 0x8004E59C -> 0x8004E74C
        // Local variables
        class xMat3x3 tmpmat; // r1+0x8

        {
            // Range: 0x8004E694 -> 0x8004E6D8
            // Local variables
            unsigned short i; // r7
            class xAnimPlay * a; // r6
        }
    }
}
// signature: xModelRender(xModelInstance *)
// Range: 0x8004E760 -> 0x8004E778
void xModelRender() {
    // References
    // -> int xModelBucketEnabled;
}
// signature: xModelAnimCollRefresh(const xModelInstance &)
// Range: 0x8004E780 -> 0x8004E784
void xModelAnimCollRefresh() {
}
// signature: xModelGetBoneLocation(xVec3 &, const xModelInstance &, unsigned long)
// Range: 0x8004E790 -> 0x8004EA38
void xModelGetBoneLocation(class xVec3 * loc /* r29 */) {
    // Local variables
    class xMat4x3 mat; // r1+0x38
}
// signature: xModelGetBoneMat(xMat4x3 &, const xModelInstance &, unsigned long)
// Range: 0x8004EA40 -> 0x8004ECD0
void xModelGetBoneMat(class xMat4x3 * mat /* r29 */) {
    // Local variables
    class xMat4x3 * root_mat; // r31

    {
        // Range: 0x8004EB1C -> 0x8004ECB4
        // Local variables
        class Matrix43 m; // r1+0x8
        class Matrix43 * ngBoneMat; // r30
    }
}
// signature: xModelSetLightKit(xModelInstance *, Graphics::LightKit *, float)
// Range: 0x8004ECD0 -> 0x8004EDA0
void xModelSetLightKit(class xModelInstance * minst /* r27 */, class LightKit * lightKit /* r28 */) {
    {
        // Range: 0x8004ED00 -> 0x8004ED6C
        // Local variables
        int i; // r29
    }
}
// signature: xModelSetArticle(xModelInstance *, World::ModelInstanceArticle *)
// Range: 0x8004EDC0 -> 0x8004EDC8
void xModelSetArticle() {
}
// signature: xModelRemoveArticle(xModelInstance *)
// Range: 0x8004EDD0 -> 0x8004EDDC
void xModelRemoveArticle() {
}
// signature: xModelShow(xModelInstance *)
// Range: 0x8004EDE0 -> 0x8004EE88
void xModelShow() {
    // References
    // -> class Scene * primaryScene;
}
// signature: xModelHide(xModelInstance *)
// Range: 0x8004EE90 -> 0x8004EF3C
void xModelHide() {
    // References
    // -> class Scene * primaryScene;
}
// signature: xModelGetBoneCount(const xModelInstance *)
// Range: 0x8004EF40 -> 0x8004EF78
unsigned long xModelGetBoneCount() {
}
// signature: XModelAmendViewportVisibleMask(xModelInstance *, unsigned int)
// Range: 0x8004EF80 -> 0x8004EF94
void XModelAmendViewportVisibleMask() {
    // Local variables
    class ModelInstanceArticle * article; // r3
}
