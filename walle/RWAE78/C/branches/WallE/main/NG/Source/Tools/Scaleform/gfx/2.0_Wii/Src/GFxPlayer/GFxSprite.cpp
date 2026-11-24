/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxSprite.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8053C8D0 -> 0x8054C878
*/
// total size: 0x10
class InitVisitor : public MemberVisitor {
    // Members
    class GASEnvironment * pEnv; // offset 0x4, size 0x4
    class GFxASCharacter * pCharacter; // offset 0x8, size 0x4
    bool IsInsideAS; // offset 0xC, size 0x1
};
// total size: 0x48
class GASTransformObject : public GASObject {
    // Members
    class GWeakPtr MovieRoot; // offset 0x30, size 0x8
    class GPtr TargetHandle; // offset 0x38, size 0x4
    class GPtr Matrix; // offset 0x3C, size 0x4
    class GPtr ColorTransform; // offset 0x40, size 0x4
    class GPtr PixelBounds; // offset 0x44, size 0x4
};
enum LineStyle {
    LineFlag_StrokeHinting = 1,
    LineScaling_Normal = 0,
    LineScaling_Horizontal = 2,
    LineScaling_Vertical = 4,
    LineScaling_None = 6,
    LineScaling_Mask = 6,
    LineFlag_ComplexFill = 8,
    LineJoin_Round = 0,
    LineJoin_Bevel = 16,
    LineJoin_Miter = 32,
    LineJoin_Mask = 48,
    LineCap_Round = 0,
    LineCap_None = 64,
    LineCap_Square = 128,
    LineCap_Mask = 192,
    LineEndCap_Round = 0,
    LineEndCap_None = 256,
    LineEndCap_Square = 512,
    LineEndCap_Mask = 768,
    LineEndCap_ShiftToCap = 2,
};
// total size: 0xC
class MemberVisitor : public MemberVisitor {
    // Members
    class GPtr obj; // offset 0x4, size 0x4
    class GASStringContext * pStringContext; // offset 0x8, size 0x4
};
// total size: 0x58
class GASMovieClipProto : public GASPrototype {};
// total size: 0x58
class GASPrototype : public GASMovieClipObject {
    // Members
    class GASFunctionWeakRef Constructor; // offset 0x3C, size 0xC
    class GASFunctionWeakRef __Constructor__; // offset 0x48, size 0xC
    class garray * pInterfaces; // offset 0x54, size 0x4
};
static class GASNameFunction MovieClipFunctionTable[40]; // size: 0x140, address: 0x806E8928
struct {} __vt__Q218GASMovieClipObject32MemberVisitor; // size: 0x10, address: 0x8073BB50
struct {} __vt__Q29GFxSprite30InitVisitor; // size: 0x10, address: 0x8073BB60
struct {} __vt__17GASMovieClipProto; // size: 0xB8, address: 0x8073BB70
struct {} __vt__51GASPrototype<18GASMovieClipObject,14GASEnvironment>; // size: 0xB8, address: 0x8073BC28
struct {} __vt__18GASMovieClipObject; // size: 0xB4, address: 0x8073BCE0
struct {} __vt__9GFxSprite; // size: 0x1CC, address: 0x8073BD94
struct {} __vt__12GFxSpriteDef; // size: 0xB0, address: 0x8073BF60
struct {} __vt__28GFxLogBase<14GASEnvironment>; // size: 0x10, address: 0x8073C010
// signature: GFxSpriteDef::GFxSpriteDef(GFxMovieDataDef *)
// Range: 0x8053C8D0 -> 0x8053C914
void * GFxSpriteDef::GFxSpriteDef() {
    // References
    // -> struct {} __vt__12GFxSpriteDef;
}
// Range: 0x8053C920 -> 0x8053CA2C
void * GFxSpriteDef::~GFxSpriteDef(class GFxSpriteDef * this /* r28 */) {
    // Local variables
    unsigned int i; // r30

    // References
    // -> struct {} __vt__12GFxSpriteDef;
}
// Range: 0x8053CA30 -> 0x8053CAE4
class GFxCharacter * GFxSpriteDef::CreateCharacterInstance(class GFxSpriteDef * this /* r27 */, class GFxASCharacter * parent /* r28 */, class GFxResourceId & id /* r29 */, class GFxMovieDefImpl * pbindingImpl /* r30 */) {
}
// Range: 0x8053CAF0 -> 0x8053CBE4
void GFxSpriteDef::AddFrameName(class GFxSpriteDef * this /* r28 */, char * name /* r29 */, class GFxLog * plog /* r30 */) {
    // Local variables
    class GFxString n; // r1+0xC
}
// Range: 0x8053D420 -> 0x8053D99C
void GFxSpriteDef::Read(class GFxSpriteDef * this /* r21 */, class GFxLoadProcess * p /* r22 */, class GFxResourceId & charId /* r23 */) {
    // Local variables
    unsigned long tagEnd; // r0

    {
        // Range: 0x8053D61C -> 0x8053D88C
        // Local variables
        void (* lf)(class GFxLoadProcess *, class GFxTagInfo &); // r12
        enum GFxTagType tagType; // r5
        class GFxTagInfo tagInfo; // r1+0x28
    }

    // References
    // -> void (* GFx_SWF_TagLoaderTable[85])(class GFxLoadProcess *, class GFxTagInfo &);
    // -> void (* GFx_GFX_TagLoaderTable[5])(class GFxLoadProcess *, class GFxTagInfo &);
}
// Range: 0x8053D9A0 -> 0x8053DB20
void GFxSpriteDef::InitEmptyClipDef(class GFxSpriteDef * this /* r31 */) {
}
// signature: GFxSpriteDef::PointTestLocal(const GPoint<float> &, bool, const GFxPointTestCacheProvider *) const
// Range: 0x8053DB20 -> 0x8053DB28
bool GFxSpriteDef::PointTestLocal() const {
}
// signature: GFxSprite::GFxSprite(GFxTimelineDef *, GFxMovieDefImpl *, GFxMovieRoot *, GFxASCharacter *, GFxResourceId, bool)
// Range: 0x8053DB30 -> 0x8053E0AC
void * GFxSprite::GFxSprite(class GFxSprite * this /* r27 */, class GFxTimelineDef * pdef /* r24 */, class GFxMovieDefImpl * pdefImpl /* r28 */, class GFxMovieRoot * pr /* r29 */, class GFxASCharacter * pparent /* r30 */, bool loadedSeparately /* r31 */) {
    // Local variables
    unsigned int frameCount; // r31

    // References
    // -> struct {} __vt__18GASMovieClipObject;
    // -> struct {} __vt__14GASEnvironment;
    // -> struct {} __vt__9GFxSprite;
}
// Range: 0x8053E7F0 -> 0x8053EA50
void * GFxSprite::~GFxSprite(class GFxSprite * this /* r30 */) {
    // References
    // -> struct {} __vt__9GFxSprite;
}
// Range: 0x8053EA50 -> 0x8053EA90
void GFxSprite::ForceShutdown(class GFxSprite * this /* r31 */) {
}
// Range: 0x8053EA90 -> 0x8053EA98
void GFxSprite::ClearDisplayList() {
}
// Range: 0x8053EAA0 -> 0x8053EAA8
class GFxMovieDefImpl * GFxSprite::GetResourceMovieDef() const {
}
// Range: 0x8053EAB0 -> 0x8053EADC
class GFxFontManager * GFxSprite::GetFontManager() const {
}
// Range: 0x8053EAE0 -> 0x8053EAE8
class GFxMovieRoot * GFxSprite::GetMovieRoot() const {
}
// signature: GFxSprite::GetLevelMovie(int) const
// Range: 0x8053EAF0 -> 0x8053EAF8
class GFxASCharacter * GFxSprite::GetLevelMovie() const {
}
// Range: 0x8053EB00 -> 0x8053EB50
class GFxASCharacter * GFxSprite::GetASRootMovie() const {
}
// signature: GFxSprite::SetLevel(int)
// Range: 0x8053EB50 -> 0x8053EC20
void GFxSprite::SetLevel(class GFxSprite * this /* r31 */) {
    // Local variables
    char nameBuff[64]; // r1+0x10
}
// Range: 0x8053EC20 -> 0x8053EC68
unsigned int GFxSprite::GetLoadingFrame() const {
}
// Range: 0x8053EC70 -> 0x8053ED9C
void GFxSprite::ExecuteFrame0Events(class GFxSprite * this /* r31 */) {
}
// signature: GFxSprite::OnIntervalTimer(void *)
// Range: 0x8053EDA0 -> 0x8053EDA4
void GFxSprite::OnIntervalTimer() {
}
// signature: GFxSprite::GetBounds(const GMatrix2D &) const
// Range: 0x8053EDB0 -> 0x8053F12C
class GRect GFxSprite::GetBounds(class GRect * r /* r25 */, class GFxSprite * this /* r26 */, class GMatrix2D & transform /* r27 */) const {
    // Local variables
    unsigned int i; // r29
    unsigned int n; // r28
    class GRect tempRect; // r1+0x68
    class GMatrix2D m; // r1+0x78
}
// Range: 0x8053F130 -> 0x8053F190
void GFxSprite::Restart(class GFxSprite * this /* r31 */) {
}
// signature: GFxSprite::CalcDisplayListHitTestMaskArray(std::garray<unsigned char> *, const GPoint<float> &, bool) const
// Range: 0x8053F190 -> 0x8053F3D4
void GFxSprite::CalcDisplayListHitTestMaskArray(class GFxSprite * this /* r26 */, class garray * phitTest /* r27 */, class GPoint & pt /* r28 */) const {
    // Local variables
    int i; // r30
    int n; // r29

    {
        // Range: 0x8053F1B4 -> 0x8053F3B0
        {
            // Range: 0x8053F1B8 -> 0x8053F3B0
            // Local variables
            int k; // r5
            class GPoint p; // r1+0x8
            class GMatrix2D m; // r1+0x10
        }
    }
}
// Range: 0x8053F3E0 -> 0x8053F8F4
class GFxASCharacter * GFxSprite::GetTopMostMouseEntity(class GFxSprite * this /* r28 */, class GPoint & pt /* r29 */, bool testAll /* r30 */) {
    // Local variables
    class GMatrix2D m; // r1+0x70
    class GPoint p; // r1+0x10
    int i; // r26
    class garray hitTest; // r1+0x18

