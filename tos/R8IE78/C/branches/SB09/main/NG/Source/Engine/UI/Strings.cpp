/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\UI\Strings.cpp
*/
bool initialized; // size: 0x1, address: 0x807830A8
class StringsAssetBlobEntity * strings; // size: 0x4, address: 0x807830AC
char * wrongLangagePacked; // size: 0x4, address: 0x806CF534
// signature: World::StringsAssetBlobEntity::StringsAssetBlobEntity(World::EntityHandleBase *, const World::StringsBlobAsset *)
// Range: 0x80203E90 -> 0x80203EFC
void * World::StringsAssetBlobEntity::StringsAssetBlobEntity(class StringsAssetBlobEntity * this /* r30 */, class StringsBlobAsset * sba /* r31 */) {
    // References
    // -> class StringsAssetBlobEntity * strings;
    // -> bool initialized;
    // -> struct {} __vt__Q25World22StringsAssetBlobEntity;
}
// Range: 0x80203F00 -> 0x80203F58
class Entity * World::StringsBlobAsset::Create(class EntityHandleBase * handle /* r30 */, class StringsBlobAsset * asset /* r31 */) {
}
// Range: 0x80203F60 -> 0x80203F70
void World::StringsAssetBlobEntity::Deactivate() {
}
// Range: 0x80203F70 -> 0x80203FE4
void World::StringsAssetBlobEntity::Destroy(class StringsAssetBlobEntity * this /* r31 */) {
    // References
    // -> bool initialized;
    // -> class StringsAssetBlobEntity * strings;
}
// signature: xTextAssetCompFn(const unsigned int, unsigned int)
// Range: 0x80203FF0 -> 0x80204010
static int xTextAssetCompFn() {
    // Local variables
    int result; // r3
}
// signature: xTextAssetBinaryLookup(unsigned int *, const unsigned int, int (*)(const unsigned int, unsigned int), unsigned int)
// Range: 0x80204010 -> 0x802040A4
int xTextAssetBinaryLookup(unsigned int * array /* r25 */, unsigned int hashID /* r26 */, int (* testFn)(unsigned int, unsigned int) /* r27 */) {
    // Local variables
    int da_idx; // r31
    int k0; // r30
    int k1; // r29
    int k; // r28
    int v; // r0
}
// signature: NGStrings::FindString(unsigned int, unsigned int *)
// Range: 0x802040B0 -> 0x80204168
char * NGStrings::FindString(unsigned int * len /* r29 */) {
    // Local variables
    void * buf; // r7
    int textsCount; // r6
    char * textsBase; // r30
    int idx; // r0

    {
        // Range: 0x80204120 -> 0x80204150
        // Local variables
        char * foundString; // r30
    }

    // References
    // -> char * wrongLangagePacked;
    // -> class StringsAssetBlobEntity * strings;
}
// signature: NGStrings::FindString(const char *, unsigned int *)
// Range: 0x80204170 -> 0x802041A4
char * NGStrings::FindString() {
}
// signature: NGStrings::FindString(const wchar_t *, unsigned int *)
// Range: 0x802041B0 -> 0x802041E0
char * NGStrings::FindString() {
}
