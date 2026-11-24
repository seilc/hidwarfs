/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\IO\File\Wii\DVDWrap.cpp
*/
struct {} __vt__Q22IO13NetworkModule; // size: 0x50, address: 0x807BFF60
struct {} __vt__Q22IO14MediaThreadLFS; // size: 0x10, address: 0x807BFFB0
struct {} __vt__Q22IO15MediaHandlerLFS; // size: 0x20, address: 0x807BFFC0
struct {} __vt__Q22IO14MediaModuleLFS; // size: 0x50, address: 0x807BFFE0
struct {} __vt__Q22IO11MediaModule; // size: 0x50, address: 0x807C0030
struct {} __vt__Q22IO12MediaHandler; // size: 0x20, address: 0x807C0080
struct {} __vt__Q22IO16ConsolePadDevice; // size: 0x18, address: 0x807C00A0
struct {} __vt__Q22IO22ConsolePadDeviceModule; // size: 0x50, address: 0x807C00B8
struct {} __vt__Q22IO9PadDevice; // size: 0x18, address: 0x807C0108
struct {} __vt__Q22IO9PadModule; // size: 0x50, address: 0x807C0120
struct {} __vt__Q28Graphics12StaticHolder; // size: 0x20, address: 0x807C0170
struct {} __vt__Q28Graphics21LineTransientGeometry; // size: 0x18, address: 0x807C0190
struct {} __vt__Q28Graphics13ShapeGeometry; // size: 0x18, address: 0x807C01A8
struct {} __vt__Q28Graphics12ShapeBuilder; // size: 0x54, address: 0x807C01C0
static struct {} __vt__Q219@unnamed@WAD01_cpp@11SceneModule; // size: 0x50, address: 0x807C0218
static struct {} __vt__Q219@unnamed@WAD01_cpp@13SamplerModule; // size: 0x50, address: 0x807C0268
struct {} __vt__Q28Graphics12SkinGeometry; // size: 0x18, address: 0x807C02B8
struct {} __vt__17SystemCacheModule; // size: 0x50, address: 0x807C02D0
struct {} __vt__Q28Graphics17ProjectShadowView; // size: 0x20, address: 0x807C0320
struct {} __vt__Q28Graphics18ProjectShadowSpace; // size: 0x18, address: 0x807C0340
static struct {} __vt__Q219@unnamed@WAD01_cpp@12EffectModule; // size: 0x50, address: 0x807C0380
struct {} __vt__Q28Graphics13GenericShader; // size: 0x2C, address: 0x807C03D0
static struct {} __vt__Q219@unnamed@WAD01_cpp@13DisplayModule; // size: 0x50, address: 0x807C0400
struct {} __vt__Q28Graphics15LightSectorData; // size: 0x14, address: 0x807C0450
struct {} __vt__Q28Graphics10ScreenView; // size: 0x20, address: 0x807C0468
struct {} __vt__Q28Graphics8Material; // size: 0x14, address: 0x807C04D8
struct {} __vt__Q28Graphics11PostProcess; // size: 0x14, address: 0x807C0508
struct {} __vt__Q28Graphics17BuildMemoryModule; // size: 0x50, address: 0x807C0520
struct {} __vt__Q28Graphics27DepthTextureRenderTargetWii; // size: 0x2C, address: 0x807C0570
struct {} __vt__Q28Graphics21ScreenRenderTargetWii; // size: 0x34, address: 0x807C059C
struct {} __vt__Q28Graphics22TextureRenderTargetWii; // size: 0x44, address: 0x807C05D0
struct {} __vt__Q28Graphics30DepthTextureRenderTargetCommon; // size: 0x2C, address: 0x807C0614
struct {} __vt__Q28Graphics24ScreenRenderTargetCommon; // size: 0x34, address: 0x807C0640
struct {} __vt__Q28Graphics25TextureRenderTargetCommon; // size: 0x44, address: 0x807C0674
struct {} __vt__Q28Graphics12RenderTarget; // size: 0x24, address: 0x807C06B8
struct {} __vt__Q28Graphics7Texture; // size: 0x14, address: 0x807C06DC
struct {} __vt__Q22IO10FileModule; // size: 0x50, address: 0x807C06F0
static struct {} __vt__Q219@unnamed@WAD01_cpp@13BuilderModule; // size: 0x50, address: 0x807C0740
struct {} __vt__Q28Graphics7Builder; // size: 0x54, address: 0x807C0790
struct {} __vt__Q28Graphics6Effect; // size: 0x14, address: 0x807C07F8
struct {} __vt__Q28Graphics15PrimitiveModule; // size: 0x50, address: 0x807C0810
struct {} __vt__Q28Graphics17RenderStateModule; // size: 0x50, address: 0x807C0860
struct {} __vt__Q28Graphics12RenderModule; // size: 0x50, address: 0x807C08C8
// signature: IO::FileHandleData::DvdCallback(long, DVDFileInfo *)
// Range: 0x80314D84 -> 0x80314D94
void IO::FileHandleData::DvdCallback() {
    // Local variables
    class FileHandleData * fhd; // r0
}
// Range: 0x80314D94 -> 0x80314E20
int IO::DVDWrap::Open(char * fileName /* r29 */, class FileHandleData * fileInfo /* r30 */) {
    // Local variables
    int openSuccess; // r31
}
// Range: 0x80314E20 -> 0x80314E9C
int IO::DVDWrap::Close(class FileHandleData * fileInfo /* r30 */) {
    // Local variables
    int closeSuccess; // r31
}
// signature: IO::DVDWrap::Read(IO::FileHandleData *, void *, long, long)
// Range: 0x80314E9C -> 0x80314F50
long IO::DVDWrap::Read(class FileHandleData * fileInfo /* r27 */) {
}
// signature: IO::DVDWrap::ReadPrio(IO::FileHandleData *, void *, long, long, long)
// Range: 0x80314F50 -> 0x8031500C
long IO::DVDWrap::ReadPrio(class FileHandleData * fileInfo /* r27 */) {
}
// signature: IO::DVDWrap::Seek(IO::FileHandleData *, long, bool)
// Range: 0x8031500C -> 0x803150E8
int IO::DVDWrap::Seek(class FileHandleData * fileInfo /* r26 */, long offset /* r27 */) {
    {
        // Range: 0x80315014 -> 0x803150CC
        // Local variables
        int resultStart; // r0
    }
}
// signature: IO::DVDWrap::ForceTestRead(const char *)
// Range: 0x803150E8 -> 0x80315144
void IO::DVDWrap::ForceTestRead() {
    // Local variables
    class DVDFileInfo fileInfo; // r1+0x8
}
// signature: IO::DVDWrap::ForceTestReadDelayedError(const char *)
// Range: 0x80315144 -> 0x803151A0
void IO::DVDWrap::ForceTestReadDelayedError() {
    // Local variables
    class DVDFileInfo fileInfo; // r1+0x8
}
