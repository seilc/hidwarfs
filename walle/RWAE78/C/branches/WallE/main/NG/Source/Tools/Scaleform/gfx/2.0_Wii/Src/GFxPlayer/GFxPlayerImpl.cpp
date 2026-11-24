/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxPlayerImpl.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80511B20 -> 0x80523108
*/
// total size: 0x8
class table {
    // Members
    unsigned long EntryCount; // offset 0x0, size 0x4
    unsigned long SizeMask; // offset 0x4, size 0x4
};
// total size: 0x10
class ActionQueueIterator {
    // Members
    int ModId; // offset 0x0, size 0x4
    class ActionQueueType * pActionQueue; // offset 0x4, size 0x4
    class ActionEntry * pLastEntry; // offset 0x8, size 0x4
    int CurrentPrio; // offset 0xC, size 0x4
};
// total size: 0x14
class ActionQueueSessionIterator : public ActionQueueIterator {
    // Members
    unsigned int SessionId; // offset 0x10, size 0x4
};
enum IdCode {
    Event_Invalid = 0,
    Event_Press = 1,
    Event_Release = 2,
    Event_ReleaseOutside = 3,
    Event_RollOver = 4,
    Event_RollOut = 5,
    Event_DragOver = 6,
    Event_DragOut = 7,
    Event_KeyPress = 8,
    Event_Initialize = 9,
    Event_Load = 10,
    Event_Unload = 11,
    Event_EnterFrame = 12,
    Event_MouseDown = 13,
    Event_MouseUp = 14,
    Event_MouseMove = 15,
    Event_KeyDown = 16,
    Event_KeyUp = 17,
    Event_Data = 18,
    Event_Construct = 19,
    Event_LoadStart = 20,
    Event_LoadError = 21,
    Event_LoadProgress = 22,
    Event_LoadInit = 23,
    Event_SockClose = 24,
    Event_SockConnect = 25,
    Event_SockData = 26,
    Event_SockXML = 27,
    Event_XMLLoad = 28,
    Event_XMLData = 29,
    Event_COUNT = 30,
};
// total size: 0x18
class ProcessFocusKeyInfo {
    // Members
    class GPtr CurFocused; // offset 0x0, size 0x4
    int CurFocusIdx; // offset 0x4, size 0x4
    class garray TabableArray; // offset 0x8, size 0xC
    bool TabIndexed; // offset 0x14, size 0x1
    bool Initialized; // offset 0x15, size 0x1
};
// total size: 0xC
class garray : public garray_base {};
// total size: 0xC
class garray_base {
    // Members
    class GPtr * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
enum HitTestType {
    HitTest_Bounds = 0,
    HitTest_Shapes = 1,
    HitTest_ButtonEvents = 2,
};
enum SetVarType {
    SV_Normal = 0,
    SV_Sticky = 1,
    SV_Permanent = 2,
};
enum SetArrayType {
    SA_Int = 0,
    SA_Double = 1,
    SA_Float = 2,
    SA_String = 3,
    SA_StringW = 4,
    SA_Value = 5,
};
// total size: 0x20
class StickyVarNode : public GNewOverrideBase {
    // Members
    class GASString Name; // offset 0x0, size 0x4
    class GASValue Value; // offset 0x8, size 0x10
    class StickyVarNode * pNext; // offset 0x18, size 0x4
    bool Permanent; // offset 0x1C, size 0x1
};
// total size: 0x8
class node_ref {
    // Members
    class GASString * pfirst; // offset 0x0, size 0x4
    class StickyVarNode * * psecond; // offset 0x4, size 0x4
};
// total size: 0x8
class ghash_node {
    // Members
    class GASString first; // offset 0x0, size 0x4
    class StickyVarNode * second; // offset 0x4, size 0x4
};
// total size: 0xC
class ghashset_entry {
    // Members
    long Next_in_chain; // offset 0x0, size 0x4
    class ghash_node value; // offset 0x4, size 0x8
};
// total size: 0x1
class GASTabIndexSortFunctor {};
// total size: 0x1
class GASAutoTabSortFunctor {};
// total size: 0x4
class VertexXY16i {
    // Members
    short x; // offset 0x0, size 0x2
    short y; // offset 0x2, size 0x2
};
// total size: 0xC
class GFxRemoveObject2 : public GASExecuteTag {
    // Members
    int Depth; // offset 0x4, size 0x4
    class GFxResourceId Id; // offset 0x8, size 0x4
};
// total size: 0x8
class GFxSetBackgroundColor : public GASExecuteTag {
    // Members
    class GColor Color; // offset 0x4, size 0x4
};
unsigned int LastSessionId; // size: 0x4, address: 0x808DEC20
static enum StateType stateQuery[5]; // size: 0x14, address: 0x806E8350
static class GASTabIndexSortFunctor sf; // size: 0x1, address: 0x808DEC24
static class GASAutoTabSortFunctor sf; // size: 0x1, address: 0x808DEC28
static unsigned short indices[24]; // size: 0x30, address: 0x806E8368
static class GFxEventId CodeBits[19]; // size: 0xE4, address: 0x80871B30
struct {} __vt__12GFxMovieRoot; // size: 0xD4, address: 0x8073A4A4
struct {} __vt__21GFxSetBackgroundColor; // size: 0x2C, address: 0x8073A578
struct {} __vt__16GFxRemoveObject2; // size: 0x2C, address: 0x8073A5A4
struct {} __vt__15GFxPlaceObject2; // size: 0x2C, address: 0x8073A5D0
struct {} __vt__13GFxTextFilter; // size: 0xC, address: 0x8073A628
struct {} __vt__30GRefCountBase<13GFxTextFilter>; // size: 0xC, address: 0x8073A634
struct {} __vt__12GFxMovieView; // size: 0xC8, address: 0x8073A6E8
struct {} __vt__8GFxMovie; // size: 0x58, address: 0x8073A7B0
struct {} __vt__24GRefCountBase<8GFxMovie>; // size: 0xC, address: 0x8073A808
// Range: 0x80511B20 -> 0x80511EF8
void * GFxMovieRoot::GFxMovieRoot(class GFxMovieRoot * this /* r31 */) {
    // References
    // -> struct {} __vt__18GFxSharedStateImpl;
    // -> struct {} __vt__12GFxMovieRoot;
}
// Range: 0x805121D0 -> 0x80512888
void * GFxMovieRoot::~GFxMovieRoot(class GFxMovieRoot * this /* r28 */) {
    // Local variables
    unsigned long i; // r26

    {
        // Range: 0x805123D4 -> 0x8051247C
        // Local variables
        class GFxLoadQueueEntry * pentry; // r26
    }

    // References
    // -> struct {} __vt__12GFxMovieRoot;
}
// signature: GFxMovieRoot::GetLevelMovie(int) const
// Range: 0x80512890 -> 0x805128DC
class GFxSprite * GFxMovieRoot::GetLevelMovie() const {
    {
        // Range: 0x80512894 -> 0x805128CC
        // Local variables
        unsigned int i; // r7
    }
}
// Range: 0x805128E0 -> 0x80512DA4
bool GFxMovieRoot::SetLevelMovie(class GFxMovieRoot * this /* r26 */, int level /* r27 */, class GFxSprite * psprite /* r28 */) {
    // Local variables
    unsigned int i; // r29
    class LevelInfo li; // r1+0x8

    {
        // Range: 0x80512C5C -> 0x80512D58
        // Local variables
        class GViewport desc; // r1+0x10
        class GFxMovieDefImpl * pdef; // r24
    }
}
// signature: GFxMovieRoot::ReleaseLevelMovie(int)
// Range: 0x80512DB0 -> 0x80513124
bool GFxMovieRoot::ReleaseLevelMovie(class GFxMovieRoot * this /* r29 */) {
    {
        // Range: 0x80512F54 -> 0x80513100
        // Local variables
        unsigned int i; // r30
    }
}
// Range: 0x80513130 -> 0x80513188
class GFxASCharacter * GFxMovieRoot::FindTarget(class GASString & path /* r31 */) const {
}
// signature: GFxMovieRoot::ParseLevelName(const char *, const char **, bool)
// Range: 0x80513190 -> 0x805132DC
int GFxMovieRoot::ParseLevelName(char * * ptail /* r31 */) {
    // Local variables
    char * ptail2; // r1+0x8
    int level; // r0
}
// Range: 0x805132E0 -> 0x80513380
class GASString GFxMovieRoot::CreateNewInstanceName(class GFxMovieRoot * this /* r31 */) {
    // Local variables
    char pbuffer[48]; // r1+0x8
}
// Range: 0x80513380 -> 0x805136C4
void GFxMovieRoot::AddLoadQueueEntry(class GFxMovieRoot * this /* r27 */, char * ptarget /* r25 */, char * purl /* r28 */, enum LoadMethod method /* r29 */) {
    // Local variables
    class GFxLoadQueueEntry * pentry; // r31
    int level; // r30
    class GFxASCharacter * ptargetChar; // r26
    class GFxSprite * ptargetSprite; // r0

    {
        // Range: 0x80513544 -> 0x80513590
        // Local variables
        char * ptail; // r1+0x14
    }
}
// Range: 0x805136D0 -> 0x805139F4
void GFxMovieRoot::AddVarLoadQueueEntry(class GFxMovieRoot * this /* r27 */, char * ptarget /* r25 */, char * purl /* r28 */, enum LoadMethod method /* r29 */) {
    // Local variables
    class GFxLoadQueueEntry * pentry; // r31
    int level; // r30
    class GFxASCharacter * ptargetChar; // r26
    class GFxSprite * ptargetSprite; // r0

    {
        // Range: 0x80513884 -> 0x805138D0
        // Local variables
        char * ptail; // r1+0x14
    }
}
// Range: 0x80513A00 -> 0x80513CA4
void GFxMovieRoot::AddLoadQueueEntry(class GFxMovieRoot * this /* r28 */, class GFxASCharacter * ptargetChar /* r24 */, char * purl /* r25 */, enum LoadMethod method /* r29 */, class GASMovieClipLoader * pmovieClipLoader /* r30 */) {
    // Local variables
    class GFxLoadQueueEntry * pentry; // r31
    int level; // r27
    class GFxSprite * ptargetSprite; // r0
}
// Range: 0x80513CB0 -> 0x80513F14
void GFxMovieRoot::AddVarLoadQueueEntry(class GFxMovieRoot * this /* r29 */, class GFxASCharacter * ptargetChar /* r25 */, char * purl /* r26 */, enum LoadMethod method /* r30 */) {
    // Local variables
    class GFxLoadQueueEntry * pentry; // r31
    int level; // r28
    class GFxSprite * ptargetSprite; // r0
}
// Range: 0x80513F20 -> 0x8051406C
void GFxMovieRoot::AddVarLoadQueueEntry(class GFxMovieRoot * this /* r31 */, class GASLoadVarsObject * ploadVars /* r26 */, char * purl /* r27 */, enum LoadMethod method /* r28 */) {
    // Local variables
    class GFxLoadQueueEntry * pentry; // r0
}
// Range: 0x80514070 -> 0x80514284
class GFxMovieDefImpl * GFxMovieRoot::CreateImageMovieDef(class GFxMovieRoot * this /* r24 */, class GFxImageResource * pimageResource /* r25 */, bool bilinear /* r26 */, char * purl /* r27 */, class GFxLoadStates * pls /* r28 */) {
    // Local variables
    class GFxMovieDefImpl * pdefImpl; // r29

