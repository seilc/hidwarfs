/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zBomb.cpp
*/
class zBombManager gBombManager; // size: 0x2224, address: 0x807681C0
// signature: @unnamed@WAD01_cpp@::hkBombCdBodyPairCollector::addCdBodyPair(const hkpCdBody &, const hkpCdBody &)
// Range: 0x800CCBB0 -> 0x800CCD94
static void @unnamed@WAD01_cpp@::hkBombCdBodyPairCollector::addCdBodyPair() {
}
// signature: sphere_damage(xEnt *, const xVec3 &, float, float, float, float, float, float, zHitSource, zHitTarget, unsigned int, const xVec3 *)
// Range: 0x80084A40 -> 0x80084C24
void sphere_damage(class xEnt * fromEnt /* r27 */, float player_damage /* f27 */, float obj_damage /* f28 */, float npc_damage /* f29 */, float awayKnockback /* f30 */, float upKnockback /* f31 */, enum zHitSource hitSource /* r28 */, enum zHitTarget hitTarget /* r29 */, unsigned int hitFlags /* r30 */, class xVec3 * optNormalToChk /* r31 */) {
    // Local variables
    class xBound bound; // r1+0x8

    // References
    // -> class zBombManager gBombManager;
}
// Range: 0x80084C70 -> 0x80084CB0
void * zBombManager::~zBombManager(class zBombManager * this /* r31 */) {
}
// Range: 0x80084CB0 -> 0x80084F78
void zBombManager::UpdateInUpdate(class zBombManager * this /* r28 */) {
    // Local variables
    unsigned int pendingSize; // r30

    {
        // Range: 0x80084CF4 -> 0x80084F34
        // Local variables
        unsigned int i; // r29
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x80084F80 -> 0x80085574
void zBombManager::UpdateInHavok(class zBombManager * this /* r15 */) {
    // Local variables
    unsigned int pendingSize; // r0

    {
        // Range: 0x80085040 -> 0x80085478
        // Local variables
        unsigned int i; // r16

        {
            // Range: 0x80085040 -> 0x80085478
            // Local variables
            class xEntAndPos * entAndPos; // r17
            class hkpCollisionInput * collInput; // r0
            class hkBombCdBodyPairCollector bodyPairs; // r1+0xD0
            class hkpShapePhantom * phantom; // r0
            class zBombInfo * bombInfo; // r0

            {
                // Range: 0x80085040 -> 0x80085444
                // Local variables
                unsigned int damageIndex; // r0
                class xVec3 hit; // r1+0x84

                {
                    // Range: 0x80085350 -> 0x80085444
                    // Local variables
                    class zBombDamageInfo * damageInfo; // r0
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
// Range: 0x80085A40 -> 0x80085A9C
void zBombManager::SceneInit(class zBombManager * this /* r31 */) {
}
// Range: 0x80085AA0 -> 0x80085AFC
void zBombManager::SceneReset(class zBombManager * this /* r31 */) {
}
