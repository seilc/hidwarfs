/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xGroup.cpp
*/
// Range: 0x80032D00 -> 0x80032D7C
class Entity * Sext::xGroupAsset::Create(class EntityHandleBase * handle /* r29 */, class xGroupAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__6xGroup;
}
// Range: 0x80032D80 -> 0x80032E2C
void xGroup::Init(class xGroup * this /* r29 */, class xGroupAsset * asset /* r30 */) {
    // Local variables
    int size; // r30

    // References
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x80032E30 -> 0x80032F70
void xGroup::Setup(class xGroup * this /* r27 */) {
    {
        // Range: 0x80032E44 -> 0x80032F5C
        // Local variables
        int size; // r0
        unsigned long long * uidArray; // r29
        unsigned int count; // r30

        {
            // Range: 0x80032E84 -> 0x80032F50
            // Local variables
            unsigned int idx; // r28

            {
                // Range: 0x80032E84 -> 0x80032F50
                // Local variables
                unsigned long long itemID; // r26:r25
            }
        }
    }
}
// Range: 0x80032F70 -> 0x80032FF4
void xGroup::AddItem(class xGroup * this /* r29 */, class xBase * item /* r30 */) {
    {
        // Range: 0x80032FA0 -> 0x80032FC8
        // Local variables
        int i; // r0
    }
}
// signature: xGroup::RemoveItem(xBase *)
// Range: 0x80033000 -> 0x80033050
void xGroup::RemoveItem() {
    {
        // Range: 0x80033000 -> 0x8003304C
        // Local variables
        int i; // r8
    }
}
// signature: xGroupSave(xGroup *, xSerial *)
// Range: 0x80033050 -> 0x80033054
void xGroupSave() {
}
// signature: xGroupLoad(xGroup *, xSerial *)
// Range: 0x80033060 -> 0x80033098
void xGroupLoad(class xGroup * ent /* r31 */) {
}
// signature: xGroupReset(xGroup *)
// Range: 0x800330A0 -> 0x800330B4
void xGroupReset() {
}
// Range: 0x800330C0 -> 0x8003313C
void xGroupDebugReset(class xGroup * ent /* r31 */) {
    // Local variables
    unsigned int count; // r0
}
// signature: xGroup::EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80033140 -> 0x800333D0
void xGroup::EventCB(unsigned int toEvent /* r28 */, class EventAny * params /* r29 */) {
    // Local variables
    class xGroup * g; // r31
    int rand; // r30

    {
        // Range: 0x8003322C -> 0x80033248
        // Local variables
        class xBase * base; // r0
    }
    {
        // Range: 0x80033254 -> 0x80033270
        // Local variables
        class xBase * base; // r0
    }
    {
        // Range: 0x800332C0 -> 0x8003335C
        // Local variables
        void (* entVisEventHandler)(class xEnt *); // r26

        {
            // Range: 0x800332D4 -> 0x8003335C
            // Local variables
            int i; // r25

            {
                // Range: 0x800332E0 -> 0x8003335C
                // Local variables
                class xBase * b; // r3
            }
        }
    }
    {
        // Range: 0x80033360 -> 0x800333BC
        // Local variables
        int i; // r25

        {
            // Range: 0x8003336C -> 0x800333BC
            // Local variables
            class xBase * b; // r5
        }
    }
}
// Range: 0x800333D0 -> 0x800333E8
bool xGroup::IsDynamic() {
}
// Range: 0x800333F0 -> 0x8003340C
int xGroup::GetMaxCapacity() {
}
// Range: 0x80033410 -> 0x80033418
unsigned int xGroup::GetNumItems() {
}
// Range: 0x80033420 -> 0x80033464
void xGroup::ClearList(class xGroup * this /* r31 */) {
    // Local variables
    int size; // r0
}
// signature: xGroup::ContainsBase_Recursive(xBase *)
// Range: 0x80033470 -> 0x800334C0
bool xGroup::ContainsBase_Recursive() {
    {
        // Range: 0x80033474 -> 0x800334B8
        // Local variables
        int j; // r0
    }
}
// Range: 0x800334C0 -> 0x80033518
class xBase * xGroup::GetItem(class xGroup * this /* r30 */, unsigned int index /* r31 */) {
}
// Range: 0x80033520 -> 0x80033580
void xGroup::AddPlayers(class xGroup * this /* r28 */) {
    {
        // Range: 0x80033534 -> 0x8003356C
        // Local variables
        int i; // r29
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80033580 -> 0x800335B8
void xGroup::AddAllPlayers() {
    // Local variables
    class xGroup * allPlayersGroup; // r0
}
// Range: 0x800335C0 -> 0x800335F0
void xGroup::SceneExit() {
    // References
    // -> class zGlobals globals;
}
