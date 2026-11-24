/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zBTSet.cpp
*/
// Range: 0x800C7FC0 -> 0x800C81D0
void zBTSet::Setup(class zBTSet * this /* r25 */, unsigned long long setID /* r23:r24 */, class zBlackboard * blackboard /* r26 */) {
    // Local variables
    class BehaviorSet * asset; // r28

    {
        // Range: 0x800C8088 -> 0x800C8198
        // Local variables
        int i; // r27

        {
            // Range: 0x800C80EC -> 0x800C8170
            // Local variables
            int j; // r5
        }
    }

    // References
    // -> class zDepot depot;
}
// Range: 0x800C81D0 -> 0x800C8D08
void zBTSet::SetupVariables(class BehaviorSet * asset /* r27 */, class zBlackboard * bb /* r28 */) {
    // Local variables
    int variableCount; // r31
    int count; // r14

    {
        // Range: 0x800C81EC -> 0x800C8654
        // Local variables
        int i; // r30

        {
            // Range: 0x800C81EC -> 0x800C8654
            // Local variables
            unsigned int varID; // r29

            {
                // Range: 0x800C81F8 -> 0x800C81FC
                // Local variables
                int playerIndex; // r4
                class zPlayer * defaultVal; // r17
            }
            {
                // Range: 0x800C81FC -> 0x800C8654
                // Local variables
                class xVec3 defaultVal; // r1+0x3C
            }
        }
    }
    {
        // Range: 0x800C8664 -> 0x800C8CD8
        // Local variables
        int i; // r15

        {
            // Range: 0x800C8664 -> 0x800C8CD8
            // Local variables
            unsigned int varID; // r16

            {
                // Range: 0x800C866C -> 0x800C8670
                // Local variables
                int playerIndex; // r4
                class zPlayer * defaultVal; // r30
            }
            {
                // Range: 0x800C8670 -> 0x800C8674
                // Local variables
                class xVec3 defaultVal; // r1+0x30
            }
            {
                // Range: 0x800C8674 -> 0x800C8678
                // Local variables
                class uid defaultVal; // r1+0x10
            }
            {
                // Range: 0x800C8678 -> 0x800C8CD8
                // Local variables
                class zVariableEventData defaultVal; // r1+0x90
            }
        }
    }

    // References
    // -> struct {} __vt__31zVariable<18zVariableEventData>;
    // -> struct {} __vt__22zVariable<Q24Sext3uid>;
    // -> class xGlobals * xglobals;
    // -> struct {} __vt__17zVariable<5xVec3>;
    // -> struct {} __vt__20zVariable<P7zPlayer>;
    // -> struct {} __vt__12zVariable<f>;
    // -> struct {} __vt__12zVariable<i>;
}
