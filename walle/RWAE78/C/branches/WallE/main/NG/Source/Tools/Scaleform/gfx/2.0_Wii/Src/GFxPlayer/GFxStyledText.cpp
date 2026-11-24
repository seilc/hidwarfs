/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxStyledText.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80557010 -> 0x8057EBC4
*/
// total size: 0x5C
class GFxTextFormat : public GRefCountBase {
    // Members
    class GFxString Url; // offset 0x10, size 0x4
    class GPtr pImageDesc; // offset 0x14, size 0x4
    class GPtr pFontHandle; // offset 0x18, size 0x4
    unsigned long Color; // offset 0x1C, size 0x4
    short LetterSpacing; // offset 0x20, size 0x2
    unsigned short FontSize; // offset 0x22, size 0x2
    unsigned char FormatFlags; // offset 0x24, size 0x1
    char FontName[51]; // offset 0x25, size 0x33
    unsigned short PresentMask; // offset 0x58, size 0x2
};
// total size: 0x10
class GRefCountBase : public GRefCountBaseImpl {};
// total size: 0x4
class GPtr {
    // Members
    class GFxTextHTMLImageTagDesc * pObject; // offset 0x0, size 0x4
};
// total size: 0x58
class GFxTextHTMLImageTagDesc : public GFxTextImageDesc {
    // Members
    class GFxString Url; // offset 0x40, size 0x4
    class GFxString Id; // offset 0x44, size 0x4
    int VSpace; // offset 0x48, size 0x4
    int HSpace; // offset 0x4C, size 0x4
    unsigned int ParaId; // offset 0x50, size 0x4
    unsigned char Alignment; // offset 0x54, size 0x1
};
// total size: 0x28
class GFxTextParagraphFormat : public GRefCountBase {
    // Members
    unsigned int * pTabStops; // offset 0x10, size 0x4
    unsigned short BlockIndent; // offset 0x14, size 0x2
    short Indent; // offset 0x16, size 0x2
    short Leading; // offset 0x18, size 0x2
    unsigned short LeftMargin; // offset 0x1A, size 0x2
    unsigned short RightMargin; // offset 0x1C, size 0x2
    enum AlignType Align; // offset 0x20, size 0x4
    bool Bullet; // offset 0x24, size 0x1
    unsigned char PresentMask; // offset 0x25, size 0x1
};
enum AlignType {
    Align_Left = 0,
    Align_Right = 1,
    Align_Justify = 2,
    Align_Center = 3,
};
// total size: 0x2C
class GFxTextParagraph : public GNewOverrideBase {
    // Members
    class GFxWideStringBuffer Text; // offset 0x0, size 0x10
    class GPtr pFormat; // offset 0x10, size 0x4
    class GRangeDataArray FormatInfo; // offset 0x14, size 0xC
    unsigned long StartIndex; // offset 0x20, size 0x4
    unsigned long UniqueId; // offset 0x24, size 0x4
    unsigned short ModCounter; // offset 0x28, size 0x2
};
// total size: 0x10
class GFxWideStringBuffer {
    // Members
    class GPtr pAllocator; // offset 0x0, size 0x4
    wchar_t * pText; // offset 0x4, size 0x4
    unsigned long Length; // offset 0x8, size 0x4
    unsigned long Allocated; // offset 0xC, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxTextAllocator * pObject; // offset 0x0, size 0x4
};
// total size: 0x1C
class GFxTextAllocator : public GRefCountBase {
    // Members
    class ghash_set TextFormatStorage; // offset 0x10, size 0x4
    class ghash_set ParagraphFormatStorage; // offset 0x14, size 0x4
    unsigned long NewParagraphId; // offset 0x18, size 0x4
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
// total size: 0x4
class GPtr {
    // Members
    class GFxTextParagraphFormat * pObject; // offset 0x0, size 0x4
};
// total size: 0xC
class GRangeDataArray {
    // Members
    class garray Ranges; // offset 0x0, size 0xC
};
// total size: 0xC
class garray : public garray_base {};
// total size: 0xC
class garray_base {
    // Members
    class GRangeData * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0xC
class GRangeData : public GRange {
    // Members
    class GPtr Data; // offset 0x8, size 0x4
};
// total size: 0x8
class GRange {
    // Members
    long Index; // offset 0x0, size 0x4
    unsigned long Length; // offset 0x4, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxTextFormat * pObject; // offset 0x0, size 0x4
};
// total size: 0x24
class FormatRunIterator {
    // Members
    class StyledTextRun PlaceHolder; // offset 0x0, size 0x10
    class GRangeDataArray * pFormatInfo; // offset 0x10, size 0x4
    class ConstIterator FormatIterator; // offset 0x14, size 0x8
    class GFxWideStringBuffer * pText; // offset 0x1C, size 0x4
    unsigned long CurTextIndex; // offset 0x20, size 0x4
};
// total size: 0x10
class StyledTextRun {
    // Members
    wchar_t * pText; // offset 0x0, size 0x4
    long Index; // offset 0x4, size 0x4
    unsigned long Length; // offset 0x8, size 0x4
    class GPtr pFormat; // offset 0xC, size 0x4
};
// total size: 0x8
class ConstIterator {
    // Members
    class GRangeDataArray * pArray; // offset 0x0, size 0x4
    long Index; // offset 0x4, size 0x4
};
// total size: 0x4
class GFxTextFormatPtrWrapper {
    // Members
    class GPtr pFormat; // offset 0x0, size 0x4
};
// total size: 0xC
class ghashset_cached_entry {
    // Members
    long Next_in_chain; // offset 0x0, size 0x4
    unsigned long HashValue; // offset 0x4, size 0x4
    class GFxTextFormatPtrWrapper value; // offset 0x8, size 0x4
};
// total size: 0x20
class CharactersIterator {
    // Members
    class CharacterInfo PlaceHolder; // offset 0x0, size 0xC
    class GRangeDataArray * pFormatInfo; // offset 0xC, size 0x4
    class ConstIterator FormatIterator; // offset 0x10, size 0x8
    class GFxWideStringBuffer * pText; // offset 0x18, size 0x4
    unsigned long CurTextIndex; // offset 0x1C, size 0x4
};
// total size: 0xC
class CharacterInfo {
    // Members
    class GPtr pFormat; // offset 0x0, size 0x4
    unsigned long Index; // offset 0x4, size 0x4
    wchar_t Character; // offset 0x8, size 0x2
};
// total size: 0x2C
class GFxStyledText : public GRefCountBase {
    // Members
    class GPtr pTextAllocator; // offset 0x10, size 0x4
    class garray Paragraphs; // offset 0x14, size 0xC
    class GPtr pDefaultParagraphFormat; // offset 0x20, size 0x4
    class GPtr pDefaultTextFormat; // offset 0x24, size 0x4
    unsigned char RTFlags; // offset 0x28, size 0x1
};
// total size: 0xC
class garray_base {
    // Members
    class ParagraphPtrWrapper * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x4
class ParagraphPtrWrapper {
    // Members
    class GFxTextParagraph * pPara; // offset 0x0, size 0x4
};
// total size: 0x1
class ParagraphComparator {};
// total size: 0x8
class iterator {
    // Members
    class garray_base * pArray; // offset 0x0, size 0x4
    int CurIndex; // offset 0x4, size 0x4
};
// total size: 0x130
class GFxTextDocView : public GRefCountBase {
    // Members
    class GPtr pDocument; // offset 0x10, size 0x4
    class GPtr pFontManager; // offset 0x14, size 0x4
    class GPtr pDocumentListener; // offset 0x18, size 0x4
    class HighlightDesc * pHighlight; // offset 0x1C, size 0x4
    class ImageSubstitutor * pImageSubstitutor; // offset 0x20, size 0x4
    class GFxTextLineBuffer LineBuffer; // offset 0x24, size 0xBC
    class GRect ViewRect; // offset 0xE0, size 0x10
    unsigned int TextWidth; // offset 0xF0, size 0x4
    unsigned int TextHeight; // offset 0xF4, size 0x4
    class CachedPrimValue MaxVScroll; // offset 0xF8, size 0x8
    class GPtr pEditorKit; // offset 0x100, size 0x4
    unsigned short FormatCounter; // offset 0x104, size 0x2
    unsigned short FontScaleFactor; // offset 0x106, size 0x2
    unsigned char AlignProps; // offset 0x108, size 0x1
    unsigned char Flags; // offset 0x109, size 0x1
    unsigned char RTFlags; // offset 0x10A, size 0x1
    class GFxTextFilter Filter; // offset 0x10C, size 0x24
};
// total size: 0x4
class GPtr {
    // Members
    class DocumentText * pObject; // offset 0x0, size 0x4
};
// total size: 0x30
class DocumentText : public GFxStyledText {
    // Members
    class GFxTextDocView * pDocument; // offset 0x2C, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class DocumentListener * pObject; // offset 0x0, size 0x4
};
// total size: 0x10
class DocumentListener : public GRefCountBase {};
// total size: 0xA4
class HighlightDesc : public GNewOverrideBase {
    // Members
    class GFxTextHighlighter HighlightManager; // offset 0x0, size 0x10
    class GFxDrawingContext BackgroundDrawing; // offset 0x10, size 0x94
};
// total size: 0x10
class GFxTextHighlighter {
    // Members
    class garray Highlighters; // offset 0x0, size 0xC
    unsigned int LastId; // offset 0xC, size 0x4
};
// total size: 0xC
class garray_base {
    // Members
    class GFxTextHighlightDesc * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x1C
class GFxTextHighlightDesc {
    // Members
    unsigned long StartPos; // offset 0x0, size 0x4
    unsigned long Length; // offset 0x4, size 0x4
    unsigned int Id; // offset 0x8, size 0x4
    class GFxTextHighlightInfo Info; // offset 0xC, size 0x10
};
// total size: 0x10
class GFxTextHighlightInfo {
    // Members
    class GColor BackgroundColor; // offset 0x0, size 0x4
    class GColor TextColor; // offset 0x4, size 0x4
    class GColor UnderlineColor; // offset 0x8, size 0x4
    unsigned char Flags; // offset 0xC, size 0x1
};
// total size: 0xC
class ImageSubstitutor : public GNewOverrideBase {
    // Members
    class garray Elements; // offset 0x0, size 0xC
};
// total size: 0xC
class garray_base {
    // Members
    class Element * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x30
class Element {
    // Members
    wchar_t SubString[20]; // offset 0x0, size 0x28
    class GPtr pImageDesc; // offset 0x28, size 0x4
    unsigned char SubStringLen; // offset 0x2C, size 0x1
};
// total size: 0x8
class CachedPrimValue {
    // Members
    unsigned int Value; // offset 0x0, size 0x4
    unsigned short FormatCounter; // offset 0x4, size 0x2
};
// total size: 0x4
class GPtr {
    // Members
    class GFxTextEditorKit * pObject; // offset 0x0, size 0x4
};
// total size: 0x44
class GFxTextEditorKit : public GRefCountBase {
    // Members
    class GPtr pDocView; // offset 0x10, size 0x4
    unsigned long CursorPos; // offset 0x14, size 0x4
    class GColor CursorColor; // offset 0x18, size 0x4
    int SelectPos; // offset 0x1C, size 0x4
    class CachedValue CursorRect; // offset 0x20, size 0x14
    float CursorTimer; // offset 0x34, size 0x4
    float LastAdvanceTime; // offset 0x38, size 0x4
    float LastHorizCursorPos; // offset 0x3C, size 0x4
    unsigned char Flags; // offset 0x40, size 0x1
};
// total size: 0x4
class GPtr {
    // Members
    class GFxTextDocView * pObject; // offset 0x0, size 0x4
};
// total size: 0x14
class CachedValue {
    // Members
    class GRect Value; // offset 0x0, size 0x10
    unsigned short FormatCounter; // offset 0x10, size 0x2
};
// total size: 0x1
class Comparator {
    // Members
    bool Insertion; // offset 0x0, size 0x1
};
// total size: 0x8
class Comparable {
    // Members
    wchar_t * Str; // offset 0x0, size 0x4
    unsigned long MaxSize; // offset 0x4, size 0x4
};
// total size: 0x8
class InsertCharCommand {
    // Members
    unsigned long PosAt; // offset 0x0, size 0x4
    wchar_t CharCode; // offset 0x4, size 0x2
};
// total size: 0xC
class GFxSGMLElementDesc {
    // Members
    char * ElemName; // offset 0x0, size 0x4
    enum GFxHTMLElementsEnum ElemId; // offset 0x4, size 0x4
    bool ReqEndElement; // offset 0x8, size 0x1
    bool EmptyElement; // offset 0x9, size 0x1
};
enum GFxHTMLElementsEnum {
    GFxHTML_A = 0,
    GFxHTML_B = 1,
    GFxHTML_BR = 2,
    GFxHTML_FONT = 3,
    GFxHTML_I = 4,
    GFxHTML_IMG = 5,
    GFxHTML_LI = 6,
    GFxHTML_P = 7,
    GFxHTML_TAB = 8,
    GFxHTML_TEXTFORMAT = 9,
    GFxHTML_U = 10,
    GFxHTML_ALIGN = 11,
    GFxHTML_ALPHA = 12,
    GFxHTML_BASELINE = 13,
    GFxHTML_BLOCKINDENT = 14,
    GFxHTML_COLOR = 15,
    GFxHTML_FACE = 16,
    GFxHTML_HEIGHT = 17,
    GFxHTML_HREF = 18,
    GFxHTML_HSPACE = 19,
    GFxHTML_ID = 20,
    GFxHTML_INDENT = 21,
    GFxHTML_KERNING = 22,
    GFxHTML_LEADING = 23,
    GFxHTML_LEFTMARGIN = 24,
    GFxHTML_LETTERSPACING = 25,
    GFxHTML_RIGHTMARGIN = 26,
    GFxHTML_SRC = 27,
    GFxHTML_SIZE = 28,
    GFxHTML_TARGET = 29,
    GFxHTML_TABSTOPS = 30,
    GFxHTML_VSPACE = 31,
    GFxHTML_WIDTH = 32,
    GFxHTML_LEFT = 33,
    GFxHTML_RIGHT = 34,
    GFxHTML_CENTER = 35,
    GFxHTML_JUSTIFY = 36,
};
// total size: 0x1
class Comparator {};
// total size: 0xC
class garray_base {
    // Members
    class GFxSGMLStackElemDesc * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x94
class GFxSGMLStackElemDesc {
    // Members
    char * pElemName; // offset 0x0, size 0x4
    unsigned long ElemNameSize; // offset 0x4, size 0x4
    class GFxSGMLElementDesc * pElemDesc; // offset 0x8, size 0x4
    unsigned long StartPos; // offset 0xC, size 0x4
    class GFxTextFormat TextFmt; // offset 0x10, size 0x5C
    class GFxTextParagraphFormat ParaFmt; // offset 0x6C, size 0x28
};
// total size: 0x28
class GFxSGMLParser {
    // Members
    int CurState; // offset 0x0, size 0x4
    class GFxSGMLCharIter Iter; // offset 0x4, size 0x14
    char * pBuffer; // offset 0x18, size 0x4
    unsigned long BufSize; // offset 0x1C, size 0x4
    unsigned long BufPos; // offset 0x20, size 0x4
    bool CondenseWhite; // offset 0x24, size 0x1
};
// total size: 0x14
class GFxSGMLCharIter {
    // Members
    char * pCurChar; // offset 0x0, size 0x4
    char * pNextChar; // offset 0x4, size 0x4
    char * pEnd; // offset 0x8, size 0x4
    unsigned long CurChar; // offset 0xC, size 0x4
    bool DoContentParsing; // offset 0x10, size 0x1
};
// total size: 0x24
class HTMLImageTagInfo {
    // Members
    class GPtr pTextImageDesc; // offset 0x0, size 0x4
    class GFxString Url; // offset 0x4, size 0x4
    class GFxString Id; // offset 0x8, size 0x4
    unsigned int Width; // offset 0xC, size 0x4
    unsigned int Height; // offset 0x10, size 0x4
    int VSpace; // offset 0x14, size 0x4
    int HSpace; // offset 0x18, size 0x4
    unsigned int ParaId; // offset 0x1C, size 0x4
    unsigned char Alignment; // offset 0x20, size 0x1
};
// total size: 0x8
class Comparable {
    // Members
    char * Str; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
};
// total size: 0x94
class GFxSGMLStackElemDesc {
    // Members
    wchar_t * pElemName; // offset 0x0, size 0x4
    unsigned long ElemNameSize; // offset 0x4, size 0x4
    class GFxSGMLElementDesc * pElemDesc; // offset 0x8, size 0x4
    unsigned long StartPos; // offset 0xC, size 0x4
    class GFxTextFormat TextFmt; // offset 0x10, size 0x5C
    class GFxTextParagraphFormat ParaFmt; // offset 0x6C, size 0x28
};
// total size: 0x28
class GFxSGMLParser {
    // Members
    int CurState; // offset 0x0, size 0x4
    class GFxSGMLCharIter Iter; // offset 0x4, size 0x14
    wchar_t * pBuffer; // offset 0x18, size 0x4
    unsigned long BufSize; // offset 0x1C, size 0x4
    unsigned long BufPos; // offset 0x20, size 0x4
    bool CondenseWhite; // offset 0x24, size 0x1
};
// total size: 0x14
class GFxSGMLCharIter {
    // Members
    wchar_t * pCurChar; // offset 0x0, size 0x4
    wchar_t * pNextChar; // offset 0x4, size 0x4
    wchar_t * pEnd; // offset 0x8, size 0x4
    unsigned long CurChar; // offset 0xC, size 0x4
    bool DoContentParsing; // offset 0x10, size 0x1
};
// total size: 0x8
class Comparable {
    // Members
    wchar_t * Str; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
};
enum UseType {
    UseInternally = 0,
    UseExternally = 1,
};
// total size: 0x10
class FindFontInfo {
    // Members
    class ghash_identity * pFontCache; // offset 0x0, size 0x4
    class GFxTextFormat * pCurrentFormat; // offset 0x4, size 0x4
    class GFxTextFormat * pPrevFormat; // offset 0x8, size 0x4
    class GPtr pCurrentFont; // offset 0xC, size 0x4
};
// total size: 0x4
class ghash_identity : public ghash_uncached {};
// total size: 0x4
class ghash_uncached : public ghash {};
// total size: 0x4
class ghash {
    // Members
    class ghash_set Hash; // offset 0x0, size 0x4
};
// total size: 0x8
class node_ref {
    // Members
    class GFxTextFormat * * pfirst; // offset 0x0, size 0x4
    class GPtr * psecond; // offset 0x4, size 0x4
};
// total size: 0x8
class ghash_node {
    // Members
    class GFxTextFormat * first; // offset 0x0, size 0x4
    class GPtr second; // offset 0x4, size 0x4
};
// total size: 0xC
class ghashset_entry {
    // Members
    long Next_in_chain; // offset 0x0, size 0x4
    class ghash_node value; // offset 0x4, size 0x8
};
// total size: 0x504
class FormatParagraphInfo {
    // Members
    class GFxTextLineBuffer LineBuffer; // offset 0x0, size 0xBC
    class Iterator * pLinesIter; // offset 0xBC, size 0x4
    class ghash_identity * pFontCache; // offset 0xC0, size 0x4
    unsigned char TempLineBuff[1024]; // offset 0xC4, size 0x400
    class Line * pDynLine; // offset 0x4C4, size 0x4
    float NextOffsetY; // offset 0x4C8, size 0x4
    float ParaYOffset; // offset 0x4CC, size 0x4
    class CharactersIterator CharIter; // offset 0x4D0, size 0x20
    class GFxLog * pLog; // offset 0x4F0, size 0x4
    int ParaWidth; // offset 0x4F4, size 0x4
    int ParaHeight; // offset 0x4F8, size 0x4
    unsigned int ParaLines; // offset 0x4FC, size 0x4
    bool NeedRecenterLines; // offset 0x500, size 0x1
    bool ForceVerticalCenterAutoSize; // offset 0x501, size 0x1
};
// total size: 0x98
class GFxLineCursor {
    // Members
    class GlyphEntry * pPrevGrec; // offset 0x0, size 0x4
    class GPtr pLastFont; // offset 0x4, size 0x4
    unsigned int LastCharCode; // offset 0x8, size 0x4
    unsigned int LastGlyphIndex; // offset 0xC, size 0x4
    float LastAdvance; // offset 0x10, size 0x4
    int LastGlyphWidth; // offset 0x14, size 0x4
    unsigned long LastColor; // offset 0x18, size 0x4
    class GFxTextDocView * pDocView; // offset 0x1C, size 0x4
    class GFxTextParagraph * pParagraph; // offset 0x20, size 0x4
    int LineWidth; // offset 0x24, size 0x4
    int LineWidthWithoutTrailingSpaces; // offset 0x28, size 0x4
    unsigned int LineLength; // offset 0x2C, size 0x4
    float MaxFontAscent; // offset 0x30, size 0x4
    float MaxFontDescent; // offset 0x34, size 0x4
    float MaxFontLeading; // offset 0x38, size 0x4
    class CharactersIterator CharIter; // offset 0x3C, size 0x20
    class CharacterInfo CharInfoHolder; // offset 0x5C, size 0xC
    int Indent; // offset 0x68, size 0x4
    int LeftMargin; // offset 0x6C, size 0x4
    int RightMargin; // offset 0x70, size 0x4
    class GlyphInserter GlyphIns; // offset 0x74, size 0x14
    unsigned int NumOfSpaces; // offset 0x88, size 0x4
    unsigned int NumOfTrailingSpaces; // offset 0x8C, size 0x4
    float FontScaleFactor; // offset 0x90, size 0x4
    bool LastKerning; // offset 0x94, size 0x1
    bool LineHasNewLine; // offset 0x95, size 0x1
};
// total size: 0x14
class GlyphInserter {
    // Members
    class GlyphEntry * pGlyphs; // offset 0x0, size 0x4
    class GFxFormatDataEntry * pNextFormatData; // offset 0x4, size 0x4
    unsigned int GlyphIndex; // offset 0x8, size 0x4
    unsigned int GlyphsCount; // offset 0xC, size 0x4
    unsigned int FormatDataIndex; // offset 0x10, size 0x4
};
enum ViewVAlignment {
    VAlign_None = 0,
    VAlign_Top = 1,
    VAlign_Bottom = 2,
    VAlign_Center = 3,
};
enum ViewTextAutoSize {
    TAS_None = 0,
    TAS_Shrink = 1,
    TAS_Fit = 2,
};
// total size: 0x18
class LineMetrics {
    // Members
    unsigned int Width; // offset 0x0, size 0x4
    unsigned int Height; // offset 0x4, size 0x4
    unsigned int Ascent; // offset 0x8, size 0x4
    unsigned int Descent; // offset 0xC, size 0x4
    int FirstCharXOff; // offset 0x10, size 0x4
    int Leading; // offset 0x14, size 0x4
};
// total size: 0x8
class Iterator {
    // Members
    class GRangeDataArray * pArray; // offset 0x0, size 0x4
    long Index; // offset 0x4, size 0x4
};
enum GFxSGMLParserState {
    SGMLPS_NONE = 0,
    SGMLPS_ERROR = 1,
    SGMLPS_START_ELEMENT = 2,
    SGMLPS_CONTENT = 3,
    SGMLPS_END_ELEMENT = 4,
    SGMLPS_EMPTY_ELEMENT = 5,
    SGMLPS_START_ELEMENT_ATTR = 6,
    SGMLPS_START_ELEMENT_ATTR_VALUE = 7,
    SGMLPS_START_ELEMENT_END_OF_ATTRS = 8,
    SGMLPS_FINISHED = 32768,
    SGMLPS_EMPTY_ELEMENT_FINISHED = 32773,
    SGMLPS_START_ELEMENT_FINISHED = 32770,
    SGMLPS_END_ELEMENT_FINISHED = 32772,
};
// total size: 0xC
class garray_base {
    // Members
    class HTMLImageTagInfo * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
static class ParagraphComparator cmp; // size: 0x1, address: 0x808DEC30
static class ParagraphComparator cmp; // size: 0x1, address: 0x808DEC34
class Comparator cmp; // size: 0x1, address: 0x808DEC40
class Comparator cmp; // size: 0x1, address: 0x808DEC44
static class Comparator cmp; // size: 0x1, address: 0x808DEC38
static class Comparator cmp; // size: 0x1, address: 0x808DEC3C
static int LogCount; // size: 0x4, address: 0x808DEC48
static unsigned short indices[6]; // size: 0xC, address: 0x806E8E98
struct {} __vt__16GFxTextEditorKit; // size: 0x10, address: 0x8073D498
struct {} __vt__33GRefCountBase<16GFxTextEditorKit>; // size: 0xC, address: 0x8073D4A8
struct {} __vt__14GFxTextDocView; // size: 0x14, address: 0x8073D4B4
struct {} __vt__Q214GFxTextDocView12DocumentText; // size: 0x1C, address: 0x8073D4C8
struct {} __vt__31GRefCountBase<14GFxTextDocView>; // size: 0xC, address: 0x8073D4E4
struct {} __vt__13GFxStyledText; // size: 0x1C, address: 0x8073D4F0
struct {} __vt__30GRefCountBase<13GFxStyledText>; // size: 0xC, address: 0x8073D50C
struct {} __vt__16GFxTextAllocator; // size: 0xC, address: 0x8073D518
struct {} __vt__33GRefCountBase<16GFxTextAllocator>; // size: 0xC, address: 0x8073D524
struct {} __vt__22GFxTextParagraphFormat; // size: 0xC, address: 0x8073D530
struct {} __vt__39GRefCountBase<22GFxTextParagraphFormat>; // size: 0xC, address: 0x8073D53C
struct {} __vt__13GFxTextFormat; // size: 0xC, address: 0x8073D548
struct {} __vt__30GRefCountBase<13GFxTextFormat>; // size: 0xC, address: 0x8073D554
struct {} __vt__23GFxTextHTMLImageTagDesc; // size: 0xC, address: 0x8073D560
struct {} __vt__16GFxTextImageDesc; // size: 0xC, address: 0x8073D56C
struct {} __vt__33GRefCountBase<16GFxTextImageDesc>; // size: 0xC, address: 0x8073D578
// signature: RoundTwips<float>(float)
// Range: 0x8056E970 -> 0x8056E9AC
int RoundTwips<float>() {
}
// signature: AlignTwipsToPixel<float>(float)
// Range: 0x8056E950 -> 0x8056E968
int AlignTwipsToPixel<float>() {
}
// Range: 0x80557010 -> 0x8055718C
void GFxTextFormat::SetFontName(class GFxTextFormat * this /* r29 */, char * pfontName /* r30 */, unsigned long fontNameSz /* r31 */) {
}
// Range: 0x80557190 -> 0x80557418
void GFxTextFormat::SetFontName(class GFxTextFormat * this /* r29 */, wchar_t * pfontName /* r30 */, unsigned long fontNameSz /* r31 */) {
    {
        // Range: 0x805571DC -> 0x805572EC
        // Local variables
        unsigned long i; // r5
    }
    {
        // Range: 0x80557300 -> 0x80557320
        // Local variables
        unsigned long i; // r5
    }
}
// Range: 0x80557420 -> 0x80557518
void GFxTextFormat::SetFontHandle(class GFxTextFormat * this /* r29 */, class GFxFontHandle * pfontHandle /* r30 */) {
}
// Range: 0x80557520 -> 0x805575A0
void GFxTextFormat::SetUrl(class GFxTextFormat * this /* r29 */, char * purl /* r30 */, unsigned long urlSz /* r31 */) {
}
// Range: 0x805575A0 -> 0x805576DC
void GFxTextFormat::SetBold(class GFxTextFormat * this /* r30 */, bool bold /* r31 */) {
}
// Range: 0x805576E0 -> 0x8055781C
void GFxTextFormat::SetItalic(class GFxTextFormat * this /* r30 */, bool italic /* r31 */) {
}
// signature: GFxTextFormat::SetUnderline(bool)
// Range: 0x80557820 -> 0x80557854
void GFxTextFormat::SetUnderline() {
}
// signature: GFxTextFormat::SetKerning(bool)
// Range: 0x80557860 -> 0x80557894
void GFxTextFormat::SetKerning() {
}
// signature: GFxTextFormat::Merge(const GFxTextFormat &) const
// Range: 0x805578A0 -> 0x80557DA0
class GFxTextFormat GFxTextFormat::Merge(class GFxTextFormat * result /* r29 */, class GFxTextFormat * this /* r31 */, class GFxTextFormat & fmt /* r30 */) const {
    // References
    // -> struct {} __vt__13GFxTextFormat;
}
// signature: GFxTextFormat::Intersection(const GFxTextFormat &) const
// Range: 0x80557F70 -> 0x80558834
class GFxTextFormat GFxTextFormat::Intersection(class GFxTextFormat * result /* r28 */, class GFxTextFormat * this /* r29 */, class GFxTextFormat & fmt /* r30 */) const {
    // References
    // -> struct {} __vt__13GFxTextFormat;
}
// Range: 0x80558840 -> 0x80558938
void GFxTextFormat::InitByDefaultValues(class GFxTextFormat * this /* r31 */) {
}
// Range: 0x80558940 -> 0x80558B58
unsigned long GFxTextFormat::HashFunctor::operator()(class GFxTextFormat & data /* r31 */) const {
    // Local variables
    unsigned long v[4]; // r1+0x8
    unsigned long hash; // r30
}
// signature: GFxTextParagraphFormat::Merge(const GFxTextParagraphFormat &) const
// Range: 0x80558B60 -> 0x80558D10
class GFxTextParagraphFormat GFxTextParagraphFormat::Merge(class GFxTextParagraphFormat * result /* r30 */, class GFxTextParagraphFormat * this /* r29 */, class GFxTextParagraphFormat & fmt /* r31 */) const {
    // References
    // -> struct {} __vt__22GFxTextParagraphFormat;
}
// signature: GFxTextParagraphFormat::Intersection(const GFxTextParagraphFormat &) const
// Range: 0x80558DF0 -> 0x80559070
class GFxTextParagraphFormat GFxTextParagraphFormat::Intersection(class GFxTextParagraphFormat * result /* r29 */, class GFxTextParagraphFormat * this /* r30 */, class GFxTextParagraphFormat & fmt /* r31 */) const {
    // References
    // -> struct {} __vt__22GFxTextParagraphFormat;
}
// Range: 0x80559070 -> 0x805590E0
void GFxTextParagraphFormat::InitByDefaultValues(class GFxTextParagraphFormat * this /* r31 */) {
}
// signature: GFxTextParagraphFormat::SetTabStops(const unsigned int *)
// Range: 0x805590E0 -> 0x80559144
void GFxTextParagraphFormat::SetTabStops(class GFxTextParagraphFormat * this /* r31 */) {
}
// signature: GFxTextParagraphFormat::GetTabStops(unsigned int *) const
// Range: 0x80559150 -> 0x80559180
unsigned int * GFxTextParagraphFormat::GetTabStops() const {
    {
        // Range: 0x80559154 -> 0x80559178
        // Local variables
        unsigned int cnt; // r0
    }
}
// signature: GFxTextParagraphFormat::SetTabStopsElement(unsigned int, unsigned int)
// Range: 0x80559180 -> 0x805591A8
void GFxTextParagraphFormat::SetTabStopsElement() {
}
// Range: 0x805591B0 -> 0x80559204
void GFxTextParagraphFormat::AllocTabStops(class GFxTextParagraphFormat * this /* r30 */, unsigned int num /* r31 */) {
}
// Range: 0x80559210 -> 0x80559248
void GFxTextParagraphFormat::FreeTabStops(class GFxTextParagraphFormat * this /* r31 */) {
}
// signature: GFxTextParagraphFormat::TabStopsEqual(const unsigned int *) const
// Range: 0x80559250 -> 0x805592C0
bool GFxTextParagraphFormat::TabStopsEqual() const {
    {
        // Range: 0x80559270 -> 0x805592AC
        // Local variables
        unsigned int c1; // r5
    }
}
// Range: 0x805592C0 -> 0x80559370
void GFxTextParagraphFormat::CopyTabStops(class GFxTextParagraphFormat * this /* r29 */, unsigned int * psrcTabStops /* r30 */) {
    {
        // Range: 0x805592C8 -> 0x80559340
        // Local variables
        unsigned int n; // r31
    }
}
// signature: GFxTextParagraphFormat::operator=(const GFxTextParagraphFormat &)
// Range: 0x80559370 -> 0x80559464
class GFxTextParagraphFormat & GFxTextParagraphFormat::operator=(class GFxTextParagraphFormat * this /* r29 */) {
}
// signature: GFxTextParagraphFormat::HashFunctor::operator()(const GFxTextParagraphFormat &) const
// Range: 0x80559470 -> 0x80559634
unsigned long GFxTextParagraphFormat::HashFunctor::operator()() const {
    // Local variables
    unsigned long hash; // r3
}
// Range: 0x80559640 -> 0x805596C0
void * GFxWideStringBuffer::~GFxWideStringBuffer(class GFxWideStringBuffer * this /* r30 */) {
}
// Range: 0x80559730 -> 0x805597A8
void GFxWideStringBuffer::StripTrailingNewLines() {
    // Local variables
    int len; // r5

    {
        // Range: 0x80559758 -> 0x8055976C
        // Local variables
        int i; // r7
    }
}
// Range: 0x80559AA0 -> 0x8055A1D0
void GFxTextParagraph::SetTextFormat(class GFxTextParagraph * this /* r22 */, class GFxTextFormat & fmt /* r23 */, unsigned long startPos /* r24 */, unsigned long endPos /* r14 */) {
    // Local variables
    class FormatRunIterator it; // r1+0x24
    long length; // r28

    {
        // Range: 0x80559AF8 -> 0x8055A014
        // Local variables
        unsigned long newLen; // r0
        class GFxTextFormat format; // r1+0xA4
        long curIndex; // r25
        unsigned long runLength; // r26
        unsigned long runIndex; // r27
        class StyledTextRun & run; // r0
    }

    // References
    // -> struct {} __vt__13GFxTextFormat;
}
// signature: GFxTextParagraph::GetTextFormat(unsigned long, unsigned long) const
// Range: 0x8055C390 -> 0x8055CB9C
class GFxTextFormat GFxTextParagraph::GetTextFormat(class GFxTextFormat * finalTextFmt /* r26 */, unsigned long startPos /* r27 */, unsigned long endPos /* r25 */) const {
    // Local variables
    class FormatRunIterator it; // r1+0x8
    long length; // r28
    unsigned int i; // r27

