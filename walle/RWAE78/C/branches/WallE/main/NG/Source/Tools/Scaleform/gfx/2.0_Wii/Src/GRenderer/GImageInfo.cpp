/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GRenderer\GImageInfo.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x805ADEF0 -> 0x805AE7C8
*/
struct {} __vt__10GImageInfo; // size: 0x38, address: 0x8073F7E0
struct {} __vt__18GImageInfoBaseImpl; // size: 0x34, address: 0x8073F818
// Range: 0x805ADEF0 -> 0x805ADFC0
void * GImageInfoBaseImpl::~GImageInfoBaseImpl(class GImageInfoBaseImpl * this /* r30 */) {
    // References
    // -> struct {} __vt__18GImageInfoBaseImpl;
}
// Range: 0x805ADFC0 -> 0x805AE0CC
class GTexture * GImageInfoBaseImpl::GetTexture(class GImageInfoBaseImpl * this /* r29 */, class GRenderer * prenderer /* r30 */) {
}
// signature: GImageInfoBaseImpl::OnChange(GRenderer *, GTexture::ChangeHandler::EventType)
// Range: 0x805AE0D0 -> 0x805AE158
void GImageInfoBaseImpl::OnChange(class GImageInfoBaseImpl * this /* r31 */) {
}
// Range: 0x805AE160 -> 0x805AE1E4
void * GImageInfo::GImageInfo(class GImageInfo * this /* r30 */, class GImage * pimage /* r31 */) {
    // References
    // -> struct {} __vt__10GImageInfo;
}
// Range: 0x805AE1F0 -> 0x805AE288
void * GImageInfo::GImageInfo(class GImageInfo * this /* r28 */, class GImage * pimage /* r29 */, unsigned int targetWidth /* r30 */, unsigned int targetHeight /* r31 */) {
    // References
    // -> struct {} __vt__10GImageInfo;
}
// Range: 0x805AE290 -> 0x805AE368
void * GImageInfo::GImageInfo(class GImageInfo * this /* r28 */, class GTexture * ptexture /* r29 */, unsigned int targetWidth /* r30 */, unsigned int targetHeight /* r31 */) {
    // References
    // -> struct {} __vt__10GImageInfo;
    // -> struct {} __vt__18GImageInfoBaseImpl;
}
// Range: 0x805AE370 -> 0x805AE46C
void * GImageInfo::~GImageInfo(class GImageInfo * this /* r30 */) {
    // References
    // -> struct {} __vt__18GImageInfoBaseImpl;
}
// Range: 0x805AE470 -> 0x805AE4A0
unsigned int GImageInfo::GetWidth() const {
}
// Range: 0x805AE4A0 -> 0x805AE4D0
unsigned int GImageInfo::GetHeight() const {
}
// Range: 0x805AE4D0 -> 0x805AE5F0
class GTexture * GImageInfo::GetTexture(class GImageInfo * this /* r29 */, class GRenderer * prenderer /* r30 */) {
}
// signature: GImageInfo::OnChange(GRenderer *, GTexture::ChangeHandler::EventType)
// Range: 0x805AE5F0 -> 0x805AE6EC
void GImageInfo::OnChange(class GImageInfo * this /* r30 */, enum EventType changeType /* r31 */) {
}
// signature: GImageInfo::Recreate(GRenderer *)
// Range: 0x805AE6F0 -> 0x805AE760
bool GImageInfo::Recreate(class GImageInfo * this /* r6 */) {
}
