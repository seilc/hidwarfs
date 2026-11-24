/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zBranchSwitch.cpp
*/
// Range: 0x800F9860 -> 0x800F990C
void zBranchSwitch::Init(class zBranchSwitch * this /* r30 */, class zBranchSwitchAsset * inAsset /* r31 */) {
}
// signature: zBranchSwitch::SetVisible(bool)
// Range: 0x800F9910 -> 0x800F9928
void zBranchSwitch::SetVisible() {
}
// Range: 0x800F9930 -> 0x800F9AA8
void zBranchSwitch::Setup(class zBranchSwitch * this /* r31 */) {
    // Local variables
    class hkpRigidBodyCinfo cinfo; // r1+0x10
}
// Range: 0x800F9AD0 -> 0x800F9B74
void * zBranchSwitch::~zBranchSwitch(class zBranchSwitch * this /* r30 */) {
    // References
    // -> struct {} __vt__13zBranchSwitch;
}
// Range: 0x800F9B80 -> 0x800FA1B4
void zBranchSwitch::Update(class zBranchSwitch * this /* r28 */, float dt /* f31 */) {
    // Local variables
    int weight; // r31
    int currentSound; // r30
    class hkpRigidBody * rb; // r29
    class Quaternion quat; // r1+0x38
    class xVec3 diff; // r1+0x2C
    class xVec3 RotxVec; // r1+0x20
    class hkQuaternion havokQuat; // r1+0x10

    {
        // Range: 0x800F9C74 -> 0x800F9CE8
        // Local variables
        int x; // r9

        {
            // Range: 0x800F9C74 -> 0x800F9CE8
            // Local variables
            class xBase * pBase; // r0
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zBranchSwitch::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800FA1C0 -> 0x800FA36C
void zBranchSwitch::HandleEvent(class zBranchSwitch * this /* r29 */) {
}
// Range: 0x800FA370 -> 0x800FA544
class Entity * Sext::zBranchSwitchAsset::Create(class EntityHandleBase * handle /* r29 */, class zBranchSwitchAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__13zBranchSwitch;
    // -> struct {} __vt__Q25World9xOGEntity;
}
