/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxMovieDef.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804FA180 -> 0x80509038
*/
// total size: 0x8
class table {
    // Members
    unsigned long EntryCount; // offset 0x0, size 0x4
    unsigned long SizeMask; // offset 0x4, size 0x4
};
// total size: 0x5C
class GFxEditTextCharacterDef : public GFxCharacterDef {
    // Members
    class GFxMovieDataDef * RootDef; // offset 0x10, size 0x4
    class GFxResourcePtr pFont; // offset 0x14, size 0x8
    class GFxResourceId FontId; // offset 0x1C, size 0x4
    class GRect TextRect; // offset 0x20, size 0x10
    float TextHeight; // offset 0x30, size 0x4
    class GColor Color; // offset 0x34, size 0x4
    int MaxLength; // offset 0x38, size 0x4
    float LeftMargin; // offset 0x3C, size 0x4
    float RightMargin; // offset 0x40, size 0x4
    float Indent; // offset 0x44, size 0x4
    float Leading; // offset 0x48, size 0x4
    class GFxString DefaultText; // offset 0x4C, size 0x4
    class GFxString VariableName; // offset 0x50, size 0x4
    unsigned short Flags; // offset 0x54, size 0x2
    enum alignment Alignment; // offset 0x58, size 0x4
};
// total size: 0x8
class GFxResourcePtr : public GFxResourceHandle {};
enum alignment {
    ALIGN_LEFT = 0,
    ALIGN_RIGHT = 1,
    ALIGN_CENTER = 2,
    ALIGN_JUSTIFY = 3,
};
// total size: 0x2C
class GFxSpriteDef : public GFxTimelineDef {
    // Members
    class GFxMovieDataDef * pMovieDef; // offset 0x10, size 0x4
    class GFxStringHash NamedFrames; // offset 0x14, size 0x4
    int FrameCount; // offset 0x18, size 0x4
    int LoadingFrame; // offset 0x1C, size 0x4
    class garray Playlist; // offset 0x20, size 0xC
};
// total size: 0x6C
class GFxPlaceObject2 : public GASExecuteTag {
    // Members
    enum GFxTagType TagType; // offset 0x4, size 0x4
    char * Name; // offset 0x8, size 0x4
    class GFxCharPosInfo Pos; // offset 0xC, size 0x50
    enum PlaceActionType PlaceType; // offset 0x5C, size 0x4
    class garray EventHandlers; // offset 0x60, size 0xC
};
enum PlaceActionType {
    Place_Add = 0,
    Place_Move = 1,
    Place_Replace = 2,
};
// total size: 0x8
class node_ref {
    // Members
    class GFxResourceId * pfirst; // offset 0x0, size 0x4
    class GFxResourceHandle * psecond; // offset 0x4, size 0x4
};
// total size: 0xC
class ghash_node {
    // Members
    class GFxResourceId first; // offset 0x0, size 0x4
    class GFxResourceHandle second; // offset 0x4, size 0x8
};
// total size: 0x10
class ghashset_entry {
    // Members
    long Next_in_chain; // offset 0x0, size 0x4
    class ghash_node value; // offset 0x4, size 0xC
};
// total size: 0xC
class SharedState : public GFxSharedState {
    // Members
    class GFxLoadStates * pLoadStates; // offset 0x4, size 0x4
    class GFxMovieDefImpl * pDefImpl; // offset 0x8, size 0x4
};
// total size: 0x4
class GFxFontResourceCreator : public DataInterface {};
// total size: 0x8
class const_iterator {
    // Members
    class ghash_set * pHash; // offset 0x0, size 0x4
    unsigned long Index; // offset 0x4, size 0x4
};
// total size: 0x8
class node_ref {
    // Members
    class GFxString * pfirst; // offset 0x0, size 0x4
    unsigned int * psecond; // offset 0x4, size 0x4
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
    class GFxString first; // offset 0x0, size 0x4
    unsigned int second; // offset 0x4, size 0x4
};
// total size: 0x8
class iterator : public const_iterator {};
// total size: 0x8
class node_ref {
    // Members
    class GFxResourceId * pfirst; // offset 0x0, size 0x4
    class GFxString * psecond; // offset 0x4, size 0x4
};
// total size: 0x8
class ghash_node {
    // Members
    class GFxResourceId first; // offset 0x0, size 0x4
    class GFxString second; // offset 0x4, size 0x4
};
// total size: 0x8
class node_ref {
    // Members
    class GFxString * pfirst; // offset 0x0, size 0x4
    class GFxResourceHandle * psecond; // offset 0x4, size 0x4
};
// total size: 0xC
class ghash_node {
    // Members
    class GFxString first; // offset 0x0, size 0x4
    class GFxResourceHandle second; // offset 0x4, size 0x8
};
// total size: 0x4
class GFxMovieDataDefFileKeyInterface : public KeyInterface {};
// total size: 0x4
class GFxMovieDefImplKeyInterface : public KeyInterface {};
// total size: 0x8
class GFxCharacterCreateInfo {
    // Members
    class GFxCharacterDef * pCharDef; // offset 0x0, size 0x4
    class GFxMovieDefImpl * pBindDefImpl; // offset 0x4, size 0x4
};
// total size: 0x4
class GFxStringHash : public ghash {};
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
class node_ref {
    // Members
    class GFxString * pfirst; // offset 0x0, size 0x4
    bool * psecond; // offset 0x4, size 0x4
};
// total size: 0x8
class ghash_node {
    // Members
    class GFxString first; // offset 0x0, size 0x4
    bool second; // offset 0x4, size 0x1
};
// total size: 0x4
class ResourceVisitor : public GFxFileConstants {};
// total size: 0x8
class GFxInitImportActions : public GASExecuteTag {
    // Members
    unsigned int ImportIndex; // offset 0x4, size 0x4
};
static class GFxFontResourceCreator creatorInstance; // size: 0x4, address: 0x808DEC0C
static class GFxMovieDataDefFileKeyInterface GFxMovieDataDefFileKeyInterface_Instance; // size: 0x4, address: 0x808DEC10
static char fontlibKey[15]; // size: 0xF, address: 0x806E82A0
static class GFxMovieDefImplKeyInterface GFxMovieDefImplKeyInterface_Instance; // size: 0x4, address: 0x808DEC14
struct {} __vt__26GFxMovieDataDefFileKeyData; // size: 0xC, address: 0x807396F8
struct {} __vt__43GRefCountBase<26GFxMovieDataDefFileKeyData>; // size: 0xC, address: 0x80739704
struct {} __vt__Q222GFxFontResourceCreator32SharedState; // size: 0x1C, address: 0x80739710
struct {} __vt__22GFxFontResourceCreator; // size: 0x18, address: 0x80739730
struct {} __vt__20GFxInitImportActions; // size: 0x2C, address: 0x80739748
struct {} __vt__15GFxMovieDefImpl; // size: 0x78, address: 0x80739778
struct {} __vt__19GFxMovieBindProcess; // size: 0xC, address: 0x807397F0
struct {} __vt__36GRefCountBase<19GFxMovieBindProcess>; // size: 0xC, address: 0x807397FC
struct {} __vt__15GFxMovieDataDef; // size: 0x50, address: 0x80739808
struct {} __vt__19GFxMovieDataDefBase; // size: 0x48, address: 0x80739858
struct {} __vt__11GFxMovieDef; // size: 0x6C, address: 0x807398A0
struct {} __vt__14GFxTimelineDef; // size: 0x48, address: 0x807399A0
// Range: 0x804FA180 -> 0x804FA21C
void * GFxDataAllocator::OverflowAlloc(class GFxDataAllocator * this /* r30 */, unsigned long bytes /* r31 */) {
    // Local variables
    void * pmem; // r0

    {
        // Range: 0x804FA1AC -> 0x804FA1EC
        // Local variables
        class Block * pblock; // r0
    }
}
// signature: GFxDataAllocator::AllocIndividual(unsigned long)
// Range: 0x804FA220 -> 0x804FA270
void * GFxDataAllocator::AllocIndividual(class GFxDataAllocator * this /* r31 */) {
    // Local variables
    class Block * pblock; // r0
}
// Range: 0x804FA270 -> 0x804FA498
void * GFxMovieDataDef::GFxMovieDataDef(class GFxMovieDataDef * this /* r29 */, class GFxResourceKey & creationKey /* r30 */) {
    // References
    // -> struct {} __vt__15GFxMovieDataDef;
}
// Range: 0x804FAB30 -> 0x804FADF4
void * GFxMovieDataDef::GFxMovieDataDef(class GFxMovieDataDef * this /* r31 */, class SWFProcessInfo & pi /* r28 */, class GFxResourceKey & creationKey /* r29 */) {
    // References
    // -> struct {} __vt__15GFxMovieDataDef;
}
// Range: 0x804FAE00 -> 0x804FB6BC
void * GFxMovieDataDef::~GFxMovieDataDef(class GFxMovieDataDef * this /* r28 */) {
    // Local variables
    unsigned int i; // r25

    // References
    // -> struct {} __vt__15GFxMovieDataDef;
}
// signature: GFxMovieDataDef::InitEmptyMovieDef(const char *)
// Range: 0x804FB850 -> 0x804FBB5C
void GFxMovieDataDef::InitEmptyMovieDef(class GFxMovieDataDef * this /* r29 */) {
}
// signature: GFxMovieDataDef::InitImageFileMovieDef(const char *, unsigned int, GFxImageResource *, bool)
// Range: 0x804FBB60 -> 0x804FBD70
void GFxMovieDataDef::InitImageFileMovieDef(class GFxMovieDataDef * this /* r29 */, unsigned int fileLength /* r30 */, class GFxImageResource * pimageResource /* r31 */, bool bilinear /* r28 */) {
    {
        // Range: 0x804FBC20 -> 0x804FBD04
        // Local variables
        class GFxCharPosInfo pos; // r1+0x48
        class GFxPlaceObject2 * ptag; // r28
        class GASExecuteTag * * pptagArray; // r0
    }
}
// Range: 0x804FBD70 -> 0x804FC7E4
void GFxMovieDataDef::Read(class GFxMovieDataDef * this /* r28 */, class GFxLoadProcess * plp /* r29 */, class GFxMovieBindProcess * pbp /* r30 */) {
    // Local variables
    unsigned int prevFrameResourceIndex; // r23

    {
        // Range: 0x804FC058 -> 0x804FC478
        // Local variables
        void (* lf)(class GFxLoadProcess *, class GFxTagInfo &); // r12
        enum GFxTagType tagType; // r22
        class GFxTagInfo tagInfo; // r1+0x28
    }

    // References
    // -> void (* GFx_SWF_TagLoaderTable[85])(class GFxLoadProcess *, class GFxTagInfo &);
    // -> void (* GFx_GFX_TagLoaderTable[5])(class GFxLoadProcess *, class GFxTagInfo &);
}
// Range: 0x804FC8B0 -> 0x804FC914
void GFxMovieDataDef::SetMetadata(class GFxMovieDataDef * this /* r29 */, unsigned char * pdata /* r30 */, unsigned int size /* r31 */) {
}
// signature: GFxMovieDataDef::AddResource(GFxResourceId, GFxResource *)
// Range: 0x804FC920 -> 0x804FC9A8
void GFxMovieDataDef::AddResource(class GFxMovieDataDef * this /* r30 */, class GFxResourceId & rid /* r31 */) {
}
// signature: GFxMovieDataDef::AddDataResource(GFxResourceId, const GFxResourceData &)
// Range: 0x804FE4A0 -> 0x804FE6FC
class GFxResourceHandle GFxMovieDataDef::AddDataResource(class GFxMovieDataDef * this /* r28 */, class GFxResourceData & resData /* r29 */) {
}
// signature: GFxMovieDataDef::AddImportResource(GFxResourceId, GFxImportData *)
// Range: 0x804FE700 -> 0x804FE984
class GFxResourceHandle GFxMovieDataDef::AddImportResource(class GFxMovieDataDef * this /* r29 */) {
}
// signature: GFxFontResourceCreator::CreateResource(void *, GFxResourceBindData *, GFxLoadStates *) const
// Range: 0x804FE9D0 -> 0x804FEFBC
bool GFxFontResourceCreator::CreateResource(class GFxResourceBindData * pbindData /* r23 */, class GFxLoadStates * pls /* r24 */) const {
    // Local variables
    class GFxFontData * pfd; // r28
    class garray & fontDefs; // r0
    unsigned int ifontDef; // r27
    unsigned int isourceFont; // r26

    {
        // Range: 0x804FE9F0 -> 0x804FEB60
        // Local variables
        class garray & sourceFonts; // r0
        class GFxMovieDefImpl * pdefImpl; // r0

        {
            // Range: 0x804FEA00 -> 0x804FEB4C
            // Local variables
            class GFxFontData * psourceFontData; // r20
        }
    }
    {
        // Range: 0x804FEB74 -> 0x804FEF04
        // Local variables
        class GFxFontLib * pfontLib; // r3
        class MapEntry fontEntry; // r1+0x1C
        unsigned int lookupFontFlags; // r27
        char * plookupFontName; // r26
        char * pfontName; // reg65535
        class GFxFontMap * pfontMap; // r20

        {
            // Range: 0x804FEC38 -> 0x804FEEB0
            // Local variables
            class SharedState ss; // r1+0x10
            class FontResult fr; // r1+0x8
            class GFxMovieDefImpl * pdefImpl; // r25
        }
    }

    // References
    // -> struct {} __vt__Q222GFxFontResourceCreator32SharedState;
}
// Range: 0x80508B90 -> 0x80508BA8
class GFxSharedState * GFxFontResourceCreator::SharedState::GetSharedImpl() const {
}
// Range: 0x80508BB0 -> 0x80508C80
class GFxState * GFxFontResourceCreator::SharedState::GetStateAddRef(class SharedState * this /* r30 */, enum StateType state /* r31 */) const {
}
// signature: GFxMovieDataDef::AddFontDataResource(GFxResourceId, GFxFontData *)
// Range: 0x804FF000 -> 0x804FF350
class GFxResourceHandle GFxMovieDataDef::AddFontDataResource(class GFxResourceHandle * rh /* r30 */, class GFxMovieDataDef * this /* r29 */, class GFxResourceId & rid /* r27 */, class GFxFontData * pfontData /* r28 */) {
    // Local variables
    class GFxResourceData fontResourceData; // r1+0x10
    class FontDataUse fduse; // r1+0x18

