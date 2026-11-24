/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xOGModel.h
*/
// Range: 0x80163EB0 -> 0x80163F24
void World::xOGModel::SceneSetup() {
    // References
    // -> unsigned long long simpleShadowSquareID;
    // -> unsigned long long simpleShadowID;
    // -> class ModelInstanceAsset * defaultModelRef;
}
// Range: 0x8001D0F0 -> 0x8001D374
class xOGModel * World::xOGModel::Create(class ModelInstanceAsset & modelInstance /* r27 */, enum eShadow castShadow /* r1+0x8 */) {
    // Local variables
    unsigned long long protoID; // r30:r29
    int memSize; // r1+0xC
    class CreateInfo modelInfo; // r1+0x20
    class StackAllocator allocator; // r1+0x10
    class ModelInstanceArticle * mModelArt; // r28
    unsigned long long shadowID; // r7:r8
    bool circle; // r27

    // References
    // -> unsigned long long simpleShadowSquareID;
    // -> unsigned long long simpleShadowID;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class xMat4x3 g_I3;
}
// Range: 0x801047D0 -> 0x801047D8
class ModelInstanceArticle * World::xOGModel::GetModelArticle() {
}
// Range: 0x8000C520 -> 0x8000C528
class ModelPrototypeEntity * World::xOGModel::GetPrototype() const {
}
// Range: 0x8001C230 -> 0x8001C448
void World::xOGModel::Show(class xOGModel * this /* r31 */) {
    // References
    // -> class Scene * primaryScene;
}
// Range: 0x8001C480 -> 0x8001C4F0
void World::xOGModel::Hide(class xOGModel * this /* r31 */) {
    // References
    // -> class Scene * primaryScene;
}
// Range: 0x80121710 -> 0x80121778
void World::xOGModel::ShowPart(class xOGModel * this /* r30 */, int partIndex /* r31 */) {
}
// Range: 0x801216A0 -> 0x80121704
void World::xOGModel::HidePart(class xOGModel * this /* r30 */, int partIndex /* r31 */) {
}
// Range: 0x80169960 -> 0x801699B4
void World::xOGModel::SetTransform(class xOGModel * this /* r30 */, class xMat4x3 & ogMatrix /* r31 */) {
    // Local variables
    class Matrix43 ngMatrix; // r1+0x8
}
// signature: World::xOGModel::SetColorMultiplier(float, float, float, float)
// Range: 0x80075790 -> 0x800758B4
void World::xOGModel::SetColorMultiplier(class xOGModel * this /* r29 */) {
    // Local variables
    int i; // r30
    class Model & model; // r0
}
// Range: 0x800DF720 -> 0x800DF804
void World::xOGModel::SetColorMulAlpha(class xOGModel * this /* r28 */, float alpha /* f31 */) {
    // Local variables
    int i; // r29
    class Model & model; // r0
}
// Range: 0x80110620 -> 0x80110888
void World::xOGModel::ResetColorMultiplier(class xOGModel * this /* r26 */, class ModelInstanceAsset * modelInstAsset /* r27 */, bool alphaOnly /* r28 */) {
    // Local variables
    bool hasColorMul; // r25

    {
        // Range: 0x8011065C -> 0x801106B0
        // Local variables
        int i; // r9
    }
    {
        // Range: 0x801106B0 -> 0x80110858
        // Local variables
        unsigned long long * curInstParam; // r30

        {
            // Range: 0x801106B8 -> 0x80110798
            // Local variables
            unsigned int i; // r29

            {
                // Range: 0x801106B8 -> 0x80110798
                // Local variables
                unsigned int dwordSize; // r7
                int paramCount; // r0
                class ModelInstanceParamData * result; // r1+0x8
            }
        }
        {
            // Range: 0x80110798 -> 0x80110858
            // Local variables
            int i; // r25

            {
                // Range: 0x80110798 -> 0x80110858
                // Local variables
                float * colorMulSource; // r6

                {
                    // Range: 0x801107F4 -> 0x80110858
                    // Local variables
                    class Vector4 newColor; // r1+0x20
                }
            }
        }
    }
}
// signature: World::xOGModel::SetTextureParamFromUID(unsigned long long, unsigned long long, bool)
// Range: 0x80114490 -> 0x80114600
void World::xOGModel::SetTextureParamFromUID(class xOGModel * this /* r22 */, unsigned long long specUID /* r17:r18 */, bool blendTexture /* r23 */) {
    // Local variables
    class EntityHandleBase * textureResourceEnt; // r0
    class EntityHandleBase * textureResourceEntSpec; // r0
    class Model & model; // r0

    {
        // Range: 0x801144D0 -> 0x801145EC
        // Local variables
        int i; // r24

        {
            // Range: 0x801144D0 -> 0x801145EC
            {
                // Range: 0x801144D8 -> 0x801145EC
                // Local variables
                class Sampler samplerData2; // r1+0x8
                class Sampler samplerData; // r1+0x14
                unsigned short paramHandle2; // r0
                unsigned short paramHandle1; // r0
            }
        }
    }
}
// signature: World::xOGModel::StartTextureBlend(float, float, float, unsigned long long, unsigned long long)
// Range: 0x80114470 -> 0x8011448C
void World::xOGModel::StartTextureBlend() {
}
// Range: 0x800AFCE0 -> 0x800AFDD0
void World::xOGModel::SetTextureBlendFactor(class xOGModel * this /* r28 */, float blendFactor /* f31 */) {
    // Local variables
    int i; // r29
    class Model & model; // r0
}
// signature: World::xOGModel::SetModelBlendFactor(float, unsigned char)
// Range: 0x801724A0 -> 0x80172590
void World::xOGModel::SetModelBlendFactor(class xOGModel * this /* r27 */, unsigned char overrideAnimTexMerge /* r28 */) {
}
// signature: World::xOGModel::SetLODScale(float)
// Range: 0x80059480 -> 0x800594BC
void World::xOGModel::SetLODScale() {
}
// Range: 0x800667C0 -> 0x800668E4
void World::xOGModel::AutoLODScale(class xOGModel * this /* r31 */) {
    {
        // Range: 0x800667C8 -> 0x800668C0
        // Local variables
        float scaleMax; // f1
        float scaleZ; // f1
        float scaleY; // f30
        float scaleX; // f31
    }
}
// Range: 0x8003AE20 -> 0x8003AE78
void World::xOGModel::Destroy(class xOGModel * this /* r31 */) {
}
// Range: 0x8010C990 -> 0x8010C9A0
bool World::xOGModelRef::IsSet() const {
}
// Range: 0x800AFF00 -> 0x800AFF44
void World::xOGModelHandle::Destroy(class xOGModelHandle * this /* r31 */) {
}
// signature: World::xOGModelHandle::SwapRenderModel(const World::ModelInstanceAsset &)
// Range: 0x80058E40 -> 0x80059480
void World::xOGModelHandle::SwapRenderModel(class xOGModelHandle * this /* r28 */) {
    // References
    // -> class Renderable3DTransform g_identity;
}
// Range: 0x801105A0 -> 0x80110618
void World::xOGModel::UpdaterCheck(class xOGModel * this /* r31 */) {
}
// Range: 0x8000C6E0 -> 0x8000C75C
void World::xOGModel::UpdaterSwitch(class xOGModel * this /* r29 */, class xOGModelUpdater * upd /* r30 */, void * parent /* r31 */) {
}
// Range: 0x800668F0 -> 0x8006691C
void World::xOGModel::UpdaterCheckShow() {
}
// Range: 0x80055440 -> 0x80055498
void World::xOGModel::UpdaterCheckHide(class xOGModel * this /* r31 */) {
}
