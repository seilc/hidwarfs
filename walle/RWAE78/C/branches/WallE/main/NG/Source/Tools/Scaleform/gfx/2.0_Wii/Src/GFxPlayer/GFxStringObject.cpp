/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxStringObject.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80554700 -> 0x80557008
*/
// total size: 0x34
class GASStringObject : public GASObject {
    // Members
    class GASString Value; // offset 0x30, size 0x4
};
// total size: 0x50
class GASStringProto : public GASPrototype {};
// total size: 0x50
class GASPrototype : public GASStringObject {
    // Members
    class GASFunctionWeakRef Constructor; // offset 0x34, size 0xC
    class GASFunctionWeakRef __Constructor__; // offset 0x40, size 0xC
    class garray * pInterfaces; // offset 0x4C, size 0x4
};
// total size: 0x34
class GASStringCtorFunction : public GASFunctionObject {};
static class GASNameFunction GAS_StringFunctionTable[14]; // size: 0x70, address: 0x806E8A88
class GASNameFunction StaticFunctionTable[2]; // size: 0x10, address: 0x806E8AF8
struct {} __vt__21GASStringCtorFunction; // size: 0xD8, address: 0x8073CD00
struct {} __vt__14GASStringProto; // size: 0xB8, address: 0x8073CDD8
struct {} __vt__48GASPrototype<15GASStringObject,14GASEnvironment>; // size: 0xB8, address: 0x8073CE90
struct {} __vt__15GASStringObject; // size: 0xB4, address: 0x8073CF48
// signature: GASStringObject::GetTextValue(GASEnvironment *) const
// Range: 0x80554700 -> 0x8055470C
char * GASStringObject::GetTextValue() const {
}
// Range: 0x80554710 -> 0x80554838
bool GASStringObject::GetMemberRaw(class GASStringObject * this /* r29 */, class GASStringContext * psc /* r30 */, class GASString & name /* r27 */, class GASValue * val /* r31 */) {
}
// signature: GASStringObject::SetValue(GASEnvironment *, const GASValue &)
// Range: 0x80554840 -> 0x805548A8
void GASStringObject::SetValue(class GASStringObject * this /* r31 */, class GASEnvironment * penv /* r0 */) {
    // Local variables
    class GASString s; // r1+0x8
}
// Range: 0x805548B0 -> 0x805548D0
class GASValue GASStringObject::GetValue() const {
}
// Range: 0x805548D0 -> 0x80554A20
void GASStringProto::StringCharAt(class GASFnCall & fn /* r29 */) {
    // Local variables
    class GASString retVal; // r1+0xC
    int index; // r30
}
// Range: 0x80554A20 -> 0x80554B30
void GASStringProto::StringCharCodeAt(class GASFnCall & fn /* r29 */) {
    {
        // Range: 0x80554A50 -> 0x80554AE4
        // Local variables
        int index; // r30
    }
}
// Range: 0x80554B30 -> 0x80554C6C
void GASStringProto::StringConcat(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASStringObject * pThis; // r0
    class GFxString retVal; // r1+0x10

    {
        // Range: 0x80554B6C -> 0x80554BA4
        // Local variables
        int i; // r31

        {
            // Range: 0x80554B6C -> 0x80554BA4
            // Local variables
            class GASString s; // r1+0xC
        }
    }
}
// Range: 0x80554C70 -> 0x80554F08
void GASStringProto::StringIndexOf(class GASFnCall & fn /* r27 */) {
    // Local variables
    class GASStringObject * pThis; // r0
    class GASString searchAddRef; // r1+0x18
    char * search; // r1+0x14
    char * str; // r1+0x10
    int start; // r29
    unsigned long chr; // r0
    unsigned long first; // r0

    {
        // Range: 0x80554D98 -> 0x80554E9C
        // Local variables
        int i; // r28

        {
            // Range: 0x80554DA0 -> 0x80554E9C
            // Local variables
            unsigned long c2; // r0
            unsigned long c1; // r0
            char * s2; // r1+0x8
            char * s1; // r1+0xC
        }
    }
}
// Range: 0x80554F10 -> 0x80555194
void GASStringProto::StringLastIndexOf(class GASFnCall & fn /* r31 */) {
    // Local variables
    class GASStringObject * pThis; // r0
    class GASString asStr; // r1+0x1C
    class GASString searchAddRef; // r1+0x18
    char * str; // r1+0x14
    char * search; // r1+0x10
    int start; // r28
    unsigned long chr; // r0
    unsigned long first; // r0
    int lastIndex; // r27

    {
        // Range: 0x8055508C -> 0x805550F4
        // Local variables
        int i; // r26

        {
            // Range: 0x80555094 -> 0x805550F4
            // Local variables
            unsigned long c2; // r0
            unsigned long c1; // r0
            char * s2; // r1+0x8
            char * s1; // r1+0xC
        }
    }
}
// Range: 0x805551A0 -> 0x80555300
void GASStringProto::StringSlice(class GASFnCall & fn /* r28 */) {
    // Local variables
    class GASStringObject * pThis; // r0
    int start; // r31
    int length; // r29

    {
        // Range: 0x80555204 -> 0x8055527C
        // Local variables
        int end; // r0
    }
}
// Range: 0x80555300 -> 0x80555478
void GASStringProto::StringSplit(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASStringObject * pThis; // r0
    char * psearch; // r28
    int limit; // r7
    class GPtr retVal; // r1+0xC
}
// signature: GASStringProto::StringSplit(GASEnvironment *, const GASString &, const char *, int)
// Range: 0x80555480 -> 0x805557A4
class GPtr GASStringProto::StringSplit(class GPtr * retVal /* r28 */, class GASEnvironment * penv /* r22 */, class GASString & str /* r21 */, char * delimiters /* r29 */, int limit /* r30 */) {
    // Local variables
    char * search; // r0
    class GASStringContext * psc; // r31
    char * pstr; // r1+0x20
    unsigned long c1; // r27
    unsigned long c2; // r0

