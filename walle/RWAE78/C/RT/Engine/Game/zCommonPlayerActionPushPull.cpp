/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zCommonPlayerActionPushPull.cpp
*/
// Range: 0x800B4DA0 -> 0x800B4F10
void zCommonPlayerActionPushPull::AddStates(class zCommonPlayerActionPushPull * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x800B4F10 -> 0x800B4FE8
void zCommonPlayerActionPushPull::AddActionTransitions(class xAnimTable * table /* r27 */) {
}
// Range: 0x800B4FF0 -> 0x800B526C
void zCommonPlayerActionPushPull::AddInternalTransitions(class xAnimTable * table /* r22 */) {
}
// signature: zCommonPlayerActionPushPull::AddStandardTransitionsFrom(xAnimTable *, const char *)
// Range: 0x800B5410 -> 0x800B5460
void zCommonPlayerActionPushPull::AddStandardTransitionsFrom() {
}
// signature: zCommonPlayerActionPushPull::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800B5460 -> 0x800B54D0
void zCommonPlayerActionPushPull::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x800B5570 -> 0x800B5580
void zCommonPlayerActionPushPull::Reset() {
}
// Range: 0x800B5580 -> 0x800B57BC
unsigned char zCommonPlayerActionPushPull::GetDesiredState(class zCommonPlayerActionPushPull * this /* r30 */) {
    // Local variables
    class xVec2 controlStick; // r1+0x8
    class xVec3 stickDir; // r1+0x10
}
// signature: zCommonPlayerActionPushPull::Timestep(float)
// Range: 0x800B57C0 -> 0x800B5824
void zCommonPlayerActionPushPull::Timestep(class zCommonPlayerActionPushPull * this /* r30 */) {
}
// Range: 0x800B5840 -> 0x800B5D48
void zCommonPlayerActionPushPull::Move(class zCommonPlayerActionPushPull * this /* r26 */, class xScene * s /* r27 */, float dt /* f29 */, class xEntFrame * frame /* r28 */) {
    // Local variables
    float gridCellSize; // f0
    bool toIdle; // r30
    float translation; // f30
    unsigned int animFlags; // r0
    bool moved; // r29
    bool moveable; // r0

    {
        // Range: 0x800B5920 -> 0x800B5B98
        // Local variables
        int newCell; // r4
        float oldSpeed; // f3
        unsigned char desiredState; // r0

        {
            // Range: 0x800B5A0C -> 0x800B5B74
            // Local variables
            float toCell; // f28
            float cellPos; // f1
            float pos; // f3
        }
    }
    {
        // Range: 0x800B5BC8 -> 0x800B5D10
        // Local variables
        class xVec3 * objectPos; // r0
        float actualTranslation; // f0
    }
}
// Range: 0x800B5D50 -> 0x800B62D8
void zCommonPlayerActionPushPull::Begin(class zCommonPlayerActionPushPull * this /* r31 */) {
    // Local variables
    int side; // r0
    float distance; // f3
    class xBound * bound; // r0
    class xVec3 * playerPos; // r0
    class xPlane plane; // r1+0x30
    class xVec3 upper; // r1+0x20
    class xVec3 lower; // r1+0x14
    float tempDist; // f0
    class xVec3 norm; // r1+0x8
    float timeScale; // f0

    {
        // Range: 0x800B5EE8 -> 0x800B5F44
        // Local variables
        float tempDist; // f0
    }
    {
        // Range: 0x800B5FB0 -> 0x800B601C
        // Local variables
        float tempDist; // f0
    }
}
// Range: 0x800B62E0 -> 0x800B62FC
void zCommonPlayerActionPushPull::End() {
}
// signature: zCommonPlayerActionPushPull::NotifyCollision(const xVec3 &, const SphereCollisionResults &)
// Range: 0x800B6300 -> 0x800B6324
void zCommonPlayerActionPushPull::NotifyCollision() {
}
