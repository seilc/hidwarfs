/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xOGModel.h
*/
// Range: 0x802484C0 -> 0x80248514
void World::xOGModel::SceneSetup() {
    // References
    // -> unsigned long long simpleShadowID;
    // -> class ModelInstanceAsset * defaultModelRef;
}
// Range: 0x8009D630 -> 0x8009D8E0
class xOGModel * World::xOGModel::Create(class ModelInstanceAsset & modelInstance /* r28 */, enum eShadow castShadow /* r1+0x8 */) {
    // Local variables
    unsigned long long protoID; // r30:r29
    int memSize; // r1+0xC
    class CreateInfo modelInfo; // r1+0x20
    class StackAllocator allocator; // r1+0x10
    class ModelInstanceArticle * mModelArt; // r26

    // References
    // -> unsigned long long simpleShadowID;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class xMat4x3 g_I3;
    // -> class WiiFastHeap wiiFastHeap;
}
// Range: 0x80039730 -> 0x8003A5D8
void World::xOGModel::UpdateRender(class xOGModel * this /* r30 */) {
    {
        // Range: 0x8003974C -> 0x8003A5B8
        // Local variables
        class Matrix43 ngMatrix; // r1+0x70

        {
            // Range: 0x80039764 -> 0x80039830
            // Local variables
            class xMat4x3 scaledOGMatrix; // r1+0x30
        }
    }

    // References
    // -> float dt;
    // -> class Renderable3DTransform g_identity;
}
// Range: 0x80010DA0 -> 0x80010DA8
class ModelInstanceArticle * World::xOGModel::GetModelArticle() {
}
// Range: 0x800109D0 -> 0x800109D8
class ModelPrototypeEntity * World::xOGModel::GetPrototype() const {
}
// Range: 0x80039430 -> 0x80039494
void World::xOGModel::Show(class xOGModel * this /* r30 */) {
}
// Range: 0x800A8C50 -> 0x800A8D4C
void World::xOGModel::Hide(class xOGModel * this /* r31 */) {
    // References
    // -> class Scene * primaryScene;
}
// signature: World::xOGModel::SetTransform(const xMat4x3 &)
// Range: 0x8024ECD0 -> 0x8024F9BC
void World::xOGModel::SetTransform() {
    // Local variables
    class Matrix43 ngMatrix; // r1+0x20

    // References
    // -> class Renderable3DTransform g_identity;
}
// signature: World::xOGModel::SetColorMultiplier(float, float, float, float)
// Range: 0x80174510 -> 0x80174684
void World::xOGModel::SetColorMultiplier(class xOGModel * this /* r31 */) {
    // Local variables
    int i; // r28
    class Model & model; // r0
}
// Range: 0x802A7540 -> 0x802A75F0
void World::xOGModel::SetColorMulAlpha(class xOGModel * this /* r28 */, float alpha /* f31 */) {
    // Local variables
    int i; // r29
    class Model & model; // r0
}
// Range: 0x801F6680 -> 0x801F6938
void World::xOGModel::ResetColorMultiplier(class xOGModel * this /* r26 */, class ModelInstanceAsset * modelInstAsset /* r28 */, bool alphaOnly /* r27 */) {
    // Local variables
    bool hasColorMul; // r29

    {
        // Range: 0x801F66BC -> 0x801F6700
        // Local variables
        int i; // r7
    }
    {
        // Range: 0x801F6710 -> 0x801F6900
        // Local variables
        unsigned long long * curInstParam; // r29

        {
            // Range: 0x801F6718 -> 0x801F6718
            // Local variables
            unsigned int i; // r31

            {
                // Range: 0x801F6718 -> 0x801F6718
                // Local variables
                unsigned int dwordSize; // r7
                int paramCount; // r0
                class ModelInstanceParamData * result; // r1+0x8
            }
        }
        {
            // Range: 0x801F67F8 -> 0x801F68F0
            // Local variables
            int i; // r28

            {
                // Range: 0x801F67F8 -> 0x801F68F0
                // Local variables
                float * colorMulSource; // r6

                {
                    // Range: 0x801F67FC -> 0x801F68F0
                    // Local variables
                    class Vector4 newColor; // r1+0x38
                }
            }
        }
    }
}
// Range: 0x802A75F0 -> 0x802A76B8
void World::xOGModel::SetOutlineAlpha(class xOGModel * this /* r28 */, float alpha /* f31 */) {
    // Local variables
    class Model & model; // r0

    {
        // Range: 0x802A7608 -> 0x802A7684
        // Local variables
        int i; // r29
    }
}
// signature: World::xOGModel::SetTextureParamFromUID(unsigned long long, unsigned long long)
// Range: 0x8001C360 -> 0x8001C5A0
void World::xOGModel::SetTextureParamFromUID(class xOGModel * this /* r27 */, unsigned long long specUID /* r22:r23 */) {
    // Local variables
    class EntityHandleBase * textureResourceEnt; // r0
    class EntityHandleBase * textureResourceEntSpec; // r0

    {
        // Range: 0x8001C3AC -> 0x8001C58C
        // Local variables
        class Sampler samplerData2; // r1+0x8
        class Sampler samplerData; // r1+0x14
    }
}
// signature: World::xOGModel::StartTextureBlend(float, float, float, unsigned long long, unsigned long long)
// Range: 0x802A76C0 -> 0x802A791C
void World::xOGModel::StartTextureBlend(class xOGModel * this /* r27 */, unsigned long long specUID /* r22:r23 */) {
}
// Range: 0x8001C240 -> 0x8001C340
void World::xOGModel::SetTextureBlendFactor(class xOGModel * this /* r28 */, float blendFactor /* f31 */) {
    // Local variables
    int i; // r29
    class Model & model; // r0
}
// Range: 0x800394A0 -> 0x80039604
void World::xOGModel::AutoLODScale() {
    {
        // Range: 0x800394A4 -> 0x80039600
        // Local variables
        float scaleMax; // f1
        float scaleZ; // f3
        float scaleY; // f2
        float scaleX; // f4
    }
}
// Range: 0x8006E210 -> 0x8006E2B0
void World::xOGModel::Destroy(class xOGModel * this /* r29 */) {
    // References
    // -> class WiiFastHeap wiiFastHeap;
}
// signature: World::xOGModelHandle::Create(const World::ModelInstanceAsset &, World::ModelInstanceArticle::eShadow)
// Range: 0x8003B730 -> 0x8003BA74
void World::xOGModelHandle::Create(class xOGModelHandle * this /* r26 */, class ModelInstanceAsset & modelInstance /* r27 */) {
    // References
    // -> unsigned long long simpleShadowID;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class xMat4x3 g_I3;
    // -> class WiiFastHeap wiiFastHeap;
}
// Range: 0x8009C4B0 -> 0x8009D624
void World::xOGModelHandle::SwapRenderModel(class xOGModelHandle * this /* r26 */, class ModelInstanceAsset & modelInstance /* r17 */) {
    // References
    // -> class Renderable3DTransform g_identity;
    // -> unsigned long long simpleShadowID;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class xMat4x3 g_I3;
    // -> class WiiFastHeap wiiFastHeap;
}
// Range: 0x80011A10 -> 0x80011A24
bool World::xOGModelHandle::IsSet() const {
}
// signature: World::xOGModel::UpdaterSwitch(World::xOGModelUpdater *, void *)
// Range: 0x800C9990 -> 0x800C9A14
void World::xOGModel::UpdaterSwitch() {
}
// Range: 0x800396E0 -> 0x8003972C
void World::xOGModel::UpdaterCheckShow() {
}
