/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\TRC\Wii\SaveDataWii.cpp
*/
class SaveData g_saveData; // size: 0x2F0, address: 0x80782CD8
// Range: 0x801FFE70 -> 0x801FFF2C
void * TRC::SaveData::SaveData(class SaveData * this /* r29 */) {
    // Local variables
    int rv; // r0

    {
        // Range: 0x801FFEFC -> 0x801FFF00
        // Local variables
        int i; // r0
    }

    // References
    // -> struct {} __vt__Q23TRC15SaveErrorMsgBox;
}
// Range: 0x801FFF30 -> 0x801FFFD4
void TRC::SaveData::Init(class SaveData * this /* r29 */) {
    // References
    // -> double secondsPerTick;
}
// Range: 0x801FFFE0 -> 0x8020006C
void TRC::SaveData::CreateBuffers(class SaveData * this /* r31 */) {
}
// signature: TRC::SaveData::SetupImages(const unsigned long long, const unsigned long long *)
// Range: 0x80200070 -> 0x8020010C
void TRC::SaveData::SetupImages(class SaveData * this /* r30 */, unsigned long long * saveIconIDList /* r31 */) {
    // Local variables
    class EntityHandleBase * goodie; // r0
    void * physicalAddr; // r0
    unsigned long long saveIconID; // r3:r4

    {
        // Range: 0x802000C0 -> 0x802000F8
        // Local variables
        int i; // r0
    }
}
// Range: 0x80200110 -> 0x80200168
void TRC::SaveData::ForceNextSave(class SaveData * this /* r31 */) {
    // References
    // -> double secondsPerTick;
}
// signature: TRC::SaveData::RequestFail(int)
// Range: 0x80200170 -> 0x802001AC
void TRC::SaveData::RequestFail() {
    // References
    // -> class Module * trcModule;
}
// signature: TRC::SaveData::RequestComplete(int)
// Range: 0x802001B0 -> 0x802001F0
void TRC::SaveData::RequestComplete() {
    // References
    // -> class Module * trcModule;
}
// signature: TRC::SaveData::Update(float)
// Range: 0x802001F0 -> 0x8020117C
void TRC::SaveData::Update(class SaveData * this /* r30 */) {
    {
        // Range: 0x80200230 -> 0x80201154
        // Local variables
        int rv; // r0

        {
            // Range: 0x802002B4 -> 0x80200340
            // Local variables
            char * fileName; // r7
            int rv; // r0
            char homePath[64]; // r31+0x190
        }
        {
            // Range: 0x80200360 -> 0x802003E4
            // Local variables
            unsigned long numBlocks; // r0
        }
        {
            // Range: 0x802003EC -> 0x80200540
            // Local variables
            char * fileName; // r7
            int rv; // r0
            char homePath[64]; // r31+0x150
        }
        {
            // Range: 0x80200608 -> 0x8020075C
            // Local variables
            long dstLen; // r31+0x8
            unsigned short bannerComment[32]; // r31+0xD0
            unsigned short bannerTitle[32]; // r31+0x110
            class NANDBanner banner; // r31-0x1E138

            {
                // Range: 0x802006BC -> 0x802006F4
                // Local variables
                int i; // r0
            }
        }
        {
            // Range: 0x80200820 -> 0x8020089C
            // Local variables
            int rv; // r0
            char homePath[64]; // r31+0x90
        }
        {
            // Range: 0x8020099C -> 0x80200A38
            // Local variables
            unsigned long numBlocks; // r0
        }
        {
            // Range: 0x80200BE0 -> 0x80200D14
            // Local variables
            unsigned short bannerComment[32]; // r31+0x10
            unsigned short bannerTitle[32]; // r31+0x50
            class NANDBanner banner; // r31-0xF098

            {
                // Range: 0x80200C74 -> 0x80200CAC
                // Local variables
                int i; // r0
            }
        }
        {
            // Range: 0x80200F80 -> 0x8020101C
            // Local variables
            unsigned long numBlocks; // r0
        }
    }

    // References
    // -> class SaveData g_saveData;
    // -> class Module * trcModule;
    // -> static class MsgBoxManager sMsgBoxManager;
}
// signature: TRC::SaveData::GetHeaderInfoForFile(int)
// Range: 0x802011D0 -> 0x802011F0
class SaveDataHeader * TRC::SaveData::GetHeaderInfoForFile() {
}
// Range: 0x802011F0 -> 0x802012D8
void TRC::SaveData::StartBootupCheck(class SaveData * this /* r28 */, void (* fpCallback)(int result) /* r29 */) {
    // Local variables
    char homePath[64]; // r1+0x10
    int rv; // r0

    {
        // Range: 0x80201208 -> 0x80201228
        // Local variables
        int i; // r30
    }

    // References
    // -> bool shutdown;
}
// Range: 0x802012E0 -> 0x80201368
void TRC::SaveData::EnumerateFiles(class SaveData * this /* r27 */, void (* fpCallback)(int result) /* r28 */, void * _callBackData /* r29 */) {
    {
        // Range: 0x802012FC -> 0x8020131C
        // Local variables
        int i; // r30
    }

    // References
    // -> bool shutdown;
}
// signature: TRC::SaveData::CheckSpace(char *, int, void (*)(int), void *)
// Range: 0x80201370 -> 0x80201410
void TRC::SaveData::CheckSpace(class SaveData * this /* r30 */, char * fileName /* r31 */) {
    // Local variables
    char homePath[64]; // r1+0x8
    int rv; // r0

    // References
    // -> bool shutdown;
}
// signature: TRC::SaveData::Write(char *, int, TRC::SaveDataHeader, void *, int, void (*)(int), void *)
// Range: 0x80201410 -> 0x8020157C
void TRC::SaveData::Write(class SaveData * this /* r31 */, char * fileName /* r28 */) {
    // Local variables
    char homePath[64]; // r1+0x28
    int rv; // r0

    // References
    // -> double secondsPerTick;
}
// signature: TRC::SaveData::Read(char *, TRC::SaveDataHeader, void *, int, void (*)(int), void *)
// Range: 0x80201580 -> 0x80201670
void TRC::SaveData::Read(class SaveData * this /* r29 */, char * fileName /* r30 */) {
    // Local variables
    char homePath[64]; // r1+0x8
    int rv; // r0

    // References
    // -> bool shutdown;
}
// signature: TRC::SaveData::Copy(char *, char *, void (*)(int))
// Range: 0x80201670 -> 0x8020175C
void TRC::SaveData::Copy(class SaveData * this /* r27 */, char * dest /* r28 */, char * src /* r29 */) {
    // Local variables
    char homePath[64]; // r1+0x8
    int rv; // r0
}
// Range: 0x80201760 -> 0x80201840
void TRC::SaveData::StoreCopy(class SaveData * this /* r29 */) {
    // References
    // -> double secondsPerTick;
}
// signature: TRC::SaveData::NANDEvalRetVal(int, bool)
// Range: 0x80201840 -> 0x80201C44
void TRC::SaveData::NANDEvalRetVal(class SaveData * this /* r30 */, bool needClose /* r31 */) {
    // References
    // -> static class MsgBoxManager sMsgBoxManager;
}
// signature: TRC::SaveData::CheckDataIntegrity(unsigned long, const void *, int)
// Range: 0x80201C50 -> 0x80201CB4
bool TRC::SaveData::CheckDataIntegrity(unsigned long testCRC /* r31 */) {
    // Local variables
    unsigned long calcCRC; // r3
}
// signature: TRC::SaveData::NAND07Done(TRC::eNAND07Result, void (*)(int))
// Range: 0x80201CC0 -> 0x80201CF4
void TRC::SaveData::NAND07Done() {
}
// signature: TRC::SaveFileExistsCB(long, NANDCommandBlock *)
// Range: 0x80201D00 -> 0x80201D6C
static void TRC::SaveFileExistsCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::SaveCheckFreeSpaceCB(long, NANDCommandBlock *)
// Range: 0x80201D70 -> 0x80201DAC
static void TRC::SaveCheckFreeSpaceCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::SaveCreateCB(long, NANDCommandBlock *)
// Range: 0x80201DB0 -> 0x80201DEC
static void TRC::SaveCreateCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::SaveOpenCB(long, NANDCommandBlock *)
// Range: 0x80201DF0 -> 0x80201E2C
static void TRC::SaveOpenCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::SaveWriteCB(long, NANDCommandBlock *)
// Range: 0x80201E30 -> 0x80201E9C
static void TRC::SaveWriteCB(long result /* r31 */) {
    // Local variables
    int * length; // r0

    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::SaveCloseCB(long, NANDCommandBlock *)
// Range: 0x80201EA0 -> 0x80201EDC
static void TRC::SaveCloseCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::LoadFileExistsCB(long, NANDCommandBlock *)
// Range: 0x80201EE0 -> 0x80201F44
static void TRC::LoadFileExistsCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::LoadOpenCB(long, NANDCommandBlock *)
// Range: 0x80201F50 -> 0x80201F8C
static void TRC::LoadOpenCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::LoadReadCB(long, NANDCommandBlock *)
// Range: 0x80201F90 -> 0x8020204C
static void TRC::LoadReadCB(long result /* r31 */) {
    {
        // Range: 0x80201FF0 -> 0x80202038
        // Local variables
        int * length; // r0
    }

    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::LoadCloseCB(long, NANDCommandBlock *)
// Range: 0x80202050 -> 0x8020208C
static void TRC::LoadCloseCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::ChkfreeFileExistsCB(long, NANDCommandBlock *)
// Range: 0x80202090 -> 0x80202130
static void TRC::ChkfreeFileExistsCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::ChkfreeSpaceCB(long, NANDCommandBlock *)
// Range: 0x80202130 -> 0x8020216C
static void TRC::ChkfreeSpaceCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::CancelCB(long, NANDCommandBlock *)
// Range: 0x80202170 -> 0x802021AC
static void TRC::CancelCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::EnumFileExistsCB(long, NANDCommandBlock *)
// Range: 0x802021B0 -> 0x80202214
static void TRC::EnumFileExistsCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::EnumOpenCB(long, NANDCommandBlock *)
// Range: 0x80202220 -> 0x8020225C
static void TRC::EnumOpenCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::EnumReadCB(long, NANDCommandBlock *)
// Range: 0x80202260 -> 0x8020229C
static void TRC::EnumReadCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::EnumCloseCB(long, NANDCommandBlock *)
// Range: 0x802022A0 -> 0x802022DC
static void TRC::EnumCloseCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::BootupNewSaveFileExistsCB(long, NANDCommandBlock *)
// Range: 0x802022E0 -> 0x80202344
static void TRC::BootupNewSaveFileExistsCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::BootupNewSaveCreateCB(long, NANDCommandBlock *)
// Range: 0x80202350 -> 0x8020238C
static void TRC::BootupNewSaveCreateCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::BootupNewSaveOpenCB(long, NANDCommandBlock *)
// Range: 0x80202390 -> 0x802023CC
static void TRC::BootupNewSaveOpenCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::BootupNewSaveWriteCB(long, NANDCommandBlock *)
// Range: 0x802023D0 -> 0x8020243C
static void TRC::BootupNewSaveWriteCB(long result /* r31 */) {
    // Local variables
    int * length; // r0

    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::BootupNewSaveCloseCB(long, NANDCommandBlock *)
// Range: 0x80202440 -> 0x8020247C
static void TRC::BootupNewSaveCloseCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::BootupFileExistsCB(long, NANDCommandBlock *)
// Range: 0x80202480 -> 0x802024E0
static void TRC::BootupFileExistsCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::BootupCheckFreeSpaceCB(long, NANDCommandBlock *)
// Range: 0x802024E0 -> 0x8020251C
static void TRC::BootupCheckFreeSpaceCB() {
    // References
    // -> class SaveData g_saveData;
}
// Range: 0x80202520 -> 0x80202538
bool TRC::IsSaveSystemBusy() {
    // References
    // -> class SaveData g_saveData;
}