    // References
    // -> static class GFxFontResourceCreator creatorInstance;
    // -> struct {} __vt__22GFxFontResourceCreator;
}
// signature: GFxMovieDataDef::GetFontData(GFxResourceId)
// Range: 0x804FF350 -> 0x804FF3A0
class GFxFontData * GFxMovieDataDef::GetFontData() {
    {
        // Range: 0x804FF354 -> 0x804FF37C
        // Local variables
        unsigned int i; // r8
    }
}
// signature: GFxMovieDataDef::GetResourceHandle(GFxResourceHandle *, GFxResourceId) const
// Range: 0x804FF3A0 -> 0x804FF504
bool GFxMovieDataDef::GetResourceHandle(class GFxResourceHandle * phandle /* r31 */) const {
}
// signature: GFxMovieDataDef::TranslateFrameString(const GFxStringHash<unsigned int> &, const char *, unsigned int *, bool)
// Range: 0x804FF620 -> 0x804FF780
bool GFxMovieDataDef::TranslateFrameString(class GFxStringHash & namedFrames /* r29 */, char * label /* r30 */, unsigned int * frameNumber /* r31 */) {
    {
        // Range: 0x804FF660 -> 0x804FF70C
        // Local variables
        unsigned int number; // r0
        char * tail; // r1+0x10
        int i; // r0
        bool digitFound; // r3

        {
            // Range: 0x804FF670 -> 0x804FF6B4
            // Local variables
            unsigned char ch; // r0
        }
    }
}
// signature: GFxMovieDataDef::AddFrameName(const char *, GFxLog *)
// Range: 0x804FF900 -> 0x804FF9C0
void GFxMovieDataDef::AddFrameName(class GFxMovieDataDef * this /* r31 */) {
    // Local variables
    class GFxString n; // r1+0x8
}
// signature: GFxMovieDataDef::SetLoadingPlaylistFrame(const GFxTimelineDef::Frame &)
// Range: 0x80500D30 -> 0x80500D54
void GFxMovieDataDef::SetLoadingPlaylistFrame() {
}
// signature: GFxMovieDataDef::SetLoadingInitActionFrame(const GFxTimelineDef::Frame &)
// Range: 0x80500D60 -> 0x80500D90
void GFxMovieDataDef::SetLoadingInitActionFrame() {
}
// Range: 0x80500D90 -> 0x80500EF4
void GFxMovieDataDef::AddImport(class GFxMovieDataDef * this /* r30 */, class GFxImportData * pimportData /* r31 */) {
}
// Range: 0x80500F00 -> 0x80500FD0
void GFxMovieDataDef::ExportResource(class GFxMovieDataDef * this /* r28 */, class GFxString & symbol /* r29 */, class GFxResourceId & rid /* r30 */, class GFxResourceHandle & hres /* r31 */) {
}
// signature: GFxMovieDataDef::GetPlaylist(int) const
// Range: 0x80503420 -> 0x80503430
class Frame & GFxMovieDataDef::GetPlaylist() const {
}
// signature: GFxMovieDataDef::GetInitActions(int) const
// Range: 0x80503430 -> 0x80503454
class Frame * GFxMovieDataDef::GetInitActions() const {
}
// signature: GFxMovieDataDefFileKeyInterface::AddRef(void *)
// Range: 0x80508CA0 -> 0x80508CB4
void GFxMovieDataDefFileKeyInterface::AddRef() {
}
// signature: GFxMovieDataDefFileKeyInterface::Release(void *)
// Range: 0x80508CC0 -> 0x80508CD8
void GFxMovieDataDefFileKeyInterface::Release() {
}
// signature: GFxMovieDataDefFileKeyInterface::GetKeyType(void *) const
// Range: 0x80508CE0 -> 0x80508CE8
enum KeyType GFxMovieDataDefFileKeyInterface::GetKeyType() const {
}
// Range: 0x80508CF0 -> 0x80508D58
unsigned long GFxMovieDataDefFileKeyInterface::GetHashCode(void * hdata /* r31 */) const {
}
// signature: GFxMovieDataDefFileKeyInterface::KeyEquals(void *, const GFxResourceKey &)
// Range: 0x80508D60 -> 0x80508E14
bool GFxMovieDataDefFileKeyInterface::KeyEquals() {
}
// signature: GFxMovieDataDefFileKeyInterface::GetFileURL(void *) const
// Range: 0x80508E20 -> 0x80508E2C
char * GFxMovieDataDefFileKeyInterface::GetFileURL() const {
}
// Range: 0x80508C80 -> 0x80508C9C
static void __sinit_\GFxMovieDef_cpp() {
    // References
    // -> static class GFxMovieDefImplKeyInterface GFxMovieDefImplKeyInterface_Instance;
    // -> static class GFxMovieDataDefFileKeyInterface GFxMovieDataDefFileKeyInterface_Instance;
    // -> struct {} __vt__27GFxMovieDefImplKeyInterface;
    // -> struct {} __vt__31GFxMovieDataDefFileKeyInterface;
}
// Range: 0x805034A0 -> 0x80503630
class GFxResourceKey GFxMovieDataDef::CreateMovieFileKey(char * pfilename /* r25 */, long long modifyTime /* r27:r26 */, class GFxFileOpener * pfileOpener /* r28 */, class GFxImageCreator * pimageCreator /* r29 */) {
    // References
    // -> static class GFxMovieDataDefFileKeyInterface GFxMovieDataDefFileKeyInterface_Instance;
    // -> struct {} __vt__26GFxMovieDataDefFileKeyData;
}
// Range: 0x80503690 -> 0x80503710
void GFxMovieDefBindStates::SetDataDef(class GFxMovieDefBindStates * this /* r30 */, class GFxMovieDataDef * pdef /* r31 */) {
}
// Range: 0x80503710 -> 0x80503940
void * GFxMovieDefImpl::GFxMovieDefImpl(class GFxMovieDefImpl * this /* r29 */, class GFxMovieDefBindStates * pstates /* r25 */, class GFxLoaderImpl * ploaderImpl /* r26 */, unsigned int loadConstantFlags /* r27 */, class GFxSharedStateImpl * pdelegateState /* r30 */, bool fullyLoaded /* r31 */) {
    // References
    // -> struct {} __vt__18GFxSharedStateImpl;
    // -> struct {} __vt__15GFxMovieDefImpl;
}
// Range: 0x80503980 -> 0x80503BB0
void * GFxMovieDefImpl::~GFxMovieDefImpl(class GFxMovieDefImpl * this /* r30 */) {
    // References
    // -> struct {} __vt__15GFxMovieDefImpl;
}
// Range: 0x80503BB0 -> 0x80503C88
void * GFxMovieBindProcess::GFxMovieBindProcess(class GFxMovieBindProcess * this /* r28 */, class GFxLoadStates * pls /* r29 */, class GFxMovieDefImpl * pdefImpl /* r30 */) {
    // References
    // -> struct {} __vt__19GFxMovieBindProcess;
}
// Range: 0x80503D00 -> 0x80504668
enum BindState GFxMovieBindProcess::BindNextFrame(class GFxMovieBindProcess * this /* r31 */) {
    // Local variables
    class GFxLoadStates * pls; // r24
    unsigned int loadFlags; // r0
    bool fontImportsSucceeded; // r0
    unsigned int resourceCount; // r21
    unsigned int ri; // r22
    class garray fonts; // r1+0x18

