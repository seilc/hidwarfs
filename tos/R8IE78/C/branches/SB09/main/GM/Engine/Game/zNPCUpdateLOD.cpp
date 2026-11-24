/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zNPCUpdateLOD.cpp
*/
// signature: zNPCUpdateLOD::Reset(zNPCBase *, const Sext::NPCAsset *)
// Range: 0x800FE590 -> 0x800FE5B0
void zNPCUpdateLOD::Reset() {
}
// Range: 0x800FE5B0 -> 0x800FE684
bool zNPCUpdateLOD::IsInsideUpdateRange(class zNPCUpdateLOD * this /* r29 */, class xVec3 & npcLODPos /* r30 */, class xVec3 & checkLODPos /* r31 */, float rangeMultiplier /* f31 */) {
    {
        // Range: 0x800FE5F0 -> 0x800FE664
        // Local variables
        float LodRadius2; // f3
        float distanceY; // f2
        float distanceXZ2; // f0
    }
}
// Range: 0x800FE690 -> 0x800FE83C
bool zNPCUpdateLOD::DoesNPCNeedToBeActive(class zNPCUpdateLOD * this /* r30 */, int isCurrentlyActive /* r31 */) {
    // Local variables
    class xVec3 npcLODPositions[4]; // r1+0x8
    unsigned int numNPCLODPositions; // r0
    int numberOfCams; // r0
    class zPlayerContainer & players; // r22

    {
        // Range: 0x800FE710 -> 0x800FE78C
        // Local variables
        int i; // r24

        {
            // Range: 0x800FE710 -> 0x800FE78C
            // Local variables
            class xVec3 * checkLODPos; // r23

            {
                // Range: 0x800FE714 -> 0x800FE78C
                // Local variables
                unsigned int j; // r22
            }
        }
    }
    {
        // Range: 0x800FE790 -> 0x800FE820
        // Local variables
        int i; // r23

        {
            // Range: 0x800FE790 -> 0x800FE820
            // Local variables
            class xVec3 * checkLODPos; // r24

            {
                // Range: 0x800FE79C -> 0x800FE820
                // Local variables
                unsigned int j; // r21
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zNPCUpdateLOD::DoesNPCNeedToBePaused(int)
// Range: 0x800FE840 -> 0x800FE8D4
bool zNPCUpdateLOD::DoesNPCNeedToBePaused(class zNPCUpdateLOD * this /* r31 */) {
    // References
    // -> class zGlobals globals;
}
// Range: 0x800FE8E0 -> 0x800FEA64
class zNPCUpdateLODResult zNPCUpdateLOD::CheckLOD(class zNPCUpdateLOD * this /* r28 */) {
    // Local variables
    int isNPCActive; // r30
    int isNPCPaused; // r29
    int npcNeedsToBeActivated; // r0
    int npcNeedsToBePaused; // r0
    class zNPCUpdateLODResult lodResult; // r1+0x8
}
