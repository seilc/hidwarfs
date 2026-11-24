/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xOGRenderHelperInfo.cpp
*/
// signature: xOGRenderHelper::HelperInfo::SetPos(World::ModelInstanceArticle *, const xMat4x3 &)
// Range: 0x80051020 -> 0x800514DC
void xOGRenderHelper::HelperInfo::SetPos() {
    // Local variables
    class Matrix43 ngMatrix; // r1+0x18

    // References
    // -> class Renderable3DTransform g_identity;
}
// signature: xOGRenderHelper::HelperInfo::SetColor(World::ModelInstanceArticle *, float, float, float, float, float)
// Range: 0x80051AB0 -> 0x80051D24
void xOGRenderHelper::HelperInfo::SetColor(class HelperInfo * this /* r28 */, class ModelInstanceArticle * modelArticle /* r29 */, float outline_alpha /* f31 */) {
    // Local variables
    class Vector4 colorMultiplierNew; // r1+0x48
    class Model * model; // r0

    {
        // Range: 0x80051AF4 -> 0x80051CCC
        // Local variables
        int i; // r30
    }
}
// Range: 0x80051DA0 -> 0x80052068
void xOGRenderHelper::HelperInfo::SetLightKit(class HelperInfo * this /* r20 */, class ModelInstanceArticle * modelArticle /* r21 */, class LightKitData * lightKit /* r22 */) {
    // Local variables
    class Model * model; // r0

    {
        // Range: 0x80051DE4 -> 0x80052028
        // Local variables
        int i; // r23

        {
            // Range: 0x80051DE4 -> 0x80052028
            // Local variables
            class Vector4 shadowColor; // r1+0x50
            unsigned int finalShadowColor; // r5
            float shadowAlpha; // f0
        }
    }
}
// Range: 0x800520E0 -> 0x8005218C
void xOGRenderHelper::HelperInfo::GetRenderCustomizerData(class ModelInstanceArticle * modelArticle /* r27 */, class UVMovementInstanceData * * instData /* r28 */) {
    {
        // Range: 0x8005211C -> 0x8005215C
        // Local variables
        int i; // r29
    }
}
// signature: xOGRenderHelper::HelperInfo::UpdateRenderCustomizerData(World::ModelInstanceArticle *, World::UVMovementInstanceData **)
// Range: 0x80052190 -> 0x800521AC
void xOGRenderHelper::HelperInfo::UpdateRenderCustomizerData() {
}
// signature: xOGRenderHelper::GetModelPrototypeEntity(xEnt *, World::ModelInstanceAsset *)
// Range: 0x800521B0 -> 0x8005222C
class ModelPrototypeEntity * xOGRenderHelper::GetModelPrototypeEntity(class ModelInstanceAsset * modelInstanceAsset /* r31 */) {
    // Local variables
    class Goodie * goodie; // r3
    class EntityHandle * protoHandle; // r5
}
// Range: 0x80052230 -> 0x8005226C
class ModelPrototypeEntity * xOGRenderHelper::GetModelPrototypeEntity(class ModelInstanceAsset * modelInstanceAsset /* r31 */) {
    // Local variables
    class EntityHandle * protoHandle; // r0
}
// signature: xOGRenderHelper::HelperInfo::Setup(const World::ModelInstanceAsset *, eShadow, Graphics::ShadowSimpleCache *)
// Range: 0x80052270 -> 0x800523A8
void xOGRenderHelper::HelperInfo::Setup(class HelperInfo * this /* r29 */, class ModelInstanceAsset * modelInstanceAsset /* r30 */, enum eShadow castShadow /* r31 */) {
}
// Range: 0x800523B0 -> 0x80052428
class HelperInfo * xOGRenderHelper::HelperInfo::Create() {
    // References
    // -> struct {} __vt__Q215xOGRenderHelper10HelperInfo;
}
// Range: 0x80052430 -> 0x800524F0
void xOGRenderHelper::HelperInfo::Deactivate(class HelperInfo * this /* r29 */) {
}
// Range: 0x800524F0 -> 0x80052554
void xOGRenderHelper::HelperInfo::DeferDestroy(class HelperInfo * this /* r31 */) {
}
// Range: 0x80052560 -> 0x80052578
void xOGRenderHelper::HelperInfo::Destroy() {
}
// Range: 0x80052580 -> 0x80052874
class ModelInstanceArticle * xOGRenderHelper::HelperInfo::CreateModelArt(class HelperInfo * this /* r27 */) {
    // Local variables
    class CreateInfo modelInfo; // r1+0x88
    class ModelInstanceArticle * modelArticle; // r29
    class Model * model; // r0

