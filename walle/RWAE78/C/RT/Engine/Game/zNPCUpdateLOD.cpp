/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zNPCUpdateLOD.cpp
*/
// Range: 0x80147120 -> 0x8014746C
bool zNPCUpdateLOD::DoesNPCNeedToBeActive(class zNPCUpdateLOD * this /* r29 */, int isCurrentlyActive /* r30 */) {
    // Local variables
    class xVec3 npcLODPositions[4]; // r1+0x20
    unsigned int numNPCLODPositions; // r0
    int numberOfCams; // r0
    class zPlayerContainer * players; // r7

    {
        // Range: 0x801471AC -> 0x801472E8
        // Local variables
        int i; // r26

        {
            // Range: 0x801471AC -> 0x801472E8
            // Local variables
            class xVec3 * checkLODPos; // r0

            {
                // Range: 0x801471AC -> 0x801472E8
                // Local variables
                unsigned int j; // r0
            }
        }
    }
    {
        // Range: 0x801472F8 -> 0x8014743C
        // Local variables
        int i; // r8

        {
            // Range: 0x801472F8 -> 0x8014743C
            // Local variables
            class xVec3 * checkLODPos; // r0

            {
                // Range: 0x801472F8 -> 0x8014743C
                // Local variables
                unsigned int j; // r0
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80147470 -> 0x8014766C
class zNPCUpdateLODResult zNPCUpdateLOD::CheckLOD(class zNPCUpdateLOD * this /* r29 */) {
    // Local variables
    int isNPCActive; // r31
    int isNPCPaused; // r30
    int npcNeedsToBeActivated; // r0
    int npcNeedsToBePaused; // r0
    class zNPCUpdateLODResult lodResult; // r1+0x8

    // References
    // -> class zGlobals globals;
}
