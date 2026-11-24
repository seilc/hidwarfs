/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zGeyser.cpp
*/
// Range: 0x800FD980 -> 0x800FDFF4
void zGeyser::Setup(class zGeyser * this /* r31 */) {
    {
        // Range: 0x800FDA44 -> 0x800FDB90
        // Local variables
        class hkpRigidBodyCinfo cinfo; // r1+0x30
    }
    {
        // Range: 0x800FDDEC -> 0x800FDF5C
        // Local variables
        class BroadBound bb; // r1+0x10
    }

    // References
    // -> class xOGModelUpdater g_modelUpdateNone;
    // -> class xMat4x3 g_I3;
    // -> class Vector3 vec3Zero;
}
// Range: 0x800FE000 -> 0x800FE2D0
void zGeyser::SetVisible(class zGeyser * this /* r30 */, bool inValue /* r26 */) {
    // References
    // -> class Scene * primaryScene;
}
// signature: zGeyser::SetCollision(bool)
// Range: 0x800FE2D0 -> 0x800FE324
void zGeyser::SetCollision(class zGeyser * this /* r31 */) {
}
// Range: 0x800FE330 -> 0x800FE3E8
void zGeyser::SetupSounds(class zGeyser * this /* r29 */) {
}
// signature: zGeyser::UpdateSounds(zGeyser::GeyserState, bool)
// Range: 0x800FE3F0 -> 0x800FE6B0
void zGeyser::UpdateSounds(class zGeyser * this /* r31 */) {
}
// Range: 0x800FE6B0 -> 0x800FE7CC
void zGeyser::CleanUp(class zGeyser * this /* r31 */) {
}
// Range: 0x800FE7D0 -> 0x800FE858
void * zGeyser::~zGeyser(class zGeyser * this /* r30 */) {
    // References
    // -> struct {} __vt__7zGeyser;
}
// Range: 0x800FE860 -> 0x800FEED0
void zGeyser::Update(class zGeyser * this /* r27 */, float dt /* f28 */) {
    // Local variables
    bool boosting; // r31
    enum GeyserState state; // r30
    float BlockExpectedY; // f0
    float BoostExpectedY; // f0
    bool BoostOnHole; // r29
    bool BlockOnHole; // r28
    class xBox * BoostBound; // r0
    class xVec3 localBoostPoint; // r1+0x38
    float BlockTargetY; // f29
    float BoostTargetY; // f0
    float step; // f31

    {
        // Range: 0x800FEA10 -> 0x800FEAB0
        // Local variables
        class xVec3 localBlockPoint; // r1+0x2C
        class xBox * BlockBound; // r0
    }
    {
        // Range: 0x800FEB54 -> 0x800FEC64
        // Local variables
        class xMat4x3 mat; // r1+0x48
    }
    {
        // Range: 0x800FEDA0 -> 0x800FEDEC
        // Local variables
        class EventActionAnimPlay params; // r1+0x20
    }
    {
        // Range: 0x800FEDF0 -> 0x800FEE3C
        // Local variables
        class EventActionAnimPlay params; // r1+0x14
    }
    {
        // Range: 0x800FEE40 -> 0x800FEE8C
        // Local variables
        class EventActionAnimPlay params; // r1+0x8
    }
}
// signature: zGeyser::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800FEEF0 -> 0x800FEF98
void zGeyser::HandleEvent(class zGeyser * this /* r29 */) {
}
// Range: 0x800FEFA0 -> 0x800FF1A0
class Entity * Sext::zGeyserAsset::Create(class EntityHandleBase * handle /* r29 */, class zGeyserAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__7zGeyser;
    // -> struct {} __vt__Q25World9xOGEntity;
}