    {
        // Range: 0x8053F498 -> 0x8053F544
        // Local variables
        class GPoint pp; // r1+0x8
        class GMatrix2D matrix; // r1+0x58
    }
    {
        // Range: 0x8053F568 -> 0x8053F7C8
        {
            // Range: 0x8053F5A8 -> 0x8053F7C8
            // Local variables
            class GFxASCharacter * te; // r31
        }
    }
}
// Range: 0x8053F910 -> 0x8053FBD0
void GFxSprite::AdvanceFrame(class GFxSprite * this /* r27 */, bool nextFrame /* r28 */, float framePos /* f31 */) {
    {
        // Range: 0x8053F994 -> 0x8053FB00
        // Local variables
        unsigned int CurrentFrame0; // r29
    }
}
// Range: 0x8053FBD0 -> 0x8053FCFC
void GFxSprite::ExecuteFrameTags(class GFxSprite * this /* r24 */, unsigned int frame /* r28 */, bool stateOnly /* r25 */, bool noRemove /* r26 */, enum Priority prio /* r27 */) {
    // Local variables
    class Frame & playlist; // r0

    {
        // Range: 0x8053FC38 -> 0x8053FCB4
        // Local variables
        unsigned int i; // r28
    }
}
// Range: 0x8053FD00 -> 0x8053FE04
void GFxSprite::ExecuteInitActionFrameTags(class GFxSprite * this /* r27 */, unsigned int frame /* r28 */) {
    {
        // Range: 0x8053FD14 -> 0x8053FDCC
        // Local variables
        class Frame * pinitActions; // r0
        bool markFrameAsVisited; // r30

        {
            // Range: 0x8053FD78 -> 0x8053FDA4
            // Local variables
            unsigned int i; // r29
        }
    }
}
// signature: GFxSprite::ExecuteImportedInitActions(GFxMovieDef *)
// Range: 0x8053FE10 -> 0x8053FEEC
void GFxSprite::ExecuteImportedInitActions(class GFxSprite * this /* r21 */) {
    // Local variables
    class GFxMovieDefImpl * pdefImpl; // r26
    class GFxMovieDataDef * pdataDef; // r0

    {
        // Range: 0x8053FE30 -> 0x8053FEC8
        // Local variables
        unsigned long fc; // r24
        unsigned long f; // r25

        {
            // Range: 0x8053FE30 -> 0x8053FEC8
            // Local variables
            class Frame & actionsList; // r0

            {
                // Range: 0x8053FE48 -> 0x8053FEB8
                // Local variables
                unsigned int n; // r22
                unsigned int i; // r23
            }
        }
    }
}
// signature: GFxSprite::AddActionBuffer(GASActionBuffer *, GFxActionPriority::Priority)
// Range: 0x8053FEF0 -> 0x8053FFE0
void GFxSprite::AddActionBuffer(class GFxSprite * this /* r31 */, class GASActionBuffer * a /* r29 */) {
}
// Range: 0x8053FFE0 -> 0x805403F0
class GFxPlaceObject2 * GFxSprite::FindPreviousPlaceObjectInfo(class GFxSprite * this /* r24 */, class GFxCharPosInfo * ppos /* r25 */, unsigned int * pframe /* r26 */, int depth /* r27 */, class GFxResourceId & id /* r28 */, unsigned int findPrevFlags /* r29 */) {
    // Local variables
    class GFxPlaceObject2 * ptag; // r30
    class GFxPlaceObject2 * pprevTag; // r3
    unsigned int currentFrame; // r1+0x14
}
// signature: GFxSprite::FindPreviousPlaceObject2(unsigned int *, int, GFxResourceId)
// Range: 0x805403F0 -> 0x805404DC
class GFxPlaceObject2 * GFxSprite::FindPreviousPlaceObject2(class GFxSprite * this /* r23 */, unsigned int * pframe /* r24 */, int depth /* r25 */) {
    // Local variables
    int f; // r27

