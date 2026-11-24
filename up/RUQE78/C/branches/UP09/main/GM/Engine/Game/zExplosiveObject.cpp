/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zExplosiveObject.cpp
*/
// Range: 0x80152AA0 -> 0x80152AA4
void zExplosiveObject::Setup() {
}
// signature: zExplosiveObject::Update(xScene *, float)
// Range: 0x80152AB0 -> 0x80153250
void zExplosiveObject::Update(class zExplosiveObject * this /* r30 */, float deltaTime /* f30 */) {
    // Local variables
    bool shouldExplodeChained; // r31

    {
        // Range: 0x80152DA0 -> 0x80153220
        // Local variables
        float expDamage; // f30
        float expRad; // f31
    }

    // References
    // -> class zBombManager gBombManager;
    // -> class zGlobals globals;
}
// Range: 0x80153250 -> 0x80153414
class Entity * Sext::ExplosiveObject::Create(class EntityHandleBase * handle /* r30 */, class ExplosiveObject * asset /* r29 */) {
    // References
    // -> struct {} __vt__16zExplosiveObject;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: zExplosiveObject::StaticUpdate(xEnt *, xScene *, float)
// Range: 0x80153420 -> 0x80153424
void zExplosiveObject::StaticUpdate() {
}
// Range: 0x80153430 -> 0x8015357C
void zExplosiveObject::StaticHandleEvent(class xBase * from /* r28 */, class xBase * to /* r29 */, unsigned int toEvent /* r30 */, class EventAny * params /* r31 */) {
    // References
    // -> class zGlobals globals;
}
