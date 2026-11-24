/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zEnt.cpp
*/
unsigned int model_id; // size: 0x4, address: 0x806C8590
unsigned int g_hash_xentanim[5]; // size: 0x14, address: 0x8076DF78
char * g_strz_xentanim[5]; // size: 0x14, address: 0x806C8594
// signature: checkpoint_collision_hack(zEnt *)
// Range: 0x80196BD0 -> 0x80196C08
void checkpoint_collision_hack() {
    // References
    // -> unsigned int model_id;
}
// signature: zEntAnimEffectsCreate(zEnt *, Sext::AnimList *, unsigned long long)
// Range: 0x80196820 -> 0x80196998
void zEntAnimEffectsCreate(class zEnt * ent /* r24 */, class AnimList * animListAsset /* r25 */) {
    // Local variables
    char * * animStateNames; // r28
    int i; // r27
    int animSoundCount; // r26

    {
        // Range: 0x8019683C -> 0x80196978
        // Local variables
        class xAnimState * animStateLoop; // r0
        class xAnimState * animStateOneShot; // r0

        {
            // Range: 0x8019683C -> 0x80196978
            {
                // Range: 0x8019683C -> 0x80196960
                // Local variables
                class zSoundAssetMultiple * sasset; // r19
            }
        }
    }

    // References
    // -> static char * astnames[80];
}
// signature: zEntAnimEffectsDestroy(zEnt *)
// Range: 0x801969A0 -> 0x801969F8
void zEntAnimEffectsDestroy() {
    // Local variables
    class xAnimState * curr; // r31
}
// Range: 0x80196A00 -> 0x80196B90
void zEntInit(class zEnt * ent /* r30 */, class xEntAsset * asset /* r27 */, unsigned int type /* r28 */, class xMat4x3 & matrix /* r31 */) {
    // Local variables
    class zAnimList * animList; // r0

    {
        // Range: 0x80196AA8 -> 0x80196B60
        {
            // Range: 0x80196AB4 -> 0x80196B54
            // Local variables
            class xAnimState * astate; // r28

            {
                // Range: 0x80196AF8 -> 0x80196B54
                // Local variables
                class xAnimSingle * single; // r28
            }
        }
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x80196B90 -> 0x80196BC4
void zEntSetup(class zEnt * ent /* r31 */) {
}
// signature: zEntSave(zEnt *, xSerial *)
// Range: 0x80196C10 -> 0x80196C14
void zEntSave() {
}
// signature: zEntLoad(zEnt *, xSerial *)
// Range: 0x80196C20 -> 0x80196C24
void zEntLoad() {
}
// Range: 0x80196C30 -> 0x80196D7C
void zEntReset(class zEnt * ent /* r31 */) {
    {
        // Range: 0x80196C4C -> 0x80196CC0
        // Local variables
        class xAnimState * ast; // r3

        {
            // Range: 0x80196C84 -> 0x80196CC0
            // Local variables
            class xAnimSingle * single; // r30
        }
    }
}
// Range: 0x80196D80 -> 0x80196F38
void zEntDebugReset(class zEnt * ent /* r31 */) {
    // Local variables
    class zAnimList * animList; // r0

    {
        // Range: 0x80196DD4 -> 0x80196E70
        // Local variables
        int num_used; // r0

        {
            // Range: 0x80196DE4 -> 0x80196E64
            // Local variables
            class xAnimState * astate; // r29

            {
                // Range: 0x80196E04 -> 0x80196E64
                // Local variables
                class xAnimSingle * single; // r29
                class AnimList * animListAsset; // r0
            }
        }
    }
}
// Range: 0x80196F40 -> 0x80197000
void zEntEventAll(class xBase * from /* r22 */, unsigned int fromEvent /* r23 */, unsigned int toEvent /* r24 */, class EventAny * params /* r25 */) {
    // Local variables
    class zScene * s; // r26

    // References
    // -> unsigned int g_rttidParentTable[264];
    // -> class zGlobals globals;
}
// signature: zEntEventAllOfType(xBase *, unsigned int, unsigned int, Sext::EventAny *, unsigned int, ForceEvent)
// Range: 0x80197000 -> 0x80197088
void zEntEventAllOfType(class xBase * from /* r25 */, unsigned int fromEvent /* r26 */, unsigned int toEvent /* r27 */, class EventAny * params /* r28 */) {
    // Local variables
    class zScene * s; // r3

    {
        // Range: 0x8019702C -> 0x80197074
        // Local variables
        class zEntEventAllOfType_CB eventCB; // r1+0x8
    }

    // References
    // -> class zGlobals globals;
}
// signature: zEntEventAllOfType(unsigned int, unsigned int)
// Range: 0x80197090 -> 0x801970AC
void zEntEventAllOfType() {
}
// Range: 0x801970B0 -> 0x80197168
void zEntTransitionToState(class xAnimPlay * play /* r29 */, class xAnimState * state /* r30 */, float blendTime /* f31 */) {
    {
        // Range: 0x801970CC -> 0x80197134
        // Local variables
        class xAnimTransition * trans; // r3
    }
}
// signature: zEntAnimEventRefModel(World::xOGModel *, unsigned int, Sext::EventAny *)
// Range: 0x80197170 -> 0x80197210
void zEntAnimEventRefModel(class EventAny * genericParams /* r8 */) {
    {
        // Range: 0x8019719C -> 0x801971E4
        // Local variables
        class xRefModelAnimationData animData; // r1+0x8
        class EventActionAnimRefModelPlay * params; // r0
    }
    {
        // Range: 0x801971E8 -> 0x80197200
        // Local variables
        class EventActionAnimRefModelStop * params; // r0
    }
}
// signature: zEntAnimEventCore(World::xOGModel *, xAnimTable *, unsigned int, Sext::EventAny *, xEnt *)
// Range: 0x80197210 -> 0x8019764C
void zEntAnimEventCore(class xAnimTable * atbl /* r28 */, class EventAny * genericParams /* r29 */) {
    // Local variables
    class xAnimPlay * play; // r31
    class xAnimSingle * single; // r30

    {
        // Range: 0x801972EC -> 0x80197408
        // Local variables
        class EventActionAnimPlay * params; // r0

        {
            // Range: 0x801972EC -> 0x80197408
            // Local variables
            int anum; // r3

            {
                // Range: 0x80197300 -> 0x80197408
                // Local variables
                class xAnimState * ast; // r28
                char name[12]; // r1+0x2C
            }
        }
    }
    {
        // Range: 0x8019740C -> 0x8019743C
        // Local variables
        class xAnimState * ast; // r0
        char name[12]; // r1+0x20
    }
    {
        // Range: 0x8019748C -> 0x80197540
        // Local variables
        class EventActionAnimPlayRandom * params; // r0

        {
            // Range: 0x8019748C -> 0x80197540
            // Local variables
            int anum2; // r3
            int anum1; // r0

            {
                // Range: 0x801974B0 -> 0x80197540
                // Local variables
                class xAnimState * ast; // r4
                char name[12]; // r1+0x14
            }
        }
    }
    {
        // Range: 0x80197544 -> 0x8019762C
        // Local variables
        class EventActionAnimPlayMaybe * params; // r0

        {
            // Range: 0x80197544 -> 0x8019762C
            // Local variables
            float prob; // f31

            {
                // Range: 0x8019759C -> 0x8019762C
                // Local variables
                class xAnimState * ast; // r4
                char name[12]; // r1+0x8
            }
        }
    }
}
// signature: zEntAnimEvent(zEnt *, unsigned int, Sext::EventAny *)
// Range: 0x80197650 -> 0x80197678
void zEntAnimEvent() {
}
// Range: 0x80197680 -> 0x801979D4
void zEntAnimEvent_AutoAnim(class zEnt * ent /* r29 */, unsigned int animEvent /* r26 */, class EventAny * genericParams /* r27 */) {
    // Local variables
    class xAnimSingle * single; // r30

    {
        // Range: 0x8019774C -> 0x80197804
        // Local variables
        class xAnimState * ast; // r4
        class xAnimTable * tab; // r3
        int anum; // r28
        class EventActionAnimPlay * params; // r0
    }
    {
        // Range: 0x80197808 -> 0x80197860
        // Local variables
        class xAnimState * ast; // r4
        class xAnimTable * tab; // r3
    }
    {
        // Range: 0x801978B0 -> 0x8019798C
        // Local variables
        class xAnimState * ast; // r4
        class xAnimTable * tab; // r6
        int anum; // r27
        int anum2; // r27
        int anum1; // r28
        class EventActionAnimPlayRandom * params; // r0
    }
    {
        // Range: 0x80197990 -> 0x801979BC
        // Local variables
        float prob; // f1
    }

    // References
    // -> unsigned int g_hash_xentanim[5];
}
// signature: zEntGetModelParams(unsigned long long, unsigned short *)
// Range: 0x801979E0 -> 0x80197A60
class xModelAssetParam * zEntGetModelParams(unsigned short * size /* r30 */) {
    // Local variables
    unsigned int bufsize; // r5
    unsigned int tempsize; // r0
    class EntityHandleBase * entHandle; // r31
    void * info; // r0

    {
        // Range: 0x80197A00 -> 0x80197A40
        // Local variables
        class xModelAssetInfo * minf; // r0
    }
}
// signature: zParamGetNext(xModelAssetParam *, unsigned short *)
// Range: 0x80197A60 -> 0x80197AAC
class xModelAssetParam * zParamGetNext() {
}
// signature: zParamGetString(xModelAssetParam *, unsigned int, const char *, const char *)
// Range: 0x80197AB0 -> 0x80197AB4
char * zParamGetString() {
}
// signature: zParamGetString(xModelAssetParam *, unsigned int, char *, char *)
// Range: 0x80197AC0 -> 0x80197B3C
char * zParamGetString(class xModelAssetParam * param /* r29 */, unsigned int size /* r30 */, char * def /* r31 */) {
    // Local variables
    unsigned int testhash; // r0
}
// signature: zParamGetInt(xModelAssetParam *, unsigned int, const char *, int)
// Range: 0x80197B40 -> 0x80197B44
int zParamGetInt() {
}
// signature: zParamGetInt(xModelAssetParam *, unsigned int, char *, int)
// Range: 0x80197B50 -> 0x80197BC0
int zParamGetInt(int def /* r30 */) {
    // Local variables
    char * str; // r31
}
// signature: zParamGetFloat(xModelAssetParam *, unsigned int, const char *, float)
// Range: 0x80197BC0 -> 0x80197C04
float zParamGetFloat(float def /* f31 */) {
}
