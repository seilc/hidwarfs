/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxTextFormat.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80598A30 -> 0x8059DE48
*/
// total size: 0xD0
class GASTextFormatProto : public GASPrototype {};
// total size: 0xD0
class GASPrototype : public GASTextFormatObject {
    // Members
    class GASFunctionWeakRef Constructor; // offset 0xB4, size 0xC
    class GASFunctionWeakRef __Constructor__; // offset 0xC0, size 0xC
    class garray * pInterfaces; // offset 0xCC, size 0x4
};
// total size: 0x34
class GASTextFormatCtorFunction : public GASFunctionObject {};
static class GASNameFunction GAS_TextFormatFunctionTable[2]; // size: 0x10, address: 0x806E8FC8
// Range: 0x80598A30 -> 0x805997F0
void * GASTextFormatObject::GASTextFormatObject(class GASTextFormatObject * this /* r29 */, class GASEnvironment * penv /* r30 */) {
    // References
    // -> struct {} __vt__22GFxTextParagraphFormat;
    // -> struct {} __vt__13GFxTextFormat;
    // -> struct {} __vt__19GASTextFormatObject;
}
// Range: 0x805997F0 -> 0x8059A114
bool GASTextFormatObject::SetMember(class GASTextFormatObject * this /* r26 */, class GASEnvironment * penv /* r27 */, class GASString & name /* r28 */, class GASValue & val /* r29 */, class GASPropFlags & flags /* r30 */) {
    // Local variables
    bool allowToSet; // r31

    {
        // Range: 0x80599834 -> 0x8059992C
        // Local variables
        class GASString strval; // r1+0x10
    }
    {
        // Range: 0x80599944 -> 0x805999A0
        // Local variables
        double v; // f1
    }
    {
        // Range: 0x80599A10 -> 0x80599A64
        // Local variables
        double v; // f0
    }
    {
        // Range: 0x80599AC8 -> 0x80599B2C
        // Local variables
        double v; // f1
    }
    {
        // Range: 0x80599B64 -> 0x80599BC8
        // Local variables
        double v; // f1
    }
    {
        // Range: 0x80599BCC -> 0x80599C28
        // Local variables
        double v; // f1
    }
    {
        // Range: 0x80599C2C -> 0x80599C88
        // Local variables
        double v; // f1
    }
    {
        // Range: 0x80599C8C -> 0x80599D94
        // Local variables
        double v; // f30
    }
    {
        // Range: 0x80599DAC -> 0x80599EDC
        // Local variables
        class GASArrayObject * parr; // r24

        {
            // Range: 0x80599DF8 -> 0x80599E88
            // Local variables
            int n; // r22
            int i; // r23

            {
                // Range: 0x80599DF8 -> 0x80599E88
                // Local variables
                double v; // f30
            }
        }
    }
    {
        // Range: 0x80599F98 -> 0x8059A000
        // Local variables
        double v; // f1
    }
    {
        // Range: 0x8059A040 -> 0x8059A0C0
        // Local variables
        double v; // f1
    }
}
// Range: 0x8059A120 -> 0x8059ADC4
void GASTextFormatObject::SetTextFormat(class GASTextFormatObject * this /* r27 */, class GASStringContext * psc /* r28 */, class GFxTextFormat & textFmt /* r29 */) {
    // Local variables
    class GASValue nullVal; // r1+0x128
}
// Range: 0x8059ADD0 -> 0x8059B784
void GASTextFormatObject::SetParagraphFormat(class GASTextFormatObject * this /* r27 */, class GASStringContext * psc /* r28 */, class GFxTextParagraphFormat & paraFmt /* r29 */) {
    // Local variables
    class GASValue nullVal; // r1+0x118

    {
        // Range: 0x8059AE1C -> 0x8059AF40
        // Local variables
        char * newAlign; // r5
    }
    {
        // Range: 0x8059B530 -> 0x8059B6A8
        // Local variables
        unsigned int * ptabStops; // r26
        unsigned int num; // r1+0x84

        {
            // Range: 0x8059B5A0 -> 0x8059B5A0
            // Local variables
            unsigned int i; // r25
        }
    }
}
// Range: 0x8059B790 -> 0x8059BB18
void * GASTextFormatProto::GASTextFormatProto(class GASTextFormatProto * this /* r29 */, class GASStringContext * psc /* r30 */, class GASObject * pprototype /* r31 */, class GASFunctionRef & constructor /* r25 */) {
    // References
    // -> static class GASNameFunction GAS_TextFormatFunctionTable[2];
    // -> struct {} __vt__18GASTextFormatProto;
    // -> struct {} __vt__22GFxTextParagraphFormat;
    // -> struct {} __vt__52GASPrototype<19GASTextFormatObject,14GASEnvironment>;
    // -> struct {} __vt__13GFxTextFormat;
    // -> struct {} __vt__19GASTextFormatObject;
}
// Range: 0x8059BE10 -> 0x8059CC50
void GASTextFormatProto::GetTextExtent(class GASFnCall & fn /* r26 */) {
    // Local variables
    class GASTextFormatObject * pfmtObj; // r0

    {
        // Range: 0x8059BEBC -> 0x8059C9D0
        // Local variables
        unsigned int udescent; // r0
        unsigned int uascent; // r0
        double scale; // f29
        double descent; // f30
        double ascent; // f31
        class GFxTextParagraphFormat eParagraphFmt; // r1+0xF8
        class GFxTextFormat eTextFmt; // r1+0x17C
        class GASString str; // r1+0x50

        {
            // Range: 0x8059BFAC -> 0x8059C024
            // Local variables
            class GRect vr; // r1+0xC0
            double width; // f0
        }
    }

    // References
    // -> struct {} __vt__22GFxTextParagraphFormat;
    // -> struct {} __vt__13GFxTextFormat;
}
// signature: GASTextFormatCtorFunction::GASTextFormatCtorFunction(GASStringContext *)
// Range: 0x8059CC50 -> 0x8059CC9C
void * GASTextFormatCtorFunction::GASTextFormatCtorFunction(class GASTextFormatCtorFunction * this /* r31 */) {
    // References
    // -> struct {} __vt__25GASTextFormatCtorFunction;
}
// Range: 0x8059CCA0 -> 0x8059D5F4
void GASTextFormatCtorFunction::GlobalCtor(class GASFnCall & fn /* r28 */) {
}
