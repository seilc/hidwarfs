/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\IO\File\Wii\DVDWrap.cpp
*/
struct {} __vt__Q22IO21VirtualKeyboardModule; // size: 0x50, address: 0x806CE028
struct {} __vt__Q22IO14MediaThreadLFS; // size: 0x10, address: 0x806CE078
struct {} __vt__Q22IO15MediaHandlerLFS; // size: 0x20, address: 0x806CE088
struct {} __vt__Q22IO14MediaModuleLFS; // size: 0x50, address: 0x806CE0A8
struct {} __vt__Q22IO11MediaModule; // size: 0x50, address: 0x806CE0F8
struct {} __vt__Q22IO12MediaHandler; // size: 0x20, address: 0x806CE148
struct {} __vt__Q22IO16ConsolePadDevice; // size: 0x18, address: 0x806CE168
struct {} __vt__Q22IO22ConsolePadDeviceModule; // size: 0x50, address: 0x806CE180
struct {} __vt__Q22IO9PadModule; // size: 0x50, address: 0x806CE1D0
static struct {} __vt__Q219@unnamed@WAD01_cpp@11SceneModule; // size: 0x50, address: 0x806CE220
static struct {} __vt__Q219@unnamed@WAD01_cpp@13SamplerModule; // size: 0x50, address: 0x806CE270
struct {} __vt__17SystemCacheModule; // size: 0x50, address: 0x806CE2C0
static struct {} __vt__Q219@unnamed@WAD01_cpp@12EffectModule; // size: 0x50, address: 0x806CE310
struct {} __vt__Q28Graphics13GenericShader; // size: 0x2C, address: 0x806CE360
static struct {} __vt__Q219@unnamed@WAD01_cpp@13DisplayModule; // size: 0x50, address: 0x806CE390
struct {} __vt__Q28Graphics11PostProcess; // size: 0x14, address: 0x806CE3E0
struct {} __vt__Q28Graphics12SkinGeometry; // size: 0x18, address: 0x806CE3F8
struct {} __vt__Q28Graphics15LightSectorData; // size: 0x14, address: 0x806CE410
struct {} __vt__Q28Graphics10ScreenView; // size: 0x20, address: 0x806CE428
struct {} __vt__Q28Graphics8Material; // size: 0x14, address: 0x806CE448
struct {} __vt__Q28Graphics17BuildMemoryModule; // size: 0x50, address: 0x806CE460
struct {} __vt__Q28Graphics21ScreenRenderTargetWii; // size: 0x34, address: 0x806CE4B0
struct {} __vt__Q28Graphics22TextureRenderTargetWii; // size: 0x44, address: 0x806CE4E4
struct {} __vt__Q28Graphics25TextureRenderTargetCommon; // size: 0x44, address: 0x806CE528
struct {} __vt__Q28Graphics12RenderTarget; // size: 0x24, address: 0x806CE56C
struct {} __vt__Q28Graphics7Texture; // size: 0x14, address: 0x806CE590
struct {} __vt__Q22IO10FileModule; // size: 0x50, address: 0x806CE5A8
static struct {} __vt__Q219@unnamed@WAD01_cpp@13BuilderModule; // size: 0x50, address: 0x806CE5F8
struct {} __vt__Q28Graphics7Builder; // size: 0x4C, address: 0x806CE648
struct {} __vt__Q28Graphics6Effect; // size: 0x14, address: 0x806CE694
struct {} __vt__Q28Graphics15PrimitiveModule; // size: 0x50, address: 0x806CE6A8
struct {} __vt__Q28Graphics17RenderStateModule; // size: 0x50, address: 0x806CE6F8
struct {} __vt__Q28Graphics12RenderModule; // size: 0x50, address: 0x806CE748
// signature: IO::FileHandleData::DvdCallback(long, DVDFileInfo *)
// Range: 0x801E3840 -> 0x801E3850
void IO::FileHandleData::DvdCallback() {
    // Local variables
    class FileHandleData * fhd; // r0
}
// Range: 0x801E3850 -> 0x801E38E0
long IO::FileHandleData::WaitForCallback(class FileHandleData * this /* r27 */) {
}
// Range: 0x801E38E0 -> 0x801E3970
int IO::DVDWrap::Open(char * fileName /* r29 */, class FileHandleData * fileInfo /* r30 */) {
    // Local variables
    int openSuccess; // r31
}
// Range: 0x801E3970 -> 0x801E39F0
int IO::DVDWrap::Close(class FileHandleData * fileInfo /* r30 */) {
    // Local variables
    int closeSuccess; // r31
}
// Range: 0x801E39F0 -> 0x801E3A6C
long IO::DVDWrap::Read(class FileHandleData * fileInfo /* r28 */, void * addr /* r29 */, long length /* r30 */, long offset /* r31 */) {
    // Local variables
    long result; // r0
}
// Range: 0x801E3A70 -> 0x801E3AF8
long IO::DVDWrap::ReadPrio(class FileHandleData * fileInfo /* r27 */, void * addr /* r28 */, long length /* r29 */, long offset /* r30 */, long prio /* r31 */) {
    // Local variables
    long readResult; // r3
}
// Range: 0x801E3B00 -> 0x801E3B94
int IO::DVDWrap::Seek(class FileHandleData * fileInfo /* r29 */, long offset /* r30 */, bool moveLaser /* r31 */) {
    {
        // Range: 0x801E3B30 -> 0x801E3B78
        // Local variables
        long result; // r0
        int resultStart; // r0
    }
}
// Range: 0x801E3BA0 -> 0x801E3C18
void IO::DVDWrap::ForceTestRead(char * fileName /* r31 */) {
    // Local variables
    class DVDFileInfo fileInfo; // r1+0x8
}
// Range: 0x801E3C20 -> 0x801E3C98
void IO::DVDWrap::ForceTestReadDelayedError(char * fileName /* r31 */) {
    // Local variables
    class DVDFileInfo fileInfo; // r1+0x8
}
