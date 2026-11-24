/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zUIGroup.cpp
*/
class _OGUI_GroupSchema _OGUI_Groupschema; // size: 0x18, address: 0x807E4BB0
class SchemaRegistrator _OGUI_GroupschemaReg; // size: 0x8, address: 0x807E4BC8
class xBase * (* lookupFunction)(unsigned long long uid); // size: 0x4, address: 0x807E4BD0
void (* eventFunction)(class xBase * from, class xBase * to, unsigned int toEvent, class EventAny * params); // size: 0x4, address: 0x807E4BD4
// Range: 0x801CBFC0 -> 0x801CBFD0
void World::_OGUI_GroupEntity::Deactivate() {
}
// Range: 0x801CBFD0 -> 0x801CC020
void World::_OGUI_GroupEntity::Destroy(class _OGUI_GroupEntity * this /* r31 */) {
}
// signature: World::_OGUI_GroupSchema::Fix(World::Asset *, long, int)
// Range: 0x801CC080 -> 0x801CC088
void World::_OGUI_GroupSchema::Fix() {
}
// signature: World::_OGUI_GroupSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801CC090 -> 0x801CC0DC
class EntityStub * World::_OGUI_GroupSchema::CreateStub(class _OGUI_GroupSchema * this /* r31 */) {
}
// signature: World::_OGUI_GroupSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x801CC0E0 -> 0x801CC0F8
void World::_OGUI_GroupSchema::DestroyStub() {
}
// signature: World::_OGUI_GroupSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801CC100 -> 0x801CC168
class Entity * World::_OGUI_GroupSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World17_OGUI_GroupEntity;
}
// signature: zUIGroupInit(xBase &, xDynAsset &, unsigned long)
// Range: 0x801CC1B0 -> 0x801CC1B4
void zUIGroupInit() {
}
// Range: 0x801CC1C0 -> 0x801CC2A4
void zUIGroupInit(class xBase * base /* r30 */, class UI_Group * asset /* r31 */) {
    // Local variables
    class zUIGroup * group; // r0
    int count; // r0

    // References
    // -> static void * staticUser;
    // -> static void * (* staticAllocator)(unsigned int size, void * user);
}
// Range: 0x801CC2B0 -> 0x801CC340
void zUIGroupSetup(class zUIGroup * group /* r26 */) {
    // Local variables
    int count; // r29
    class xBase * (* lookup)(unsigned long long uid); // r28

    {
        // Range: 0x801CC2E0 -> 0x801CC2F0
        // Local variables
        int i; // r27
    }

    // References
    // -> class xBase * (* lookupFunction)(unsigned long long uid);
}
// signature: zUIGroupUpdate(xBase *, xScene *, float)
// Range: 0x801CC340 -> 0x801CC3D0
void zUIGroupUpdate(class xBase * base /* r31 */) {
    // Local variables
    class zUIGroup * group; // r0

    {
        // Range: 0x801CC370 -> 0x801CC3BC
        // Local variables
        void (* handleEvent)(class xBase * from, class xBase * to, unsigned int toEvent, class EventAny * params); // r12
    }

    // References
    // -> void (* eventFunction)(class xBase * from, class xBase * to, unsigned int toEvent, class EventAny * params);
}
// Range: 0x801CC3D0 -> 0x801CCD38
void zUIGroupEventCB(class xBase * from /* r25 */, class xBase * to /* r26 */, unsigned int toEvent /* r27 */, class EventAny * genericParams /* r28 */) {
    // Local variables
    class zUIGroup * toGroup; // reg65535
    class EventActionLegacy newParams; // r1+0x8
    class xBase * (* lookup)(unsigned long long uid); // r31
    void (* handleEvent)(class xBase * from, class xBase * to, unsigned int toEvent, class EventAny * params); // r30
    bool forwardEvent; // r29
    int transition; // r4
    class zScript * script; // r0

    {
        // Range: 0x801CC48C -> 0x801CC5FC
        // Local variables
        class xBase * toParamWidgetPtr; // r9
        class EventActionLegacy * params; // r0
    }
    {
        // Range: 0x801CC600 -> 0x801CC784
        // Local variables
        class EventActionLegacy * params; // r0
    }
    {
        // Range: 0x801CC8FC -> 0x801CCA6C
        // Local variables
        class EventActionLegacy * params; // r0
    }
    {
        // Range: 0x801CCB68 -> 0x801CCC98
        // Local variables
        class EventActionLegacy * params; // r0
    }
    {
        // Range: 0x801CCC98 -> 0x801CCD20
        // Local variables
        int count; // r31

        {
            // Range: 0x801CCCE4 -> 0x801CCCF0
            // Local variables
            int i; // r24
        }
    }

    // References
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
    // -> void (* eventFunction)(class xBase * from, class xBase * to, unsigned int toEvent, class EventAny * params);
    // -> class xBase * (* lookupFunction)(unsigned long long uid);
}
