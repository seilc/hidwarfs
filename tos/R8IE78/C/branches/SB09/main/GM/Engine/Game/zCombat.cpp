/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zCombat.cpp
*/
float distanceRange; // size: 0x4, address: 0x80734054
static class zCombatDamageInfo * damage_info_stack[4]; // size: 0x10, address: 0x80732C58
static int damage_info_stack_count; // size: 0x4, address: 0x80732C68
// signature: zCombat::Setup(const xHierarchyBoundInitData *, unsigned int, void *)
// Range: 0x8009A7E0 -> 0x8009A7FC
int zCombat::Setup() {
}
// signature: zCombat::Init(const xHierarchyBoundInitData *, float, int, const zCombatAttack *, unsigned short, zCombatHitSpot *, unsigned short, float, float, const char *, const char **, int)
// Range: 0x8009A800 -> 0x8009A890
void zCombat::Init(class zCombat * this /* r27 */, class zCombatAttack * stateTable /* r28 */, unsigned short stateTableSize /* r29 */, class zCombatHitSpot * hitSpots /* r30 */, unsigned short hitSpotCount /* r31 */, float hitPoints /* f31 */) {
}
// Range: 0x8009A890 -> 0x8009A908
bool zCombat::ShouldRunEffect() {
}
// signature: zCombat::ClearRunningAttack(xEnt *)
// Range: 0x8009A910 -> 0x8009A950
void zCombat::ClearRunningAttack() {
}
// Range: 0x8009A950 -> 0x8009A9C0
void zCombat::StartNewAttack(class zCombat * this /* r29 */, class xEnt * attacker /* r30 */, unsigned int animationState /* r31 */) {
}
// Range: 0x8009A9C0 -> 0x8009AA14
float zCombat::GetRunningAttackLastTime() {
}
// signature: zCombat::FindAttackState(unsigned int)
// Range: 0x8009AA20 -> 0x8009AA5C
class zCombatAttack * zCombat::FindAttackState() {
    // Local variables
    class zCombatAttack * result; // r7

