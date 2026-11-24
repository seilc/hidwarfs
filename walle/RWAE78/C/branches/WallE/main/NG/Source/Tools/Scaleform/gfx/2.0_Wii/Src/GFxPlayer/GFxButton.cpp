/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxButton.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8048F8F0 -> 0x804951C8
*/
// total size: 0x48
class GFxButtonRecord {
    // Members
    bool HitTest; // offset 0x0, size 0x1
    bool Down; // offset 0x1, size 0x1
    bool Over; // offset 0x2, size 0x1
    bool Up; // offset 0x3, size 0x1
    class GFxResourceId CharacterId; // offset 0x4, size 0x4
    int ButtonLayer; // offset 0x8, size 0x4
    enum BlendType BlendMode; // offset 0xC, size 0x4
    class GMatrix2D ButtonMatrix; // offset 0x10, size 0x18
    class Cxform ButtonCxform; // offset 0x28, size 0x20
};
// total size: 0x10
class GFxButtonAction {
    // Members
    int Conditions; // offset 0x0, size 0x4
    class garray Actions; // offset 0x4, size 0xC
};
// total size: 0xC
class garray : public garray_base {};
// total size: 0xC
class garray_base {
    // Members
    class GASActionBufferData * * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0xC
class garray_base {
    // Members
    class GFxButtonAction * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0xC
class garray_base {
    // Members
    class GFxButtonRecord * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x30
class GFxButtonCharacterDef : public GFxCharacterDef {
    // Members
    bool Menu; // offset 0x10, size 0x1
    class garray ButtonRecords; // offset 0x14, size 0xC
    class garray ButtonActions; // offset 0x20, size 0xC
    class GFxButtonSoundDef * Sound; // offset 0x2C, size 0x4
};
// total size: 0xA0
class GFxButtonSoundDef : public GNewOverrideBase {
    // Members
    class GFxButtonSoundInfo ButtonSounds[4]; // offset 0x0, size 0xA0
};
// total size: 0x28
class GFxButtonSoundInfo {
    // Members
    unsigned short SoundId; // offset 0x0, size 0x2
    class GFxSoundSampleImpl * Sam; // offset 0x4, size 0x4
    class GFxSoundInfo SoundStyle; // offset 0x8, size 0x20
};
// total size: 0x0
class GFxSoundSampleImpl {};
// total size: 0x20
class GFxSoundInfo {
    // Members
    bool NoMultiple; // offset 0x0, size 0x1
    bool StopPlayback; // offset 0x1, size 0x1
    bool HasEnvelope; // offset 0x2, size 0x1
    bool HasLoops; // offset 0x3, size 0x1
    bool HasOutPoint; // offset 0x4, size 0x1
    bool HasInPoint; // offset 0x5, size 0x1
    unsigned long InPoint; // offset 0x8, size 0x4
    unsigned long OutPoint; // offset 0xC, size 0x4
    unsigned short LoopCount; // offset 0x10, size 0x2
    class garray Envelopes; // offset 0x14, size 0xC
};
// total size: 0xC
class garray_base {
    // Members
    class GFxSoundEnvelope * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x8
class GFxSoundEnvelope {
    // Members
    unsigned long Mark44; // offset 0x0, size 0x4
    unsigned short Level0; // offset 0x4, size 0x2
    unsigned short Level1; // offset 0x6, size 0x2
};
// total size: 0x4
class GPtr {
    // Members
    class GASButtonObject * pObject; // offset 0x0, size 0x4
};
// total size: 0x38
class GASButtonObject : public GASObject {
    // Members
    class GWeakPtr pButton; // offset 0x30, size 0x8
};
// total size: 0xC
class garray_base {
    // Members
    class GPtr * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x54
class GASButtonProto : public GASPrototype {};
// total size: 0x54
class GASPrototype : public GASButtonObject {
    // Members
    class GASFunctionWeakRef Constructor; // offset 0x38, size 0xC
    class GASFunctionWeakRef __Constructor__; // offset 0x44, size 0xC
    class garray * pInterfaces; // offset 0x50, size 0x4
};
// total size: 0xB8
class GFxButtonCharacter : public GFxASCharacter {
    // Members
    class GFxButtonCharacterDef * pDef; // offset 0x98, size 0x4
    class garray RecordCharacter; // offset 0x9C, size 0xC
    int LastMouseFlags; // offset 0xA8, size 0x4
    int MouseFlags; // offset 0xAC, size 0x4
    enum GFxMouseState MouseState; // offset 0xB0, size 0x4
    class GPtr ASButtonObj; // offset 0xB4, size 0x4
};
enum GFxMouseState {
    Event_MouseUp = 0,
    Event_MouseDown = 1,
    MOUSE_OVER = 2,
};
// total size: 0x148
class GFxDisplayContext {
    // Members
    class GPtr pRenderConfig; // offset 0x0, size 0x4
    class GFxRenderStats * pRenderStats; // offset 0x4, size 0x4
    class GPtr pGradientParams; // offset 0x8, size 0x4
    class GPtr pImageCreator; // offset 0xC, size 0x4
    class GPtr pFontCacheManager; // offset 0x10, size 0x4
    class GPtr pLog; // offset 0x14, size 0x4
    class GPtr pWeakLib; // offset 0x18, size 0x4
    class GFxResourceBinding * pResourceBinding; // offset 0x1C, size 0x4
    float PixelScale; // offset 0x20, size 0x4
    class GMatrix2D ViewportMatrix; // offset 0x24, size 0x18
    unsigned int MaskRenderCount; // offset 0x3C, size 0x4
    unsigned int MaskStackIndexMax; // offset 0x40, size 0x4
    unsigned int MaskStackIndex; // offset 0x44, size 0x4
    class GFxCharacter * MaskStack[64]; // offset 0x48, size 0x100
};
// total size: 0x18
class GFxRenderStats : public GFxState {
    // Members
    unsigned long TessTriangles; // offset 0x14, size 0x4
};
enum ButtonState {
    Up = 0,
    Over = 1,
    Down = 2,
    Hit = 3,
};
static class GASNameFunction GAS_ButtonFunctionTable[2]; // size: 0x10, address: 0x806E7C20
// Range: 0x8048F8F0 -> 0x8048FDC8
void GFx_GenerateMouseButtonEvents(class GFxMouseButtonState * ms /* r31 */) {
    // Local variables
    class GPtr ActiveEntity; // r1+0xC
    class GPtr TopmostEntity; // r1+0x8
}
// Range: 0x80494F10 -> 0x80495044
void * GFxButtonCharacter::~GFxButtonCharacter(class GFxButtonCharacter * this /* r30 */) {
}
// Range: 0x80493210 -> 0x80493218
class GFxCharacterDef * GFxButtonCharacter::GetCharacterDef() const {
}
// Range: 0x80493220 -> 0x804932A8
void GFxButtonCharacter::Restart(class GFxButtonCharacter * this /* r28 */) {
    // Local variables
    unsigned long r; // r30
    unsigned long R_num; // r29
}
// Range: 0x804932B0 -> 0x804933A4
void GFxButtonCharacter::AdvanceFrame(class GFxButtonCharacter * this /* r27 */, bool nextFrame /* r28 */, float framePos /* f31 */) {
    {
        // Range: 0x804932D8 -> 0x80493374
        // Local variables
        unsigned int i; // r29
    }
}
// Range: 0x804933C0 -> 0x80493524
void GFxButtonCharacter::Display(class GFxButtonCharacter * this /* r25 */, class GFxDisplayContext & context /* r26 */) {
    // Local variables
    class GFxResourceBinding * psave; // r29
    class GRenderer * prenderer; // r28

    {
        // Range: 0x804933F0 -> 0x804934E0
        // Local variables
        unsigned int i; // r27
    }
}
// Range: 0x80493550 -> 0x804936EC
bool GFxButtonCharacter::PointTestLocal(class GFxButtonCharacter * this /* r25 */, class GPoint & pt /* r26 */, bool testShape /* r27 */) const {
    {
        // Range: 0x80493604 -> 0x804936BC
        // Local variables
        unsigned int i; // r28

        {
            // Range: 0x80493604 -> 0x804936BC
            // Local variables
            class GPoint p; // r1+0x8
            class GMatrix2D m; // r1+0x38
        }
    }
}
// signature: GFxButtonCharacter::GetTopMostMouseEntity(const GPoint<float> &, bool)
// Range: 0x80493700 -> 0x80493860
class GFxASCharacter * GFxButtonCharacter::GetTopMostMouseEntity(class GFxButtonCharacter * this /* r28 */, class GPoint & pt /* r29 */) {
    // Local variables
    class GMatrix2D m; // r1+0x18
    class GPoint p; // r1+0x10

