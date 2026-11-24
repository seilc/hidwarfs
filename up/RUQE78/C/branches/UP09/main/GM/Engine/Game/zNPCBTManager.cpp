/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zNPCBTManager.cpp
*/
// signature: zNPCBTClientBase::CalcDistanceSquareFromPos(const xVec3 &) const
// Range: 0x801A3F30 -> 0x801A3FB4
float zNPCBTClientBase::CalcDistanceSquareFromPos() const {
    // Local variables
    class xVec3 ownerPos; // r1+0x8
}
// Range: 0x801A3FC0 -> 0x801A4E8C
void zNPCBTClient::RegisterVariables(class zNPCBTClient * this /* r30 */) {
    // References
    // -> unsigned int NPC_VAR_SNAKE_EEL_DAMAGE_DIST;
    // -> struct {} __vt__22zVariable<Q24Sext3uid>;
    // -> unsigned int NPC_VAR_SNAKE_EEL_UID;
    // -> unsigned int NPC_VAR_SNAKE_ATTACK_MODE;
    // -> unsigned int NPC_VAR_SNAKE_PROC_TAIL_ENABLED;
    // -> static unsigned int NPC_VAR_WASP_Y_OFFSET;
    // -> struct {} __vt__31zVariable<P17zUpFloatingObject>;
    // -> static unsigned int NPC_VAR_CURRENT_FLOATING_OBJECT;
    // -> static unsigned int NPC_VAR_ROTATE_TO_FACE_POS;
    // -> static unsigned int NPC_VAR_HIT_COUNT;
    // -> static unsigned int NPC_VAR_NEED_COMBAT_TARGETING_CLEANUP;
    // -> static unsigned int NPC_VAR_NEED_COMBAT_CLEANUP;
    // -> struct {} __vt__12zVariable<f>;
    // -> static unsigned int NPC_VAR_PATH_SHIFT_PERCENT;
    // -> static unsigned int NPC_VAR_NEXT_TARGET_MP;
    // -> static unsigned int NPC_VAR_CURRENT_PROJECTILE_ID;
    // -> static unsigned int NPC_VAR_TRAP_EXIT_EVENT_RECEIVED;
    // -> static unsigned int NPC_VAR_TRAP_ENTER_EVENT_RECEIVED;
    // -> static unsigned int NPC_VAR_HIT_EVENT_RECEIVED;
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
    // -> static unsigned int NPC_VAR_FLEE_DIR;
    // -> static unsigned int NPC_VAR_FLEE_POS;
    // -> struct {} __vt__12zVariable<i>;
    // -> static unsigned int NPC_VAR_TRAP_TYPE;
    // -> static unsigned int NPC_VAR_TRAP_POS;
    // -> static unsigned int NPC_VAR_BADGE_POS;
    // -> struct {} __vt__24zVariable<P10xMovePoint>;
    // -> static unsigned int NPC_VAR_TARGET_MP;
    // -> static unsigned int NPC_VAR_MELEE_PLAYER;
    // -> static unsigned int NPC_VAR_SPECIAL_ABILITY_PLAYER;
    // -> struct {} __vt__20zVariable<P7zPlayer>;
    // -> static unsigned int NPC_VAR_LOCKED_PLAYER;
    // -> struct {} __vt__17zVariable<5xVec3>;
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
    // -> class xVec3 m_Null;
}
// signature: zNPCBTManager::Attached(const zNPCStatus *)
// Range: 0x801A4E90 -> 0x801A4F60
void zNPCBTManager::Attached(class zNPCBTManager * this /* r29 */) {
    // Local variables
    unsigned int userData; // r30
}
// signature: zNPCBTManager::Detached(zNPCStatus *)
// Range: 0x801A4F60 -> 0x801A5054
void zNPCBTManager::Detached(class zNPCBTManager * this /* r29 */) {
    // Local variables
    unsigned int userData; // r30
}
// signature: zNPCBTManager::PostUpdate(float)
// Range: 0x801A5090 -> 0x801A5230
void zNPCBTManager::PostUpdate(class zNPCBTManager * this /* r28 */) {
    // References
    // -> static unsigned int NPC_VAR_TRAP_EXIT_EVENT_RECEIVED;
    // -> static unsigned int NPC_VAR_TRAP_ENTER_EVENT_RECEIVED;
    // -> static unsigned int NPC_VAR_HIT_EVENT_RECEIVED;
}
// signature: zNPCBTManager::SystemEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801A5230 -> 0x801A57BC
bool zNPCBTManager::SystemEvent(class zNPCBTManager * this /* r29 */, class xBase * from /* r28 */, unsigned int to_event /* r27 */, class EventAny * params /* r30 */) {
    {
        // Range: 0x801A529C -> 0x801A57A0
        // Local variables
        class EventActionOneUnsignedInt * intParam; // r0

        {
            // Range: 0x801A5360 -> 0x801A54E8
            // Local variables
            class EventNotifyTrap * trapParam; // r0

            {
                // Range: 0x801A5360 -> 0x801A5470
                // Local variables
                int type; // r27
                class xVec3 pos; // r1+0x20
            }
        }
        {
            // Range: 0x801A5560 -> 0x801A56A0
            // Local variables
            class zDirection * dir; // r27

            {
                // Range: 0x801A556C -> 0x801A5698
                // Local variables
                class xVec3 fleeDir; // r1+0x8
                class xVec3 pos; // r1+0x14
            }
        }
        {
            // Range: 0x801A5720 -> 0x801A5798
            // Local variables
            int projectileID; // r27
        }
    }

    // References
    // -> static unsigned int NPC_VAR_CURRENT_PROJECTILE_ID;
    // -> static unsigned int NPC_VAR_MELEE_PLAYER;
    // -> static unsigned int NPC_VAR_FLEE_DIR;
    // -> static unsigned int NPC_VAR_FLEE_POS;
    // -> static unsigned int NPC_VAR_TRAP_EXIT_EVENT_RECEIVED;
    // -> static unsigned int NPC_VAR_TRAP_ENTER_EVENT_RECEIVED;
    // -> static unsigned int NPC_VAR_TRAP_TYPE;
    // -> static unsigned int NPC_VAR_TRAP_POS;
    // -> static unsigned int NPC_VAR_HIT_EVENT_RECEIVED;
}
