/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\System\HomeMenu.cpp
*/
static class HomeMenuModule hmMod; // size: 0x98, address: 0x8077DA00
static class ModuleRegistrator hmModReg; // size: 0x8, address: 0x8077DA98
class Module * homeMenuModule; // size: 0x4, address: 0x806CF348
class HBMDataInfo hbmInfo; // size: 0x40, address: 0x8077DAA0
class HBMControllerData conData; // size: 0x40, address: 0x8077DAE0
int input_classic; // size: 0x4, address: 0x8077DB20
bool isHomeMenuActive; // size: 0x1, address: 0x8077DB24
void (* hbmDisabledCB)(); // size: 0x4, address: 0x8077DB28
void (* hbmClearIconCB)(); // size: 0x4, address: 0x8077DB2C
unsigned char * sound_buf; // size: 0x4, address: 0x8077DB30
unsigned char * sound_data; // size: 0x4, address: 0x8077DB34
long wpad_result[4]; // size: 0x10, address: 0x8077DB38
unsigned long pad_type[4]; // size: 0x10, address: 0x8077DB48
long kpad_read; // size: 0x4, address: 0x8077DB58
class Vec2 pos[4]; // size: 0x20, address: 0x8077DB60
static class KPADStatus sKpads[4][16]; // size: 0x3C00, address: 0x8077DB80
static class KPADStatus sKpadLast[16]; // size: 0xF00, address: 0x80781780
static class _GXRenderModeObj * renderMode; // size: 0x4, address: 0x80782680
enum _GXCullMode oldCullMode; // size: 0x4, address: 0x80782684
class StaticStackAllocator homeMenuDataAllocator; // size: 0xC, address: 0x80782688
class StaticStackAllocator homeMenuBufferAllocator; // size: 0xC, address: 0x80782694
static class FileHandleData hbmFileInfo; // size: 0x48, address: 0x807826A0
// signature: HomeMenu::InitControllerData(HBMControllerData *)
// Range: 0x801FCEF0 -> 0x801FCF24
void HomeMenu::InitControllerData() {
    {
        // Range: 0x801FCEF0 -> 0x801FCF20
        // Local variables
        int i; // r6
    }
}
// signature: HomeMenu::ReadDvdFile(const char *, unsigned long *)
// Range: 0x801FCF30 -> 0x801FCFF4
void * HomeMenu::ReadDvdFile(unsigned long * fileSize /* r26 */) {
    // Local variables
    unsigned long fileLenUp32; // r28
    void * readBuf; // r27
    long readBytes; // r0

    // References
    // -> class StaticStackAllocator homeMenuDataAllocator;
    // -> static class FileHandleData hbmFileInfo;
    // -> bool shutdown;
}
// signature: HomeMenu::SoundCallback(int, int)
// Range: 0x801FD000 -> 0x801FD03C
int HomeMenu::SoundCallback() {
}
// Range: 0x801FD040 -> 0x801FD2EC
void HomeMenu::InitHomeButtonInfo(class HBMDataInfo * pHbmInfo /* r31 */) {
    // Local variables
    char dirName[16]; // r1+0x8
    char nameBuf[64]; // r1+0x18

    // References
    // -> unsigned char * sound_data;
    // -> class StaticStackAllocator homeMenuBufferAllocator;
}
// Range: 0x801FD2F0 -> 0x801FD350
void HomeMenu::InitSound() {
    // References
    // -> unsigned char * sound_data;
    // -> unsigned char * sound_buf;
    // -> class StaticStackAllocator homeMenuBufferAllocator;
}
// Range: 0x801FD350 -> 0x801FD53C
void HomeMenu::CreateHomeMenu() {
    // Local variables
    float mv[3][4]; // r1+0x50
    float projection[4][4]; // r1+0x10
    bool widescreen; // r29

    // References
    // -> class HBMControllerData conData;
    // -> static class _GXRenderModeObj * renderMode;
    // -> enum _GXCullMode oldCullMode;
    // -> bool isHomeMenuActive;
    // -> bool shutdown;
    // -> class HBMDataInfo hbmInfo;
    // -> static void (* pauseSoundCB)();
}
// Range: 0x801FD540 -> 0x801FD60C
void HomeMenu::InitGX() {
}
// Range: 0x801FD610 -> 0x801FDA0C
void HomeMenu::PollPad() {
    {
        // Range: 0x801FD654 -> 0x801FD9C4
        // Local variables
        int i; // r22
    }

    // References
    // -> int input_classic;
    // -> long kpad_read;
    // -> static class KPADStatus sKpads[4][16];
    // -> long wpad_result[4];
    // -> unsigned long pad_type[4];
    // -> class HBMControllerData conData;
    // -> static class KPADStatus sKpadLast[16];
}
// Range: 0x801FDB50 -> 0x801FDC98
void HomeMenu::UpdateHomeMenu() {
    // References
    // -> class HBMControllerData conData;
    // -> void (* hbmClearIconCB)();
    // -> void (* hbmDisabledCB)();
    // -> bool isHomeMenuActive;
    // -> void (* WiimoteSpeakerCB)(int, bool);
    // -> static class HomeMenuModule hmMod;
    // -> bool shutdown;
}
// Range: 0x801FDCA0 -> 0x801FDDE4
void HomeMenu::DisplayHomeMenu() {
    // References
    // -> void * WiiCurrentBuffer;
    // -> static class _GXRenderModeObj * renderMode;
    // -> static void (* pauseSoundCB)();
}
// Range: 0x801FDDF0 -> 0x801FDEC8
void HomeMenu::ExitHomeMenu() {
    // References
    // -> enum _GXCullMode oldCullMode;
    // -> static void (* unpauseSoundCB)();
    // -> bool shutdown;
}
// Range: 0x801FDED0 -> 0x801FDF20
void * HomeMenu::HomeMenuModule::HomeMenuModule(class HomeMenuModule * this /* r31 */) {
    // References
    // -> struct {} __vt__Q28HomeMenu14HomeMenuModule;
}
// signature: HomeMenu::HomeMenuModule::SwapRender(int)
// Range: 0x801FDF20 -> 0x801FDF24
void HomeMenu::HomeMenuModule::SwapRender() {
}
// signature: HomeMenu::HomeMenuModule::SetDisabledIconCB(void (*)(), void (*)())
// Range: 0x801FDF30 -> 0x801FDF44
void HomeMenu::HomeMenuModule::SetDisabledIconCB() {
    // References
    // -> void (* hbmClearIconCB)();
    // -> void (* hbmDisabledCB)();
}
// Range: 0x801FDF50 -> 0x801FDFD0
void HomeMenu::SwapFrameBuffer() {
    // References
    // -> void * WiiFrameBuffer2;
    // -> void * WiiFrameBuffer1;
    // -> bool WiiFirstFrame;
    // -> void * WiiCurrentBuffer;
}
// Range: 0x801FDFD0 -> 0x801FE090
void HomeMenu::InitHomeMenuMemory() {
    // Local variables
    void * mem; // r31

    // References
    // -> class StaticStackAllocator homeMenuBufferAllocator;
    // -> class SingleBufferAllocator updateFrameAllocator;
    // -> class StaticStackAllocator homeMenuDataAllocator;
    // -> class BuildBuffer g_renderBuildBuffer;
    // -> static class HomeMenuModule hmMod;
    // -> class CriticalSection wiiDVDErrorCriticalSection;
}
// Range: 0x801FE090 -> 0x801FE15C
void HomeMenu::CleanUpHomeMenuMemory() {
    // References
    // -> class CriticalSection wiiDVDErrorCriticalSection;
    // -> static class HomeMenuModule hmMod;
    // -> class StaticStackAllocator homeMenuBufferAllocator;
    // -> class StaticStackAllocator homeMenuDataAllocator;
}
// Range: 0x801FE160 -> 0x801FE330
bool HomeMenu::HomeMenuModule::HomeButtonPressed() const {
    {
        // Range: 0x801FE174 -> 0x801FE314
        // Local variables
        int i; // r25

        {
            // Range: 0x801FE174 -> 0x801FE314
            // Local variables
            class Pad * wiimote; // r0
            class PadInput istate; // r1+0x8
        }
    }
}
