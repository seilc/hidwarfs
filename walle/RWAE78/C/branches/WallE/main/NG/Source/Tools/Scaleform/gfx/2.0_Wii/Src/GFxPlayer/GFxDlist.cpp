/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxDlist.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804AD510 -> 0x804AEFF0
*/
// signature: GFxDisplayList::FindDisplayIndex(int)
// Range: 0x804AD510 -> 0x804AD5D8
int GFxDisplayList::FindDisplayIndex() {
    // Local variables
    int size; // r7
    int jump; // r8
    int index; // r3
}
// Range: 0x804AD5E0 -> 0x804AD644
int GFxDisplayList::GetDisplayIndex(class GFxDisplayList * this /* r30 */, int depth /* r31 */) {
    // Local variables
    int index; // r0
}
// Range: 0x804AD650 -> 0x804AD6E0
class GFxCharacter * GFxDisplayList::GetCharacterAtDepth(class GFxDisplayList * this /* r30 */, int depth /* r31 */) {
}
// Range: 0x804AD6E0 -> 0x804ADCC8
bool GFxDisplayList::SwapDepths(class GFxDisplayList * this /* r25 */, int depth1 /* r26 */, int depth2 /* r27 */) {
    // Local variables
    int index2; // r28

    {
        // Range: 0x804AD764 -> 0x804ADB34
        // Local variables
        class DisplayEntry de; // r1+0x10
    }
}
// Range: 0x804ADCD0 -> 0x804ADD00
int GFxDisplayList::GetLargestDepthInUse() const {
}
// signature: GFxDisplayList::GetCharacterByName(GASStringContext *, const GASString &)
// Range: 0x804ADD00 -> 0x804ADE48
class GFxASCharacter * GFxDisplayList::GetCharacterByName(class GFxDisplayList * this /* r28 */, class GASString & name /* r29 */) {
    // Local variables
    class GFxCharacter * pch; // r30
    int i; // r24
}
// Range: 0x804ADE50 -> 0x804AE258
void GFxDisplayList::AddDisplayObject(class GFxDisplayList * this /* r27 */, class GFxCharPosInfo & pos /* r30 */, class GFxCharacter * ch /* r28 */, bool replaceIfDepthIsOccupied /* r29 */) {
    // Local variables
    int depth; // r25
    int size; // r26
    int index; // r29
    class DisplayEntry di; // r1+0x8
}
// Range: 0x804AE260 -> 0x804AE3D0
void GFxDisplayList::MoveDisplayObject(class GFxDisplayList * this /* r28 */, class GFxCharPosInfo & pos /* r31 */) {
    // Local variables
    int depth; // r29
    unsigned int size; // r30
    int index; // r0
}
// Range: 0x804AE3D0 -> 0x804AE618
void GFxDisplayList::ReplaceDisplayObject(class GFxDisplayList * this /* r29 */, class GFxCharPosInfo & pos /* r30 */, class GFxCharacter * ch /* r31 */) {
    // Local variables
    unsigned int size; // r28
    int depth; // r27
    int index; // r0
}
// Range: 0x804AE620 -> 0x804AE700
void GFxDisplayList::RemoveDisplayObject(class GFxDisplayList * this /* r29 */, int depth /* r30 */, class GFxResourceId & id /* r28 */) {
    // Local variables
    unsigned int size; // r31
    int index; // r4
}
// Range: 0x804AE700 -> 0x804AE81C
void GFxDisplayList::Clear(class GFxDisplayList * this /* r31 */) {
    // Local variables
    unsigned long i; // r27
    unsigned long n; // r26
}
// Range: 0x804AE820 -> 0x804AE8BC
void GFxDisplayList::MarkAllEntriesForRemoval(class GFxDisplayList * this /* r28 */) {
    // Local variables
    unsigned long i; // r30
    unsigned long n; // r29
}
// Range: 0x804AE8C0 -> 0x804AE92C
void GFxDisplayList::RemoveMarkedObjects(class GFxDisplayList * this /* r30 */) {
    {
        // Range: 0x804AE8D0 -> 0x804AE904
        // Local variables
        unsigned int i; // r31
    }
}
// Range: 0x804AE930 -> 0x804AEAA4
void GFxDisplayList::RemoveEntryAtIndex(class GFxDisplayList * this /* r31 */, unsigned int index /* r29 */) {
}
// Range: 0x804AEAB0 -> 0x804AEB5C
void GFxDisplayList::AdvanceFrame(class GFxDisplayList * this /* r27 */, bool nextFrame /* r28 */, float framePos /* f31 */) {
    {
        // Range: 0x804AEAD8 -> 0x804AEB30
        // Local variables
        int i; // r29
    }
}
// Range: 0x804AEB60 -> 0x804AED84
void GFxDisplayList::Display(class GFxDisplayList * this /* r22 */, class GFxDisplayContext & context /* r23 */) {
    // Local variables
    unsigned int maskCount; // r27
    int highestMaskedLayer; // r26

    {
        // Range: 0x804AEB7C -> 0x804AED48
        // Local variables
        unsigned long n; // r24
        unsigned long i; // r25
    }
}
// Range: 0x804AED90 -> 0x804AEE30
void GFxDisplayList::PropagateMouseEvent(class GFxDisplayList * this /* r27 */, class GFxEventId & id /* r28 */) {
    {
        // Range: 0x804AEDA4 -> 0x804AEE08
        // Local variables
        int i; // r29
    }
}
// Range: 0x804AEE30 -> 0x804AEED8
void GFxDisplayList::PropagateKeyEvent(class GFxDisplayList * this /* r25 */, class GFxEventId & id /* r26 */, int * pkeyMask /* r27 */) {
    {
        // Range: 0x804AEE44 -> 0x804AEEB4
        // Local variables
        unsigned long n; // r28
        unsigned long i; // r29
    }
}
// signature: GFxDisplayList::VisitMembers(GASObjectInterface::MemberVisitor *, unsigned int) const
// Range: 0x804AEEE0 -> 0x804AEFF0
void GFxDisplayList::VisitMembers(class GFxDisplayList * this /* r27 */, class MemberVisitor * pvisitor /* r28 */) const {
    {
        // Range: 0x804AEEFC -> 0x804AEFC8
        // Local variables
        unsigned int i; // r29
    }
}