    {
        // Range: 0x80514124 -> 0x80514214
        // Local variables
        class GFxResourceKey createKey; // r1+0x8
    }
}
// Range: 0x80514290 -> 0x80515A00
void GFxMovieRoot::ProcessLoadQueue(class GFxMovieRoot * this /* r24 */) {
    {
        // Range: 0x805142B0 -> 0x805158D4
        // Local variables
        int filelength; // r27
        bool loadVars; // r25
        bool stripped; // r15
        class GFxString level0Path; // r1+0x30
        unsigned int loadFlags; // r0
        class GPtr pimageLoader; // r1+0x34
        class GFxLog * plog; // r28
        class GFxASCharacter * pparent; // r29
        class GFxString urlStrGfx; // r1+0x38
        class GFxString url; // r1+0x3C
        class GFxLoadQueueEntry * pentry; // r30

        {
            // Range: 0x805142B0 -> 0x805142B0
            // Local variables
            class GFxString data; // r1+0x2C

            {
                // Range: 0x805142B0 -> 0x805142B0
                {
                    // Range: 0x805142B0 -> 0x805142B0
                    // Local variables
                    class GFxString fileName; // r1+0x28
                    class LocationInfo loc; // r1+0x68

                    {
                        // Range: 0x805142B0 -> 0x805142B0
                        // Local variables
                        class GASLoadVarsObject * ploadVars; // r0
                    }
                    {
                        // Range: 0x805142B0 -> 0x805142B0
                        // Local variables
                        class GFxResourceKey createKey; // r1+0x48
                    }
                }
            }
            {
                // Range: 0x805142B0 -> 0x805142B0
                // Local variables
                class GASLoadVarsObject * ploadVars; // r0
                class GASString str; // r1+0x24
                class GASEnvironment * penv; // r15
            }
        }
        {
            // Range: 0x805142B0 -> 0x80515834
            // Local variables
            bool charIsLoadedSuccessfully; // r15

            {
                // Range: 0x805142B0 -> 0x805155EC
                // Local variables
                bool userImageProtocol; // r25
                bool bilinearImage; // r26

                {
                    // Range: 0x805142B0 -> 0x805142B0
                    // Local variables
                    class GFxString urlLowerCase; // r1+0x20
                }
                {
                    // Range: 0x805142B0 -> 0x805142B0
                    // Local variables
                    class LocationInfo loc; // r1+0x5C
                }
                {
                    // Range: 0x805142B4 -> 0x805142B4
                    // Local variables
                    class LocationInfo loc; // r1+0x50
                }
            }
            {
                // Range: 0x80515688 -> 0x80515700
                // Local variables
                class GFxCharacterCreateInfo ccinfo; // r1+0x40
            }
            {
                // Range: 0x80515784 -> 0x80515834
                // Local variables
                class GASMovieClipLoader * pmovieClipLoader; // r15
                class GASEnvironment * penv; // r16
            }
        }
    }
}
// Range: 0x80515A00 -> 0x80515A88
bool GFxMovieRoot::GetLevel0Path(class GFxString * ppath /* r31 */) const {
}
// signature: GFxMovieRoot::DragState::InitCenterDelta(bool)
// Range: 0x80515A90 -> 0x80515C0C
void GFxMovieRoot::DragState::InitCenterDelta(class DragState * this /* r29 */) {
    {
        // Range: 0x80515A9C -> 0x80515BE8
        // Local variables
        class GMatrix2D local; // r1+0x40
        class GPoint parentMouse; // r1+0x18
        class GPoint worldMouse; // r1+0x20
        int buttons; // r1+0x8
        int y; // r1+0xC
        int x; // r1+0x10
        class GFxCharacter * pchar; // r30
        class GMatrix2D parentWorldMat; // r1+0x58
    }
}
// Range: 0x80515C10 -> 0x80515C84
void * GFxMovieRoot::ActionQueueType::ActionQueueType() {
    // References
    // -> unsigned int LastSessionId;
}
// Range: 0x80515C90 -> 0x80515D4C
void * GFxMovieRoot::ActionQueueType::~ActionQueueType(class ActionQueueType * this /* r28 */) {
    {
        // Range: 0x80515CC0 -> 0x80515D10
        // Local variables
        class ActionEntry * pcur; // r31

        {
            // Range: 0x80515CC0 -> 0x80515D10
            // Local variables
            class ActionEntry * pnext; // r30
        }
    }
}
// Range: 0x80515D50 -> 0x80515E28
void GFxMovieRoot::ActionQueueType::FlushOnLoadQueues() {
    // Local variables
    class ActionQueueEntry & actionQueueEntry; // r0
}
// Range: 0x80515E30 -> 0x80515F94
class ActionEntry * GFxMovieRoot::ActionQueueType::InsertEntry(class ActionQueueType * this /* r31 */, enum Priority prio /* r28 */) {
    // Local variables
    class ActionEntry * p; // r29
    class ActionQueueEntry & actionQueueEntry; // r4
}
// Range: 0x80515FA0 -> 0x80516124
void GFxMovieRoot::ActionQueueType::AddToFreeList(class ActionQueueType * this /* r30 */, class ActionEntry * pentry /* r31 */) {
}
// Range: 0x80516130 -> 0x80516174
void GFxMovieRoot::ActionQueueType::Clear() {
    // Local variables
    class ActionQueueIterator iter; // r1+0x8
}
// signature: GFxMovieRoot::ActionQueueType::StartNewSession(unsigned int *)
// Range: 0x80516180 -> 0x805161A8
unsigned int GFxMovieRoot::ActionQueueType::StartNewSession() {
    // References
    // -> unsigned int LastSessionId;
}
// signature: GFxMovieRoot::ActionQueueIterator::ActionQueueIterator(GFxMovieRoot::ActionQueueType *)
// Range: 0x805161B0 -> 0x805161C8
void * GFxMovieRoot::ActionQueueIterator::ActionQueueIterator() {
}
// Range: 0x805161D0 -> 0x80516234
void * GFxMovieRoot::ActionQueueIterator::~ActionQueueIterator(class ActionQueueIterator * this /* r30 */) {
}
// Range: 0x80516240 -> 0x80516378
class ActionEntry * GFxMovieRoot::ActionQueueIterator::getNext(class ActionQueueIterator * this /* r30 */) {
    // Local variables
    class ActionEntry * pcurEntry; // r31
}
// Range: 0x80516380 -> 0x805164D0
class ActionEntry * GFxMovieRoot::ActionQueueSessionIterator::getNext(class ActionQueueSessionIterator * this /* r30 */) {
    // Local variables
    class ActionEntry * pcurEntry; // r31

