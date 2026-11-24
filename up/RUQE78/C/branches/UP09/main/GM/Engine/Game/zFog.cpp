/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zFog.cpp
*/
static class zFog * currFogWidget; // size: 0x4, address: 0x8081D80C
static float transitionTime; // size: 0x4, address: 0x8081D810
static float timePassed; // size: 0x4, address: 0x8081D814
static unsigned char srcR; // size: 0x1, address: 0x8081D818
static unsigned char srcG; // size: 0x1, address: 0x8081D819
static unsigned char srcB; // size: 0x1, address: 0x8081D81A
static unsigned char dstR; // size: 0x1, address: 0x8081D81B
static unsigned char dstG; // size: 0x1, address: 0x8081D81C
static unsigned char dstB; // size: 0x1, address: 0x8081D81D
static float srcStart; // size: 0x4, address: 0x8081D820
static float srcEnd; // size: 0x4, address: 0x8081D824
static float dstStart; // size: 0x4, address: 0x8081D828
static float dstEnd; // size: 0x4, address: 0x8081D82C
// Range: 0x801625A0 -> 0x80162674
class Entity * Sext::zFogAsset::Create(class EntityHandleBase * handle /* r29 */, class zFogAsset * inAsset /* r30 */) {
    // References
    // -> struct {} __vt__4zFog;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x80162680 -> 0x801626A4
void zFog_SceneInit() {
    // References
    // -> static float timePassed;
    // -> static float transitionTime;
    // -> static class zFog * currFogWidget;
}
// signature: zFog_Update(float)
// Range: 0x801626B0 -> 0x80162878
void zFog_Update() {
    // Local variables
    unsigned char r; // r31
    unsigned char g; // r30
    unsigned char b; // r29
    float start; // f1
    float end; // f2

    {
        // Range: 0x8016271C -> 0x801627FC
        // Local variables
        float percent; // f9
    }

    // References
    // -> static class zFog * currFogWidget;
    // -> static float srcEnd;
    // -> static float srcStart;
    // -> static unsigned char srcB;
    // -> static unsigned char srcG;
    // -> static unsigned char srcR;
    // -> static float dstEnd;
    // -> static float dstStart;
    // -> static unsigned char dstB;
    // -> static unsigned char dstG;
    // -> static unsigned char dstR;
    // -> static float timePassed;
    // -> static float transitionTime;
}
// Range: 0x80162890 -> 0x801628E0
void zFog::Init(class zFog * this /* r30 */, class zFogAsset * inAsset /* r31 */) {
}
// Range: 0x801628E0 -> 0x801628E4
void zFog::Setup() {
}
// Range: 0x801628F0 -> 0x801628F8
void zFog::Reset() {
}
// Range: 0x80162900 -> 0x801629A8
void zFog::DebugReset(class zFog * this /* r29 */) {
    {
        // Range: 0x80162950 -> 0x8016298C
        // Local variables
        class EventActionActivateFog activateEvent; // r1+0x8
    }

    // References
    // -> static class zFog * currFogWidget;
}
// signature: zFog::Update(float)
// Range: 0x801629D0 -> 0x801629D4
void zFog::Update() {
}
// Range: 0x801629E0 -> 0x801629E4
void zFog::SceneExit() {
}
// signature: zFog::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801629F0 -> 0x80162BD0
void zFog::HandleEvent(class zFog * this /* r30 */) {
    {
        // Range: 0x80162A74 -> 0x80162BB8
        // Local variables
        class EventActionActivateFog * params; // r0
    }

    // References
    // -> static float dstEnd;
    // -> static float dstStart;
    // -> static unsigned char dstB;
    // -> static unsigned char dstG;
    // -> static unsigned char dstR;
    // -> static float timePassed;
    // -> static float srcEnd;
    // -> static float srcStart;
    // -> static unsigned char srcB;
    // -> static unsigned char srcG;
    // -> static unsigned char srcR;
    // -> static float transitionTime;
    // -> static class zFog * currFogWidget;
}
