/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Scaleform\ScaleformCoord.cpp
*/
class Coordinator * coord; // size: 0x4, address: 0x8077CF2C
bool initialized; // size: 0x1, address: 0x8077CF30
bool accessLock; // size: 0x1, address: 0x8077CF31
bool isFirstFunctionCall; // size: 0x1, address: 0x806CEF64
static enum Code sfKeyCodeMap[18]; // size: 0x48, address: 0x806CEF78
// Range: 0x801F2C40 -> 0x801F3570
void * Scaleform::Coordinator::Coordinator(class Coordinator * this /* r31 */) {
    // Local variables
    int fontMaps; // r28
    char * bodyText; // r1+0x30
    char * displayNumbers; // r1+0x2C
    char * displayText; // r1+0x28

    // References
    // -> struct {} __vt__Q29Scaleform16CustomTranslator;
    // -> class GMemoryHeap * pGlobalHeap;
    // -> struct {} __vt__Q28Graphics23ScaleformInternalEntity;
    // -> struct {} __vt__16GFxActionControl;
    // -> struct {} __vt__Q29Scaleform11Coordinator;
}
// Range: 0x801F36F0 -> 0x801F3980
void * Scaleform::Coordinator::~Coordinator(class Coordinator * this /* r28 */) {
    // Local variables
    class GPtr plib; // r1+0x8
    int fontMaps; // r30

    // References
    // -> bool initialized;
    // -> struct {} __vt__Q29Scaleform11Coordinator;
}
// Range: 0x801F39D0 -> 0x801F3A54
class Coordinator * Scaleform::Coordinator::GetCoord() {
    // References
    // -> class Coordinator * coord;
    // -> bool initialized;
    // -> bool accessLock;
}
// Range: 0x801F3A60 -> 0x801F3EB0
void Scaleform::Coordinator::LoadMovie(class Coordinator * this /* r25 */, class ScaleformBlobEntity * ent /* r27 */, void * pmem /* r28 */, int size /* r26 */) {
    // Local variables
    unsigned int texArraySize; // r29
    unsigned long long * texIDArrayPtr; // r0
    char * texNameArrayPtr; // r28
    int assetSize; // r24
    class GPtr memFile; // r1+0xC

    {
        // Range: 0x801F3C74 -> 0x801F3D6C
        // Local variables
        unsigned int i; // r27

        {
            // Range: 0x801F3C74 -> 0x801F3D6C
            // Local variables
            class TextureNode * curTexNode; // r0
        }
    }

    // References
    // -> char PLACEHOLDER_URL[1];
    // -> struct {} __vt__Q29Scaleform13GSFMemoryFile;
    // -> struct {} __vt__Q29Scaleform18CustomImageCreator;
    // -> class GMemoryHeap * pGlobalHeap;
}
// Range: 0x801F3EB0 -> 0x801F4048
void Scaleform::Coordinator::LoadTextures(class Coordinator * this /* r31 */) {
    {
        // Range: 0x801F3EC8 -> 0x801F3F44
        {
            // Range: 0x801F3EC8 -> 0x801F3F44
            // Local variables
            class TextureNode * curTexNode; // r27

            {
                // Range: 0x801F3EC8 -> 0x801F3F44
                // Local variables
                class EntityHandle * texHeaderEntity; // r26
            }
        }
    }
    {
        // Range: 0x801F3F44 -> 0x801F3FB0
        // Local variables
        class MovieNode * curMovieNode; // r3
    }
    {
        // Range: 0x801F3FB0 -> 0x801F401C
        // Local variables
        class MovieNode * curMovieNode; // r3
    }
}
// Range: 0x801F4050 -> 0x801F4370
void Scaleform::Coordinator::InstantiateMovie(class Coordinator * this /* r29 */, char * filename /* r30 */) {
    // Local variables
    class MovieNode * curNode; // r0

    {
        // Range: 0x801F4220 -> 0x801F4294
        // Local variables
        class GPtr plib; // r1+0x14
    }

    // References
    // -> class GMemoryHeap * pGlobalHeap;
}
// Range: 0x801F4370 -> 0x801F43C8
void Scaleform::Coordinator::ChangeSFPlayerState(enum eSFPlayerState newState /* r29 */) {
}
// signature: Scaleform::Coordinator::PlayMovie(const char *, World::ScaleformOGAsset *, const char *, unsigned int, Graphics::Rect2D, bool)
// Range: 0x801F43D0 -> 0x801F4544
void Scaleform::Coordinator::PlayMovie(class Coordinator * this /* r30 */, char * filename /* r31 */, class ScaleformOGAsset * oga /* r25 */, unsigned int viewnum /* r29 */, class Rect2D & dispRect /* r28 */, bool persist /* r27 */) {
    // Local variables
    class ViewNode * curNode; // r0

    {
        // Range: 0x801F445C -> 0x801F44FC
        // Local variables
        int dispLayer; // r0
    }
}
// Range: 0x801F4550 -> 0x801F4740
void Scaleform::Coordinator::GraphicsPlayMovie(class Coordinator * this /* r30 */, class ViewNode * viewNode /* r31 */, char * filename /* r29 */) {
    // Local variables
    class MovieNode * movieNode; // r0
}
// signature: Scaleform::Coordinator::StopMovie(World::ScaleformOGAsset *)
// Range: 0x801F47B0 -> 0x801F4828
void Scaleform::Coordinator::StopMovie() {
    // Local variables
    class ViewNode * curNode; // r0
}
// Range: 0x801F4830 -> 0x801F48A0
void Scaleform::Coordinator::GraphicsStopMovie(class Coordinator * this /* r30 */, class ViewNode * viewNode /* r31 */) {
}
// signature: Scaleform::Coordinator::PauseMovie(World::ScaleformOGAsset *)
// Range: 0x801F48A0 -> 0x801F48D4
void Scaleform::Coordinator::PauseMovie() {
    // Local variables
    class ViewNode * curNode; // r0
}
// signature: Scaleform::Coordinator::UnpauseMovie(World::ScaleformOGAsset *)
// Range: 0x801F48E0 -> 0x801F4914
void Scaleform::Coordinator::UnpauseMovie() {
    // Local variables
    class ViewNode * curNode; // r0
}
// signature: Scaleform::Coordinator::SetPausedByTRC(World::ScaleformOGAsset *, bool)
// Range: 0x801F4920 -> 0x801F4960
void Scaleform::Coordinator::SetPausedByTRC(bool trcPause /* r31 */) {
    // Local variables
    class ViewNode * curNode; // r0
}
// signature: Scaleform::Coordinator::ClearMovie(World::ScaleformOGAsset *)
// Range: 0x801F4960 -> 0x801F4994
void Scaleform::Coordinator::ClearMovie() {
    // Local variables
    class ViewNode * curNode; // r0
}
// signature: Scaleform::Coordinator::UnclearMovie(World::ScaleformOGAsset *)
// Range: 0x801F49A0 -> 0x801F49D4
void Scaleform::Coordinator::UnclearMovie() {
    // Local variables
    class ViewNode * curNode; // r0
}
// signature: Scaleform::Coordinator::IsDyingMovie(World::ScaleformOGAsset *)
// Range: 0x801F49E0 -> 0x801F4A18
bool Scaleform::Coordinator::IsDyingMovie() {
    // Local variables
    class ViewNode * curNode; // r0
}
// signature: Scaleform::Coordinator::IsDeadMovie(World::ScaleformOGAsset *)
// Range: 0x801F4A20 -> 0x801F4A48
bool Scaleform::Coordinator::IsDeadMovie() {
    // Local variables
    class ViewNode * curNode; // r0
}
// Range: 0x801F4A50 -> 0x801F4B58
void Scaleform::Coordinator::StopAllMovies(class Coordinator * this /* r29 */) {
    {
        // Range: 0x801F4AA4 -> 0x801F4B0C
        // Local variables
        class ViewNode * node; // r30
    }

    // References
    // -> bool renderGameComponents;
}
// Range: 0x801F4B60 -> 0x801F4C04
void Scaleform::Coordinator::BroadcastEvent(class Coordinator * this /* r28 */, enum eSFEventType toEvent /* r29 */) {
    {
        // Range: 0x801F4B80 -> 0x801F4BF0
        // Local variables
        class SFEventNode * curEvent; // r1+0x8
        class ViewNode * curNode; // r0
    }
}
// Range: 0x801F4C10 -> 0x801F4CAC
void Scaleform::Coordinator::GraphicsStopAllMovies(class Coordinator * this /* r28 */) {
    {
        // Range: 0x801F4C30 -> 0x801F4C88
        // Local variables
        class ViewNode * node; // r29
    }
}
// Range: 0x801F4CB0 -> 0x801F4DCC
void Scaleform::Coordinator::UnloadMovie(class Coordinator * this /* r26 */, char * filename /* r27 */) {
    // Local variables
    class MovieNode * curNode; // r28
}
// Range: 0x801F4DD0 -> 0x801F4E90
void Scaleform::Coordinator::UnloadTextures(class Coordinator * this /* r25 */, unsigned long long * texList /* r26 */, int numTextures /* r27 */) {
    {
        // Range: 0x801F4DEC -> 0x801F4E7C
        // Local variables
        int i; // r29

        {
            // Range: 0x801F4DEC -> 0x801F4E7C
            // Local variables
            class TextureNode * curTexNode; // r28
        }
    }
}
// Range: 0x801F4E90 -> 0x801F4EF4
void Scaleform::Coordinator::CleanupMovies(class Coordinator * this /* r29 */) {
    {
        // Range: 0x801F4EA4 -> 0x801F4EE0
        // Local variables
        unsigned int i; // r30
    }
}
// signature: Scaleform::Coordinator::GetTextureNode(const char *)
// Range: 0x801F4F00 -> 0x801F4F44
class TextureNode * Scaleform::Coordinator::GetTextureNode(class Coordinator * this /* r30 */) {
    // Local variables
    class TextureNode * node; // r31
}
// Range: 0x801F4F50 -> 0x801F4FAC
class Iterator Scaleform::Coordinator::FindTextureNode(char * purl /* r29 */) {
}
// signature: Scaleform::Coordinator::FindTextureNode(unsigned long long)
// Range: 0x801F4FB0 -> 0x801F4FEC
class Iterator Scaleform::Coordinator::FindTextureNode() {
}
// Range: 0x801F4FF0 -> 0x801F503C
void Scaleform::Coordinator::AddListener(class Coordinator * this /* r30 */, class ScaleformListener * listener /* r31 */) {
}
// signature: Scaleform::Coordinator::GetNextMovie(Scaleform::eSFBufferType)
// Range: 0x801F5040 -> 0x801F50B0
class ViewNode * Scaleform::Coordinator::GetNextMovie(class Coordinator * this /* r30 */) {
}
// Range: 0x801F50C0 -> 0x801F51DC
void Scaleform::Coordinator::SwitchMovies(class Coordinator * this /* r31 */) {
}
// signature: Scaleform::Coordinator::ResetViewIter(Scaleform::eSFBufferType)
// Range: 0x801F51E0 -> 0x801F51F8
void Scaleform::Coordinator::ResetViewIter() {
}
// Range: 0x801F5200 -> 0x801F528C
class ViewNode * Scaleform::Coordinator::GetMovie(class GFxMovieView * pmovie /* r29 */) {
    // Local variables
    class Iterator iter; // r1+0x8
    class ViewNode * curView; // r30
}
// signature: Scaleform::Coordinator::GetMovieByAsset(World::ScaleformOGAsset *)
// Range: 0x801F5290 -> 0x801F52E4
class ViewNode * Scaleform::Coordinator::GetMovieByAsset() {
    // Local variables
    class ViewNode * curNode; // r7
}
// Range: 0x801F52F0 -> 0x801F5360
class MovieNode * Scaleform::Coordinator::GetMovieByFilename(char * filename /* r27 */) {
    // Local variables
    class MovieNode * foundNode; // r29