    {
        // Range: 0x8055C408 -> 0x8055CB20
        // Local variables
        class StyledTextRun & run; // r0
    }

    // References
    // -> struct {} __vt__13GFxTextFormat;
}
// signature: GFxTextParagraph::SetFormat(const GFxTextParagraphFormat &)
// Range: 0x8055CBA0 -> 0x8055CDC4
void GFxTextParagraph::SetFormat(class GFxTextParagraph * this /* r29 */) {
    // References
    // -> struct {} __vt__22GFxTextParagraphFormat;
}
// Range: 0x8055EF60 -> 0x8055EF6C
class FormatRunIterator GFxTextParagraph::GetIterator() const {
}
// signature: GFxTextParagraph::GetIteratorAt(unsigned long) const
// Range: 0x8055EF70 -> 0x8055EF80
class FormatRunIterator GFxTextParagraph::GetIteratorAt() const {
}
// Range: 0x8055EF80 -> 0x8055F168
void GFxTextParagraph::InsertString(class GFxTextParagraph * this /* r27 */, wchar_t * pstr /* r28 */, unsigned long pos /* r29 */, unsigned long length /* r30 */, class GFxTextFormat * pnewFmt /* r31 */) {
}
// signature: GFxTextParagraph::Copy(const GFxTextParagraph &, unsigned long, unsigned long, unsigned long)
// Range: 0x8055F170 -> 0x8055F2E4
void GFxTextParagraph::Copy(class GFxTextParagraph * this /* r29 */, class GFxTextParagraph & psrcPara /* r27 */, unsigned long startSrcIndex /* r30 */, unsigned long startDestIndex /* r31 */) {
    {
        // Range: 0x8055F184 -> 0x8055F294
        // Local variables
        class FormatRunIterator fmtIt; // r1+0x14

        {
            // Range: 0x8055F1C8 -> 0x8055F274
            // Local variables
            class StyledTextRun & run; // r0

            {
                // Range: 0x8055F1C8 -> 0x8055F274
                // Local variables
                unsigned long len; // r4
                long idx; // r5
            }
        }
    }
}
// signature: GFxTextParagraph::FormatRunIterator::FormatRunIterator(const GRangeDataArray<GPtr<GFxTextFormat>, std::garray<GRangeData<GPtr<GFxTextFormat>>>> &, const GFxWideStringBuffer &)
// Range: 0x8055F2F0 -> 0x8055F31C
void * GFxTextParagraph::FormatRunIterator::FormatRunIterator() {
}
// signature: GFxTextParagraph::FormatRunIterator::FormatRunIterator(const GRangeDataArray<GPtr<GFxTextFormat>, std::garray<GRangeData<GPtr<GFxTextFormat>>>> &, const GFxWideStringBuffer &, unsigned long)
// Range: 0x8055F320 -> 0x8055F464
void * GFxTextParagraph::FormatRunIterator::FormatRunIterator(class FormatRunIterator * this /* r31 */, class GFxWideStringBuffer & textHandle /* r28 */, unsigned long index /* r29 */) {
}
// Range: 0x8055F470 -> 0x8055F604
class StyledTextRun & GFxTextParagraph::FormatRunIterator::operator*(class FormatRunIterator * this /* r31 */) {
}
// Range: 0x8055F610 -> 0x8055F69C
void GFxTextParagraph::FormatRunIterator::operator++() {
}
// Range: 0x8055F6A0 -> 0x8055F8CC
void GFxTextParagraph::FormatRunIterator::SetTextPos(class FormatRunIterator * this /* r29 */, unsigned long newTextPos /* r30 */) {
}
// Range: 0x8055F8D0 -> 0x8055FA74
class CharacterInfo & GFxTextParagraph::CharactersIterator::operator*(class CharactersIterator * this /* r31 */) {
}
// Range: 0x805600B0 -> 0x80560260
class GFxTextParagraph * GFxStyledText::AppendNewParagraph(class GFxStyledText * this /* r29 */, class GFxTextParagraphFormat * pdefParaFmt /* r30 */) {
    // Local variables
    unsigned long nextPos; // r31

