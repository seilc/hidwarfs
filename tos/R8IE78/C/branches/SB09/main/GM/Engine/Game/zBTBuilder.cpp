/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zBTBuilder.cpp
*/
unsigned long long currentTreeID; // size: 0x8, address: 0x807311F0
unsigned int nodeCount; // size: 0x4, address: 0x807311F8
class NodeRecord * nodeRecords; // size: 0x4, address: 0x807311FC
// signature: zBTBuilder::FindIndex(int)
// Range: 0x8007D8D0 -> 0x8007D93C
int zBTBuilder::FindIndex() {
    // Local variables
    int hash; // r7
    int index; // r8
    bool found; // r9

    // References
    // -> class NodeRecord * nodeRecords;
    // -> unsigned int nodeCount;
}
// signature: zBTBuilder::FindEmptyIndex(int)
// Range: 0x8007D940 -> 0x8007D9A8
int zBTBuilder::FindEmptyIndex() {
    // Local variables
    int hash; // r7
    int index; // r3
    bool found; // r8

    // References
    // -> class NodeRecord * nodeRecords;
    // -> unsigned int nodeCount;
}
// Range: 0x8007D9B0 -> 0x8007E054
int zBTBuilder::ParseAsset(class BehaviorTree * treeAsset /* r31 */) {
    // Local variables
    unsigned int edgeCount; // r0
    int rootID; // r26
    bool done; // r4

    {
        // Range: 0x8007D9C0 -> 0x8007DA78
        // Local variables
        unsigned int i; // r30

        {
            // Range: 0x8007D9C0 -> 0x8007DA78
            // Local variables
            int index; // r0
        }
    }
    {
        // Range: 0x8007DA78 -> 0x8007DB30
        // Local variables
        unsigned int i; // r26

        {
            // Range: 0x8007DA78 -> 0x8007DB30
            // Local variables
            int index; // r0
        }
    }
    {
        // Range: 0x8007DB30 -> 0x8007DBE8
        // Local variables
        unsigned int i; // r26

        {
            // Range: 0x8007DB30 -> 0x8007DBE8
            // Local variables
            int index; // r0
        }
    }
    {
        // Range: 0x8007DBE8 -> 0x8007DCA0
        // Local variables
        unsigned int i; // r26

        {
            // Range: 0x8007DBE8 -> 0x8007DCA0
            // Local variables
            int index; // r0
        }
    }
    {
        // Range: 0x8007DCA0 -> 0x8007DD58
        // Local variables
        unsigned int i; // r26

        {
            // Range: 0x8007DCA0 -> 0x8007DD58
            // Local variables
            int index; // r0
        }
    }
    {
        // Range: 0x8007DD58 -> 0x8007DE10
        // Local variables
        unsigned int i; // r26

        {
            // Range: 0x8007DD58 -> 0x8007DE10
            // Local variables
            int index; // r0
        }
    }
    {
        // Range: 0x8007DE10 -> 0x8007DEC8
        // Local variables
        unsigned int i; // r26

        {
            // Range: 0x8007DE10 -> 0x8007DEC8
            // Local variables
            int index; // r0
        }
    }
    {
        // Range: 0x8007DED0 -> 0x8007DF18
        // Local variables
        unsigned int i; // r0

        {
            // Range: 0x8007DED0 -> 0x8007DF18
            // Local variables
            int end; // r4
            int start; // r0
        }
    }
    {
        // Range: 0x8007DF34 -> 0x8007E03C
        // Local variables
        unsigned int i; // r27

        {
            // Range: 0x8007DF34 -> 0x8007DF34
            // Local variables
            unsigned int edge; // r28

            {
                // Range: 0x8007DF34 -> 0x8007DF34
                // Local variables
                int end; // r4
                int start; // r6
                int connId; // r3
            }
        }
    }

    // References
    // -> unsigned int nodeCount;
    // -> class NodeRecord * nodeRecords;
}
// Range: 0x8007E060 -> 0x8007E0B4
void zBTBuilder::BuildSequenceNode(class NodeRecord * record /* r31 */) {
    // References
    // -> struct {} __vt__15zBTNodeSequence;
}
// Range: 0x8007E0C0 -> 0x8007E198
void zBTBuilder::BuildSelectorNode(class NodeRecord * record /* r31 */) {
    // References
    // -> struct {} __vt__21zBTNodeRandomSelector;
    // -> struct {} __vt__26zBTNodeProbabilitySelector;
    // -> struct {} __vt__23zBTNodePrioritySelector;
}
// Range: 0x8007E1A0 -> 0x8007E1F4
void zBTBuilder::BuildParallelNode(class NodeRecord * record /* r31 */) {
    // References
    // -> struct {} __vt__15zBTNodeParallel;
}
// Range: 0x8007E200 -> 0x8007E3B8
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
// Range: 0x8007E3C0 -> 0x8007E414
void zBTBuilder::BuildConditionNode(class NodeRecord * record /* r31 */) {
    // References
    // -> struct {} __vt__16zBTNodeCondition;
}
// Range: 0x8007E420 -> 0x8007E474
void zBTBuilder::BuildActionNode(class NodeRecord * record /* r31 */) {
    // References
    // -> struct {} __vt__13zBTNodeAction;
}
// Range: 0x8007E480 -> 0x8007E68C
void zBTBuilder::BuildNodes() {
    {
        // Range: 0x8007E490 -> 0x8007E5E8
        // Local variables
        unsigned int i; // r31
    }
    {
        // Range: 0x8007E5E8 -> 0x8007E678
        // Local variables
        unsigned int i; // r30

        {
            // Range: 0x8007E5E8 -> 0x8007E678
            // Local variables
            int parentId; // r3

            {
                // Range: 0x8007E5F4 -> 0x8007E678
                // Local variables
                int parentIndex; // r0
            }
        }
    }

    // References
    // -> unsigned int nodeCount;
    // -> class NodeRecord * nodeRecords;
}
// Range: 0x8007E6B0 -> 0x8007E818
class zBT * zBTBuilder::Build(class BehaviorTree * asset /* r28 */) {
    // Local variables
    int rootID; // r27

    {
        // Range: 0x8007E7AC -> 0x8007E7E8
        // Local variables
        unsigned int i; // r7
    }

    // References
    // -> class NodeRecord * nodeRecords;
    // -> unsigned int nodeCount;
    // -> unsigned long long currentTreeID;
}
