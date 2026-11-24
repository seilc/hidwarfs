/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxTextField.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80586A20 -> 0x80598A28
*/
// total size: 0x4
class GPtr {
    // Members
    class GASTextFieldObject * pObject; // offset 0x0, size 0x4
};
// total size: 0x38
class GASTextFieldObject : public GASObject {
    // Members
    class GWeakPtr pTextField; // offset 0x30, size 0x8
};
// total size: 0xE8
class GFxEditTextCharacter : public GASTextField {
    // Members
    class GFxEditTextCharacterDef * pDef; // offset 0x98, size 0x4
    class GPtr pDocument; // offset 0x9C, size 0x4
    class GFxResourceBinding * pBinding; // offset 0xA0, size 0x4
    enum alignment Alignment; // offset 0xA4, size 0x4
    class GColor BackgroundColor; // offset 0xA8, size 0x4
    class GColor BorderColor; // offset 0xAC, size 0x4
    int MaxLength; // offset 0xB0, size 0x4
    class GASString VariableName; // offset 0xB4, size 0x4
    class GASValue VariableVal; // offset 0xB8, size 0x10
    unsigned char Flags; // offset 0xC8, size 0x1
    class TextDocumentListener TextDocListener; // offset 0xCC, size 0x10
    class ShadowParams * pShadow; // offset 0xDC, size 0x4
    class GPtr ASTextFieldObj; // offset 0xE0, size 0x4
    class GFxStringHash * pImageDescAssoc; // offset 0xE4, size 0x4
};
// total size: 0x10
class TextDocumentListener : public DocumentListener {};
// total size: 0x20
class ShadowParams : public GNewOverrideBase {
    // Members
    class GColor ShadowColor; // offset 0x0, size 0x4
    class GASString ShadowStyleStr; // offset 0x4, size 0x4
    class garray ShadowOffsets; // offset 0x8, size 0xC
    class garray TextOffsets; // offset 0x14, size 0xC
};
// total size: 0xC
class garray : public garray_base {};
// total size: 0xC
class garray_base {
    // Members
    class GPoint * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
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
class table {
    // Members
    unsigned long EntryCount; // offset 0x0, size 0x4
    unsigned long SizeMask; // offset 0x4, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxTranslator * pObject; // offset 0x0, size 0x4
};
// total size: 0x408
class Reserve : public ReserveHeader {
    // Members
    wchar_t Buffer[512]; // offset 0x8, size 0x400
};
// total size: 0xB4
class GASTextFormatObject : public GASObject {
    // Members
    class GFxTextFormat TextFormat; // offset 0x30, size 0x5C
    class GFxTextParagraphFormat ParagraphFormat; // offset 0x8C, size 0x28
};
// total size: 0x8
class node_ref {
    // Members
    class GFxString * pfirst; // offset 0x0, size 0x4
    class GPtr * psecond; // offset 0x4, size 0x4
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
    class GPtr second; // offset 0x4, size 0x4
};
// total size: 0x54
class GASTextFieldProto : public GASPrototype {};
// total size: 0x54
class GASPrototype : public GASTextFieldObject {
    // Members
    class GASFunctionWeakRef Constructor; // offset 0x38, size 0xC
    class GASFunctionWeakRef __Constructor__; // offset 0x44, size 0xC
    class garray * pInterfaces; // offset 0x50, size 0x4
};
enum ViewAlignment {
    Align_Left = 0,
    Align_Right = 1,
    Align_Center = 2,
};
unsigned short indices[6]; // size: 0xC, address: 0x806E8EF0
static class GASNameFunction GAS_TextFieldFunctionTable[8]; // size: 0x40, address: 0x806E8F00
static class GASNameFunction GAS_TextFieldExtFunctionTable[15]; // size: 0x78, address: 0x806E8F40
static char * gridfittypes[3]; // size: 0xC, address: 0x806E8FB8
struct {} __vt__20GFxEditTextCharacter; // size: 0x1BC, address: 0x8073E754
struct {} __vt__Q220GFxEditTextCharacter20TextDocumentListener; // size: 0x20, address: 0x8073E910
struct {} __vt__17GASTextFieldProto; // size: 0xB8, address: 0x8073E930
struct {} __vt__51GASPrototype<18GASTextFieldObject,14GASEnvironment>; // size: 0xB8, address: 0x8073E9E8
struct {} __vt__18GASTextFieldObject; // size: 0xB4, address: 0x8073EAA0
struct {} __vt__12GASTextField; // size: 0x1B8, address: 0x8073EB58
struct {} __vt__23GFxEditTextCharacterDef; // size: 0x28, address: 0x8073ED10
struct {} __vt__Q214GFxTextDocView16DocumentListener; // size: 0x20, address: 0x8073ED38
struct {} __vt__51GRefCountBase<Q214GFxTextDocView16DocumentListener>; // size: 0xC, address: 0x8073ED58
// signature: GFxEditTextCharacterDef::GFxEditTextCharacterDef(GFxMovieDataDef *)
// Range: 0x80586A20 -> 0x80586AFC
void * GFxEditTextCharacterDef::GFxEditTextCharacterDef(class GFxEditTextCharacterDef * this /* r30 */) {
    // References
    // -> struct {} __vt__23GFxEditTextCharacterDef;
}
// Range: 0x80586B00 -> 0x80586BE0
void * GFxEditTextCharacterDef::~GFxEditTextCharacterDef(class GFxEditTextCharacterDef * this /* r30 */) {
}
// signature: GFxEditTextCharacterDef::Read(GFxLoadProcess *, GFxTagType)
// Range: 0x80586BE0 -> 0x80587340
void GFxEditTextCharacterDef::Read(class GFxEditTextCharacterDef * this /* r23 */, class GFxLoadProcess * p /* r24 */) {
    // Local variables
    char * name; // r24

    {
        // Range: 0x80586F14 -> 0x80587040
        // Local variables
        class GFxResourceHandle hres; // r1+0x10
    }
    {
        // Range: 0x805872E0 -> 0x80587308
        // Local variables
        char * str; // r24
    }
}
// Range: 0x80587340 -> 0x805873AC
void GFxEditTextCharacterDef::InitEmptyTextDef(class GFxEditTextCharacterDef * this /* r31 */) {
}
// signature: GFxEditTextCharacter::SetHtml(bool)
// Range: 0x8058B560 -> 0x8058B588
void GFxEditTextCharacter::SetHtml() {
}
// Range: 0x80589F70 -> 0x80589F7C
bool GFxEditTextCharacter::IsHtml() const {
}
// signature: GFxEditTextCharacter::SetPassword(bool)
// Range: 0x8058B5A0 -> 0x8058B5C8
void GFxEditTextCharacter::SetPassword() {
}
// Range: 0x8058A0B0 -> 0x8058A0BC
bool GFxEditTextCharacter::IsPassword() const {
}
// Range: 0x80588790 -> 0x8058879C
bool GFxEditTextCharacter::IsCondenseWhite() const {
}
// signature: GFxEditTextCharacter::SetMouseWheelEnabled(bool)
// Range: 0x8058B530 -> 0x8058B558
void GFxEditTextCharacter::SetMouseWheelEnabled() {
}
// Range: 0x805888B0 -> 0x805888BC
bool GFxEditTextCharacter::IsNoTranslate() const {
}
// Range: 0x8058A030 -> 0x8058A088
bool GFxEditTextCharacter::IsReadOnly(class GFxEditTextCharacter * this /* r31 */) const {
}
// Range: 0x80589FA0 -> 0x8058A018
class GFxTextEditorKit * GFxEditTextCharacter::CreateEditorKit(class GFxEditTextCharacter * this /* r31 */) {
    // Local variables
    class GFxTextEditorKit * peditor; // r3
}
// Range: 0x80591FF0 -> 0x80592000
class GFxEditTextCharacter * GFxEditTextCharacter::TextDocumentListener::GetTextField() {
}
// Range: 0x8058B5F0 -> 0x8058B62C
void * GFxEditTextCharacter::TextDocumentListener::TextDocumentListener(class TextDocumentListener * this /* r31 */) {
    // References
    // -> struct {} __vt__Q220GFxEditTextCharacter20TextDocumentListener;
}
// signature: GFxEditTextCharacter::TextDocumentListener::View_OnHScroll(GFxTextDocView &, unsigned int)
// Range: 0x80591F30 -> 0x80591FF0
void GFxEditTextCharacter::TextDocumentListener::View_OnHScroll() {
}
// signature: GFxEditTextCharacter::TextDocumentListener::View_OnVScroll(GFxTextDocView &, unsigned int)
// Range: 0x80592000 -> 0x805920C0
void GFxEditTextCharacter::TextDocumentListener::View_OnVScroll() {
}
// signature: GFxEditTextCharacter::TextDocumentListener::Editor_OnCharacter(GFxTextEditorKit &, wchar_t)
// Range: 0x805920C0 -> 0x80592130
wchar_t GFxEditTextCharacter::TextDocumentListener::Editor_OnCharacter(wchar_t srcChar /* r30 */) {
}
// signature: GFxEditTextCharacter::TextDocumentListener::Editor_OnChanged(GFxTextEditorKit &)
// Range: 0x80592130 -> 0x80592210
void GFxEditTextCharacter::TextDocumentListener::Editor_OnChanged() {
}
// Range: 0x805987C0 -> 0x80598940
void * GFxEditTextCharacter::~GFxEditTextCharacter(class GFxEditTextCharacter * this /* r29 */) {
    // References
    // -> struct {} __vt__20GFxEditTextCharacter;
}
// signature: GFxEditTextCharacter::SetFilters(const GFxTextFilter &)
// Range: 0x80592210 -> 0x80592288
void GFxEditTextCharacter::SetFilters() {
}
// Range: 0x80592290 -> 0x80592298
class GFxCharacterDef * GFxEditTextCharacter::GetCharacterDef() const {
}
// Range: 0x80589A50 -> 0x80589E58
void GFxEditTextCharacter::GetInitialFormats(class GFxEditTextCharacter * this /* r29 */, class GFxTextFormat * ptextFmt /* r30 */, class GFxTextParagraphFormat * pparaFmt /* r31 */) {
    // Local variables
    class GFxTextParagraphFormat defaultParagraphFmt; // r1+0x10

    {
        // Range: 0x80589A80 -> 0x80589C3C
        // Local variables
        class GFxFontResource * pfont; // r27
        class GFxResourceBindData fontData; // r1+0x8
    }

    // References
    // -> struct {} __vt__22GFxTextParagraphFormat;
}
// Range: 0x8058A150 -> 0x8058B0C0
void GFxEditTextCharacter::SetInitialFormatsAsDefault(class GFxEditTextCharacter * this /* r29 */) {
    // Local variables
    class GFxTextFormat defaultTextFmt; // r1+0x1F4
    class GFxTextParagraphFormat defaultParagraphFmt; // r1+0xB8
    class GFxTextFormat * ptextFmt; // r31
    class GFxTextParagraphFormat * pparaFmt; // r30

    {
        // Range: 0x8058A76C -> 0x8058ADFC
        // Local variables
        class GFxTextParagraphFormat eParagraphFmt; // r1+0x90
        class GFxTextFormat eTextFmt; // r1+0x198
    }

    // References
    // -> struct {} __vt__22GFxTextParagraphFormat;
    // -> struct {} __vt__13GFxTextFormat;
}
// Range: 0x80587AC0 -> 0x8058806C
bool GFxEditTextCharacter::UpdateTextFromVariable(class GFxEditTextCharacter * this /* r31 */) {
    {
        // Range: 0x80587AD4 -> 0x80588050
        // Local variables
        class GASEnvironment * penv; // r27

        {
            // Range: 0x80587AF8 -> 0x80588034
            // Local variables
            class GASValue val; // r1+0x78

            {
                // Range: 0x80587B30 -> 0x80587DEC
                // Local variables
                class GASString str; // r1+0x10
            }
        }
    }
}
// signature: GFxEditTextCharacter::AdvanceFrame(bool, float)
// Range: 0x805922A0 -> 0x80592474
void GFxEditTextCharacter::AdvanceFrame(class GFxEditTextCharacter * this /* r29 */) {
    {
        // Range: 0x805923D0 -> 0x80592450
        // Local variables
        class GFxMovieRoot * proot; // r0

        {
            // Range: 0x805923F8 -> 0x80592450
            // Local variables
            float timer; // f31
        }
    }
}
// Range: 0x805889D0 -> 0x805892F4
void GFxEditTextCharacter::SetTextValue(class GFxEditTextCharacter * this /* r28 */, char * pnewText /* r29 */, bool html /* r30 */) {
    // Local variables
    bool doNotifyChanged; // r31
    bool translated; // r25

    {
        // Range: 0x805889E4 -> 0x80588F80
        // Local variables
        class GPtr ptrans; // r1+0xC

        {
            // Range: 0x80588A28 -> 0x80588F64
            // Local variables
            class GFxWStringBuffer wkeybuf; // r1+0x48
            class GFxWStringBuffer wbuf; // r1+0x58
            class Reserve res2; // r1+0x698
            class Reserve res1; // r1+0xAA0

            {
                // Range: 0x80588A30 -> 0x80588AEC
                // Local variables
                int nchars; // r0
            }
            {
                // Range: 0x80588AEC -> 0x80588D10
                // Local variables
                class GFxWideStringBuffer wstrippedHtmlBuf; // r1+0x38
            }
            {
                // Range: 0x80588D24 -> 0x80588F30
                // Local variables
                class garray imageInfoArray; // r1+0x2C
            }
        }
    }
    {
        // Range: 0x80588FA4 -> 0x8058918C
        // Local variables
        class garray imageInfoArray; // r1+0x20
    }
}
// signature: GFxEditTextCharacter::GetTextValue(GASEnvironment *) const
// Range: 0x805987B0 -> 0x805987B8
char * GFxEditTextCharacter::GetTextValue() const {
}
// Range: 0x805987A0 -> 0x805987A8
enum ObjectType GFxEditTextCharacter::GetObjectType() const {
}
// Range: 0x80592480 -> 0x8059248C
unsigned long GFxEditTextCharacter::GetStandardMemberBitMask() const {
}
// Range: 0x805924A0 -> 0x805924A8
class GASObject * GFxEditTextCharacter::GetASObject() {
}
// Range: 0x80592490 -> 0x80592498
class GASObject * GFxEditTextCharacter::GetASObject() const {
}
// signature: GFxEditTextCharacter::SetStandardMember(GFxASCharacter::StandardMember, const GASValue &, bool)
// Range: 0x805924B0 -> 0x805927A8
bool GFxEditTextCharacter::SetStandardMember(class GFxEditTextCharacter * this /* r29 */, enum StandardMember member /* r30 */, class GASValue & val /* r31 */) {
    {
        // Range: 0x80592500 -> 0x805925D8
        // Local variables
        class GASValue val; // r1+0x38
        class GeomDataType geomData; // r1+0x80
        double newX; // f0
    }
    {
        // Range: 0x805925D8 -> 0x805926B0
        // Local variables
        class GASValue val; // r1+0x28
        class GeomDataType geomData; // r1+0x48
        double newY; // f0
    }
    {
        // Range: 0x805926B0 -> 0x80592718
        // Local variables
        class GRect viewRect; // r1+0x18
        float newWidth; // f31
    }
    {
        // Range: 0x80592718 -> 0x80592780
        // Local variables
        class GRect viewRect; // r1+0x8
        float newHeight; // f31
    }
}
// Range: 0x805959F0 -> 0x805986E8
bool GFxEditTextCharacter::SetMember(class GFxEditTextCharacter * this /* r31 */, class GASEnvironment * penv /* r22 */, class GASString & name /* r25 */, class GASValue & val /* r24 */, class GASPropFlags & flags /* r23 */) {
    // Local variables
    enum StandardMember member; // r21

    {
        // Range: 0x80595AE0 -> 0x80595EA4
        // Local variables
        class GASString str; // r1+0x68
    }
    {
        // Range: 0x80595EA4 -> 0x80596158
        // Local variables
        class GASString str; // r1+0x64
    }
    {
        // Range: 0x80596158 -> 0x805965E0
        // Local variables
        class GFxTextFormat colorTextFmt; // r1+0x150
        unsigned long rgb; // r0
    }
    {
        // Range: 0x805965E0 -> 0x8059685C
        // Local variables
        bool oldAutoSize; // r0
        enum ViewAlignment oldAlignment; // r0
        class GFxString str; // r1+0x5C
        class GASString asStr; // r1+0x60
    }
    {
        // Range: 0x8059685C -> 0x8059692C
        // Local variables
        bool wordWrap; // r0
        bool oldWordWrap; // r0
    }
    {
        // Range: 0x8059692C -> 0x80596A0C
        // Local variables
        bool newMultiline; // r0
        bool oldML; // r0
    }
    {
        // Range: 0x80596A0C -> 0x80596A3C
        // Local variables
        bool bc; // r0
    }
    {
        // Range: 0x80596C68 -> 0x80596CEC
        // Local variables
        bool password; // r0
        bool pswd; // r0
    }
    {
        // Range: 0x80596CEC -> 0x80596D2C
        // Local variables
        int scrollVal; // r3
    }
    {
        // Range: 0x80596D2C -> 0x80596D64
        // Local variables
        int scrollVal; // r4
    }
    {
        // Range: 0x80596D64 -> 0x80596D94
        // Local variables
        bool bc; // r0
    }
    {
        // Range: 0x80596D94 -> 0x80596E08
        // Local variables
        double bc; // f1

        {
            // Range: 0x80596DA0 -> 0x80596E00
            // Local variables
            unsigned long c; // r0
        }
    }
    {
        // Range: 0x80596E08 -> 0x80596E7C
        // Local variables
        double bc; // f1

        {
            // Range: 0x80596E14 -> 0x80596E74
            // Local variables
            unsigned long c; // r0
        }
    }
    {
        // Range: 0x80596E7C -> 0x80597088
        // Local variables
        class GASString typeStr; // r1+0x58

        {
            // Range: 0x80596F64 -> 0x80597068
            // Local variables
            class GFxTextEditorKit * peditor; // r0
        }
    }
    {
        // Range: 0x80597088 -> 0x805970F4
        // Local variables
        double ml; // f0
    }
    {
        // Range: 0x8059712C -> 0x805972D8
        // Local variables
        class GASString typeStr; // r1+0x54
    }
    {
        // Range: 0x80597328 -> 0x805979B4
        // Local variables
        class garray * offsets; // r23
        char * p; // r24
        unsigned long rgb; // r0
        char * pstr; // r25
        class GASString styleStr; // r1+0x50

        {
            // Range: 0x805973E0 -> 0x80597908
            // Local variables
            float y; // f29
            float x; // f30
            char * q; // r27
            char pn[24]; // r1+0x138
        }
    }
    {
        // Range: 0x805979F0 -> 0x80597A20
        // Local variables
        unsigned long rgb; // r0
    }
    {
        // Range: 0x805981F8 -> 0x8059838C
        // Local variables
        class GFxString str; // r1+0x48
        class GASString asStr; // r1+0x4C
    }
    {
        // Range: 0x8059838C -> 0x805983D4
        // Local variables
        double factor; // f0
    }
    {
        // Range: 0x805983D8 -> 0x80598554
        // Local variables
        class GFxString str; // r1+0x40
        class GASString asStr; // r1+0x44
    }
    {
        // Range: 0x80598554 -> 0x80598694
        // Local variables
        class GFxString str; // r1+0x38
        class GASString asStr; // r1+0x3C
    }

    // References
    // -> struct {} __vt__13GFxTextFormat;
}
// Range: 0x80593FF0 -> 0x805959E8
bool GFxEditTextCharacter::GetMember(class GFxEditTextCharacter * this /* r28 */, class GASEnvironment * penv /* r29 */, class GASString & name /* r30 */, class GASValue * pval /* r31 */) {
    // Local variables
    enum StandardMember member; // r4

    {
        // Range: 0x80594054 -> 0x805940E8
        // Local variables
        class GeomDataType geomData; // r1+0xB0
    }
    {
        // Range: 0x805940E8 -> 0x8059417C
        // Local variables
        class GeomDataType geomData; // r1+0x78
    }
    {
        // Range: 0x80594378 -> 0x805943DC
        // Local variables
        unsigned int textColor; // r27
        class GColor c; // r1+0x70
        class GFxTextFormat * ptf; // r0
    }
}
// Range: 0x805927B0 -> 0x805929A4
class GFxASCharacter * GFxEditTextCharacter::GetTopMostMouseEntity(class GFxEditTextCharacter * this /* r30 */, class GPoint & pt /* r29 */, bool testAll /* r31 */) {
    // Local variables
    class GMatrix2D m; // r1+0x10
    class GPoint p; // r1+0x8

