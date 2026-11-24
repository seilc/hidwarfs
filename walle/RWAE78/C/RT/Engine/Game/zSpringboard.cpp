/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zSpringboard.cpp
*/
static class xOGSchema SpringboardSchema; // size: 0x18, address: 0x807E39A0
static class SchemaRegistrator SpringboardSchemaReg; // size: 0x8, address: 0x807E39B8
static class xAnimTable * animTables; // size: 0x4, address: 0x807E39C0
static class xEntAsset fakeAsset; // size: 0xF0, address: 0x807E39D0
// signature: @unnamed@WAD03_cpp@::GenericEntRender(xEnt *)
// Range: 0x801C30A0 -> 0x801C30D0
static void @unnamed@WAD03_cpp@::GenericEntRender() {
}
// Range: 0x801C30D0 -> 0x801C30DC
void zSpringboard::Launch() {
}
// Range: 0x801C30E0 -> 0x801C30EC
void zSpringboard::Compress() {
}
// Range: 0x801C30F0 -> 0x801C30FC
void zSpringboard::Fail() {
}
// Range: 0x801C3100 -> 0x801C3498
class xAnimTable * zSpringboard::CreateAnimTable(unsigned long long animSetID /* r28:r27 */) {
    // Local variables
    class xAnimTable * table; // r26

    // References
    // -> static class xAnimTable * animTables;
}
// signature: zSpringboard::RemoveAnimTable(unsigned long long)
// Range: 0x801C3540 -> 0x801C35F4
void zSpringboard::RemoveAnimTable() {
    // Local variables
    class xAnimTable * table; // r31
    class xAnimTable * prev; // r30

    // References
    // -> static class xAnimTable * animTables;
}
// signature: zSpringboard::EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801C3600 -> 0x801C3834
void zSpringboard::EventCB(class xBase * to /* r31 */) {
}
// Range: 0x801C3840 -> 0x801C3B58
void * zSpringboard::zSpringboard(class zSpringboard * this /* r29 */, class Springboard * theAsset /* r30 */) {
    // Local variables
    unsigned int assetSize; // r1+0xC
    unsigned long long modelID; // r0:r0
    class zCharacterAsset * characterAssets; // r31
    unsigned long long characterAssetsID; // r3:r4
    unsigned long long assetID; // r0:r0
    class xOGEntityModelContext context; // r1+0x8
    class xAnimTable * table; // r5
    class xBound * pbound; // r0

    // References
    // -> class zGlobals globals;
    // -> static class xAnimTable * animTables;
    // -> static class xEntAsset fakeAsset;
    // -> struct {} __vt__12zSpringboard;
}
// signature: zSpringboard::Init(xBase &, xDynAsset &, unsigned long)
// Range: 0x801C3B60 -> 0x801C3B70
void zSpringboard::Init() {
}
// Range: 0x801C3B70 -> 0x801C3D70
void zSpringboard::GetLaunchVelocity(class zSpringboard * this /* r29 */, class xVec3 * vel /* r30 */) {
    // Local variables
    float height; // f3
    float magnitude; // f0
    class xMat3x3 rotMat; // r1+0x8

    // References
    // -> class zGlobals globals;
}
// signature: zSpringboard_Update(zSpringboard *, zScene *, float)
// Range: 0x801C3D70 -> 0x801C3D74
void zSpringboard_Update() {
}
