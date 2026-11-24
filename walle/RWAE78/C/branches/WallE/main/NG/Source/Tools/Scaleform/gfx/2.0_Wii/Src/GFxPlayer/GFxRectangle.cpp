/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxRectangle.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80526560 -> 0x8052DB58
*/
// total size: 0x20
class GRect {
    // Members
    double Left; // offset 0x0, size 0x8
    double Top; // offset 0x8, size 0x8
    double Right; // offset 0x10, size 0x8
    double Bottom; // offset 0x18, size 0x8
};
// total size: 0x4C
class GASRectangleProto : public GASPrototype {};
// total size: 0x4C
class GASPrototype : public GASRectangleObject {
    // Members
    class GASFunctionWeakRef Constructor; // offset 0x30, size 0xC
    class GASFunctionWeakRef __Constructor__; // offset 0x3C, size 0xC
    class garray * pInterfaces; // offset 0x48, size 0x4
};
static class GASValue GFxRectangle_DefaultParams[4]; // size: 0x40, address: 0x80871CE0
static class GASValue GFxRectangle_NaNParams[4]; // size: 0x40, address: 0x80871D50
class GASNameFunction FunctionTable[16]; // size: 0x80, address: 0x806E83F8
// Range: 0x8052D990 -> 0x8052DAC4
static void __sinit_\GFxRectangle_cpp() {
    // References
    // -> static class GASValue GFxRectangle_NaNParams[4];
    // -> static class GASValue GFxRectangle_DefaultParams[4];
}
// Range: 0x80526560 -> 0x80526634
static class GASValue GFxRectangle_ComputeTopLeft(class GASEnvironment * penv /* r29 */, class GRect & r /* r30 */) {
}
// Range: 0x80526640 -> 0x80526714
static class GASValue GFxRectangle_ComputeBottomRight(class GASEnvironment * penv /* r29 */, class GRect & r /* r30 */) {
}
// Range: 0x80526720 -> 0x80526804
static class GASValue GFxRectangle_ComputeSize(class GASEnvironment * penv /* r29 */, class GRect & r /* r30 */) {
}
// Range: 0x80526810 -> 0x805268C4
void * GASRectangleObject::GASRectangleObject(class GASRectangleObject * this /* r30 */, class GASEnvironment * penv /* r31 */) {
    // References
    // -> static class GASValue GFxRectangle_DefaultParams[4];
    // -> struct {} __vt__18GASRectangleObject;
}
// Range: 0x805268D0 -> 0x80526C10
bool GASRectangleObject::GetMember(class GASRectangleObject * this /* r27 */, class GASEnvironment * penv /* r28 */, class GASString & name /* r29 */, class GASValue * val /* r30 */) {
    {
        // Range: 0x805268FC -> 0x80526958
        // Local variables
        class GRect r; // r1+0x198
    }
    {
        // Range: 0x80526958 -> 0x805269B4
        // Local variables
        class GRect r; // r1+0x178
    }
    {
        // Range: 0x805269B4 -> 0x80526A10
        // Local variables
        class GRect r; // r1+0x158
    }
    {
        // Range: 0x80526A10 -> 0x80526A6C
        // Local variables
        class GRect r; // r1+0x138
    }
    {
        // Range: 0x80526A6C -> 0x80526AE8
        // Local variables
        class GRect r; // r1+0x118
    }
    {
        // Range: 0x80526AE8 -> 0x80526B68
        // Local variables
        class GRect r; // r1+0xF8
    }
    {
        // Range: 0x80526B68 -> 0x80526BE4
        // Local variables
        class GRect r; // r1+0xD8
    }
}
// Range: 0x80526C10 -> 0x80526F24
bool GASRectangleObject::SetMember(class GASRectangleObject * this /* r26 */, class GASEnvironment * penv /* r27 */, class GASString & name /* r28 */, class GASValue & val /* r29 */, class GASPropFlags & flags /* r30 */) {
    {
        // Range: 0x80526C50 -> 0x80526CA0
        // Local variables
        class GRect r; // r1+0xF8
    }
    {
        // Range: 0x80526CA0 -> 0x80526CEC
        // Local variables
        class GRect r; // r1+0xD8
    }
    {
        // Range: 0x80526CEC -> 0x80526D38
        // Local variables
        class GRect r; // r1+0xB8
    }
    {
        // Range: 0x80526D38 -> 0x80526D84
        // Local variables
        class GRect r; // r1+0x98
    }
    {
        // Range: 0x80526D84 -> 0x80526DF8
        // Local variables
        class GRect r; // r1+0x78
    }
    {
        // Range: 0x80526DF8 -> 0x80526E70
        // Local variables
        class GRect r; // r1+0x58
    }
    {
        // Range: 0x80526E70 -> 0x80526EF4
        // Local variables
        class GRect r; // r1+0x38
    }
}
// Range: 0x80526F30 -> 0x80527238
void GASRectangleObject::GetProperties(class GASRectangleObject * this /* r28 */, class GASEnvironment * penv /* r29 */, class GRect & r /* r30 */) {
    // Local variables
    class GASValue params[4]; // r1+0x38
}
// Range: 0x80527240 -> 0x8052749C
void GASRectangleObject::SetProperties(class GASRectangleObject * this /* r29 */, class GASStringContext * psc /* r30 */, class GASValue * params /* r31 */) {
}
// signature: GASRectangleObject::SetProperties(GASEnvironment *, const GRect<double> &)
// Range: 0x805274A0 -> 0x805277A0
void GASRectangleObject::SetProperties(class GASRectangleObject * this /* r29 */, class GRect & r /* r30 */) {
}
// Range: 0x805277A0 -> 0x80527DA8
void * GASRectangleProto::GASRectangleProto(class GASRectangleProto * this /* r29 */, class GASStringContext * psc /* r30 */, class GASObject * pprototype /* r31 */, class GASFunctionRef & constructor /* r25 */) {
    // References
    // -> class GASNameFunction FunctionTable[16];
    // -> struct {} __vt__17GASRectangleProto;
    // -> struct {} __vt__51GASPrototype<18GASRectangleObject,14GASEnvironment>;
}
// Range: 0x80527F20 -> 0x805282D8
void GASRectangleProto::GlobalCtor(class GASFnCall & fn /* r30 */) {
    {
        // Range: 0x80527F84 -> 0x80528250
        // Local variables
        class GASValue params[4]; // r1+0x38
    }
}
// Range: 0x805282E0 -> 0x80528820
void GASRectangleProto::Clone(class GASFnCall & fn /* r28 */) {
    // Local variables
    class GASRectangleObject * p_this; // r0
    class GASValue params[4]; // r1+0x58
}
// Range: 0x80528820 -> 0x80528998
void GASRectangleProto::Contains(class GASFnCall & fn /* r30 */) {
    {
        // Range: 0x8052883C -> 0x80528934
        // Local variables
        double pyn; // f1
        double pxn; // f31
        class GRect r; // r1+0x28
        class GASValue py; // r1+0x8
        class GASValue px; // r1+0x18
    }
}
// Range: 0x805289A0 -> 0x80528B6C
void GASRectangleProto::ContainsPoint(class GASFnCall & fn /* r29 */) {
    {
        // Range: 0x805289BC -> 0x80528B50
        // Local variables
        class GASObject * p; // r30

        {
            // Range: 0x805289D4 -> 0x80528B28
            // Local variables
            class GPoint pt; // r1+0x8
            class GASValue ptv[2]; // r1+0x18
            class GRect r; // r1+0x38
        }
    }
}
// Range: 0x80528B70 -> 0x80528F90
void GASRectangleProto::ContainsRectangle(class GASFnCall & fn /* r29 */) {
    {
        // Range: 0x80528B90 -> 0x80528F70
        // Local variables
        class GASObject * p; // r0

        {
            // Range: 0x80528BA8 -> 0x80528F20
            // Local variables
            class GRect r2; // r1+0x38
            class GASValue r2v[4]; // r1+0x78
            class GRect r1; // r1+0x58
        }
    }
}
// Range: 0x80528F90 -> 0x805290D4
void GASRectangleProto::Equals(class GASFnCall & fn /* r29 */) {
    // Local variables
    bool ret; // r30

    {
        // Range: 0x80528FB0 -> 0x805290A0
        // Local variables
        class GASObject * p; // r31

        {
            // Range: 0x80528FC8 -> 0x80529080
            // Local variables
            class GRect r2; // r1+0x8
            class GRect r1; // r1+0x28
            class GASRectangleObject * pthis; // r30
        }
    }
}
// Range: 0x805290E0 -> 0x805294C0
void GASRectangleProto::Inflate(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASValue dw; // r1+0x88
    class GASValue dh; // r1+0x78
    class GASRectangleObject * pthis; // r0
    class GRect o1; // r1+0x98
}
// Range: 0x805294C0 -> 0x80529A94
void GASRectangleProto::InflatePoint(class GASFnCall & fn /* r29 */) {
    {
        // Range: 0x805294DC -> 0x80529A78
        // Local variables
        class GPoint o2; // r1+0xA8
        class GRect o1; // r1+0xB8
        class GASObject * p; // r30
        class GASRectangleObject * pthis; // r0
    }

    // References
    // -> static class GASValue GFxRectangle_NaNParams[4];
}
// Range: 0x80529AA0 -> 0x8052A230
void GASRectangleProto::Intersection(class GASFnCall & fn /* r29 */) {
    // Local variables
    class GRect ret; // r1+0xE8
    class GASRectangleObject * pthis; // r0

    {
        // Range: 0x80529AE4 -> 0x80529EDC
        // Local variables
        class GASObject * p; // r0

        {
            // Range: 0x80529B00 -> 0x80529E8C
            // Local variables
            class GRect o2; // r1+0xA8
            class GASValue o2v[4]; // r1+0x108
            class GRect o1; // r1+0xC8
        }
    }
}
// Range: 0x8052A230 -> 0x8052A6A4
void GASRectangleProto::Intersects(class GASFnCall & fn /* r29 */) {
    // Local variables
    bool ret; // r28
    class GASRectangleObject * pthis; // r0

    {
        // Range: 0x8052A268 -> 0x8052A668
        // Local variables
        class GASObject * p; // r0

        {
            // Range: 0x8052A284 -> 0x8052A618
            // Local variables
            class GRect r; // r1+0x38
            class GRect o2; // r1+0x58
            class GASValue o2v[4]; // r1+0x98
            class GRect o1; // r1+0x78
        }
    }
}
// Range: 0x8052A6B0 -> 0x8052AA94
void GASRectangleProto::IsEmpty(class GASFnCall & fn /* r29 */) {
    // Local variables
    bool ret; // r30
    class GASRectangleObject * pthis; // r0
    class GASValue params[4]; // r1+0x68

    {
        // Range: 0x8052A998 -> 0x8052AA0C
        // Local variables
        class GRect o1; // r1+0x48
    }
}
// Range: 0x8052AAA0 -> 0x8052B084
void GASRectangleProto::Offset(class GASFnCall & fn /* r29 */) {
    // Local variables
    class GASValue dx; // r1+0x88
    class GASValue dy; // r1+0x78
    class GASRectangleObject * pthis; // r0
    class GASValue o1[4]; // r1+0x98
}
// Range: 0x8052B090 -> 0x8052C068
void GASRectangleProto::OffsetPoint(class GASFnCall & fn /* r29 */) {
    {
        // Range: 0x8052B0B0 -> 0x8052BFD0
        // Local variables
        class GASValue o2v[2]; // r1+0x158
        class GASValue o1v[4]; // r1+0x178
        class GASObject * p; // r30
        class GASRectangleObject * pthis; // r0
    }
}
// signature: GASRectangleProto::SetEmpty(const GASFnCall &)
// Range: 0x8052C070 -> 0x8052C384
void GASRectangleProto::SetEmpty() {
    // Local variables
    class GASRectangleObject * pthis; // r0
}
// Range: 0x8052C390 -> 0x8052C800
void GASRectangleProto::ToString(class GASFnCall & fn /* r29 */) {
    // Local variables
    class GASRectangleObject * pthis; // r0
    class GASValue params[4]; // r1+0x40
    class GASString ps[4]; // r1+0x30
    class GFxString str; // r1+0x2C
}
// Range: 0x8052C800 -> 0x8052D228
void GASRectangleProto::Union(class GASFnCall & fn /* r28 */) {
    // Local variables
    class GASRectangleObject * pthis; // r29

    {
        // Range: 0x8052C888 -> 0x8052CF94
        // Local variables
        class GASObject * p; // r0
        class GRect ret; // r1+0x128

        {
            // Range: 0x8052C8D0 -> 0x8052CC7C
            // Local variables
            class GRect o2; // r1+0xE8
            class GASValue o2v[4]; // r1+0x148
            class GRect o1; // r1+0x108
        }
    }

    // References
    // -> static class GASValue GFxRectangle_NaNParams[4];
}
