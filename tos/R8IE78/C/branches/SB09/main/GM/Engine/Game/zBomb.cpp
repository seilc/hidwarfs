/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zBomb.cpp
*/
class zBombManager gBombManager; // size: 0x22AC, address: 0x8072EF1C
// signature: @unnamed@WAD01_cpp@::hkBombCdBodyPairCollector::addCdBodyPair(const hkpCdBody &, const hkpCdBody &)
// Range: 0x800ADCA0 -> 0x800ADCFC
static void @unnamed@WAD01_cpp@::hkBombCdBodyPairCollector::addCdBodyPair(class hkBombCdBodyPairCollector * this /* r29 */, class hkpCdBody & bodyB /* r30 */) {
    // Local variables
    class hkpCollidable * collidableA; // r31
    class hkpCollidable * collidableB; // r30
}
// signature: @unnamed@WAD01_cpp@::hkBombCdBodyPairCollector::CheckAndAddCollidable(const hkpCollidable *)
// Range: 0x800ADD00 -> 0x800ADE28
static void @unnamed@WAD01_cpp@::hkBombCdBodyPairCollector::CheckAndAddCollidable(class hkBombCdBodyPairCollector * this /* r31 */) {
    {
        // Range: 0x800ADD14 -> 0x800ADE14
        // Local variables
        unsigned int index; // r6
        class xVec3 pos; // r1+0x8
        class xBase * gameBase; // r0
        void * userData; // r30

        {
            // Range: 0x800ADD38 -> 0x800ADD6C
            // Local variables
            class xEnt * gameEnt; // r0
        }
    }
}
// signature: sphere_damage(xBase *, const xVec3 &, float, float, float, float, float, float, Sext::eHitSource, zHitTarget, unsigned int, const xVec3 *)
// Range: 0x80073740 -> 0x800737E4
void sphere_damage(class xBase * fromEnt /* r27 */, float blastRadius /* f26 */, float player_damage /* f27 */, float obj_damage /* f28 */, float npc_damage /* f29 */, float awayKnockback /* f30 */, float upKnockback /* f31 */, enum eHitSource hitSource /* r28 */, enum zHitTarget hitTarget /* r29 */, unsigned int hitFlags /* r30 */, class xVec3 * optNormalToChk /* r31 */) {
    // Local variables
    class xSphere sphere; // r1+0x8

    // References
    // -> class zBombManager gBombManager;
}
// Range: 0x800737F0 -> 0x80073838
void * zBombManager::zBombManager(class zBombManager * this /* r31 */) {
}
// Range: 0x80073840 -> 0x8007399C
void zBombManager::UpdateInUpdate(class zBombManager * this /* r26 */) {
    // Local variables
    unsigned int pendingSize; // r28

    {
        // Range: 0x80073874 -> 0x80073970
        // Local variables
        unsigned int i; // r27
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x80073A40 -> 0x80073E0C
void zBombManager::UpdateInHavok(class zBombManager * this /* r15 */) {
    // Local variables
    unsigned int pendingSize; // r19

    {
        // Range: 0x80073A90 -> 0x80073DC8
        // Local variables
        unsigned int i; // r18

        {
            // Range: 0x80073A90 -> 0x80073DC8
            // Local variables
            class xEntAndPos * entAndPos; // r17
            class hkBombCdBodyPairCollector bodyPairs; // r1+0xD0

            {
                // Range: 0x80073A90 -> 0x80073DC8
                // Local variables
                unsigned int damageIndex; // r5

                {
                    // Range: 0x80073CB8 -> 0x80073DC8
                    // Local variables
                    int attackID; // r16
                }
            }
        }
    }

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> class xVec3 m_Null;
    // -> static struct {} __vt__Q219@unnamed@WAD01_cpp@25hkBombCdBodyPairCollector;
    // -> struct {} __vt__22hkpCdBodyPairCollector;
}
// Range: 0x80073E20 -> 0x80073F94
void zBombManager::AddBomb(class zBombManager * this /* r31 */, class xSphere & sphere /* r23 */, class xBase * fromEnt /* r24 */, float player_damage /* f27 */, float obj_damage /* f28 */, float npc_damage /* f29 */, float awayKnockback /* f30 */, float upKnockback /* f31 */, enum eHitSource hitSource /* r25 */, enum zHitTarget hitTarget /* r26 */, unsigned int hitFlags /* r27 */, class xVec3 * optNormalToChk /* r28 */) {
    // Local variables
    unsigned int index; // r3

    {
        // Range: 0x80073EA4 -> 0x80073F40
        // Local variables
        int attackID; // r29
    }
}
// Range: 0x80073FD0 -> 0x80073FD4
void zBombManager::SceneInit() {
}
// Range: 0x80073FE0 -> 0x8007403C
void zBombManager::SceneReset(class zBombManager * this /* r31 */) {
}
