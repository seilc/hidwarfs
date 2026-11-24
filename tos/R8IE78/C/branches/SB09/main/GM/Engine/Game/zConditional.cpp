/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zConditional.cpp
*/
// Range: 0x800AA490 -> 0x800AA50C
class Entity * Sext::zCondAsset::Create(class EntityHandleBase * handle /* r29 */, class zCondAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__12zConditional;
}
// Range: 0x800AA510 -> 0x800AA628
void zConditionalInit(class xBase * b /* r31 */, class zCondAsset * asset /* r30 */) {
    // Local variables
    class zConditional * c; // r0

    {
        // Range: 0x800AA568 -> 0x800AA5B4
        // Local variables
        int i; // r6
    }
    {
        // Range: 0x800AA5B4 -> 0x800AA614
        // Local variables
        int unitIdx; // r9

        {
            // Range: 0x800AA5C4 -> 0x800AA614
            // Local variables
            int varIdx; // r0
        }
    }

    // References
    // -> class zVarEntry zVarEntryTable[66];
}
// Range: 0x800AA630 -> 0x800AA730
unsigned int zConditional_GetCount(class zConditional * c /* r26 */) {
    // Local variables
    class zVarEntry * v; // r27
    void * context; // r5
    unsigned int temp; // r0

    {
        // Range: 0x800AA654 -> 0x800AA6FC
        // Local variables
        int i; // r0

        {
            // Range: 0x800AA654 -> 0x800AA6FC
            // Local variables
            unsigned int entry; // r0
        }
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class zVarEntry zVarEntryTable[66];
}
// Range: 0x800AA730 -> 0x800AA7E8
unsigned int zConditional_Evaluate(class zConditional * c /* r28 */) {
    // Local variables
    int totalTrue; // r30

    {
        // Range: 0x800AA760 -> 0x800AA7A0
        // Local variables
        int i; // r29
    }
}
// Range: 0x800AA7F0 -> 0x800AA994
unsigned int zConditional_EvaluateUnit(class zConditionalUnit * c /* r31 */) {
    // Local variables
    void * context; // r5
    unsigned int temp; // r0

    // References
    // -> class xGlobals * xglobals;
}
// signature: zConditionalEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800AA9A0 -> 0x800AAA90
void zConditionalEventCB() {
    // Local variables
    class zConditional * t; // r31

    {
        // Range: 0x800AAA40 -> 0x800AAA6C
        // Local variables
        class EventNotifyCountIs params; // r1+0x8
        unsigned int count; // r0
    }
}
