/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Scaleform\ScaleformCoord.cpp
*/
char PLACEHOLDER_URL[1]; // size: 0x1, address: 0x806D7048
static void * movieReleaseTest; // size: 0x4, address: 0x8080687C
static void * nearestMovieReleased; // size: 0x4, address: 0x80806880
static class MemCB_ScaleformAllocMemory memCB_scaleformAllocMemory; // size: 0x4, address: 0x80806884
class Coordinator * coord; // size: 0x4, address: 0x80806888
bool initialized; // size: 0x1, address: 0x8080688C
bool accessLock; // size: 0x1, address: 0x8080688D
static char parsed[256]; // size: 0x100, address: 0x80806890
// Range: 0x8029A4C0 -> 0x8029A7E8
class GImageInfoBase * Scaleform::CustomImageCreator::CreateImage(class GFxImageCreateInfo * info /* r26 */) {
    {
        // Range: 0x8029A6CC -> 0x8029A7A8
        // Local variables
        class _GXTexObj * alphaTexHandle; // r8
        class _GXTexObj * texHandle; // r4
        class GTextureWii * sfTexObj; // r26
    }

    // References
    // -> class Coordinator * coord;
    // -> bool initialized;
    // -> bool accessLock;
}
// signature: Scaleform::CustomCommandHandler::Callback(GFxMovieView *, const char *, const char *)
// Range: 0x8029A90C -> 0x8029AA88
void Scaleform::CustomCommandHandler::Callback(char * pcommand /* r28 */, char * parg /* r29 */) {
}
// Range: 0x8029AAE8 -> 0x8029AF14
void * Scaleform::FileOpener::~FileOpener(class FileOpener * this /* r28 */) {
    // Local variables
    int size; // r25

    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> struct {} __vt__Q29Scaleform10FileOpener;
}
// Range: 0x8029AF1C -> 0x8029B01C
void Scaleform::FileOpener::RemoveFile(class FileOpener * this /* r27 */, char * purl /* r28 */) {
}
// Range: 0x8029B024 -> 0x8029B2E4
class GFile * Scaleform::FileOpener::OpenFile(char * purl /* r27 */) {
    // Local variables
    class GSFMemoryFile * curFile; // r30
    class GSFMemoryFile * curFilePtr; // r0
    int urlLen; // r0

