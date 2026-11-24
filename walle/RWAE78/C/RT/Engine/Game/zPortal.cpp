/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zPortal.cpp
*/
class _OGPortalSchema _OGPortalschema; // size: 0x18, address: 0x80798F30
class SchemaRegistrator _OGPortalschemaReg; // size: 0x8, address: 0x80798F48
// Range: 0x8017D1D0 -> 0x8017D1E0
void World::_OGPortalEntity::Deactivate() {
}
// Range: 0x8017D1E0 -> 0x8017D230
void World::_OGPortalEntity::Destroy(class _OGPortalEntity * this /* r31 */) {
}
// signature: World::_OGPortalSchema::Fix(World::Asset *, long, int)
// Range: 0x8017D290 -> 0x8017D298
void World::_OGPortalSchema::Fix() {
}
// signature: World::_OGPortalSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8017D2A0 -> 0x8017D2EC
class EntityStub * World::_OGPortalSchema::CreateStub(class _OGPortalSchema * this /* r31 */) {
}
// signature: World::_OGPortalSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8017D2F0 -> 0x8017D308
void World::_OGPortalSchema::DestroyStub() {
}
// signature: World::_OGPortalSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8017D310 -> 0x8017D374
class Entity * World::_OGPortalSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World15_OGPortalEntity;
}
// Range: 0x8017D3C0 -> 0x8017D410
void zPortalInit(void * portal /* r30 */, void * passet /* r31 */) {
}
// Range: 0x8017D410 -> 0x8017D460
void zPortalInit(class zPortal * portal /* r30 */, class xPortalAsset * passet /* r31 */) {
}
// signature: zPortalEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8017D460 -> 0x8017D898
void zPortalEventCB(class xBase * to /* r29 */, unsigned int toEvent /* r26 */, class EventAny * genericParams /* r30 */) {
    // Local variables
    class EventActionTeleportPlayer * params; // r0
    class xSerial xser; // r1+0x28
    class xSerial * s; // r27
    int next_scene; // r1+0x8
    unsigned int allowPortal; // r31

    {
        // Range: 0x8017D720 -> 0x8017D778
        // Local variables
        char * dst_string; // r27
    }

    // References
    // -> char * STR_ER01;
    // -> class zNGLoadingScreen gNGLoadingScreen;
    // -> class zGlobals globals;
    // -> bool returningToTitle;
}
// signature: zPortalGetSceneID(Sext::xPortalAsset *)
// Range: 0x8017D8A0 -> 0x8017D96C
unsigned int zPortalGetSceneID() {
}
// Range: 0x8017D970 -> 0x8017D980
void zPortalPending::Clear() {
}
// Range: 0x8017D980 -> 0x8017DB04
unsigned int zPortalPending::GetSceneID() {
}
// Range: 0x8017DB10 -> 0x8017DB30
char * zPortalPending::GetScenePath() {
}
// signature: zPortalPending::GetDirectionID(int)
// Range: 0x8017DB30 -> 0x8017DB64
unsigned long long zPortalPending::GetDirectionID() {
}
// Range: 0x8017DB70 -> 0x8017DB90
int zPortalPending::GetDirectionIDCount() {
}
