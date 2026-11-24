/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxSelection.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8052DB60 -> 0x8052F988
*/
// total size: 0x30
class GASSelection : public GASObject {};
// total size: 0x4C
class GASPrototype : public GASSelection {
    // Members
    class GASFunctionWeakRef Constructor; // offset 0x30, size 0xC
    class GASFunctionWeakRef __Constructor__; // offset 0x3C, size 0xC
    class garray * pInterfaces; // offset 0x48, size 0x4
};
// total size: 0x34
class GASSelectionCtorFunction : public GASFunctionObject {};
// total size: 0x98
class GASTextField : public GFxASCharacter {};
class GASNameFunction StaticFunctionTable[5]; // size: 0x28, address: 0x806E8478
// Range: 0x8052DCD0 -> 0x8052DE14
void * GASSelectionCtorFunction::GASSelectionCtorFunction(class GASSelectionCtorFunction * this /* r30 */, class GASStringContext * psc /* r31 */) {
    // References
    // -> class GASNameFunction StaticFunctionTable[5];
    // -> struct {} __vt__24GASSelectionCtorFunction;
}
// Range: 0x8052DE20 -> 0x8052DEE8
void GASSelectionCtorFunction::GetFocus(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GPtr focusedChar; // r1+0x8
}
// Range: 0x8052DF70 -> 0x8052E1CC
void GASSelectionCtorFunction::SetFocus(class GASFnCall & fn /* r30 */) {
    {
        // Range: 0x8052DFC4 -> 0x8052E0A4
        // Local variables
        bool retVal; // r0
        class GASValue val; // r1+0x10
    }
}
// Range: 0x8052E1D0 -> 0x8052E2E4
void GASSelectionCtorFunction::GetCaretIndex(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GPtr focusedChar; // r1+0x8
}
// Range: 0x8052E2F0 -> 0x8052E3F8
void GASSelectionCtorFunction::SetSelection(class GASFnCall & fn /* r29 */) {
    // Local variables
    class GPtr focusedChar; // r1+0x8

    {
        // Range: 0x8052E340 -> 0x8052E3C0
        // Local variables
        class GASTextField * ptextField; // r30
    }
}
// Range: 0x8052E400 -> 0x8052E58C
void GASSelectionCtorFunction::CaptureFocus(class GASFnCall & fn /* r29 */) {
    // Local variables
    bool capture; // r0
    class GFxMovieRoot * proot; // r30
    class GPtr focusedChar; // r1+0xC
}
// Range: 0x8052E590 -> 0x8052E76C
bool GASSelectionCtorFunction::GetMember(class GASSelectionCtorFunction * this /* r25 */, class GASEnvironment * penv /* r26 */, class GASString & name /* r27 */, class GASValue * pval /* r31 */) {
    {
        // Range: 0x8052E5A4 -> 0x8052E740
        // Local variables
        class GFxMovieRoot * proot; // r0
    }
}
// Range: 0x8052E770 -> 0x8052E8A8
bool GASSelectionCtorFunction::SetMember(class GASSelectionCtorFunction * this /* r24 */, class GASEnvironment * penv /* r25 */, class GASString & name /* r26 */, class GASValue & val /* r27 */, class GASPropFlags & flags /* r28 */) {
    {
        // Range: 0x8052E784 -> 0x8052E878
        // Local variables
        class GFxMovieRoot * proot; // r0
    }
}
// Range: 0x8052E8B0 -> 0x8052EA5C
void GASSelection::BroadcastOnSetFocus(class GASEnvironment * penv /* r31 */, class GFxASCharacter * pOldFocus /* r28 */, class GFxASCharacter * pNewFocus /* r29 */) {
    // Local variables
    class GASValue selectionCtorVal; // r1+0x30

    {
        // Range: 0x8052E8C0 -> 0x8052EA28
        // Local variables
        class GASObjectInterface * pselectionObj; // r30
    }
}
// Range: 0x8052EA60 -> 0x8052EABC
void GASSelection::DoTransferFocus(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GFxMovieRoot * proot; // r31
}
// signature: GASSelection::QueueSetFocus(GASEnvironment *, GFxASCharacter *)
// Range: 0x8052EAC0 -> 0x8052F140
void GASSelection::QueueSetFocus(class GASEnvironment * penv /* r29 */) {
    // Local variables
    class garray params; // r1+0x28
}