    {
        // Range: 0x80540404 -> 0x805404B0
        // Local variables
        class Frame & playlist; // r0

        {
            // Range: 0x80540438 -> 0x805404A0
            // Local variables
            int i; // r26
        }
    }
}
// Range: 0x805404E0 -> 0x805406E0
void GFxSprite::GotoFrame(class GFxSprite * this /* r26 */, unsigned int targetFrameNumber /* r27 */) {
    {
        // Range: 0x80540568 -> 0x80540600
        // Local variables
        unsigned int f; // r28
    }
    {
        // Range: 0x80540654 -> 0x80540674
        // Local variables
        unsigned int f; // r28
    }
}
// Range: 0x805406E0 -> 0x8054078C
bool GFxSprite::GotoLabeledFrame(class GFxSprite * this /* r29 */, char * label /* r30 */, int offset /* r31 */) {
    // Local variables
    unsigned int targetFrame; // r1+0x8
}
// Range: 0x80540860 -> 0x80540A14
void GFxSprite::Display(class GFxSprite * this /* r27 */, class GFxDisplayContext & context /* r28 */) {
    // Local variables
    class GFxResourceBinding * psave; // r30
    bool masked; // r29

    {
        // Range: 0x80540964 -> 0x805409C8
        // Local variables
        enum BlendType blend; // r0
        class Cxform wcx; // r1+0x8
        class GMatrix2D mat; // r1+0x28
    }
}
// Range: 0x80540A20 -> 0x80540A90
void GFxSprite::PropagateMouseEvent(class GFxSprite * this /* r30 */, class GFxEventId & id /* r31 */) {
}
// Range: 0x80540A90 -> 0x80540B14
void GFxSprite::PropagateKeyEvent(class GFxSprite * this /* r29 */, class GFxEventId & id /* r30 */, int * pkeyMask /* r31 */) {
}
// Range: 0x80540B20 -> 0x80540B9C
void GFxSprite::CloneInternalData(class GFxSprite * this /* r30 */, class GFxASCharacter * src /* r31 */) {
    {
        // Range: 0x80540B40 -> 0x80540B84
        // Local variables
        class GFxSprite * pSrcSprite; // r0
    }
}
// Range: 0x80540BA0 -> 0x80540C4C
static void GFx_InitializeClassInstance(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASFunctionRef ctorFunc; // r1+0x8
}
// Range: 0x80540C50 -> 0x805411A0
static void GFx_FindClassAndInitializeClassInstance(class GASFnCall & fn /* r29 */) {
    // Local variables
    class GASFunctionRef ctorFunc; // r1+0x24
    class GASString symbolName; // r1+0x8

    {
        // Range: 0x80540CB4 -> 0x80540F60
        // Local variables
        class ActionEntry e; // r1+0x6C

        {
            // Range: 0x80540D10 -> 0x80540E48
            // Local variables
            class ActionEntry e; // r1+0xA8
        }
    }
    {
        // Range: 0x80540FB4 -> 0x80541110
        // Local variables
        class ActionEntry e; // r1+0x30
    }
}
// Range: 0x805411E0 -> 0x805427A0
class GFxCharacter * GFxSprite::AddDisplayObject(class GFxSprite * this /* r15 */, class GFxCharPosInfo & pos /* r16 */, class GASString & name /* r21 */, class garray & EventHandlers /* r17 */, class GASObjectInterface * pinitSource /* r1+0x8 */, bool replaceIfDepthIsOccupied /* r1+0xC */, unsigned int createFrame /* r20 */, bool placeObject /* r18 */, class GFxCharacterCreateInfo * pcharCreateOverride /* r11 */, class GFxASCharacter * origChar /* r19 */) {
    // Local variables
    class GFxCharacterCreateInfo ccinfo; // r1+0x30
    class GFxCharacter * pexistingChar; // r14
    class GFxASCharacter * pscriptCh; // r22
    bool nameSet; // r1+0x110
    bool hasConstructEvent; // r21
    class GFxMovieRoot * proot; // r20
    unsigned int sessionId; // r14