    {
        // Range: 0x80493784 -> 0x80493828
        // Local variables
        unsigned int i; // r29

        {
            // Range: 0x80493784 -> 0x80493828
            // Local variables
            class GPoint SubP; // r1+0x8
        }
    }
}
// Range: 0x80493860 -> 0x804938C8
bool GFxButtonCharacter::IsTabable(class GFxButtonCharacter * this /* r31 */) const {
}
// Range: 0x80494F00 -> 0x80494F08
enum ObjectType GFxButtonCharacter::GetObjectType() const {
}
// signature: GFxButtonCharacter::GetBoundsOfRecord(const GMatrix2D &, unsigned int) const
// Range: 0x804938D0 -> 0x804939CC
class GRect GFxButtonCharacter::GetBoundsOfRecord(class GRect * bounds /* r28 */, class GFxButtonCharacter * this /* r29 */, class GMatrix2D & transform /* r30 */, unsigned int recNumber /* r31 */) const {
    // Local variables
    class GMatrix2D m; // r1+0x18
}
// signature: GFxButtonCharacter::GetBounds(const GMatrix2D &) const
// Range: 0x804939F0 -> 0x80493C04
class GRect GFxButtonCharacter::GetBounds(class GRect * bounds /* r26 */, class GFxButtonCharacter * this /* r27 */, class GMatrix2D & transform /* r28 */) const {
    // Local variables
    class GRect tempRect; // r1+0x38
    bool boundsInit; // r30
    class GMatrix2D m; // r1+0x48

