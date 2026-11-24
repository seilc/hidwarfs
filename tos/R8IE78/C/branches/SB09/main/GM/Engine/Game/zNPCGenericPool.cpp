/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zNPCGenericPool.cpp
*/
// Range: 0x800F2160 -> 0x800F21C0
class Entity * Sext::zNPCGenericPoolAsset::Create(class EntityHandleBase * handle /* r30 */, class zNPCGenericPoolAsset * asset /* r31 */) {
}
// Range: 0x800F21C0 -> 0x800F2254
void * zNPCGenericPool::zNPCGenericPool(class zNPCGenericPool * this /* r29 */, class EntityHandleBase * handle /* r30 */, class zNPCGenericPoolAsset * inAsset /* r31 */) {
    // References
    // -> struct {} __vt__15zNPCGenericPool;
}
// Range: 0x800F2260 -> 0x800F22D0
void zNPCGenericPool::Reset(class zNPCGenericPool * this /* r31 */) {
    {
        // Range: 0x800F227C -> 0x800F22BC
        // Local variables
        unsigned int i; // r6
    }
}
// Range: 0x800F22D0 -> 0x800F22D4
void zNPCGenericPool::Setup() {
}
// Range: 0x800F22E0 -> 0x800F237C
class zNPCGeneric * zNPCGenericPool::PeekNextInactiveNPC(class zNPCGenericPool * this /* r28 */, unsigned int * oPoolIndx /* r29 */) const {
    // Local variables
    class zNPCGeneric * npc; // r3

    {
        // Range: 0x800F22F8 -> 0x800F2364
        // Local variables
        unsigned int i; // r30
    }
}
// Range: 0x800F2380 -> 0x800F23F0
class zNPCGeneric * zNPCGenericPool::GetNextInactiveNPC(class zNPCGenericPool * this /* r29 */, unsigned long long requester /* r31:r30 */) {
    // Local variables
    unsigned int i; // r1+0x8
    class zNPCGeneric * npc; // r3
}
// Range: 0x800F23F0 -> 0x800F247C
void zNPCGenericPool::RemoveFromReserved(class zNPCGenericPool * this /* r28 */, class zNPCGeneric * npc /* r29 */) {
    // Local variables
    class zNPCGeneric * candidate; // r0

    {
        // Range: 0x800F2408 -> 0x800F2468
        // Local variables
        unsigned int i; // r30
    }
}
// Range: 0x800F2480 -> 0x800F2554
void zNPCGenericPool::ActivateNPC(class zNPCGenericPool * this /* r28 */) {
    // Local variables
    class zNPCGeneric * npc; // r30

    {
        // Range: 0x800F2498 -> 0x800F253C
        // Local variables
        unsigned int i; // r29

        {
            // Range: 0x800F2498 -> 0x800F253C
            {
                // Range: 0x800F24C0 -> 0x800F253C
                // Local variables
                class xMat4x3 spawnMat; // r1+0x8
            }
        }
    }

    // References
    // -> class xMat4x3 g_I3;
}
// signature: zNPCGenericPool_HandleEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800F2560 -> 0x800F25A4
void zNPCGenericPool_HandleEvent() {
}
