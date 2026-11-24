/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xUIDMgr.cpp
*/
static unsigned long long nextUID; // size: 0x8, address: 0x80815A28
// signature: Sext::UIDReference::Create(World::EntityHandleBase *, Sext::UIDReference *)
// Range: 0x80085870 -> 0x800858D8
class Entity * Sext::UIDReference::Create(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World13xOGStubEntity;
}
// Range: 0x800858F0 -> 0x8008590C
void xUIDMgrSceneInit() {
    // References
    // -> static unsigned long long nextUID;
}
// Range: 0x80085910 -> 0x800859AC
unsigned long long xUIDMgrFindUID(unsigned int nameHash /* r29 */) {
    // Local variables
    int count; // r0

    {
        // Range: 0x80085938 -> 0x8008597C
        // Local variables
        int i; // r30

        {
            // Range: 0x80085938 -> 0x8008597C
            // Local variables
            class xUIDMgrAsset * UIDRef; // r0
        }
    }
}
// Range: 0x800859B0 -> 0x80085A40
class ModelInstanceAsset * xUIDMgrFindModelInstanceAsset(unsigned int nameHash /* r29 */) {
    // Local variables
    int count; // r0

    {
        // Range: 0x800859D8 -> 0x80085A14
        // Local variables
        int i; // r30

        {
            // Range: 0x800859D8 -> 0x80085A14
            // Local variables
            class UIDModelReference * UIDModelRef; // r0
        }
    }
}
// Range: 0x80085A40 -> 0x80085B10
void * xUIDMgrFindAsset(unsigned int nameHash /* r28 */, unsigned int * size /* r29 */) {
    {
        // Range: 0x80085AC4 -> 0x80085AEC
        // Local variables
        class EntityHandleBase * entHandle; // r3
    }
}
