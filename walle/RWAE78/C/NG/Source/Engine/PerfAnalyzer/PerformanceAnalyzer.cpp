/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\PerfAnalyzer\PerformanceAnalyzer.cpp
*/
class Time lastCPUTime[6]; // size: 0x30, address: 0x808063D8
class Time pauseCPUTime[6]; // size: 0x30, address: 0x80806408
class Time lastPauseCPUTime[6]; // size: 0x30, address: 0x80806438
class Time lastGPUTime; // size: 0x8, address: 0x80806468
class Time lastSFUTime; // size: 0x8, address: 0x80806470
class Time lastSFRTime; // size: 0x8, address: 0x80806478
class Time lastFrameTime; // size: 0x8, address: 0x80806480
float CPUTime[6][17]; // size: 0x198, address: 0x80806488
float GPUTime; // size: 0x4, address: 0x80806620
float SFUTime; // size: 0x4, address: 0x80806624
float SFUMinTime; // size: 0x4, address: 0x8070B114
float SFUMaxTime; // size: 0x4, address: 0x80806628
float SFRTime; // size: 0x4, address: 0x8080662C
float SFRMinTime; // size: 0x4, address: 0x8070B118
float SFRMaxTime; // size: 0x4, address: 0x80806630
float frameTime; // size: 0x4, address: 0x80806634
int numTris[3]; // size: 0xC, address: 0x80806638
int numTrisBuf[3]; // size: 0xC, address: 0x80806644
int numVerts[3]; // size: 0xC, address: 0x80806650
int numVertsBuf[3]; // size: 0xC, address: 0x8080665C
int curSmooth; // size: 0x4, address: 0x8070B11C
// signature: PerfAnalyzer::GetCPUTime(int)
// Range: 0x80291718 -> 0x8029172C
float PerfAnalyzer::GetCPUTime() {
    // References
    // -> float CPUTime[6][17];
}
// Range: 0x8029172C -> 0x80291738
float PerfAnalyzer::GetGPUTime() {
    // References
    // -> float GPUTime;
}
// Range: 0x80291738 -> 0x80291750
float PerfAnalyzer::GetSFUTime() {
    // References
    // -> float SFUTime;
}
// Range: 0x80291750 -> 0x80291768
float PerfAnalyzer::GetSFRTime() {
    // References
    // -> float SFRTime;
}
// signature: PerfAnalyzer::GetScaleformUpdateMS(float &, float &, float &)
// Range: 0x80291768 -> 0x80291790
void PerfAnalyzer::GetScaleformUpdateMS() {
    // References
    // -> float SFUMaxTime;
    // -> float SFUMinTime;
    // -> float SFUTime;
}
// signature: PerfAnalyzer::GetScaleformRenderMS(float &, float &, float &)
// Range: 0x80291790 -> 0x802917B8
void PerfAnalyzer::GetScaleformRenderMS() {
    // References
    // -> float SFRMaxTime;
    // -> float SFRMinTime;
    // -> float SFRTime;
}
// Range: 0x802917B8 -> 0x802917D0
float PerfAnalyzer::GetScaleformMS() {
    // References
    // -> float SFRTime;
    // -> float SFUTime;
}
// Range: 0x802917D0 -> 0x802917DC
float PerfAnalyzer::GetFrameTime() {
    // References
    // -> float frameTime;
}
// Range: 0x802917DC -> 0x8029187C
void PerfAnalyzer::StartCPUTime(int threadNum /* r30 */) {
    // References
    // -> class Time lastPauseCPUTime[6];
    // -> class Time lastCPUTime[6];
    // -> class Time pauseCPUTime[6];
}
// Range: 0x8029187C -> 0x802918D0
void PerfAnalyzer::PauseCPUTime(int threadNum /* r31 */) {
    // References
    // -> class Time lastPauseCPUTime[6];
}
// Range: 0x802918D0 -> 0x80291998
void PerfAnalyzer::UnpauseCPUTime(int threadNum /* r30 */) {
    // References
    // -> class Time pauseCPUTime[6];
    // -> class Time lastPauseCPUTime[6];
}
// Range: 0x80291998 -> 0x80291BFC
void PerfAnalyzer::StopCPUTime(int threadNum /* r30 */) {
    // Local variables
    float timeF; // f0
    float smoothTime; // f3
    float smoothCount; // f4
    int maxSmooth; // r0

    {
        // Range: 0x80291AD4 -> 0x80291AD4
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x80291B90 -> 0x80291BC8
        // Local variables
        int i; // r0
    }

    // References
    // -> int curSmooth;
    // -> double secondsPerTick;
    // -> float CPUTime[6][17];
    // -> class Time lastCPUTime[6];
    // -> class Time pauseCPUTime[6];
    // -> class Time lastPauseCPUTime[6];
}
// Range: 0x80291BFC -> 0x80291C3C
void PerfAnalyzer::StartGPUTime() {
    // References
    // -> class Time lastGPUTime;
}
// Range: 0x80291C3C -> 0x80291CBC
void PerfAnalyzer::StopGPUTime() {
    // References
    // -> float GPUTime;
    // -> double secondsPerTick;
    // -> class Time lastGPUTime;
}
// Range: 0x80291CBC -> 0x80291CFC
void PerfAnalyzer::StartFrameTime() {
    // References
    // -> class Time lastFrameTime;
}
// Range: 0x80291CFC -> 0x80291D7C
void PerfAnalyzer::StopFrameTime() {
    // References
    // -> float frameTime;
    // -> double secondsPerTick;
    // -> class Time lastFrameTime;
}
// Range: 0x80291D7C -> 0x80291DAC
void PerfAnalyzer::StartTriangleCount() {
    // References
    // -> int numVertsBuf[3];
    // -> int numTrisBuf[3];
}
// signature: PerfAnalyzer::AddViewTriangles(int, int)
// Range: 0x80291DAC -> 0x80291DE0
void PerfAnalyzer::AddViewTriangles() {
    // References
    // -> int numVertsBuf[3];
    // -> int numTrisBuf[3];
}
// signature: PerfAnalyzer::AddPassTriangles(int, int)
// Range: 0x80291DE0 -> 0x80291E14
void PerfAnalyzer::AddPassTriangles() {
    // References
    // -> int numVertsBuf[3];
    // -> int numTrisBuf[3];
}
// Range: 0x80291E14 -> 0x80291E60
void PerfAnalyzer::StopTriangleCount() {
    // References
    // -> int numVerts[3];
    // -> int numTris[3];
    // -> int numVertsBuf[3];
    // -> int numTrisBuf[3];
}
// signature: PerfAnalyzer::CalcNumTris(int, int)
// Range: 0x80291E60 -> 0x80291EB0
int PerfAnalyzer::CalcNumTris() {
    // Local variables
    enum PrimitiveType type; // r0
    int numTris; // r0
}
