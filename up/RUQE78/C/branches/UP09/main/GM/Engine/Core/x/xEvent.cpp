/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xEvent.cpp
*/
unsigned long long gThisPlayer; // size: 0x8, address: 0x80808390
unsigned long long gThisCameraTarget; // size: 0x8, address: 0x80808398
// signature: zEntEvent(unsigned long long, unsigned int, Sext::EventAny *)
// Range: 0x80059670 -> 0x800596CC
void zEntEvent(unsigned int toEvent /* r30 */, class EventAny * params /* r31 */) {
    // Local variables
    class xBase * sendTo; // r3
}
// signature: LinkParametersMatch(unsigned int, Sext::EventAny *, const Sext::LinkAssetBaseNew *)
// Range: 0x800596D0 -> 0x8005AB90
bool LinkParametersMatch(class EventAny * params /* r30 */, class LinkAssetBaseNew * thislink /* r31 */) {
    // Local variables
    int payload; // r0

    {
        // Range: 0x80059C60 -> 0x80059CEC
        // Local variables
        class EventActionLegacy * actionParamsLink; // r3
        class EventActionLegacy * actionParams; // r0
    }
    {
        // Range: 0x80059D88 -> 0x80059DBC
        // Local variables
        class EventActionTeleportPlayer * actionParamsLink; // r4
        class EventActionTeleportPlayer * actionParams; // r0
    }
    {
        // Range: 0x80059DBC -> 0x80059E00
        // Local variables
        class EventActionMount * actionParamsLink; // r3
        class EventActionMount * actionParams; // r0
    }
    {
        // Range: 0x80059E00 -> 0x80059E44
        // Local variables
        class EventActionOn * actionParamsLink; // r3
        class EventActionOn * actionParams; // r0
    }
    {
        // Range: 0x80059E44 -> 0x80059EA0
        // Local variables
        class EventActionSwitch * actionParamsLink; // r6
        class EventActionSwitch * actionParams; // r0
    }
    {
        // Range: 0x80059EBC -> 0x80059F40
        // Local variables
        class EventActionHit * actionParamsLink; // r4
        class EventActionHit * actionParams; // r0
    }
    {
        // Range: 0x80059FF0 -> 0x8005A03C
        // Local variables
        class EventActionAnimPlay * actionParamsLink; // r4
        class EventActionAnimPlay * actionParams; // r0
    }
    {
        // Range: 0x8005A03C -> 0x8005A088
        // Local variables
        class EventActionAnimPlayRandom * actionParamsLink; // r4
        class EventActionAnimPlayRandom * actionParams; // r0
    }
    {
        // Range: 0x8005A088 -> 0x8005A0D4
        // Local variables
        class EventActionAnimPlayMaybe * actionParamsLink; // r4
        class EventActionAnimPlayMaybe * actionParams; // r0
    }
    {
        // Range: 0x8005A10C -> 0x8005A140
        // Local variables
        class EventActionAccelerate * actionParamsLink; // r3
        class EventActionAccelerate * actionParams; // r0
    }
    {
        // Range: 0x8005A140 -> 0x8005A19C
        // Local variables
        class EventActionMoveToTarget * actionParamsLink; // r3
        class EventActionMoveToTarget * actionParams; // r0
    }
    {
        // Range: 0x8005A19C -> 0x8005A200
        // Local variables
        class EventActionMoveToLoc * actionParamsLink; // r3
        class EventActionMoveToLoc * actionParams; // r0
    }
    {
        // Range: 0x8005A200 -> 0x8005A234
        // Local variables
        class EventActionSetSkyDome * actionParamsLink; // r4
        class EventActionSetSkyDome * actionParams; // r0
    }
    {
        // Range: 0x8005A234 -> 0x8005A278
        // Local variables
        class EventActionSetCount * actionParamsLink; // r6
        class EventActionSetCount * actionParams; // r0
    }
    {
        // Range: 0x8005A278 -> 0x8005A2AC
        // Local variables
        class EventActionPlayMovie * actionParamsLink; // r4
        class EventActionPlayMovie * actionParams; // r0
    }
    {
        // Range: 0x8005A2F4 -> 0x8005A358
        // Local variables
        class EventActionCreditsSetDest * actionParamsLink; // r3
        class EventActionCreditsSetDest * actionParams; // r0
    }
    {
        // Range: 0x8005A3B0 -> 0x8005A3E4
        // Local variables
        class EventActionSetZPlaneParams * actionParamsLink; // r3
        class EventActionSetZPlaneParams * actionParams; // r0
    }
    {
        // Range: 0x8005A3E4 -> 0x8005A418
        // Local variables
        class EventActionSetFogStartEnd * actionParamsLink; // r3
        class EventActionSetFogStartEnd * actionParams; // r0
    }
    {
        // Range: 0x8005A418 -> 0x8005A464
        // Local variables
        class EventActionSetFogColor * actionParamsLink; // r4
        class EventActionSetFogColor * actionParams; // r0
    }
    {
        // Range: 0x8005A464 -> 0x8005A4B0
        // Local variables
        class EventActionSetGravity * actionParamsLink; // r3
        class EventActionSetGravity * actionParams; // r0
    }
    {
        // Range: 0x8005A4B0 -> 0x8005A4E4
        // Local variables
        class EventActionSetOpacity * actionParamsLink; // r3
        class EventActionSetOpacity * actionParams; // r0
    }
    {
        // Range: 0x8005A4E4 -> 0x8005A528
        // Local variables
        class EventActionSetPlayerPosition * actionParamsLink; // r6
        class EventActionSetPlayerPosition * actionParams; // r0
    }
    {
        // Range: 0x8005A560 -> 0x8005A5A4
        // Local variables
        class EventActionPlayCustomAnim * actionParamsLink; // r6
        class EventActionPlayCustomAnim * actionParams; // r0
    }
    {
        // Range: 0x8005A5A4 -> 0x8005A5D8
        // Local variables
        class EventActionSetSplitScreenMode * actionParamsLink; // r4
        class EventActionSetSplitScreenMode * actionParams; // r0
    }
    {
        // Range: 0x8005A674 -> 0x8005A6A8
        // Local variables
        class EventActionDamagePlayer * actionParamsLink; // r4
        class EventActionDamagePlayer * actionParams; // r0
    }
    {
        // Range: 0x8005A6FC -> 0x8005A760
        // Local variables
        class EventActionSetColorIntensity * actionParamsLink; // r3
        class EventActionSetColorIntensity * actionParams; // r0
    }
    {
        // Range: 0x8005A760 -> 0x8005A7A4
        // Local variables
        class EventActionStartLightEffect * actionParamsLink; // r6
        class EventActionStartLightEffect * actionParams; // r0
    }
    {
        // Range: 0x8005A7C0 -> 0x8005A824
        // Local variables
        class EventActionSaveInfoToTextDepot * actionParamsLink; // r4
        class EventActionSaveInfoToTextDepot * actionParams; // r0
    }
    {
        // Range: 0x8005A824 -> 0x8005A888
        // Local variables
        class EventActionScale * actionParamsLink; // r3
        class EventActionScale * actionParams; // r0
    }
    {
        // Range: 0x8005A888 -> 0x8005A8EC
        // Local variables
        class EventActionPlatformMotion * actionParamsLink; // r3
        class EventActionPlatformMotion * actionParams; // r0
    }
    {
        // Range: 0x8005A8EC -> 0x8005A938
        // Local variables
        class EventActionRotSetOrientation * actionParamsLink; // r3
        class EventActionRotSetOrientation * actionParams; // r0
    }
    {
        // Range: 0x8005A938 -> 0x8005A984
        // Local variables
        class EventActionRotGotoOrientation * actionParamsLink; // r3
        class EventActionRotGotoOrientation * actionParams; // r0
    }
    {
        // Range: 0x8005A984 -> 0x8005A9F8
        // Local variables
        class EventActionTransToAbsoluteDirection * actionParamsLink; // r3
        class EventActionTransToAbsoluteDirection * actionParams; // r0
    }
    {
        // Range: 0x8005AA5C -> 0x8005AAA0
        // Local variables
        class EventActionDispatcher_SetPlayerCharacter * actionParamsLink; // r6
        class EventActionDispatcher_SetPlayerCharacter * actionParams; // r0
    }
    {
        // Range: 0x8005AABC -> 0x8005AB20
        // Local variables
        class EventActionGuideInvokeDeviceSelect * actionParamsLink; // r3
        class EventActionGuideInvokeDeviceSelect * actionParams; // r0
    }
}
// signature: zEntEvent(xBase *, unsigned int, xBase *, unsigned int, Sext::EventAny *, ForceEvent)
// Range: 0x8005AB90 -> 0x8005AD90
void zEntEvent(class xBase * from /* r27 */, class xBase * to /* r28 */, unsigned int toEvent /* r29 */, class EventAny * params /* r30 */) {
    {
        // Range: 0x8005ACB4 -> 0x8005AD68
        // Local variables
        unsigned int i; // r31

        {
            // Range: 0x8005ACB4 -> 0x8005AD68
            {
                // Range: 0x8005ACD4 -> 0x8005AD68
                // Local variables
                class xBase * sendTo; // r5
            }
        }
    }
}
// signature: zEntEventInternal(xBase *, unsigned int, xBase *, unsigned int, Sext::EventAny *, ForceEvent)
// Range: 0x8005AD90 -> 0x8005ADDC
void zEntEventInternal() {
}
// signature: zEntEventInternal(xBase *, unsigned int)
// Range: 0x8005ADE0 -> 0x8005AE28
void zEntEventInternal() {
}
// signature: zEntEventInternal(xBase *, unsigned int, Sext::EventAny *, ForceEvent)
// Range: 0x8005AE30 -> 0x8005AE88
void zEntEventInternal(unsigned int toEvent /* r8 */, class EventAny * params /* r7 */) {
}
