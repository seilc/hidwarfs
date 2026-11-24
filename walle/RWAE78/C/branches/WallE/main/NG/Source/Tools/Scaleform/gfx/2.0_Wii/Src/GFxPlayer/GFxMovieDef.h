/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxAction.cpp
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxCharacter.cpp
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxMovieDef.cpp
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxPlayerImpl.cpp
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxStaticText.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxMovieDef.h
*/
enum StateType stateQuery[9]; // size: 0x24, address: 0x806E7AD0
// Range: 0x80497AE0 -> 0x80497AE8
unsigned int GFxMovieDataDef::GetVersion() const {
}
// Range: 0x8046BF50 -> 0x8046BF58
unsigned int GFxMovieDataDef::GetLoadingFrame() const {
}
// Range: 0x80503CF0 -> 0x80503CF8
unsigned int GFxMovieDataDef::GetSWFFlags() const {
}
// Range: 0x80504670 -> 0x80504678
unsigned int GFxMovieDataDef::GetFrameCount() const {
}
// Range: 0x80508880 -> 0x80508884
class GFxMovieDataDef * GFxMovieDataDef::GetMovieDataDef() const {
}
// signature: GFxMovieDataDef::GetLabeledFrame(const char *, unsigned int *, bool)
// Range: 0x80508890 -> 0x80508898
bool GFxMovieDataDef::GetLabeledFrame() {
}
// Range: 0x805088A0 -> 0x80508908
class GFxResourceKey GFxMovieDataDef::GetKey(class GFxMovieDataDef * this /* r31 */) {
}
// Range: 0x80508910 -> 0x8050891C
unsigned int GFxMovieDataDef::GetResourceTypeCode() const {
}
// Range: 0x8054FD60 -> 0x8054FD6C
class GFxMovieDataDef * GFxMovieDefImpl::GetDataDef() const {
}
// Range: 0x80507840 -> 0x80507858
unsigned int GFxMovieDefImpl::GetFrameCount() const {
}
// Range: 0x80508920 -> 0x80508930
float GFxMovieDefImpl::GetFrameRate() const {
}
// Range: 0x80508930 -> 0x805089D4
class GRect GFxMovieDefImpl::GetFrameRect() const {
}
// Range: 0x805089E0 -> 0x80508A20
float GFxMovieDefImpl::GetWidth() const {
}
// Range: 0x80508A20 -> 0x80508A60
float GFxMovieDefImpl::GetHeight() const {
}
// Range: 0x80497AC0 -> 0x80497AD8
unsigned int GFxMovieDefImpl::GetVersion() const {
}
// Range: 0x80508A60 -> 0x80508A68
unsigned int GFxMovieDefImpl::GetLoadingFrame() const {
}
// Range: 0x80508A70 -> 0x80508A88
unsigned int GFxMovieDefImpl::GetSWFFlags() const {
}
// Range: 0x8049FEC0 -> 0x8049FED4
char * GFxMovieDefImpl::GetFileURL() const {
}
// Range: 0x80508A90 -> 0x80508AB4
class GFxExporterInfo * GFxMovieDefImpl::GetExporterInfo() const {
}
// Range: 0x80508B60 -> 0x80508B74
class GFxSharedState * GFxMovieDefImpl::GetSharedImpl() const {
}
// signature: GFxMovieDefImpl::GetMetadata(char *, unsigned int) const
// Range: 0x80508AC0 -> 0x80508B2C
unsigned int GFxMovieDefImpl::GetMetadata() const {
}
// Range: 0x80508B30 -> 0x80508B40
unsigned int GFxMovieDefImpl::GetFileAttributes() const {
}
// signature: GFxMovieDefImpl::LogError(const char *, ...)
// Range: 0x80504DE0 -> 0x80504EC8
void GFxMovieDefImpl::LogError(class GFxMovieDefImpl * this /* r31 */, char * pfmt /* r30 */) {
    // Local variables
    class __va_list_struct argList[1]; // r1+0x6C
}
// Range: 0x80508B40 -> 0x80508B48
class GFxResourceKey GFxMovieDefImpl::GetKey() {
}
// Range: 0x80508B50 -> 0x80508B58
unsigned int GFxMovieDefImpl::GetResourceTypeCode() const {
}
// Range: 0x8046BE40 -> 0x8046BE80
void * GASExecuteTag::~GASExecuteTag(class GASExecuteTag * this /* r31 */) {
}
// signature: GASExecuteTag::Execute(GFxSprite *)
// Range: 0x8047FBA0 -> 0x8047FBA4
void GASExecuteTag::Execute() {
}
// signature: GASExecuteTag::ExecuteWithPriority(GFxSprite *, GFxActionPriority::Priority)
// Range: 0x8047FBB0 -> 0x8047FBC0
void GASExecuteTag::ExecuteWithPriority() {
}
// signature: GASExecuteTag::ExecuteState(GFxSprite *)
// Range: 0x80480FC0 -> 0x80480FC4
void GASExecuteTag::ExecuteState() {
}
// signature: GASExecuteTag::ExecuteStateReverse(GFxSprite *, int)
// Range: 0x80480FD0 -> 0x80480FE0
void GASExecuteTag::ExecuteStateReverse() {
}
// Range: 0x80480FE0 -> 0x80480FE8
bool GASExecuteTag::IsRemoveTag() const {
}
// Range: 0x8047FBC0 -> 0x8047FBC8
bool GASExecuteTag::IsActionTag() const {
}
// Range: 0x80480FF0 -> 0x80480FF8
bool GASExecuteTag::IsInitImportActionsTag() const {
}
// Range: 0x80481000 -> 0x80481014
class DepthResId GASExecuteTag::GetPlaceObject2_DepthId() const {
}
// signature: GFxPlaceObject2::Execute(GFxSprite *)
// Range: 0x80522F90 -> 0x80522FA0
void GFxPlaceObject2::Execute() {
}
// signature: GFxPlaceObject2::ExecuteState(GFxSprite *)
// Range: 0x80522FA0 -> 0x80522FB0
void GFxPlaceObject2::ExecuteState() {
}
// signature: GFxRemoveObject2::ExecuteState(GFxSprite *)
// Range: 0x80522FB0 -> 0x80522FC0
void GFxRemoveObject2::ExecuteState() {
}
// Range: 0x80522FC0 -> 0x80522FC8
bool GFxRemoveObject2::IsRemoveTag() const {
}
// signature: GFxSetBackgroundColor::ExecuteState(GFxSprite *)
// Range: 0x80522FD0 -> 0x80522FE0
void GFxSetBackgroundColor::ExecuteState() {
}
// Range: 0x80508B80 -> 0x80508B88
bool GFxInitImportActions::IsInitImportActionsTag() const {
}
