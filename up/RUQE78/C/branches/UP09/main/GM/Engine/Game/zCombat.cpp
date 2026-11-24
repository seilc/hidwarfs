/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zCombat.cpp
*/
static float ignoreRepeatHitsTime; // size: 0x4, address: 0x807A364C
static class zCombatDamageInfo * damage_info_stack[4]; // size: 0x10, address: 0x8081C5A8
static int damage_info_stack_count; // size: 0x4, address: 0x8081C5B8
// signature: zCombat::Setup(const xHierarchyBoundInitData *, unsigned int, void *)
// Range: 0x80136AB0 -> 0x80136ACC
int zCombat::Setup() {
}
// signature: zCombat::Init(const xHierarchyBoundInitData *, float, int, const zCombatAttack *, unsigned short, float, float, const char *, const char **, int)
// Range: 0x80136AD0 -> 0x80136B5C
void zCombat::Init(class zCombat * this /* r29 */, class zCombatAttack * stateTable /* r30 */, unsigned short stateTableSize /* r31 */, float hitPoints /* f31 */) {
}
// Range: 0x80136B60 -> 0x801372CC
void zCombat::PostUpdate(class zCombat * this /* r28 */, class xEnt * ent /* r29 */, float dt /* f31 */) {
    // Local variables
    bool resetSphere; // r31
    class xAnimState * curState; // r5

    {
        // Range: 0x80136B88 -> 0x80136BB0
        // Local variables
        int i; // r26

        {
            // Range: 0x80136B88 -> 0x80136BB0
            // Local variables
            class xHierarchyNode & node; // r3
        }
    }
    {
        // Range: 0x80136C5C -> 0x80136CB0
        // Local variables
        class effect * rumble; // r25
    }
    {
        // Range: 0x80136E80 -> 0x80137080
        // Local variables
        float newTime; // f3

        {
            // Range: 0x80136F6C -> 0x8013706C
            // Local variables
            unsigned int chainStateID; // r0
        }
    }
    {
        // Range: 0x80137090 -> 0x8013719C
        // Local variables
        int i; // r30
    }

    // References
    // -> class xSphere sphere;
}
// signature: zCombatGetEvent(Sext::eHitSource)
// Range: 0x801372D0 -> 0x80137348
unsigned int zCombatGetEvent() {
    // Local variables
    unsigned int toEvent; // r3
}
// Range: 0x80137350 -> 0x80137A68
void zCombatDamage(class xBase * obj /* r28 */, class zCombatDamageInfo & damageInfo /* r29 */) {
    // Local variables
    class xEnt * ent; // r30
    unsigned int entBaseType; // r4

    {
        // Range: 0x801373C8 -> 0x80137458
        // Local variables
        unsigned int baseType; // r4

        {
            // Range: 0x8013742C -> 0x80137440
            // Local variables
            class zNPCBase * npcBase; // r0
        }
        {
            // Range: 0x80137444 -> 0x80137458
            // Local variables
            class zNPCEntity * npcEnt; // r0
        }
    }
    {
        // Range: 0x801374BC -> 0x801375BC
        // Local variables
        class zPlayer * player; // r0
    }
    {
        // Range: 0x801375C4 -> 0x80137628
        // Local variables
        class zNPCEntity * npcEnt; // r0
    }
    {
        // Range: 0x80137950 -> 0x801379B0
        // Local variables
        unsigned int toEvent; // r28
    }
    {
        // Range: 0x801379B4 -> 0x80137A34
        // Local variables
        unsigned int toEvent; // r28
        class EventActionHit params; // r1+0x28
    }

    // References
    // -> class zBombManager gBombManager;
    // -> class zGlobals globals;
    // -> unsigned int g_rttidParentTable[246];
    // -> static class zCombatDamageInfo * damage_info_stack[4];
    // -> static int damage_info_stack_count;
}
// signature: zCombatGetHitTarget(xVec3 *, xEnt *)
// Range: 0x80137A70 -> 0x80137C68
enum zHitTarget zCombatGetHitTarget() {
    // Local variables
    enum zHitTarget hitTarget; // r0

    {
        // Range: 0x80137A70 -> 0x80137C5C
        // Local variables
        class xVec3 attack_dir; // r1+0x8

