/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\TRC\Wii\SaveDataWii.cpp
*/
class SaveData g_saveData; // size: 0x2D0, address: 0x80852CA8
// Range: 0x8035B184 -> 0x8035B2D8
void * TRC::SaveData::SaveData(class SaveData * this /* r29 */) {
    // Local variables
    int rv; // r0

    // References
    // -> struct {} __vt__Q23TRC15SaveErrorMsgBox;
}
// signature: TRC::SaveData::SetupImages(const unsigned long long, const unsigned long long *)
// Range: 0x8035BBE8 -> 0x8035BD64
void TRC::SaveData::SetupImages(class SaveData * this /* r30 */, unsigned long long * saveIconIDList /* r31 */) {
    // Local variables
    class TextureResourceEntity * texEnt; // r0
    void * physicalAddr; // r0
    unsigned long long saveIconID; // r6:r7

    {
        // Range: 0x8035BCA4 -> 0x8035BD4C
        // Local variables
        int i; // r0
    }

    // References
    // -> class EmbeddedTreeAVL g_handleSortedTree;
}
// Range: 0x8035BD64 -> 0x8035BDBC
void TRC::SaveData::ForceNextSave(class SaveData * this /* r31 */) {
    // References
    // -> double secondsPerTick;
}
// signature: TRC::SaveData::Update(float)
// Range: 0x8035BDBC -> 0x8035D0E0
void TRC::SaveData::Update(class SaveData * this /* r29 */) {
    {
        // Range: 0x8035BDFC -> 0x8035D0B8
        // Local variables
        int rv; // r0

        {
            // Range: 0x8035BE88 -> 0x8035BF14
            // Local variables
            char * fileName; // r7
            int rv; // r0
            char homePath[64]; // r31+0x1E0
        }
        {
            // Range: 0x8035BF34 -> 0x8035BFB8
            // Local variables
            unsigned long numBlocks; // r0
        }
        {
            // Range: 0x8035BFC0 -> 0x8035C128
            // Local variables
            char * fileName; // r7
            int rv; // r0
            char homePath[64]; // r31+0x1A0
        }
        {
            // Range: 0x8035C1F0 -> 0x8035C3D0
            // Local variables
            long srcLen; // r31+0x8
            long dstLen; // r31+0xC
            unsigned short bannerComment[32]; // r31+0x120
            unsigned short bannerTitle[32]; // r31+0x160
            class NANDBanner banner; // r31-0x1E138

            {
                // Range: 0x8035C33C -> 0x8035C368
                // Local variables
                int i; // r0
            }
        }
        {
            // Range: 0x8035C4B4 -> 0x8035C530
            // Local variables
            int rv; // r0
            char homePath[64]; // r31+0xE0
        }
        {
            // Range: 0x8035C654 -> 0x8035C6F0
            // Local variables
            unsigned long numBlocks; // r0
        }
        {
            // Range: 0x8035C8D4 -> 0x8035CA60
            // Local variables
            unsigned short bannerComment[32]; // r31+0x60
            unsigned short bannerTitle[32]; // r31+0xA0
            class NANDBanner banner; // r31-0xF098

            {
                // Range: 0x8035C9CC -> 0x8035C9F8
                // Local variables
                int i; // r0
            }
        }
        {
            // Range: 0x8035CE88 -> 0x8035CF24
            // Local variables
            unsigned long numBlocks; // r0
        }
    }

    // References
    // -> long long startupTicks;
    // -> double secondsPerTick;
    // -> class SaveData g_saveData;
    // -> class Module * trcModule;
    // -> static class MsgBoxManager sMsgBoxManager;
}
// signature: TRC::SaveData::StartBootupCheck(void (*)(int))
// Range: 0x8035D0E0 -> 0x8035D268
void TRC::SaveData::StartBootupCheck(class SaveData * this /* r29 */) {
    // Local variables
    char homePath[64]; // r1+0x28
    int rv; // r0

    {
        // Range: 0x8035D0E8 -> 0x8035D178
        // Local variables
        int i; // r6
    }

    // References
    // -> bool shutdown;
    // -> long long startupTicks;
}
// signature: TRC::SaveData::Write(char *, int, TRC::SaveDataHeader, void *, int, void (*)(int), void *)
// Range: 0x8035D268 -> 0x8035D48C
void TRC::SaveData::Write(class SaveData * this /* r29 */, char * fileName /* r30 */) {
    // Local variables
    char homePath[64]; // r1+0x58
    int rv; // r0

    // References
    // -> long long startupTicks;
    // -> double secondsPerTick;
}
// signature: TRC::SaveData::Read(char *, TRC::SaveDataHeader, void *, int, void (*)(int), void *)
// Range: 0x8035D48C -> 0x8035D5A0
void TRC::SaveData::Read(class SaveData * this /* r26 */, char * fileName /* r27 */) {
    // Local variables
    char homePath[64]; // r1+0x8
    int rv; // r0

    // References
    // -> bool shutdown;
}
// signature: TRC::SaveData::SetNextState(TRC::sSaveDataRequest)
// Range: 0x8035D5A0 -> 0x8035D5B0
void TRC::SaveData::SetNextState() {
}
// signature: TRC::SaveData::NANDEvalRetVal(int, bool)
// Range: 0x8035D5B0 -> 0x8035D9BC
void TRC::SaveData::NANDEvalRetVal(class SaveData * this /* r30 */, bool needClose /* r31 */) {
    // References
    // -> static class MsgBoxManager sMsgBoxManager;
}
// signature: TRC::SaveFileExistsCB(long, NANDCommandBlock *)
// Range: 0x8035D9BC -> 0x8035DA28
static void TRC::SaveFileExistsCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::SaveCheckFreeSpaceCB(long, NANDCommandBlock *)
// Range: 0x8035DA28 -> 0x8035DA64
static void TRC::SaveCheckFreeSpaceCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::SaveCreateCB(long, NANDCommandBlock *)
// Range: 0x8035DA64 -> 0x8035DAA0
static void TRC::SaveCreateCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::SaveOpenCB(long, NANDCommandBlock *)
// Range: 0x8035DAA0 -> 0x8035DADC
static void TRC::SaveOpenCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::SaveWriteCB(long, NANDCommandBlock *)
// Range: 0x8035DADC -> 0x8035DB48
static void TRC::SaveWriteCB(long result /* r31 */) {
    // Local variables
    int * length; // r0

    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::SaveCloseCB(long, NANDCommandBlock *)
// Range: 0x8035DB48 -> 0x8035DB84
static void TRC::SaveCloseCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::LoadFileExistsCB(long, NANDCommandBlock *)
// Range: 0x8035DB84 -> 0x8035DBE8
static void TRC::LoadFileExistsCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::LoadOpenCB(long, NANDCommandBlock *)
// Range: 0x8035DBE8 -> 0x8035DC24
static void TRC::LoadOpenCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::LoadReadCB(long, NANDCommandBlock *)
// Range: 0x8035DC24 -> 0x8035DCE0
static void TRC::LoadReadCB(long result /* r31 */) {
    {
        // Range: 0x8035DC84 -> 0x8035DCCC
        // Local variables
        int * length; // r0
    }

    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::LoadCloseCB(long, NANDCommandBlock *)
// Range: 0x8035DCE0 -> 0x8035DD1C
static void TRC::LoadCloseCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::ChkfreeFileExistsCB(long, NANDCommandBlock *)
// Range: 0x8035DD1C -> 0x8035DDA0
static void TRC::ChkfreeFileExistsCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::ChkfreeSpaceCB(long, NANDCommandBlock *)
// Range: 0x8035DDA0 -> 0x8035DDDC
static void TRC::ChkfreeSpaceCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::CancelCB(long, NANDCommandBlock *)
// Range: 0x8035DDDC -> 0x8035DE18
static void TRC::CancelCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::EnumFileExistsCB(long, NANDCommandBlock *)
// Range: 0x8035DE18 -> 0x8035DE7C
static void TRC::EnumFileExistsCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::EnumOpenCB(long, NANDCommandBlock *)
// Range: 0x8035DE7C -> 0x8035DEB8
static void TRC::EnumOpenCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::EnumReadCB(long, NANDCommandBlock *)
// Range: 0x8035DEB8 -> 0x8035DEF4
static void TRC::EnumReadCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::EnumCloseCB(long, NANDCommandBlock *)
// Range: 0x8035DEF4 -> 0x8035DF30
static void TRC::EnumCloseCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::BootupNewSaveFileExistsCB(long, NANDCommandBlock *)
// Range: 0x8035DF30 -> 0x8035DF94
static void TRC::BootupNewSaveFileExistsCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::BootupNewSaveCreateCB(long, NANDCommandBlock *)
// Range: 0x8035DF94 -> 0x8035DFD0
static void TRC::BootupNewSaveCreateCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::BootupNewSaveOpenCB(long, NANDCommandBlock *)
// Range: 0x8035DFD0 -> 0x8035E00C
static void TRC::BootupNewSaveOpenCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::BootupNewSaveWriteCB(long, NANDCommandBlock *)
// Range: 0x8035E00C -> 0x8035E078
static void TRC::BootupNewSaveWriteCB(long result /* r31 */) {
    // Local variables
    int * length; // r0

    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::BootupNewSaveCloseCB(long, NANDCommandBlock *)
// Range: 0x8035E078 -> 0x8035E0B4
static void TRC::BootupNewSaveCloseCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::BootupFileExistsCB(long, NANDCommandBlock *)
// Range: 0x8035E0B4 -> 0x8035E114
static void TRC::BootupFileExistsCB() {
    // References
    // -> class SaveData g_saveData;
}
// signature: TRC::BootupCheckFreeSpaceCB(long, NANDCommandBlock *)
// Range: 0x8035E114 -> 0x8035E150
static void TRC::BootupCheckFreeSpaceCB() {
    // References
    // -> class SaveData g_saveData;
}
// Range: 0x8035E154 -> 0x8035E170
bool TRC::IsSaveSystemBusy() {
    // References
    // -> class SaveData g_saveData;
}
