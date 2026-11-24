/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\AssetManager\Configs\ConfigMgr.cpp
*/
static class ConfigManager * configManager; // size: 0x4, address: 0x80774228
static char * defaultSectionName; // size: 0x4, address: 0x806C93E0
static class MemCB_INIData memCB_INIData; // size: 0x4, address: 0x8077422C
static class MemCB_HingeConfig memCB_HingeConfig; // size: 0x4, address: 0x80774230
// Range: 0x801C2150 -> 0x801C2338
static void __sinit_\WAD00_cpp() {
    // References
    // -> class RVLFaceLibEntity dummy;
    // -> class ModelInstanceArticlePool modelInstanceArticlePool;
    // -> static class ModuleRegistrator colorModReg;
    // -> static class BasicColorModule bascolormod;
    // -> static class ModuleRegistrator coordinatorModreg;
    // -> static class CoordinatorModule coordinatorMod;
    // -> static class MemCB_BorrowedMemory memCB_borrowedMemory;
    // -> static class MemCallbackList memCallbackList;
    // -> static class MemOwnerUnclaimed memOwnerUnclaimed;
    // -> static class ModuleRegistrator dynaMemModReg;
    // -> static class DynaMemModule dynaMemMod;
    // -> static class MemCB_SectTable memCB_sectTable;
    // -> static class MemCB_MetaRecord memCB_MetaRec;
    // -> static class ModuleRegistrator lsPoolModReg;
    // -> static class LSPoolModule lsPoolMod;
    // -> static class ModuleRegistrator mstQueryModReg;
    // -> static class MSTQueryModule mstQueryMod;
    // -> static class LoadMemOwner loadMemOwner;
    // -> static class ModuleRegistrator bootStrapModreg;
    // -> static class BootStrapModule bootStrapMod;
    // -> static class ModuleRegistrator domainModReg;
    // -> static class DomainModule domainMod;
    // -> static class MemCB_ParcelLoadAndParse memCB_parcelParsing;
    // -> static class MemCB_ParcelDATA memCB_parcelDATA;
    // -> static class MemCB_ParcelTOC memCB_ParcelTOC;
    // -> static class BlobMemCB blobMemCB;
    // -> static class Matrix43 _matIdentity;
    // -> static class Matrix43 _matZero;
    // -> static class QuaternionFormatter quaternionFormatter;
    // -> static class MemCB_HingeConfig memCB_HingeConfig;
    // -> static class MemCB_INIData memCB_INIData;
}
// Range: 0x801AC2B0 -> 0x801AC33C
static char * Configs::@unnamed@WAD00_cpp@::AllocString(char * str /* r29 */) {
    // Local variables
    int len; // r30

    {
        // Range: 0x801AC2CC -> 0x801AC2E0
        // Local variables
        char * ptr; // r3
    }
}
// signature: Configs::MemCB_INIData::Relocating(Domains::MemHandle *)
// Range: 0x801AC340 -> 0x801AC350
void Configs::MemCB_INIData::Relocating() {
}
// Range: 0x801AC350 -> 0x801AC394
void Configs::Shutdown() {
    // References
    // -> static class ConfigManager * configManager;
}
// Range: 0x801AC3A0 -> 0x801AC3B8
void * Configs::ConfigManager::ConfigManager() {
}
// Range: 0x801AC3C0 -> 0x801AC458
void Configs::ConfigManager::AddINIFile(class ConfigManager * this /* r27 */, char * iniName /* r28 */, class MemHandle * iniMemHandle /* r29 */, int iniSize /* r30 */) {
}
// Range: 0x801AC460 -> 0x801AC4C0
class INIFile * Configs::ConfigManager::FindINI(char * name /* r29 */) {
    // Local variables
    class INIFile * iniNode; // r30

