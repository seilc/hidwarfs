/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zSniffnDig.cpp
*/
static float sniffAngle; // size: 0x4, address: 0x80782FD8
// Range: 0x802402D0 -> 0x8024036C
void zSniff::Init(class zSniff * this /* r30 */, void * inAsset /* r31 */) {
}
// Range: 0x80240370 -> 0x80240790
void zSniff::Setup(class zSniff * this /* r30 */) {
    // Local variables
    class xVec3 originalPos; // r1+0x14

    {
        // Range: 0x8024062C -> 0x802406D8
        // Local variables
        unsigned int i; // r31

        {
            // Range: 0x8024062C -> 0x802406D8
            // Local variables
            class zDirection * tempDir; // r3
        }
    }

    // References
    // -> class Scene * primaryScene;
}
// Range: 0x80240790 -> 0x802408C4
void zSniff::SetupIcons(class zSniff * this /* r31 */) {
    // Local variables
    class xVec3 iconPos; // r1+0x8
}
// signature: zSniff::inBox(const xVec3 *)
// Range: 0x802408D0 -> 0x8024096C
bool zSniff::inBox() {
    // Local variables
    class xVec3 tempPush; // r1+0x8
}
// Range: 0x80240970 -> 0x80240BD0
void zSniff::Reset(class zSniff * this /* r30 */) {
    {
        // Range: 0x80240B08 -> 0x80240B30
        // Local variables
        unsigned int i; // r25
    }

    // References
    // -> class Scene * primaryScene;
}
// Range: 0x80240BD0 -> 0x80240F00
void zSniff::HandleEvent(class zSniff * this /* r24 */, class xBase * from /* r25 */, unsigned int toEvent /* r26 */, class EventAny * params /* r27 */) {
    {
        // Range: 0x80240DB0 -> 0x80240DB0
        // Local variables
        unsigned int i; // r5
    }
    {
        // Range: 0x80240DF0 -> 0x80240E00
        // Local variables
        unsigned int i; // r6
    }

    // References
    // -> class Scene * primaryScene;
}
// Range: 0x80240F00 -> 0x80240FDC
class Entity * Sext::zSniffAsset::Create(class EntityHandleBase * handle /* r29 */, class zSniffAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__6zSniff;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x80240FE0 -> 0x80241070
void zSniff::SceneExit(class zSniff * this /* r28 */) {
    {
        // Range: 0x80240FF0 -> 0x80241034
        // Local variables
        unsigned int i; // r29
    }
}
// signature: zSniff::movePlayer(float, float, zDugPlayer *)
// Range: 0x80241070 -> 0x8024114C
bool zSniff::movePlayer(float dt /* f30 */, float camAngle /* f31 */) {
    {
        // Range: 0x80241078 -> 0x80241120
        // Local variables
        class xVec3 pC; // r1+0x8
    }
}
// Range: 0x80241150 -> 0x802416B4
void zSniff::TimeStep(class zSniff * this /* r28 */, float dt /* f31 */) {
    // Local variables
    class xVec3 Dug; // r1+0x34
    float coneLength; // f30
    float coneSpread; // f27
    float curAngle; // f0
    class xVec3 LeftEdge; // r1+0x28
    class xVec3 RightEdge; // r1+0x1C

    {
        // Range: 0x802414A4 -> 0x80241660
        // Local variables
        unsigned int i; // r29
    }

    // References
    // -> class Scene * primaryScene;
    // -> static float sniffAngle;
}
// Range: 0x802416C0 -> 0x8024180C
bool zSniff::CanStart(class zSniff * this /* r30 */, class zCommonPlayer * player /* r31 */) {
}
// Range: 0x80241810 -> 0x80241B94
void zSniff::DigUpObject(class zSniff * this /* r30 */) {
    // Local variables
    int j; // r0

    {
        // Range: 0x80241AF0 -> 0x80241B48
        // Local variables
        class hkVector4 pos; // r1+0x30
    }

    // References
    // -> class Scene * primaryScene;
}
// signature: zSniff::inTri(xVec3 *, xVec3 *, xVec3 *, xVec3 *)
// Range: 0x80241BA0 -> 0x80241DC4
bool zSniff::inTri() {
    // Local variables
    class xVec3 c0; // r1+0x98
    class xVec3 c1; // r1+0x8C
    class xVec3 c2; // r1+0x80
    class xVec3 d; // r1+0x74
    class xVec3 v0; // r1+0x68
    class xVec3 v1; // r1+0x5C
    class xVec3 v2; // r1+0x50
    float d00; // f0
    float d01; // f0
    float d02; // f0
    float d11; // f0
    float d12; // f0
    float invDenom; // f6
    float u; // f1
    float v; // f0
}
// signature: zSniff::GetAnimPackage(ePlayerName)
// Range: 0x80241DD0 -> 0x80241DE8
class zAnimPackage * zSniff::GetAnimPackage() {
}
// Range: 0x80241DF0 -> 0x80241F2C
void zSniff::ContextCheckForActivity(class zSniff * this /* r30 */, class zCommonPlayer * player /* r31 */) {
    {
        // Range: 0x80241E18 -> 0x80241F10
        // Local variables
        class zUpContextAction * ca; // r0
    }
}
// Range: 0x80241F30 -> 0x80241FE4
void zSniff::ContextCheckForPresence(class zSniff * this /* r29 */, class zCommonPlayer * player /* r31 */) {
    {
        // Range: 0x80241F50 -> 0x80241FB0
        // Local variables
        class zUpContextAction * ca; // r0
    }
}
// signature: zSniff::GetNextObjectPos(xVec3 &)
// Range: 0x80242000 -> 0x80242084
bool zSniff::GetNextObjectPos() {
    // Local variables
    bool found; // r8

    {
        // Range: 0x80242000 -> 0x80242000
        // Local variables
        unsigned int i; // r9
    }
}
