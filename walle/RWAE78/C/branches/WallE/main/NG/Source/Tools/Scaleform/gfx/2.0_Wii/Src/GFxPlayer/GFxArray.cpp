/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxArray.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80481420 -> 0x80488CB8
*/
// total size: 0x1C
class GASArraySortFunctor {
    // Members
    class GASObjectInterface * This; // offset 0x0, size 0x4
    int Flags; // offset 0x4, size 0x4
    class GASFunctionRef Func; // offset 0x8, size 0xC
    class GASEnvironment * Env; // offset 0x14, size 0x4
    class GFxLog * LogPtr; // offset 0x18, size 0x4
};
// total size: 0x1C
class GASArraySortOnFunctor {
    // Members
    class GASObjectInterface * This; // offset 0x0, size 0x4
    class garray_cc * FieldArray; // offset 0x4, size 0x4
    class GASEnvironment * Env; // offset 0x8, size 0x4
    class GFxLog * LogPtr; // offset 0xC, size 0x4
    class garray FunctorArray; // offset 0x10, size 0xC
};
// total size: 0xC
class garray : public garray_base {};
// total size: 0xC
class garray_base {
    // Members
    class GASArraySortFunctor * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0xC
class garray_base {
    // Members
    int * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x8
class GArrayAdaptor {
    // Members
    class GASValue * * Array; // offset 0x0, size 0x4
    unsigned int Size; // offset 0x4, size 0x4
};
// total size: 0x8
class GASNameNumber {
    // Members
    char * Name; // offset 0x0, size 0x4
    int Number; // offset 0x4, size 0x4
};
// total size: 0x8
class GASNameFunction {
    // Members
    char * Name; // offset 0x0, size 0x4
    void (* Function)(class GASFnCall & fn); // offset 0x4, size 0x4
};
// total size: 0x64
class GASArrayProto : public GASPrototype {};
// total size: 0x64
class GASPrototype : public GASArrayObject {
    // Members
    class GASFunctionWeakRef Constructor; // offset 0x48, size 0xC
    class GASFunctionWeakRef __Constructor__; // offset 0x54, size 0xC
    class garray * pInterfaces; // offset 0x60, size 0x4
};
// total size: 0xC
class garray_base {
    // Members
    class GWeakPtr * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x34
class GASArrayCtorFunction : public GASFunctionObject {};
static class GASNameNumber GASArrayConstTable[6]; // size: 0x30, address: 0x806E7B18
static class GASNameFunction GASArrayFunctionTable[14]; // size: 0x70, address: 0x806E7B48
struct {} __vt__20GASArrayCtorFunction; // size: 0xD8, address: 0x807346F0
struct {} __vt__13GASArrayProto; // size: 0xB8, address: 0x807347C8
struct {} __vt__47GASPrototype<14GASArrayObject,14GASEnvironment>; // size: 0xB8, address: 0x80734880
struct {} __vt__14GASArrayObject; // size: 0xB4, address: 0x80734938
// Range: 0x80481420 -> 0x804818B0
int GASArraySortFunctor::Compare(class GASArraySortFunctor * this /* r27 */, class GASValue * a /* r28 */, class GASValue * b /* r29 */) const {
    // Local variables
    class GASValue dummy; // r1+0x30
    int cmpVal; // r27

    {
        // Range: 0x8048146C -> 0x80481598
        // Local variables
        class GASFnCall fn; // r1+0x40
        class GASValue retVal; // r1+0x20
    }
    {
        // Range: 0x80481598 -> 0x80481878
        // Local variables
        double valB; // f30
        double valA; // f31
        bool numericB; // r26
        bool numericA; // r30

        {
            // Range: 0x804815F8 -> 0x80481688
            // Local variables
            class GASString sa; // r1+0x1C
        }
        {
            // Range: 0x804816BC -> 0x8048174C
            // Local variables
            class GASString sb; // r1+0x18
        }
        {
            // Range: 0x804817B4 -> 0x80481878
            // Local variables
            class GASString sb; // r1+0x10
            class GASString sa; // r1+0x14
        }
    }

    // References
    // -> struct {} __vt__9GASFnCall;
}
// signature: GASArraySortOnFunctor::GASArraySortOnFunctor(GASObjectInterface *, const std::garray_cc<GASString> &, const std::garray<int> &, GASEnvironment *, const GFxLog *)
// Range: 0x804818B0 -> 0x80481B48
void * GASArraySortOnFunctor::GASArraySortOnFunctor(class GASArraySortOnFunctor * this /* r24 */, class GASObjectInterface * pThis /* r25 */, class garray & flagsArray /* r26 */, class GASEnvironment * env /* r27 */, class GFxLog * log /* r28 */) {
    // Local variables
    unsigned int i; // r29
}
// Range: 0x80481C40 -> 0x80481E04
int GASArraySortOnFunctor::Compare(class GASArraySortOnFunctor * this /* r29 */, class GASValue * a /* r30 */, class GASValue * b /* r31 */) const {
    // Local variables
    class GASValue dummy; // r1+0x28
    int cmpVal; // r26
    unsigned int i; // r23

    {
        // Range: 0x80481C84 -> 0x80481DC4
        // Local variables
        class GASObjectInterface * objB; // r22
        class GASObjectInterface * objA; // r26

        {
            // Range: 0x80481C94 -> 0x80481D94
            // Local variables
            class GASValue valB; // r1+0x8
            class GASValue valA; // r1+0x18
        }
    }
}
// Range: 0x80481E10 -> 0x80481EE0
void * GASArrayObject::GASArrayObject(class GASArrayObject * this /* r29 */, class GASEnvironment * penv /* r30 */) {
    // References
    // -> struct {} __vt__14GASArrayObject;
}
// signature: GASArrayObject::GASArrayObject(GASStringContext *)
// Range: 0x80481EE0 -> 0x80481F50
void * GASArrayObject::GASArrayObject(class GASArrayObject * this /* r30 */) {
    // References
    // -> struct {} __vt__14GASArrayObject;
}
// Range: 0x80481F50 -> 0x80482108
void * GASArrayObject::~GASArrayObject(class GASArrayObject * this /* r30 */) {
    // References
    // -> struct {} __vt__9GASObject;
    // -> struct {} __vt__14GASArrayObject;
}
// Range: 0x80482110 -> 0x80482370
void GASArrayObject::Resize(class GASArrayObject * this /* r29 */, int size /* r30 */) {
    // Local variables
    unsigned long i; // r26
    unsigned long newSize; // r0
}
// Range: 0x80482370 -> 0x80482498
char * GASArrayObject::JoinToString(class GASArrayObject * this /* r27 */, class GASEnvironment * pEnv /* r28 */, char * pDelimiter /* r29 */) const {
    // Local variables
    class GASValue undefined; // r1+0x10

    {
        // Range: 0x804823A4 -> 0x80482450
        // Local variables
        unsigned int i; // r30

        {
            // Range: 0x804823C8 -> 0x804823F8
            // Local variables
            class GASString s; // r1+0xC
        }
        {
            // Range: 0x804823F8 -> 0x80482438
            // Local variables
            class GASString s; // r1+0x8
        }
    }
}
// Range: 0x804824A0 -> 0x80482704
void GASArrayObject::Concat(class GASArrayObject * this /* r30 */, class GASValue & val /* r27 */) {
    // Local variables
    class GASObject * pObj; // r28

    {
        // Range: 0x80482514 -> 0x804825A0
        // Local variables
        class GASArrayObject * pArray; // r0

        {
            // Range: 0x8048253C -> 0x804825A0
            // Local variables
            unsigned int oldSize; // r29

            {
                // Range: 0x80482554 -> 0x80482588
                // Local variables
                unsigned long i; // r27
            }
        }
    }
}
// Range: 0x80482710 -> 0x80482890
void GASArrayObject::PushBack(class GASArrayObject * this /* r30 */, class GASValue & val /* r28 */) {
}
// Range: 0x80482890 -> 0x80482A64
void GASArrayObject::RemoveElements(class GASArrayObject * this /* r30 */, int start /* r27 */, int count /* r31 */) {
    {
        // Range: 0x804828A4 -> 0x80482A4C
        // Local variables
        int i; // r28
    }
}
// signature: GASArrayObject::SetElement(int, const GASValue &)
// Range: 0x80482A70 -> 0x80482B08
void GASArrayObject::SetElement(class GASArrayObject * this /* r29 */, class GASValue & val /* r30 */) {
}
// Range: 0x80482B10 -> 0x80482C3C
void GAS_ArrayConcat(class GASFnCall & fn /* r29 */) {
    // Local variables
    class GASArrayObject * pThis; // r30

    {
        // Range: 0x80482BC4 -> 0x80482BE4
        // Local variables
        int i; // r30
    }
}
// Range: 0x80482C40 -> 0x80482D58
void GAS_ArrayJoin(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASArrayObject * pThis; // r0
    char * pjoin; // r31

    {
        // Range: 0x80482C88 -> 0x80482CC8
        // Local variables
        class GASString sa0; // r1+0xC
    }
}
// signature: GAS_ArrayPop(const GASFnCall &)
// Range: 0x80482D60 -> 0x80482E10
void GAS_ArrayPop() {
    // Local variables
    class GASArrayObject * pThis; // r30
}
// Range: 0x80482E10 -> 0x80482FF4
void GAS_ArrayPush(class GASFnCall & fn /* r28 */) {
    // Local variables
    class GASArrayObject * pThis; // r0

    {
        // Range: 0x80482E38 -> 0x80482F84
        // Local variables
        int i; // r29
    }
}
// signature: GAS_ArrayReverse(const GASFnCall &)
// Range: 0x80483000 -> 0x8048305C
void GAS_ArrayReverse() {
    // Local variables
    class GASArrayObject * pthis; // r4
}
// signature: GAS_ArrayShift(const GASFnCall &)
// Range: 0x80483060 -> 0x80483284
void GAS_ArrayShift() {
    // Local variables
    class GASArrayObject * pThis; // r0
}
// Range: 0x80483290 -> 0x80483690
void GAS_ArraySlice(class GASFnCall & fn /* r24 */) {
    // Local variables
    class GASArrayObject * pThis; // r0
    int start; // reg65535
    int end; // r26

    {
        // Range: 0x804833D0 -> 0x8048363C
        // Local variables
        int i; // r25
    }
}
// Range: 0x80483690 -> 0x80483EF4
void GAS_ArraySort(class GASFnCall & fn /* r28 */) {
    // Local variables
    class GASArrayObject * pThis; // r30
    class GASFunctionRef scriptFunctor; // r1+0x24
    int flags; // r29
    class GASArraySortFunctor sortFunctor; // r1+0x4C
    bool uniqueSortFailed; // r26

    {
        // Range: 0x80483AAC -> 0x80483B04
        // Local variables
        int i; // r25
    }
}
// Range: 0x80484170 -> 0x80485354
void GAS_ArraySortOn(class GASFnCall & fn /* r31 */) {
    // Local variables
    class GASArrayObject * pThis; // r25
    class garray_cc fieldNames; // r1+0x30
    class garray fieldFlags; // r1+0x20
    int commonFlags; // r24
    int i; // r23
    class GASString dummyName; // r1+0x14
    class GASArraySortOnFunctor sortFunctor; // r1+0x5C
    bool uniqueSortFailed; // r19

    {
        // Range: 0x80484334 -> 0x804847B8
        // Local variables
        class GASObject * fields; // r22

        {
            // Range: 0x80484350 -> 0x804845AC
            // Local variables
            class GASArrayObject * pFieldArray; // r0
        }
    }
    {
        // Range: 0x804848E8 -> 0x804849D0
        // Local variables
        class GASObject * flags; // r20

        {
            // Range: 0x80484904 -> 0x80484980
            // Local variables
            class GASArrayObject * pFlagsArray; // r0
        }
    }
    {
        // Range: 0x80484CE4 -> 0x80484D3C
        // Local variables
        int i; // r20
    }
}
// Range: 0x80485940 -> 0x804863FC
void GAS_ArraySplice(class GASFnCall & fn /* r23 */) {
    // Local variables
    class GASArrayObject * pThis; // r0
    int start; // r26
    int count; // r25
    int i; // r24
}
// Range: 0x80486400 -> 0x80486544
void GAS_ArrayToString(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASArrayObject * pThis; // r31
}
// Range: 0x80486550 -> 0x80486AB4
void GAS_ArrayUnshift(class GASFnCall & fn /* r29 */) {
    // Local variables
    class GASArrayObject * pThis; // r0

    {
        // Range: 0x804869D4 -> 0x80486A44
        // Local variables
        int i; // r26
    }
}
// Range: 0x80486AC0 -> 0x80486C04
void GAS_ArrayValueOf(class GASFnCall & fn /* r30 */) {
}
// Range: 0x80486C10 -> 0x80486DB4
bool GASArrayObject::SetMemberRaw(class GASArrayObject * this /* r27 */, class GASStringContext * psc /* r28 */, class GASString & name /* r29 */, class GASValue & val /* r30 */, class GASPropFlags & flags /* r31 */) {
    {
        // Range: 0x80486C24 -> 0x80486CE0
        // Local variables
        int nlen; // r4
    }
}
// Range: 0x80486DC0 -> 0x80486F7C
bool GASArrayObject::GetMemberRaw(class GASArrayObject * this /* r28 */, class GASStringContext * psc /* r29 */, class GASString & name /* r30 */, class GASValue * val /* r31 */) {
}
// signature: GASArrayObject::DeleteMember(GASStringContext *, const GASString &)
// Range: 0x80486F80 -> 0x804870DC
bool GASArrayObject::DeleteMember(class GASArrayObject * this /* r31 */) {
    // References
    // -> class __locale _current_locale;
}
// signature: GASArrayObject::VisitMembers(GASStringContext *, GASObjectInterface::MemberVisitor *, unsigned int) const
// Range: 0x804870E0 -> 0x8048721C
void GASArrayObject::VisitMembers(class GASArrayObject * this /* r27 */, class GASStringContext * psc /* r28 */, class MemberVisitor * pvisitor /* r29 */) const {
    // Local variables
    unsigned long i; // r30
    char buffer[20]; // r1+0xC
}
// Range: 0x804872B0 -> 0x80487354
char * GASArrayObject::GetTextValue(class GASArrayObject * this /* r30 */, class GASEnvironment * pEnv /* r31 */) const {
}
// Range: 0x80487360 -> 0x80487368
enum ObjectType GASArrayObject::GetObjectType() const {
}
// Range: 0x80487370 -> 0x80487930
void * GASArrayProto::GASArrayProto(class GASArrayProto * this /* r25 */, class GASStringContext * psc /* r26 */, class GASObject * pprototype /* r27 */, class GASFunctionRef & constructor /* r24 */) {
    // References
    // -> static class GASNameFunction GASArrayFunctionTable[14];
    // -> struct {} __vt__13GASArrayProto;
    // -> struct {} __vt__47GASPrototype<14GASArrayObject,14GASEnvironment>;
    // -> struct {} __vt__14GASArrayObject;
}
// Range: 0x80487B60 -> 0x80487D8C
void GASArrayProto::GlobalCtor(class GASFnCall & fn /* r30 */) {
}
// Range: 0x80487D90 -> 0x80487FE4
void GASArrayProto::DeclareArray(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASFunctionRef ctor; // r1+0x48
}
// Range: 0x80487FF0 -> 0x80488130
void * GASArrayCtorFunction::GASArrayCtorFunction(class GASArrayCtorFunction * this /* r28 */, class GASStringContext * psc /* r29 */) {
    // References
    // -> static class GASNameNumber GASArrayConstTable[6];
    // -> struct {} __vt__20GASArrayCtorFunction;
}