    // References
    // -> struct {} __vt__16GFxTextAllocator;
}
// signature: GFxStyledText::InsertNewParagraph(std::garray_base<GFxStyledText::ParagraphPtrWrapper, std::garray<GFxStyledText::ParagraphPtrWrapper>>::iterator &, const GFxTextParagraphFormat *)
// Range: 0x80560340 -> 0x80560590
class GFxTextParagraph * GFxStyledText::InsertNewParagraph(class GFxStyledText * this /* r28 */, class GFxTextParagraphFormat * pdefParaFmt /* r29 */) {
    {
        // Range: 0x805603A4 -> 0x80560578
        // Local variables
        unsigned long nextPos; // r30
        unsigned long index; // r31
    }

    // References
    // -> struct {} __vt__16GFxTextAllocator;
}
// signature: GFxStyledText::AppendString(const char *, unsigned long, const GFxTextFormat *, const GFxTextParagraphFormat *)
// Range: 0x805605B0 -> 0x80560860
void GFxStyledText::AppendString(class GFxStyledText * this /* r20 */, char * putf8String /* r21 */, class GFxTextFormat * pdefTextFmt /* r22 */, class GFxTextParagraphFormat * pdefParaFmt /* r23 */) {
    // Local variables
    char * pbegin; // reg65535
    char * pend; // r31
    unsigned long uniChar; // r30
    unsigned long curOffset; // r29
    class GFxTextParagraph * ppara; // r28
    unsigned int i; // r27

    {
        // Range: 0x80560654 -> 0x805607F8
        // Local variables
        wchar_t * pwstr; // r24
        char * pstr; // r1+0x8
        unsigned long paraLength; // r25
        unsigned long posInPara; // r26
    }
}
// Range: 0x80560860 -> 0x80560B14
void GFxStyledText::AppendString(class GFxStyledText * this /* r20 */, wchar_t * pstr /* r21 */, unsigned long length /* r22 */, class GFxTextFormat * pdefTextFmt /* r23 */, class GFxTextParagraphFormat * pdefParaFmt /* r24 */) {
    // Local variables
    unsigned long uniChar; // r31
    wchar_t * pend; // r30
    unsigned long curOffset; // r29
    class GFxTextParagraph * ppara; // r28
    unsigned int i; // r27

    {
        // Range: 0x8056090C -> 0x80560ABC
        // Local variables
        unsigned long paraLength; // r25
        unsigned long posInPara; // r26
    }
}
// Range: 0x80560B20 -> 0x80560B7C
void GFxStyledText::SetText(class GFxStyledText * this /* r29 */, char * putf8String /* r30 */, unsigned long stringSize /* r31 */) {
}
// Range: 0x80560B80 -> 0x80560BDC
void GFxStyledText::SetText(class GFxStyledText * this /* r29 */, wchar_t * pstr /* r30 */, unsigned long length /* r31 */) {
}
// signature: GFxStyledText::SetTextFormat(const GFxTextFormat &, unsigned long, unsigned long)
// Range: 0x80560E10 -> 0x80560F54
void GFxStyledText::SetTextFormat(class GFxStyledText * this /* r27 */, class GFxTextFormat & fmt /* r28 */) {
    // Local variables
    unsigned long indexInPara; // r1+0xC
    unsigned long endIndexInPara; // r0
    unsigned long runLen; // r29

    // References
    // -> static class ParagraphComparator cmp;
}
// signature: GFxStyledText::GetTextAndParagraphFormat(GFxTextFormat *, GFxTextParagraphFormat *, unsigned long, unsigned long)
// Range: 0x80560F60 -> 0x80561F10
void GFxStyledText::GetTextAndParagraphFormat(class GFxStyledText * this /* r14 */, class GFxTextFormat * pdestTextFmt /* r24 */, class GFxTextParagraphFormat * pdestParaFmt /* r1+0x8 */) {
    // Local variables
    unsigned long indexInPara; // r1+0x10
    unsigned long runLen; // r26
    class iterator paraIter; // r1+0x28
    class GFxTextFormat finalTextFmt; // r1+0x194
    class GFxTextParagraphFormat finalParaFmt; // r1+0x58
    int i; // r1+0x1F0
    int pi; // r14

    {
        // Range: 0x80561048 -> 0x805619A4
        // Local variables
        unsigned long lengthInPara; // r0
        class GFxTextParagraph * ppara; // r25

        {
            // Range: 0x80561048 -> 0x8056197C
            // Local variables
            class GFxTextParagraphFormat * ppfmt; // r0
        }
    }

    // References
    // -> struct {} __vt__22GFxTextParagraphFormat;
    // -> struct {} __vt__13GFxTextFormat;
    // -> static class ParagraphComparator cmp;
}
// signature: GFxStyledText::GetTextAndParagraphFormat(const GFxTextFormat **, const GFxTextParagraphFormat **, unsigned long)
// Range: 0x80561F10 -> 0x805621E0
bool GFxStyledText::GetTextAndParagraphFormat(class GFxStyledText * this /* r27 */, class GFxTextFormat * * ppdestTextFmt /* r28 */, class GFxTextParagraphFormat * * ppdestParaFmt /* r29 */) {
    // Local variables
    unsigned long indexInPara; // r1+0xC
    class GFxTextParagraphFormat * pparaFmt; // r7
    class GFxTextFormat * ptextFmt; // r30
    bool rv; // r3

    // References
    // -> static class ParagraphComparator cmp;
}
// signature: GFxStyledText::SetParagraphFormat(const GFxTextParagraphFormat &, unsigned long, unsigned long)
// Range: 0x805621E0 -> 0x80562314
void GFxStyledText::SetParagraphFormat(class GFxStyledText * this /* r25 */, class GFxTextParagraphFormat & fmt /* r28 */) {
    // Local variables
    unsigned long indexInPara; // r1+0xC
    unsigned long runLen; // r29

    // References
    // -> static class ParagraphComparator cmp;
}
// Range: 0x80562320 -> 0x80562844
void GFxStyledText::SetDefaultTextFormat(class GFxStyledText * this /* r30 */, class GFxTextFormat & defaultTextFmt /* r31 */) {
    {
        // Range: 0x8056233C -> 0x805625CC
        // Local variables
        class GFxTextFormat textfmt; // r1+0x1C
    }

    // References
    // -> struct {} __vt__16GFxTextAllocator;
    // -> struct {} __vt__13GFxTextFormat;
}
// Range: 0x80562850 -> 0x805629C8
void GFxStyledText::SetDefaultParagraphFormat(class GFxStyledText * this /* r29 */, class GFxTextParagraphFormat & defaultParagraphFmt /* r30 */) {
    // References
    // -> struct {} __vt__16GFxTextAllocator;
}
// Range: 0x805629D0 -> 0x80562AB8
void GFxStyledText::SetDefaultTextFormat(class GFxStyledText * this /* r29 */, class GFxTextFormat * pdefaultTextFmt /* r30 */) {
}
// signature: GFxStyledText::GetHtml() const
// Range: 0x80562AC0 -> 0x805636F0
class GFxString GFxStyledText::GetHtml(class GFxString * retStr /* r27 */, class GFxStyledText * this /* r28 */) const {
    {
        // Range: 0x80562B00 -> 0x80562B14
        // Local variables
        unsigned long np; // r29

