/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xEvent.cpp
*/
unsigned long long gThisPlayer; // size: 0x8, address: 0x807200B8
unsigned long long gThisCameraTarget; // size: 0x8, address: 0x807200C0
unsigned char s_byteMaskTable[2]; // size: 0x2, address: 0x8067F2B0
unsigned int s_wordMaskTable[16]; // size: 0x40, address: 0x8067F2B8
// signature: zEntEvent(unsigned long long, unsigned int, Sext::EventAny *)
// Range: 0x8002F250 -> 0x8002F2A4
void zEntEvent(unsigned int toEvent /* r30 */, class EventAny * params /* r31 */) {
    // Local variables
    class xBase * sendTo; // r3
}
// signature: LinkParametersMatch(unsigned int, Sext::EventAny *, const Sext::LinkAssetBaseNew *)
// Range: 0x8002F2B0 -> 0x8002F3AC
bool LinkParametersMatch() {
    // Local variables
    unsigned int mask; // r7

    {
        // Range: 0x8002F2C4 -> 0x8002F364
        // Local variables
        void * dataB; // reg65535
        void * dataA; // r4

        {
            // Range: 0x8002F2D0 -> 0x8002F320
            // Local variables
            unsigned char * b; // reg65535
            unsigned char * a; // r4
        }
        {
            // Range: 0x8002F320 -> 0x8002F364
            // Local variables
            unsigned int * b; // r8
            unsigned int * a; // r4
        }
    }
    {
        // Range: 0x8002F364 -> 0x8002F3A4
        // Local variables
        class ReachedHitpoint * actionParamsLink; // r3
        class ReachedHitpoint * actionParams; // r0
    }

    // References
    // -> unsigned int s_wordMaskTable[16];
    // -> unsigned char s_byteMaskTable[2];
}
// signature: zEntEvent(xBase *, unsigned int, xBase *, unsigned int, Sext::EventAny *, ForceEvent)
// Range: 0x8002F3B0 -> 0x8002F768
void zEntEvent(class xBase * from /* r23 */, class xBase * to /* r24 */, unsigned int toEvent /* r25 */, class EventAny * params /* r26 */) {
    // Local variables
    class TemplateEntity * parent; // r28

    {
        // Range: 0x8002F4B8 -> 0x8002F580
        // Local variables
        unsigned int i; // r29

        {
            // Range: 0x8002F4B8 -> 0x8002F580
            {
                // Range: 0x8002F4D8 -> 0x8002F580
                // Local variables
                class xBase * sendTo; // r5
            }
        }
    }
    {
        // Range: 0x8002F584 -> 0x8002F730
        // Local variables
        unsigned int i; // r27

        {
            // Range: 0x8002F584 -> 0x8002F730
            {
                // Range: 0x8002F584 -> 0x8002F730
                // Local variables
                class xBase * sendTo; // r5
            }
        }
    }
}
// signature: zEntEventInternal(xBase *, unsigned int, xBase *, unsigned int, Sext::EventAny *, ForceEvent)
// Range: 0x8002F770 -> 0x8002F7BC
void zEntEventInternal() {
}
// signature: zEntEventInternal(xBase *, unsigned int, Sext::EventAny *, ForceEvent)
// Range: 0x8002F7C0 -> 0x8002F7DC
void zEntEventInternal() {
}