    {
        // Range: 0x800525D8 -> 0x80052668
        // Local variables
        int i; // r28

        {
            // Range: 0x800525E0 -> 0x80052658
            // Local variables
            class Renderable * renderable; // r30
        }
    }
    {
        // Range: 0x8005266C -> 0x8005273C
        // Local variables
        int i; // r28

        {
            // Range: 0x80052674 -> 0x8005272C
            // Local variables
            class Renderable * renderable; // r23

            {
                // Range: 0x80052674 -> 0x8005272C
                // Local variables
                unsigned int newFlags; // r0
            }
        }
    }
    {
        // Range: 0x80052740 -> 0x800527D8
        // Local variables
        int i; // r23

        {
            // Range: 0x80052748 -> 0x800527C8
            // Local variables
            class Renderable * renderable; // r25
        }
    }
    {
        // Range: 0x800527D8 -> 0x8005284C
        // Local variables
        int i; // r23
    }

    // References
    // -> class ModelInstanceArticlePool modelInstanceArticlePool;
}
// Range: 0x800528D0 -> 0x800529B8
void xOGRenderHelper::HelperInfo::DeferDestroyModelArt(class HelperInfo * this /* r25 */, class ModelInstanceArticle * modelArt /* r26 */) {
    // References
    // -> class Scene * primaryScene;
}
// signature: xOGRenderHelper::HelperInfo::DestroyModelArt(World::ModelInstanceArticle *)
// Range: 0x800529C0 -> 0x800529CC
void xOGRenderHelper::HelperInfo::DestroyModelArt() {
    // References
    // -> class ModelInstanceArticlePool modelInstanceArticlePool;
}
// Range: 0x800529D0 -> 0x80052B4C
void xOGRenderHelper::ModelHelperInfo::Setup(class ModelHelperInfo * this /* r28 */, class ModelInstanceAsset * modelInstanceAsset /* r29 */, enum eShadow castShadow /* r30 */, class ShadowSimpleCache * simpleShadowCachePtr /* r31 */) {
    // Local variables
    int i; // r6
    class Model * model; // r0
}
// Range: 0x80052B50 -> 0x80052BD8
class ModelHelperInfo * xOGRenderHelper::ModelHelperInfo::Create() {
    // References
    // -> struct {} __vt__Q215xOGRenderHelper15ModelHelperInfo;
    // -> struct {} __vt__Q215xOGRenderHelper10HelperInfo;
}
// Range: 0x80052BE0 -> 0x80052CA8
void xOGRenderHelper::ModelHelperInfo::Deactivate(class ModelHelperInfo * this /* r29 */) {
}
// Range: 0x80052CB0 -> 0x80052DA0
void xOGRenderHelper::ModelHelperInfo::DeferDestroy(class ModelHelperInfo * this /* r25 */) {
    // References
    // -> class Scene * primaryScene;
}
// Range: 0x80052DA0 -> 0x80052DF0
void xOGRenderHelper::ModelHelperInfo::Destroy(class ModelHelperInfo * this /* r31 */) {
    // References
    // -> class ModelInstanceArticlePool modelInstanceArticlePool;
}
