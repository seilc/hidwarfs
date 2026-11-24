/*
    Compile unit: C:\RT\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zScaleform.cpp
*/
class _OGScaleformPlayerSchema _OGScaleformPlayerschema; // size: 0x18, address: 0x807FDB18
class SchemaRegistrator _OGScaleformPlayerschemaReg; // size: 0x8, address: 0x807FDB30
bool isMultiplayer; // size: 0x1, address: 0x807FDB38
bool activePlayers[4]; // size: 0x4, address: 0x80704E04
bool splitHorizontal; // size: 0x1, address: 0x80704E08
bool portalling; // size: 0x1, address: 0x807FDB39
float playerInControl; // size: 0x4, address: 0x807FDB3C
float lastLoadStatus; // size: 0x4, address: 0x807FDB40
unsigned int killCount; // size: 0x4, address: 0x80704E0C
unsigned int holdTimer; // size: 0x4, address: 0x80704E10
unsigned int timeLimit; // size: 0x4, address: 0x80704E14
class xTimer * timers[4]; // size: 0x10, address: 0x807FDB48
unsigned int costumes[4]; // size: 0x10, address: 0x80704E18
unsigned int pauseState; // size: 0x4, address: 0x807FDB58
unsigned int modalPopupType; // size: 0x4, address: 0x807FDB5C
class xCounter * objectivesCounter; // size: 0x4, address: 0x807FDB60
bool isFromMultiplayer; // size: 0x1, address: 0x807FDB64
enum stickPressDir spDir[4]; // size: 0x10, address: 0x80704E28
float irMouseX; // size: 0x4, address: 0x807FDB68
float irMouseY; // size: 0x4, address: 0x807FDB6C
// Range: 0x80221330 -> 0x80221340
void World::_OGScaleformPlayerEntity::Deactivate() {
}
// Range: 0x80221340 -> 0x80221390
void World::_OGScaleformPlayerEntity::Destroy(class _OGScaleformPlayerEntity * this /* r31 */) {
}
// signature: World::_OGScaleformPlayerSchema::Fix(World::Asset *, long, int)
// Range: 0x802213F0 -> 0x802213F8
void World::_OGScaleformPlayerSchema::Fix() {
}
// signature: World::_OGScaleformPlayerSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80221400 -> 0x8022144C
class EntityStub * World::_OGScaleformPlayerSchema::CreateStub(class _OGScaleformPlayerSchema * this /* r31 */) {
}
// signature: World::_OGScaleformPlayerSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x80221450 -> 0x80221468
void World::_OGScaleformPlayerSchema::DestroyStub() {
}
// signature: World::_OGScaleformPlayerSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80221470 -> 0x802214D4
class Entity * World::_OGScaleformPlayerSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World24_OGScaleformPlayerEntity;
}
// signature: @unnamed@WAD04_cpp@::ScaleformEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80221520 -> 0x8022153C
static void @unnamed@WAD04_cpp@::ScaleformEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x80221540 -> 0x80221698
void zScaleform::DoSetup(class zScaleform * this /* r31 */) {
    // Local variables
    class Goodie * goodie; // r0
}
// Range: 0x802216A0 -> 0x802217C8
void zScaleform::Play(class zScaleform * this /* r28 */) {
    // Local variables
    class Viewport * ngViewport; // r5

    // References
    // -> class Viewport ViewportFullUI;
    // -> class zViewport viewports[4];
    // -> bool portalling;
}
// Range: 0x802217D0 -> 0x80221830
void zScaleform::Stop(class zScaleform * this /* r31 */) {
}
// Range: 0x80221830 -> 0x80221A3C
void zScaleform::SetCheatValues() {
    // Local variables
    float values[15]; // r1+0x8

    {
        // Range: 0x80221838 -> 0x80221838
        // Local variables
        int j; // r0
    }

    // References
    // -> class zWalleCheats gWalleCheats;
}
// Range: 0x80221A40 -> 0x80221CB0
void zScaleform::SetInitialValues(class zScaleform * this /* r29 */) {
    // Local variables
    float values[16]; // r1+0x8
    class zSoundModule * globalSoundModule; // r0

    {
        // Range: 0x80221A94 -> 0x80221AB4
        // Local variables
        int i; // r0
    }

    // References
    // -> class zViewport viewports[4];
    // -> bool splitHorizontal;
    // -> float playerInControl;
    // -> bool activePlayers[4];
    // -> class zGlobals globals;
}
// Range: 0x80221CB0 -> 0x80221CD0
void zScaleform::ResetActivePlayers() {
    // References
    // -> bool activePlayers[4];
}
// Range: 0x80221CD0 -> 0x80221CF0
void zScaleform::StaticReset() {
    // References
    // -> class xTimer * timers[4];
}
// Range: 0x80221CF0 -> 0x80221D3C
unsigned int zScaleform::CountActivePlayers() {
    // Local variables
    unsigned int count; // r3

    {
        // Range: 0x80221CF4 -> 0x80221CF4
        // Local variables
        int i; // r0
    }

    // References
    // -> bool activePlayers[4];
}
// Range: 0x80221D40 -> 0x80224380
void zScaleform::DoHandleEvent(class zScaleform * this /* r26 */, class xBase * from /* r27 */, unsigned int toEvent /* r28 */, class EventAny * params /* r29 */) {
    // Local variables
    float args[4]; // r1+0x58
    unsigned int numParams; // r6

    {
        // Range: 0x8022242C -> 0x8022260C
        // Local variables
        float arg; // r1+0x54
    }
    {
        // Range: 0x80222614 -> 0x802227F4
        // Local variables
        float arg; // r1+0x50
    }
    {
        // Range: 0x802227FC -> 0x802229DC
        // Local variables
        float arg; // r1+0x4C
    }
    {
        // Range: 0x802229E4 -> 0x80222BC4
        // Local variables
        float arg; // r1+0x48
    }
    {
        // Range: 0x80222BC8 -> 0x80222BFC
        // Local variables
        float arg; // r1+0x44
    }
    {
        // Range: 0x80222C00 -> 0x80222C34
        // Local variables
        float arg; // r1+0x40
    }
    {
        // Range: 0x80222C38 -> 0x80222C6C
        // Local variables
        float arg; // r1+0x3C
    }
    {
        // Range: 0x80222C70 -> 0x80222CA4
        // Local variables
        float arg; // r1+0x38
    }
    {
        // Range: 0x80223900 -> 0x80223918
        // Local variables
        int i; // r25
    }
    {
        // Range: 0x80223C20 -> 0x80223C38
        // Local variables
        int i; // r25
    }
    {
        // Range: 0x802240A0 -> 0x80224124
        // Local variables
        class xCounter * counter; // r0
        class EventActionInvokeMultiplayerASFunc * myParams; // r0
    }
    {
        // Range: 0x80224128 -> 0x80224184
        // Local variables
        class xCounter * counter; // r0
        class EventActionInvokeASFunc * myParams; // r0
    }
    {
        // Range: 0x80224188 -> 0x802241F0
        // Local variables
        class xCounter * counter; // r0
        class EventActionInvokeASFunc * myParams; // r0
    }
    {
        // Range: 0x802241F4 -> 0x80224214
        // Local variables
        class EventActionSetMultiplayerHoldTimer * myParams; // r0
    }
    {
        // Range: 0x80224218 -> 0x8022428C
        // Local variables
        class xCounter * counter; // r0
        class EventActionShowMPCollectible * myParams; // r0
    }
    {
        // Range: 0x80224290 -> 0x80224304
        // Local variables
        class xCounter * counter; // r0
        class EventActionShowCACollectible * myParams; // r0
    }

    // References
    // -> class xTimer * timers[4];
    // -> float irMouseY;
    // -> float irMouseX;
    // -> float playerInControl;
    // -> unsigned int modalPopupType;
    // -> bool portalling;
    // -> unsigned int pauseState;
    // -> enum eGameMode gGameMode;
    // -> class xCounter * objectivesCounter;
    // -> float lastLoadStatus;
    // -> class zGlobals globals;
}
// Range: 0x80224380 -> 0x802243D0
void zScaleform::DoInit(class zScaleform * this /* r31 */) {
}
// signature: zScaleform::DoUpdate(float)
// Range: 0x802243D0 -> 0x80224EC8
void zScaleform::DoUpdate(class zScaleform * this /* r23 */) {
    {
        // Range: 0x8022444C -> 0x802244B0
        // Local variables
        char levelName[5]; // r1+0x50
    }
    {
        // Range: 0x80224524 -> 0x80224654
        // Local variables
        int j; // r22

        {
            // Range: 0x80224538 -> 0x80224640
            // Local variables
            unsigned int i; // r25

            {
                // Range: 0x80224538 -> 0x8022463C
                // Local variables
                class xVec2 stickPos; // r1+0x48
            }
        }
    }
    {
        // Range: 0x80224784 -> 0x802248B0
        // Local variables
        int i; // r27

        {
            // Range: 0x80224784 -> 0x802248B0
            // Local variables
            float args[2]; // r1+0x40
        }
    }
    {
        // Range: 0x802248D4 -> 0x802249AC
        // Local variables
        class xVec2 mousePos; // r1+0x38
        enum IRStatus pointerStatus; // r1+0xC
    }
    {
        // Range: 0x802249AC -> 0x80224B10
        // Local variables
        int j; // r22

        {
            // Range: 0x802249B8 -> 0x80224B00
            // Local variables
            int i; // r26

            {
                // Range: 0x802249B8 -> 0x80224B00
                // Local variables
                class xVec2 mousePos; // r1+0x30
                enum IRStatus pointerStatus; // r1+0x8
            }
        }
    }
    {
        // Range: 0x80224B10 -> 0x80224DE0
        // Local variables
        bool weaponChanged; // r26
        float targetArray[16]; // r1+0x58

        {
            // Range: 0x80224B94 -> 0x80224D18
            // Local variables
            int i; // r25

            {
                // Range: 0x80224B94 -> 0x80224D18
                {
                    // Range: 0x80224C48 -> 0x80224CE4
                    // Local variables
                    class zWallePlayer * curPlayer; // r24
                }
            }
        }
    }
    {
        // Range: 0x80224E04 -> 0x80224E84
        // Local variables
        int i; // r22

        {
            // Range: 0x80224E04 -> 0x80224E84
            // Local variables
            float args[2]; // r1+0x28
        }
    }

    // References
    // -> class xTimer * timers[4];
    // -> class zViewport viewports[4];
    // -> float playerInControl;
    // -> float irMouseY;
    // -> float irMouseX;
    // -> class xGlobals * xglobals;
    // -> bool activePlayers[4];
    // -> bool bAllowInput;
    // -> class zGlobals globals;
    // -> bool returningToTitle;
}
// Range: 0x80224ED0 -> 0x80224F04
void zScaleform::DoExit(class zScaleform * this /* r31 */) {
}
// Range: 0x80224F10 -> 0x802252C4
void zScaleform::checkStickPress(class zScaleform * this /* r28 */) {
    // Local variables
    int j; // r30

    {
        // Range: 0x80224F48 -> 0x80225278
        // Local variables
        unsigned int i; // r29

        {
            // Range: 0x80224F48 -> 0x80225274
            // Local variables
            float playerNum; // r1+0x8
            enum stickPressDir newDir; // r23
            class xVec2 stickPos; // r1+0x28
        }
    }

    // References
    // -> enum stickPressDir spDir[4];
    // -> bool activePlayers[4];
}
// Range: 0x802252D0 -> 0x80225768
void zScaleform::portalToLevel(class zScaleform * this /* r30 */, char * levelName /* r31 */) {
    // Local variables
    unsigned int index; // r0

    {
        // Range: 0x802256A8 -> 0x802256BC
        // Local variables
        int i; // r28
    }

    // References
    // -> unsigned int costumes[4];
    // -> bool isMultiplayer;
    // -> float playerInControl;
    // -> class zGlobals globals;
    // -> bool portalling;
}
// signature: zScaleform::sendEvent(void *, char *, char *)
// Range: 0x80225770 -> 0x80226E70
void zScaleform::sendEvent(class zScaleform * this /* r28 */, char * eventName /* r25 */, char * params /* r29 */) {
    {
        // Range: 0x80225790 -> 0x80225804
        // Local variables
        class EventActionOneString stringParam; // r1+0x24
    }
    {
        // Range: 0x80225808 -> 0x80225844
        // Local variables
        class EventActionOneString stringParam; // r1+0x20
    }
    {
        // Range: 0x802258E4 -> 0x80225938
        // Local variables
        bool rumbleEnabled; // r25
    }
    {
        // Range: 0x8022593C -> 0x80225990
        // Local variables
        class EventActionViewport viewportParam; // r1+0x1C
    }
    {
        // Range: 0x80225D20 -> 0x80225D68
        // Local variables
        float randNum; // r1+0x18
    }
    {
        // Range: 0x80225E54 -> 0x80225FC0
        // Local variables
        float storageDevice; // r1+0x14
        float loggedIn[4]; // r1+0x50

        {
            // Range: 0x80225E70 -> 0x80225E88
            // Local variables
            int i; // r25
        }
    }
    {
        // Range: 0x80225FC4 -> 0x802260AC
        // Local variables
        float maxCostume; // f1
        int curDay; // r0
        int curMonth; // r0
        int curYear; // r0
    }
    {
        // Range: 0x802260B0 -> 0x80226100
        // Local variables
        float args[1]; // r1+0x10
    }
    {
        // Range: 0x80226104 -> 0x80226188
        // Local variables
        class D3DRECT dstRect; // r1+0x30
        class D3DRECT rect; // r1+0x40
    }
    {
        // Range: 0x802261DC -> 0x80226600
        // Local variables
        unsigned int playerCount; // r4

        {
            // Range: 0x80226268 -> 0x802262A8
            // Local variables
            int i; // r0
        }
    }
    {
        // Range: 0x80226A64 -> 0x80226BCC
        // Local variables
        float langFlags[16]; // r1+0x60
        char * langNames[16]; // r1+0xA0

        {
            // Range: 0x80226A84 -> 0x80226B90
            // Local variables
            int i; // r30

            {
                // Range: 0x80226A84 -> 0x80226B90
                // Local variables
                char * lang; // r25

                {
                    // Range: 0x80226AC8 -> 0x80226B7C
                    // Local variables
                    int j; // r26
                }
            }
        }
    }
    {
        // Range: 0x80226BF4 -> 0x80226C44
        // Local variables
        bool arg; // r1+0x8
    }
    {
        // Range: 0x80226D3C -> 0x80226DC8
        // Local variables
        float args[2]; // r1+0x28
    }

    // References
    // -> class Module * homeMenuModule;
    // -> class xCounter * objectivesCounter;
    // -> unsigned int pauseState;
    // -> unsigned int modalPopupType;
    // -> bool splitHorizontal;
    // -> bool isFromMultiplayer;
    // -> bool activePlayers[4];
    // -> unsigned int timeLimit;
    // -> unsigned int holdTimer;
    // -> unsigned int killCount;
    // -> class zGlobals globals;
    // -> class zViewport viewports[4];
    // -> float playerInControl;
}
// Range: 0x80226E70 -> 0x802273AC
void zScaleform::setCostumeByString(int player /* r31 */, char * s /* r29 */) {
    // References
    // -> unsigned int costumes[4];
}
// Range: 0x802273B0 -> 0x8022741C
class Rect2D zScaleform::refreshViewport() {
    // References
    // -> class Viewport ViewportFullUI;
    // -> class zViewport viewports[4];
}
// Range: 0x80227420 -> 0x80227964
void zScaleform::refreshTargetLoc(float * coords /* r28 */) {
    {
        // Range: 0x80227480 -> 0x802278F8
        // Local variables
        unsigned int i; // r29

        {
            // Range: 0x80227480 -> 0x802278F8
            {
                // Range: 0x80227480 -> 0x802277E4
                // Local variables
                class xVec3 targetPos; // r1+0x44
                class zWallePlayer * curPlayer; // r21
                bool walleWeapon; // r22
            }
            {
                // Range: 0x802277E8 -> 0x802278F8
                // Local variables
                class zEvePlayer * curPlayer; // r0
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class zViewport viewports[4];
}
// Range: 0x80227970 -> 0x8022798C
void zScaleform::movieStopped() {
}
// signature: zScaleform_Init(xBase &, xDynAsset &, unsigned long)
// Range: 0x80227990 -> 0x802279B0
void zScaleform_Init() {
    // References
    // -> struct {} __vt__10zScaleform;
}
// signature: zScaleform_Init(zScaleform *, Sext::zScaleformAsset *)
// Range: 0x802279B0 -> 0x802279D0
void zScaleform_Init() {
    // References
    // -> struct {} __vt__10zScaleform;
}