    // References
    // -> struct {} __vt__Q29Scaleform18GTextureMemoryFile;
    // -> struct {} __vt__Q29Scaleform13GSFMemoryFile;
}
// Range: 0x8029BB40 -> 0x8029BEA0
void Scaleform::HeapAllocator::Create(class HeapAllocator * this /* r31 */) {
}
// Range: 0x8029BEA0 -> 0x8029C040
void Scaleform::HeapAllocator::Destroy(class HeapAllocator * this /* r31 */) {
}
// Range: 0x8029C040 -> 0x8029C5EC
void * Scaleform::HeapAllocator::Alloc(class HeapAllocator * this /* r29 */, unsigned long size /* r30 */) {
    // Local variables
    void * mem; // r31
}
// Range: 0x8029C5EC -> 0x8029CD58
void Scaleform::HeapAllocator::Free(class HeapAllocator * this /* r28 */, void * mem /* r29 */) {
    {
        // Range: 0x8029C5F4 -> 0x8029CD44
        // Local variables
        int i; // r30
    }

    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> static void * nearestMovieReleased;
    // -> static void * movieReleaseTest;
}
// Range: 0x8029CD58 -> 0x8029D028
void * Scaleform::HeapAllocator::Realloc(class HeapAllocator * this /* r28 */, void * oldMem /* r29 */, unsigned long size /* r30 */) {
    // Local variables
    int oldSize; // r27
    void * newMem; // r31

    {
        // Range: 0x8029CD60 -> 0x8029CDDC
        // Local variables
        int i; // r9
    }

    // References
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// signature: Scaleform::MemCB_ScaleformAllocMemory::Relocating(Domains::MemHandle *)
// Range: 0x802C5ACC -> 0x802C5ADC
void Scaleform::MemCB_ScaleformAllocMemory::Relocating() {
}
// Range: 0x8029D334 -> 0x8029D3FC
void Scaleform::HeapAllocator::EnableStaticMemAllocator(class HeapAllocator * this /* r29 */) {
    // Local variables
    class MemVolume * memVolume; // r0

    // References
    // -> static class MemCB_ScaleformAllocMemory memCB_scaleformAllocMemory;
    // -> class Module * dynaMemModule;
}
// Range: 0x8029D3FC -> 0x8029D7D4
void Scaleform::HeapAllocator::DisableStaticMemAllocator(class HeapAllocator * this /* r29 */) {
    {
        // Range: 0x8029D428 -> 0x8029D7B4
        // Local variables
        class MemVolume * memVolume; // r0
    }

    // References
    // -> class Module * dynaMemModule;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
}
// Range: 0x8029D7D4 -> 0x8029DFF4
void * Scaleform::Coordinator::Coordinator(class Coordinator * this /* r29 */) {
    // References
    // -> struct {} __vt__Q29Scaleform16CustomTranslator;
    // -> struct {} __vt__Q29Scaleform20CustomCommandHandler;
    // -> int GFx_Compile_with_GFC_BUILD_DEBUG;
    // -> struct {} __vt__Q29Scaleform10FileOpener;
    // -> struct {} __vt__13GFxFileOpener;
    // -> struct {} __vt__Q28Graphics23ScaleformInternalEntity;
    // -> struct {} __vt__16GFxActionControl;
    // -> struct {} __vt__8GFxState;
    // -> struct {} __vt__Q29Scaleform13HeapAllocator;
    // -> struct {} __vt__Q29Scaleform11Coordinator;
}
// Range: 0x8029FB74 -> 0x8029FD8C
void * Scaleform::Coordinator::~Coordinator(class Coordinator * this /* r29 */) {
    // Local variables
    class GPtr plib; // r1+0x8

    // References
    // -> bool initialized;
    // -> struct {} __vt__Q29Scaleform11Coordinator;
}
// Range: 0x802A1684 -> 0x802A1708
class Coordinator * Scaleform::Coordinator::GetCoord() {
    // References
    // -> class Coordinator * coord;
    // -> bool initialized;
    // -> bool accessLock;
}
// Range: 0x802A1708 -> 0x802A1F44
void Scaleform::Coordinator::LoadMovie(class Coordinator * this /* r31 */, class ScaleformBlobEntity * ent /* r20 */, void * pmem /* r18 */, int size /* r19 */) {
    // Local variables
    unsigned int memIndex; // r25
    unsigned int texArraySize; // r24

    {
        // Range: 0x802A1ABC -> 0x802A1ACC
        // Local variables
        unsigned int i; // r23

        {
            // Range: 0x802A1ABC -> 0x802A1ACC
            // Local variables
            char * texFilename; // r21
            char * uidString; // r22

            {
                // Range: 0x802A1ACC -> 0x802A1ACC
                // Local variables
                unsigned int uidIndex; // r5
                unsigned char curChar; // r3
                unsigned long long curValue; // r27:r20
            }
        }
    }

    // References
    // -> char PLACEHOLDER_URL[1];
    // -> struct {} __vt__Q29Scaleform13GSFMemoryFile;
    // -> struct {} __vt__Q29Scaleform18CustomImageCreator;
    // -> struct {} __vt__8GFxState;
    // -> struct {} __vt__16GRendererWiiImpl;
}
// Range: 0x802A1FA4 -> 0x802A2120
void Scaleform::Coordinator::LoadTextures(class Coordinator * this /* r31 */) {
    {
        // Range: 0x802A1FBC -> 0x802A2068
        {
            // Range: 0x802A1FBC -> 0x802A2068
            // Local variables
            class TextureNode * curTexNode; // r26

            {
                // Range: 0x802A1FBC -> 0x802A2068
                // Local variables
                class EntityHandle * texHeaderEntity; // r25
                class ScadMgr * scadMgr; // r0
            }
        }
    }
    {
        // Range: 0x802A2074 -> 0x802A20C8
        // Local variables
        class MovieNode * curMovieNode; // r3
    }
}
// Range: 0x802A2120 -> 0x802A22C8
void Scaleform::Coordinator::InstantiateMovie(class Coordinator * this /* r30 */, char * filename /* r26 */) {
}
// Range: 0x802A22C8 -> 0x802A269C
void Scaleform::Coordinator::PlayMovie(class Coordinator * this /* r23 */, char * filename /* r24 */, class ScaleformOGAsset * oga /* r25 */, char * langCode /* r26 */, unsigned int viewnum /* r27 */, class Rect2D * dispRect /* r28 */, bool checkHealth /* r29 */, bool checkStick /* r30 */, bool persist /* r31 */) {
}
// signature: Scaleform::Coordinator::GraphicsPlayMovie(World::ScaleformOGAsset *, const char *)
// Range: 0x802A269C -> 0x802A29B0
void Scaleform::Coordinator::GraphicsPlayMovie(class Coordinator * this /* r30 */, char * filename /* r25 */) {
}
// signature: Scaleform::Coordinator::StopMovie(World::ScaleformOGAsset *)
// Range: 0x802A29B0 -> 0x802A2A54
void Scaleform::Coordinator::StopMovie() {
}
// signature: Scaleform::Coordinator::GraphicsStopMovie(World::ScaleformOGAsset *)
// Range: 0x802A2A54 -> 0x802A2AF8
void Scaleform::Coordinator::GraphicsStopMovie() {
    {
        // Range: 0x802A2A74 -> 0x802A2AD8
        // Local variables
        class ViewNode * node; // r0
    }
}
// signature: Scaleform::Coordinator::PauseMovie(World::ScaleformOGAsset *)
// Range: 0x802A2B3C -> 0x802A2BA0
void Scaleform::Coordinator::PauseMovie() {
}
// signature: Scaleform::Coordinator::UnpauseMovie(World::ScaleformOGAsset *)
// Range: 0x802A2BA0 -> 0x802A2C04
void Scaleform::Coordinator::UnpauseMovie() {
}
// signature: Scaleform::Coordinator::ClearMovie(World::ScaleformOGAsset *)
// Range: 0x802A2C04 -> 0x802A2C68
void Scaleform::Coordinator::ClearMovie() {
}
// signature: Scaleform::Coordinator::UnclearMovie(World::ScaleformOGAsset *)
// Range: 0x802A2C68 -> 0x802A2CCC
void Scaleform::Coordinator::UnclearMovie() {
}
// Range: 0x802A2CCC -> 0x802A2DF0
void Scaleform::Coordinator::StopAllMovies(class Coordinator * this /* r29 */) {
    {
        // Range: 0x802A2D50 -> 0x802A2D90
        // Local variables
        class ViewNode * node; // r3
    }

    // References
    // -> bool renderGameComponents;
}
// Range: 0x802A2DF0 -> 0x802A2F84
void Scaleform::Coordinator::BroadcastEvent(class Coordinator * this /* r29 */, enum eSFEventType toEvent /* r30 */) {
}
// Range: 0x802A2F84 -> 0x802A310C
void Scaleform::Coordinator::BroadcastEvent(class Coordinator * this /* r24 */, enum eSFEventType toEvent /* r25 */, char * str /* r26 */) {
}
// Range: 0x802A310C -> 0x802A329C
void Scaleform::Coordinator::BroadcastEvent(class Coordinator * this /* r25 */, enum eSFEventType toEvent /* r26 */, float num /* f31 */) {
}
// Range: 0x802A329C -> 0x802A3560
void Scaleform::Coordinator::BroadcastEvent(class Coordinator * this /* r23 */, enum eSFEventType toEvent /* r24 */, float * args /* r25 */, unsigned int numArgs /* r26 */) {
    {
        // Range: 0x802A32C4 -> 0x802A3540
        {
            // Range: 0x802A32C4 -> 0x802A33B4
            // Local variables
            unsigned int i; // r3
        }
    }
}
// Range: 0x802A3560 -> 0x802A361C
void Scaleform::Coordinator::GraphicsStopAllMovies(class Coordinator * this /* r28 */) {
    {
        // Range: 0x802A3574 -> 0x802A35E8
        // Local variables
        class ViewNode * node; // r29
    }
}
// Range: 0x802A361C -> 0x802A3A90
void Scaleform::Coordinator::UnloadMovie(class Coordinator * this /* r21 */, char * filename /* r22 */) {
    // Local variables
    class MovieNode * curNode; // r23

    // References
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static void * nearestMovieReleased;
    // -> static void * movieReleaseTest;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
}
// Range: 0x802A3A90 -> 0x802A3F80
void Scaleform::Coordinator::UnloadTextures(class Coordinator * this /* r26 */, void * pmem /* r27 */) {
    // Local variables
    unsigned int memIndex; // r31
    unsigned int texArraySize; // r30

    {
        // Range: 0x802A3ABC -> 0x802A3ACC
        // Local variables
        unsigned int i; // r29

        {
            // Range: 0x802A3ABC -> 0x802A3ACC
            // Local variables
            class TextureNode * curTexNode; // r28
            char * texFilename; // r16
        }
    }

    // References
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class Coordinator * coord;
    // -> bool initialized;
    // -> bool accessLock;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
}
// Range: 0x802A3F80 -> 0x802A43BC
void Scaleform::Coordinator::SwitchMovies(class Coordinator * this /* r30 */) {
    // Local variables
    class Iterator iter; // r1+0x44

    {
        // Range: 0x802A401C -> 0x802A4084
        // Local variables
        class Iterator lastIter; // r1+0x40
    }
    {
        // Range: 0x802A4084 -> 0x802A416C
        // Local variables
        int poolSize; // r28
        class NodeType * pool; // r27
        class Iterator pendTail; // r1+0x38
        class Iterator pendIter; // r1+0x3C
    }
    {
        // Range: 0x802A416C -> 0x802A4348
        // Local variables
        int oldCBSize; // r28
        class NodeType * oldCBPool; // r27
        class Iterator cbTail; // r1+0x30
        class Iterator cbIter; // r1+0x34
    }
}
// signature: Scaleform::Coordinator::InvokeASFunc(World::ScaleformOGAsset *, const char *, unsigned int, float *)
// Range: 0x802A53A0 -> 0x802A5648
void Scaleform::Coordinator::InvokeASFunc(char * funcName /* r27 */, unsigned int numArgs /* r28 */, float * args /* r29 */) {
    {
        // Range: 0x802A54A0 -> 0x802A54A0
        // Local variables
        unsigned int i; // r3
    }
}
// signature: Scaleform::Coordinator::InvokeASFunc(World::ScaleformOGAsset *, const char *, unsigned int, bool *)
// Range: 0x802A5648 -> 0x802A58E0
void Scaleform::Coordinator::InvokeASFunc(char * funcName /* r27 */, unsigned int numArgs /* r28 */, bool * args /* r29 */) {
    {
        // Range: 0x802A5744 -> 0x802A5744
        // Local variables
        unsigned int i; // r3
    }
}
// signature: Scaleform::Coordinator::InvokeASFunc(World::ScaleformOGAsset *, World::eSFEventType, unsigned int, float *)
// Range: 0x802A58E0 -> 0x802A5B80
void Scaleform::Coordinator::InvokeASFunc(enum eSFEventType e /* r27 */, unsigned int numArgs /* r28 */, float * args /* r29 */) {
    {
        // Range: 0x802A59E0 -> 0x802A59E0
        // Local variables
        unsigned int i; // r3
    }
}
// signature: Scaleform::Coordinator::SetASVariable(World::ScaleformOGAsset *, const char *, float)
// Range: 0x802A5B80 -> 0x802A5CF8
void Scaleform::Coordinator::SetASVariable(char * varName /* r29 */, float varValue /* f31 */) {
}
// signature: Scaleform::Coordinator::SetASArray(World::ScaleformOGAsset *, const char *, unsigned int, float *)
// Range: 0x802A5CF8 -> 0x802A5FA0
void Scaleform::Coordinator::SetASArray(char * varName /* r27 */, unsigned int numArgs /* r28 */, float * args /* r29 */) {
    {
        // Range: 0x802A5E00 -> 0x802A5E00
        // Local variables
        unsigned int i; // r3
    }
}
// signature: Scaleform::Coordinator::SetASArray(World::ScaleformOGAsset *, const char *, unsigned int, bool *)
// Range: 0x802A5FA0 -> 0x802A6238
void Scaleform::Coordinator::SetASArray(char * varName /* r27 */, unsigned int numArgs /* r28 */, bool * args /* r29 */) {
    {
        // Range: 0x802A60A4 -> 0x802A60A4
        // Local variables
        unsigned int i; // r3
    }
}
// signature: Scaleform::Coordinator::SetHealth(World::ScaleformOGAsset *, unsigned int)
// Range: 0x802A6238 -> 0x802A62E8
void Scaleform::Coordinator::SetHealth() {
    // Local variables
    float newHealth; // f1
}
// signature: Scaleform::Coordinator::SetStickPos(World::ScaleformOGAsset *, unsigned int, float, float)
// Range: 0x802A62E8 -> 0x802A6360
void Scaleform::Coordinator::SetStickPos() {
    // Local variables
    unsigned int doublePortNum; // r4
}
// signature: Scaleform::Coordinator::SetIRMousePos(World::ScaleformOGAsset *, float, float)
// Range: 0x802A6360 -> 0x802A64C8
void Scaleform::Coordinator::SetIRMousePos(float x /* f30 */, float y /* f31 */) {
    // Local variables
    class GFxMouseEvent mouseEvent; // r1+0x8
}
// signature: Scaleform::Coordinator::SetMultiplayerIRMousePos(World::ScaleformOGAsset *, unsigned int, float, float)
// Range: 0x802A64C8 -> 0x802A6614
void Scaleform::Coordinator::SetMultiplayerIRMousePos(unsigned int portNum /* r28 */, float x /* f30 */, float y /* f31 */) {
    // Local variables
    unsigned int doublePortNum; // r5
}
// signature: Scaleform::Coordinator::IRMouseButtonPress(World::ScaleformOGAsset *, unsigned int, float, float)
// Range: 0x802A6614 -> 0x802A6734
void Scaleform::Coordinator::IRMouseButtonPress(float x /* f1 */, float y /* f2 */) {
    // Local variables
    class GFxMouseEvent mouseEvent; // r1+0x8
}
// signature: Scaleform::Coordinator::IRMouseButtonRelease(World::ScaleformOGAsset *, unsigned int, float, float)
// Range: 0x802A6734 -> 0x802A6854
void Scaleform::Coordinator::IRMouseButtonRelease(float x /* f1 */, float y /* f2 */) {
    // Local variables
    class GFxMouseEvent mouseEvent; // r1+0x8
}
// Range: 0x802A6854 -> 0x802A6880
void Scaleform::Coordinator::RefreshViewports() {
}
// signature: Scaleform::Coordinator::SwitchFPCam(unsigned int, bool)
// Range: 0x802A6880 -> 0x802A68E0
void Scaleform::Coordinator::SwitchFPCam() {
    // Local variables
    float args[2]; // r1+0x8
}
// signature: Scaleform::Coordinator::SwitchAimingCam(unsigned int, bool)
// Range: 0x802A68E0 -> 0x802A6940
void Scaleform::Coordinator::SwitchAimingCam() {
    // Local variables
    float args[2]; // r1+0x8
}
// Range: 0x802A6940 -> 0x802A6A9C
void * Scaleform::ViewNode::ViewNode(class ViewNode * this /* r31 */) {
}
// Range: 0x802A6DD0 -> 0x802A6F54
void * Scaleform::ViewNode::~ViewNode(class ViewNode * this /* r29 */) {
    // Local variables
    class Iterator cbIter; // r1+0x24
    class Iterator cbTail; // r1+0x20
    class Iterator pendIter; // r1+0x1C
    class Iterator pendTail; // r1+0x18
}
// signature: Scaleform::CustomTranslator::Translate(GFxWStringBuffer *, const wchar_t *)
// Range: 0x802A6F84 -> 0x802A71C4
bool Scaleform::CustomTranslator::Translate(class GFxWStringBuffer * dest /* r28 */) {
    // Local variables
    bool bTranslated; // r31

    {
        // Range: 0x802A6F8C -> 0x802A71AC
        // Local variables
        char * text; // r29
        unsigned int len; // r30

        {
            // Range: 0x802A6FC0 -> 0x802A6FDC
            // Local variables
            wchar_t * it; // r3
        }
        {
            // Range: 0x802A7068 -> 0x802A71AC
            // Local variables
            int wIndex; // r7

            {
                // Range: 0x802A70BC -> 0x802A7190
                // Local variables
                unsigned int i; // r8
            }
        }
    }

    // References
    // -> static char parsed[256];
    // -> class StringsAssetBlobEntity * strings;
}
