/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\AssetManager\Loader\TableManager.cpp
*/
static class MemCB_SectTable memCB_sectTable; // size: 0x4, address: 0x807FE080
// Range: 0x80233D70 -> 0x80233FA8
void Loader::TableManager::DiscardSectionTable(class TableManager * this /* r30 */, char * tableName /* r25 */) {
    // Local variables
    unsigned int tableNameHash; // r0

    // References
    // -> static class DynaMemModule dynaMemMod;
    // -> static class MemHandle nullHandle;
}
// Range: 0x80233FA8 -> 0x8023418C
class Iterator Loader::TableManager::DiscardSectionTableTree(class TableManager * this /* r28 */, class Iterator * discardTable /* r29 */) {
    // References
    // -> static class DynaMemModule dynaMemMod;
    // -> static class MemHandle nullHandle;
}
// signature: Loader::MemCB_SectTable::Relocating(Domains::MemHandle *)
// Range: 0x8023418C -> 0x8023419C
void Loader::MemCB_SectTable::Relocating() {
}
// signature: Loader::SectionTable::FixUpPointers(long)
// Range: 0x8023419C -> 0x80234238
void Loader::SectionTable::FixUpPointers() {
    {
        // Range: 0x802341CC -> 0x80234228
        // Local variables
        class TableEntry * end; // r5
        class TableEntry * it; // r3
    }
}