        {
            // Range: 0x80137B04 -> 0x80137C5C
            // Local variables
            float dot; // f0
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x80137C70 -> 0x80138108
void zCombat::SendObjectHit(class zCombat * this /* r19 */, class xEnt * attacker /* r20 */, class xBase * target /* r21 */, enum zHitTarget hitTarget /* r22 */, class xVec3 * hit_loc /* r23 */, class xVec3 * hit_norm /* r24 */, bool hitEffect /* r25 */) {
    {
        // Range: 0x80137CB4 -> 0x80137D58
        // Local variables
        int i; // r26
    }
    {
        // Range: 0x80137DE4 -> 0x8013805C
        // Local variables
        class zCombatDamageInfo params; // r1+0x48
        unsigned int flags; // r25
        float damageAmount; // f0
        class xVec3 knockback; // r1+0x38
    }

    // References
    // -> class xVec3 m_Null;
    // -> class xSphere sphere;
    // -> double secondsPerTick;
    // -> static float ignoreRepeatHitsTime;
}
// Range: 0x80138120 -> 0x80138C70
void zCombat::CheckForHit(class zCombat * this /* r30 */, class xEnt * attacker /* r31 */) {
    {
        // Range: 0x80138168 -> 0x801381B8
        // Local variables
        int i; // r15

        {
            // Range: 0x80138168 -> 0x801381B8
            // Local variables
            float diffLen2; // f0
            class hkpAllCdBodyPairCollectorNoBSP collector; // r1+0x2F0
            class hkpWorld * havokWorld; // r19
            float radius; // f29

            {
                // Range: 0x80138170 -> 0x801381A8
                // Local variables
                class hkpCollisionInput * input; // r0
                class hkpCollidable collidable; // r1+0x13C
                class hkMotionState motionState; // r1+0x240
                class hkpSphereShape shape; // r1+0x90
            }
            {
                // Range: 0x801381A8 -> 0x801381B8
                // Local variables
                class hkpCollisionInput * input; // r0
                class hkpCollidable collidable; // r1+0xF0
                class hkMotionState motionState; // r1+0x190
                class hkpCapsuleShape shape; // r1+0xB0
            }
        }
    }

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> struct {} __vt__Q27zCombat30hkpAllCdBodyPairCollectorNoBSP;
}
// Range: 0x80138C80 -> 0x80138FD8
void zCombat::ProcessHitCollection(class zCombat * this /* r25 */, class xEnt * attacker /* r26 */, class hkpAllCdBodyPairCollector * collector /* r27 */) {
    {
        // Range: 0x80138CAC -> 0x80138FAC
        // Local variables
        int i; // r30

        {
            // Range: 0x80138CAC -> 0x80138FAC
            // Local variables
            class xVec3 hit_norm; // r1+0x30
            class xVec3 hit_loc; // r1+0x3C
            class xBase * hitPhantomBBase; // r28
            class xBase * hitPhantomABase; // r23
            class xBase * hitRBBBase; // r29
            class xBase * hitRBABase; // r24
            class hkpRootCdBodyPair hit; // r1+0x48

            {
                // Range: 0x80138DE0 -> 0x80138E40
                // Local variables
                class hkVector4 hk_hit_norm; // r1+0x10
                class hkVector4 hk_hit_loc; // r1+0x20
            }
            {
                // Range: 0x80138E40 -> 0x80138E98
                // Local variables
                enum zHitTarget hitTarget; // r6
            }
            {
                // Range: 0x80138E9C -> 0x80138EF4
                // Local variables
                enum zHitTarget hitTarget; // r6
            }
            {
                // Range: 0x80138EF4 -> 0x80138F4C
                // Local variables
                enum zHitTarget hitTarget; // r6
            }
            {
                // Range: 0x80138F50 -> 0x80138FAC
                // Local variables
                enum zHitTarget hitTarget; // r6
            }
        }
    }
}
// signature: zCombat::hkpAllCdBodyPairCollectorNoBSP::addCdBodyPair(const hkpCdBody &, const hkpCdBody &)
// Range: 0x80138FE0 -> 0x80139040
void zCombat::hkpAllCdBodyPairCollectorNoBSP::addCdBodyPair() {
    {
        // Range: 0x80139018 -> 0x80139038
        // Local variables
        class xBase * bodyOwner; // r6
    }
}