    {
        // Range: 0x805163D0 -> 0x80516484
        // Local variables
        class ActionEntry * pprevEntry; // r7
    }
}
// Range: 0x805164D0 -> 0x80516538
void GFxMovieRoot::DoActions(class GFxMovieRoot * this /* r31 */) {
    // Local variables
    class ActionQueueIterator iter; // r1+0x8
    class ActionEntry * paction; // r3
}
// signature: GFxMovieRoot::DoActionsForSession(unsigned int)
// Range: 0x80516540 -> 0x805165AC
void GFxMovieRoot::DoActionsForSession(class GFxMovieRoot * this /* r31 */) {
    // Local variables
    class ActionQueueSessionIterator iter; // r1+0x8
    class ActionEntry * paction; // r3
}
// signature: GFxMovieRoot::ActionEntry::Execute(GFxMovieRoot *) const
// Range: 0x805165B0 -> 0x805166E8
void GFxMovieRoot::ActionEntry::Execute(class ActionEntry * this /* r30 */) const {
}
// signature: GFxMovieRoot::SetViewport(const GViewport &)
// Range: 0x805166F0 -> 0x80516964
void GFxMovieRoot::SetViewport(class GFxMovieRoot * this /* r29 */) {
    // Local variables
    int prevWidth; // r31
    int prevHeight; // r30
    float prevScale; // f31
    float prevRatio; // f30
}
// Range: 0x80516970 -> 0x80516FC0
void GFxMovieRoot::UpdateViewport(class GFxMovieRoot * this /* r31 */) {
    {
        // Range: 0x805169A8 -> 0x80516E90
        // Local variables
        float frameHeight; // f0
        float frameWidth; // f0
        float viewHeight; // f0
        float viewWidth; // f0
        class GRect viewportRect; // r1+0x28

        {
            // Range: 0x80516AA4 -> 0x80516D08
            // Local variables
            float scaledViewHieght; // f29
            float scaledViewWidth; // f30
        }
        {
            // Range: 0x80516D08 -> 0x80516E0C
            // Local variables
            float viewWidthWithRatio; // f6

            {
                // Range: 0x80516D0C -> 0x80516DA4
                // Local variables
                float visibleHeight; // f6
            }
            {
                // Range: 0x80516DA4 -> 0x80516E0C
                // Local variables
                float visibleWidth; // f5
            }
        }
    }
}
// signature: GFxMovieRoot::GetViewport(GViewport *) const
// Range: 0x80516FC0 -> 0x8051702C
void GFxMovieRoot::GetViewport() const {
}
// signature: GFxMovieRoot::SetViewScaleMode(GFxMovieView::ScaleModeType)
// Range: 0x80517030 -> 0x80517038
void GFxMovieRoot::SetViewScaleMode() {
}
// signature: GFxMovieRoot::SetViewAlignment(GFxMovieView::AlignType)
// Range: 0x80517040 -> 0x80517048
void GFxMovieRoot::SetViewAlignment() {
}
// Range: 0x80517050 -> 0x805170E4
class GFxASCharacter * GFxMovieRoot::GetTopMostEntity(class GFxMovieRoot * this /* r28 */, class GPoint & mousePos /* r29 */, bool testAll /* r30 */) {
    // Local variables
    class GFxASCharacter * ptopMouseCharacter; // r3

