/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxLoader.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804DE8E0 -> 0x804DF638
*/
// total size: 0x14
class GSysFile : public GDelegatedFile {};
// total size: 0x14
class GDelegatedFile : public GFile {
    // Members
    class GPtr pFile; // offset 0x10, size 0x4
};
// total size: 0x20
class GFileStat {
    // Members
    long long CreateTime; // offset 0x0, size 0x8
    long long ModifyTime; // offset 0x8, size 0x8
    long long AccessTime; // offset 0x10, size 0x8
    long long FileSize; // offset 0x18, size 0x8
};
// total size: 0xC
class LocationInfo {
    // Members
    enum FileUse Use; // offset 0x0, size 0x4
    class GFxString FileName; // offset 0x4, size 0x4
    class GFxString ParentPath; // offset 0x8, size 0x4
};
enum FileUse {
    File_Regular = 0,
    File_Import = 1,
    File_ImageImport = 2,
    File_LoadMovie = 3,
    File_LoadVars = 4,
};
int GFx_Compile_with_GFC_BUILD_DEBUG; // size: 0x4, address: 0x808DEBF0
struct {} __vt__9GFxLoader; // size: 0x20, address: 0x80737EB0
struct {} __vt__15GFxParseControl; // size: 0xC, address: 0x80737ED0
struct {} __vt__15GFxImageCreator; // size: 0x10, address: 0x80737EE0
struct {} __vt__13GFxFileOpener; // size: 0x14, address: 0x80737EF0
// Range: 0x804DE8E0 -> 0x804DE9D8
class GFile * GFxFileOpener::OpenFile(char * purl /* r29 */) {
}
// signature: GFxFileOpener::GetFileModifyTime(const char *)
// Range: 0x804DE9E0 -> 0x804DEA20
long long GFxFileOpener::GetFileModifyTime() {
    // Local variables
    class GFileStat fileStat; // r1+0x8
}
// Range: 0x804DEA20 -> 0x804DEAEC
class GFile * GFxFileOpener::OpenFileEx(char * pfilename /* r29 */, class GFxLog * plog /* r30 */) {
    // Local variables
    class GFile * pin; // r31
    int errCode; // r0
}
// Range: 0x804DEAF0 -> 0x804DEBB4
void GFxURLBuilder::DefaultBuildURL(class GFxString * ppath /* r29 */, class LocationInfo & loc /* r30 */) {
    {
        // Range: 0x804DEB24 -> 0x804DEB98
        {
            // Range: 0x804DEB40 -> 0x804DEB88
            // Local variables
            unsigned long cend; // r0
        }
    }
}
// Range: 0x804DEBC0 -> 0x804DEC6C
bool GFxURLBuilder::IsPathAbsolute(char * putf8str /* r1+0x8 */) {
    // Local variables
    unsigned long charVal; // r0
}
// Range: 0x804DEC70 -> 0x804DED28
bool GFxURLBuilder::ExtractFilePath(class GFxString * ppath /* r30 */) {
    // Local variables
    long length; // r0
    long i; // r31

    {
        // Range: 0x804DEC94 -> 0x804DECFC
        // Local variables
        unsigned long charVal; // r0
    }
}
// Range: 0x804DED30 -> 0x804DF1A4
class GImageInfoBase * GFxImageCreator::CreateImage(class GFxImageCreator * this /* r26 */, class GFxImageCreateInfo & info /* r27 */) {
    // Local variables
    unsigned int twidth; // r31
    unsigned int theight; // r30
}
// signature: GFxImageCreator::LoadBuiltinImage(GFile *, GFxFileConstants::FileFormatType, GFxResource::ResourceUse)
// Range: 0x804DF1B0 -> 0x804DF220
class GImage * GFxImageCreator::LoadBuiltinImage() {
    // Local variables
    class GImage * pimage; // r0
}
// Range: 0x804DF220 -> 0x804DF3B0
void * GFxLoader::GFxLoader(class GFxLoader * this /* r30 */, class GFxFileOpener * pfileOpener /* r29 */, unsigned char verboseParseFlags /* r31 */) {
    // References
    // -> struct {} __vt__15GFxParseControl;
    // -> struct {} __vt__8GFxState;
    // -> struct {} __vt__9GFxLoader;
}
// Range: 0x804DF3B0 -> 0x804DF450
void * GFxLoader::~GFxLoader(class GFxLoader * this /* r30 */) {
    // References
    // -> struct {} __vt__9GFxLoader;
}
// Range: 0x804DF450 -> 0x804DF464
class GFxSharedState * GFxLoader::GetSharedImpl() const {
}
// signature: GFxLoader::CheckTagLoader(int) const
// Range: 0x804DF470 -> 0x804DF4E8
bool GFxLoader::CheckTagLoader() const {
    // References
    // -> void (* GFx_GFX_TagLoaderTable[5])(class GFxLoadProcess *, class GFxTagInfo &);
    // -> void (* GFx_SWF_TagLoaderTable[85])(class GFxLoadProcess *, class GFxTagInfo &);
}
// signature: GFxLoader::CreateMovie(const char *, unsigned int)
// Range: 0x804DF4F0 -> 0x804DF524
class GFxMovieDef * GFxLoader::CreateMovie() {
}
