/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zNPCSpiderBTActions.cpp
*/
unsigned int RUSSELL_BONE_FRONT; // size: 0x4, address: 0x807AF7DC
float RUSSELL_FRONT_OFF_Z; // size: 0x4, address: 0x807AF7E0
float RUSSELL_FRONT_OFF_Y; // size: 0x4, address: 0x807AF7E4
unsigned int RUSSELL_BONE_BACK; // size: 0x4, address: 0x807AF7E8
float RUSSELL_BACK_OFF_Z; // size: 0x4, address: 0x807AF7EC
float RUSSELL_BACK_OFF_Y; // size: 0x4, address: 0x807AF7F0
unsigned int CARL_BONE_FRONT; // size: 0x4, address: 0x807AF7F4
float CARL_FRONT_OFF_Z; // size: 0x4, address: 0x807AF7F8
float CARL_FRONT_OFF_Y; // size: 0x4, address: 0x807AF7FC
float CARL_FRONT_OFF_X; // size: 0x4, address: 0x807AF800
unsigned int CARL_BONE_BACK; // size: 0x4, address: 0x807AF804
float CARL_BACK_OFF_Z; // size: 0x4, address: 0x807AF808
float CARL_BACK_OFF_Y; // size: 0x4, address: 0x807AF80C
float CARL_BACK_OFF_X; // size: 0x4, address: 0x807AF810
// signature: zSpiderJumpPlayerCollisionListener::characterInteractionCallback(hkpCharacterProxy *, hkpCharacterProxy *, const hkContactPoint &)
// Range: 0x801C5F00 -> 0x801C5F58
void zSpiderJumpPlayerCollisionListener::characterInteractionCallback(class zSpiderJumpPlayerCollisionListener * this /* r31 */) {
    // Local variables
    class hkpShapePhantom * pPhantom; // r0

    {
        // Range: 0x801C5F1C -> 0x801C5F44
        // Local variables
        class xBase * base; // r4
    }
}
// signature: zNPCSpiderBTJumpAttackAction::Setup(const Sext::ActionBase *)
// Range: 0x801C5F60 -> 0x801C5F68
void zNPCSpiderBTJumpAttackAction::Setup() {
}
// Range: 0x801C5F70 -> 0x801C61B8
void zNPCSpiderBTJumpAttackAction::Begin(class zNPCSpiderBTJumpAttackAction * this /* r31 */) {
    // Local variables
    class zPlayer * plyr; // r0
    class xVec3 dest; // r1+0x8

    // References
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
}
// Range: 0x801C61C0 -> 0x801C6590
void zNPCSpiderBTJumpAttackAction::UpdateAttachTransform(class zNPCSpiderBTJumpAttackAction * this /* r31 */) {
    // Local variables
    class xMat4x3 mat; // r1+0x30
    unsigned int bone; // r5
    class xVec3 offset; // r1+0x20

    // References
    // -> unsigned int RUSSELL_BONE_FRONT;
    // -> float RUSSELL_FRONT_OFF_Y;
    // -> float RUSSELL_FRONT_OFF_Z;
    // -> unsigned int RUSSELL_BONE_BACK;
    // -> float RUSSELL_BACK_OFF_Y;
    // -> float RUSSELL_BACK_OFF_Z;
    // -> unsigned int CARL_BONE_FRONT;
    // -> float CARL_FRONT_OFF_X;
    // -> float CARL_FRONT_OFF_Y;
    // -> float CARL_FRONT_OFF_Z;
    // -> unsigned int CARL_BONE_BACK;
    // -> float CARL_BACK_OFF_X;
    // -> float CARL_BACK_OFF_Y;
    // -> float CARL_BACK_OFF_Z;
    // -> class xVec3 m_Null;
}
// Range: 0x801C6590 -> 0x801C6BCC
enum eTaskState zNPCSpiderBTJumpAttackAction::Update(class zNPCSpiderBTJumpAttackAction * this /* r31 */, float dt /* f28 */) {
    {
        // Range: 0x801C6A14 -> 0x801C6B90
        // Local variables
        bool shaking; // r0
        float shakeLength; // f29
        float damageInterval; // f30
        float damage; // f31
        class Action_NPC_Spider_JumpAttack * asset; // r4

        {
            // Range: 0x801C6A84 -> 0x801C6B24
            // Local variables
            class zCombatDamageInfo combatDamageInfo; // r1+0x18
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x801C6BD0 -> 0x801C7014
void zNPCSpiderBTJumpAttackAction::End(class zNPCSpiderBTJumpAttackAction * this /* r29 */) {
    // Local variables
    class xMat4x3 mat; // r1+0x20

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCSpiderBTJumpAttackAction::AttachToPlayer(zUPHumanPlayer *)
// Range: 0x801C7020 -> 0x801C73A0
void zNPCSpiderBTJumpAttackAction::AttachToPlayer(class zNPCSpiderBTJumpAttackAction * this /* r31 */) {
    // Local variables
    class xVec3 fromPlayer; // r1+0x14
}
// Range: 0x801C73A0 -> 0x801C74BC
void zNPCSpiderBTJumpAttackAction::Cleanup(class zNPCSpiderBTJumpAttackAction * this /* r31 */) {
}
// Range: 0x801C74C0 -> 0x801C7540
void zNPCSpiderBTKnockbackAction::Begin(class zNPCSpiderBTKnockbackAction * this /* r30 */) {
}
// Range: 0x801C7540 -> 0x801C77EC
enum eTaskState zNPCSpiderBTKnockbackAction::Update(class zNPCSpiderBTKnockbackAction * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class zPlayer * target; // r30

    {
        // Range: 0x801C75DC -> 0x801C77AC
        // Local variables
        class xVec3 knockback; // r1+0x14
    }

    // References
    // -> class xVec3 m_Null;
    // -> class xVec3 m_UnitAxisX;
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
}
// Range: 0x801C7800 -> 0x801C7950
void zNPCSpiderBTFaceTargetAction::Begin(class zNPCSpiderBTFaceTargetAction * this /* r31 */) {
}
// Range: 0x801C7950 -> 0x801C7BD8
enum eTaskState zNPCSpiderBTFaceTargetAction::Update(class zNPCSpiderBTFaceTargetAction * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class zPlayer * target; // r30
    class xVec3 desiredDirection; // r1+0x14
    float turnToFaceAngle; // f0
    float curAngle; // f0
    float diffAngle; // f0
    float turnSpeed; // f2
    float yawDelta; // f0
    float halfConeAngle; // f3

    {
        // Range: 0x801C7B20 -> 0x801C7B48
        // Local variables
        float max; // f0
    }
    {
        // Range: 0x801C7B4C -> 0x801C7B6C
        // Local variables
        float max; // f0
    }

    // References
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
}
// Range: 0x801C7BE0 -> 0x801C7BE4
void zNPCSpiderBTFaceTargetAction::End() {
}