        {
            // Range: 0x80562B00 -> 0x80562B14
            // Local variables
            class FormatRunIterator it; // r1+0x128

            {
                // Range: 0x80562B08 -> 0x80562B08
                // Local variables
                char buf[20]; // r1+0x114
            }
            {
                // Range: 0x80562B08 -> 0x80562B08
                // Local variables
                char buf[20]; // r1+0x100
            }
            {
                // Range: 0x80562B08 -> 0x80562B08
                // Local variables
                char buf[20]; // r1+0xEC
            }
            {
                // Range: 0x80562B08 -> 0x80562B08
                // Local variables
                char buf[20]; // r1+0xD8
            }
            {
                // Range: 0x80562B08 -> 0x80562B08
                // Local variables
                char buf[20]; // r1+0xC4
            }
            {
                // Range: 0x80562B08 -> 0x80562B08
                // Local variables
                unsigned int n; // r1+0xC

                {
                    // Range: 0x80562B08 -> 0x80562B08
                    // Local variables
                    unsigned int i; // r21

                    {
                        // Range: 0x80562B08 -> 0x80562B08
                        // Local variables
                        char buf[20]; // r1+0xB0
                    }
                }
            }
            {
                // Range: 0x80562B08 -> 0x80562B14
                // Local variables
                bool isImageTag; // r16

                {
                    // Range: 0x80562B08 -> 0x80562B14
                    {
                        // Range: 0x80562B08 -> 0x80562B08
                        // Local variables
                        char buf[20]; // r1+0x9C
                    }
                    {
                        // Range: 0x80562B08 -> 0x80562B08
                        // Local variables
                        char buf[20]; // r1+0x88
                    }
                    {
                        // Range: 0x80562B08 -> 0x80562B08
                        // Local variables
                        char buf[20]; // r1+0x74
                    }
                    {
                        // Range: 0x80562B08 -> 0x80562B08
                        // Local variables
                        char buf[20]; // r1+0x60
                    }
                    {
                        // Range: 0x80562B08 -> 0x80562B14
                        // Local variables
                        char buf[20]; // r1+0x4C
                    }
                    {
                        // Range: 0x80562B14 -> 0x80562B14
                        // Local variables
                        char buf[20]; // r1+0x38
                    }
                    {
                        // Range: 0x80562B14 -> 0x80562B14
                        // Local variables
                        char buf[20]; // r1+0x24
                    }
                    {
                        // Range: 0x80562B14 -> 0x80562B14
                        // Local variables
                        char buf[20]; // r1+0x10
                    }
                }
                {
                    // Range: 0x80562B14 -> 0x80562B14
                    // Local variables
                    unsigned long i; // r16
                }
            }
        }
    }
}
// Range: 0x80563730 -> 0x805637A4
unsigned long GFxStyledText::GetLength() const {
    // Local variables
    unsigned long length; // r3
}
// signature: GFxStyledText::GetText() const
// Range: 0x805637B0 -> 0x80563868
class GFxString GFxStyledText::GetText(class GFxString * retStr /* r28 */, class GFxStyledText * this /* r29 */) const {
}
// Range: 0x80563870 -> 0x80563A04
void GFxStyledText::GetText(class GFxWideStringBuffer * pBuffer /* r25 */) const {
}
// Range: 0x80563A10 -> 0x80563F04
void GFxStyledText::InsertString(class GFxStyledText * this /* r20 */, wchar_t * pstr /* r21 */, unsigned long pos /* r25 */, unsigned long length /* r22 */, class GFxTextFormat * pdefTextFmt /* r23 */, class GFxTextParagraphFormat * pdefParaFmt /* r24 */) {
    // Local variables
    unsigned long indexInPara; // r1+0xC
    unsigned long remainingSrcStrLen; // reg65535
    unsigned long insLineLen; // r26
    unsigned long nextParaStartingPos; // r25

    {
        // Range: 0x80563C24 -> 0x80563E68
        {
            // Range: 0x80563C24 -> 0x80563C24
            // Local variables
            unsigned long remLen; // r27
            class GFxTextParagraph & newPara; // r27
            class iterator newParaIter; // r1+0x10
        }
    }

    // References
    // -> static class ParagraphComparator cmp;
}
// signature: GFxStyledText::Remove(unsigned long, unsigned long)
// Range: 0x80563F10 -> 0x805643F8
void GFxStyledText::Remove(class GFxStyledText * this /* r24 */, unsigned long startPos /* r25 */) {
    // Local variables
    unsigned long length; // r27
    unsigned long indexInPara; // r1+0xC
    class iterator paraIter; // r1+0x10
    class GFxTextParagraph * pprevPara; // r26
    unsigned long remainingLen; // r29
    bool needUniteParas; // r25

    // References
    // -> static class ParagraphComparator cmp;
}
// signature: GFxStyledText::OnTextInserting(unsigned long, unsigned long, const wchar_t *)
// Range: 0x805644F0 -> 0x805644F4
void GFxStyledText::OnTextInserting() {
}
// signature: GFxStyledText::OnTextRemoving(unsigned long, unsigned long)
// Range: 0x80564500 -> 0x80564504
void GFxStyledText::OnTextRemoving() {
}
// signature: GFxStyledText::OnParagraphRemoving(const GFxTextParagraph &)
// Range: 0x80564510 -> 0x80564514
void GFxStyledText::OnParagraphRemoving() {
}
// Range: 0x80564630 -> 0x80564670
void GFxStyledText::Clear(class GFxStyledText * this /* r31 */) {
}
// Range: 0x80564670 -> 0x805649EC
void * GFxTextDocView::GFxTextDocView(class GFxTextDocView * this /* r30 */, class GFxFontManager * pfontMgr /* r31 */) {
    // References
    // -> struct {} __vt__Q214GFxTextDocView12DocumentText;
    // -> struct {} __vt__13GFxTextFormat;
    // -> struct {} __vt__22GFxTextParagraphFormat;
    // -> struct {} __vt__13GFxStyledText;
    // -> struct {} __vt__13GFxTextFilter;
    // -> struct {} __vt__14GFxTextDocView;
}
// Range: 0x80564B40 -> 0x80564CBC
void * GFxTextDocView::~GFxTextDocView(class GFxTextDocView * this /* r29 */) {
    // References
    // -> struct {} __vt__14GFxTextDocView;
}
// Range: 0x80564EE0 -> 0x80565200
void GFxTextDocView::ImageSubstitutor::AddImageDesc(class ImageSubstitutor * this /* r27 */, class Element & elem /* r28 */) {
    // Local variables
    class Comparable e; // r1+0x8
    long i; // r0

    // References
    // -> static class Comparator cmp;
}
// signature: GFxTextDocView::ImageSubstitutor::FindImageDesc(const wchar_t *, unsigned long, unsigned long *)
// Range: 0x805653E0 -> 0x80565484
class GFxTextImageDesc * GFxTextDocView::ImageSubstitutor::FindImageDesc(class ImageSubstitutor * this /* r30 */, unsigned long * ptextLen /* r31 */) {
    // Local variables
    class Comparable e; // r1+0x8
    long i; // r0