    {
        // Range: 0x80503DA4 -> 0x805040FC
        // Local variables
        unsigned int importLoadFlags; // r21
        class GFxMovieDefImpl * pdef; // r22
        class GFxString & sourceURL; // r0
        class GFxImportData * pimportData; // r23

        {
            // Range: 0x80503DA4 -> 0x80503DA4
            // Local variables
            bool allSucceed; // r0
        }
        {
            // Range: 0x80503DA4 -> 0x80503DA4
            // Local variables
            class LocationInfo loc; // r1+0x30
        }
        {
            // Range: 0x80503DA8 -> 0x80503DA8
            // Local variables
            class LocationInfo loc; // r1+0x24
        }
        {
            // Range: 0x80503DB4 -> 0x805040F8
            // Local variables
            class GFxImportVisitor * pimportVistor; // r3
            bool recursive; // r21
        }
    }
    {
        // Range: 0x8050415C -> 0x8050426C
        // Local variables
        class GFxResourceData & data; // r0

        {
            // Range: 0x8050415C -> 0x8050415C
            // Local variables
            class GFxResourceBindData bd; // r1+0x10
        }
    }
    {
        // Range: 0x8050428C -> 0x8050428C
        // Local variables
        class GFxResourceBindData rbd; // r1+0x8

        {
            // Range: 0x8050428C -> 0x8050428C
            // Local variables
            class GFxFontResource * pfont; // r0
        }
    }

