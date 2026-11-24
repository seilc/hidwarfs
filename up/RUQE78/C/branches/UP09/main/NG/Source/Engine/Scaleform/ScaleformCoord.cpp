/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Scaleform\ScaleformCoord.cpp
*/
void * movieReleaseTest; // size: 0x4, address: 0x8084DDFC
void * nearestMovieReleased; // size: 0x4, address: 0x8084DE00
class Coordinator * coord; // size: 0x4, address: 0x8084DE04
bool initialized; // size: 0x1, address: 0x8084DE08
bool accessLock; // size: 0x1, address: 0x8084DE09
static bool isFirstFunctionCall; // size: 0x1, address: 0x807C1294
static enum Code sfKeyCodeMap[18]; // size: 0x48, address: 0x807C12A8
// Range: 0x80339DA4 -> 0x8033A54C
void * Scaleform::Coordinator::Coordinator(class Coordinator * this /* r31 */) {
    // Local variables
    class NodeType * moviePool; // r26
    class NodeType * texturePool; // r27
    class NodeType * viewPool; // r28
    class NodeType * listenerPool; // r29
    int fontMaps; // r27
    char * bodyText; // r1+0x30
    char * displayNumbers; // r1+0x2C
    char * displayText; // r1+0x28

    // References
    // -> struct {} __vt__Q29Scaleform11Coordinator;
}
// Range: 0x8033B56C -> 0x8033B7E0
void * Scaleform::Coordinator::~Coordinator(class Coordinator * this /* r28 */) {
    // Local variables
    class GPtr plib; // r1+0x8
    int fontMaps; // r30

    // References
    // -> bool initialized;
    // -> struct {} __vt__Q29Scaleform11Coordinator;
}
// Range: 0x8033C2E0 -> 0x8033C5BC
class Coordinator * Scaleform::Coordinator::GetCoord() {
    // References
    // -> class Coordinator * coord;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> bool initialized;
    // -> bool accessLock;
}
// Range: 0x8033C5BC -> 0x8033C934
void Scaleform::Coordinator::LoadMovie(class Coordinator * this /* r30 */, class ScaleformBlobEntity * ent /* r26 */, void * pmem /* r25 */, int size /* r31 */) {
    // Local variables
    class MovieNode * sfNode; // r1+0x14
    unsigned int texArraySize; // r28
    unsigned long long * texIDArrayPtr; // r27
    char * texNameArrayPtr; // r26
    void * assetData; // r25
    int assetSize; // r26
    class GPtr memFile; // r1+0xC

    {
        // Range: 0x8033C78C -> 0x8033C844
        // Local variables
        unsigned int i; // r25

        {
            // Range: 0x8033C78C -> 0x8033C844
            // Local variables
            class TextureNode * curTexNode; // r0

            {
                // Range: 0x8033C790 -> 0x8033C830
                // Local variables
                class TextureNode * newTexNode; // r1+0x10
            }
        }
    }
}
// Range: 0x8033D3B8 -> 0x8033D624
void Scaleform::Coordinator::LoadTextures(class Coordinator * this /* r26 */) {
    {
        // Range: 0x8033D3C8 -> 0x8033D4F0
        {
            // Range: 0x8033D3C8 -> 0x8033D4F0
            // Local variables
            class TextureNode * curTexNode; // r27

            {
                // Range: 0x8033D3C8 -> 0x8033D4F0
                // Local variables
                class EntityHandle * texHeaderEntity; // r0
            }
        }
    }
    {
        // Range: 0x8033D4FC -> 0x8033D560
        // Local variables
        class MovieNode * curMovieNode; // r3
    }
    {
        // Range: 0x8033D568 -> 0x8033D5CC
        // Local variables
        class MovieNode * curMovieNode; // r3
    }

    // References
    // -> class RTTID_Data g_rttidDataTable[246];
    // -> class EmbeddedTreeAVL g_handleSortedTree;
}
// Range: 0x8033D624 -> 0x8033D998
void Scaleform::Coordinator::InstantiateMovie(class Coordinator * this /* r29 */, char * filename /* r30 */) {
    // Local variables
    class MovieNode * curNode; // r0
    class Time startTime; // r1+0x70
    class Time instTime; // r1+0x68
    class Time doneTime; // r1+0x60
    class Time t1; // r1+0x58
    class Time t2; // r1+0x50
    class Time totalTime; // r1+0x48

    {
        // Range: 0x8033D7E4 -> 0x8033D858
        // Local variables
        class GPtr plib; // r1+0x14
    }
}
// signature: Scaleform::Coordinator::PlayMovie(const char *, World::ScaleformOGAsset *, const char *, unsigned int, Graphics::Rect2D, bool)
// Range: 0x8033DA28 -> 0x8033DE98
void Scaleform::Coordinator::PlayMovie(class Coordinator * this /* r24 */, char * filename /* r25 */, class ScaleformOGAsset * oga /* r26 */, unsigned int viewnum /* r27 */, class Rect2D & dispRect /* r28 */, bool persist /* r29 */) {
    {
        // Range: 0x8033DD6C -> 0x8033DE4C
        // Local variables
        int dispLayer; // r0

        {
            // Range: 0x8033DDC8 -> 0x8033DDF4
            // Local variables
            class ViewNode * pViewNode; // r3
        }
    }

    // References
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
}
// Range: 0x8033DE98 -> 0x8033E100
void Scaleform::Coordinator::GraphicsPlayMovie(class Coordinator * this /* r30 */, class ViewNode * viewNode /* r31 */, char * filename /* r25 */) {
}
// signature: Scaleform::Coordinator::StopMovie(World::ScaleformOGAsset *)
// Range: 0x8033E100 -> 0x8033E1BC
void Scaleform::Coordinator::StopMovie() {
}
// Range: 0x8033E1BC -> 0x8033E29C
void Scaleform::Coordinator::GraphicsStopMovie(class Coordinator * this /* r30 */, class ViewNode * viewNode /* r31 */) {
}
// signature: Scaleform::Coordinator::SetPausedByTRC(World::ScaleformOGAsset *, bool)
// Range: 0x8033E29C -> 0x8033E300
void Scaleform::Coordinator::SetPausedByTRC() {
}
// signature: Scaleform::Coordinator::IsDyingMovie(World::ScaleformOGAsset *)
// Range: 0x8033E300 -> 0x8033E368
bool Scaleform::Coordinator::IsDyingMovie() {
}
// signature: Scaleform::Coordinator::IsDeadMovie(World::ScaleformOGAsset *)
// Range: 0x8033E368 -> 0x8033E3C0
bool Scaleform::Coordinator::IsDeadMovie() {
}
// Range: 0x8033E3C0 -> 0x8033E500
void Scaleform::Coordinator::StopAllMovies(class Coordinator * this /* r29 */) {
    {
        // Range: 0x8033E444 -> 0x8033E4A0
        // Local variables
        class ViewNode * node; // r30
    }

    // References
    // -> bool renderGameComponents;
}
// Range: 0x8033E510 -> 0x8033E62C
void Scaleform::Coordinator::GraphicsStopAllMovies(class Coordinator * this /* r28 */) {
    {
        // Range: 0x8033E574 -> 0x8033E5D8
        // Local variables
        class ViewNode * node; // r29
    }
}
// Range: 0x8033E62C -> 0x8033E7B0
void Scaleform::Coordinator::UnloadMovie(class Coordinator * this /* r28 */, char * filename /* r29 */) {
    // Local variables
    class Iterator movieIter; // r1+0x20
    class Iterator movieTail; // r1+0x1C
    class MovieNode * curNode; // r30

    {
        // Range: 0x8033E6BC -> 0x8033E744
        // Local variables
        class Iterator movieNext; // r1+0x18
    }
}
// signature: Scaleform::Coordinator::UnloadTextures(const unsigned long long *, int)
// Range: 0x8033F650 -> 0x8033FEA8
void Scaleform::Coordinator::UnloadTextures(class Coordinator * this /* r26 */, int numTextures /* r27 */) {
    {
        // Range: 0x8033F658 -> 0x8033F658
        // Local variables
        int i; // r29

        {
            // Range: 0x8033F658 -> 0x8033F658
            // Local variables
            class TextureNode * curTexNode; // r28
        }
    }

    // References
    // -> class Coordinator * coord;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> bool initialized;
    // -> bool accessLock;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
}
// Range: 0x8033FEA8 -> 0x8033FF1C
void Scaleform::Coordinator::CleanupMovies(class Coordinator * this /* r29 */) {
    {
        // Range: 0x8033FEC0 -> 0x8033FEF0
        // Local variables
        unsigned int i; // r30
    }
}
// Range: 0x8033FF1C -> 0x8033FF30
bool Scaleform::Coordinator::GetMoviesUnloaded() {
}
// Range: 0x8033FF30 -> 0x8033FFA4
class TextureNode * Scaleform::Coordinator::GetTextureNode(class Coordinator * this /* r27 */, char * purl /* r28 */) {
    // Local variables
    class TextureNode * node; // r29
}
// signature: Scaleform::Coordinator::GetNextMovie(Scaleform::eSFBufferType)
// Range: 0x8033FFA4 -> 0x8033FFE8
class ViewNode * Scaleform::Coordinator::GetNextMovie() {
}
// Range: 0x8033FFE8 -> 0x80340B54
void Scaleform::Coordinator::SwitchMovies(class Coordinator * this /* r19 */) {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
}
// signature: Scaleform::Coordinator::GetMovieByAsset(World::ScaleformOGAsset *)
// Range: 0x80340B64 -> 0x80340BB8
class ViewNode * Scaleform::Coordinator::GetMovieByAsset() {
    // Local variables
    class ViewNode * curNode; // r7
}
// Range: 0x80340BB8 -> 0x80340C28
class MovieNode * Scaleform::Coordinator::GetMovieByFilename(char * filename /* r27 */) {
    // Local variables
    class MovieNode * foundNode; // r29

