/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zScene.h
*/
// signature: zScene::ForEach<xBSP, @unnamed@WAD00_cpp@::intersect_env_CB>(int, @unnamed@WAD00_cpp@::intersect_env_CB &) const
// Range: 0x80047A70 -> 0x80048570
void zScene::ForEach<xBSP, @unnamed@WAD00_cpp@::intersect_env_CB>(class intersect_env_CB & cb /* r23 */) const {
    // Local variables
    class EmbeddedList & entz; // r24
    class Iterator it; // r1+0x8

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// signature: zScene::ForEach<xGroup, xUpdateCull_CollectGroup_CB>(int, xUpdateCull_CollectGroup_CB &) const
// Range: 0x802487E0 -> 0x8024887C
void zScene::ForEach<xGroup, xUpdateCull_CollectGroup_CB>() const {
    // Local variables
    class EmbeddedList & entz; // r10
}
// signature: zScene::ForEach<xGroup, xUpdateCull_CountGroup_CB>(int, xUpdateCull_CountGroup_CB &) const
// Range: 0x80248880 -> 0x80248924
void zScene::ForEach<xGroup, xUpdateCull_CountGroup_CB>() const {
    // Local variables
    class EmbeddedList & entz; // r9
}
// signature: zScene::SubForEach<xEnt, xUpdateCull_CollectEnt_CB>(unsigned int, xUpdateCull_CollectEnt_CB &)
// Range: 0x80248930 -> 0x802489EC
void zScene::SubForEach<xEnt, xUpdateCull_CollectEnt_CB>() {
    {
        // Range: 0x80248930 -> 0x802489E0
        // Local variables
        int i; // r11

        {
            // Range: 0x80248930 -> 0x802489E0
            // Local variables
            unsigned int tid; // r0
        }
    }

    // References
    // -> unsigned int g_rttidParentTable[246];
}
// signature: zScene::SubTypeCount(unsigned int)
// Range: 0x80248590 -> 0x80248648
int zScene::SubTypeCount() {
    // Local variables
    int total; // r6

    {
        // Range: 0x80248590 -> 0x802485D4
        // Local variables
        int i; // r7

        {
            // Range: 0x80248590 -> 0x802485D4
            // Local variables
            unsigned int tid; // r0
        }
    }

    // References
    // -> unsigned int g_rttidParentTable[246];
}