    // References
    // -> static char fontlibKey[15];
}
// Range: 0x80504680 -> 0x80504690
void GFxMovieBindProcess::FinishBinding() {
}
// signature: GFxMovieDefImpl::ResolveImport(unsigned int, GFxMovieDefImpl *, GFxLoadStates *, bool)
// Range: 0x80504690 -> 0x80504DDC
void GFxMovieDefImpl::ResolveImport(class GFxMovieDefImpl * this /* r30 */, class GFxMovieDefImpl * pdefImpl /* r31 */, class GFxLoadStates * pls /* r21 */, bool recursive /* r20 */) {
    // Local variables
    class GFxImportData * pimport; // r24
    bool imported; // r17
    bool forceFontSubstitution; // r23
    class GFxString lowerURL; // r1+0xC
    unsigned int ifont; // r22
    unsigned int isourceFont; // r21
    class garray & fonts; // r0
    class garray & sourceFonts; // r0

    {
        // Range: 0x805046C0 -> 0x80504754
        // Local variables
        unsigned int i; // r25

        {
            // Range: 0x805046C0 -> 0x80504754
            // Local variables
            class GFxResourceBindData bindData; // r1+0x18
            class Symbol & symbol; // r26
        }
    }
    {
        // Range: 0x80504BA4 -> 0x80504D8C
        // Local variables
        class GFxFontData * pfontData; // r20

        {
            // Range: 0x80504BA4 -> 0x80504D78
            // Local variables
            class GFxFontData * psourceFontData; // r17

            {
                // Range: 0x80504BA4 -> 0x80504D78
                // Local variables
                class GFxResourceBindData sourceBindData; // r1+0x10
            }
        }
    }
}
// signature: GFxMovieDefImpl::ResolveImportThroughFontLib(unsigned int)
// Range: 0x80504ED0 -> 0x8050552C
bool GFxMovieDefImpl::ResolveImportThroughFontLib(class GFxMovieDefImpl * this /* r15 */) {
    // Local variables
    class GFxImportData * pimport; // r21
    class GFxFontLib * pfontLib; // r20
    class GFxFontMap * pfontMap; // r19
    bool allSucceeded; // r18

    {
        // Range: 0x80504F04 -> 0x805052CC
        // Local variables
        unsigned int i; // r17

        {
            // Range: 0x80504F04 -> 0x805052CC
            // Local variables
            class FontResult fr; // r1+0x18
            class MapEntry fontEntry; // r1+0x20
            unsigned int lookupFontFlags; // r16
            char * plookupFontName; // r24
            char * pfontName; // r23
            class Symbol & symbol; // r0

            {
                // Range: 0x80504F08 -> 0x80504F08
                // Local variables
                class GFxResourceBindData bindData; // r1+0x10
                class GFxMovieDefImpl * pfontDefImpl; // r16
            }
            {
                // Range: 0x8050524C -> 0x805052CC
                // Local variables
                char * pstyle; // r7
            }
        }
    }
}
// signature: GFxMovieDefImpl::SetResourceBindData(GFxResourceId, GFxResourceBindData &, const char *)
// Range: 0x80505530 -> 0x805055E8
bool GFxMovieDefImpl::SetResourceBindData(class GFxMovieDefImpl * this /* r30 */, class GFxResourceBindData & bindData /* r31 */) {
    // Local variables
    class GFxResourceHandle rh; // r1+0x10
}
// Range: 0x805055F0 -> 0x8050578C
class GFxMovieView * GFxMovieDefImpl::CreateInstance(class GFxMovieDefImpl * this /* r28 */, bool initFirstFrame /* r29 */) {
}
// signature: GFxMovieDefImplKeyInterface::AddRef(void *)
// Range: 0x80508E30 -> 0x80508E44
void GFxMovieDefImplKeyInterface::AddRef() {
}
// signature: GFxMovieDefImplKeyInterface::Release(void *)
// Range: 0x80508E50 -> 0x80508E68
void GFxMovieDefImplKeyInterface::Release() {
}
// signature: GFxMovieDefImplKeyInterface::GetKeyType(void *) const
// Range: 0x80508E70 -> 0x80508E78
enum KeyType GFxMovieDefImplKeyInterface::GetKeyType() const {
}
// signature: GFxMovieDefImplKeyInterface::GetHashCode(void *) const
// Range: 0x80508E80 -> 0x80508F40
unsigned long GFxMovieDefImplKeyInterface::GetHashCode() const {
}
// signature: GFxMovieDefImplKeyInterface::KeyEquals(void *, const GFxResourceKey &)
// Range: 0x80508F40 -> 0x80509004
bool GFxMovieDefImplKeyInterface::KeyEquals() {
}
// Range: 0x805057D0 -> 0x80505830
class GFxResourceKey GFxMovieDefImpl::CreateMovieKey(class GFxMovieDefBindStates * pbindStates /* r31 */) {
    // References
    // -> static class GFxMovieDefImplKeyInterface GFxMovieDefImplKeyInterface_Instance;
}
// Range: 0x80505830 -> 0x80505AA0
bool GFxMovieDefImpl::GetExportedResource(class GFxMovieDefImpl * this /* r27 */, class GFxResourceBindData * pdata /* r31 */, class GFxString & symbol /* r28 */) {
    // Local variables
    class GFxResourceHandle hres; // r1+0x18

    {
        // Range: 0x80505A00 -> 0x80505A58
        // Local variables
        unsigned int i; // r30
    }
}
// signature: GFxMovieDefImpl::GetNameOfExportedResource(GFxResourceId) const
// Range: 0x80505C60 -> 0x80505CA0
class GFxString * GFxMovieDefImpl::GetNameOfExportedResource() const {
}
// signature: GFxMovieDefImpl::GetCharacterCreateInfo(GFxResourceId)
// Range: 0x80505E90 -> 0x80505FF4
class GFxCharacterCreateInfo GFxMovieDefImpl::GetCharacterCreateInfo(class GFxMovieDefImpl * this /* r30 */) {
    // Local variables
    class GFxResourceHandle rh; // r1+0x20
    class GFxCharacterCreateInfo ccinfo; // r1+0x18

