/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Graphics\RomFont.cpp
*/
static enum _GXCullMode oldCullMode; // size: 0x4, address: 0x80848ADC
static class OSFontHeader * fontData; // size: 0x4, address: 0x80848AE0
static class _GXRenderModeObj * renderMode; // size: 0x4, address: 0x80848AE4
static float romFontScale; // size: 0x4, address: 0x807BF2A0
static unsigned long fbSize; // size: 0x4, address: 0x80848AE8
static bool createdDisplay; // size: 0x1, address: 0x80848AEC
void * WiiFifoBuffer; // size: 0x4, address: 0x80848B00
void * WiiFrameBuffer1; // size: 0x4, address: 0x80848B04
void * WiiFrameBuffer2; // size: 0x4, address: 0x80848B08
void * WiiCurrentBuffer; // size: 0x4, address: 0x80848B0C
static char textureBuffer[288]; // size: 0x120, address: 0x80848B20
// Range: 0x802FC438 -> 0x802FC518
void RomFont::InitFont() {
    // Local variables
    unsigned int fontDataSize; // r3
    unsigned int fontTempSize; // r29
    unsigned short fontEncode; // r0

    // References
    // -> static class OSFontHeader * fontData;
}
// Range: 0x802FC518 -> 0x802FC6FC
void RomFont::CreateDisplay() {
    // Local variables
    unsigned int screenMode; // r0
    bool progressiveMode; // r0
    bool wasProgressiveMode; // r29
    int framesToWait; // r28

    // References
    // -> static bool createdDisplay;
    // -> void * WiiCurrentBuffer;
    // -> void * WiiFrameBuffer2;
    // -> void * WiiFrameBuffer1;
    // -> void * WiiFifoBuffer;
    // -> static unsigned long fbSize;
    // -> class _GXRenderModeObj GXMpal480IntDf;
    // -> class _GXRenderModeObj GXMpal480ProgSoft;
    // -> class _GXRenderModeObj GXEurgb60Hz480IntDf;
    // -> class _GXRenderModeObj GXPal528IntDf;
    // -> class _GXRenderModeObj GXNtsc480IntDf;
    // -> static class _GXRenderModeObj * renderMode;
    // -> class _GXRenderModeObj GXNtsc480ProgSoft;
}
// Range: 0x802FC6FC -> 0x802FC99C
void RomFont::InitDisplay() {
    // Local variables
    float projection[4][4]; // r1+0x40
    float modelview[3][4]; // r1+0x10

    // References
    // -> void * WiiCurrentBuffer;
    // -> void * WiiFrameBuffer2;
    // -> void * WiiFrameBuffer1;
    // -> void * WiiCurrentBuffer;
    // -> void * WiiFrameBuffer2;
    // -> void * WiiFrameBuffer1;
    // -> static class _GXRenderModeObj * renderMode;
    // -> static class _GXRenderModeObj * renderModeObj;
}
// signature: RomFont::DrawCell(int, int)
// Range: 0x802FC99C -> 0x802FCA5C
void RomFont::DrawCell() {
    // Local variables
    short posLeft; // r31
    short posRight; // r30
    short posTop; // r29
    short posBottom; // r28
    short texRight; // r27
    short texBottom; // r26

    // References
    // -> static class OSFontHeader * fontData;
}
// Range: 0x802FCA5C -> 0x802FCEF4
void RomFont::DrawTextBox(int x /* r15 */, int y /* r16 */, int width /* r23 */, int height /* r22 */, char * string /* r17 */) {
    // Local variables
    char * line; // r21
    char * word; // r21
    char tempChars[256]; // r1+0x68
    long currentX; // r20
    long currentY; // reg65535
    long widthOfSpace; // r0
    long charsPrinted; // r19
    long nextLine; // r18
    long stringLen; // r0

    {
        // Range: 0x802FCBF0 -> 0x802FCBF8
        // Local variables
        int wordWidth; // r0
    }

    // References
    // -> void * WiiFrameBuffer2;
    // -> void * WiiFrameBuffer1;
    // -> bool WiiFirstFrame;
    // -> void * WiiCurrentBuffer;
    // -> static class OSFontHeader * fontData;
    // -> static char textureBuffer[288];
    // -> static float romFontScale;
    // -> static class _GXRenderModeObj * renderMode;
}
// Range: 0x802FCEF4 -> 0x802FD088
void RomFont::BeginErrorMessage() {
    // References
    // -> void * WiiFrameBuffer2;
    // -> void * WiiFrameBuffer1;
    // -> void * WiiCurrentBuffer;
    // -> static class _GXRenderModeObj * renderMode;
    // -> static enum _GXCullMode oldCullMode;
    // -> static class CriticalSection renderThreadCriticalSection;
}
// signature: RomFont::UpdateErrorMessage(const char *)
// Range: 0x802FD088 -> 0x802FD0A0
void RomFont::UpdateErrorMessage() {
}
// Range: 0x802FD0A0 -> 0x802FD23C
void RomFont::EndErrorMessage() {
    // References
    // -> static class CriticalSection renderThreadCriticalSection;
    // -> static class OSFontHeader * fontData;
    // -> bool WiiFirstFrame;
    // -> void * WiiFifoBuffer;
    // -> void * WiiFrameBuffer1;
    // -> static unsigned long fbSize;
    // -> void * WiiFrameBuffer2;
    // -> void * WiiCurrentBuffer;
    // -> void * WiiCurrentBuffer;
    // -> static bool createdDisplay;
    // -> static enum _GXCullMode oldCullMode;
}
