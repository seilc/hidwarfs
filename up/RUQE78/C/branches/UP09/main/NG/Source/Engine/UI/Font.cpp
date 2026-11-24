/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\UI\Font.cpp
*/
unsigned long long prototypeID; // size: 0x8, address: 0x80852F80
static class FontModule fontMod; // size: 0xBC, address: 0x80852F94
static class ModuleRegistrator fontModReg; // size: 0x8, address: 0x80853050
class Module * fontModule; // size: 0x4, address: 0x807C1864
// Range: 0x8035ED14 -> 0x8035F034
class Entity * UI::FontAssetAssetHeader::Create(class EntityHandleBase * handle /* r28 */, class FontAssetAssetHeader * asset /* r29 */) {
    // References
    // -> struct {} __vt__Q22UI19FontAssetBlobEntity;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
}
// Range: 0x8035F034 -> 0x8035F490
void UI::FontAssetBlobEntity::Deactivate(class FontAssetBlobEntity * this /* r30 */) {
    // References
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// signature: UI::Font::BuildTextureFontVertices(Math::Vector4 *, const UI::Font::Batch *, float, const UI::Glyph *, const UI::GlyphUV *, const unsigned short *, unsigned int, int)
// Range: 0x8035F494 -> 0x8035F80C
unsigned int UI::Font::BuildTextureFontVertices() {
    // Local variables
    unsigned int visibleCharacters; // r11

    {
        // Range: 0x8035F4C8 -> 0x8035F7C0
        // Local variables
        int lineIndex; // r12

        {
            // Range: 0x8035F4C8 -> 0x8035F7C0
            // Local variables
            char * string; // r30
            float x; // r31
            float base; // f12
            float slant; // f0
            float height; // f4
            class Line & line; // r31

            {
                // Range: 0x8035F4C8 -> 0x8035F7B4
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
                class GlyphUV & uv; // r28
                class Glyph & glyph; // r27
                unsigned int glyphIndex; // r0
            }
        }
    }
}
// Range: 0x8035F810 -> 0x8035F8AC
void UI::TextureFont::Deactivate(class TextureFont * this /* r30 */) {
}
// Range: 0x8035F8B0 -> 0x8035FDBC
void * UI::TextureFont::~TextureFont(class TextureFont * this /* r30 */) {
    // References
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int havokAllocs[2][5];
    // -> int gInHavokDeinit;
    // -> struct {} __vt__Q22UI11TextureFont;
}
// Range: 0x8035FDBC -> 0x803601D0
void UI::TextureFont::Draw(class TextureFont * this /* r19 */, class Scene * scene /* r21 */, class Batch & batch /* r22 */) {
    // Local variables
    class EntityHandle * immediatePrototypeHandle; // r0
    class ImmediatePrototypeEntity * immediatePrototype; // r16
    class FontAssetBlobEntity * asset; // r28
    unsigned int color; // r27
    unsigned short paramHandle; // r0
    class Sampler samplerData; // r1+0x1C
    class ImmediateGeometryEntity * immediateGeometry; // r17
    class ParamData * rendParamData; // r18
    class Effect * effect; // r0
    int verticesSize; // r26
    class Vector4 * vertices; // r25
    unsigned int visibleCharacters; // r0
    class Material * overrideMaterial; // r3
    class Renderable3DTransform * xform; // r1+0x18
    class ImmediateContext context; // r1+0x28

    {
        // Range: 0x8035FF78 -> 0x8036019C
        // Local variables
        class Renderable3D * renderable; // r16

        {
            // Range: 0x8035FF88 -> 0x80360108
            // Local variables
            int i; // r24

            {
                // Range: 0x8035FF88 -> 0x80360108
                // Local variables
                class Vector4 * vertex; // r23
            }
        }
    }

    // References
    // -> class Module * fontModule;
}
// Range: 0x80360450 -> 0x80360730
class Material * UI::TextureFont::MakeBrightMaterial(class Material * base /* r25 */, unsigned char brightness /* r26 */) {
    // Local variables
    unsigned int paramDataMemorySize; // r5
    class StackAllocator allocator; // r1+0x8
    class StateDelta * blendFactor; // r5

    {
        // Range: 0x80360548 -> 0x80360574
        // Local variables
        int i; // r4
    }

    // References
    // -> static class PoolArray tempNodes;
    // -> struct {} __vt__Q28Graphics8Material;
    // -> struct {} __vt__Q28Graphics10RenderMode;
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// Range: 0x80360730 -> 0x80360C5C
class Entity * World::FontAsset::Create(class EntityHandleBase * handle /* r27 */, class FontAsset * fontAsset /* r28 */) {
    // References
    // -> class RTTID_Data g_rttidDataTable[246];
    // -> class EmbeddedTreeAVL g_handleSortedTree;
    // -> struct {} __vt__Q22UI11TextureFont;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
