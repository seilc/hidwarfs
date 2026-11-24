/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zPathFinder.cpp
*/
// signature: zPathFinderNavMeshHeuristicCalculator::CalculateHeuristic(const zSearchMap *, const zSearchMapNode *, const zSearchMapNode *) const
// Range: 0x802BE1B0 -> 0x802BE2A8
float zPathFinderNavMeshHeuristicCalculator::CalculateHeuristic(class zPathFinderNavMeshHeuristicCalculator * this /* r31 */) const {
    // Local variables
    class zWallNet * wn; // r6
    class xVec3 fromPos; // r1+0x20
    class xVec3 disp; // r1+0x14
}
// signature: zPathFinderNavMeshGroupHeuristicCalculator::CalculateHeuristic(const zSearchMap *, const zSearchMapNode *, const zSearchMapNode *) const
// Range: 0x802BE2B0 -> 0x802BE308
float zPathFinderNavMeshGroupHeuristicCalculator::CalculateHeuristic(class zSearchMapNode * to /* r30 */) const {
    // Local variables
    class zWallNetGroup * wng; // r31
    class zWallNet * fromWn; // r30
    class zWallNet * toWn; // r0
}
// Range: 0x802BE310 -> 0x802BE378
void * zPathFinder::zPathFinder() {
    // References
    // -> struct {} __vt__42zPathFinderNavMeshGroupHeuristicCalculator;
    // -> struct {} __vt__37zPathFinderNavMeshHeuristicCalculator;
}
// Range: 0x802BE380 -> 0x802BE460
void zPathFinder::Setup(class zPathFinder * this /* r27 */, class xBase * owner /* r28 */) {
    // References
    // -> struct {} __vt__20zSearchStrategyAStar;
    // -> class zFactory factory;
}
// Range: 0x802BE490 -> 0x802BE620
void zPathFinder::Cleanup(class zPathFinder * this /* r31 */) {
    // References
    // -> static class zSearchManager gSearchManager;
    // -> static class SearchTaskEntry gSearchTasks[16];
}
// signature: zPathFinder::FindWallNetPath(const zWallNet *, const xVec3 *, const xVec3 *)
// Range: 0x802BE620 -> 0x802BEB94
void zPathFinder::FindWallNetPath(class zPathFinder * this /* r28 */, class xVec3 * start /* r29 */, class xVec3 * end /* r30 */) {
    // Local variables
    bool intersect; // r0

    {
        // Range: 0x802BE63C -> 0x802BE748
        // Local variables
        int j; // r0
    }

    // References
    // -> static class zSearchManager gSearchManager;
}
// Range: 0x802BEBA0 -> 0x802BEFD0
void zPathFinder::FindPath(class zPathFinder * this /* r27 */, class xVec3 * start /* r28 */, class xVec3 * end /* r29 */, enum eWallNetUserType userType /* r22 */) {
    // References
    // -> static class zSearchManager gSearchManager;
    // -> class zGlobals globals;
}
// Range: 0x802BEFD0 -> 0x802BF3F8
void zPathFinder::FindPath(class zPathFinder * this /* r27 */, class zWallNetPosition * start /* r28 */, class xVec3 * end /* r29 */, enum eWallNetUserType userType /* r22 */) {
    // References
    // -> static class zSearchManager gSearchManager;
    // -> class zGlobals globals;
}
// Range: 0x802BF400 -> 0x802BF480
void zPathFinder::CancelSearch() {
    // References
    // -> static class zSearchManager gSearchManager;
    // -> static class SearchTaskEntry gSearchTasks[16];
}
// Range: 0x802BF480 -> 0x802BF718
enum ePathEvalResult zPathFinder::EvaluatePath(class zPathFinder * this /* r28 */, class xVec3 * currPos /* r29 */, class xVec3 * currGoal /* r30 */, enum eNavLinkActionCode * actionCode /* r31 */) {
    {
        // Range: 0x802BF524 -> 0x802BF5FC
        // Local variables
        enum ePathEvalResult result; // r0
        enum eNavLinkActionCode tempActionCode; // r1+0xC
        class xVec3 tempGoal; // r1+0x1C

        {
            // Range: 0x802BF56C -> 0x802BF5FC
            // Local variables
            class zWallNet * endWN; // r0
            class zWallNet * startWN; // r31
        }
    }
    {
        // Range: 0x802BF5FC -> 0x802BF6F8
        // Local variables
        enum ePathEvalResult result; // r0
        enum eNavLinkActionCode tempActionCode; // r1+0x8
        class xVec3 tempGoal; // r1+0x10

        {
            // Range: 0x802BF67C -> 0x802BF6F8
            // Local variables
            class zWallNet * endWN; // r0
            class zWallNet * startWN; // r31
        }
    }
}
// signature: zPathFinder::SetCostCalculator(zPathFinderSearchMapLinkCostCalculator *)
// Range: 0x802BF720 -> 0x802BF738
void zPathFinder::SetCostCalculator() {
}
// Range: 0x802BF750 -> 0x802BF92C
void zPathFinder::SearchDone(class zPathFinder * this /* r31 */) {
}
