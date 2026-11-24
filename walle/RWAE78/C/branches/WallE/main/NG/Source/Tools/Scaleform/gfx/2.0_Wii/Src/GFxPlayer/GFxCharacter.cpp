/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxCharacter.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80496E40 -> 0x804A3D58
*/
// total size: 0x8
class table {
    // Members
    unsigned long EntryCount; // offset 0x0, size 0x4
    unsigned long SizeMask; // offset 0x4, size 0x4
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
    class GFxEventId first; // offset 0x0, size 0xC
    class garray second; // offset 0xC, size 0xC
};
enum BufferPolicy {
    Buffer_NoShrink = 2,
    Buffer_NoClear = 1,
    Buffer_PolicyMask = 3,
    Buffer_PolicyShift = 30,
};
// total size: 0x8
class GFxASCharacter_MemberTableType {
    // Members
    char * pName; // offset 0x0, size 0x4
    enum StandardMember Id; // offset 0x4, size 0x4
};
// total size: 0x8
class node_ref {
    // Members
    class GASString * pfirst; // offset 0x0, size 0x4
    signed char * psecond; // offset 0x4, size 0x4
};
// total size: 0x8
class ghash_node {
    // Members
    class GASString first; // offset 0x0, size 0x4
    signed char second; // offset 0x4, size 0x1
};
// total size: 0xC
class ghashset_entry {
    // Members
    long Next_in_chain; // offset 0x0, size 0x4
    class ghash_node value; // offset 0x4, size 0x8
};
// total size: 0xC
class garray : public garray_base {};
// total size: 0xC
class garray_base {
    // Members
    class GFxSwfEvent * * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x10
class GFxSwfEvent : public GNewOverrideBase {
    // Members
    class GFxEventId Event; // offset 0x0, size 0xC
    class GPtr pActionOpData; // offset 0xC, size 0x4
};
// total size: 0x50
class GFxCharPosInfo {
    // Members
    class Cxform ColorTransform; // offset 0x0, size 0x20
    class GMatrix2D Matrix_1; // offset 0x20, size 0x18
    enum BlendType BlendMode; // offset 0x38, size 0x4
    float Ratio; // offset 0x3C, size 0x4
    int Depth; // offset 0x40, size 0x4
    class GFxResourceId CharacterId; // offset 0x44, size 0x4
    unsigned short ClipDepth; // offset 0x48, size 0x2
    bool HasMatrix; // offset 0x4A, size 0x1
    bool HasCxform; // offset 0x4B, size 0x1
    class GPtr TextFilter; // offset 0x4C, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxTextFilter * pObject; // offset 0x0, size 0x4
};
// total size: 0x24
class GFxTextFilter : public GRefCountBase {
    // Members
    unsigned char BlurX; // offset 0x10, size 0x1
    unsigned char BlurY; // offset 0x11, size 0x1
    unsigned char BlurStrength; // offset 0x12, size 0x1
    unsigned char ShadowFlags; // offset 0x13, size 0x1
    unsigned char ShadowBlurX; // offset 0x14, size 0x1
    unsigned char ShadowBlurY; // offset 0x15, size 0x1
    unsigned char ShadowStrength; // offset 0x16, size 0x1
    unsigned char ShadowAlpha; // offset 0x17, size 0x1
    short ShadowAngle; // offset 0x18, size 0x2
    short ShadowDistance; // offset 0x1A, size 0x2
    short ShadowOffsetX; // offset 0x1C, size 0x2
    short ShadowOffsetY; // offset 0x1E, size 0x2
    class GColor ShadowColor; // offset 0x20, size 0x4
};
// total size: 0x10
class GRefCountBase : public GRefCountBaseImpl {};
// total size: 0x8
class node_ref {
    // Members
    class GFxEventId * pfirst; // offset 0x0, size 0x4
    class garray * psecond; // offset 0x4, size 0x4
};
enum FocusEventType {
    KillFocus = 0,
    SetFocus = 1,
};
// total size: 0x7C
class GFxGenericCharacter : public GFxCharacter, public GFxPointTestCacheProvider {
    // Members
    class GFxCharacterDef * pDef; // offset 0x78, size 0x4
};
class GFxASCharacter_MemberTableType GFxASCharacter_MemberTable[90]; // size: 0x2D0, address: 0x80735F80
static char * GFx_BlendModeNames[15]; // size: 0x3C, address: 0x80736280
struct {} __vt__19GFxGenericCharacter; // size: 0xA8, address: 0x807364A8
struct {} __vt__14GFxASCharacter; // size: 0x1B0, address: 0x80736550
struct {} __vt__12GFxCharacter; // size: 0xA8, address: 0x80736700
struct {} __vt__26GFxLogBase<12GFxCharacter>; // size: 0x10, address: 0x807367A8
struct {} __vt__29GRefCountBase<12GFxCharacter>; // size: 0xC, address: 0x807367B8
// Range: 0x80496E40 -> 0x80496ED0
void * GFxCharacter::GFxCharacter(class GFxCharacter * this /* r29 */, class GFxASCharacter * parent /* r30 */, class GFxResourceId & id /* r31 */) {
    // References
    // -> struct {} __vt__12GFxCharacter;
}
// Range: 0x80496F70 -> 0x80496FCC
void * GFxCharacter::~GFxCharacter(class GFxCharacter * this /* r30 */) {
}
// Range: 0x80496FD0 -> 0x80497004
class GASString & GFxCharacter::GetName() const {
}
// Range: 0x80497010 -> 0x804972BC
void GFxCharacter::GetWorldMatrix(class GFxCharacter * this /* r22 */, class GMatrix2D * pmat /* r23 */) const {
}
// Range: 0x80497350 -> 0x8049763C
void GFxCharacter::GetLevelMatrix(class GFxCharacter * this /* r22 */, class GMatrix2D * pmat /* r23 */) const {
}
// Range: 0x80497670 -> 0x804979C0
void GFxCharacter::GetWorldCxform(class GFxCharacter * this /* r24 */, class Cxform * pcxform /* r25 */) const {
}
// Range: 0x80497A20 -> 0x80497A7C
enum BlendType GFxCharacter::GetActiveBlendMode() const {
    // Local variables
    enum BlendType blend; // r3
    class GFxCharacter * pchar; // r31
}
// Range: 0x80497A80 -> 0x80497ABC
unsigned int GFxCharacter::GetVersion() const {
}
// Range: 0x80497AF0 -> 0x80497B74
class GASEnvironment * GFxCharacter::GetASEnvironment() {
    // Local variables
    class GFxASCharacter * pparent; // r31
}
// Range: 0x80497B80 -> 0x80497B90
class GASEnvironment * GFxCharacter::GetASEnvironment() const {
}
// Range: 0x80497B90 -> 0x80497C00
class GFxLog * GFxCharacter::GetLog() const {
}
// Range: 0x80497C90 -> 0x80497CC0
bool GFxCharacter::IsVerboseAction() const {
}
// Range: 0x80497CC0 -> 0x80497CF8
bool GFxCharacter::IsVerboseActionErrors() const {
}
// Range: 0x80497D00 -> 0x80497D60
class GFxASCharacter * GFxCharacter::ToASCharacter(class GFxCharacter * this /* r31 */) {
}
// Range: 0x80497D70 -> 0x80497ED8
void * GFxCharacterHandle::GFxCharacterHandle(class GFxCharacterHandle * this /* r31 */, class GASString & name /* r28 */, class GFxASCharacter * pparent /* r29 */, class GFxASCharacter * pcharacter /* r30 */) {
    // Local variables
    class GFxString namePathBuff; // r1+0x10
}
// Range: 0x80497EE0 -> 0x80497F70
void * GFxCharacterHandle::~GFxCharacterHandle(class GFxCharacterHandle * this /* r30 */) {
}
// signature: GFxCharacterHandle::ResolveCharacter(GFxMovieRoot *) const
// Range: 0x80497F70 -> 0x80497FB4
class GFxASCharacter * GFxCharacterHandle::ResolveCharacter(class GFxCharacterHandle * this /* r5 */) const {
}
// signature: GFxASCharacter::GFxASCharacter(GFxMovieDefImpl *, GFxASCharacter *, GFxResourceId)
// Range: 0x80497FC0 -> 0x804980DC
void * GFxASCharacter::GFxASCharacter(class GFxASCharacter * this /* r28 */, class GFxMovieDefImpl * pbindingDefImpl /* r29 */, class GFxASCharacter * pparent /* r30 */) {
    // References
    // -> struct {} __vt__14GFxASCharacter;
    // -> struct {} __vt__12GFxCharacter;
}
// Range: 0x80498470 -> 0x804985C4
void * GFxASCharacter::~GFxASCharacter(class GFxASCharacter * this /* r30 */) {
    // References
    // -> struct {} __vt__14GFxASCharacter;
}
// Range: 0x804985D0 -> 0x80498624
void GFxASCharacter::CloneInternalData(class GFxASCharacter * this /* r30 */, class GFxASCharacter * src /* r31 */) {
}
// Range: 0x8049A460 -> 0x8049A490
class GASGlobalContext * GFxASCharacter::GetGC() const {
}
// Range: 0x8049A490 -> 0x8049A688
void GFxASCharacter::SetName(class GFxASCharacter * this /* r31 */, class GASString & name /* r28 */) {
}
// Range: 0x8049A690 -> 0x8049A6E8
class GASString & GFxASCharacter::GetName(class GFxASCharacter * this /* r31 */) const {
    // Local variables
    class GFxCharacterHandle * pnameHandle; // r0
}
// Range: 0x8049A6F0 -> 0x8049AE14
void GFxASCharacter::GetAbsolutePath(class GFxASCharacter * this /* r25 */, class GFxString * ppath /* r26 */) const {
    {
        // Range: 0x8049AD64 -> 0x8049ADF0
        // Local variables
        char nameBuff[64]; // r1+0x1C8
    }
}
// Range: 0x8049AE70 -> 0x8049B06C
class GFxCharacterHandle * GFxASCharacter::GetCharacterHandle(class GFxASCharacter * this /* r31 */) const {
    {
        // Range: 0x8049AE8C -> 0x8049B038
        // Local variables
        class GASString name; // r1+0x8
    }
}
// Range: 0x8049B070 -> 0x8049B334
void GFxASCharacter::DoMouseDrag(class GFxASCharacter * this /* r30 */) {
    // Local variables
    class DragState st; // r1+0x78
    class GFxMovieRoot * proot; // r0

    {
        // Range: 0x8049B0D8 -> 0x8049B314
        // Local variables
        class GMatrix2D parentWorldMat; // r1+0x60
        class GPoint parentMouse; // r1+0x18
        class GPoint worldMouse; // r1+0x20
        int buttons; // r1+0x8
        int y; // r1+0xC
        int x; // r1+0x10
    }
}
// Range: 0x8049B350 -> 0x8049B3E0
void GFxASCharacter::CharacterGetDepth(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GFxASCharacter * pcharacter; // r3
}
// Range: 0x8049B3E0 -> 0x8049B4A8
void GFxASCharacter::InitStandardMembers(class GASGlobalContext * pcontext /* r28 */) {
    // Local variables
    class GFxASCharacter_MemberTableType * pentry; // r30
    class GASStringManager * pstrManager; // r29

    {
        // Range: 0x8049B410 -> 0x8049B464
        // Local variables
        class GASString name; // r1+0xC
    }

    // References
    // -> class GFxASCharacter_MemberTableType GFxASCharacter_MemberTable[90];
}
// Range: 0x8049CE50 -> 0x8049CF00
enum StandardMember GFxASCharacter::GetStandardMemberConstant(class GFxASCharacter * this /* r29 */, class GASString & memberName /* r30 */) const {
    // Local variables
    signed char memberConstant; // r1+0x8

