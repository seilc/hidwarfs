/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zEnt.cpp
*/
unsigned int model_id; // size: 0x4, address: 0x807BB910
unsigned int g_hash_xentanim[5]; // size: 0x14, address: 0x8083FDD8
char * g_strz_xentanim[5]; // size: 0x14, address: 0x807BB974
// signature: zEntAnimEffectsCreate(zEnt *, Sext::AnimList *, unsigned long long)
// Range: 0x802A1A50 -> 0x802A1BAC
void zEntAnimEffectsCreate(class zEnt * ent /* r24 */, class AnimList * animListAsset /* r25 */) {
    // Local variables
    int i; // r27
    int animSoundCount; // r26

    {
        // Range: 0x802A1A6C -> 0x802A1B7C
        // Local variables
        class xAnimState * animStateLoop; // r0
        class xAnimState * animStateOneShot; // r0
    }

    // References
    // -> static char * astnames[80];
}
// signature: zEntAnimEffectsDestroy(zEnt *)
// Range: 0x802A1BB0 -> 0x802A1C08
void zEntAnimEffectsDestroy() {
    // Local variables
    class xAnimState * curr; // r31
}
// Range: 0x802A1C10 -> 0x802A1DF4
void zEntInit(class zEnt * ent /* r31 */, class xEntAsset * asset /* r28 */, unsigned int type /* r29 */) {
    {
        // Range: 0x802A1D0C -> 0x802A1DC0
        {
            // Range: 0x802A1D14 -> 0x802A1DB4
            // Local variables
            class xAnimState * astate; // r29

            {
                // Range: 0x802A1D58 -> 0x802A1DB4
                // Local variables
                class xAnimSingle * single; // r29
            }
        }
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x802A1E00 -> 0x802A1E78
void zEntSetup(class zEnt * ent /* r31 */) {
    // References
    // -> unsigned int model_id;
}
// signature: zEntSave(zEnt *, xSerial *)
// Range: 0x802A1E80 -> 0x802A1E84
void zEntSave() {
}
// signature: zEntLoad(zEnt *, xSerial *)
// Range: 0x802A1E90 -> 0x802A1E94
void zEntLoad() {
}
// Range: 0x802A1EA0 -> 0x802A2028
void zEntReset(class zEnt * ent /* r31 */) {
    {
        // Range: 0x802A1EB8 -> 0x802A1F28
        // Local variables
        class xAnimState * ast; // r0

        {
            // Range: 0x802A1EF0 -> 0x802A1F28
            // Local variables
            class xAnimSingle * single; // r6
        }
    }

    // References
    // -> unsigned int model_id;
}
// Range: 0x802A2030 -> 0x802A2258
void zEntDebugReset(class zEnt * ent /* r31 */) {
    // Local variables
    class zAnimList * animList; // r0

    {
        // Range: 0x802A20AC -> 0x802A2144
        // Local variables
        int num_used; // r0

        {
            // Range: 0x802A20B8 -> 0x802A2138
            // Local variables
            class xAnimState * astate; // r29

            {
                // Range: 0x802A20D8 -> 0x802A2138
                // Local variables
                class xAnimSingle * single; // r29
                class AnimList * animListAsset; // r0
            }
        }
    }

    // References
    // -> unsigned int model_id;
}
// Range: 0x802A2260 -> 0x802A231C
void zEntEventAll(class xBase * from /* r24 */, unsigned int fromEvent /* r25 */, unsigned int toEvent /* r26 */, class EventAny * params /* r27 */) {
    // References
    // -> unsigned int g_rttidParentTable[246];
    // -> class zGlobals globals;
}
// signature: zEntEventAllOfType(xBase *, unsigned int, unsigned int, Sext::EventAny *, unsigned int, ForceEvent)
// Range: 0x802A2320 -> 0x802A23A8
void zEntEventAllOfType(class xBase * from /* r25 */, unsigned int fromEvent /* r26 */, unsigned int toEvent /* r27 */, class EventAny * params /* r28 */) {
    // Local variables
    class zScene * s; // r3

    {
        // Range: 0x802A234C -> 0x802A2394
        // Local variables
        class zEntEventAllOfType_CB eventCB; // r1+0x8
    }

    // References
    // -> class zGlobals globals;
}
// signature: zEntEventAllOfType(unsigned int, unsigned int)
// Range: 0x802A23B0 -> 0x802A243C
void zEntEventAllOfType(unsigned int toEvent /* r29 */) {
    // References
    // -> class zGlobals globals;
}
// signature: zEntAnimEventRefModel(World::xOGModel *, unsigned int, Sext::EventAny *)
// Range: 0x802A2440 -> 0x802A24E0
void zEntAnimEventRefModel(class EventAny * genericParams /* r8 */) {
    {
        // Range: 0x802A246C -> 0x802A24B4
        // Local variables
        class xRefModelAnimationData animData; // r1+0x8
        class EventActionAnimRefModelPlay * params; // r0
    }
    {
        // Range: 0x802A24B8 -> 0x802A24D0
        // Local variables
        class EventActionAnimRefModelStop * params; // r0
    }
}
// signature: zEntAnimEventCore(World::xOGModel *, xAnimTable *, unsigned int, Sext::EventAny *, xEnt *)
// Range: 0x802A24E0 -> 0x802A2AEC
void zEntAnimEventCore(class xAnimTable * atbl /* r28 */, class EventAny * genericParams /* r29 */) {
    // Local variables
    class xAnimPlay * play; // r31
    class xAnimSingle * single; // r30

    {
        // Range: 0x802A25BC -> 0x802A276C
        // Local variables
        class EventActionAnimPlay * params; // r0

        {
            // Range: 0x802A25BC -> 0x802A276C
            // Local variables
            int anum; // r3

            {
                // Range: 0x802A25D0 -> 0x802A276C
                // Local variables
                class xAnimState * ast; // r28
                char name[12]; // r1+0x2C
            }
        }
    }
    {
        // Range: 0x802A2770 -> 0x802A27A0
        // Local variables
        class xAnimState * ast; // r0
        char name[12]; // r1+0x20
    }
    {
        // Range: 0x802A27F0 -> 0x802A2944
        // Local variables
        class EventActionAnimPlayRandom * params; // r0

        {
            // Range: 0x802A27F0 -> 0x802A2944
            // Local variables
            int anum2; // r3
            int anum1; // r0

            {
                // Range: 0x802A2814 -> 0x802A2944
                // Local variables
                class xAnimState * ast; // r28
                char name[12]; // r1+0x14
            }
        }
    }
    {
        // Range: 0x802A2948 -> 0x802A2ACC
        // Local variables
        class EventActionAnimPlayMaybe * params; // r0

        {
            // Range: 0x802A2948 -> 0x802A2ACC
            // Local variables
            float prob; // f31

            {
                // Range: 0x802A29A0 -> 0x802A2ACC
                // Local variables
                class xAnimState * ast; // r26
                char name[12]; // r1+0x8
            }
        }
    }
}
// signature: zEntAnimEvent(zEnt *, unsigned int, Sext::EventAny *)
// Range: 0x802A2AF0 -> 0x802A2B18
void zEntAnimEvent() {
}
// Range: 0x802A2B20 -> 0x802A2F58
void zEntAnimEvent_AutoAnim(class zEnt * ent /* r29 */, unsigned int animEvent /* r26 */, class EventAny * genericParams /* r27 */) {
    // Local variables
    class xAnimSingle * single; // r30

    {
        // Range: 0x802A2BEC -> 0x802A2CF0
        // Local variables
        class xAnimState * ast; // r29
        class xAnimTable * tab; // r3
        int anum; // r28
        class EventActionAnimPlay * params; // r0
    }
    {
        // Range: 0x802A2CF4 -> 0x802A2D98
        // Local variables
        class xAnimState * ast; // r28
        class xAnimTable * tab; // r3
    }
    {
        // Range: 0x802A2DE8 -> 0x802A2F10
        // Local variables
        class xAnimState * ast; // r28
        class xAnimTable * tab; // r6
        int anum; // r27
        int anum2; // r27
        int anum1; // r28
        class EventActionAnimPlayRandom * params; // r0
    }
    {
        // Range: 0x802A2F14 -> 0x802A2F40
        // Local variables
        float prob; // f1
    }

    // References
    // -> unsigned int g_hash_xentanim[5];
}
// signature: zEntGetModelParams(unsigned long long, unsigned short *)
// Range: 0x802A2F60 -> 0x802A2FE8
class xModelAssetParam * zEntGetModelParams(unsigned short * size /* r30 */) {
    // Local variables
    unsigned int bufsize; // r5
    unsigned int tempsize; // r0
    class EntityHandleBase * entHandle; // r31
    void * info; // r0

    {
        // Range: 0x802A2F84 -> 0x802A2FC4
        // Local variables
        class xModelAssetInfo * minf; // r0
    }
}
// signature: zParamGetNext(xModelAssetParam *, unsigned short *)
// Range: 0x802A2FF0 -> 0x802A303C
class xModelAssetParam * zParamGetNext() {
}
// signature: zParamGetString(xModelAssetParam *, unsigned int, const char *, const char *)
// Range: 0x802A3040 -> 0x802A30CC
char * zParamGetString(char * def /* r29 */) {
}
// signature: zParamGetInt(xModelAssetParam *, unsigned int, const char *, int)
// Range: 0x802A30D0 -> 0x802A31A0
int zParamGetInt(int def /* r29 */) {
}
// signature: zParamGetFloat(xModelAssetParam *, unsigned int, const char *, float)
// Range: 0x802A31A0 -> 0x802A3240
float zParamGetFloat(float def /* f31 */) {
}
