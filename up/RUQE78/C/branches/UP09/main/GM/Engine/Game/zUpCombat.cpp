/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zUpCombat.cpp
*/
class zNPCBase * curBossEnemy; // size: 0x4, address: 0x8082C9E4
class zNPCBase * stunnedEnemyList[64]; // size: 0x100, address: 0x8082C9E8
class zNPCBase * liveNonDogEnemyList[64]; // size: 0x100, address: 0x8082CAE8
unsigned int numLiveNonDogEnemies; // size: 0x4, address: 0x8082CBE8
class zNPCBase * liveEnemyList[64]; // size: 0x100, address: 0x8082CBF0
unsigned int numLiveEnemies; // size: 0x4, address: 0x8082CCF0
// Range: 0x80271890 -> 0x8027198C
void zUpCombat::Reset() {
    {
        // Range: 0x802718D4 -> 0x80271988
        // Local variables
        int i; // r0
    }

    // References
    // -> class zNPCBase * liveNonDogEnemyList[64];
    // -> class zNPCBase * liveEnemyList[64];
    // -> class zNPCBase * stunnedEnemyList[64];
    // -> unsigned int numLiveNonDogEnemies;
    // -> unsigned int numLiveEnemies;
}
// signature: zUpCombat::Update(float)
// Range: 0x80271990 -> 0x80271BC8
void zUpCombat::Update() {
    {
        // Range: 0x80271990 -> 0x80271BB4
        // Local variables
        int i; // r4
    }
}
// signature: zUpCombat::EnemyAdd(xBase *)
// Range: 0x80271BD0 -> 0x80271CF0
void zUpCombat::EnemyAdd() {
    {
        // Range: 0x80271CAC -> 0x80271CE4
        // Local variables
        int i; // r6
    }
}
// signature: zUpCombat::EnemyRemove(xBase *)
// Range: 0x80271CF0 -> 0x80271DD4
void zUpCombat::EnemyRemove() {
}
// Range: 0x80271DE0 -> 0x80271EB4
class zNPCBase * zUpCombat::GetClosestEnemy(class zUpCombat * this /* r28 */) {
    // Local variables
    class zNPCBase * closestEnemy; // r30
    float closestDist2; // f31

    {
        // Range: 0x80271E0C -> 0x80271E78
        // Local variables
        unsigned int i; // r29

        {
            // Range: 0x80271E20 -> 0x80271E78
            // Local variables
            float dist2; // f0
            class xVec3 npcPos; // r1+0x8
        }
    }
}
// Range: 0x80271EC0 -> 0x80272048
bool zUpCombat::IsNearInteractionBlockingEnemy(class zUpCombat * this /* r28 */) const {
    // Local variables
    unsigned int alphaTypeNameHash; // r0
    unsigned int betaTypeNameHash; // r0
    unsigned int gammaTypeNameHash; // r0

    {
        // Range: 0x80271F0C -> 0x8027201C
        // Local variables
        unsigned int i; // r5

        {
            // Range: 0x80271F0C -> 0x8027201C
            // Local variables
            unsigned int npcTemplateTypeHash; // r0
        }
    }
}
// signature: zUpCombat::IsNearEnemyBoss(zCommonPlayer *, float, float, xVec3 *)
// Range: 0x80272050 -> 0x80272200
bool zUpCombat::IsNearEnemyBoss(float headCheckDist /* f30 */, float tailCheckDist /* f31 */, class xVec3 * bossAvoidPos /* r27 */) {
    // Local variables
    class xVec3 & playerPos; // r29
    class xVec3 bossHeadPos; // r1+0x8
    class zWallNet * npcWallNet; // r28
    float dist2; // f0
    bool isInTailRange; // r0

    // References
    // -> class zTailTracker sSingleton;
    // -> class zNPCBase * curBossEnemy;
}
// signature: zUpCombat::EnemyBossAdd(zNPCBase *)
// Range: 0x802726D0 -> 0x802726DC
void zUpCombat::EnemyBossAdd() {
    // References
    // -> class zNPCBase * curBossEnemy;
}
// signature: zUpCombat::EnemyBossRemove(zNPCBase *)
// Range: 0x802726E0 -> 0x802726FC
void zUpCombat::EnemyBossRemove() {
    // References
    // -> class zNPCBase * curBossEnemy;
}
// signature: zUpCombat::GetClosestLiveEnemy(zUPPlayer *, float)
// Range: 0x80272700 -> 0x802727D0
class zNPCBase * zUpCombat::GetClosestLiveEnemy(class zUPPlayer * player /* r28 */) {
    // Local variables
    class zNPCBase * closestEnemy; // r30
    float closestDist2; // f31

    {
        // Range: 0x80272730 -> 0x80272794
        // Local variables
        int i; // r29

        {
            // Range: 0x80272740 -> 0x80272794
            // Local variables
            float dist2; // f0
            class xVec3 npcPos; // r1+0x8
        }
    }

    // References
    // -> class zNPCBase * liveEnemyList[64];
}
// signature: zUpCombat::GetClosestLiveNonDogEnemy(zUPPlayer *, float)
// Range: 0x802727D0 -> 0x802728A0
class zNPCBase * zUpCombat::GetClosestLiveNonDogEnemy(class zUPPlayer * player /* r28 */) {
    // Local variables
    class zNPCBase * closestEnemy; // r30
    float closestDist2; // f31