    {
        // Range: 0x80555568 -> 0x80555610
        // Local variables
        class GFxString tmpStr; // r1+0x1C
    }
    {
        // Range: 0x80555610 -> 0x8055578C
        // Local variables
        char * start; // r24
        int count; // r25

        {
            // Range: 0x8055563C -> 0x8055578C
            // Local variables
            char * pnext; // r21
            char * prev; // r22
            char * end; // r23
            char * s2; // r1+0x18
        }
    }
}
// Range: 0x805557C0 -> 0x80555880
class GASString GASStringProto::StringSubstring(class GASString & self /* r29 */, int start /* r30 */, int length /* r31 */) {
    // Local variables
    int utf8Len; // r0
}
// signature: GASStringProto::CreateStringFromCStr(GASStringContext *, const char *, const char *)
// Range: 0x80555880 -> 0x8055591C
class GASString GASStringProto::CreateStringFromCStr(class GASStringContext * psc /* r30 */, char * start /* r31 */) {
    // Local variables
    int len; // r6
}
// Range: 0x80555920 -> 0x80555A54
void GASStringProto::StringSubstr(class GASFnCall & fn /* r28 */) {
    // Local variables
    class GASStringObject * pThis; // r0
    int start; // r30
    int length; // r29
}
// Range: 0x80555A60 -> 0x80555BE8
void GASStringProto::StringSubstring(class GASFnCall & fn /* r28 */) {
    // Local variables
    class GASStringObject * pThis; // r0
    int start; // r31
    int length; // r29

    {
        // Range: 0x80555AC4 -> 0x80555B64
        // Local variables
        int end; // r29

        {
            // Range: 0x80555AF0 -> 0x80555B54
            // Local variables
            int utf8Len; // r0
        }
    }
}
// Range: 0x80555BF0 -> 0x80555C84
void GASStringProto::StringToLowerCase(class GASFnCall & fn /* r31 */) {
}
// signature: GASStringProto::StringToString(const GASFnCall &)
// Range: 0x80555C90 -> 0x80555D00
void GASStringProto::StringToString() {
}
// Range: 0x80555D00 -> 0x80555D94
void GASStringProto::StringToUpperCase(class GASFnCall & fn /* r31 */) {
}
// signature: GASStringProto::StringValueOf(const GASFnCall &)
// Range: 0x80555DA0 -> 0x80555E10
void GASStringProto::StringValueOf() {
}
// Range: 0x80555E10 -> 0x80556130
void * GASStringProto::GASStringProto(class GASStringProto * this /* r29 */, class GASStringContext * psc /* r30 */, class GASObject * pprototype /* r31 */, class GASFunctionRef & constructor /* r25 */) {
    // References
    // -> static class GASNameFunction GAS_StringFunctionTable[14];
    // -> struct {} __vt__14GASStringProto;
    // -> struct {} __vt__48GASPrototype<15GASStringObject,14GASEnvironment>;
    // -> struct {} __vt__15GASStringObject;
}
// Range: 0x805562D0 -> 0x805563FC
void * GASStringCtorFunction::GASStringCtorFunction(class GASStringCtorFunction * this /* r30 */, class GASStringContext * psc /* r31 */) {
    // References
    // -> class GASNameFunction StaticFunctionTable[2];
    // -> struct {} __vt__21GASStringCtorFunction;
}
// Range: 0x80556400 -> 0x805564FC
void GASStringCtorFunction::StringFromCharCode(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GFxString result; // r1+0xC

    {
        // Range: 0x80556420 -> 0x8055644C
        // Local variables
        int i; // r31

        {
            // Range: 0x80556420 -> 0x8055644C
            // Local variables
            unsigned long c; // r0
        }
    }
}
// Range: 0x80556500 -> 0x805565EC
class GASObject * GASStringCtorFunction::CreateNewObject(class GASStringContext * psc /* r30 */) const {
    // Local variables
    class GASObject * o; // r31

    // References
    // -> struct {} __vt__15GASStringObject;
}
// Range: 0x805565F0 -> 0x805566D8
void GASStringCtorFunction::GlobalCtor(class GASFnCall & fn /* r30 */) {
}
