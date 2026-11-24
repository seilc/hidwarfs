/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxLoadProcess.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804E56A0 -> 0x804E84A8
*/
// total size: 0x4
class GJPEGInput : public GNewOverrideBase {};
// total size: 0x4
class GFxImageFileResourceCreator : public DataInterface {};
// total size: 0x4
class GFxImageResourceCreator : public DataInterface {};
static class GFxImageFileResourceCreator inst; // size: 0x4, address: 0x808DEBFC
static class GFxImageResourceCreator inst; // size: 0x4, address: 0x808DEC04
struct {} __vt__23GFxImageResourceCreator; // size: 0x18, address: 0x807387E8
struct {} __vt__27GFxImageFileResourceCreator; // size: 0x18, address: 0x80738800
struct {} __vt__14GFxLoadProcess; // size: 0x1C, address: 0x80738818
struct {} __vt__13GFxLoadStates; // size: 0xC, address: 0x80738834
struct {} __vt__21GFxMovieDefBindStates; // size: 0xC, address: 0x80738840
struct {} __vt__38GRefCountBase<21GFxMovieDefBindStates>; // size: 0xC, address: 0x8073884C
struct {} __vt__16GFxImageFileInfo; // size: 0xC, address: 0x80738858
struct {} __vt__19GFxResourceFileInfo; // size: 0xC, address: 0x80738864
// Range: 0x804E56A0 -> 0x804E5EEC
void * GFxLoadStates::GFxLoadStates(class GFxLoadStates * this /* r28 */, class GFxLoaderImpl * pimpl /* r31 */, class GFxSharedState * pstates /* r29 */, class GFxMovieDefBindStates * pbindStates /* r30 */) {
    // References
    // -> enum StateType stateQuery[9];
    // -> struct {} __vt__21GFxMovieDefBindStates;
    // -> struct {} __vt__13GFxLoadStates;
}
// signature: GFxLoadStates::GetLoadTimeImageCreator(unsigned int) const
// Range: 0x804E64D0 -> 0x804E6504
class GFxImageCreator * GFxLoadStates::GetLoadTimeImageCreator() const {
    // Local variables
    class GFxImageCreator * pkeyImageCreator; // r4
}
// signature: GFxLoadStates::OpenFile(const char *)
// Range: 0x804E6510 -> 0x804E6574
class GFile * GFxLoadStates::OpenFile() {
}
// signature: GFxLoadStates::BuildURL(GFxString *, const GFxURLBuilder::LocationInfo &) const
// Range: 0x804E6580 -> 0x804E65AC
void GFxLoadStates::BuildURL() const {
}
// Range: 0x804E65B0 -> 0x804E6BF4
class GFxLoadStates * GFxLoadStates::CloneForImport(class GFxLoadStates * this /* r29 */) const {
    // References
    // -> struct {} __vt__13GFxLoadStates;
    // -> struct {} __vt__21GFxMovieDefBindStates;
}
// Range: 0x804E6C00 -> 0x804E6D74
void * GFxLoadProcess::GFxLoadProcess(class GFxLoadProcess * this /* r30 */, class GFxLoadStates * pstates /* r27 */, unsigned int loadFlags /* r31 */) {
    // References
    // -> struct {} __vt__14GFxLoadProcess;
}
// Range: 0x804E6E50 -> 0x804E7070
void * GFxLoadProcess::~GFxLoadProcess(class GFxLoadProcess * this /* r30 */) {
    // References
    // -> struct {} __vt__14GFxLoadProcess;
}
// signature: GFxLoadProcess::ReadRgbaTag(GColor *, GFxTagType)
// Range: 0x804E7070 -> 0x804E7088
void GFxLoadProcess::ReadRgbaTag() {
}
// signature: GFxLoadProcess::TagArrayToFrame(std::garray<GASExecuteTag *> &)
// Range: 0x804E7090 -> 0x804E718C
class Frame GFxLoadProcess::TagArrayToFrame(class Frame * frame /* r29 */, class garray & tagArray /* r31 */) {
    {
        // Range: 0x804E70C0 -> 0x804E7170
        // Local variables
        unsigned long memSize; // r30
    }
}
// signature: GFxLoadProcess::AddImageResource(GFxResourceId, GImage *)
// Range: 0x804E7190 -> 0x804E73E4
void GFxLoadProcess::AddImageResource(class GFxLoadProcess * this /* r30 */, class GFxResourceId & rid /* r31 */) {
    {
        // Range: 0x804E71E8 -> 0x804E732C
        // Local variables
        class GFxImageCreateInfo icreateInfo; // r1+0x20
    }
    {
        // Range: 0x804E732C -> 0x804E73A8
        // Local variables
        class GFxResourceData rdata; // r1+0x18
    }

    // References
    // -> struct {} __vt__16GFxImageResource;
}
// Range: 0x804E7440 -> 0x804E7AC0
bool GFxImageFileResourceCreator::CreateResource(void * hdata /* r27 */, class GFxResourceBindData * pbindData /* r28 */, class GFxLoadStates * pls /* r29 */) const {
    // Local variables
    class GFxImageFileInfo * prfi; // r0
    class LocationInfo loc; // r1+0x20
    class GFxResourceKey imageKey; // r1+0x18
    class GFxString errorMessage; // r1+0x8
    class BindHandle bh; // r1+0x10

    {
        // Range: 0x804E75DC -> 0x804E77B8
        // Local variables
        class GFxImageCreator * pcreator; // r3
        class GFxImageCreateInfo ico; // r1+0x30
    }

    // References
    // -> struct {} __vt__16GFxImageResource;
    // -> struct {} __vt__16GFxImageFileInfo;
    // -> struct {} __vt__19GFxResourceFileInfo;
}
// Range: 0x804E7BA0 -> 0x804E7C24
class GFxResourceData GFxImageFileResourceCreator::CreateImageFileResourceData(class GFxImageFileInfo * prfi /* r31 */) {
    // References
    // -> static class GFxImageFileResourceCreator inst;
    // -> struct {} __vt__27GFxImageFileResourceCreator;
}
// signature: GFxImageResourceCreator::CreateResource(void *, GFxResourceBindData *, GFxLoadStates *) const
// Range: 0x804E7C50 -> 0x804E7E4C
bool GFxImageResourceCreator::CreateResource(class GFxResourceBindData * pbindData /* r29 */) const {
    // Local variables
    class GFxImageCreateInfo icreateInfo; // r1+0x8

    // References
    // -> struct {} __vt__16GFxImageResource;
}
// Range: 0x804E7E90 -> 0x804E7F2C
class GFxResourceData GFxImageResourceCreator::CreateImageResourceData(class GImage * pimage /* r31 */) {
    // References
    // -> static class GFxImageResourceCreator inst;
    // -> struct {} __vt__23GFxImageResourceCreator;
}
