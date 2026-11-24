/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zBomb.cpp
*/
class zBombManager gBombManager; // size: 0x206C, address: 0x80818480
// signature: @unnamed@WAD01_cpp@::hkBombCdBodyPairCollector::addCdBodyPair(const hkpCdBody &, const hkpCdBody &)
// Range: 0x80155DA0 -> 0x80155F84
static void @unnamed@WAD01_cpp@::hkBombCdBodyPairCollector::addCdBodyPair() {
}
// signature: sphere_damage(xEnt *, const xVec3 &, float, float, float, float, float, float, Sext::eHitSource, zHitTarget, unsigned int, const xVec3 *)
// Range: 0x800AEBB0 -> 0x800AED9C
void sphere_damage(class xEnt * fromEnt /* r27 */, float player_damage /* f27 */, float obj_damage /* f28 */, float npc_damage /* f29 */, float awayKnockback /* f30 */, float upKnockback /* f31 */, enum eHitSource hitSource /* r28 */, enum zHitTarget hitTarget /* r29 */, unsigned int hitFlags /* r30 */, class xVec3 * optNormalToChk /* r31 */) {
    // Local variables
    class xSphere sphere; // r1+0x8

    // References
    // -> class zBombManager gBombManager;
}
// Range: 0x800AEDC0 -> 0x800AF044
void zBombManager::UpdateInUpdate(class zBombManager * this /* r29 */) {
    // Local variables
    unsigned int pendingSize; // r31

    {
        // Range: 0x800AEE40 -> 0x800AEFEC
        // Local variables
        unsigned int i; // r30
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x800AF050 -> 0x800AF5F4
void zBombManager::UpdateInHavok(class zBombManager * this /* r15 */) {
    // Local variables
    unsigned int pendingSize; // r0

    {
        // Range: 0x800AF128 -> 0x800AF53C
        // Local variables
        unsigned int i; // r16

        {
            // Range: 0x800AF128 -> 0x800AF53C
            // Local variables
            class xEntAndPos * entAndPos; // r10
            class hkpCollisionInput * collInput; // r0
            class hkBombCdBodyPairCollector bodyPairs; // r1+0xD0
            class hkpShapePhantom * phantom; // r0
            class zBombInfo & bombInfo; // r0

            {
                // Range: 0x800AF128 -> 0x800AF508
                // Local variables
                unsigned int damageIndex; // r0
                class xVec3 hit; // r1+0x84

                {
                    // Range: 0x800AF424 -> 0x800AF508
                    // Local variables
                    class zBombDamageInfo & damageInfo; // r0
                }
            }
        }
    }

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> static struct {} __vt__Q219@unnamed@WAD01_cpp@25hkBombCdBodyPairCollector;
    // -> class xVec3 m_Null;
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x800AFAC0 -> 0x800AFB68
void zBombManager::SceneInit(class zBombManager * this /* r31 */) {
}
