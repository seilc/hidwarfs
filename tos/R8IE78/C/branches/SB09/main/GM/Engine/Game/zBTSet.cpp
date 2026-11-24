/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zBTSet.cpp
*/
// Range: 0x80085020 -> 0x80085190
void zBTSet::Setup(class zBTSet * this /* r27 */, unsigned long long setID /* r23:r24 */, class zBlackboard * blackboard /* r28 */) {
    // Local variables
    class BehaviorSet * asset; // r31

    {
        // Range: 0x8008508C -> 0x8008516C
        // Local variables
        int i; // r30

        {
            // Range: 0x800850F0 -> 0x8008516C
            // Local variables
            int j; // r29
        }
    }
}
// signature: zBTSet::FindTree(unsigned int) const
// Range: 0x80085190 -> 0x80085220
class zBT * zBTSet::FindTree(class zBTSet * this /* r30 */) const {
    // Local variables
    class zBT * tree; // r6

    {
        // Range: 0x800851AC -> 0x80085208
        // Local variables
        int i; // r0

        {
            // Range: 0x800851C4 -> 0x80085208
            // Local variables
            int index; // r0
        }
    }
}
// Range: 0x80085220 -> 0x80085650
void zBTSet::SetupVariables(class BehaviorSet * asset /* r15 */, class zBlackboard * bb /* r16 */) {
    // Local variables
    int count; // r20

    {
        // Range: 0x8008523C -> 0x80085630
        // Local variables
        int i; // r19

        {
            // Range: 0x8008523C -> 0x80085630
            // Local variables
            unsigned int varID; // r18

            {
                // Range: 0x80085244 -> 0x80085248
                // Local variables
                int playerIndex; // r4
                class zPlayer * defaultVal; // r17
            }
            {
                // Range: 0x80085248 -> 0x8008524C
                // Local variables
                class xVec3 defaultVal; // r1+0x24
            }
            {
                // Range: 0x8008524C -> 0x80085250
                // Local variables
                class uid defaultVal; // r1+0x10
            }
            {
                // Range: 0x80085250 -> 0x80085630
                // Local variables
                class zVariableEventData defaultVal; // r1+0x78
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
    // -> struct {} __vt__31zVariable<18zVariableEventData>;
    // -> struct {} __vt__22zVariable<Q24Sext3uid>;
    // -> struct {} __vt__17zVariable<5xVec3>;
    // -> struct {} __vt__20zVariable<P7zPlayer>;
    // -> struct {} __vt__12zVariable<f>;
}
