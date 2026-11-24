/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zSBProjectileManager.cpp
*/
// Range: 0x8015BD00 -> 0x8015BDBC
bool zSBProjectileManager::GeneratePlayerPuck(class zPlayer * player /* r31 */) {
    // Local variables
    class xVec3 launchOffset; // r1+0x2C
}
// Range: 0x8015BDC0 -> 0x8015BF30
bool zSBProjectileManager::GeneratePlayerPuck(class zPlayer * player /* r30 */, class xVec3 & launchDir /* r31 */, class xVec3 & startOffset /* r29 */) {
    // Local variables
    class xMat4x3 launchTransform; // r1+0x48
    unsigned long long puckID; // r3:r4
    class EntityHandleBase * handle; // r29
    float launchSpeed; // f31
    class zProjectileLaunchData projectileLaunchData; // r1+0x88

    // References
    // -> static class zProjectileManager gProjectileManager;
}
// signature: zSBProjectileManager::GeneratePlayerPuckSalvo(zPlayer *, int, float, float)
// Range: 0x8015BF30 -> 0x8015C120
bool zSBProjectileManager::GeneratePlayerPuckSalvo(class zPlayer * player /* r30 */, int numPucks /* r31 */, float horizOffset /* f31 */) {
    // Local variables
    bool success; // r26
    class xVec3 launchDir; // r1+0x4C
    float radOffset; // r1+0xC
    class xVec3 launchOffset; // r1+0x40

    {
        // Range: 0x8015C094 -> 0x8015C0FC
        // Local variables
        int i; // r27
    }
}