    {
        // Range: 0x8049CE78 -> 0x8049CEDC
        // Local variables
        class GASGlobalContext * pcontext; // r0
    }
}
// Range: 0x8049D1B0 -> 0x8049D300
class GeomDataType & GFxASCharacter::GetGeomData(class GFxASCharacter * this /* r29 */, class GeomDataType & geomData /* r30 */) const {
}
// Range: 0x8049D300 -> 0x8049D408
void GFxASCharacter::SetGeomData(class GFxASCharacter * this /* r30 */, class GeomDataType & gd /* r31 */) {
}
// Range: 0x8049D410 -> 0x8049D668
void GFxASCharacter::SetAcceptAnimMoves(class GFxASCharacter * this /* r29 */, bool accept /* r30 */) {
    {
        // Range: 0x8049D430 -> 0x8049D648
        // Local variables
        class GeomDataType geomData; // r1+0x8
    }
}
// signature: GFxASCharacter::SetStandardMember(GFxASCharacter::StandardMember, const GASValue &, bool)
// Range: 0x8049D670 -> 0x8049EC6C
bool GFxASCharacter::SetStandardMember(class GFxASCharacter * this /* r31 */, enum StandardMember member /* r30 */, class GASValue & val /* r28 */) {
    // Local variables
    class GASEnvironment * pEnv; // r5

    {
        // Range: 0x8049D778 -> 0x8049D8F4
        // Local variables
        class GMatrix2D m; // r1+0x1E8
        double xval; // f28
    }
    {
        // Range: 0x8049D8F4 -> 0x8049DA70
        // Local variables
        class GMatrix2D m; // r1+0x1D0
        double yval; // f28
    }
    {
        // Range: 0x8049DA70 -> 0x8049DCB0
        // Local variables
        double origXScale; // f27
        class GMatrix2D m; // r1+0x1B8
        class GMatrix2D & chm; // r0
        double newXScale; // f29
    }
    {
        // Range: 0x8049DCB0 -> 0x8049DEF0
        // Local variables
        double origYScale; // f27
        class GMatrix2D m; // r1+0x1A0
        class GMatrix2D & chm; // r0
        double newYScale; // f29
    }
    {
        // Range: 0x8049DEF0 -> 0x8049E128
        // Local variables
        double origRotation; // f0
        class GMatrix2D m; // r1+0x188
        class GMatrix2D & chm; // r0
        double r; // f28
        double rval; // f27
    }
    {
        // Range: 0x8049E128 -> 0x8049E47C
        // Local variables
        double newXScale; // f28
        double origXScale; // f27
        float multiplier; // f0
        float newWidth; // f3
        float oldWidth; // f0
        class GMatrix2D im; // r1+0x158
        class GMatrix2D & chm; // r0
        class GMatrix2D m; // r1+0x170
        double wval; // f28
    }
    {
        // Range: 0x8049E47C -> 0x8049E7D4
        // Local variables
        double newYScale; // f28
        double origYScale; // f27
        float multiplier; // f0
        float newHeight; // f3
        float oldHeight; // f0
        class GMatrix2D im; // r1+0x128
        class GMatrix2D & chm; // r0
        class GMatrix2D m; // r1+0x140
        double hval; // f28
    }
    {
        // Range: 0x8049E7D4 -> 0x8049E8D4
        // Local variables
        class Cxform cx; // r1+0x108
        double aval; // f0
    }
    {
        // Range: 0x8049E900 -> 0x8049E9C4
        // Local variables
        class GFxString str; // r1+0xC
        class GASString asstr; // r1+0x10

        {
            // Range: 0x8049E92C -> 0x8049E9B4
            // Local variables
            unsigned int i; // r28
        }
    }
    {
        // Range: 0x8049E9C4 -> 0x8049EA54
        // Local variables
        int mode; // r4
    }

    // References
    // -> class GFxASCharacter_MemberTableType GFxASCharacter_MemberTable[90];
    // -> static char * GFx_BlendModeNames[15];
}
// signature: GFxASCharacter::GetStandardMember(GFxASCharacter::StandardMember, GASValue *, bool) const
// Range: 0x8049ED90 -> 0x8049FEB0
bool GFxASCharacter::GetStandardMember(class GFxASCharacter * this /* r30 */, enum StandardMember member /* r28 */, class GASValue * val /* r31 */) const {
    {
        // Range: 0x8049EE68 -> 0x8049EFEC
        // Local variables
        class GeomDataType geomData; // r1+0x190
    }
    {
        // Range: 0x8049EFEC -> 0x8049F170
        // Local variables
        class GeomDataType geomData; // r1+0x158
    }
    {
        // Range: 0x8049F170 -> 0x8049F2D8
        // Local variables
        class GeomDataType geomData; // r1+0x120
    }
    {
        // Range: 0x8049F2D8 -> 0x8049F440
        // Local variables
        class GeomDataType geomData; // r1+0xE8
    }
    {
        // Range: 0x8049F440 -> 0x8049F49C
        // Local variables
        class GRect boundRect; // r1+0x70
    }
    {
        // Range: 0x8049F49C -> 0x8049F4F8
        // Local variables
        class GRect boundRect; // r1+0x60
    }
    {
        // Range: 0x8049F4F8 -> 0x8049F660
        // Local variables
        class GeomDataType geomData; // r1+0xB0
    }
    {
        // Range: 0x8049F7F0 -> 0x8049F944
        // Local variables
        class GFxString name; // r1+0x38

        {
            // Range: 0x8049F828 -> 0x8049F870
            // Local variables
            class GFxASCharacter * p; // r28

            {
                // Range: 0x8049F828 -> 0x8049F870
                // Local variables
                class GASString & cname; // r0
            }
        }
    }
    {
        // Range: 0x8049F9C4 -> 0x8049FB1C
        // Local variables
        class GFxString urlStr1; // r1+0x30
        class GFxString urlStr; // r1+0x34

        {
            // Range: 0x8049F9FC -> 0x8049FA38
            // Local variables
            unsigned long n; // r0
            unsigned long i; // r5
        }
    }
    {
        // Range: 0x8049FC28 -> 0x8049FCE4
        // Local variables
        class GPoint b; // r1+0x50
        class GPoint a; // r1+0x58
        class GMatrix2D m; // r1+0x98
        int buttons; // r1+0x24
        int y; // r1+0x28
        int x; // r1+0x2C
    }
    {
        // Range: 0x8049FCE4 -> 0x8049FDA0
        // Local variables
        class GPoint b; // r1+0x40
        class GPoint a; // r1+0x48
        class GMatrix2D m; // r1+0x80
        int buttons; // r1+0x18
        int y; // r1+0x1C
        int x; // r1+0x20
    }

    // References
    // -> static char * GFx_BlendModeNames[15];
}
// Range: 0x8049FEE0 -> 0x804A010C
class GFxASCharacter * GFxASCharacter::CloneDisplayObject(class GFxASCharacter * this /* r28 */, class GASString & newname /* r29 */, int depth /* r30 */, class GASObjectInterface * psource /* r31 */) {
    // Local variables
    class GFxSprite * pparent; // r3
    class garray DummyEventHandlers; // r1+0x10
    class GFxCharPosInfo pos; // r1+0x20
}
// Range: 0x804A0110 -> 0x804A0168
void GFxASCharacter::RemoveDisplayObject(class GFxASCharacter * this /* r31 */) {
    // Local variables
    class GFxSprite * pparent; // r0
}
// Range: 0x804A0170 -> 0x804A0410
void GFxASCharacter::CopyPhysicalProperties(class GFxASCharacter * this /* r30 */, class GFxASCharacter * poldChar /* r31 */) {
}
// signature: GFxASCharacter::HasEventHandler(const GFxEventId &) const
// Range: 0x804A0410 -> 0x804A04B4
bool GFxASCharacter::HasEventHandler() const {
}
// signature: GFxASCharacter::InvokeEventHandlers(GASEnvironment *, const GFxEventId &)
// Range: 0x804A0660 -> 0x804A0790
bool GFxASCharacter::InvokeEventHandlers(class GFxASCharacter * this /* r30 */, class GASEnvironment * penv /* r31 */) {
    {
        // Range: 0x804A06FC -> 0x804A0760
        // Local variables
        unsigned long n; // r26
        unsigned long i; // r27
    }
}
// Range: 0x804A0930 -> 0x804A0DB8
void GFxASCharacter::SetEventHandler(class GFxASCharacter * this /* r31 */, class GFxEventId & id /* r30 */, class GASValue & method /* r28 */) {
    {
        // Range: 0x804A09CC -> 0x804A0B68
        // Local variables
        class garray ea; // r1+0x1C
    }
}
// Range: 0x804A1B00 -> 0x804A1D50
bool GFxASCharacter::ExecuteEvent(class GFxASCharacter * this /* r30 */, class GFxEventId & id /* r27 */) {
    // Local variables
    class GASEnvironment * env; // r29
    bool handlerFound; // r28
    class GASValue method; // r1+0x28
    class GASString methodName; // r1+0x8
}
// Range: 0x804A1D50 -> 0x804A1E9C
bool GFxASCharacter::ExecuteFunction(class GFxASCharacter * this /* r29 */, class GASFunctionRef & function /* r30 */, class garray & params /* r25 */) {
    {
        // Range: 0x804A1D64 -> 0x804A1E80
        // Local variables
        int nArgs; // r31
        class GASEnvironment * penv; // r0
        class GASValue result; // r1+0x8

        {
            // Range: 0x804A1DA4 -> 0x804A1DA8
            // Local variables
            int i; // r26
        }
    }

    // References
    // -> struct {} __vt__9GASFnCall;
}
// Range: 0x804A1EA0 -> 0x804A1FEC
bool GFxASCharacter::ExecuteCFunction(class GFxASCharacter * this /* r29 */, void (* function)(class GASFnCall & fn) /* r30 */, class garray & params /* r25 */) {
    {
        // Range: 0x804A1EB4 -> 0x804A1FD0
        // Local variables
        int nArgs; // r31
        class GASEnvironment * penv; // r0
        class GASValue result; // r1+0x8

        {
            // Range: 0x804A1EF0 -> 0x804A1EF4
            // Local variables
            int i; // r26
        }
    }

    // References
    // -> struct {} __vt__9GASFnCall;
}
// Range: 0x804A1FF0 -> 0x804A20AC
void GFxASCharacter::SetProtoToPrototypeOf(class GFxASCharacter * this /* r29 */, class GASObjectInterface * psrcObj /* r30 */) {
    // Local variables
    class GASValue prototype; // r1+0x8
}
// Range: 0x804A20B0 -> 0x804A216C
void GFxASCharacter::VisitMembers(class GASStringContext * psc /* r28 */, class MemberVisitor * pvisitor /* r29 */, unsigned int visitFlags /* r30 */) const {
}
// Range: 0x804A2180 -> 0x804A22E0
bool GFxASCharacter::DeleteMember(class GFxASCharacter * this /* r28 */, class GASStringContext * psc /* r29 */, class GASString & name /* r30 */) {
    {
        // Range: 0x804A21A8 -> 0x804A2218
        // Local variables
        enum StandardMember member; // r0
    }
}
// Range: 0x804A22E0 -> 0x804A23C8
bool GFxASCharacter::SetMemberFlags(class GASStringContext * psc /* r28 */, class GASString & name /* r29 */, unsigned char flags /* r31 */) {
}
// Range: 0x804A23D0 -> 0x804A2550
bool GFxASCharacter::SetMember(class GFxASCharacter * this /* r27 */, class GASEnvironment * penv /* r28 */, class GASString & name /* r29 */, class GASValue & val /* r30 */, class GASPropFlags & flags /* r31 */) {
    // Local variables
    class GASObject * asObj; // r0

    {
        // Range: 0x804A23E4 -> 0x804A2440
        // Local variables
        enum StandardMember member; // r0
    }
}
// Range: 0x804A2550 -> 0x804A2688
bool GFxASCharacter::HasMember(class GFxASCharacter * this /* r30 */, class GASStringContext * psc /* r27 */, class GASString & name /* r28 */, bool inclPrototypes /* r29 */) {
    {
        // Range: 0x804A2564 -> 0x804A25CC
        // Local variables
        enum StandardMember member; // r0
    }
}
// Range: 0x804A2690 -> 0x804A275C
bool GFxASCharacter::FindMember(class GASStringContext * psc /* r28 */, class GASString & name /* r29 */, class GASMember * pmember /* r30 */) {
}
// Range: 0x804A2760 -> 0x804A2858
void GFxASCharacter::Set__proto__(class GFxASCharacter * this /* r28 */, class GASStringContext * psc /* r29 */, class GASObject * protoObj /* r30 */) {
}
// Range: 0x804A2860 -> 0x804A292C
bool GFxASCharacter::InstanceOf(class GASEnvironment * penv /* r28 */, class GASObject * prototype /* r29 */, bool inclInterfaces /* r30 */) const {
}
// Range: 0x804A2930 -> 0x804A29F4
bool GFxASCharacter::Watch(class GASStringContext * psc /* r27 */, class GASString & prop /* r28 */, class GASFunctionRef & callback /* r29 */, class GASValue & userData /* r30 */) {
}
// Range: 0x804A2A00 -> 0x804A2ABC
bool GFxASCharacter::Unwatch(class GASStringContext * psc /* r29 */, class GASString & prop /* r30 */) {
}
// Range: 0x804A2AC0 -> 0x804A2B34
bool GFxASCharacter::IsFocusRectEnabled(class GFxASCharacter * this /* r31 */) const {
    // Local variables
    class GFxASCharacter * prootMovie; // r0
}
// Range: 0x804A2B40 -> 0x804A2D78
void GFxASCharacter::OnFocus(class GFxASCharacter * this /* r29 */, enum FocusEventType event /* r31 */, class GFxASCharacter * oldOrNewFocusCh /* r30 */) {
    // Local variables
    class GASValue focusMethodVal; // r1+0x58
    class GASEnvironment * penv; // r31
    class GASString focusMethodName; // r1+0x8

    {
        // Range: 0x804A2BA0 -> 0x804A2D28
        // Local variables
        class GASFunctionRef focusMethod; // r1+0x48

        {
            // Range: 0x804A2BE4 -> 0x804A2D14
            // Local variables
            class GASValue result; // r1+0x38
        }
    }

    // References
    // -> struct {} __vt__9GASFnCall;
}
// Range: 0x804A2D80 -> 0x804A2D98
void * GFxPointTestCache::GFxPointTestCache() {
}
// Range: 0x804A2DA0 -> 0x804A2E44
void * GFxPointTestCache::~GFxPointTestCache(class GFxPointTestCache * this /* r29 */) {
}
// Range: 0x804A2FF0 -> 0x804A32C0
void GFxPointTestCache::ReleaseNode(class GFxPointTestCache * this /* r28 */, class CacheNode * pnode /* r29 */) {
}
// Range: 0x804A32C0 -> 0x804A35E8
void GFxPointTestCache::NextFrame(class GFxPointTestCache * this /* r25 */) {
    // Local variables
    class CacheNode * p; // r26
}
// signature: GFxGenericCharacter::GFxGenericCharacter(GFxCharacterDef *, GFxASCharacter *, GFxResourceId)
// Range: 0x804A35F0 -> 0x804A36C0
void * GFxGenericCharacter::GFxGenericCharacter(class GFxGenericCharacter * this /* r27 */, class GFxCharacterDef * pdef /* r28 */, class GFxASCharacter * pparent /* r29 */) {
    // References
    // -> struct {} __vt__19GFxGenericCharacter;
    // -> struct {} __vt__12GFxCharacter;
}
// Range: 0x804A36C0 -> 0x804A37FC
class GFxASCharacter * GFxGenericCharacter::GetTopMostMouseEntity(class GFxGenericCharacter * this /* r29 */, class GPoint & pt /* r31 */, bool testAll /* r30 */) {
    // Local variables
    class GMatrix2D m; // r1+0x10
    class GPoint p; // r1+0x8

    {
        // Range: 0x804A3744 -> 0x804A37DC
        // Local variables
        class GFxASCharacter * pParent; // reg65535

        {
            // Range: 0x804A378C -> 0x804A37B0
            // Local variables
            class GFxSprite * psprite; // r31
        }
    }
}
// signature: GFxGenericCharacter::PointTestLocal(const GPoint<float> &, bool) const
// Range: 0x804A3810 -> 0x804A3834
bool GFxGenericCharacter::PointTestLocal() const {
}
