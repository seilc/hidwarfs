/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zPowerSurge.cpp
*/
static float MIN_RADIUS; // size: 0x4, address: 0x806D0148
static float MAX_RADIUS; // size: 0x4, address: 0x806D014C
// signature: zPowerSurge::Update(float)
// Range: 0x8017DB90 -> 0x8017DD14
void zPowerSurge::Update(class zPowerSurge * this /* r31 */) {
    // Local variables
    float adjustedDT; // f1

    // References
    // -> static float MAX_RADIUS;
}
// Range: 0x8017DD20 -> 0x8017E2D4
void zPowerSurge::Emit(class zPowerSurge * this /* r27 */) {
    // Local variables
    class xVec3 pos; // r1+0x2C
    float r2; // f23
    class zScene * s; // r28

    {
        // Range: 0x8017DE80 -> 0x8017E0BC
        // Local variables
        int i; // r28

        {
            // Range: 0x8017DE80 -> 0x8017E0BC
            // Local variables
            float dist2; // f0
            class xVec3 * targetPos; // r0

            {
                // Range: 0x8017DE80 -> 0x8017E0BC
                // Local variables
                class zCombatDamageInfo damageInfo; // r1+0x50
                class xVec3 targetDir; // r1+0x20
            }
        }
    }
    {
        // Range: 0x8017E0DC -> 0x8017E250
        // Local variables
        unsigned short i; // r29

        {
            // Range: 0x8017E0DC -> 0x8017E250
            // Local variables
            float dist2; // f0
            class xVec3 * targetPos; // r0
            class xEnt * ent; // r30
            class xBase * base; // reg65535

            {
                // Range: 0x8017E0DC -> 0x8017E250
                // Local variables
                class EventActionHit params; // r1+0x38
            }
        }
    }

    // References
    // -> class zGlobals globals;
    // -> class xVec3 m_UnitAxisX;
}