    {
        // Range: 0x8059292C -> 0x80592984
        // Local variables
        class GFxASCharacter * pparent; // reg65535

        {
            // Range: 0x80592934 -> 0x80592958
            // Local variables
            class GFxSprite * psprite; // r30
        }
    }
}
// Range: 0x805929B0 -> 0x80592A60
bool GFxEditTextCharacter::IsTabable(class GFxEditTextCharacter * this /* r29 */) const {
}
// Range: 0x80592A60 -> 0x80592A68
bool GFxEditTextCharacter::IsFocusRectEnabled() const {
}
// Range: 0x80592A70 -> 0x80592AD0
bool GFxEditTextCharacter::IsFocusEnabled(class GFxEditTextCharacter * this /* r31 */) const {
}
// Range: 0x80592AD0 -> 0x80592B50
unsigned int GFxEditTextCharacter::GetCursorType(class GFxEditTextCharacter * this /* r31 */) const {
}
// Range: 0x80592B50 -> 0x80592D94
void GFxEditTextCharacter::PropagateMouseEvent(class GFxEditTextCharacter * this /* r29 */, class GFxEventId & id /* r30 */) {
    // Local variables
    class GFxMovieRoot * proot; // r31
}
// signature: GFxEditTextCharacter::OnButtonEvent(const GFxEventId &)
// Range: 0x80592E10 -> 0x80593170
bool GFxEditTextCharacter::OnButtonEvent(class GFxEditTextCharacter * this /* r31 */) {
    {
        // Range: 0x80592E68 -> 0x80592F20
        // Local variables
        class GPoint b; // r1+0x40
        class GPoint a; // r1+0x48
        class GMatrix2D m; // r1+0x88
        int buttons; // r1+0x1C
        int y; // r1+0x20
        int x; // r1+0x24
    }
    {
        // Range: 0x80592F20 -> 0x8059313C
        // Local variables
        class GPoint p; // r1+0x38

        {
            // Range: 0x80592F40 -> 0x8059313C
            // Local variables
            unsigned long pos; // r3

            {
                // Range: 0x80593008 -> 0x8059313C
                // Local variables
                class GFxTextFormat * ptextFmt; // r1+0x18

                {
                    // Range: 0x80593038 -> 0x8059313C
                    // Local variables
                    char * url; // r29

                    {
                        // Range: 0x8059304C -> 0x80593114
                        // Local variables
                        class GFxValue result; // r1+0x50
                        unsigned int paramCnt; // r28
                        class GFxValue param; // r1+0x60
                        class GFxString funcName; // r1+0x14
                        char * pnameEnd; // r3
                    }
                }
            }
        }
    }
}
// Range: 0x80593170 -> 0x80593258
void GFxEditTextCharacter::OnFocus(class GFxEditTextCharacter * this /* r29 */, enum FocusEventType event /* r30 */, class GFxASCharacter * oldOrNewFocusCh /* r31 */) {
}
// Range: 0x80593260 -> 0x80593294
void GFxEditTextCharacter::OnLosingMouseInput() {
}
// Range: 0x805888C0 -> 0x805889C8
void GFxEditTextCharacter::UpdateVariable(class GFxEditTextCharacter * this /* r31 */) {
    {
        // Range: 0x805888D8 -> 0x805889B0
        // Local variables
        class GASEnvironment * penv; // r30
    }
}
// Range: 0x80588070 -> 0x80588240
void GFxEditTextCharacter::NotifyChanged(class GFxEditTextCharacter * this /* r31 */) {
    // Local variables
    class GASEnvironment * penv; // r30
}
// Range: 0x805932A0 -> 0x805932EC
class GRect GFxEditTextCharacter::GetBounds(class GMatrix2D & t /* r31 */) const {
}
// signature: GFxEditTextCharacter::PointTestLocal(const GPoint<float> &, bool) const
// Range: 0x805932F0 -> 0x80593388
bool GFxEditTextCharacter::PointTestLocal(class GPoint & pt /* r31 */) const {
}
// Range: 0x80593390 -> 0x80593B6C
void GFxEditTextCharacter::Display(class GFxEditTextCharacter * this /* r27 */, class GFxDisplayContext & context /* r28 */) {
    // Local variables
    class GMatrix2D mat; // r1+0x128
    class Cxform cx; // r1+0x108
    bool nextFrame; // r30

    {
        // Range: 0x805934C4 -> 0x805937EC
        // Local variables
        short linecoords[10]; // r1+0xB8
        class VertexXY16i icoords[4]; // r1+0x48
        class GPoint coords[4]; // r1+0xD0
        class GRect newRect; // r1+0x58
        class GMatrix2D m; // r1+0xF0
    }
    {
        // Range: 0x80593808 -> 0x80593958
        // Local variables
        unsigned int i; // r29

        {
            // Range: 0x80593808 -> 0x80593958
            // Local variables
            class Cxform c; // r1+0x80
            class GMatrix2D shm; // r1+0xA0
        }
    }
    {
        // Range: 0x805939B0 -> 0x80593A60
        // Local variables
        unsigned int j; // r22

        {
            // Range: 0x805939B0 -> 0x80593A60
            // Local variables
            class GMatrix2D shm; // r1+0x68
        }
    }

    // References
    // -> unsigned short indices[6];
}
// signature: GFxEditTextCharacter::SetSelection(int, int)
// Range: 0x80593B70 -> 0x80593C30
void GFxEditTextCharacter::SetSelection(class GFxEditTextCharacter * this /* r30 */, int endIndex /* r31 */) {
}
// Range: 0x80593C30 -> 0x80593CE8
int GFxEditTextCharacter::GetCaretIndex(class GFxEditTextCharacter * this /* r31 */) {
}
// Range: 0x80593CF0 -> 0x80593E50
bool GFxEditTextCharacter::OnKeyEvent(class GFxEditTextCharacter * this /* r29 */, class GFxEventId & id /* r30 */, int * pkeyMask /* r31 */) {
}
// Range: 0x80593E50 -> 0x80593F14
bool GFxEditTextCharacter::OnCharEvent(class GFxEditTextCharacter * this /* r30 */, unsigned long wcharCode /* r31 */) {
}
// Range: 0x80593F20 -> 0x80593FE4
bool GFxEditTextCharacter::OnMouseWheelEvent(class GFxEditTextCharacter * this /* r29 */, int mwDelta /* r30 */) {
    {
        // Range: 0x80593F40 -> 0x80593FC4
        // Local variables
        int vscroll; // r31
    }
}
// Range: 0x805873B0 -> 0x80587934
class GFxCharacter * GFxEditTextCharacterDef::CreateCharacterInstance(class GFxEditTextCharacterDef * this /* r29 */, class GFxASCharacter * parent /* r30 */, class GFxResourceId & id /* r28 */, class GFxMovieDefImpl * pbindingImpl /* r27 */) {
    // References
    // -> struct {} __vt__20GFxEditTextCharacter;
}
// Range: 0x8058B6B0 -> 0x8058B7B8
void GFx_DefineEditTextLoader(class GFxLoadProcess * p /* r28 */, class GFxTagInfo & tagInfo /* r29 */) {
}
// Range: 0x8058B7C0 -> 0x8058BA08
void GFxEditTextCharacter::SetTextFormat(class GASFnCall & fn /* r27 */) {
    {
        // Range: 0x8058B7DC -> 0x8058B9F0
        // Local variables
        class GFxEditTextCharacter * pthis; // r0

        {
            // Range: 0x8058B814 -> 0x8058B878
            // Local variables
            class GASObject * pobjVal; // r29

            {
                // Range: 0x8058B82C -> 0x8058B878
                // Local variables
                class GASTextFormatObject * ptextFormatObj; // r0
            }
        }
        {
            // Range: 0x8058B87C -> 0x8058B918
            // Local variables
            class GASObject * pobjVal; // r29

            {
                // Range: 0x8058B894 -> 0x8058B918
                // Local variables
                class GASTextFormatObject * ptextFormatObj; // r0
            }
        }
        {
            // Range: 0x8058B91C -> 0x8058B9F0
            // Local variables
            class GASObject * pobjVal; // r28

            {
                // Range: 0x8058B934 -> 0x8058B9F0
                // Local variables
                class GASTextFormatObject * ptextFormatObj; // r0
            }
        }
    }
}
// Range: 0x8058BA10 -> 0x8058BD80
void GFxEditTextCharacter::GetTextFormat(class GASFnCall & fn /* r31 */) {
    {
        // Range: 0x8058BA24 -> 0x8058BBEC
        // Local variables
        class GFxTextParagraphFormat paraFmt; // r1+0x8
        class GFxTextFormat textFmt; // r1+0x30
        unsigned long endIndex; // r25
        unsigned long beginIndex; // r26
        class GFxEditTextCharacter * pthis; // r0

        {
            // Range: 0x8058BA60 -> 0x8058BAA0
            // Local variables
            double v; // f0
        }
        {
            // Range: 0x8058BAA0 -> 0x8058BAD8
            // Local variables
            double v; // f0
        }
    }

    // References
    // -> struct {} __vt__22GFxTextParagraphFormat;
    // -> struct {} __vt__13GFxTextFormat;
}
// Range: 0x8058BD80 -> 0x8058BEC4
void GFxEditTextCharacter::GetNewTextFormat(class GASFnCall & fn /* r28 */) {
}
// Range: 0x8058BED0 -> 0x8058C108
void GFxEditTextCharacter::SetNewTextFormat(class GASFnCall & fn /* r27 */) {
    {
        // Range: 0x8058BEE4 -> 0x8058C0F0
        // Local variables
        class GFxEditTextCharacter * pthis; // r0

        {
            // Range: 0x8058BF20 -> 0x8058C0F0
            // Local variables
            class GASObject * pobjVal; // r30

            {
                // Range: 0x8058BF3C -> 0x8058C0F0
                // Local variables
                class GFxTextParagraphFormat * pparaFmt; // r29
                class GFxTextFormat * ptextFmt; // r0
                class GASTextFormatObject * ptextFormatObj; // r0
            }
        }
    }

    // References
    // -> struct {} __vt__22GFxTextParagraphFormat;
}
// Range: 0x8058C110 -> 0x8058C2F4
void GFxEditTextCharacter::ReplaceText(class GASFnCall & fn /* r25 */) {
    {
        // Range: 0x8058C134 -> 0x8058C2D4
        // Local variables
        class GFxEditTextCharacter * pthis; // r0

        {
            // Range: 0x8058C168 -> 0x8058C2C0
            // Local variables
            wchar_t buf[1024]; // r1+0x10
            unsigned int endPos; // r26
            unsigned int startPos; // r27
            unsigned int len; // r0
            class GASString str; // r1+0x8
            double end; // f30
            double start; // f31

            {
                // Range: 0x8058C228 -> 0x8058C26C
                // Local variables
                wchar_t * pbuf; // r25
            }
        }
    }
}
// Range: 0x8058C300 -> 0x8058C3C0
void GFxEditTextCharacter::AppendText(class GASFnCall & fn /* r30 */) {
    {
        // Range: 0x8058C31C -> 0x8058C3A8
        // Local variables
        class GFxEditTextCharacter * pthis; // r0

        {
            // Range: 0x8058C350 -> 0x8058C394
            // Local variables
            class GASString str; // r1+0x8
        }
    }
}
// Range: 0x8058C3C0 -> 0x8058C484
void GFxEditTextCharacter::AppendHtml(class GASFnCall & fn /* r30 */) {
    {
        // Range: 0x8058C3DC -> 0x8058C46C
        // Local variables
        class GFxEditTextCharacter * pthis; // r0

        {
            // Range: 0x8058C410 -> 0x8058C458
            // Local variables
            class GASString str; // r1+0x8
        }
    }
}
// Range: 0x8058C490 -> 0x8058C538
void GFxEditTextCharacter::RemoveTextField(class GASFnCall & fn /* r31 */) {
    {
        // Range: 0x8058C4A8 -> 0x8058C524
        // Local variables
        class GFxEditTextCharacter * pthis; // r0
    }
}
// Range: 0x8058C540 -> 0x8058C6D0
void GFxEditTextCharacter::GetCharBoundaries(class GASFnCall & fn /* r30 */) {
    {
        // Range: 0x8058C55C -> 0x8058C6B8
        // Local variables
        class GFxEditTextCharacter * pthis; // r0

        {
            // Range: 0x8058C590 -> 0x8058C6B8
            // Local variables
            class GRect charBounds; // r1+0x18
            unsigned int charIndex; // r0

            {
                // Range: 0x8058C5C0 -> 0x8058C680
                // Local variables
                class GRect gasRect; // r1+0x28
            }
        }
    }
}
// Range: 0x8058C6D0 -> 0x8058C864
void GFxEditTextCharacter::GetExactCharBoundaries(class GASFnCall & fn /* r30 */) {
    {
        // Range: 0x8058C6EC -> 0x8058C84C
        // Local variables
        class GFxEditTextCharacter * pthis; // r0

        {
            // Range: 0x8058C720 -> 0x8058C84C
            // Local variables
            class GRect charBounds; // r1+0x18
            unsigned int charIndex; // r0

            {
                // Range: 0x8058C750 -> 0x8058C814
                // Local variables
                class GRect gasRect; // r1+0x28
            }
        }
    }
}
// Range: 0x8058C870 -> 0x8058C9D4
void GFxEditTextCharacter::GetCharIndexAtPoint(class GASFnCall & fn /* r29 */) {
    {
        // Range: 0x8058C8A0 -> 0x8058C9A8
        // Local variables
        class GFxEditTextCharacter * pthis; // r0

        {
            // Range: 0x8058C8D4 -> 0x8058C9A8
            // Local variables
            unsigned long pos; // r0
            double y; // f0
            double x; // f30
        }
    }
}
// Range: 0x8058C9E0 -> 0x8058CB2C
void GFxEditTextCharacter::GetLineIndexAtPoint(class GASFnCall & fn /* r29 */) {
    {
        // Range: 0x8058CA08 -> 0x8058CB08
        // Local variables
        class GFxEditTextCharacter * pthis; // r0

        {
            // Range: 0x8058CA3C -> 0x8058CB08
            // Local variables
            unsigned int pos; // r0
            double y; // f0
            double x; // f0
        }
    }
}
// Range: 0x8058CB30 -> 0x8058CC80
void GFxEditTextCharacter::GetLineOffset(class GASFnCall & fn /* r29 */) {
    {
        // Range: 0x8058CB50 -> 0x8058CC64
        // Local variables
        class GFxEditTextCharacter * pthis; // r0

        {
            // Range: 0x8058CB84 -> 0x8058CC64
            // Local variables
            int lineIndex; // r4

            {
                // Range: 0x8058CBB8 -> 0x8058CC64
                // Local variables
                unsigned long off; // r0
            }
        }
    }
}
// Range: 0x8058CC80 -> 0x8058CDD0
void GFxEditTextCharacter::GetLineLength(class GASFnCall & fn /* r29 */) {
    {
        // Range: 0x8058CCA0 -> 0x8058CDB4
        // Local variables
        class GFxEditTextCharacter * pthis; // r0

        {
            // Range: 0x8058CCD4 -> 0x8058CDB4
            // Local variables
            int lineIndex; // r4

            {
                // Range: 0x8058CD08 -> 0x8058CDB4
                // Local variables
                unsigned long len; // r0
            }
        }
    }
}
// Range: 0x8058CDD0 -> 0x8058D420
void GFxEditTextCharacter::GetLineMetrics(class GASFnCall & fn /* r30 */) {
    {
        // Range: 0x8058CDFC -> 0x8058D400
        // Local variables
        class GFxEditTextCharacter * pthis; // r0

        {
            // Range: 0x8058CE34 -> 0x8058D400
            // Local variables
            int lineIndex; // r4

            {
                // Range: 0x8058CE68 -> 0x8058D400
                // Local variables
                bool rv; // r0
                class LineMetrics metrics; // r1+0xB0
            }
        }
    }
}
// Range: 0x8058D420 -> 0x8058D5F0
void GFxEditTextCharacter::GetLineText(class GASFnCall & fn /* r30 */) {
    {
        // Range: 0x8058D438 -> 0x8058D5D8
        // Local variables
        class GFxEditTextCharacter * pthis; // r0

        {
            // Range: 0x8058D470 -> 0x8058D5D8
            // Local variables
            int lineIndex; // r4

            {
                // Range: 0x8058D4A4 -> 0x8058D5D8
                // Local variables
                wchar_t * ptext; // r31
                unsigned long len; // r1+0x14

                {
                    // Range: 0x8058D4D0 -> 0x8058D538
                    // Local variables
                    class GASString asstr; // r1+0xC
                    class GFxString str; // r1+0x10
                }
            }
        }
    }
}
// Range: 0x8058D5F0 -> 0x8058D740
void GFxEditTextCharacter::GetFirstCharInParagraph(class GASFnCall & fn /* r29 */) {
    {
        // Range: 0x8058D610 -> 0x8058D724
        // Local variables
        class GFxEditTextCharacter * pthis; // r0

        {
            // Range: 0x8058D644 -> 0x8058D724
            // Local variables
            int charIndex; // r4

            {
                // Range: 0x8058D678 -> 0x8058D724
                // Local variables
                unsigned long off; // r0
            }
        }
    }
}
// Range: 0x8058D740 -> 0x8058D890
void GFxEditTextCharacter::GetLineIndexOfChar(class GASFnCall & fn /* r29 */) {
    {
        // Range: 0x8058D760 -> 0x8058D874
        // Local variables
        class GFxEditTextCharacter * pthis; // r0

        {
            // Range: 0x8058D794 -> 0x8058D874
            // Local variables
            int charIndex; // r4

            {
                // Range: 0x8058D7C8 -> 0x8058D874
                // Local variables
                unsigned int off; // r0
            }
        }
    }
}
// signature: GFxEditTextCharacter::ProceedImageSubstitution(const GASFnCall &, int, const GASValue *)
// Range: 0x8058D890 -> 0x8058E388
void GFxEditTextCharacter::ProceedImageSubstitution(class GFxEditTextCharacter * this /* r24 */, class GASFnCall & fn /* r25 */, int idx /* r26 */) {
    {
        // Range: 0x8058D8D4 -> 0x8058E2E8
        // Local variables
        char * idStr; // r27
        float baseLineY; // f0
        float baseLineX; // f27
        float origHeight; // f28
        float origWidth; // f29
        float screenHeight; // f30
        float screenWidth; // f31
        class Element isElem; // r1+0x60
        class GASValue val; // r1+0x50
        class GASObject * peobj; // r0

        {
            // Range: 0x8058D964 -> 0x8058DA44
            // Local variables
            unsigned long wstrLen; // r3
            class GASString str; // r1+0x4C
        }
        {
            // Range: 0x8058DAD0 -> 0x8058DCFC
            // Local variables
            class GASObject * piobj; // r23
        }
        {
            // Range: 0x8058DD84 -> 0x8058DE2C
            // Local variables
            double v; // f0
        }
        {
            // Range: 0x8058DE2C -> 0x8058DED4
            // Local variables
            double v; // f0
        }
        {
            // Range: 0x8058DED4 -> 0x8058DF7C
            // Local variables
            double v; // f0
        }
        {
            // Range: 0x8058DF7C -> 0x8058E024
            // Local variables
            double v; // f0
        }
    }

    // References
    // -> struct {} __vt__16GFxTextImageDesc;
}
// Range: 0x8058FA60 -> 0x8058FC04
void GFxEditTextCharacter::SetImageSubstitutions(class GASFnCall & fn /* r26 */) {
    {
        // Range: 0x8058FA98 -> 0x8058FBEC
        // Local variables
        class GFxEditTextCharacter * pthis; // r29

        {
            // Range: 0x8058FB24 -> 0x8058FBEC
            // Local variables
            class GASObject * pobj; // r30

            {
                // Range: 0x8058FB44 -> 0x8058FB94
                // Local variables
                class GASArrayObject * parr; // r0

                {
                    // Range: 0x8058FB5C -> 0x8058FB84
                    // Local variables
                    int n; // r27
                    int i; // r28
                }
            }
            {
                // Range: 0x8058FB94 -> 0x8058FBB8
                // Local variables
                class GASValue & ve; // r0
            }
        }
    }
}
// Range: 0x8058FC70 -> 0x8058FF28
void GFxEditTextCharacter::UpdateImageSubstitution(class GASFnCall & fn /* r30 */) {
    {
        // Range: 0x8058FCAC -> 0x8058FF08
        // Local variables
        class GFxEditTextCharacter * pthis; // r0

        {
            // Range: 0x8058FCE0 -> 0x8058FEF0
            // Local variables
            class GASString idStr; // r1+0x10

            {
                // Range: 0x8058FD0C -> 0x8058FEF0
                // Local variables
                class GPtr * ppimgDesc; // r0

                {
                    // Range: 0x8058FD70 -> 0x8058FEF0
                    // Local variables
                    class GFxTextImageDesc * pimageDesc; // r28

                    {
                        // Range: 0x8058FD88 -> 0x8058FE50
                        // Local variables
                        class ImageSubstitutor * pimgSubst; // r3
                    }
                    {
                        // Range: 0x8058FE50 -> 0x8058FEF0
                        // Local variables
                        class GASObject * piobj; // r29

                        {
                            // Range: 0x8058FE64 -> 0x8058FEDC
                            // Local variables
                            class GFxImageResource * pimgRes; // r30
                            class GASBitmapData * pbmpData; // r0
                        }
                    }
                }
            }
        }
    }
}
// Range: 0x80590320 -> 0x805907A0
void GFxEditTextCharacter::ProcessImageTags(class GFxEditTextCharacter * this /* r18 */, class garray & imageInfoArray /* r19 */) {
    // Local variables
    class GASEnvironment * penv; // r22

    {
        // Range: 0x805903A0 -> 0x805903AC
        // Local variables
        unsigned long n; // r20
        unsigned long i; // r21

        {
            // Range: 0x805903A0 -> 0x805903AC
            // Local variables
            class GFxResourceBindData resBindData; // r1+0x8

            {
                // Range: 0x805903A8 -> 0x805903AC
                // Local variables
                float baseLineY; // f23
                float screenHeight; // f0
                float screenWidth; // f0
                float origHeight; // f0
                float origWidth; // f0
            }
        }
    }
}
// Range: 0x805907A0 -> 0x80591200
void * GASTextFieldProto::GASTextFieldProto(class GASTextFieldProto * this /* r28 */, class GASStringContext * psc /* r29 */, class GASObject * prototype /* r30 */, class GASFunctionRef & constructor /* r24 */) {
    // References
    // -> static class GASNameFunction GAS_TextFieldExtFunctionTable[15];
    // -> static class GASNameFunction GAS_TextFieldFunctionTable[8];
    // -> struct {} __vt__17GASTextFieldProto;
    // -> struct {} __vt__51GASPrototype<18GASTextFieldObject,14GASEnvironment>;
}
// Range: 0x805913B0 -> 0x8059146C
void GASTextFieldProto::GlobalCtor(class GASFnCall & fn /* r30 */) {
    // References
    // -> struct {} __vt__18GASTextFieldObject;
}
// signature: GFx_CSMTextSettings(GFxLoadProcess *, const GFxTagInfo &)
// Range: 0x80591470 -> 0x80591718
void GFx_CSMTextSettings(class GFxLoadProcess * p /* r26 */) {
    // Local variables
    unsigned int flagType; // r0
    unsigned int gridFit; // r0
    float thickness; // f31
    float sharpness; // f30
    class GFxResourceHandle handle; // r1+0x18

    // References
    // -> static char * gridfittypes[3];
}
