/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zSearchStrategyAStar.cpp
*/
// Range: 0x801AA070 -> 0x801AA0B8
void zSearchStrategyAStar::AddToOpen(class SearchNode * node /* r6 */) {
}
// signature: zSearchStrategyAStar::ResortInOpen(zSearchStrategyAStar::SearchNode *)
// Range: 0x801AA1C0 -> 0x801AA324
void zSearchStrategyAStar::ResortInOpen() {
}
// signature: zSearchStrategyAStar::IsInOpen(zSearchStrategyAStar::SearchNode *) const
// Range: 0x801AA490 -> 0x801AA4AC
bool zSearchStrategyAStar::IsInOpen() const {
}
// signature: zSearchStrategyAStar::IsInClose(zSearchStrategyAStar::SearchNode *) const
// Range: 0x801AA4B0 -> 0x801AA4CC
bool zSearchStrategyAStar::IsInClose() const {
}
// Range: 0x801AA4D0 -> 0x801AA564
class SearchNode * zSearchStrategyAStar::GetBestFromOpen() {
}
// signature: zSearchStrategyAStar::FindEmptyNodeIndex(int) const
// Range: 0x801AA570 -> 0x801AA5E4
int zSearchStrategyAStar::FindEmptyNodeIndex() const {
    // Local variables
    int hash; // r0
    int index; // r6
    bool found; // r7
}
// signature: zSearchStrategyAStar::FindMatchingNodeIndex(int) const
// Range: 0x801AA5F0 -> 0x801AA684
int zSearchStrategyAStar::FindMatchingNodeIndex() const {
    // Local variables
    int hash; // r0
    int index; // r8
    bool found; // r9
}
// Range: 0x801AA690 -> 0x801AA6F0
void zSearchStrategyAStar::Init(class zSearchStrategyAStar * this /* r29 */, int maxNodes /* r30 */) {
}
// signature: zSearchStrategyAStar::Prepare(const zSearchMap *, const zSearchMapNode *, const zSearchMapNode *)
// Range: 0x801AA710 -> 0x801AA838
void zSearchStrategyAStar::Prepare(class zSearchStrategyAStar * this /* r31 */, class zSearchMapNode * startNode /* r25 */) {
    // Local variables
    class SearchNode * start; // r26

    {
        // Range: 0x801AA748 -> 0x801AA7A8
        // Local variables
        int index; // r0
    }
}
// Range: 0x801AA840 -> 0x801AAA98
void zSearchStrategyAStar::Step(class zSearchStrategyAStar * this /* r30 */) {
    // Local variables
    class SearchNode * curr; // reg65535

    {
        // Range: 0x801AA87C -> 0x801AA8FC
        // Local variables
        class SearchNode * pathNode; // r31
    }
    {
        // Range: 0x801AA8FC -> 0x801AAA64
        {
            // Range: 0x801AA900 -> 0x801AAA50
            // Local variables
            float newG; // f30
            float cost; // f0
            class SearchNode * child; // r26
        }
    }
}
// Range: 0x801AAAA0 -> 0x801AAAB0
void zSearchStrategyAStar::Reset() {
}
// Range: 0x801AAAB0 -> 0x801AAAF4
void zSearchStrategyAStar::Cleanup(class zSearchStrategyAStar * this /* r30 */) {
}
// Range: 0x801AAB00 -> 0x801AABC4
void zSearchStrategyAStar::GetPath(class zSearchStrategyAStar * this /* r31 */, class zSearchPath * path /* r29 */) const {
    // Local variables
    class SearchNode * p; // r31
    bool complete; // r30
}
