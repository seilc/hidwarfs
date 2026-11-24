/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zFountain.cpp
*/
// Range: 0x800B1E00 -> 0x800B1E60
class Entity * Sext::zFountainAsset::Create(class EntityHandleBase * handle /* r30 */, class zFountainAsset * asset /* r31 */) {
}
// signature: zFountain::zFountain(World::EntityHandleBase *, Sext::zFountainAsset *)
// Range: 0x800B1E60 -> 0x800B1EE4
void * zFountain::zFountain(class zFountain * this /* r30 */, class zFountainAsset * inAsset /* r31 */) {
    // References
    // -> struct {} __vt__9zFountain;
}
// Range: 0x800B1EF0 -> 0x800B1FBC
void zFountain::Setup(class zFountain * this /* r31 */) {
    // Local variables
    class hkpRigidBodyCinfo cinfo; // r1+0x10

    {
        // Range: 0x800B1F78 -> 0x800B1F9C
        // Local variables
        class xBase * obj; // r0
    }
}
// Range: 0x800B1FC0 -> 0x800B20E0
void zFountain::Reset(class zFountain * this /* r30 */) {
    // Local variables
    class xMat4x3 mat; // r1+0x8
}
// signature: zFountain::Update(float)
// Range: 0x800B20E0 -> 0x800B22D4
void zFountain::Update(class zFountain * this /* r30 */) {
    // Local variables
    class zSBPlayer * player; // r31
    class xVec3 vDist; // r1+0x38
    float dist2; // f0

    {
        // Range: 0x800B216C -> 0x800B224C
        // Local variables
        class SBFillWithGooVec fluidParams; // r1+0x2C

        {
            // Range: 0x800B2178 -> 0x800B21CC
            // Local variables
            class xVec3 modelToPlayer; // r1+0x20
        }
    }
}
// signature: zFountain::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800B22E0 -> 0x800B246C
void zFountain::HandleEvent(class zFountain * this /* r31 */) {
}
// signature: zFountain::SetVisibility(bool)
// Range: 0x800B2470 -> 0x800B2504
void zFountain::SetVisibility(class zFountain * this /* r31 */) {
}
// signature: zFountain::TurnOn(bool)
// Range: 0x800B2510 -> 0x800B2588
void zFountain::TurnOn(class zFountain * this /* r31 */) {
}
// Range: 0x800B2590 -> 0x800B25E4
void zFountain::UpdatePhysFromRender(class zFountain * this /* r31 */) {
    // Local variables
    class hkTransform transf; // r1+0x10
}
// Range: 0x800B25F0 -> 0x800B26B4
class zFXSpawn * zFountain::EmitEffect(class zFountain * this /* r27 */, class zFXSpawn * fx /* r28 */, class xMat4x3 & location /* r29 */, bool attachToEntity /* r30 */) {
    // Local variables
    class zFXSpawn * fxSpawn; // r31
}
// Range: 0x800B26C0 -> 0x800B273C
void * zFountain::~zFountain(class zFountain * this /* r30 */) {
    // References
    // -> struct {} __vt__9zFountain;
}
// signature: zFountain::DrivePrep(World::xOGEntity *)
// Range: 0x800B2740 -> 0x800B27A0
bool zFountain::DrivePrep(class zFountain * this /* r31 */) {
    // Local variables
    class xMat4x3 invDriverMat; // r1+0x8
}
// signature: zFountain::DriveCauseMove(xMat4x3 *, xMat4x3 *, xMat4x3 *, xMat4x3 *, bool, bool, float, float)
// Range: 0x800B27A0 -> 0x800B27E4
void zFountain::DriveCauseMove(class zFountain * this /* r31 */) {
    // Local variables
    class xMat4x3 newMat; // r1+0x8
}
