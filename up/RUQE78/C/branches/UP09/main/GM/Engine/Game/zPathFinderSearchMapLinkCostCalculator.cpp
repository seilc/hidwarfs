/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zPathFinderSearchMapLinkCostCalculator.cpp
*/
// signature: zPathFinderSearchMapLinkCostCalculator::CalculateWallNetCost(const zWallNet *, const zSearchMapLink *, int, int, void *, void *) const
// Range: 0x802CABD0 -> 0x802CB674
float zPathFinderSearchMapLinkCostCalculator::CalculateWallNetCost() const {
    // Local variables
    float * user1; // r0
    float * user2; // r0
    class xVec3 enterPoint; // r1+0x134

    {
        // Range: 0x802CAC70 -> 0x802CB2F4
        // Local variables
        class xVec3 toLink; // r1+0x104
        class xVec3 linkVec; // r1+0x110
        class xVec3 linkEnd; // r1+0x11C
        class xVec3 linkStart; // r1+0x128
        class zNavLink * nl; // r0
    }
    {
        // Range: 0x802CB2F4 -> 0x802CB62C
        // Local variables
        class xVec3 d; // r1+0xBC
        class xVec3 exitPoint; // r1+0xC8
        float t; // f1
        float dot; // f0
        class xVec3 toEnter; // r1+0xD4
        float edgeLength; // f0
        class xVec3 exitEdgeDir; // r1+0xE0
        class xVec3 exitV2; // r1+0xEC
        class xVec3 exitV1; // r1+0xF8
        int exitEdgeIndex; // r4
        class zWallNetTriConx * wnConx; // r3

        {
            // Range: 0x802CB2FC -> 0x802CB338
            // Local variables
            int i; // r0
        }
    }
}
// signature: zPathFinderSearchMapLinkCostCalculator::CalculateWallNetGroupCost(const zWallNet *, const zWallNet *) const
// Range: 0x802CB680 -> 0x802CB688
float zPathFinderSearchMapLinkCostCalculator::CalculateWallNetGroupCost() const {
}
