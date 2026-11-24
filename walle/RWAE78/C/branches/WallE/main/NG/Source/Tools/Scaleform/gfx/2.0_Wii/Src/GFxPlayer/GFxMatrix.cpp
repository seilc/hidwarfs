/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxMatrix.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804E8560 -> 0x804EBE78
*/
// total size: 0x30
class GASMatrixObject : public GASObject {};
// total size: 0x4
class GPtr {
    // Members
    class GASMatrixObject * pObject; // offset 0x0, size 0x4
};
// total size: 0x30
class GASPointObject : public GASObject {};
// total size: 0x4C
class GASMatrixProto : public GASPrototype {};
// total size: 0x4C
class GASPrototype : public GASMatrixObject {
    // Members
    class GASFunctionWeakRef Constructor; // offset 0x30, size 0xC
    class GASFunctionWeakRef __Constructor__; // offset 0x3C, size 0xC
    class garray * pInterfaces; // offset 0x48, size 0x4
};
static class GASNameFunction GAS_MatrixFunctionTable[14]; // size: 0x70, address: 0x806E81C0
struct {} __vt__14GASMatrixProto; // size: 0xB8, address: 0x807388F8
struct {} __vt__48GASPrototype<15GASMatrixObject,14GASEnvironment>; // size: 0xB8, address: 0x807389B0
struct {} __vt__15GASMatrixObject; // size: 0xB4, address: 0x80738A68
// Range: 0x804E8560 -> 0x804E8618
void * GASMatrixObject::GASMatrixObject(class GASMatrixObject * this /* r30 */, class GASEnvironment * penv /* r31 */) {
    // References
    // -> struct {} __vt__15GASMatrixObject;
}
// Range: 0x804E8620 -> 0x804E8AB8
class GASValue (* GASMatrixObject::GetMatrixAsValuesArray(class GASMatrixObject * this /* r29 */, class GASStringContext * psc /* r30 */, class GASValue (* marr)[6] /* r31 */))[6] {
}
// signature: GASMatrixObject::GetMatrix(GASEnvironment *)
// Range: 0x804E8AC0 -> 0x804E8F0C
class GMatrix2D GASMatrixObject::GetMatrix(class GMatrix2D * m /* r28 */, class GASMatrixObject * this /* r29 */, class GASEnvironment * penv /* r30 */) {
    // Local variables
    class GASValue v; // r1+0x38
}
// signature: GASMatrixObject::SetMatrix(GASEnvironment *, const GMatrix2D &)
// Range: 0x804E8F10 -> 0x804E9358
void GASMatrixObject::SetMatrix(class GASMatrixObject * this /* r29 */, class GMatrix2D & m /* r30 */) {
}
// Range: 0x804E9360 -> 0x804E97AC
void GASMatrixObject::SetMatrixTwips(class GASMatrixObject * this /* r29 */, class GASStringContext * psc /* r30 */, class GMatrix2D & m /* r31 */) {
}
// Range: 0x804E97B0 -> 0x804E9BD0
void GASMatrixProto::ToString(class GASFnCall & fn /* r31 */) {
    // Local variables
    class GASMatrixObject * pthis; // r0
    class GASValue matrix[6]; // r1+0x88
    class GASString mxs[6]; // r1+0x70
    class GFxString str; // r1+0xC
}
// Range: 0x804E9BD0 -> 0x804E9CC4
void GASMatrixProto::Clone(class GASFnCall & fn /* r29 */) {
    // Local variables
    class GASMatrixObject * pthis; // r30
}
// Range: 0x804E9D40 -> 0x804E9E04
void GASMatrixProto::Concat(class GASFnCall & fn /* r29 */) {
    // Local variables
    class GASMatrixObject * pthis; // r0

    {
        // Range: 0x804E9D74 -> 0x804E9DE8
        // Local variables
        class GASObject * arg; // r30

        {
            // Range: 0x804E9D90 -> 0x804E9DE8
            // Local variables
            class GMatrix2D m; // r1+0x20
        }
    }
}
// Range: 0x804E9E10 -> 0x804EA018
void GASMatrixProto::CreateBox(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASMatrixObject * pthis; // r31

    {
        // Range: 0x804E9E70 -> 0x804E9FD0
        // Local variables
        float ty; // f29
        float tx; // f30
        float r; // f26
        float sy; // f31
        float sx; // f27
        class GMatrix2D m; // r1+0x20
    }
}
// Range: 0x804EA020 -> 0x804EA240
void GASMatrixProto::CreateGradientBox(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASMatrixObject * pthis; // r31

    {
        // Range: 0x804EA080 -> 0x804EA1F8
        // Local variables
        float ty; // f28
        float tx; // f29
        float r; // f26
        float h; // f30
        float w; // f31
        class GMatrix2D m; // r1+0x20
    }
}
// Range: 0x804EA240 -> 0x804EA2A0
void GASMatrixProto::Identity(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASMatrixObject * pthis; // r0
}
// Range: 0x804EA2A0 -> 0x804EA350
void GASMatrixProto::Invert(class GASFnCall & fn /* r29 */) {
    // Local variables
    class GASMatrixObject * pthis; // r0
}
// Range: 0x804EA350 -> 0x804EA440
void GASMatrixProto::Rotate(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASMatrixObject * pthis; // r0

    {
        // Range: 0x804EA390 -> 0x804EA418
        // Local variables
        class GMatrix2D m; // r1+0x20
        float r; // f30
    }
}
// Range: 0x804EA440 -> 0x804EA54C
void GASMatrixProto::Scale(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASMatrixObject * pthis; // r0

    {
        // Range: 0x804EA480 -> 0x804EA524
        // Local variables
        class GMatrix2D m; // r1+0x8
        float sy; // f30
        float sx; // f31
    }
}
// Range: 0x804EA550 -> 0x804EA62C
void GASMatrixProto::Translate(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASMatrixObject * pthis; // r0

    {
        // Range: 0x804EA590 -> 0x804EA604
        // Local variables
        class GMatrix2D m; // r1+0x8
        float ty; // f30
        float tx; // f31
    }
}
// Range: 0x804EA630 -> 0x804EAA1C
void GASMatrixProto::TransformPoint(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASMatrixObject * pthis; // r0
    class GASObject * arg; // r31

    {
        // Range: 0x804EA66C -> 0x804EA960
        // Local variables
        class GASValue x2; // r1+0x48
        class GASValue x1; // r1+0x58
        class GASValue nptprop[2]; // r1+0x68
        class GASValue ptprop[2]; // r1+0x88
        class GMatrix2D m; // r1+0xA8
    }
}
// Range: 0x804EAA20 -> 0x804EAD9C
void GASMatrixProto::DeltaTransformPoint(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASMatrixObject * pthis; // r0
    class GASObject * arg; // r31

    {
        // Range: 0x804EAA5C -> 0x804EACF4
        // Local variables
        class GASValue x1; // r1+0x38
        class GASValue nptprop[2]; // r1+0x48
        class GASValue ptprop[2]; // r1+0x68
        class GMatrix2D m; // r1+0x88
    }
}
// Range: 0x804EADA0 -> 0x804EB094
void * GASMatrixProto::GASMatrixProto(class GASMatrixProto * this /* r29 */, class GASStringContext * psc /* r30 */, class GASObject * pprototype /* r31 */, class GASFunctionRef & constructor /* r25 */) {
    // References
    // -> static class GASNameFunction GAS_MatrixFunctionTable[14];
    // -> struct {} __vt__14GASMatrixProto;
    // -> struct {} __vt__48GASPrototype<15GASMatrixObject,14GASEnvironment>;
}
// Range: 0x804EB210 -> 0x804EB6A4
void GASMatrixProto::GlobalCtor(class GASFnCall & fn /* r29 */) {
}
