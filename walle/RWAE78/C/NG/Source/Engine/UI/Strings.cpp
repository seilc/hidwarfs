/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\UI\Strings.cpp
*/
class StringsAssetSchema stringsAssetSchema; // size: 0x18, address: 0x80809B70
class SchemaRegistrator stringsAssetSchemaReg; // size: 0x8, address: 0x80809B88
bool initialized; // size: 0x1, address: 0x80809B90
class StringsAssetBlobEntity * strings; // size: 0x4, address: 0x80809B94
// Range: 0x802B96C4 -> 0x802B96D4
void World::StringsAssetBlobEntity::Deactivate() {
}
// Range: 0x802B96D4 -> 0x802B99BC
void World::StringsAssetBlobEntity::Destroy(class StringsAssetBlobEntity * this /* r30 */) {
    // References
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// signature: World::StringsAssetSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x802B9CE0 -> 0x802B9D28
class EntityStub * World::StringsAssetSchema::CreateStub() {
}
// signature: World::StringsAssetSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x802B9D28 -> 0x802B9FFC
void World::StringsAssetSchema::DestroyStub(class EntityStub * stub /* r30 */) {
    // References
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// signature: World::StringsAssetSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x802B9FFC -> 0x802BA0A4
class Entity * World::StringsAssetSchema::ActivateEntity(class EntityHandleBase * handle /* r29 */, class Asset * baseAsset /* r30 */, int size /* r31 */) {
    // References
    // -> class StringsAssetBlobEntity * strings;
    // -> bool initialized;
    // -> struct {} __vt__Q25World22StringsAssetBlobEntity;
}
// signature: World::StringsAssetBlobEntity::ReplaceAsset(const World::Asset *, const World::Asset *)
// Range: 0x802BA0A4 -> 0x802BA0AC
bool World::StringsAssetBlobEntity::ReplaceAsset() {
}
// Range: 0x802BA0AC -> 0x802BA0B4
bool World::StringsAssetBlobEntity::ReplaceAssetCompleted() {
}
// signature: xTextAssetCompFn(const unsigned int, unsigned int)
// Range: 0x802BA0B4 -> 0x802BA0D8
static int xTextAssetCompFn() {
    // Local variables
    int result; // r3
}
// signature: xTextAssetBinaryLookup(unsigned int *, const unsigned int, int (*)(const unsigned int, unsigned int), unsigned int)
// Range: 0x802BA0D8 -> 0x802BA170
int xTextAssetBinaryLookup(unsigned int * array /* r25 */, unsigned int hashID /* r26 */, int (* testFn)(unsigned int, unsigned int) /* r27 */) {
    // Local variables
    int da_idx; // r31
    int k0; // r30
    int k1; // r29
    int k; // r28
    int v; // r0
}
// signature: NGStrings::findString(unsigned int, unsigned int *)
// Range: 0x802BA170 -> 0x802BA20C
char * NGStrings::findString(unsigned int * len /* r29 */) {
    // Local variables
    void * buf; // r0
    int textsCount; // r6
    char * textsBase; // r30
    int idx; // r0

    {
        // Range: 0x802BA1BC -> 0x802BA1EC
        // Local variables
        char * foundString; // r30
    }

    // References
    // -> class StringsAssetBlobEntity * strings;
}
// signature: NGStrings::findString(const char *, unsigned int *)
// Range: 0x802BA20C -> 0x802BA2C8
char * NGStrings::findString(unsigned int * len /* r29 */) {
    // References
    // -> class StringsAssetBlobEntity * strings;
}
