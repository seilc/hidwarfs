/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxAction.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8045C900 -> 0x80481418
*/
// total size: 0x10
class GASValue {
    // Members
    class @class __anon; // offset 0x0, size 0x10
    class TypeDesc T; // offset 0x0, size 0x2
    class ValueType V; // offset 0x0, size 0x10
    class NumericType NV; // offset 0x0, size 0x10
};
// total size: 0x10
class @class {
    // Members
    class TypeDesc T; // offset 0x0, size 0x2
    class ValueType V; // offset 0x0, size 0x10
    class NumericType NV; // offset 0x0, size 0x10
};
// total size: 0x2
class TypeDesc {
    // Members
    unsigned char Type; // offset 0x0, size 0x1
    unsigned char PropFlags; // offset 0x1, size 0x1
};
// total size: 0x10
class ValueType : public TypeDesc {
    // Members
    class @class __anon; // offset 0x4, size 0xC
    class GASStringNode * pStringNode; // offset 0x4, size 0x4
    class GASObject * pObjectValue; // offset 0x4, size 0x4
    class GFxCharacterHandle * pCharHandle; // offset 0x4, size 0x4
    class GASValueProperty * pProperty; // offset 0x4, size 0x4
    class GASFunctionRefBase FunctionValue; // offset 0x4, size 0xC
    bool BooleanValue; // offset 0x4, size 0x1
};
// total size: 0xC
class @class {
    // Members
    class GASStringNode * pStringNode; // offset 0x0, size 0x4
    class GASObject * pObjectValue; // offset 0x0, size 0x4
    class GFxCharacterHandle * pCharHandle; // offset 0x0, size 0x4
    class GASValueProperty * pProperty; // offset 0x0, size 0x4
    class GASFunctionRefBase FunctionValue; // offset 0x0, size 0xC
    bool BooleanValue; // offset 0x0, size 0x1
};
// total size: 0x18
class GASStringNode {
    // Members
    char * pData; // offset 0x0, size 0x4
    class GASStringManager * pManager; // offset 0x4, size 0x4
    class @class __anon; // offset 0x8, size 0x4
    class GASStringNode * pLower; // offset 0x8, size 0x4
    class GASStringNode * pNextAlloc; // offset 0x8, size 0x4
    unsigned long RefCount; // offset 0xC, size 0x4
    unsigned long HashFlags; // offset 0x10, size 0x4
    unsigned int Size; // offset 0x14, size 0x4
};
// total size: 0x34
class GASStringManager {
    // Members
    class ghash_set_uncached StringSet; // offset 0x0, size 0x4
    class GASStringNode * pFreeStringNodes; // offset 0x4, size 0x4
    class StringNodePage * pStringNodePages; // offset 0x8, size 0x4
    class Entry * pFreeTextBuffers; // offset 0xC, size 0x4
    class TextPage * pTextBufferPages; // offset 0x10, size 0x4
    class GASStringNode EmptyStringNode; // offset 0x14, size 0x18
    class GPtr pLog; // offset 0x2C, size 0x4
    class GFxString FileName; // offset 0x30, size 0x4
};
// total size: 0x4
class ghash_set_uncached : public ghash_set {};
// total size: 0x4
class ghash_set {
    // Members
    class table * pTable; // offset 0x0, size 0x4
};
// total size: 0xBEC
class StringNodePage {
    // Members
    class GASStringNode Nodes[127]; // offset 0x0, size 0xBE8
    class StringNodePage * pNext; // offset 0xBE8, size 0x4
};
// total size: 0xC
class Entry {
    // Members
    class @class __anon; // offset 0x0, size 0xC
    class Entry * pNextAlloc; // offset 0x0, size 0x4
    char Buff[12]; // offset 0x0, size 0xC
};
// total size: 0xC
class @class {
    // Members
    class Entry * pNextAlloc; // offset 0x0, size 0x4
    char Buff[12]; // offset 0x0, size 0xC
};
// total size: 0x7E8
class TextPage {
    // Members
    class Entry Entries[168]; // offset 0x0, size 0x7E0
    class TextPage * pNext; // offset 0x7E0, size 0x4
    void * pMem; // offset 0x7E4, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxLog * pObject; // offset 0x0, size 0x4
};
// total size: 0x18
class GFxLog : public GFxState, public GFxLogBase {};
// total size: 0x4
class GFxLogBase : public GFxLogConstants {};
// total size: 0x1
class GFxLogConstants {};
// total size: 0x4
class @class {
    // Members
    class GASStringNode * pLower; // offset 0x0, size 0x4
    class GASStringNode * pNextAlloc; // offset 0x0, size 0x4
};
// total size: 0x30
class GASObject : public GRefCountBase, public GASObjectInterface {
    // Members
    class GASStringHash Members; // offset 0x18, size 0x4
    class GASFunctionRef ResolveHandler; // offset 0x1C, size 0xC
    class GASStringHash * pWatchpoints; // offset 0x28, size 0x4
    bool ArePropertiesSet; // offset 0x2C, size 0x1
    bool IsListenerSet; // offset 0x2D, size 0x1
};
// total size: 0x10
class GRefCountBase : public GRefCountBaseImpl {};
// total size: 0x8
class GASObjectInterface {
    // Members
    class GPtr pProto; // offset 0x4, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GASObject * pObject; // offset 0x0, size 0x4
};
// total size: 0x4
class GASStringHash : public ghash_uncached {};
// total size: 0x4
class ghash_uncached : public ghash {};
// total size: 0x4
class ghash {
    // Members
    class ghash_set Hash; // offset 0x0, size 0x4
};
// total size: 0x8
class table {
    // Members
    unsigned long EntryCount; // offset 0x0, size 0x4
    unsigned long SizeMask; // offset 0x4, size 0x4
};
// total size: 0xC
class GASFunctionRef : public GASFunctionRefBase {};
// total size: 0xC
class GASFunctionRefBase {
    // Members
    class GASFunctionObject * Function; // offset 0x0, size 0x4
    class GASLocalFrame * LocalFrame; // offset 0x4, size 0x4
    unsigned char Flags; // offset 0x8, size 0x1
};
// total size: 0x34
class GASFunctionObject : public GASObject {
    // Members
    class GASFunctionDef * Def; // offset 0x30, size 0x4
};
// total size: 0x4
class GASFunctionDef : public GNewOverrideBase {};
// total size: 0x20
class GASLocalFrame : public GRefCountBase {
    // Members
    class GASStringHash Variables; // offset 0x10, size 0x4
    class GPtr PrevFrame; // offset 0x14, size 0x4
    class GASObjectInterface * SuperThis; // offset 0x18, size 0x4
    class ghash LocallyDeclaredFuncs; // offset 0x1C, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GASLocalFrame * pObject; // offset 0x0, size 0x4
};
// total size: 0x10
class GFxCharacterHandle : public GNewOverrideBase {
    // Members
    int RefCount; // offset 0x0, size 0x4
    class GFxASCharacter * pCharacter; // offset 0x4, size 0x4
    class GASString Name; // offset 0x8, size 0x4
    class GASString NamePath; // offset 0xC, size 0x4
};
// total size: 0x98
class GFxASCharacter : public GFxCharacter, public GASObjectInterface {
    // Members
    class GPtr pDefImpl; // offset 0x6C, size 0x4
    class GPtr pNameHandle; // offset 0x70, size 0x4
    enum BlendType BlendMode; // offset 0x74, size 0x4
    bool Visible; // offset 0x78, size 0x1
    bool AcceptAnimMoves; // offset 0x79, size 0x1
    bool TrackAsMenu; // offset 0x7A, size 0x1
    bool Enabled; // offset 0x7B, size 0x1
    bool InstanceBasedName; // offset 0x7C, size 0x1
    class Bool3W TabEnabled; // offset 0x7D, size 0x1
    int TabIndex; // offset 0x80, size 0x4
    class Bool3W FocusRect; // offset 0x84, size 0x1
    class Bool3W UseHandCursor; // offset 0x85, size 0x1
    bool HitTestDisable; // offset 0x86, size 0x1
    class ghash EventHandlers; // offset 0x88, size 0x4
    void (* pDisplayCallback)(void *); // offset 0x8C, size 0x4
    void * DisplayCallbackUserPtr; // offset 0x90, size 0x4
    class GeomDataType * pGeomData; // offset 0x94, size 0x4
};
// total size: 0x64
class GFxCharacter : public GRefCountBase, public GFxLogBase {
    // Members
    class GFxResourceId Id; // offset 0x14, size 0x4
    int Depth; // offset 0x18, size 0x4
    unsigned int CreateFrame; // offset 0x1C, size 0x4
    float Ratio; // offset 0x20, size 0x4
    unsigned short ClipDepth; // offset 0x24, size 0x2
    class @class __anon; // offset 0x28, size 0x4
    class GFxASCharacter * pParent; // offset 0x28, size 0x4
    class GFxCharacter * pParentChar; // offset 0x28, size 0x4
    class Cxform ColorTransform; // offset 0x2C, size 0x20
    class GMatrix2D Matrix_1; // offset 0x4C, size 0x18
};
// total size: 0x4
class GFxResourceId {
    // Members
    unsigned long Id; // offset 0x0, size 0x4
};
// total size: 0x4
class @class {
    // Members
    class GFxASCharacter * pParent; // offset 0x0, size 0x4
    class GFxCharacter * pParentChar; // offset 0x0, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxMovieDefImpl * pObject; // offset 0x0, size 0x4
};
// total size: 0x68
class GFxMovieDefImpl : public GFxMovieDef {
    // Members
    class GPtr pSharedState; // offset 0x10, size 0x4
    class GPtr pLoaderImpl; // offset 0x14, size 0x4
    class GPtr pBindStates; // offset 0x18, size 0x4
    class GFxResourceBinding ResourceBinding; // offset 0x1C, size 0x28
    class garray ImportSourceMovies; // offset 0x44, size 0xC
    class garray ResourceImports; // offset 0x50, size 0xC
    unsigned int BindingFrame; // offset 0x5C, size 0x4
    unsigned long BytesLoaded; // offset 0x60, size 0x4
    unsigned int LoadFlags; // offset 0x64, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxSharedStateImpl * pObject; // offset 0x0, size 0x4
};
// total size: 0x38
class GFxSharedStateImpl : public GRefCountBase, public GFxSharedState, public GFxLogBase {
    // Members
    class GPtr pDelegate; // offset 0x18, size 0x4
    class ghash_set States; // offset 0x1C, size 0x4
    class GLock StateLock; // offset 0x20, size 0x1
};
// total size: 0x4
class GPtr {
    // Members
    class GFxLoaderImpl * pObject; // offset 0x0, size 0x4
};
// total size: 0x20
class GFxLoaderImpl : public GRefCountBase, public GFxSharedState, public GFxLogBase {
    // Members
    class GPtr pSharedState; // offset 0x18, size 0x4
    class GPtr pWeakResourceLib; // offset 0x1C, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxResourceWeakLib * pObject; // offset 0x0, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxMovieDefBindStates * pObject; // offset 0x0, size 0x4
};
// total size: 0x3C
class GFxMovieDefBindStates : public GRefCountBase {
    // Members
    class GPtr pDataDef; // offset 0x10, size 0x4
    class GFxString RelativePath; // offset 0x14, size 0x4
    class GPtr pFileOpener; // offset 0x18, size 0x4
    class GPtr pURLBulider; // offset 0x1C, size 0x4
    class GPtr pImageCreator; // offset 0x20, size 0x4
    class GPtr pImportVisitor; // offset 0x24, size 0x4
    class GPtr pGradientParams; // offset 0x28, size 0x4
    class GPtr pFontPackParams; // offset 0x2C, size 0x4
    class GPtr pFontProvider; // offset 0x30, size 0x4
    class GPtr pFontLib; // offset 0x34, size 0x4
    class GPtr pFontMap; // offset 0x38, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxMovieDataDef * pObject; // offset 0x0, size 0x4
};
// total size: 0xF8
class GFxMovieDataDef : public GFxMovieDataDefBase {
    // Members
    class GFxString FileURL; // offset 0x20, size 0x4
    class GFxMovieHeaderData Header; // offset 0x24, size 0x40
    unsigned int FileAttributes; // offset 0x64, size 0x4
    unsigned char * pMetadata; // offset 0x68, size 0x4
    unsigned int MetadataSize; // offset 0x6C, size 0x4
    class GFxResourceKey ResourceKey; // offset 0x70, size 0x8
    enum MovieDataType MovieType; // offset 0x78, size 0x4
    enum MovieLoadState LoadState; // offset 0x7C, size 0x4
    unsigned int LoadingFrame; // offset 0x80, size 0x4
    unsigned int TagCount; // offset 0x84, size 0x4
    class ghash_uncached Resources; // offset 0x88, size 0x4
    class garray ResourceBindData; // offset 0x8C, size 0xC
    class garray ResourcesInFrame; // offset 0x98, size 0xC
    class garray FrameBytesLoaded; // offset 0xA4, size 0xC
    unsigned int ResIndexCounter; // offset 0xB0, size 0x4
    class garray Fonts; // offset 0xB4, size 0xC
    class garray ImportData; // offset 0xC0, size 0xC
    class GFxStringHash Exports; // offset 0xCC, size 0x4
    class ghash InvExports; // offset 0xD0, size 0x4
    class garray Playlist; // offset 0xD4, size 0xC
    class garray InitActionList; // offset 0xE0, size 0xC
    int InitActionsCnt; // offset 0xEC, size 0x4
    class GFxStringHash NamedFrames; // offset 0xF0, size 0x4
    class GFxResourceId GradientIdGenerator; // offset 0xF4, size 0x4
};
// total size: 0x20
class GFxMovieDataDefBase : public GFxTimelineDef {
    // Members
    class GFxDataAllocator TagMemAllocator; // offset 0x10, size 0xC
    class GFxPathAllocator * pPathAllocator; // offset 0x1C, size 0x4
};
// total size: 0x10
class GFxTimelineDef : public GFxCharacterDef {};
// total size: 0x10
class GFxCharacterDef : public GFxResource {
    // Members
    class GFxResourceId Id; // offset 0xC, size 0x4
};
// total size: 0xC
class GFxDataAllocator {
    // Members
    unsigned char * pCurrent; // offset 0x0, size 0x4
    unsigned long BytesLeft; // offset 0x4, size 0x4
    class Block * pAllocations; // offset 0x8, size 0x4
};
// total size: 0x4
class Block {
    // Members
    class Block * pNext; // offset 0x0, size 0x4
};
// total size: 0xC
class GFxPathAllocator : public GNewOverrideBase {
    // Members
    class Page * pFirstPage; // offset 0x0, size 0x4
    class Page * pLastPage; // offset 0x4, size 0x4
    unsigned short FreeBytes; // offset 0x8, size 0x2
    unsigned short DefaultPageSize; // offset 0xA, size 0x2
};
// total size: 0x8
class Page {
    // Members
    class Page * pNext; // offset 0x0, size 0x4
    unsigned long PageSize; // offset 0x4, size 0x4
};
// total size: 0x40
class GFxMovieHeaderData {
    // Members
    unsigned long FileLength; // offset 0x0, size 0x4
    int Version; // offset 0x4, size 0x4
    class GRect FrameRect; // offset 0x8, size 0x10
    float FPS; // offset 0x18, size 0x4
    unsigned int FrameCount; // offset 0x1C, size 0x4
    unsigned int SWFFlags; // offset 0x20, size 0x4
    class GFxExporterInfoImpl ExporterInfo; // offset 0x24, size 0x1C
};
// total size: 0x1C
class GFxExporterInfoImpl {
    // Members
    class GFxExporterInfo SI; // offset 0x0, size 0x14
    class GFxString Prefix; // offset 0x14, size 0x4
    class GFxString SWFName; // offset 0x18, size 0x4
};
// total size: 0x8
class GFxResourceKey {
    // Members
    class KeyInterface * pKeyInterface; // offset 0x0, size 0x4
    void * hKeyData; // offset 0x4, size 0x4
};
// total size: 0x4
class KeyInterface {};
enum MovieDataType {
    MT_Empty = 0,
    MT_Flash = 1,
    MT_Image = 2,
};
enum MovieLoadState {
    LS_Unitialized = 0,
    LS_LoadingFrames = 1,
    LS_LoadFinished = 2,
    LS_LoadError = 3,
};
// total size: 0xC
class garray : public garray_base {};
// total size: 0xC
class garray_base {
    // Members
    class GFxResourceData * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x8
class GFxResourceData {
    // Members
    class DataInterface * pInterface; // offset 0x0, size 0x4
    void * hData; // offset 0x4, size 0x4
};
// total size: 0x4
class DataInterface {};
// total size: 0xC
class garray_base {
    // Members
    unsigned int * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0xC
class garray_base {
    // Members
    unsigned long * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0xC
class garray_base {
    // Members
    class FontDataUse * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0xC
class FontDataUse {
    // Members
    class GFxResourceId Id; // offset 0x0, size 0x4
    class GPtr pFontData; // offset 0x4, size 0x4
    unsigned int ResourceBindIndex; // offset 0x8, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxFontData * pObject; // offset 0x0, size 0x4
};
// total size: 0x48
class GFxFontData : public GFxFont {
    // Members
    char * Name; // offset 0x20, size 0x4
    class GPtr pTextureGlyphData; // offset 0x24, size 0x4
    class garray Glyphs; // offset 0x28, size 0xC
    class ghash_identity CodeTable; // offset 0x34, size 0x4
    class garray AdvanceTable; // offset 0x38, size 0xC
    class ghash KerningPairs; // offset 0x44, size 0x4
};
// total size: 0x20
class GFxFont : public GRefCountBase {
    // Members
    float Ascent; // offset 0x10, size 0x4
    float Descent; // offset 0x14, size 0x4
    float Leading; // offset 0x18, size 0x4
    unsigned int Flags; // offset 0x1C, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxTextureGlyphData * pObject; // offset 0x0, size 0x4
};
// total size: 0x34
class GFxTextureGlyphData : public GRefCountBase {
    // Members
    class TextureConfig PackTextureConfig; // offset 0x10, size 0x10
    class garray TextureGlyphs; // offset 0x20, size 0xC
    class ghash GlyphsTextures; // offset 0x2C, size 0x4
    bool FileCreation; // offset 0x30, size 0x1
};
// total size: 0x10
class TextureConfig {
    // Members
    int NominalSize; // offset 0x0, size 0x4
    int PadPixels; // offset 0x4, size 0x4
    int TextureWidth; // offset 0x8, size 0x4
    int TextureHeight; // offset 0xC, size 0x4
};
// total size: 0xC
class garray_base {
    // Members
    class GFxTextureGlyph * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x30
class GFxTextureGlyph : public GRefCountBase {
    // Members
    class GFxResourcePtr pImage; // offset 0x10, size 0x8
    class GRect UvBounds; // offset 0x18, size 0x10
    class GPoint UvOrigin; // offset 0x28, size 0x8
};
// total size: 0x8
class GFxResourcePtr : public GFxResourceHandle {};
// total size: 0x8
class GFxResourceHandle {
    // Members
    enum HandleType HType; // offset 0x0, size 0x4
    class @class __anon; // offset 0x4, size 0x4
    unsigned int BindIndex; // offset 0x4, size 0x4
    class GFxResource * pResource; // offset 0x4, size 0x4
};
enum HandleType {
    RH_Pointer = 0,
    RH_Index = 1,
};
// total size: 0x4
class @class {
    // Members
    unsigned int BindIndex; // offset 0x0, size 0x4
    class GFxResource * pResource; // offset 0x0, size 0x4
};
// total size: 0x8
class GPoint {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0xC
class garray_base {
    // Members
    class GPtr * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxShapeCharacterDef * pObject; // offset 0x0, size 0x4
};
// total size: 0x7C
class GFxShapeCharacterDef : public GFxCharacterDef {
    // Members
    class garray FillStyles; // offset 0x10, size 0xC
    class garray LineStyles; // offset 0x1C, size 0xC
    class GFxPathAllocator PathAllocator; // offset 0x28, size 0xC
    class GFxPathsInfo Paths; // offset 0x34, size 0x10
    unsigned char Flags; // offset 0x44, size 0x1
    class GRect Bound; // offset 0x48, size 0x10
    class GRect RectBound; // offset 0x58, size 0x10
    bool ValidBounds; // offset 0x68, size 0x1
    bool ValidHitResult; // offset 0x69, size 0x1
    float MaxStrokeExtent; // offset 0x6C, size 0x4
    class garray CachedMeshes; // offset 0x70, size 0xC
};
// total size: 0xC
class garray_base {
    // Members
    class GFxFillStyle * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x2C
class GFxFillStyle : public GFxBaseFillStyle {
    // Members
    unsigned char Type; // offset 0x4, size 0x1
    unsigned char FillFlags; // offset 0x5, size 0x1
    class @class __anon; // offset 0x8, size 0x4
    unsigned long RawColor; // offset 0x8, size 0x4
    class GFxGradientData * pGradientData; // offset 0x8, size 0x4
    class GFxResourcePtr pImage; // offset 0xC, size 0x8
    class GMatrix2D ImageMatrix; // offset 0x14, size 0x18
};
// total size: 0x4
class GFxBaseFillStyle : public GNewOverrideBase {};
// total size: 0x4
class @class {
    // Members
    unsigned long RawColor; // offset 0x0, size 0x4
    class GFxGradientData * pGradientData; // offset 0x0, size 0x4
};
// total size: 0x1C
class GFxGradientData : public GRefCountBase {
    // Members
    bool LinearRGB; // offset 0x10, size 0x1
    unsigned char Type; // offset 0x11, size 0x1
    unsigned short RecordCount; // offset 0x12, size 0x2
    class GFxGradientRecord * pRecords; // offset 0x14, size 0x4
    float FocalRatio; // offset 0x18, size 0x4
};
// total size: 0x8
class GFxGradientRecord {
    // Members
    unsigned char Ratio; // offset 0x0, size 0x1
    class GColor Color; // offset 0x4, size 0x4
};
// total size: 0xC
class garray_base {
    // Members
    class GFxLineStyle * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x18
class GFxLineStyle {
    // Members
    unsigned short Width; // offset 0x0, size 0x2
    class GColor Color; // offset 0x4, size 0x4
    class GFxFillStyle * pComplexFill; // offset 0x8, size 0x4
    unsigned short StyleFlags; // offset 0xC, size 0x2
    float MiterSize; // offset 0x10, size 0x4
};
// total size: 0x10
class GFxPathsInfo {
    // Members
    unsigned char * pPaths; // offset 0x0, size 0x4
    unsigned int PathsCount; // offset 0x4, size 0x4
    unsigned int ShapesCount; // offset 0x8, size 0x4
    unsigned short PathsPageOffset; // offset 0xC, size 0x2
};
// total size: 0xC
class garray_base {
    // Members
    class GFxMeshSet * * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x4
class ghash_identity : public ghash_uncached {};
// total size: 0xC
class garray_base {
    // Members
    class AdvanceEntry * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0xC
class AdvanceEntry {
    // Members
    float Advance; // offset 0x0, size 0x4
    short Left; // offset 0x4, size 0x2
    short Top; // offset 0x6, size 0x2
    unsigned short Width; // offset 0x8, size 0x2
    unsigned short Height; // offset 0xA, size 0x2
};
// total size: 0xC
class garray_base {
    // Members
    class GFxImportData * * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x14
class GFxImportData : public GNewOverrideBase {
    // Members
    class GFxString SourceUrl; // offset 0x0, size 0x4
    unsigned int Frame; // offset 0x4, size 0x4
    class garray Imports; // offset 0x8, size 0xC
};
// total size: 0xC
class garray_base {
    // Members
    class Symbol * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x8
class Symbol {
    // Members
    class GFxString SymbolName; // offset 0x0, size 0x4
    int CharacterId; // offset 0x4, size 0x4
};
// total size: 0x4
class GFxStringHash : public ghash {};
// total size: 0xC
class garray_base {
    // Members
    class Frame * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x8
class Frame {
    // Members
    class GASExecuteTag * * pTagPtrList; // offset 0x0, size 0x4
    unsigned int TagCount; // offset 0x4, size 0x4
};
// total size: 0x4
class GASExecuteTag {};
// total size: 0x4
class GPtr {
    // Members
    class GFxFileOpener * pObject; // offset 0x0, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxURLBuilder * pObject; // offset 0x0, size 0x4
};
// total size: 0x14
class GFxURLBuilder : public GFxState {};
// total size: 0x4
class GPtr {
    // Members
    class GFxImageCreator * pObject; // offset 0x0, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxImportVisitor * pObject; // offset 0x0, size 0x4
};
// total size: 0x18
class GFxImportVisitor : public GFxState, public ImportVisitor, public GFxFileConstants {};
// total size: 0x4
class ImportVisitor {};
// total size: 0x4
class GPtr {
    // Members
    class GFxGradientParams * pObject; // offset 0x0, size 0x4
};
// total size: 0x1C
class GFxGradientParams : public GFxState {
    // Members
    unsigned int RadialGradientImageSize; // offset 0x14, size 0x4
    bool AdaptiveGradients; // offset 0x18, size 0x1
};
// total size: 0x4
class GPtr {
    // Members
    class GFxFontPackParams * pObject; // offset 0x0, size 0x4
};
// total size: 0x2C
class GFxFontPackParams : public GFxState {
    // Members
    class TextureConfig PackTextureConfig; // offset 0x14, size 0x10
    bool SeparateTextures; // offset 0x24, size 0x1
    int GlyphCountLimit; // offset 0x28, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxFontProvider * pObject; // offset 0x0, size 0x4
};
// total size: 0x14
class GFxFontProvider : public GFxState {};
// total size: 0x28
class GFxResourceBinding {
    // Members
    unsigned int ResourceCount; // offset 0x0, size 0x4
    class GFxResourceBindData * pResources; // offset 0x4, size 0x4
    class GLock ResourceLock; // offset 0x8, size 0x1
    bool Frozen; // offset 0x20, size 0x1
    class GFxMovieDefImpl * pOwnerDefImpl; // offset 0x24, size 0x4
};
// total size: 0x8
class GFxResourceBindData {
    // Members
    class GPtr pResource; // offset 0x0, size 0x4
    class GFxResourceBinding * pBinding; // offset 0x4, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxResource * pObject; // offset 0x0, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxCharacterHandle * pObject; // offset 0x0, size 0x4
};
// total size: 0x1
class Bool3W {
    // Members
    unsigned char Value; // offset 0x0, size 0x1
};
// total size: 0x38
class GeomDataType : public GNewOverrideBase {
    // Members
    int X; // offset 0x0, size 0x4
    int Y; // offset 0x4, size 0x4
    double XScale; // offset 0x8, size 0x8
    double YScale; // offset 0x10, size 0x8
    double Rotation; // offset 0x18, size 0x8
    class GMatrix2D OrigMatrix; // offset 0x20, size 0x18
};
// total size: 0x4
class GASString : public GASStringNodeHolder {};
// total size: 0x4
class GASStringNodeHolder {
    // Members
    class GASStringNode * pNode; // offset 0x0, size 0x4
};
// total size: 0x28
class GASValueProperty : public GRefCountBase {
    // Members
    class GASFunctionRef GetterMethod; // offset 0x10, size 0xC
    class GASFunctionRef SetterMethod; // offset 0x1C, size 0xC
};
// total size: 0x10
class NumericType : public TypeDesc {
    // Members
    double NumberValue; // offset 0x8, size 0x8
};
// total size: 0xC0
class GASEnvironment : public GFxLogBase, public GNewOverrideBase {
    // Members
    class GASPagedStack Stack; // offset 0x4, size 0x20
    class GASValue GlobalRegister[4]; // offset 0x28, size 0x40
    class garray LocalRegister; // offset 0x68, size 0xC
    class GFxASCharacter * Target; // offset 0x74, size 0x4
    class GASStringContext StringContext; // offset 0x78, size 0x8
    bool IsInvalidTarget; // offset 0x80, size 0x1
    class GASStringHash Variables; // offset 0x84, size 0x4
    class GASPagedStack CallStack; // offset 0x88, size 0x20
    class garray RecursionGuards; // offset 0xA8, size 0xC
    class garray LocalFrames; // offset 0xB4, size 0xC
};
// total size: 0x20
class GASPagedStack : public GNewOverrideBase {
    // Members
    class GASValue * pCurrent; // offset 0x0, size 0x4
    class GASValue * pPageStart; // offset 0x4, size 0x4
    class GASValue * pPageEnd; // offset 0x8, size 0x4
    class GASValue * pPrevPageTop; // offset 0xC, size 0x4
    class garray Pages; // offset 0x10, size 0xC
    class Page * pReserved; // offset 0x1C, size 0x4
};
// total size: 0xC
class garray_base {
    // Members
    class Page * * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x208
class Page {
    // Members
    class GASValue Values[32]; // offset 0x0, size 0x200
    class Page * pNext; // offset 0x200, size 0x4
};
// total size: 0xC
class garray_base {
    // Members
    class GASValue * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x8
class GASStringContext {
    // Members
    class GASGlobalContext * pContext; // offset 0x0, size 0x4
    unsigned char SWFVersion; // offset 0x4, size 0x1
};
// total size: 0x260
class GASGlobalContext : public GRefCountBase, public GASStringBuiltinManager {
    // Members
    class ghash_uncached Prototypes; // offset 0x24C, size 0x4
    class GASStringHash RegisteredClasses; // offset 0x250, size 0x4
    class GPtr pGlobal; // offset 0x254, size 0x4
    class Bool3W GFxExtensions; // offset 0x258, size 0x1
    class GASStringHash StandardMemberMap; // offset 0x25C, size 0x4
};
// total size: 0x23C
class GASStringBuiltinManager {
    // Members
    class GASStringNodeHolder Builtins[130]; // offset 0x0, size 0x208
    class GASStringManager StringManager; // offset 0x208, size 0x34
};
// total size: 0x20
class GASPagedStack : public GNewOverrideBase {
    // Members
    class GPtr * pCurrent; // offset 0x0, size 0x4
    class GPtr * pPageStart; // offset 0x4, size 0x4
    class GPtr * pPageEnd; // offset 0x8, size 0x4
    class GPtr * pPrevPageTop; // offset 0xC, size 0x4
    class garray Pages; // offset 0x10, size 0xC
    class Page * pReserved; // offset 0x1C, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GASFunctionObject * pObject; // offset 0x0, size 0x4
};
// total size: 0x84
class Page {
    // Members
    class GPtr Values[32]; // offset 0x0, size 0x80
    class Page * pNext; // offset 0x80, size 0x4
};
// total size: 0xC
class garray_base {
    // Members
    class ghash * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x24
class GASFnCall : public GFxLogBase {
    // Members
    class GASValue * Result; // offset 0x4, size 0x4
    class GASObjectInterface * ThisPtr; // offset 0x8, size 0x4
    class GASFunctionRef ThisFunctionRef; // offset 0xC, size 0xC
    class GASEnvironment * Env; // offset 0x18, size 0x4
    int NArgs; // offset 0x1C, size 0x4
    int FirstArgBottomIndex; // offset 0x20, size 0x4
};
enum type {
    UNDEFINED = 0,
    NULLTYPE = 1,
    BOOLEAN = 2,
    NUMBER = 3,
    STRING = 4,
    OBJECT = 5,
    CHARACTER = 6,
    FUNCTION = 7,
    PROPERTY = 8,
    UNSET = 9,
};
// total size: 0x60
class GASKeyAsObject : public GASObject {
    // Members
    class garray ListenerWeakRefs; // offset 0x30, size 0xC
    class garray Listeners; // offset 0x3C, size 0xC
    int LastKeyCode; // offset 0x48, size 0x4
    unsigned char LastAsciiCode; // offset 0x4C, size 0x1
    unsigned long LastWcharCode; // offset 0x50, size 0x4
    class GWeakPtr Keyboard; // offset 0x54, size 0x8
    class GPtr pDelegateKeyListener; // offset 0x5C, size 0x4
};
// total size: 0xC
class garray_base {
    // Members
    class GWeakPtr * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x8
class GWeakPtr {
    // Members
    class GPtr pProxy; // offset 0x0, size 0x4
    class GRefCountBaseImpl * pObject; // offset 0x4, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GWeakPtrProxy * pObject; // offset 0x0, size 0x4
};
// total size: 0xC
class garray_base {
    // Members
    class GASObjectInterface * * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x8
class GWeakPtr {
    // Members
    class GPtr pProxy; // offset 0x0, size 0x4
    class GFxKeyboardState * pObject; // offset 0x4, size 0x4
};
// total size: 0x688
class GFxKeyboardState : public GRefCountBase {
    // Members
    class KeyQueue KeyQueue; // offset 0x10, size 0x64C
    unsigned char Keymap[28]; // offset 0x65C, size 0x1C
    bool Toggled[3]; // offset 0x678, size 0x3
    class garray Listeners; // offset 0x67C, size 0xC
};
// total size: 0x64C
class KeyQueue {
    // Members
    class KeyRecord Buffer[100]; // offset 0x0, size 0x640
    unsigned int PutIdx; // offset 0x640, size 0x4
    unsigned int GetIdx; // offset 0x644, size 0x4
    unsigned int Count; // offset 0x648, size 0x4
};
// total size: 0x10
class KeyRecord {
    // Members
    unsigned long wcharCode; // offset 0x0, size 0x4
    short code; // offset 0x4, size 0x2
    enum EventType event; // offset 0x8, size 0x4
    unsigned char ascii; // offset 0xC, size 0x1
    class GFxSpecialKeysState specialKeysState; // offset 0xD, size 0x1
};
// total size: 0x1
class GFxSpecialKeysState {
    // Members
    unsigned char States; // offset 0x0, size 0x1
};
// total size: 0x4
class GPtr {
    // Members
    class KeyListener * pObject; // offset 0x0, size 0x4
};
// total size: 0x14
class KeyListener : public IListener {
    // Members
    class GASKeyAsObject * pOwner; // offset 0x10, size 0x4
};
// total size: 0x10
class IListener : public GRefCountBase {};
// total size: 0x4
class GPtr {
    // Members
    class GFxKeyboardState * pObject; // offset 0x0, size 0x4
};
// total size: 0x208
class GFxMovieRoot : public GFxMovieView, public GFxActionPriority {
    // Members
    class garray MovieLevels; // offset 0x14, size 0xC
    class GFxSprite * pLevel0Movie; // offset 0x20, size 0x4
    class GPtr pLevel0Def; // offset 0x24, size 0x4
    class GPodDList RootSpriteNodes; // offset 0x28, size 0x8
    bool ViewportSet; // offset 0x30, size 0x1
    class GViewport Viewport; // offset 0x34, size 0x34
    float PixelScale; // offset 0x68, size 0x4
    float ViewScaleX; // offset 0x6C, size 0x4
    float ViewScaleY; // offset 0x70, size 0x4
    float ViewOffsetX; // offset 0x74, size 0x4
    float ViewOffsetY; // offset 0x78, size 0x4
    enum ScaleModeType ViewScaleMode; // offset 0x7C, size 0x4
    enum AlignType ViewAlignment; // offset 0x80, size 0x4
    class GRect VisibleFrameRect; // offset 0x84, size 0x10
    class GMatrix2D ViewportMatrix; // offset 0x94, size 0x18
    class GPtr pSharedState; // offset 0xAC, size 0x4
    bool CachedLogFlag; // offset 0xB0, size 0x1
    class GPtr pCachedLog; // offset 0xB4, size 0x4
    class GPtr pUserEventHandler; // offset 0xB8, size 0x4
    class GPtr pFSCommandHandler; // offset 0xBC, size 0x4
    class GPtr pExtIntfHandler; // offset 0xC0, size 0x4
    bool VerboseAction; // offset 0xC4, size 0x1
    bool SuppressActionErrors; // offset 0xC5, size 0x1
    float TimeElapsed; // offset 0xC8, size 0x4
    float TimeRemainder; // offset 0xCC, size 0x4
    float FrameTime; // offset 0xD0, size 0x4
    class GColor BackgroundColor; // offset 0xD4, size 0x4
    int MouseX; // offset 0xD8, size 0x4
    int MouseY; // offset 0xDC, size 0x4
    int MouseButtons; // offset 0xE0, size 0x4
    bool MouseMoved; // offset 0xE4, size 0x1
    int MouseWheelScroll; // offset 0xE8, size 0x4
    unsigned int MouseCursorType; // offset 0xEC, size 0x4
    void * pPrevTopMostEntityRawPtr; // offset 0xF0, size 0x4
    void * UserData; // offset 0xF4, size 0x4
    bool MouseSupportEnabled; // offset 0xF8, size 0x1
    bool NeedMouseUpdate; // offset 0xF9, size 0x1
    class GFxMouseButtonState MouseButtonState; // offset 0xFC, size 0x1C
    class GFxASMouseListener * pASMouseListener; // offset 0x118, size 0x4
    bool LevelClipsChanged; // offset 0x11C, size 0x1
    bool AdvanceCalled; // offset 0x11D, size 0x1
    class GPtr pKeyboardState; // offset 0x120, size 0x4
    class GPtr pGlobalContext; // offset 0x124, size 0x4
    class GFxPointTestCache PointTestCache; // offset 0x128, size 0x10
    class ReturnValueHolder * pRetValHolder; // offset 0x138, size 0x4
    class GASValue ExternalIntfRetVal; // offset 0x140, size 0x10
    unsigned long InstanceNameCount; // offset 0x150, size 0x4
    class DragState CurrentDragState; // offset 0x154, size 0x20
    class GASStringHash StickyVariables; // offset 0x174, size 0x4
    class ActionQueueType ActionQueue; // offset 0x178, size 0x64
    bool OnEventXmlsocketOndataCalled; // offset 0x1DC, size 0x1
    bool OnEventXmlsocketOnxmlCalled; // offset 0x1DD, size 0x1
    bool OnEventLoadProgressCalled; // offset 0x1DE, size 0x1
    class garray IntervalTimers; // offset 0x1E0, size 0xC
    int LastIntervalTimerId; // offset 0x1EC, size 0x4
    bool IsShowingRect; // offset 0x1F0, size 0x1
    class GWeakPtr LastFocused; // offset 0x1F4, size 0x8
    class Bool3W DisableFocusAutoRelease; // offset 0x1FC, size 0x1
    class Bool3W AlwaysEnableFocusArrowKeys; // offset 0x1FD, size 0x1
    class Bool3W DisableFocusRolloverEvent; // offset 0x1FE, size 0x1
    bool BackgroundSetByTag; // offset 0x1FF, size 0x1
    class GFxLoadQueueEntry * pLoadQueueHead; // offset 0x200, size 0x4
};
// total size: 0x1
class GFxActionPriority {};
// total size: 0xC
class garray_base {
    // Members
    class LevelInfo * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x8
class LevelInfo {
    // Members
    int Level; // offset 0x0, size 0x4
    class GPtr pSprite; // offset 0x4, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxSprite * pObject; // offset 0x0, size 0x4
};
// total size: 0x1A0
class GFxSprite : public GFxASCharacter {
    // Members
    class GPtr pDef; // offset 0x98, size 0x4
    class GFxMovieRoot * pRoot; // offset 0x9C, size 0x4
    class GFxDisplayList DisplayList; // offset 0xA0, size 0xC
    enum PlayState PlayStatePriv; // offset 0xAC, size 0x4
    unsigned int CurrentFrame; // offset 0xB0, size 0x4
    class garray InitActionsExecuted; // offset 0xB4, size 0xC
    class GASEnvironment ASEnvironment; // offset 0xC0, size 0xC0
    int Level; // offset 0x180, size 0x4
    class GFxSpriteRootNode * pRootNode; // offset 0x184, size 0x4
    class GPtr ASMovieClipObj; // offset 0x188, size 0x4
    class GPtr pDrawingAPI; // offset 0x18C, size 0x4
    class GPtr MaskCharacter; // offset 0x190, size 0x4
    unsigned char Flags; // offset 0x194, size 0x1
    class Bool3W FocusEnabled; // offset 0x195, size 0x1
    class Bool3W TabChildren; // offset 0x196, size 0x1
    enum MouseState MouseStatePriv; // offset 0x198, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxTimelineDef * pObject; // offset 0x0, size 0x4
};
// total size: 0xC
class GFxDisplayList : public GNewOverrideBase {
    // Members
    class garray DisplayObjectArray; // offset 0x0, size 0xC
};
// total size: 0xC
class garray_base {
    // Members
    class DisplayEntry * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x8
class DisplayEntry {
    // Members
    unsigned long Flags; // offset 0x0, size 0x4
    class GPtr pCharacter; // offset 0x4, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxCharacter * pObject; // offset 0x0, size 0x4
};
enum PlayState {
    Playing = 0,
    Stopped = 1,
};
// total size: 0xC
class garray_base {
    // Members
    bool * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x1C
class GFxSpriteRootNode : public GPodDListNode, public GNewOverrideBase {
    // Members
    class GFxSprite * pSprite; // offset 0x8, size 0x4
    unsigned int LoadingFrame; // offset 0xC, size 0x4
    unsigned long BytesLoaded; // offset 0x10, size 0x4
    bool ImportFlag; // offset 0x14, size 0x1
    class GPtr pFontManager; // offset 0x18, size 0x4
};
// total size: 0x8
class GPodDListNode {
    // Members
    class GFxSpriteRootNode * pPrev; // offset 0x0, size 0x4
    class GFxSpriteRootNode * pNext; // offset 0x4, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxFontManager * pObject; // offset 0x0, size 0x4
};
// total size: 0x2C
class GFxFontManager : public GRefCountBase {
    // Members
    class ghash_set CreatedFonts; // offset 0x10, size 0x4
    class GFxMovieDefImpl * pDefImpl; // offset 0x14, size 0x4
    class GFxSharedState * pSharedState; // offset 0x18, size 0x4
    class GPtr pEmptyFont; // offset 0x1C, size 0x4
    class MapEntry FontMapEntry; // offset 0x20, size 0xC
};
// total size: 0x4
class GPtr {
    // Members
    class GFxFontHandle * pObject; // offset 0x0, size 0x4
};
// total size: 0x1C
class GFxFontHandle : public GNewOverrideBase {
    // Members
    int RefCount; // offset 0x0, size 0x4
    class GFxFontManager * pFontManager; // offset 0x4, size 0x4
    unsigned int OverridenFontFlags; // offset 0x8, size 0x4
    class GFxString FontName; // offset 0xC, size 0x4
    class GPtr pFont; // offset 0x10, size 0x4
    class GPtr pSourceMovieDef; // offset 0x14, size 0x4
    float FontScaleFactor; // offset 0x18, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxFontResource * pObject; // offset 0x0, size 0x4
};
// total size: 0x2C
class GFxFontResource : public GFxResource {
    // Members
    class GPtr pFont; // offset 0xC, size 0x4
    class GPtr pTGData; // offset 0x10, size 0x4
    class GFxResourceBinding * pBinding; // offset 0x14, size 0x4
    class GFxResourceKey FontKey; // offset 0x18, size 0x8
    bool HandlerArrayFlag; // offset 0x20, size 0x1
    class @class __anon; // offset 0x24, size 0x4
    class DisposeHandler * pHandler; // offset 0x24, size 0x4
    class garray * pHandlerArray; // offset 0x24, size 0x4
    short LowerCaseTop; // offset 0x28, size 0x2
    short UpperCaseTop; // offset 0x2A, size 0x2
};
// total size: 0x4
class GPtr {
    // Members
    class GFxFont * pObject; // offset 0x0, size 0x4
};
// total size: 0x4
class @class {
    // Members
    class DisposeHandler * pHandler; // offset 0x0, size 0x4
    class garray * pHandlerArray; // offset 0x0, size 0x4
};
// total size: 0x4
class DisposeHandler {};
// total size: 0x4
class GPtr {
    // Members
    class GFxMovieDef * pObject; // offset 0x0, size 0x4
};
// total size: 0xC
class MapEntry {
    // Members
    class GFxString Name; // offset 0x0, size 0x4
    float ScaleFactor; // offset 0x4, size 0x4
    enum MapFontFlags Flags; // offset 0x8, size 0x4
};
enum MapFontFlags {
    MFF_Original = 4,
    MFF_Normal = 0,
    MFF_Italic = 1,
    MFF_Bold = 2,
    MFF_BoldItalic = 3,
};
// total size: 0x4
class GPtr {
    // Members
    class GASMovieClipObject * pObject; // offset 0x0, size 0x4
};
// total size: 0x3C
class GASMovieClipObject : public GASObject {
    // Members
    class GWeakPtr pSprite; // offset 0x30, size 0x8
    bool HasButtonHandlers; // offset 0x38, size 0x1
    unsigned char DynButtonHandlerCount; // offset 0x39, size 0x1
};
// total size: 0x8
class GWeakPtr {
    // Members
    class GPtr pProxy; // offset 0x0, size 0x4
    class GFxSprite * pObject; // offset 0x4, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxDrawingContext * pObject; // offset 0x0, size 0x4
};
// total size: 0x94
class GFxDrawingContext : public GRefCountBase {
    // Members
    class GPtr Shapes; // offset 0x10, size 0x4
    class GFxPathPacker PathPacker; // offset 0x14, size 0x38
    class GFxFillStyle FillStyle; // offset 0x4C, size 0x2C
    class GFxLineStyle LineStyle; // offset 0x78, size 0x18
    bool NewShapeFlag; // offset 0x90, size 0x1
    bool FreshLineStyle; // offset 0x91, size 0x1
};
// total size: 0x38
class GFxPathPacker {
    // Members
    unsigned int Fill0; // offset 0x0, size 0x4
    unsigned int Fill1; // offset 0x4, size 0x4
    unsigned int Line; // offset 0x8, size 0x4
    int Ax; // offset 0xC, size 0x4
    int Ay; // offset 0x10, size 0x4
    int Ex; // offset 0x14, size 0x4
    int Ey; // offset 0x18, size 0x4
    class garray Edges; // offset 0x1C, size 0xC
    unsigned int EdgesIndex; // offset 0x28, size 0x4
    unsigned int CurvesNum; // offset 0x2C, size 0x4
    unsigned int LinesNum; // offset 0x30, size 0x4
    unsigned char EdgesNumBits; // offset 0x34, size 0x1
    bool NewShape; // offset 0x35, size 0x1
};
// total size: 0xC
class garray_base {
    // Members
    class Edge * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x14
class Edge {
    // Members
    int Cx; // offset 0x0, size 0x4
    int Cy; // offset 0x4, size 0x4
    int Ax; // offset 0x8, size 0x4
    int Ay; // offset 0xC, size 0x4
    unsigned char Type; // offset 0x10, size 0x1
};
enum MouseState {
    UP = 0,
    DOWN = 1,
    OVER = 2,
};
// total size: 0x8
class GPodDList {
    // Members
    class GPodDListNode Root; // offset 0x0, size 0x8
};
enum ScaleModeType {
    SM_NoScale = 0,
    SM_ShowAll = 1,
    SM_ExactFit = 2,
    SM_NoBorder = 3,
};
enum AlignType {
    Align_Center = 0,
    Align_TopCenter = 1,
    Align_BottomCenter = 2,
    Align_CenterLeft = 3,
    Align_CenterRight = 4,
    Align_TopLeft = 5,
    Align_TopRight = 6,
    Align_BottomLeft = 7,
    Align_BottomRight = 8,
};
// total size: 0x4
class GPtr {
    // Members
    class GFxUserEventHandler * pObject; // offset 0x0, size 0x4
};
// total size: 0x14
class GFxUserEventHandler : public GFxState {};
// total size: 0x4
class GPtr {
    // Members
    class GFxFSCommandHandler * pObject; // offset 0x0, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxExternalInterface * pObject; // offset 0x0, size 0x4
};
// total size: 0x14
class GFxExternalInterface : public GFxState {};
// total size: 0x1C
class GFxMouseButtonState : public GNewOverrideBase {
    // Members
    class GWeakPtr ActiveEntity; // offset 0x0, size 0x8
    class GWeakPtr TopmostEntity; // offset 0x8, size 0x8
    unsigned int MouseButtonStateLast; // offset 0x10, size 0x4
    unsigned int MouseButtonStateCurrent; // offset 0x14, size 0x4
    bool MouseInsideEntityLast; // offset 0x18, size 0x1
};
// total size: 0x8
class GWeakPtr {
    // Members
    class GPtr pProxy; // offset 0x0, size 0x4
    class GFxASCharacter * pObject; // offset 0x4, size 0x4
};
// total size: 0x4
class GFxASMouseListener {};
// total size: 0x4
class GPtr {
    // Members
    class GASGlobalContext * pObject; // offset 0x0, size 0x4
};
// total size: 0x10
class GFxPointTestCache {
    // Members
    class CacheNodeBase Root; // offset 0x0, size 0x8
    class CacheNode * pUnused; // offset 0x8, size 0x4
    unsigned int Frame; // offset 0xC, size 0x4
};
// total size: 0x8
class CacheNodeBase : public GNewOverrideBase {
    // Members
    class @class __anon; // offset 0x0, size 0x4
    class CacheNodeBase * pHead; // offset 0x0, size 0x4
    class CacheNode * pNext; // offset 0x0, size 0x4
    class @class __anon; // offset 0x4, size 0x4
    class CacheNodeBase * pTail; // offset 0x4, size 0x4
    class CacheNode * pPrev; // offset 0x4, size 0x4
};
// total size: 0x4
class @class {
    // Members
    class CacheNodeBase * pHead; // offset 0x0, size 0x4
    class CacheNode * pNext; // offset 0x0, size 0x4
};
// total size: 0x24
class CacheNode : public CacheNodeBase {
    // Members
    class GFxPointTestCacheProvider * pProvider; // offset 0x8, size 0x4
    class GFxPointTestCache * pCache; // offset 0xC, size 0x4
    unsigned int Frame; // offset 0x10, size 0x4
    bool ShapesValid; // offset 0x14, size 0x1
    class garray Shapes; // offset 0x18, size 0xC
};
// total size: 0x14
class GFxPointTestCacheProvider {
    // Members
    class GFxPointTestCache * pHitTestCache; // offset 0x0, size 0x4
    class CacheNode * pHitTestNode; // offset 0x4, size 0x4
    class GPoint LastHitTest; // offset 0x8, size 0x8
    bool LastHitTestResult; // offset 0x10, size 0x1
};
// total size: 0xC
class garray_base {
    // Members
    class GCompoundShape * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x50
class GCompoundShape {
    // Members
    float CurveTolerance; // offset 0x0, size 0x4
    float ToleranceSquare; // offset 0x4, size 0x4
    class GPodBVector Vertices; // offset 0x8, size 0x14
    class GPodBVector Paths; // offset 0x1C, size 0x14
    class SPath * CurrPath; // offset 0x30, size 0x4
    int MinStyle; // offset 0x34, size 0x4
    int MaxStyle; // offset 0x38, size 0x4
    float MinX; // offset 0x3C, size 0x4
    float MinY; // offset 0x40, size 0x4
    float MaxX; // offset 0x44, size 0x4
    float MaxY; // offset 0x48, size 0x4
    bool NonZeroFill; // offset 0x4C, size 0x1
};
// total size: 0x14
class GPodBVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int NumBlocks; // offset 0x4, size 0x4
    unsigned int MaxBlocks; // offset 0x8, size 0x4
    class GPointType * * Blocks; // offset 0xC, size 0x4
    unsigned int BlockPtrInc; // offset 0x10, size 0x4
};
// total size: 0x8
class GPointType {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x14
class GPodBVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int NumBlocks; // offset 0x4, size 0x4
    unsigned int MaxBlocks; // offset 0x8, size 0x4
    class SPath * * Blocks; // offset 0xC, size 0x4
    unsigned int BlockPtrInc; // offset 0x10, size 0x4
};
// total size: 0x18
class SPath {
    // Members
    class GCompoundShape * Shape; // offset 0x0, size 0x4
    unsigned int NumVertices; // offset 0x4, size 0x4
    unsigned int StartVertex; // offset 0x8, size 0x4
    int LStyle; // offset 0xC, size 0x4
    int RStyle; // offset 0x10, size 0x4
    int LineStyle; // offset 0x14, size 0x4
};
// total size: 0x4
class @class {
    // Members
    class CacheNodeBase * pTail; // offset 0x0, size 0x4
    class CacheNode * pPrev; // offset 0x0, size 0x4
};
// total size: 0x1C
class ReturnValueHolder : public GNewOverrideBase {
    // Members
    char * CharBuffer; // offset 0x0, size 0x4
    unsigned int CharBufferSize; // offset 0x4, size 0x4
    class garray_cc StringArray; // offset 0x8, size 0x10
    unsigned int StringArrayPos; // offset 0x18, size 0x4
};
// total size: 0x10
class garray_cc : public garray_base {
    // Members
    class GASString default_value; // offset 0xC, size 0x4
};
// total size: 0xC
class garray_base {
    // Members
    class GASString * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x20
class DragState {
    // Members
    class GFxASCharacter * pCharacter; // offset 0x0, size 0x4
    bool LockCenter; // offset 0x4, size 0x1
    bool Bound; // offset 0x5, size 0x1
    class GPoint BoundLT; // offset 0x8, size 0x8
    class GPoint BoundRB; // offset 0x10, size 0x8
    class GPoint CenterDelta; // offset 0x18, size 0x8
};
// total size: 0x64
class ActionQueueType {
    // Members
    class ActionQueueEntry Entries[7]; // offset 0x0, size 0x54
    int ModId; // offset 0x54, size 0x4
    class ActionEntry * pFreeEntry; // offset 0x58, size 0x4
    unsigned int CurrentSessionId; // offset 0x5C, size 0x4
    unsigned int FreeEntriesCount; // offset 0x60, size 0x4
};
// total size: 0xC
class ActionQueueEntry {
    // Members
    class ActionEntry * pActionRoot; // offset 0x0, size 0x4
    class ActionEntry * pInsertEntry; // offset 0x4, size 0x4
    class ActionEntry * pLastEntry; // offset 0x8, size 0x4
};
// total size: 0x3C
class ActionEntry : public GNewOverrideBase {
    // Members
    class ActionEntry * pNextEntry; // offset 0x0, size 0x4
    enum EntryType Type; // offset 0x4, size 0x4
    class GPtr pCharacter; // offset 0x8, size 0x4
    class GPtr pActionBuffer; // offset 0xC, size 0x4
    class GFxEventId EventId; // offset 0x10, size 0xC
    class GASFunctionRef Function; // offset 0x1C, size 0xC
    void (* CFunction)(class GASFnCall & fn); // offset 0x28, size 0x4
    class garray FunctionParams; // offset 0x2C, size 0xC
    unsigned int SessionId; // offset 0x38, size 0x4
};
enum EntryType {
    Entry_None = 0,
    Entry_Buffer = 1,
    Entry_Event = 2,
    Entry_Function = 3,
    Entry_CFunction = 4,
};
// total size: 0x4
class GPtr {
    // Members
    class GASActionBuffer * pObject; // offset 0x0, size 0x4
};
// total size: 0x28
class GASActionBuffer : public GRefCountBase {
    // Members
    class GPtr pBufferData; // offset 0x10, size 0x4
    class garray_cc Dictionary; // offset 0x14, size 0x10
    int DeclDictProcessedAt; // offset 0x24, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GASActionBufferData * pObject; // offset 0x0, size 0x4
};
// total size: 0x1C
class GASActionBufferData : public GRefCountBase {
    // Members
    class garray Buffer; // offset 0x10, size 0xC
};
// total size: 0xC
class garray_base {
    // Members
    unsigned char * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0xC
class GFxEventId {
    // Members
    unsigned long WcharCode; // offset 0x0, size 0x4
    short KeyCode; // offset 0x4, size 0x2
    unsigned char Id; // offset 0x6, size 0x1
    unsigned char AsciiCode; // offset 0x7, size 0x1
    class GFxSpecialKeysState SpecialKeysState; // offset 0x8, size 0x1
};
// total size: 0xC
class garray_base {
    // Members
    class GASIntervalTimer * * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x40
class GASIntervalTimer : public GNewOverrideBase {
    // Members
    class GASFunctionRef Function; // offset 0x0, size 0xC
    class GWeakPtr Object; // offset 0xC, size 0x8
    class GWeakPtr Character; // offset 0x14, size 0x8
    class GASString MethodName; // offset 0x1C, size 0x4
    class garray Params; // offset 0x20, size 0xC
    int Interval; // offset 0x2C, size 0x4
    float InvokeTime; // offset 0x30, size 0x4
    int Id; // offset 0x34, size 0x4
    class GPtr LevelHandle; // offset 0x38, size 0x4
    bool Active; // offset 0x3C, size 0x1
    bool Timeout; // offset 0x3D, size 0x1
};
// total size: 0x8
class GWeakPtr {
    // Members
    class GPtr pProxy; // offset 0x0, size 0x4
    class GASObject * pObject; // offset 0x4, size 0x4
};
// total size: 0x38
class GFxLoadQueueEntry : public GNewOverrideBase {
    // Members
    class GFxLoadQueueEntry * pNext; // offset 0x0, size 0x4
    enum LoadType Type; // offset 0x4, size 0x4
    enum LoadMethod Method; // offset 0x8, size 0x4
    class GFxString URL; // offset 0xC, size 0x4
    int Level; // offset 0x10, size 0x4
    class GPtr pCharacter; // offset 0x14, size 0x4
    class GASValue MovieClipLoaderHolder; // offset 0x18, size 0x10
    class GASValue LoadVarsHolder; // offset 0x28, size 0x10
};
enum LoadType {
    LT_LoadMovie = 0,
    LT_UnloadMovie = 1,
    LT_LoadLevel = 2,
    LT_UnloadLevel = 3,
};
enum LoadMethod {
    LM_None = 0,
    LM_Get = 1,
    LM_Post = 2,
};
enum ObjectType {
    Object_Unknown = 0,
    Object_BaseCharacter = 1,
    Object_Sprite = 2,
    Object_ASCharacter_Begin = 2,
    Object_Button = 3,
    Object_TextField = 4,
    Object_ASCharacter_End = 4,
    Object_ASObject = 5,
    Object_ASObject_Begin = 5,
    Object_Array = 6,
    Object_String = 7,
    Object_Number = 8,
    Object_Boolean = 9,
    Object_MovieClipObject = 10,
    Object_ButtonASObject = 11,
    Object_TextFieldASObject = 12,
    Object_Matrix = 13,
    Object_Point = 14,
    Object_Rectangle = 15,
    Object_ColorTransform = 16,
    Object_Capabilities = 17,
    Object_Transform = 18,
    Object_Color = 19,
    Object_Key = 20,
    Object_Function = 21,
    Object_Stage = 22,
    Object_MovieClipLoader = 23,
    Object_BitmapData = 24,
    Object_LoadVars = 25,
    Object_TextFormat = 26,
    Object_ASObject_End = 26,
};
// total size: 0x4
class MemberVisitor {};
// total size: 0x10
class MemberVisitor : public MemberVisitor {
    // Members
    class GASObjectInterface * obj; // offset 0x4, size 0x4
    class GASStringContext * pSC; // offset 0x8, size 0x4
    unsigned char SetTrue; // offset 0xC, size 0x1
    unsigned char SetFalse; // offset 0xD, size 0x1
};
// total size: 0x10
class GASMember {
    // Members
    class GASValue Value; // offset 0x0, size 0x10
};
// total size: 0x4
class GPtr {
    // Members
    class GASArrayObject * pObject; // offset 0x0, size 0x4
};
// total size: 0x48
class GASArrayObject : public GASObject {
    // Members
    class GFxLog * LogPtr; // offset 0x30, size 0x4
    class garray Elements; // offset 0x34, size 0xC
    class GFxString StringValue; // offset 0x40, size 0x4
    int RecursionCount; // offset 0x44, size 0x4
};
// total size: 0xC
class garray_base {
    // Members
    class GASValue * * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0xC
class MemberVisitor : public MemberVisitor {
    // Members
    class GPtr obj; // offset 0x4, size 0x4
    class GASStringContext * psc; // offset 0x8, size 0x4
};
// total size: 0x8
class node_ref {
    // Members
    enum GASBuiltinType * pfirst; // offset 0x0, size 0x4
    class GPtr * psecond; // offset 0x4, size 0x4
};
enum GASBuiltinType {
    GASBuiltin_empty_ = 0,
    GASBuiltin_Object = 1,
    GASBuiltin_Array = 2,
    GASBuiltin_String = 3,
    GASBuiltin_Number = 4,
    GASBuiltin_Boolean = 5,
    GASBuiltin_MovieClip = 6,
    GASBuiltin_Function = 7,
    GASBuiltin_Sound = 8,
    GASBuiltin_Button = 9,
    GASBuiltin_TextField = 10,
    GASBuiltin_Color = 11,
    GASBuiltin_Transform = 12,
    GASBuiltin_Matrix = 13,
    GASBuiltin_Point = 14,
    GASBuiltin_Rectangle = 15,
    GASBuiltin_ColorTransform = 16,
    GASBuiltin_Capabilities = 17,
    GASBuiltin_Stage = 18,
    GASBuiltin_AsBroadcaster = 19,
    GASBuiltin_Date = 20,
    GASBuiltin_Selection = 21,
    GASBuiltin_XML = 22,
    GASBuiltin_XMLSoket = 23,
    GASBuiltin_Math = 24,
    GASBuiltin_Key = 25,
    GASBuiltin_Mouse = 26,
    GASBuiltin_ExternalInterface = 27,
    GASBuiltin_MovieClipLoader = 28,
    GASBuiltin_BitmapData = 29,
    GASBuiltin_LoadVars = 30,
    GASBuiltin_TextFormat = 31,
    GASBuiltin_unknown_ = 32,
    GASBuiltin_badtype_ = 33,
    GASBuiltin_undefined_ = 34,
    GASBuiltin_dot_ = 35,
    GASBuiltin_dotdot_ = 36,
    GASBuiltin_undefined = 37,
    GASBuiltin_null = 38,
    GASBuiltin_true = 39,
    GASBuiltin_false = 40,
    GASBuiltin_string = 41,
    GASBuiltin_number = 42,
    GASBuiltin_boolean = 43,
    GASBuiltin_movieclip = 44,
    GASBuiltin_object = 45,
    GASBuiltin_function = 46,
    GASBuiltin_this = 47,
    GASBuiltin_super = 48,
    GASBuiltin__global = 49,
    GASBuiltin__root = 50,
    GASBuiltin__parent = 51,
    GASBuiltin__level0 = 52,
    GASBuiltin__level0dot_ = 53,
    GASBuiltin_arguments = 54,
    GASBuiltin_callee = 55,
    GASBuiltin_caller = 56,
    GASBuiltin_gfxExtensions = 57,
    GASBuiltin_NaN = 58,
    GASBuiltin_Infinity = 59,
    GASBuiltin_minusInfinity_ = 60,
    GASBuiltin_prototype = 61,
    GASBuiltin___proto__ = 62,
    GASBuiltin_constructor = 63,
    GASBuiltin___constructor__ = 64,
    GASBuiltin__listeners = 65,
    GASBuiltin___resolve = 66,
    GASBuiltin_typeFunction_ = 67,
    GASBuiltin_typeObject_ = 68,
    GASBuiltin_objectObject_ = 69,
    GASBuiltin_toString = 70,
    GASBuiltin_valueOf = 71,
    GASBuiltin_onSetFocus = 72,
    GASBuiltin_onKillFocus = 73,
    GASBuiltin_INVALID = 74,
    GASBuiltin_onPress = 75,
    GASBuiltin_onRelease = 76,
    GASBuiltin_onReleaseOutside = 77,
    GASBuiltin_onRollOver = 78,
    GASBuiltin_onRollOut = 79,
    GASBuiltin_onDragOver = 80,
    GASBuiltin_onDragOut = 81,
    GASBuiltin_akeyPressa_ = 82,
    GASBuiltin_ainitializea_ = 83,
    GASBuiltin_onLoad = 84,
    GASBuiltin_onUnload = 85,
    GASBuiltin_onEnterFrame = 86,
    GASBuiltin_onMouseDown = 87,
    GASBuiltin_onMouseUp = 88,
    GASBuiltin_onMouseMove = 89,
    GASBuiltin_onMouseWheel = 90,
    GASBuiltin_onKeyDown = 91,
    GASBuiltin_onKeyUp = 92,
    GASBuiltin_onData = 93,
    GASBuiltin_aconstructa_ = 94,
    GASBuiltin_onLoadStart = 95,
    GASBuiltin_onLoadError = 96,
    GASBuiltin_onLoadProgress = 97,
    GASBuiltin_onLoadInit = 98,
    GASBuiltin_onSockClose = 99,
    GASBuiltin_onSockConnect = 100,
    GASBuiltin_onSockData = 101,
    GASBuiltin_onSockXML = 102,
    GASBuiltin_onXMLLoad = 103,
    GASBuiltin_onXMLData = 104,
    GASBuiltin_width = 105,
    GASBuiltin_height = 106,
    GASBuiltin_useHandCursor = 107,
    GASBuiltin_x = 108,
    GASBuiltin_y = 109,
    GASBuiltin_xMin = 110,
    GASBuiltin_xMax = 111,
    GASBuiltin_yMin = 112,
    GASBuiltin_yMax = 113,
    GASBuiltin_setCursorType = 114,
    GASBuiltin_LEFT = 115,
    GASBuiltin_RIGHT = 116,
    GASBuiltin_MIDDLE = 117,
    GASBuiltin_ARROW = 118,
    GASBuiltin_HAND = 119,
    GASBuiltin_IBEAM = 120,
    GASBuiltin_0 = 121,
    GASBuiltin_1 = 122,
    GASBuiltin_2 = 123,
    GASBuiltin_3 = 124,
    GASBuiltin_4 = 125,
    GASBuiltin_5 = 126,
    GASBuiltin_6 = 127,
    GASBuiltin_7 = 128,
    GASBuiltin_length = 129,
    GASBuiltinConst_Count_ = 130,
    GASBuiltinConst_DigitMax_ = 7,
};
// total size: 0x8
class ghash_node {
    // Members
    enum GASBuiltinType first; // offset 0x0, size 0x4
    class GPtr second; // offset 0x4, size 0x4
};
// total size: 0xC
class ghashset_entry {
    // Members
    long Next_in_chain; // offset 0x0, size 0x4
    class ghash_node value; // offset 0x4, size 0x8
};
// total size: 0x8
class node_ref {
    // Members
    class GASString * pfirst; // offset 0x0, size 0x4
    class GASFunctionRef * psecond; // offset 0x4, size 0x4
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
    class GASString first; // offset 0x0, size 0x4
    class GASFunctionRef second; // offset 0x4, size 0xC
};
// total size: 0x8
class iterator : public const_iterator {};
// total size: 0x8
class const_iterator {
    // Members
    class ghash_set * pHash; // offset 0x0, size 0x4
    unsigned long Index; // offset 0x4, size 0x4
};
// total size: 0x4
class NoCaseKey {
    // Members
    class GASString * pStr; // offset 0x0, size 0x4
};
// total size: 0x2CC
class GFxLoadProcess : public GRefCountBase, public GFxLogBase {
    // Members
    class GPtr pStates; // offset 0x14, size 0x4
    unsigned int ParseFlags; // offset 0x18, size 0x4
    class SWFProcessInfo ProcessInfo; // offset 0x1C, size 0x278
    class GFxMovieDataDef * pDataDef; // offset 0x294, size 0x4
    class GJPEGInput * pJpegIn; // offset 0x298, size 0x4
    unsigned int LoadFlags; // offset 0x29C, size 0x4
    enum LoadStateType LoadState; // offset 0x2A0, size 0x4
    class GFxTimelineDef * pTimelineDef; // offset 0x2A4, size 0x4
    class garray FrameTags[2]; // offset 0x2A8, size 0x18
    class garray InitActionTags; // offset 0x2C0, size 0xC
};
// total size: 0x4
class GPtr {
    // Members
    class GFxLoadStates * pObject; // offset 0x0, size 0x4
};
// total size: 0x40
class GFxLoadStates : public GRefCountBase {
    // Members
    class GPtr pBindStates; // offset 0x10, size 0x4
    class GPtr pLog; // offset 0x14, size 0x4
    class GPtr pParseControl; // offset 0x18, size 0x4
    class GPtr pProgressHandler; // offset 0x1C, size 0x4
    class GPtr pTaskManager; // offset 0x20, size 0x4
    class GPtr pFontCacheManager; // offset 0x24, size 0x4
    class GPtr pRenderConfig; // offset 0x28, size 0x4
    class GPtr pWeakResourceLib; // offset 0x2C, size 0x4
    class GPtr pLoaderImpl; // offset 0x30, size 0x4
    class garray SubstituteFontMovieDefs; // offset 0x34, size 0xC
};
// total size: 0x4
class GPtr {
    // Members
    class GFxParseControl * pObject; // offset 0x0, size 0x4
};
// total size: 0x18
class GFxParseControl : public GFxState {
    // Members
    unsigned int ParseFlags; // offset 0x14, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxProgressHandler * pObject; // offset 0x0, size 0x4
};
// total size: 0x14
class GFxProgressHandler : public GFxState {};
// total size: 0x4
class GPtr {
    // Members
    class GFxTaskManager * pObject; // offset 0x0, size 0x4
};
// total size: 0x14
class GFxTaskManager : public GFxState {};
// total size: 0x278
class SWFProcessInfo {
    // Members
    class GFxStream Stream; // offset 0x0, size 0x230
    unsigned long FileStartPos; // offset 0x230, size 0x4
    unsigned long FileEndPos; // offset 0x234, size 0x4
    class GFxMovieHeaderData Header; // offset 0x238, size 0x40
};
// total size: 0x230
class GFxStream : public GFxLogBase {
    // Members
    class GFxLog * pLog; // offset 0x4, size 0x4
    class GFxParseControl * pParseControl; // offset 0x8, size 0x4
    unsigned int ParseFlags; // offset 0xC, size 0x4
    class GPtr pInput; // offset 0x10, size 0x4
    unsigned char CurrentByte; // offset 0x14, size 0x1
    unsigned char UnusedBits; // offset 0x15, size 0x1
    int TagStack[2]; // offset 0x18, size 0x8
    unsigned int TagStackEntryCount; // offset 0x20, size 0x4
    unsigned int Pos; // offset 0x24, size 0x4
    unsigned int DataSize; // offset 0x28, size 0x4
    unsigned int FilePos; // offset 0x2C, size 0x4
    unsigned char Buffer[512]; // offset 0x30, size 0x200
};
// total size: 0x4
class GPtr {
    // Members
    class GFile * pObject; // offset 0x0, size 0x4
};
enum LoadStateType {
    LS_LoadingRoot = 0,
    LS_LoadingSprite = 1,
    LS_LoadState_Count = 2,
};
// total size: 0xC
class garray_base {
    // Members
    class GASExecuteTag * * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x10
class GFxTagInfo {
    // Members
    enum GFxTagType TagType; // offset 0x0, size 0x4
    int TagOffset; // offset 0x4, size 0x4
    int TagLength; // offset 0x8, size 0x4
    int TagDataOffset; // offset 0xC, size 0x4
};
enum GFxTagType {
    GFxTag_End = 0,
    GFxTag_EndFrame = 1,
    GFxTag_DefineShape = 2,
    GFxTag_PlaceObject = 4,
    GFxTag_RemoveObject = 5,
    GFxTag_DefineBitsJpeg = 6,
    GFxTag_ButtonCharacter = 7,
    GFxTag_JpegTables = 8,
    GFxTag_SetBackgroundColor = 9,
    GFxTag_DefineFont = 10,
    GFxTag_DefineText = 11,
    GFxTag_DoAction = 12,
    GFxTag_DefineFontInfo = 13,
    GFxTag_DefineSound = 14,
    GFxTag_StartSound = 15,
    GFxTag_ButtonSound = 17,
    GFxTag_DefineBitsLossless = 20,
    GFxTag_DefineBitsJpeg2 = 21,
    GFxTag_DefineShape2 = 22,
    GFxTag_Protect = 24,
    GFxTag_PlaceObject2 = 26,
    GFxTag_RemoveObject2 = 28,
    GFxTag_DefineShape3 = 32,
    GFxTag_DefineText2 = 33,
    GFxTag_DefineEditText = 37,
    GFxTag_ButtonCharacter2 = 34,
    GFxTag_DefineBitsJpeg3 = 35,
    GFxTag_DefineBitsLossless2 = 36,
    GFxTag_Sprite = 39,
    GFxTag_FrameLabel = 43,
    GFxTag_DefineShapeMorph = 46,
    GFxTag_DefineFont2 = 48,
    GFxTag_Export = 56,
    GFxTag_Import = 57,
    GFxTag_DoInitAction = 59,
    GFxTag_DefineFontInfo2 = 62,
    GFxTag_FileAttributes = 69,
    GFxTag_PlaceObject3 = 70,
    GFxTag_Import2 = 71,
    GFxTag_CSMTextSettings = 74,
    GFxTag_DefineFont3 = 75,
    GFxTag_Metadata = 77,
    GFxTag_DefineShape4 = 83,
    GFxTag_DefineShapeMorph2 = 84,
    GFxTag_SWF_TagTableEnd = 85,
    GFxTag_ExporterInfo = 1000,
    GFxTag_DefineExternalImage = 1001,
    GFxTag_FontTextureInfo = 1002,
    GFxTag_DefineExternalGradient = 1003,
    GFxTag_DefineGradientMap = 1004,
    GFxTag_GFX_TagTableEnd = 1005,
    GFxTag_GFX_TagTableBegin = 1000,
};
// total size: 0x8
class GASDoAction : public GASExecuteTag {
    // Members
    class GPtr pBuf; // offset 0x4, size 0x4
};
// total size: 0xC
class GASWithStackEntry {
    // Members
    class GPtr pObjectOrChar; // offset 0x0, size 0x4
    bool IsObject; // offset 0x4, size 0x1
    int BlockEndPc; // offset 0x8, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GRefCountBaseImpl * pObject; // offset 0x0, size 0x4
};
// total size: 0x8
class GFxDisasm {
    // Members
    class GFxLog * pLog; // offset 0x0, size 0x4
    enum LogMessageType MsgType; // offset 0x4, size 0x4
};
enum LogMessageType {
    Log_Channel_General = 16,
    Log_Channel_Script = 32,
    Log_Channel_Parse = 48,
    Log_Channel_Action = 64,
    Log_Channel_Debug = 80,
    Log_Channel_Mask = 240,
    Log_MessageType_Error = 0,
    Log_MessageType_Warning = 1,
    Log_MessageType_Message = 2,
    Log_Error = 16,
    Log_Warning = 17,
    Log_Message = 18,
    Log_ScriptError = 32,
    Log_ScriptWarning = 33,
    Log_ScriptMessage = 34,
    Log_Parse = 48,
    Log_ParseShape = 49,
    Log_ParseMorphShape = 50,
    Log_ParseAction = 51,
    Log_Action = 64,
};
// total size: 0xC
class GFxActionLogger : public GFxLogBase {
    // Members
    class GFxLog * pLog; // offset 0x4, size 0x4
    bool VerboseAction; // offset 0x8, size 0x1
    bool VerboseActionErrors; // offset 0x9, size 0x1
};
// total size: 0xC
class garray_base {
    // Members
    class GASWithStackEntry * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
enum ExecuteType {
    Exec_Unknown = 0,
    Exec_Function = 1,
    Exec_Function2 = 2,
    Exec_Event = 3,
};
enum StandardMember {
    M_InvalidMember = 4294967295,
    M_x = 0,
    M_BuiltInProperty_Begin = 0,
    M_y = 1,
    M_xscale = 2,
    M_yscale = 3,
    M_currentframe = 4,
    M_totalframes = 5,
    M_alpha = 6,
    M_visible = 7,
    M_width = 8,
    M_height = 9,
    M_rotation = 10,
    M_target = 11,
    M_framesloaded = 12,
    M_name = 13,
    M_droptarget = 14,
    M_url = 15,
    M_highquality = 16,
    M_focusrect = 17,
    M_soundbuftime = 18,
    M_quality = 19,
    M_xmouse = 20,
    M_ymouse = 21,
    M_BuiltInProperty_End = 21,
    M_parent = 22,
    M_blendMode = 23,
    M_cacheAsBitmap = 24,
    M_filters = 25,
    M_enabled = 26,
    M_trackAsMenu = 27,
    M_lockroot = 28,
    M_tabEnabled = 29,
    M_tabIndex = 30,
    M_useHandCursor = 31,
    M_SharedPropertyEnd = 31,
    M_menu = 32,
    M_focusEnabled = 33,
    M_tabChildren = 34,
    M_transform = 35,
    M_text = 36,
    M_textWidth = 37,
    M_textHeight = 38,
    M_textColor = 39,
    M_length = 40,
    M_html = 41,
    M_htmlText = 42,
    M_autoSize = 43,
    M_wordWrap = 44,
    M_multiline = 45,
    M_border = 46,
    M_variable = 47,
    M_selectable = 48,
    M_embedFonts = 49,
    M_antiAliasType = 50,
    M_hscroll = 51,
    M_scroll = 52,
    M_maxscroll = 53,
    M_maxhscroll = 54,
    M_background = 55,
    M_backgroundColor = 56,
    M_borderColor = 57,
    M_bottomScroll = 58,
    M_type = 59,
    M_maxChars = 60,
    M_condenseWhite = 61,
    M_mouseWheelEnabled = 62,
    M_password = 63,
    M_shadowStyle = 64,
    M_shadowColor = 65,
    M_hitTestDisable = 66,
    M_noTranslate = 67,
    M_caretIndex = 68,
    M_numLines = 69,
    M_verticalAutoSize = 70,
    M_fontScaleFactor = 71,
    M_valign = 72,
    M_textAutoSize = 73,
    M_autoFit = 74,
    M_blurX = 75,
    M_blurY = 76,
    M_blurStrength = 77,
    M_outline = 78,
    M_shadowAlpha = 79,
    M_shadowAngle = 80,
    M_shadowBlurX = 81,
    M_shadowBlurY = 82,
    M_shadowDistance = 83,
    M_shadowHideObject = 84,
    M_shadowKnockOut = 85,
    M_shadowQuality = 86,
    M_shadowStrength = 87,
    M_shadowOutline = 88,
    M_StandardMemberCount = 89,
    M_BitMask_PhysicalMembers = 1871,
    M_BitMask_CommonMembers = 4202624,
};
// total size: 0xC
class EnumerateOpVisitor : public MemberVisitor {
    // Members
    class GASEnvironment * pEnv; // offset 0x4, size 0x4
    class GFxActionLogger * pLog; // offset 0x8, size 0x4
};
// total size: 0x4
class @class {
    // Members
    float F; // offset 0x0, size 0x4
    unsigned long I; // offset 0x0, size 0x4
};
// total size: 0x8
class @class {
    // Members
    double D; // offset 0x0, size 0x8
    unsigned long long I; // offset 0x0, size 0x8
    class @class Sub; // offset 0x0, size 0x8
};
// total size: 0x8
class @class {
    // Members
    unsigned long Lo; // offset 0x0, size 0x4
    unsigned long Hi; // offset 0x4, size 0x4
};
// total size: 0x4C
class GASFunctionProto : public GASPrototype {};
// total size: 0x4C
class GASPrototype : public GASObject {
    // Members
    class GASFunctionWeakRef Constructor; // offset 0x30, size 0xC
    class GASFunctionWeakRef __Constructor__; // offset 0x3C, size 0xC
    class garray * pInterfaces; // offset 0x48, size 0x4
};
// total size: 0xC
class GASFunctionWeakRef : public GASFunctionRefBase {};
// total size: 0x1
class GASPropFlags {
    // Members
    unsigned char Flags; // offset 0x0, size 0x1
};
// total size: 0x8
class node_ref {
    // Members
    class GASFunctionObject * * pfirst; // offset 0x0, size 0x4
    int * psecond; // offset 0x4, size 0x4
};
// total size: 0x8
class ghash_node {
    // Members
    class GASFunctionObject * first; // offset 0x0, size 0x4
    int second; // offset 0x4, size 0x4
};
// total size: 0x8
class ArgSpec {
    // Members
    int Register; // offset 0x0, size 0x4
    class GASString Name; // offset 0x4, size 0x4
};
// total size: 0xC
class garray_base {
    // Members
    class ArgSpec * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x8
class node_ref {
    // Members
    class GASString * pfirst; // offset 0x0, size 0x4
    class GASValue * psecond; // offset 0x4, size 0x4
};
// total size: 0x20
class ghashset_entry {
    // Members
    long Next_in_chain; // offset 0x0, size 0x4
    class ghash_node value; // offset 0x8, size 0x18
};
// total size: 0x18
class ghash_node {
    // Members
    class GASString first; // offset 0x0, size 0x4
    class GASValue second; // offset 0x8, size 0x10
};
// total size: 0x10
class StringTokenizer {
    // Members
    char * Str; // offset 0x0, size 0x4
    char * EndStr; // offset 0x4, size 0x4
    char * Delimiters; // offset 0x8, size 0x4
    class GASString Token; // offset 0xC, size 0x4
};
enum RecursionType {
    RG_ToString = 0,
    RG_ValueOf = 1,
    RG_Count = 2,
    MAX_RECURSION_LEVEL = 256,
};
// total size: 0x8
class node_ref {
    // Members
    void * * pfirst; // offset 0x0, size 0x4
    class RecursionDescr * psecond; // offset 0x4, size 0x4
};
// total size: 0x8
class RecursionDescr {
    // Members
    int CurLevel; // offset 0x0, size 0x4
    int MaxRecursionLevel; // offset 0x4, size 0x4
};
// total size: 0x10
class ghashset_entry {
    // Members
    long Next_in_chain; // offset 0x0, size 0x4
    class ghash_node value; // offset 0x4, size 0xC
};
// total size: 0xC
class ghash_node {
    // Members
    void * first; // offset 0x0, size 0x4
    class RecursionDescr second; // offset 0x4, size 0x8
};
// total size: 0xC
class GASInstInfo {
    // Members
    int actionId; // offset 0x0, size 0x4
    char * Instruction; // offset 0x4, size 0x4
    enum ArgFormatType ArgFormat; // offset 0x8, size 0x4
};
enum ArgFormatType {
    ARG_NONE = 0,
    ARG_STR = 1,
    ARG_HEX = 2,
    ARG_U8 = 3,
    ARG_U16 = 4,
    ARG_S16 = 5,
    ARG_PUSH_DATA = 6,
    ARG_DECL_DICT = 7,
    ARG_FUNCTION = 8,
    ARG_FUNCTION2 = 9,
};
// total size: 0x34
class GASGlobalObject : public GASObject {
    // Members
    class GASGlobalContext * pGC; // offset 0x30, size 0x4
};
// total size: 0x8
class GASDoInitAction : public GASDoAction {};
enum Priority {
    AP_Highest = 0,
    AP_Initialize = 1,
    AP_InitClip = 2,
    AP_Construct = 3,
    AP_Frame = 4,
    AP_Normal = 4,
    AP_ClipEventLoad = 5,
    AP_Load = 6,
    AP_Count = 7,
};
// total size: 0x8
class DepthResId {
    // Members
    int Depth; // offset 0x0, size 0x4
    class GFxResourceId Id; // offset 0x4, size 0x4
};
static unsigned int mask[4]; // size: 0x10, address: 0x806E7AF8
static unsigned int mask[4]; // size: 0x10, address: 0x806E7B08
static char * onlySlashesDelim; // size: 0x4, address: 0x808DCC60
static char * regularDelim; // size: 0x4, address: 0x808DF2EC
static enum GASBuiltinType functionTypes[30]; // size: 0x78, address: 0x807337C0
static class GASInstInfo InstructionTable[100]; // size: 0x4B0, address: 0x80733B00
struct {} __vt__Q215GASActionBuffer37EnumerateOpVisitor; // size: 0x10, address: 0x807341B0
struct {} __vt__15GFxActionLogger; // size: 0x10, address: 0x807341C0
struct {} __vt__29GFxLogBase<15GFxActionLogger>; // size: 0x10, address: 0x807341D0
struct {} __vt__15GASDoInitAction; // size: 0x2C, address: 0x807341E0
struct {} __vt__11GASDoAction; // size: 0x2C, address: 0x8073420C
struct {} __vt__Q216GASGlobalContext32MemberVisitor; // size: 0x10, address: 0x80734238
struct {} __vt__15GASGlobalObject; // size: 0xB4, address: 0x80734248
struct {} __vt__32MemberVisitor; // size: 0x10, address: 0x80734300
struct {} __vt__14GASKeyAsObject; // size: 0xB4, address: 0x80734310
struct {} __vt__Q214GASKeyAsObject11KeyListener; // size: 0x14, address: 0x807343C4
struct {} __vt__13GASExecuteTag; // size: 0x2C, address: 0x807343D8
struct {} __vt__14GASSuperObject; // size: 0xBC, address: 0x80734404
struct {} __vt__16GASGlobalContext; // size: 0xC, address: 0x807344C0
struct {} __vt__33GRefCountBase<16GASGlobalContext>; // size: 0xC, address: 0x807344CC
struct {} __vt__14GASEnvironment; // size: 0x10, address: 0x807344D8
struct {} __vt__13GASLocalFrame; // size: 0xC, address: 0x807344E8
struct {} __vt__30GRefCountBase<13GASLocalFrame>; // size: 0xC, address: 0x807344F4
struct {} __vt__23GASCustomFunctionObject; // size: 0xD8, address: 0x80734500
struct {} __vt__Q218GASObjectInterface13MemberVisitor; // size: 0x10, address: 0x807345D8
struct {} __vt__22GFxLogBase<9GASFnCall>; // size: 0x10, address: 0x807345E8
struct {} __vt__19GASActionBufferData; // size: 0xC, address: 0x807345F8
struct {} __vt__36GRefCountBase<19GASActionBufferData>; // size: 0xC, address: 0x80734604
struct {} __vt__Q216GFxKeyboardState9IListener; // size: 0x14, address: 0x80734610
struct {} __vt__45GRefCountBase<Q216GFxKeyboardState9IListener>; // size: 0xC, address: 0x80734624
// signature: GAS_Invoke(const GASValue &, GASValue *, GASObjectInterface *, GASEnvironment *, int, int)
// Range: 0x8045C900 -> 0x8045CA18
bool GAS_Invoke(class GASValue * presult /* r31 */, class GASObjectInterface * pthis /* r27 */, class GASEnvironment * penv /* r28 */, int nargs /* r29 */, int firstArgBottomIndex /* r30 */) {
    // Local variables
    class GASFunctionRef func; // r1+0x8

    // References
    // -> struct {} __vt__9GASFnCall;
}
// signature: GAS_Invoke(const GASValue &, GASValue *, const GASValue &, GASEnvironment *, int, int)
// Range: 0x8045CC10 -> 0x8045CD5C
bool GAS_Invoke(class GASValue * presult /* r27 */, class GASValue & pthis /* r28 */, class GASEnvironment * penv /* r29 */, int nargs /* r30 */, int firstArgBottomIndex /* r31 */) {
    // Local variables
    class GASFunctionRef func; // r1+0x14

    // References
    // -> struct {} __vt__9GASFnCall;
}
// Range: 0x8045CD60 -> 0x8045D380
bool GAS_InvokeParsed(char * pmethodName /* r21 */, class GASValue * presult /* r22 */, class GASObjectInterface * pthis /* r23 */, class GASEnvironment * penv /* r24 */, char * pmethodArgFmt /* r25 */, class __va_list_struct * args /* r26 */) {
    // Local variables
    class GFxLog * plog; // r0
    class GFxASCharacter * pnewTarget; // r1+0x18
    class GASValue method; // r1+0x70
    class GASValue owner; // r1+0x60
    class GASFunctionRef func; // r1+0x50
    int nargs; // r27
    bool retVal; // r21

    {
        // Range: 0x8045CED8 -> 0x8045D2A8
        // Local variables
        char * p; // r27

        {
            // Range: 0x8045CEF0 -> 0x8045D1B8
            // Local variables
            char c; // r7
        }
        {
            // Range: 0x8045D1C0 -> 0x8045D29C
            // Local variables
            int i; // r26

            {
                // Range: 0x8045D1C0 -> 0x8045D29C
                // Local variables
                int i1; // r7
                int i0; // r6
            }
        }
    }
}
// Range: 0x8045E350 -> 0x8045E568
bool GAS_Invoke(char * pmethodName /* r25 */, class GASValue * presult /* r26 */, class GASObjectInterface * pthis /* r27 */, class GASEnvironment * penv /* r28 */, int numArgs /* r29 */, int firstArgBottomIndex /* r30 */) {
    // Local variables
    class GFxASCharacter * pnewTarget; // r1+0xC
    class GASValue method; // r1+0x30
    class GASValue owner; // r1+0x20
    class GASFunctionRef func; // r1+0x10
}
// Range: 0x8045E570 -> 0x8045E5E0
void GAS_Math_fabs(class GASFnCall & fn /* r31 */) {
    // Local variables
    double arg; // f0
}
// Range: 0x8045E5E0 -> 0x8045E64C
void GAS_Math_acos(class GASFnCall & fn /* r31 */) {
    // Local variables
    double arg; // f0
}
// Range: 0x8045E650 -> 0x8045E6BC
void GAS_Math_asin(class GASFnCall & fn /* r31 */) {
    // Local variables
    double arg; // f0
}
// Range: 0x8045E6C0 -> 0x8045E72C
void GAS_Math_atan(class GASFnCall & fn /* r31 */) {
    // Local variables
    double arg; // f0
}
// Range: 0x8045E730 -> 0x8045E79C
void GAS_Math_ceil(class GASFnCall & fn /* r31 */) {
    // Local variables
    double arg; // f0
}
// Range: 0x8045E7A0 -> 0x8045E80C
void GAS_Math_cos(class GASFnCall & fn /* r31 */) {
    // Local variables
    double arg; // f0
}
// Range: 0x8045E810 -> 0x8045E87C
void GAS_Math_exp(class GASFnCall & fn /* r31 */) {
    // Local variables
    double arg; // f0
}
// Range: 0x8045E880 -> 0x8045E8EC
void GAS_Math_floor(class GASFnCall & fn /* r31 */) {
    // Local variables
    double arg; // f0
}
// Range: 0x8045E8F0 -> 0x8045E95C
void GAS_Math_log(class GASFnCall & fn /* r31 */) {
    // Local variables
    double arg; // f0
}
// Range: 0x8045E960 -> 0x8045E9CC
void GAS_Math_sin(class GASFnCall & fn /* r31 */) {
    // Local variables
    double arg; // f0
}
// Range: 0x8045E9D0 -> 0x8045EA3C
void GAS_Math_sqrt(class GASFnCall & fn /* r31 */) {
    // Local variables
    double arg; // f0
}
// Range: 0x8045EA40 -> 0x8045EAAC
void GAS_Math_tan(class GASFnCall & fn /* r31 */) {
    // Local variables
    double arg; // f0
}
// Range: 0x8045EAB0 -> 0x8045EB3C
void GAS_Math_atan2(class GASFnCall & fn /* r31 */) {
    // Local variables
    double arg0; // f31
    double arg1; // f2
}
// Range: 0x8045EB40 -> 0x8045EBD8
void GAS_Math_max(class GASFnCall & fn /* r31 */) {
    // Local variables
    double arg0; // f31
    double arg1; // f30
}
// Range: 0x8045EBE0 -> 0x8045EC78
void GAS_Math_min(class GASFnCall & fn /* r31 */) {
    // Local variables
    double arg0; // f31
    double arg1; // f30
}
// Range: 0x8045EC80 -> 0x8045ED0C
void GAS_Math_pow(class GASFnCall & fn /* r31 */) {
    // Local variables
    double arg0; // f31
    double arg1; // f2
}
// Range: 0x8045ED10 -> 0x8045ED88
void GAS_Math_random(class GASFnCall & fn /* r31 */) {
}
// Range: 0x8045ED90 -> 0x8045EE04
void GAS_Math_round(class GASFnCall & fn /* r31 */) {
    // Local variables
    double arg0; // f0
}
// Range: 0x8045EE10 -> 0x8045FFFC
class GASObject * GFxAction_CreateMathGlobalObject(class GASStringContext * psc /* r30 */) {
}
// signature: GASKeyAsObject::KeyListener::OnKeyDown(GASStringContext *, int, unsigned char, unsigned long)
// Range: 0x8047FBD0 -> 0x8047FD9C
void GASKeyAsObject::KeyListener::OnKeyDown(class GASStringContext * psc /* r25 */) {
}
// signature: GASKeyAsObject::KeyListener::OnKeyUp(GASStringContext *, int, unsigned char, unsigned long)
// Range: 0x804802A0 -> 0x8048046C
void GASKeyAsObject::KeyListener::OnKeyUp(class GASStringContext * psc /* r25 */) {
}
// Range: 0x80480620 -> 0x80480628
enum ObjectType GASKeyAsObject::GetObjectType() const {
}
// Range: 0x80460680 -> 0x804608A0
void GASKeyAsObject::CleanupListeners(class GASKeyAsObject * this /* r29 */) {
    {
        // Range: 0x80460694 -> 0x80460874
        // Local variables
        int i; // r30
    }
}
// Range: 0x80480470 -> 0x8048061C
bool GASKeyAsObject::GetMember(class GASKeyAsObject * this /* r28 */, class GASEnvironment * penv /* r29 */, class GASString & name /* r30 */, class GASValue * val /* r31 */) {
    {
        // Range: 0x80480484 -> 0x804805D4
        // Local variables
        class GPtr obj; // r1+0xC

        {
            // Range: 0x804804C8 -> 0x804805C4
            // Local variables
            unsigned long i; // r22
            class GASArrayObject * arrObj; // r23

            {
                // Range: 0x804804D4 -> 0x80480594
                // Local variables
                class GPtr listernerRef; // r1+0x8

                {
                    // Range: 0x804804E0 -> 0x8048057C
                    // Local variables
                    class GASValue v; // r1+0x10
                    class GASObjectInterface * listener; // r21
                }
            }
        }
    }
}
// Range: 0x80460010 -> 0x80460188
void GASKeyAsObject::KeyAddListener(class GASFnCall & fn /* r29 */) {
    // Local variables
    class GFxASCharacter * listenerChar; // r3
    class GASObjectInterface * listener; // r0
    class GRefCountBaseImpl * listenerRef; // r28
    class GASKeyAsObject * ko; // r0
}
// signature: GASKeyAsObject::KeyGetAscii(const GASFnCall &)
// Range: 0x80460990 -> 0x80460A10
void GASKeyAsObject::KeyGetAscii() {
}
// signature: GASKeyAsObject::KeyGetCode(const GASFnCall &)
// Range: 0x80460A10 -> 0x80460A90
void GASKeyAsObject::KeyGetCode() {
}
// Range: 0x80460A90 -> 0x80460B88
void GASKeyAsObject::KeyIsDown(class GASFnCall & fn /* r31 */) {
    // Local variables
    int code; // r30
}
// Range: 0x80460C30 -> 0x80460D28
void GASKeyAsObject::KeyIsToggled(class GASFnCall & fn /* r31 */) {
    // Local variables
    int code; // r30
}
// Range: 0x80460D30 -> 0x80460E74
void GASKeyAsObject::KeyRemoveListener(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GFxASCharacter * listenerChar; // r3
    class GASObjectInterface * listener; // r29
    class GASKeyAsObject * ko; // r0
}
// Range: 0x80461080 -> 0x80462294
class GASObject * GASKeyAsObject::CreateGlobalObject(class GASStringContext * psc /* r29 */, class GFxMovieRoot * root /* r27 */) {
    // References
    // -> struct {} __vt__Q214GASKeyAsObject11KeyListener;
    // -> struct {} __vt__14GASKeyAsObject;
}
// Range: 0x80462E20 -> 0x80463028
static void GAS_GlobalTrace(class GASFnCall & fn /* r31 */) {
    // Local variables
    class GASObjectInterface * piobj; // r29
    class GASString arg0; // r1+0x8
    char buffStr[2048]; // r1+0x30

    {
        // Range: 0x80462E4C -> 0x80462F48
        // Local variables
        class GASValue method; // r1+0x20

        {
            // Range: 0x80462E60 -> 0x80462F48
            // Local variables
            class GASString traceStr; // r1+0xC
            class GASValue result; // r1+0x10
        }
    }
    {
        // Range: 0x80462F9C -> 0x80462FB8
        // Local variables
        char * p; // r5
    }
}
// Range: 0x804630F0 -> 0x804632F8
static void GAS_GlobalParseInt(class GASFnCall & fn /* r31 */) {
    // Local variables
    int radix; // r29
    class GASString str; // r1+0xC
    unsigned int offset; // r30
    char * pstart; // r28
    char * pstop; // r1+0x8
    long result; // r0
}
// Range: 0x80463300 -> 0x804633D4
static void GAS_GlobalParseFloat(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASString sa0; // r1+0xC
    char * pstop; // r1+0x8
    double result; // f1
}
// Range: 0x804633E0 -> 0x804634D8
static void GAS_GlobalIfFrameLoaded(class GASFnCall & fn /* r29 */) {
    // Local variables
    class GFxSprite * psprite; // r30

    {
        // Range: 0x80463470 -> 0x804634BC
        // Local variables
        int frame; // r0
    }
}
// Range: 0x804634F0 -> 0x804635B4
static void GAS_GlobalIsNaN(class GASFnCall & fn /* r30 */) {
}
// Range: 0x804635C0 -> 0x804636DC
static void GAS_GlobalIsFinite(class GASFnCall & fn /* r31 */) {
    {
        // Range: 0x804635E0 -> 0x804636C8
        // Local variables
        double val; // f0
    }
}
// Range: 0x80463760 -> 0x80463BC0
static void GAS_GlobalASSetPropFlags(class GASFnCall & fn /* r26 */) {
    // Local variables
    class GASObjectInterface * obj; // r29
    class GASValue & arg1; // r21
    unsigned char setTrue; // r28
    unsigned char setFalse; // r0

    {
        // Range: 0x80463870 -> 0x804639E0
        // Local variables
        class GASObject * _props; // r22
    }
    {
        // Range: 0x80463A5C -> 0x80463AA8
        // Local variables
        class MemberVisitor visitor; // r1+0x30
    }
    {
        // Range: 0x80463AAC -> 0x80463AB4
        // Local variables
        int i; // r27

        {
            // Range: 0x80463AAC -> 0x80463AB4
            // Local variables
            class GASMember member; // r1+0x20
            class GASString key; // r1+0x18
        }
    }

    // References
    // -> struct {} __vt__32MemberVisitor;
}
// signature: MemberVisitor::Visit(const GASString &, const GASValue &, unsigned char)
// Range: 0x80480630 -> 0x80480664
void MemberVisitor::Visit(class MemberVisitor * this /* r8 */) {
}
// Range: 0x80463BD0 -> 0x80463C54
static void GAS_ASnativeMouseButtonStates(class GASFnCall & fn /* r30 */) {
    {
        // Range: 0x80463BE8 -> 0x80463C3C
        // Local variables
        unsigned int mask; // r0
    }
}
// Range: 0x80463C60 -> 0x80463D74
static void GAS_GlobalASnative(class GASFnCall & fn /* r30 */) {
    {
        // Range: 0x80463C8C -> 0x80463D5C
        // Local variables
        unsigned int funcId; // r0
        unsigned int classId; // r0
    }
}
// signature: GASGlobalContext::EscapeWithMask(const char *, unsigned long, GFxString *, const unsigned int *)
// Range: 0x80463DF0 -> 0x80463F28
void GASGlobalContext::EscapeWithMask(unsigned long length /* r23 */, class GFxString * pescapedStr /* r24 */, unsigned int * escapeMask /* r25 */) {
    // Local variables
    char buf[100]; // r1+0x8
    char * pbuf; // r3
    char * endp; // r27

    {
        // Range: 0x80463E1C -> 0x80463EEC
        // Local variables
        unsigned int i; // r26

        {
            // Range: 0x80463E1C -> 0x80463EEC
            // Local variables
            int ch; // r0
        }
    }
}
// signature: GASGlobalContext::Escape(const char *, unsigned long, GFxString *)
// Range: 0x80463F30 -> 0x80463F3C
void GASGlobalContext::Escape() {
    // References
    // -> static unsigned int mask[4];
}
// signature: GASGlobalContext::EscapePath(const char *, unsigned long, GFxString *)
// Range: 0x80463F40 -> 0x80463F4C
void GASGlobalContext::EscapePath() {
    // References
    // -> static unsigned int mask[4];
}
// signature: GASGlobalContext::Unescape(const char *, unsigned long, GFxString *)
// Range: 0x80463F50 -> 0x80464094
void GASGlobalContext::Unescape(char * psrc /* r28 */, class GFxString * punescapedStr /* r29 */) {
    // Local variables
    char buf[100]; // r1+0x8
    char * endcstr; // r31
    char * pbuf; // r7
    char * endp; // r30

    {
        // Range: 0x80463F64 -> 0x80464060
        // Local variables
        int ch; // r0
    }

    // References
    // -> class __locale _current_locale;
}
// Range: 0x804640A0 -> 0x804641D4
static void GAS_GlobalEscape(class GASFnCall & fn /* r30 */) {
    {
        // Range: 0x804640CC -> 0x8046417C
        // Local variables
        class GFxString escapedStr; // r1+0xC
        class GASString str; // r1+0x10
    }

    // References
    // -> static unsigned int mask[4];
}
// Range: 0x804642D0 -> 0x804643FC
static void GAS_GlobalUnescape(class GASFnCall & fn /* r30 */) {
    {
        // Range: 0x804642FC -> 0x804643A4
        // Local variables
        class GFxString unescapedStr; // r1+0xC
        class GASString str; // r1+0x10
    }
}
// Range: 0x80464400 -> 0x80464534
static void GAS_GlobalEscapeSpecialHTML(class GASFnCall & fn /* r30 */) {
    {
        // Range: 0x8046442C -> 0x804644E0
        // Local variables
        class GFxString escapedStr; // r1+0xC
        class GASString str; // r1+0x10
    }
}
// Range: 0x80464540 -> 0x80464674
static void GAS_GlobalUnescapeSpecialHTML(class GASFnCall & fn /* r30 */) {
    {
        // Range: 0x8046456C -> 0x80464620
        // Local variables
        class GFxString unescapedStr; // r1+0xC
        class GASString str; // r1+0x10
    }
}
// signature: GAS_GlobalUpdateAfterEvent(const GASFnCall &)
// Range: 0x80464680 -> 0x80464684
static void GAS_GlobalUpdateAfterEvent() {
}
// Range: 0x80464690 -> 0x80464950
class GASObject * GASGlobalContext::AddPackage(class GASStringContext * psc /* r22 */, class GASObject * pparent /* r23 */, class GASObject * objProto /* r24 */, char * packageName /* r25 */) {
    // Local variables
    char buf[256]; // r1+0x30
    unsigned long nameSz; // r27
    char * pname; // r26

