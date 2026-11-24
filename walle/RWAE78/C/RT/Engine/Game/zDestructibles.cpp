/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zDestructibles.cpp
*/
class _OGDestructibleSchema _OGDestructibleschema; // size: 0x18, address: 0x8076D1D0
class SchemaRegistrator _OGDestructibleschemaReg; // size: 0x8, address: 0x8076D1E8
static float RESPAWN_THRESHOLD; // size: 0x4, address: 0x806F449C
// Range: 0x800C7110 -> 0x800C7120
void World::_OGDestructibleEntity::Deactivate() {
}
// Range: 0x800C7120 -> 0x800C7170
void World::_OGDestructibleEntity::Destroy(class _OGDestructibleEntity * this /* r31 */) {
}
// signature: World::_OGDestructibleSchema::Fix(World::Asset *, long, int)
// Range: 0x800C71D0 -> 0x800C71D8
void World::_OGDestructibleSchema::Fix() {
}
// signature: World::_OGDestructibleSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800C71E0 -> 0x800C722C
class EntityStub * World::_OGDestructibleSchema::CreateStub(class _OGDestructibleSchema * this /* r31 */) {
}
// signature: World::_OGDestructibleSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x800C7230 -> 0x800C7248
void World::_OGDestructibleSchema::DestroyStub() {
}
// signature: World::_OGDestructibleSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800C7250 -> 0x800C72B4
class Entity * World::_OGDestructibleSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World21_OGDestructibleEntity;
}
// signature: zDestructible_Init(unsigned long long, zDestructible *&, xEnt *, unsigned int)
// Range: 0x800C7300 -> 0x800C74CC
void zDestructible_Init(unsigned long long assetID /* r25:r26 */, class zDestructible * * dest /* r23 */, class xEnt * ent /* r24 */) {
    // Local variables
    class DestructibleAsset * dasset; // r26

    {
        // Range: 0x800C73AC -> 0x800C7488
        // Local variables
        unsigned int i; // r25
    }
}
// signature: zDestructible_Reset(zDestructible *&, xEnt *)
// Range: 0x800C74D0 -> 0x800C76AC
void zDestructible_Reset(class zDestructible * * dest /* r24 */) {
    // Local variables
    class DestructibleAsset * dasset; // r27
    unsigned int statesCount; // r0
    class UIDModelReference * MIAsset; // r26

    {
        // Range: 0x800C7514 -> 0x800C7638
        // Local variables
        unsigned int i; // r25
    }
}
// signature: zDestructible_SceneExit(zDestructible *&, xEnt *)
// Range: 0x800C76B0 -> 0x800C777C
void zDestructible_SceneExit(class zDestructible * * dest /* r29 */) {
    {
        // Range: 0x800C76EC -> 0x800C774C
        // Local variables
        unsigned int i; // r30
    }
}
// signature: zDestructible_Update(xEnt *, zDestructible *, xScene *, float)
// Range: 0x800C7780 -> 0x800C7854
void zDestructible_Update(class xEnt * ent /* r31 */) {
}
// signature: zDestructible_Swap(xEnt *, zDestructible *, xVec3 &, int, bool)
// Range: 0x800C7860 -> 0x800C7BAC
static void zDestructible_Swap(class xEnt * ent /* r29 */, class zDestructible * dest /* r30 */) {
    // Local variables
    class zDestructibleState * state; // r31

    {
        // Range: 0x800C7894 -> 0x800C7AC8
        // Local variables
        class xOGEntityModelContext context; // r1+0x8
        class xEnt temp_ent; // r1+0x10
    }
    {
        // Range: 0x800C7AC8 -> 0x800C7B90
        // Local variables
        class zFXScriptSpawnPt * fxSpawn; // r30
    }

    // References
    // -> struct {} __vt__4xEnt;
}
// signature: zDestructible_StateProcess(xEnt *, zDestructible *, unsigned int, unsigned int, Sext::EventActionHit *, xVec3 &, int, bool)
// Range: 0x800C7BB0 -> 0x800C7E6C
static void zDestructible_StateProcess(class xEnt * ent /* r26 */, class zDestructible * dest /* r27 */, class EventActionHit * params /* r28 */, class xVec3 * initial_velocity /* r29 */, int pad_port /* r30 */, bool state_change /* r31 */) {
    // Local variables
    unsigned int _percent; // r0
}
// Range: 0x800C7E70 -> 0x800C7F14
void zDestructible_RegisterFX(class zDestructible * dest /* r26 */) {
    // Local variables
    class DestructibleAsset * dasset; // r28

    {
        // Range: 0x800C7E84 -> 0x800C7EE4
        // Local variables
        unsigned int i; // r27
    }
}
// signature: zDestructible_EventCB(xBase *, xBase *, zDestructible *, unsigned int, Sext::EventAny *)
// Range: 0x800C7F20 -> 0x800C8754
void zDestructible_EventCB(class xBase * from /* r24 */, class xBase * root_base /* r25 */, class zDestructible * to /* r26 */, class EventAny * genericParams /* r27 */) {
    // Local variables
    class xEnt * ent; // reg65535
    class xEnt * root_ent; // reg65535

    {
        // Range: 0x800C8040 -> 0x800C8250
        // Local variables
        class EventActionDestructableFlag params; // r1+0x8
        int padport; // r27
    }
    {
        // Range: 0x800C8250 -> 0x800C865C
        // Local variables
        bool keepEnabled; // r9
        class EventActionHit hitParams; // r1+0x18
        int padport; // r28
        class xVec3 kickback; // r1+0xC
        unsigned int damage; // r29
        unsigned int hitSource; // r30
        class EventActionHit * params; // reg65535

        {
            // Range: 0x800C82C0 -> 0x800C83AC
            // Local variables
            class zFXScriptSpawnPt * fxSpawn; // r28
        }
        {
            // Range: 0x800C84D8 -> 0x800C8554
            // Local variables
            class zCombatDamageInfo damageInfo; // r1+0x30
        }
        {
            // Range: 0x800C85D8 -> 0x800C863C
            // Local variables
            unsigned int i; // r0
        }
    }

    // References
    // -> class xVec3 m_Null;
    // -> static float RESPAWN_THRESHOLD;
    // -> class xGlobals * xglobals;
}