    {
        // Range: 0x8009AA28 -> 0x8009AA54
        // Local variables
        int i; // r0
    }
}
// Range: 0x8009AA60 -> 0x8009B054
void zCombat::PostUpdate(class zCombat * this /* r28 */, class xEnt * ent /* r29 */, float dt /* f31 */) {
    // Local variables
    bool resetSphere; // r31
    class xAnimState * curState; // r5

    {
        // Range: 0x8009AA90 -> 0x8009AACC
        // Local variables
        int i; // r24

        {
            // Range: 0x8009AA90 -> 0x8009AACC
            // Local variables
            class xHierarchyNode & node; // r3
        }
    }
    {
        // Range: 0x8009AB30 -> 0x8009ACC4
        // Local variables
        class effect * rumble; // r31

        {
            // Range: 0x8009ABA0 -> 0x8009ACA0
            // Local variables
            float rumbleRange; // f1
            float percentageRumble; // f3
            float distAway; // f2
            class xVec3 PlayerToNPC; // r1+0x20
        }
    }
    {
        // Range: 0x8009ACF4 -> 0x8009AD5C
        // Local variables
        class zCombatAttack * temp; // r0
    }
    {
        // Range: 0x8009ADC4 -> 0x8009AE8C
        // Local variables
        float newTime; // f30
    }
    {
        // Range: 0x8009AEA4 -> 0x8009AED8
        // Local variables
        unsigned int i; // r24
    }
    {
        // Range: 0x8009AEE4 -> 0x8009AF9C
        // Local variables
        int i; // r30
    }

    // References
    // -> float distanceRange;
}
// signature: zCombatGetEvent(Sext::eHitSource)
// Range: 0x8009B060 -> 0x8009B0F0
unsigned int zCombatGetEvent() {
    // Local variables
    unsigned int toEvent; // r3
}
// signature: zCombatGetBaseAttackSB(Sext::eHitSource)
// Range: 0x8009B0F0 -> 0x8009B13C
enum eHitSource zCombatGetBaseAttackSB() {
    // Local variables
    enum eHitSource baseSource; // r3
}
// signature: zCombatGetBaseAttackSB(Sext::eRPSAttackTypes)
// Range: 0x8009B140 -> 0x8009B194
enum eHitSource zCombatGetBaseAttackSB() {
    // Local variables
    enum eHitSource baseSource; // r3
}
// Range: 0x8009B1A0 -> 0x8009B730
void zCombatDamage(class xBase * obj /* r26 */, class zCombatDamageInfo & damageInfo /* r29 */) {
    // Local variables
    class xEnt * ent; // reg65535
    unsigned int entBaseType; // r28

    {
        // Range: 0x8009B208 -> 0x8009B26C
        // Local variables
        unsigned int baseType; // r28

        {
            // Range: 0x8009B240 -> 0x8009B254
            // Local variables
            class zNPCBase * npcBase; // r3
        }
        {
            // Range: 0x8009B258 -> 0x8009B26C
            // Local variables
            class zNPCEntity * npcEnt; // r4
        }
    }
    {
        // Range: 0x8009B2A8 -> 0x8009B4B0
        // Local variables
        class zPlayer * player; // reg65535

        {
            // Range: 0x8009B354 -> 0x8009B394
            // Local variables
            class xVec3 playerPos; // r1+0x14
        }
        {
            // Range: 0x8009B3D0 -> 0x8009B40C
            // Local variables
            class xVec3 playerPos; // r1+0x8
        }
    }
    {
        // Range: 0x8009B4B4 -> 0x8009B618
        // Local variables
        bool alreadyDie; // r27
        class zNPCEntity * npcEnt; // r30

        {
            // Range: 0x8009B510 -> 0x8009B618
            // Local variables
            class zSBPlayer * sbPlayer; // r29

            {
                // Range: 0x8009B550 -> 0x8009B5D4
                // Local variables
                enum ePlayerName name; // r0
            }
        }
    }
    {
        // Range: 0x8009B628 -> 0x8009B688
        // Local variables
        unsigned int toEvent; // r27
    }
    {
        // Range: 0x8009B68C -> 0x8009B70C
        // Local variables
        unsigned int toEvent; // r27
        class EventActionHit params; // r1+0x20
    }

    // References
    // -> unsigned short ACH26_SBDefeatCount;
    // -> static class zAchievementsMgr gAchievementsMgr;
    // -> unsigned short ACH40_PTDefeatCount;
    // -> class zGameCheats gGameCheats;
    // -> static class zCombatDamageInfo * damage_info_stack[4];
    // -> static int damage_info_stack_count;
}
// signature: zCombatGetHitTarget(xEnt *, xEnt *)
// Range: 0x8009B750 -> 0x8009B78C
enum zHitTarget zCombatGetHitTarget() {
    // Local variables
    enum zHitTarget hitTarget; // r0
}
// signature: zCombatGetHitTarget(xVec3 *, xEnt *)
// Range: 0x8009B790 -> 0x8009B8C4
enum zHitTarget zCombatGetHitTarget(class xEnt * target /* r31 */) {
    // Local variables
    enum zHitTarget hitTarget; // r5

    {
        // Range: 0x8009B798 -> 0x8009B8AC
        // Local variables
        class xVec3 attack_dir; // r1+0x8