    {
        // Range: 0x801AC474 -> 0x801AC4A8
        // Local variables
        int comp; // r0
    }
}
// Range: 0x801AC4C0 -> 0x801AC4DC
void * Configs::INIFile::INIFile() {
}
// signature: Configs::INIFile::Assign(const char *, Domains::MemHandle *, int)
// Range: 0x801AC4E0 -> 0x801AC538
void Configs::INIFile::Assign(class INIFile * this /* r29 */, class MemHandle * iniMemHandle /* r30 */, int iniMemSize /* r31 */) {
}
// Range: 0x801AC540 -> 0x801AC5B0
void Configs::ParseState::InitLineScan(class ParseState * this /* r29 */, char * bufferStart /* r30 */, int bufferSize /* r31 */) {
}
// signature: Configs::ParseState::BruteTerminate(char *, const int)
// Range: 0x801AC5B0 -> 0x801AC5F4
void Configs::ParseState::BruteTerminate() {
    // Local variables
    char * ptr; // r4

    {
        // Range: 0x801AC5B0 -> 0x801AC5F0
        // Local variables
        int i; // r0
    }
}
// signature: Configs::ParseState::GetCurrLine(char **)
// Range: 0x801AC600 -> 0x801AC618
char * Configs::ParseState::GetCurrLine() {
}
// Range: 0x801AC620 -> 0x801AC698
char * Configs::ParseState::GetNextLine() {
    // Local variables
    char * nextLine; // r4
    char * lastByte; // r5
}
// Range: 0x801AC6A0 -> 0x801AC734
void Configs::INIFile::Parse(class INIFile * this /* r29 */, char * rawINIData /* r30 */, int rawINISize /* r31 */) {
    // Local variables
    class INISection * currSect; // r0
    class ParseState parseState; // r1+0x8
    char * currLine; // r5

    // References
    // -> static char * defaultSectionName;
}
// signature: Configs::@unnamed@WAD00_cpp@::SkipWhitespace(char *)
// Range: 0x801AC740 -> 0x801AC78C
static char * Configs::@unnamed@WAD00_cpp@::SkipWhitespace() {
    // Local variables
    char * ptr; // r31
}
// Range: 0x801AC960 -> 0x801AC9D0
static void Configs::@unnamed@WAD00_cpp@::TrimWhitespace(char * text /* r29 */) {
    // Local variables
    char * ptr; // r30
}
// signature: Configs::INIFile::ProcessLine(Configs::ParseState *, char *)
// Range: 0x801AC790 -> 0x801AC954
void Configs::INIFile::ProcessLine(class INIFile * this /* r29 */, class ParseState * parseState /* r30 */) {
    // Local variables
    char * ptr; // r31

    {
        // Range: 0x801AC83C -> 0x801AC890
        // Local variables
        class INISection * nextSection; // r0
        char * ptrEndDef; // r4
        char * ptrSectName; // r3
    }
    {
        // Range: 0x801AC890 -> 0x801AC940
        // Local variables
        char * ptrValue; // r0
        char * ptrKey; // r31
        char * ptrEquals; // r3
    }
}
// Range: 0x801AC9D0 -> 0x801ACA78
class INISection * Configs::INIFile::AddSection(class INIFile * this /* r29 */, char * sectName /* r30 */) {
    // Local variables
    class INISection * sectData; // r0
}
// signature: Configs::INIFile::FindSection(const char *)
// Range: 0x801ACAB0 -> 0x801ACB10
class INISection * Configs::INIFile::FindSection(class INIFile * this /* r31 */) {
    // Local variables
    unsigned int hashID; // r0
    class INISection * sectNode; // r5
}
// Range: 0x801ACB10 -> 0x801ACB2C
void * Configs::INISection::INISection() {
}
// signature: Configs::INISection::FindEntry(const char *)
// Range: 0x801ACB30 -> 0x801ACB90
class INIEntry * Configs::INISection::FindEntry(class INISection * this /* r31 */) {
    // Local variables
    unsigned int hashID; // r0
    class INIEntry * entryNode; // r5
}
// Range: 0x801ACB90 -> 0x801ACC3C
void Configs::INISection::AddKeyValuePair(class INISection * this /* r28 */, char * key /* r29 */, char * value /* r30 */) {
}
// signature: Configs::INIAccess::FindINI(const char *)
// Range: 0x801ACC40 -> 0x801ACC9C
bool Configs::INIAccess::FindINI(class INIAccess * this /* r31 */) {
    // References
    // -> static char * defaultSectionName;
    // -> static class ConfigManager * configManager;
}
// signature: Configs::INIAccess::GotoSection(const char *)
// Range: 0x801ACCA0 -> 0x801ACCDC
bool Configs::INIAccess::GotoSection(class INIAccess * this /* r31 */) {
}
// signature: Configs::INIAccess::GetValue(const char *, const char *)
// Range: 0x801ACCE0 -> 0x801ACD24
char * Configs::INIAccess::GetValue(char * defVal /* r31 */) {
}
// signature: Configs::INIAccess::GetValueInt(const char *, int)
// Range: 0x801ACD30 -> 0x801ACD78
int Configs::INIAccess::GetValueInt(int defVal /* r31 */) {
}
