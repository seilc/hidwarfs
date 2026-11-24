/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zNPCCommonUPBTActions.cpp
*/
// Range: 0x801BD200 -> 0x801BD6B8
void zNPCBTFollowFloatingObjectAction::Begin(class zNPCBTFollowFloatingObjectAction * this /* r31 */) {
    // References
    // -> struct {} __vt__31zNPCSearchMapLinkCostCalculator;
    // -> static unsigned int NPC_VAR_CURRENT_FLOATING_OBJECT;
}
// Range: 0x801BD6C0 -> 0x801BD7C0
void zNPCBTFollowFloatingObjectAction::UpdateDestination(class zNPCBTFollowFloatingObjectAction * this /* r31 */) {
    // Local variables
    class xVec3 dest; // r1+0x8

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x801BD7C0 -> 0x801BDE04
enum eTaskState zNPCBTFollowFloatingObjectAction::Update(class zNPCBTFollowFloatingObjectAction * this /* r31 */, float dt /* f31 */) {
    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCBTKillFloatingObjectAction::Update(float)
// Range: 0x801BDE10 -> 0x801BDECC
enum eTaskState zNPCBTKillFloatingObjectAction::Update() {
    // Local variables
    class zUpFloatingObject * obj; // r31

    // References
    // -> static unsigned int NPC_VAR_CURRENT_FLOATING_OBJECT;
}
// signature: zNPCBTUpdateUPBugCatchingContextActionAction::Update(float)
// Range: 0x801BDED0 -> 0x801BE268
enum eTaskState zNPCBTUpdateUPBugCatchingContextActionAction::Update(class zNPCBTUpdateUPBugCatchingContextActionAction * this /* r27 */) {
    // Local variables
    class xVec3 * npcPos; // r0

    {
        // Range: 0x801BDF40 -> 0x801BE1E0
        // Local variables
        int playerIdx; // r28

        {
            // Range: 0x801BDF40 -> 0x801BE1E0
            // Local variables
            class zCommonPlayer * player; // r23

            {
                // Range: 0x801BDF40 -> 0x801BDF6C
                // Local variables
                class zUpContextAction * ca; // r0
            }
            {
                // Range: 0x801BDFA0 -> 0x801BE1B4
                // Local variables
                class zUpContextAction * ca; // r0
            }
            {
                // Range: 0x801BE1B8 -> 0x801BE1E0
                // Local variables
                class zUpContextAction * ca; // r0
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class xVec3 m_UnitAxisZ;
}
// signature: zNPCBTSquishAction::Update(float)
// Range: 0x801BE270 -> 0x801BE4C0
enum eTaskState zNPCBTSquishAction::Update(class zNPCBTSquishAction * this /* r29 */) {
    {
        // Range: 0x801BE284 -> 0x801BE42C
        // Local variables
        class zSoundFX * splatSound; // r0
        class xMat4x3 mat; // r1+0x8
        class zDecal * decalGenerator; // r30
    }
}
