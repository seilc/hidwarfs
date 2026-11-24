/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxExternalInterface.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804B3B50 -> 0x804B4E88
*/
// total size: 0x30
class GASExternalInterface : public GASObject {};
// total size: 0x4C
class GASExternalInterfaceProto : public GASPrototype {};
// total size: 0x4C
class GASPrototype : public GASExternalInterface {
    // Members
    class GASFunctionWeakRef Constructor; // offset 0x30, size 0xC
    class GASFunctionWeakRef __Constructor__; // offset 0x3C, size 0xC
    class garray * pInterfaces; // offset 0x48, size 0x4
};
// total size: 0x34
class GASExternalInterfaceCtorFunction : public GASFunctionObject {};
static class GASNameFunction GFx_EIFunctionTable[1]; // size: 0x8, address: 0x808E11D0
class GASNameFunction StaticFunctionTable[3]; // size: 0x18, address: 0x806E7E38
// Range: 0x804B3B50 -> 0x804B3E40
void * GASExternalInterfaceProto::GASExternalInterfaceProto(class GASExternalInterfaceProto * this /* r29 */, class GASStringContext * psc /* r30 */, class GASObject * pprototype /* r31 */, class GASFunctionRef & constructor /* r25 */) {
    // References
    // -> static class GASNameFunction GFx_EIFunctionTable[1];
    // -> struct {} __vt__25GASExternalInterfaceProto;
    // -> struct {} __vt__53GASPrototype<20GASExternalInterface,14GASEnvironment>;
}
// signature: GASExternalInterfaceProto::GlobalCtor(const GASFnCall &)
// Range: 0x804B3FB0 -> 0x804B3FE8
void GASExternalInterfaceProto::GlobalCtor() {
}
// Range: 0x804B3FF0 -> 0x804B41C4
void * GASExternalInterfaceCtorFunction::GASExternalInterfaceCtorFunction(class GASExternalInterfaceCtorFunction * this /* r30 */, class GASStringContext * psc /* r31 */) {
    // References
    // -> class GASNameFunction StaticFunctionTable[3];
    // -> struct {} __vt__32GASExternalInterfaceCtorFunction;
}
// Range: 0x804B41D0 -> 0x804B42F4
bool GASExternalInterfaceCtorFunction::GetMember(class GASExternalInterfaceCtorFunction * this /* r28 */, class GASEnvironment * penv /* r29 */, class GASString & name /* r30 */, class GASValue * val /* r31 */) {
    {
        // Range: 0x804B41E4 -> 0x804B42C8
        // Local variables
        class GFxMovieRoot * proot; // r0
    }
}
// Range: 0x804B4300 -> 0x804B4358
void GASExternalInterfaceCtorFunction::AddCallback(class GASFnCall & fn /* r30 */) {
}
// Range: 0x804B4450 -> 0x804B4644
void GASExternalInterfaceCtorFunction::Call(class GASFnCall & fn /* r29 */) {
    // Local variables
    class GFxMovieRoot * proot; // r30

    {
        // Range: 0x804B4470 -> 0x804B45E8
        // Local variables
        class GFxValue * pargArray; // r25
        void * argArrayOnStack[40]; // r1+0x10
        unsigned int nArgs; // r26

        {
            // Range: 0x804B4540 -> 0x804B4578
            // Local variables
            unsigned int i; // r24

            {
                // Range: 0x804B4540 -> 0x804B4578
                // Local variables
                class GASValue & val; // r5
            }
        }
    }
}
