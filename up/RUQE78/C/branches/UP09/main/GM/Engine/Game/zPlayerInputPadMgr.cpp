/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zPlayerInputPadMgr.cpp
*/
class zPlayerInputPadMgr padManager; // size: 0xEC, address: 0x80824BF0
// Range: 0x8020A490 -> 0x8020A568
void * zPlayerInputPadMgr::zPlayerInputPadMgr(class zPlayerInputPadMgr * this /* r31 */) {
    {
        // Range: 0x8020A4AC -> 0x8020A4B8
        // Local variables
        int i; // r6
    }
}
// Range: 0x8020A570 -> 0x8020A60C
void zPlayerInputPadMgr::StartUp() {
    {
        // Range: 0x8020A580 -> 0x8020A5DC
        // Local variables
        int i; // r29
    }

    // References
    // -> struct {} __vt__14zPlayerInputAI;
}
// Range: 0x8020A610 -> 0x8020A71C
void zPlayerInputPadMgr::zPlayerInputSceneSetup(class zPlayerInputPadMgr * this /* r31 */) {
    // References
    // -> class zGlobals globals;
}
// Range: 0x8020A720 -> 0x8020A8F4
void zPlayerInputPadMgr::zPlayerInputUpdate(class zPlayerInputPadMgr * this /* r30 */) {
    {
        // Range: 0x8020A73C -> 0x8020A778
        // Local variables
        int i; // r29
    }
    {
        // Range: 0x8020A78C -> 0x8020A858
        // Local variables
        int i; // r29

        {
            // Range: 0x8020A7B0 -> 0x8020A858
            {
                // Range: 0x8020A838 -> 0x8020A858
                // Local variables
                int temp; // r4
            }
        }
    }

    // References
    // -> class zPlayerInputPadMgr padManager;
}
// Range: 0x8020A910 -> 0x8020AA70
void zPlayerInputPadMgr::zPlayerInputReset() {
    {
        // Range: 0x8020A92C -> 0x8020A998
        // Local variables
        int i; // r29
    }

    // References
    // -> class zGlobals globals;
    // -> class zPlayerInputPadMgr padManager;
}
// signature: zPlayerInputPadMgr::SetNewPlayer(zPlayer *const , bool)
// Range: 0x8020AA80 -> 0x8020ACB4
class zPlayerInput * zPlayerInputPadMgr::SetNewPlayer(class zPlayerInputPadMgr * this /* r29 */) {
    {
        // Range: 0x8020AAB8 -> 0x8020AAF8
        // Local variables
        int i; // r5
    }
    {
        // Range: 0x8020AB0C -> 0x8020AC8C
        // Local variables
        int i; // r30

        {
            // Range: 0x8020AB18 -> 0x8020AC8C
            // Local variables
            class EventActionHudSetPlayer params; // r1+0x8
        }
    }

