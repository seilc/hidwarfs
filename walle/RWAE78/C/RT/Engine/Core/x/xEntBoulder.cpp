/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xEntBoulder.cpp
*/
class _OGBoulderGeneratorSchema _OGBoulderGeneratorschema; // size: 0x18, address: 0x80754120
class SchemaRegistrator _OGBoulderGeneratorschemaReg; // size: 0x8, address: 0x80754138
static class xOGSchema BoulderSchema; // size: 0x18, address: 0x80754140
static class SchemaRegistrator BoulderSchemaReg; // size: 0x8, address: 0x80754158
// Range: 0x80032620 -> 0x80032630
void World::_OGBoulderGeneratorEntity::Deactivate() {
}
// Range: 0x80032630 -> 0x80032680
void World::_OGBoulderGeneratorEntity::Destroy(class _OGBoulderGeneratorEntity * this /* r31 */) {
}
// signature: World::_OGBoulderGeneratorSchema::Fix(World::Asset *, long, int)
// Range: 0x800326E0 -> 0x800326E8
void World::_OGBoulderGeneratorSchema::Fix() {
}
// signature: World::_OGBoulderGeneratorSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800326F0 -> 0x8003273C
class EntityStub * World::_OGBoulderGeneratorSchema::CreateStub(class _OGBoulderGeneratorSchema * this /* r31 */) {
}
// signature: World::_OGBoulderGeneratorSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x80032740 -> 0x80032758
void World::_OGBoulderGeneratorSchema::DestroyStub() {
}
// signature: World::_OGBoulderGeneratorSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80032760 -> 0x800327C8
class Entity * World::_OGBoulderGeneratorSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World25_OGBoulderGeneratorEntity;
}
// Range: 0x80032850 -> 0x80032A08
void xEntBoulder_FitToModel(class xEntBoulder * ent /* r28 */) {
    // Local variables
    class xBound * ebound; // r29

    {
        // Range: 0x8003287C -> 0x80032930
        // Local variables
        class ModelPrototypeEntity * proto; // r5
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: xEntBoulder_Render(xEnt *)
// Range: 0x80032A10 -> 0x80032A14
void xEntBoulder_Render() {
}
// Range: 0x80032A20 -> 0x80032A70
void xEntBoulder_Init(void * ent /* r30 */, void * asset /* r31 */) {
}
// Range: 0x80032A70 -> 0x80032D90
void xEntBoulder_InitNoEntInit(class xEntBoulder * ent /* r29 */, class xEntAsset * asset /* r30 */) {
    // Local variables
    class xBound * ebound; // r0
    class xOGEntityModelContext context; // r1+0x8
    class xEntBoulderAsset * basset; // r28
    class xEntBoulderAsset * rawAsset; // r0

    // References
    // -> class zGlobals globals;
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x80032D90 -> 0x80032E98
void xEntBoulder_SceneExit() {
    // Local variables
    class xEntBoulder * current; // r30
    class xEntBoulder * last; // r29

    // References
    // -> class zGlobals globals;
    // -> static class xAssetTypeIDEntry typeList[248];
}
// signature: xEntBoulder_BUpdate(xEnt *, xVec3 *)
// Range: 0x80032EA0 -> 0x80032EA4
void xEntBoulder_BUpdate() {
}
// Range: 0x80032EB0 -> 0x80033250
void xEntBoulder_Update(class xEntBoulder * ent /* r31 */, class xScene * sc /* r28 */, float dt /* f31 */) {
    // Local variables
    class xVec3 rotatedLC; // r1+0x64
    class xBound * ebound; // r0
    class xVec3 oldPos; // r1+0x58
    class xVec3 sweptDisp; // r1+0x4C
    class xSweptSphere sws; // r1+0xA0
    class xVec3 newVel; // r1+0x40
    float newMag; // f0
    float oldMag; // f30
    float depenComp; // f0

    {
        // Range: 0x80033120 -> 0x80033160
        // Local variables
        class xMat3x3 rotM; // r1+0x70
    }
    {
        // Range: 0x80033194 -> 0x80033214
        // Local variables
        class xQuat quat; // r1+0x30
        class xMat4x3 * pMat; // r28
    }
}
// signature: xEntBoulder_KilledBySurface(xEntBoulder *, xScene *, float)
// Range: 0x80033260 -> 0x80033268
int xEntBoulder_KilledBySurface() {
}
// signature: xEntBoulder_Setup(xEntBoulder *)
// Range: 0x80033270 -> 0x800332B8
void xEntBoulder_Setup() {
}
// signature: xEntBoulder_Reset(xEntBoulder *, xScene *)
// Range: 0x800332C0 -> 0x800333BC
void xEntBoulder_Reset(class xEntBoulder * ent /* r30 */) {
}
// signature: xEntBoulderEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800333C0 -> 0x80033DC0
void xEntBoulderEventCB() {
    // Local variables
    class xEntBoulder * s; // r29
    class LightKitAsset * lightkitAsset; // r28

    {
        // Range: 0x80033A04 -> 0x80033AE8
        // Local variables
        class EventActionOneFloat * params; // r0

        {
            // Range: 0x80033A80 -> 0x80033AE8
            // Local variables
            class FloatAndVoid dist; // r1+0x8
        }
    }

    // References
    // -> struct {} __vt__Q28Graphics8LightKit;
    // -> static class xMemWatermark memWatermark;
    // -> class zGlobals globals;
    // -> class Scene * primaryScene;
}
// Range: 0x80033DC0 -> 0x80033EE8
static void RecurseChild(class xBase * child /* r29 */, class xEntBoulder * * boulList /* r30 */, int * currBoul /* r31 */) {
    // Local variables
    unsigned int i; // r26
    class xGroup * grp; // reg65535
}
// signature: xBoulderGenerator_Init(xBase &, xDynAsset &, unsigned long)
// Range: 0x80033EF0 -> 0x80033EF4
void xBoulderGenerator_Init() {
}
// signature: xBoulderGenerator_Init(xBoulderGenerator *, xBoulderGeneratorAsset *)
// Range: 0x80033F00 -> 0x80034608
void xBoulderGenerator_Init(class xBoulderGenerator * bg /* r21 */) {
    // References
    // -> class Scene * primaryScene;
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x80034610 -> 0x8003474C
void xBoulderGenerator_Reset(class xBoulderGenerator * bg /* r21 */) {
    {
        // Range: 0x80034620 -> 0x80034720
        // Local variables
        int i; // r22
    }

    // References
    // -> class Scene * primaryScene;
}
// signature: BoulderGen_GiveBirth(xBoulderGenerator *, int)
// Range: 0x80034750 -> 0x80034798
static void BoulderGen_GiveBirth() {
    {
        // Range: 0x80034750 -> 0x80034764
        // Local variables
        int i; // r8
    }
}
// signature: GetBoulderForGenerating(xBoulderGenerator *)
// Range: 0x800347A0 -> 0x80034A68
static int GetBoulderForGenerating() {
    // Local variables
    int i; // r11
    int j; // r12
    int oldestCulled; // r31
    int minAge; // r30
    int numList; // r0

    // References
    // -> static unsigned int * next;
    // -> static unsigned int state[624];
    // -> static int left;
}
// Range: 0x80034A70 -> 0x80035004
static class xEntBoulder * xBoulderGenerator_LaunchBase(class xBoulderGenerator * bg /* r26 */, int * outIndex /* r27 */) {
    // Local variables
    int i; // r0
    class xEntBoulder * b; // r29

    {
        // Range: 0x80034AB8 -> 0x80034EF0
        // Local variables
        class xVec3 launchPosition; // r1+0x2C
        class xEnt * genEnt; // r28

        {
            // Range: 0x80034C90 -> 0x80034D38
            // Local variables
            class xVec3 worldOffset; // r1+0x20
        }
    }

    // References
    // -> class Scene * primaryScene;
    // -> class zGlobals globals;
}
// Range: 0x80035010 -> 0x80035128
void xBoulderGenerator_Launch(class xBoulderGenerator * bg /* r29 */, class xVec3 * pnt /* r30 */, float t /* f31 */) {
    // Local variables
    int i; // r1+0x8
    class xEntBoulder * b; // r0
    float invTime; // f4
}
// signature: xBoulderGenerator_GetLaunchPosition(xBoulderGenerator *, xVec3 *)
// Range: 0x80035130 -> 0x80035174
void xBoulderGenerator_GetLaunchPosition() {
}
// signature: xBoulderGenerator_EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800351A0 -> 0x8003567C
void xBoulderGenerator_EventCB(class xBase * to /* r28 */, unsigned int toEvent /* r27 */, class EventAny * genericParams /* r29 */) {
    // Local variables
    class xBoulderGenerator * bg; // reg65535
    class EventActionLegacy * params; // r0
    class xBase * toParamWidgetPtr; // r30
    class xVec3 pnt; // r1+0x8

    {
        // Range: 0x80035368 -> 0x80035410
        // Local variables
        class xVec3 * npcPos; // r3
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x800356B0 -> 0x80035AFC
void xBoulderGenerator_GenBoulder(class xBoulderGenerator * bg /* r27 */) {
    // Local variables
    int i; // r30
    class xEntBoulder * b; // r29
    class xEnt * genEnt; // r28

    {
        // Range: 0x800356F8 -> 0x800358F8
        // Local variables
        class xVec3 launchPosition; // r1+0x20

        {
            // Range: 0x800357B8 -> 0x800357F8
            // Local variables
            class xVec3 worldOffset; // r1+0x14
        }
    }
    {
        // Range: 0x800358F8 -> 0x800359DC
        // Local variables
        float randAng; // f30
        class xVec3 perpRand; // r1+0x8
        float nf; // f1
        float p2c; // f30
        float p1c; // f31
    }
    {
        // Range: 0x80035A00 -> 0x80035A28
        // Local variables
        float sclMag; // f1
    }

    // References
    // -> class zGlobals globals;
}
