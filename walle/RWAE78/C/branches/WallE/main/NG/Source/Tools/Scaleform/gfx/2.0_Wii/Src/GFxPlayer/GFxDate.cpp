/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxDate.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804A8240 -> 0x804ACFB8
*/
// total size: 0x60
class GASDate : public GASObject {
    // Members
    long long Date; // offset 0x30, size 0x8
    int Time; // offset 0x38, size 0x4
    int Year; // offset 0x3C, size 0x4
    int JDate; // offset 0x40, size 0x4
    long long LDate; // offset 0x48, size 0x8
    int LTime; // offset 0x50, size 0x4
    int LYear; // offset 0x54, size 0x4
    int LJDate; // offset 0x58, size 0x4
    int LocalOffset; // offset 0x5C, size 0x4
};
// total size: 0x80
class GASDateProto : public GASPrototype {};
// total size: 0x80
class GASPrototype : public GASDate {
    // Members
    class GASFunctionWeakRef Constructor; // offset 0x60, size 0xC
    class GASFunctionWeakRef __Constructor__; // offset 0x6C, size 0xC
    class garray * pInterfaces; // offset 0x78, size 0x4
};
// total size: 0x34
class GASDateCtorFunction : public GASFunctionObject {};
static int months[2][12]; // size: 0x60, address: 0x806E7C70
static char * daynames[7]; // size: 0x1C, address: 0x80736D58
static char * monthnames[12]; // size: 0x30, address: 0x80736D78
static class GASNameFunction GAS_DateFunctionTable[40]; // size: 0x140, address: 0x806E7CD0
class GASNameFunction StaticFunctionTable[2]; // size: 0x10, address: 0x806E7E10
// Range: 0x804A8240 -> 0x804A82A0
void * GASDate::GASDate(class GASDate * this /* r30 */, class GASEnvironment * penv /* r31 */) {
    // References
    // -> struct {} __vt__7GASDate;
}
// Range: 0x804A82A0 -> 0x804A831C
void GASDate::commonInit(class GASDate * this /* r30 */, class GASEnvironment * penv /* r31 */) {
}
// signature: GASDate::GetTextValue(GASEnvironment *) const
// Range: 0x804A8320 -> 0x804A8328
char * GASDate::GetTextValue() const {
}
// Range: 0x804A8330 -> 0x804A8548
void GASDate::UpdateLocal() {
    {
        // Range: 0x804A8334 -> 0x804A8544
        // Local variables
        int dd; // r6
    }
}
// Range: 0x804A8550 -> 0x804A8754
void GASDate::UpdateGMT() {
    {
        // Range: 0x804A8554 -> 0x804A8750
        // Local variables
        int dd; // r6
    }
}
// signature: GASDateProto::DateGetTimezoneOffset(const GASFnCall &)
// Range: 0x804A8760 -> 0x804A87FC
void GASDateProto::DateGetTimezoneOffset() {
}
// signature: GASDateProto::DateGetMonth(const GASFnCall &)
// Range: 0x804A8800 -> 0x804A8944
void GASDateProto::DateGetMonth() {
    // Local variables
    class GASDate * pThis; // r0

    {
        // Range: 0x804A8824 -> 0x804A88FC
        // Local variables
        int i; // r31
    }

    // References
    // -> static int months[2][12];
}
// signature: GASDateProto::DateGetDate(const GASFnCall &)
// Range: 0x804A8950 -> 0x804A8BBC
void GASDateProto::DateGetDate() {
    // Local variables
    class GASDate * pThis; // r0

    {
        // Range: 0x804A8A4C -> 0x804A8B74
        // Local variables
        int i; // r6
    }

    // References
    // -> static int months[2][12];
}
// Range: 0x804A8BC0 -> 0x804A8C80
void GASDateProto::DateGetDay(class GASFnCall & fn /* r31 */) {
}
// Range: 0x804A8C80 -> 0x804A8CF4
void GASDateProto::DateGetTime(class GASFnCall & fn /* r31 */) {
}
// signature: GASDateProto::DateGetHours(const GASFnCall &)
// Range: 0x804A8D00 -> 0x804A8D98
void GASDateProto::DateGetHours() {
}
// signature: GASDateProto::DateGetMinutes(const GASFnCall &)
// Range: 0x804A8DA0 -> 0x804A8E60
void GASDateProto::DateGetMinutes() {
}
// signature: GASDateProto::DateGetSeconds(const GASFnCall &)
// Range: 0x804A8E60 -> 0x804A8F20
void GASDateProto::DateGetSeconds() {
}
// signature: GASDateProto::DateGetMilliseconds(const GASFnCall &)
// Range: 0x804A8F20 -> 0x804A8FC0
void GASDateProto::DateGetMilliseconds() {
}
// signature: GASDateProto::DateGetYear(const GASFnCall &)
// Range: 0x804A8FC0 -> 0x804A9044
void GASDateProto::DateGetYear() {
}
// signature: GASDateProto::DateGetFullYear(const GASFnCall &)
// Range: 0x804A9050 -> 0x804A90D0
void GASDateProto::DateGetFullYear() {
}
// Range: 0x804A90D0 -> 0x804A92C0
void GASDateProto::DateSetYear(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASDate * pThis; // r31
    int newVal; // r4
}
// Range: 0x804A92C0 -> 0x804A94A4
void GASDateProto::DateSetFullYear(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASDate * pThis; // r31
    int newVal; // r4
}
// Range: 0x804A94B0 -> 0x804A96EC
void GASDateProto::DateSetMonth(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASDate * pThis; // r31
    int newVal; // r5

    {
        // Range: 0x804A94FC -> 0x804A96CC
        // Local variables
        int i; // r6

        {
            // Range: 0x804A94FC -> 0x804A96CC
            // Local variables
            int d; // r6
        }
    }

    // References
    // -> static int months[2][12];
}
// Range: 0x804A96F0 -> 0x804A98E4
void GASDateProto::DateSetDate(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASDate * pThis; // r31
    int newVal; // r5

    {
        // Range: 0x804A973C -> 0x804A98C4
        // Local variables
        int i; // r6

        {
            // Range: 0x804A973C -> 0x804A98C4
            // Local variables
            int d; // r6
        }
    }

    // References
    // -> static int months[2][12];
}
// Range: 0x804A98F0 -> 0x804A9AF8
void GASDateProto::DateSetTime(class GASFnCall & fn /* r24 */) {
    // Local variables
    class GASDate * pThis; // r27
}
// Range: 0x804A9B00 -> 0x804A9BC8
void GASDateProto::DateSetHours(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASDate * pThis; // r0
    int newVal; // r8
    int d; // r6
}
// Range: 0x804A9BD0 -> 0x804A9CC0
void GASDateProto::DateSetMinutes(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASDate * pThis; // r0
    int newVal; // r10
    int d; // r6
}
// Range: 0x804A9CC0 -> 0x804A9DA8
void GASDateProto::DateSetSeconds(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASDate * pThis; // r0
    int newVal; // r9
    int d; // r6
}
// Range: 0x804A9DB0 -> 0x804A9E74
void GASDateProto::DateSetMilliseconds(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASDate * pThis; // r0
    int newVal; // r8
    int d; // r6
}
// signature: GASDateProto::DateGetUTCMonth(const GASFnCall &)
// Range: 0x804A9E80 -> 0x804A9FC4
void GASDateProto::DateGetUTCMonth() {
    // Local variables
    class GASDate * pThis; // r0

    {
        // Range: 0x804A9EA4 -> 0x804A9F7C
        // Local variables
        int i; // r31
    }

    // References
    // -> static int months[2][12];
}
// signature: GASDateProto::DateGetUTCDate(const GASFnCall &)
// Range: 0x804A9FD0 -> 0x804AA23C
void GASDateProto::DateGetUTCDate() {
    // Local variables
    class GASDate * pThis; // r0

    {
        // Range: 0x804AA0CC -> 0x804AA1F4
        // Local variables
        int i; // r6
    }

    // References
    // -> static int months[2][12];
}
// Range: 0x804AA240 -> 0x804AA300
void GASDateProto::DateGetUTCDay(class GASFnCall & fn /* r31 */) {
}
// signature: GASDateProto::DateGetUTCHours(const GASFnCall &)
// Range: 0x804AA300 -> 0x804AA398
void GASDateProto::DateGetUTCHours() {
}
// signature: GASDateProto::DateGetUTCMinutes(const GASFnCall &)
// Range: 0x804AA3A0 -> 0x804AA460
void GASDateProto::DateGetUTCMinutes() {
}
// signature: GASDateProto::DateGetUTCSeconds(const GASFnCall &)
// Range: 0x804AA460 -> 0x804AA520
void GASDateProto::DateGetUTCSeconds() {
}
// signature: GASDateProto::DateGetUTCMilliseconds(const GASFnCall &)
// Range: 0x804AA520 -> 0x804AA5C0
void GASDateProto::DateGetUTCMilliseconds() {
}
// signature: GASDateProto::DateGetUTCYear(const GASFnCall &)
// Range: 0x804AA5C0 -> 0x804AA644
void GASDateProto::DateGetUTCYear() {
}
// signature: GASDateProto::DateGetUTCFullYear(const GASFnCall &)
// Range: 0x804AA650 -> 0x804AA6D0
void GASDateProto::DateGetUTCFullYear() {
}
// Range: 0x804AA6D0 -> 0x804AA8C0
void GASDateProto::DateSetUTCYear(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASDate * pThis; // r31
    int newVal; // r4
}
// Range: 0x804AA8C0 -> 0x804AAAA4
void GASDateProto::DateSetUTCFullYear(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASDate * pThis; // r31
    int newVal; // r4
}
// Range: 0x804AAAB0 -> 0x804AACEC
void GASDateProto::DateSetUTCMonth(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASDate * pThis; // r31
    int newVal; // r5

    {
        // Range: 0x804AAAFC -> 0x804AACCC
        // Local variables
        int i; // r6

        {
            // Range: 0x804AAAFC -> 0x804AACCC
            // Local variables
            int d; // r6
        }
    }

    // References
    // -> static int months[2][12];
}
// Range: 0x804AACF0 -> 0x804AAEE4
void GASDateProto::DateSetUTCDate(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASDate * pThis; // r31
    int newVal; // r5

    {
        // Range: 0x804AAD3C -> 0x804AAEC4
        // Local variables
        int i; // r6

        {
            // Range: 0x804AAD3C -> 0x804AAEC4
            // Local variables
            int d; // r6
        }
    }

    // References
    // -> static int months[2][12];
}
// Range: 0x804AAEF0 -> 0x804AAFB8
void GASDateProto::DateSetUTCHours(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASDate * pThis; // r0
    int newVal; // r8
    int d; // r6
}
// Range: 0x804AAFC0 -> 0x804AB0B0
void GASDateProto::DateSetUTCMinutes(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASDate * pThis; // r0
    int newVal; // r10
    int d; // r6
}
// Range: 0x804AB0B0 -> 0x804AB198
void GASDateProto::DateSetUTCSeconds(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASDate * pThis; // r0
    int newVal; // r9
    int d; // r6
}
// Range: 0x804AB1A0 -> 0x804AB264
void GASDateProto::DateSetUTCMilliseconds(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASDate * pThis; // r0
    int newVal; // r8
    int d; // r6
}
// Range: 0x804AB270 -> 0x804AB58C
void GASDateProto::DateToString(class GASFnCall & fn /* r25 */) {
    // Local variables
    class GASDate * pThis; // r0
    int month; // r27
    int day; // r26
    char out[128]; // r1+0x20

    {
        // Range: 0x804AB2A0 -> 0x804AB3D4
        // Local variables
        int i; // r7
    }

    // References
    // -> static char * daynames[7];
    // -> static char * monthnames[12];
    // -> static int months[2][12];
}
// Range: 0x804AB590 -> 0x804AB604
void GASDateProto::DateValueOf(class GASFnCall & fn /* r31 */) {
}
// Range: 0x804AB610 -> 0x804AB904
void * GASDateProto::GASDateProto(class GASDateProto * this /* r29 */, class GASStringContext * psc /* r30 */, class GASObject * pprototype /* r31 */, class GASFunctionRef & constructor /* r25 */) {
    // References
    // -> static class GASNameFunction GAS_DateFunctionTable[40];
    // -> struct {} __vt__12GASDateProto;
    // -> struct {} __vt__39GASPrototype<7GASDate,14GASEnvironment>;
}
// Range: 0x804ABA80 -> 0x804ABBAC
void * GASDateCtorFunction::GASDateCtorFunction(class GASDateCtorFunction * this /* r30 */, class GASStringContext * psc /* r31 */) {
    // References
    // -> class GASNameFunction StaticFunctionTable[2];
    // -> struct {} __vt__19GASDateCtorFunction;
}
// Range: 0x804ABBB0 -> 0x804ABEC0
void GASDateCtorFunction::DateUTC(class GASFnCall & fn /* r29 */) {
    {
        // Range: 0x804ABBD4 -> 0x804ABE70
        // Local variables
        double ms; // f31
        double days; // f30
        int i; // r3
    }

    // References
    // -> static int months[2][12];
}
// Range: 0x804ABEC0 -> 0x804AC76C
void GASDateCtorFunction::GlobalCtor(class GASFnCall & fn /* r25 */) {
    {
        // Range: 0x804AC0EC -> 0x804AC530
        // Local variables
        long ms; // r26
        long days; // r29
        int i; // r3
    }
    {
        // Range: 0x804AC530 -> 0x804AC734
        // Local variables
        long long t; // r0:r0
    }

    // References
    // -> static int months[2][12];
}
