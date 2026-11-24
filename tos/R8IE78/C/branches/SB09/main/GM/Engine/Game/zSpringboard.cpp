/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zSpringboard.cpp
*/
static class xAnimTable * animTables; // size: 0x4, address: 0x8075A6E8
class xEntAsset fakeAsset; // size: 0x100, address: 0x8075B010
// Range: 0x8017A560 -> 0x8017A908
class xAnimTable * zSpringboard::CreateAnimTable(unsigned long long animSetID /* r28:r27 */) {
    // Local variables
    class xAnimTable * table; // r26

    // References
    // -> static class xAnimTable * animTables;
}
// signature: zSpringboard::RemoveAnimTable(unsigned long long)
// Range: 0x8017A9B0 -> 0x8017AA54
void zSpringboard::RemoveAnimTable() {
    // Local variables
    class xAnimTable * table; // r31
    class xAnimTable * prev; // r30

    // References
    // -> static class xAnimTable * animTables;
}
// signature: zSpringboard::EventCB(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8017AA60 -> 0x8017AB60
void zSpringboard::EventCB(class zSpringboard * this /* r31 */) {
}
// signature: zSpringboard::EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8017AB60 -> 0x8017AB70
void zSpringboard::EventCB(class xBase * from /* r0 */) {
}
// Range: 0x8017AB70 -> 0x8017ABC8
void zSpringboard::Reset(class zSpringboard * this /* r31 */) {
    // Local variables
    class xVec3 ang; // r1+0x8
}
// signature: zSpringboard::zSpringboard(World::EntityHandleBase *, Sext::Springboard *)
// Range: 0x8017ABD0 -> 0x8017ADB8
void * zSpringboard::zSpringboard(class zSpringboard * this /* r29 */, class Springboard * theAsset /* r30 */) {
    // Local variables
    unsigned long long characterAssetsID; // r0:r0
    class EntityHandleBase * chrGoodie; // r0
    class zCharacterAsset * characterAssets; // r31
    unsigned long long assetID; // r0:r0
    class xAnimTable * table; // r5

    // References
    // -> class zGlobals globals;
    // -> static class xAnimTable * animTables;
    // -> class xEntAsset fakeAsset;
    // -> struct {} __vt__12zSpringboard;
}
// Range: 0x8017AE10 -> 0x8017AE70
class Entity * Sext::Springboard::Create(class EntityHandleBase * handle /* r30 */, class Springboard * asset /* r31 */) {
}
