/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zOneLiner.cpp
*/
class zOneLinerSystem gOneLinerSystem; // size: 0x38, address: 0x80792348
class _OGOneLinerSchema _OGOneLinerschema; // size: 0x18, address: 0x80792380
class SchemaRegistrator _OGOneLinerschemaReg; // size: 0x8, address: 0x80792398
class zSoundFX * pEventSfx; // size: 0x4, address: 0x807923A0
class OneLinerModule gOneLinerMod; // size: 0x98, address: 0x807923A8
static class ModuleRegistrator oneLinerModReg; // size: 0x8, address: 0x80792440
// Range: 0x8014C220 -> 0x8014C230
void World::_OGOneLinerEntity::Deactivate() {
}
// Range: 0x8014C230 -> 0x8014C280
void World::_OGOneLinerEntity::Destroy(class _OGOneLinerEntity * this /* r31 */) {
}
// signature: World::_OGOneLinerSchema::Fix(World::Asset *, long, int)
// Range: 0x8014C2E0 -> 0x8014C2E8
void World::_OGOneLinerSchema::Fix() {
}
// signature: World::_OGOneLinerSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8014C2F0 -> 0x8014C33C
class EntityStub * World::_OGOneLinerSchema::CreateStub(class _OGOneLinerSchema * this /* r31 */) {
}
// signature: World::_OGOneLinerSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8014C340 -> 0x8014C358
void World::_OGOneLinerSchema::DestroyStub() {
}
// signature: World::_OGOneLinerSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8014C360 -> 0x8014C3C8
class Entity * World::_OGOneLinerSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World17_OGOneLinerEntity;
}
// Range: 0x8014C410 -> 0x8014C538
void OneLinerInit(void * ent /* r30 */, void * asset /* r31 */) {
    // References
    // -> struct {} __vt__8zSoundFX;
    // -> struct {} __vt__8OneLiner;
}
// signature: OneLinerEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8014C540 -> 0x8014C6A8
static void OneLinerEventWrapper(class xBase * from /* r30 */, class xBase * to /* r31 */) {
    // Local variables
    class OneLiner * pOneLiner; // r0

    {
        // Range: 0x8014C54C -> 0x8014C68C
        // Local variables
        class xEnt * pSrc; // r0
    }

    // References
    // -> class zOneLinerSystem gOneLinerSystem;
    // -> class zGlobals globals;
}
// Range: 0x8014C6B0 -> 0x8014C774
void * OneLiner::~OneLiner(class OneLiner * this /* r29 */) {
    // References
    // -> struct {} __vt__8OneLiner;
}
// Range: 0x8014C7C0 -> 0x8014C890
void * zOneLinerSystem::~zOneLinerSystem(class zOneLinerSystem * this /* r28 */) {
}
// Range: 0x8014C890 -> 0x8014C9B0
void zOneLinerSystem::Update(class zOneLinerSystem * this /* r31 */, float dTime /* f29 */) {
    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8014C9B0 -> 0x8014CB0C
bool zOneLinerSystem::PlayEvent(class zOneLinerSystem * this /* r31 */, char * name /* r29 */) {
    // References
    // -> class zGlobals globals;
    // -> class zSoundFX * pEventSfx;
}
// Range: 0x8014CB10 -> 0x8014CCA4
void zOneLinerSystem::SceneExit(class zOneLinerSystem * this /* r31 */) {
    // Local variables
    int tidx; // r0
    class OneLiner * current; // r27
    class OneLiner * last; // r26
    class OneLiner * pCurrent; // r26

    {
        // Range: 0x8014CB80 -> 0x8014CB80
        // Local variables
        int i; // r0
    }

    // References
    // -> class zGlobals globals;
    // -> class zSoundFX * pEventSfx;
}
// Range: 0x8014CCB0 -> 0x8014CD0C
void zOneLinerSystem::InitEventOneLiner(class zOneLinerSystem * this /* r5 */) {
    // References
    // -> class zSoundFX * pEventSfx;
    // -> class zGlobals globals;
}
// Range: 0x8014CD10 -> 0x8014CF54
void zOneLinerSystem::AddEventOneLiner(class zOneLinerSystem * this /* r25 */, char * eventName /* r26 */, char * priority /* r31 */, char * initPlayTime /* r27 */, char * noRepeatTime /* r28 */) {
    // Local variables
    char tempBuf[256]; // r1+0x10
    float time[2]; // r1+0x8

    // References
    // -> struct {} __vt__8OneLiner;
}
// signature: OneLinerModule::Startup(int)
// Range: 0x8014CF60 -> 0x8014D1B8
void OneLinerModule::Startup() {
    {
        // Range: 0x8014CF68 -> 0x8014D194
        // Local variables
        class FileError fileError; // r1+0x8
        int fileSize; // r26
        char ini[256]; // r1+0x20
        class File iniFile; // r1+0xC
        unsigned int size; // r0

        {
            // Range: 0x8014D088 -> 0x8014D17C
            // Local variables
            class xIniFile * ini; // r25

            {
                // Range: 0x8014D0C8 -> 0x8014D164
                // Local variables
                int i; // r24

                {
                    // Range: 0x8014D0C8 -> 0x8014D164
                    // Local variables
                    int index[3]; // r1+0x10
                    class xIniSection * section; // r23
                }
            }
        }
    }

    // References
    // -> class zOneLinerSystem gOneLinerSystem;
    // -> class FileError okay;
    // -> char * gameRoot;
    // -> class StartupConfig * config;
}
// signature: OneLinerModule::Shutdown(int)
// Range: 0x8014D1C0 -> 0x8014D258
void OneLinerModule::Shutdown() {
    // References
    // -> class zOneLinerSystem gOneLinerSystem;
}
