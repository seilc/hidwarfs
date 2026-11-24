/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxNumber.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80509040 -> 0x8050A638
*/
// total size: 0x40
class GASNumberObject : public GASObject {
    // Members
    double Value; // offset 0x30, size 0x8
    class GFxString StringValue; // offset 0x38, size 0x4
};
// total size: 0x58
class GASNumberProto : public GASPrototype {};
// total size: 0x58
class GASPrototype : public GASNumberObject {
    // Members
    class GASFunctionWeakRef Constructor; // offset 0x3C, size 0xC
    class GASFunctionWeakRef __Constructor__; // offset 0x48, size 0xC
    class garray * pInterfaces; // offset 0x54, size 0x4
};
// total size: 0x8
class GASNameNumberFunc {
    // Members
    char * Name; // offset 0x0, size 0x4
    double (* Function)(); // offset 0x4, size 0x4
};
// total size: 0x34
class GASNumberCtorFunction : public GASFunctionObject {};
static unsigned char GFxNaN_Bytes[8]; // size: 0x8, address: 0x808DF778
static unsigned char GFxPOSITIVE_INFINITY_Bytes[8]; // size: 0x8, address: 0x808DF780
static unsigned char GFxNEGATIVE_INFINITY_Bytes[8]; // size: 0x8, address: 0x808DF788
static unsigned char GFxMIN_VALUE_Bytes[8]; // size: 0x8, address: 0x808DF790
static unsigned char GFxMAX_VALUE_Bytes[8]; // size: 0x8, address: 0x808DF798
static unsigned char GFxNEGATIVE_ZERO_Bytes[8]; // size: 0x8, address: 0x808DF7A0
static unsigned char GFxPOSITIVE_ZERO_Bytes[8]; // size: 0x8, address: 0x808E11D8
static class GASNameFunction NumberFunctionTable[3]; // size: 0x18, address: 0x806E82B0
static class GASNameNumberFunc GASNumberConstTable[6]; // size: 0x30, address: 0x806E82C8
struct {} __vt__21GASNumberCtorFunction; // size: 0xD8, address: 0x80739AD0
struct {} __vt__14GASNumberProto; // size: 0xB8, address: 0x80739BA8
struct {} __vt__48GASPrototype<15GASNumberObject,14GASEnvironment>; // size: 0xB8, address: 0x80739C60
struct {} __vt__15GASNumberObject; // size: 0xB4, address: 0x80739D18
// Range: 0x80509040 -> 0x80509070
double GASNumberUtil::NaN() {
    // Local variables
    double v; // r1+0x8

    // References
    // -> static unsigned char GFxNaN_Bytes[8];
}
// Range: 0x80509070 -> 0x805090A0
double GASNumberUtil::POSITIVE_INFINITY() {
    // Local variables
    double v; // r1+0x8

    // References
    // -> static unsigned char GFxPOSITIVE_INFINITY_Bytes[8];
}
// Range: 0x805090A0 -> 0x805090D0
double GASNumberUtil::NEGATIVE_INFINITY() {
    // Local variables
    double v; // r1+0x8

    // References
    // -> static unsigned char GFxNEGATIVE_INFINITY_Bytes[8];
}
// Range: 0x805090D0 -> 0x80509100
double GASNumberUtil::MIN_VALUE() {
    // Local variables
    double v; // r1+0x8

    // References
    // -> static unsigned char GFxMIN_VALUE_Bytes[8];
}
// Range: 0x80509100 -> 0x80509130
double GASNumberUtil::MAX_VALUE() {
    // Local variables
    double v; // r1+0x8

    // References
    // -> static unsigned char GFxMAX_VALUE_Bytes[8];
}
// Range: 0x80509130 -> 0x80509168
bool GASNumberUtil::IsPOSITIVE_ZERO(double v /* r1+0x8 */) {
    // References
    // -> static unsigned char GFxPOSITIVE_ZERO_Bytes[8];
}
// Range: 0x80509170 -> 0x805091A8
bool GASNumberUtil::IsNEGATIVE_ZERO(double v /* r1+0x8 */) {
    // References
    // -> static unsigned char GFxNEGATIVE_ZERO_Bytes[8];
}
// Range: 0x805091B0 -> 0x80509464
char * GASNumberUtil::ToString(double value /* f31 */, class GFxString & destStr /* r30 */, int radix /* r9 */) {
    // Local variables
    char buffer[129]; // r1+0x34
    char * pbuf; // r6
    char * defaultFmtStr; // r5
    char * fmtStr; // r5
    char fmtStrBuf[20]; // r1+0x20

    {
        // Range: 0x8050934C -> 0x80509434
        // Local variables
        char * plastSignificantBit; // r31
        unsigned int mask; // r8
        unsigned int i; // r7
        unsigned int ival; // r0
    }
}
// signature: GASNumberObject::GetTextValue(GASEnvironment *) const
// Range: 0x80509470 -> 0x8050947C
char * GASNumberObject::GetTextValue() const {
}
// signature: GASNumberObject::SetValue(GASEnvironment *, const GASValue &)
// Range: 0x80509480 -> 0x805094B4
void GASNumberObject::SetValue(class GASNumberObject * this /* r31 */) {
}
// Range: 0x805094C0 -> 0x805094D4
class GASValue GASNumberObject::GetValue() const {
}
// signature: GASNumberObject::ToString(GFxString &, int) const
// Range: 0x805094E0 -> 0x805094F4
char * GASNumberObject::ToString(class GASNumberObject * this /* r6 */) const {
}
// Range: 0x80509500 -> 0x80509618
static void GAS_NumberToString(class GASFnCall & fn /* r29 */) {
    // Local variables
    class GASNumberObject * pthis; // r0
    int radix; // r30
    class GFxString str; // r1+0xC
}
// Range: 0x80509620 -> 0x805096BC
static void GAS_NumberValueOf(class GASFnCall & fn /* r31 */) {
}
// Range: 0x805096C0 -> 0x805099D8
void * GASNumberProto::GASNumberProto(class GASNumberProto * this /* r29 */, class GASStringContext * psc /* r30 */, class GASObject * pprototype /* r31 */, class GASFunctionRef & constructor /* r25 */) {
    // References
    // -> static class GASNameFunction NumberFunctionTable[3];
    // -> struct {} __vt__14GASNumberProto;
    // -> struct {} __vt__48GASPrototype<15GASNumberObject,14GASEnvironment>;
    // -> struct {} __vt__15GASNumberObject;
}
// Range: 0x80509B90 -> 0x80509CB8
void * GASNumberCtorFunction::GASNumberCtorFunction(class GASNumberCtorFunction * this /* r29 */, class GASStringContext * psc /* r30 */) {
    // References
    // -> static class GASNameNumberFunc GASNumberConstTable[6];
    // -> struct {} __vt__21GASNumberCtorFunction;
}
// Range: 0x80509CC0 -> 0x80509D60
void GASNumberCtorFunction::GlobalCtor(class GASFnCall & fn /* r31 */) {
}
