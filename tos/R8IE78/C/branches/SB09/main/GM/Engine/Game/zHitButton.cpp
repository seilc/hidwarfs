/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zHitButton.cpp
*/
static class xAnimTable * animButtonHammerStrengthTables; // size: 0x4, address: 0x80734BA8
unsigned long long animSetHitButtonID; // size: 0x8, address: 0x80734BB0
float maxAngSpeed; // size: 0x4, address: 0x806BD6D8
float accelTime; // size: 0x4, address: 0x806BD6DC
float spinTimePerPress; // size: 0x4, address: 0x806BD6E0
// Range: 0x800C7C00 -> 0x800C7C60
class Entity * Sext::zHitButtonAsset::Create(class EntityHandleBase * handle /* r30 */, class zHitButtonAsset * asset /* r31 */) {
}
// signature: zHitButton::zHitButton(World::EntityHandleBase *, Sext::zHitButtonAsset *)
// Range: 0x800C7C60 -> 0x800C7CD4
void * zHitButton::zHitButton(class zHitButton * this /* r30 */, class zHitButtonAsset * inAsset /* r31 */) {
    // References
    // -> struct {} __vt__10zHitButton;
}
// Range: 0x800C7CE0 -> 0x800C7D9C
void zHitButton::LoadModel(class zHitButton * this /* r31 */) {
    // Local variables
    class xVec3 p1; // r1+0x8
    class xMat4x3 mat; // r1+0x18
}
// Range: 0x800C7DA0 -> 0x800C7F30
void zHitButton::Setup(class zHitButton * this /* r31 */) {
    // Local variables
    class hkpRigidBodyCinfo cinfo; // r1+0x20
    class FloatAndVoid lodDist; // r1+0x10

    {
        // Range: 0x800C7E44 -> 0x800C7EE0
        // Local variables
        class xAnimTable * table; // r5
    }

    // References
    // -> class zGlobals globals;
    // -> static class xAnimTable * animButtonHammerStrengthTables;
}
// Range: 0x800C7F30 -> 0x800C80D0
void zHitButton::Reset(class zHitButton * this /* r31 */) {
    // References
    // -> class xMat4x3 g_I3;
}
// Range: 0x800C80D0 -> 0x800C8128
void zHitButton::DebugReset(class zHitButton * this /* r31 */) {
}
// signature: zHitButton::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800C8130 -> 0x800C88B8
void zHitButton::HandleEvent(class zHitButton * this /* r29 */, class EventAny * params /* r30 */) {
    {
        // Range: 0x800C82CC -> 0x800C8734
        // Local variables
        unsigned int hitEvent; // r0
        class EventActionHit * hitParams; // r0

        {
            // Range: 0x800C8314 -> 0x800C83F4
            // Local variables
            class ButtonPressed pressedEvent; // r1+0x10
        }
        {
            // Range: 0x800C83F4 -> 0x800C8680
            // Local variables
            class ButtonPressed pressedEvent; // r1+0xC

            {
                // Range: 0x800C84B4 -> 0x800C867C
                // Local variables
                class xVec3 hammerPos2; // r1+0x74
                class xVec3 hammerPos1; // r1+0x80
                class zSBPlayer * player; // r0
                class xVec3 buttonPos; // r1+0x8C
            }
        }
        {
            // Range: 0x800C8680 -> 0x800C8734
            // Local variables
            class ButtonPressed pressedEvent; // r1+0x8
        }
    }
    {
        // Range: 0x800C8734 -> 0x800C87F4
        // Local variables
        class xOGEntity * possibleDriver; // r4
        unsigned int flags; // r31
        class EventActionDrivenBy * paramst; // r0
    }
}
// Range: 0x800C88C0 -> 0x800C892C
void zHitButton::SetBSPVisible(class zHitButton * this /* r30 */, bool visibleValue /* r31 */) {
}
// Range: 0x800C8930 -> 0x800C8958
void zHitButton::UpdateVisibility() {
}
// Range: 0x800C8960 -> 0x800C89DC
void zHitButton::SetCollision(class zHitButton * this /* r30 */, bool collisionValue /* r31 */) {
}
// Range: 0x800C89E0 -> 0x800C8A94
void zHitButton::Unpress(class zHitButton * this /* r31 */) {
}
// signature: zHitButton::Press(Sext::eHitSource)
// Range: 0x800C8AA0 -> 0x800C8B28
void zHitButton::Press(class zHitButton * this /* r31 */) {
}
// Range: 0x800C8B30 -> 0x800C8BB4
void zHitButton::FullyActivated(class zHitButton * this /* r31 */) {
}
// Range: 0x800C8BC0 -> 0x800C8C7C
void zHitButton::MoveAlongAxisBy(class zHitButton * this /* r31 */, float distance /* f31 */) {
    // Local variables
    class xVec3 axis; // r1+0x8
}
// Range: 0x800C8C80 -> 0x800C8D90
void zHitButton::Update(class zHitButton * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x800C8D90 -> 0x800C8DA8
void zHitButton::SpinWheelReset() {
}
// Range: 0x800C8DB0 -> 0x800C8DCC
void zHitButton::SpinWheelPress() {
    // References
    // -> float spinTimePerPress;
}
// Range: 0x800C8DD0 -> 0x800C9018
void zHitButton::SpinWheelUpdate(class zHitButton * this /* r31 */, float dt /* f31 */) {
    // Local variables
    float previousAngVel; // f3
    class xMat3x3 rot; // r1+0x8

    // References
    // -> float accelTime;
    // -> float maxAngSpeed;
}
// Range: 0x800C9020 -> 0x800C9050
bool zHitButton::IsWinding() {
}
// Range: 0x800C9050 -> 0x800C90F0
void zHitButton::UpdatePhysFromRender(class zHitButton * this /* r30 */) {
    // Local variables
    class hkTransform transf; // r1+0x10

    // References
    // -> class hkVector4 hkVector4Zero;
}
// Range: 0x800C90F0 -> 0x800C91B4
void zHitButton::UpdatePhysFromRender(class zHitButton * this /* r29 */, float dt /* f31 */) {
    {
        // Range: 0x800C9118 -> 0x800C9190
        // Local variables
        class xQuat quat; // r1+0x30
        class xMat4x3 * pMat; // r30
    }
}
// signature: zHitButton::DrivePrep(World::xOGEntity *)
// Range: 0x800C91C0 -> 0x800C91F0
bool zHitButton::DrivePrep() {
    // References
    // -> class xMat4x3 g_I3;
}
// signature: zHitButton::DriveCauseMove(xMat4x3 *, xMat4x3 *, xMat4x3 *, xMat4x3 *, bool, bool, float, float)
// Range: 0x800C91F0 -> 0x800C9274
void zHitButton::DriveCauseMove(class zHitButton * this /* r30 */, class xMat4x3 * driverCurMat /* r0 */, class xMat4x3 * psgOrigMat /* r31 */, float dt /* f31 */) {
    // Local variables
    class xMat4x3 newMat; // r1+0x8
}
// signature: zHitButton::DriveAttach(World::xOGEntity *, unsigned int, int)
// Range: 0x800C9280 -> 0x800C9364
void zHitButton::DriveAttach(class zHitButton * this /* r28 */, class xOGEntity * passenger /* r29 */, unsigned int flags /* r30 */) {
    // Local variables
    class xMat3x3 rot; // r1+0x58
    class xVec3 ypr; // r1+0x8
    class xMat4x3 inv; // r1+0x18
}
// signature: zHitButton::CreateAnimTable(unsigned long long)
// Range: 0x800C9370 -> 0x800C9740
class xAnimTable * zHitButton::CreateAnimTable() {
    // Local variables
    class xAnimTable * table; // r26

    // References
    // -> unsigned long long animSetHitButtonID;
    // -> static class xAnimTable * animButtonHammerStrengthTables;
}
// signature: zHitButton::RemoveAnimTable(unsigned long long)
// Range: 0x800C97B0 -> 0x800C981C
void zHitButton::RemoveAnimTable() {
    // Local variables
    class xAnimTable * table; // r6
    class xAnimTable * prev; // r7

    // References
    // -> static class xAnimTable * animButtonHammerStrengthTables;
}
// signature: zHitButton::StrengthOneCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800C9820 -> 0x800C9844
unsigned int zHitButton::StrengthOneCheck() {
}
// signature: zHitButton::StrengthTwoCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800C9850 -> 0x800C9874
unsigned int zHitButton::StrengthTwoCheck() {
}
// signature: zHitButton::StrengthThreeCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800C9880 -> 0x800C98A4
unsigned int zHitButton::StrengthThreeCheck() {
}
// signature: zHitButton_UpdateCull_CB(void *, void *)
// Range: 0x800C98B0 -> 0x800C98E4
unsigned int zHitButton_UpdateCull_CB() {
    // Local variables
    class zHitButton * button; // r0
}