    {
        // Range: 0x80272800 -> 0x80272864
        // Local variables
        int i; // r29

        {
            // Range: 0x80272810 -> 0x80272864
            // Local variables
            float dist2; // f0
            class xVec3 npcPos; // r1+0x8
        }
    }

    // References
    // -> class zNPCBase * liveNonDogEnemyList[64];
}
// signature: zUpCombat::TargetingEnemyAdd(xBase *)
// Range: 0x802728A0 -> 0x802729C0
void zUpCombat::TargetingEnemyAdd() {
    {
        // Range: 0x8027297C -> 0x802729B4
        // Local variables
        int i; // r6
    }
}
// signature: zUpCombat::TargetingEnemyRemove(xBase *)
// Range: 0x802729C0 -> 0x80272AA4
void zUpCombat::TargetingEnemyRemove() {
}
// Range: 0x80272AB0 -> 0x80272C88
bool zUpCombat::CanIBlockTargetingEnemy(class zUpCombat * this /* r31 */) {
    // Local variables
    bool atLeastOneDogIsAttacking; // r3

    {
        // Range: 0x80272AFC -> 0x80272C74
        // Local variables
        int i; // r0

        {
            // Range: 0x80272AFC -> 0x80272C74
            {
                // Range: 0x80272AFC -> 0x80272C74
                // Local variables
                class xVec3 toPlayer; // r1+0x8
            }
        }
    }
}
// signature: zUpCombat::IsTargetingMe(xBase *)
// Range: 0x80272C90 -> 0x80272D60
bool zUpCombat::IsTargetingMe() {
}
// signature: zUpCombat::IsAttackingMe(xBase *)
// Range: 0x80272D60 -> 0x80272E30
bool zUpCombat::IsAttackingMe() {
}
// Range: 0x80272E30 -> 0x80272ED4
bool zUpCombat::IsTargetable(class zUpCombat * this /* r30 */) const {
    // Local variables
    bool inRange; // r31
    class zCarlPlayer * carlPlayer; // r0
    bool inPlant; // r0
}
// Range: 0x80272EE0 -> 0x80272FB4
class zNPCBase * zUpCombat::GetClosestStunnedEnemy(class zUPPlayer * player /* r28 */) {
    // Local variables
    class zNPCBase * closestEnemy; // r30
    float closestDist2; // f31

    {
        // Range: 0x80272F14 -> 0x80272F78
        // Local variables
        int i; // r29

        {
            // Range: 0x80272F24 -> 0x80272F78
            // Local variables
            float dist2; // f0
            class xVec3 npcPos; // r1+0x8
        }
    }

    // References
    // -> class zNPCBase * stunnedEnemyList[64];
}
// signature: zUpCombat::StunnedEnemyAdd(xBase *)
// Range: 0x80272FC0 -> 0x80273088
void zUpCombat::StunnedEnemyAdd() {
    {
        // Range: 0x80272FCC -> 0x8027303C
        // Local variables
        int i; // r5
    }
    {
        // Range: 0x80273050 -> 0x8027307C
        // Local variables
        int i; // r5
    }

    // References
    // -> class zNPCBase * stunnedEnemyList[64];
}
// signature: zUpCombat::StunnedEnemyRemove(xBase *)
// Range: 0x80273090 -> 0x802730DC
void zUpCombat::StunnedEnemyRemove() {
    {
        // Range: 0x8027309C -> 0x802730D0
        // Local variables
        int i; // r5
    }

    // References
    // -> class zNPCBase * stunnedEnemyList[64];
}
// signature: zUpCombat::LiveEnemyAdd(xBase *)
// Range: 0x802730E0 -> 0x802731C8
void zUpCombat::LiveEnemyAdd() {
    {
        // Range: 0x802730FC -> 0x8027316C
        // Local variables
        int i; // r5
    }
    {
        // Range: 0x80273180 -> 0x802731BC
        // Local variables
        int i; // r7
    }

    // References
    // -> class zNPCBase * liveEnemyList[64];
    // -> unsigned int numLiveEnemies;
}
// signature: zUpCombat::LiveEnemyRemove(xBase *)
// Range: 0x802731D0 -> 0x8027322C
void zUpCombat::LiveEnemyRemove() {
    {
        // Range: 0x802731DC -> 0x80273220
        // Local variables
        int i; // r6
    }

    // References
    // -> unsigned int numLiveEnemies;
    // -> class zNPCBase * liveEnemyList[64];
}
// signature: zUpCombat::LiveNonDogEnemyAdd(xBase *)
// Range: 0x80273230 -> 0x80273318
void zUpCombat::LiveNonDogEnemyAdd() {
    {
        // Range: 0x8027324C -> 0x802732BC
        // Local variables
        int i; // r5
    }
    {
        // Range: 0x802732D0 -> 0x8027330C
        // Local variables
        int i; // r7
    }

    // References
    // -> class zNPCBase * liveNonDogEnemyList[64];
    // -> unsigned int numLiveNonDogEnemies;
}
// signature: zUpCombat::LiveNonDogEnemyRemove(xBase *)
// Range: 0x80273320 -> 0x8027337C
void zUpCombat::LiveNonDogEnemyRemove() {
    {
        // Range: 0x8027332C -> 0x80273370
        // Local variables
        int i; // r6
    }

    // References
    // -> unsigned int numLiveNonDogEnemies;
    // -> class zNPCBase * liveNonDogEnemyList[64];
}
