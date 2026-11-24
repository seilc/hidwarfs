/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\AssetManager\Configs\ConfigMgr.cpp
*/
static class ConfigManager * configManager; // size: 0x4, address: 0x80845AA8
static char * defaultSectionName; // size: 0x4, address: 0x807BD160
static class MemCB_INIData memCB_INIData; // size: 0x4, address: 0x80845AAC
static class MemCB_HingeConfig memCB_HingeConfig; // size: 0x4, address: 0x80845AB0
// Range: 0x802E6534 -> 0x802E6834
static void __sinit_\WAD00_cpp() {
    // References
    // -> static class ModuleRegistrator colorModReg;
    // -> static struct {} __vt__Q219@unnamed@WAD00_cpp@16BasicColorModule;
    // -> static class BasicColorModule bascolormod;
    // -> static class ModuleRegistrator coordinatorModreg;
    // -> struct {} __vt__Q28Overseer17CoordinatorModule;
    // -> static class MemCB_BorrowedMemory memCB_borrowedMemory;
    // -> static class MemOwnerUnclaimed memOwnerUnclaimed;
    // -> static class CoordinatorModule coordinatorMod;
    // -> struct {} __vt__Q27Domains20MemCB_BorrowedMemory;
    // -> struct {} __vt__Q27Domains17MemOwnerUnclaimed;
    // -> static class MemCallbackList memCallbackList;
    // -> static class ModuleRegistrator dynaMemModReg;
    // -> struct {} __vt__Q27Domains13DynaMemModule;
    // -> static class MemCB_SectTable memCB_sectTable;
    // -> static class DynaMemModule dynaMemMod;
    // -> static class MemCB_MetaRecord memCB_MetaRec;
    // -> struct {} __vt__Q26Loader15MemCB_SectTable;
    // -> struct {} __vt__Q26Loader16MemCB_MetaRecord;
    // -> static class ModuleRegistrator lsPoolModReg;
    // -> struct {} __vt__Q26Loader12LSPoolModule;
    // -> static class LSPoolModule lsPoolMod;
    // -> static class ModuleRegistrator mstQueryModReg;
    // -> struct {} __vt__Q26Loader14MSTQueryModule;
    // -> static class LoadMemOwner loadMemOwner;
    // -> static class MSTQueryModule mstQueryMod;
    // -> struct {} __vt__Q26Loader12LoadMemOwner;
    // -> static class ModuleRegistrator bootStrapModreg;
    // -> struct {} __vt__Q26Loader15BootStrapModule;
    // -> static class BootStrapModule bootStrapMod;
    // -> static class ModuleRegistrator domainModReg;
    // -> struct {} __vt__Q27Domains12DomainModule;
    // -> static class MemCB_ParcelLoadAndParse memCB_parcelParsing;
    // -> static class MemCB_ParcelDATA memCB_parcelDATA;
    // -> static class MemCB_ParcelTOC memCB_ParcelTOC;
    // -> static class BlobMemCB blobMemCB;
    // -> static class QuaternionFormatter quaternionFormatter;
    // -> static class MemCB_HingeConfig memCB_HingeConfig;
    // -> static class DomainModule domainMod;
    // -> static class MemCB_INIData memCB_INIData;
    // -> static struct {} __vt__Q37Domains19@unnamed@WAD00_cpp@15MemCB_ParcelTOC;
    // -> struct {} __vt__Q27Configs17MemCB_HingeConfig;
    // -> struct {} __vt__Q27Configs13MemCB_INIData;
    // -> struct {} __vt__Q27Domains24MemCB_ParcelLoadAndParse;
    // -> static struct {} __vt__Q37Domains19@unnamed@WAD00_cpp@16MemCB_ParcelDATA;
    // -> struct {} __vt__Q27Domains9BlobMemCB;
    // -> struct {} __vt__Q25Debug19QuaternionFormatter;
    // -> static class Matrix43 _matIdentity;
    // -> static class Matrix43 _matZero;
}
// signature: Configs::MemCB_INIData::Relocating(Domains::MemHandle *)
// Range: 0x802CCB04 -> 0x802CCB14
void Configs::MemCB_INIData::Relocating() {
}
// Range: 0x802CCB18 -> 0x802CCB90
char * Configs::ParseState::GetNextLine() {
    // Local variables
    char * nextLine; // r4
    char * lastByte; // r5
}
// signature: Configs::@unnamed@WAD00_cpp@::ChopToWordEnd(char *)
// Range: 0x802CCB90 -> 0x802CCC34
static char * Configs::@unnamed@WAD00_cpp@::ChopToWordEnd() {
    {
        // Range: 0x802CCB90 -> 0x802CCBD0
        // Local variables
        char * ptr; // r4
    }
    {
        // Range: 0x802CCBD0 -> 0x802CCC30
        // Local variables
        char * ptr; // r6
    }

    // References
    // -> class __locale _current_locale;
}
// signature: Configs::INIFile::ProcessLine(Configs::ParseState *, char *)
// Range: 0x802CCC34 -> 0x802CD350
void Configs::INIFile::ProcessLine(class INIFile * this /* r28 */, class ParseState * parseState /* r30 */) {
    {
        // Range: 0x802CCDA8 -> 0x802CCFF8
        // Local variables
        char * ptrEndDef; // r5
        char * ptrSectName; // r29
    }
    {
        // Range: 0x802CCFF8 -> 0x802CD33C
        // Local variables
        char * ptrValue; // r0
        char * ptrEquals; // r4
    }

    // References
    // -> class __locale _current_locale;
}
