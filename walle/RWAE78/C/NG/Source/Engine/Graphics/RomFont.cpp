/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Graphics\RomFont.cpp
*/
static enum _GXCullMode oldCullMode; // size: 0x4, address: 0x808010EC
static class OSFontHeader * fontData; // size: 0x4, address: 0x808010F0
static class _GXRenderModeObj * renderMode; // size: 0x4, address: 0x808010F4
static float romFontScale; // size: 0x4, address: 0x80709698
static unsigned long fbSize; // size: 0x4, address: 0x808010F8
static bool createdDisplay; // size: 0x1, address: 0x808010FC
void * WiiFifoBuffer; // size: 0x4, address: 0x80801100
static char textureBuffer[288]; // size: 0x120, address: 0x80801120
// Range: 0x80264E3C -> 0x80264F1C
void RomFont::InitFont() {
    // Local variables
    unsigned int fontDataSize; // r3
    unsigned int fontTempSize; // r29
    unsigned short fontEncode; // r0

    // References
    // -> static class OSFontHeader * fontData;
}
// Range: 0x80264F1C -> 0x8026505C
void RomFont::CreateDisplay() {
    // Local variables
    unsigned int screenMode; // r0

    // References
    // -> static bool createdDisplay;
    // -> void * WiiCurrentBuffer;
    // -> void * WiiFrameBuffer2;
    // -> void * WiiFrameBuffer1;
    // -> void * WiiFifoBuffer;
    // -> static unsigned long fbSize;
    // -> class _GXRenderModeObj GXMpal480IntDf;
    // -> class _GXRenderModeObj GXEurgb60Hz480IntDf;
    // -> class _GXRenderModeObj GXPal528IntDf;
    // -> static class _GXRenderModeObj * renderMode;
    // -> class _GXRenderModeObj GXNtsc480IntDf;
}
// Range: 0x8026505C -> 0x802652FC
void RomFont::InitDisplay() {
    // Local variables
    float projection[4][4]; // r1+0x40
    float modelview[3][4]; // r1+0x10
    class _GXColor Bkcolor; // r1+0xC

    // References
    // -> void * WiiCurrentBuffer;
    // -> static class _GXRenderModeObj * renderMode;
    // -> static class _GXRenderModeObj * renderModeObj;
}
// signature: RomFont::DrawCell(int, int)
// Range: 0x802652FC -> 0x802653BC
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
// Range: 0x802653BC -> 0x80265854
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
        // Range: 0x80265550 -> 0x80265558
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
// Range: 0x80265854 -> 0x802659A8
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
// Range: 0x802659A8 -> 0x802659C0
void RomFont::UpdateErrorMessage() {
}
// Range: 0x802659C0 -> 0x80265B28
void RomFont::EndErrorMessage() {
    // References
    // -> static class CriticalSection renderThreadCriticalSection;
    // -> static class OSFontHeader * fontData;
    // -> bool WiiFirstFrame;
    // -> void * WiiFifoBuffer;
    // -> void * WiiFrameBuffer1;
    // -> static unsigned long fbSize;
    // -> void * WiiCurrentBuffer;
    // -> void * WiiFrameBuffer2;
    // -> static bool createdDisplay;
    // -> static enum _GXCullMode oldCullMode;
}
