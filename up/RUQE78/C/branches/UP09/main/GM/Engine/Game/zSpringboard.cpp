/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zSpringboard.cpp
*/
static class xAnimTable * animTables; // size: 0x4, address: 0x8082C030
static class xEntAsset fakeAsset; // size: 0x100, address: 0x8082C040
// Range: 0x802650D0 -> 0x80265478
class xAnimTable * zSpringboard::CreateAnimTable(unsigned long long animSetID /* r28:r27 */) {
    // Local variables
    class xAnimTable * table; // r26

    // References
    // -> static class xAnimTable * animTables;
}
// signature: zSpringboard::RemoveAnimTable(unsigned long long)
// Range: 0x80265520 -> 0x802655D4
void zSpringboard::RemoveAnimTable() {
    // Local variables
    class xAnimTable * table; // r31
    class xAnimTable * prev; // r30

    // References
    // -> static class xAnimTable * animTables;
}
// signature: zSpringboard::EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x802655E0 -> 0x802659A4
void zSpringboard::EventCB(class xBase * to /* r30 */) {
    // References
    // -> class Scene * primaryScene;
}
// signature: zSpringboard::zSpringboard(World::EntityHandleBase *, Sext::Springboard *)
// Range: 0x802659B0 -> 0x80265F18
void * zSpringboard::zSpringboard(class zSpringboard * this /* r26 */, class Springboard * theAsset /* r27 */) {
    // Local variables
    unsigned long long characterAssetsID; // r0:r0
    class EntityHandleBase * chrGoodie; // r0
    class zCharacterAsset * characterAssets; // r28
    unsigned long long assetID; // r0:r0
    class xAnimTable * table; // r5

    // References
    // -> class zGlobals globals;
    // -> static class xAnimTable * animTables;
    // -> static class xEntAsset fakeAsset;
    // -> unsigned long long simpleShadowID;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class xMat4x3 g_I3;
    // -> class WiiFastHeap wiiFastHeap;
    // -> struct {} __vt__12zSpringboard;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x80265F20 -> 0x80265F88
class Entity * Sext::Springboard::Create(class EntityHandleBase * handle /* r30 */, class Springboard * asset /* r31 */) {
}
// signature: zSpringboard_Update(zSpringboard *, zScene *, float)
// Range: 0x80265F90 -> 0x80265F94
void zSpringboard_Update() {
}
