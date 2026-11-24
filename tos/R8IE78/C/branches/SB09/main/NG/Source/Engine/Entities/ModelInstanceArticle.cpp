/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Entities\ModelInstanceArticle.cpp
*/
static class MIAPoolConfig miaPoolConfig[1]; // size: 0x8, address: 0x806CA0F8
static class MIALinkedList miaMemPools[1]; // size: 0x18, address: 0x80774940
static class MIALinkedList miaPool; // size: 0x18, address: 0x80774958
class ModelInstanceArticlePool modelInstanceArticlePool; // size: 0x1, address: 0x80774970
// Range: 0x801B9690 -> 0x801B97B4
void World::ModelInstanceArticle::GetRenderCustomizerInfo(class CreateInfo & info /* r28 */, class ModelPrototype & modelProto /* r29 */, class ModelInstanceAsset & asset /* r30 */) {
    // Local variables
    class PackCustomizerInfo * renderCustomizers; // r25
    class EntityHandle * customizerHandle; // r26
    unsigned int customizerIndex; // r24

    {
        // Range: 0x801B96BC -> 0x801B9784
        // Local variables
        int paramCount; // r0
        class ModelInstanceParamData * paramData; // r1+0xC

        {
            // Range: 0x801B970C -> 0x801B9784
            // Local variables
            int paramIndex; // r23
        }
    }
}
// Range: 0x801B97C0 -> 0x801B991C
void World::ModelInstanceArticle::CreateRenderCustomizers(class ModelInstanceArticle * this /* r22 */, class StackAllocator & allocator /* r23 */, class CreateInfo & info /* r20 */, class ModelPrototype & modelProto /* r24 */, class ModelInstanceAsset & asset /* r25 */) {
    // Local variables
    class PackCustomizerInfo * rendCustomizers; // r29
    class RenderCustomizerBaseEntity * customizerEntity; // r28
    unsigned int customizerIndex; // r27

    {
        // Range: 0x801B9828 -> 0x801B9908
        // Local variables
        int paramCount; // r0
        class ModelInstanceParamData * paramData; // r1+0x8

        {
            // Range: 0x801B9874 -> 0x801B9908
            // Local variables
            int pidx; // r26
        }
    }
}
// Range: 0x801B9920 -> 0x801B9B94
void World::ModelInstanceArticle::GetCreateInfo(class CreateInfo & info /* r23 */, class ModelInstanceAsset & asset /* r24 */, class EntityHandle * protoHandle /* r28 */, class EntityHandle * lightKitHandle /* r25 */, int * memSize /* r26 */, enum eShadow * castShadow /* r27 */) {
    // Local variables
    class ModelPrototype & proto; // r30
    int rendCount; // r29
    unsigned long long * curInstParam; // r28

    {
        // Range: 0x801B999C -> 0x801B9A18
        // Local variables
        int i; // r28
    }
    {
        // Range: 0x801B9A24 -> 0x801B9AAC
        // Local variables
        unsigned int i; // r29

        {
            // Range: 0x801B9A24 -> 0x801B9AAC
            // Local variables
            unsigned int dwordSize; // r31
            class ModelInstanceParamData * result; // r1+0x10
        }
    }
}
// signature: World::ModelInstanceArticle::Create(void *, const World::ModelInstanceArticle::CreateInfo &, const World::ModelInstanceAsset &, bool)
// Range: 0x801B9BA0 -> 0x801BA640
void World::ModelInstanceArticle::Create(class ModelInstanceArticle * this /* r26 */, class CreateInfo & info /* r27 */, class ModelInstanceAsset & asset /* r31 */, bool temporary /* r28 */) {
    // Local variables
    class StackAllocator allocator; // r1+0x44
    class StackAllocator paramDataAllocator; // r1+0x38
    class ModelPrototypeAsset * protoAsset; // r0
    int curTextureCount; // r0
    unsigned long long * curInstParam; // r16

    {
        // Range: 0x801B9CE4 -> 0x801B9D48
        // Local variables
        int endi; // r0
        int i; // r16
    }
    {
        // Range: 0x801B9D50 -> 0x801B9ED0
        // Local variables
        unsigned int i; // r19

        {
            // Range: 0x801B9D50 -> 0x801B9ED0
            // Local variables
            unsigned int dwordSize; // r21
            unsigned int wordSize; // r3
            int paramCount; // r0
            class ModelInstanceParamData * result; // r1+0xC

            {
                // Range: 0x801B9D8C -> 0x801B9E4C
                // Local variables
                class SamplerContext context; // r1+0x10
                class Texture * texture; // r17
                class SamplerParamData * samp; // r0

                {
                    // Range: 0x801B9DE0 -> 0x801B9E4C
                    // Local variables
                    int pidx; // r22

                    {
                        // Range: 0x801B9DE0 -> 0x801B9E4C
                        // Local variables
                        unsigned short phandle; // r0
                    }
                }
            }
            {
                // Range: 0x801B9E4C -> 0x801B9EB4
                // Local variables
                float * srcData; // r22

                {
                    // Range: 0x801B9E58 -> 0x801B9EB4
                    // Local variables
                    int pidx; // r23

                    {
                        // Range: 0x801B9E58 -> 0x801B9EB4
                        // Local variables
                        unsigned short phandle; // r0
                    }
                }
            }
        }
    }
    {
        // Range: 0x801B9ED0 -> 0x801BA228
        // Local variables
        int i; // r30

        {
            // Range: 0x801B9ED0 -> 0x801BA228
            // Local variables
            class Vector4 shadowColor; // r1+0x28
            unsigned int finalShadowColor; // r4
            float shadowAlpha; // f0
        }
    }

    // References
    // -> class Renderable3DTransform g_identity;
    // -> unsigned int updateFrameNumber;
    // -> static class Matrix43 _matIdentity;
}
// Range: 0x801BA700 -> 0x801BA718
void World::ModelInstanceArticle::Destroy() {
}
// signature: World::ModelInstanceArticle::DetachCallback(Graphics::Node *)
// Range: 0x801BA720 -> 0x801BA774
void World::ModelInstanceArticle::DetachCallback() {
}
// Range: 0x801BA780 -> 0x801BA824
void World::ModelInstanceArticle::Detach(class ModelInstanceArticle * this /* r27 */) {
}
// Range: 0x801BA830 -> 0x801BA918
void World::ModelInstanceArticle::Deactivate(class ModelInstanceArticle * this /* r29 */) {
    {
        // Range: 0x801BA850 -> 0x801BA884
        // Local variables
        int i; // r30
    }
    {
        // Range: 0x801BA8AC -> 0x801BA8E8
        // Local variables
        int i; // r30
    }
}
// Range: 0x801BA920 -> 0x801BA998
void World::ModelInstanceArticle::ApplyRenderCustomizers(class ModelInstanceArticle * this /* r27 */, unsigned int applyMask /* r28 */) {
    // Local variables
    class RenderCustomizerInfo * customizers; // r30
    int i; // r29
}
// signature: World::ModelInstanceArticle::ShadowCacheSize(World::ModelInstanceArticle::eShadow *, const World::ModelInstanceAsset &, int *)
// Range: 0x801BA9B0 -> 0x801BAA0C
void World::ModelInstanceArticle::ShadowCacheSize() {
}
// Range: 0x801BAA10 -> 0x801BACF4
void World::ModelInstanceArticle::ShadowCacheFill(unsigned long long protoID /* r24:r23 */, class ModelInstanceArticle * mModelArt /* r25 */, enum eShadow castShadow /* r26 */, unsigned long long shadowID /* r28:r27 */, class StackAllocator & allocator /* r29 */, bool circle /* r30 */) {
    // Local variables
    class ShadowSimpleCache * simpShadowCache; // r31

    {
        // Range: 0x801BAA64 -> 0x801BAC04
        // Local variables
        int shadowA; // r8
        class ShadowSimpleParams shadowSimpleParams; // r1+0x8
        class ModelPrototypeAsset * target; // r0

        {
            // Range: 0x801BABD8 -> 0x801BAC04
            // Local variables
            int i; // r5
        }
    }
    {
        // Range: 0x801BAC04 -> 0x801BAC3C
        // Local variables
        int i; // r27
    }
    {
        // Range: 0x801BAC40 -> 0x801BAC8C
        // Local variables
        int i; // r27

        {
            // Range: 0x801BAC48 -> 0x801BAC8C
            // Local variables
            class Renderable * renderable; // r28
        }
    }
    {
        // Range: 0x801BAC90 -> 0x801BACDC
        // Local variables
        int i; // r27

        {
            // Range: 0x801BAC98 -> 0x801BACDC
            // Local variables
            class Renderable * renderable; // r28
        }
    }
}
// Range: 0x801BAD50 -> 0x801BAF44
void World::ModelInstanceArticlePool::Init() {
    {
        // Range: 0x801BAD5C -> 0x801BAE24
        // Local variables
        int i; // r0

        {
            // Range: 0x801BAD5C -> 0x801BAE24
            // Local variables
            int size; // r29
            int count; // r30
        }
    }

    // References
    // -> static class MIALinkedList miaPool;
    // -> static class MIALinkedList miaMemPools[1];
    // -> static class MIAPoolConfig miaPoolConfig[1];
}
// Range: 0x801BAF50 -> 0x801BB024
void World::ModelInstanceArticlePool::Destroy() {
    {
        // Range: 0x801BAFD8 -> 0x801BB010
        // Local variables
        int i; // r0
    }

    // References
    // -> static class MIALinkedList miaMemPools[1];
    // -> static class MIALinkedList miaPool;
}