    {
        // Range: 0x80505E9C -> 0x80505FB8
        // Local variables
        class GFxResourceBinding * pbinding; // r30
    }
}
// Range: 0x80506000 -> 0x8050620C
void GFxMovieDefImpl::VisitImportedMovies(class GFxMovieDefImpl * this /* r26 */, class ImportVisitor * visitor /* r27 */) {
    // Local variables
    class garray & importData; // r0

    {
        // Range: 0x80506024 -> 0x805061E8
        // Local variables
        class GFxStringHash visited; // r1+0xC

        {
            // Range: 0x80506038 -> 0x805061D8
            // Local variables
            unsigned int i; // r28
        }
    }
}
// Range: 0x80507860 -> 0x80507DD8
void GFxMovieDefImpl::VisitResources(class GFxMovieDefImpl * this /* r19 */, class ResourceVisitor * pvisitor /* r20 */, unsigned int visitMask /* r21 */) {
    {
        // Range: 0x80507874 -> 0x80507D70
        {
            // Range: 0x80507914 -> 0x80507C84
            // Local variables
            bool resourceMatch; // r17

            {
                // Range: 0x8050791C -> 0x8050791C
                // Local variables
                enum ResourceUse use; // r0
            }
            {
                // Range: 0x8050791C -> 0x80507C84
                // Local variables
                char * pexportName; // r7
            }
        }
    }
    {
        // Range: 0x80507D78 -> 0x80507DB4
        // Local variables
        unsigned long n; // r22
        unsigned long i; // r17
    }
}
// signature: GFxMovieDefImpl::GetResource(const char *) const
// Range: 0x80507DE0 -> 0x80508080
class GFxResource * GFxMovieDefImpl::GetResource(class GFxMovieDefImpl * this /* r31 */) const {
    // Local variables
    class GFxString str; // r1+0xC
    class const_iterator iexport; // r1+0x50
    class GFxResource * pres; // r0
}
// signature: GFxMovieDefImpl::GetFontResource(const char *, unsigned int)
// Range: 0x805081F0 -> 0x805085CC
class GFxFontResource * GFxMovieDefImpl::GetFontResource(class GFxMovieDefImpl * this /* r18 */, char * pfontName /* r19 */) {
    // Local variables
    unsigned int i; // r23
    unsigned int j; // r22
    class GFxResource * pres; // r18

    {
        // Range: 0x80508214 -> 0x80508338
        // Local variables
        class GFxResourceBindData rbd; // r1+0x20
    }
    {
        // Range: 0x80508348 -> 0x8050852C
        // Local variables
        class GFxImportData * pimportData; // r21

        {
            // Range: 0x80508348 -> 0x805084F8
            // Local variables
            class GFxResourceHandle rh; // r1+0x18

            {
                // Range: 0x80508348 -> 0x805084F8
                {
                    // Range: 0x80508440 -> 0x805084F8
                    // Local variables
                    class GFxFontResource * pfontRes; // r20
                }
            }
        }
    }
    {
        // Range: 0x80508554 -> 0x805085B0
        // Local variables
        class GFxFontResource * pfontRes; // r0
    }
}
// Range: 0x805085D0 -> 0x8050862C
void GFxInitImportActions::Execute(class GFxInitImportActions * this /* r30 */, class GFxSprite * m /* r31 */) {
}
// signature: GFxInitImportActions::ExecuteInContext(GFxSprite *, GFxMovieDefImpl *, bool)
// Range: 0x80508630 -> 0x805086C8
void GFxInitImportActions::ExecuteInContext(class GFxSprite * m /* r30 */) {
}
