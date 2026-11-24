/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxFontCacheManager.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804B5870 -> 0x804BE718
*/
// total size: 0x9F4
class GFxFontCacheManagerImpl : public GNewOverrideBase {
    // Members
    class GRenderer * pRenderer; // offset 0x0, size 0x4
    class FontDisposeHandler FontDisposer; // offset 0x4, size 0x8
    class RenEventHandler FrameHandler; // offset 0xC, size 0x8
    bool LockAllInFrame; // offset 0x14, size 0x1
    bool RasterCacheWarning; // offset 0x15, size 0x1
    bool VectorCacheWarning; // offset 0x16, size 0x1
    class GPodStructAllocator BatchPackageStorage; // offset 0x18, size 0x10
    class GPodDList BatchPackageQueue; // offset 0x28, size 0x8
    class GFxGlyphRasterCache Cache; // offset 0x30, size 0x7B0
    unsigned char FontSizeMap[256]; // offset 0x7E0, size 0x100
    class ghash_set KnownFonts; // offset 0x8E0, size 0x4
    class GPodStructAllocator VectorGlyphShapeStorage; // offset 0x8E4, size 0x10
    class GPodDList VectorGlyphShapeList; // offset 0x8F4, size 0x8
    class ghash VectorGlyphCache; // offset 0x8FC, size 0x4
    class GStroker Stroker; // offset 0x900, size 0x30
    class GCompoundShape TmpShape1; // offset 0x930, size 0x50
    class GCompoundShape TmpShape2; // offset 0x980, size 0x50
    unsigned int MaxVectorCacheSize; // offset 0x9D0, size 0x4
    float FauxItalicAngle; // offset 0x9D4, size 0x4
    float FauxBoldRatio; // offset 0x9D8, size 0x4
    class GMatrix2D ItalicMtx; // offset 0x9DC, size 0x18
};
// total size: 0x8
class FontDisposeHandler : public DisposeHandler {
    // Members
    class GFxFontCacheManagerImpl * pCache; // offset 0x4, size 0x4
};
// total size: 0x8
class RenEventHandler : public EventHandler {
    // Members
    class GFxFontCacheManagerImpl * pSelf; // offset 0x4, size 0x4
};
// total size: 0x10
class GPodStructAllocator {
    // Members
    class BlockType * FirstBlock; // offset 0x0, size 0x4
    class BlockType * LastBlock; // offset 0x4, size 0x4
    unsigned int NumElementsInBlock; // offset 0x8, size 0x4
    class GFxBatchPackage * FirstEmptySlot; // offset 0xC, size 0x4
};
// total size: 0x7F4
class BlockType {
    // Members
    class GFxBatchPackage Data[127]; // offset 0x0, size 0x7F0
    class BlockType * pNext; // offset 0x7F0, size 0x4
};
// total size: 0x10
class GFxBatchPackage : public GPodDListNode {
    // Members
    class GFxBatchPackageData * Package; // offset 0x8, size 0x4
    class GFxFontCacheManagerImpl * Owner; // offset 0xC, size 0x4
};
// total size: 0x8
class GPodDListNode {
    // Members
    class GFxBatchPackage * pPrev; // offset 0x0, size 0x4
    class GFxBatchPackage * pNext; // offset 0x4, size 0x4
};
// total size: 0x28
class GFxBatchPackageData : public GNewOverrideBase {
    // Members
    class ghash BatchDesc; // offset 0x0, size 0x4
    class garray Batch; // offset 0x4, size 0xC
    class garray BatchVerifier; // offset 0x10, size 0xC
    class CachedData BatchCache; // offset 0x1C, size 0x8
    bool VectorRenderingRequired; // offset 0x24, size 0x1
    bool FailedGlyphs; // offset 0x25, size 0x1
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
    class BitmapDesc * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0xC
class garray_base {
    // Members
    class GlyphVerifier * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x1C
class GlyphVerifier {
    // Members
    class GFxGlyphParam GlyphParam; // offset 0x0, size 0xC
    class GFxGlyphNode * pGlyph; // offset 0xC, size 0x4
    unsigned short FontSize; // offset 0x10, size 0x2
    unsigned short GlyphScale; // offset 0x12, size 0x2
    class GTexture * pTexture; // offset 0x14, size 0x4
    unsigned short TextureWidth; // offset 0x18, size 0x2
    unsigned short TextureHeight; // offset 0x1A, size 0x2
};
// total size: 0xC
class GFxGlyphParam {
    // Members
    class GFxFontResource * pFont; // offset 0x0, size 0x4
    unsigned short GlyphIndex; // offset 0x4, size 0x2
    unsigned char FontSize; // offset 0x6, size 0x1
    unsigned char Flags; // offset 0x7, size 0x1
    unsigned char BlurX; // offset 0x8, size 0x1
    unsigned char BlurY; // offset 0x9, size 0x1
    unsigned char BlurStrength; // offset 0xA, size 0x1
    signed char Outline; // offset 0xB, size 0x1
};
// total size: 0x24
class GFxGlyphNode {
    // Members
    class GFxGlyphParam Param; // offset 0x0, size 0xC
    class GFxGlyphDynaSlot * pSlot; // offset 0xC, size 0x4
    class GFxGlyphNode * pNext; // offset 0x10, size 0x4
    class GFxGlyphNode * pNex2; // offset 0x14, size 0x4
    class GFxGlyphRect Rect; // offset 0x18, size 0x8
    class GPoint Origin; // offset 0x20, size 0x4
};
// total size: 0x28
class GFxGlyphDynaSlot : public GPodDListNode {
    // Members
    class GFxGlyphNode * pRoot; // offset 0x8, size 0x4
    class GFxGlyphDynaSlot * pPrevInBand; // offset 0xC, size 0x4
    class GFxGlyphDynaSlot * pNextInBand; // offset 0x10, size 0x4
    class GFxGlyphDynaSlot * pPrevActive; // offset 0x14, size 0x4
    class GFxGlyphDynaSlot * pNextActive; // offset 0x18, size 0x4
    class GFxGlyphBand * pBand; // offset 0x1C, size 0x4
    unsigned short TextureId; // offset 0x20, size 0x2
    unsigned short x; // offset 0x22, size 0x2
    unsigned short w; // offset 0x24, size 0x2
    unsigned short Failures; // offset 0x26, size 0x2
};
// total size: 0x8
class GPodDListNode {
    // Members
    class GFxGlyphDynaSlot * pPrev; // offset 0x0, size 0x4
    class GFxGlyphDynaSlot * pNext; // offset 0x4, size 0x4
};
// total size: 0x30
class GFxGlyphBand {
    // Members
    unsigned short TextureId; // offset 0x0, size 0x2
    unsigned short y; // offset 0x2, size 0x2
    unsigned short h; // offset 0x4, size 0x2
    unsigned short RightSpace; // offset 0x6, size 0x2
    class GPodDList2 Slots; // offset 0x8, size 0x28
};
// total size: 0x28
class GPodDList2 {
    // Members
    class GFxGlyphDynaSlot Root; // offset 0x0, size 0x28
};
// total size: 0x8
class GFxGlyphRect {
    // Members
    unsigned short x; // offset 0x0, size 0x2
    unsigned short y; // offset 0x2, size 0x2
    unsigned short w; // offset 0x4, size 0x2
    unsigned short h; // offset 0x6, size 0x2
};
// total size: 0x4
class GPoint {
    // Members
    short x; // offset 0x0, size 0x2
    short y; // offset 0x2, size 0x2
};
// total size: 0x8
class GPodDList {
    // Members
    class GPodDListNode Root; // offset 0x0, size 0x8
};
// total size: 0x7B0
class GFxGlyphRasterCache : public GNewOverrideBase {
    // Members
    unsigned int TextureWidth; // offset 0x0, size 0x4
    unsigned int TextureHeight; // offset 0x4, size 0x4
    unsigned int MaxNumTextures; // offset 0x8, size 0x4
    unsigned int MaxSlotHeight; // offset 0xC, size 0x4
    unsigned int SlotPadding; // offset 0x10, size 0x4
    float ScaleU; // offset 0x14, size 0x4
    float ScaleV; // offset 0x18, size 0x4
    class GPodBVector GlyphsToUpdate; // offset 0x1C, size 0x14
    class GPodVector RectsToUpdate; // offset 0x30, size 0xC
    class TextureType Textures[32]; // offset 0x3C, size 0x280
    class GPtr TexUpdBuffer; // offset 0x2BC, size 0x4
    class GFxTextureUpdatePacker TexUpdPacker; // offset 0x2C0, size 0x14
    class GPtr KnockOutCopy; // offset 0x2D4, size 0x4
    class GPodVector BlurStack; // offset 0x2D8, size 0xC
    class GPodVector BlurSum; // offset 0x2E4, size 0xC
    class GCompoundShape Shape; // offset 0x2F0, size 0x50
    class GRasterizer Rasterizer; // offset 0x340, size 0x70
    class GFxGlyphScanlineFilter ScanlineFilter; // offset 0x3B0, size 0x300
    class GFxGlyphFitter Fitter; // offset 0x6B0, size 0x7C
    class GFxGlyphSlotQueue SlotQueue; // offset 0x72C, size 0x84
};
// total size: 0x14
class GPodBVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int NumBlocks; // offset 0x4, size 0x4
    unsigned int MaxBlocks; // offset 0x8, size 0x4
    class GlyphUpdateType * * Blocks; // offset 0xC, size 0x4
    unsigned int BlockPtrInc; // offset 0x10, size 0x4
};
// total size: 0x1C
class GlyphUpdateType {
    // Members
    class UpdateRect Rect; // offset 0x0, size 0x18
    unsigned int TextureId; // offset 0x18, size 0x4
};
// total size: 0xC
class GPodVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int Capacity; // offset 0x4, size 0x4
    class UpdateRect * Array; // offset 0x8, size 0x4
};
// total size: 0x14
class TextureType {
    // Members
    class GTexture * pTexture; // offset 0x0, size 0x4
    class TextureEventHandler Handler; // offset 0x4, size 0xC
    unsigned int NumGlyphsToUpdate; // offset 0x10, size 0x4
};
// total size: 0xC
class TextureEventHandler : public ChangeHandler {
    // Members
    class GFxGlyphRasterCache * pCache; // offset 0x4, size 0x4
    unsigned int TextureId; // offset 0x8, size 0x4
};
// total size: 0x14
class GFxTextureUpdatePacker {
    // Members
    unsigned int Width; // offset 0x0, size 0x4
    unsigned int Height; // offset 0x4, size 0x4
    unsigned int LastX; // offset 0x8, size 0x4
    unsigned int LastY; // offset 0xC, size 0x4
    unsigned int LastMaxHeight; // offset 0x10, size 0x4
};
// total size: 0xC
class GPodVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int Capacity; // offset 0x4, size 0x4
    unsigned char * Array; // offset 0x8, size 0x4
};
// total size: 0xC
class GPodVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int Capacity; // offset 0x4, size 0x4
    float * Array; // offset 0x8, size 0x4
};
// total size: 0x70
class GRasterizer {
    // Members
    enum FillRuleType FillRule; // offset 0x0, size 0x4
    float Gamma; // offset 0x4, size 0x4
    class GPodVector GammaLut; // offset 0x8, size 0xC
    class GPodBVector Cells; // offset 0x14, size 0x14
    class GPodVector SortedCells; // offset 0x28, size 0xC
    class GPodVector SortedYs; // offset 0x34, size 0xC
    class Cell CurrCell; // offset 0x40, size 0x10
    int MinX; // offset 0x50, size 0x4
    int MinY; // offset 0x54, size 0x4
    int MaxX; // offset 0x58, size 0x4
    int MaxY; // offset 0x5C, size 0x4
    int StartX; // offset 0x60, size 0x4
    int StartY; // offset 0x64, size 0x4
    int LastX; // offset 0x68, size 0x4
    int LastY; // offset 0x6C, size 0x4
};
enum FillRuleType {
    FillNonZero = 0,
    FillEvenOdd = 1,
};
// total size: 0x14
class GPodBVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int NumBlocks; // offset 0x4, size 0x4
    unsigned int MaxBlocks; // offset 0x8, size 0x4
    class Cell * * Blocks; // offset 0xC, size 0x4
    unsigned int BlockPtrInc; // offset 0x10, size 0x4
};
// total size: 0x10
class Cell {
    // Members
    int x; // offset 0x0, size 0x4
    int y; // offset 0x4, size 0x4
    int Cover; // offset 0x8, size 0x4
    int Area; // offset 0xC, size 0x4
};
// total size: 0xC
class GPodVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int Capacity; // offset 0x4, size 0x4
    class Cell * * Array; // offset 0x8, size 0x4
};
// total size: 0xC
class GPodVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int Capacity; // offset 0x4, size 0x4
    class SortedY * Array; // offset 0x8, size 0x4
};
// total size: 0x8
class SortedY {
    // Members
    unsigned int Start; // offset 0x0, size 0x4
    unsigned int Count; // offset 0x4, size 0x4
};
// total size: 0x300
class GFxGlyphScanlineFilter {
    // Members
    unsigned char Primary[256]; // offset 0x0, size 0x100
    unsigned char Secondary[256]; // offset 0x100, size 0x100
    unsigned char Tertiary[256]; // offset 0x200, size 0x100
};
// total size: 0x7C
class GFxGlyphFitter {
    // Members
    int NominalFontHeight; // offset 0x0, size 0x4
    class GPodBVector Contours; // offset 0x4, size 0x14
    class GPodBVector Vertices; // offset 0x18, size 0x14
    class GPodVector Events; // offset 0x2C, size 0xC
    class GPodBVector LerpPairs; // offset 0x38, size 0x14
    class GPodVector LerpRampX; // offset 0x4C, size 0xC
    class GPodVector LerpRampY; // offset 0x58, size 0xC
    short MinX; // offset 0x64, size 0x2
    short MinY; // offset 0x66, size 0x2
    short MaxX; // offset 0x68, size 0x2
    short MaxY; // offset 0x6A, size 0x2
    enum DirType Direction; // offset 0x6C, size 0x4
    int UnitsPerPixelX; // offset 0x70, size 0x4
    int UnitsPerPixelY; // offset 0x74, size 0x4
    int SnappedHeight; // offset 0x78, size 0x4
};
// total size: 0x14
class GPodBVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int NumBlocks; // offset 0x4, size 0x4
    unsigned int MaxBlocks; // offset 0x8, size 0x4
    class ContourType * * Blocks; // offset 0xC, size 0x4
    unsigned int BlockPtrInc; // offset 0x10, size 0x4
};
// total size: 0x8
class ContourType {
    // Members
    unsigned int StartVertex; // offset 0x0, size 0x4
    unsigned int NumVertices; // offset 0x4, size 0x4
};
// total size: 0x14
class GPodBVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int NumBlocks; // offset 0x4, size 0x4
    unsigned int MaxBlocks; // offset 0x8, size 0x4
    class VertexType * * Blocks; // offset 0xC, size 0x4
    unsigned int BlockPtrInc; // offset 0x10, size 0x4
};
// total size: 0x4
class VertexType {
    // Members
    short x; // offset 0x0, size 0x2
    short y; // offset 0x2, size 0x2
};
// total size: 0xC
class GPodVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int Capacity; // offset 0x4, size 0x4
    short * Array; // offset 0x8, size 0x4
};
enum DirType {
    DirCW = 1,
    DirCCW = 2,
};
// total size: 0x84
class GFxGlyphSlotQueue {
    // Members
    unsigned int MinSlotSpace; // offset 0x0, size 0x4
    unsigned int FirstTexture; // offset 0x4, size 0x4
    unsigned int NumTextures; // offset 0x8, size 0x4
    unsigned int TextureWidth; // offset 0xC, size 0x4
    unsigned int TextureHeight; // offset 0x10, size 0x4
    unsigned int MaxSlotHeight; // offset 0x14, size 0x4
    unsigned int NumBandsInTexture; // offset 0x18, size 0x4
    class GPodStructAllocator Slots; // offset 0x1C, size 0x10
    class GPodDList SlotQueue; // offset 0x2C, size 0x8
    unsigned int SlotQueueSize; // offset 0x34, size 0x4
    class GPodDList2 ActiveSlots; // offset 0x38, size 0x28
    class GPodStructAllocator Glyphs; // offset 0x60, size 0x10
    class GPodVector Bands; // offset 0x70, size 0xC
    class ghash GlyphHTable; // offset 0x7C, size 0x4
    unsigned int NumUsedBands; // offset 0x80, size 0x4
};
// total size: 0x10
class GPodStructAllocator {
    // Members
    class BlockType * FirstBlock; // offset 0x0, size 0x4
    class BlockType * LastBlock; // offset 0x4, size 0x4
    unsigned int NumElementsInBlock; // offset 0x8, size 0x4
    class GFxGlyphDynaSlot * FirstEmptySlot; // offset 0xC, size 0x4
};
// total size: 0x10
class GPodStructAllocator {
    // Members
    class BlockType * FirstBlock; // offset 0x0, size 0x4
    class BlockType * LastBlock; // offset 0x4, size 0x4
    unsigned int NumElementsInBlock; // offset 0x8, size 0x4
    class GFxGlyphNode * FirstEmptySlot; // offset 0xC, size 0x4
};
// total size: 0xC
class GPodVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int Capacity; // offset 0x4, size 0x4
    class GFxGlyphBand * Array; // offset 0x8, size 0x4
};
// total size: 0x10
class GPodStructAllocator {
    // Members
    class BlockType * FirstBlock; // offset 0x0, size 0x4
    class BlockType * LastBlock; // offset 0x4, size 0x4
    unsigned int NumElementsInBlock; // offset 0x8, size 0x4
    class VectorGlyphShape * FirstEmptySlot; // offset 0xC, size 0x4
};
// total size: 0x9F0
class BlockType {
    // Members
    class VectorGlyphShape Data[127]; // offset 0x0, size 0x9EC
    class BlockType * pNext; // offset 0x9EC, size 0x4
};
// total size: 0x14
class VectorGlyphShape : public GPodDListNode {
    // Members
    class GFxFontResource * pFont; // offset 0x8, size 0x4
    unsigned short GlyphIndex; // offset 0xC, size 0x2
    unsigned short Flags; // offset 0xE, size 0x2
    class GFxShapeCharacterDef * pShape; // offset 0x10, size 0x4
};
// total size: 0x8
class GPodDListNode {
    // Members
    class VectorGlyphShape * pPrev; // offset 0x0, size 0x4
    class VectorGlyphShape * pNext; // offset 0x4, size 0x4
};
// total size: 0x30
class GStroker : public GStrokerTypes {
    // Members
    float Width; // offset 0x0, size 0x4
    float WidthAbs; // offset 0x4, size 0x4
    enum LineJoinType LineJoin; // offset 0x8, size 0x4
    enum LineCapType StartLineCap; // offset 0xC, size 0x4
    enum LineCapType EndLineCap; // offset 0x10, size 0x4
    float MiterLimit; // offset 0x14, size 0x4
    class GStrokePath Path; // offset 0x18, size 0x18
};
// total size: 0x1
class GStrokerTypes {};
enum LineJoinType {
    MiterJoin = 0,
    MiterBevelJoin = 1,
    MiterRoundJoin = 2,
    RoundJoin = 3,
    BevelJoin = 4,
};
enum LineCapType {
    ButtCap = 0,
    SquareCap = 1,
    RoundCap = 2,
};
// total size: 0x18
class GStrokePath {
    // Members
    class GPodBVector Path; // offset 0x0, size 0x14
    bool Closed; // offset 0x14, size 0x1
};
// total size: 0x14
class GPodBVector {
    // Members
    unsigned int Size; // offset 0x0, size 0x4
    unsigned int NumBlocks; // offset 0x4, size 0x4
    unsigned int MaxBlocks; // offset 0x8, size 0x4
    class GStrokeVertexType * * Blocks; // offset 0xC, size 0x4
    unsigned int BlockPtrInc; // offset 0x10, size 0x4
};
// total size: 0xC
class GStrokeVertexType {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float dist; // offset 0x8, size 0x4
};
// total size: 0x10
class RenderCaps {
    // Members
    unsigned long CapBits; // offset 0x0, size 0x4
    unsigned long VertexFormats; // offset 0x4, size 0x4
    unsigned long BlendModes; // offset 0x8, size 0x4
    unsigned long MaxTextureSize; // offset 0xC, size 0x4
};
// total size: 0x10
class Iterator {
    // Members
    class GFxTextLineBuffer * pLineBuffer; // offset 0x0, size 0x4
    unsigned int CurrentPos; // offset 0x4, size 0x4
    float YOffset; // offset 0x8, size 0x4
    bool StaticText; // offset 0xC, size 0x1
};
// total size: 0xBC
class GFxTextLineBuffer {
    // Members
    class garray Lines; // offset 0x0, size 0xC
    class GFxBatchPackage * pBatchPackage; // offset 0xC, size 0x4
    class GFxFontCacheManagerImpl * pCacheManager; // offset 0x10, size 0x4
    class GFxLineBufferGeometry Geom; // offset 0x14, size 0x64
    class GFxTextFieldParam Param; // offset 0x78, size 0x20
    class garray DummyStyle; // offset 0x98, size 0xC
    class garray DummyLineStyle; // offset 0xA4, size 0xC
    class TextLineAllocator LineAllocator; // offset 0xB0, size 0x1
    class GPtr pUnderlineDrawing; // offset 0xB4, size 0x4
    unsigned int LastHScrollOffset; // offset 0xB8, size 0x4
};
// total size: 0xC
class garray_base {
    // Members
    class Line * * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x2C
class Line {
    // Members
    unsigned long MemSize; // offset 0x0, size 0x4
    class @class __anon; // offset 0x4, size 0x28
    class LineData32 Data32; // offset 0x4, size 0x28
    class LineData8 Data8; // offset 0x4, size 0x1C
};
// total size: 0x28
class @class {
    // Members
    class LineData32 Data32; // offset 0x0, size 0x28
    class LineData8 Data8; // offset 0x0, size 0x1C
};
// total size: 0x28
class LineData32 {
    // Members
    unsigned long GlyphsCount; // offset 0x0, size 0x4
    unsigned long TextPos; // offset 0x4, size 0x4
    long OffsetX; // offset 0x8, size 0x4
    long OffsetY; // offset 0xC, size 0x4
    unsigned long Width; // offset 0x10, size 0x4
    unsigned long Height; // offset 0x14, size 0x4
    unsigned long ParagraphId; // offset 0x18, size 0x4
    unsigned long TextLength; // offset 0x1C, size 0x4
    unsigned short ParagraphModId; // offset 0x20, size 0x2
    unsigned short BaseLineOffset; // offset 0x22, size 0x2
    short Leading; // offset 0x24, size 0x2
};
// total size: 0x1C
class LineData8 {
    // Members
    unsigned long ParagraphId; // offset 0x0, size 0x4
    unsigned long TextPosAndLength; // offset 0x4, size 0x4
    long OffsetX; // offset 0x8, size 0x4
    long OffsetY; // offset 0xC, size 0x4
    unsigned short Width; // offset 0x10, size 0x2
    unsigned short Height; // offset 0x12, size 0x2
    unsigned short ParagraphModId; // offset 0x14, size 0x2
    unsigned short BaseLineOffset; // offset 0x16, size 0x2
    unsigned char GlyphsCount; // offset 0x18, size 0x1
    signed char Leading; // offset 0x19, size 0x1
};
// total size: 0x64
class GFxLineBufferGeometry {
    // Members
    unsigned int FirstVisibleLinePos; // offset 0x0, size 0x4
    class GRect VisibleRect; // offset 0x4, size 0x10
    unsigned int HScrollOffset; // offset 0x14, size 0x4
    class GMatrix2D SourceTextMatrix; // offset 0x18, size 0x18
    class GMatrix2D ViewportMatrix; // offset 0x30, size 0x18
    float HeightRatio; // offset 0x48, size 0x4
    class GPoint Translation; // offset 0x4C, size 0x8
    float BlurX; // offset 0x54, size 0x4
    float BlurY; // offset 0x58, size 0x4
    unsigned int SteadyCount; // offset 0x5C, size 0x4
    unsigned char Flags; // offset 0x60, size 0x1
};
// total size: 0x20
class GFxTextFieldParam {
    // Members
    class GFxGlyphParam TextParam; // offset 0x0, size 0xC
    class GFxGlyphParam ShadowParam; // offset 0xC, size 0xC
    class GColor ShadowColor; // offset 0x18, size 0x4
    short ShadowOffsetX; // offset 0x1C, size 0x2
    short ShadowOffsetY; // offset 0x1E, size 0x2
};
// total size: 0x1
class TextLineAllocator {};
// total size: 0x8
class iterator : public const_iterator {};
// total size: 0x8
class const_iterator {
    // Members
    class ghash_set * pHash; // offset 0x0, size 0x4
    unsigned long Index; // offset 0x4, size 0x4
};
// total size: 0x1C
class GlyphIterator {
    // Members
    class GlyphEntry * pGlyphs; // offset 0x0, size 0x4
    class GlyphEntry * pEndGlyphs; // offset 0x4, size 0x4
    class GFxFormatDataEntry * pNextFormatData; // offset 0x8, size 0x4
    class GFxTextLineHighlighterIterator * pHighlighter; // offset 0xC, size 0x4
    unsigned long Color; // offset 0x10, size 0x4
    class GPtr pFontHandle; // offset 0x14, size 0x4
    class GPtr pImage; // offset 0x18, size 0x4
};
// total size: 0x8
class GlyphEntry {
    // Members
    unsigned short Index; // offset 0x0, size 0x2
    unsigned short Advance; // offset 0x2, size 0x2
    unsigned short LenAndFontSize; // offset 0x4, size 0x2
    unsigned short Flags; // offset 0x6, size 0x2
};
// total size: 0x4
class GFxFormatDataEntry {
    // Members
    class GFxFontHandle * pFont; // offset 0x0, size 0x4
    class GFxTextImageDesc * pImage; // offset 0x0, size 0x4
    unsigned long Color; // offset 0x0, size 0x4
};
// total size: 0x40
class GFxTextImageDesc : public GRefCountBase {
    // Members
    class GPtr pImageShape; // offset 0x10, size 0x4
    class GPtr pSpriteShape; // offset 0x14, size 0x4
    int BaseLineX; // offset 0x18, size 0x4
    int BaseLineY; // offset 0x1C, size 0x4
    unsigned int ScreenWidth; // offset 0x20, size 0x4
    unsigned int ScreenHeight; // offset 0x24, size 0x4
    class GMatrix2D Matrix; // offset 0x28, size 0x18
};
// total size: 0x10
class GRefCountBase : public GRefCountBaseImpl {};
// total size: 0x1
class GFxTextLineHighlighterIterator {};
// total size: 0x4
class GPtr {
    // Members
    class GFxTextImageDesc * pObject; // offset 0x0, size 0x4
};
// total size: 0x10
class BatchInfo {
    // Members
    unsigned int Index; // offset 0x0, size 0x4
    unsigned int ImageUseCount; // offset 0x4, size 0x4
    unsigned int Count; // offset 0x8, size 0x4
    class GTexture * pTexture; // offset 0xC, size 0x4
};
// total size: 0x8
class BatchInfoKey {
    // Members
    class GTexture * pTexture; // offset 0x0, size 0x4
    unsigned int Layer; // offset 0x4, size 0x4
};
// total size: 0x8
class node_ref {
    // Members
    class BatchInfoKey * pfirst; // offset 0x0, size 0x4
    class BatchInfo * psecond; // offset 0x4, size 0x4
};
// total size: 0x1C
class ghashset_entry {
    // Members
    long Next_in_chain; // offset 0x0, size 0x4
    class ghash_node value; // offset 0x4, size 0x18
};
// total size: 0x18
class ghash_node {
    // Members
    class BatchInfoKey first; // offset 0x0, size 0x8
    class BatchInfo second; // offset 0x8, size 0x10
};
// total size: 0xC
class ghashset_cached_entry {
    // Members
    long Next_in_chain; // offset 0x0, size 0x4
    unsigned long HashValue; // offset 0x4, size 0x4
    class GFxFontResource * value; // offset 0x8, size 0x4
};
// total size: 0x20
class PathsIterator {
    // Members
    unsigned char * CurPathsPtr; // offset 0x0, size 0x4
    class GFxPathsInfo Paths; // offset 0x4, size 0x10
    unsigned int CurIndex; // offset 0x14, size 0x4
    unsigned int Count; // offset 0x18, size 0x4
    float Sfactor; // offset 0x1C, size 0x4
};
// total size: 0x14
class Edge {
    // Members
    float Cx; // offset 0x0, size 0x4
    float Cy; // offset 0x4, size 0x4
    float Ax; // offset 0x8, size 0x4
    float Ay; // offset 0xC, size 0x4
    bool Curve; // offset 0x10, size 0x1
};
// total size: 0x28
class EdgesIterator {
    // Members
    unsigned char * pPath; // offset 0x0, size 0x4
    unsigned int EdgeIndex; // offset 0x4, size 0x4
    unsigned int EdgesCount; // offset 0x8, size 0x4
    int MoveX; // offset 0xC, size 0x4
    int MoveY; // offset 0x10, size 0x4
    unsigned int CurEdgesInfo; // offset 0x14, size 0x4
    unsigned int CurEdgesInfoMask; // offset 0x18, size 0x4
    short * pVertices16; // offset 0x1C, size 0x4
    long * pVertices32; // offset 0x20, size 0x4
    float Sfactor; // offset 0x24, size 0x4
};
// total size: 0x8
class node_ref {
    // Members
    class VectorGlyphKey * pfirst; // offset 0x0, size 0x4
    class VectorGlyphShape * * psecond; // offset 0x4, size 0x4
};
// total size: 0x8
class VectorGlyphKey {
    // Members
    class GFxFontResource * pFont; // offset 0x0, size 0x4
    unsigned short GlyphIndex; // offset 0x4, size 0x2
    unsigned short Flags; // offset 0x6, size 0x2
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
    class VectorGlyphKey first; // offset 0x0, size 0x8
    class VectorGlyphShape * second; // offset 0x8, size 0x4
};
unsigned int FontSizeRamp[29]; // size: 0x74, address: 0x807375D8
struct {} __vt__Q223GFxFontCacheManagerImpl15RenEventHandler; // size: 0x10, address: 0x80737698
struct {} __vt__Q223GFxFontCacheManagerImpl18FontDisposeHandler; // size: 0x10, address: 0x807376A8
struct {} __vt__19GFxFontCacheManager; // size: 0xC, address: 0x807376B8
// Range: 0x804B5870 -> 0x804B5984
void * GFxFontCacheManager::GFxFontCacheManager(class GFxFontCacheManager * this /* r30 */, bool enableDynamicCache /* r31 */) {
    // References
    // -> struct {} __vt__19GFxFontCacheManager;
    // -> struct {} __vt__8GFxState;
}
// Range: 0x804B5990 -> 0x804B5A10
void * GFxFontCacheManager::~GFxFontCacheManager(class GFxFontCacheManager * this /* r30 */) {
    // References
    // -> struct {} __vt__19GFxFontCacheManager;
}
// signature: GFxFontCacheManager::SetTextureConfig(const GFxFontCacheManager::TextureConfig &)
// Range: 0x804B5A10 -> 0x804B5A9C
void GFxFontCacheManager::SetTextureConfig(class GFxFontCacheManager * this /* r31 */) {
}
// Range: 0x804B5AA0 -> 0x804B5E0C
void * GFxFontCacheManagerImpl::GFxFontCacheManagerImpl(class GFxFontCacheManagerImpl * this /* r31 */) {
    // Local variables
    unsigned int i; // r5
    unsigned int ramp; // r6

    // References
    // -> unsigned int FontSizeRamp[29];
    // -> struct {} __vt__Q223GFxFontCacheManagerImpl15RenEventHandler;
    // -> struct {} __vt__Q223GFxFontCacheManagerImpl18FontDisposeHandler;
}
// Range: 0x804B5F40 -> 0x804B62FC
void * GFxFontCacheManagerImpl::~GFxFontCacheManagerImpl(class GFxFontCacheManagerImpl * this /* r30 */) {
}
// Range: 0x804B6300 -> 0x804B6620
void GFxFontCacheManagerImpl::RemoveAll(class GFxFontCacheManagerImpl * this /* r29 */) {
    // Local variables
    class VectorGlyphShape * sh; // r28
}
// Range: 0x804B6620 -> 0x804B66F4
void GFxFontCacheManagerImpl::InvalidateAll(class GFxFontCacheManagerImpl * this /* r27 */) {
    // Local variables
    class GFxBatchPackage * bp; // r28
}
// Range: 0x804B69C0 -> 0x804B6E34
void GFxFontCacheManagerImpl::CleanUpFont(class GFxFontCacheManagerImpl * this /* r28 */, class GFxFontResource * font /* r29 */) {
    // Local variables
    class VectorGlyphShape * sh; // r30

    {
        // Range: 0x804B6A6C -> 0x804B6C54
        // Local variables
        class GFxBatchPackage * bp; // r25

        {
            // Range: 0x804B6BA0 -> 0x804B6BA0
            // Local variables
            bool removeFlag; // r5

            {
                // Range: 0x804B6BA0 -> 0x804B6BA0
                // Local variables
                unsigned int i; // r0
            }
        }
    }
    {
        // Range: 0x804B6C58 -> 0x804B6C58
        // Local variables
        class VectorGlyphShape * next; // r29
    }
}
// Range: 0x804B6E40 -> 0x804B6E68
void GFxFontCacheManagerImpl::Init(class TextureConfig & config /* r10 */) {
}
// signature: GFxFontCacheManagerImpl::SetFauxItalicAngle(float)
// Range: 0x804B6E70 -> 0x804B6F14
void GFxFontCacheManagerImpl::SetFauxItalicAngle(class GFxFontCacheManagerImpl * this /* r31 */) {
}
// signature: GFxFontCacheManagerImpl::GlyphFits(const GRect<float> &, unsigned int, float, const GFxGlyphParam &, float) const
// Range: 0x804B6F20 -> 0x804B70C8
bool GFxFontCacheManagerImpl::GlyphFits(class GFxFontCacheManagerImpl * this /* r31 */, class GRect & bounds /* r29 */, unsigned int fontSize /* r30 */, class GFxGlyphParam & param /* r30 */, float maxRasterScale /* f31 */) const {
    // Local variables
    unsigned int h; // r5

    // References
    // -> unsigned int FontSizeRamp[29];
}
// Range: 0x804B70D0 -> 0x804B716C
void GFxFontCacheManagerImpl::setRenderer(class GFxFontCacheManagerImpl * this /* r30 */, class GRenderer * ren /* r31 */) {
    {
        // Range: 0x804B70F0 -> 0x804B7154
        // Local variables
        class RenderCaps caps; // r1+0x8
    }
}
// signature: GFxFontCacheManagerImpl::VerifyBatchPackage(const GFxBatchPackage *, GFxDisplayContext &, float)
// Range: 0x804B7170 -> 0x804B73D8
bool GFxFontCacheManagerImpl::VerifyBatchPackage(class GFxFontCacheManagerImpl * this /* r23 */, class GFxBatchPackage * bp /* r24 */, float heightRatio /* f29 */) {
    // Local variables
    class GFxBatchPackageData * bpd; // r0
    unsigned int i; // r25
    bool verifySize; // r24

    // References
    // -> unsigned int FontSizeRamp[29];
}
// Range: 0x804B73E0 -> 0x804B764C
class GFxBatchPackage * GFxFontCacheManagerImpl::CreateBatchPackage(class GFxFontCacheManagerImpl * this /* r24 */, class GFxBatchPackage * bp /* r25 */, class Iterator & linesIt /* r26 */, class GFxDisplayContext & context /* r27 */, class GPoint & lnOffset /* r28 */, class GFxLineBufferGeometry * geom /* r29 */, class GFxTextFieldParam & param /* r30 */, unsigned int numGlyphsInBatch /* r31 */) {
}
// Range: 0x804B7960 -> 0x804B7A80
void GFxFontCacheManagerImpl::ReleaseBatchPackage(class GFxFontCacheManagerImpl * this /* r29 */, class GFxBatchPackage * bp /* r30 */) {
}
// signature: GFxFontCacheManagerImpl::DisplayBatchPackage(GFxBatchPackage *, GFxDisplayContext &, const GMatrix2D &, const GRenderer::Cxform &)
// Range: 0x804B7A80 -> 0x804B7CC8
void GFxFontCacheManagerImpl::DisplayBatchPackage(class GMatrix2D & displayMatrix /* r25 */) {
    {
        // Range: 0x804B7A94 -> 0x804B7CB0
        // Local variables
        class GFxBatchPackageData * pd; // r0

        {
            // Range: 0x804B7AB8 -> 0x804B7CB0
            // Local variables
            class CacheProvider cacheProvider; // r1+0x38
            class GRenderer * prenderer; // r27

            {
                // Range: 0x804B7AF0 -> 0x804B7CA4
                // Local variables
                unsigned int layer; // r26
            }
        }
    }
}
// signature: GFx_DetectMatrixFreeRotation<GMatrix2D>(const GMatrix2D &)
// Range: 0x804BA100 -> 0x804BA198
static bool GFx_DetectMatrixFreeRotation<GMatrix2D>() {
    // Local variables
    class GMatrix2D mat2; // r1+0x18
    class GPoint p10; // r1+0x10
}
// signature: GFx_ClipBitmapDesc(GRenderer::BitmapDesc *, const GRect<float> &)
// Range: 0x804B7CD0 -> 0x804B8044
static bool GFx_ClipBitmapDesc() {
    // Local variables
    class GRect clipped; // r1+0x48

    {
        // Range: 0x804B7E90 -> 0x804B8038
        // Local variables
        class GRect clippedTexture; // r1+0x38
    }
}
// Range: 0x804B8050 -> 0x804BA0FC
void GFxFontCacheManagerImpl::fillBatchPackage(class GFxFontCacheManagerImpl * this /* r15 */, class GFxBatchPackageData * pd /* r16 */, class Iterator & linesIter /* r1+0x8 */, class GFxDisplayContext & context /* r21 */, class GPoint & lnOffset /* r1+0xC */, class GFxLineBufferGeometry * geom /* r17 */, class GFxTextFieldParam & textFieldParam /* r18 */, unsigned int numGlyphsInBatch /* r14 */) {
    // Local variables
    class GFxFontResource * pprevFont; // r19
    class GFxResourceBindData fontData; // r1+0xF8
    class GMatrix2D globalMatrixDir; // r1+0x1F8
    class GMatrix2D globalMatrixInv; // r1+0x1E0
    bool freeRotation; // r0
    unsigned int pass; // r24
    unsigned int passStart; // r1+0x22C
    unsigned int passEnd; // r1+0x228
    unsigned int layer; // r23
    class Iterator linesIt; // r1+0x160
    class GRect visibleRect; // r1+0x120
    class iterator it; // r1+0xE8
    unsigned int batchIndex; // r0
    unsigned int gvIdx; // r22

    {
        // Range: 0x804B834C -> 0x804B8F64
        // Local variables
        class GFxGlyphParam & textParam; // r20

        {
            // Range: 0x804B834C -> 0x804B8360
            // Local variables
            class GlyphIterator glyphIt; // r1+0x1C0
            class Line & line; // r0

            {
                // Range: 0x804B834C -> 0x804B8360
                // Local variables
                class GFxShapeCharacterDef * shape; // r30
                class GlyphVerifier gv; // r1+0x1A4
                class GFxGlyphParam glyphParam; // r1+0x150
                unsigned int snappedFontSize; // r29
                float originalFontSize; // f29
                class GFxFontResource * presolvedFont; // r1+0x18
                class GlyphEntry & glyph; // r0

                {
                    // Range: 0x804B834C -> 0x804B8360
                    // Local variables
                    float blurY; // f1
                    float blurX; // f3
                    float outline; // f2
                    class GRect bounds; // r1+0x140

                    {
                        // Range: 0x804B8360 -> 0x804B8360
                        // Local variables
                        float glyphWidth; // f1
                    }
                }
                {
                    // Range: 0x804B8360 -> 0x804B8360
                    // Local variables
                    class BatchInfo * pbi; // r0
                    class BatchInfoKey bik; // r1+0xF0

                    {
                        // Range: 0x804B8360 -> 0x804B8360
                        // Local variables
                        class BatchInfo bi; // r1+0x130
                    }
                }
            }
        }
    }
    {
        // Range: 0x804B94F8 -> 0x804BA05C
        // Local variables
        class GFxGlyphParam & textParam; // r0

        {
            // Range: 0x804B94F8 -> 0x804B9EEC
            // Local variables
            class GlyphIterator glyphIt; // r1+0x188
            int advance; // r0
            class GPoint offset; // r1+0xE0
            class Line & line; // r19

            {
                // Range: 0x804B94F8 -> 0x804B9E6C
                // Local variables
                class GPoint p; // r1+0xD0
                bool snapX; // r20
                float scale; // f22
                class BitmapDesc & bd; // r21
                class BatchInfo * pbi; // r0
                class BatchInfoKey bik; // r1+0xD8
                class GlyphVerifier & gv; // r0
                class GlyphEntry & glyph; // r0

                {
                    // Range: 0x804B94F8 -> 0x804B9520
                    // Local variables
                    unsigned int stretch; // r0
                    class GPoint & o; // r0
                    class GFxGlyphRect & r; // r0
                }
                {
                    // Range: 0x804B9520 -> 0x804B9524
                    // Local variables
                    float textureYScale; // f5
                    float textureXScale; // f21
                    class GFxTextureGlyph & tg; // r0
                    class GFxTextureGlyphData * gd; // r19
                }
            }
        }
    }

    // References
    // -> unsigned int FontSizeRamp[29];
}
// signature: GFxFontCacheManagerImpl::isOuterContourSW(const GCompoundShape &) const
// Range: 0x804BC200 -> 0x804BC37C
bool GFxFontCacheManagerImpl::isOuterContourSW() const {
    // Local variables
    unsigned int i; // r5
    unsigned int j; // r11
    float minX1; // f5
    float minY1; // f6
    float maxX1; // f7
    float maxY1; // f8
    float minX2; // f9
    float minY2; // f10
    float maxX2; // f11
    float maxY2; // f12
    bool cw; // r3

    {
        // Range: 0x804BC20C -> 0x804BC368
        // Local variables
        class SPath & path; // r0

        {
            // Range: 0x804BC224 -> 0x804BC368
            // Local variables
            float sum; // f13
            class GPointType v1; // r1+0x8
        }
    }
}
// Range: 0x804BC380 -> 0x804BC884
void GFxFontCacheManagerImpl::copyAndTransformShape(class GFxFontCacheManagerImpl * this /* r21 */, class GFxShapeCharacterDef * dst /* r22 */, class GFxShapeCharacterDef * src /* r26 */, class GRect * bbox /* r23 */, bool fauxBold /* r24 */, bool fauxItalic /* r25 */) {
    // Local variables
    class GFxPathPacker path; // r1+0x98
    float fauxBoldWidth; // f31
    class PathsIterator pathsIt; // r1+0x50
    class GPoint p1; // r1+0x30
    class GPoint p2; // r1+0x28

    {
        // Range: 0x804BC3D8 -> 0x804BC5C8
        // Local variables
        unsigned int j; // r26
        unsigned int i; // r27

        {
            // Range: 0x804BC4A0 -> 0x804BC5B4
            // Local variables
            class SPath & path2; // r0
        }
    }
    {
        // Range: 0x804BC5D4 -> 0x804BC80C
        // Local variables
        class Edge edge; // r1+0x38
        float ay; // f29
        float ax; // f30
        class EdgesIterator edgeIt; // r1+0x70
    }
}
// Range: 0x804BC890 -> 0x804BCF74
class GFxShapeCharacterDef * GFxFontCacheManagerImpl::GetGlyphShape(class GFxFontCacheManagerImpl * this /* r28 */, class GFxFontResource * font /* r1+0x8 */, unsigned int index /* r29 */, bool fauxBold /* r30 */, bool fauxItalic /* r31 */, class GFxLog * log /* r25 */) {
    // Local variables
    unsigned int flags; // r26
    class VectorGlyphShape * shape; // r1+0x10
    class GRect bbox; // r1+0x28
}
// signature: GFxFontCacheManagerImpl::RenEventHandler::OnEvent(GRenderer *, GRenderer::EventHandler::EventType)
// Range: 0x804BE600 -> 0x804BE670
void GFxFontCacheManagerImpl::RenEventHandler::OnEvent() {
}
