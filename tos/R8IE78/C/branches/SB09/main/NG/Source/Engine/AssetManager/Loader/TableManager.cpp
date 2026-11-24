/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\AssetManager\Loader\TableManager.cpp
*/
static class MemCB_SectTable memCB_sectTable; // size: 0x4, address: 0x80774634
// Range: 0x801B2550 -> 0x801B25D4
void Loader::TableManager::MakePools(class TableManager * this /* r28 */) {
}
// Range: 0x801B2660 -> 0x801B26B4
void Loader::TableManager::KillPools(class TableManager * this /* r31 */) {
}
// Range: 0x801B26C0 -> 0x801B2730
void Loader::TableManager::AddSectionTable(class TableManager * this /* r27 */, char * packfile /* r28 */, class MemHandle * rawTableMem /* r29 */, int sectSize /* r30 */, class TableTrack * parentTable /* r31 */) {
}
// Range: 0x801B2730 -> 0x801B27B0
void Loader::TableManager::DiscardSectionTable(class TableManager * this /* r27 */, char * tableName /* r28 */) {
    // Local variables
    unsigned int tableNameHash; // r0
}
// Range: 0x801B27B0 -> 0x801B2844
class Iterator Loader::TableManager::DiscardSectionTableTree(class TableManager * this /* r29 */, class Iterator & discardTable /* r30 */) {
}
// signature: Loader::TableManager::DiscardAllTables(bool)
// Range: 0x801B2850 -> 0x801B28AC
void Loader::TableManager::DiscardAllTables(class TableManager * this /* r28 */) {
}
// signature: Loader::TableTrack::Init(bool, Loader::TableTrack *, const char *, Domains::MemHandle *, int)
// Range: 0x801B28B0 -> 0x801B29D8
void Loader::TableTrack::Init(class TableTrack * this /* r31 */, class TableTrack * parent /* r27 */, class MemHandle * tableMem /* r29 */, int sectorSizeOfPackFile /* r28 */) {
    {
        // Range: 0x801B2920 -> 0x801B29C4
        // Local variables
        char * endString; // r29
        char * curString; // r0
        class SectionTable * sectionTable; // r29

        {
            // Range: 0x801B2944 -> 0x801B29C4
            // Local variables
            class HashString * hashstr; // r28
        }
    }
}
// Range: 0x801B2E90 -> 0x801B2EA0
class SectionTable * Loader::TableTrack::GetSectionTable() {
}
// signature: Loader::MemCB_SectTable::Relocating(Domains::MemHandle *)
// Range: 0x801B2EA0 -> 0x801B2EB0
void Loader::MemCB_SectTable::Relocating() {
}
// signature: Loader::SectionTable::FixUpPointers(long)
// Range: 0x801B2EB0 -> 0x801B2F4C
void Loader::SectionTable::FixUpPointers() {
    {
        // Range: 0x801B2EE0 -> 0x801B2F48
        // Local variables
        class TableEntry * end; // r5
        class TableEntry * it; // r3
    }
}
