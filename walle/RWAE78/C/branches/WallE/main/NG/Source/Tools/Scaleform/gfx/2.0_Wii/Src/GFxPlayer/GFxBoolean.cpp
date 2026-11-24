/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxBoolean.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8048AB30 -> 0x8048BB38
*/
// total size: 0x30
class GASBooleanObject : public GASObject {
    // Members
    bool Value; // offset 0x2E, size 0x1
};
// total size: 0x4C
class GASBooleanProto : public GASPrototype {};
// total size: 0x4C
class GASPrototype : public GASBooleanObject {
    // Members
    class GASFunctionWeakRef Constructor; // offset 0x30, size 0xC
    class GASFunctionWeakRef __Constructor__; // offset 0x3C, size 0xC
    class garray * pInterfaces; // offset 0x48, size 0x4
};
// total size: 0x34
class GASBooleanCtorFunction : public GASFunctionObject {};
static class GASNameFunction GAS_BooleanFunctionTable[3]; // size: 0x18, address: 0x806E7BD8
struct {} __vt__22GASBooleanCtorFunction; // size: 0xD8, address: 0x80734D78
struct {} __vt__15GASBooleanProto; // size: 0xB8, address: 0x80734E50
struct {} __vt__49GASPrototype<16GASBooleanObject,14GASEnvironment>; // size: 0xB8, address: 0x80734F08
struct {} __vt__16GASBooleanObject; // size: 0xB4, address: 0x80734FC0
// signature: GASBooleanObject::GetTextValue(GASEnvironment *) const
// Range: 0x8048AB30 -> 0x8048AB48
char * GASBooleanObject::GetTextValue() const {
}
// signature: GASBooleanObject::SetValue(GASEnvironment *, const GASValue &)
// Range: 0x8048AB50 -> 0x8048AB84
void GASBooleanObject::SetValue(class GASBooleanObject * this /* r31 */) {
}
// Range: 0x8048AB90 -> 0x8048ABA4
class GASValue GASBooleanObject::GetValue() const {
}
// Range: 0x8048ABB0 -> 0x8048AC74
static void GAS_BooleanToString(class GASFnCall & fn /* r31 */) {
}
// Range: 0x8048AC80 -> 0x8048AD10
static void GAS_BooleanValueOf(class GASFnCall & fn /* r30 */) {
}
// Range: 0x8048AD10 -> 0x8048B008
void * GASBooleanProto::GASBooleanProto(class GASBooleanProto * this /* r29 */, class GASStringContext * psc /* r30 */, class GASObject * pprototype /* r31 */, class GASFunctionRef & constructor /* r25 */) {
    // References
    // -> static class GASNameFunction GAS_BooleanFunctionTable[3];
    // -> struct {} __vt__15GASBooleanProto;
    // -> struct {} __vt__49GASPrototype<16GASBooleanObject,14GASEnvironment>;
}
// signature: GASBooleanCtorFunction::GASBooleanCtorFunction(GASStringContext *)
// Range: 0x8048B180 -> 0x8048B1CC
void * GASBooleanCtorFunction::GASBooleanCtorFunction(class GASBooleanCtorFunction * this /* r31 */) {
    // References
    // -> struct {} __vt__22GASBooleanCtorFunction;
}
// Range: 0x8048B1D0 -> 0x8048B258
void GASBooleanCtorFunction::GlobalCtor(class GASFnCall & fn /* r30 */) {
}