    {
        // Range: 0x805413AC -> 0x805414B0
        // Local variables
        class GFxCharPosInfo newPos; // r1+0xC0
    }
    {
        // Range: 0x805415EC -> 0x80541840
        // Local variables
        unsigned long i; // r19
    }
    {
        // Range: 0x8054184C -> 0x80542694
        // Local variables
        unsigned int oldSessionId; // r1+0x20
        class GFxString * psymbolName; // r19
        class GASFunctionRef ctorFunc; // r1+0xB0
        class GASGlobalContext * gctxt; // r17

        {
            // Range: 0x805418B8 -> 0x80542598
            // Local variables
            class GASString symbolName; // r1+0x1C

            {
                // Range: 0x805418E8 -> 0x80541EA8
                // Local variables
                class garray params; // r1+0xA4
            }
            {
                // Range: 0x80541F48 -> 0x805424F4
                // Local variables
                class garray params; // r1+0x98
            }
        }
    }
    {
        // Range: 0x805426CC -> 0x80542748
        // Local variables
        class InitVisitor memberVisitor; // r1+0x88
    }

    // References
    // -> struct {} __vt__Q29GFxSprite30InitVisitor;
    // -> struct {} __vt__15GASActionBuffer;
}
// signature: GFxSprite::InitVisitor::Visit(const GASString &, const GASValue &, unsigned char)
// Range: 0x8054C600 -> 0x8054C688
void GFxSprite::InitVisitor::Visit(class InitVisitor * this /* r8 */) {
}
// signature: GFxSprite::MoveDisplayObject(const GFxCharPosInfo &)
// Range: 0x80542870 -> 0x80542878
void GFxSprite::MoveDisplayObject() {
}
// Range: 0x80542880 -> 0x805429F8
void GFxSprite::ReplaceDisplayObject(class GFxSprite * this /* r28 */, class GFxCharPosInfo & pos /* r29 */, class GASString & name /* r30 */) {
    // Local variables
    class GFxCharacterCreateInfo ccinfo; // r1+0x10
}
// signature: GFxSprite::RemoveDisplayObject(int, GFxResourceId)
// Range: 0x80542A00 -> 0x80542A30
void GFxSprite::RemoveDisplayObject() {
}
// Range: 0x80542A30 -> 0x80542BC8
bool GFxSprite::ReplaceChildCharacterOnLoad(class GFxSprite * this /* r30 */, class GFxASCharacter * poldChar /* r28 */, class GFxASCharacter * pnewChar /* r31 */) {
    // Local variables
    int index; // r0
}
// Range: 0x80542BD0 -> 0x80542BD8
unsigned long GFxSprite::GetStandardMemberBitMask() const {
}
// signature: GFxSprite::GetStandardMember(GFxASCharacter::StandardMember, GASValue *, bool) const
// Range: 0x80542BE0 -> 0x80542EA0
bool GFxSprite::GetStandardMember(class GFxSprite * this /* r29 */, enum StandardMember member /* r30 */, class GASValue * pval /* r31 */) const {
}
// signature: GFxSprite::SetStandardMember(GFxASCharacter::StandardMember, const GASValue &, bool)
// Range: 0x80542EB0 -> 0x80543058
bool GFxSprite::SetStandardMember(class GFxSprite * this /* r29 */, enum StandardMember member /* r30 */, class GASValue & val /* r31 */) {
}
// Range: 0x80543060 -> 0x8054311C
bool GFxSprite::SetMemberRaw(class GFxSprite * this /* r27 */, class GASStringContext * psc /* r28 */, class GASString & name /* r29 */, class GASValue & val /* r30 */, class GASPropFlags & flags /* r31 */) {
    {
        // Range: 0x80543074 -> 0x805430D4
        // Local variables
        enum StandardMember member; // r0
    }
}
// Range: 0x80543120 -> 0x80543384
bool GFxSprite::GetMember(class GFxSprite * this /* r30 */, class GASEnvironment * penv /* r26 */, class GASStringContext * psc /* r27 */, class GASString & name /* r28 */, class GASValue * pval /* r31 */) {
    // Local variables
    class GFxASCharacter * pch; // r4

    {
        // Range: 0x80543134 -> 0x80543230
        // Local variables
        enum StandardMember member; // r29
    }
}
// Range: 0x80543390 -> 0x80543554
class GFxASCharacter * GFxSprite::GetRelativeTarget(class GFxSprite * this /* r29 */, class GASString & name /* r30 */) {
    // Local variables
    class GASEnvironment & e; // r0

