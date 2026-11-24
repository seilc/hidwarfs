/*
    Compile unit: C:\RT\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zEnt.cpp
*/
unsigned int model_id; // size: 0x4, address: 0x80704B4C
float xlower; // size: 0x4, address: 0x806D2DA4
float xupper; // size: 0x4, address: 0x806D2DA8
float ylower; // size: 0x4, address: 0x806D2DAC
float yupper; // size: 0x4, address: 0x806D2DB0
unsigned int g_hash_xentanim[5]; // size: 0x14, address: 0x807F8E70
char * g_strz_xentanim[5]; // size: 0x14, address: 0x80704B50
// signature: zEntAnimEffectsCreate(zEnt *, Sext::AnimList *, unsigned long long)
// Range: 0x801F9FA0 -> 0x801FA0FC
void zEntAnimEffectsCreate(class zEnt * ent /* r24 */, class AnimList * animListAsset /* r25 */) {
    // Local variables
    int i; // r27
    int animSoundCount; // r26

    {
        // Range: 0x801F9FBC -> 0x801FA0CC
        // Local variables
        class xAnimState * animStateLoop; // r0
        class xAnimState * animStateOneShot; // r0
    }

    // References
    // -> static char * astnames[80];
}
// signature: zEntAnimEffectsDestroy(zEnt *)
// Range: 0x801FA100 -> 0x801FA158
void zEntAnimEffectsDestroy() {
    // Local variables
    class xAnimState * curr; // r31
}
// Range: 0x801FA160 -> 0x801FA590
void zEntInit(class zEnt * ent /* r28 */, class xEntAsset * asset /* r29 */, unsigned int type /* r27 */) {
    {
        // Range: 0x801FA320 -> 0x801FA494
        // Local variables
        int num_used; // r0

        {
            // Range: 0x801FA38C -> 0x801FA488
            // Local variables
            class xAnimState * astate; // r27
            int idx; // r30

            {
                // Range: 0x801FA42C -> 0x801FA488
                // Local variables
                class xAnimSingle * single; // r27
                class AnimList * animListAsset; // r0
            }
        }
    }

    // References
    // -> static class AnimList * animListAsset[512];
    // -> class zGlobals globals;
    // -> static class xAnimTable * * atbls;
    // -> static int * anused;
    // -> static unsigned long long * aids;
    // -> static int nals;
}
// Range: 0x801FA590 -> 0x801FA67C
void zEntSetup(class zEnt * ent /* r30 */) {
    // References
    // -> unsigned int model_id;
}
// signature: zEntSave(zEnt *, xSerial *)
// Range: 0x801FA680 -> 0x801FA684
void zEntSave() {
}
// signature: zEntLoad(zEnt *, xSerial *)
// Range: 0x801FA690 -> 0x801FA694
void zEntLoad() {
}
// Range: 0x801FA6A0 -> 0x801FA884
void zEntReset(class zEnt * ent /* r30 */) {
    {
        // Range: 0x801FA6C4 -> 0x801FA72C
        // Local variables
        class xAnimState * ast; // r0

        {
            // Range: 0x801FA6FC -> 0x801FA72C
            // Local variables
            class xAnimSingle * single; // r4
        }
    }

    // References
    // -> unsigned int model_id;
}
// signature: zEntUpdate(zEnt *, zScene *, float)
// Range: 0x801FA890 -> 0x801FA894
void zEntUpdate() {
}
// Range: 0x801FA8A0 -> 0x801FA938
void zEntEventAll(class xBase * from /* r26 */, unsigned int fromEvent /* r27 */, unsigned int toEvent /* r28 */, class EventAny * params /* r29 */) {
    // Local variables
    class zScene * s; // r31

    {
        // Range: 0x801FA8C8 -> 0x801FA910
        // Local variables
        unsigned short i; // r30
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x801FA940 -> 0x801FA9E0
void zEntEventAllOfType(class xBase * from /* r25 */, unsigned int fromEvent /* r26 */, unsigned int toEvent /* r27 */, class EventAny * params /* r28 */, unsigned int type /* r29 */) {
    // Local variables
    class zScene * s; // r31

    {
        // Range: 0x801FA978 -> 0x801FA9B8
        // Local variables
        unsigned short i; // r30
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x801FA9E0 -> 0x801FAA8C
void zEntEventAllOfType(unsigned int toEvent /* r28 */, unsigned int type /* r29 */) {
    // References
    // -> class zGlobals globals;
}
// Range: 0x801FAA90 -> 0x801FAAE8
void zEntParseModelInfo(class xEnt * ent /* r29 */, unsigned long long assetID /* r31:r30 */) {
}
// signature: zEntAnimEventCore(xModelInstance *, xAnimTable *, unsigned int, Sext::EventAny *, xEnt *)
// Range: 0x801FAAF0 -> 0x801FB094
void zEntAnimEventCore(class xAnimTable * atbl /* r27 */, class EventAny * genericParams /* r28 */) {
    // Local variables
    class xAnimPlay * play; // r30
    class xAnimSingle * single; // r29

    {
        // Range: 0x801FABD4 -> 0x801FAD64
        // Local variables
        class EventActionAnimPlay * params; // r0

        {
            // Range: 0x801FABD4 -> 0x801FAD64
            // Local variables
            int anum; // r3

            {
                // Range: 0x801FABE8 -> 0x801FAD64
                // Local variables
                class xAnimState * ast; // r27
                char name[12]; // r1+0x2C
            }
        }
    }
    {
        // Range: 0x801FAD68 -> 0x801FAD98
        // Local variables
        class xAnimState * ast; // r0
        char name[12]; // r1+0x20
    }
    {
        // Range: 0x801FADD8 -> 0x801FAF10
        // Local variables
        class EventActionAnimPlayRandom * params; // r0

        {
            // Range: 0x801FADD8 -> 0x801FAF10
            // Local variables
            int anum2; // r3
            int anum1; // r0

            {
                // Range: 0x801FADFC -> 0x801FAF10
                // Local variables
                class xAnimState * ast; // r27
                char name[12]; // r1+0x14
            }
        }
    }
    {
        // Range: 0x801FAF14 -> 0x801FB074
        // Local variables
        class EventActionAnimPlayMaybe * params; // r0

        {
            // Range: 0x801FAF14 -> 0x801FB074
            // Local variables
            float prob; // f31

            {
                // Range: 0x801FAF60 -> 0x801FB074
                // Local variables
                class xAnimState * ast; // r27
                char name[12]; // r1+0x8
            }
        }
    }
}
// signature: zEntAnimEvent(zEnt *, unsigned int, Sext::EventAny *)
// Range: 0x801FB0A0 -> 0x801FB0C8
void zEntAnimEvent() {
}
// Range: 0x801FB0D0 -> 0x801FB4B8
void zEntAnimEvent_AutoAnim(class zEnt * ent /* r25 */, unsigned int animEvent /* r26 */, class EventAny * genericParams /* r27 */) {
    // Local variables
    class xAnimSingle * single; // r29

    {
        // Range: 0x801FB1A4 -> 0x801FB290
        // Local variables
        class xAnimState * ast; // r27
        class xAnimTable * tab; // r3
        int anum; // r28
        class EventActionAnimPlay * params; // r0
    }
    {
        // Range: 0x801FB294 -> 0x801FB324
        // Local variables
        class xAnimState * ast; // r27
        class xAnimTable * tab; // r3
    }
    {
        // Range: 0x801FB364 -> 0x801FB474
        // Local variables
        class xAnimState * ast; // r28
        class xAnimTable * tab; // r6
        int anum; // r27
        int anum2; // r28
        int anum1; // r27
        class EventActionAnimPlayRandom * params; // r0
    }
    {
        // Range: 0x801FB478 -> 0x801FB4A0
        // Local variables
        float prob; // f1
    }

    // References
    // -> unsigned int g_hash_xentanim[5];
}
// signature: zEntGetModelParams(unsigned long long, unsigned short *)
// Range: 0x801FB4C0 -> 0x801FB53C
class xModelAssetParam * zEntGetModelParams(unsigned short * size /* r31 */) {
    // Local variables
    unsigned int bufsize; // r1+0x8
    unsigned int tempsize; // r0
    void * info; // r0

    {
        // Range: 0x801FB4DC -> 0x801FB51C
        // Local variables
        class xModelAssetInfo * minf; // r0
    }
}
// signature: zParamGetNext(xModelAssetParam *, unsigned short *)
// Range: 0x801FB540 -> 0x801FB58C
class xModelAssetParam * zParamGetNext() {
}
// signature: zParamGetString(xModelAssetParam *, unsigned int, const char *, const char *)
// Range: 0x801FB590 -> 0x801FB61C
char * zParamGetString(char * def /* r29 */) {
}
// signature: zParamGetInt(xModelAssetParam *, unsigned int, const char *, int)
// Range: 0x801FB620 -> 0x801FB6F0
int zParamGetInt(int def /* r29 */) {
}
// signature: zParamGetFloat(xModelAssetParam *, unsigned int, const char *, float)
// Range: 0x801FB6F0 -> 0x801FB790
float zParamGetFloat(float def /* f31 */) {
}
