/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Scaleform\GRendererCommonImpl.cpp
*/
// signature: GTextureImplNode::GTextureImplNode(GRendererNode *)
// Range: 0x801F7CC0 -> 0x801F7D24
void * GTextureImplNode::GTextureImplNode(class GTextureImplNode * this /* r31 */) {
    // References
    // -> struct {} __vt__16GTextureImplNode;
    // -> struct {} __vt__8GTexture;
}
// Range: 0x801F7D90 -> 0x801F7E1C
void * GTextureImplNode::~GTextureImplNode(class GTextureImplNode * this /* r30 */) {
    // References
    // -> struct {} __vt__16GTextureImplNode;
}
// Range: 0x801F7F60 -> 0x801F800C
void GTextureImplNode::AddChangeHandler(class GTextureImplNode * this /* r31 */, class ChangeHandler * phandler /* r1+0x8 */) {
    {
        // Range: 0x801F7F84 -> 0x801F7FE4
        // Local variables
        class ChangeHandler * poldHandler; // r1+0xC
    }

    // References
    // -> class GMemoryHeap * pGlobalHeap;
}
// Range: 0x801F81A0 -> 0x801F8298
void GTextureImplNode::RemoveChangeHandler(class GTextureImplNode * this /* r31 */, class ChangeHandler * phandler /* r27 */) {
    {
        // Range: 0x801F81C4 -> 0x801F826C
        // Local variables
        unsigned int i; // r28

        {
            // Range: 0x801F8228 -> 0x801F826C
            // Local variables
            class ChangeHandler * poldHandler; // r28
        }
    }
}
// Range: 0x801F82A0 -> 0x801F8358
void GTextureImplNode::CallHandlers(class GTextureImplNode * this /* r27 */, enum EventType event /* r28 */) {
    // Local variables
    class GRenderer * prenderer; // r30

    {
        // Range: 0x801F82D8 -> 0x801F831C
        // Local variables
        unsigned int i; // r29
    }
}
// Range: 0x801F8360 -> 0x801F83CC
void * GRendererEventHandlerImpl::~GRendererEventHandlerImpl(class GRendererEventHandlerImpl * this /* r30 */) {
}
// Range: 0x801F84E0 -> 0x801F8598
bool GRendererEventHandlerImpl::AddHandler(class GRendererEventHandlerImpl * this /* r31 */, class EventHandler * phandler /* r1+0x8 */) {
    {
        // Range: 0x801F8504 -> 0x801F8568
        // Local variables
        class EventHandler * poldHandler; // r1+0xC
    }

    // References
    // -> class GMemoryHeap * pGlobalHeap;
}
// Range: 0x801F8690 -> 0x801F8788
void GRendererEventHandlerImpl::RemoveHandler(class GRendererEventHandlerImpl * this /* r31 */, class EventHandler * phandler /* r27 */) {
    {
        // Range: 0x801F86B4 -> 0x801F875C
        // Local variables
        unsigned int i; // r28

        {
            // Range: 0x801F8718 -> 0x801F875C
            // Local variables
            class EventHandler * poldHandler; // r28
        }
    }
}
// Range: 0x801F8790 -> 0x801F8830
void GRendererEventHandlerImpl::CallHandlers(class GRendererEventHandlerImpl * this /* r27 */, class GRenderer * prenderer /* r28 */, enum EventType event /* r29 */) {
    {
        // Range: 0x801F87B8 -> 0x801F87FC
        // Local variables
        unsigned int i; // r30
    }
}
