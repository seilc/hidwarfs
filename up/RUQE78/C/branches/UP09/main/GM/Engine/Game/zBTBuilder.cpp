/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zBTBuilder.cpp
*/
unsigned long long currentTreeID; // size: 0x8, address: 0x8081A510
unsigned int nodeCount; // size: 0x4, address: 0x8081A518
class NodeRecord * nodeRecords; // size: 0x4, address: 0x8081A51C
// signature: zBTBuilder::ParseAsset(Sext::BehaviorTree *)
// Range: 0x800BF400 -> 0x800BFDB8
int zBTBuilder::ParseAsset() {
    // Local variables
    unsigned int edgeCount; // r4
    int rootID; // r0
    bool done; // r9

    {
        // Range: 0x800BF404 -> 0x800BF494
        // Local variables
        unsigned int i; // r7
    }
    {
        // Range: 0x800BF514 -> 0x800BF5A4
        // Local variables
        unsigned int i; // r8
    }
    {
        // Range: 0x800BF624 -> 0x800BF6B4
        // Local variables
        unsigned int i; // r8
    }
    {
        // Range: 0x800BF734 -> 0x800BF7C4
        // Local variables
        unsigned int i; // r8
    }
    {
        // Range: 0x800BF844 -> 0x800BF8D4
        // Local variables
        unsigned int i; // r8
    }
    {
        // Range: 0x800BF954 -> 0x800BF9E4
        // Local variables
        unsigned int i; // r8
    }
    {
        // Range: 0x800BFA64 -> 0x800BFAF4
        // Local variables
        unsigned int i; // r8
    }
    {
        // Range: 0x800BFB98 -> 0x800BFBD4
        // Local variables
        unsigned int i; // r0

        {
            // Range: 0x800BFB98 -> 0x800BFBD4
            // Local variables
            int end; // r4
            int start; // r6
        }
    }
    {
        // Range: 0x800BFC4C -> 0x800BFD90
        // Local variables
        unsigned int i; // r5

        {
            // Range: 0x800BFC4C -> 0x800BFC4C
            // Local variables
            unsigned int edge; // r6

            {
                // Range: 0x800BFC4C -> 0x800BFC4C
                // Local variables
                int end; // r9
                int start; // r28
                int connId; // r27
            }
        }
    }

    // References
    // -> class NodeRecord * nodeRecords;
    // -> unsigned int nodeCount;
}
// Range: 0x800BFDC0 -> 0x800BFF78
void zBTBuilder::BuildDecoratorNode(class NodeRecord * record /* r31 */) {
    // References
    // -> struct {} __vt__27zBTNodeTryAndCatchDecorator;
    // -> struct {} __vt__28zBTNodeEventHandlerDecorator;
    // -> struct {} __vt__25zBTNodeTimeDelayDecorator;
    // -> struct {} __vt__28zBTNodeRandomChanceDecorator;
    // -> struct {} __vt__27zBTNodeForceStatusDecorator;
    // -> struct {} __vt__21zBTNodeTimerDecorator;
    // -> struct {} __vt__20zBTNodeLoopDecorator;
}
// Range: 0x800BFF80 -> 0x800C0320
void zBTBuilder::BuildNodes() {
    {
        // Range: 0x800BFF90 -> 0x800BFFE0
        // Local variables
        unsigned int i; // r20
    }
    {
        // Range: 0x800C0230 -> 0x800C02FC
        // Local variables
        unsigned int i; // r3

        {
            // Range: 0x800C0230 -> 0x800C02FC
            // Local variables
            int parentId; // r20
        }
    }

    // References
    // -> unsigned int nodeCount;
    // -> class NodeRecord * nodeRecords;
    // -> struct {} __vt__16zBTNodeReference;
    // -> struct {} __vt__13zBTNodeAction;
    // -> struct {} __vt__16zBTNodeCondition;
    // -> struct {} __vt__15zBTNodeParallel;
    // -> struct {} __vt__21zBTNodeRandomSelector;
    // -> struct {} __vt__26zBTNodeProbabilitySelector;
    // -> struct {} __vt__23zBTNodePrioritySelector;
    // -> struct {} __vt__15zBTNodeSequence;
}
// Range: 0x800C0320 -> 0x800C0510
class zBT * zBTBuilder::Build(class BehaviorTree * asset /* r29 */) {
    // Local variables
    int rootID; // r0

    {
        // Range: 0x800C048C -> 0x800C04A0
        // Local variables
        unsigned int i; // r7
    }

    // References
    // -> class NodeRecord * nodeRecords;
    // -> unsigned int nodeCount;
    // -> unsigned long long currentTreeID;
}
