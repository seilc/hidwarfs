/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zPerformanceDisplay.cpp
*/
int display; // size: 0x4, address: 0x807984C8
int gSuperSlow; // size: 0x4, address: 0x807984CC
int gFrameSkip; // size: 0x4, address: 0x807984D0
// signature: PerfDisplay::RenderPercent(float, int, unsigned char, unsigned char, unsigned char)
// Range: 0x801652A0 -> 0x8016532C
void PerfDisplay::RenderPercent(float percent /* f31 */, int y /* r31 */) {
    // Local variables
    class Viewport * vp; // r0
    float half_width; // f1
    float half_height; // f0
    float left; // f2
    float right; // f0
    float bottom; // f0
    float top; // f0
}
// signature: PerfDisplay::RenderBar(float, int, const char *, unsigned char, unsigned char, unsigned char)
// Range: 0x80165330 -> 0x801653F0
void PerfDisplay::RenderBar(int y /* r28 */, unsigned char r /* r29 */, unsigned char g /* r30 */, unsigned char b /* r31 */) {
    // Local variables
    float FPS; // f2
    float percent; // f1

    // References
    // -> class zGlobals globals;
}
// signature: PerfDisplay::RenderTick(float, int, int)
// Range: 0x80165400 -> 0x8016546C
void PerfDisplay::RenderTick(int yMin /* r30 */, int yMax /* r31 */) {
    // Local variables
    class Viewport * vp; // r0
    float half_width; // f0
    float half_height; // f0
    float left; // f0
    float right; // f0
    float bottom; // f0
    float top; // f0

    // References
    // -> class zGlobals globals;
}
// Range: 0x80165470 -> 0x801657D4
void PerfDisplay::RenderText(char * text /* r28 */, float x /* f30 */, float y /* f31 */, int r /* r29 */, int g /* r30 */, int b /* r31 */) {
    // Local variables
    int len; // r0
    class xtextbox tb; // r1+0x108

    // References
    // -> class callback text_cb;
    // -> class xColor_tag g_WHITE;
    // -> class xColor_tag g_BLACK;
    // -> static class basic_rect screen_bounds;
    // -> class zGlobals globals;
}
// signature: PerfDisplay::RenderStat(const char *, float, int, int)
// Range: 0x801657E0 -> 0x80165B50
void PerfDisplay::RenderStat(int x /* r30 */, int y /* r31 */) {
    // Local variables
    char text[128]; // r1+0x80

    // References
    // -> class callback text_cb;
    // -> class xColor_tag g_WHITE;
    // -> class xColor_tag g_BLACK;
    // -> static class basic_rect screen_bounds;
    // -> class zGlobals globals;
}
// Range: 0x80165B50 -> 0x80165FCC
void PerfDisplay::RenderStats() {
    // Local variables
    int y; // r29

    {
        // Range: 0x80165D14 -> 0x80165DE8
        // Local variables
        char coords[64]; // r1+0x58
    }
    {
        // Range: 0x80165E10 -> 0x80165F0C
        // Local variables
        float simTime; // f31
        float rendTime; // f30
        float gpuTime; // f30
        char buf[128]; // r1+0x98

        {
            // Range: 0x80165E10 -> 0x80165E80
            // Local variables
            float totalgpuestimate; // f1
        }
    }
    {
        // Range: 0x80165F0C -> 0x80165FA0
        // Local variables
        float max; // r1+0x8
        float min; // r1+0xC
        float time; // r1+0x10
        char buf[64]; // r1+0x18
    }

    // References
    // -> class xGlobals * xglobals;
    // -> int gSuperSlow;
    // -> int display;
    // -> class zGlobals globals;
}
// Range: 0x80165FD0 -> 0x80165FDC
int PerfDisplay::IsSuperSlowOn() {
    // References
    // -> int gSuperSlow;
}
// Range: 0x80165FE0 -> 0x80165FEC
int PerfDisplay::FrameSkip() {
    // References
    // -> int gFrameSkip;
}
