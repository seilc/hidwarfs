/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zDugLever.cpp
*/
static class xVec3 handleOrigin; // size: 0xC, address: 0x8077E09C
// Range: 0x8014AAA0 -> 0x8014AD7C
void zDugLever::Init(class zDugLever * this /* r27 */, void * inAsset /* r28 */) {
    // Local variables
    class zDugLeverAsset * typAsset; // r0

    // References
    // -> unsigned long long simpleShadowID;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class xMat4x3 g_I3;
    // -> class WiiFastHeap wiiFastHeap;
}
// Range: 0x8014AD80 -> 0x8014AEA0
void zDugLever::Setup(class zDugLever * this /* r31 */) {
    // Local variables
    class hkpRigidBodyCinfo havokCinfo; // r1+0x10

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x8014AEA0 -> 0x8014AF68
void zDugLever::SetupIcons(class zDugLever * this /* r31 */) {
    // Local variables
    class xVec3 hoverAboveCasing; // r1+0x14
}
// Range: 0x8014AF70 -> 0x8014B2C0
void zDugLever::SetupModel(class zDugLever * this /* r31 */) {
    // Local variables
    class xVec3 p1; // r1+0x10
    class xMat4x3 mat; // r1+0x20
    class RenderedPhysicsModelAsset reassignRPM; // r1+0x60

    // References
    // -> class Scene * primaryScene;
}
// Range: 0x8014B2C0 -> 0x8014B5DC
void zDugLever::Reset(class zDugLever * this /* r30 */) {
    // Local variables
    class Vector * pos; // r0
    class hkVector4 havokPos; // r1+0x60
    class Quaternion quat; // r1+0x50
    class hkQuaternion havokQuat; // r1+0x40

    {
        // Range: 0x8014B478 -> 0x8014B4AC
        // Local variables
        int x; // r7
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zDugLever::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8014B5E0 -> 0x8014B6D4
void zDugLever::HandleEvent(class zDugLever * this /* r29 */, unsigned int toEvent /* r30 */) {
}
// Range: 0x8014B6E0 -> 0x8014B7CC
class Entity * Sext::zDugLeverAsset::Create(class EntityHandleBase * handle /* r29 */, class zDugLeverAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__9zDugLever;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: zDugLever::Update(float)
// Range: 0x8014B7D0 -> 0x8014B7E8
void zDugLever::Update() {
}
// Range: 0x8014B7F0 -> 0x8014B888
void * zDugLever::~zDugLever(class zDugLever * this /* r30 */) {
    // References
    // -> struct {} __vt__9zDugLever;
}
// Range: 0x8014B890 -> 0x8014BB58
void zDugLever::TimeStep(class zDugLever * this /* r31 */, float dt /* f31 */) {
    // Local variables
    bool moved; // r30

    {
        // Range: 0x8014B95C -> 0x8014BB20
        // Local variables
        class hkQuaternion colQuat; // r1+0x10
        class xQuat quat; // r1+0x20
        class hkVector4 platformColPos; // r1+0x30

        {
            // Range: 0x8014B968 -> 0x8014BA68
            // Local variables
            class xMat4x3 rotMat; // r1+0x80
            float moveFraction; // f1
        }
        {
            // Range: 0x8014BA68 -> 0x8014BAB0
            // Local variables
            class xMat4x3 rotMat; // r1+0x40
            float moveFraction; // f1
        }
    }

    // References
    // -> static class xVec3 handleOrigin;
}
// Range: 0x8014BB60 -> 0x8014BCD8
bool zDugLever::CanStart(class zDugLever * this /* r30 */, class zCommonPlayer * player /* r31 */) {
    // Local variables
    class xVec3 entPos; // r1+0x20
}
// Range: 0x8014BCF0 -> 0x8014BDF8
void zDugLever::ContextCheckForActivity(class zDugLever * this /* r27 */, class zCommonPlayer * player /* r28 */) {
    {
        // Range: 0x8014BD04 -> 0x8014BDC8
        // Local variables
        class zUpContextAction * ca; // r0
    }
}
// signature: zDugLever::GetStartPosition(zCommonPlayer *, xVec3 &)
// Range: 0x8014BE10 -> 0x8014BE2C
void zDugLever::GetStartPosition() {
}
// signature: zDugLever::GetStartDirection(zCommonPlayer *, xVec3 &)
// Range: 0x8014BE30 -> 0x8014BE4C
void zDugLever::GetStartDirection() {
}
// signature: zDugLever::GetAnimPackage(ePlayerName)
// Range: 0x8014BE50 -> 0x8014BE68
class zAnimPackage * zDugLever::GetAnimPackage() {
}
