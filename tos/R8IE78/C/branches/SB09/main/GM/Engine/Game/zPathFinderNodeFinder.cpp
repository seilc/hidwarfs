/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zPathFinderNodeFinder.cpp
*/
// signature: zPathFinderNodeFinder::FindNavMeshNode(const xVec3 *, const zSearchMap *)
// Range: 0x801A7350 -> 0x801A73BC
class zSearchMapNode * zPathFinderNodeFinder::FindNavMeshNode(class zSearchMap * map /* r31 */) {
    // Local variables
    int triID; // r0
    class zSearchMapNode * node; // r6
}
// signature: zPathFinderNodeFinder::FindNavMeshGroupNode(const xVec3 *, const zSearchMap *)
// Range: 0x801A73C0 -> 0x801A743C
class zSearchMapNode * zPathFinderNodeFinder::FindNavMeshGroupNode(class zSearchMap * map /* r30 */) {
    // Local variables
    class zWallNetGroup * wng; // r31
    class zWallNet * wn; // r0
    int index; // r0
    class zSearchMapNode * node; // r6
}
// signature: zPathFinderNodeFinder::FindNode(const xVec3 *, const zSearchMap *)
// Range: 0x801A7440 -> 0x801A746C
class zSearchMapNode * zPathFinderNodeFinder::FindNode() {
}
