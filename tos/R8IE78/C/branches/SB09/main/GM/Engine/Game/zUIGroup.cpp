/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zUIGroup.cpp
*/
class xBase * (* lookupFunction)(unsigned long long uid); // size: 0x4, address: 0x8075A72C
void (* eventFunction)(class xBase * from, class xBase * to, unsigned int toEvent, class EventAny * params); // size: 0x4, address: 0x8075A730
// signature: ChooseTransition(int, int &)
// Range: 0x80182030 -> 0x80182054
void ChooseTransition() {
}
// Range: 0x801816B0 -> 0x80181724
class Entity * Sext::UI_Group::Create(class EntityHandleBase * handle /* r29 */, class UI_Group * asset /* r30 */) {
}
// Range: 0x80181770 -> 0x8018182C
void zUIGroupInit(class zUIGroup * group /* r30 */, class UI_Group * asset /* r31 */) {
    // Local variables
    int count; // r0
}
// Range: 0x80181830 -> 0x801818C0
void zUIGroupSetup(class zUIGroup * group /* r26 */) {
    // Local variables
    int count; // r29
    class xBase * (* lookup)(unsigned long long uid); // r28

    {
        // Range: 0x80181860 -> 0x801818AC
        // Local variables
        int i; // r27
    }

    // References
    // -> class xBase * (* lookupFunction)(unsigned long long uid);
}
// signature: zUIGroupUpdate(xBase *, xScene *, float)
// Range: 0x801818C0 -> 0x80181950
void zUIGroupUpdate(class xBase * base /* r31 */) {
    // Local variables
    class zUIGroup * group; // r0

    {
        // Range: 0x801818F0 -> 0x8018193C
        // Local variables
        void (* handleEvent)(class xBase * from, class xBase * to, unsigned int toEvent, class EventAny * params); // r12
    }

    // References
    // -> void (* eventFunction)(class xBase * from, class xBase * to, unsigned int toEvent, class EventAny * params);
}
// Range: 0x80181950 -> 0x80182028
void zUIGroupEventCB(class xBase * from /* r24 */, class xBase * to /* r25 */, unsigned int toEvent /* r26 */, class EventAny * genericParams /* r27 */) {
    // Local variables
    class zUIGroup * toGroup; // reg65535
    class EventActionLegacy newParams; // r1+0x10
    class xBase * (* lookup)(unsigned long long uid); // r30
    void (* handleEvent)(class xBase * from, class xBase * to, unsigned int toEvent, class EventAny * params); // r29
    bool forwardEvent; // r28
    int transition; // r1+0x8
    class zScript * script; // r0

    {
        // Range: 0x80181A14 -> 0x80181B0C
        // Local variables
        class xBase * toParamWidgetPtr; // r31
        class EventActionLegacy * params; // r0
    }
    {
        // Range: 0x80181B10 -> 0x80181C0C
        // Local variables
        class EventActionLegacy * params; // r0
    }
    {
        // Range: 0x80181D48 -> 0x80181E04
        // Local variables
        class EventActionLegacy * params; // r0
    }
    {
        // Range: 0x80181F00 -> 0x80181F88
        // Local variables
        class EventActionLegacy * params; // r0
    }
    {
        // Range: 0x80181F88 -> 0x80182010
        // Local variables
        int count; // r30

        {
            // Range: 0x80181FD4 -> 0x80182010
            // Local variables
            int i; // r31
        }
    }

    // References
    // -> void (* eventFunction)(class xBase * from, class xBase * to, unsigned int toEvent, class EventAny * params);
    // -> class xBase * (* lookupFunction)(unsigned long long uid);
}
