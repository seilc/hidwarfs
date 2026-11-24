/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xUIDMgr.cpp
*/
static unsigned long long nextUID; // size: 0x8, address: 0x8072DA60
// signature: Sext::UIDReference::Create(World::EntityHandleBase *, Sext::UIDReference *)
// Range: 0x80048330 -> 0x80048388
class Entity * Sext::UIDReference::Create(class EntityHandleBase * handle /* r31 */) {
}
// Range: 0x800483D0 -> 0x800483EC
void xUIDMgrSceneInit() {
    // References
    // -> static unsigned long long nextUID;
}
// Range: 0x800483F0 -> 0x8004846C
unsigned long long xUIDMgrFindUID(unsigned int nameHash /* r29 */) {
    // Local variables
    int count; // r0

    {
        // Range: 0x80048410 -> 0x80048450
        // Local variables
        int i; // r30

        {
            // Range: 0x80048410 -> 0x80048450
            // Local variables
            class xUIDMgrAsset * UIDRef; // r0
        }
    }
}
// Range: 0x80048470 -> 0x800484E0
class ModelInstanceAsset * xUIDMgrFindModelInstanceAsset(unsigned int nameHash /* r29 */) {
    // Local variables
    int count; // r0

    {
        // Range: 0x80048490 -> 0x800484C8
        // Local variables
        int i; // r30

        {
            // Range: 0x80048490 -> 0x800484C8
            // Local variables
            class UIDModelReference * UIDModelRef; // r0
        }
    }
}
// signature: xUIDMgrFindAsset(unsigned int, unsigned int *)
// Range: 0x800484E0 -> 0x80048534
void * xUIDMgrFindAsset(unsigned int * size /* r31 */) {
    // Local variables
    unsigned long long aid; // r0:r0

    {
        // Range: 0x800484F8 -> 0x8004851C
        // Local variables
        class EntityHandleBase * entHandle; // r3
    }
}
