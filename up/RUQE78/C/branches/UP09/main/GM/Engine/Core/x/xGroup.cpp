/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xGroup.cpp
*/
// Range: 0x80060AE0 -> 0x80060DC4
class Entity * Sext::xGroupAsset::Create(class EntityHandleBase * handle /* r29 */, class xGroupAsset * asset /* r28 */) {
    // References
    // -> static class xMemWatermark memWatermark;
    // -> struct {} __vt__6xGroup;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x80060DD0 -> 0x80060ED0
void xGroupSetup(class xGroup * g /* r27 */) {
    {
        // Range: 0x80060DE4 -> 0x80060EBC
        // Local variables
        unsigned int count; // r29

        {
            // Range: 0x80060E14 -> 0x80060EA4
            // Local variables
            unsigned int i; // r28
        }
    }
}
// signature: xGroupSave(xGroup *, xSerial *)
// Range: 0x80060ED0 -> 0x80060F34
void xGroupSave() {
}
// signature: xGroupLoad(xGroup *, xSerial *)
// Range: 0x80060F40 -> 0x80060FC0
void xGroupLoad(class xGroup * ent /* r31 */) {
}
// signature: xGroupEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80060FC0 -> 0x80061504
void xGroupEventCB(unsigned int toEvent /* r28 */, class EventAny * params /* r31 */) {
    // Local variables
    class xGroup * g; // r29
    int rand; // r30

    {
        // Range: 0x800613F4 -> 0x80061490
        // Local variables
        void (* entVisEventHandler)(class xEnt *); // r26

        {
            // Range: 0x80061408 -> 0x8006147C
            // Local variables
            int i; // r25

            {
                // Range: 0x80061414 -> 0x8006147C
                // Local variables
                class xBase * b; // r3
            }
        }
    }
    {
        // Range: 0x80061494 -> 0x800614DC
        // Local variables
        int i; // r25

        {
            // Range: 0x800614A0 -> 0x800614DC
            // Local variables
            class xBase * b; // r5
        }
    }

    // References
    // -> static unsigned int * next;
    // -> static unsigned int state[624];
    // -> static int left;
    // -> static class xMemWatermark memWatermark;
}
// signature: xGroupGetCount(xGroup *)
// Range: 0x80061510 -> 0x8006152C
unsigned int xGroupGetCount() {
}
// Range: 0x80061530 -> 0x80061590
class xBase * xGroupGetItemPtr(class xGroup * g /* r30 */, unsigned int index /* r31 */) {
}
