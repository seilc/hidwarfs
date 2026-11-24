/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zFMV.cpp
*/
class _OGFMVReferenceSchema _OGFMVReferenceschema; // size: 0x18, address: 0x8076D340
class SchemaRegistrator _OGFMVReferenceschemaReg; // size: 0x8, address: 0x8076D358
// Range: 0x800D6C50 -> 0x800D6C60
void World::_OGFMVReferenceEntity::Deactivate() {
}
// Range: 0x800D6C60 -> 0x800D6CB0
void World::_OGFMVReferenceEntity::Destroy(class _OGFMVReferenceEntity * this /* r31 */) {
}
// signature: World::_OGFMVReferenceSchema::Fix(World::Asset *, long, int)
// Range: 0x800D6D10 -> 0x800D6D18
void World::_OGFMVReferenceSchema::Fix() {
}
// signature: World::_OGFMVReferenceSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800D6D20 -> 0x800D6D6C
class EntityStub * World::_OGFMVReferenceSchema::CreateStub(class _OGFMVReferenceSchema * this /* r31 */) {
}
// signature: World::_OGFMVReferenceSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x800D6D70 -> 0x800D6D88
void World::_OGFMVReferenceSchema::DestroyStub() {
}
// signature: World::_OGFMVReferenceSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800D6D90 -> 0x800D6DF8
class Entity * World::_OGFMVReferenceSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World21_OGFMVReferenceEntity;
}
// signature: zFMVFileGetName(char *, unsigned int)
// Range: 0x800D6E40 -> 0x800D6E60
void zFMVFileGetName() {
}
// Range: 0x800D6E60 -> 0x800D6E68
char * zFMVReference::GetFMVFileName() {
}
// signature: zFMVReference::Init(xBase &, xDynAsset &, unsigned long)
// Range: 0x800D6E70 -> 0x800D6ED4
void zFMVReference::Init(class xBase * data /* r30 */, class xDynAsset * asset /* r31 */) {
    // Local variables
    class zFMVReference * reference; // r0
}
// Range: 0x800D6EE0 -> 0x800D6FC4
void PlayMovieTemp(class MovieData * data /* r30 */) {
    // Local variables
    bool isCreditsFMV; // r31
    unsigned int retval; // r0

    // References
    // -> enum _tagGameVidMode gVidMode;
}
// Range: 0x800D6FD0 -> 0x800D71A4
unsigned int zFMVPlay(char * name /* r25 */, unsigned int buttons /* r26 */, float time /* f31 */, unsigned int uSubtitlesAID /* r27 */, bool skippable /* r28 */) {
    // Local variables
    unsigned int retval; // r29

    {
        // Range: 0x800D7018 -> 0x800D7180
        // Local variables
        char fullFileName[256]; // r1+0x28

        {
            // Range: 0x800D70D8 -> 0x800D70F8
            // Local variables
            int i; // r30

            {
                // Range: 0x800D70D8 -> 0x800D70F8
                // Local variables
                class zPlayerInput * pad; // r0
            }
        }
    }

    // References
    // -> static float time_last;
    // -> float SECS_PER_VBLANK;
    // -> double secondsPerTick;
    // -> long long startupTicks;
    // -> class StartupConfig * config;
    // -> class zGlobals globals;
}
