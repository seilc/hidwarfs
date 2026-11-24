/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xUpdateCull.cpp
*/
// signature: xUpdateCull_Swap(xUpdateCullMgr *, unsigned int, unsigned int)
// Range: 0x80069740 -> 0x800697C4
static void xUpdateCull_Swap() {
    // Local variables
    class xUpdateCullEnt * cullA; // r0
    class xUpdateCullEnt * cullB; // r6
    class xUpdateCullEnt * curr; // r9
    void * tmpent; // r5
    class xUpdateCullEnt * tmpmgr; // r5
}
// signature: xUpdateCull_AlwaysTrueCB(void *, void *)
// Range: 0x800697D0 -> 0x800697D8
unsigned int xUpdateCull_AlwaysTrueCB() {
}
// signature: xUpdateCull_DistanceSquaredCB(void *, void *)
// Range: 0x800697E0 -> 0x800698CC
unsigned int xUpdateCull_DistanceSquaredCB(void * ent /* r30 */) {
    // Local variables
    class FloatAndVoid fandv; // r1+0x8

    {
        // Range: 0x80069840 -> 0x8006989C
        // Local variables
        int ii; // r31

        {
            // Range: 0x80069840 -> 0x8006989C
            // Local variables
            float dist2; // f0
            class xVec3 * campos; // r0
        }
    }
}
// Range: 0x800698D0 -> 0x80069F64
class xUpdateCullMgr * xUpdateCull_Init(void * * ent /* r18 */, unsigned int entCount /* r17 */, class xGroup * * group /* r15 */, unsigned int groupCount /* r14 */) {
    // Local variables
    void * * tempEnt; // r21
    unsigned int tempCount; // r20
    unsigned int i; // r24
    unsigned int j; // r25
    unsigned int k; // r6
    unsigned int entsInThisGroup; // r26
    unsigned int entsInGroups; // r0
    unsigned int nonEmptyGroups; // r16
    unsigned int x; // r0
    unsigned char * inGroupArray; // r19
    unsigned int mgrCount; // r17
    unsigned int memsize; // r25
    class xUpdateCullMgr * m; // r18
    unsigned int grpIndex; // r17
    unsigned int mgrIndex; // r16
    unsigned int startIndex; // r1+0x8

    {
        // Range: 0x800698D8 -> 0x80069954
        // Local variables
        unsigned int idx; // r0
    }
    {
        // Range: 0x80069CB0 -> 0x80069E1C
        {
            // Range: 0x80069CB0 -> 0x80069E0C
            // Local variables
            class xUpdateCullEnt * * prevPtr; // r7
        }
    }

    // References
    // -> static class xMemWatermark memWatermark;
}
// signature: xUpdateCull_Update(xUpdateCullMgr *, unsigned int)
// Range: 0x80069F70 -> 0x8006A29C
void xUpdateCull_Update(class xUpdateCullMgr * m /* r25 */) {
    // Local variables
    int numiters; // r27
    unsigned int i; // r24

    {
        // Range: 0x80069FAC -> 0x8006A280
        // Local variables
        unsigned int result; // r0
        class xUpdateCullEnt * cent; // r24

        {
            // Range: 0x80069FAC -> 0x8006A26C
            // Local variables
            class xUpdateCullGroup * grp; // r26

            {
                // Range: 0x8006A1A8 -> 0x8006A24C
                // Local variables
                class xUpdateCullEnt * curr; // r4
            }
        }
    }
}
// signature: xUpdateCull_SetCB(xUpdateCullMgr *, void *, unsigned int (*)(void *, void *), void *)
// Range: 0x8006A2A0 -> 0x8006A2F4
void xUpdateCull_SetCB() {
    // Local variables
    unsigned int i; // r10
}
// Range: 0x8006A300 -> 0x8006A3B4
void xUpdateCull_Reset(class xUpdateCullMgr * m /* r28 */) {
    // Local variables
    unsigned int i; // r29
}
