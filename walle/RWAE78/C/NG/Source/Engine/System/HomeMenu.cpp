/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\System\HomeMenu.cpp
*/
static class HomeMenuModule hmMod; // size: 0x98, address: 0x80807510
static class ModuleRegistrator hmModReg; // size: 0x8, address: 0x808075A8
class Module * homeMenuModule; // size: 0x4, address: 0x8070B690
class HBMDataInfo hbmInfo; // size: 0x40, address: 0x808075B0
class HBMControllerData conData; // size: 0x40, address: 0x808075F0
int homeBtnSwitch; // size: 0x4, address: 0x80807630
bool isHomeMenuActive; // size: 0x1, address: 0x80807634
void (* hbmDisabledCB)(); // size: 0x4, address: 0x80807638
unsigned char * sound_buf; // size: 0x4, address: 0x8080763C
unsigned char * sound_data; // size: 0x4, address: 0x80807640
long wpad_result[4]; // size: 0x10, address: 0x80807648
unsigned long pad_type[4]; // size: 0x10, address: 0x80807658
long kpad_read[4]; // size: 0x10, address: 0x80807668
class Vec2 pos[4]; // size: 0x20, address: 0x80807678
static class KPADStatus sKpads[4][16]; // size: 0x2100, address: 0x80807698
static class _GXRenderModeObj * renderMode; // size: 0x4, address: 0x80809798
enum _GXCullMode oldCullMode; // size: 0x4, address: 0x8080979C
class StaticStackAllocator homeMenuAllocator; // size: 0xC, address: 0x808097A0
static class FileHandleData hbmFileInfo; // size: 0x48, address: 0x808097B0
// signature: HomeMenu::FileHandleData::DvdCallback(long, DVDFileInfo *)
// Range: 0x802B478C -> 0x802B479C
void HomeMenu::FileHandleData::DvdCallback() {
    // Local variables
    class FileHandleData * fhd; // r0
}
// Range: 0x802B4568 -> 0x802B478C
void * HomeMenu::ReadDvdFile(char * fileName /* r27 */, unsigned long * fileSize /* r29 */) {
    // Local variables
    unsigned long fileLen; // r27
    unsigned long fileLenUp32; // r5
    void * readBuf; // r30
    bool openSuccess; // r0
    bool closeSuccess; // r0

    // References
    // -> class StaticStackAllocator homeMenuAllocator;
    // -> static class FileHandleData hbmFileInfo;
    // -> bool shutdown;
}
// signature: HomeMenu::SoundCallback(int, int)
// Range: 0x802B479C -> 0x802B47D8
int HomeMenu::SoundCallback() {
}
// Range: 0x802B47D8 -> 0x802B4ABC
void HomeMenu::InitHomeButtonInfo(class HBMDataInfo * pHbmInfo /* r31 */) {
    // Local variables
    char dirName[16]; // r1+0x8
    char nameBuf[64]; // r1+0x18

    // References
    // -> unsigned char * sound_data;
    // -> class StaticStackAllocator homeMenuAllocator;
}
// Range: 0x802B4ABC -> 0x802B4D7C
void HomeMenu::CreateHomeMenu() {
    // Local variables
    float mv[3][4]; // r1+0x50
    float projection[4][4]; // r1+0x10
    class _GXColor Bkcolor; // r1+0xC

    // References
    // -> unsigned char * sound_data;
    // -> unsigned char * sound_buf;
    // -> class HBMControllerData conData;
    // -> static class _GXRenderModeObj * renderMode;
    // -> enum _GXCullMode oldCullMode;
    // -> bool isHomeMenuActive;
    // -> bool shutdown;
    // -> class HBMDataInfo hbmInfo;
    // -> class StaticStackAllocator homeMenuAllocator;
    // -> class Module * dynaMemModule;
}
// Range: 0x802B4D7C -> 0x802B5094
void HomeMenu::PollPad() {
    {
        // Range: 0x802B4DB8 -> 0x802B4E58
        // Local variables
        int i; // r24

        {
            // Range: 0x802B4DBC -> 0x802B4DBC
            // Local variables
            signed char wpad_err; // r22
            unsigned long dev_type; // r23
        }
    }
    {
        // Range: 0x802B4E84 -> 0x802B505C
        // Local variables
        int i; // r29

        {
            // Range: 0x802B4E84 -> 0x802B505C
            // Local variables
            class Pad * wiimote; // r0
            class PadInput istate; // r1+0x8
        }
    }

    // References
    // -> long kpad_read[4];
    // -> static class KPADStatus sKpads[4][16];
    // -> class HBMControllerData conData;
    // -> long wpad_result[4];
    // -> unsigned long pad_type[4];
    // -> bool isHomeMenuActive;
}
// Range: 0x802B5094 -> 0x802B52E4
void HomeMenu::UpdateHomeMenu() {
    // References
    // -> enum _GXCullMode oldCullMode;
    // -> class HBMControllerData conData;
    // -> bool shutdown;
    // -> static class _GXRenderModeObj * renderMode;
    // -> static void (* pauseSoundCB)();
    // -> void * WiiFrameBuffer2;
    // -> void * WiiFrameBuffer1;
    // -> bool WiiFirstFrame;
    // -> void * WiiCurrentBuffer;
    // -> void (* hbmDisabledCB)();
    // -> static class HomeMenuModule hmMod;
    // -> bool isHomeMenuActive;
    // -> int homeBtnSwitch;
}
// Range: 0x802B52E4 -> 0x802B5420
void HomeMenu::ExitHomeMenu() {
    // References
    // -> static void (* unpauseSoundCB)();
    // -> class Module * dynaMemModule;
    // -> class StaticStackAllocator homeMenuAllocator;
    // -> bool wiiMenuOnShutdown;
    // -> bool restartOnShutdown;
    // -> bool shutdown;
}
// signature: HomeMenu::HomeMenuModule::Update(int)
// Range: 0x802B5420 -> 0x802B5424
void HomeMenu::HomeMenuModule::Update() {
}
// signature: HomeMenu::HomeMenuModule::SetDisabledIconCB(void (*)())
// Range: 0x802B5424 -> 0x802B5430
void HomeMenu::HomeMenuModule::SetDisabledIconCB() {
    // References
    // -> void (* hbmDisabledCB)();
}