    {
        // Range: 0x805434D4 -> 0x80543528
        // Local variables
        int levelIndex; // r4
        char * ptail; // r1+0x8
    }
}
// Range: 0x80543560 -> 0x80543790
void GFxSprite::CallFrameActions(class GFxSprite * this /* r31 */, class GASValue & FrameSpec /* r26 */) {
    // Local variables
    unsigned int FrameNumber; // r1+0x14
    unsigned int aqOldSession; // r1+0xC
    unsigned int aqCurSession; // r27
    class Frame & playlist; // r0

    {
        // Range: 0x80543584 -> 0x805435EC
        // Local variables
        class GASString frameLabel; // r1+0x10
    }
    {
        // Range: 0x80543704 -> 0x80543750
        // Local variables
        unsigned int i; // r26
    }
}
// Range: 0x80543790 -> 0x80543818
bool GFxSprite::OnButtonEvent(class GFxSprite * this /* r30 */, class GFxEventId & id /* r31 */) {
    // Local variables
    bool handled; // r0
}
// Range: 0x80543820 -> 0x80543884
void GFxSprite::OnEventUnload(class GFxSprite * this /* r31 */) {
}
// Range: 0x80543890 -> 0x80543A50
bool GFxSprite::OnKeyEvent(class GFxSprite * this /* r29 */, class GFxEventId & id /* r30 */, int * pkeyMask /* r27 */) {
    // Local variables
    bool rv; // r31

    {
        // Range: 0x805438D0 -> 0x80543930
        // Local variables
        int kc; // r0
    }
}
// Range: 0x80543A50 -> 0x80543D18
bool GFxSprite::OnEvent(class GFxSprite * this /* r29 */, class GFxEventId & id /* r30 */) {
    // Local variables
    class GASValue method; // r1+0x20

    {
        // Range: 0x80543A74 -> 0x80543C04
        // Local variables
        class GASString methodName; // r1+0xC

        {
            // Range: 0x80543AA8 -> 0x80543BB8
            // Local variables
            bool hasMethod; // r27
        }
    }
}
// Range: 0x80543D20 -> 0x80543D7C
bool GFxSprite::ExecuteBuffer(class GASActionBuffer * pactionbuffer /* r31 */) {
}
// Range: 0x80543D80 -> 0x80543E90
bool GFxSprite::ExecuteEvent(class GFxSprite * this /* r30 */, class GFxEventId & id /* r31 */) {
}
// Range: 0x80543E90 -> 0x80543FF8
void GFxSprite::OnEventLoad(class GFxSprite * this /* r31 */) {
}
// Range: 0x80544000 -> 0x8054404C
void GFxSprite::OnEventXmlsocketOnxml() {
}
// Range: 0x80544050 -> 0x80544054
void GFxSprite::OnEventIntervalTimer() {
}
// Range: 0x80544060 -> 0x805440AC
void GFxSprite::OnEventLoadProgress() {
}
// Range: 0x805440B0 -> 0x80544184
bool GFxSprite::Invoke(class GFxSprite * this /* r28 */, char * methodName /* r29 */, class GASValue * presult /* r30 */, unsigned int numArgs /* r31 */) {
}
// Range: 0x80544190 -> 0x80544238
bool GFxSprite::InvokeArgs(class GFxSprite * this /* r27 */, char * methodName /* r28 */, class GASValue * presult /* r29 */, char * methodArgFmt /* r30 */, class __va_list_struct * args /* r31 */) {
}
// Range: 0x80544240 -> 0x80544258
bool GFxSprite::ActsAsButton() const {
}
// signature: GFxSprite::SetHasButtonHandlers(bool)
// Range: 0x80544260 -> 0x80544274
void GFxSprite::SetHasButtonHandlers() {
}
// Range: 0x80544280 -> 0x8054465C
bool GFxSprite::PointTestLocal(class GFxSprite * this /* r29 */, class GPoint & pt /* r30 */, bool testShape /* r31 */) const {
    // Local variables
    int i; // r26
    class garray hitTest; // r1+0x30
    class GMatrix2D m; // r1+0x88
    class GPoint p; // r1+0x10

    {
        // Range: 0x80544340 -> 0x805443EC
        // Local variables
        class GPoint p; // r1+0x18
        class GMatrix2D matrix; // r1+0xA0
    }
}
// Range: 0x80544660 -> 0x805446E8
void GFxSprite::VisitMembers(class GFxSprite * this /* r28 */, class GASStringContext * psc /* r29 */, class MemberVisitor * pvisitor /* r30 */, unsigned int visitFlags /* r31 */) const {
}
// signature: GFxSprite::DeleteMember(GASStringContext *, const GASString &)
// Range: 0x805446F0 -> 0x80544744
bool GFxSprite::DeleteMember(class GFxSprite * this /* r30 */, class GASString & name /* r31 */) {
}
// Range: 0x80544750 -> 0x80544758
class GASObject * GFxSprite::GetASObject() {
}
// Range: 0x80544760 -> 0x80544768
class GASObject * GFxSprite::GetASObject() const {
}
// Range: 0x80544770 -> 0x80544808
bool GFxSprite::IsTabable(class GFxSprite * this /* r31 */) const {
}
// Range: 0x80544810 -> 0x8054484C
bool GFxSprite::IsFocusEnabled() const {
}
// Range: 0x80544850 -> 0x80544C24
void GFxSprite::FillTabableArray(class GFxSprite * this /* r22 */, class garray & array /* r23 */, bool * tabIndexed /* r24 */) {
    // Local variables
    unsigned int i; // r26
    unsigned int n; // r25
}
// Range: 0x80544C30 -> 0x80544CD0
void GFxSprite::OnGettingKeyboardFocus(class GFxSprite * this /* r31 */) {
}
// Range: 0x80544CD0 -> 0x80544D90
void GFxSprite::OnLosingKeyboardFocus(class GFxSprite * this /* r31 */) {
}
// signature: GFxSprite::OnInsertionAsLevel(int)
// Range: 0x80544D90 -> 0x80544E18
void GFxSprite::OnInsertionAsLevel(class GFxSprite * this /* r31 */) {
    {
        // Range: 0x80544DB8 -> 0x80544E04
        // Local variables
        class GFxASCharacter * _level0; // r0
    }
}
// Range: 0x80544E20 -> 0x80544F10
unsigned int GFxSprite::GetCursorType(class GFxSprite * this /* r30 */) const {
    {
        // Range: 0x80544E3C -> 0x80544EF4
        // Local variables
        class GASValue val; // r1+0x8
        class GASEnvironment * penv; // r31
    }
}
// Range: 0x80544F30 -> 0x80545028
void GFxSprite::SetMask(class GFxSprite * this /* r30 */, class GFxSprite * pmaskSprite /* r31 */) {
}
// Range: 0x80545030 -> 0x805450D0
static void GFx_SpritePlay(class GASFnCall & fn /* r30 */) {
}
// Range: 0x805450D0 -> 0x80545170
static void GFx_SpriteStop(class GASFnCall & fn /* r30 */) {
}
// Range: 0x80545170 -> 0x805452F8
static void GFx_SpriteGotoAndPlay(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASValue & arg; // r3
    unsigned int targetFrame; // r1+0xC

    {
        // Range: 0x80545218 -> 0x80545284
        // Local variables
        class GASString sa0; // r1+0x8
    }
}
// Range: 0x80545320 -> 0x805454A8
static void GFx_SpriteGotoAndStop(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASValue & arg; // r3
    unsigned int targetFrame; // r1+0xC

    {
        // Range: 0x805453C8 -> 0x80545434
        // Local variables
        class GASString sa0; // r1+0x8
    }
}
// Range: 0x805454B0 -> 0x805455D0
static void GFx_SpriteNextFrame(class GASFnCall & fn /* r30 */) {
    // Local variables
    int currentFrame; // r0
}
// Range: 0x805455D0 -> 0x805456A8
static void GFx_SpritePrevFrame(class GASFnCall & fn /* r30 */) {
    // Local variables
    int currentFrame; // r0
}
// Range: 0x805456B0 -> 0x805457B0
static void GFx_SpriteGetBytesLoaded(class GASFnCall & fn /* r31 */) {
}
// Range: 0x805457B0 -> 0x80545898
static void GFx_SpriteGetBytesTotal(class GASFnCall & fn /* r31 */) {
}
// Range: 0x805458A0 -> 0x80545A44
static void GFx_SpriteDuplicateMovieClip(class GASFnCall & fn /* r29 */) {
}
// Range: 0x80545A50 -> 0x8054609C
static void GFx_SpriteAttachMovie(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GFxSprite * psprite; // r31
    class GASString sa0; // r1+0x18
    class GFxResourceBindData resBindData; // r1+0x28
    class GFxCharacterCreateInfo ccinfo; // r1+0x20
    class garray DummyEventHandlers; // r1+0x30
    class GFxCharPosInfo pos; // r1+0x40

    {
        // Range: 0x80545F2C -> 0x80545F50
        // Local variables
        class GFxASCharacter * pspriteCh; // r0
    }

    // References
    // -> class Cxform Identity;
    // -> class GMatrix2D Identity;
}
// Range: 0x805460A0 -> 0x805466BC
static void GFx_SpriteAttachBitmap(class GASFnCall & fn /* r27 */) {
    // Local variables
    class GFxCharPosInfo pos; // r1+0xB0
    class GFxMovieRoot * pmroot; // r25

    {
        // Range: 0x80546364 -> 0x8054662C
        {
            // Range: 0x805463D4 -> 0x8054658C
            // Local variables
            class garray emptyEvents; // r1+0x18
            class GASString emptyName; // r1+0x14
            class GFxCharPosInfo locpos; // r1+0x60
        }
    }

    // References
    // -> class Cxform Identity;
    // -> class GMatrix2D Identity;
}
// Range: 0x805466C0 -> 0x80546A50
static void GFx_SpriteCreateEmptyMovieClip(class GASFnCall & fn /* r29 */) {
    // Local variables
    class garray DummyEventHandlers; // r1+0x14
    class GFxCharPosInfo pos; // r1+0x20
    class GFxASCharacter * pspriteCh; // r0

    // References
    // -> class Cxform Identity;
    // -> class GMatrix2D Identity;
}
// Range: 0x80546A50 -> 0x80546E94
static void GFx_SpriteCreateTextField(class GASFnCall & fn /* r29 */) {
    // Local variables
    class garray DummyEventHandlers; // r1+0x14
    class GFxCharPosInfo pos; // r1+0x20
    class GFxASCharacter * ptextCh; // r27

    // References
    // -> class Cxform Identity;
    // -> class GMatrix2D Identity;
}
// Range: 0x80546EA0 -> 0x80546F70
static void GFx_SpriteRemoveMovieClip(class GASFnCall & fn /* r30 */) {
}
// Range: 0x80546F70 -> 0x8054707C
static void GFx_SpriteSetMask(class GASFnCall & fn /* r30 */) {
    {
        // Range: 0x80547020 -> 0x80547064
        // Local variables
        class GFxASCharacter * pobj; // r0

        {
            // Range: 0x80547038 -> 0x80547054
            // Local variables
            class GFxSprite * pmaskSpr; // r0
        }
    }
}
// Range: 0x80547080 -> 0x805473C8
static void GFx_SpriteGetBounds(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GRect b; // r1+0x68
    class GMatrix2D matrix; // r1+0xC0
}
// Range: 0x805473D0 -> 0x80547684
static void GFx_SpriteLocalToGlobal(class GASFnCall & fn /* r27 */) {
    // Local variables
    class GASObjectInterface * pobj; // r28
    class GASValue xval; // r1+0x50
    class GASValue yval; // r1+0x40
    class GPoint pt; // r1+0x18
}
// Range: 0x80547690 -> 0x80547948
static void GFx_SpriteGlobalToLocal(class GASFnCall & fn /* r27 */) {
    // Local variables
    class GASObjectInterface * pobj; // r28
    class GASValue xval; // r1+0x50
    class GASValue yval; // r1+0x40
    class GPoint pt; // r1+0x18
}
// Range: 0x80547950 -> 0x80547DE0
static void GFx_SpriteHitTest(class GASFnCall & fn /* r31 */) {
    // Local variables
    class GRect spriteLocalBounds; // r1+0x60

    {
        // Range: 0x80547A40 -> 0x80547BB8
        // Local variables
        class GPoint ptSpr; // r1+0x10
        bool shapeFlag; // r0
        class GPoint pt; // r1+0x18
    }
    {
        // Range: 0x80547BBC -> 0x80547DB8
        // Local variables
        class GRect targetWorldRect; // r1+0x20
        class GRect spriteWorldRect; // r1+0x30
        class GRect targetLocalRect; // r1+0x40
        class GFxSprite * ptarget; // r29
        class GASValue & arg; // r3

        {
            // Range: 0x80547BD0 -> 0x80547C04
            // Local variables
            class GFxASCharacter * pchar; // r0
        }
        {
            // Range: 0x80547C04 -> 0x80547C74
            // Local variables
            class GASValue result; // r1+0x50
            class GASString varName; // r1+0x8

            {
                // Range: 0x80547C24 -> 0x80547C74
                // Local variables
                class GFxASCharacter * pchar; // r0
            }
        }
    }
}
// Range: 0x80547DE0 -> 0x80547FCC
void GFxSprite::SpriteSwapDepths(class GASFnCall & fn /* r26 */) {
    // Local variables
    class GFxSprite * pparent; // r29
    class GASValue & arg; // r28
    int depth2; // r28
    class GFxASCharacter * ptarget; // r27
}
// Range: 0x80547FD0 -> 0x805480AC
static void GFx_SpriteGetNextHighestDepth(class GASFnCall & fn /* r30 */) {
}
// Range: 0x805480B0 -> 0x805481B8
static void GFx_SpriteGetInstanceAtDepth(class GASFnCall & fn /* r30 */) {
}
// Range: 0x805481C0 -> 0x80548294
static void GFx_SpriteGetSWFVersion(class GASFnCall & fn /* r31 */) {
}
// Range: 0x805482A0 -> 0x80548494
static void GFx_SpriteStartDrag(class GASFnCall & fn /* r29 */) {
    // Local variables
    class DragState st; // r1+0x8
    bool lockCenter; // r30
}
// Range: 0x805484A0 -> 0x80548544
static void GFx_SpriteStopDrag(class GASFnCall & fn /* r30 */) {
}
// Range: 0x80548550 -> 0x80548700
static void GFx_SpriteLoadMovie(class GASFnCall & fn /* r28 */) {
    {
        // Range: 0x805485CC -> 0x805486CC
        // Local variables
        class GASString urlStr; // r1+0xC
        enum LoadMethod lm; // r29

        {
            // Range: 0x805485D4 -> 0x80548668
            // Local variables
            class GASString str; // r1+0x10
        }
    }
}
// Range: 0x80548700 -> 0x805487B0
static void GFx_SpriteUnloadMovie(class GASFnCall & fn /* r30 */) {
}
// Range: 0x805487B0 -> 0x8054895C
static void GFx_SpriteLoadVariables(class GASFnCall & fn /* r28 */) {
    {
        // Range: 0x8054882C -> 0x80548928
        // Local variables
        class GASString urlStr; // r1+0xC
        enum LoadMethod lm; // r29

        {
            // Range: 0x80548834 -> 0x805488C8
            // Local variables
            class GASString str; // r1+0x10
        }
    }
}
// Range: 0x80548960 -> 0x805489F8
static void GFx_SpriteClear(class GASFnCall & fn /* r30 */) {
}
// Range: 0x80548A00 -> 0x80548C28
static void GFx_SpriteBeginFill(class GASFnCall & fn /* r30 */) {
    {
        // Range: 0x80548A74 -> 0x80548B88
        // Local variables
        unsigned int rgba; // r29

        {
            // Range: 0x80548A98 -> 0x80548B04
            // Local variables
            float alpha; // f0
        }
    }
}
// Range: 0x80548C30 -> 0x805499B0
static void GFx_SpriteCreateGradient(class GASFnCall & fn /* r24 */, class GFxFillStyle * fillStyle /* r25 */) {
    // Local variables
    class GASObject * arg; // r26

    {
        // Range: 0x80548C74 -> 0x80549954
        // Local variables
        class GASString fillTypeStr; // r1+0x74

        {
            // Range: 0x80548CA4 -> 0x80549954
            // Local variables
            class GASArrayObject * colors; // r0

            {
                // Range: 0x80548CDC -> 0x80549954
                // Local variables
                class GASArrayObject * alphas; // r0

                {
                    // Range: 0x80548D14 -> 0x80549954
                    // Local variables
                    class GASArrayObject * ratios; // r0

                    {
                        // Range: 0x80548D4C -> 0x8054991C
                        // Local variables
                        enum GFxFillType fillType; // r31
                        float focalPointRatio; // f26
                        bool linearRGB; // r29
                        class GASValue v; // r1+0x78
                        class GMatrix2D matrix; // r1+0xB8

                        {
                            // Range: 0x80548E04 -> 0x805492BC
                            // Local variables
                            float r; // f26
                            float h; // f28
                            float w; // f29
                            float y; // f30
                            float x; // f31
                        }
                        {
                            // Range: 0x80549688 -> 0x8054978C
                            // Local variables
                            class GASString str; // r1+0x70
                        }
                        {
                            // Range: 0x80549824 -> 0x805498DC
                            // Local variables
                            int i; // r29

                            {
                                // Range: 0x80549824 -> 0x805498DC
                                // Local variables
                                float ratio; // f0
                                float alpha; // f1
                                unsigned int rgba; // r21
                            }
                        }
                    }
                }
            }
        }
    }
}
// Range: 0x805499B0 -> 0x80549AD4
static void GFx_SpriteBeginGradientFill(class GASFnCall & fn /* r29 */) {
}
// Range: 0x80549AE0 -> 0x80549C04
static void GFx_SpriteLineGradientStyle(class GASFnCall & fn /* r29 */) {
}
// Range: 0x80549C10 -> 0x80549EF4
static void GFx_SpriteBeginBitmapFill(class GASFnCall & fn /* r25 */) {
    {
        // Range: 0x80549C80 -> 0x80549EBC
        // Local variables
        enum GFxFillType fillType; // r26
        bool smoothing; // r27
        bool repeat; // r28
        class GMatrix2D matrix; // r1+0x20

        {
            // Range: 0x80549D38 -> 0x80549E00
            // Local variables
            class GASObject * arg; // r26
        }
    }
}
// Range: 0x80549F00 -> 0x8054A008
static void GFx_SpriteEndFill(class GASFnCall & fn /* r30 */) {
}
// Range: 0x8054A010 -> 0x8054A514
static void GFx_SpriteLineStyle(class GASFnCall & fn /* r25 */) {
    {
        // Range: 0x8054A090 -> 0x8054A468
        // Local variables
        float miterLimit; // f30
        enum LineStyle joins; // r26
        enum LineStyle caps; // r27
        enum LineStyle scaling; // r28
        bool hinting; // r29
        unsigned int rgba; // r30
        float lineWidth; // f31

        {
            // Range: 0x8054A0F0 -> 0x8054A3C8
            // Local variables
            float alpha; // f0

            {
                // Range: 0x8054A17C -> 0x8054A3B4
                // Local variables
                class GASString str; // r1+0x10
            }
        }
    }
}
// Range: 0x8054A520 -> 0x8054A690
static void GFx_SpriteMoveTo(class GASFnCall & fn /* r30 */) {
    {
        // Range: 0x8054A5A0 -> 0x8054A668
        // Local variables
        float y; // f30
        float x; // f31
    }
}
// Range: 0x8054A690 -> 0x8054A7F4
static void GFx_SpriteLineTo(class GASFnCall & fn /* r30 */) {
    {
        // Range: 0x8054A710 -> 0x8054A7CC
        // Local variables
        float y; // f30
        float x; // f31
    }
}
// Range: 0x8054A800 -> 0x8054A9BC
static void GFx_SpriteCurveTo(class GASFnCall & fn /* r30 */) {
    {
        // Range: 0x8054A890 -> 0x8054A984
        // Local variables
        float ay; // f28
        float ax; // f29
        float cy; // f30
        float cx; // f31
    }
}
// Range: 0x8054A9C0 -> 0x8054A9D0
void GASMovieClipObject::commonInit() {
}
// Range: 0x8054A9D0 -> 0x8054ABA0
void GASMovieClipObject::TrackMemberButtonHandler(class GASMovieClipObject * this /* r30 */, class GASStringContext * psc /* r28 */, class GASString & name /* r29 */, bool deleteFlag /* r31 */) {
    {
        // Range: 0x8054AA04 -> 0x8054AB6C
        // Local variables
        class GASValue val; // r1+0x8
    }
}
// Range: 0x8054ABA0 -> 0x8054AD04
void GASMovieClipObject::Set__proto__(class GASMovieClipObject * this /* r29 */, class GASStringContext * psc /* r30 */, class GASObject * protoObj /* r31 */) {
    {
        // Range: 0x8054AC54 -> 0x8054ACC0
        // Local variables
        class MemberVisitor visitor; // r1+0x20
    }

    // References
    // -> struct {} __vt__Q218GASMovieClipObject32MemberVisitor;
}
// signature: GASMovieClipObject::MemberVisitor::Visit(const GASString &, const GASValue &, unsigned char)
// Range: 0x8054C690 -> 0x8054C760
void GASMovieClipObject::MemberVisitor::Visit() {
}
// Range: 0x8054AD90 -> 0x8054B0FC
bool GASMovieClipObject::ActsAsButton(class GASMovieClipObject * this /* r31 */) const {
    {
        // Range: 0x8054ADC8 -> 0x8054B0D4
        // Local variables
        class GASObject * pproto; // r30

        {
            // Range: 0x8054ADD0 -> 0x8054B0D4
            // Local variables
            class GASMovieClipProto * proto; // r0
        }
    }
}
// Range: 0x8054B100 -> 0x8054B1CC
bool GASMovieClipObject::SetMember(class GASMovieClipObject * this /* r26 */, class GASEnvironment * penv /* r27 */, class GASString & name /* r28 */, class GASValue & val /* r29 */, class GASPropFlags & flags /* r30 */) {
    // Local variables
    class GPtr spr; // r1+0x8
}
// Range: 0x8054B280 -> 0x8054B2D8
bool GASMovieClipObject::DeleteMember(class GASMovieClipObject * this /* r29 */, class GASStringContext * psc /* r30 */, class GASString & name /* r31 */) {
}
// Range: 0x8054B2E0 -> 0x8054B4A8
void GASMovieClipObject::ForceShutdown() {
    {
        // Range: 0x8054B2FC -> 0x8054B368
        {
            // Range: 0x8054B2FC -> 0x8054B368
            // Local variables
            class GASValue & value; // r0
        }
    }
}
// Range: 0x8054B4B0 -> 0x8054B89C
void * GASMovieClipProto::GASMovieClipProto(class GASMovieClipProto * this /* r29 */, class GASStringContext * psc /* r30 */, class GASObject * prototype /* r31 */, class GASFunctionRef & constructor /* r25 */) {
    // References
    // -> static class GASNameFunction MovieClipFunctionTable[40];
    // -> struct {} __vt__17GASMovieClipProto;
    // -> struct {} __vt__Q218GASMovieClipObject32MemberVisitor;
    // -> struct {} __vt__51GASPrototype<18GASMovieClipObject,14GASEnvironment>;
}
// Range: 0x8054BA50 -> 0x8054BB14
void GASMovieClipProto::GlobalCtor(class GASFnCall & fn /* r30 */) {
    // References
    // -> struct {} __vt__18GASMovieClipObject;
}