    {
        // Range: 0x80493A30 -> 0x80493BD8
        // Local variables
        unsigned int i; // r29
    }
}
// signature: GFxButtonCharacter::GetBoundsOfState(const GMatrix2D &, GFxButtonCharacter::ButtonState) const
// Range: 0x80493C10 -> 0x80493E44
class GRect GFxButtonCharacter::GetBoundsOfState(class GRect * bounds /* r26 */, class GFxButtonCharacter * this /* r27 */, class GMatrix2D & transform /* r28 */, enum ButtonState state /* r29 */) const {
    // Local variables
    class GRect tempRect; // r1+0x38
    class GMatrix2D m; // r1+0x48

    {
        // Range: 0x80493C50 -> 0x80493E18
        // Local variables
        unsigned int i; // r30
    }
}
// Range: 0x80493E50 -> 0x804940B8
class GRect GFxButtonCharacter::GetFocusRect(class GFxButtonCharacter * this /* r31 */) const {
    // Local variables
    class GMatrix2D m; // r1+0x58
    class GRect tempRect; // r1+0x48
}
// Range: 0x804940C0 -> 0x80494138
void GFxButtonCharacter::OnGettingKeyboardFocus(class GFxButtonCharacter * this /* r31 */) {
}
// Range: 0x80494140 -> 0x804941D8
void GFxButtonCharacter::OnLosingKeyboardFocus(class GFxButtonCharacter * this /* r31 */) {
}
// Range: 0x804941E0 -> 0x804946F0
bool GFxButtonCharacter::OnButtonEvent(class GFxButtonCharacter * this /* r15 */, class GFxEventId & event /* r1+0x8 */) {
    // Local variables
    bool handlerFound; // r14
    int c; // r20
    int kc; // r19
    class GASEnvironment * penv; // r16
    class GASString methodName; // r1+0xC

    {
        // Range: 0x80494388 -> 0x80494540
        // Local variables
        unsigned int i; // r18

        {
            // Range: 0x80494388 -> 0x80494540
            // Local variables
            class GFxSprite * pparentSprite; // r17

            {
                // Range: 0x80494388 -> 0x80494540
                {
                    // Range: 0x80494388 -> 0x80494524
                    // Local variables
                    unsigned long j; // r16
                }
            }
        }
    }
    {
        // Range: 0x8049457C -> 0x804946A8
        // Local variables
        class GASValue method; // r1+0x20
    }

    // References
    // -> struct {} __vt__15GASActionBuffer;
}
// Range: 0x804946F0 -> 0x804946FC
unsigned long GFxButtonCharacter::GetStandardMemberBitMask() const {
}
// Range: 0x80494710 -> 0x80494718
class GASObject * GFxButtonCharacter::GetASObject() {
}
// Range: 0x80494700 -> 0x80494708
class GASObject * GFxButtonCharacter::GetASObject() const {
}
// Range: 0x80494E00 -> 0x80494EF4
bool GFxButtonCharacter::GetMember(class GFxButtonCharacter * this /* r28 */, class GASEnvironment * penv /* r29 */, class GASString & name /* r30 */, class GASValue * pval /* r31 */) {
}
// Range: 0x80494720 -> 0x80494B2C
bool GFxButtonCharacter::OnKeyEvent(class GFxButtonCharacter * this /* r28 */, class GFxEventId & id /* r29 */, int * pkeyMask /* r30 */) {
    // Local variables
    class GASEnvironment * penv; // r0
    class GASString methodName; // r1+0x10

    {
        // Range: 0x80494764 -> 0x80494920
        // Local variables
        class GASValue method; // r1+0x48
    }
}
// Range: 0x80494B30 -> 0x80494BF0
unsigned int GFxButtonCharacter::GetCursorType(class GFxButtonCharacter * this /* r30 */) const {
    // Local variables
    class GASEnvironment * penv; // r31
    class GASValue val; // r1+0x8
}
// Range: 0x8048FE90 -> 0x8049006C
bool GFxButtonRecord::Read(class GFxButtonRecord * this /* r27 */, class GFxLoadProcess * p /* r28 */, enum GFxTagType tagType /* r29 */) {
    // Local variables
    int flags; // r0

    {
        // Range: 0x8048FFE8 -> 0x80490044
        // Local variables
        unsigned char blendMode; // r3
    }
}
// Range: 0x80490070 -> 0x804901A8
void * GFxButtonAction::~GFxButtonAction(class GFxButtonAction * this /* r30 */) {
    {
        // Range: 0x80490094 -> 0x804900C4
        // Local variables
        unsigned long n; // r27
        unsigned long i; // r28
    }
}
// Range: 0x804901B0 -> 0x804901F4
void * GFxButtonCharacterDef::GFxButtonCharacterDef() {
    // References
    // -> struct {} __vt__21GFxButtonCharacterDef;
}
// Range: 0x80490640 -> 0x80490744
void * GFxButtonCharacterDef::~GFxButtonCharacterDef(class GFxButtonCharacterDef * this /* r29 */) {
    // References
    // -> struct {} __vt__21GFxButtonCharacterDef;
}
// Range: 0x80490870 -> 0x80490DD0
void GFxButtonCharacterDef::GFxSoundInfo::Read(class GFxSoundInfo * this /* r24 */, class GFxStream * in /* r25 */) {
    {
        // Range: 0x80490A68 -> 0x80490CCC
        // Local variables
        int nPoints; // r0

        {
            // Range: 0x80490BB4 -> 0x80490C98
            // Local variables
            int i; // r26
        }
    }
}
// Range: 0x80490EB0 -> 0x80491A7C
void GFxButtonCharacterDef::Read(class GFxButtonCharacterDef * this /* r29 */, class GFxLoadProcess * p /* r30 */, enum GFxTagType tagType /* r31 */) {
    {
        // Range: 0x80490EE0 -> 0x8049116C
        // Local variables
        unsigned int i; // r17
        class GFxButtonRecord r; // r1+0x50
    }
    {
        // Range: 0x804913D8 -> 0x80491458
        // Local variables
        int i; // r16

        {
            // Range: 0x804913D8 -> 0x80491458
            // Local variables
            class GFxButtonSoundInfo & bs; // r20
        }
    }
    {
        // Range: 0x8049146C -> 0x80491A64
        // Local variables
        int NextActionPos; // r17
        int Button2_actionOffset; // r0

        {
            // Range: 0x804914F0 -> 0x804917AC
            // Local variables
            unsigned int i; // r18
            class GFxButtonRecord r; // r1+0x8
        }
        {
            // Range: 0x804917C4 -> 0x80491A60
            // Local variables
            int NextActionOffset; // r0
        }
    }

    // References
    // -> struct {} __vt__19GASActionBufferData;
}
// Range: 0x80491AA0 -> 0x80491D2C
class GFxCharacter * GFxButtonCharacterDef::CreateCharacterInstance(class GFxButtonCharacterDef * this /* r27 */, class GFxASCharacter * parent /* r26 */, class GFxResourceId & id /* r25 */, class GFxMovieDefImpl * pbindingImpl /* r30 */) {
    // References
    // -> struct {} __vt__18GFxButtonCharacter;
}
// Range: 0x804923E0 -> 0x804923E4
void GASButtonObject::commonInit() {
}
// Range: 0x804923F0 -> 0x80492740
void * GASButtonProto::GASButtonProto(class GASButtonProto * this /* r29 */, class GASStringContext * psc /* r30 */, class GASObject * prototype /* r31 */, class GASFunctionRef & constructor /* r25 */) {
    // References
    // -> static class GASNameFunction GAS_ButtonFunctionTable[2];
    // -> struct {} __vt__14GASButtonProto;
    // -> struct {} __vt__48GASPrototype<15GASButtonObject,14GASEnvironment>;
}
// Range: 0x804928F0 -> 0x804929AC
void GASButtonProto::GlobalCtor(class GASFnCall & fn /* r30 */) {
    // References
    // -> struct {} __vt__15GASButtonObject;
}
