/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxLoadVars.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804E39F0 -> 0x804E5698
*/
// total size: 0x40
class GASLoadVarsObject : public GASObject {
    // Members
    double BytesLoadedCurrent; // offset 0x30, size 0x8
    double BytesLoadedTotal; // offset 0x38, size 0x8
};
// total size: 0x60
class GASLoadVarsProto : public GASPrototype {};
// total size: 0x60
class GASPrototype : public GASLoadVarsObject {
    // Members
    class GASFunctionWeakRef Constructor; // offset 0x40, size 0xC
    class GASFunctionWeakRef __Constructor__; // offset 0x4C, size 0xC
    class garray * pInterfaces; // offset 0x58, size 0x4
};
// total size: 0xC
class MemberVisitor : public MemberVisitor {
    // Members
    class GASEnvironment * pEnvironment; // offset 0x4, size 0x4
    class GFxString * pString; // offset 0x8, size 0x4
};
class GASNameFunction FunctionTable[9]; // size: 0x48, address: 0x806E8178
struct {} __vt__Q216GASLoadVarsProto34MemberVisitor; // size: 0x10, address: 0x80738548
struct {} __vt__16GASLoadVarsProto; // size: 0xB8, address: 0x80738558
struct {} __vt__50GASPrototype<17GASLoadVarsObject,14GASEnvironment>; // size: 0xB8, address: 0x80738610
struct {} __vt__17GASLoadVarsObject; // size: 0xB4, address: 0x807386C8
// Range: 0x804E39F0 -> 0x804E3BF4
void * GASLoadVarsObject::GASLoadVarsObject(class GASLoadVarsObject * this /* r30 */, class GASEnvironment * penv /* r31 */) {
    // References
    // -> struct {} __vt__17GASLoadVarsObject;
}
// signature: GASLoadVarsObject::SetMember(GASEnvironment *, const GASString &, const GASValue &, const GASPropFlags &)
// Range: 0x804E3C00 -> 0x804E3C78
bool GASLoadVarsObject::SetMember(class GASLoadVarsObject * this /* r28 */, class GASEnvironment * penv /* r29 */, class GASString & name /* r30 */, class GASValue & val /* r31 */) {
}
// signature: GASLoadVarsObject::NotifyOnData(GASEnvironment *, GASString &)
// Range: 0x804E3C80 -> 0x804E3D38
void GASLoadVarsObject::NotifyOnData(class GASLoadVarsObject * this /* r30 */, class GASEnvironment * penv /* r31 */) {
}
// Range: 0x804E3D40 -> 0x804E3DFC
void GASLoadVarsObject::NotifyOnLoad(class GASLoadVarsObject * this /* r30 */, class GASEnvironment * penv /* r31 */, bool success /* r1+0x8 */) {
}
// Range: 0x804E3E00 -> 0x804E41AC
void * GASLoadVarsProto::GASLoadVarsProto(class GASLoadVarsProto * this /* r29 */, class GASStringContext * psc /* r30 */, class GASObject * pprototype /* r31 */, class GASFunctionRef & constructor /* r25 */) {
    // References
    // -> class GASNameFunction FunctionTable[9];
    // -> struct {} __vt__16GASLoadVarsProto;
    // -> struct {} __vt__50GASPrototype<17GASLoadVarsObject,14GASEnvironment>;
}
// Range: 0x804E4320 -> 0x804E43BC
void GASLoadVarsProto::GlobalCtor(class GASFnCall & fn /* r30 */) {
}
// signature: GASLoadVarsProto::AddRequestHeader(const GASFnCall &)
// Range: 0x804E43C0 -> 0x804E43FC
void GASLoadVarsProto::AddRequestHeader() {
    // Local variables
    class GFxLog * log; // r0
}
// Range: 0x804E4400 -> 0x804E44F8
void GASLoadVarsProto::Decode(class GASFnCall & fn /* r29 */) {
    {
        // Range: 0x804E441C -> 0x804E449C
        // Local variables
        class GFxString data; // r1+0x8
        class GASString urlStr; // r1+0xC
        class GASLoadVarsObject * pthis; // r0
    }
}
// signature: GASLoadVarsProto::GetBytesLoaded(const GASFnCall &)
// Range: 0x804E4500 -> 0x804E4588
void GASLoadVarsProto::GetBytesLoaded() {
    // Local variables
    class GASLoadVarsObject * pthis; // r0
}
// signature: GASLoadVarsProto::GetBytesTotal(const GASFnCall &)
// Range: 0x804E4590 -> 0x804E4618
void GASLoadVarsProto::GetBytesTotal() {
    // Local variables
    class GASLoadVarsObject * pthis; // r0
}
// Range: 0x804E4620 -> 0x804E4704
void GASLoadVarsProto::Load(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASLoadVarsObject * pthis; // r0
    class GASString urlStr; // r1+0x8
}
// signature: GASLoadVarsProto::Send(const GASFnCall &)
// Range: 0x804E4710 -> 0x804E474C
void GASLoadVarsProto::Send() {
    // Local variables
    class GFxLog * log; // r0
}
// signature: GASLoadVarsProto::SendAndLoad(const GASFnCall &)
// Range: 0x804E4750 -> 0x804E478C
void GASLoadVarsProto::SendAndLoad() {
    // Local variables
    class GFxLog * log; // r0
}
// Range: 0x804E47D0 -> 0x804E4900
void GASLoadVarsProto::ToString(class GASFnCall & fn /* r29 */) {
    // Local variables
    class GASLoadVarsObject * pthis; // r0
    class GFxString str; // r1+0xC
    class MemberVisitor visitor; // r1+0x10

    // References
    // -> struct {} __vt__Q216GASLoadVarsProto34MemberVisitor;
}
// signature: GASLoadVarsProto::MemberVisitor::Visit(const GASString &, const GASValue &, unsigned char)
// Range: 0x804E54C0 -> 0x804E5618
void GASLoadVarsProto::MemberVisitor::Visit(class MemberVisitor * this /* r29 */, class GASString & name /* r30 */, class GASValue & val /* r31 */) {
    // Local variables
    class GFxString str; // r1+0x10
    class GFxString tmp; // r1+0xC
}
// Range: 0x804E4900 -> 0x804E4A54
void GASLoadVarsProto::DefaultOnData(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASLoadVarsObject * pthis; // r31
    class GFxString str; // r1+0x14
}
// Range: 0x804E4A60 -> 0x804E4D60
bool GASLoadVarsProto::LoadVariables(class GASEnvironment * penv /* r28 */, class GASObjectInterface * pchar /* r29 */, class GFxString & data /* r30 */) {
    // Local variables
    class GFxString name; // r1+0x24
    class GFxString value; // r1+0x20
    char c; // r3
    bool parseName; // r25

    {
        // Range: 0x804E4AF8 -> 0x804E4C1C
        // Local variables
        unsigned long i; // r31
    }
}
