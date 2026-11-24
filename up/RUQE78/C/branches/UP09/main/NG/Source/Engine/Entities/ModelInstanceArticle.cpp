/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Entities\ModelInstanceArticle.cpp
*/
static class MIAPoolConfig miaPoolConfig[1]; // size: 0x8, address: 0x807BDF28
static class MIALinkedList miaMemPools[1]; // size: 0x18, address: 0x808461D0
static class MIALinkedList miaPool; // size: 0x18, address: 0x808461E8
class ModelInstanceArticlePool modelInstanceArticlePool; // size: 0x1, address: 0x80846200
struct {} __vt__Q27Domains20MemCB_BorrowedMemory; // size: 0x18, address: 0x807BEE40
struct {} __vt__Q27Domains17MemOwnerUnclaimed; // size: 0x1C, address: 0x807BEE58
struct {} __vt__Q26Loader16MemCB_MetaRecord; // size: 0x18, address: 0x807BEE78
struct {} __vt__Q26Loader12LoadMemOwner; // size: 0x1C, address: 0x807BEE90
struct {} __vt__Q27Domains24MemCB_ParcelLoadAndParse; // size: 0x18, address: 0x807BEEB0
static struct {} __vt__Q37Domains19@unnamed@WAD00_cpp@16MemCB_ParcelDATA; // size: 0x18, address: 0x807BEEC8
struct {} __vt__Q27Domains9BlobMemCB; // size: 0x18, address: 0x807BEEE0
struct {} __vt__Q37Domains7DynaMem8MemOwner; // size: 0x1C, address: 0x807BEF08
struct {} __vt__Q27Domains12MemCallbacks; // size: 0x18, address: 0x807BEF28
static unsigned int DEFAULT_PROJECT_SHADOW_CACHE; // size: 0x4, address: 0x80787640
// Range: 0x802DD864 -> 0x802DD984
void World::ModelInstanceArticle::GetRenderCustomizerInfo(class CreateInfo & info /* r31 */, class ModelPrototype & modelProto /* r24 */, class ModelInstanceAsset & asset /* r25 */) {
    // Local variables
    class PackCustomizerInfo * renderCustomizers; // r0
    class EntityHandle * customizerHandle; // r28
    unsigned int customizerIndex; // r27

    {
        // Range: 0x802DD890 -> 0x802DD944
        // Local variables
        int paramCount; // r0
        class ModelInstanceParamData * paramData; // r1+0xC

        {
            // Range: 0x802DD8DC -> 0x802DD944
            // Local variables
            int paramIndex; // r26
        }
    }
}
// signature: World::ModelInstanceArticle::CreateRenderCustomizers(Memory::StackAllocator &, const World::ModelInstanceArticle::CreateInfo &, const Graphics::ModelPrototype &, const World::ModelInstanceAsset &)
// Range: 0x802DD984 -> 0x802DDAE0
void World::ModelInstanceArticle::CreateRenderCustomizers(class ModelInstanceArticle * this /* r21 */, class StackAllocator & allocator /* r22 */, class ModelPrototype & modelProto /* r23 */, class ModelInstanceAsset & asset /* r24 */) {
    // Local variables
    class PackCustomizerInfo * rendCustomizers; // r28
    class RenderCustomizerBaseEntity * customizerEntity; // r27
    unsigned int customizerIndex; // r26

    {
        // Range: 0x802DD9EC -> 0x802DDABC
        // Local variables
        int paramCount; // r0
        class ModelInstanceParamData * paramData; // r1+0x8

        {
            // Range: 0x802DDA30 -> 0x802DDA80
            // Local variables
            int pidx; // r25
        }
    }
}
// Range: 0x802DDAE0 -> 0x802DDDA4
void World::ModelInstanceArticle::GetCreateInfo(class CreateInfo & info /* r23 */, class ModelInstanceAsset & asset /* r24 */, class EntityHandle * protoHandle /* r28 */, class EntityHandle * lightKitHandle /* r25 */, int * memSize /* r26 */, enum eShadow * castShadow /* r27 */) {
    // Local variables
    class ModelPrototype & proto; // r30
    int rendCount; // r29
    unsigned long long * curInstParam; // r28

    {
        // Range: 0x802DDB5C -> 0x802DDBB4
        // Local variables
        int i; // r28
    }
    {
        // Range: 0x802DDBE8 -> 0x802DDC58
        // Local variables
        unsigned int i; // r29

        {
            // Range: 0x802DDBE8 -> 0x802DDC58
            // Local variables
            unsigned int dwordSize; // r31
            class ModelInstanceParamData * result; // r1+0x10
        }
    }
}
// Range: 0x802DDDAC -> 0x802DE530
void World::ModelInstanceArticle::Create(class ModelInstanceArticle * this /* r28 */, void * mem /* r15 */, class CreateInfo & info /* r29 */, class ModelInstanceAsset & asset /* r30 */, bool temporary /* r31 */) {
    // Local variables
    class ModelPrototype & proto; // r22
    int rendCount; // r17
    class StackAllocator allocator; // r1+0x3C
    void * modelCreateBuffer; // r18
    void * allParamCargoBuffer; // r0
    void * allParamDataBuffer; // r19
    class StackAllocator paramDataAllocator; // r1+0x30
    class ModelPrototypeAsset * protoAsset; // r0
    unsigned long long * curInstParam; // r21
    int allRendCount; // r16
    class Skeleton * skel; // r0

    {
        // Range: 0x802DDF1C -> 0x802DDFB4
        // Local variables
        int endi; // r0
        int i; // r15

        {
            // Range: 0x802DDF1C -> 0x802DDFB4
            // Local variables
            class ParamData * paramData; // r18
            void * paramDataBuffer; // r0
            int paramDataSize; // r19
            class Effect * effect; // r18
            class Renderable3D * rend; // r16
        }
    }
    {
        // Range: 0x802DDFC8 -> 0x802DE188
        // Local variables
        unsigned int i; // r20

        {
            // Range: 0x802DDFC8 -> 0x802DE188
            // Local variables
            unsigned int dwordSize; // r19
            unsigned int wordSize; // r4
            int paramCount; // r0
            class ModelInstanceParamData * result; // r1+0x10

            {
                // Range: 0x802DDFC8 -> 0x802DE110
                // Local variables
                class SamplerContext context; // r1+0x18
                class Texture * texture; // r23
                class SamplerParamData * samp; // r0

                {
                    // Range: 0x802DDFC8 -> 0x802DE084
                    // Local variables
                    class EntityHandle * textureHandle; // r15
                }
                {
                    // Range: 0x802DE0A4 -> 0x802DE0F8
                    // Local variables
                    int pidx; // r18

                    {
                        // Range: 0x802DE0A4 -> 0x802DE0F8
                        // Local variables
                        class Sampler & sampler; // r0
                        unsigned short phandle; // r0
                        class Renderable3D * rend; // r16
                    }
                }
            }
            {
                // Range: 0x802DE110 -> 0x802DE184
                // Local variables
                float * srcData; // r18

                {
                    // Range: 0x802DE11C -> 0x802DE16C
                    // Local variables
                    int pidx; // r17

                    {
                        // Range: 0x802DE11C -> 0x802DE16C
                        // Local variables
                        unsigned short phandle; // r0
                        class Renderable3D * rend; // r16
                    }
                }
            }
        }
    }
    {
        // Range: 0x802DE1A8 -> 0x802DE470
        // Local variables
        int endi; // r0
        int i; // r17

        {
            // Range: 0x802DE1A8 -> 0x802DE470
            // Local variables
            class Vector4 shadowColor; // r1+0x20
            unsigned int finalShadowColor; // r15
            float shadowAlpha; // f0
            class RenderAttrib viewAttrib; // r1+0xC
            class Renderable3D * rend; // r18

            {
                // Range: 0x802DE1A8 -> 0x802DE1A8
                // Local variables
                class Material * mat; // r0
                class Geometry * geom; // r0
            }
        }
    }
}
// Range: 0x802DF304 -> 0x802DF31C
void World::ModelInstanceArticle::Destroy() {
}
// signature: World::ModelInstanceArticle::DetachCallback(Graphics::Node *)
// Range: 0x802DF31C -> 0x802DF370
void World::ModelInstanceArticle::DetachCallback() {
}
// Range: 0x802DF370 -> 0x802DF430
void World::ModelInstanceArticle::Detach(class ModelInstanceArticle * this /* r27 */) {
}
// Range: 0x802DF430 -> 0x802DF5A4
void World::ModelInstanceArticle::Deactivate(class ModelInstanceArticle * this /* r31 */) {
    {
        // Range: 0x802DF450 -> 0x802DF458
        // Local variables
        int i; // r27
    }
    {
        // Range: 0x802DF500 -> 0x802DF544
        // Local variables
        int i; // r27
    }
}
// Range: 0x802DF5A4 -> 0x802DF62C
void World::ModelInstanceArticle::ApplyRenderCustomizers(class ModelInstanceArticle * this /* r28 */, unsigned int applyMask /* r29 */) {
    // Local variables
    class RenderCustomizerInfo * customizers; // r0
    int i; // r30
}
// Range: 0x802DF634 -> 0x802DF6B8
void World::ModelInstanceArticle::AmendViewportVisibleMask(class ModelInstanceArticle * this /* r27 */, enum VisibilityMask mask /* r28 */) {
    {
        // Range: 0x802DF644 -> 0x802DF698
        // Local variables
        int i; // r29
    }
}
// Range: 0x802DF6B8 -> 0x802DFA34
void World::ModelInstanceArticle::ShadowCacheFill(unsigned long long protoID /* r24:r23 */, class ModelInstanceArticle * mModelArt /* r25 */, enum eShadow castShadow /* r26 */, unsigned long long shadowID /* r28:r27 */, class StackAllocator & allocator /* r29 */) {
    // Local variables
    class ShadowSimpleCache * simpShadowCache; // r30

    {
        // Range: 0x802DF710 -> 0x802DF890
        // Local variables
        int shadowA; // r0
        class ShadowSimpleParams shadowSimpleParams; // r1+0x44
        class ModelPrototypeAsset * target; // r0

        {
            // Range: 0x802DF864 -> 0x802DF874
            // Local variables
            int i; // r5
        }
    }
    {
        // Range: 0x802DF890 -> 0x802DF8EC
        // Local variables
        int i; // r28

        {
            // Range: 0x802DF898 -> 0x802DF8DC
            // Local variables
            class Renderable * renderable; // r0
        }
    }
    {
        // Range: 0x802DF8F0 -> 0x802DF984
        // Local variables
        int i; // r29

        {
            // Range: 0x802DF8F8 -> 0x802DF974
            // Local variables
            class Renderable * renderable; // r30
        }
    }
    {
        // Range: 0x802DF988 -> 0x802DFA1C
        // Local variables
        int i; // r29

        {
            // Range: 0x802DF990 -> 0x802DFA0C
            // Local variables
            class Renderable * renderable; // r30
        }
    }
}
// Range: 0x802DFA34 -> 0x802DFF2C
void World::ModelInstanceArticlePool::Init() {
    {
        // Range: 0x802DFA40 -> 0x802DFCF4
        // Local variables
        int i; // r0

        {
            // Range: 0x802DFA40 -> 0x802DFCF4
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
// Range: 0x802DFF2C -> 0x802DFFCC
void World::ModelInstanceArticlePool::Destroy() {
    {
        // Range: 0x802DFF80 -> 0x802DFF80
        // Local variables
        int i; // r0
    }

    // References
    // -> static class MIALinkedList miaMemPools[1];
    // -> static class MIALinkedList miaPool;
}
