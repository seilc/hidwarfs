/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Entities\ModelInstanceArticle.cpp
*/
class ModelInstanceArticleSchema schema; // size: 0x18, address: 0x807FE970
class UVMovementSettingsSchema uvMovementSettings; // size: 0x18, address: 0x807FE988
class TextureAnimationSettingsSchema textureAnimationSettings; // size: 0x18, address: 0x807FE9A0
class DTRMovieSchema dtrMovieSchema; // size: 0x18, address: 0x807FE9B8
class DTRFrontBufferSchema dtrFrontBufferSchema; // size: 0x18, address: 0x807FE9D0
class GlobalFXSchema GlobalFXSchema; // size: 0x18, address: 0x807FE9E8
class SchemaRegistrator schemaReg; // size: 0x8, address: 0x807FEA00
class SchemaRegistrator uvCustomizerSchemaReg; // size: 0x8, address: 0x807FEA08
class SchemaRegistrator textureAnimationCustomizerSchemaReg; // size: 0x8, address: 0x807FEA10
class SchemaRegistrator dtrMovieSchemaReg; // size: 0x8, address: 0x807FEA18
class SchemaRegistrator dtrFrontBufferSchemaReg; // size: 0x8, address: 0x807FEA20
class Schema * modelInstanceSchema; // size: 0x4, address: 0x80707AC8
static class MIAPoolConfig miaPoolConfig[1]; // size: 0x8, address: 0x80707AE0
static class MIALinkedList miaMemPools[1]; // size: 0x18, address: 0x807FEA28
static class MIALinkedList miaPool; // size: 0x18, address: 0x807FEA40
class ModelInstanceArticlePool modelInstanceArticlePool; // size: 0x1, address: 0x807FEA58
// signature: World::ModelInstanceArticleSchema::Fix(World::Asset *, long, int)
// Range: 0x8024059C -> 0x802405B8
void World::ModelInstanceArticleSchema::Fix() {
    // Local variables
    class ModelInstanceAsset * asset; // r0
}
// signature: World::ModelInstanceArticleSchema::GetArticleSize(int &, const World::Asset *)
// Range: 0x802405B8 -> 0x802405C0
int World::ModelInstanceArticleSchema::GetArticleSize() {
}
// signature: World::ModelInstanceArticleSchema::CreateArticle(Overseer::Goodie *, const World::Asset *, void *, int)
// Range: 0x802405C0 -> 0x802405C4
void World::ModelInstanceArticleSchema::CreateArticle() {
}
// Range: 0x802405C4 -> 0x80240B20
void World::ModelInstanceArticle::GetRenderCustomizerInfo(class CreateInfo * info /* r26 */, class ModelPrototype * modelProto /* r27 */, class Goodie * goodie /* r28 */, class ModelInstanceAsset * asset /* r29 */) {
    // Local variables
    class EntityHandle * customizerHandle; // r17
    unsigned int customizerIndex; // r30

    {
        // Range: 0x802405CC -> 0x80240AE0
        // Local variables
        int paramCount; // r0
        class ModelInstanceParamData * paramData; // r1+0x10

        {
            // Range: 0x802409D0 -> 0x80240AE0
            // Local variables
            int paramIndex; // r16
        }
    }

    // References
    // -> static class ScadMgrModule scadMgrMod;
}
// signature: World::ModelInstanceArticle::CreateRenderCustomizers(Memory::StackAllocator &, const World::ModelInstanceArticle::CreateInfo &, const Graphics::ModelPrototype &, Overseer::Goodie *, const World::ModelInstanceAsset &)
// Range: 0x80240B20 -> 0x80241008
void World::ModelInstanceArticle::CreateRenderCustomizers(class ModelInstanceArticle * this /* r24 */, class StackAllocator * allocator /* r25 */, class ModelPrototype * modelProto /* r26 */, class Goodie * goodie /* r27 */, class ModelInstanceAsset * asset /* r28 */) {
    // Local variables
    class EntityHandle * customizer; // r3
    class RenderCustomizerBaseEntity * customizerEntity; // r16
    unsigned int customizerIndex; // r29

    {
        // Range: 0x80240B8C -> 0x80240FE4
        // Local variables
        int paramCount; // r0
        class ModelInstanceParamData * paramData; // r1+0x10

        {
            // Range: 0x80240F58 -> 0x80240FA8
            // Local variables
            int pidx; // r17
        }
    }

    // References
    // -> static class ScadMgrModule scadMgrMod;
}
// Range: 0x80241008 -> 0x80241AD0
void World::ModelInstanceArticle::GetCreateInfo(class CreateInfo * info /* r29 */, class Goodie * goodie /* r30 */, class ModelInstanceAsset * asset /* r31 */, class EntityHandle * protoHandle /* r27 */, class EntityHandle * lightKitHandle /* r24 */) {
    // Local variables
    unsigned long long * curInstParam; // r25

    {
        // Range: 0x802414B4 -> 0x8024151C
        // Local variables
        int i; // r25
    }
    {
        // Range: 0x80241550 -> 0x802415C0
        // Local variables
        unsigned int i; // r26

        {
            // Range: 0x80241550 -> 0x802415C0
            // Local variables
            unsigned int dwordSize; // r27
            class ModelInstanceParamData * result; // r1+0x18
        }
    }

    // References
    // -> static class ScadMgrModule scadMgrMod;
}
// Range: 0x80241D48 -> 0x802424E8
void World::ModelInstanceArticle::Create(class ModelInstanceArticle * this /* r15 */, void * mem /* r14 */, class CreateInfo * info /* r16 */, class Goodie * goodie /* r17 */, class ModelInstanceAsset * asset /* r18 */, bool temporary /* r19 */) {
    // Local variables
    class ModelPrototype * proto; // r26
    int rendCount; // r21
    class StackAllocator allocator; // r1+0x3C
    void * modelCreateBuffer; // r22
    void * allParamCargoBuffer; // r0
    void * allParamDataBuffer; // r23
    class StackAllocator paramDataAllocator; // r1+0x30
    class ModelPrototypeAsset * protoAsset; // r0
    unsigned long long * curInstParam; // r25
    int allRendCount; // r20

    {
        // Range: 0x80241EC0 -> 0x80241F68
        // Local variables
        int endi; // r0
        int i; // r14

        {
            // Range: 0x80241EC0 -> 0x80241F68
            // Local variables
            class ParamData * paramData; // r24
            void * paramDataBuffer; // r0
            int paramDataSize; // r23
            class Effect * effect; // r22
            class Renderable3D * rend; // r20
        }
    }
    {
        // Range: 0x80241F7C -> 0x80242168
        // Local variables
        unsigned int i; // r24

        {
            // Range: 0x80241F7C -> 0x80242168
            // Local variables
            unsigned int dwordSize; // r23
            unsigned int wordSize; // r4
            int paramCount; // r0
            class ModelInstanceParamData * result; // r1+0x10

            {
                // Range: 0x80241F7C -> 0x802420F0
                // Local variables
                class SamplerContext context; // r1+0x18
                class Texture * texture; // r20
                class SamplerParamData * samp; // r0

                {
                    // Range: 0x80241F7C -> 0x80242064
                    // Local variables
                    class EntityHandle * textureHandle; // r0
                }
                {
                    // Range: 0x80242084 -> 0x802420D8
                    // Local variables
                    int pidx; // r21

                    {
                        // Range: 0x80242084 -> 0x802420D8
                        // Local variables
                        class Sampler * sampler; // r0
                        unsigned short phandle; // r0
                        class Renderable3D * rend; // r22
                    }
                }
            }
            {
                // Range: 0x802420F0 -> 0x80242164
                // Local variables
                float * srcData; // r22

                {
                    // Range: 0x802420FC -> 0x8024214C
                    // Local variables
                    int pidx; // r21

                    {
                        // Range: 0x802420FC -> 0x8024214C
                        // Local variables
                        unsigned short phandle; // r0
                        class Renderable3D * rend; // r20
                    }
                }
            }
        }
    }
    {
        // Range: 0x80242188 -> 0x8024243C
        // Local variables
        int endi; // r0
        int i; // r21

        {
            // Range: 0x80242188 -> 0x8024243C
            // Local variables
            class Vector4 shadowColor; // r1+0x20
            unsigned int finalShadowColor; // r24
            float shadowAlpha; // f0
            class RenderAttrib viewAttrib; // r1+0xC
            class Renderable3D * rend; // r22

            {
                // Range: 0x80242188 -> 0x80242188
                // Local variables
                class Material * mat; // r0
                class Geometry * geom; // r0
            }
        }
    }
}
// Range: 0x80242C48 -> 0x80242C60
void World::ModelInstanceArticle::Destroy() {
}
// Range: 0x80242C60 -> 0x80242D68
void World::ModelInstanceArticle::DestroyTemporary(class ModelInstanceArticle * this /* r28 */) {
}
// signature: World::ModelInstanceArticle::DetachCallback(Graphics::Node *)
// Range: 0x80242D68 -> 0x80242DBC
void World::ModelInstanceArticle::DetachCallback() {
}
// Range: 0x80242DBC -> 0x80242E7C
void World::ModelInstanceArticle::Detach(class ModelInstanceArticle * this /* r27 */) {
}
// Range: 0x80242E84 -> 0x8024319C
void World::ModelInstanceArticle::Deactivate(class ModelInstanceArticle * this /* r31 */) {
    {
        // Range: 0x80242EA4 -> 0x80242EB0
        // Local variables
        int i; // r26
    }
    {
        // Range: 0x802430BC -> 0x80243178
        // Local variables
        int i; // r26
    }
}
// Range: 0x8024319C -> 0x80243224
void World::ModelInstanceArticle::ApplyRenderCustomizers(class ModelInstanceArticle * this /* r28 */, unsigned int applyMask /* r29 */) {
    // Local variables
    class RenderCustomizerInfo * customizers; // r0
    int i; // r30
}
// Range: 0x80243224 -> 0x802432CC
void World::ModelInstanceArticle::ApplyRenderCustomizers(class ModelInstanceArticle * this /* r27 */, unsigned int applyMask /* r28 */, class UVMovementInstanceData * instanceData /* r29 */) {
    // Local variables
    class RenderCustomizerInfo * customizers; // r0
    int i; // r30
}
// signature: World::ModelInstanceArticle::GetInstanceData(int)
// Range: 0x802432CC -> 0x802432DC
class RenderCustomizerData * World::ModelInstanceArticle::GetInstanceData() {
}
// signature: World::ModelInstanceArticle::GetInstanceDataSize(int)
// Range: 0x802432DC -> 0x802432F8
int World::ModelInstanceArticle::GetInstanceDataSize() {
}
// Range: 0x802432F8 -> 0x8024337C
void World::ModelInstanceArticle::AmendViewportVisibleMask(class ModelInstanceArticle * this /* r27 */, enum VisibilityMask mask /* r28 */) {
    {
        // Range: 0x80243308 -> 0x8024335C
        // Local variables
        int i; // r29
    }
}
// Range: 0x8024337C -> 0x80243948
void World::ModelInstanceArticlePool::Init() {
    {
        // Range: 0x80243388 -> 0x8024363C
        // Local variables
        int i; // r0

        {
            // Range: 0x80243388 -> 0x8024363C
            // Local variables
            int size; // r29
            int count; // r30
        }
    }

    // References
    // -> struct {} __vt__Q25World20ModelInstanceArticle;
    // -> static class MIALinkedList miaPool;
    // -> static class MIALinkedList miaMemPools[1];
    // -> static class MIAPoolConfig miaPoolConfig[1];
}
// Range: 0x80243948 -> 0x80243A3C
void World::ModelInstanceArticlePool::Destroy() {
    {
        // Range: 0x802439E8 -> 0x802439E8
        // Local variables
        int i; // r0
    }

    // References
    // -> static class MIALinkedList miaMemPools[1];
    // -> static class MIALinkedList miaPool;
}
// Range: 0x80243A3C -> 0x80243BA8
class ModelInstanceArticle * World::ModelInstanceArticlePool::Create(class CreateInfo * info /* r28 */, class Goodie * goodie /* r29 */, class ModelInstanceAsset * asset /* r30 */, bool temporary /* r31 */) {
    // Local variables
    void * mem; // r9
    int memSize; // r3
    int configIndex; // r5

    // References
    // -> struct {} __vt__Q25World20ModelInstanceArticle;
    // -> static class MIALinkedList miaPool;
    // -> static class MIALinkedList miaMemPools[1];
    // -> static class MIAPoolConfig miaPoolConfig[1];
}
// Range: 0x80243BA8 -> 0x80243D04
void World::ModelInstanceArticlePool::Destroy(class ModelInstanceArticle * art /* r31 */) {
    // Local variables
    void * mem; // r3

    {
        // Range: 0x80243BEC -> 0x80243C40
        // Local variables
        int idx; // r0
    }

    // References
    // -> static class MIALinkedList miaPool;
    // -> static class MIALinkedList miaMemPools[1];
}
