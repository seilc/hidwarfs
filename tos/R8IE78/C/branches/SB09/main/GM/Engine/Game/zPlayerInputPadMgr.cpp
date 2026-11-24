/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zPlayerInputPadMgr.cpp
*/
class zPlayerInputPadMgr padManager; // size: 0x12C, address: 0x80754094
// Range: 0x8011F280 -> 0x8011F338
void * zPlayerInputPadMgr::zPlayerInputPadMgr(class zPlayerInputPadMgr * this /* r31 */) {
    {
        // Range: 0x8011F2A4 -> 0x8011F2F4
        // Local variables
        int i; // r8
    }
}
// Range: 0x8011F340 -> 0x8011F3D4
void zPlayerInputPadMgr::StartUp(class zPlayerInputPadMgr * this /* r28 */) {
    {
        // Range: 0x8011F354 -> 0x8011F3C0
        // Local variables
        int i; // r29
    }
}
// signature: zPlayerInputPadMgr::FindPadWithGamePort(int)
// Range: 0x8011F3E0 -> 0x8011F41C
int zPlayerInputPadMgr::FindPadWithGamePort() {
    {
        // Range: 0x8011F3E4 -> 0x8011F414
        // Local variables
        int i; // r7
    }
}
// Range: 0x8011F420 -> 0x8011F4AC
void zPlayerInputPadMgr::zPlayerInputSceneSetup(class zPlayerInputPadMgr * this /* r30 */) {
    // References
    // -> class zGlobals globals;
}
// Range: 0x8011F4B0 -> 0x8011F5CC
void zPlayerInputPadMgr::zPlayerInputUpdate(class zPlayerInputPadMgr * this /* r28 */) {
    {
        // Range: 0x8011F4C4 -> 0x8011F510
        // Local variables
        int i; // r29
    }
    {
        // Range: 0x8011F510 -> 0x8011F5AC
        // Local variables
        int i; // r29

        {
            // Range: 0x8011F53C -> 0x8011F5AC
            // Local variables
            int padToSwap; // r0

            {
                // Range: 0x8011F57C -> 0x8011F5AC
                // Local variables
                int temp; // r4
            }
        }
    }

    // References
    // -> class zPlayerInputPadMgr padManager;
}
// Range: 0x8011F5D0 -> 0x8011F658
void zPlayerInputPadMgr::UpdateDebugPads(class zPlayerInputPadMgr * this /* r27 */) {
    // Local variables
    bool gotDebugPad; // r29

    {
        // Range: 0x8011F5E8 -> 0x8011F634
        // Local variables
        int i; // r28
    }
}
// Range: 0x8011F660 -> 0x8011F728
void zPlayerInputPadMgr::zPlayerInputReset(class zPlayerInputPadMgr * this /* r27 */) {
    {
        // Range: 0x8011F688 -> 0x8011F704
        // Local variables
        int i; // r28
    }

    // References
    // -> class zPlayerInputPadMgr padManager;
}
// Range: 0x8011F730 -> 0x8011F7D8
void zPlayerInputPadMgr::zPlayerInputSceneExit(class zPlayerInputPadMgr * this /* r27 */) {
    {
        // Range: 0x8011F758 -> 0x8011F7A8
        // Local variables
        int i; // r28
    }

    // References
    // -> class zPlayerInputPadMgr padManager;
}
// signature: zPlayerInputPadMgr::SetNewPlayer(zPlayer *const , bool)
// Range: 0x8011F7E0 -> 0x8011F944
class zPlayerInput * zPlayerInputPadMgr::SetNewPlayer(class zPlayerInputPadMgr * this /* r28 */, class zPlayer * newPlayer /* r29 */) {
    {
        // Range: 0x8011F814 -> 0x8011F854
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x8011F85C -> 0x8011F92C
        // Local variables
        int i; // r30