    // References
    // -> static class Comparator cmp;
}
// Range: 0x80565670 -> 0x805657D8
void GFxTextDocView::ImageSubstitutor::RemoveImageDesc(class ImageSubstitutor * this /* r26 */, class GFxTextImageDesc * pimgDesc /* r27 */) {
    {
        // Range: 0x80565684 -> 0x805657B8
        // Local variables
        unsigned long n; // r28
        unsigned long i; // r29
    }
}
// signature: GFxTextDocView::SetText(const char *, unsigned long)
// Range: 0x805657E0 -> 0x80565828
void GFxTextDocView::SetText(class GFxTextDocView * this /* r31 */) {
}
// signature: GFxTextDocView::SetText(const wchar_t *, unsigned long)
// Range: 0x80565830 -> 0x80565878
void GFxTextDocView::SetText(class GFxTextDocView * this /* r31 */) {
}
// signature: GFxTextDocView::SetTextFormat(const GFxTextFormat &, unsigned long, unsigned long)
// Range: 0x80565880 -> 0x805658C8
void GFxTextDocView::SetTextFormat(class GFxTextDocView * this /* r31 */) {
}
// signature: GFxTextDocView::SetParagraphFormat(const GFxTextParagraphFormat &, unsigned long, unsigned long)
// Range: 0x805658D0 -> 0x80565918
void GFxTextDocView::SetParagraphFormat(class GFxTextDocView * this /* r31 */) {
}
// signature: GFxTextDocView::DocumentText::OnParagraphRemoving(const GFxTextParagraph &)
// Range: 0x80565920 -> 0x80565934
void GFxTextDocView::DocumentText::OnParagraphRemoving() {
}
// signature: GFxTextDocView::DocumentText::OnTextInserting(unsigned long, unsigned long, const wchar_t *)
// Range: 0x80565940 -> 0x80565958
void GFxTextDocView::DocumentText::OnTextInserting() {
}
// signature: GFxTextDocView::DocumentText::OnTextRemoving(unsigned long, unsigned long)
// Range: 0x80565960 -> 0x80565978
void GFxTextDocView::DocumentText::OnTextRemoving() {
}
// Range: 0x80565980 -> 0x80565988
class GFxString GFxTextDocView::GetText() const {
}
// Range: 0x80565990 -> 0x80565998
class GFxString GFxTextDocView::GetHtml() const {
}
// Range: 0x805659A0 -> 0x80565A38
void GFxTextDocView::ParseHtml(class GFxTextDocView * this /* r27 */, char * putf8Str /* r28 */, unsigned long utf8Len /* r29 */, bool condenseWhite /* r30 */, class garray * pimgInfoArr /* r31 */) {
}
// Range: 0x80568D60 -> 0x80568DF8
void GFxTextDocView::ParseHtml(class GFxTextDocView * this /* r27 */, wchar_t * pwStr /* r28 */, unsigned long strLen /* r29 */, bool condenseWhite /* r30 */, class garray * pimgInfoArr /* r31 */) {
}
// Range: 0x8056BFE0 -> 0x8056C104
void GFxTextDocView::AppendText(class GFxTextDocView * this /* r29 */, char * putf8Str /* r30 */, unsigned long utf8Len /* r31 */) {
    // Local variables
    class GFxTextFormat * ptxtfmt; // r1+0xC
    class GFxTextParagraphFormat * pparafmt; // r1+0x8
}
// signature: GFxTextDocView::AppendHtml(const char *, unsigned long, bool)
// Range: 0x8056C110 -> 0x8056C19C
void GFxTextDocView::AppendHtml(class GFxTextDocView * this /* r29 */, char * putf8Str /* r30 */, bool condenseWhite /* r31 */) {
}
// signature: GFxTextDocView::ReplaceText(const wchar_t *, unsigned long, unsigned long)
// Range: 0x8056C1A0 -> 0x8056C20C
void GFxTextDocView::ReplaceText(class GFxTextDocView * this /* r29 */, wchar_t * pstr /* r30 */, unsigned long startPos /* r31 */) {
}
// Range: 0x8056C210 -> 0x8056C2D4
void GFxTextDocView::Close(class GFxTextDocView * this /* r31 */) {
}
// Range: 0x8056C2E0 -> 0x8056C458
void GFxTextDocView::SetViewRect(class GFxTextDocView * this /* r29 */, class GRect & rect /* r30 */, enum UseType ut /* r31 */) {
    {
        // Range: 0x8056C2E8 -> 0x8056C43C
        // Local variables
        class GRect textRect; // r1+0x8
        unsigned int oldW; // r0

        {
            // Range: 0x8056C3E0 -> 0x8056C43C
            // Local variables
            unsigned int maxVScroll; // r4
            unsigned int maxHScroll; // r4
        }
    }
}
// signature: GFxTextDocView::OnDocumentChanged(unsigned int)
// Range: 0x8056C460 -> 0x8056C4CC
void GFxTextDocView::OnDocumentChanged(class GFxTextDocView * this /* r31 */) {
}
// signature: GFxTextDocView::OnDocumentParagraphRemoving(const GFxTextParagraph &)
// Range: 0x8056C4D0 -> 0x8056C5D8
void GFxTextDocView::OnDocumentParagraphRemoving() {
    // Local variables
    class Iterator linesIt; // r1+0x8

    {
        // Range: 0x8056C4E4 -> 0x8056C570
        // Local variables
        bool found; // r9
    }
}
// Range: 0x8056C5E0 -> 0x8056CC9C
class GFxFontHandle * GFxTextDocView::FindFont(class GFxTextDocView * this /* r29 */, class FindFontInfo * pfontInfo /* r30 */) {
    {
        // Range: 0x8056C5F4 -> 0x8056CC78
        // Local variables
        class GPtr * ppcurrentFont; // r0

