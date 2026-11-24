/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zScene.h
*/
// signature: OGUpdateList::UpdateShouldUpdate(xBase *)
// Range: 0x8001C7C0 -> 0x8001C854
void OGUpdateList::UpdateShouldUpdate() {
}
// signature: zScene::ForEach<FX::zFXSpawnWithSoundAssetMultiple, FX::Local::_FXSpawnCleanupCB>(int, FX::Local::_FXSpawnCleanupCB &) const
// Range: 0x800B56A0 -> 0x800B56E8
void zScene::ForEach<FX::zFXSpawnWithSoundAssetMultiple, FX::Local::_FXSpawnCleanupCB>() const {
    // Local variables
    class EmbeddedList & entz; // r30
}
// signature: zScene::ForEach<xGroup, xUpdateCull_CollectGroup_CB>(int, xUpdateCull_CollectGroup_CB &) const
// Range: 0x80165050 -> 0x801650EC
void zScene::ForEach<xGroup, xUpdateCull_CollectGroup_CB>() const {
    // Local variables
    class EmbeddedList & entz; // r10
}
// signature: zScene::ForEach<xGroup, xUpdateCull_CountGroup_CB>(int, xUpdateCull_CountGroup_CB &) const
// Range: 0x801650F0 -> 0x80165190
void zScene::ForEach<xGroup, xUpdateCull_CountGroup_CB>() const {
    // Local variables
    class EmbeddedList & entz; // r9
}
// signature: zScene::SubForEach<xEnt, xUpdateCull_CollectEnt_CB>(unsigned int, xUpdateCull_CollectEnt_CB &)
// Range: 0x80165190 -> 0x8016525C
void zScene::SubForEach<xEnt, xUpdateCull_CollectEnt_CB>() {
    {
        // Range: 0x80165194 -> 0x80165250
        // Local variables
        int i; // r31

        {
            // Range: 0x80165194 -> 0x80165250
            // Local variables
            unsigned int tid; // r0
        }
    }

    // References
    // -> unsigned int g_rttidParentTable[264];
}
// signature: zScene::ForEach<zTrigger, zTriggerSetup_CB>(int, zTriggerSetup_CB &) const
// Range: 0x8017C6A0 -> 0x8017C700
void zScene::ForEach<zTrigger, zTriggerSetup_CB>() const {
    // Local variables
    class EmbeddedList & entz; // r30
}
// signature: zScene::ForEach<zUI, zUIMgrInit_FindElementsCB>(int, zUIMgrInit_FindElementsCB &) const
// Range: 0x80183550 -> 0x80183594
void zScene::ForEach<zUI, zUIMgrInit_FindElementsCB>() const {
    // Local variables
    class EmbeddedList & entz; // r8

    // References
    // -> class zUI * uiElements[512];
    // -> int uiElementCount;
}
// signature: zScene::ForEachCheck<zWallNetGroup, FindWallNetGroup>(int, FindWallNetGroup &) const
// Range: 0x801A6E90 -> 0x801A6F34
bool zScene::ForEachCheck<zWallNetGroup, FindWallNetGroup>(class FindWallNetGroup & cb /* r27 */) const {
    // Local variables
    class EmbeddedList & entz; // r28
}
// signature: zScene::SubTypeCount(unsigned int)
// Range: 0x800F5390 -> 0x800F53EC
int zScene::SubTypeCount() {
    // Local variables
    int total; // r8

    {
        // Range: 0x800F5390 -> 0x800F53E4
        // Local variables
        int i; // r9

        {
            // Range: 0x800F5390 -> 0x800F53E4
            // Local variables
            unsigned int tid; // r0
        }
    }

    // References
    // -> unsigned int g_rttidParentTable[264];
}
