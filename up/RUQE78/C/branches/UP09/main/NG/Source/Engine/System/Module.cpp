/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\System\Module.cpp
*/
static class PoolArray modules; // size: 0xC, address: 0x8084E118
static class EventBinding eventBindings[60]; // size: 0x780, address: 0x8084E128
class ModuleRegistrator * head; // size: 0x4, address: 0x8084E8A8
int size; // size: 0x4, address: 0x8084E8AC
bool commit; // size: 0x1, address: 0x8084E8B0
static class Matrix33 Mat3; // size: 0x30, address: 0x8084E8B8
// Range: 0x8034ED64 -> 0x8034F4A4
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
        // Range: 0x8034ED78 -> 0x8034EDA8
        // Local variables
        int eventStage; // r17
    }
    {
        // Range: 0x8034EDF4 -> 0x8034EE7C
        // Local variables
        int i; // r19

        {
            // Range: 0x8034EDF4 -> 0x8034EE7C
            // Local variables
            int relationSize; // r1+0x18
        }
    }
    {
        // Range: 0x8034EEE0 -> 0x8034F2B0
        // Local variables
        int eventStage; // r20

        {
            // Range: 0x8034EEE0 -> 0x8034F2B0
            // Local variables
            int modCount; // r18
            int bufferHead; // r19
            int stageIndex; // r18
            int eventIndex; // r17

            {
                // Range: 0x8034EEE8 -> 0x8034EEEC
                // Local variables
                int i; // r19
            }
            {
                // Range: 0x8034EEEC -> 0x8034EEEC
                // Local variables
                int endi; // r0
                int i; // r19

                {
                    // Range: 0x8034EEEC -> 0x8034EEEC
                    // Local variables
                    class RelativePriority * endRel; // r17
                    class RelativePriority * rel; // r18
                    class Module * mod; // r0
                    int relSize; // r1+0x14

                    {
                        // Range: 0x8034EEEC -> 0x8034EEEC
                        // Local variables
                        class ModuleRelationNode * relNode; // r0
                        int Bi; // r1+0xC
                        int Ai; // r1+0x10
                        class ModuleReference * foundit; // r0
                    }
                }
            }
            {
                // Range: 0x8034EEEC -> 0x8034EEEC
                // Local variables
                int endi; // r0
                int i; // r22

                {
                    // Range: 0x8034EEEC -> 0x8034EEEC
                    // Local variables
                    class ModuleRelationNode * n; // r28
                    int bufferTail; // r26
                }
            }
            {
                // Range: 0x8034EEEC -> 0x8034EEEC
                // Local variables
                int i; // r19
            }
        }
    }
    {
        // Range: 0x8034F2C0 -> 0x8034F2EC
        // Local variables
        int end; // r0
        int i; // r16

        {
            // Range: 0x8034F2C0 -> 0x8034F2EC
            // Local variables
            class Module * module; // r3

            {
                // Range: 0x8034F2D4 -> 0x8034F2D4
                // Local variables
                int eventStage; // r0
            }
        }
    }
    {
        // Range: 0x8034F3EC -> 0x8034F434
        // Local variables
        int eventStage; // r20

        {
            // Range: 0x8034F3EC -> 0x8034F434
            {
                // Range: 0x8034F3F8 -> 0x8034F40C
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
// Range: 0x80351398 -> 0x803513F0
void * System::Module::Module(class Module * this /* r31 */) {
    // References
    // -> struct {} __vt__Q26System6Module;
}
// signature: System::ModuleRegistrator::ModuleRegistrator(System::Module *, const char *)
// Range: 0x803513F0 -> 0x8035141C
void * System::ModuleRegistrator::ModuleRegistrator() {
    // References
    // -> int size;
    // -> class ModuleRegistrator * head;
}
// Range: 0x8035141C -> 0x80351DE8
void System::ModuleManager::Create() {
    // References
    // -> class ModuleRegistrator * head;
    // -> static class PoolArray modules;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> bool commit;
    // -> int size;
}
// Range: 0x80351DE8 -> 0x80352CC4
void System::ModuleManager::Destroy() {
    {
        // Range: 0x8035230C -> 0x80352CA0
        // Local variables
        int i; // r31
    }

    // References
    // -> static class EventBinding eventBindings[60];
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class PoolArray modules;
}
// Range: 0x80352CC4 -> 0x80352DB0
void System::ModuleManager::Startup() {
    // Local variables
    class Vector4 vec_a; // r1+0x8
    float a; // f0
    float b; // f0
    float c; // f0

    {
        // Range: 0x80352D34 -> 0x80352D88
        // Local variables
        int stage; // r28

        {
            // Range: 0x80352D34 -> 0x80352D88
            // Local variables
            class Module * * end; // r0
            class Module * * it; // r27
            int index; // r0
        }
    }

    // References
    // -> static class EventBinding eventBindings[60];
}
// Range: 0x80352DB0 -> 0x80352E54
void System::ModuleManager::Shutdown() {
    {
        // Range: 0x80352DD0 -> 0x80352E28
        // Local variables
        int stage; // r29

        {
            // Range: 0x80352DD0 -> 0x80352E28
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
// Range: 0x80352E54 -> 0x80352F44
void System::ModuleManager::DispatchEvent(void (Module::* & func)(void * this, void * this, int) /* r31 */) {
    // Local variables
    int eventOffset; // r25

    {
        // Range: 0x80352E64 -> 0x80352F24
        // Local variables
        int stage; // r24

        {
            // Range: 0x80352E64 -> 0x80352F24
            // Local variables
            class EventBinding & eventBinding; // r23

            {
                // Range: 0x80352E7C -> 0x80352EF0
                // Local variables
                int end; // r21
                int i; // r22

                {
                    // Range: 0x80352E7C -> 0x80352EF0
                    // Local variables
                    class Module * module; // r3
                }
            }
        }
    }

    // References
    // -> static class EventBinding eventBindings[60];
}
// Range: 0x80352F44 -> 0x80352F88
void System::ModuleManager::RenderStartup() {
}
// Range: 0x80352F88 -> 0x80352FCC
void System::ModuleManager::RenderShutdown() {
}
// Range: 0x80352FCC -> 0x80353010
void System::ModuleManager::RenderFrameBegin() {
}
// Range: 0x80353010 -> 0x80353054
void System::ModuleManager::RenderFrameEnd() {
}
// Range: 0x80353054 -> 0x80353098
void System::ModuleManager::SwapUpdate() {
}
// Range: 0x80353098 -> 0x803530DC
void System::ModuleManager::SwapRender() {
}
