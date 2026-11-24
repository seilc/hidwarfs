/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxObject.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8050A640 -> 0x80511B18
*/
// total size: 0x8
class iterator : public const_iterator {};
// total size: 0x8
class const_iterator {
    // Members
    class ghash_set * pHash; // offset 0x0, size 0x4
    unsigned long Index; // offset 0x4, size 0x4
};
// total size: 0x8
class node_ref {
    // Members
    class GASString * pfirst; // offset 0x0, size 0x4
    class GASMember * psecond; // offset 0x4, size 0x4
};
// total size: 0x18
class ghash_node {
    // Members
    class GASString first; // offset 0x0, size 0x4
    class GASMember second; // offset 0x8, size 0x10
};
// total size: 0x20
class ghashset_entry {
    // Members
    long Next_in_chain; // offset 0x0, size 0x4
    class ghash_node value; // offset 0x8, size 0x18
};
// total size: 0x20
class Watchpoint {
    // Members
    class GASFunctionRef Callback; // offset 0x0, size 0xC
    class GASValue UserData; // offset 0x10, size 0x10
};
// total size: 0x8
class node_ref {
    // Members
    class GASString * pfirst; // offset 0x0, size 0x4
    class Watchpoint * psecond; // offset 0x4, size 0x4
};
// total size: 0x30
class ghashset_entry {
    // Members
    long Next_in_chain; // offset 0x0, size 0x4
    class ghash_node value; // offset 0x8, size 0x28
};
// total size: 0x28
class ghash_node {
    // Members
    class GASString first; // offset 0x0, size 0x4
    class Watchpoint second; // offset 0x8, size 0x20
};
// total size: 0x4C
class GASObjectProto : public GASPrototype {};
// total size: 0x34
class GASObjectCtorFunction : public GASFunctionObject {};
static class GASValue notsetVal; // size: 0x10, address: 0x80871B00
static class GASValue notsetVal; // size: 0x10, address: 0x80871B20
static class GASNameFunction GAS_ObjectFunctionTable[9]; // size: 0x48, address: 0x806E82F8
class GASNameFunction StaticFunctionTable[2]; // size: 0x10, address: 0x806E8340
// Range: 0x8050A640 -> 0x8050A658
void * GASObjectInterface::GASObjectInterface() {
    // References
    // -> struct {} __vt__18GASObjectInterface;
}
// Range: 0x8050A660 -> 0x8050A6D8
void * GASObjectInterface::~GASObjectInterface(class GASObjectInterface * this /* r30 */) {
}
// Range: 0x8050A6E0 -> 0x8050A74C
class GFxASCharacter * GASObjectInterface::ToASCharacter(class GASObjectInterface * this /* r31 */) {
}
// Range: 0x8050A750 -> 0x8050A7BC
class GASObject * GASObjectInterface::ToASObject(class GASObjectInterface * this /* r31 */) {
}
// Range: 0x8050A7C0 -> 0x8050A820
class GFxSprite * GASObjectInterface::ToSprite(class GASObjectInterface * this /* r31 */) {
}
// Range: 0x8050A820 -> 0x8050A880
class GFxSprite * GASObjectInterface::ToSprite(class GASObjectInterface * this /* r31 */) const {
}
// Range: 0x8050A880 -> 0x8050A88C
class GASFunctionRef GASObjectInterface::ToFunction() {
}
// Range: 0x8050A890 -> 0x8050A92C
class GASObject * GASObjectInterface::FindOwner(class GASStringContext * psc /* r29 */, class GASString & name /* r30 */) {
    {
        // Range: 0x8050A8B8 -> 0x8050A8F4
        // Local variables
        class GASObjectInterface * proto; // r31
    }
}
// signature: GASObject::GASObject(GASStringContext *)
// Range: 0x8050A930 -> 0x8050A9D0
void * GASObject::GASObject(class GASObject * this /* r30 */) {
    // References
    // -> struct {} __vt__9GASObject;
}
// Range: 0x8050A9D0 -> 0x8050AA7C
void * GASObject::GASObject(class GASObject * this /* r28 */, class GASStringContext * psc /* r29 */, class GASObject * proto /* r30 */) {
    // References
    // -> struct {} __vt__9GASObject;
}
// Range: 0x8050AA80 -> 0x8050AB50
void * GASObject::GASObject(class GASObject * this /* r29 */, class GASEnvironment * penv /* r30 */) {
    // References
    // -> struct {} __vt__9GASObject;
}
// Range: 0x8050AB50 -> 0x8050AB5C
void GASObject::Init() {
}
// signature: GASObject::SetValue(GASEnvironment *, const GASValue &)
// Range: 0x8050AB60 -> 0x8050AB64
void GASObject::SetValue() {
}
// Range: 0x8050AB70 -> 0x8050AB7C
class GASValue GASObject::GetValue() const {
}
// Range: 0x8050AB80 -> 0x8050B1F4
bool GASObject::SetMember(class GASObject * this /* r23 */, class GASEnvironment * penv /* r24 */, class GASString & name /* r25 */, class GASValue & val /* r26 */, class GASPropFlags & flags /* r27 */) {
    // Local variables
    class GASPropFlags _flags; // r1+0x8
    class GASMember * pmember; // r29
    class GASValue newVal; // r1+0x78
    class GASValue * pval; // r28

    {
        // Range: 0x8050ACE4 -> 0x8050AE20
        // Local variables
        class GASObject * pproto; // r28
    }
    {
        // Range: 0x8050AEFC -> 0x8050AFB8
        // Local variables
        class GASValue propVal; // r1+0x88
    }

    // References
    // -> static class GASValue notsetVal;
}
// Range: 0x8050B4A0 -> 0x8050B830
bool GASObject::SetMemberRaw(class GASObject * this /* r26 */, class GASStringContext * psc /* r27 */, class GASString & name /* r28 */, class GASValue & val /* r29 */, class GASPropFlags & flags /* r30 */) {
    // Local variables
    class GASValue * pval; // r31

    {
        // Range: 0x8050B500 -> 0x8050B560
        // Local variables
        class GASObject * pobject; // r0
    }

    // References
    // -> static class GASValue notsetVal;
}
// Range: 0x8050D680 -> 0x8050D88C
bool GASObject::GetMember(class GASObject * this /* r29 */, class GASEnvironment * penv /* r30 */, class GASString & name /* r26 */, class GASValue * val /* r31 */) {
    // Local variables
    bool rv; // r27

    // References
    // -> struct {} __vt__9GASFnCall;
}
// Range: 0x8050D890 -> 0x8050DC8C
bool GASObject::GetMemberRaw(class GASObject * this /* r27 */, class GASStringContext * psc /* r28 */, class GASString & name /* r29 */, class GASValue * val /* r30 */) {
    // Local variables
    class GASObject * current; // r31

    {
        // Range: 0x8050DA7C -> 0x8050DC70
        // Local variables
        class NoCaseKey ikey; // r1+0x8
    }
}
// signature: GASObject::FindMember(GASStringContext *, const GASString &, GASMember *)
// Range: 0x8050DC90 -> 0x8050DCBC
bool GASObject::FindMember() {
}
// signature: GASObject::DeleteMember(GASStringContext *, const GASString &)
// Range: 0x8050DFB0 -> 0x8050E2DC
bool GASObject::DeleteMember(class GASObject * this /* r29 */, class GASString & name /* r30 */) {
}
// signature: GASObject::SetMemberFlags(GASStringContext *, const GASString &, const unsigned char)
// Range: 0x8050E2E0 -> 0x8050E3A4
bool GASObject::SetMemberFlags(class GASObject * this /* r29 */, class GASString & name /* r30 */, unsigned char flags /* r31 */) {
    // Local variables
    class GASMember member; // r1+0x10
}
// Range: 0x8050E3B0 -> 0x8050E668
void GASObject::VisitMembers(class GASObject * this /* r22 */, class GASStringContext * psc /* r23 */, class MemberVisitor * pvisitor /* r24 */, unsigned int visitFlags /* r25 */) const {
    {
        // Range: 0x8050E448 -> 0x8050E56C
        // Local variables
        class GASPropFlags & memberFlags; // r0

        {
            // Range: 0x8050E448 -> 0x8050E530
            {
                // Range: 0x8050E448 -> 0x8050E514
                // Local variables
                class GASValue value; // r1+0x48
            }
        }
    }
}
// Range: 0x8050E670 -> 0x8050E794
bool GASObject::HasMember(class GASObject * this /* r28 */, class GASStringContext * psc /* r29 */, class GASString & name /* r30 */, bool inclPrototypes /* r31 */) {
    // Local variables
    class GASMember member; // r1+0x8
}
// Range: 0x8050E870 -> 0x8050E914
bool GASObject::InstanceOf(class GASEnvironment * penv /* r28 */, class GASObject * prototype /* r29 */, bool inclInterfaces /* r30 */) const {
    {
        // Range: 0x8050E8A0 -> 0x8050E8E4
        // Local variables
        class GASObject * proto; // r31
    }
}
// Range: 0x8050E920 -> 0x8050EA60
bool GASObject::Watch(class GASObject * this /* r26 */, class GASStringContext * psc /* r27 */, class GASString & prop /* r28 */, class GASFunctionRef & callback /* r29 */, class GASValue & userData /* r30 */) {
    // Local variables
    class Watchpoint wp; // r1+0x20
}
// Range: 0x8050FFF0 -> 0x805100E4
bool GASObject::Unwatch(class GASObject * this /* r29 */, class GASStringContext * psc /* r30 */, class GASString & prop /* r31 */) {
}
// Range: 0x805107F0 -> 0x80510A58
bool GASObject::InvokeWatchpoint(class GASObject * this /* r27 */, class GASEnvironment * penv /* r28 */, class GASString & prop /* r26 */, class GASValue & newVal /* r25 */, class GASValue * resultVal /* r29 */) {
    // Local variables
    class GASValue oldVal; // r1+0x28
    class GASValue result; // r1+0x18

    // References
    // -> struct {} __vt__9GASFnCall;
}
// Range: 0x80510A60 -> 0x80510CCC
void * GASObjectProto::GASObjectProto(class GASObjectProto * this /* r30 */, class GASStringContext * psc /* r31 */, class GASFunctionRef & constructor /* r28 */) {
    // References
    // -> static class GASNameFunction GAS_ObjectFunctionTable[9];
    // -> struct {} __vt__14GASObjectProto;
    // -> struct {} __vt__41GASPrototype<9GASObject,14GASEnvironment>;
    // -> struct {} __vt__9GASObject;
}
// Range: 0x80510CD0 -> 0x80510E7C
void GASObjectProto::AddProperty(class GASFnCall & fn /* r31 */) {
    {
        // Range: 0x80510CE4 -> 0x80510E28
        // Local variables
        class GASFunctionRef getter; // r1+0x3C
        class GASString propName; // r1+0xC

        {
            // Range: 0x80510D24 -> 0x80510DEC
            // Local variables
            class GASValue val; // r1+0x20
            class GASFunctionRef setter; // r1+0x30
        }
    }
}
// Range: 0x80510E80 -> 0x80510F28
void GASObjectProto::HasOwnProperty(class GASFnCall & fn /* r30 */) {
}
// Range: 0x80510F30 -> 0x80511094
void GASObjectProto::Watch(class GASFnCall & fn /* r30 */) {
    {
        // Range: 0x80510F48 -> 0x80511054
        // Local variables
        class GASFunctionRef callback; // r1+0x20

        {
            // Range: 0x80510F68 -> 0x80511020
            // Local variables
            class GASValue userData; // r1+0x10
        }
    }
}
// Range: 0x805110B0 -> 0x80511180
void GASObjectProto::Unwatch(class GASFnCall & fn /* r30 */) {
}
// Range: 0x80511190 -> 0x805112C0
void GASObjectProto::IsPropertyEnumerable(class GASFnCall & fn /* r31 */) {
    {
        // Range: 0x805111A8 -> 0x80511274
        // Local variables
        bool rv; // r30
        class GASString prop; // r1+0x8

        {
            // Range: 0x805111F4 -> 0x80511240
            // Local variables
            class GASMember m; // r1+0x10
        }
    }
}
// Range: 0x805112C0 -> 0x805113B0
void GASObjectProto::IsPrototypeOf(class GASFnCall & fn /* r31 */) {
    {
        // Range: 0x805112D8 -> 0x8051137C
        // Local variables
        class GASObjectInterface * iobj; // r0
        class GASObject * pthis; // r0
    }
}
// Range: 0x805113B0 -> 0x80511500
void GASObjectProto::ToString(class GASFnCall & fn /* r31 */) {
}
// Range: 0x80511500 -> 0x80511510
void GASObjectProto::ValueOf(class GASFnCall & fn /* r4 */) {
}
// Range: 0x80511510 -> 0x805116F4
void GASObjectProto::GlobalCtor(class GASFnCall & fn /* r31 */) {
    // Local variables
    class GASFunctionRef ctor; // r1+0x30

    {
        // Range: 0x80511530 -> 0x805115E0
        // Local variables
        class GASValue res; // r1+0x40
        class GASValue & arg0; // r3
    }
}
// Range: 0x80511700 -> 0x805117F8
void * GASObjectCtorFunction::GASObjectCtorFunction(class GASObjectCtorFunction * this /* r28 */, class GASStringContext * psc /* r29 */) {
    // References
    // -> class GASNameFunction StaticFunctionTable[2];
    // -> struct {} __vt__21GASObjectCtorFunction;
}
// Range: 0x80511800 -> 0x805119D0
void GASObjectCtorFunction::RegisterClass(class GASFnCall & fn /* r28 */) {
    // Local variables
    class GASString classname; // r1+0xC

    {
        // Range: 0x80511888 -> 0x805118E4
        // Local variables
        class GASFunctionRef func; // r1+0x10
    }
    {
        // Range: 0x80511938 -> 0x80511984
        // Local variables
        class GASString a1; // r1+0x8
    }
}
