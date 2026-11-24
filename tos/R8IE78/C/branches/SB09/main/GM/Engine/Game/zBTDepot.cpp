/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zBTDepot.cpp
*/
class zDepot depot; // size: 0x10, address: 0x80731200
class zBTDepotItemCreator treeCreator; // size: 0x8, address: 0x80733FC0
// Range: 0x80081700 -> 0x80081780
void zBTDepotItemCreator::Create(class zBTDepotItemCreator * this /* r29 */, int index /* r31 */, unsigned long long & sourceID /* r30 */) {
    // Local variables
    class BehaviorTree * asset; // r31
}
// Range: 0x80081780 -> 0x80081788
unsigned int zBTDepotItemCreator::GetSourceAssetType() const {
}
// Range: 0x80081790 -> 0x800817C0
int zBTDepotItemCreator::GetItemCount() const {
}
// Range: 0x800817C0 -> 0x80081A04
void zBTDepot::SceneInit() {
    // References
    // -> class zDepot depot;
    // -> class zBTDepotItemCreator treeCreator;
    // -> struct {} __vt__19zBTDepotItemCreator;
}
// signature: zBTDepot::FindTree(unsigned long long)
// Range: 0x80081A10 -> 0x80081A64
class zBT * zBTDepot::FindTree() {
    // References
    // -> class zDepot depot;
}
