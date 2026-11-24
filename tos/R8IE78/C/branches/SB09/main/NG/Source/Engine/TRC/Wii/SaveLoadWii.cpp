/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\TRC\Wii\SaveLoadWii.cpp
*/
void (* originalCB)(int result); // size: 0x4, address: 0x80782FC8
// Range: 0x80202800 -> 0x80202814
void TRC::SaveLoad::Startup() {
    // References
    // -> class SaveData g_saveData;
}
// Range: 0x80202820 -> 0x80202834
void TRC::SaveLoad::Update() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::SaveLoad::StartBootupCheck(void (*)(int))
// Range: 0x80202840 -> 0x8020288C
void TRC::SaveLoad::StartBootupCheck(class SaveLoad * this /* r31 */) {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::SaveLoad::EnumerateFiles(void (*)(int))
// Range: 0x80202890 -> 0x802028A0
void TRC::SaveLoad::EnumerateFiles() {
    // References
    // -> class SaveData g_saveData;
}
// Range: 0x802028A0 -> 0x80202948
void TRC::SaveLoad::LoadData(int slotIdx /* r28 */, char * data /* r29 */, int dataSize /* r30 */, void (* cb)(int result) /* r31 */) {
    // Local variables
    class SaveDataHeader header; // r1+0x1C
    char * filename; // r4

    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::SaveLoad::SaveData(int, const char *, int, TRC::SaveDataHeader, void (*)(int), bool)
// Range: 0x80202950 -> 0x80202A1C
void TRC::SaveLoad::SaveData(int slotIdx /* r25 */, char * data /* r26 */, int dataSize /* r27 */, class SaveDataHeader & desc /* r28 */, void (* cb)(int result) /* r29 */) {
    // Local variables
    char * filename; // r30

    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::SaveLoad::GetSaveDesc(int)
// Range: 0x80202A20 -> 0x80202A30
class SaveDataHeader * TRC::SaveLoad::GetSaveDesc() {
    // References
    // -> class SaveData g_saveData;
}
// Range: 0x80202A30 -> 0x80202A4C
bool TRC::SaveLoad::IsFreeingResources() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::SaveLoad::CopyData(int, int, void (*)(int))
// Range: 0x80202A50 -> 0x80202AB0
void TRC::SaveLoad::CopyData(void (* cb)(int result) /* r29 */) {
    // Local variables
    char * src; // reg65535
    char * dest; // r30

    // References
    // -> class SaveData g_saveData;
}
// Range: 0x80202AB0 -> 0x80202B64
void TRC::SaveLoad::DeleteData(int slotIdx /* r29 */, void (* cb)(int result) /* r30 */) {
    // Local variables
    char * filename; // r31
    class SaveDataHeader desc; // r1+0x1C

    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::SaveLoad::CheckSpace(int, int, void (*)(int))
// Range: 0x80202B70 -> 0x80202B9C
void TRC::SaveLoad::CheckSpace() {
    // Local variables
    char * filename; // r7

    // References
    // -> class SaveData g_saveData;
}
// Range: 0x80202BA0 -> 0x80202BAC
void TRC::SaveLoad::ForceNextSave() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::SaveLoad::SetupImages(const unsigned long long, const unsigned long long *)
// Range: 0x80202BB0 -> 0x80202BBC
void TRC::SaveLoad::SetupImages() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::NAND07DeleteCB(int)
// Range: 0x80202BC0 -> 0x80202C04
void TRC::NAND07DeleteCB() {
    // References
    // -> void (* originalCB)(int result);
    // -> class SaveData g_saveData;
}
// signature: TRC::SaveLoad::NAND07Handler(TRC::eNAND07Result)
// Range: 0x80202C10 -> 0x80202C9C
void TRC::SaveLoad::NAND07Handler() {
    // References
    // -> void (* originalCB)(int result);
    // -> class SaveData g_saveData;
}
