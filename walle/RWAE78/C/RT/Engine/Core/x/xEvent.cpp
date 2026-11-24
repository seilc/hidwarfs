/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xEvent.cpp
*/
char zEventLogBuf[20][256]; // size: 0x1400, address: 0x80754160
int zEventLogBufInit; // size: 0x4, address: 0x80755560
unsigned long long gThisPlayer; // size: 0x8, address: 0x80755568
unsigned long long gThisCameraTarget; // size: 0x8, address: 0x80755570
// signature: zEntEvent(unsigned long long, unsigned int, Sext::EventAny *)
// Range: 0x8003CB90 -> 0x8003CBEC
void zEntEvent(unsigned int toEvent /* r30 */, class EventAny * params /* r31 */) {
    // Local variables
    class xBase * sendTo; // r3
}
// signature: LinkParametersMatch(unsigned int, Sext::EventAny *, const Sext::LinkAssetBaseNew *)
// Range: 0x8003CBF0 -> 0x8003E1A0
bool LinkParametersMatch(class EventAny * params /* r30 */, class LinkAssetBaseNew * thislink /* r31 */) {
    // Local variables
    int payload; // r0

    {
        // Range: 0x8003D1BC -> 0x8003D248
        // Local variables
        class EventActionLegacy * actionParamsLink; // r3
        class EventActionLegacy * actionParams; // r0
    }
    {
        // Range: 0x8003D2E4 -> 0x8003D318
        // Local variables
        class EventActionTeleportPlayer * actionParamsLink; // r4
        class EventActionTeleportPlayer * actionParams; // r0
    }
    {
        // Range: 0x8003D318 -> 0x8003D35C
        // Local variables
        class EventActionMount * actionParamsLink; // r3
        class EventActionMount * actionParams; // r0
    }
    {
        // Range: 0x8003D35C -> 0x8003D3A0
        // Local variables
        class EventActionOn * actionParamsLink; // r3
        class EventActionOn * actionParams; // r0
    }
    {
        // Range: 0x8003D3A0 -> 0x8003D3FC
        // Local variables
        class EventActionSwitch * actionParamsLink; // r6
        class EventActionSwitch * actionParams; // r0
    }
    {
        // Range: 0x8003D418 -> 0x8003D494
        // Local variables
        class EventActionHit * actionParamsLink; // r4
        class EventActionHit * actionParams; // r0
    }
    {
        // Range: 0x8003D494 -> 0x8003D4C8
        // Local variables
        class EventActionHit * actionParamsLink; // r3
        class EventActionHit * actionParams; // r0
    }
    {
        // Range: 0x8003D578 -> 0x8003D5C4
        // Local variables
        class EventActionAnimPlay * actionParamsLink; // r4
        class EventActionAnimPlay * actionParams; // r0
    }
    {
        // Range: 0x8003D5C4 -> 0x8003D610
        // Local variables
        class EventActionAnimPlayRandom * actionParamsLink; // r4
        class EventActionAnimPlayRandom * actionParams; // r0
    }
    {
        // Range: 0x8003D610 -> 0x8003D65C
        // Local variables
        class EventActionAnimPlayMaybe * actionParamsLink; // r4
        class EventActionAnimPlayMaybe * actionParams; // r0
    }
    {
        // Range: 0x8003D694 -> 0x8003D6C8
        // Local variables
        class EventActionAccelerate * actionParamsLink; // r3
        class EventActionAccelerate * actionParams; // r0
    }
    {
        // Range: 0x8003D6C8 -> 0x8003D724
        // Local variables
        class EventActionMoveToTarget * actionParamsLink; // r3
        class EventActionMoveToTarget * actionParams; // r0
    }
    {
        // Range: 0x8003D724 -> 0x8003D788
        // Local variables
        class EventActionSetSkyDome * actionParamsLink; // r4
        class EventActionSetSkyDome * actionParams; // r0
    }
    {
        // Range: 0x8003D788 -> 0x8003D7CC
        // Local variables
        class EventActionSetCount * actionParamsLink; // r6
        class EventActionSetCount * actionParams; // r0
    }
    {
        // Range: 0x8003D7CC -> 0x8003D800
        // Local variables
        class EventActionPlayMovie * actionParamsLink; // r4
        class EventActionPlayMovie * actionParams; // r0
    }
    {
        // Range: 0x8003D848 -> 0x8003D8AC
        // Local variables
        class EventActionCreditsSetDest * actionParamsLink; // r3
        class EventActionCreditsSetDest * actionParams; // r0
    }
    {
        // Range: 0x8003D904 -> 0x8003D938
        // Local variables
        class EventActionSetZPlaneParams * actionParamsLink; // r3
        class EventActionSetZPlaneParams * actionParams; // r0
    }
    {
        // Range: 0x8003D938 -> 0x8003D96C
        // Local variables
        class EventActionSetFogStartEnd * actionParamsLink; // r3
        class EventActionSetFogStartEnd * actionParams; // r0
    }
    {
        // Range: 0x8003D96C -> 0x8003D9B8
        // Local variables
        class EventActionSetFogColor * actionParamsLink; // r4
        class EventActionSetFogColor * actionParams; // r0
    }
    {
        // Range: 0x8003D9B8 -> 0x8003DA04
        // Local variables
        class EventActionSetGravity * actionParamsLink; // r3
        class EventActionSetGravity * actionParams; // r0
    }
    {
        // Range: 0x8003DA04 -> 0x8003DA38
        // Local variables
        class EventActionSetOpacity * actionParamsLink; // r3
        class EventActionSetOpacity * actionParams; // r0
    }
    {
        // Range: 0x8003DA38 -> 0x8003DA7C
        // Local variables
        class EventActionSetPlayerPosition * actionParamsLink; // r6
        class EventActionSetPlayerPosition * actionParams; // r0
    }
    {
        // Range: 0x8003DAB4 -> 0x8003DAF8
        // Local variables
        class EventActionPlayCustomAnim * actionParamsLink; // r6
        class EventActionPlayCustomAnim * actionParams; // r0
    }
    {
        // Range: 0x8003DAF8 -> 0x8003DB2C
        // Local variables
        class EventActionSetSplitScreenMode * actionParamsLink; // r4
        class EventActionSetSplitScreenMode * actionParams; // r0
    }
    {
        // Range: 0x8003DC00 -> 0x8003DC5C
        // Local variables
        class EventActionCompactTrashStart * actionParamsLink; // r6
        class EventActionCompactTrashStart * actionParams; // r0
    }
    {
        // Range: 0x8003DC5C -> 0x8003DCA0
        // Local variables
        class EventActionSetOption * actionParamsLink; // r6
        class EventActionSetOption * actionParams; // r0
    }
    {
        // Range: 0x8003DCA0 -> 0x8003DCD4
        // Local variables
        class EventActionDamagePlayer * actionParamsLink; // r4
        class EventActionDamagePlayer * actionParams; // r0
    }
    {
        // Range: 0x8003DD28 -> 0x8003DD8C
        // Local variables
        class EventActionSetColorIntensity * actionParamsLink; // r3
        class EventActionSetColorIntensity * actionParams; // r0
    }
    {
        // Range: 0x8003DD8C -> 0x8003DDD0
        // Local variables
        class EventActionStartLightEffect * actionParamsLink; // r6
        class EventActionStartLightEffect * actionParams; // r0
    }
    {
        // Range: 0x8003DDEC -> 0x8003DE50
        // Local variables
        class EventActionSaveInfoToTextDepot * actionParamsLink; // r4
        class EventActionSaveInfoToTextDepot * actionParams; // r0
    }
    {
        // Range: 0x8003DE50 -> 0x8003DEB4
        // Local variables
        class EventActionScale * actionParamsLink; // r3
        class EventActionScale * actionParams; // r0
    }
    {
        // Range: 0x8003DEB4 -> 0x8003DF18
        // Local variables
        class EventActionPlatformMotion * actionParamsLink; // r3
        class EventActionPlatformMotion * actionParams; // r0
    }
    {
        // Range: 0x8003DF18 -> 0x8003DF64
        // Local variables
        class EventActionRotSetOrientation * actionParamsLink; // r3
        class EventActionRotSetOrientation * actionParams; // r0
    }
    {
        // Range: 0x8003DF64 -> 0x8003DFB0
        // Local variables
        class EventActionRotGotoOrientation * actionParamsLink; // r3
        class EventActionRotGotoOrientation * actionParams; // r0
    }
    {
        // Range: 0x8003DFB0 -> 0x8003E024
        // Local variables
        class EventActionTransToAbsoluteDirection * actionParamsLink; // r3
        class EventActionTransToAbsoluteDirection * actionParams; // r0
    }
    {
        // Range: 0x8003E06C -> 0x8003E0B0
        // Local variables
        class EventActionDispatcher_SetPlayerCharacter * actionParamsLink; // r6
        class EventActionDispatcher_SetPlayerCharacter * actionParams; // r0
    }
    {
        // Range: 0x8003E0CC -> 0x8003E130
        // Local variables
        class EventActionGuideInvokeDeviceSelect * actionParamsLink; // r3
        class EventActionGuideInvokeDeviceSelect * actionParams; // r0
    }
}
// signature: zEntEvent(xBase *, unsigned int, xBase *, unsigned int, Sext::EventAny *, ForceEvent)
// Range: 0x8003E1A0 -> 0x8003E3A0
void zEntEvent(class xBase * from /* r27 */, class xBase * to /* r28 */, unsigned int toEvent /* r29 */, class EventAny * params /* r30 */) {
    {
        // Range: 0x8003E2C4 -> 0x8003E378
        // Local variables
        unsigned int i; // r31

        {
            // Range: 0x8003E2C4 -> 0x8003E378
            {
                // Range: 0x8003E2E4 -> 0x8003E378
                // Local variables
                class xBase * sendTo; // r5
            }
        }
    }
}
