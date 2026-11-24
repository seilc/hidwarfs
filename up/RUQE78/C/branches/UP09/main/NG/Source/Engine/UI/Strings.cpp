/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\UI\Strings.cpp
*/
bool initialized; // size: 0x1, address: 0x80853058
class StringsAssetBlobEntity * strings; // size: 0x4, address: 0x8085305C
static char * wrongLangagePacked; // size: 0x4, address: 0x807C1870
// Range: 0x80360F10 -> 0x80361378
class Entity * World::StringsBlobAsset::Create(class EntityHandleBase * handle /* r27 */, class StringsBlobAsset * asset /* r28 */) {
    // References
    // -> class StringsAssetBlobEntity * strings;
    // -> bool initialized;
    // -> struct {} __vt__Q25World22StringsAssetBlobEntity;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// Range: 0x8036137C -> 0x803617F4
void World::StringsAssetBlobEntity::Destroy(class StringsAssetBlobEntity * this /* r30 */) {
    // References
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> bool initialized;
    // -> class StringsAssetBlobEntity * strings;
}
// signature: xTextAssetCompFn(const unsigned int, unsigned int)
// Range: 0x80361800 -> 0x80361824
static int xTextAssetCompFn() {
    // Local variables
    int result; // r3
}
// signature: xTextAssetBinaryLookup(unsigned int *, const unsigned int, int (*)(const unsigned int, unsigned int), unsigned int)
// Range: 0x80361824 -> 0x803618BC
int xTextAssetBinaryLookup(unsigned int * array /* r25 */, unsigned int hashID /* r26 */, int (* testFn)(unsigned int, unsigned int) /* r27 */) {
    // Local variables
    int da_idx; // r31
    int k0; // r30
    int k1; // r29
    int k; // r28
    int v; // r0
}
// signature: NGStrings::findString(unsigned int, unsigned int *)
// Range: 0x803618BC -> 0x80361984
char * NGStrings::findString(unsigned int * len /* r29 */) {
    // Local variables
    void * buf; // r7
    int textsCount; // r6
    char * textsBase; // r30
    int idx; // r0

    {
        // Range: 0x80361934 -> 0x80361964
        // Local variables
        char * foundString; // r30
    }

    // References
    // -> static char * wrongLangagePacked;
    // -> class StringsAssetBlobEntity * strings;
}
// signature: NGStrings::findString(const char *, unsigned int *)
// Range: 0x80361984 -> 0x803619B0
char * NGStrings::findString() {
}
