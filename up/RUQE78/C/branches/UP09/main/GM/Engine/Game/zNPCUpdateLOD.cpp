/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zNPCUpdateLOD.cpp
*/
// Range: 0x801E6FE0 -> 0x801E733C
bool zNPCUpdateLOD::DoesNPCNeedToBeActive(class zNPCUpdateLOD * this /* r29 */, int isCurrentlyActive /* r30 */) {
    // Local variables
    class xVec3 npcLODPositions[4]; // r1+0x20
    unsigned int numNPCLODPositions; // r0
    int numberOfCams; // r0
    class zPlayerContainer & players; // r9

    {
        // Range: 0x801E7064 -> 0x801E71A8
        // Local variables
        int i; // r25

        {
            // Range: 0x801E7064 -> 0x801E71A8
            // Local variables
            class xVec3 * checkLODPos; // r0

            {
                // Range: 0x801E7064 -> 0x801E71A8
                // Local variables
                unsigned int j; // r0
            }
        }
    }
    {
        // Range: 0x801E71B8 -> 0x801E730C
        // Local variables
        int i; // r10

        {
            // Range: 0x801E71B8 -> 0x801E730C
            // Local variables
            class xVec3 * checkLODPos; // r0

            {
                // Range: 0x801E71B8 -> 0x801E730C
                // Local variables
                unsigned int j; // r0
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x801E7340 -> 0x801E753C
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