    {
        // Range: 0x80517078 -> 0x805170B8
        // Local variables
        int movieIndex; // r31
    }
}
// Range: 0x805170F0 -> 0x80517FCC
float GFxMovieRoot::Advance(class GFxMovieRoot * this /* r24 */, float deltaT /* f30 */, unsigned int frameCatchUpCount /* r25 */) {
    // Local variables
    unsigned int movieIndex; // r21
    class GFxState * pstates[5]; // r1+0xB8
    class GFxSpriteRootNode * pspriteNode; // r21
    float minDelta; // f31

    {
        // Range: 0x80517298 -> 0x80517298
        // Local variables
        class GFxMovieDefImpl * pspriteMovieDefImpl; // r0
    }
    {
        // Range: 0x805173A4 -> 0x80517548
        // Local variables
        unsigned int needCompress; // r26
        unsigned long i; // r23

        {
            // Range: 0x805173C8 -> 0x8051740C
            // Local variables
            float delta; // f0
        }
        {
            // Range: 0x80517424 -> 0x80517548
            // Local variables
            unsigned int j; // r26
        }
    }
    {
        // Range: 0x80517548 -> 0x80517C2C
        // Local variables
        class GPoint mousePos; // r1+0x28
        int lastState; // r26

        {
            // Range: 0x805176B0 -> 0x805177B4
            // Local variables
            enum IdCode buttonEvent; // r0
        }
        {
            // Range: 0x805177DC -> 0x805179CC
            // Local variables
            class GASEnvironment * penv; // r27

            {
                // Range: 0x80517870 -> 0x805179AC
                {
                    // Range: 0x80517928 -> 0x8051799C
                    // Local variables
                    unsigned int buttonId; // r22
                    unsigned int mask; // r21
                }
            }
        }
        {
            // Range: 0x805179D8 -> 0x80517BFC
            // Local variables
            unsigned int newCursorType; // r26

            {
                // Range: 0x80517A08 -> 0x80517BFC
                // Local variables
                class GASEnvironment * penv; // r27

                {
                    // Range: 0x80517A28 -> 0x80517BD4
                    // Local variables
                    class GASValue objVal; // r1+0x90

                    {
                        // Range: 0x80517A44 -> 0x80517BD4
                        // Local variables
                        class GASObject * pobj; // r0

                        {
                            // Range: 0x80517A78 -> 0x80517BC0
                            // Local variables
                            class GASValue scval; // r1+0x80

                            {
                                // Range: 0x80517A84 -> 0x80517BB8
                                // Local variables
                                class GASFunctionRef funcRef; // r1+0x70

                                {
                                    // Range: 0x80517AB8 -> 0x80517BA4
                                    // Local variables
                                    class GASValue res; // r1+0x60
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    {
        // Range: 0x80517C50 -> 0x80517DC0
        // Local variables
        class GPtr curFocused; // r1+0x1C
        class ProcessFocusKeyInfo focusKeyInfo; // r1+0xA0

        {
            // Range: 0x80517C78 -> 0x80517DA0
            // Local variables
            class GASEnvironment * penv; // r0
            int keyMask; // r1+0x10
            enum EventType event; // r1+0x14
            class GFxSpecialKeysState specialKeysState; // r1+0x8
            unsigned long wcharCode; // r1+0x18
            unsigned char asciiCode; // r1+0xC
            short code; // r1+0xE

            {
                // Range: 0x80517CC0 -> 0x80517D74
                // Local variables
                class GFxEventId eventId; // r1+0x54
                enum IdCode eventIdCode; // r0
            }
        }
    }
    {
        // Range: 0x80517DF8 -> 0x80517EF0
        // Local variables
        bool frameCatchUp; // r22

        {
            // Range: 0x80517E20 -> 0x80517EC8
            // Local variables
            float framePos; // f30
        }
    }
    {
        // Range: 0x80517EF0 -> 0x80517F5C
        // Local variables
        float framePos; // f30
    }

    // References
    // -> struct {} __vt__9GASFnCall;
    // -> static enum StateType stateQuery[5];
}
// Range: 0x80518150 -> 0x805183D4
void GFxMovieRoot::HandleEvent(class GFxMovieRoot * this /* r30 */, class GFxEvent & event /* r31 */) {
}
// signature: GFxMovieRoot::NotifyMouseState(int, int, int)
// Range: 0x805183E0 -> 0x80518480
void GFxMovieRoot::NotifyMouseState(int x /* r5 */, int y /* r4 */) {
}
// signature: GFxMovieRoot::GetMouseState(int *, int *, int *)
// Range: 0x80518480 -> 0x8051849C
void GFxMovieRoot::GetMouseState() {
}
// signature: GFxMovieRoot::HitTest(int, int, GFxMovieView::HitTestType)
// Range: 0x805184A0 -> 0x805186FC
bool GFxMovieRoot::HitTest(class GFxMovieRoot * this /* r26 */, enum HitTestType testCond /* r27 */) {
    // Local variables
    int mx; // r0
    int my; // r0
    unsigned int movieIndex; // r28

    {
        // Range: 0x80518510 -> 0x805186C4
        // Local variables
        class GPoint ptMv; // r1+0x8
        class GPoint pt; // r1+0x10
        class GRect movieLocalBounds; // r1+0x18
    }
}
// signature: GFxMovieRoot::EnableMouseSupport(bool)
// Range: 0x80518700 -> 0x80518710
bool GFxMovieRoot::EnableMouseSupport(class GFxMovieRoot * this /* r5 */) {
    // Local variables
    bool oldState; // r0
}
// Range: 0x80518710 -> 0x80518840
bool GFxMovieRoot::AttachDisplayCallback(char * pathToObject /* r31 */, void (* callback)(void *) /* r28 */, void * userPtr /* r29 */) {
    // Local variables
    class GASEnvironment * penv; // r30
    class GASValue obj; // r1+0x10

    {
        // Range: 0x80518768 -> 0x80518808
        // Local variables
        class GFxASCharacter * pchar; // r0
    }
}
// Range: 0x80518840 -> 0x805189B8
int GFxMovieRoot::AddIntervalTimer(class GFxMovieRoot * this /* r30 */, class GASIntervalTimer * timer /* r31 */) {
}
// signature: GFxMovieRoot::ClearIntervalTimer(int)
// Range: 0x805189C0 -> 0x80518A10
void GFxMovieRoot::ClearIntervalTimer() {
    {
        // Range: 0x805189C0 -> 0x80518A04
        // Local variables
        unsigned long n; // r0
        unsigned long i; // r8
    }
}
// Range: 0x80518A10 -> 0x80518B08
void GFxMovieRoot::ShutdownTimers(class GFxMovieRoot * this /* r27 */) {
    {
        // Range: 0x80518A24 -> 0x80518A9C
        // Local variables
        unsigned long n; // r28
        unsigned long i; // r29
    }
}
// Range: 0x80518B10 -> 0x80518B18
class GFxMovieDef * GFxMovieRoot::GetMovieDef() const {
}
// Range: 0x80518B20 -> 0x80518B44
unsigned int GFxMovieRoot::GetCurrentFrame() const {
}
// Range: 0x80518B60 -> 0x80518BAC
bool GFxMovieRoot::HasLooped() const {
}
// Range: 0x80518BC0 -> 0x80518DA8
void GFxMovieRoot::Restart(class GFxMovieRoot * this /* r29 */) {
}
// signature: GFxMovieRoot::GotoFrame(unsigned int)
// Range: 0x80518DB0 -> 0x80518DD0
void GFxMovieRoot::GotoFrame() {
}
// Range: 0x80518DD0 -> 0x80518F0C
bool GFxMovieRoot::GotoLabeledFrame(class GFxMovieRoot * this /* r29 */, char * label /* r30 */, int offset /* r31 */) {
    // Local variables
    unsigned int targetFrame; // r1+0x10
}
// Range: 0x80518F10 -> 0x80519108
void GFxMovieRoot::Display(class GFxMovieRoot * this /* r31 */) {
    // Local variables
    unsigned int movieIndex; // r29
    bool haveVisibleMovie; // r28
    class GFxDisplayContext context; // r1+0x10
}
// signature: GFxMovieRoot::SetPlayState(GFxMovie::PlayState)
// Range: 0x80519110 -> 0x80519130
void GFxMovieRoot::SetPlayState() {
}
// Range: 0x80519140 -> 0x8051915C
enum PlayState GFxMovieRoot::GetPlayState() const {
}
// signature: GFxMovieRoot::SetVisible(bool)
// Range: 0x80519160 -> 0x80519180
void GFxMovieRoot::SetVisible() {
}
// Range: 0x80519180 -> 0x805191CC
bool GFxMovieRoot::GetVisible() const {
}
// signature: GFxMovieRoot::GFxValue2ASValue(const GFxValue &, GASValue *) const
// Range: 0x805191D0 -> 0x80519370
void GFxMovieRoot::GFxValue2ASValue(class GASValue * pdestVal /* r30 */) const {
}
// Range: 0x80519370 -> 0x805194EC
bool GFxMovieRoot::SetVariable(class GFxMovieRoot * this /* r28 */, char * ppathToVar /* r29 */, class GFxValue & value /* r31 */, enum SetVarType setType /* r30 */) {
    // Local variables
    class GASEnvironment * penv; // r0
    class GASString path; // r1+0xC
    class GASValue val; // r1+0x10
    bool setResult; // r31
}
// Range: 0x805194F0 -> 0x805198F8
void GFxMovieRoot::ASValue2GFxValue(class GFxMovieRoot * this /* r24 */, class GASEnvironment * penv /* r25 */, class GASValue & value /* r26 */, class GFxValue * pdestVal /* r27 */) const {
    // Local variables
    int toType; // r0

    {
        // Range: 0x805195F8 -> 0x80519840
        // Local variables
        unsigned int pos; // r0
    }
    {
        // Range: 0x80519844 -> 0x805198CC
        // Local variables
        wchar_t * pdestBuf; // r22
        unsigned int len; // r0
        class GASString str; // r1+0xC
    }
}
// Range: 0x80519900 -> 0x80519B80
bool GFxMovieRoot::GetVariable(class GFxMovieRoot * this /* r27 */, class GFxValue * pval /* r28 */, char * ppathToVar /* r25 */) const {
    // Local variables
    class GASEnvironment * penv; // r29
    class GASString path; // r1+0x8
    class GASValue retVal; // r1+0x10
}
// Range: 0x80519B80 -> 0x8051A0C4
bool GFxMovieRoot::SetVariableArray(class GFxMovieRoot * this /* r26 */, enum SetArrayType type /* r27 */, char * ppathToVar /* r23 */, unsigned int index /* r28 */, void * pdata /* r29 */, unsigned int count /* r30 */, enum SetVarType setType /* r31 */) {
    // Local variables
    class GASEnvironment * penv; // r24
    class GASString path; // r1+0x10
    class GASValue retVal; // r1+0x88
    class GASValue val; // r1+0x68
    bool setResult; // r23

    {
        // Range: 0x80519BFC -> 0x80519C88
        // Local variables
        class GASObject * pobj; // r24
    }
    {
        // Range: 0x80519D58 -> 0x80519DC4
        {
            // Range: 0x80519D58 -> 0x80519DB4
            // Local variables
            unsigned int i; // r23
        }
    }
    {
        // Range: 0x80519DC4 -> 0x80519E14
        {
            // Range: 0x80519DC4 -> 0x80519E04
            // Local variables
            unsigned int i; // r23
        }
    }
    {
        // Range: 0x80519E14 -> 0x80519E64
        {
            // Range: 0x80519E14 -> 0x80519E54
            // Local variables
            unsigned int i; // r23
        }
    }
    {
        // Range: 0x80519E64 -> 0x80519EBC
        {
            // Range: 0x80519E64 -> 0x80519E94
            // Local variables
            unsigned int i; // r23

            {
                // Range: 0x80519E64 -> 0x80519E94
                // Local variables
                class GASValue asVal; // r1+0x78
            }
        }
    }
    {
        // Range: 0x80519EBC -> 0x80519F48
        {
            // Range: 0x80519EBC -> 0x80519F38
            // Local variables
            unsigned int i; // r23
        }
    }
    {
        // Range: 0x80519F48 -> 0x80519FD0
        {
            // Range: 0x80519F48 -> 0x80519FC4
            // Local variables
            unsigned int i; // r23
        }
    }
}
// Range: 0x8051A0D0 -> 0x8051A3BC
bool GFxMovieRoot::SetVariableArraySize(class GFxMovieRoot * this /* r29 */, char * ppathToVar /* r28 */, unsigned int count /* r30 */, enum SetVarType setType /* r31 */) {
    // Local variables
    class GASEnvironment * penv; // r27
    class GASString path; // r1+0x8
    class GASValue retVal; // r1+0x20
    class GASValue val; // r1+0x10
    bool setResult; // r30

    {
        // Range: 0x8051A138 -> 0x8051A248
        // Local variables
        class GASObject * pobj; // r27
    }
}
// Range: 0x8051A3C0 -> 0x8051A4F8
unsigned int GFxMovieRoot::GetVariableArraySize(char * ppathToVar /* r30 */) {
    // Local variables
    class GASEnvironment * penv; // r31
    class GASString path; // r1+0x8
    class GASValue retVal; // r1+0x10

    {
        // Range: 0x8051A418 -> 0x8051A4B0
        // Local variables
        class GASObject * pobj; // r31
    }
}
// Range: 0x8051A500 -> 0x8051B01C
bool GFxMovieRoot::GetVariableArray(class GFxMovieRoot * this /* r28 */, enum SetArrayType type /* r21 */, char * ppathToVar /* r19 */, unsigned int index /* r29 */, void * pdata /* r30 */, unsigned int count /* r31 */) {
    // Local variables
    class GASEnvironment * penv; // r24
    class GASString path; // r1+0x14
    class GASValue retVal; // r1+0x18

    {
        // Range: 0x8051A578 -> 0x8051AFCC
        // Local variables
        class GASObject * pobj; // r23

        {
            // Range: 0x8051A5B4 -> 0x8051AFCC
            // Local variables
            unsigned int arrSize; // r22
            class GASArrayObject * parray; // r0

            {
                // Range: 0x8051A768 -> 0x8051A7C8
                // Local variables
                int * parr; // reg65535

                {
                    // Range: 0x8051A768 -> 0x8051A7BC
                    // Local variables
                    unsigned int i; // r19
                }
            }
            {
                // Range: 0x8051A7CC -> 0x8051A824
                // Local variables
                float * parr; // reg65535

                {
                    // Range: 0x8051A7CC -> 0x8051A818
                    // Local variables
                    unsigned int i; // r19
                }
            }
            {
                // Range: 0x8051A828 -> 0x8051A87C
                // Local variables
                double * parr; // reg65535

                {
                    // Range: 0x8051A828 -> 0x8051A870
                    // Local variables
                    unsigned int i; // r19
                }
            }
            {
                // Range: 0x8051A880 -> 0x8051A8DC
                // Local variables
                class GFxValue * parr; // reg65535

                {
                    // Range: 0x8051A880 -> 0x8051A8D0
                    // Local variables
                    unsigned int i; // r19
                }
            }
            {
                // Range: 0x8051A8E0 -> 0x8051AB48
                // Local variables
                char * * parr; // reg65535

                {
                    // Range: 0x8051AA90 -> 0x8051AB3C
                    // Local variables
                    unsigned int i; // r22

                    {
                        // Range: 0x8051AA90 -> 0x8051AB3C
                        {
                            // Range: 0x8051AA94 -> 0x8051AA94
                            // Local variables
                            class GASString str; // r1+0x10
                        }
                    }
                }
            }
            {
                // Range: 0x8051AB4C -> 0x8051AF98
                // Local variables
                wchar_t * pwBuffer; // r22
                unsigned int bufSize; // r21
                unsigned int i; // r26
                wchar_t * * parr; // reg65535

                {
                    // Range: 0x8051AD00 -> 0x8051AD98
                    {
                        // Range: 0x8051AD1C -> 0x8051AD7C
                        // Local variables
                        class GASString str; // r1+0xC
                    }
                }
                {
                    // Range: 0x8051ADE8 -> 0x8051AE34
                    // Local variables
                    unsigned long code; // r0
                    wchar_t * pwdstStr; // r23
                    char * psrcStr; // r1+0x8
                }
            }
        }
    }
}
// signature: GFxMovieRoot::AddStickyVariable(const GASString &, const GASValue &, GFxMovie::SetVarType)
// Range: 0x8051B020 -> 0x8051B4A4
void GFxMovieRoot::AddStickyVariable(class GFxMovieRoot * this /* r28 */, class GASValue & val /* r29 */, enum SetVarType setType /* r30 */) {
    // Local variables
    class GASStringContext sc; // r1+0x30
    class GASString path; // r1+0x20
    class GASString name; // r1+0x1C
    class StickyVarNode * pnode; // r1+0x18
    class StickyVarNode * p; // r1+0x14

    {
        // Range: 0x8051B110 -> 0x8051B260
        // Local variables
        bool needLevelPrefix; // r31
    }
}
// Range: 0x8051CE30 -> 0x8051D128
void GFxMovieRoot::ResolveStickyVariables(class GFxMovieRoot * this /* r29 */, class GFxASCharacter * pcharacter /* r25 */) {
    // Local variables
    class StickyVarNode * pnode; // r1+0x10
    class StickyVarNode * p; // r28
    class StickyVarNode * pnext; // r27

    {
        // Range: 0x8051CE60 -> 0x8051D110
        // Local variables
        class StickyVarNode * ppermanentTail; // r26
        class StickyVarNode * ppermanent; // r1+0xC
    }
}
// Range: 0x8051D130 -> 0x8051D3BC
void GFxMovieRoot::ClearStickyVariables(class GFxMovieRoot * this /* r29 */) {
    {
        // Range: 0x8051D1B8 -> 0x8051D1B8
        // Local variables
        class StickyVarNode * p; // r27
        class StickyVarNode * pnode; // r26
    }
}
// Range: 0x8051D3C0 -> 0x8051D45C
bool GFxMovieRoot::IsAvailable(char * pathToVar /* r30 */) const {
    // Local variables
    class GASEnvironment * penv; // r31
    class GASString path; // r1+0x8
}
// Range: 0x8051D460 -> 0x8051D65C
bool GFxMovieRoot::Invoke(class GFxMovieRoot * this /* r26 */, char * pmethodName /* r27 */, class GFxValue * presult /* r28 */, class GFxValue * pargs /* r25 */, unsigned int numArgs /* r29 */) {
    // Local variables
    class GASValue resultVal; // r1+0x20
    class GASEnvironment * penv; // r31
    bool retVal; // r25

    {
        // Range: 0x8051D4B8 -> 0x8051D5CC
        // Local variables
        int i; // r30
    }
}
// signature: GFxMovieRoot::Invoke(const char *, GFxValue *, const char *, ...)
// Range: 0x8051D660 -> 0x8051D784
bool GFxMovieRoot::Invoke(class GFxMovieRoot * this /* r28 */, class GFxValue * presult /* r29 */) {
    // Local variables
    class GASValue resultVal; // r1+0x78
    class __va_list_struct args[1]; // r1+0x68
    bool retVal; // r30
}
// signature: GFxMovieRoot::InvokeArgs(const char *, GFxValue *, const char *, __va_list_struct *)
// Range: 0x8051D790 -> 0x8051D858
bool GFxMovieRoot::InvokeArgs(class GFxMovieRoot * this /* r28 */, class GFxValue * presult /* r29 */) {
    {
        // Range: 0x8051D7B4 -> 0x8051D834
        // Local variables
        bool retVal; // r30
        class GASValue resultVal; // r1+0x8
    }
}
// signature: GFxMovieRoot::SetExternalInterfaceRetVal(const GFxValue &)
// Range: 0x8051D860 -> 0x8051D868
void GFxMovieRoot::SetExternalInterfaceRetVal() {
}
// signature: GFxMovieRoot::ProcessFocusKey(short, GFxEvent::EventType, const GFxSpecialKeysState &, GFxMovieRoot::ProcessFocusKeyInfo *)
// Range: 0x8051D870 -> 0x8051E4D8
void GFxMovieRoot::ProcessFocusKey(class GFxMovieRoot * this /* r29 */, short keycode /* r26 */, class GFxSpecialKeysState & specialKeysState /* r28 */, class ProcessFocusKeyInfo * pfocusInfo /* r27 */) {
    {
        // Range: 0x8051D8BC -> 0x8051E4A0
        // Local variables
        int tabableArraySize; // r31

        {
            // Range: 0x8051D988 -> 0x8051D9BC
            // Local variables
            int movieIndex; // r23
        }
        {
            // Range: 0x8051DA90 -> 0x8051DAC0
            // Local variables
            int i; // r6
        }
        {
            // Range: 0x8051DB44 -> 0x8051E418
            // Local variables
            class GRect aRect; // r1+0xC8
            class GMatrix2D ma; // r1+0x108

            {
                // Range: 0x8051DBA8 -> 0x8051DFB8
                // Local variables
                bool hitStipe; // r29
                class GRect newFocusRect; // r1+0xB8
                int newFocusIdx; // r28

                {
                    // Range: 0x8051DBD4 -> 0x8051DBD4
                    // Local variables
                    int i; // r30

                    {
                        // Range: 0x8051DBD4 -> 0x8051DBD4
                        // Local variables
                        bool closerByY; // r0
                        bool curHitStripe; // r3
                        class GRect bRect; // r1+0xA8
                        class GMatrix2D mb; // r1+0xF0

                        {
                            // Range: 0x8051DBD4 -> 0x8051DBD4
                            // Local variables
                            class GRect stripeRect; // r1+0x98
                        }
                        {
                            // Range: 0x8051DBD4 -> 0x8051DBD4
                            // Local variables
                            class GRect stripeRect; // r1+0x88
                        }
                    }
                }
            }
            {
                // Range: 0x8051DFBC -> 0x8051E418
                // Local variables
                bool hitStipe; // r29
                class GRect newFocusRect; // r1+0x78
                int newFocusIdx; // r30

                {
                    // Range: 0x8051DFFC -> 0x8051DFFC
                    // Local variables
                    int i; // r28

                    {
                        // Range: 0x8051DFFC -> 0x8051DFFC
                        // Local variables
                        bool curHitStripe; // r3
                        class GRect bRect; // r1+0x68
                        class GMatrix2D mb; // r1+0xD8

                        {
                            // Range: 0x8051DFFC -> 0x8051DFFC
                            // Local variables
                            class GRect stripeRect; // r1+0x58
                        }
                        {
                            // Range: 0x8051DFFC -> 0x8051DFFC
                            // Local variables
                            class GRect stripeRect; // r1+0x48
                        }
                        {
                            // Range: 0x8051DFFC -> 0x8051DFFC
                            // Local variables
                            float yDistDiff; // f4
                            bool closerByX; // r0
                        }
                    }
                }
            }
        }
    }

    // References
    // -> static class GASAutoTabSortFunctor sf;
    // -> static class GASTabIndexSortFunctor sf;
}
// signature: GFxMovieRoot::FinalizeProcessFocusKey(GFxMovieRoot::ProcessFocusKeyInfo *)
// Range: 0x8051FA70 -> 0x8051FB10
void GFxMovieRoot::FinalizeProcessFocusKey(class GFxMovieRoot * this /* r30 */) {
}
// Range: 0x8051FB10 -> 0x8051FC04
void GFxMovieRoot::ActivateFocusCapture(class GFxMovieRoot * this /* r29 */) {
    // Local variables
    class ProcessFocusKeyInfo focusKeyInfo; // r1+0x10
}
// Range: 0x8051FC10 -> 0x80520318
void GFxMovieRoot::DisplayFocusRect(class GFxMovieRoot * this /* r28 */, class GFxDisplayContext & context /* r27 */) {
    // Local variables
    class GPtr curFocused; // r1+0xC

    {
        // Range: 0x8051FC3C -> 0x805202E4
        // Local variables
        class VertexXY16i icoords[12]; // r1+0x190
        class GPoint coords[4]; // r1+0x158
        class GRect focusWorldRect; // r1+0x100
        class GRect focusLocalRect; // r1+0x110
        class GMatrix2D mat; // r1+0x178
    }

    // References
    // -> static unsigned short indices[24];
}
// Range: 0x80520320 -> 0x805203A4
void GFxMovieRoot::HideFocusRect(class GFxMovieRoot * this /* r31 */) {
    {
        // Range: 0x80520334 -> 0x8052036C
        // Local variables
        class GPtr curFocused; // r1+0x8
    }
}
// Range: 0x805203B0 -> 0x80520480
void GFxMovieRoot::SetFocusTo(class GFxMovieRoot * this /* r30 */, class GFxASCharacter * ch /* r31 */) {
    // Local variables
    class GPtr curFocused; // r1+0x8
}
// Range: 0x80520480 -> 0x805205A8
void GFxMovieRoot::QueueSetFocusTo(class GFxMovieRoot * this /* r30 */, class GFxASCharacter * ch /* r31 */) {
    // Local variables
    class GPtr curFocused; // r1+0x8
}
// Range: 0x805205B0 -> 0x80520760
void GFxMovieRoot::TransferFocus(class GFxMovieRoot * this /* r29 */, class GFxASCharacter * pNewFocus /* r30 */) {
    // Local variables
    class GPtr curFocused; // r1+0x8
}
// Range: 0x80520760 -> 0x80520A14
void GFxMovieRoot::SetKeyboardFocusTo(class GFxMovieRoot * this /* r30 */, class GFxASCharacter * ch /* r31 */) {
    {
        // Range: 0x805209B8 -> 0x805209F8
        // Local variables
        class GFxASCharacter * cur; // reg65535
    }
}
// Range: 0x80520A20 -> 0x80520A9C
void GFxMovieRoot::FocusMouseInputMoved(class GFxMovieRoot * this /* r5 */, class GFxASCharacter * newCharWithInput /* r31 */) {
    // Local variables
    class GPtr curFocused; // r1+0x8
}
// Range: 0x80520AA0 -> 0x80520F20
void GFxSwfEvent::Read(class GFxSwfEvent * this /* r28 */, class GFxStream * in /* r29 */, unsigned long flags /* r30 */) {
    // Local variables
    unsigned long eventLength; // r30

    {
        // Range: 0x80520CCC -> 0x80520D1C
        // Local variables
        int mask; // r4
        int i; // r3
    }
    {
        // Range: 0x80520E9C -> 0x80520F08
        // Local variables
        unsigned int remainder; // r21
        unsigned int i; // r20
    }

    // References
    // -> struct {} __vt__19GASActionBufferData;
    // -> static class GFxEventId CodeBits[19];
}
// Range: 0x80520FE0 -> 0x8052129C
void GFxSwfEvent::AttachTo(class GFxSwfEvent * this /* r28 */, class GFxASCharacter * ch /* r29 */) const {
    {
        // Range: 0x80521000 -> 0x805211A0
        // Local variables
        class GASValue method; // r1+0x18
        class GASEnvironment * penv; // r30
        class garray emptyWithStack; // r1+0x28
    }

    // References
    // -> struct {} __vt__15GASActionBuffer;
}
// Range: 0x805212A0 -> 0x80521338
void * GFxPlaceObject2::GFxPlaceObject2(class GFxPlaceObject2 * this /* r30 */) {
    // References
    // -> struct {} __vt__15GFxPlaceObject2;
}
// Range: 0x80521340 -> 0x805214E8
void * GFxPlaceObject2::~GFxPlaceObject2(class GFxPlaceObject2 * this /* r30 */) {
    {
        // Range: 0x80521368 -> 0x805213C4
        // Local variables
        unsigned long n; // r26
        unsigned long i; // r27
    }

    // References
    // -> struct {} __vt__15GFxPlaceObject2;
}
// Range: 0x805214F0 -> 0x80521558
void GFxPlaceObject2::Read(class GFxPlaceObject2 * this /* r29 */, class GFxLoadProcess * p /* r30 */, enum GFxTagType tagType /* r31 */) {
}
// signature: GFxPlaceObject2::Read(GFxStream *, GFxTagType, unsigned int)
// Range: 0x80521560 -> 0x805220E8
void GFxPlaceObject2::Read(class GFxPlaceObject2 * this /* r26 */, class GFxStream * pin /* r27 */, unsigned int movieVersion /* r28 */) {
    // Local variables
    bool verboseParse; // r0

    {
        // Range: 0x805216F4 -> 0x805220B0
        // Local variables
        bool flagMove; // r29
        bool hasChar; // r30
        unsigned char po3Flags; // r31

        {
            // Range: 0x80521A10 -> 0x80521C68
            // Local variables
            unsigned int numFilters; // r0
            class GFxFilterDesc filters[4]; // r1+0x8

            {
                // Range: 0x80521AFC -> 0x80521C5C
                // Local variables
                unsigned int i; // r17
            }
        }
        {
            // Range: 0x80521C68 -> 0x80521CE0
            // Local variables
            unsigned char blendMode; // r17
        }
        {
            // Range: 0x80521D18 -> 0x80522030
            // Local variables
            unsigned long allFlags; // r5

            {
                // Range: 0x80521E30 -> 0x8052202C
                // Local variables
                unsigned long thisFlags; // r17
            }
        }
    }

    // References
    // -> struct {} __vt__13GFxTextFilter;
}
// Range: 0x80522150 -> 0x8052227C
void GFxPlaceObject2::InitializeToAdd(class GFxPlaceObject2 * this /* r30 */, class GFxCharPosInfo & posInfo /* r31 */) {
}
// Range: 0x80522280 -> 0x80522474
void GFxPlaceObject2::ExecuteWithPos(class GFxPlaceObject2 * this /* r28 */, class GFxCharPosInfo & pos /* r30 */, class GFxSprite * m /* r31 */, unsigned int createFrame /* r29 */) {
    {
        // Range: 0x805222CC -> 0x8052238C
        // Local variables
        class GASString sname; // r1+0x1C
        class GASEnvironment * penv; // r3
    }
    {
        // Range: 0x805223B0 -> 0x80522440
        // Local variables
        class GASString sname; // r1+0x18
        class GASEnvironment * penv; // r3
    }
}
// Range: 0x80522480 -> 0x805226CC
void GFxPlaceObject2::ExecuteStateReverse(class GFxPlaceObject2 * this /* r30 */, class GFxSprite * m /* r31 */, int frame /* r29 */) {
    {
        // Range: 0x80522500 -> 0x805225DC
        // Local variables
        class GFxPlaceObject2 * ptag; // r0
        unsigned int findPrevFlags; // r8
        unsigned int tagFrame; // r1+0x1C
        class GFxCharPosInfo pos; // r1+0x70
    }
    {
        // Range: 0x805225DC -> 0x805226B0
        // Local variables
        class GFxPlaceObject2 * ptag; // r0
        unsigned int findPrevFlags; // r8
        unsigned int tagFrame; // r1+0x18
        class GFxCharPosInfo pos; // r1+0x20
    }
}
// Range: 0x805226D0 -> 0x805226E4
class DepthResId GFxPlaceObject2::GetPlaceObject2_DepthId() const {
}
// signature: GFxRemoveObject2::Read(GFxLoadProcess *, GFxTagType)
// Range: 0x805226F0 -> 0x805227CC
void GFxRemoveObject2::Read(class GFxRemoveObject2 * this /* r31 */, class GFxLoadProcess * p /* r29 */) {
}
// signature: GFxRemoveObject2::Execute(GFxSprite *)
// Range: 0x805227D0 -> 0x80522808
void GFxRemoveObject2::Execute(class GFxRemoveObject2 * this /* r6 */) {
}
// Range: 0x80522810 -> 0x805228F4
void GFxRemoveObject2::ExecuteStateReverse(class GFxRemoveObject2 * this /* r29 */, class GFxSprite * m /* r30 */, int frame /* r31 */) {
    // Local variables
    class GFxCharPosInfo pos; // r1+0x10
    unsigned int tagFrame; // r1+0xC
    class GFxPlaceObject2 * ptag; // r0
}
// signature: GFxSetBackgroundColor::Execute(GFxSprite *)
// Range: 0x80522900 -> 0x805229BC
void GFxSetBackgroundColor::Execute(class GFxSetBackgroundColor * this /* r30 */) {
    {
        // Range: 0x8052291C -> 0x805229A4
        // Local variables
        class GFxMovieRoot * pmroot; // r31

        {
            // Range: 0x8052293C -> 0x805229A4
            // Local variables
            float alpha; // f0
        }
    }
}
// Range: 0x80522A00 -> 0x80522A60
void GFxSetBackgroundColor::Read(class GFxSetBackgroundColor * this /* r30 */, class GFxLoadProcess * p /* r31 */) {
}
// Range: 0x80522A60 -> 0x80522BC4
bool GFx_LoadVariables(class GASEnvironment * penv /* r27 */, class GASObjectInterface * pchar /* r28 */, class GFile * pfile /* r29 */) {
    // Local variables
    int flen; // r31
    unsigned char * td; // r30
    class GFxString data; // r1+0x8

    {
        // Range: 0x80522ACC -> 0x80522B48
        // Local variables
        class GASLoadVarsObject * lvobj; // r0
    }
}
// Range: 0x80522BD0 -> 0x80522EB0
bool GFx_LoadData(class GASObjectInterface * pchar /* r27 */, class GFile * pfile /* r28 */, class GFxString & data /* r30 */) {
    // Local variables
    int flen; // r29
    unsigned char * td; // reg65535
    unsigned short * prefix; // r31

    {
        // Range: 0x80522C3C -> 0x80522CB8
        // Local variables
        class GASLoadVarsObject * lvobj; // r0
    }
    {
        // Range: 0x80522CC4 -> 0x80522CC8
        // Local variables
        int i; // r3
    }
    {
        // Range: 0x80522DF4 -> 0x80522DF8
        // Local variables
        int i; // r7
    }
}
