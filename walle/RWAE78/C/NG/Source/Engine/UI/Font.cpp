/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\UI\Font.cpp
*/
static class FontAssetSchema fontAssetSchemaInternal; // size: 0x18, address: 0x80809A60
static class SchemaRegistrator fontAssetSchemaReg; // size: 0x8, address: 0x80809A78
static class FontSchema fontSchemaInternal; // size: 0x18, address: 0x80809A80
static class SchemaRegistrator fontSchemaReg; // size: 0x8, address: 0x80809A98
class Schema * fontAssetSchema; // size: 0x4, address: 0x8070B6A8
class Schema * fontSchema; // size: 0x4, address: 0x8070B6AC
static class FontModule fontMod; // size: 0xBC, address: 0x80809AAC
static class ModuleRegistrator fontModReg; // size: 0x8, address: 0x80809B68
class Module * fontModule; // size: 0x4, address: 0x8070B6EC
// Range: 0x802B8C80 -> 0x802B8D28
static unsigned int ColorFto32BitColor(class ColorF * color /* r28 */) {
    // Local variables
    unsigned int r; // r0
    unsigned int g; // r0
    unsigned int b; // r0
    unsigned int a; // r0
}
// signature: UI::FontAssetSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x802B6C5C -> 0x802B6CAC
class EntityStub * UI::FontAssetSchema::CreateStub(class FontAssetSchema * this /* r31 */) {
}
// signature: UI::FontAssetSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x802B6CAC -> 0x802B6F80
void UI::FontAssetSchema::DestroyStub(class EntityStub * stub /* r30 */) {
    // References
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// signature: UI::FontAssetSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x802B6F80 -> 0x802B7060
class Entity * UI::FontAssetSchema::ActivateEntity(class EntityHandleBase * handle /* r30 */, class Asset * baseAsset /* r31 */) {
    // References
    // -> struct {} __vt__Q22UI19FontAssetBlobEntity;
}
// Range: 0x802B7060 -> 0x802B7348
void UI::FontAssetBlobEntity::Deactivate(class FontAssetBlobEntity * this /* r30 */) {
    // References
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// signature: UI::FontSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x802B766C -> 0x802B76BC
class EntityStub * UI::FontSchema::CreateStub(class FontSchema * this /* r31 */) {
}
// signature: UI::FontSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x802B76BC -> 0x802B7990
void UI::FontSchema::DestroyStub(class EntityStub * stub /* r30 */) {
    // References
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// signature: UI::FontSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x802B7990 -> 0x802B7AD4
class Entity * UI::FontSchema::ActivateEntity(class EntityHandleBase * handle /* r28 */, class Asset * baseAsset /* r27 */) {
    // References
    // -> struct {} __vt__Q22UI11TextureFont;
}
// Range: 0x802BE29C -> 0x802BE5A8
static void * @unnamed@WAD02_cpp@::FontModule::~FontModule(class FontModule * this /* r30 */) {
    // References
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int havokAllocs[2][5];
    // -> int gInHavokDeinit;
}
// signature: @unnamed@WAD02_cpp@::FontModule::Startup(int)
// Range: 0x802BE298 -> 0x802BE29C
static void @unnamed@WAD02_cpp@::FontModule::Startup() {
}
// signature: @unnamed@WAD02_cpp@::FontModule::Shutdown(int)
// Range: 0x802BE208 -> 0x802BE298
static void @unnamed@WAD02_cpp@::FontModule::Shutdown(class FontModule * this /* r29 */) {
}
// signature: @unnamed@WAD02_cpp@::FontModule::FirstUpdate(int)
// Range: 0x802BE204 -> 0x802BE208
static void @unnamed@WAD02_cpp@::FontModule::FirstUpdate() {
}
// signature: @unnamed@WAD02_cpp@::FontModule::StepBegin(int)
// Range: 0x802BE200 -> 0x802BE204
static void @unnamed@WAD02_cpp@::FontModule::StepBegin() {
}
// signature: @unnamed@WAD02_cpp@::FontModule::StepEnd(int)
// Range: 0x802BE1FC -> 0x802BE200
static void @unnamed@WAD02_cpp@::FontModule::StepEnd() {
}
// signature: @unnamed@WAD02_cpp@::FontModule::FinalStepEnd(int)
// Range: 0x802BE1F8 -> 0x802BE1FC
static void @unnamed@WAD02_cpp@::FontModule::FinalStepEnd() {
}
// Range: 0x802B8BD8 -> 0x802B8C80
static class EntityHandle * @unnamed@WAD02_cpp@::FontModule::GetImmediatePrototypeHandle(class FontModule * this /* r29 */) {
    {
        // Range: 0x802B8BF4 -> 0x802B8C60
        // Local variables
        class ScadMgr * scadMgr; // r0
    }
}
// signature: @unnamed@WAD02_cpp@::BuildTextureFontVertices(Math::Vector4 *, const UI::Font::Batch *, float, const UI::Glyph *, const UI::GlyphUV *, const unsigned short *, unsigned int, int)
// Range: 0x802B7AD4 -> 0x802B7E4C
static unsigned int @unnamed@WAD02_cpp@::BuildTextureFontVertices() {
    // Local variables
    unsigned int visibleCharacters; // r11

    {
        // Range: 0x802B7B08 -> 0x802B7E00
        // Local variables
        int lineIndex; // r12

        {
            // Range: 0x802B7B08 -> 0x802B7E00
            // Local variables
            char * string; // r30
            float x; // r31
            float base; // f12
            float slant; // f0
            float height; // f4
            class Line * line; // r31

            {
                // Range: 0x802B7B08 -> 0x802B7DF4
                // Local variables
                float bottomIntersection; // f0
                float topIntersection; // f0
                float rightIntersection; // f0
                float leftIntersection; // f0
                float top; // f28
                float bottom; // f29
                float rightLower; // f30
                float rightUpper; // f4
                float leftLower; // f2
                float leftUpper; // f31
                float width; // f13
                class GlyphUV * uv; // r28
                class Glyph * glyph; // r27
                unsigned int glyphIndex; // r0
            }
        }
    }
}
// Range: 0x802B7E74 -> 0x802B8194
void * UI::Font::~Font(class Font * this /* r30 */) {
    // References
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int havokAllocs[2][5];
    // -> int gInHavokDeinit;
    // -> struct {} __vt__Q25World6Entity;
}
// Range: 0x802B8194 -> 0x802B8244
void UI::TextureFont::Deactivate(class TextureFont * this /* r29 */) {
}
// Range: 0x802B8244 -> 0x802B852C
void UI::TextureFont::Destroy(class TextureFont * this /* r30 */) {
    // References
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// Range: 0x802B852C -> 0x802B88DC
void * UI::TextureFont::~TextureFont(class TextureFont * this /* r30 */) {
    // References
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int havokAllocs[2][5];
    // -> int gInHavokDeinit;
    // -> struct {} __vt__Q25World6Entity;
    // -> struct {} __vt__Q22UI11TextureFont;
}
// Range: 0x802B88DC -> 0x802B8BD8
void UI::TextureFont::Draw(class TextureFont * this /* r21 */, class Scene * scene /* r22 */, class Batch * batch /* r23 */) {
    // Local variables
    class EntityHandle * immediatePrototypeHandle; // r0
    class ImmediatePrototypeEntity * immediatePrototype; // r29
    class FontAssetBlobEntity * asset; // r28
    unsigned int color; // r27
    unsigned short paramHandle; // r0
    class Sampler samplerData; // r1+0x14
    class ImmediateGeometryEntity * immediateGeometry; // r26
    class ParamData * rendParamData; // r16
    class Effect * effect; // r0
    int verticesSize; // r25
    class Vector4 * vertices; // r24
    unsigned int visibleCharacters; // r0
    class Material * overrideMaterial; // r3
    class Renderable3DTransform * xform; // r1+0x10
    class ImmediateContext context; // r1+0x20

    {
        // Range: 0x802B8A98 -> 0x802B8BA4
        // Local variables
        class Renderable3D * renderable; // r16

        {
            // Range: 0x802B8AAC -> 0x802B8B14
            // Local variables
            int i; // r18
        }
    }

    // References
    // -> class Module * fontModule;
}
// Range: 0x802B8E1C -> 0x802B9104
class Material * UI::TextureFont::MakeBrightMaterial(class Material * base /* r25 */, unsigned char brightness /* r26 */) {
    // Local variables
    unsigned int paramDataMemorySize; // r5
    class StackAllocator allocator; // r1+0x8
    class StateDelta * blendFactor; // r5

    {
        // Range: 0x802B8F14 -> 0x802B8F40
        // Local variables
        int i; // r4
    }

    // References
    // -> static class PoolArray tempNodes;
    // -> struct {} __vt__Q28Graphics8Material;
    // -> struct {} __vt__Q28Graphics10RenderMode;
    // -> class SingleBufferAllocator updateFrameAllocator;
}
