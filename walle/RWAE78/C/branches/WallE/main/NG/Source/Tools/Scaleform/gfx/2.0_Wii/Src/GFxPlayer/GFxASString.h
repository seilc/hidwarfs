/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxAction.cpp
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxASString.cpp
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxCharacter.cpp
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxObject.cpp
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxSprite.cpp
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxTextField.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxASString.h
*/
// Range: 0x80474C90 -> 0x80474CA0
void GASStringNode::AddRef() {
}
// Range: 0x80474DB0 -> 0x80474DC8
void GASStringNode::Release() {
}
// signature: GASString::GASString(const GASString &)
// Range: 0x8046A910 -> 0x8046A928
void * GASString::GASString() {
}
// Range: 0x8045D380 -> 0x8045D3E8
void * GASString::~GASString(class GASString * this /* r30 */) {
}
// Range: 0x80474980 -> 0x8047498C
char * GASString::ToCStr() const {
}
// Range: 0x80589F80 -> 0x80589F94
bool GASString::IsEmpty() const {
}
// Range: 0x8046AEB0 -> 0x8046AEBC
unsigned int GASString::GetHashFlags() const {
}
// Range: 0x80474CA0 -> 0x80474CA8
class GASStringNode * GASString::GetNode() const {
}
// signature: GASString::operator=(const GASString &)
// Range: 0x80474040 -> 0x8047409C
void GASString::operator=(class GASString * this /* r30 */) {
}
// Range: 0x80474950 -> 0x8047497C
bool GASString::operator<(const char *) const() {
}
// Range: 0x80474370 -> 0x804743A4
bool GASString::operator>(const char *) const() {
}
// Range: 0x8046A860 -> 0x8046A8BC
void GASString::AssignNode(class GASString * this /* r30 */, class GASStringNode * pnode /* r31 */) {
}
// Range: 0x80474C40 -> 0x80474C58
void GASString::ResolveLowercase() const {
}
// signature: GASString::NoCaseKey::NoCaseKey(const GASString &)
// Range: 0x8046B1F0 -> 0x8046B234
void * GASString::NoCaseKey::NoCaseKey(class NoCaseKey * this /* r31 */) {
}
// signature: GASStringNodeHashFunc<GASStringNode *>::operator()(GASStringNode *const &) const
// Range: 0x8048E250 -> 0x8048E25C
unsigned long GASStringNodeHashFunc<GASStringNode *>::operator()() const {
}
// Range: 0x8047AC60 -> 0x8047AC78
class GASString GASStringManager::CreateEmptyString() {
}
// signature: GASStringManager::CreateString(const char *)
// Range: 0x8045D8F0 -> 0x8045D934
class GASString GASStringManager::CreateString() {
}
// signature: GASStringManager::CreateString(const char *, unsigned long)
// Range: 0x804742C0 -> 0x80474308
class GASString GASStringManager::CreateString() {
}
// signature: GASStringManager::CreateString(const GFxString &)
// Range: 0x80464280 -> 0x804642D0
class GASString GASStringManager::CreateString() {
}
// signature: GASStringManager::CreateConstString(const char *, unsigned long, unsigned long)
// Range: 0x8049CC70 -> 0x8049CCBC
class GASString GASStringManager::CreateConstString() {
}
// Range: 0x8045E2E0 -> 0x8045E34C
class GASString GASStringManager::CreateConstString(class GASStringManager * this /* r30 */, char * pstr /* r31 */) {
}
// signature: GASStringManager::CreateString(const wchar_t *)
// Range: 0x8045D690 -> 0x8045D6D4
class GASString GASStringManager::CreateString() {
}
// signature: GASStringHashFunctor::operator()(const GASString &) const
// Range: 0x8049CC50 -> 0x8049CC5C
unsigned long GASStringHashFunctor::operator()() const {
}
// Range: 0x8053E580 -> 0x8053E58C
void * GASStringHash<GASValue>::GASStringHash() {
}
// Range: 0x80462740 -> 0x8046279C
void * GASStringHash<GASMember>::~GASStringHash(class GASStringHash * this /* r30 */) {
}
// Range: 0x80479E10 -> 0x80479F04
void * GASStringHash<GASValue>::~GASStringHash(class GASStringHash * this /* r24 */) {
}
// Range: 0x8047E590 -> 0x8047E5EC
void * GASStringHash<GASObject::Watchpoint>::~GASStringHash(class GASStringHash * this /* r30 */) {
}
// signature: GASStringHash<GASValue>::get_CaseInsensitive(const GASString &, GASValue *) const
// Range: 0x80478670 -> 0x804786F4
bool GASStringHash<GASValue>::get_CaseInsensitive(class GASStringHash * this /* r30 */, class GASValue * pvalue /* r31 */) const {
    // Local variables
    class NoCaseKey ikey; // r1+0x8
}
// signature: GASStringHash<signed char>::get_CaseInsensitive(const GASString &, signed char *) const
// Range: 0x8049CF00 -> 0x8049CF7C
bool GASStringHash<signed char>::get_CaseInsensitive(class GASStringHash * this /* r30 */, signed char * pvalue /* r31 */) const {
    // Local variables
    class NoCaseKey ikey; // r1+0x8
}
// signature: GASStringHash<GASMember>::get_CaseInsensitive(const GASString &, GASMember *) const
// Range: 0x8050DCC0 -> 0x8050DD44
bool GASStringHash<GASMember>::get_CaseInsensitive(class GASStringHash * this /* r30 */, class GASMember * pvalue /* r31 */) const {
    // Local variables
    class NoCaseKey ikey; // r1+0x8
}
// signature: GASStringHash<GASFunctionRef>::get_CaseInsensitive(const GASString &)
// Range: 0x8046B7B0 -> 0x8046B810
class GASFunctionRef * GASStringHash<GASFunctionRef>::get_CaseInsensitive(class GASStringHash * this /* r31 */) {
    // Local variables
    class NoCaseKey ikey; // r1+0x8
}
// signature: GASStringHash<GASValue>::get_CaseInsensitive(const GASString &)
// Range: 0x804795F0 -> 0x80479650
class GASValue * GASStringHash<GASValue>::get_CaseInsensitive(class GASStringHash * this /* r31 */) {
    // Local variables
    class NoCaseKey ikey; // r1+0x8
}
// signature: GASStringHash<GASObject::Watchpoint>::get_CaseInsensitive(const GASString &)
// Range: 0x80510570 -> 0x805105D0
class Watchpoint * GASStringHash<GASObject::Watchpoint>::get_CaseInsensitive(class GASStringHash * this /* r31 */) {
    // Local variables
    class NoCaseKey ikey; // r1+0x8
}
// signature: GASStringHash<GASValue>::find_CaseInsensitive(const GASString &)
// Range: 0x80478EC0 -> 0x80478F14
class iterator GASStringHash<GASValue>::find_CaseInsensitive(class GASStringHash * this /* r31 */) {
    // Local variables
    class NoCaseKey ikey; // r1+0x8
}
// signature: GASStringHash<GASMember>::find_CaseInsensitive(const GASString &)
// Range: 0x8050B200 -> 0x8050B254
class iterator GASStringHash<GASMember>::find_CaseInsensitive(class GASStringHash * this /* r31 */) {
    // Local variables
    class NoCaseKey ikey; // r1+0x8
}
// signature: GASStringHash<GASFunctionRef>::find_CaseCheck(const GASString &, bool)
// Range: 0x8046B030 -> 0x8046B0A4
class iterator GASStringHash<GASFunctionRef>::find_CaseCheck(class GASStringHash * this /* r31 */) {
}
// signature: GASStringHash<GASValue>::find_CaseCheck(const GASString &, bool)
// Range: 0x80478310 -> 0x80478384
class iterator GASStringHash<GASValue>::find_CaseCheck(class GASStringHash * this /* r31 */) {
}
// signature: GASStringHash<GASObject::Watchpoint>::find_CaseCheck(const GASString &, bool)
// Range: 0x8050FD40 -> 0x8050FDB4
class iterator GASStringHash<GASObject::Watchpoint>::find_CaseCheck(class GASStringHash * this /* r31 */) {
}
// Range: 0x8046B3E0 -> 0x8046B5E0
void GASStringHash<GASFunctionRef>::remove_CaseInsensitive(class GASStringHash * this /* r28 */, class GASString & key /* r29 */) {
}
// Range: 0x80478AB0 -> 0x80478CC4
void GASStringHash<GASValue>::remove_CaseInsensitive(class GASStringHash * this /* r28 */, class GASString & key /* r29 */) {
}
// Range: 0x805100F0 -> 0x80510348
void GASStringHash<GASObject::Watchpoint>::remove_CaseInsensitive(class GASStringHash * this /* r28 */, class GASString & key /* r29 */) {
}
