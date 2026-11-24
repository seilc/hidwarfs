/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xUpdateCull.cpp
*/
// signature: xUpdateCull_Swap(xUpdateCullMgr *, unsigned int, unsigned int)
// Range: 0x80085B10 -> 0x80085B94
static void xUpdateCull_Swap() {
    // Local variables
    class xUpdateCullEnt * cullA; // r0
    class xUpdateCullEnt * cullB; // r6
    class xUpdateCullEnt * curr; // r9
    void * tmpent; // r5
    class xUpdateCullEnt * tmpmgr; // r5
}
// signature: xUpdateCull_AlwaysTrueCB(void *, void *)
// Range: 0x80085BA0 -> 0x80085BA8
unsigned int xUpdateCull_AlwaysTrueCB() {
}
// signature: xUpdateCull_DistanceSquaredCB(void *, void *)
// Range: 0x80085BB0 -> 0x80085C9C
unsigned int xUpdateCull_DistanceSquaredCB(void * ent /* r30 */) {
    // Local variables
    class FloatAndVoid fandv; // r1+0x8

    {
        // Range: 0x80085C10 -> 0x80085C6C
        // Local variables
        int ii; // r31

        {
            // Range: 0x80085C10 -> 0x80085C6C
            // Local variables
            float dist2; // f0
            class xVec3 * campos; // r0
        }
    }
}
// signature: xUpdateCull_DistanceSquaredNoModelCB(void *, void *)
// Range: 0x80085CA0 -> 0x80085DA8
unsigned int xUpdateCull_DistanceSquaredNoModelCB(void * ent /* r28 */) {
    // Local variables
    class FloatAndVoid fandv; // r1+0x8

    {
        // Range: 0x80085CD8 -> 0x80085D70
        // Local variables
        int i; // r29

        {
            // Range: 0x80085CD8 -> 0x80085D70
            // Local variables
            float dist2; // f1
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80085DB0 -> 0x80086444
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
        // Range: 0x80085DB8 -> 0x80085E34
        // Local variables
        unsigned int idx; // r0
    }
    {
        // Range: 0x80086190 -> 0x800862FC
        {
            // Range: 0x80086190 -> 0x800862EC
            // Local variables
            class xUpdateCullEnt * * prevPtr; // r7
        }
    }

    // References
    // -> static class xMemWatermark memWatermark;
}
// signature: xUpdateCull_Update(xUpdateCullMgr *, unsigned int)
// Range: 0x80086450 -> 0x8008677C
void xUpdateCull_Update(class xUpdateCullMgr * m /* r25 */) {
    // Local variables
    int numiters; // r27
    unsigned int i; // r24

    {
        // Range: 0x8008648C -> 0x80086760
        // Local variables
        unsigned int result; // r0
        class xUpdateCullEnt * cent; // r24

        {
            // Range: 0x8008648C -> 0x8008674C
            // Local variables
            class xUpdateCullGroup * grp; // r26

            {
                // Range: 0x80086688 -> 0x8008672C
                // Local variables
                class xUpdateCullEnt * curr; // r4
            }
        }
    }
}
// signature: xUpdateCull_SetCB(xUpdateCullMgr *, void *, unsigned int (*)(void *, void *), void *)
// Range: 0x80086780 -> 0x800867D4
void xUpdateCull_SetCB() {
    // Local variables
    unsigned int i; // r10
}
// Range: 0x800867E0 -> 0x80086894
void xUpdateCull_Reset(class xUpdateCullMgr * m /* r28 */) {
    // Local variables
    unsigned int i; // r29
}
