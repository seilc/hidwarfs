/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\AssetManager\Loader\LoadHelpers.cpp
*/
// signature: Loader::@unnamed@WAD00_cpp@::CheckIsOk(IO::MediaFile *)
// Range: 0x801B0430 -> 0x801B045C
static bool Loader::@unnamed@WAD00_cpp@::CheckIsOk() {
    // Local variables
    enum enOpStatus opStat; // r0
}
// signature: Loader::WholeFile::Init(Domains::enVolIdx, IO::MediaFile *, Domains::MemCallbacks *, Loader::LoadErrorCB *)
// Range: 0x801B01D0 -> 0x801B01F0
void Loader::WholeFile::Init() {
}
// signature: Loader::WholeFile::GetLoaded(int *)
// Range: 0x801B01F0 -> 0x801B020C
class MemHandle * Loader::WholeFile::GetLoaded(class WholeFile * this /* r6 */) {
    // Local variables
    class MemHandle * mh; // r0
}
// Range: 0x801B0210 -> 0x801B0428
bool Loader::WholeFile::Update(class WholeFile * this /* r31 */) {
    {
        // Range: 0x801B028C -> 0x801B02D8
        // Local variables
        bool isOK; // r0
    }
    {
        // Range: 0x801B02DC -> 0x801B032C
        // Local variables
        int bufSize; // r29
    }
    {
        // Range: 0x801B0330 -> 0x801B037C
        // Local variables
        bool isOK; // r0
    }
    {
        // Range: 0x801B0394 -> 0x801B03E0
        // Local variables
        bool isOK; // r0
    }
}
// signature: Loader::ExtractMastST::Init(Domains::enVolIdx, IO::MediaFile *, Domains::MemCallbacks *, Loader::LoadErrorCB *)
// Range: 0x801B04F0 -> 0x801B0520
void Loader::ExtractMastST::Init() {
}
// Range: 0x801B0520 -> 0x801B0570
void Loader::ExtractMastST::Done(class ExtractMastST * this /* r31 */) {
}
// Range: 0x801B0570 -> 0x801B08A4
bool Loader::ExtractMastST::Update(class ExtractMastST * this /* r31 */) {
    {
        // Range: 0x801B05D0 -> 0x801B061C
        // Local variables
        bool isOK; // r0
    }
    {
        // Range: 0x801B065C -> 0x801B06C8
        // Local variables
        bool isOK; // r0
    }
    {
        // Range: 0x801B06E4 -> 0x801B0704
        // Local variables
        int startOffset; // r5
    }
    {
        // Range: 0x801B0708 -> 0x801B0754
        // Local variables
        bool isOK; // r0
    }
    {
        // Range: 0x801B075C -> 0x801B07A8
        // Local variables
        int loadSize; // r3
    }
    {
        // Range: 0x801B07AC -> 0x801B07F8
        // Local variables
        bool isOK; // r0
    }
    {
        // Range: 0x801B0810 -> 0x801B085C
        // Local variables
        bool isOK; // r0
    }
}
// signature: Loader::ExtractMastST::ExamineFINF(Domains::MemHandle *, Loader::PFInfo *)
// Range: 0x801B08B0 -> 0x801B08D4
void Loader::ExtractMastST::ExamineFINF() {
    // Local variables
    class FileHeader * finf; // r3
}
// signature: Loader::ExtractNormST::Init(Domains::enVolIdx, IO::MediaFile *, Domains::MemCallbacks *, Loader::LoadErrorCB *)
// Range: 0x801B08E0 -> 0x801B090C
void Loader::ExtractNormST::Init() {
}
// signature: Loader::ExtractNormST::Begin(const char *, int, int, int)
// Range: 0x801B0910 -> 0x801B0964
void Loader::ExtractNormST::Begin(class ExtractNormST * this /* r28 */, int tableOffset /* r29 */, int tableSize /* r30 */, int sectorSize /* r31 */) {
}
// Range: 0x801B0970 -> 0x801B0BF0
bool Loader::ExtractNormST::Update(class ExtractNormST * this /* r31 */) {
    {
        // Range: 0x801B09D0 -> 0x801B0A1C
        // Local variables
        bool isOK; // r0
    }
    {
        // Range: 0x801B0A54 -> 0x801B0AA0
        // Local variables
        bool isOK; // r0
    }
    {
        // Range: 0x801B0AA8 -> 0x801B0AF4
        // Local variables
        int loadSize; // r3
    }
    {
        // Range: 0x801B0AF8 -> 0x801B0B44
        // Local variables
        bool isOK; // r0
    }
    {
        // Range: 0x801B0B5C -> 0x801B0BA8
        // Local variables
        bool isOK; // r0
    }
}
