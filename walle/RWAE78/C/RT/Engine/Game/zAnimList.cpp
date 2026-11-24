/*
    Compile unit: C:\RT\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zAnimList.cpp
*/
class _OGAnimListSchema _OGAnimListschema; // size: 0x18, address: 0x807F8588
class SchemaRegistrator _OGAnimListschemaReg; // size: 0x8, address: 0x807F85A0
static int nals; // size: 0x4, address: 0x807F85A8
static unsigned long long * aids; // size: 0x4, address: 0x807F85AC
static class xAnimTable * * atbls; // size: 0x4, address: 0x807F85B0
static int * anused; // size: 0x4, address: 0x807F85B4
static char * astnames[80]; // size: 0x140, address: 0x807048D8
static class AnimList * animListAsset[512]; // size: 0x800, address: 0x807F85B8
// Range: 0x801F2470 -> 0x801F2480
void World::_OGAnimListEntity::Deactivate() {
}
// Range: 0x801F2480 -> 0x801F24D0
void World::_OGAnimListEntity::Destroy(class _OGAnimListEntity * this /* r31 */) {
}
// signature: World::_OGAnimListSchema::Fix(World::Asset *, long, int)
// Range: 0x801F2530 -> 0x801F2538
void World::_OGAnimListSchema::Fix() {
}
// signature: World::_OGAnimListSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801F2540 -> 0x801F258C
class EntityStub * World::_OGAnimListSchema::CreateStub(class _OGAnimListSchema * this /* r31 */) {
}
// signature: World::_OGAnimListSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x801F2590 -> 0x801F25A8
void World::_OGAnimListSchema::DestroyStub() {
}
// signature: World::_OGAnimListSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801F25B0 -> 0x801F2614
class Entity * World::_OGAnimListSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World17_OGAnimListEntity;
}
// signature: AlwaysConditional(xAnimTransition *, xAnimSingle *, void *)
// Range: 0x801F2660 -> 0x801F2668
static unsigned int AlwaysConditional() {
}
// Range: 0x801F2670 -> 0x801F2AC0
void zAnimListInit() {
    {
        // Range: 0x801F26F0 -> 0x801F2A90
        // Local variables
        int i; // r18

        {
            // Range: 0x801F26F0 -> 0x801F2A90
            // Local variables
            int idle_exists; // r0
            void * buf; // r0
            class xAnimTable * atbl; // r17
            class PKRAssetTOCInfo ainfo; // r1+0x30
            class AnimList * zala; // r0
            unsigned int size; // r1+0x28

            {
                // Range: 0x801F26F0 -> 0x801F26F0
                // Local variables
                class xAnimFile * afile; // r15
            }
            {
                // Range: 0x801F26F0 -> 0x801F2A70
                // Local variables
                int j; // r16

                {
                    // Range: 0x801F26F0 -> 0x801F2A70
                    {
                        // Range: 0x801F26F0 -> 0x801F2A70
                        // Local variables
                        class xAnimFile * afile; // r15
                    }
                }
            }
        }
    }

    // References
    // -> static class AnimList * animListAsset[512];
    // -> static char * astnames[80];
    // -> static int * anused;
    // -> static class xAnimTable * * atbls;
    // -> static unsigned long long * aids;
    // -> static int nals;
}
// Range: 0x801F2AC0 -> 0x801F2AE4
void zAnimListExit() {
    // References
    // -> static int * anused;
    // -> static class xAnimTable * * atbls;
    // -> static unsigned long long * aids;
    // -> static int nals;
}
// signature: zAnimListGetTable(unsigned long long, int &)
// Range: 0x801F2AF0 -> 0x801F2B5C
class xAnimTable * zAnimListGetTable() {
    {
        // Range: 0x801F2AFC -> 0x801F2B44
        // Local variables
        int i; // r8
    }

    // References
    // -> static class xAnimTable * * atbls;
    // -> static unsigned long long * aids;
    // -> static int nals;
}
// signature: zAnimListGetNumUsed(unsigned long long)
// Range: 0x801F2B60 -> 0x801F2BC0
int zAnimListGetNumUsed() {
    {
        // Range: 0x801F2B6C -> 0x801F2BB0
        // Local variables
        int i; // r7
    }

    // References
    // -> static int * anused;
    // -> static unsigned long long * aids;
    // -> static int nals;
}
