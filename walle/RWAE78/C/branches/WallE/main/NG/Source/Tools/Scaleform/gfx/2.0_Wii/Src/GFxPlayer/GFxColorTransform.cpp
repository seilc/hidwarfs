/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxColorTransform.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804A5DF0 -> 0x804A8238
*/
// total size: 0x50
class GASColorTransformObject : public GASObject {
    // Members
    class Cxform ColorTransform; // offset 0x30, size 0x20
};
// total size: 0x6C
class GASColorTransformProto : public GASPrototype {};
// total size: 0x6C
class GASPrototype : public GASColorTransformObject {
    // Members
    class GASFunctionWeakRef Constructor; // offset 0x50, size 0xC
    class GASFunctionWeakRef __Constructor__; // offset 0x5C, size 0xC
    class garray * pInterfaces; // offset 0x68, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GASColorTransformObject * pObject; // offset 0x0, size 0x4
};
class GASNameFunction FunctionTable[3]; // size: 0x18, address: 0x806E7C58
struct {} __vt__22GASColorTransformProto; // size: 0xB8, address: 0x80736B30
struct {} __vt__56GASPrototype<23GASColorTransformObject,14GASEnvironment>; // size: 0xB8, address: 0x80736BE8
struct {} __vt__23GASColorTransformObject; // size: 0xB4, address: 0x80736CA0
// signature: GFxObject_GetColorTransformProperties(GASEnvironment *, GASObject *, GASValue *)
// Range: 0x804A5DF0 -> 0x804A6220
void GFxObject_GetColorTransformProperties(class GASObject * pobj /* r28 */, class GASValue * params /* r29 */) {
}
// Range: 0x804A6220 -> 0x804A62C8
void * GASColorTransformObject::GASColorTransformObject(class GASColorTransformObject * this /* r30 */, class GASEnvironment * penv /* r31 */) {
    // References
    // -> struct {} __vt__23GASColorTransformObject;
}
// Range: 0x804A62D0 -> 0x804A6678
bool GASColorTransformObject::GetMember(class GASColorTransformObject * this /* r26 */, class GASEnvironment * penv /* r27 */, class GASString & name /* r28 */, class GASValue * val /* r29 */) {
    {
        // Range: 0x804A6564 -> 0x804A664C
        // Local variables
        unsigned char bc; // r7
        unsigned char gc; // r6
        unsigned char rc; // r0
        class GASValue bo; // r1+0x98
        class GASValue go; // r1+0xA8
        class GASValue ro; // r1+0xB8
    }
}
// Range: 0x804A6680 -> 0x804A6954
bool GASColorTransformObject::SetMember(class GASColorTransformObject * this /* r29 */, class GASEnvironment * penv /* r30 */, class GASString & name /* r25 */, class GASValue & val /* r31 */, class GASPropFlags & flags /* r26 */) {
    {
        // Range: 0x804A6838 -> 0x804A6924
        // Local variables
        unsigned long bc; // r10
        unsigned long gc; // r9
        unsigned long rc; // r8
        unsigned long p; // r0
        double n; // f0
    }
}
// Range: 0x804A6960 -> 0x804A7068
void * GASColorTransformProto::GASColorTransformProto(class GASColorTransformProto * this /* r28 */, class GASStringContext * psc /* r29 */, class GASObject * pprototype /* r30 */, class GASFunctionRef & constructor /* r24 */) {
    // References
    // -> class GASNameFunction FunctionTable[3];
    // -> struct {} __vt__22GASColorTransformProto;
    // -> struct {} __vt__56GASPrototype<23GASColorTransformObject,14GASEnvironment>;
    // -> struct {} __vt__23GASColorTransformObject;
}
// Range: 0x804A71E0 -> 0x804A7368
void GASColorTransformProto::GlobalCtor(class GASFnCall & fn /* r30 */) {
}
// Range: 0x804A73E0 -> 0x804A7600
void GASColorTransformProto::Concat(class GASFnCall & fn /* r29 */) {
    {
        // Range: 0x804A73FC -> 0x804A75E4
        // Local variables
        class GASObject * p; // r30

        {
            // Range: 0x804A7414 -> 0x804A75E4
            // Local variables
            class GASColorTransformObject * pthis; // r0

            {
                // Range: 0x804A7458 -> 0x804A7544
                // Local variables
                class Cxform ct; // r1+0x8
                class GASValue c[8]; // r1+0x28
            }
        }
    }
}
// Range: 0x804A7600 -> 0x804A7A48
void GASColorTransformProto::ToString(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASColorTransformObject * pthis; // r0
    class Cxform * ct; // r0
    class GASString ps[8]; // r1+0x90
    class GFxString str; // r1+0xC
}
