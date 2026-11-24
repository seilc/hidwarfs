/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zSearchStrategyAStar.cpp
*/
// signature: zSearchStrategyAStar::FindMatchingNodeIndex(int) const
// Range: 0x802C97A0 -> 0x802C9838
int zSearchStrategyAStar::FindMatchingNodeIndex() const {
    // Local variables
    int hash; // r0
    int index; // r8
    bool found; // r9
}
// signature: zSearchStrategyAStar::Prepare(const zSearchMap *, const zSearchMapNode *, const zSearchMapNode *)
// Range: 0x802C9840 -> 0x802C9AA0
void zSearchStrategyAStar::Prepare(class zSearchStrategyAStar * this /* r30 */, class zSearchMapNode * startNode /* r31 */) {
    // Local variables
    class SearchNode * start; // r31
}
// Range: 0x802C9AA0 -> 0x802CA32C
void zSearchStrategyAStar::Step(class zSearchStrategyAStar * this /* r26 */) {
    {
        // Range: 0x802C9C58 -> 0x802C9CE4
        // Local variables
        class SearchNode * pathNode; // r28
    }
    {
        // Range: 0x802C9CE4 -> 0x802CA300
        {
            // Range: 0x802C9CE8 -> 0x802CA2DC
            // Local variables
            float newG; // f1
            float cost; // f0
            class SearchNode * child; // r27
        }
    }
}
// Range: 0x802CA330 -> 0x802CA340
void zSearchStrategyAStar::Reset() {
}
// Range: 0x802CA340 -> 0x802CA38C
void zSearchStrategyAStar::Cleanup(class zSearchStrategyAStar * this /* r30 */) {
}
// Range: 0x802CA390 -> 0x802CA490
void zSearchStrategyAStar::GetPath(class zSearchStrategyAStar * this /* r30 */, class zSearchPath * path /* r31 */) const {
    // Local variables
    class SearchNode * p; // r7
    bool complete; // r8
}