        {
            // Range: 0x8056CA70 -> 0x8056CC50
            // Local variables
            class GFxFontManager * pfontMgr; // r31
        }
    }
}
// Range: 0x8056DCA0 -> 0x8056E94C
void GFxTextDocView::FinalizeLine(class GFxTextDocView * this /* r23 */, class Line * ptempLine /* r24 */, class FormatParagraphInfo * pinfo /* r25 */, class GFxTextParagraphFormat & paraFormat /* r26 */, class GFxLineCursor & lineCursor /* r27 */) {
    // Local variables
    int lastAdvance; // r3
    float fleading; // f0
    float lineHeight; // f31
    int leading; // r0
    class Line * pcurLine; // r30
    unsigned int glyphsCount; // r29
    unsigned int formatDataElemCount; // r28
    int lineOffsetX; // r0

    {
        // Range: 0x8056DDB8 -> 0x8056DF24
        // Local variables
        float scale; // f5
        float fontSize; // f0
        class FindFontInfo findFontInfo; // r1+0x10
    }
    {
        // Range: 0x8056E300 -> 0x8056E574
        // Local variables
        int deltaW; // r28

        {
            // Range: 0x8056E390 -> 0x8056E498
            // Local variables
            class GlyphIterator git; // r1+0x20
            int advDelta; // r29

            {
                // Range: 0x8056E3B8 -> 0x8056E430
                // Local variables
                class GlyphEntry & ge; // r0
            }
        }
    }
    {
        // Range: 0x8056E710 -> 0x8056E800
        // Local variables
        float adjTextRect; // f2
    }
}
// Range: 0x8056EAB0 -> 0x80571574
void GFxTextDocView::FormatParagraph(class GFxTextDocView * this /* r15 */, class GFxTextParagraph & paragraph /* r1+0x8 */, class FormatParagraphInfo * pinfo /* r16 */) {
    // Local variables
    class FindFontInfo findFontInfo; // r1+0x40
    unsigned int currentLineNum; // r4
    class GFxTextParagraphFormat & paraFormat; // r1+0x284
    class GFxLineCursor lineCursor; // r1+0x1C8
    class GFxLineCursor wordWrapPoint; // r1+0x130
    unsigned long maxGlyphCount; // r14
    unsigned int linesz; // r0
    class Line * ptempLine; // r27
    class CharactersIterator savedCharIter; // r1+0x78
    class GRect glyphBounds; // r1+0x30
    unsigned int tabStopsIndex; // r26
    unsigned int * ptabStops; // r0
    unsigned int deltaText; // r25

    {
        // Range: 0x8056EF14 -> 0x8056F3BC
        // Local variables
        class CharacterInfo & chInfo; // r0
        class GlyphEntry & grec; // r0

        {
            // Range: 0x8056F018 -> 0x8056F30C
            // Local variables
            unsigned long color; // r0
            float fontSize; // f19
            int glyphIndex; // r0
        }
    }
    {
        // Range: 0x8056F428 -> 0x80571028
        // Local variables
        class GlyphEntry & grec; // r0
        int newLineWidth; // r18
        bool isNbsp; // r1+0x280
        bool isSpace; // r19
        float fontSize; // f19
        int adjLineWidth; // r20
        int glyphWidth; // r21
        int lastAdvance; // r22
        float glyphAdvance; // f20
        int glyphIndex; // r23
        float scale; // f21
        class GFxFontResource * pfont; // r24
        class CharacterInfo & chInfo; // r0

        {
            // Range: 0x8056F428 -> 0x8056F428
            // Local variables
            unsigned long textLen; // r1+0x10
            wchar_t * premainingStr; // r0
        }
        {
            // Range: 0x8056F434 -> 0x8056F434
            // Local variables
            float prevGlyphAdvanceAdj; // f1
        }
        {
            // Range: 0x8056F434 -> 0x8056F434
            // Local variables
            unsigned long newTextPos; // r17
            bool wordWrap; // r14

            {
                // Range: 0x8056F434 -> 0x8056F434
                // Local variables
                class GlyphInserter ins; // r1+0x64
            }
        }
        {
            // Range: 0x8056F434 -> 0x8056F460
            // Local variables
            class GPoint p; // r1+0x28
        }
        {
            // Range: 0x8056F460 -> 0x80570C3C
            // Local variables
            unsigned long color; // r0
        }
        {
            // Range: 0x80570C3C -> 0x80570C84
            // Local variables
            int nextTabStopPos; // r0
        }
    }

    // References
    // -> static int LogCount;
    // -> static class Comparator cmp;
    // -> class __locale _current_locale;
}
// Range: 0x80571580 -> 0x805726E4
void GFxTextDocView::Format(class GFxTextDocView * this /* r31 */, class GFxLog * plog /* r18 */) {
    // Local variables
    class ghash_identity fontCache; // r1+0x8
    class Iterator linesIt; // r1+0x80
    class FormatParagraphInfo paraInfo; // r1+0xB0
    int textWidth; // r22
    int textHeight; // r21
    bool valignApplied; // r18
    enum ViewVAlignment valign; // r19
    enum ViewTextAutoSize tas; // r3
    unsigned int maxHScroll; // r4
    unsigned int maxVScroll; // r4

    {
        // Range: 0x80571628 -> 0x80571F14
        {
            // Range: 0x80571628 -> 0x8057162C
            {
                // Range: 0x80571628 -> 0x8057162C
                // Local variables
                unsigned long pos; // r20

                {
                    // Range: 0x80571628 -> 0x8057162C
                    // Local variables
                    int oldY; // r18
                    int oldX; // r19
                }
            }
            {
                // Range: 0x8057162C -> 0x8057162C
                {
                    // Range: 0x8057162C -> 0x8057162C
                    // Local variables
                    unsigned long paraId; // r6
                    unsigned int l; // r5

                    {
                        // Range: 0x8057162C -> 0x8057162C
                        // Local variables
                        class Iterator it; // r1+0x70
                    }
                }
                {
                    // Range: 0x8057162C -> 0x8057162C
                    // Local variables
                    unsigned int l; // r5

                    {
                        // Range: 0x8057162C -> 0x8057162C
                        // Local variables
                        class Iterator it; // r1+0x60
                    }
                }
            }
        }
    }
    {
        // Range: 0x80571FFC -> 0x80572348
        // Local variables
        class GRect newViewRect; // r1+0x50

        {
            // Range: 0x8057205C -> 0x805720D4
            // Local variables
            float newW; // f5
        }
        {
            // Range: 0x805720D4 -> 0x80572174
            // Local variables
            float newH; // f4
        }
        {
            // Range: 0x805721D4 -> 0x80572348
            // Local variables
            class Iterator linesIt; // r1+0x40
        }
    }
    {
        // Range: 0x80572348 -> 0x80572524
        // Local variables
        float vscale; // f4
        float hscale; // f30
        float scale; // r31
        class GRect maxTextRect; // r1+0x30

        {
            // Range: 0x80572494 -> 0x80572524
            // Local variables
            int minLineH; // r0

            {
                // Range: 0x805724A8 -> 0x805724D8
                // Local variables
                float fmlh; // f2
            }
        }
    }
    {
        // Range: 0x80572524 -> 0x8057261C
        // Local variables
        float textHeight; // f9
        class GRect newTextRect; // r1+0x10
        class GRect maxTextRect; // r1+0x20
    }
}
// signature: GFxTextDocView::Display(GFxDisplayContext &, const GMatrix2D &, const GRenderer::Cxform &, bool, GFxLog *)
// Range: 0x80572750 -> 0x805728BC
void GFxTextDocView::Display(class GFxTextDocView * this /* r27 */, class GFxDisplayContext & context /* r28 */, class GMatrix2D & mat /* r29 */, class Cxform & cx /* r30 */, bool nextFrame /* r31 */) {
    // Local variables
    class GFxTextFieldParam param; // r1+0x8
}
// Range: 0x805728C0 -> 0x8057295C
bool GFxTextDocView::SetHScrollOffset(class GFxTextDocView * this /* r29 */, unsigned int hscroll /* r30 */) {
    // Local variables
    bool rv; // r31
}
// Range: 0x80572970 -> 0x80572A00
bool GFxTextDocView::SetVScrollOffset(class GFxTextDocView * this /* r29 */, unsigned int vscroll /* r30 */) {
    // Local variables
    bool rv; // r31
}
// Range: 0x80572A10 -> 0x80572A84
float GFxTextDocView::GetTextWidth(class GFxTextDocView * this /* r31 */) {
}
// Range: 0x80572A90 -> 0x80572B04
float GFxTextDocView::GetTextHeight(class GFxTextDocView * this /* r31 */) {
}
// Range: 0x80572B10 -> 0x80572B5C
unsigned int GFxTextDocView::GetLinesCount(class GFxTextDocView * this /* r31 */) {
}
// Range: 0x80572B60 -> 0x80572C60
unsigned int GFxTextDocView::GetMaxHScroll(class GFxTextDocView * this /* r30 */) {
    // Local variables
    unsigned int v; // r0
}
// Range: 0x80572C60 -> 0x80572E90
unsigned int GFxTextDocView::GetMaxVScroll(class GFxTextDocView * this /* r31 */) {
    {
        // Range: 0x80572CBC -> 0x80572E78
        // Local variables
        float top; // f1
        int lineH; // r6
        class Iterator linesIt; // r1+0x8
        unsigned int l; // r4
    }
}
// Range: 0x80572E90 -> 0x80572EB8
void GFxTextDocView::SetAutoSizeX() {
}
// Range: 0x80572EC0 -> 0x80572EE8
void GFxTextDocView::SetAutoSizeY() {
}
// Range: 0x80572EF0 -> 0x80572F18
void GFxTextDocView::SetWordWrap() {
}
// Range: 0x80572F20 -> 0x80572F48
void GFxTextDocView::ClearWordWrap() {
}
// Range: 0x80572F50 -> 0x80572F9C
class GRect & GFxTextDocView::GetViewRect(class GFxTextDocView * this /* r31 */) {
}
// Range: 0x80572FA0 -> 0x8057333C
unsigned long GFxTextDocView::GetCharIndexAtPoint(class GFxTextDocView * this /* r29 */, float x /* f31 */, float y /* f30 */) {
    // Local variables
    class Iterator it; // r1+0x8

    {
        // Range: 0x80573054 -> 0x8057330C
        // Local variables
        float lineOffX; // f0
        class Line & line; // r31

        {
            // Range: 0x805730F0 -> 0x8057330C
            // Local variables
            unsigned int i; // r29
            class GlyphIterator git; // r1+0x18
            int xoffset; // r30
            float xoffInLine; // f30

            {
                // Range: 0x8057314C -> 0x80573194
                // Local variables
                class GlyphEntry & ge; // r0
            }
        }
    }
}
// signature: GFxTextDocView::GetCursorPosInLineByOffset(unsigned int, float)
// Range: 0x80573340 -> 0x8057362C
unsigned long GFxTextDocView::GetCursorPosInLineByOffset() {
    // Local variables
    class Line & line; // r31

    {
        // Range: 0x80573390 -> 0x80573600
        // Local variables
        unsigned int i; // r29
        class GlyphIterator git; // r1+0x8
        int xoffset; // r30
        float xoffInLine; // f30

        {
            // Range: 0x80573400 -> 0x80573484
            // Local variables
            unsigned int advance; // r0
            class GlyphEntry & ge; // r0
        }
    }
}
// Range: 0x80573630 -> 0x805739BC
bool GFxTextDocView::IsUrlAtPoint(class GFxTextDocView * this /* r29 */, float x /* f31 */, float y /* f30 */) {
    // Local variables
    class Iterator it; // r1+0x8
    bool rv; // r31

    {
        // Range: 0x805736E4 -> 0x8057398C
        // Local variables
        float lineOffX; // f0
        class Line & line; // r4

        {
            // Range: 0x80573784 -> 0x805738B8
            // Local variables
            unsigned int i; // r29
            class GlyphIterator git; // r1+0x18
            int xoffset; // r30
            float xoffInLine; // f30

            {
                // Range: 0x805737F4 -> 0x80573844
                // Local variables
                unsigned int advance; // r0
                class GlyphEntry & ge; // r0
            }
        }
    }
}
// signature: GFxTextDocView::SetFontScaleFactor(float)
// Range: 0x805739C0 -> 0x80573A34
void GFxTextDocView::SetFontScaleFactor(class GFxTextDocView * this /* r31 */) {
}
// signature: GFxTextDocView::GetLineIndexAtPoint(float, float)
// Range: 0x80573A50 -> 0x80573B30
unsigned int GFxTextDocView::GetLineIndexAtPoint(class GFxTextDocView * this /* r31 */, float y /* f31 */) {
    // Local variables
    class Iterator it; // r1+0x8
}
// Range: 0x80573B30 -> 0x80573BE8
unsigned int GFxTextDocView::GetLineIndexOfChar(class GFxTextDocView * this /* r30 */, unsigned long indexOfChar /* r31 */) {
    // Local variables
    class Iterator it; // r1+0x8
}
// Range: 0x80573BF0 -> 0x80573CF0
unsigned long GFxTextDocView::GetLineOffset(class GFxTextDocView * this /* r30 */, unsigned int lineIndex /* r31 */) {
    // Local variables
    class Iterator it; // r1+0x18
}
// Range: 0x80573CF0 -> 0x80573DDC
unsigned long GFxTextDocView::GetLineLength(class GFxTextDocView * this /* r30 */, unsigned int lineIndex /* r31 */) {
    // Local variables
    class Iterator it; // r1+0x18
}
// Range: 0x80573DE0 -> 0x80573FD0
wchar_t * GFxTextDocView::GetLineText(class GFxTextDocView * this /* r29 */, unsigned int lineIndex /* r31 */, unsigned long * plen /* r30 */) {
    // Local variables
    class Iterator it; // r1+0x20

    {
        // Range: 0x80573E70 -> 0x80573FB0
        // Local variables
        unsigned long indexInPara; // r1+0xC
    }

    // References
    // -> static class ParagraphComparator cmp;
}
// Range: 0x80573FD0 -> 0x80574220
bool GFxTextDocView::GetLineMetrics(class GFxTextDocView * this /* r29 */, unsigned int lineIndex /* r31 */, class LineMetrics * pmetrics /* r30 */) {
    // Local variables
    class Iterator it; // r1+0x18
}
// Range: 0x80574220 -> 0x80574708
bool GFxTextDocView::GetCharBoundaries(class GFxTextDocView * this /* r28 */, class GRect * pCharRect /* r26 */, unsigned long indexOfChar /* r27 */) {
    // Local variables
    class Iterator it; // r1+0x28
    bool rv; // r31

    {
        // Range: 0x80574348 -> 0x80574618
        // Local variables
        int advance; // r28
        class GlyphIterator git; // r1+0x38
        unsigned long indexInLine; // r29
        class Line & line; // r30

        {
            // Range: 0x805743E8 -> 0x805745AC
            // Local variables
            unsigned int i; // r27

            {
                // Range: 0x805743E8 -> 0x805745AC
                // Local variables
                class GlyphEntry & glyph; // r0

                {
                    // Range: 0x805743F0 -> 0x80574590
                    // Local variables
                    float textHeight; // f1
                    float scale; // f4
                    class GFxFontResource * pfont; // r0
                }
            }
        }
    }
}
// Range: 0x80574710 -> 0x80574DC8
bool GFxTextDocView::GetExactCharBoundaries(class GFxTextDocView * this /* r28 */, class GRect * pCharRect /* r26 */, unsigned long indexOfChar /* r27 */) {
    // Local variables
    unsigned long len; // r0
    class Iterator it; // r1+0x20
    bool rv; // r31

    {
        // Range: 0x80574830 -> 0x805749EC
        // Local variables
        class Iterator it; // r1+0x30

        {
            // Range: 0x80574848 -> 0x805749E4
            // Local variables
            class Line & line; // r0
        }
    }
    {
        // Range: 0x805749FC -> 0x80574CD4
        // Local variables
        int advance; // r28
        class GlyphIterator git; // r1+0x40
        unsigned long indexInLine; // r29
        class Line & line; // r30

        {
            // Range: 0x80574A9C -> 0x80574C68
            // Local variables
            unsigned int i; // r27

            {
                // Range: 0x80574A9C -> 0x80574C68
                // Local variables
                class GlyphEntry & glyph; // r0

                {
                    // Range: 0x80574AA4 -> 0x80574C4C
                    // Local variables
                    float textHeight; // f2
                    float scale; // f31
                    class GFxFontResource * pfont; // r0
                }
            }
        }
    }
}
// Range: 0x80574DD0 -> 0x80574E9C
unsigned long GFxTextDocView::GetFirstCharInParagraph(unsigned long indexOfChar /* r30 */) {
    // Local variables
    unsigned long indexInPara; // r1+0xC

    // References
    // -> static class ParagraphComparator cmp;
}
// Range: 0x80574EA0 -> 0x80574FDC
unsigned int GFxTextDocView::GetBottomVScroll(class GFxTextDocView * this /* r30 */) {
    // Local variables
    class Iterator it; // r1+0x8
    unsigned int index; // r31
}
// signature: GFxTextDocView::SetBottomVScroll(unsigned int)
// Range: 0x80574FE0 -> 0x80575278
bool GFxTextDocView::SetBottomVScroll(class GFxTextDocView * this /* r30 */) {
    // Local variables
    long l; // r4
    class Iterator linesIt; // r1+0x18

    {
        // Range: 0x80575054 -> 0x80575258
        // Local variables
        unsigned int topMostLine; // r31
        float top; // f1
        int lineH; // r5
    }
}
// Range: 0x80575280 -> 0x80575324
class GFxTextEditorKit * GFxTextDocView::CreateEditorKit(class GFxTextDocView * this /* r30 */) {
}
// Range: 0x80575330 -> 0x80575338
class GFxTextEditorKit * GFxTextDocView::GetEditorKit() {
}
// Range: 0x80575340 -> 0x805753F8
void * GFxTextEditorKit::GFxTextEditorKit(class GFxTextEditorKit * this /* r30 */, class GFxTextDocView * pdocview /* r31 */) {
    // References
    // -> struct {} __vt__16GFxTextEditorKit;
}
// Range: 0x80575460 -> 0x805754EC
void * GFxTextEditorKit::~GFxTextEditorKit(class GFxTextEditorKit * this /* r30 */) {
}
// Range: 0x805754F0 -> 0x805757B4
void GFxTextEditorKit::SetCursorPos(class GFxTextEditorKit * this /* r30 */, unsigned long pos /* r31 */) {
    {
        // Range: 0x805754FC -> 0x8057560C
        {
            // Range: 0x805755B4 -> 0x8057560C
            // Local variables
            class GlyphEntry * pge; // r0
            unsigned long textPos; // r1+0x18
        }
    }
    {
        // Range: 0x8057560C -> 0x80575794
        // Local variables
        class GFxTextFormat * ptextFmt; // r1+0x10
        class GFxTextParagraphFormat * pparaFmt; // r1+0x14

        {
            // Range: 0x805756EC -> 0x80575794
            // Local variables
            bool res; // r0
        }
    }

    // References
    // -> static class ParagraphComparator cmp;
}
// Range: 0x805757D0 -> 0x805757D8
unsigned long GFxTextEditorKit::GetCursorPos() const {
}
// signature: GFxTextEditorKit::Advance(float)
// Range: 0x805757E0 -> 0x80575858
void GFxTextEditorKit::Advance() {
    {
        // Range: 0x805757E0 -> 0x80575854
        // Local variables
        float delta; // f3
    }
}
// Range: 0x80575860 -> 0x80575CC8
bool GFxTextEditorKit::CalcCursorRectPosInLineBuffer(class GFxTextEditorKit * this /* r27 */, unsigned long charIndex /* r26 */, class GPoint * ptopLeft /* r23 */, unsigned int * plineIndex /* r24 */, unsigned int * pglyphIndex /* r25 */) {
    // Local variables
    unsigned int lineIndex; // r0

    {
        // Range: 0x80575970 -> 0x80575CAC
        // Local variables
        unsigned int nGlyph; // r27
        class GlyphIterator git; // r1+0x18
        int xoffset; // r28
        unsigned long posInLine; // r29
        class Line & line; // r30

        {
            // Range: 0x805759D8 -> 0x80575A0C
            // Local variables
            class GlyphEntry & ge; // r0
        }
        {
            // Range: 0x80575A78 -> 0x80575AA0
            // Local variables
            unsigned int i; // r26

            {
                // Range: 0x80575A78 -> 0x80575AA0
                // Local variables
                class GlyphEntry & ge; // r0
            }
        }
    }
}
// Range: 0x80575CD0 -> 0x80576010
class GlyphEntry * GFxTextEditorKit::GetGlyphEntryAtIndex(class GFxTextEditorKit * this /* r30 */, unsigned long charIndex /* r29 */, unsigned long * ptextPos /* r28 */) {
    // Local variables
    unsigned int lineIndex; // r0

