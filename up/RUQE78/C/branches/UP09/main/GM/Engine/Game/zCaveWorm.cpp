/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zCaveWorm.cpp
*/
static class xAnimTable * animCaveWormTables; // size: 0x4, address: 0x8081C2F4
static float drawInSpeed; // size: 0x4, address: 0x807A3420
static float WORMBITE; // size: 0x4, address: 0x807A3424
static float CaptureRadius; // size: 0x4, address: 0x807A3428
static float WarnRadius; // size: 0x4, address: 0x807A342C
static int Strength; // size: 0x4, address: 0x807A3430
static float CooldownTime; // size: 0x4, address: 0x807A3434
// Range: 0x8012F030 -> 0x8012F30C
void zCaveWorm::Init(class zCaveWorm * this /* r27 */, void * inAsset /* r28 */) {
    // Local variables
    class zCaveWormAsset * typAsset; // r0

    // References
    // -> unsigned long long simpleShadowID;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class xMat4x3 g_I3;
    // -> class WiiFastHeap wiiFastHeap;
}
// Range: 0x8012F330 -> 0x8012F338
class xVec3 * zCaveWorm::GetAttachDPos() {
}
// Range: 0x8012F340 -> 0x8012F61C
void zCaveWorm::Setup(class zCaveWorm * this /* r31 */) {
    // Local variables
    class xAnimTable * table; // r5

    // References
    // -> class Scene * primaryScene;
    // -> class zGlobals globals;
    // -> static class xAnimTable * animCaveWormTables;
}
// Range: 0x8012F620 -> 0x8012F724
void zCaveWorm::LoadValuesFromAsset(class zCaveWorm * this /* r31 */) {
    // Local variables
    float extraLength; // f1

    // References
    // -> static int Strength;
    // -> static float CooldownTime;
}
// Range: 0x8012F730 -> 0x8012F7F8
void zCaveWorm::Reset(class zCaveWorm * this /* r30 */) {
    // References
    // -> static int Strength;
}
// signature: zCaveWorm::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8012F800 -> 0x8012FBD0
void zCaveWorm::HandleEvent(class zCaveWorm * this /* r31 */) {
    // References
    // -> class Scene * primaryScene;
}
// Range: 0x8012FBD0 -> 0x8012FCAC
class Entity * Sext::zCaveWormAsset::Create(class EntityHandleBase * handle /* r29 */, class zCaveWormAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__9zCaveWorm;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: zCaveWorm::Update(float)
// Range: 0x8012FCB0 -> 0x8012FCB4
void zCaveWorm::Update() {
}
// Range: 0x8012FCC0 -> 0x8012FE68
void zCaveWorm::Release(class zCaveWorm * this /* r24 */, bool bite /* r25 */) {
    {
        // Range: 0x8012FCF8 -> 0x8012FDFC
        // Local variables
        int x; // r26
    }

    // References
    // -> class xGlobals * xglobals;
    // -> static float WORMBITE;
    // -> class xVec3 m_Null;
}
// Range: 0x8012FE70 -> 0x8013023C
void zCaveWorm::TimeStep(class zCaveWorm * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class xVec3 p1; // r1+0x68
    class xVec3 p2; // r1+0x5C

    {
        // Range: 0x80130170 -> 0x80130214
        // Local variables
        class xMat4x3 mat; // r1+0x78
    }

    // References
    // -> static int Strength;
    // -> class xGlobals * xglobals;
}
// signature: zCaveWorm::ContextCheckForActivity(zCommonPlayer *)
// Range: 0x80130240 -> 0x8013026C
void zCaveWorm::ContextCheckForActivity() {
}
// signature: zCaveWorm::GetAnimPackage(ePlayerName)
// Range: 0x80130290 -> 0x801302DC
class zAnimPackage * zCaveWorm::GetAnimPackage() {
}
// Range: 0x801302E0 -> 0x80130954
class xAnimTable * zCaveWorm::CreateAnimTable(unsigned long long animSetID /* r24:r23 */) {
    // Local variables
    class xAnimTable * table; // r31

    // References
    // -> static class xAnimTable * animCaveWormTables;
}
// signature: zCaveWorm::RemoveAnimTable(unsigned long long)
// Range: 0x80130B20 -> 0x80130BD4
void zCaveWorm::RemoveAnimTable() {
    // Local variables
    class xAnimTable * table; // r31
    class xAnimTable * prev; // r30

    // References
    // -> static class xAnimTable * animCaveWormTables;
}
// Range: 0x80130BE0 -> 0x801312B4
void zCaveWorm::checkForStick(class zCaveWorm * this /* r25 */, float dt /* f29 */) {
    {
        // Range: 0x80130C0C -> 0x80131270
        // Local variables
        int x; // r27

        {
            // Range: 0x80130C0C -> 0x80131270
            // Local variables
            class xVec3 posy; // r1+0x20
            class xVec3 posx; // r1+0x2C
            class xVec3 wormPos; // r1+0x44

            {
                // Range: 0x80130C0C -> 0x80130C0C
                // Local variables
                int y; // r26

                {
                    // Range: 0x80130C0C -> 0x80130C0C
                    // Local variables
                    class xVec3 posx; // r1+0x38
                }
            }
        }
    }

    // References
    // -> static float WarnRadius;
    // -> class xGlobals * xglobals;
    // -> static float CaptureRadius;
}
// Range: 0x801312C0 -> 0x80131540
void zCaveWorm::checkForMovement(class zCaveWorm * this /* r30 */, float dt /* f28 */) {
    {
        // Range: 0x80131300 -> 0x801314EC
        // Local variables
        int x; // r31

        {
            // Range: 0x80131300 -> 0x801314EC
            // Local variables
            class hkVector4 pos; // r1+0x10
            float diffZ; // f3
            float diffX; // f2
            class xVec3 posx; // r1+0x20
        }
    }

    // References
    // -> class xGlobals * xglobals;
    // -> static float drawInSpeed;
}