    {
        // Range: 0x80340BD4 -> 0x80340BFC
        {
            // Range: 0x80340BD4 -> 0x80340BFC
            // Local variables
            class MovieNode * node; // r28
        }
    }
}
// signature: Scaleform::Coordinator::InvokeASFunc(World::ScaleformOGAsset *, const char *, unsigned int, const char **)
// Range: 0x80340C30 -> 0x80340D1C
void Scaleform::Coordinator::InvokeASFunc(char * funcName /* r29 */, unsigned int numArgs /* r27 */, char * * args /* r28 */) {
    // Local variables
    class ViewNode * curNode; // r0
    class SFEventNode * curEvent; // r1+0x8

    {
        // Range: 0x80340CA0 -> 0x80340CE4
        // Local variables
        unsigned int i; // r29
    }
}
// signature: Scaleform::Coordinator::SetTexturesLoaded(bool, bool)
// Range: 0x80340D28 -> 0x80340D38
void Scaleform::Coordinator::SetTexturesLoaded() {
}
// signature: Scaleform::MovieLog::LogMessageVarg(GFxLogConstants::LogMessageType, const char *, __va_list_struct *)
// Range: 0x80340D38 -> 0x80340D3C
void Scaleform::MovieLog::LogMessageVarg() {
}
// Range: 0x80340D3C -> 0x80340DD4
void * Scaleform::MovieNode::MovieNode(class MovieNode * this /* r30 */) {
    // References
    // -> struct {} __vt__Q29Scaleform8MovieLog;
    // -> struct {} __vt__8GFxState;
}
// Range: 0x80340DE0 -> 0x803413C4
void * Scaleform::ViewNode::ViewNode(class ViewNode * this /* r29 */) {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
}
// Range: 0x80341E08 -> 0x803425DC
void Scaleform::ViewNode::RefreshViewport(class ViewNode * this /* r29 */) {
    // Local variables
    class GViewport desc; // r1+0x8

    // References
    // -> static bool isFirstFunctionCall;
    // -> class Coordinator * coord;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> bool initialized;
    // -> bool accessLock;
}
// signature: Scaleform::ViewNode::SetButtonState(int, bool)
// Range: 0x803425DC -> 0x803429A4
void Scaleform::ViewNode::SetButtonState(class ViewNode * this /* r23 */, int newButtonState /* r24 */) {
    // Local variables
    int changed; // r27
    int mask; // r26

    {
        // Range: 0x80342640 -> 0x80342790
        // Local variables
        int i; // r25

        {
            // Range: 0x80342640 -> 0x80342790
            {
                // Range: 0x80342640 -> 0x80342640
                // Local variables
                enum EventType eventType; // r0
            }
            {
                // Range: 0x80342640 -> 0x80342790
                // Local variables
                int dirIdx; // r0
            }
        }
    }
    {
        // Range: 0x803427A4 -> 0x803428B8
        // Local variables
        int yPos; // r3
        int xPos; // r0
        enum EventType mouseEventType; // r18
        enum EventType eventType; // r3
    }
    {
        // Range: 0x803428B8 -> 0x80342900
        // Local variables
        enum EventType eventType; // r0
    }
    {
        // Range: 0x80342900 -> 0x80342970
        // Local variables
        enum EventType eventType; // r5
    }

    // References
    // -> float dt;
    // -> static enum Code sfKeyCodeMap[18];
}
// Range: 0x803429A4 -> 0x803432BC
void * Scaleform::SFEventNode::SFEventNode(class SFEventNode * this /* r25 */, unsigned int na /* r26 */) {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// Range: 0x803432BC -> 0x80343300
void * Scaleform::TextureNode::TextureNode() {
}
