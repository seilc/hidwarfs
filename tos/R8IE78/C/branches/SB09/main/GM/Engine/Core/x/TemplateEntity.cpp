/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\TemplateEntity.cpp
*/
// Range: 0x80190C70 -> 0x80190CD4
void World::TemplateAsset::Fix(class TemplateAsset * this /* r30 */, long addrOffset /* r29 */) {
    {
        // Range: 0x80190C8C -> 0x80190CC0
        // Local variables
        class LinkAssetBaseNew * end; // r30
        class LinkAssetBaseNew * it; // r31
    }
}
// Range: 0x80190CE0 -> 0x80190D40
class Entity * World::TemplateAsset::Create(class EntityHandleBase * handle /* r30 */, class TemplateAsset * asset /* r31 */) {
}
// signature: World::TemplateEntity::TemplateEntity(World::EntityHandleBase *, World::TemplateAsset *)
// Range: 0x80190D40 -> 0x80190DC0
void * World::TemplateEntity::TemplateEntity(class TemplateEntity * this /* r30 */, class TemplateAsset * asset /* r31 */) {
    // References
    // -> struct {} __vt__Q25World14TemplateEntity;
}
// Range: 0x80190DC0 -> 0x80191148
void World::TemplateEntity::Setup(class TemplateEntity * this /* r27 */) {
    // Local variables
    unsigned int widgetCount; // r28
    unsigned long long curID; // r21:r22
    int foundCount; // r25
    unsigned int eventCount; // r31

    {
        // Range: 0x80190DD8 -> 0x80190E44
        // Local variables
        unsigned int i; // r26

        {
            // Range: 0x80190DD8 -> 0x80190E44
            // Local variables
            class EntityHandleBase * handle; // r0
        }
    }
    {
        // Range: 0x80190E9C -> 0x80190F14
        // Local variables
        unsigned int i; // r29

        {
            // Range: 0x80190E9C -> 0x80190F14
            // Local variables
            class EntityHandleBase * handle; // r0
        }
    }
    {
        // Range: 0x80190F18 -> 0x80190F90
        // Local variables
        unsigned int i; // r10

        {
            // Range: 0x80190F18 -> 0x80190F90
            {
                // Range: 0x80190F38 -> 0x80190F90
                // Local variables
                unsigned int lk; // r0
            }
        }
    }
    {
        // Range: 0x80190FE4 -> 0x801910FC
        // Local variables
        unsigned int i; // r30

        {
            // Range: 0x80190FE4 -> 0x801910FC
            // Local variables
            class xOGEntity * ent; // r29

            {
                // Range: 0x80190FF0 -> 0x801910FC
                // Local variables
                unsigned int lk; // r28
            }
        }
    }
}
// Range: 0x80191640 -> 0x80191698
void World::TemplateEntity::DebugReset(class TemplateEntity * this /* r31 */) {
}
// signature: World::TemplateEntity::EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801916A0 -> 0x8019186C
void World::TemplateEntity::EventCB(class xBase * from /* r26 */, unsigned int toEvent /* r27 */, class EventAny * params /* r28 */) {
    // Local variables
    class TemplateEntity * ent; // r30

    {
        // Range: 0x80191704 -> 0x801917BC
        // Local variables
        unsigned int lk; // r29
    }
    {
        // Range: 0x80191818 -> 0x80191858
        // Local variables
        unsigned int i; // r25
    }
}
// signature: World::TemplateEntity::SetBSPVisibility(bool)
// Range: 0x80191870 -> 0x80191884
void World::TemplateEntity::SetBSPVisibility(class TemplateEntity * this /* r6 */) {
}
// Range: 0x80191890 -> 0x801918B0
class xOGEntity * World::TemplateEntity::GetPrimaryMember() {
}
// signature: World::TemplateEntity::GetTemplateMembers(World::xOGEntity **&, unsigned int &)
// Range: 0x801918B0 -> 0x801918C4
void World::TemplateEntity::GetTemplateMembers() {
}
