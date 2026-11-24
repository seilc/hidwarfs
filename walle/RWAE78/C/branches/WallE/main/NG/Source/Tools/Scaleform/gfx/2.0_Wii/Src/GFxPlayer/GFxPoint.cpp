/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxPoint.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80523110 -> 0x80526398
*/
// total size: 0x10
class GPoint {
    // Members
    double x; // offset 0x0, size 0x8
    double y; // offset 0x8, size 0x8
};
// total size: 0x4C
class GASPointProto : public GASPrototype {};
// total size: 0x4C
class GASPrototype : public GASPointObject {
    // Members
    class GASFunctionWeakRef Constructor; // offset 0x30, size 0xC
    class GASFunctionWeakRef __Constructor__; // offset 0x3C, size 0xC
    class garray * pInterfaces; // offset 0x48, size 0x4
};
// total size: 0x34
class GASPointCtorFunction : public GASFunctionObject {};
static class GASValue GFxPoint_DefaultParams[2]; // size: 0x20, address: 0x80871C30
static class GASValue GFxPoint_NanParams[2]; // size: 0x20, address: 0x80871C68
class GASNameFunction FunctionTable[8]; // size: 0x40, address: 0x806E8398
class GASNameFunction StaticFunctionTable[4]; // size: 0x20, address: 0x806E83D8
struct {} __vt__20GASPointCtorFunction; // size: 0xD8, address: 0x8073A870
struct {} __vt__13GASPointProto; // size: 0xB8, address: 0x8073A948
struct {} __vt__47GASPrototype<14GASPointObject,14GASEnvironment>; // size: 0xB8, address: 0x8073AA00
struct {} __vt__14GASPointObject; // size: 0xB4, address: 0x8073AAB8
// Range: 0x80526240 -> 0x80526304
static void __sinit_\GFxPoint_cpp() {
    // References
    // -> static class GASValue GFxPoint_NanParams[2];
    // -> static class GASValue GFxPoint_DefaultParams[2];
}
// signature: GFxObject_GetPointProperties(GASEnvironment *, GASObject *, GASValue *)
// Range: 0x80523110 -> 0x80523198
void GFxObject_GetPointProperties(class GASObject * pobj /* r29 */, class GASValue * params /* r30 */) {
}
// Range: 0x805231A0 -> 0x80523294
void GFxObject_GetPointProperties(class GASEnvironment * penv /* r28 */, class GASObject * pobj /* r29 */, class GPoint & pt /* r30 */) {
    // Local variables
    class GASValue params[2]; // r1+0x8
}
// Range: 0x805232A0 -> 0x80523354
void * GASPointObject::GASPointObject(class GASPointObject * this /* r30 */, class GASEnvironment * penv /* r31 */) {
    // References
    // -> static class GASValue GFxPoint_DefaultParams[2];
    // -> struct {} __vt__14GASPointObject;
}
// signature: GASPointObject::GetMember(GASEnvironment *, const GASString &, GASValue *)
// Range: 0x80523360 -> 0x805233F4
bool GASPointObject::GetMember(class GASValue * val /* r31 */) {
    // Local variables
    bool ret; // r3

    {
        // Range: 0x80523374 -> 0x805233D8
        // Local variables
        class GPoint pt; // r1+0x18
    }
}
// Range: 0x80523400 -> 0x80523480
void GASPointObject::GetProperties(class GASPointObject * this /* r29 */, class GASStringContext * psc /* r30 */, class GASValue * params /* r31 */) {
}
// Range: 0x80523480 -> 0x80523570
void GASPointObject::GetProperties(class GASPointObject * this /* r28 */, class GASEnvironment * penv /* r29 */, class GPoint & pt /* r30 */) {
    // Local variables
    class GASValue params[2]; // r1+0x8
}
// Range: 0x80523570 -> 0x8052360C
void GASPointObject::SetProperties(class GASPointObject * this /* r28 */, class GASStringContext * psc /* r29 */, class GASValue * params /* r30 */) {
}
// signature: GASPointObject::SetProperties(GASEnvironment *, const GPoint<double> &)
// Range: 0x80523610 -> 0x805236F4
void GASPointObject::SetProperties(class GASPointObject * this /* r29 */, class GPoint & pt /* r30 */) {
}
// Range: 0x80523700 -> 0x80523A64
void * GASPointProto::GASPointProto(class GASPointProto * this /* r29 */, class GASStringContext * psc /* r30 */, class GASObject * pprototype /* r31 */, class GASFunctionRef & constructor /* r25 */) {
    // References
    // -> class GASNameFunction FunctionTable[8];
    // -> struct {} __vt__13GASPointProto;
    // -> struct {} __vt__47GASPrototype<14GASPointObject,14GASEnvironment>;
}
// Range: 0x80523BE0 -> 0x80523D64
void GASPointProto::GlobalCtor(class GASFnCall & fn /* r29 */) {
    {
        // Range: 0x80523C48 -> 0x80523D00
        // Local variables
        class GASValue params[2]; // r1+0x10
    }
}
// Range: 0x80523D70 -> 0x805240E4
void GASPointProto::Add(class GASFnCall & fn /* r30 */) {
    // Local variables
    bool set; // r27

    {
        // Range: 0x80523DCC -> 0x80524028
        // Local variables
        class GASObject * p; // r26

        {
            // Range: 0x80523DEC -> 0x80524028
            // Local variables
            class GPoint pt2; // r1+0x38
            class GPoint pt1; // r1+0x48
            class GASPointObject * pthis; // r0
        }
    }

    // References
    // -> static class GASValue GFxPoint_NanParams[2];
}
// Range: 0x805240F0 -> 0x80524278
void GASPointProto::Clone(class GASFnCall & fn /* r27 */) {
    // Local variables
    class GASPointObject * pthis; // r28
    class GASValue params[2]; // r1+0x10
}
// Range: 0x80524280 -> 0x80524498
void GASPointProto::Equals(class GASFnCall & fn /* r31 */) {
    // Local variables
    bool ret; // r28

    {
        // Range: 0x80524298 -> 0x80524464
        // Local variables
        class GASObject * p; // r27

        {
            // Range: 0x805242B8 -> 0x80524464
            // Local variables
            class GPoint pt2; // r1+0x8
            class GPoint pt1; // r1+0x18
            class GASPointObject * pthis; // r0
        }
    }
}
// Range: 0x805244A0 -> 0x80524748
void GASPointProto::Normalize(class GASFnCall & fn /* r31 */) {
    // Local variables
    class GASPointObject * pthis; // r0

    {
        // Range: 0x805244D4 -> 0x805246A0
        // Local variables
        double m; // f2
        class GPoint pt1; // r1+0x38
        class GASPointObject * pthis; // r28
        class GASValue p; // r1+0x48
    }

    // References
    // -> static class GASValue GFxPoint_NanParams[2];
}
// Range: 0x80524750 -> 0x805249AC
void GASPointProto::Offset(class GASFnCall & fn /* r28 */) {
    // Local variables
    class GASPointObject * pthis; // r31
    class GASValue dx; // r1+0x50
    class GASValue dy; // r1+0x40
    class GPoint pt1; // r1+0x30
}
// Range: 0x805249B0 -> 0x80524D28
void GASPointProto::Subtract(class GASFnCall & fn /* r30 */) {
    // Local variables
    bool set; // r27

    {
        // Range: 0x80524A0C -> 0x80524C6C
        // Local variables
        class GASObject * p; // r26

        {
            // Range: 0x80524A2C -> 0x80524C6C
            // Local variables
            class GPoint pt2; // r1+0x38
            class GPoint pt1; // r1+0x48
            class GASPointObject * pthis; // r0
        }
    }

    // References
    // -> static class GASValue GFxPoint_NanParams[2];
}
// Range: 0x80524D30 -> 0x80524F30
void GASPointProto::ToString(class GASFnCall & fn /* r29 */) {
    // Local variables
    class GASPointObject * pthis; // r0
    class GASValue params[2]; // r1+0x18
    class GASString ps[2]; // r1+0x10
    class GFxString str; // r1+0xC
}
// Range: 0x80524F30 -> 0x8052505C
void * GASPointCtorFunction::GASPointCtorFunction(class GASPointCtorFunction * this /* r30 */, class GASStringContext * psc /* r31 */) {
    // References
    // -> class GASNameFunction StaticFunctionTable[4];
    // -> struct {} __vt__20GASPointCtorFunction;
}
// Range: 0x80525060 -> 0x80525424
void GASPointCtorFunction::Distance(class GASFnCall & fn /* r31 */) {
    {
        // Range: 0x805250B0 -> 0x80525400
        // Local variables
        class GASObject * p2; // r28
        class GASObject * p1; // r29

        {
            // Range: 0x80525140 -> 0x80525388
            // Local variables
            double d; // f0
            class GASValue yd; // r1+0x18
            class GASValue xd; // r1+0x28
            class GASValue o2[2]; // r1+0x38
            class GASValue o1[2]; // r1+0x58
        }
    }
}
// Range: 0x80525430 -> 0x805257F8
void GASPointCtorFunction::Interpolate(class GASFnCall & fn /* r30 */) {
    // Local variables
    bool set; // r27

    {
        // Range: 0x8052548C -> 0x80525728
        // Local variables
        class GASValue f; // r1+0x68
        class GASObject * p2; // r25
        class GASObject * p1; // r26

        {
            // Range: 0x805254DC -> 0x80525728
            // Local variables
            class GPoint ip; // r1+0x38
            double ptf; // f0
            class GPoint pt2; // r1+0x48
            class GPoint pt1; // r1+0x58
        }
    }

    // References
    // -> static class GASValue GFxPoint_NanParams[2];
}
// Range: 0x80525800 -> 0x80525A80
void GASPointCtorFunction::Polar(class GASFnCall & fn /* r30 */) {
    // Local variables
    bool set; // r27

    {
        // Range: 0x80525864 -> 0x80525990
        // Local variables
        double ca; // f0
        double sa; // f0
        double a; // f29
        double l; // f0
        class GASValue angle; // r1+0x48
        class GASValue length; // r1+0x58
    }

    // References
    // -> static class GASValue GFxPoint_NanParams[2];
}
