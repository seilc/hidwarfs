/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zExplosiveObject.cpp
*/
// signature: zExplosiveObject::Init(Sext::ExplosiveObject *)
// Range: 0x800AC6C0 -> 0x800AC7A4
void zExplosiveObject::Init(class zExplosiveObject * this /* r29 */) {
    {
        // Range: 0x800AC71C -> 0x800AC78C
        // Local variables
        class hkpPropertyValue val; // r1+0x18
    }
}
// Range: 0x800AC7B0 -> 0x800AC7B4
void zExplosiveObject::Setup() {
}
// signature: zExplosiveObject::Reset(xScene *)
// Range: 0x800AC7C0 -> 0x800AC864
void zExplosiveObject::Reset(class zExplosiveObject * this /* r29 */) {
}
// signature: zExplosiveObject::Update(xScene *, float)
// Range: 0x800AC870 -> 0x800ACA90
void zExplosiveObject::Update(class zExplosiveObject * this /* r30 */, float deltaTime /* f30 */) {
    // Local variables
    bool shouldExplodeChained; // r31

    {
        // Range: 0x800AC948 -> 0x800ACA68
        // Local variables
        float expDamage; // f30
        float expRad; // f31
    }
}
// signature: zExplosiveObject::CombatDamage(const zCombatDamageInfo &)
// Range: 0x800ACA90 -> 0x800ACB24
void zExplosiveObject::CombatDamage() {
}
// Range: 0x800ACB30 -> 0x800ACC00
void zExplosiveObject::HandleEvent(class zExplosiveObject * this /* r28 */, class xBase * from /* r29 */, unsigned int event /* r30 */, class EventAny * params /* r31 */) {
    // Local variables
    bool useSimpleObjEventCB; // r6

    // References
    // -> class zGlobals globals;
}
// signature: zExplosiveObject::CreateEffect(unsigned long long)
// Range: 0x800ACC00 -> 0x800ACC94
bool zExplosiveObject::CreateEffect(class zExplosiveObject * this /* r30 */) {
    // Local variables
    class zFXSpawn * spawnPt; // r31

    {
        // Range: 0x800ACC20 -> 0x800ACC7C
        // Local variables
        class zFXSpawn * sPt; // r0
    }
}
// Range: 0x800ACCA0 -> 0x800ACD8C
void zExplosiveObject::Explode(class zExplosiveObject * this /* r31 */, float radius /* f30 */, float damage /* f31 */) {
    // References
    // -> class zBombManager gBombManager;
}
// Range: 0x800ACD90 -> 0x800ACE20
void zExplosiveObject::Kill(class zExplosiveObject * this /* r31 */) {
}
// Range: 0x800ACE20 -> 0x800ACE80
void zExplosiveObject::NotifyChainedExplosives(class zExplosiveObject * this /* r29 */) {
    // References
    // -> class zGlobals globals;
}
// Range: 0x800ACE80 -> 0x800ACF34
bool zExplosiveObject::CheckForContactExplosion(class zExplosiveObject * this /* r29 */, int contactType /* r30 */) {
    {
        // Range: 0x800ACE98 -> 0x800ACF1C
        // Local variables
        class hkpPropertyValue val; // r1+0x18
    }
}
// signature: zExplosiveObject::CheckForChainedExplosion(const xVec3 &)
// Range: 0x800ACF40 -> 0x800ACFDC
void zExplosiveObject::CheckForChainedExplosion(class zExplosiveObject * this /* r31 */) {
    // Local variables
    class xVec3 explodeDist; // r1+0x8
    float dist; // f0
}
// Range: 0x800ACFE0 -> 0x800AD094
class Entity * Sext::ExplosiveObject::Create(class EntityHandleBase * handle /* r29 */, class ExplosiveObject * asset /* r30 */) {
    // References
    // -> struct {} __vt__16zExplosiveObject;
}
// signature: zExplosiveObject::StaticHandleEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800AD0A0 -> 0x800AD0B0
void zExplosiveObject::StaticHandleEvent(class xBase * from /* r0 */) {
}