        {
            // Range: 0x8011F86C -> 0x8011F92C
            // Local variables
            class EventActionHudSetPlayer params; // r1+0x8
        }
    }

    // References
    // -> class zGlobals globals;
    // -> class zPlayerInputPadMgr padManager;
}
// Range: 0x8011F950 -> 0x8011FA54
void zPlayerInputPadMgr::HandleDominantPlayerPort(class zPlayerInputPadMgr * this /* r31 */) {
    {
        // Range: 0x8011F964 -> 0x8011F998
        // Local variables
        int i; // r29
    }
    {
        // Range: 0x8011F9B0 -> 0x8011FA40
        // Local variables
        int temp; // r5
        class zPlayerInput * oldPad; // r6
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x8011FA60 -> 0x8011FB38
void zPlayerInputPadMgr::HandleSecondaryPlayerPort(class zPlayerInputPadMgr * this /* r31 */) {
    {
        // Range: 0x8011FA8C -> 0x8011FB24
        // Local variables
        int temp; // r5
        class zPlayerInput * oldPad; // r6
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x8011FB40 -> 0x8011FCA4
class zPlayerInput * zPlayerInputPadMgr::CheckForJoinDrop(class zPlayerInputPadMgr * this /* r30 */, class zPlayer * player /* r31 */) {
    {
        // Range: 0x8011FB7C -> 0x8011FC28
        // Local variables
        class D3DRECT dstRect; // r1+0x18
        class D3DRECT rect; // r1+0x28
    }
}
// signature: zPlayerInputPadMgr::ClearPlayer(zPlayer *const , bool)
// Range: 0x8011FCB0 -> 0x8011FD08
bool zPlayerInputPadMgr::ClearPlayer() {
    // Local variables
    class PadData * p; // r0
}
// Range: 0x8011FD10 -> 0x8011FDAC
class zPlayerInput * zPlayerInputPadMgr::ClaimAIPad(class zPlayerInputPadMgr * this /* r30 */, class zPlayer * player /* r31 */) {
    {
        // Range: 0x8011FD5C -> 0x8011FD94
        // Local variables
        int i; // r0
    }
}
// Range: 0x8011FDB0 -> 0x8011FE50
class zPlayerInput * zPlayerInputPadMgr::RestoreHumanPad(class zPlayerInputPadMgr * this /* r30 */, class zPlayer * player /* r31 */) {
    {
        // Range: 0x8011FDFC -> 0x8011FE38
        // Local variables
        int i; // r0
    }
}
// Range: 0x8011FE50 -> 0x80120104
void zPlayerInputPadMgr::reSort(class zPlayerInputPadMgr * this /* r30 */) {
    {
        // Range: 0x8011FE64 -> 0x8011FEA8
        // Local variables
        int numHumans; // r26

        {
            // Range: 0x8011FE68 -> 0x8011FEA0
            // Local variables
            int i; // r28
        }
    }
    {
        // Range: 0x8011FEA8 -> 0x8011FF58
        // Local variables
        int x; // r7

        {
            // Range: 0x8011FEA8 -> 0x8011FF58
            // Local variables
            unsigned int high; // r9
            unsigned int low; // r8
        }
    }
    {
        // Range: 0x8011FF58 -> 0x80120008
        // Local variables
        bool switched; // r9

        {
            // Range: 0x8011FF68 -> 0x80120008
            // Local variables
            unsigned int counter; // r10

            {
                // Range: 0x8011FF68 -> 0x80120008
                // Local variables
                unsigned int y; // r6

                {
                    // Range: 0x8011FF68 -> 0x80120008
                    // Local variables
                    unsigned int port; // r8
                    class zPlayerInput * pad; // r8
                }
            }
        }
    }
    {
        // Range: 0x80120010 -> 0x801200F0
        // Local variables
        int x; // r31

        {
            // Range: 0x8012001C -> 0x8012001C
            // Local variables
            bool switchToHuman; // r0
        }
        {
            // Range: 0x8012001C -> 0x801200F0
            // Local variables
            bool switchToAI; // r0
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zPlayerInputPadMgr::AcquirePad(IO::Pad *)
// Range: 0x80120110 -> 0x80120194
bool zPlayerInputPadMgr::AcquirePad() {
    // Local variables
    int i; // r7
    int firstNull; // r8
}
// signature: zPlayerInputPadMgr::ReleasePad(IO::Pad *)
// Range: 0x801201A0 -> 0x801201EC
bool zPlayerInputPadMgr::ReleasePad() {
    {
        // Range: 0x801201B4 -> 0x801201E4
        // Local variables
        int i; // r0
    }
}
// signature: zPlayerInputPadMgr::FindPadData(zPlayer *const )
// Range: 0x801201F0 -> 0x80120238
class PadData * zPlayerInputPadMgr::FindPadData() {
    {
        // Range: 0x801201F4 -> 0x80120230
        // Local variables
        int i; // r0
    }
}
// Range: 0x80120240 -> 0x801202D0
unsigned int zPlayerInputPadMgr::GetGamePort(class zPlayerInputPadMgr * this /* r30 */, class zPlayerInput * key /* r31 */) {
    {
        // Range: 0x80120290 -> 0x801202B8
        // Local variables
        int x; // r0
    }
}
// signature: zPlayerInputPadMgr::GetGamePort(zPlayer *)
// Range: 0x801202D0 -> 0x80120324
unsigned int zPlayerInputPadMgr::GetGamePort() {
    {
        // Range: 0x801202E4 -> 0x8012031C
        // Local variables
        int x; // r0
    }
}
// signature: zPlayerInputPadMgr::GetPadAtGamePort(int)
// Range: 0x80120330 -> 0x80120364
class zPlayerInput * zPlayerInputPadMgr::GetPadAtGamePort() {
    {
        // Range: 0x80120334 -> 0x8012035C
        // Local variables
        int x; // r0
    }
}
// Range: 0x80120370 -> 0x801203AC
class zPlayerInput * zPlayerInputPadMgr::GetDebugPad() {
}
// signature: zPlayerInputPadMgr::GetPadOwner(zPlayerInput *)
// Range: 0x801203B0 -> 0x801203F8
class zPlayer * zPlayerInputPadMgr::GetPadOwner() {
    {
        // Range: 0x801203B4 -> 0x801203F0
        // Local variables
        int i; // r0
    }
}
// Range: 0x80120400 -> 0x801204B8
bool zPlayerInputPadMgr::UserSceneReset(class zPlayerInputPadMgr * this /* r29 */) {
    {
        // Range: 0x80120454 -> 0x8012049C
        // Local variables
        int i; // r30
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x801204C0 -> 0x8012080C
class zPlayerInput * zPlayerInputPadMgr::CheckForJoin(class zPlayerInputPadMgr * this /* r27 */, class zPlayer * player /* r28 */, bool forceJoin /* r31 */) {
    // Local variables
    int j; // r0

    {
        // Range: 0x801204D4 -> 0x80120558
        // Local variables
        int sum; // r24

        {
            // Range: 0x80120510 -> 0x80120548
            // Local variables
            int i; // r26
        }
    }
    {
        // Range: 0x80120558 -> 0x801207F0
        // Local variables
        unsigned int x; // r24

        {
            // Range: 0x801205D4 -> 0x801207F0
            // Local variables
            class EventActionOneInt params2; // r1+0x8
            class EventActionHudSetPlayer params; // r1+0x10

            {
                // Range: 0x801205E0 -> 0x80120628
                // Local variables
                unsigned int port; // r6
                class zPlayerInput * pad; // r6
            }
        }
    }

    // References
    // -> class zPlayerInputPadMgr padManager;
    // -> class Module * trcModule;
    // -> class zGlobals globals;
    // -> class xGlobals * xglobals;
}
// Range: 0x80120810 -> 0x80120B18
class zPlayerInput * zPlayerInputPadMgr::CheckForDrop(class zPlayerInputPadMgr * this /* r29 */, class zPlayer * player /* r30 */, bool forceDrop /* r31 */) {
    {
        // Range: 0x8012084C -> 0x801208C4
        // Local variables
        int sum; // r25

        {
            // Range: 0x8012087C -> 0x801208B4
            // Local variables
            int i; // r27
        }
    }
    {
        // Range: 0x801208F8 -> 0x80120960
        // Local variables
        int i; // r8
    }
    {
        // Range: 0x80120988 -> 0x80120AEC
        // Local variables
        class EventActionHudSetPlayer params; // r1+0x10
        class zPlayerInput * returnVal; // r25
        class EventActionOneInt params2; // r1+0x8
        class PadData * pd; // r0
    }

    // References
    // -> class Module * trcModule;
    // -> class zGlobals globals;
    // -> class xGlobals * xglobals;
}
// Range: 0x80120B20 -> 0x80120B2C
class zPlayerInputPadMgr * zPlayerInputNS::GetPadManager() {
    // References
    // -> class zPlayerInputPadMgr padManager;
}
// signature: zPlayerInputNS::GetGamePort(zPlayerInput *)
// Range: 0x80120B30 -> 0x80120B40
unsigned int zPlayerInputNS::GetGamePort() {
    // References
    // -> class zPlayerInputPadMgr padManager;
}
// signature: zPlayerInputNS::GetPadAtGamePort(int)
// Range: 0x80120B40 -> 0x80120B50
class zPlayerInput * zPlayerInputNS::GetPadAtGamePort() {
    // References
    // -> class zPlayerInputPadMgr padManager;
}
// Range: 0x80120B50 -> 0x80120B5C
class zPlayerInput * zPlayerInputNS::GetDebugPad() {
    // References
    // -> class zPlayerInputPadMgr padManager;
}
// Range: 0x80120B60 -> 0x80120B6C
bool zPlayerInputNS::UserSceneReset() {
    // References
    // -> class zPlayerInputPadMgr padManager;
}
// signature: zPlayerInputPadMgr::GetPlayerIndex(zPlayer *) const
// Range: 0x80120B70 -> 0x80120BE4
int zPlayerInputPadMgr::GetPlayerIndex() const {
    {
        // Range: 0x80120B84 -> 0x80120BDC
        // Local variables
        int i; // r0
    }

    // References
    // -> class zGlobals globals;
}
// signature: zPlayerInputPadMgr::GetAIPlayer(zPlayer *) const
// Range: 0x80120BF0 -> 0x80120C2C
int zPlayerInputPadMgr::GetAIPlayer() const {
    {
        // Range: 0x80120BF4 -> 0x80120C24
        // Local variables
        int i; // r7
    }
}
// signature: zPlayerInputPadMgr::IsAI(unsigned int)
// Range: 0x80120C30 -> 0x80120C48
bool zPlayerInputPadMgr::IsAI() {
}
// signature: zPlayerInputPadMgr::GetPlayerFromPlayerInput(zPlayerInput *)
// Range: 0x80120C50 -> 0x80120C98
class zPlayer * zPlayerInputPadMgr::GetPlayerFromPlayerInput() {
    {
        // Range: 0x80120C54 -> 0x80120C90
        // Local variables
        int i; // r0
    }
}
// Range: 0x80120CA0 -> 0x80120D34
class zPlayerInput * zPlayerInputPadMgr::GetBalancePad(class zPlayerInputPadMgr * this /* r28 */) {
    {
        // Range: 0x80120CB4 -> 0x80120D1C
        // Local variables
        int i; // r30

        {
            // Range: 0x80120CB4 -> 0x80120D1C
            // Local variables
            class zPlayerInput * curPad; // r29
        }
    }
}
