/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\System\Module.cpp
*/
static class PoolArray modules; // size: 0xC, address: 0x8077D230
static class EventBinding eventBindings[60]; // size: 0x780, address: 0x8077D240
class ModuleRegistrator * head; // size: 0x4, address: 0x8077D9C0
int size; // size: 0x4, address: 0x8077D9C4
bool commit; // size: 0x1, address: 0x8077D9C8
static class Matrix33 Mat3; // size: 0x30, address: 0x8077D9D0
// Range: 0x801FBC10 -> 0x801FBC68
void * System::Module::Module(class Module * this /* r31 */) {
    // References
    // -> struct {} __vt__Q26System6Module;
}
// signature: System::ModuleRegistrator::ModuleRegistrator(System::Module *, const char *)
// Range: 0x801FBC70 -> 0x801FBC9C
void * System::ModuleRegistrator::ModuleRegistrator() {
    // References
    // -> int size;
    // -> class ModuleRegistrator * head;
}
// Range: 0x801FBCA0 -> 0x801FC328
void System::ModuleManager::Create() {
    // References
    // -> static class EventBinding eventBindings[60];
    // -> class ModuleRegistrator * head;
    // -> static class PoolArray modules;
    // -> int size;
    // -> bool commit;
}
// Range: 0x801FC330 -> 0x801FC3BC
void System::ModuleManager::Destroy() {
    {
        // Range: 0x801FC364 -> 0x801FC3A8
        // Local variables
        int i; // r27
    }

    // References
    // -> static class EventBinding eventBindings[60];
    // -> static class PoolArray modules;
}
// Range: 0x801FC3C0 -> 0x801FC488
void System::ModuleManager::Startup() {
    // Local variables
    class Vector4 vec_a; // r1+0x8
    float a; // f0
    float b; // f0
    float c; // f0

    {
        // Range: 0x801FC410 -> 0x801FC470
        // Local variables
        int stage; // r28

        {
            // Range: 0x801FC410 -> 0x801FC470
            // Local variables
            class Module * * end; // r0
            class Module * * it; // r27
        }
    }

    // References
    // -> static class EventBinding eventBindings[60];
}
// Range: 0x801FC4B0 -> 0x801FC538
void System::ModuleManager::Shutdown() {
    {
        // Range: 0x801FC4C4 -> 0x801FC524
        // Local variables
        int stage; // r29

        {
            // Range: 0x801FC4C4 -> 0x801FC524
            // Local variables
            class Module * * end; // r0
            class Module * * it; // r28
        }
    }

    // References
    // -> static class EventBinding eventBindings[60];
}
// Range: 0x801FC540 -> 0x801FC58C
void System::ModuleManager::DispatchHooks(class NodeList & hooks /* r30 */) {
}
// signature: System::ModuleManager::DispatchEvent(System::Module::EventType, void (System::Module::*)(int)const )
// Range: 0x801FC590 -> 0x801FC640
void System::ModuleManager::DispatchEvent(void (Module::* & func)(void * this, void * this, int) /* r23 */) {
    // Local variables
    int eventOffset; // r28

    {
        // Range: 0x801FC5A0 -> 0x801FC62C
        // Local variables
        int stage; // r27

        {
            // Range: 0x801FC5A0 -> 0x801FC62C
            // Local variables
            class EventBinding & eventBinding; // r26

            {
                // Range: 0x801FC5B8 -> 0x801FC618
                // Local variables
                int end; // r24
                int i; // r25

                {
                    // Range: 0x801FC5B8 -> 0x801FC618
                    // Local variables
                    class Module * module; // r3
                }
            }
        }
    }

    // References
    // -> static class EventBinding eventBindings[60];
}
// Range: 0x801FC640 -> 0x801FC684
void System::ModuleManager::RenderStartup() {
}
// Range: 0x801FC690 -> 0x801FC6D4
void System::ModuleManager::RenderShutdown() {
}
// Range: 0x801FC6E0 -> 0x801FC724
void System::ModuleManager::RenderFrameBegin() {
}
// Range: 0x801FC730 -> 0x801FC774
void System::ModuleManager::RenderFrameEnd() {
}
// Range: 0x801FC780 -> 0x801FC7C4
void System::ModuleManager::SwapUpdate() {
}
// Range: 0x801FC7D0 -> 0x801FC814
void System::ModuleManager::SwapRender() {
}