    {
        // Range: 0x804646E0 -> 0x804648C4
        // Local variables
        class GASString memberName; // r1+0xC
        class GASValue pkgObjVal; // r1+0x20
        unsigned long sz; // r21
        char * p; // r20
    }
}
// signature: GASGlobalObject::GetMember(GASEnvironment *, const GASString &, GASValue *)
// Range: 0x804806A0 -> 0x80480738
bool GASGlobalObject::GetMember(class GASValue * val /* r30 */) {
}
// signature: GASGlobalObject::SetMember(GASEnvironment *, const GASString &, const GASValue &, const GASPropFlags &)
// Range: 0x80480740 -> 0x80480940
bool GASGlobalObject::SetMember(class GASGlobalObject * this /* r28 */, class GASEnvironment * penv /* r29 */, class GASString & name /* r30 */, class GASPropFlags & flags /* r31 */) {
}
// Range: 0x804649C0 -> 0x8046779C
void * GASGlobalContext::GASGlobalContext(class GASGlobalContext * this /* r25 */, class GFxMovieRoot * pRoot /* r26 */) {
    // Local variables
    class GASStringContext sc; // r1+0x288
    class GASFunctionRef objCtor; // r1+0x6C4
    class GASFunctionRef arrayCtor; // r1+0x6B8
    class GASFunctionRef stringCtor; // r1+0x6AC
    class GASFunctionRef numberCtor; // r1+0x6A0
    class GASFunctionRef boolCtor; // r1+0x694
    class GASFunctionRef movieClipCtor; // r1+0x688
    class GASFunctionRef functionCtor; // r1+0x67C
    class GASFunctionRef soundCtor; // r1+0x670
    class GASFunctionRef buttonCtor; // r1+0x664
    class GASFunctionRef textFieldCtor; // r1+0x658
    class GASFunctionRef colorCtor; // r1+0x64C
    class GASFunctionRef transformCtor; // r1+0x640
    class GASFunctionRef matrixCtor; // r1+0x634
    class GASFunctionRef pointCtor; // r1+0x628
    class GASFunctionRef rectangleCtor; // r1+0x61C
    class GASFunctionRef colorTransformCtor; // r1+0x610
    class GASFunctionRef stageCtor; // r1+0x604
    class GASFunctionRef selectionCtor; // r1+0x5F8
    class GASFunctionRef broadcasterCtor; // r1+0x5EC
    class GASFunctionRef dateCtor; // r1+0x5E0
    class GASFunctionRef mouseCtor; // r1+0x5D4
    class GASFunctionRef extIntfCtor; // r1+0x5C8
    class GASFunctionRef movieClipLdrCtor; // r1+0x5BC
    class GASFunctionRef bmpDataCtor; // r1+0x5B0
    class GASFunctionRef capabilitiesCtor; // r1+0x5A4
    class GASFunctionRef loadVarsCtor; // r1+0x598
    class GASFunctionRef textFormatCtor; // r1+0x58C
    class GPtr objProto; // r1+0x1B8
    class GPtr arrayProto; // r1+0x1B4
    class GPtr stringProto; // r1+0x1B0
    class GPtr numberProto; // r1+0x1AC
    class GPtr boolProto; // r1+0x1A8
    class GPtr movieClipProto; // r1+0x1A4
    class GPtr functionProto; // r1+0x1A0
    class GPtr soundProto; // r1+0x19C
    class GPtr buttonProto; // r1+0x198
    class GPtr textFieldProto; // r1+0x194
    class GPtr colorProto; // r1+0x190
    class GPtr transformProto; // r1+0x18C
    class GPtr matrixProto; // r1+0x188
    class GPtr pointProto; // r1+0x184
    class GPtr rectangleProto; // r1+0x180
    class GPtr colorTransformProto; // r1+0x17C
    class GPtr stageProto; // r1+0x178
    class GPtr broadcasterProto; // r1+0x174
    class GPtr dateProto; // r1+0x170
    class GPtr mouseProto; // r1+0x16C
    class GPtr extIntfProto; // r1+0x168
    class GPtr movieClipLdrProto; // r1+0x164
    class GPtr bmpDataProto; // r1+0x160
    class GPtr loadVarsProto; // r1+0x15C
    class GPtr textFormatProto; // r1+0x158
    class MemberVisitor visitor; // r1+0x580

    // References
    // -> struct {} __vt__Q216GASGlobalContext32MemberVisitor;
    // -> struct {} __vt__15GASGlobalObject;
    // -> struct {} __vt__16GASGlobalContext;
    // -> struct {} __vt__33GRefCountBase<16GASGlobalContext>;
}
// signature: GASGlobalContext::MemberVisitor::Visit(const GASString &, const GASValue &, unsigned char)
// Range: 0x80480950 -> 0x80480974
void GASGlobalContext::MemberVisitor::Visit(class MemberVisitor * this /* r7 */) {
}
// Range: 0x80469C40 -> 0x80469D90
void * GASGlobalContext::~GASGlobalContext(class GASGlobalContext * this /* r24 */) {
}
// Range: 0x80469DA0 -> 0x80469DA4
void GASGlobalContext::InitStandardMembers() {
}
// signature: GASGlobalContext::RegisterClass(GASStringContext *, const GASString &, const GASFunctionRef &)
// Range: 0x80469DB0 -> 0x80469E6C
bool GASGlobalContext::RegisterClass(class GASGlobalContext * this /* r29 */, class GASString & className /* r30 */, class GASFunctionRef & ctorFunction /* r31 */) {
}
// Range: 0x8046B330 -> 0x8046B3D4
bool GASGlobalContext::UnregisterClass(class GASGlobalContext * this /* r29 */, class GASStringContext * psc /* r30 */, class GASString & className /* r31 */) {
}
// signature: GASGlobalContext::FindRegisteredClass(GASStringContext *, const GASString &, GASFunctionRef *)
// Range: 0x8046BA30 -> 0x8046BAAC
bool GASGlobalContext::FindRegisteredClass(class GASFunctionRef * pctorFunction /* r31 */) {
}
// Range: 0x8046BAB0 -> 0x8046BABC
void GASGlobalContext::UnregisterAllClasses() {
}
// Range: 0x80480980 -> 0x80480AE0
void GASDoAction::Execute(class GASDoAction * this /* r29 */, class GFxSprite * m /* r31 */) {
    // References
    // -> struct {} __vt__15GASActionBuffer;
}
// Range: 0x80480E60 -> 0x80480FB4
void GASDoAction::ExecuteWithPriority(class GASDoAction * this /* r27 */, class GFxSprite * m /* r29 */, enum Priority prio /* r30 */) {
    // References
    // -> struct {} __vt__15GASActionBuffer;
}
// Range: 0x80480CE0 -> 0x80480CE8
bool GASDoAction::IsActionTag() const {
}
// Range: 0x80480CF0 -> 0x80480E50
void GASDoInitAction::Execute(class GASDoInitAction * this /* r29 */, class GFxSprite * m /* r31 */) {
    // References
    // -> struct {} __vt__15GASActionBuffer;
}
// Range: 0x80480E50 -> 0x80480E58
bool GASDoInitAction::IsActionTag() const {
}
// Range: 0x8046BB40 -> 0x8046BDDC
void GFx_DoActionLoader(class GFxLoadProcess * p /* r30 */, class GFxTagInfo & tagInfo /* r5 */) {
    // References
    // -> struct {} __vt__19GASActionBufferData;
    // -> struct {} __vt__11GASDoAction;
}
// Range: 0x8046C030 -> 0x8046C2EC
void GFx_DoInitActionLoader(class GFxLoadProcess * p /* r30 */, class GFxTagInfo & tagInfo /* r28 */) {
    // Local variables
    class GASDoAction * da; // r0

    // References
    // -> struct {} __vt__19GASActionBufferData;
    // -> struct {} __vt__15GASDoInitAction;
}
// signature: GFxDisasm::GFxDisasm(GFxLog *, GFxLogConstants::LogMessageType)
// Range: 0x80475080 -> 0x8047508C
void * GFxDisasm::GFxDisasm() {
}
// signature: GFxDisasm::Log(const char *, ...)
// Range: 0x8047E3B0 -> 0x8047E460
void GFxDisasm::Log(class GFxDisasm * this /* r30 */) {
    // Local variables
    class __va_list_struct argList[1]; // r1+0x68
}
// Range: 0x80475090 -> 0x80475098
bool GFxActionLogger::IsVerboseAction() const {
}
// Range: 0x8046D040 -> 0x8046D048
bool GFxActionLogger::IsVerboseActionErrors() const {
}
// Range: 0x8046C370 -> 0x8046C408
void * GASWithStackEntry::GASWithStackEntry(class GASWithStackEntry * this /* r29 */, class GASObject * pobj /* r30 */, int end /* r31 */) {
}
// Range: 0x8046C480 -> 0x8046C518
void * GASWithStackEntry::GASWithStackEntry(class GASWithStackEntry * this /* r29 */, class GFxASCharacter * pcharacter /* r30 */, int end /* r31 */) {
}
// Range: 0x8046C520 -> 0x8046CA98
void GASActionBufferData::Read(class GASActionBufferData * this /* r22 */, class GFxStream * in /* r23 */) {
    {
        // Range: 0x8046C53C -> 0x8046CA80
        {
            // Range: 0x8046C53C -> 0x8046C540
            // Local variables
            int length; // r0

            {
                // Range: 0x8046C53C -> 0x8046C540
                // Local variables
                int i; // r24
            }
        }
        {
            // Range: 0x8046C540 -> 0x8046CA78
            // Local variables
            class GFxDisasm da; // r1+0x8
        }
    }
}
// Range: 0x8046CB80 -> 0x8046CF48
void GASActionBuffer::ProcessDeclDict(class GASActionBuffer * this /* r22 */, class GASStringContext * psc /* r23 */, unsigned int StartPc /* r21 */, unsigned int StopPc /* r24 */, class GFxActionLogger & log /* r25 */) {
    // Local variables
    unsigned int i; // r28
    unsigned int count; // r27

    {
        // Range: 0x8046CDE0 -> 0x8046CF24
        // Local variables
        unsigned int ct; // r26
    }
}
// signature: GASActionBuffer::Execute(GASEnvironment *)
// Range: 0x8046D050 -> 0x8046D164
void GASActionBuffer::Execute() {
    // Local variables
    class garray EmptyWithStack; // r1+0x8
}
// signature: GASActionBuffer::Execute(GASEnvironment *, int, int, GASValue *, const std::garray<GASWithStackEntry> &, GASActionBuffer::ExecuteType)
// Range: 0x8046D330 -> 0x804723D8
void GASActionBuffer::Execute(class GASActionBuffer * this /* r15 */, class GASEnvironment * env /* r16 */, int StartPc /* r18 */, int ExecBytes /* r19 */, class GASValue * retval /* r1+0x8 */, enum ExecuteType execType /* r1+0xC */) {
    // Local variables
    class garray WithStack; // r1+0x60C
    unsigned int version; // r23
    bool isFunction2; // r22
    class GFxASCharacter * poriginalTarget; // r14
    class GFxActionLogger log; // r1+0x600
    int StopPc; // r1+0x698

    {
        // Range: 0x8046D450 -> 0x80472340
        // Local variables
        int pc; // r0

        {
            // Range: 0x8046D450 -> 0x80472340
            // Local variables
            int actionId; // r19

            {
                // Range: 0x8046D450 -> 0x8046D450
                // Local variables
                class GASString retVal; // r1+0x180
            }
            {
                // Range: 0x8046D450 -> 0x8046D450
                // Local variables
                class GASString varString; // r1+0x17C

                {
                    // Range: 0x8046D450 -> 0x8046D450
                    // Local variables
                    class GASString sv; // r1+0x178
                }
            }
            {
                // Range: 0x8046D450 -> 0x8046D450
                // Local variables
                class GASString s1; // r1+0x174
            }
            {
                // Range: 0x8046D450 -> 0x8046D450
                // Local variables
                class GASValue targetVal; // r1+0x5F0
                class GFxASCharacter * target; // r1+0x170

                {
                    // Range: 0x8046D450 -> 0x8046D450
                    // Local variables
                    class GASValue val; // r1+0x5E0

                    {
                        // Range: 0x8046D450 -> 0x8046D450
                        // Local variables
                        class GASString s1; // r1+0x16C
                    }
                }
                {
                    // Range: 0x8046D450 -> 0x8046D450
                    // Local variables
                    class GASString sv; // r1+0x168
                }
            }
            {
                // Range: 0x8046D450 -> 0x8046D450
                // Local variables
                class GFxASCharacter * ptarget; // r17

                {
                    // Range: 0x8046D450 -> 0x8046D450
                    // Local variables
                    enum StandardMember member; // r19
                }
            }
            {
                // Range: 0x8046D450 -> 0x8046D450
                // Local variables
                class GFxASCharacter * ptarget; // r17

                {
                    // Range: 0x8046D450 -> 0x8046D450
                    // Local variables
                    enum StandardMember member; // r0
                }
            }
            {
                // Range: 0x8046D450 -> 0x8046D450
                // Local variables
                class GFxASCharacter * ptarget; // r17
            }
            {
                // Range: 0x8046D450 -> 0x8046D450
                // Local variables
                class GFxASCharacter * ptarget; // r17
            }
            {
                // Range: 0x8046D458 -> 0x8046D458
                // Local variables
                class GFxMovieRoot * pmovieRoot; // r0
                bool lockCenter; // r17
                class DragState st; // r1+0x618

                {
                    // Range: 0x8046D458 -> 0x8046D458
                    // Local variables
                    class GASString s0; // r1+0x164
                }
            }
            {
                // Range: 0x8046D458 -> 0x8046D458
                // Local variables
                class GFxMovieRoot * pmovieRoot; // r0
            }
            {
                // Range: 0x8046D458 -> 0x8046D458
                // Local variables
                class GASValue rv; // r1+0x5D0

                {
                    // Range: 0x8046D458 -> 0x8046D458
                    // Local variables
                    class GASFunctionRef ctorFunc; // r1+0x5C0

                    {
                        // Range: 0x8046D458 -> 0x8046D458
                        // Local variables
                        class GASObjectInterface * obj; // r17

                        {
                            // Range: 0x8046D458 -> 0x8046D458
                            // Local variables
                            class GASValue prototypeVal; // r1+0x5B0

                            {
                                // Range: 0x8046D458 -> 0x8046D458
                                // Local variables
                                class GASObject * prototype; // r0
                            }
                        }
                    }
                }
            }
            {
                // Range: 0x8046D458 -> 0x8046D458
                // Local variables
                int intfNum; // r17
                class GASValue ctorFuncVal; // r1+0x5A0

                {
                    // Range: 0x8046D458 -> 0x8046D458
                    // Local variables
                    class GASFunctionRef ctorFunc; // r1+0x590

                    {
                        // Range: 0x8046D458 -> 0x8046D458
                        // Local variables
                        class GASValue protoVal; // r1+0x580

                        {
                            // Range: 0x8046D458 -> 0x8046D458
                            // Local variables
                            class GASObject * proto; // r0

                            {
                                // Range: 0x8046D458 -> 0x8046D458
                                // Local variables
                                int i; // r20

                                {
                                    // Range: 0x8046D458 -> 0x8046D458
                                    {
                                        // Range: 0x8046D458 -> 0x8046D458
                                        // Local variables
                                        class GASFunctionRef intfFunc; // r1+0x570
                                    }
                                }
                            }
                        }
                    }
                }
            }
            {
                // Range: 0x8046D458 -> 0x8046D458
                // Local variables
                int max; // r17
            }
            {
                // Range: 0x8046D458 -> 0x8046D458
                // Local variables
                int length; // r0
            }
            {
                // Range: 0x8046D458 -> 0x8046D458
                // Local variables
                char buf[2]; // r1+0x3C
            }
            {
                // Range: 0x8046D458 -> 0x8046D458
                // Local variables
                class GASString retVal; // r1+0x160
            }
            {
                // Range: 0x8046D458 -> 0x8046D458
                // Local variables
                class GASString s; // r1+0x15C
            }
            {
                // Range: 0x8046D458 -> 0x8046D458
                // Local variables
                wchar_t buff[2]; // r1+0x158
            }
            {
                // Range: 0x8046D458 -> 0x8046D458
                // Local variables
                bool retVal; // r19

                {
                    // Range: 0x8046D458 -> 0x8046D458
                    // Local variables
                    class GASValue ownerVal; // r1+0x560

                    {
                        // Range: 0x8046D458 -> 0x8046D458
                        // Local variables
                        class GASObjectInterface * piobj; // r0
                    }
                }
                {
                    // Range: 0x8046D458 -> 0x8046D458
                    // Local variables
                    class GASObjectInterface * piobj; // r17
                }
            }
            {
                // Range: 0x8046D458 -> 0x8046D458
                // Local variables
                class GASObjectInterface * piobj; // r20
                class GASValue ownerVal; // r1+0x550
                class GASString memberName; // r1+0x150
            }
            {
                // Range: 0x8046D458 -> 0x8046D458
                // Local variables
                class GASString varname; // r1+0x14C
            }
            {
                // Range: 0x8046D458 -> 0x8046D458
                // Local variables
                class GASValue result; // r1+0x520
                int nargs; // r19
                class GASObjectInterface * ownerObj; // r17
                class GASValue owner; // r1+0x530
                class GASValue function; // r1+0x540

                {
                    // Range: 0x8046D458 -> 0x8046D458
                    // Local variables
                    class GASString functionName; // r1+0x148
                }
            }
            {
                // Range: 0x8046D458 -> 0x8046D458
                // Local variables
                double x; // f0
                double y; // f30
                double result; // r1+0x1C0
            }
            {
                // Range: 0x8046D458 -> 0x8046D458
                // Local variables
                class GASValue constructor; // r1+0x510
                class GPtr pnewObj; // r1+0x140
                int nargs; // r17
                class GASString classname; // r1+0x144

                {
                    // Range: 0x8046D458 -> 0x8046D458
                    // Local variables
                    class GASFunctionRef func; // r1+0x500
                }
            }
            {
                // Range: 0x8046D458 -> 0x8046D458
                // Local variables
                class GASString varname; // r1+0x13C
            }
            {
                // Range: 0x8046D458 -> 0x8046D458
                // Local variables
                class GASValue result; // r1+0x4F0
                int ArraySize; // r19
            }
            {
                // Range: 0x8046D458 -> 0x8046D458
                // Local variables
                class GPtr pobj; // r1+0x138
                int argCount; // r17

                {
                    // Range: 0x8046D458 -> 0x8046D458
                    // Local variables
                    int i; // r19
                }
            }
            {
                // Range: 0x8046D458 -> 0x8046D458
                // Local variables
                enum GASBuiltinType typeStrIndex; // r17

                {
                    // Range: 0x8046D458 -> 0x8046D458
                    // Local variables
                    class GFxASCharacter * pchar; // r0
                }
            }
            {
                // Range: 0x8046D458 -> 0x8046D458
                // Local variables
                class GFxASCharacter * pcharacter; // r0
            }
            {
                // Range: 0x8046D458 -> 0x8046D458
                // Local variables
                class EnumerateOpVisitor memberVisitor; // r1+0x4B0
                class GASValue nullvalue; // r1+0x4D0
                class GASValue varName; // r1+0x4E0
                class GASObjectInterface * piobj; // r17

                {
                    // Range: 0x8046D458 -> 0x8046D458
                    // Local variables
                    class GASValue variable; // r1+0x4C0
                    class GASString varString; // r1+0x134
                }
            }
            {
                // Range: 0x8046D458 -> 0x8046D458
                // Local variables
                class GASValue temp; // r1+0x4A0
            }
            {
                // Range: 0x8046D458 -> 0x8046D458
                // Local variables
                class GASObjectInterface * pobj; // r20

                {
                    // Range: 0x8046D458 -> 0x8046D458
                    // Local variables
                    class GASValue objVal; // r1+0x490
                }
                {
                    // Range: 0x8046D458 -> 0x8046D458
                    // Local variables
                    class GASString member; // r1+0x130

                    {
                        // Range: 0x8046D458 -> 0x8046D458
                        // Local variables
                        class GASString s1; // r1+0x12C
                    }
                }
            }
            {
                // Range: 0x8046D458 -> 0x8046D458
                // Local variables
                class GASObjectInterface * piobj; // r17

                {
                    // Range: 0x8046D458 -> 0x8046D458
                    // Local variables
                    class GASString member; // r1+0x128

                    {
                        // Range: 0x8046D458 -> 0x8046D458
                        // Local variables
                        class GASString s0; // r1+0x120
                        class GASString s2; // r1+0x124
                    }
                }
                {
                    // Range: 0x8046D458 -> 0x8046D458
                    // Local variables
                    class GASString s0; // r1+0x114
                    class GASString s1; // r1+0x118
                    class GASString s2; // r1+0x11C
                }
            }
            {
                // Range: 0x8046D458 -> 0x8046D458
                // Local variables
                class GASObjectInterface * piobj; // r17
                class GASString methodName; // r1+0x110
                class GASValue result; // r1+0x480
                int nargs; // r19

                {
                    // Range: 0x8046D458 -> 0x8046D458
                    // Local variables
                    class GASValue thisVal; // r1+0x460
                    class GASValue function; // r1+0x470
                }
                {
                    // Range: 0x8046D458 -> 0x8046D458
                    // Local variables
                    class GASValue method; // r1+0x450
                }
                {
                    // Range: 0x8046D458 -> 0x8046D458
                    {
                        // Range: 0x8046D458 -> 0x8046D458
                        // Local variables
                        class GASValue method; // r1+0x440
                    }
                }
                {
                    // Range: 0x8046D458 -> 0x8046D458
                    // Local variables
                    class GASValue objVal; // r1+0x430

                    {
                        // Range: 0x8046D458 -> 0x8046D458
                        // Local variables
                        class GASValue method; // r1+0x420
                    }
                }
            }
            {
                // Range: 0x8046D458 -> 0x8046D458
                // Local variables
                class GASString constructorNameStr; // r1+0x10C
                class GASValue constructor; // r1+0x3F0
                int nargs; // r17
                class GASValue object; // r1+0x400
                class GASValue constructorName; // r1+0x410

                {
                    // Range: 0x8046D458 -> 0x8046D458
                    // Local variables
                    class GASObjectInterface * piobj; // r0
                }
                {
                    // Range: 0x8046D458 -> 0x8046D458
                    // Local variables
                    class GASFunctionRef func; // r1+0x3E4
                }
            }
            {
                // Range: 0x8046D458 -> 0x8046D458
                // Local variables
                bool rv; // r1+0x39

                {
                    // Range: 0x8046D458 -> 0x8046D458
                    // Local variables
                    class GASFunctionRef ctorFunc; // r1+0x3D8

                    {
                        // Range: 0x8046D458 -> 0x8046D458
                        // Local variables
                        class GASObjectInterface * obj; // r17

                        {
                            // Range: 0x8046D458 -> 0x8046D458
                            // Local variables
                            class GASValue prototypeVal; // r1+0x3C8

                            {
                                // Range: 0x8046D458 -> 0x8046D458
                                // Local variables
                                class GASObject * prototype; // r0
                            }
                        }
                    }
                }
            }
            {
                // Range: 0x8046D458 -> 0x8046D458
                // Local variables
                class GASFunctionRef subClassCtor; // r1+0x390
                class GASFunctionRef superClassCtor; // r1+0x39C
                class GASValue subClassCtorVal; // r1+0x3A8
                class GASValue superClassCtorVal; // r1+0x3B8

                {
                    // Range: 0x8046D458 -> 0x8046D458
                    // Local variables
                    class GASValue superProtoVal; // r1+0x380
                }
            }
            {
                // Range: 0x8046D458 -> 0x8047231C
                // Local variables
                int NextPc; // r21
                int length; // r17

                {
                    // Range: 0x8046D458 -> 0x8046D458
                    // Local variables
                    int frame; // r0
                }
                {
                    // Range: 0x8046D458 -> 0x8046D458
                    // Local variables
                    char * ptargetPath; // r18
                    unsigned int urlLen; // r0
                    char * purl; // r19
                }
                {
                    // Range: 0x8046D458 -> 0x8046D458
                    // Local variables
                    int reg; // r17

                    {
                        // Range: 0x8046D458 -> 0x8046D458
                        // Local variables
                        class GASObjectInterface * piobj; // r0
                        class GASString s0; // r1+0x108
                    }
                    {
                        // Range: 0x8046D458 -> 0x8046D458
                        // Local variables
                        class GASObjectInterface * piobj; // r0
                        class GASString s0; // r1+0x104
                    }
                }
                {
                    // Range: 0x8046D458 -> 0x8046D458
                    {
                        // Range: 0x8046D458 -> 0x8046D458
                        // Local variables
                        unsigned int skipCount; // r17
                        unsigned int frame; // r18

                        {
                            // Range: 0x8046D458 -> 0x8046D458
                            // Local variables
                            unsigned int curpc; // r6

                            {
                                // Range: 0x8046D458 -> 0x8046D458
                                // Local variables
                                unsigned int i; // r7

                                {
                                    // Range: 0x8046D458 -> 0x8046D458
                                    // Local variables
                                    unsigned char cmd; // r0
                                }
                            }
                        }
                    }
                }
                {
                    // Range: 0x8046D458 -> 0x8046D458
                    // Local variables
                    char * ptargetName; // r17

                    {
                        // Range: 0x8046D458 -> 0x8046D458
                        // Local variables
                        class GFxASCharacter * ptarget; // r0
                        class GASString targetName; // r1+0x100
                    }
                }
                {
                    // Range: 0x8046D458 -> 0x8046D458
                    // Local variables
                    class GFxSprite * psprite; // r0
                    char * pframeLabel; // r17
                }
                {
                    // Range: 0x8046D458 -> 0x8046D46C
                    // Local variables
                    class GASValue FunctionValue; // r1+0x360
                    class GASLocalFrame * plocalFrame; // r18
                    class GASFunctionRef funcRef; // r1+0x370
                    int length; // r4
                    unsigned short flags; // r0
                    int nargs; // r19
                    class GASString name; // r1+0xFC
                    int i; // r20

                    {
                        // Range: 0x8046D458 -> 0x8046D458
                        // Local variables
                        int n; // r18

                        {
                            // Range: 0x8046D458 -> 0x8046D458
                            // Local variables
                            class GASString argstr; // r1+0xF8
                            unsigned int length; // r0
                            int ArgRegister; // r17
                        }
                    }
                }
                {
                    // Range: 0x8046D46C -> 0x8046D46C
                    // Local variables
                    int BlockEnd; // r17

                    {
                        // Range: 0x8046D46C -> 0x8046D46C
                        // Local variables
                        class GFxASCharacter * pwithChar; // r0
                    }
                    {
                        // Range: 0x8046D46C -> 0x8046D46C
                        // Local variables
                        class GASObject * pwithObj; // r0
                    }
                }
                {
                    // Range: 0x8046D46C -> 0x8046D46C
                    // Local variables
                    int i; // r20

                    {
                        // Range: 0x8046D46C -> 0x8046D46C
                        // Local variables
                        long type; // r0

                        {
                            // Range: 0x8046D46C -> 0x8046D46C
                            // Local variables
                            int reg; // r19

                            {
                                // Range: 0x8046D46C -> 0x8046D46C
                                // Local variables
                                class GASObjectInterface * piobj; // r0
                                class GASString s0; // r1+0xF4
                            }
                            {
                                // Range: 0x8046D46C -> 0x8046D46C
                                // Local variables
                                class GASObjectInterface * piobj; // r0
                                class GASString s0; // r1+0xF0
                            }
                        }
                        {
                            // Range: 0x8046D46C -> 0x8046D46C
                            // Local variables
                            unsigned int id; // r0
                        }
                        {
                            // Range: 0x8046D46C -> 0x8046D46C
                            // Local variables
                            class GASString str; // r1+0xEC
                        }
                        {
                            // Range: 0x8046D46C -> 0x8046D46C
                            // Local variables
                            class @class u; // r1+0xE8
                        }
                        {
                            // Range: 0x8046D46C -> 0x8046D46C
                            // Local variables
                            class GASValue nullValue; // r1+0x350
                        }
                        {
                            // Range: 0x8046D46C -> 0x8046D46C
                            // Local variables
                            bool BoolVal; // r1+0x38
                        }
                        {
                            // Range: 0x8046D46C -> 0x8046D46C
                            // Local variables
                            class @class u; // r1+0x1B8
                        }
                        {
                            // Range: 0x8046D46C -> 0x8046D46C
                            // Local variables
                            long val; // r1+0xE4
                        }
                        {
                            // Range: 0x8046D46C -> 0x8046D46C
                            // Local variables
                            unsigned int id; // r0
                        }
                    }
                }
                {
                    // Range: 0x8046D46C -> 0x8046D46C
                    // Local variables
                    class GASString url; // r1+0xDC
                    class GASString targetPath; // r1+0xE0
                    unsigned char method; // r0

                    {
                        // Range: 0x8046D46C -> 0x8046D46C
                        // Local variables
                        int level; // r0
                        char * ptail; // r1+0xD8
                        enum LoadMethod loadMethod; // r18
                    }
                }
                {
                    // Range: 0x8046D46C -> 0x804720A4
                    // Local variables
                    class GASValue FunctionValue; // r1+0x330
                    class GASLocalFrame * plocalFrame; // r18
                    class GASFunctionRef funcRef; // r1+0x340
                    int length; // r4
                    int nargs; // r18
                    class GASString name; // r1+0xD4
                    int i; // r17

                    {
                        // Range: 0x8046D46C -> 0x80471DC0
                        // Local variables
                        int n; // r20

                        {
                            // Range: 0x8046D46C -> 0x80471DC0
                            // Local variables
                            class GASString argstr; // r1+0xD0
                        }
                    }
                }
                {
                    // Range: 0x804720A4 -> 0x80472108
                    // Local variables
                    bool test; // r0
                    short offset; // r18
                }
                {
                    // Range: 0x80472108 -> 0x80472144
                    // Local variables
                    class GFxSprite * psprite; // r0
                }
                {
                    // Range: 0x80472148 -> 0x80472318
                    // Local variables
                    bool success; // r20
                    class GFxASCharacter * target; // r19
                    int sceneOffset; // r18
                    unsigned char optionFlag; // r0

                    {
                        // Range: 0x8047217C -> 0x8047229C
                        // Local variables
                        unsigned int frameNumber; // r1+0xC4
                        int i; // r24
                        int mbLength; // r0
                        class GASString str; // r1+0xCC

                        {
                            // Range: 0x804721A8 -> 0x80472230
                            // Local variables
                            class GASString targetStr; // r1+0xC8
                        }
                    }
                    {
                        // Range: 0x804722B0 -> 0x804722F0
                        // Local variables
                        int FrameNumber; // r0
                    }
                }
            }
        }
    }

    // References
    // -> struct {} __vt__Q215GASActionBuffer37EnumerateOpVisitor;
    // -> struct {} __vt__23GASCustomFunctionObject;
    // -> struct {} __vt__9GASFnCall;
    // -> struct {} __vt__15GFxActionLogger;
}
// signature: GASActionBuffer::EnumerateOpVisitor::Visit(const GASString &, const GASValue &, unsigned char)
// Range: 0x80481020 -> 0x8048107C
void GASActionBuffer::EnumerateOpVisitor::Visit(class EnumerateOpVisitor * this /* r30 */, class GASString & name /* r31 */) {
}
// signature: GASEnvironment::SetTarget(GFxASCharacter *)
// Range: 0x80475780 -> 0x804757C0
void GASEnvironment::SetTarget(class GASEnvironment * this /* r31 */) {
}
// signature: GASEnvironment::SetInvalidTarget(GFxASCharacter *)
// Range: 0x804757C0 -> 0x80475800
void GASEnvironment::SetInvalidTarget(class GASEnvironment * this /* r31 */) {
}
// Range: 0x80475800 -> 0x80475864
void GASEnvironment::SetTargetOnConstruct(class GASEnvironment * this /* r30 */, class GFxASCharacter * ptarget /* r31 */) {
}
// Range: 0x80475870 -> 0x80475884
class GFxLog * GASEnvironment::GetLog() const {
}
// Range: 0x80475890 -> 0x804758C4
bool GASEnvironment::IsVerboseAction() const {
}
// Range: 0x804758D0 -> 0x8047590C
bool GASEnvironment::IsVerboseActionErrors() const {
}
// Range: 0x80475910 -> 0x80475924
class GFxMovieRoot * GASEnvironment::GetMovieRoot() const {
}
// Range: 0x80475930 -> 0x80475A60
bool GASEnvironment::GetVariable(class GASEnvironment * this /* r25 */, class GASString & varname /* r26 */, class GASValue * presult /* r27 */, class garray * pwithStack /* r28 */, class GFxASCharacter * * ppnewTarget /* r31 */, class GASValue * powner /* r29 */, unsigned int excludeFlags /* r30 */) const {
    {
        // Range: 0x804759A0 -> 0x80475A48
        // Local variables
        bool retVal; // r31
        class GASValue owner; // r1+0x8
    }
}
// Range: 0x80475A60 -> 0x80476080
bool GASEnvironment::IsAvailable(class GASEnvironment * this /* r28 */, class GASString & varname /* r29 */, class garray * pwithStack /* r30 */) const {
    // Local variables
    class GFxASCharacter * target; // r0
    class GASString path; // r1+0x10
    class GASString var; // r1+0xC
    class GASValue val; // r1+0x18

    {
        // Range: 0x80475C1C -> 0x80475CDC
        // Local variables
        int i; // r26
    }
    {
        // Range: 0x80475EE8 -> 0x80475FA0
        // Local variables
        int level; // r4
        char * ptail; // r1+0x8
    }
}
// Range: 0x80476120 -> 0x804768BC
bool GASEnvironment::GetVariableRaw(class GASEnvironment * this /* r25 */, class GASString & varname /* r26 */, class GASValue * presult /* r27 */, class garray * pwithStack /* r28 */, class GASValue * powner /* r29 */, unsigned int excludeFlags /* r31 */) const {
    {
        // Range: 0x8047619C -> 0x80476294
        // Local variables
        int i; // r23
    }
    {
        // Range: 0x804762D8 -> 0x8047658C
        // Local variables
        class GASLocalFrame * pLocFr; // r0

        {
            // Range: 0x8047633C -> 0x80476550
            {
                // Range: 0x80476374 -> 0x80476550
                // Local variables
                class GASFunctionRef __ctor__; // r1+0x40
                class GASValue thisVal; // r1+0x50
            }
        }
    }
    {
        // Range: 0x80476684 -> 0x80476810
        // Local variables
        int level; // r4
        char * ptail; // r1+0x8

        {
            // Range: 0x804767C0 -> 0x80476810
            // Local variables
            class GFxASCharacter * lm; // r23
        }
    }

    // References
    // -> struct {} __vt__14GASSuperObject;
}
// Range: 0x804769D0 -> 0x80476BB4
bool GASEnvironment::FindOwnerOfMember(class GASEnvironment * this /* r25 */, class GASString & varname /* r26 */, class GASValue * presult /* r27 */, class garray * pwithStack /* r28 */) const {
    {
        // Range: 0x80476A0C -> 0x80476AF0
        // Local variables
        int i; // r29
    }
}
// Range: 0x80476BC0 -> 0x80476E0C
bool GASEnvironment::SetVariable(class GASEnvironment * this /* r28 */, class GASString & varname /* r29 */, class GASValue & val /* r30 */, class garray * pwithStack /* r26 */, bool doDisplayErrors /* r31 */) {
    {
        // Range: 0x80476BE8 -> 0x80476C4C
        // Local variables
        class GASString vs; // r1+0x10
    }
    {
        // Range: 0x80476C9C -> 0x80476DB0
        // Local variables
        class GASValue curval; // r1+0x28
        class GASString var; // r1+0xC
        class GASValue owner; // r1+0x38

        {
            // Range: 0x80476CE4 -> 0x80476D70
            // Local variables
            class GASObjectInterface * pobj; // r0
        }
    }
}
// Range: 0x80476E10 -> 0x80476F88
void GASEnvironment::SetVariableRaw(class GASEnvironment * this /* r24 */, class GASString & varname /* r25 */, class GASValue & val /* r26 */, class garray * pwithStack /* r27 */) {
    // Local variables
    class GASValue * value; // r0

    {
        // Range: 0x80476E3C -> 0x80476F00
        // Local variables
        int i; // r28

        {
            // Range: 0x80476E3C -> 0x80476F00
            // Local variables
            class GASValue dummy; // r1+0x10
        }
    }
}
// Range: 0x80476F90 -> 0x8047701C
void GASEnvironment::SetLocal(class GASEnvironment * this /* r29 */, class GASString & varname /* r30 */, class GASValue & val /* r31 */) {
    // Local variables
    class GASValue * pvalue; // r0
}
// Range: 0x80477020 -> 0x8047712C
void GASEnvironment::AddLocal(class GASEnvironment * this /* r27 */, class GASString & varname /* r28 */, class GASValue & val /* r29 */) {
}
// Range: 0x804785C0 -> 0x80478650
void GASEnvironment::DeclareLocal(class GASEnvironment * this /* r30 */, class GASString & varname /* r31 */) {
    // Local variables
    class GASValue * pvalue; // r0
}
// signature: GASEnvironment::GetMember(const GASString &, GASValue *) const
// Range: 0x80478650 -> 0x8047866C
bool GASEnvironment::GetMember() const {
}
// Range: 0x80478950 -> 0x80478AB0
bool GASEnvironment::DeleteMember(class GASEnvironment * this /* r30 */, class GASString & name /* r31 */) {
}
// signature: GASEnvironment::VisitMembers(GASObjectInterface::MemberVisitor *, unsigned int) const
// Range: 0x80479160 -> 0x8047934C
void GASEnvironment::VisitMembers(class MemberVisitor * pvisitor /* r29 */) const {
}
// signature: GASEnvironment::LocalRegisterPtr(unsigned int)
// Range: 0x80479350 -> 0x804793B4
class GASValue * GASEnvironment::LocalRegisterPtr(class GASEnvironment * this /* r31 */) {
}
// Range: 0x80479490 -> 0x804795F0
class GASValue * GASEnvironment::FindLocal(class GASEnvironment * this /* r28 */, class GASString & varname /* r29 */) const {
}
// Range: 0x80479870 -> 0x804799D0
class GASValue * GASEnvironment::FindLocal(class GASEnvironment * this /* r28 */, class GASString & varname /* r29 */) {
}
// Range: 0x804799D0 -> 0x80479B48
bool GASEnvironment::FindLocal(class GASEnvironment * this /* r28 */, class GASString & varname /* r29 */, class GASValue * pvalue /* r30 */) const {
}
// signature: GASEnvironment::GetTopLocalFrame(int) const
// Range: 0x80479B50 -> 0x80479B78
class GASLocalFrame * GASEnvironment::GetTopLocalFrame() const {
}
// Range: 0x80479B80 -> 0x80479E08
class GASLocalFrame * GASEnvironment::CreateNewLocalFrame(class GASEnvironment * this /* r28 */) {
    // References
    // -> struct {} __vt__13GASLocalFrame;
}
// Range: 0x8047A060 -> 0x8047A25C
bool GASEnvironment::ParsePath(class GASStringContext * psc /* r27 */, class GASString & varPath /* r28 */, class GASString * ppath /* r29 */, class GASString * pvar /* r30 */) {
    // Local variables
    int colonIndex; // r31
    char * p; // r0
}
// signature: GASEnvironment::IsPath(const GASString &)
// Range: 0x8047A270 -> 0x8047A318
bool GASEnvironment::IsPath() {
}
// signature: GASEnvironment::FindTargetByValue(const GASValue &)
// Range: 0x8047A320 -> 0x8047A3C8
class GFxASCharacter * GASEnvironment::FindTargetByValue(class GASEnvironment * this /* r31 */) {
}
// signature: GASEnvironment::FindVariable(const GASString &, GASValue *, const std::garray<GASWithStackEntry> *, GFxASCharacter **, GASValue *, bool, GASString *) const
// Range: 0x8047A3D0 -> 0x8047AC60
bool GASEnvironment::FindVariable(class GASEnvironment * this /* r25 */, class GASValue * presult /* r26 */, class garray * pwithStack /* r27 */, class GFxASCharacter * * pplastTarget /* r28 */, class GASValue * powner /* r29 */, bool onlyTargets /* r30 */, class GASString * varName /* r31 */) const {
    // Local variables
    class GASValue current; // r1+0x38
    bool currentFound; // r19
    char * p; // r20
    unsigned long plength; // r21
    char * delim; // r18
    class StringTokenizer parser; // r1+0x28
    char sep; // r17

    {
        // Range: 0x8047A4D8 -> 0x8047AA1C
        // Local variables
        class GASString & token; // r16

        {
            // Range: 0x8047A4DC -> 0x8047A980
            // Local variables
            bool memberFound; // r20
            class GASValue member; // r1+0x18

            {
                // Range: 0x8047A544 -> 0x8047A6C8
                // Local variables
                class GFxASCharacter * m; // r3
            }
            {
                // Range: 0x8047A72C -> 0x8047A77C
                // Local variables
                class GASObjectInterface * iobj; // r0
            }
        }
    }

    // References
    // -> static char * onlySlashesDelim;
    // -> static char * regularDelim;
}
// Range: 0x8047AC90 -> 0x8047AEE0
class GFxASCharacter * GASEnvironment::FindTarget(class GASEnvironment * this /* r26 */, class GASString & path /* r27 */, unsigned int excludeFlags /* r28 */) const {
    // Local variables
    class GFxASCharacter * env; // r30
    char * p; // r29
    class GASString subpart; // r1+0x10
}
// signature: GASEnvironment::OperatorNew(const GASFunctionRef &, int, int)
// Range: 0x8047AEE0 -> 0x8047B2E8
class GPtr GASEnvironment::OperatorNew(class GPtr * pnewObj /* r27 */, class GASEnvironment * this /* r28 */, class GASFunctionRef & constructor /* r29 */, int nargs /* r30 */, int argsTopOff /* r31 */) {
    // Local variables
    class GASValue newObjVal; // r1+0x78
    class GASValue prototypeVal; // r1+0x68
    class GASValue result; // r1+0x58

