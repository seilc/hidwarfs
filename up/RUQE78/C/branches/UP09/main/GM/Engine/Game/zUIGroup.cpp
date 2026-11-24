/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zUIGroup.cpp
*/
class xBase * (* lookupFunction)(unsigned long long uid); // size: 0x4, address: 0x8082C180
void (* eventFunction)(class xBase * from, class xBase * to, unsigned int toEvent, class EventAny * params); // size: 0x4, address: 0x8082C184
// Range: 0x8026CBB0 -> 0x8026CC78
class Entity * Sext::UI_Group::Create(class EntityHandleBase * handle /* r29 */, class UI_Group * asset /* r30 */) {
    // References
    // -> struct {} __vt__8zUIGroup;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x8026CC80 -> 0x8026CD3C
void zUIGroupInit(class zUIGroup * group /* r30 */, class UI_Group * asset /* r31 */) {
    // Local variables
    int count; // r0
}
// Range: 0x8026CD40 -> 0x8026CDD0
void zUIGroupSetup(class zUIGroup * group /* r26 */) {
    // Local variables
    int count; // r29
    class xBase * (* lookup)(unsigned long long uid); // r28

    {
        // Range: 0x8026CD70 -> 0x8026CD80
        // Local variables
        int i; // r27
    }

    // References
    // -> class xBase * (* lookupFunction)(unsigned long long uid);
}
// signature: zUIGroupUpdate(xBase *, xScene *, float)
// Range: 0x8026CDD0 -> 0x8026CE60
void zUIGroupUpdate(class xBase * base /* r31 */) {
    // Local variables
    class zUIGroup * group; // r0

    {
        // Range: 0x8026CE00 -> 0x8026CE4C
        // Local variables
        void (* handleEvent)(class xBase * from, class xBase * to, unsigned int toEvent, class EventAny * params); // r12
    }

    // References
    // -> void (* eventFunction)(class xBase * from, class xBase * to, unsigned int toEvent, class EventAny * params);
}
// Range: 0x8026CE60 -> 0x8026D6A4
void zUIGroupEventCB(class xBase * from /* r25 */, class xBase * to /* r26 */, unsigned int toEvent /* r27 */, class EventAny * genericParams /* r28 */) {
    // Local variables
    class zUIGroup * toGroup; // reg65535
    class EventActionLegacy newParams; // r1+0x8
    class xBase * (* lookup)(unsigned long long uid); // r31
    void (* handleEvent)(class xBase * from, class xBase * to, unsigned int toEvent, class EventAny * params); // r30
    bool forwardEvent; // r29
    int transition; // r4
    class zScript * script; // r0

    {
        // Range: 0x8026CF1C -> 0x8026D040
        // Local variables
        class xBase * toParamWidgetPtr; // r5
        class EventActionLegacy * params; // r0
    }
    {
        // Range: 0x8026D044 -> 0x8026D17C
        // Local variables
        class EventActionLegacy * params; // r0
    }
    {
        // Range: 0x8026D2F4 -> 0x8026D424
        // Local variables
        class EventActionLegacy * params; // r0
    }
    {
        // Range: 0x8026D520 -> 0x8026D604
        // Local variables
        class EventActionLegacy * params; // r0
    }
    {
        // Range: 0x8026D604 -> 0x8026D68C
        // Local variables
        int count; // r29

        {
            // Range: 0x8026D650 -> 0x8026D65C
            // Local variables
            int i; // r31
        }
    }

    // References
    // -> void (* eventFunction)(class xBase * from, class xBase * to, unsigned int toEvent, class EventAny * params);
    // -> class xBase * (* lookupFunction)(unsigned long long uid);
}
