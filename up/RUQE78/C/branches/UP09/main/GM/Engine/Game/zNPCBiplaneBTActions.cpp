/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zNPCBiplaneBTActions.cpp
*/
// Range: 0x8019F780 -> 0x8019F790
void zNPCBiplaneBTAction::Begin() {
}
// signature: zNPCBiplaneBTSpecialMoveAction::Setup(const Sext::ActionBase *)
// Range: 0x8019F790 -> 0x8019F794
void zNPCBiplaneBTSpecialMoveAction::Setup() {
}
// Range: 0x8019F7B0 -> 0x8019F7B4
void zNPCBiplaneBTSpecialMoveAction::End() {
}
// signature: zNPCBiplaneBTMoveToAction::Setup(const Sext::ActionBase *)
// Range: 0x8019F7C0 -> 0x8019F7CC
void zNPCBiplaneBTMoveToAction::Setup() {
}
// Range: 0x8019F7D0 -> 0x8019F818
void zNPCBiplaneBTMoveToAction::Begin() {
}
// Range: 0x8019F840 -> 0x8019F938
enum eTaskState zNPCBiplaneBTMoveToAction::Update(class zNPCBiplaneBTMoveToAction * this /* r31 */, float dt /* f31 */) {
    // Local variables
    float dist2; // f0
}
// Range: 0x8019F950 -> 0x8019F96C
void zNPCBiplaneBTMoveToAction::End() {
}
// Range: 0x8019F9A0 -> 0x8019FAE8
void zNPCBiplaneBTAvoidAction::Begin(class zNPCBiplaneBTAvoidAction * this /* r31 */) {
    {
        // Range: 0x8019FA18 -> 0x8019FA6C
        // Local variables
        class xBase * target; // r3
    }

    // References
    // -> static unsigned int NPC_VAR_BIPLANE_CURR_TARGET;
}
// Range: 0x8019FAF0 -> 0x8019FC90
enum eTaskState zNPCBiplaneBTAvoidAction::Update(class zNPCBiplaneBTAvoidAction * this /* r31 */, float dt /* f31 */) {
    // Local variables
    enum eTaskState status; // r0

    // References
    // -> static float NPC_BIPLANE_MAX_AVOID_DIST_2;
}
// Range: 0x8019FCA0 -> 0x801A0738
void zNPCBiplaneBTAvoidAction::CalculateEvadeDest(class zNPCBiplaneBTAvoidAction * this /* r30 */) {
    // Local variables
    class xVec3 direction; // r1+0xC8
    class xVec3 rightDir; // r1+0xBC
    float randRight; // f0
    bool turnRight; // r31

    {
        // Range: 0x801A0464 -> 0x801A0520
        // Local variables
        class xVec3 goalPos; // r1+0xB0
    }

    // References
    // -> static float NPC_BIPLANE_MAX_AVOID_DIST;
}
// Range: 0x801A0750 -> 0x801A08B0
void zNPCBiplaneBTAttackMoveAction::Begin(class zNPCBiplaneBTAttackMoveAction * this /* r31 */) {
    {
        // Range: 0x801A07C8 -> 0x801A0820
        // Local variables
        class xBase * target; // r3
    }

    // References
    // -> static unsigned int NPC_VAR_BIPLANE_CURR_TARGET;
}
// Range: 0x801A08B0 -> 0x801A0A1C
enum eTaskState zNPCBiplaneBTAttackMoveAction::Update(class zNPCBiplaneBTAttackMoveAction * this /* r31 */, float dt /* f31 */) {
    // Local variables
    bool targetVisible; // r0
}
// signature: zNPCBiplaneBTAttackFireAction::Setup(const Sext::ActionBase *)
// Range: 0x801A0A30 -> 0x801A0ACC
void zNPCBiplaneBTAttackFireAction::Setup(class zNPCBiplaneBTAttackFireAction * this /* r30 */) {
}
// Range: 0x801A0AD0 -> 0x801A0AD4
void zNPCBiplaneBTAttackFireAction::Begin() {
}
// signature: zNPCBiplaneBTAttackFireAction::Update(float)
// Range: 0x801A0AE0 -> 0x801A16F8
enum eTaskState zNPCBiplaneBTAttackFireAction::Update(class zNPCBiplaneBTAttackFireAction * this /* r30 */) {
    // Local variables
    class EventActionTwoInts eventParams; // r1+0x10
    class xVec3 gunPos; // r1+0x22C
    class zFXSpawn * muzzleFlashSpawnPoint; // r0
    class zFXSpawn * bulletSpawnPoint; // r0
    float firingMaxRange; // f0
    class xVec3 targetVec; // r1+0x220
    float hOffset; // f30
    float vOffset; // f29
    class hkVector4 hkGunVec; // r1+0x210
    class hkVector4 hkTargetVec; // r1+0x200
    class zNPCBiplaneRayHitCollector hitCollector; // r1+0x250

    {
        // Range: 0x801A102C -> 0x801A102C
        // Local variables
        class hkMonitorStream & mStream; // r0

        {
            // Range: 0x801A102C -> 0x801A102C
            // Local variables
            class TimerCommand * h; // r0
        }
    }
    {
        // Range: 0x801A10EC -> 0x801A10EC
        // Local variables
        class hkMonitorStream & mStream; // r0

        {
            // Range: 0x801A10EC -> 0x801A10EC
            // Local variables
            class TimerCommand * h; // r0
        }
    }
    {
        // Range: 0x801A1140 -> 0x801A16C0
        // Local variables
        class xBase * hitObj; // r5
        class xVec3 bulletPos; // r1+0x1D4
        class xMat4x3 targetFacing; // r1+0x270
        class xVec3 hitPos; // r1+0x1E0
        class xVec3 firingDirection; // r1+0x1EC
        float hitDist; // f0

        {
            // Range: 0x801A1494 -> 0x801A15C4
            // Local variables
            class zFXSpawn * impactSpawnPoint; // r0
        }
        {
            // Range: 0x801A15C4 -> 0x801A1680
            // Local variables
            class zFXSpawn * smokeSpawnPoint; // r0
            class zFXSpawn * impactSpawnPoint; // r0
        }
        {
            // Range: 0x801A1684 -> 0x801A16C0
            // Local variables
            class EventActionHit hitParams; // r1+0x238
        }
    }

