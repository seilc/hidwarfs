/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zPathFinder.cpp
*/
// signature: zPathFinderNavMeshHeuristicCalculator::CalculateHeuristic(const zSearchMap *, const zSearchMapNode *, const zSearchMapNode *) const
// Range: 0x801A6700 -> 0x801A67D8
float zPathFinderNavMeshHeuristicCalculator::CalculateHeuristic(class zPathFinderNavMeshHeuristicCalculator * this /* r31 */) const {
    // Local variables
    class zWallNet * wn; // r6
    class xVec3 fromPos; // r1+0x20
    class xVec3 disp; // r1+0x14
}
// signature: zPathFinderNavMeshGroupHeuristicCalculator::CalculateHeuristic(const zSearchMap *, const zSearchMapNode *, const zSearchMapNode *) const
// Range: 0x801A67E0 -> 0x801A6830
float zPathFinderNavMeshGroupHeuristicCalculator::CalculateHeuristic(class zSearchMapNode * to /* r30 */) const {
    // Local variables
    class zWallNetGroup * wng; // r31
    class zWallNet * fromWn; // r30
    class zWallNet * toWn; // r0
}
// Range: 0x801A6830 -> 0x801A689C
void * zPathFinder::zPathFinder(class zPathFinder * this /* r30 */) {
    // References
    // -> struct {} __vt__42zPathFinderNavMeshGroupHeuristicCalculator;
    // -> struct {} __vt__37zPathFinderNavMeshHeuristicCalculator;
}
// Range: 0x801A68A0 -> 0x801A6940
void zPathFinder::Setup(class zPathFinder * this /* r30 */, class xBase * owner /* r31 */) {
    // References
    // -> struct {} __vt__20zSearchStrategyAStar;
    // -> class Factory factory;
}
// Range: 0x801A6970 -> 0x801A69C8
void zPathFinder::Reset(class zPathFinder * this /* r31 */) {
}
// Range: 0x801A69D0 -> 0x801A6A3C
void zPathFinder::Cleanup(class zPathFinder * this /* r31 */) {
}
// signature: FindWallNetGroup::FindWallNetGroup(const zWallNet *, const zWallNet *)
// Range: 0x801A6E70 -> 0x801A6E84
void * FindWallNetGroup::FindWallNetGroup() {
}
// Range: 0x801A6A40 -> 0x801A6C50
void zPathFinder::FindWallNetPath(class zPathFinder * this /* r31 */, class zWallNet * wn /* r28 */, class xVec3 * start /* r26 */, class xVec3 * end /* r27 */, float npcRadius /* f30 */) {
    // Local variables
    class xVec3 dir; // r1+0x1C
    bool intersect; // r29
    float distance; // f31
    class zSearchMap * map; // r30

    {
        // Range: 0x801A6AAC -> 0x801A6B08
        // Local variables
        class zWallNetPositionXZ wallNetStart; // r1+0x28
        class zWallNetCollis collis; // r1+0x3C
    }
    {
        // Range: 0x801A6B20 -> 0x801A6BC8
        // Local variables
        class zSearchMapNode * endNode; // r28
        class zSearchMapNode * startNode; // r29
        class zPathFinderNodeFinder nodeFinder; // r1+0xC
    }
    {
        // Range: 0x801A6BC8 -> 0x801A6C28
        // Local variables
        class zSearchMapNode * endNode; // r0
        class zPathFinderNodeFinder nodeFinder; // r1+0x8
    }
}
// signature: zPathFinder::FindWallNetGroupPath(const zWallNetGroup *, const xVec3 *, const xVec3 *)
// Range: 0x801A6C50 -> 0x801A6D28
void zPathFinder::FindWallNetGroupPath(class zPathFinder * this /* r27 */, class xVec3 * start /* r28 */, class xVec3 * end /* r29 */) {
    // Local variables
    class zSearchMap * map; // r31

    {
        // Range: 0x801A6C78 -> 0x801A6D14
        // Local variables
        class zSearchMapNode * endNode; // r29
        class zSearchMapNode * startNode; // r30
        class zPathFinderNodeFinder nodeFinder; // r1+0x8
    }
}
// Range: 0x801A6D30 -> 0x801A6E64
void zPathFinder::FindPath(class zPathFinder * this /* r28 */, class xVec3 * start /* r29 */, class xVec3 * end /* r30 */, float npcRadius /* f31 */, enum eWallNetUserType userType /* r31 */) {
    {
        // Range: 0x801A6E04 -> 0x801A6E4C
        // Local variables
        class FindWallNetGroup findwng; // r1+0x8
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x801A6F40 -> 0x801A6F48
void zPathFinder::CancelSearch() {
}
// Range: 0x801A6F50 -> 0x801A71C4
enum ePathEvalResult zPathFinder::EvaluatePath(class zPathFinder * this /* r27 */, class xVec3 * currPos /* r28 */, class xVec3 * currGoal /* r29 */, float npcRadius /* f31 */, enum eNavLinkActionCode * actionCode /* r30 */) {
    {
        // Range: 0x801A6FEC -> 0x801A70BC
        // Local variables
        enum ePathEvalResult result; // r31
        enum eNavLinkActionCode tempActionCode; // r1+0xC
        class xVec3 tempGoal; // r1+0x1C

        {
            // Range: 0x801A7034 -> 0x801A70BC
            // Local variables
            class zWallNet * endWN; // r0
            class zWallNet * startWN; // r31
        }
    }
    {
        // Range: 0x801A70BC -> 0x801A71AC
        // Local variables
        enum ePathEvalResult result; // r31
        enum eNavLinkActionCode tempActionCode; // r1+0x8
        class xVec3 tempGoal; // r1+0x10

        {
            // Range: 0x801A7138 -> 0x801A71AC
            // Local variables
            class zWallNet * endWN; // r0
            class zWallNet * startWN; // r31
        }
    }
}
// signature: zPathFinder::SetCostCalculator(zPathFinderSearchMapLinkCostCalculator *)
// Range: 0x801A71D0 -> 0x801A71E8
void zPathFinder::SetCostCalculator() {
}
// Range: 0x801A71F0 -> 0x801A733C
void zPathFinder::SearchDone(class zPathFinder * this /* r31 */) {
}