    {
        // Range: 0x8047B118 -> 0x8047B210
        // Local variables
        class GASFunctionRef ctor; // r1+0x48
    }
}
// signature: GASEnvironment::OperatorNew(const GASString &, int, int)
// Range: 0x8047B3B0 -> 0x8047B494
class GPtr GASEnvironment::OperatorNew(class GASEnvironment * this /* r29 */, int nargs /* r30 */, int argsTopOff /* r31 */) {
    // Local variables
    class GASValue ctor; // r1+0x18
}
// signature: GASEnvironment::GetConstructor(GASBuiltinType)
// Range: 0x8047B4A0 -> 0x8047B554
class GASFunctionRef GASEnvironment::GetConstructor() {
    // Local variables
    class GASValue ctor; // r1+0x8
}
// Range: 0x8047B560 -> 0x8047B728
void GASEnvironment::ForceReleaseLocalFrames() {
    {
        // Range: 0x8047B57C -> 0x8047B5E8
        {
            // Range: 0x8047B57C -> 0x8047B5E8
            // Local variables
            class GASValue & value; // r0
        }
    }
}
// Range: 0x8047B730 -> 0x8047B848
class GASValue GASEnvironment::PrimitiveToTempObject(int index /* r0 */) {
    // Local variables
    enum GASBuiltinType ctorName; // r5
}
// Range: 0x8047B850 -> 0x8047BB98
bool GASEnvironment::RecursionGuardStart(class GASEnvironment * this /* r28 */, enum RecursionType type /* r29 */, void * ptr /* r1+0x8 */, int maxRecursionAllowed /* r30 */) {
}
// signature: GASEnvironment::RecursionGuardEnd(GASEnvironment::RecursionType, const void *)
// Range: 0x8047D2E0 -> 0x8047D4E0
void GASEnvironment::RecursionGuardEnd() {
}
// Range: 0x8047D780 -> 0x8047D7B0
enum GASBuiltinType GFxEventId::GetFunctionNameBuiltinType() const {
    // References
    // -> static enum GASBuiltinType functionTypes[30];
}
// signature: GFxEventId::GetFunctionName(GASStringContext *) const
// Range: 0x8047D7B0 -> 0x8047D800
class GASString GFxEventId::GetFunctionName() const {
    // References
    // -> static enum GASBuiltinType functionTypes[30];
}
// Range: 0x8047D800 -> 0x8047D8B4
int GFxEventId::ConvertToButtonKeyCode() const {
    // Local variables
    int kc; // r5
}
// Range: 0x8047D8C0 -> 0x8047DABC
void GASLocalFrame::ReleaseFramesForLocalFuncs(class GASLocalFrame * this /* r29 */) {
    {
        // Range: 0x8047D8DC -> 0x8047D948
        {
            // Range: 0x8047D8DC -> 0x8047D948
            // Local variables
            class GASValue & value; // r0
        }
    }
}
// Range: 0x8047DCB0 -> 0x8047E3A8
void GFxDisasm::LogDisasm(class GFxDisasm * this /* r24 */, unsigned char * InstructionData /* r25 */) {
    // Local variables
    int actionId; // r22
    class GASInstInfo * info; // r23
    enum ArgFormatType fmt; // r26

    {
        // Range: 0x8047DD3C -> 0x8047E37C
        // Local variables
        int length; // r27

        {
            // Range: 0x8047DD70 -> 0x8047DD90
            // Local variables
            int i; // r22
        }
        {
            // Range: 0x8047DDC0 -> 0x8047DDE0
            // Local variables
            int i; // r22
        }
        {
            // Range: 0x8047DE38 -> 0x8047DE64
            // Local variables
            int val; // r5
        }
        {
            // Range: 0x8047DE68 -> 0x8047E11C
            // Local variables
            int i; // r26

            {
                // Range: 0x8047DE7C -> 0x8047E114
                // Local variables
                int type; // r22

                {
                    // Range: 0x8047DE7C -> 0x8047DE7C
                    // Local variables
                    class @class u; // r1+0x18
                }
                {
                    // Range: 0x8047DE7C -> 0x8047DE7C
                    // Local variables
                    int reg; // r0
                }
                {
                    // Range: 0x8047DE7C -> 0x8047DE7C
                    // Local variables
                    int boolVal; // r0
                }
                {
                    // Range: 0x8047DE7C -> 0x8047E094
                    // Local variables
                    class @class u; // r1+0x20
                }
                {
                    // Range: 0x8047E098 -> 0x8047E0CC
                    // Local variables
                    long val; // r5
                }
                {
                    // Range: 0x8047E0D0 -> 0x8047E0EC
                    // Local variables
                    int id; // r0
                }
                {
                    // Range: 0x8047E0F0 -> 0x8047E114
                    // Local variables
                    int id; // r5
                }
            }
        }
        {
            // Range: 0x8047E120 -> 0x8047E1D0
            // Local variables
            int count; // r23
            int i; // r22

            {
                // Range: 0x8047E144 -> 0x8047E1C4
                // Local variables
                int ct; // r26
            }
        }
        {
            // Range: 0x8047E1D4 -> 0x8047E2D8
            // Local variables
            unsigned short flags; // r0
            int argCount; // r23
            char * functionName; // r23
            int i; // r22

            {
                // Range: 0x8047E264 -> 0x8047E2AC
                // Local variables
                int argi; // r26

                {
                    // Range: 0x8047E264 -> 0x8047E2AC
                    // Local variables
                    char * argName; // r29
                    int argRegister; // r27
                }
            }
        }
        {
            // Range: 0x8047E2DC -> 0x8047E37C
            // Local variables
            int argCount; // r23
            char * functionName; // r23
            int i; // r22

            {
                // Range: 0x8047E318 -> 0x8047E350
                // Local variables
                int argi; // r26

                {
                    // Range: 0x8047E318 -> 0x8047E350
                    // Local variables
                    char * argName; // r27
                }
            }
        }
    }

    // References
    // -> static class GASInstInfo InstructionTable[100];
}
