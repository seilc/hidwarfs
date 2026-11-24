/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zSwim.cpp
*/
// Range: 0x800D98C0 -> 0x800D9910
void zSwim::Init(class zSwim * this /* r30 */, void * inAsset /* r31 */) {
}
// Range: 0x800D9910 -> 0x800D9974
void zSwim::Setup(class zSwim * this /* r31 */) {
}
// Range: 0x800D9980 -> 0x800D9AD4
void zSwim::LoadValuesFromAsset(class zSwim * this /* r31 */) {
    {
        // Range: 0x800D99DC -> 0x800D9A08
        // Local variables
        unsigned int i; // r28
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x800D9AE0 -> 0x800D9B94
void zSwim::Reset(class zSwim * this /* r31 */) {
    // References
    // -> class xVec3 m_Null;
}
// signature: zSwim::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800D9BA0 -> 0x800D9CBC
void zSwim::HandleEvent(class zSwim * this /* r29 */) {
}
// Range: 0x800D9CC0 -> 0x800D9D9C
class Entity * Sext::zWaterAsset::Create(class EntityHandleBase * handle /* r29 */, class zWaterAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__5zSwim;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: zSwim::Update(float)
// Range: 0x800D9DA0 -> 0x800D9DA4
void zSwim::Update() {
}
// Range: 0x800D9DB0 -> 0x800D9DB4
void zSwim::SceneExit() {
}
// Range: 0x800D9DC0 -> 0x800D9E74
void zSwim::ContextCheckForActivity(class zSwim * this /* r30 */, class zCommonPlayer * player /* r31 */) {
    {
        // Range: 0x800D9E04 -> 0x800D9E5C
        // Local variables
        class zUpContextAction * ca; // r0
    }
}
// Range: 0x800D9E90 -> 0x800D9F58
void zSwim::ContextCheckForNavigation(class zSwim * this /* r30 */, class zCommonPlayer * player /* r31 */) {
    {
        // Range: 0x800D9ED4 -> 0x800D9F40
        // Local variables
        class zUpContextAction * ca; // r0
    }
}
// Range: 0x800D9F60 -> 0x800DA170
void zSwim::TimeStep(class zSwim * this /* r28 */, float dt /* f30 */) {
    {
        // Range: 0x800D9F84 -> 0x800DA148
        // Local variables
        bool made; // r30
        class xVec3 currentVec; // r1+0x20

        {
            // Range: 0x800D9FA4 -> 0x800DA134
            // Local variables
            int x; // r29

            {
                // Range: 0x800D9FA4 -> 0x800DA134
                // Local variables
                class xVec3 currentXZ; // r1+0x14
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800DA180 -> 0x800DA360
bool zSwim::CanStart(class zSwim * this /* r30 */, class zCommonPlayer * player /* r31 */) {
    // Local variables
    unsigned int currentActionID; // r0
}
// Range: 0x800DA360 -> 0x800DA434
void zSwim::ContextCheckForPresence(class zSwim * this /* r30 */, class zCommonPlayer * player /* r31 */) {
    {
        // Range: 0x800DA37C -> 0x800DA41C
        // Local variables
        class zUpContextAction * ca; // r0
    }
}
// signature: zSwim::GetAnimPackage(ePlayerName)
// Range: 0x800DA460 -> 0x800DA49C
class zAnimPackage * zSwim::GetAnimPackage() {
}
// Range: 0x800DA4A0 -> 0x800DA4AC
float zSwim::GetSwimBoostTime() {
}
// Range: 0x800DA4B0 -> 0x800DA958
void zSwim::checkForJoin(class zSwim * this /* r29 */, class zDugPlayer * dug /* r30 */, class zCarlPlayer * carl /* r31 */) {
    // Local variables
    class xVec3 dugPos; // r1+0x38
    class xVec3 carlPos; // r1+0x2C
    float dx; // f2
    float dy; // f0
    float dz; // f0

    {
        // Range: 0x800DA4B8 -> 0x800DA8AC
        // Local variables
        class xVec3 curSetN; // r1+0x20
    }
}
// Range: 0x800DA970 -> 0x800DAA48
void zCurrent::Init(class zCurrent * this /* r28 */, void * inAsset /* r29 */) {
    {
        // Range: 0x800DA9D4 -> 0x800DAA00
        // Local variables
        unsigned int i; // r29
    }
}
// Range: 0x800DAA50 -> 0x800DAB58
void zCurrent::Setup(class zCurrent * this /* r28 */) {
}
// Range: 0x800DAB60 -> 0x800DABE0
void zCurrent::Reset(class zCurrent * this /* r31 */) {
}
// signature: zCurrent::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800DABE0 -> 0x800DAD60
void zCurrent::HandleEvent(class zCurrent * this /* r31 */) {
}
// Range: 0x800DAD60 -> 0x800DAE3C
class Entity * Sext::zCurrentAsset::Create(class EntityHandleBase * handle /* r29 */, class zCurrentAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__8zCurrent;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: zCurrent::Update(float)
// Range: 0x800DAE40 -> 0x800DAE44
void zCurrent::Update() {
}
// Range: 0x800DAE50 -> 0x800DAE54
void zCurrent::SceneExit() {
}
// Range: 0x800DAE60 -> 0x800DB084
void zCurrent::TimeStep(class zCurrent * this /* r28 */, float dt /* f31 */) {
    {
        // Range: 0x800DAEA8 -> 0x800DB05C
        // Local variables
        bool made; // r30
        class xVec3 currentVec; // r1+0x20

        {
            // Range: 0x800DAEA8 -> 0x800DB048
            // Local variables
            int x; // r29

            {
                // Range: 0x800DAEA8 -> 0x800DB048
                // Local variables
                class xVec3 currentXZ; // r1+0x14
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800DB0A0 -> 0x800DB0F0
void zWhirlpool::Init(class zWhirlpool * this /* r30 */, void * inAsset /* r31 */) {
}
// Range: 0x800DB0F0 -> 0x800DB108
void zWhirlpool::Setup() {
}
// Range: 0x800DB110 -> 0x800DB154
void zWhirlpool::Reset(class zWhirlpool * this /* r31 */) {
}
// signature: zWhirlpool::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800DB160 -> 0x800DB284
void zWhirlpool::HandleEvent(class zWhirlpool * this /* r29 */) {
}
// Range: 0x800DB290 -> 0x800DB36C
class Entity * Sext::zWhirlpoolAsset::Create(class EntityHandleBase * handle /* r29 */, class zWhirlpoolAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__10zWhirlpool;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: zWhirlpool::Update(float)
// Range: 0x800DB370 -> 0x800DB374
void zWhirlpool::Update() {
}
// Range: 0x800DB380 -> 0x800DB384
void zWhirlpool::SceneExit() {
}
// Range: 0x800DB390 -> 0x800DB63C
void zWhirlpool::TimeStep(class zWhirlpool * this /* r29 */, float dt /* f29 */) {
    {
        // Range: 0x800DB3F0 -> 0x800DB5FC
        // Local variables
        class xVec3 currentVec; // r1+0x14

        {
            // Range: 0x800DB3F0 -> 0x800DB5E8
            // Local variables
            int x; // r30

            {
                // Range: 0x800DB3F0 -> 0x800DB5E8
                // Local variables
                class xVec3 currentXZ; // r1+0x8
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zWhirlpool::GetCurrentVec(xVec3 *, xVec3 &, float)
// Range: 0x800DB640 -> 0x800DB8A0
void zWhirlpool::GetCurrentVec(class xVec3 & outVec /* r30 */, float dt /* f31 */) {
    // Local variables
    class xVec3 wpPos; // r1+0x44
    class xVec3 toWP; // r1+0x38
    class xVec3 baseVec; // r1+0x2C

    {
        // Range: 0x800DB738 -> 0x800DB860
        // Local variables
        float HPI; // f29
    }
}
