/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zCatapult.cpp
*/
// signature: zCatapultCollisionListener::contactPointConfirmedCallback(hkpContactPointConfirmedEvent &)
// Range: 0x800AD0B0 -> 0x800AD120
void zCatapultCollisionListener::contactPointConfirmedCallback(class zCatapultCollisionListener * this /* r30 */) {
    // Local variables
    class xBase * item; // r31
}
// Range: 0x80097B80 -> 0x80097BB8
void zCatapult::Setup(class zCatapult * this /* r31 */) {
}
// signature: zCatapult::Reset(const Sext::xBaseAsset &)
// Range: 0x80097BC0 -> 0x80097C40
void zCatapult::Reset(class zCatapult * this /* r31 */) {
}
// Range: 0x80097C40 -> 0x80097D6C
void zCatapult::Update(class zCatapult * this /* r30 */, float dt /* f30 */) {
    // Local variables
    float fraction; // f31

    {
        // Range: 0x80097CAC -> 0x80097D40
        // Local variables
        class hkVector4 targetHavokPosition; // r1+0x10
        class xVec3 displacement; // r1+0x20
        class xVec3 targetPosition; // r1+0x2C
    }
}
// Range: 0x80097D70 -> 0x80097F70
void zCatapult::Fire(class zCatapult * this /* r29 */, class xEnt * entity /* r30 */, class xVec3 & adjustment /* r31 */) {
    // Local variables
    class xVec3 targetDirection; // r1+0x14
    class xVec3 drift; // r1+0x8
    float aimedHeight; // f0
    float finalHeight; // f0
    float doubleArc; // f30
    float variableTerm; // f2
    float addB; // f3
    float subB; // f2
    float addA; // f4
    float subA; // f5
    float gravity; // f0
    float addAError; // f1
    float subAError; // f6

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> struct {} __vt__26zCatapultCollisionListener;
}
// Range: 0x80097F70 -> 0x8009801C
void zCatapult::Release(class zCatapult * this /* r31 */) {
    {
        // Range: 0x80097F88 -> 0x80098008
        // Local variables
        class EventActionLegacy params; // r1+0x8
    }
}
// signature: zCatapult::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80098020 -> 0x80098188
void zCatapult::HandleEvent(class zCatapult * this /* r29 */, class EventAny * genericParams /* r30 */) {
    {
        // Range: 0x800980EC -> 0x80098134
        // Local variables
        class xVec3 adjustment; // r1+0x8
        class xBase * toParamWidgetPtr; // r31
        class EventActionLegacy * params; // r0
    }
}
// Range: 0x80098190 -> 0x800981D0
void zCatapult::ClearCurrentData() {
}
// Range: 0x800981D0 -> 0x80098264
class Entity * Sext::Catapult::Create(class EntityHandleBase * handle /* r29 */, class Catapult * asset /* r30 */) {
    // References
    // -> struct {} __vt__9zCatapult;
}
