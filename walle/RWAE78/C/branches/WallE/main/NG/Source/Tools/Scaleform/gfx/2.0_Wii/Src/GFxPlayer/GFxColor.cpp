/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxColor.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804A3E80 -> 0x804A5DE8
*/
// total size: 0x38
class GASColorObject : public GASObject {
    // Members
    class GWeakPtr pCharacter; // offset 0x30, size 0x8
};
// total size: 0x54
class GASColorProto : public GASPrototype {};
// total size: 0x54
class GASPrototype : public GASColorObject {
    // Members
    class GASFunctionWeakRef Constructor; // offset 0x38, size 0xC
    class GASFunctionWeakRef __Constructor__; // offset 0x44, size 0xC
    class garray * pInterfaces; // offset 0x50, size 0x4
};
static class GASNameFunction GAS_ColorFunctionTable[5]; // size: 0x28, address: 0x806E7C30
// Range: 0x804A3E80 -> 0x804A4544
void GASColorProto::SetTransform(class GASFnCall & fn /* r29 */) {
    // Local variables
    class GASColorObject * pthis; // r0
    class GPtr pc; // r1+0x48
    class GASObjectInterface * pobj; // r30
    class Cxform c; // r1+0x60
    class GASValue val; // r1+0x50
}
// Range: 0x804A4550 -> 0x804A4C54
void GASColorProto::GetTransform(class GASFnCall & fn /* r29 */) {
    // Local variables
    class GASColorObject * pthis; // r0
    class GPtr pc; // r1+0x68
    class Cxform c; // r1+0xF0
}
// Range: 0x804A4C60 -> 0x804A4E1C
void GASColorProto::SetRGB(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASColorObject * pthis; // r0
    class GPtr pc; // r1+0x8
    unsigned long colorVal; // r0
    class Cxform c; // r1+0x10
}
// Range: 0x804A4E20 -> 0x804A4F68
void GASColorProto::GetRGB(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASColorObject * pthis; // r0
    class GPtr pc; // r1+0x8
    class Cxform c; // r1+0x10
    unsigned long colorVal; // r31
}
// Range: 0x804A4F70 -> 0x804A526C
void * GASColorProto::GASColorProto(class GASColorProto * this /* r29 */, class GASStringContext * psc /* r30 */, class GASObject * pprototype /* r31 */, class GASFunctionRef & constructor /* r25 */) {
    // References
    // -> static class GASNameFunction GAS_ColorFunctionTable[5];
    // -> struct {} __vt__13GASColorProto;
    // -> struct {} __vt__47GASPrototype<14GASColorObject,14GASEnvironment>;
}
// Range: 0x804A5420 -> 0x804A556C
void GASColorProto::GlobalCtor(class GASFnCall & fn /* r28 */) {
    // Local variables
    class GFxASCharacter * ptarget; // r31

    // References
    // -> struct {} __vt__14GASColorObject;
}
