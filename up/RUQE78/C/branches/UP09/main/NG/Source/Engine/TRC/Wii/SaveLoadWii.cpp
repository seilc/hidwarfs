/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\TRC\Wii\SaveLoadWii.cpp
*/
void (* originalCB)(int result); // size: 0x4, address: 0x80852F78
// Range: 0x8035E538 -> 0x8035E694
void TRC::SaveLoad::Startup() {
    // References
    // -> long long startupTicks;
    // -> double secondsPerTick;
    // -> class SaveData g_saveData;
}
// Range: 0x8035E694 -> 0x8035E6A8
void TRC::SaveLoad::Update() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::SaveLoad::StartBootupCheck(void (*)(int))
// Range: 0x8035E6A8 -> 0x8035E6F4
void TRC::SaveLoad::StartBootupCheck(class SaveLoad * this /* r31 */) {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::SaveLoad::EnumerateFiles(void (*)(int))
// Range: 0x8035E6F4 -> 0x8035E7A8
void TRC::SaveLoad::EnumerateFiles() {
    // References
    // -> bool shutdown;
    // -> class SaveData g_saveData;
}
// Range: 0x8035E7A8 -> 0x8035E7AC
void TRC::SaveLoad::PrepData() {
}
// signature: TRC::SaveLoad::LoadData(int, char *, int, void (*)(int))
// Range: 0x8035E7AC -> 0x8035E84C
void TRC::SaveLoad::LoadData(int dataSize /* r0 */) {
    // Local variables
    class SaveDataHeader header; // r1+0x14
    char * filename; // r10

    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::SaveLoad::SaveData(int, const char *, int, TRC::SaveDataHeader, void (*)(int), bool)
// Range: 0x8035E84C -> 0x8035E904
void TRC::SaveLoad::SaveData(int slotIdx /* r25 */, char * data /* r26 */, int dataSize /* r27 */, class SaveDataHeader & desc /* r28 */, void (* cb)(int result) /* r29 */) {
    // Local variables
    char * filename; // r30

    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::SaveLoad::GetSaveDesc(int)
// Range: 0x8035E904 -> 0x8035E930
class SaveDataHeader * TRC::SaveLoad::GetSaveDesc() {
    // References
    // -> class SaveData g_saveData;
}
// Range: 0x8035E934 -> 0x8035E950
bool TRC::SaveLoad::IsFreeingResources() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::SaveLoad::CopyData(int, int, void (*)(int))
// Range: 0x8035E950 -> 0x8035EA7C
void TRC::SaveLoad::CopyData(void (* cb)(int result) /* r27 */) {
    // Local variables
    char * src; // reg65535
    char * dest; // r28

    // References
    // -> class SaveData g_saveData;
    // -> double secondsPerTick;
}
// Range: 0x8035EA7C -> 0x8035EB74
void TRC::SaveLoad::DeleteData(int slotIdx /* r29 */, void (* cb)(int result) /* r30 */) {
    // Local variables
    char * filename; // r31
    class SaveDataHeader desc; // r1+0x14

    // References
    // -> class SaveData g_saveData;
    // -> double secondsPerTick;
}
// signature: TRC::SaveLoad::CheckSpace(int, int, void (*)(int))
// Range: 0x8035EB74 -> 0x8035EC3C
void TRC::SaveLoad::CheckSpace() {
    // Local variables
    char * filename; // r28

    // References
    // -> class SaveData g_saveData;
    // -> bool shutdown;
}
// Range: 0x8035EC3C -> 0x8035EC90
void TRC::SaveLoad::ForceNextSave() {
    // References
    // -> class SaveData g_saveData;
    // -> double secondsPerTick;
}
// signature: TRC::SaveLoad::SetupImages(const unsigned long long, const unsigned long long *)
// Range: 0x8035EC90 -> 0x8035EC9C
void TRC::SaveLoad::SetupImages() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::NAND07DeleteCB(int)
// Range: 0x8035EC9C -> 0x8035ED14
void TRC::NAND07DeleteCB() {
    // References
    // -> class SaveData g_saveData;
    // -> void (* originalCB)(int result);
}
