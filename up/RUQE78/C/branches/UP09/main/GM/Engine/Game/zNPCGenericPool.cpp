/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zNPCGenericPool.cpp
*/
// Range: 0x801D61D0 -> 0x801D62D8
class Entity * Sext::zNPCGenericPoolAsset::Create(class EntityHandleBase * handle /* r29 */, class zNPCGenericPoolAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__15zNPCGenericPool;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x801D62E0 -> 0x801D6350
void zNPCGenericPool::Setup(class zNPCGenericPool * this /* r31 */) {
}
// Range: 0x801D6350 -> 0x801D6684
void zNPCGenericPool::ActivateNPC(class zNPCGenericPool * this /* r21 */) {
    // Local variables
    class zNPCGeneric * npc; // r31

    {
        // Range: 0x801D6374 -> 0x801D6650
        // Local variables
        unsigned int i; // r20

        {
            // Range: 0x801D6374 -> 0x801D6650
            // Local variables
            unsigned long long UID; // r3:r4
            class uid * suid; // r0

            {
                // Range: 0x801D63A0 -> 0x801D6650
                // Local variables
                class zNPCEntity * npcEnt; // r31
                class xMat4x3 spawnMat; // r1+0x20
            }
        }
    }

    // References
    // -> class xVec3 m_Null;
    // -> class xMat4x3 g_I3;
}
// signature: zNPCGenericPool_HandleEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801D6690 -> 0x801D6788
void zNPCGenericPool_HandleEvent(class xBase * to /* r31 */) {
}