    {
        // Range: 0x80575D98 -> 0x80575FF4
        // Local variables
        unsigned int prevLen; // r27
        class GlyphEntry * pge; // r29
        class GlyphIterator git; // r1+0x18
        unsigned long posInLine; // r30
        unsigned int textPos; // r31
        class Line * pline; // r3

        {
            // Range: 0x80575E04 -> 0x80575E20
            // Local variables
            class GlyphEntry & ge; // r0
        }
        {
            // Range: 0x80575E88 -> 0x80575EC0
            // Local variables
            unsigned int i; // r26
        }
    }
}
// Range: 0x80576010 -> 0x80576998
void GFxTextEditorKit::Display(class GFxTextEditorKit * this /* r26 */, class GFxDisplayContext & context /* r27 */, class GMatrix2D & mat /* r28 */, class Cxform & cx /* r29 */) {
    // Local variables
    class GRenderer * prenderer; // r30

    {
        // Range: 0x80576024 -> 0x80576980
        // Local variables
        class GRect & textRect; // r0
        class GRect actualCursorRect; // r1+0xC8
        unsigned int lineIndex; // r1+0x18

        {
            // Range: 0x80576064 -> 0x80576370
            // Local variables
            unsigned int glyphIndex; // r1+0x14
            class GPoint topLeft; // r1+0x90
            class GRect newCursorRect; // r1+0xE8

            {
                // Range: 0x80576080 -> 0x80576130
                // Local variables
                class GFxTextFormat * pdefFormat; // r0
                class Line & line; // r0
            }
            {
                // Range: 0x80576130 -> 0x805761A0
                // Local variables
                float h; // f0
                float scale; // f2
                class GFxFontResource * pfont; // r0
                class FindFontInfo findFontInfo; // r1+0xD8
            }
        }
        {
            // Range: 0x8057654C -> 0x80576980
            // Local variables
            class VertexXY16i icoords[4]; // r1+0xA8
            class GPoint coords[4]; // r1+0x110
            class GColor transformedColor; // r1+0x10
            class GPoint p1; // r1+0x88
            class GMatrix2D invmm; // r1+0x130
            class GMatrix2D mm; // r1+0x148
            class GRect newRect; // r1+0xB8
            class GMatrix2D m; // r1+0x160
        }
    }

    // References
    // -> static unsigned short indices[6];
}
// signature: GFxTextEditorKit::ResetBlink(bool, bool)
// Range: 0x805769A0 -> 0x80576A00
void GFxTextEditorKit::ResetBlink() {
}
// Range: 0x80576A00 -> 0x80576F20
bool GFxTextEditorKit::ScrollToCursor(class GFxTextEditorKit * this /* r28 */) {
    // Local variables
    class GPoint topLeft; // r1+0x20
    unsigned int lineIndex; // r1+0x8
    bool rv; // r30

    {
        // Range: 0x80576A1C -> 0x80576F04
        // Local variables
        class GRect newCursorRect; // r1+0x38

        {
            // Range: 0x80576B4C -> 0x80576F04
            // Local variables
            int prevHScroll; // r4
            int hscroll; // r29
        }
    }
}
// signature: GFxTextEditorKit::OnMouseDown(float, float, int)
// Range: 0x80576F20 -> 0x8057717C
void GFxTextEditorKit::OnMouseDown(class GFxTextEditorKit * this /* r30 */, float x /* f30 */, float y /* f29 */) {
    {
        // Range: 0x80576F2C -> 0x80577148
        // Local variables
        float ay; // f29
        float ax; // f30
    }
}
// Range: 0x80577180 -> 0x805783E0
bool GFxTextEditorKit::OnKeyDown(class GFxTextEditorKit * this /* r25 */, int keyCode /* r8 */, class GFxSpecialKeysState & specKeysState /* r26 */) {
    // Local variables
    bool rv; // r28
    unsigned long newPos; // r30
    bool needChangeNotify; // r27
    float lastHorizCursorPos; // f31

    {
        // Range: 0x805776A0 -> 0x80577A14
        // Local variables
        unsigned int lineIndex; // r1+0x14
        class GPoint topLeft; // r1+0x58

        {
            // Range: 0x8057778C -> 0x80577A10
            // Local variables
            unsigned int numLinesOnScreen; // r3
        }
    }
    {
        // Range: 0x80577A14 -> 0x80577F84
        // Local variables
        unsigned int lineIndex; // r1+0x10
        class GPoint topLeft; // r1+0x50
    }
    {
        // Range: 0x80577F84 -> 0x805780FC
        // Local variables
        unsigned int lineIndex; // r1+0xC
        class GPoint topLeft; // r1+0x48
    }
    {
        // Range: 0x805780FC -> 0x805782A4
        // Local variables
        unsigned int lineIndex; // r1+0x8
        class GPoint topLeft; // r1+0x40
    }
    {
        // Range: 0x80578320 -> 0x80578374
        // Local variables
        class InsertCharCommand cmd; // r1+0x38
    }
}
// signature: GFxTextEditorKit::OnChar(unsigned long)
// Range: 0x80578400 -> 0x80578510
bool GFxTextEditorKit::OnChar(class GFxTextEditorKit * this /* r27 */) {
    // Local variables
    bool rv; // r30
    unsigned long newPos; // r29
    bool needChangeNotify; // r28

    {
        // Range: 0x80578428 -> 0x805784B0
        // Local variables
        wchar_t wc; // r7

        {
            // Range: 0x80578478 -> 0x805784B0
            // Local variables
            class InsertCharCommand cmd; // r1+0x8
        }
    }
}
// signature: GFxTextEditorKit::OnDocumentChanged(unsigned int)
// Range: 0x80578520 -> 0x80578638
void GFxTextEditorKit::OnDocumentChanged() {
}
