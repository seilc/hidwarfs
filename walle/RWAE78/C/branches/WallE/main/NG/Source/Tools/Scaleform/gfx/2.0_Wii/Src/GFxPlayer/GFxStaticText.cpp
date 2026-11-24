/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxStaticText.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8054E800 -> 0x805505B8
*/
// total size: 0xC
class garray : public garray_base {};
// total size: 0xC
class garray_base {
    // Members
    class GlyphEntry * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x8
class GlyphEntry {
    // Members
    unsigned int GlyphIndex; // offset 0x0, size 0x4
    float GlyphAdvance; // offset 0x4, size 0x4
};
// total size: 0x28
class GFxStaticTextRecord : public GNewOverrideBase {
    // Members
    class garray Glyphs; // offset 0x0, size 0xC
    class GFxResourcePtr pFont; // offset 0xC, size 0x8
    class GColor Color; // offset 0x14, size 0x4
    class GPoint Offset; // offset 0x18, size 0x8
    float TextHeight; // offset 0x20, size 0x4
    unsigned short FontId; // offset 0x24, size 0x2
};
// total size: 0xC
class GFxStaticTextRecordList {
    // Members
    class garray Records; // offset 0x0, size 0xC
};
// total size: 0xC
class garray_base {
    // Members
    class GFxStaticTextRecord * * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x4C
class GFxStaticTextCharacterDef : public GFxCharacterDef {
    // Members
    class GFxMovieDataDef * RootDef; // offset 0x10, size 0x4
    class GRect TextRect; // offset 0x14, size 0x10
    class GMatrix2D MatrixPriv; // offset 0x24, size 0x18
    class GFxStaticTextRecordList TextRecords; // offset 0x3C, size 0xC
    unsigned char Flags; // offset 0x48, size 0x1
};
// total size: 0x14C
class GFxStaticTextCharacter : public GFxCharacter {
    // Members
    class GFxStaticTextCharacterDef * pDef; // offset 0x64, size 0x4
    class GFxTextLineBuffer TextGlyphRecords; // offset 0x68, size 0xBC
    unsigned char Flags; // offset 0x124, size 0x1
    class GFxTextFilter Filter; // offset 0x128, size 0x24
};
// Range: 0x8054E920 -> 0x8054E9EC
void GFxStaticTextRecordList::Clear(class GFxStaticTextRecordList * this /* r27 */) {
    {
        // Range: 0x8054E934 -> 0x8054E958
        // Local variables
        unsigned long sz; // r28
        unsigned long i; // r29
    }
}
// Range: 0x8054EAA0 -> 0x8054F39C
void GFxStaticTextCharacterDef::Read(class GFxStaticTextCharacterDef * this /* r23 */, class GFxLoadProcess * p /* r24 */, enum GFxTagType tagType /* r25 */) {
    // Local variables
    int GlyphBits; // r30
    int AdvanceBits; // r29
    bool lastRecordWasStyleChange; // r28
    class GPoint offset; // r1+0x20
    class GColor color; // r1+0xC
    float textHeight; // f26
    unsigned short fontId; // r27
    class GFxResourcePtr pfont; // r1+0x18

    {
        // Range: 0x8054EBE8 -> 0x8054F32C
        // Local variables
        int FirstByte; // r26

        {
            // Range: 0x8054EBE8 -> 0x8054EBE8
            // Local variables
            bool hasXOffset; // r0
            bool hasYOffset; // r0
            bool hasColor; // r0
            bool hasFont; // r0

            {
                // Range: 0x8054EBE8 -> 0x8054EBE8
                // Local variables
                class GFxResourceHandle hres; // r1+0x10
            }
        }
    }
}
// signature: GFxStaticTextCharacterDef::PointTestLocal(const GPoint<float> &, bool, const GFxPointTestCacheProvider *) const
// Range: 0x8054F3A0 -> 0x8054F3F8
bool GFxStaticTextCharacterDef::PointTestLocal() const {
}
// signature: GFxStaticTextCharacter::AdvanceFrame(bool, float)
// Range: 0x80550260 -> 0x80550288
void GFxStaticTextCharacter::AdvanceFrame() {
}
// signature: GFxStaticTextCharacter::SetFilters(const GFxTextFilter &)
// Range: 0x80550290 -> 0x80550324
void GFxStaticTextCharacter::SetFilters() {
}
// Range: 0x80550330 -> 0x80550540
void GFxStaticTextCharacter::Display(class GFxStaticTextCharacter * this /* r30 */, class GFxDisplayContext & context /* r31 */) {
    // Local variables
    class GMatrix2D m; // r1+0x58
    class GFxTextFieldParam param; // r1+0x38
}
// Range: 0x80550540 -> 0x80550548
class GFxCharacterDef * GFxStaticTextCharacter::GetCharacterDef() const {
}
// Range: 0x80550550 -> 0x805505AC
class GRect GFxStaticTextCharacter::GetBounds(class GMatrix2D & t /* r31 */) const {
}
// Range: 0x8054F400 -> 0x8054F854
class GFxCharacter * GFxStaticTextCharacterDef::CreateCharacterInstance(class GFxStaticTextCharacterDef * this /* r27 */, class GFxASCharacter * parent /* r20 */, class GFxResourceId & id /* r19 */, class GFxMovieDefImpl * pbindingImpl /* r28 */) {
    // References
    // -> struct {} __vt__22GFxStaticTextCharacter;
}
// Range: 0x8054FFF0 -> 0x80550120
void GFx_DefineTextLoader(class GFxLoadProcess * p /* r30 */, class GFxTagInfo & tagInfo /* r31 */) {
    // References
    // -> struct {} __vt__25GFxStaticTextCharacterDef;
}
