/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\System\Module.cpp
*/
static class PoolArray modules; // size: 0xC, address: 0x80806D28
static class EventBinding eventBindings[60]; // size: 0x780, address: 0x80806D38
class ModuleRegistrator * head; // size: 0x4, address: 0x808074B8
int size; // size: 0x4, address: 0x808074BC
bool commit; // size: 0x1, address: 0x808074C0
static class Matrix33 Mat3; // size: 0x30, address: 0x808074C8
// Range: 0x802AF928 -> 0x802B0068
static void @unnamed@WAD02_cpp@::PartitionModules() {
    // Local variables
    int modsize; // r21
    class StackPoolArray modrefs; // r1+0x4C
    int maxRelations; // r18
    class StackPoolArray relationLists; // r1+0x40
    class StackPoolAllocator relationAlloc; // r1+0x58
    class StackPoolArray indexBuffer; // r1+0x34
    class StackPoolArray indexLists; // r1+0x28
    class StackPoolArray indexResults; // r1+0x1C

    {
        // Range: 0x802AF93C -> 0x802AF96C
        // Local variables
        int eventStage; // r17
    }
    {
        // Range: 0x802AF9B8 -> 0x802AFA40
        // Local variables
        int i; // r19

        {
            // Range: 0x802AF9B8 -> 0x802AFA40
            // Local variables
            int relationSize; // r1+0x18
        }
    }
    {
        // Range: 0x802AFAA4 -> 0x802AFE74
        // Local variables
        int eventStage; // r20

        {
            // Range: 0x802AFAA4 -> 0x802AFE74
            // Local variables
            int modCount; // r18
            int bufferHead; // r19
            int stageIndex; // r18
            int eventIndex; // r17

            {
                // Range: 0x802AFAAC -> 0x802AFAB0
                // Local variables
                int i; // r19
            }
            {
                // Range: 0x802AFAB0 -> 0x802AFAB0
                // Local variables
                int endi; // r0
                int i; // r19

                {
                    // Range: 0x802AFAB0 -> 0x802AFAB0
                    // Local variables
                    class RelativePriority * endRel; // r17
                    class RelativePriority * rel; // r18
                    class Module * mod; // r0
                    int relSize; // r1+0x14

                    {
                        // Range: 0x802AFAB0 -> 0x802AFAB0
                        // Local variables
                        class ModuleRelationNode * relNode; // r0
                        int Bi; // r1+0xC
                        int Ai; // r1+0x10
                        class ModuleReference * foundit; // r0
                    }
                }
            }
            {
                // Range: 0x802AFAB0 -> 0x802AFAB0
                // Local variables
                int endi; // r0
                int i; // r22

                {
                    // Range: 0x802AFAB0 -> 0x802AFAB0
                    // Local variables
                    class ModuleRelationNode * n; // r28
                    int bufferTail; // r26
                }
            }
            {
                // Range: 0x802AFAB0 -> 0x802AFAB0
                // Local variables
                int i; // r19
            }
        }
    }
    {
        // Range: 0x802AFE84 -> 0x802AFEB0
        // Local variables
        int end; // r0
        int i; // r16

        {
            // Range: 0x802AFE84 -> 0x802AFEB0
            // Local variables
            class Module * module; // r3

            {
                // Range: 0x802AFE98 -> 0x802AFE98
                // Local variables
                int eventStage; // r0
            }
        }
    }
    {
        // Range: 0x802AFFB0 -> 0x802AFFF8
        // Local variables
        int eventStage; // r20

        {
            // Range: 0x802AFFB0 -> 0x802AFFF8
            {
                // Range: 0x802AFFBC -> 0x802AFFD0
                // Local variables
                int end; // r0
                int i; // r21
            }
        }
    }

    // References
    // -> static class PoolArray modules;
    // -> static class EventBinding eventBindings[60];
}
// Range: 0x802B128C -> 0x802B12E4
void * System::Module::Module(class Module * this /* r31 */) {
    // References
    // -> struct {} __vt__Q26System6Module;
}
// signature: System::ModuleRegistrator::ModuleRegistrator(System::Module *, const char *)
// Range: 0x802B12E4 -> 0x802B1310
void * System::ModuleRegistrator::ModuleRegistrator() {
    // References
    // -> int size;
    // -> class ModuleRegistrator * head;
}
// Range: 0x802B1310 -> 0x802B1D44
void System::ModuleManager::Destroy() {
    {
        // Range: 0x802B1690 -> 0x802B1D20
        // Local variables
        int i; // r24
    }

    // References
    // -> static class EventBinding eventBindings[60];
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class PoolArray modules;
}
// Range: 0x802B1D44 -> 0x802B1E2C
void System::ModuleManager::Startup() {
    // Local variables
    class Vector4 vec_a; // r1+0x8
    float a; // f0
    float b; // f0
    float c; // f0

    {
        // Range: 0x802B1DB0 -> 0x802B1E04
        // Local variables
        int stage; // r28

        {
            // Range: 0x802B1DB0 -> 0x802B1E04
            // Local variables
            class Module * * end; // r0
            class Module * * it; // r27
            int index; // r0
        }
    }

    // References
    // -> static class EventBinding eventBindings[60];
}
// Range: 0x802B1E2C -> 0x802B1ED0
void System::ModuleManager::Shutdown() {
    {
        // Range: 0x802B1E4C -> 0x802B1EA4
        // Local variables
        int stage; // r29

        {
            // Range: 0x802B1E4C -> 0x802B1EA4
            // Local variables
            class Module * * end; // r0
            class Module * * it; // r28
            int index; // r0
        }
    }

    // References
    // -> static class EventBinding eventBindings[60];
}
// signature: System::ModuleManager::DispatchEvent(System::Module::EventType, void (System::Module::*)(int)const )
// Range: 0x802B1ED0 -> 0x802B1FC0
void System::ModuleManager::DispatchEvent(void (Module::* * func)(void * this, void * this, int) /* r31 */) {
    // Local variables
    int eventOffset; // r25

    {
        // Range: 0x802B1EE0 -> 0x802B1FA0
        // Local variables
        int stage; // r24

        {
            // Range: 0x802B1EE0 -> 0x802B1FA0
            // Local variables
            class EventBinding * eventBinding; // r23

            {
                // Range: 0x802B1EF8 -> 0x802B1F6C
                // Local variables
                int end; // r21
                int i; // r22

                {
                    // Range: 0x802B1EF8 -> 0x802B1F6C
                    // Local variables
                    class Module * module; // r3
                }
            }
        }
    }

    // References
    // -> static class EventBinding eventBindings[60];
}
// Range: 0x802B1FC0 -> 0x802B2004
void System::ModuleManager::RenderStartup() {
}
// Range: 0x802B2004 -> 0x802B2048
void System::ModuleManager::RenderShutdown() {
}
// Range: 0x802B2048 -> 0x802B208C
void System::ModuleManager::RenderFrameBegin() {
}
// Range: 0x802B208C -> 0x802B20D0
void System::ModuleManager::RenderFrameEnd() {
}
// Range: 0x802B20D0 -> 0x802B2114
void System::ModuleManager::SwapUpdate() {
}
// Range: 0x802B2114 -> 0x802B2158
void System::ModuleManager::SwapRender() {
}
