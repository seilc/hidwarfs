/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zCrank.cpp
*/
// signature: zCrank::Init(void *)
// Range: 0x800D0910 -> 0x800D0C1C
void zCrank::Init(class zCrank * this /* r27 */) {
    // Local variables
    class zCrankAsset * typAsset; // r28

    // References
    // -> unsigned long long simpleShadowID;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class xMat4x3 g_I3;
    // -> class WiiFastHeap wiiFastHeap;
}
// Range: 0x800D0C20 -> 0x800D0C28
float zCrank::GetMaxTilt() {
}
// Range: 0x800D0C30 -> 0x800D1058
void zCrank::Setup(class zCrank * this /* r31 */) {
    // Local variables
    class zDirection * Adirection; // r30
    class Vector4 row_1; // r1+0x58
    class Vector4 row_2; // r1+0x48
    class Vector4 row_3; // r1+0x38

    {
        // Range: 0x800D0F08 -> 0x800D1004
        // Local variables
        class Vector4 row_6; // r1+0x8
        class Vector4 row_5; // r1+0x18
        class Vector4 row_4; // r1+0x28
    }
}
// Range: 0x800D1080 -> 0x800D129C
void zCrank::SetupMainModel(class zCrank * this /* r31 */) {
    // Local variables
    class xVec3 p1; // r1+0x20
    class xMat4x3 mat; // r1+0x68
    class xBox objectBounds; // r1+0x50
    class BroadBound bb; // r1+0x30
    float xExtent; // f6
    float zExtent; // f7
}
// Range: 0x800D12F0 -> 0x800D1870
void zCrank::SetupOtherModels(class zCrank * this /* r31 */) {
    // Local variables
    class RenderedPhysicsModelAsset reassignRPM; // r1+0xE0
    class RenderedPhysicsModelAsset reassignRPM2; // r1+0x70
    class Quaternion tempMQ; // r1+0x20
    class xVec3 p1; // r1+0x10
    class xMat4x3 mat; // r1+0x30

    {
        // Range: 0x800D1610 -> 0x800D16B8
        // Local variables
        class hkpRigidBodyCinfo havokCinfo; // r1+0x150
    }

    // References
    // -> class Scene * primaryScene;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x800D1870 -> 0x800D1B9C
void zCrank::SetupIcons(class zCrank * this /* r31 */) {
    // Local variables
    class xVec3 iconPosA; // r1+0x14
    class xVec3 iconPosB; // r1+0x8
}
// Range: 0x800D1BA0 -> 0x800D1CE0
void zCrank::UpdateIcons(class zCrank * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class xVec3 iconPosA; // r1+0x14

    {
        // Range: 0x800D1C18 -> 0x800D1C88
        // Local variables
        class xVec3 iconPosB; // r1+0x8
    }
}
// Range: 0x800D1CE0 -> 0x800D1D20
void zCrank::ResetIcons(class zCrank * this /* r31 */) {
}
// Range: 0x800D1D20 -> 0x800D1EB8
void zCrank::SwapIcons() {
    // Local variables
    class zPlayer * attachedPlayer; // r6
    class zInWorldIcon * unattachedIcon; // r31
    class xVec3 newIconPos; // r1+0x8
}
// Range: 0x800D1EC0 -> 0x800D22DC
void zCrank::Reset(class zCrank * this /* r31 */) {
    {
        // Range: 0x800D227C -> 0x800D229C
        // Local variables
        int x; // r7
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800D22E0 -> 0x800D2798
void zCrank::HandleEvent(class zCrank * this /* r30 */, class xBase * from /* r27 */, unsigned int toEvent /* r31 */, class EventAny * params /* r28 */) {
    {
        // Range: 0x800D2618 -> 0x800D26D0
        // Local variables
        class xOGEntity * possibleDriver; // r4
        unsigned int flags; // r26
        class EventActionDrivenBy * paramst; // r0
    }

    // References
    // -> class Scene * primaryScene;
}
// Range: 0x800D27A0 -> 0x800D28D8
class Entity * Sext::zCrankAsset::Create(class EntityHandleBase * handle /* r29 */, class zCrankAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__6zCrank;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x800D2960 -> 0x800D2A18
void * zCrank::~zCrank(class zCrank * this /* r30 */) {
    // References
    // -> struct {} __vt__6zCrank;
}
// Range: 0x800D2A20 -> 0x800D36D0
void zCrank::TimeStep(class zCrank * this /* r30 */, float dt /* f27 */) {
    // Local variables
    bool moved; // r31
    float tiltModifier; // f30
    bool doTilt; // r7
    float crankSpeedA; // r31
    float crankSpeedB; // f0
    float crankSpeedDiff; // f29
    float crankSpeedAvg; // f28
    float maxFrameTilt; // f0
    bool tiltPrevent; // r27

    {
        // Range: 0x800D3090 -> 0x800D3198
        // Local variables
        float newHeight; // f0
    }
    {
        // Range: 0x800D34E8 -> 0x800D3580
        // Local variables
        class FMOD_VECTOR tempFV; // r1+0x68

        {
            // Range: 0x800D353C -> 0x800D354C
            // Local variables
            int x; // r27
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800D36D0 -> 0x800D3A6C
void zCrank::UpdatePlatform(class zCrank * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x800D37A0 -> 0x800D3858
        // Local variables
        class hkVector4 platformColPos; // r1+0xA0
    }
    {
        // Range: 0x800D3858 -> 0x800D3A2C
        // Local variables
        class hkQuaternion colQuat; // r1+0x60
        class xQuat quat; // r1+0x70
        class hkVector4 platformColPos; // r1+0x80
        class xVec3 rotateVec; // r1+0x90
    }
}
// Range: 0x800D3A70 -> 0x800D402C
void zCrank::ContextCheckForActivity(class zCrank * this /* r30 */, class zCommonPlayer * player /* r31 */) {
    {
        // Range: 0x800D3B48 -> 0x800D3DA0
        // Local variables
        class zUpContextAction * ca; // r0
    }
    {
        // Range: 0x800D3DB4 -> 0x800D400C
        // Local variables
        class zUpContextAction * ca; // r0
    }

    // References
    // -> static class xBox sUnitBoxg;
}
// signature: zCrank::GetAnimPackage(ePlayerName)
// Range: 0x800D4040 -> 0x800D407C
class zAnimPackage * zCrank::GetAnimPackage() {
}
// signature: zCrank::GetPos(zPlayer *)
// Range: 0x800D4080 -> 0x800D4168
class xVec3 zCrank::GetPos() {
    // Local variables
    class xVec3 offset; // r1+0x8

    // References
    // -> class xVec3 m_Null;
}
// signature: zCrank::GetDir(zPlayer *)
// Range: 0x800D4170 -> 0x800D41E0
class xVec3 zCrank::GetDir() {
    // References
    // -> class xVec3 m_Null;
}
// signature: zCrank::GetFreePosAndDir(xVec3 *, xVec3 *)
// Range: 0x800D41E0 -> 0x800D4298
bool zCrank::GetFreePosAndDir() {
}
// signature: zCrank::IsInFreeBox(const xVec3 *, const zPlayer *)
// Range: 0x800D42A0 -> 0x800D4520
bool zCrank::IsInFreeBox() {
    // Local variables
    class hkVector4 hkPos; // r1+0x40

    // References
    // -> static class xBox sUnitBoxg;
}
// signature: zCrank::HasFreeSpot(const zPlayer *)
// Range: 0x800D4520 -> 0x800D4578
bool zCrank::HasFreeSpot() {
}
// signature: zCrank::ReleasePlayer(zPlayer *)
// Range: 0x800D4580 -> 0x800D4A04
bool zCrank::ReleasePlayer(class zCrank * this /* r31 */) {
}
// Range: 0x800D4A10 -> 0x800D5354
void zCrank::AttachCranks(class zCrank * this /* r31 */) {
    // Local variables
    class xMat3x3 D; // r1+0x1F0
    class xMat3x3 tmp; // r1+0x1C0
    class xQuat quat; // r1+0x150
    class xQuat tempQuat; // r1+0x140
    class hkQuaternion colQuat; // r1+0x130
    class xVec3 rotateVec; // r1+0x11C

    {
        // Range: 0x800D4B0C -> 0x800D4CDC
        // Local variables
        class hkVector4 diffVector; // r1+0xF0
        class hkQuaternion tempQuat2; // r1+0x100
        class xMat3x3 tmp2; // r1+0x190
        class xVec3 R; // r1+0x110
    }
    {
        // Range: 0x800D4CDC -> 0x800D4DD4
        // Local variables
        class hkQuaternion tempQuat2; // r1+0xE0
    }
    {
        // Range: 0x800D4DE0 -> 0x800D4FB0
        // Local variables
        class hkVector4 diffVector; // r1+0xB0
        class hkQuaternion tempQuat2; // r1+0xC0
        class xMat3x3 tmp2; // r1+0x160
        class xVec3 R; // r1+0xD0
    }
    {
        // Range: 0x800D4FB0 -> 0x800D50A4
        // Local variables
        class hkQuaternion tempQuat2; // r1+0xA0
    }
    {
        // Range: 0x800D50A4 -> 0x800D5140
        // Local variables
        class xVec3 R; // r1+0x94
    }
    {
        // Range: 0x800D5140 -> 0x800D51E0
        // Local variables
        class xVec3 R; // r1+0x88
    }
    {
        // Range: 0x800D51E0 -> 0x800D528C
        // Local variables
        class xVec3 R; // r1+0x7C
    }
    {
        // Range: 0x800D528C -> 0x800D533C
        // Local variables
        class xVec3 R; // r1+0x70
    }
}
// signature: zCrank::PlayerStore(zPlayer *)
// Range: 0x800D5360 -> 0x800D54C0
void zCrank::PlayerStore() {
}
// Range: 0x800D54C0 -> 0x800D5974
void zCrank::PlayerUpdate(class zCrank * this /* r30 */, class zPlayer * player /* r31 */) {
    // Local variables
    class xMat3x3 D; // r1+0x68
    class xMat3x3 tmp; // r1+0x38

    {
        // Range: 0x800D5560 -> 0x800D572C
        // Local variables
        class xVec3 R; // r1+0x2C
    }
    {
        // Range: 0x800D5760 -> 0x800D592C
        // Local variables
        class xVec3 R; // r1+0x20
    }
}
// Range: 0x800D5980 -> 0x800D59DC
float zCrank::Offset() {
}
// signature: zCrank::Uncrank(float)
// Range: 0x800D59E0 -> 0x800D5B30
bool zCrank::Uncrank(class zCrank * this /* r30 */) {
    // Local variables
    bool uncranked; // r31
}
// signature: zCrank::IsOtherPlayerCranking(zPlayer *)
// Range: 0x800D5B30 -> 0x800D5B9C
bool zCrank::IsOtherPlayerCranking() {
}
// Range: 0x800D5BA0 -> 0x800D6108
void zCrank::DriveAttach(class zCrank * this /* r29 */, class xOGEntity * passenger /* r30 */, unsigned int flags /* r31 */) {
    // Local variables
    class xMat4x3 D; // r1+0x48
    class xVec3 euler; // r1+0x8
    class xMat3x3 a_descaled; // r1+0x18
}
// signature: zCrank::DriveCauseMove(xMat4x3 *, xMat4x3 *, xMat4x3 *, xMat4x3 *, bool, bool, float, float)
// Range: 0x800D6120 -> 0x800D6124
void zCrank::DriveCauseMove() {
}
