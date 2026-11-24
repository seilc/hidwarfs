/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxValue.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x805A5990 -> 0x805A8B7C
*/
// total size: 0x8
class RawCompareKey {
    // Members
    char * pStr; // offset 0x0, size 0x4
    unsigned long Hash; // offset 0x4, size 0x4
};
struct {} __vt__9GASFnCall; // size: 0x10, address: 0x8073F6B8
struct {} __vt__16GASValueProperty; // size: 0xC, address: 0x8073F6C8
// Range: 0x805A5990 -> 0x805A5B68
static bool StringToNumber(double * result /* r30 */, char * str /* r31 */) {
    // Local variables
    char * tail; // r1+0x8
    unsigned long len; // reg65535

    {
        // Range: 0x805A5A64 -> 0x805A5B30
        // Local variables
        int sign; // r27
        char * positive; // r29
        unsigned long plen; // r28
    }

    // References
    // -> class __locale _current_locale;
}
// Range: 0x805A5B70 -> 0x805A5D04
void * GASValue::GASValue(class GASValue * this /* r31 */, class GASValue & v /* r30 */) {
}
// Range: 0x805A5D10 -> 0x805A5EA8
void GASValue::operator=(class GASValue * this /* r30 */, class GASValue & v /* r31 */) {
}
// Range: 0x805A5EB0 -> 0x805A5F78
void * GASValue::GASValue(class GASValue * this /* r30 */, class GASObject * pobj /* r31 */) {
}
// signature: GASValue::GASValue(GFxASCharacter *)
// Range: 0x805A5F80 -> 0x805A5FE8
void * GASValue::GASValue(class GASValue * this /* r31 */) {
}
// Range: 0x805A5FF0 -> 0x805A6078
void * GASValue::GASValue(class GASValue * this /* r30 */, void (* func)(class GASFnCall & fn) /* r31 */) {
}
// signature: GASValue::GASValue(const GASFunctionRef &)
// Range: 0x805A6080 -> 0x805A60C0
void * GASValue::GASValue(class GASValue * this /* r31 */) {
}
// Range: 0x805A60C0 -> 0x805A6180
void * GASValue::GASValue(class GASValue * this /* r28 */, class GASFunctionRef & getter /* r29 */, class GASFunctionRef & setter /* r30 */) {
    // References
    // -> struct {} __vt__16GASValueProperty;
}
// signature: GASValue::ToStringImpl(GASEnvironment *, int, bool) const
// Range: 0x805A6180 -> 0x805A6684
class GASString GASValue::ToStringImpl(class GASString * stringVal /* r30 */, class GASValue * this /* r27 */, class GASEnvironment * penv /* r31 */, int precision /* r29 */, bool debug /* r28 */) const {
    {
        // Range: 0x805A61FC -> 0x805A6288
        // Local variables
        class GFxString stringValue; // r1+0x14
    }
    {
        // Range: 0x805A6384 -> 0x805A65E8
        // Local variables
        class GASObjectInterface * piobj; // r28
        class GASValue toStringFunc; // r1+0x28

        {
            // Range: 0x805A63E4 -> 0x805A6490
            // Local variables
            class GASValue result; // r1+0x18
        }
        {
            // Range: 0x805A64D8 -> 0x805A65E8
            // Local variables
            char * ptext; // r3
        }
    }
}
// signature: GASValue::ToString(GASEnvironment *, int) const
// Range: 0x805A6690 -> 0x805A6698
class GASString GASValue::ToString() const {
}
// signature: GASValue::ToDebugString(GASEnvironment *) const
// Range: 0x805A66A0 -> 0x805A66AC
class GASString GASValue::ToDebugString() const {
}
// signature: GASValue::ToStringVersioned(GASEnvironment *, unsigned int) const
// Range: 0x805A66B0 -> 0x805A6714
class GASString GASValue::ToStringVersioned() const {
}
// Range: 0x805A6720 -> 0x805A69C8
double GASValue::ToNumber(class GASValue * this /* r28 */, class GASEnvironment * penv /* r29 */) const {
    {
        // Range: 0x805A675C -> 0x805A678C
        // Local variables
        double num; // r1+0x8
    }
    {
        // Range: 0x805A67E4 -> 0x805A6974
        // Local variables
        class GASObjectInterface * piobj; // r30
        class GASValue toValueFunc; // r1+0x20

        {
            // Range: 0x805A6814 -> 0x805A68E0
            // Local variables
            double retVal; // f31

            {
                // Range: 0x805A6848 -> 0x805A68A4
                // Local variables
                class GASValue result; // r1+0x10
            }
        }
        {
            // Range: 0x805A68E0 -> 0x805A6954
            // Local variables
            char * ptextval; // r0
        }
    }
}
// signature: GASValue::ToInt32(GASEnvironment *) const
// Range: 0x805A69D0 -> 0x805A6A9C
long GASValue::ToInt32() const {
    // Local variables
    double v; // f31
    double anv; // f0
    unsigned long uv; // r0
    long rv; // r3
}
// signature: GASValue::ToUInt32(GASEnvironment *) const
// Range: 0x805A6AA0 -> 0x805A6B58
unsigned long GASValue::ToUInt32() const {
    // Local variables
    double v; // f31
    double anv; // f0
    unsigned long uv; // r3
}
// signature: GASValue::ToBool(const GASEnvironment *) const
// Range: 0x805A6B60 -> 0x805A6D20
bool GASValue::ToBool() const {
    {
        // Range: 0x805A6B90 -> 0x805A6C28
        // Local variables
        double num; // r1+0x18
    }
}
// Range: 0x805A6D20 -> 0x805A6D50
class GASObject * GASValue::ToObject() const {
}
// signature: GASValue::ToASCharacter(const GASEnvironment *) const
// Range: 0x805A6D50 -> 0x805A6DB4
class GFxASCharacter * GASValue::ToASCharacter(class GASValue * this /* r31 */) const {
}
// signature: GASValue::ToObjectInterface(const GASEnvironment *) const
// Range: 0x805A6DC0 -> 0x805A6E70
class GASObjectInterface * GASValue::ToObjectInterface(class GASValue * this /* r31 */) const {
}
// Range: 0x805A6E70 -> 0x805A6E94
class GASFunctionRef GASValue::ToFunction() const {
}
// signature: GASValue::ConvertToNumber(GASEnvironment *)
// Range: 0x805A6EA0 -> 0x805A6EF8
void GASValue::ConvertToNumber(class GASValue * this /* r31 */) {
}
// signature: GASValue::ConvertToStringVersioned(GASEnvironment *, unsigned int)
// Range: 0x805A6F00 -> 0x805A6F7C
void GASValue::ConvertToStringVersioned(class GASValue * this /* r31 */, class GASEnvironment * pEnv /* r0 */) {
    // Local variables
    class GASString str; // r1+0x8
}
// Range: 0x805A6F80 -> 0x805A7058
void GASValue::SetAsObject(class GASValue * this /* r30 */, class GASObject * obj /* r31 */) {
}
// signature: GASValue::SetAsCharacter(GFxASCharacter *)
// Range: 0x805A7060 -> 0x805A70EC
void GASValue::SetAsCharacter(class GASValue * this /* r30 */) {
}
// Range: 0x805A70F0 -> 0x805A7270
void GASValue::SetAsObjectInterface(class GASValue * this /* r30 */, class GASObjectInterface * pobj /* r31 */) {
}
// Range: 0x805A7270 -> 0x805A72E0
void GASValue::SetAsFunction(class GASValue * this /* r30 */, class GASFunctionRefBase & func /* r31 */) {
}
// Range: 0x805A72E0 -> 0x805A7514
void GASValue::Add(class GASValue * this /* r30 */, class GASEnvironment * penv /* r31 */, class GASValue & v /* r29 */) {
    // Local variables
    class GASValue pv1; // r1+0x48
    class GASValue pv2; // r1+0x38
}
// Range: 0x805A7520 -> 0x805A7BA8
bool GASValue::IsEqual(class GASValue * this /* r29 */, class GASEnvironment * penv /* r30 */, class GASValue & v /* r31 */) const {
    {
        // Range: 0x805A7670 -> 0x805A7734
        // Local variables
        class GASValue primVal; // r1+0x80
    }
    {
        // Range: 0x805A77A0 -> 0x805A79D8
        // Local variables
        double pv; // f1

        {
            // Range: 0x805A77BC -> 0x805A7880
            // Local variables
            class GASValue primVal; // r1+0x70
        }
    }
    {
        // Range: 0x805A7A24 -> 0x805A7AE8
        // Local variables
        class GASValue primVal; // r1+0x60
    }
}
// Range: 0x805A7BB0 -> 0x805A8068
class GASValue GASValue::Compare(class GASEnvironment * penv /* r28 */, class GASValue & v /* r29 */, int action /* r30 */) const {
    // Local variables
    class GASValue pv1; // r1+0x58
    class GASValue pv2; // r1+0x48
    bool result; // r3
    double val1; // f31
    double val2; // f30
}
// Range: 0x805A8070 -> 0x805A8124
void GASValue::StringConcat(class GASValue * this /* r30 */, class GASEnvironment * penv /* r0 */, class GASString & str /* r31 */) {
    // Local variables
    class GASString tempstr; // r1+0xC
}
// Range: 0x805A8130 -> 0x805A82DC
static void GAS_CheckForListenersMemLeak(class GASObject * pobjectValue /* r29 */) {
    {
        // Range: 0x805A814C -> 0x805A82A8
        // Local variables
        class RawCompareKey rkey; // r1+0x8
        class GASMember val; // r1+0x10

        {
            // Range: 0x805A8188 -> 0x805A82A8
            {
                // Range: 0x805A81F4 -> 0x805A82A8
                // Local variables
                class GASArrayObject * arrayObj; // r0

                {
                    // Range: 0x805A8218 -> 0x805A82A0
                    // Local variables
                    int i; // r0
                }
            }
        }
    }
}
// Range: 0x805A83F0 -> 0x805A8510
void GASValue::DropRefs(class GASValue * this /* r31 */) {
}
// signature: GASValue::ToPrimitive(GASEnvironment *, GASValue::Hint) const
// Range: 0x805A8510 -> 0x805A8810
class GASValue GASValue::ToPrimitive(class GASValue * this /* r28 */, class GASEnvironment * penv /* r29 */) const {
    {
        // Range: 0x805A8538 -> 0x805A87EC
        // Local variables
        class GASValue toValueFunc; // r1+0x30

