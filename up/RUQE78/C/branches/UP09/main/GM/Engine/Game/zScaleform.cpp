/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zScaleform.cpp
*/
bool firstBoot; // size: 0x1, address: 0x807BBE70
// Range: 0x802B68C0 -> 0x802B69F8
void zScaleform::DoSetup(class zScaleform * this /* r31 */) {
    // Local variables
    class EntityHandleBase * goodie; // r0

    // References
    // -> class MultiplayerStats mpStats;
}
// Range: 0x802B6A00 -> 0x802B6B80
bool zScaleform::Play(class zScaleform * this /* r31 */) {
    // Local variables
    class Viewport * ngViewport; // r4

    // References
    // -> class zViewport viewports[4];
    // -> class Viewport ViewportFullUI;
}
// Range: 0x802B6B80 -> 0x802B6C38
void zScaleform::Stop(class zScaleform * this /* r31 */) {
}
// Range: 0x802B6C40 -> 0x802B6C58
bool zScaleform::IsStopped() {
}
// Range: 0x802B6C60 -> 0x802B71BC
void zScaleform::DoHandleEvent(class zScaleform * this /* r28 */, class xBase * from /* r29 */, unsigned int toEvent /* r30 */, class EventAny * params /* r31 */) {
    // Local variables
    float args[4]; // r1+0x18

    {
        // Range: 0x802B7028 -> 0x802B707C
        // Local variables
        float arg; // r1+0x10
    }
    {
        // Range: 0x802B7080 -> 0x802B70D4
        // Local variables
        float arg; // r1+0xC
    }
    {
        // Range: 0x802B70D8 -> 0x802B712C
        // Local variables
        float arg; // r1+0x8
    }

    // References
    // -> class Module * trcModule;
}
// Range: 0x802B71C0 -> 0x802B71F4
void zScaleform::DoReset(class zScaleform * this /* r31 */) {
}
// Range: 0x802B7200 -> 0x802B7250
void zScaleform::DoInit(class zScaleform * this /* r31 */) {
}
// signature: zScaleform::DoUpdate(float)
// Range: 0x802B7250 -> 0x802B7484
void zScaleform::DoUpdate(class zScaleform * this /* r31 */) {
    {
        // Range: 0x802B7258 -> 0x802B7390
        {
            // Range: 0x802B72DC -> 0x802B7354
            // Local variables
            class EventActionDispatcher_SetGameState params; // r1+0x8
        }
    }

    // References
    // -> class xGameInterface g_gameInterface;
    // -> bool bAllowInput;
    // -> char * SCENE_LAYER_MNUS;
    // -> class Module * trcModule;
    // -> class zGlobals globals;
    // -> bool returningToTitle;
}
// Range: 0x802B74A0 -> 0x802B7F8C
void zScaleform::ReadInput(class zScaleform * this /* r15 */, bool initState /* r1+0x8 */) {
    // Local variables
    int readPads; // r20
    bool pointerIsDisabled; // r19
    int readPointers; // r18
    int buttonInput; // r17

    {
        // Range: 0x802B7500 -> 0x802B75A8
        // Local variables
        int disabledPointers; // r0

        {
            // Range: 0x802B751C -> 0x802B755C
            // Local variables
            int arg; // r1+0x10
        }
        {
            // Range: 0x802B7568 -> 0x802B75A8
            // Local variables
            int arg; // r1+0xC
        }
    }
    {
        // Range: 0x802B75E8 -> 0x802B7F1C
        // Local variables
        int i; // r16

        {
            // Range: 0x802B75E8 -> 0x802B7F1C
            // Local variables
            class Pad * pad; // r0

            {
                // Range: 0x802B75E8 -> 0x802B75FC
                // Local variables
                class PadInput padInput; // r1+0x18

                {
                    // Range: 0x802B75F4 -> 0x802B75FC
                    // Local variables
                    float ypos; // f2
                    float xpos; // f1
                }
            }
            {
                // Range: 0x802B75FC -> 0x802B7F1C
                // Local variables
                float offScreenPos; // f31
            }
        }
    }
}
// Range: 0x802B7F90 -> 0x802B7FC4
void zScaleform::DoExit(class zScaleform * this /* r31 */) {
}
// signature: zScaleform::sendEvent(void *, const char *, const char *)
// Range: 0x802B7FD0 -> 0x802B95F4
void zScaleform::sendEvent(class zScaleform * this /* r26 */, char * eventName /* r21 */, char * params /* r25 */) {
    // Local variables
    char * eventSubType; // r28

    {
        // Range: 0x802B81C4 -> 0x802B8204
        // Local variables
        class EventActionPlayMovie eventParams; // r1+0xD0
    }
    {
        // Range: 0x802B8208 -> 0x802B824C
        // Local variables
        class EventActionPlayMovie eventParams; // r1+0xB8
    }
    {
        // Range: 0x802B8360 -> 0x802B83A8
        // Local variables
        unsigned int idx; // r24
    }
    {
        // Range: 0x802B83AC -> 0x802B83DC
        // Local variables
        unsigned int idx; // r0
    }
    {
        // Range: 0x802B83E0 -> 0x802B8488
        // Local variables
        int readPads; // r27
        bool rumbleEnabled; // r25

        {
            // Range: 0x802B841C -> 0x802B847C
            // Local variables
            int i; // r28
        }
    }
    {
        // Range: 0x802B848C -> 0x802B84C8
        // Local variables
        class EventActionPointerControl eventParams; // r1+0x40
    }
    {
        // Range: 0x802B84CC -> 0x802B8508
        // Local variables
        class EventActionPointerControl eventParams; // r1+0x3C
    }
    {
        // Range: 0x802B850C -> 0x802B8548
        // Local variables
        class EventActionPointerControl eventParams; // r1+0x38
    }
    {
        // Range: 0x802B854C -> 0x802B8588
        // Local variables
        unsigned int idx; // r0
    }
    {
        // Range: 0x802B858C -> 0x802B85CC
        // Local variables
        unsigned int idx; // r0
    }
    {
        // Range: 0x802B863C -> 0x802B8668
        // Local variables
        class EventActionDispatcher_SetGameState params; // r1+0x34
    }
    {
        // Range: 0x802B8680 -> 0x802B86A4
        // Local variables
        class EventActionDispatcher_SetGameState eventParams; // r1+0x30
    }
    {
        // Range: 0x802B8724 -> 0x802B8748
        // Local variables
        class EventActionDispatcher_SetGameState eventParams; // r1+0x2C
    }
    {
        // Range: 0x802B8770 -> 0x802B8894
        // Local variables
        int levelIdx; // r0

        {
            // Range: 0x802B8784 -> 0x802B87A8
            // Local variables
            class EventActionDispatcher_SetGameState eventParams; // r1+0x28
        }
    }
    {
        // Range: 0x802B8898 -> 0x802B8954
        // Local variables
        char * level; // r4
    }
    {
        // Range: 0x802B8984 -> 0x802B89EC
        // Local variables
        int altWeather; // r0
    }
    {
        // Range: 0x802B89F0 -> 0x802B8A34
        // Local variables
        class EventActionOneInt incParam; // r1+0x14
        class xCounter * counter; // r0
    }
    {
        // Range: 0x802B8A38 -> 0x802B8A7C
        // Local variables
        class EventActionOneInt incParam; // r1+0x10
        class xCounter * counter; // r0
    }
    {
        // Range: 0x802B8BC4 -> 0x802B8C08
        // Local variables
        int bwEnabled; // r0
    }
    {
        // Range: 0x802B8C38 -> 0x802B8C90
        // Local variables
        class EventActionOneInt incParam; // r1+0xC
        class xCounter * counter; // r0
    }
    {
        // Range: 0x802B8CAC -> 0x802B8CF4
        // Local variables
        int i; // r25
    }
    {
        // Range: 0x802B8D80 -> 0x802B8DD0
        // Local variables
        int i; // r26
    }
    {
        // Range: 0x802B8E04 -> 0x802B8EC8
        // Local variables
        int refStrIdx; // r28
        char refStr[13]; // r1+0x44

        {
            // Range: 0x802B8E44 -> 0x802B8EB8
            // Local variables
            int i; // r29

            {
                // Range: 0x802B8E44 -> 0x802B8EB8
                // Local variables
                float arg; // r1+0x24
            }
        }
    }
    {
        // Range: 0x802B8EE0 -> 0x802B8EF0
        // Local variables
        int i; // r24
    }
    {
        // Range: 0x802B8F08 -> 0x802B914C
        // Local variables
        int numPlayers; // r27
        bool activePlayers[4]; // r1+0x20
        char * it; // reg65535

        {
            // Range: 0x802B8F1C -> 0x802B8F50
            // Local variables
            int i; // r27
        }
        {
            // Range: 0x802B8F74 -> 0x802B9004
            // Local variables
            int i; // r26

            {
                // Range: 0x802B8F74 -> 0x802B9004
                // Local variables
                class zBiplanePlayer * plyr; // r22

                {
                    // Range: 0x802B8F80 -> 0x802B8F80
                    // Local variables
                    int team; // r0
                    int planeType; // r21
                }
            }
        }
        {
            // Range: 0x802B90E8 -> 0x802B9138
            // Local variables
            int i; // r21
        }
    }
    {
        // Range: 0x802B9308 -> 0x802B9340
        // Local variables
        class EventActionOneInt intParam; // r1+0x8
    }
    {
        // Range: 0x802B93D0 -> 0x802B9450
        // Local variables
        class EventActionOneString stringParam; // r1+0x1C
    }
    {
        // Range: 0x802B9454 -> 0x802B9490
        // Local variables
        class EventActionOneString stringParam; // r1+0x18
    }
    {
        // Range: 0x802B953C -> 0x802B95D4
        // Local variables
        int pad; // r21
        int readPads; // r3
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class MultiplayerStats mpStats;
    // -> class zGameCheats gGameCheats;
    // -> class zCheckpoint * currentActivePtr;
    // -> class LevelType levels[30];
    // -> short maxLevel;
    // -> bool firstBoot;
    // -> char * SCENE_LAYER_MNUS;
    // -> class Module * trcModule;
    // -> bool noPressStart;
    // -> class zGlobals globals;
    // -> class xGameInterface g_gameInterface;
}
// signature: zScaleform::externalInterface(GFxValue *, void *, const char *, const GFxValue *, unsigned int)
// Range: 0x802B9600 -> 0x802BA5FC
void zScaleform::externalInterface(class zScaleform * this /* r27 */, class GFxValue * retVal /* r28 */, char * eventName /* r31 */, class GFxValue * args /* r29 */, unsigned int argCount /* r30 */) {
    // Local variables
    char * eventSubType; // r31

    {
        // Range: 0x802B9778 -> 0x802B97B0
        // Local variables
        char * retStr; // r3
    }
    {
        // Range: 0x802B99B4 -> 0x802B99F0
        // Local variables
        unsigned int curScene; // r3
    }
    {
        // Range: 0x802B9BE0 -> 0x802B9C48
        // Local variables
        float type; // f0
    }
    {
        // Range: 0x802B9C4C -> 0x802B9CB0
        // Local variables
        float tally; // f0
    }
    {
        // Range: 0x802B9CB4 -> 0x802B9D18
        // Local variables
        float total; // f0
    }
    {
        // Range: 0x802B9D1C -> 0x802B9D88
        // Local variables
        float count; // f0
    }
    {
        // Range: 0x802B9E34 -> 0x802B9E6C
        // Local variables
        bool isUnlocked; // r0
    }
    {
        // Range: 0x802B9E70 -> 0x802B9EC0
        // Local variables
        unsigned int tally; // r0
    }
    {
        // Range: 0x802B9EC4 -> 0x802B9F14
        // Local variables
        unsigned int total; // r0
    }
    {
        // Range: 0x802B9F18 -> 0x802B9F60
        // Local variables
        float count; // f0
    }
    {
        // Range: 0x802B9F64 -> 0x802B9FC8
        // Local variables
        char * slotStr; // r1+0x8
        class SaveDataHeader * header; // r0
        int slotNumber; // r0
    }
    {
        // Range: 0x802B9FCC -> 0x802BA028
        // Local variables
        class SaveDataHeader * header; // r0
        int slotNumber; // r0
    }
    {
        // Range: 0x802BA02C -> 0x802BA0C0
        // Local variables
        int sceneIdx; // r0
        class SaveDataHeader * header; // r0
    }
    {
        // Range: 0x802BA0C4 -> 0x802BA164
        // Local variables
        int percent; // r0
        class SaveDataHeader * header; // r0
    }
    {
        // Range: 0x802BA168 -> 0x802BA208
        // Local variables
        class SaveDataHeader * header; // r0
    }
    {
        // Range: 0x802BA20C -> 0x802BA2AC
        // Local variables
        class SaveDataHeader * header; // r0
    }
    {
        // Range: 0x802BA2B0 -> 0x802BA350
        // Local variables
        class SaveDataHeader * header; // r0
    }
    {
        // Range: 0x802BA43C -> 0x802BA464
        // Local variables
        int i; // r28
    }
    {
        // Range: 0x802BA48C -> 0x802BA4C8
        // Local variables
        int i; // r31
    }
    {
        // Range: 0x802BA57C -> 0x802BA5DC
        // Local variables
        int levelIdx; // r0
    }

    // References
    // -> class MultiplayerStats mpStats;
    // -> short maxLevel;
    // -> class Module * trcModule;
    // -> class zPlayerInventory inventory;
    // -> class zGameCheats gGameCheats;
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
    // -> bool firstBoot;
}
// Range: 0x802BA600 -> 0x802BA670
class Rect2D zScaleform::refreshViewport() {
    // References
    // -> class zViewport viewports[4];
    // -> class Viewport ViewportFullUI;
}
// Range: 0x802BA670 -> 0x802BA67C
void zScaleform::stopMovie() {
}
// Range: 0x802BA680 -> 0x802BA68C
void zScaleform::movieStopped() {
}
// Range: 0x802BA690 -> 0x802BA69C
int zScaleform::getDisplayLayer() {
}
// Range: 0x802BA6A0 -> 0x802BA6B0
void zScaleform::SetFirstBoot() {
    // References
    // -> bool firstBoot;
}
// Range: 0x802BA6B0 -> 0x802BA74C
void zScaleform::PauseMoviesForTRC(bool pause /* r28 */) {
    // References
    // -> class zGlobals globals;
}
// Range: 0x802BA750 -> 0x802BA828
class Entity * Sext::zScaleformAsset::Create(class EntityHandleBase * handle /* r29 */, class zScaleformAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__10zScaleform;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: zScaleform_Init(zScaleform *, Sext::zScaleformAsset *)
// Range: 0x802BA830 -> 0x802BA834
void zScaleform_Init() {
}