    // References
    // -> class xMat4x3 g_I3;
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
    // -> struct {} __vt__26zNPCBiplaneRayHitCollector;
    // -> class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
    // -> bool sInvalidSceneState;
    // -> class zNPCBiplaneActiveArray * staticArray;
    // -> bool initialized;
}
// Range: 0x801A1700 -> 0x801A1704
void zNPCBiplaneBTAttackFireAction::End() {
}
// Range: 0x801A1720 -> 0x801A1A78
void zNPCBiplaneBTStartPatrolAction::Begin(class zNPCBiplaneBTStartPatrolAction * this /* r30 */) {
    // Local variables
    float avgDist; // f31
    unsigned int numPlanes; // r31

    {
        // Range: 0x801A17EC -> 0x801A18D8
        // Local variables
        unsigned int i; // r8
    }
    {
        // Range: 0x801A1904 -> 0x801A19F8
        // Local variables
        unsigned int j; // r8

        {
            // Range: 0x801A1904 -> 0x801A19F8
            {
                // Range: 0x801A1904 -> 0x801A19F8
                // Local variables
                float curDistance; // f0
            }
        }
    }

    // References
    // -> class zNPCBiplaneActiveArray * staticArray;
    // -> bool initialized;
}
// Range: 0x801A1A80 -> 0x801A1BA0
enum eTaskState zNPCBiplaneBTStartPatrolAction::Update(class zNPCBiplaneBTStartPatrolAction * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x801A1BA0 -> 0x801A1BCC
void zNPCBiplaneBTStartPatrolAction::End() {
}
// Range: 0x801A1BE0 -> 0x801A1C7C
void zNPCBiplaneBTPatrolAction::Begin() {
}
// Range: 0x801A1C80 -> 0x801A1E4C
enum eTaskState zNPCBiplaneBTPatrolAction::Update(class zNPCBiplaneBTPatrolAction * this /* r31 */, float dt /* f31 */) {
    // Local variables
    enum eTaskState status; // r0
}
// signature: zNPCBiplaneBTSetAttackedAction::Setup(const Sext::ActionBase *)
// Range: 0x801A1E60 -> 0x801A1E6C
void zNPCBiplaneBTSetAttackedAction::Setup() {
}
// signature: zNPCBiplaneBTSetAttackedAction::Update(float)
// Range: 0x801A1E70 -> 0x801A1E84
enum eTaskState zNPCBiplaneBTSetAttackedAction::Update() {
}
// Range: 0x801A1EA0 -> 0x801A1F34
void zNPCBiplaneBTMoveToHouseAttackAction::Begin(class zNPCBiplaneBTMoveToHouseAttackAction * this /* r31 */) {
    // Local variables
    class xMovePoint * movePoint; // r0
}
// signature: zNPCBiplaneBTChaseSpecialWeaponAction::Setup(const Sext::ActionBase *)
// Range: 0x801A1F60 -> 0x801A1F6C
void zNPCBiplaneBTChaseSpecialWeaponAction::Setup() {
}
// Range: 0x801A1F70 -> 0x801A20E8
void zNPCBiplaneBTChaseSpecialWeaponAction::Begin(class zNPCBiplaneBTChaseSpecialWeaponAction * this /* r31 */) {
    // Local variables
    class xVec2 weaponPos; // r1+0x8
}
// signature: zNPCBiplaneBTChaseSpecialWeaponAction::Update(float)
// Range: 0x801A20F0 -> 0x801A2144
enum eTaskState zNPCBiplaneBTChaseSpecialWeaponAction::Update(class zNPCBiplaneBTChaseSpecialWeaponAction * this /* r31 */) {
}
// Range: 0x801A2150 -> 0x801A216C
void zNPCBiplaneBTChaseSpecialWeaponAction::End() {
}
// signature: zNPCBiplaneBTSelectTargetAction::Setup(const Sext::ActionBase *)
// Range: 0x801A2180 -> 0x801A2184
void zNPCBiplaneBTSelectTargetAction::Setup() {
}
// Range: 0x801A2190 -> 0x801A2194
void zNPCBiplaneBTSelectTargetAction::Begin() {
}
// signature: zNPCBiplaneBTSelectTargetAction::Update(float)
// Range: 0x801A21A0 -> 0x801A2330
enum eTaskState zNPCBiplaneBTSelectTargetAction::Update(class zNPCBiplaneBTSelectTargetAction * this /* r27 */) {
    // Local variables
    class xBase * enemies[3]; // r1+0x14
    int numEnemies; // r0
    class xBase * newTarget; // r29
    float curRange; // f31

    {
        // Range: 0x801A21E8 -> 0x801A2278
        // Local variables
        int i; // r28

        {
            // Range: 0x801A21E8 -> 0x801A2278
            // Local variables
            float newRange; // f30
        }
    }

    // References
    // -> static unsigned int NPC_VAR_BIPLANE_CURR_TARGET;
}
// Range: 0x801A2330 -> 0x801A2334
void zNPCBiplaneBTSelectTargetAction::End() {
}
// Range: 0x801A2340 -> 0x801A2344
void zNPCBiplaneBTSelectTargetAction::Cleanup() {
}
