/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\UI\Font.cpp
*/
unsigned long long prototypeID; // size: 0x8, address: 0x80782FD0
static class FontModule fontMod; // size: 0xBC, address: 0x80782FE4
static class ModuleRegistrator fontModReg; // size: 0x8, address: 0x807830A0
class Module * fontModule; // size: 0x4, address: 0x806CF528
// signature: UI::FontAssetBlobEntity::FontAssetBlobEntity(World::EntityHandleBase *)
// Range: 0x80202CA0 -> 0x80202CE4
void * UI::FontAssetBlobEntity::FontAssetBlobEntity(class FontAssetBlobEntity * this /* r31 */) {
    // References
    // -> struct {} __vt__Q22UI19FontAssetBlobEntity;
}
// Range: 0x80202CF0 -> 0x80202D5C
class Entity * UI::FontAssetAssetHeader::Create(class EntityHandleBase * handle /* r29 */, class FontAssetAssetHeader * asset /* r30 */) {
}
// signature: UI::FontAssetBlobEntity::ResetMembers(const UI::FontAssetAssetHeader *)
// Range: 0x80202D60 -> 0x80202DD8
void UI::FontAssetBlobEntity::ResetMembers() {
    // Local variables
    char * metrics; // r0
}
// signature: UI::Font::BuildTextureFontVertices(Math::Vector4 *, const UI::Font::Batch *, float, const UI::Glyph *, const UI::GlyphUV *, const unsigned short *, unsigned int, int)
// Range: 0x80202DE0 -> 0x802031B0
unsigned int UI::Font::BuildTextureFontVertices(class Vector4 * verts /* r20 */, class Batch * batch /* r21 */, float glyphHeight /* f25 */, class Glyph * glyphs /* r22 */, class GlyphUV * glyphUVs /* r23 */, unsigned short * glyphMap /* r24 */, int glyphMapSize /* r25 */) {
    // Local variables
    unsigned int visibleCharacters; // r30

    {
        // Range: 0x80202E64 -> 0x80203124
        // Local variables
        int lineIndex; // r29

        {
            // Range: 0x80202E64 -> 0x80203124
            // Local variables
            char * string; // r1+0x8
            float x; // r31
            float base; // f29
            float slant; // f30
            float height; // f3
            class Line & line; // r28

            {
                // Range: 0x80202E64 -> 0x80203124
                // Local variables
                float bottomIntersection; // f0
                float topIntersection; // f0
                float rightIntersection; // f0
                float leftIntersection; // f0
                float top; // f18
                float bottom; // f19
                float rightLower; // f20
                float rightUpper; // f21
                float leftLower; // f26
                float leftUpper; // f27
                float width; // f28
                class GlyphUV & uv; // r26
                class Glyph & glyph; // r27
                unsigned int glyphIndex; // r0
                unsigned int character; // r0
            }
        }
    }
}
// signature: UI::Font::Font(World::EntityHandleBase *)
// Range: 0x802031B0 -> 0x802031F4
void * UI::Font::Font(class Font * this /* r31 */) {
    // References
    // -> struct {} __vt__Q22UI4Font;
}
// signature: UI::FontAssetBlobEntity::CountVisible(const char *, const char *) const
// Range: 0x80203260 -> 0x802032E8
int UI::FontAssetBlobEntity::CountVisible(class FontAssetBlobEntity * this /* r28 */, char * last /* r29 */) const {
    // Local variables
    int total; // r31
    char * string; // r1+0x8

    {
        // Range: 0x8020328C -> 0x802032D0
        // Local variables
        char * it; // r30

        {
            // Range: 0x8020328C -> 0x802032D0
            // Local variables
            unsigned int c; // r4
        }
    }
}
// signature: UI::TextureFont::TextureFont(World::EntityHandleBase *)
// Range: 0x802032F0 -> 0x8020332C
void * UI::TextureFont::TextureFont(class TextureFont * this /* r31 */) {
    // References
    // -> struct {} __vt__Q22UI11TextureFont;
}
// Range: 0x80203330 -> 0x802033A4
void UI::TextureFont::Deactivate(class TextureFont * this /* r31 */) {
    // Local variables
    class Referrer referrer; // r1+0x8
}
// Range: 0x802033B0 -> 0x8020343C
void * UI::TextureFont::~TextureFont(class TextureFont * this /* r30 */) {
    // Local variables
    class Referrer referrer; // r1+0x8

    // References
    // -> struct {} __vt__Q22UI11TextureFont;
}
// Range: 0x80203440 -> 0x802034A4
bool UI::TextureFont::CanDraw() {
    // References
    // -> unsigned long long prototypeID;
    // -> class Module * fontModule;
}
// Range: 0x802034B0 -> 0x80203C44
void UI::TextureFont::Draw(class TextureFont * this /* r21 */, class Scene * scene /* r31 */, class Batch & batch /* r19 */, enum VisibilityMask viewportMask /* r20 */) {
    // Local variables
    class ImmediatePrototypeEntity * immediatePrototype; // r30
    class FontAssetBlobEntity * asset; // r29
    unsigned short paramHandle; // r0
    class Sampler samplerData; // r1+0x60
    class ImmediateGeometryEntity * immediateGeometry; // r0
    int verticesSize; // r23
    unsigned int visibleCharacters; // r0
    class Renderable3DTransform * xform; // r1+0x14
    class ImmediateContext context; // r1+0x6C

    {
        // Range: 0x802036EC -> 0x80203C14
        // Local variables
        class Renderable3D * renderable; // r21

        {
            // Range: 0x802036F8 -> 0x802037D0
            // Local variables
            int i; // r22

            {
                // Range: 0x802036F8 -> 0x802037D0
                // Local variables
                class Vector4 * vertex; // r21
                int curVert; // r0
            }
        }
    }

    // References
    // -> class Renderable3DTransform g_identity;
    // -> class Vector4 vec4OneZ;
    // -> class Vector4 vec4OneY;
    // -> class Vector4 vec4OneX;
    // -> unsigned long long prototypeID;
    // -> class Module * fontModule;
}
// Range: 0x80203C60 -> 0x80203D0C
class Entity * World::FontAsset::Create(class EntityHandleBase * handle /* r29 */, class FontAsset * fontAsset /* r30 */) {
    // Local variables
    class Referrer referrer; // r1+0x8
}
