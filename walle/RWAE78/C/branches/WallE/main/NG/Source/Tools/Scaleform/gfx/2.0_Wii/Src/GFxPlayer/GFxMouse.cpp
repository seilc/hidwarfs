/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxMouse.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804F4830 -> 0x804F73D8
*/
// total size: 0x30
class GASMouse : public GASObject {};
// total size: 0x4C
class GASMouseProto : public GASPrototype {};
// total size: 0x4C
class GASPrototype : public GASMouse {
    // Members
    class GASFunctionWeakRef Constructor; // offset 0x30, size 0xC
    class GASFunctionWeakRef __Constructor__; // offset 0x3C, size 0xC
    class garray * pInterfaces; // offset 0x48, size 0x4
};
// total size: 0x60
class GASMouseCtorFunction : public GASFunctionObject, public GFxASMouseListener {
    // Members
    class garray ListenerWeakRefs; // offset 0x38, size 0xC
    class garray Listeners; // offset 0x44, size 0xC
    class GASFunctionRef SetCursorTypeFunc; // offset 0x50, size 0xC
    bool MouseExtensions; // offset 0x5C, size 0x1
};
static class GASNameFunction GAS_MouseFunctionTable[5]; // size: 0x28, address: 0x806E8230
class GASNameFunction StaticFunctionTable[5]; // size: 0x28, address: 0x806E8258
struct {} __vt__20GASMouseCtorFunction; // size: 0x10C, address: 0x80738E1C
struct {} __vt__13GASMouseProto; // size: 0xB8, address: 0x80738F28
struct {} __vt__40GASPrototype<8GASMouse,14GASEnvironment>; // size: 0xB8, address: 0x80738FE0
struct {} __vt__8GASMouse; // size: 0xB4, address: 0x80739098
// Range: 0x804F4830 -> 0x804F4890
void * GASMouse::GASMouse(class GASMouse * this /* r30 */, class GASEnvironment * penv /* r31 */) {
    // References
    // -> struct {} __vt__8GASMouse;
}
// Range: 0x804F4890 -> 0x804F490C
void GASMouse::commonInit(class GASMouse * this /* r30 */, class GASEnvironment * penv /* r31 */) {
}
// signature: GFx_MouseFuncStub(const GASFnCall &)
// Range: 0x804F4910 -> 0x804F4948
static void GFx_MouseFuncStub() {
}
// Range: 0x804F4950 -> 0x804F4C44
void * GASMouseProto::GASMouseProto(class GASMouseProto * this /* r29 */, class GASStringContext * psc /* r30 */, class GASObject * pprototype /* r31 */, class GASFunctionRef & constructor /* r25 */) {
    // References
    // -> static class GASNameFunction GAS_MouseFunctionTable[5];
    // -> struct {} __vt__13GASMouseProto;
    // -> struct {} __vt__40GASPrototype<8GASMouse,14GASEnvironment>;
}
// Range: 0x804F4DC0 -> 0x804F4E5C
void GASMouseProto::GlobalCtor(class GASFnCall & fn /* r30 */) {
}
// Range: 0x804F4E60 -> 0x804F501C
void * GASMouseCtorFunction::GASMouseCtorFunction(class GASMouseCtorFunction * this /* r30 */, class GASStringContext * psc /* r31 */, class GFxMovieRoot * proot /* r29 */) {
    // References
    // -> class GASNameFunction StaticFunctionTable[5];
    // -> struct {} __vt__20GASMouseCtorFunction;
}
// Range: 0x804F5020 -> 0x804F5240
void GASMouseCtorFunction::CleanupListeners(class GASMouseCtorFunction * this /* r29 */) {
    {
        // Range: 0x804F5034 -> 0x804F5214
        // Local variables
        int i; // r30
    }
}
// Range: 0x804F5240 -> 0x804F5788
void GASMouseCtorFunction::NotifyListeners(class GASMouseCtorFunction * this /* r22 */, class GASEnvironment * penv /* r18 */, enum GASBuiltinType eventName /* r19 */, class GASString * ptargetName /* r20 */, unsigned int button /* r21 */, int delta /* r1+0x8 */) const {
    {
        // Range: 0x804F5268 -> 0x804F5700
        // Local variables
        unsigned long i; // r25
        class garray listeners; // r1+0x38
        class garray listenerWeakRefs; // r1+0x44

        {
            // Range: 0x804F5440 -> 0x804F56D0
            // Local variables
            class GPtr listernerRef; // r1+0xC

            {
                // Range: 0x804F5440 -> 0x804F56B8
                // Local variables
                class GASEnvironment * penvtemp; // r23
                class GASObjectInterface * listener; // r24
                class GASValue method; // r1+0x28

                {
                    // Range: 0x804F5440 -> 0x804F56B8
                    // Local variables
                    int nArgs; // r22
                    bool noExtraParams; // r17

                    {
                        // Range: 0x804F5440 -> 0x804F5440
                        // Local variables
                        class GASFunctionRef mfref; // r1+0x18
                    }
                }
            }
        }
    }
}
// signature: GASMouseCtorFunction::OnMouseMove(GASEnvironment *) const
// Range: 0x804F59E0 -> 0x804F59F4
void GASMouseCtorFunction::OnMouseMove() const {
}
// signature: GASMouseCtorFunction::OnMouseDown(GASEnvironment *, unsigned int, GFxASCharacter *) const
// Range: 0x804F5A00 -> 0x804F5AB0
void GASMouseCtorFunction::OnMouseDown(class GASMouseCtorFunction * this /* r29 */, class GASEnvironment * penv /* r30 */, unsigned int button /* r31 */) const {
    {
        // Range: 0x804F5A08 -> 0x804F5A68
        // Local variables
        class GASString stringVal; // r1+0x8
    }
}
// signature: GASMouseCtorFunction::OnMouseUp(GASEnvironment *, unsigned int, GFxASCharacter *) const
// Range: 0x804F5AB0 -> 0x804F5B60
void GASMouseCtorFunction::OnMouseUp(class GASMouseCtorFunction * this /* r29 */, class GASEnvironment * penv /* r30 */, unsigned int button /* r31 */) const {
    {
        // Range: 0x804F5AB8 -> 0x804F5B18
        // Local variables
        class GASString stringVal; // r1+0x8
    }
}
// signature: GASMouseCtorFunction::OnMouseWheel(GASEnvironment *, int, GFxASCharacter *) const
// Range: 0x804F5B60 -> 0x804F5C10
void GASMouseCtorFunction::OnMouseWheel(class GASMouseCtorFunction * this /* r29 */, class GASEnvironment * penv /* r30 */, int sdelta /* r31 */) const {
    {
        // Range: 0x804F5B68 -> 0x804F5BC8
        // Local variables
        class GASString stringVal; // r1+0x8
    }
}
// Range: 0x804F5C10 -> 0x804F60E4
void GASMouseCtorFunction::AddListener(class GASFnCall & fn /* r27 */) {
    // Local variables
    class GFxASCharacter * listenerChar; // r3
    class GASObjectInterface * listener; // r30
    class GRefCountBaseImpl * listenerRef; // r31
    class GASMouseCtorFunction * mo; // r0

    {
        // Range: 0x804F5CF0 -> 0x804F5D20
        // Local variables
        unsigned long n; // r0
        unsigned long i; // r0
    }
}
// Range: 0x804F60F0 -> 0x804F6388
void GASMouseCtorFunction::RemoveListener(class GASFnCall & fn /* r23 */) {
    // Local variables
    class GFxASCharacter * listenerChar; // r3
    class GASObjectInterface * listener; // r29
    class GASMouseCtorFunction * mo; // r0

    {
        // Range: 0x804F61C8 -> 0x804F635C
        // Local variables
        long i; // r28
    }
}
// Range: 0x804F6390 -> 0x804F6424
void GASMouseCtorFunction::Show(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GFxMovieRoot * proot; // r3
}
// Range: 0x804F6430 -> 0x804F64C4
void GASMouseCtorFunction::Hide(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GFxMovieRoot * proot; // r3
}
// Range: 0x804F64D0 -> 0x804F6574
void GASMouseCtorFunction::SetCursorType(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GFxMovieRoot * proot; // r31
    int cursorShapeId; // r4
}
// signature: GASMouseCtorFunction::SetCursorType(GFxMovieRoot *, unsigned int)
// Range: 0x804F6580 -> 0x804F65E4
bool GASMouseCtorFunction::SetCursorType(class GFxMovieRoot * proot /* r6 */) {
}
// Range: 0x804F65F0 -> 0x804F67D0
void GASMouseCtorFunction::GetTopMostEntity(class GASFnCall & fn /* r28 */) {
    // Local variables
    class GFxMovieRoot * proot; // r30
    class GPoint mousePos; // r1+0x20
    bool testAll; // r29
    class GFxASCharacter * ptopCh; // r4

    {
        // Range: 0x804F663C -> 0x804F66D4
        // Local variables
        int buttons; // r1+0x8
        int y; // r1+0xC
        int x; // r1+0x10
    }
    {
        // Range: 0x804F66D8 -> 0x804F677C
        // Local variables
        float y; // f30
        float x; // f31

        {
            // Range: 0x804F6740 -> 0x804F6774
            // Local variables
            class GPoint a; // r1+0x18
            class GMatrix2D m; // r1+0x28
        }
    }
}
// Range: 0x804F67E0 -> 0x804F6878
bool GASMouseCtorFunction::SetMember(class GASMouseCtorFunction * this /* r27 */, class GASEnvironment * penv /* r28 */, class GASString & name /* r29 */, class GASValue & val /* r30 */, class GASPropFlags & flags /* r31 */) {
}
// Range: 0x804F6880 -> 0x804F6A9C
bool GASMouseCtorFunction::GetMember(class GASMouseCtorFunction * this /* r28 */, class GASEnvironment * penv /* r29 */, class GASString & name /* r30 */, class GASValue * pval /* r31 */) {
}