        {
            // Range: 0x8009B830 -> 0x8009B8AC
            // Local variables
            float dot; // f0
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zCombatGetFrom(xEnt *)
// Range: 0x8009B8D0 -> 0x8009B908
class zCombat * zCombatGetFrom() {
}
// signature: zCombat::UpdateSphere(xSphere *, int, World::xOGModel *, const xVec3 *)
// Range: 0x8009B910 -> 0x8009B9A8
void zCombat::UpdateSphere(class xSphere * sphere /* r30 */, class xVec3 * boneOffset /* r31 */) {
    // Local variables
    class xMat4x3 boneMat; // r1+0x20
    class xVec3 boneScale; // r1+0x14
}
// Range: 0x8009B9B0 -> 0x8009C10C
void zCombat::SendObjectHit(class zCombat * this /* r20 */, class xEnt * attacker /* r21 */, class xBase * target /* r22 */, enum zHitTarget hitTarget /* r23 */, class xVec3 * hit_loc /* r24 */, class xVec3 * hit_norm /* r25 */, bool hitEffect /* r26 */) {
    {
        // Range: 0x8009B9FC -> 0x8009BB28
        // Local variables
        class zSBPlayer * sbPlayer; // r0

        {
            // Range: 0x8009BA08 -> 0x8009BB28
            // Local variables
            bool hasAlreadyRecoiled; // r0
        }
    }
    {
        // Range: 0x8009BB28 -> 0x8009BC1C
        // Local variables
        signed char numHitsInvalidated; // r29

        {
            // Range: 0x8009BB38 -> 0x8009BBF4
            // Local variables
            int i; // r28

            {
                // Range: 0x8009BB38 -> 0x8009BBF4
                // Local variables
                signed char currentIndex; // r27
            }
        }
    }
    {
        // Range: 0x8009BC24 -> 0x8009BC6C
        // Local variables
        int i; // r4

        {
            // Range: 0x8009BC24 -> 0x8009BC6C
            // Local variables
            signed char currentIndex; // r3
        }
    }
    {
        // Range: 0x8009BD24 -> 0x8009BE08
        // Local variables
        bool targetUsingSpin; // r19

        {
            // Range: 0x8009BD48 -> 0x8009BD78
            // Local variables
            class zSBPlayer * sbPlayer; // r0
        }
        {
            // Range: 0x8009BDAC -> 0x8009BE08
            // Local variables
            class EventActionVector params; // r1+0x94
        }
    }
    {
        // Range: 0x8009BE08 -> 0x8009BF08
        // Local variables
        class zCombatDamageInfo params; // r1+0xDC
        unsigned int attackID; // r4
        float damageAmount; // f1
        class xVec3 knockback; // r1+0x88
        unsigned int flags; // r19
    }
    {
        // Range: 0x8009BF7C -> 0x8009C0BC
        // Local variables
        class zProjectile * projectile; // r23

        {
            // Range: 0x8009BFD0 -> 0x8009C0A8
            // Local variables
            class zCombatDamageInfo params; // r1+0xA0
            class xVec3 knockback; // r1+0x7C
        }
    }

    // References
    // -> class xVec3 m_Null;
    // -> double secondsPerTick;
}
// Range: 0x8009C1A0 -> 0x8009C494
void zCombat::CheckForHit(class zCombat * this /* r28 */, class xEnt * attacker /* r29 */) {
    {
        // Range: 0x8009C1D0 -> 0x8009C468
        // Local variables
        int i; // r31

        {
            // Range: 0x8009C1D0 -> 0x8009C43C
            // Local variables
            float diffLen2; // f0
            class hkpCombatCdBodyPairCollector BSPcollector; // r1+0x2E0
            class hkpCombatCdBodyPairCollectorNoBSP noBSPcollector; // r1+0x3F4
            class hkpWorld * havokWorld; // r30
            float radius; // f30

            {
                // Range: 0x8009C1D0 -> 0x8009C330
                // Local variables
                class hkpCollisionInput * input; // r5
                class hkpCollidable collidable; // r1+0x130
                class hkMotionState motionState; // r1+0x230
                class hkpSphereShape shape; // r1+0x80
            }
            {
                // Range: 0x8009C330 -> 0x8009C43C
                // Local variables
                class hkpCollisionInput * input; // r5
                class hkpCollidable collidable; // r1+0xE0
                class hkMotionState motionState; // r1+0x180
                class hkpCapsuleShape shape; // r1+0xA0
            }
        }
    }
}
// Range: 0x8009C6D0 -> 0x8009CA18
void zCombat::ProcessHitCollection(class zCombat * this /* r26 */, class xEnt * attacker /* r27 */, class hkpAllCdBodyPairCollector * collector /* r28 */) {
    {
        // Range: 0x8009C6FC -> 0x8009C9FC
        // Local variables
        int i; // r31

        {
            // Range: 0x8009C6FC -> 0x8009C9FC
            // Local variables
            class xVec3 hit_norm; // r1+0x30
            class xVec3 hit_loc; // r1+0x3C
            class xBase * hitPhantomBBase; // r29
            class xBase * hitPhantomABase; // r19
            class xBase * hitRBBBase; // r30
            class xBase * hitRBABase; // r20
            class hkpPhantom * hitPhantomB; // r21
            class hkpPhantom * hitPhantomA; // r22
            class hkpRigidBody * hitRBB; // r23
            class hkpRigidBody * hitRBA; // r24
            class hkpRootCdBodyPair hit; // r1+0x48

            {
                // Range: 0x8009C7D4 -> 0x8009C830
                // Local variables
                class hkVector4 hk_hit_norm; // r1+0x10
                class hkVector4 hk_hit_loc; // r1+0x20
            }
            {
                // Range: 0x8009C830 -> 0x8009C89C
                // Local variables
                enum zHitTarget hitTarget; // r6
            }
            {
                // Range: 0x8009C8A0 -> 0x8009C90C
                // Local variables
                enum zHitTarget hitTarget; // r6
            }
            {
                // Range: 0x8009C90C -> 0x8009C978
                // Local variables
                enum zHitTarget hitTarget; // r6
            }
            {
                // Range: 0x8009C97C -> 0x8009C9FC
                // Local variables
                enum zHitTarget hitTarget; // r6
            }
        }
    }
}
// Range: 0x8009CA20 -> 0x8009CB98
bool zCombat::CheckHitValid(class xBase * attackerBase /* r30 */, class hkpWorldObject * attacked /* r24 */, class xBase * attackedBase /* r31 */, class xVec3 & hit_loc /* r25 */, class xVec3 & hit_norm /* r26 */) const {
    {
        // Range: 0x8009CA34 -> 0x8009CB7C
        {
            // Range: 0x8009CA68 -> 0x8009CB7C
            // Local variables
            bool validHit; // r27

            {
                // Range: 0x8009CAF0 -> 0x8009CB74
                // Local variables
                class zSBPlayer * sbPlayer; // r0

                {
                    // Range: 0x8009CAFC -> 0x8009CB74
                    // Local variables
                    class zNPCEntity * npcEnt; // r0

                    {
                        // Range: 0x8009CB0C -> 0x8009CB74
                        // Local variables
                        class xVec3 hitLoc; // r1+0x1C
                    }
                }
            }
        }
    }
}
// Range: 0x8009CBA0 -> 0x8009CC84
bool zCombat::CheckHitSpotActive(class zCombat * this /* r27 */, class hkpWorldObject * attacked /* r28 */) const {
    {
        // Range: 0x8009CBB0 -> 0x8009CC6C
        // Local variables
        unsigned int i; // r29

        {
            // Range: 0x8009CC18 -> 0x8009CC38
            // Local variables
            class zSBPlayer * sbPlayer; // r0
        }
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x8009CC90 -> 0x8009CD34
bool zCombat::CheckHitSpots(class zCombat * this /* r26 */, class hkpWorldObject * attacked /* r27 */, class xVec3 & hit_norm /* r28 */) const {
    {
        // Range: 0x8009CCB0 -> 0x8009CD18
        // Local variables
        unsigned int i; // r29
    }
}
// Range: 0x8009CD40 -> 0x8009CDE8
void zCombat::hkpCombatCdBodyPairCollector::addCdBodyPair(class hkpCombatCdBodyPairCollector * this /* r29 */, class hkpCdBody & bodyA /* r30 */, class hkpCdBody & bodyB /* r31 */) {
    // Local variables
    class hkpCollidable * rootCollidable; // r0
    class hkpRigidBody * body; // r0

    {
        // Range: 0x8009CD68 -> 0x8009CDC4
        // Local variables
        class xBase * bodyOwner; // r3

        {
            // Range: 0x8009CD94 -> 0x8009CDC4
            // Local variables
            class zHitButton * button; // r0
        }
    }
}
// Range: 0x8009CDF0 -> 0x8009CE5C
void zCombat::hkpCombatCdBodyPairCollectorNoBSP::addCdBodyPair(class hkpCombatCdBodyPairCollectorNoBSP * this /* r29 */, class hkpCdBody & bodyA /* r30 */, class hkpCdBody & bodyB /* r31 */) {
    // Local variables
    class hkpCollidable * rootCollidable; // r0
    class hkpRigidBody * body; // r0

    {
        // Range: 0x8009CE18 -> 0x8009CE38
        // Local variables
        class xBase * bodyOwner; // r3
    }
}
