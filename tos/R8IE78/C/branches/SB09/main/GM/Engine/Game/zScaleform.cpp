/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zScaleform.cpp
*/
bool SB09Hack_disableMotionPlus; // size: 0x1, address: 0x80773D41
// Range: 0x801A2880 -> 0x801A299C
void zScaleform::DoSetup(class zScaleform * this /* r31 */) {
    // Local variables
    class EntityHandleBase * goodie; // r0
}
// Range: 0x801A29A0 -> 0x801A2B34
bool zScaleform::Play(class zScaleform * this /* r31 */) {
    // Local variables
    class Viewport * ngViewport; // r4

    // References
    // -> class zGlobals globals;
    // -> class Module * trcModule;
    // -> class zViewport viewports[4];
    // -> class Viewport ViewportFullUI;
}
// Range: 0x801A2B40 -> 0x801A2C20
void zScaleform::Stop(class zScaleform * this /* r31 */) {
    // References
    // -> class zGlobals globals;
    // -> class Module * trcModule;
}
// Range: 0x801A2C20 -> 0x801A2C40
void zScaleform::Clear() {
}
// Range: 0x801A2C40 -> 0x801A2C60
void zScaleform::Unclear() {
}
// Range: 0x801A2C60 -> 0x801A2C78
bool zScaleform::IsStopped() {
}
// Range: 0x801A2C80 -> 0x801A319C
void zScaleform::DoHandleEvent(class zScaleform * this /* r28 */, class xBase * from /* r29 */, unsigned int toEvent /* r30 */, class EventAny * params /* r31 */) {
    // Local variables
    float args[4]; // r1+0x18

    {
        // Range: 0x801A3010 -> 0x801A3064
        // Local variables
        float arg; // r1+0x10
    }
    {
        // Range: 0x801A3068 -> 0x801A30BC
        // Local variables
        float arg; // r1+0xC
    }
    {
        // Range: 0x801A30C0 -> 0x801A3114
        // Local variables
        float arg; // r1+0x8
    }

    // References
    // -> class Module * trcModule;
}
// Range: 0x801A31A0 -> 0x801A31D4
void zScaleform::DoReset(class zScaleform * this /* r31 */) {
}
// Range: 0x801A31E0 -> 0x801A3230
void zScaleform::DoInit(class zScaleform * this /* r31 */) {
}
// signature: zScaleform::DoUpdate(float)
// Range: 0x801A3230 -> 0x801A3448
void zScaleform::DoUpdate(class zScaleform * this /* r31 */) {
    {
        // Range: 0x801A3264 -> 0x801A3350
        // Local variables
        bool inTrcPauseMode; // r4
        bool alreadyExiting; // r28
    }

    // References
    // -> class xGameInterface g_gameInterface;
    // -> bool bAllowInput;
    // -> char * SCENE_LAYER_MNUS;
    // -> class Module * trcModule;
    // -> class zGlobals globals;
    // -> bool returningToTitle;
    // -> bool SB09Hack_disableMotionPlus;
}
// Range: 0x801A3460 -> 0x801A38C0
void zScaleform::ReadInput(class zScaleform * this /* r20 */, bool initState /* r21 */) {
    // Local variables
    int readPads; // r26
    bool pointerIsDisabled; // r25
    int readPointers; // r24
    int buttonInput; // r23

    {
        // Range: 0x801A34C0 -> 0x801A3568
        // Local variables
        int disabledPointers; // r0

        {
            // Range: 0x801A34DC -> 0x801A351C
            // Local variables
            int arg; // r1+0xC
        }
        {
            // Range: 0x801A3528 -> 0x801A3568
            // Local variables
            int arg; // r1+0x8
        }
    }
    {
        // Range: 0x801A3584 -> 0x801A3844
        // Local variables
        int i; // r22

        {
            // Range: 0x801A3584 -> 0x801A3844
            // Local variables
            class Pad * pad; // r0

            {
                // Range: 0x801A3584 -> 0x801A3810
                // Local variables
                class PadInput padInput; // r1+0x10

                {
                    // Range: 0x801A3584 -> 0x801A3590
                    // Local variables
                    int buttons; // r5
                    float ypos; // f2
                    float xpos; // f1
                }
                {
                    // Range: 0x801A3590 -> 0x801A3810
                    // Local variables
                    float ypos; // f2
                    float xpos; // r31
                }
            }
            {
                // Range: 0x801A3810 -> 0x801A3844
                // Local variables
                float offScreenPos; // f29
            }
        }
    }

    // References
    // -> class Module * trcModule;
}
// Range: 0x801A3AF0 -> 0x801A3B24
void zScaleform::DoExit(class zScaleform * this /* r31 */) {
}
// signature: zScaleform::sendEvent(void *, const char *, const char *)
// Range: 0x801A3B30 -> 0x801A5428
void zScaleform::sendEvent(class zScaleform * this /* r29 */, char * eventName /* r26 */, char * params /* r30 */) {
    // Local variables
    char * eventSubType; // r31

    {
        // Range: 0x801A3DC8 -> 0x801A3E08
        // Local variables
        class EventActionPlayMovie eventParams; // r1+0x60
    }
    {
        // Range: 0x801A3E50 -> 0x801A3EF8
        // Local variables
        char subtitle[29]; // r1+0x28
        class EventActionPlayMovie eventParams; // r1+0x48
    }
    {
        // Range: 0x801A3F10 -> 0x801A3F30
        // Local variables
        class zScaleform * sellScreen; // r0
    }
    {
        // Range: 0x801A3F58 -> 0x801A3F84
        // Local variables
        int cheatIndex; // r0
    }
    {
        // Range: 0x801A3F88 -> 0x801A3FAC
        // Local variables
        int cheatIndex; // r0
    }
    {
        // Range: 0x801A3FB0 -> 0x801A3FD0
        // Local variables
        int cheatIndex; // r0
    }
    {
        // Range: 0x801A41F0 -> 0x801A4250
        // Local variables
        unsigned int idx; // r29
    }
    {
        // Range: 0x801A4254 -> 0x801A4284
        // Local variables
        unsigned int idx; // r0
    }
    {
        // Range: 0x801A4288 -> 0x801A43F4
        // Local variables
        bool needReassign; // r0
        unsigned int idx; // r31
    }
    {
        // Range: 0x801A43F8 -> 0x801A442C
        // Local variables
        unsigned int idx; // r0
    }
    {
        // Range: 0x801A4430 -> 0x801A4464
        // Local variables
        unsigned int idx; // r0
    }
    {
        // Range: 0x801A4504 -> 0x801A45AC
        // Local variables
        int readPads; // r27
        bool rumbleEnabled; // r31

        {
            // Range: 0x801A4540 -> 0x801A45AC
            // Local variables
            int i; // r26
        }
    }
    {
        // Range: 0x801A45B0 -> 0x801A45EC
        // Local variables
        class EventActionPointerControl eventParams; // r1+0x24
    }
    {
        // Range: 0x801A45F0 -> 0x801A462C
        // Local variables
        class EventActionPointerControl eventParams; // r1+0x20
    }
    {
        // Range: 0x801A4630 -> 0x801A466C
        // Local variables
        class EventActionPointerControl eventParams; // r1+0x1C
    }
    {
        // Range: 0x801A4670 -> 0x801A46AC
        // Local variables
        unsigned int idx; // r0
    }
    {
        // Range: 0x801A46B0 -> 0x801A46F0
        // Local variables
        unsigned int idx; // r0
    }
    {
        // Range: 0x801A4744 -> 0x801A4798
        // Local variables
        int gamePort; // r0
    }
    {
        // Range: 0x801A479C -> 0x801A4804
        // Local variables
        bool usesExtension; // r26
        int gamePort; // r3
    }
    {
        // Range: 0x801A4808 -> 0x801A485C
        // Local variables
        int gamePort; // r0
    }
    {
        // Range: 0x801A4860 -> 0x801A4920
        // Local variables
        int gamePort; // r26
    }
    {
        // Range: 0x801A4924 -> 0x801A49E4
        // Local variables
        int gamePort; // r26
    }
    {
        // Range: 0x801A49E8 -> 0x801A4AA8
        // Local variables
        int gamePort; // r26
    }
    {
        // Range: 0x801A4BE8 -> 0x801A4C38
        // Local variables
        class zPortal * ctr; // r5

        {
            // Range: 0x801A4C04 -> 0x801A4C38
            // Local variables
            class EventActionTeleportPlayer p; // r1+0xC
        }
    }
    {
        // Range: 0x801A4C80 -> 0x801A4D28
        // Local variables
        char * level; // r0
        int levelIdx; // r26
    }
    {
        // Range: 0x801A4D2C -> 0x801A4D84
        // Local variables
        char * level; // r3
    }
    {
        // Range: 0x801A4ECC -> 0x801A4F18
        // Local variables
        class EventActionHealth eventParams; // r1+0x18
    }
    {
        // Range: 0x801A5070 -> 0x801A50A8
        // Local variables
        class EventActionOneInt intParam; // r1+0x8
    }
    {
        // Range: 0x801A5168 -> 0x801A51AC
        // Local variables
        class EventActionOneString stringParam; // r1+0x14
    }
    {
        // Range: 0x801A51B0 -> 0x801A51EC
        // Local variables
        class EventActionOneString stringParam; // r1+0x10
    }
    {
        // Range: 0x801A53B0 -> 0x801A5408
        // Local variables
        class xCounter * ctr; // r0
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class zNGLoadingScreen gNGLoadingScreen;
    // -> class zCheckpoint * currentActivePtr;
    // -> char * SCENE_LAYER_MNUS;
    // -> class Module * trcModule;
    // -> bool noPressStart;
    // -> bool gSysForceExit;
    // -> class zGlobals globals;
    // -> class xGameInterface g_gameInterface;
}
// signature: zScaleform::externalInterface(GFxValue *, void *, const char *, const GFxValue *, unsigned int)
// Range: 0x801A5430 -> 0x801A64F8
void zScaleform::externalInterface(class GFxValue * retVal /* r28 */, char * eventName /* r31 */, class GFxValue * args /* r29 */, unsigned int argCount /* r30 */) {
    // Local variables
    char * eventSubType; // r31

    {
        // Range: 0x801A55AC -> 0x801A55E4
        // Local variables
        char * retStr; // r3
    }
    {
        // Range: 0x801A5654 -> 0x801A569C
        // Local variables
        bool isCheatSet; // r0
        unsigned int bitToCheck; // r27
    }
    {
        // Range: 0x801A5760 -> 0x801A57C8
        // Local variables
        int gamePort; // r3
    }
    {
        // Range: 0x801A57F8 -> 0x801A5860
        // Local variables
        int gamePort; // r3
    }
    {
        // Range: 0x801A5864 -> 0x801A58CC
        // Local variables
        int gamePort; // r3
    }
    {
        // Range: 0x801A58D0 -> 0x801A5938
        // Local variables
        int gamePort; // r3
    }
    {
        // Range: 0x801A59AC -> 0x801A5A14
        // Local variables
        int gamePort; // r3
    }
    {
        // Range: 0x801A5A18 -> 0x801A5A80
        // Local variables
        int gamePort; // r3
    }
    {
        // Range: 0x801A5A84 -> 0x801A5B28
        // Local variables
        int gamePort; // r29
    }
    {
        // Range: 0x801A5B2C -> 0x801A5B94
        // Local variables
        int gamePort; // r3
    }
    {
        // Range: 0x801A5B98 -> 0x801A5C50
        // Local variables
        int gamePort; // r29
    }
    {
        // Range: 0x801A5ED8 -> 0x801A5F24
        // Local variables
        class xCounter * ctr; // r0
    }
    {
        // Range: 0x801A5F28 -> 0x801A5F74
        // Local variables
        class xCounter * counter; // r0
    }
    {
        // Range: 0x801A5F78 -> 0x801A5F9C
        // Local variables
        class xCounter * counter; // r0
    }
    {
        // Range: 0x801A6150 -> 0x801A61B4
        // Local variables
        char * slotStr; // r1+0x8
        class SaveDataHeader * header; // r0
        int slotNumber; // r0
    }
    {
        // Range: 0x801A61B8 -> 0x801A6210
        // Local variables
        class SaveDataHeader * header; // r0
        int slotNumber; // r0
    }
    {
        // Range: 0x801A6214 -> 0x801A62A8
        // Local variables
        int sceneIdx; // r0
        class SaveDataHeader * header; // r0
    }
    {
        // Range: 0x801A62AC -> 0x801A6328
        // Local variables
        class SaveDataHeader * header; // r0
    }
    {
        // Range: 0x801A632C -> 0x801A63A8
        // Local variables
        class SaveDataHeader * header; // r0
    }
    {
        // Range: 0x801A63AC -> 0x801A6428
        // Local variables
        class SaveDataHeader * header; // r0
    }

    // References
    // -> short maxLevel;
    // -> class zPlayerInventory inventory;
    // -> class xGlobals * xglobals;
    // -> class Module * trcModule;
    // -> class zGlobals globals;
}
// Range: 0x801A6500 -> 0x801A6570
class Rect2D zScaleform::refreshViewport() {
    // References
    // -> class zViewport viewports[4];
    // -> class Viewport ViewportFullUI;
}
// Range: 0x801A6570 -> 0x801A657C
void zScaleform::stopMovie() {
}
// Range: 0x801A6580 -> 0x801A658C
void zScaleform::movieStopped() {
}
// Range: 0x801A6590 -> 0x801A659C
int zScaleform::getDisplayLayer() {
}
// Range: 0x801A65A0 -> 0x801A65E8
bool zScaleform::IsPauseMoviePlaying() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x801A65F0 -> 0x801A6674
void zScaleform::PauseMoviesForTRC(bool pause /* r28 */) {
    // References
    // -> class zGlobals globals;
}
// Range: 0x801A6680 -> 0x801A66F4
class Entity * Sext::zScaleformAsset::Create(class EntityHandleBase * handle /* r29 */, class zScaleformAsset * asset /* r30 */) {
}
