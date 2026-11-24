/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\System\HomeMenu.cpp
*/
static class HomeMenuModule hmMod; // size: 0x98, address: 0x8084E8E8
static class ModuleRegistrator hmModReg; // size: 0x8, address: 0x8084E980
class Module * homeMenuModule; // size: 0x4, address: 0x807C1690
class HBMDataInfo hbmInfo; // size: 0x40, address: 0x8084E988
class HBMControllerData conData; // size: 0x40, address: 0x8084E9C8
int homeBtnSwitch; // size: 0x4, address: 0x8084EA08
bool isHomeMenuActive; // size: 0x1, address: 0x8084EA0C
void (* hbmDisabledCB)(); // size: 0x4, address: 0x8084EA10
unsigned char * sound_buf; // size: 0x4, address: 0x8084EA14
unsigned char * sound_data; // size: 0x4, address: 0x8084EA18
long wpad_result[4]; // size: 0x10, address: 0x8084EA20
unsigned long pad_type[4]; // size: 0x10, address: 0x8084EA30
long kpad_read; // size: 0x4, address: 0x8084EA40
class Vec2 pos[4]; // size: 0x20, address: 0x8084EA48
static class KPADStatus sKpads[4][16]; // size: 0x3000, address: 0x8084EA68
static class KPADStatus sKpadLast[16]; // size: 0xC00, address: 0x80851A68
static class _GXRenderModeObj * renderMode; // size: 0x4, address: 0x80852668
enum _GXCullMode oldCullMode; // size: 0x4, address: 0x8085266C
class StaticStackAllocator homeMenuDataAllocator; // size: 0xC, address: 0x80852670
class StaticStackAllocator homeMenuBufferAllocator; // size: 0xC, address: 0x8085267C
static class FileHandleData hbmFileInfo; // size: 0x48, address: 0x80852688
// signature: HomeMenu::ReadDvdFile(const char *, unsigned long *)
// Range: 0x803567BC -> 0x80356884
void * HomeMenu::ReadDvdFile(unsigned long * fileSize /* r29 */) {
    // Local variables
    unsigned long fileLenUp32; // r5
    void * readBuf; // r30
    long readBytes; // r0

    // References
    // -> class StaticStackAllocator homeMenuDataAllocator;
    // -> static class FileHandleData hbmFileInfo;
    // -> bool shutdown;
}
// signature: HomeMenu::SoundCallback(int, int)
// Range: 0x80356884 -> 0x803568C0
int HomeMenu::SoundCallback() {
}
// Range: 0x803568C0 -> 0x80356B64
void HomeMenu::InitHomeButtonInfo(class HBMDataInfo * pHbmInfo /* r31 */) {
    // Local variables
    char dirName[16]; // r1+0x8
    char nameBuf[64]; // r1+0x18

    // References
    // -> unsigned char * sound_data;
    // -> class StaticStackAllocator homeMenuBufferAllocator;
}
// Range: 0x80356B64 -> 0x80356F34
void HomeMenu::CreateHomeMenu() {
    // Local variables
    float mv[3][4]; // r1+0x50
    float projection[4][4]; // r1+0x10

    // References
    // -> unsigned char * sound_buf;
    // -> unsigned char * sound_data;
    // -> class HBMControllerData conData;
    // -> static class _GXRenderModeObj * renderMode;
    // -> enum _GXCullMode oldCullMode;
    // -> bool isHomeMenuActive;
    // -> bool shutdown;
    // -> class HBMDataInfo hbmInfo;
    // -> class StaticStackAllocator homeMenuBufferAllocator;
    // -> class StaticStackAllocator homeMenuDataAllocator;
    // -> class SingleBufferAllocator updateFrameAllocator;
    // -> class BuildBuffer g_renderBuildBuffer;
    // -> class CriticalSection wiiDVDErrorCriticalSection;
}
// Range: 0x80356F34 -> 0x803577C8
void HomeMenu::PollPad() {
    {
        // Range: 0x80356F70 -> 0x80357214
        // Local variables
        int i; // r25
    }
    {
        // Range: 0x80357254 -> 0x803577A4
        // Local variables
        int i; // r19

        {
            // Range: 0x80357254 -> 0x803577A4
            // Local variables
            class Pad * wiimote; // r0
            class PadInput istate; // r1+0x8
        }
    }

    // References
    // -> long kpad_read;
    // -> static class KPADStatus sKpadLast[16];
    // -> static class KPADStatus sKpads[4][16];
    // -> class HBMControllerData conData;
    // -> long wpad_result[4];
    // -> unsigned long pad_type[4];
    // -> bool isHomeMenuActive;
}
// Range: 0x803577C8 -> 0x80357A38
void HomeMenu::UpdateHomeMenu() {
    // References
    // -> class HBMControllerData conData;
    // -> static class _GXRenderModeObj * renderMode;
    // -> bool shutdown;
    // -> void * WiiFrameBuffer2;
    // -> void * WiiFrameBuffer1;
    // -> bool WiiFirstFrame;
    // -> void * WiiCurrentBuffer;
    // -> static void (* pauseSoundCB)();
    // -> void (* hbmDisabledCB)();
    // -> int homeBtnSwitch;
    // -> bool isHomeMenuActive;
    // -> static class HomeMenuModule hmMod;
}
// Range: 0x80357A38 -> 0x80357BCC
void HomeMenu::ExitHomeMenu() {
    // References
    // -> enum _GXCullMode oldCullMode;
    // -> static void (* unpauseSoundCB)();
    // -> class CriticalSection wiiDVDErrorCriticalSection;
    // -> class StaticStackAllocator homeMenuBufferAllocator;
    // -> class StaticStackAllocator homeMenuDataAllocator;
    // -> bool wiiMenuOnShutdown;
    // -> bool restartOnShutdown;
    // -> bool shutdown;
}
// signature: HomeMenu::HomeMenuModule::SwapRender(int)
// Range: 0x80357BCC -> 0x80357BD0
void HomeMenu::HomeMenuModule::SwapRender() {
}
// signature: HomeMenu::HomeMenuModule::SetDisabledIconCB(void (*)())
// Range: 0x80357BD0 -> 0x80357BDC
void HomeMenu::HomeMenuModule::SetDisabledIconCB() {
    // References
    // -> void (* hbmDisabledCB)();
}