        {
            // Range: 0x805A85DC -> 0x805A8674
            // Local variables
            class GASValue result; // r1+0x20
        }
        {
            // Range: 0x805A8674 -> 0x805A87EC
            // Local variables
            char * pstr; // r3
            class GASValue ret; // r1+0x10
        }
    }
}
// signature: GASValue::GetPropertyValue(GASEnvironment *, GASObjectInterface *, GASValue *)
// Range: 0x805A8810 -> 0x805A8924
bool GASValue::GetPropertyValue(class GASValue * this /* r27 */, class GASEnvironment * penv /* r28 */, class GASValue * value /* r29 */) {
    {
        // Range: 0x805A8844 -> 0x805A88D8
        // Local variables
        class GASValue result; // r1+0x8
    }

    // References
    // -> struct {} __vt__9GASFnCall;
}
// signature: GASValue::SetPropertyValue(GASEnvironment *, GASObjectInterface *, const GASValue &)
// Range: 0x805A8930 -> 0x805A8A70
void GASValue::SetPropertyValue(class GASValue * this /* r29 */, class GASEnvironment * penv /* r30 */, class GASObjectInterface * pthis /* r31 */) {
    {
        // Range: 0x805A8964 -> 0x805A8A10
        // Local variables
        class GASValue result; // r1+0x8
    }

    // References
    // -> struct {} __vt__9GASFnCall;
}
// signature: GASFnCall::Arg(int) const
// Range: 0x805A8A70 -> 0x805A8AC8
class GASValue & GASFnCall::Arg() const {
}
// Range: 0x805A8AD0 -> 0x805A8AD8
class GFxLog * GASFnCall::GetLog() const {
}
// Range: 0x805A8AE0 -> 0x805A8AF4
bool GASFnCall::IsVerboseActionErrors() const {
}
