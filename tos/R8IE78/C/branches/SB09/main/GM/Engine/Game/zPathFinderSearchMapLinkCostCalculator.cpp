/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zPathFinderSearchMapLinkCostCalculator.cpp
*/
// signature: zPathFinderSearchMapLinkCostCalculator::CalculateWallNetCost(const zWallNet *, const zSearchMapLink *, int, int, void *, void *) const
// Range: 0x801AB140 -> 0x801AB4D8
float zPathFinderSearchMapLinkCostCalculator::CalculateWallNetCost(class zPathFinderSearchMapLinkCostCalculator * this /* r10 */, class zWallNet * wn /* r30 */, class zSearchMapLink * link /* r28 */, int fromTri /* r26 */, int toTri /* r27 */, void * userData2 /* r31 */) const {
    // Local variables
    float * user1; // r0
    float * user2; // r0
    class xVec3 enterPoint; // r1+0xC8

    {
        // Range: 0x801AB1C8 -> 0x801AB2E8
        // Local variables
        class xVec3 toLink; // r1+0x98
        class xVec3 linkVec; // r1+0xA4
        class xVec3 linkEnd; // r1+0xB0
        class xVec3 linkStart; // r1+0xBC
        class zNavLink * nl; // r0
    }
    {
        // Range: 0x801AB2E8 -> 0x801AB4B0
        // Local variables
        class xVec3 d; // r1+0x50
        class xVec3 exitPoint; // r1+0x5C
        float t; // f2
        float dot; // f0
        class xVec3 toEnter; // r1+0x68
        float edgeLength; // f0
        class xVec3 exitEdgeDir; // r1+0x74
        class xVec3 exitV2; // r1+0x80
        class xVec3 exitV1; // r1+0x8C
        int exitEdgeIndex; // r6
        class zWallNetTriConx * wnConx; // r0

        {
            // Range: 0x801AB2F8 -> 0x801AB324
            // Local variables
            int i; // r7
        }
    }
}
// signature: zPathFinderSearchMapLinkCostCalculator::CalculateWallNetGroupCost(const zWallNet *, const zWallNet *) const
// Range: 0x801AB4E0 -> 0x801AB4E8
float zPathFinderSearchMapLinkCostCalculator::CalculateWallNetGroupCost() const {
}
