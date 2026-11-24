/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxFontGlyphPacker.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804BE720 -> 0x804C1EEC
*/
// total size: 0x160
class GFxFontGlyphPacker {
    // Members
    class GFxFontPackParams * pFontPackParams; // offset 0x0, size 0x4
    class TextureConfig PackTextureConfig; // offset 0x4, size 0x10
    class GFxResourceId * pTextureIdGen; // offset 0x14, size 0x4
    class GPtr pImageCreator; // offset 0x18, size 0x4
    class GPtr pRenderConfig; // offset 0x1C, size 0x4
    class GPtr pLog; // offset 0x20, size 0x4
    class GRectPacker Packer; // offset 0x24, size 0x78
    class GRasterizer Rasterizer; // offset 0x9C, size 0x70
    class GCompoundShape CompoundShape; // offset 0x10C, size 0x50
    class ghash GlyphGeometryHash; // offset 0x15C, size 0x4
};
// total size: 0x78
class GRectPacker {
    // Members
    unsigned int Width; // offset 0x0, size 0x4
    unsigned int Height; // offset 0x4, size 0x4
    unsigned int NumPacked; // offset 0x8, size 0x4
    unsigned int MinWidth; // offset 0xC, size 0x4
    unsigned int MinHeight; // offset 0x10, size 0x4
    class GPodBVector SrcRects; // offset 0x14, size 0x14
    class GPodBVector PackedRects; // offset 0x28, size 0x14
    class GPodBVector Packs; // offset 0x3C, size 0x14
    class GPodBVector PackTree; // offset 0x50, size 0x14
    class GPodBVector Failed; // offset 0x64, size 0x14
};
// total size: 0x14
class GPodBVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int NumBlocks; // offset 0x4, size 0x4
    unsigned int MaxBlocks; // offset 0x8, size 0x4
    class RectType * * Blocks; // offset 0xC, size 0x4
    unsigned int BlockPtrInc; // offset 0x10, size 0x4
};
// total size: 0xC
class RectType {
    // Members
    unsigned int x; // offset 0x0, size 0x4
    unsigned int y; // offset 0x4, size 0x4
    unsigned int Id; // offset 0x8, size 0x4
};
// total size: 0x14
class GPodBVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int NumBlocks; // offset 0x4, size 0x4
    unsigned int MaxBlocks; // offset 0x8, size 0x4
    class PackType * * Blocks; // offset 0xC, size 0x4
    unsigned int BlockPtrInc; // offset 0x10, size 0x4
};
// total size: 0x8
class PackType {
    // Members
    unsigned int StartRect; // offset 0x0, size 0x4
    unsigned int NumRects; // offset 0x4, size 0x4
};
// total size: 0x14
class GPodBVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int NumBlocks; // offset 0x4, size 0x4
    unsigned int MaxBlocks; // offset 0x8, size 0x4
    class NodeType * * Blocks; // offset 0xC, size 0x4
    unsigned int BlockPtrInc; // offset 0x10, size 0x4
};
// total size: 0x1C
class NodeType {
    // Members
    unsigned int x; // offset 0x0, size 0x4
    unsigned int y; // offset 0x4, size 0x4
    unsigned int Width; // offset 0x8, size 0x4
    unsigned int Height; // offset 0xC, size 0x4
    unsigned int Id; // offset 0x10, size 0x4
    unsigned int Node1; // offset 0x14, size 0x4
    unsigned int Node2; // offset 0x18, size 0x4
};
// total size: 0x4
class ghash {
    // Members
    class ghash_set Hash; // offset 0x0, size 0x4
};
// total size: 0x4
class ghash_set {
    // Members
    class table * pTable; // offset 0x0, size 0x4
};
// total size: 0x8
class table {
    // Members
    unsigned long EntryCount; // offset 0x0, size 0x4
    unsigned long SizeMask; // offset 0x4, size 0x4
};
// total size: 0xC
class garray : public garray_base {};
// total size: 0xC
class garray_base {
    // Members
    class GlyphInfo * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x28
class GlyphInfo {
    // Members
    class GFxFontResource * pFont; // offset 0x0, size 0x4
    unsigned int GlyphIndex; // offset 0x4, size 0x4
    unsigned int GlyphReuse; // offset 0x8, size 0x4
    unsigned int TextureIdx; // offset 0xC, size 0x4
    class GRect PixBounds; // offset 0x10, size 0x10
    class GPoint PixOrigin; // offset 0x20, size 0x8
};
// total size: 0xC
class GlyphGeometryKey {
    // Members
    class GFxFontResource * pFont; // offset 0x0, size 0x4
    class GFxShapeCharacterDef * pShape; // offset 0x4, size 0x4
    unsigned long Hash; // offset 0x8, size 0x4
};
// total size: 0x8
class node_ref {
    // Members
    class GlyphGeometryKey * pfirst; // offset 0x0, size 0x4
    unsigned int * psecond; // offset 0x4, size 0x4
};
// total size: 0x14
class ghashset_entry {
    // Members
    long Next_in_chain; // offset 0x0, size 0x4
    class ghash_node value; // offset 0x4, size 0x10
};
// total size: 0x10
class ghash_node {
    // Members
    class GlyphGeometryKey first; // offset 0x0, size 0xC
    unsigned int second; // offset 0xC, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxTextureGlyph * pObject; // offset 0x0, size 0x4
};
// total size: 0xC
class garray_base {
    // Members
    class GFxFontResource * * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
float GlyphBoundBox; // size: 0x4, address: 0x808DF51C
struct {} __vt__19GFxTextureGlyphData; // size: 0xC, address: 0x80737708
struct {} __vt__15GFxTextureGlyph; // size: 0xC, address: 0x80737714
struct {} __vt__16GFxImageResource; // size: 0x14, address: 0x80737720
// Range: 0x804BE7D0 -> 0x804BEC6C
void * GFxFontGlyphPacker::~GFxFontGlyphPacker(class GFxFontGlyphPacker * this /* r29 */) {
}
// Range: 0x804BEC70 -> 0x804BF394
void GFxFontGlyphPacker::generateGlyphInfo(class GFxFontGlyphPacker * this /* r23 */, class garray * glyphs /* r24 */, class GFxFontResource * f /* r25 */) {
    // Local variables
    float glyphToPix; // f31
    unsigned int i; // r26

    {
        // Range: 0x804BEF6C -> 0x804BF340
        // Local variables
        class GFxTextureGlyph & tg; // r0

        {
            // Range: 0x804BEF6C -> 0x804BF340
            {
                // Range: 0x804BEF6C -> 0x804BF340
                // Local variables
                class GRect glyphBounds; // r1+0x28

                {
                    // Range: 0x804BEF6C -> 0x804BF340
                    {
                        // Range: 0x804BEF78 -> 0x804BF340
                        // Local variables
                        class GlyphGeometryKey key; // r1+0x18

                        {
                            // Range: 0x804BEF78 -> 0x804BEF78
                            // Local variables
                            unsigned int glyphIdx; // r1+0x8
                        }
                    }
                }
            }
        }
    }

    // References
    // -> float GlyphBoundBox;
    // -> struct {} __vt__15GFxTextureGlyph;
    // -> struct {} __vt__19GFxTextureGlyphData;
}
// signature: GFxFontGlyphPacker::packGlyphRects(std::garray<GFxFontGlyphPacker::GlyphInfo> *, unsigned int, unsigned int, unsigned int)
// Range: 0x804C0DA0 -> 0x804C10C0
unsigned int GFxFontGlyphPacker::packGlyphRects(class GFxFontGlyphPacker * this /* r23 */, class garray * glyphs /* r24 */, unsigned int end /* r25 */, unsigned int texIdx /* r26 */) {
    // Local variables
    unsigned int i; // r29
    unsigned int j; // r4
    unsigned int w; // r28
    unsigned int h; // r27

    {
        // Range: 0x804C0FCC -> 0x804C1094
        // Local variables
        class PackType & pack; // r5
    }
}
// Range: 0x804C10C0 -> 0x804C1200
void GFxFontGlyphPacker::rasterizeGlyph(class GFxFontGlyphPacker * this /* r30 */, class GImage * texImage /* r31 */, class GlyphInfo * gi /* r27 */) {
    {
        // Range: 0x804C1178 -> 0x804C11E8
        // Local variables
        int x; // r27
        unsigned int h; // r28

        {
            // Range: 0x804C118C -> 0x804C11DC
            // Local variables
            unsigned int i; // r26
        }
    }

    // References
    // -> float GlyphBoundBox;
}
// Range: 0x804C1200 -> 0x804C1768
void GFxFontGlyphPacker::generateTextures(class GFxFontGlyphPacker * this /* r15 */, class garray * glyphs /* r16 */, unsigned int numTextures /* r1+0x8 */) {
    // Local variables
    unsigned int i; // r17
    unsigned int j; // r0

    {
        // Range: 0x804C123C -> 0x804C16E4
        // Local variables
        class GFxImageCreateInfo icreateInfo; // r1+0x10
        float pixToV; // f27
        float pixToU; // f28
        unsigned int texHeight; // r20
        unsigned int texWidth; // r19
        unsigned int maxHeight; // r6
        unsigned int maxWidth; // r5
    }

    // References
    // -> struct {} __vt__15GFxTextureGlyph;
    // -> struct {} __vt__16GFxImageResource;
}
// Range: 0x804C1770 -> 0x804C1AA4
void GFxFontGlyphPacker::GenerateFontBitmaps(class GFxFontGlyphPacker * this /* r29 */, class garray & fonts /* r30 */) {
    // Local variables
    unsigned int i; // r27
    unsigned int totalNumGlyphs; // r31
    class garray glyphInfo; // r1+0x8
}
// signature: GFx_GenerateFontBitmaps(GFxFontPackParams *, const std::garray<GFxFontResource *> &, GFxImageCreator *, GFxRenderConfig *, GFxLog *, GFxResourceId *)
// Range: 0x804C1AB0 -> 0x804C1C68
void GFx_GenerateFontBitmaps(class garray & fonts /* r31 */, class GFxImageCreator * pimageCreator /* r28 */, class GFxRenderConfig * prenderConfig /* r29 */, class GFxLog * plog /* r30 */) {
    {
        // Range: 0x804C1AEC -> 0x804C1C3C
        // Local variables
        class GFxFontGlyphPacker packer; // r1+0x8
    }
}
// signature: GFxFontPackParams::GetTextureGlyphMaxHeight(const GFxFontResource *)
// Range: 0x804C1C70 -> 0x804C1CB4
float GFxFontPackParams::GetTextureGlyphMaxHeight() {
}
