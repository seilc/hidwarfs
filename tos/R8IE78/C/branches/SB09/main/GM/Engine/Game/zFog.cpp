/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zFog.cpp
*/
static class zFog * currFogWidget; // size: 0x4, address: 0x80734178
static float transitionTime; // size: 0x4, address: 0x8073417C
static float timePassed; // size: 0x4, address: 0x80734180
static unsigned char srcR; // size: 0x1, address: 0x80734184
static unsigned char srcG; // size: 0x1, address: 0x80734185
static unsigned char srcB; // size: 0x1, address: 0x80734186
static unsigned char dstR; // size: 0x1, address: 0x80734187
static unsigned char dstG; // size: 0x1, address: 0x80734188
static unsigned char dstB; // size: 0x1, address: 0x80734189
static float srcStart; // size: 0x4, address: 0x8073418C
static float srcEnd; // size: 0x4, address: 0x80734190
static float dstStart; // size: 0x4, address: 0x80734194
static float dstEnd; // size: 0x4, address: 0x80734198
static float srcHeightStart; // size: 0x4, address: 0x8073419C
static float srcHeightEnd; // size: 0x4, address: 0x807341A0
static float dstHeightStart; // size: 0x4, address: 0x807341A4
static float dstHeightEnd; // size: 0x4, address: 0x807341A8
// signature: @unnamed@WAD02_cpp@::lerp(float &, float, float, float)
// Range: 0x800B4530 -> 0x800B4540
static void @unnamed@WAD02_cpp@::lerp() {
}
// signature: @unnamed@WAD02_cpp@::lerp(unsigned char &, float, unsigned char, unsigned char)
// Range: 0x800B44D0 -> 0x800B452C
static void @unnamed@WAD02_cpp@::lerp() {
}
// Range: 0x800B4250 -> 0x800B42D8
class Entity * Sext::zFogAsset::Create(class EntityHandleBase * handle /* r29 */, class zFogAsset * inAsset /* r30 */) {
    // References
    // -> struct {} __vt__4zFog;
}
// Range: 0x800B42E0 -> 0x800B4304
void zFog_SceneInit() {
    // References
    // -> static float timePassed;
    // -> static float transitionTime;
    // -> static class zFog * currFogWidget;
}
// signature: zFog_Update(float)
// Range: 0x800B4310 -> 0x800B44C8
void zFog_Update() {
    // Local variables
    unsigned char r; // r1+0xA
    unsigned char g; // r1+0x9
    unsigned char b; // r1+0x8
    float start; // r1+0x18
    float end; // r1+0x14
    float heightStart; // r1+0x10
    float heightEnd; // r1+0xC

    {
        // Range: 0x800B4394 -> 0x800B442C
        // Local variables
        float percent; // f31
    }

    // References
    // -> static class zFog * currFogWidget;
    // -> static float srcHeightEnd;
    // -> static float srcHeightStart;
    // -> static float srcEnd;
    // -> static float srcStart;
    // -> static unsigned char srcB;
    // -> static unsigned char srcG;
    // -> static unsigned char srcR;
    // -> static float dstHeightEnd;
    // -> static float dstHeightStart;
    // -> static float dstEnd;
    // -> static float dstStart;
    // -> static unsigned char dstB;
    // -> static unsigned char dstG;
    // -> static unsigned char dstR;
    // -> static float timePassed;
    // -> static float transitionTime;
}
// Range: 0x800B4540 -> 0x800B4588
void zFog::Init(class zFog * this /* r30 */, class zFogAsset * inAsset /* r31 */) {
}
// Range: 0x800B4590 -> 0x800B4594
void zFog::Setup() {
}
// Range: 0x800B45A0 -> 0x800B45A8
void zFog::Reset() {
}
// Range: 0x800B45B0 -> 0x800B4650
void zFog::DebugReset(class zFog * this /* r29 */) {
    {
        // Range: 0x800B45FC -> 0x800B4638
        // Local variables
        class EventActionActivateFog activateEvent; // r1+0x8
    }

    // References
    // -> static class zFog * currFogWidget;
}
// signature: zFog::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800B4650 -> 0x800B483C
void zFog::HandleEvent(class zFog * this /* r30 */) {
    {
        // Range: 0x800B46D4 -> 0x800B4824
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
