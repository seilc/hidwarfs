/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zNPCBTManager.cpp
*/
// Range: 0x800DAEA0 -> 0x800DAEE0
float zNPCBTClientBase::CalcDistanceSquareFromPos(class xVec3 & pos /* r31 */) const {
    // Local variables
    class xVec3 ownerPos; // r1+0x8
}
// Range: 0x800DAEE0 -> 0x800DB1DC
void zNPCBTClient::RegisterVariables(class zNPCBTClient * this /* r30 */) {
    // References
    // -> static unsigned int NPC_VAR_TURRET_SHOOT_DELAY;
    // -> static unsigned int NPC_VAR_TURRET_SHOOT_CYCLE_DELAY;
    // -> static unsigned int NPC_VAR_TURRET_SHOOT_CYCLE_COUNT;
    // -> static unsigned int NPC_VAR_TURRET_VARIANT_ROF_ENABLED;
    // -> static unsigned int NPC_VAR_SHAKE_COLLECTIBLES_2;
    // -> static unsigned int NPC_VAR_SHAKE_COLLECTIBLES_1;
    // -> static unsigned int NPC_VAR_ROTATE_TO_FACE_POS;
    // -> static unsigned int NPC_VAR_HIT_COUNT;
    // -> static unsigned int NPC_VAR_NEED_COMBAT_TARGETING_CLEANUP;
    // -> static unsigned int NPC_VAR_NEED_COMBAT_CLEANUP;
    // -> static unsigned int NPC_VAR_PATH_SHIFT_PERCENT;
    // -> static unsigned int NPC_VAR_NEXT_TARGET_MP;
    // -> static unsigned int NPC_VAR_CURRENT_PROJECTILE_ID;
    // -> static unsigned int NPC_VAR_TRAP_EXIT_EVENT_RECEIVED;
    // -> static unsigned int NPC_VAR_TRAP_ENTER_EVENT_RECEIVED;
    // -> static unsigned int NPC_VAR_HIT_EVENT_RECEIVED;
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
    // -> static unsigned int NPC_VAR_FLEE_DIR;
    // -> static unsigned int NPC_VAR_FLEE_POS;
    // -> static unsigned int NPC_VAR_TRAP_TYPE;
    // -> static unsigned int NPC_VAR_TRAP_POS;
    // -> static unsigned int NPC_VAR_BADGE_POS;
    // -> static unsigned int NPC_VAR_TARGET_MP;
    // -> static unsigned int NPC_VAR_MELEE_PLAYER;
    // -> static unsigned int NPC_VAR_SPECIAL_ABILITY_PLAYER;
    // -> static unsigned int NPC_VAR_LOCKED_PLAYER;
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
    // -> class xVec3 m_Null;
}
// signature: zNPCBTManager::Detached(zNPCStatus *)
// Range: 0x800DB520 -> 0x800DB570
void zNPCBTManager::Detached(class zNPCBTManager * this /* r31 */) {
}
// Range: 0x800DB570 -> 0x800DB5D4
void zNPCBTManager::AllAttached(class zNPCBTManager * this /* r31 */) {
}
// signature: zNPCBTManager::Reset(const zNPCStatus *)
// Range: 0x800DB5E0 -> 0x800DB63C
void zNPCBTManager::Reset(class zNPCBTManager * this /* r31 */) {
}
// signature: zNPCBTManager::Update(float)
// Range: 0x800DB640 -> 0x800DB660
void zNPCBTManager::Update() {
}
// signature: zNPCBTManager::PostUpdate(float)
// Range: 0x800DB660 -> 0x800DB6E0
void zNPCBTManager::PostUpdate(class zNPCBTManager * this /* r31 */) {
    {
        // Range: 0x800DB674 -> 0x800DB6CC
        // Local variables
        int intFalse; // r1+0x8
    }

    // References
    // -> static unsigned int NPC_VAR_TRAP_EXIT_EVENT_RECEIVED;
    // -> static unsigned int NPC_VAR_TRAP_ENTER_EVENT_RECEIVED;
    // -> static unsigned int NPC_VAR_HIT_EVENT_RECEIVED;
}
// signature: zNPCBTManager::SystemEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800DB6E0 -> 0x800DB918
bool zNPCBTManager::SystemEvent(class zNPCBTManager * this /* r30 */, class xBase * from /* r1+0x8 */, unsigned int to_event /* r28 */, class EventAny * params /* r29 */) {
    // Local variables
    int intTrue; // r1+0x14

    {
        // Range: 0x800DB7B8 -> 0x800DB824
        // Local variables
        class EventNotifyTrap * trapParam; // r0

        {
            // Range: 0x800DB7B8 -> 0x800DB808
            // Local variables
            int type; // r1+0x10
            class xVec3 pos; // r1+0x30
        }
    }
    {
        // Range: 0x800DB840 -> 0x800DB8A8
        // Local variables
        class zDirection * dir; // r29

        {
            // Range: 0x800DB84C -> 0x800DB8A0
            // Local variables
            class xVec3 fleeDir; // r1+0x18
            class xVec3 pos; // r1+0x24
        }
    }
    {
        // Range: 0x800DB8D4 -> 0x800DB900
        // Local variables
        class EventActionOneUnsignedInt * intParam; // r0

        {
            // Range: 0x800DB8D4 -> 0x800DB8F8
            // Local variables
            int projectileID; // r1+0xC
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
