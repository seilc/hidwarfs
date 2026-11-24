/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xUpdateCull.cpp
*/
// signature: xUpdateCull_Swap(xUpdateCullMgr *, unsigned int, unsigned int)
// Range: 0x80048540 -> 0x800485C0
static void xUpdateCull_Swap() {
    // Local variables
    class xUpdateCullEnt * cullA; // r0
    class xUpdateCullEnt * cullB; // r6
    class xUpdateCullEnt * curr; // r9
    void * tmpent; // r5
    class xUpdateCullEnt * tmpmgr; // r5
}
// Range: 0x800485C0 -> 0x80048638
static void xUpdateCull_MakeActive(class xUpdateCullMgr * m /* r30 */, class xUpdateCullEnt * cent /* r31 */) {
}
// Range: 0x80048640 -> 0x800486C0
static void xUpdateCull_MakeInactive(class xUpdateCullMgr * m /* r30 */, class xUpdateCullEnt * cent /* r31 */) {
}
// signature: xUpdateCull_AlwaysTrueCB(void *, void *)
// Range: 0x800486C0 -> 0x800486C8
unsigned int xUpdateCull_AlwaysTrueCB() {
}
// signature: xUpdateCull_DistanceSquaredCB(void *, void *)
// Range: 0x800486D0 -> 0x800487BC
unsigned int xUpdateCull_DistanceSquaredCB(void * ent /* r30 */) {
    // Local variables
    class FloatAndVoid fandv; // r1+0x8

    {
        // Range: 0x80048730 -> 0x80048798
        // Local variables
        int ii; // r31

        {
            // Range: 0x80048730 -> 0x80048798
            // Local variables
            float dist2; // f0
            class xVec3 * campos; // r0
        }
    }
}
// Range: 0x800487C0 -> 0x80048C54
class xUpdateCullMgr * xUpdateCull_Init(void * * ent /* r18 */, unsigned int entCount /* r17 */, class xGroup * * group /* r15 */, unsigned int groupCount /* r16 */) {
    // Local variables
    void * * tempEnt; // r23
    unsigned int tempCount; // r22
    unsigned int i; // r25
    unsigned int j; // r26
    unsigned int k; // r6
    unsigned int entsInThisGroup; // r14
    unsigned int entsInGroups; // reg65535
    unsigned int nonEmptyGroups; // r18
    unsigned int x; // r0
    unsigned char * inGroupArray; // r21
    unsigned int mgrCount; // r19
    unsigned int memsize; // r24
    class xUpdateCullMgr * m; // r20
    unsigned int grpIndex; // r19
    unsigned int mgrIndex; // r18
    unsigned int startIndex; // r17

    {
        // Range: 0x800487C8 -> 0x80048844
        // Local variables
        unsigned int idx; // r0
    }
    {
        // Range: 0x8004887C -> 0x800488F0
        // Local variables
        class xBase * base; // r0
    }
    {
        // Range: 0x800489E8 -> 0x80048A04
        // Local variables
        class xBase * base; // r0

        {
            // Range: 0x800489E8 -> 0x80048A04
            // Local variables
            class xUpdateCullEnt * * prevPtr; // r6
        }
    }

    // References
    // -> static class xMemWatermark memWatermark;
}
// signature: xUpdateCull_Update(xUpdateCullMgr *, unsigned int)
// Range: 0x80048C60 -> 0x80048E6C
void xUpdateCull_Update(class xUpdateCullMgr * m /* r28 */) {
    // Local variables
    int numiters; // r30
    unsigned int i; // r25

    {
        // Range: 0x80048C94 -> 0x80048E58
        // Local variables
        unsigned int result; // r0
        class xUpdateCullEnt * cent; // r25

        {
            // Range: 0x80048C94 -> 0x80048E3C
            // Local variables
            class xUpdateCullGroup * grp; // r29

            {
                // Range: 0x80048DC8 -> 0x80048E2C
                // Local variables
                class xUpdateCullEnt * curr; // r5
            }
        }
    }
}
// signature: xUpdateCull_SetCB(xUpdateCullMgr *, void *, unsigned int (*)(void *, void *), void *)
// Range: 0x80048E70 -> 0x80048EC4
void xUpdateCull_SetCB() {
    // Local variables
    unsigned int i; // r10
}
// Range: 0x80048ED0 -> 0x80048F28
void xUpdateCull_Reset(class xUpdateCullMgr * m /* r29 */) {
    // Local variables
    unsigned int i; // r30
}
