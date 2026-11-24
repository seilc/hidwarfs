/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\RomFont.cpp
*/
static enum _GXCullMode oldCullMode; // size: 0x4, address: 0x80777334
static class OSFontHeader * fontData; // size: 0x4, address: 0x80777338
static class _GXRenderModeObj * renderMode; // size: 0x4, address: 0x8077733C
static float romFontScale; // size: 0x4, address: 0x806CD2AC
static unsigned long fbSize; // size: 0x4, address: 0x80777340
static bool createdDisplay; // size: 0x1, address: 0x80777344
void * WiiFifoBuffer; // size: 0x4, address: 0x80777360
void * WiiFrameBuffer1; // size: 0x4, address: 0x80777364
void * WiiFrameBuffer2; // size: 0x4, address: 0x80777368
void * WiiCurrentBuffer; // size: 0x4, address: 0x8077736C
static char textureBuffer[288]; // size: 0x120, address: 0x80777380
// Range: 0x801CDB40 -> 0x801CDC80
void RomFont::InitGX() {
    // Local variables
    unsigned short xfbHeight; // r30
    float yScale; // f0

    // References
    // -> void * WiiCurrentBuffer;
    // -> static class _GXRenderModeObj * renderMode;
}
// Range: 0x801CDC80 -> 0x801CDD4C
void RomFont::InitFont() {
    // Local variables
    unsigned int fontDataSize; // r5
    unsigned int fontTempSize; // r30
    unsigned short fontEncode; // r0
    char * fontTemp; // r30

    // References
    // -> static class OSFontHeader * fontData;
}
// Range: 0x801CDDC0 -> 0x801CDE5C
void RomFont::DestroyFont() {
    // Local variables
    unsigned short fontEncode; // r0

    // References
    // -> static class OSFontHeader * fontData;
}
// Range: 0x801CDE60 -> 0x801CE02C
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
// Range: 0x801CE030 -> 0x801CE0D8
void RomFont::DestroyDisplay() {
    // References
    // -> bool WiiFirstFrame;
    // -> void * WiiFifoBuffer;
    // -> void * WiiFrameBuffer1;
    // -> static unsigned long fbSize;
    // -> void * WiiFrameBuffer2;
    // -> void * WiiCurrentBuffer;
    // -> void * WiiCurrentBuffer;
    // -> static bool createdDisplay;
}
// Range: 0x801CE0E0 -> 0x801CE280
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
// Range: 0x801CE280 -> 0x801CE35C
void RomFont::RenderBegin() {
    // References
    // -> static class _GXRenderModeObj * renderMode;
}
// Range: 0x801CE360 -> 0x801CE3E0
void RomFont::SwapBuffers() {
    // References
    // -> void * WiiFrameBuffer2;
    // -> void * WiiFrameBuffer1;
    // -> bool WiiFirstFrame;
    // -> void * WiiCurrentBuffer;
}
// signature: RomFont::DrawCell(int, int)
// Range: 0x801CE3E0 -> 0x801CE4A0
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
// signature: RomFont::LoadTex(void *)
// Range: 0x801CE4A0 -> 0x801CE570
void RomFont::LoadTex() {
    // Local variables
    float mtx[3][4]; // r1+0x28
    class _GXTexObj texObj; // r1+0x8
}
// signature: RomFont::DrawString(int, int, char *)
// Range: 0x801CE570 -> 0x801CE664
long RomFont::DrawString(int y /* r26 */, char * string /* r27 */) {
    // Local variables
    long xLetter; // r28

    {
        // Range: 0x801CE58C -> 0x801CE640
        // Local variables
        long width; // r1+0x8
    }

    // References
    // -> static float romFontScale;
    // -> static char textureBuffer[288];
}
// signature: RomFont::GetWidth(char *)
// Range: 0x801CE670 -> 0x801CE720
long RomFont::GetWidth() {
    // Local variables
    long cx; // r28

    {
        // Range: 0x801CE68C -> 0x801CE6FC
        // Local variables
        long width; // r1+0x8
    }

    // References
    // -> static float romFontScale;
    // -> static char textureBuffer[288];
}
// Range: 0x801CE720 -> 0x801CE8D0
void RomFont::DrawTextBox(int x /* r19 */, int y /* r20 */, int width /* r26 */, int height /* r25 */, char * string /* r21 */) {
    // Local variables
    char * line; // r18
    char * word; // r25
    char tempChars[256]; // r1+0x8
    long currentX; // r24
    long currentY; // reg65535
    long widthOfSpace; // r0
    long charsPrinted; // r23
    long nextLine; // r22
    long stringLen; // r0

    {
        // Range: 0x801CE7A8 -> 0x801CE83C
        // Local variables
        int wordWidth; // r0
    }

    // References
    // -> void * WiiCurrentBuffer;
    // -> static class OSFontHeader * fontData;
}
// Range: 0x801CE8D0 -> 0x801CE958
void RomFont::DrawBlackScreen() {
    // References
    // -> void * WiiFrameBuffer2;
    // -> void * WiiFrameBuffer1;
    // -> void * WiiCurrentBuffer;
}
// Range: 0x801CE960 -> 0x801CE99C
void RomFont::BeginErrorMessage() {
    // References
    // -> static enum _GXCullMode oldCullMode;
    // -> static class CriticalSection renderThreadCriticalSection;
}
// signature: RomFont::UpdateErrorMessage(const char *)
// Range: 0x801CE9A0 -> 0x801CE9B8
void RomFont::UpdateErrorMessage() {
}
// Range: 0x801CE9C0 -> 0x801CEA20
void RomFont::EndErrorMessage() {
    // References
    // -> static class CriticalSection renderThreadCriticalSection;
    // -> static enum _GXCullMode oldCullMode;
}
