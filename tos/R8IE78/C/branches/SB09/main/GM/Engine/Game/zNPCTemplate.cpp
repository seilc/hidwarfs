/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zNPCTemplate.cpp
*/
class FactoryMemTypeLeakCBRegisterer MemTypeCBRegNPCTemplate; // size: 0x1, address: 0x80753E14
// signature: zNPCTemplate::Setup(Sext::NPCTemplate *, zNPCBase *)
// Range: 0x800FE080 -> 0x800FE240
void zNPCTemplate::Setup(class zNPCTemplate * this /* r30 */, class NPCTemplate * asset /* r31 */) {
    // Local variables
    class NPC_Combat * combatAsset; // r27

    {
        // Range: 0x800FE120 -> 0x800FE18C
        // Local variables
        class NPCCounterPattern * counterAsset; // r0

        {
            // Range: 0x800FE144 -> 0x800FE18C
            // Local variables
            int i; // r6
        }
    }
}
// Range: 0x800FE240 -> 0x800FE41C
void zNPCTemplate::InitAttackTable(class zNPCTemplate * this /* r25 */, class NPC_Combat * combatAsset /* r26 */) {
    {
        // Range: 0x800FE254 -> 0x800FE3F4
        // Local variables
        class zCombatAttack * attackTable; // r0

        {
            // Range: 0x800FE280 -> 0x800FE3F0
            // Local variables
            unsigned int i; // r27

            {
                // Range: 0x800FE280 -> 0x800FE3F0
                // Local variables
                class CombatAttack & attack; // r0

                {
                    // Range: 0x800FE280 -> 0x800FE280
                    // Local variables
                    unsigned int j; // r6
                }
                {
                    // Range: 0x800FE280 -> 0x800FE370
                    // Local variables
                    unsigned int j; // r5
                }
            }
        }
    }
}
// Range: 0x800FE420 -> 0x800FE4B8
void zNPCTemplate::InitMoveTable(class zNPCTemplate * this /* r30 */, class NPCTemplate * asset /* r31 */) {
}
// signature: zNPCTemplate::GetCollectibleSpawner(Sext::eNPCCollectibleType) const
// Range: 0x800FE4F0 -> 0x800FE538
class zCollectibleSpawner * zNPCTemplate::GetCollectibleSpawner() const {
    {
        // Range: 0x800FE4F4 -> 0x800FE530
        // Local variables
        unsigned int i; // r0
    }
}