    // References
    // -> class zPlayerInputPadMgr padManager;
    // -> class zGlobals globals;
}
// Range: 0x8020ACC0 -> 0x8020AE40
void zPlayerInputPadMgr::HandleDominantPlayerPort(class zPlayerInputPadMgr * this /* r31 */) {
    {
        // Range: 0x8020ACE0 -> 0x8020ACE4
        // Local variables
        int i; // r29
    }
    {
        // Range: 0x8020AD70 -> 0x8020AE24
        // Local variables
        int temp; // r5
        class zPlayerInput * oldPad; // r6
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x8020AE40 -> 0x8020AF64
void zPlayerInputPadMgr::HandleSecondaryPlayerPort() {
    {
        // Range: 0x8020AEA4 -> 0x8020AF60
        // Local variables
        int temp; // r6
        class zPlayerInput * oldPad; // r7
    }

    // References
    // -> class zGlobals globals;
}
// signature: zPlayerInputPadMgr::SwapPlayers(zPlayer *const , zPlayer *const , zPlayerInput **, zPlayerInput **, bool)
// Range: 0x8020AF70 -> 0x8020B398
bool zPlayerInputPadMgr::SwapPlayers(class zPlayerInputPadMgr * this /* r29 */, class zPlayerInput * * newA /* r30 */, class zPlayerInput * * newB /* r31 */) {
    {
        // Range: 0x8020B098 -> 0x8020B380
        // Local variables
        int padB; // r10
        int padA; // r9

        {
            // Range: 0x8020B0B8 -> 0x8020B15C
            // Local variables
            int i; // r27
        }
        {
            // Range: 0x8020B164 -> 0x8020B1FC
            // Local variables
            class zPlayerInput * tempPad; // r3
            unsigned int tempPort; // r3
        }
        {
            // Range: 0x8020B200 -> 0x8020B298
            // Local variables
            class zPlayerInput * tempPad; // r3
            unsigned int tempPort; // r3
        }
        {
            // Range: 0x8020B29C -> 0x8020B314
            // Local variables
            class PadData tempPD; // r1+0x18
        }
        {
            // Range: 0x8020B318 -> 0x8020B378
            // Local variables
            class PadData tempPD; // r1+0x8
        }
    }
}
// Range: 0x8020B3A0 -> 0x8020B454
class zPlayerInput * zPlayerInputPadMgr::ClaimAIPad(class zPlayerInputPadMgr * this /* r30 */, class zPlayer * player /* r31 */) {
    {
        // Range: 0x8020B3F4 -> 0x8020B430
        // Local variables
        int i; // r4
    }
}
// Range: 0x8020B460 -> 0x8020B518
class zPlayerInput * zPlayerInputPadMgr::RestoreHumanPad(class zPlayerInputPadMgr * this /* r30 */, class zPlayer * player /* r31 */) {
    {
        // Range: 0x8020B4B4 -> 0x8020B4F4
        // Local variables
        int i; // r4
    }
}
// Range: 0x8020B520 -> 0x8020B614
void zPlayerInputPadMgr::reSortAI() {
    {
        // Range: 0x8020B528 -> 0x8020B59C
        // Local variables
        int x; // r9
    }
}
// Range: 0x8020B620 -> 0x8020B964
void zPlayerInputPadMgr::reSort() {
    {
        // Range: 0x8020B684 -> 0x8020B6CC
        // Local variables
        int numHumans; // r6

        {
            // Range: 0x8020B684 -> 0x8020B684
            // Local variables
            int i; // r0
        }
    }
    {
        // Range: 0x8020B6CC -> 0x8020B77C
        // Local variables
        int x; // r5

        {
            // Range: 0x8020B6CC -> 0x8020B77C
            // Local variables
            unsigned int high; // r0
            unsigned int low; // r4
        }
    }
    {
        // Range: 0x8020B788 -> 0x8020B838
        // Local variables
        bool switched; // r9

        {
            // Range: 0x8020B798 -> 0x8020B828
            // Local variables
            unsigned int counter; // r10

            {
                // Range: 0x8020B798 -> 0x8020B828
                // Local variables
                unsigned int y; // r7

                {
                    // Range: 0x8020B798 -> 0x8020B828
                    // Local variables
                    unsigned int port; // r8
                    class zPlayerInput * pad; // r8
                }
            }
        }
    }
    {
        // Range: 0x8020B844 -> 0x8020B930
        // Local variables
        int x; // r29

        {
            // Range: 0x8020B84C -> 0x8020B84C
            // Local variables
            bool switchToHuman; // r0
        }
        {
            // Range: 0x8020B84C -> 0x8020B930
            // Local variables
            bool switchToAI; // r0
        }
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// signature: zPlayerInputPadMgr::AcquirePad(IO::Pad *)
// Range: 0x8020B970 -> 0x8020BA4C
bool zPlayerInputPadMgr::AcquirePad() {
    // Local variables
    int i; // r0
    int firstNull; // r5
}
// signature: zPlayerInputPadMgr::GetPadAtGamePort(int)
// Range: 0x8020BA50 -> 0x8020BA90
class zPlayerInput * zPlayerInputPadMgr::GetPadAtGamePort() {
    {
        // Range: 0x8020BA58 -> 0x8020BA80
        // Local variables
        int x; // r6
    }
}
// signature: zPlayerInputPadMgr::GetPadOwner(zPlayerInput *)
// Range: 0x8020BA90 -> 0x8020BAEC
class zPlayer * zPlayerInputPadMgr::GetPadOwner() {
    {
        // Range: 0x8020BA98 -> 0x8020BADC
        // Local variables
        int i; // r6
    }
}
// Range: 0x8020BB00 -> 0x8020BC28
class zPlayerInput * zPlayerInputPadMgr::MultiplayerDrop(class zPlayerInputPadMgr * this /* r30 */, class zPlayer * player /* r31 */) {
    {
        // Range: 0x8020BB08 -> 0x8020BBFC
        // Local variables
        unsigned int x; // r7
    }

    // References
    // -> class Module * trcModule;
}
// Range: 0x8020BC30 -> 0x8020C35C
class zPlayerInput * zPlayerInputPadMgr::CheckForJoin(class zPlayerInputPadMgr * this /* r24 */, class zPlayer * player /* r25 */, bool forceJoin /* r26 */) {
    // Local variables
    int j; // r28

    {
        // Range: 0x8020BD68 -> 0x8020BE34
        // Local variables
        int sum; // r5

        {
            // Range: 0x8020BD94 -> 0x8020BD94
            // Local variables
            int i; // r0
        }
    }
    {
        // Range: 0x8020BE34 -> 0x8020C330
        // Local variables
        unsigned int x; // r27

        {
            // Range: 0x8020BEC8 -> 0x8020C330
            {
                // Range: 0x8020C00C -> 0x8020C330
                // Local variables
                class EventActionOneInt params2; // r1+0x8
                class EventActionHudSetPlayer params; // r1+0x10

                {
                    // Range: 0x8020C014 -> 0x8020C060
                    // Local variables
                    unsigned int port; // r5
                    class zPlayerInput * pad; // r5
                }
            }
        }
    }

    // References
    // -> class zPlayerInputPadMgr padManager;
    // -> class Module * trcModule;
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// Range: 0x8020C370 -> 0x8020C82C
class zPlayerInput * zPlayerInputPadMgr::CheckForDrop(class zPlayerInputPadMgr * this /* r28 */, class zPlayer * player /* r29 */, bool forceDrop /* r25 */) {
    {
        // Range: 0x8020C378 -> 0x8020C408
        // Local variables
        int sum; // r5

        {
            // Range: 0x8020C3B8 -> 0x8020C3B8
            // Local variables
            int i; // r0
        }
    }
    {
        // Range: 0x8020C430 -> 0x8020C60C
        // Local variables
        class zPlayerInput * returnVal; // r25
        class EventActionOneInt params2; // r1+0x8

        {
            // Range: 0x8020C5A8 -> 0x8020C5F4
            // Local variables
            int x; // r4

            {
                // Range: 0x8020C5BC -> 0x8020C5E0
                // Local variables
                class zPlayerInput * tempPad; // r5
            }
        }
    }
    {
        // Range: 0x8020C620 -> 0x8020C814
        {
            // Range: 0x8020C70C -> 0x8020C80C
            // Local variables
            int i; // r30
        }
    }

    // References
    // -> class zPlayerInputPadMgr padManager;
    // -> class zGlobals globals;
    // -> class Module * trcModule;
    // -> class xGlobals * xglobals;
}
// Range: 0x8020C830 -> 0x8020C83C
class zPlayerInputPadMgr * zPlayerInputNS::GetPadManager() {
    // References
    // -> class zPlayerInputPadMgr padManager;
}
// Range: 0x8020C840 -> 0x8020C8E0
unsigned int zPlayerInputNS::GetGamePort(class zPlayerInput * key /* r31 */) {
    // References
    // -> class zPlayerInputPadMgr padManager;
}
// signature: zPlayerInputNS::GetPadAtGamePort(int)
// Range: 0x8020C8E0 -> 0x8020C930
class zPlayerInput * zPlayerInputNS::GetPadAtGamePort() {
    // References
    // -> class zPlayerInputPadMgr padManager;
}
// Range: 0x8020C930 -> 0x8020C970
class zPlayerInput * zPlayerInputNS::GetDebugPad() {
    // References
    // -> class zPlayerInputPadMgr padManager;
}
// Range: 0x8020C970 -> 0x8020C9F4
bool zPlayerInputNS::UserSceneReset() {
    // References
    // -> class zPlayerInputPadMgr padManager;
}
// signature: zPlayerInputPadMgr::GetPlayerIndex(zPlayer *)
// Range: 0x8020CA00 -> 0x8020CAD4
int zPlayerInputPadMgr::GetPlayerIndex() {
    {
        // Range: 0x8020CA6C -> 0x8020CAC4
        // Local variables
        int i; // r6
    }

    // References
    // -> class zGlobals globals;
}
// signature: zPlayerInputPadMgr::IsAI(unsigned int)
// Range: 0x8020CAE0 -> 0x8020CAF8
bool zPlayerInputPadMgr::IsAI() {
}
// Range: 0x8020CB00 -> 0x8020CB5C
int zPlayerInputPadMgr::GetNumActualHumanPlayers() {
    // Local variables
    int count; // r6

    {
        // Range: 0x8020CB0C -> 0x8020CB0C
        // Local variables
        int i; // r0
    }

    // References
    // -> class xGlobals * xglobals;
}
