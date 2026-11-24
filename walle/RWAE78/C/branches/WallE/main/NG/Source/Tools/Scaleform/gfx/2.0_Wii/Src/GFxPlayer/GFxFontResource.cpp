/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxFontResource.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804C6070 -> 0x804CF060
*/
// total size: 0x8
class node_ref {
    // Members
    class GFxResourceId * pfirst; // offset 0x0, size 0x4
    class GFxResourcePtr * psecond; // offset 0x4, size 0x4
};
// total size: 0xC
class ghash_node {
    // Members
    class GFxResourceId first; // offset 0x0, size 0x4
    class GFxResourcePtr second; // offset 0x4, size 0x8
};
// total size: 0x10
class ghashset_entry {
    // Members
    long Next_in_chain; // offset 0x0, size 0x4
    class ghash_node value; // offset 0x4, size 0xC
};
// total size: 0x8
class table {
    // Members
    unsigned long EntryCount; // offset 0x0, size 0x4
    unsigned long SizeMask; // offset 0x4, size 0x4
};
// total size: 0x4
class KerningPair {
    // Members
    unsigned short Char0; // offset 0x0, size 0x2
    unsigned short Char1; // offset 0x2, size 0x2
};
// total size: 0x8
class node_ref {
    // Members
    class KerningPair * pfirst; // offset 0x0, size 0x4
    float * psecond; // offset 0x4, size 0x4
};
// total size: 0xC
class ghashset_entry {
    // Members
    long Next_in_chain; // offset 0x0, size 0x4
    class ghash_node value; // offset 0x4, size 0x8
};
// total size: 0x8
class ghash_node {
    // Members
    class KerningPair first; // offset 0x0, size 0x4
    float second; // offset 0x4, size 0x4
};
// total size: 0x8
class node_ref {
    // Members
    unsigned short * pfirst; // offset 0x0, size 0x4
    unsigned int * psecond; // offset 0x4, size 0x4
};
// total size: 0x8
class ghash_node {
    // Members
    unsigned short first; // offset 0x0, size 0x2
    unsigned int second; // offset 0x4, size 0x4
};
// total size: 0xC
class garray : public garray_base {};
// total size: 0xC
class garray_base {
    // Members
    class DisposeHandler * * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x4
class GFxSystemFontResourceKeyInterface : public KeyInterface {};
// total size: 0x1C
class GFxSystemFontResourceKey : public GRefCountBase {
    // Members
    class GPtr pFontProvider; // offset 0x10, size 0x4
    class GFxString FontName; // offset 0x14, size 0x4
    unsigned int CreateFontFlags; // offset 0x18, size 0x4
};
// total size: 0x10
class GRefCountBase : public GRefCountBaseImpl {};
// total size: 0x8
class BindHandle {
    // Members
    enum ResolveState State; // offset 0x0, size 0x4
    class @class __anon; // offset 0x4, size 0x4
    class GFxResource * pResource; // offset 0x4, size 0x4
    class ResourceSlot * pSlot; // offset 0x4, size 0x4
};
enum ResolveState {
    RS_Unbound = 0,
    RS_Available = 1,
    RS_WaitingResolve = 2,
    RS_NeedsResolve = 3,
    RS_Error = 4,
};
// total size: 0x4
class @class {
    // Members
    class GFxResource * pResource; // offset 0x0, size 0x4
    class ResourceSlot * pSlot; // offset 0x0, size 0x4
};
// total size: 0x64
class ResourceSlot : public GRefCountBase {
    // Members
    class GPtr pLib; // offset 0x10, size 0x4
    enum ResolveState State; // offset 0x14, size 0x4
    class GFxResource * pResource; // offset 0x18, size 0x4
    class GFxResourceKey Key; // offset 0x1C, size 0x8
    class GFxString ErrorMessage; // offset 0x24, size 0x4
    class GEvent ResolveComplete; // offset 0x28, size 0x3C
};
enum ResolveState {
    Resolve_InProgress = 0,
    Resolve_Success = 1,
    Resolve_Fail = 2,
};
// total size: 0x3C
class GEvent : public GWaitable, public GAcquireInterface {
    // Members
    bool State; // offset 0x18, size 0x1
    bool Temporary; // offset 0x19, size 0x1
    class GMutex StateMutex; // offset 0x1C, size 0x1C
    class GWaitCondition StateWaitCondition; // offset 0x38, size 0x4
};
// total size: 0x14
class GWaitable : public GRefCountBase {
    // Members
    class HandlerArray * pHandlers; // offset 0x10, size 0x4
};
// total size: 0x28
class HandlerArray : public GNewOverrideBase {
    // Members
    class GAtomicInt RefCount; // offset 0x0, size 0x4
    class garray Handlers; // offset 0x4, size 0xC
    class GLock HandlersLock; // offset 0x10, size 0x1
};
// total size: 0xC
class garray_base {
    // Members
    class HandlerStruct * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x8
class HandlerStruct {
    // Members
    void (* Handler)(void * pdata); // offset 0x0, size 0x4
    void * pUserData; // offset 0x4, size 0x4
};
// total size: 0x4
class GAcquireInterface {};
// total size: 0x1C
class GMutex : public GWaitable, public GAcquireInterface {
    // Members
    class GMutexImpl * pImpl; // offset 0x18, size 0x4
};
// total size: 0x4
class GWaitCondition {
    // Members
    class GWaitConditionImpl * pImpl; // offset 0x0, size 0x4
};
enum KeyType {
    Key_None = 0,
    Key_Unique = 1,
    Key_File = 2,
    Key_Gradient = 3,
};
static class GFxTextureGlyph dummyTextureGlyph; // size: 0x30, address: 0x80871AC0
static bool Logged; // size: 0x1, address: 0x808DEBE1
static class GFxSystemFontResourceKeyInterface GFxSystemFontResourceKeyInterface_Instance; // size: 0x4, address: 0x808DEBE4
// signature: GFxTextureGlyph::GetImageInfo(const GFxResourceBinding *) const
// Range: 0x804C6070 -> 0x804C614C
class GImageInfoBase * GFxTextureGlyph::GetImageInfo() const {
}
// signature: GFxTextureGlyphData::GetTextureGlyph(unsigned int) const
// Range: 0x804C6150 -> 0x804C61E8
class GFxTextureGlyph & GFxTextureGlyphData::GetTextureGlyph() const {
    // References
    // -> struct {} __vt__15GFxTextureGlyph;
    // -> static class GFxTextureGlyph dummyTextureGlyph;
}
// Range: 0x804C61F0 -> 0x804C6454
void GFxTextureGlyphData::AddTextureGlyph(class GFxTextureGlyphData * this /* r28 */, unsigned int glyphIndex /* r29 */, class GFxTextureGlyph & glyph /* r30 */) {
    // References
    // -> struct {} __vt__15GFxTextureGlyph;
}
// Range: 0x804C6460 -> 0x804C6494
float GFxTextureGlyphData::GetTextureGlyphScale() const {
    // References
    // -> float GlyphBoundBox;
}
// signature: GFxTextureGlyphData::AddTexture(GFxResourceId, GFxImageResource *)
// Range: 0x804C64A0 -> 0x804C6530
void GFxTextureGlyphData::AddTexture(class GFxTextureGlyphData * this /* r30 */, class GFxResourceId & textureId /* r31 */) {
    // Local variables
    class GFxResourcePtr pres; // r1+0x10
}
// Range: 0x804C8540 -> 0x804C8614
void GFxTextureGlyphData::AddTexture(class GFxTextureGlyphData * this /* r29 */, class GFxResourceId & textureId /* r30 */, class GFxResourceHandle & rh /* r31 */) {
    // Local variables
    class GFxResourcePtr pres; // r1+0x10
}
// Range: 0x804C8620 -> 0x804C869C
void * GFxFontData::GFxFontData(class GFxFontData * this /* r31 */) {
    // References
    // -> struct {} __vt__11GFxFontData;
}
// Range: 0x804C88C0 -> 0x804C8BCC
void * GFxFontData::~GFxFontData(class GFxFontData * this /* r30 */) {
    // References
    // -> struct {} __vt__11GFxFontData;
}
// Range: 0x804C8BD0 -> 0x804CA57C
void GFxFontData::Read(class GFxFontData * this /* r22 */, class GFxLoadProcess * p /* r23 */, enum GFxTagType tagType /* r24 */) {
    // Local variables
    bool isLoadingFontShapes; // r28

    {
        // Range: 0x804C8BF4 -> 0x804C91A4
        // Local variables
        int count; // r26
        class garray offsets; // r1+0x44
        int tableBase; // r25

        {
            // Range: 0x804C8DD8 -> 0x804C8F68
            // Local variables
            int i; // r19
        }
        {
            // Range: 0x804C90F8 -> 0x804C9170
            // Local variables
            int i; // r19
        }
    }
    {
        // Range: 0x804C9208 -> 0x804CA4F4
        // Local variables
        int offsetsCount; // r25
        int fontCodeOffset; // r21
        class garray offsets; // r1+0x38
        int glyphCount; // r26
        bool wideOffsets; // r21
        bool ansiFlag; // r0
        bool shiftJisFlag; // r15
        bool hasLayout; // r27

        {
            // Range: 0x804C9414 -> 0x804C94BC
            // Local variables
            char * pcodePage; // r6
        }
        {
            // Range: 0x804C96B0 -> 0x804C9818
            // Local variables
            int i; // r18
        }
        {
            // Range: 0x804C9880 -> 0x804C99D8
            // Local variables
            int i; // r18
        }
        {
            // Range: 0x804C9BA8 -> 0x804C9ED8
            {
                // Range: 0x804C9CD0 -> 0x804C9E30
                // Local variables
                int i; // r18

                {
                    // Range: 0x804C9CD0 -> 0x804C9E30
                    {
                        // Range: 0x804C9CD8 -> 0x804C9E30
                        // Local variables
                        class GRect bounds; // r1+0x28

                        {
                            // Range: 0x804C9CD8 -> 0x804C9CE4
                            // Local variables
                            float h; // f0
                            float w; // f0
                            float top; // f6
                            float left; // f1
                        }
                    }
                }
            }
        }
        {
            // Range: 0x804C9ED8 -> 0x804C9F68
            // Local variables
            int newPos; // r15
        }
        {
            // Range: 0x804C9F74 -> 0x804CA4F4
            // Local variables
            int kerningCount; // r0
            class GRect dummyRect; // r1+0x18
            float sfactor; // f0

            {
                // Range: 0x804CA224 -> 0x804CA268
                // Local variables
                unsigned long n; // r19
                unsigned long i; // r16
            }
            {
                // Range: 0x804CA2A4 -> 0x804CA2BC
                // Local variables
                unsigned long n; // r16
                unsigned long i; // r15
            }
            {
                // Range: 0x804CA330 -> 0x804CA4E8
                // Local variables
                int i; // r18

                {
                    // Range: 0x804CA330 -> 0x804CA4E8
                    // Local variables
                    class KerningPair k; // r1+0x8
                    float adjustment; // r1+0xC
                    unsigned short char1; // r20
                    unsigned short char0; // r19
                }
            }
        }
    }
}
// Range: 0x804CBE90 -> 0x804CC0EC
void GFxFontData::ReadFontInfo(class GFxFontData * this /* r26 */, class GFxStream * in /* r27 */, enum GFxTagType tagType /* r28 */) {
    // Local variables
    unsigned char langCode; // r29
    bool ansiFlag; // r0

    {
        // Range: 0x804CC00C -> 0x804CC0C8
        // Local variables
        char * pcodePage; // r5
    }
}
// Range: 0x804CC0F0 -> 0x804CC250
void GFxFontData::ReadCodeTable(class GFxFontData * this /* r30 */, class GFxStream * in /* r31 */) {
    {
        // Range: 0x804CC140 -> 0x804CC148
        // Local variables
        unsigned long n; // r27
        unsigned long i; // r28
    }
    {
        // Range: 0x804CC1C4 -> 0x804CC1CC
        // Local variables
        unsigned long n; // r28
        unsigned long i; // r27
    }
}
// signature: GFxFontData::GetGlyphIndex(unsigned short)
// Range: 0x804CD760 -> 0x804CD85C
int GFxFontData::GetGlyphIndex() {
    // Local variables
    unsigned int glyphIndex; // r1+0x8
}
// signature: GFxFontData::GetGlyphShape(unsigned int)
// Range: 0x804CD860 -> 0x804CD884
class GFxShapeCharacterDef * GFxFontData::GetGlyphShape() {
}
// signature: GFxFontData::GetAdvance(unsigned int) const
// Range: 0x804CD890 -> 0x804CD8EC
float GFxFontData::GetAdvance() const {
    // References
    // -> static bool Logged;
}
// signature: GFxFontData::GetGlyphWidth(unsigned int) const
// Range: 0x804CD8F0 -> 0x804CD97C
float GFxFontData::GetGlyphWidth() const {
    {
        // Range: 0x804CD910 -> 0x804CD95C
        // Local variables
        float w; // f1
    }
}
// signature: GFxFontData::GetGlyphHeight(unsigned int) const
// Range: 0x804CD980 -> 0x804CD9EC
float GFxFontData::GetGlyphHeight() const {
}
// Range: 0x804CD9F0 -> 0x804CDBFC
class GRect & GFxFontData::GetGlyphBounds(class GFxFontData * this /* r29 */, unsigned int glyphIndex /* r30 */, class GRect * prect /* r31 */) const {
    {
        // Range: 0x804CDA7C -> 0x804CDB28
        // Local variables
        float h; // f4
        float w; // f5
    }
    {
        // Range: 0x804CDB44 -> 0x804CDBDC
        {
            // Range: 0x804CDB5C -> 0x804CDBDC
            // Local variables
            class GRect bounds; // r1+0x8

            {
                // Range: 0x804CDB6C -> 0x804CDBDC
                // Local variables
                float h; // f0
                float w; // f0
                float top; // f4
                float left; // f3
            }
        }
    }
}
// signature: GFxFontData::GetKerningAdjustment(unsigned int, unsigned int) const
// Range: 0x804CDC00 -> 0x804CDC68
float GFxFontData::GetKerningAdjustment() const {
    // Local variables
    float adjustment; // r1+0xC
    class KerningPair k; // r1+0x8
}
// signature: GFxFontResource::GFxFontResource(GFxFont *, GFxResourceBinding *)
// Range: 0x804CDE80 -> 0x804CDFA4
void * GFxFontResource::GFxFontResource(class GFxFontResource * this /* r30 */, class GFxFont * pfont /* r31 */) {
    // References
    // -> struct {} __vt__15GFxFontResource;
}
// Range: 0x804CDFB0 -> 0x804CE224
void GFxFontResource::calcLowerUpperTop(class GFxFontResource * this /* r27 */, class GFxLog * log /* r28 */) {
    // Local variables
    short lowerCaseTop; // r31
    short upperCaseTop; // r30

    {
        // Range: 0x804CDFC4 -> 0x804CE184
        // Local variables
        unsigned char * p; // r29
        unsigned char lowerCaseCandidates[6]; // r1+0x8
        unsigned char upperCaseCandidates[10]; // r1+0x30
    }
}
// Range: 0x804CE230 -> 0x804CE384
void * GFxFontResource::~GFxFontResource(class GFxFontResource * this /* r28 */) {
    {
        // Range: 0x804CE274 -> 0x804CE280
        // Local variables
        unsigned int i; // r30
    }

    // References
    // -> struct {} __vt__15GFxFontResource;
}
// Range: 0x804CE390 -> 0x804CE668
void GFxFontResource::AddDisposeHandler(class GFxFontResource * this /* r29 */, class DisposeHandler * handler /* r30 */) {
}
// Range: 0x804CE670 -> 0x804CE808
void GFxFontResource::RemoveDisposeHandler(class GFxFontResource * this /* r29 */, class DisposeHandler * handler /* r30 */) {
    {
        // Range: 0x804CE698 -> 0x804CE7C4
        // Local variables
        unsigned int i; // r31

        {
            // Range: 0x804CE730 -> 0x804CE7C4
            // Local variables
            class DisposeHandler * oldHandler; // r27
        }
    }
}
// signature: GFxSystemFontResourceKeyInterface::AddRef(void *)
// Range: 0x804CEF90 -> 0x804CEFA4
void GFxSystemFontResourceKeyInterface::AddRef() {
}
// signature: GFxSystemFontResourceKeyInterface::Release(void *)
// Range: 0x804CEFB0 -> 0x804CEFC8
void GFxSystemFontResourceKeyInterface::Release() {
}
// signature: GFxSystemFontResourceKeyInterface::GetKeyType(void *) const
// Range: 0x804CEFD0 -> 0x804CEFD8
enum KeyType GFxSystemFontResourceKeyInterface::GetKeyType() const {
}
// Range: 0x804CEFE0 -> 0x804CF038
unsigned long GFxSystemFontResourceKeyInterface::GetHashCode(void * hdata /* r31 */) const {
}
// Range: 0x804CF050 -> 0x804CF060
static void __sinit_\GFxFontResource_cpp() {
    // References
    // -> static class GFxSystemFontResourceKeyInterface GFxSystemFontResourceKeyInterface_Instance;
    // -> struct {} __vt__33GFxSystemFontResourceKeyInterface;
}
// signature: GFxSystemFontResourceKeyInterface::KeyEquals(void *, const GFxResourceKey &)
// Range: 0x804CE890 -> 0x804CE940
bool GFxSystemFontResourceKeyInterface::KeyEquals(void * hdata /* r28 */) {
    // Local variables
    class GFxSystemFontResourceKey * pthisData; // r0
    class GFxSystemFontResourceKey * potherData; // r29
}
// Range: 0x804CE940 -> 0x804CEAF0
class GFxResourceKey GFxFontResource::CreateFontResourceKey(char * pname /* r27 */, unsigned int fontFlags /* r29 */, class GFxFontProvider * pfontProvider /* r30 */) {
    // References
    // -> static class GFxSystemFontResourceKeyInterface GFxSystemFontResourceKeyInterface_Instance;
    // -> struct {} __vt__24GFxSystemFontResourceKey;
}
// Range: 0x804CEB50 -> 0x804CEDF0
class GFxFontResource * GFxFontResource::CreateFontResource(char * pname /* r27 */, unsigned int fontFlags /* r28 */, class GFxFontProvider * pprovider /* r30 */, class GFxResourceWeakLib * plib /* r29 */) {
    // Local variables
    class GFxResourceKey fontKey; // r1+0x10
    class BindHandle bh; // r1+0x8
    class GFxFontResource * pfontRes; // r29

    // References
    // -> struct {} __vt__15GFxFontResource;
}
