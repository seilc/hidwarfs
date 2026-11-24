/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zNPCWaspBTActions.cpp
*/
// Range: 0x801E90F0 -> 0x801E96F8
void zNPCWaspBTAttackOrbitAction::Begin(class zNPCWaspBTAttackOrbitAction * this /* r30 */) {
    // Local variables
    class Action_NPC_Wasp_AttackOrbit * asset; // r4
    float orbitRadiusBase; // f31
    float orbitRadiusIncrement; // f30

    {
        // Range: 0x801E93C4 -> 0x801E9550
        // Local variables
        float numAttackers; // f29
        class xVec3 toPlayer; // r1+0x20
    }

    // References
    // -> class xVec3 m_UnitAxisX;
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
}
// Range: 0x801E9730 -> 0x801E973C
void zNPCWaspBTAttackOrbitAction::PlayerChangedCB() {
}
// Range: 0x801E9740 -> 0x801E9E0C
void zNPCWaspBTAttackOrbitAction::InitDestination(class zNPCWaspBTAttackOrbitAction * this /* r31 */) {
    // Local variables
    float test; // f0
    float test2; // f0
    class xVec3 playerToNPC; // r1+0x68
    class xVec3 dest; // r1+0x5C

    // References
    // -> static unsigned int NPC_VAR_WASP_Y_OFFSET;
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_UnitAxisX;
}
// signature: zNPCWaspBTAttackOrbitAction::UpdateCurrentDestination(float)
// Range: 0x801E9E10 -> 0x801EA340
void zNPCWaspBTAttackOrbitAction::UpdateCurrentDestination(class zNPCWaspBTAttackOrbitAction * this /* r31 */) {
    // Local variables
    float orbitDirMultiplier; // f0
    float angle; // f1
    class xVec3 newPlayerToDest; // r1+0x68
    class xVec3 dest; // r1+0x5C

    // References
    // -> static unsigned int NPC_VAR_WASP_Y_OFFSET;
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_UnitAxisX;
}
// Range: 0x801EA340 -> 0x801EA578
enum eTaskState zNPCWaspBTAttackOrbitAction::Update(class zNPCWaspBTAttackOrbitAction * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x801EA580 -> 0x801EA5F4
void zNPCWaspBTAttackOrbitAction::End(class zNPCWaspBTAttackOrbitAction * this /* r31 */) {
    // References
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
}
// Range: 0x801EA600 -> 0x801EA684
void zNPCWaspBTAttackOrbitAction::Cleanup(class zNPCWaspBTAttackOrbitAction * this /* r31 */) {
    // References
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
}
// Range: 0x801EA690 -> 0x801EA894
void zNPCWaspBTAttackBeginAction::Begin(class zNPCWaspBTAttackBeginAction * this /* r31 */) {
    // References
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
}
// Range: 0x801EA8C0 -> 0x801EAD54
void zNPCWaspBTAttackRunAction::Begin(class zNPCWaspBTAttackRunAction * this /* r31 */) {
    // References
    // -> struct {} __vt__31zNPCSearchMapLinkCostCalculator;
}
// Range: 0x801EAD70 -> 0x801EB450
enum eTaskState zNPCWaspBTAttackRunAction::Update(class zNPCWaspBTAttackRunAction * this /* r31 */, float dt /* f31 */) {
    // References
    // -> class xVec3 m_Null;
}
// Range: 0x801EB450 -> 0x801EB4E8
void zNPCWaspBTAttackRunAction::End(class zNPCWaspBTAttackRunAction * this /* r31 */) {
}
// Range: 0x801EB4F0 -> 0x801EB680
void zNPCWaspBTAttackAction::Begin(class zNPCWaspBTAttackAction * this /* r31 */) {
}
// signature: zNPCWaspBTAttackAction::Update(float)
// Range: 0x801EB680 -> 0x801EB760
enum eTaskState zNPCWaspBTAttackAction::Update(class zNPCWaspBTAttackAction * this /* r31 */) {
}
// Range: 0x801EB770 -> 0x801EC1D4
void zNPCWaspBTAttackEndAction::Begin(class zNPCWaspBTAttackEndAction * this /* r30 */) {
    // Local variables
    class xVec3 dest; // r1+0x80
    class xVec3 playerToNPC; // r1+0x74
    class zPlayer * player; // r31

    {
        // Range: 0x801EBBAC -> 0x801EBCF8
        // Local variables
        float distFromPlayer; // f0
    }

    // References
    // -> static unsigned int NPC_VAR_WASP_Y_OFFSET;
    // -> class xVec3 m_UnitAxisX;
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
    // -> struct {} __vt__31zNPCSearchMapLinkCostCalculator;
}
// Range: 0x801EC1E0 -> 0x801EC1E4
void zNPCWaspBTAttackEndAction::UpdateDestination() {
}
// Range: 0x801EC1F0 -> 0x801EC5A4
void zNPCWaspBTHitAction::Begin(class zNPCWaspBTHitAction * this /* r31 */) {
    // References
    // -> class xVec3 m_UnitAxisX;
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
}
// Range: 0x801EC5B0 -> 0x801EC7E0
void zNPCWaspBTStunAction::Begin(class zNPCWaspBTStunAction * this /* r31 */) {
    // References
    // -> class xVec3 m_Null;
}
// Range: 0x801EC7E0 -> 0x801ECCA4
void zNPCWaspBTFollowFloatingObjectAction::Begin(class zNPCWaspBTFollowFloatingObjectAction * this /* r31 */) {
    // References
    // -> struct {} __vt__31zNPCSearchMapLinkCostCalculator;
    // -> static unsigned int NPC_VAR_CURRENT_FLOATING_OBJECT;
}
// Range: 0x801ECCB0 -> 0x801ED180
void zNPCWaspBTFollowPlayerAction::Begin(class zNPCWaspBTFollowPlayerAction * this /* r31 */) {
    // References
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
    // -> struct {} __vt__31zNPCSearchMapLinkCostCalculator;
}
// Range: 0x801ED1B0 -> 0x801ED22C
void zNPCWaspBTFollowPlayerAction::PlayerChangedCB(class zNPCWaspBTFollowPlayerAction * this /* r31 */) {
}
// Range: 0x801ED230 -> 0x801ED704
void zNPCWaspBTFollowPlayerAction::UpdateDestination(class zNPCWaspBTFollowPlayerAction * this /* r31 */) {
    // Local variables
    class xVec3 dest; // r1+0x5C

    // References
    // -> static unsigned int NPC_VAR_WASP_Y_OFFSET;
}
// Range: 0x801ED710 -> 0x801EDD40
enum eTaskState zNPCWaspBTFollowPlayerAction::Update(class zNPCWaspBTFollowPlayerAction * this /* r31 */, float dt /* f31 */) {
    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCWaspBTWriteAttackDestinationAction::Update(float)
// Range: 0x801EDD60 -> 0x801EE328
enum eTaskState zNPCWaspBTWriteAttackDestinationAction::Update(class zNPCWaspBTWriteAttackDestinationAction * this /* r30 */) {
    // Local variables
    class zPlayer * player; // r29
    class Action_NPC_Write_AttackDestination * asset; // r28
    float distPastPlayerXZ; // f5
    class xVec3 npcPos; // r1+0x74
    class xVec3 npcToPlayer; // r1+0x68
    float dist; // f5
    class xVec3 dest; // r1+0x5C

    // References
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
    // -> static unsigned int NPC_VAR_WASP_Y_OFFSET;
    // -> class xVec3 m_UnitAxisZ;
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
}