    {
        // Range: 0x801F530C -> 0x801F5348
        {
            // Range: 0x801F530C -> 0x801F5348
            // Local variables
            class MovieNode * node; // r28
        }
    }
}
// signature: Scaleform::Coordinator::InvokeASFunc(World::ScaleformOGAsset *, const char *, unsigned int, float *)
// Range: 0x801F5360 -> 0x801F5440
void Scaleform::Coordinator::InvokeASFunc(char * funcName /* r28 */, unsigned int numArgs /* r26 */, float * args /* r27 */) {
    // Local variables
    class ViewNode * curNode; // r0
    class SFEventNode * curEvent; // r1+0x8

    {
        // Range: 0x801F53D8 -> 0x801F5410
        // Local variables
        unsigned int i; // r28
    }
}
// signature: Scaleform::Coordinator::InvokeASFunc(World::ScaleformOGAsset *, const char *, unsigned int, int *)
// Range: 0x801F5440 -> 0x801F5540
void Scaleform::Coordinator::InvokeASFunc(char * funcName /* r27 */, unsigned int numArgs /* r25 */, int * args /* r26 */) {
    // Local variables
    class ViewNode * curNode; // r0
    class SFEventNode * curEvent; // r1+0x8

    {
        // Range: 0x801F54B8 -> 0x801F5510
        // Local variables
        unsigned int i; // r27
    }
}
// signature: Scaleform::Coordinator::InvokeASFunc(World::ScaleformOGAsset *, const char *, unsigned int, const char **)
// Range: 0x801F5540 -> 0x801F563C
void Scaleform::Coordinator::InvokeASFunc(char * funcName /* r28 */, unsigned int numArgs /* r29 */, char * * args /* r30 */) {
    // Local variables
    class ViewNode * curNode; // r0
    class SFEventNode * curEvent; // r1+0x8

    {
        // Range: 0x801F55BC -> 0x801F5610
        // Local variables
        unsigned int i; // r0
    }
}
// signature: Scaleform::Coordinator::InvokeASFunc(World::ScaleformOGAsset *, const char *, unsigned int, const GFxValue *)
// Range: 0x801F5640 -> 0x801F5710
void Scaleform::Coordinator::InvokeASFunc(char * funcName /* r29 */, unsigned int numArgs /* r27 */, class GFxValue * args /* r28 */) {
    // Local variables
    class ViewNode * curNode; // r0
    class SFEventNode * curEvent; // r1+0x8

    {
        // Range: 0x801F56B4 -> 0x801F56E4
        // Local variables
        unsigned int i; // r29
    }
}
// signature: Scaleform::Coordinator::SetASVariable(World::ScaleformOGAsset *, const char *, float)
// Range: 0x801F5730 -> 0x801F57E8
void Scaleform::Coordinator::SetASVariable(char * varName /* r30 */, float varValue /* f31 */) {
    // Local variables
    class ViewNode * curNode; // r0
    class SFEventNode * curEvent; // r1+0x8
}
// signature: Scaleform::Coordinator::SetASArray(World::ScaleformOGAsset *, const char *, unsigned int, const GFxValue *)
// Range: 0x801F57F0 -> 0x801F58C0
void Scaleform::Coordinator::SetASArray(char * varName /* r29 */, unsigned int numArgs /* r27 */, class GFxValue * args /* r28 */) {
    // Local variables
    class ViewNode * curNode; // r0
    class SFEventNode * curEvent; // r1+0x8

    {
        // Range: 0x801F586C -> 0x801F58A0
        // Local variables
        unsigned int i; // r29
    }
}
// Range: 0x801F58C0 -> 0x801F58EC
void Scaleform::Coordinator::RefreshViewports() {
}
// Range: 0x801F58F0 -> 0x801F5904
void Scaleform::Coordinator::ClearCustomText() {
}
// Range: 0x801F5910 -> 0x801F5924
void Scaleform::Coordinator::DisplayCustomText() {
}
// Range: 0x801F5930 -> 0x801F59D0
bool Scaleform::Coordinator::IsWidescreen(class Coordinator * this /* r31 */) {
    {
        // Range: 0x801F5938 -> 0x801F59B4
        // Local variables
        float pixelAspect; // f0
        class View * view; // r0
    }

    // References
    // -> bool isFirstFunctionCall;
}
// Range: 0x801F59D0 -> 0x801F5A44
void * Scaleform::MovieNode::MovieNode(class MovieNode * this /* r30 */) {
    // References
    // -> struct {} __vt__Q29Scaleform8MovieLog;
}
// Range: 0x801F5AA0 -> 0x801F5B08
void * Scaleform::MovieNode::~MovieNode(class MovieNode * this /* r30 */) {
}
// Range: 0x801F5B10 -> 0x801F5C18
void * Scaleform::ViewNode::ViewNode(class ViewNode * this /* r30 */) {
    {
        // Range: 0x801F5BAC -> 0x801F5BD8
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x801F5BD8 -> 0x801F5BFC
        // Local variables
        int i; // r0
    }
}
// Range: 0x801F5C20 -> 0x801F5CC4
void * Scaleform::ViewNode::~ViewNode(class ViewNode * this /* r27 */) {
}
// Range: 0x801F5D30 -> 0x801F5F28
void Scaleform::ViewNode::RefreshViewport(class ViewNode * this /* r31 */) {
    // Local variables
    class GViewport desc; // r1+0x8
}
// signature: Scaleform::ViewNode::SetButtonState(int, bool)
// Range: 0x801F5F30 -> 0x801F6220
void Scaleform::ViewNode::SetButtonState(class ViewNode * this /* r28 */, int newButtonState /* r29 */) {
    // Local variables
    int changed; // r31
    int mask; // r21

    {
        // Range: 0x801F5F94 -> 0x801F60F4
        // Local variables
        int i; // r30

        {
            // Range: 0x801F5F94 -> 0x801F60F4
            {
                // Range: 0x801F5F94 -> 0x801F5F94
                // Local variables
                enum EventType eventType; // r0
            }
            {
                // Range: 0x801F5F94 -> 0x801F60F4
                // Local variables
                int dirIdx; // r0
            }
        }
    }
    {
        // Range: 0x801F60F4 -> 0x801F613C
        // Local variables
        enum EventType eventType; // r0
    }
    {
        // Range: 0x801F613C -> 0x801F6180
        // Local variables
        enum EventType eventType; // r0
    }
    {
        // Range: 0x801F6180 -> 0x801F61EC
        // Local variables
        enum EventType eventType; // r4
    }

    // References
    // -> float dt;
    // -> static enum Code sfKeyCodeMap[18];
}
// signature: Scaleform::ViewNode::SetMouseState(unsigned int, float, float, int)
// Range: 0x801F6240 -> 0x801F6428
void Scaleform::ViewNode::SetMouseState(class ViewNode * this /* r28 */, unsigned int portNum /* r29 */, int newMouseButtonState /* r30 */) {
    {
        // Range: 0x801F6264 -> 0x801F6348
        // Local variables
        int yPos; // r8
        int xPos; // r0
    }
    {
        // Range: 0x801F6348 -> 0x801F6410
        // Local variables
        int yPos; // r7
        int xPos; // r0
        enum EventType mouseEventType; // r0
    }
}
// Range: 0x801F6460 -> 0x801F64F8
void * Scaleform::SFEventNode::SFEventNode(class SFEventNode * this /* r30 */, unsigned int na /* r31 */) {
}
// Range: 0x801F6500 -> 0x801F6564
void * Scaleform::SFEventNode::~SFEventNode(class SFEventNode * this /* r30 */) {
}
// Range: 0x801F6570 -> 0x801F65B4
void * Scaleform::TextureNode::TextureNode() {
}
// Range: 0x801F65C0 -> 0x801F6630
void * Scaleform::TextureNode::~TextureNode(class TextureNode * this /* r30 */) {
}
