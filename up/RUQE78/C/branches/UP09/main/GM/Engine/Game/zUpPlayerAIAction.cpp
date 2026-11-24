/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zUpPlayerAIAction.cpp
*/
// Range: 0x802894C0 -> 0x802895CC
void zPlayerAIActionPushPull::Begin(class zPlayerAIActionPushPull * this /* r31 */) {
    // Local variables
    class zInteractionUP * interaction; // r0

    // References
    // -> static unsigned int PLAYERAI_VAR_FACING;
    // -> static unsigned int PLAYERAI_VAR_INTERACTION;
}
// signature: zPlayerAIActionPushPull::Update(float)
// Range: 0x802895D0 -> 0x80289900
enum eTaskState zPlayerAIActionPushPull::Update(class zPlayerAIActionPushPull * this /* r31 */) {
    // Local variables
    class zCommonPlayer * theOther; // r0

    {
        // Range: 0x802896A0 -> 0x802898E8
        // Local variables
        float mult; // f2
        class xVec2 stickDir; // r1+0x20
        class xVec3 currentFacing; // r1+0x28
        class zCommonPlayer * theOther; // r0
    }

    // References
    // -> class xVec3 m_UnitAxisZ;
}
// Range: 0x80289900 -> 0x80289920
void zPlayerAIActionCrank::Begin() {
}
// signature: zPlayerAIActionCrank::Update(float)
// Range: 0x80289920 -> 0x802899D0
enum eTaskState zPlayerAIActionCrank::Update(class zPlayerAIActionCrank * this /* r31 */) {
    {
        // Range: 0x80289964 -> 0x802899B8
        // Local variables
        class zCrank * crank; // r3
    }
}
// Range: 0x802899D0 -> 0x80289A48
void zPlayerAIActionCrank::End(class zPlayerAIActionCrank * this /* r31 */) {
}
// signature: zPlayerAIActionRussellDropRope::Update(float)
// Range: 0x80289A60 -> 0x80289B84
enum eTaskState zPlayerAIActionRussellDropRope::Update(class zPlayerAIActionRussellDropRope * this /* r31 */) {
    {
        // Range: 0x80289AB4 -> 0x80289B6C
        // Local variables
        class zRussellRope * rope; // r0

        {
            // Range: 0x80289ADC -> 0x80289B6C
            // Local variables
            class xVec2 stick; // r1+0x10
            class xVec3 back; // r1+0x18
        }
    }
}
// Range: 0x80289B90 -> 0x80289BC4
void zPlayerAIActionRussellDropRope::End() {
}
// signature: zPlayerAIActionCarlLowerCane::Update(float)
// Range: 0x80289BE0 -> 0x80289D04
enum eTaskState zPlayerAIActionCarlLowerCane::Update(class zPlayerAIActionCarlLowerCane * this /* r30 */) {
    {
        // Range: 0x80289C38 -> 0x80289CE8
        // Local variables
        class zCarlPlayerLedgeHoist * hoist; // r3
    }
}
// Range: 0x80289D10 -> 0x80289D74
void zPlayerAIActionCarlLowerCane::End() {
}
// Range: 0x80289D80 -> 0x8028A158
enum eTaskState zPlayerAIActionWriteInteractionData::WriteCrank(class zPlayerAIActionWriteInteractionData * this /* r30 */) const {
    // Local variables
    class zCommonPlayer * theOther; // r0
    class zCrank * crank; // r31
    class xVec3 position; // r1+0x14
    class xVec3 facing; // r1+0x8

    // References
    // -> static unsigned int PLAYERAI_VAR_INTERACTION;
    // -> static unsigned int PLAYERAI_VAR_FACING;
    // -> static unsigned int PLAYERAI_VAR_CURR_DEST;
}
// Range: 0x8028A160 -> 0x8028A3EC
enum eTaskState zPlayerAIActionWriteInteractionData::WriteCarlRopeClimb(class zPlayerAIActionWriteInteractionData * this /* r31 */) const {
    // Local variables
    class zRussellPlayer * russell; // r0
    class zRussellRope * rope; // r0
    class xVec3 pos; // r1+0x50
    class hkVector4 hitPos; // r1+0x40
    float dist; // r1+0x14
    void * owner; // r1+0x10
    bool hit; // r0

    {
        // Range: 0x8028A1B8 -> 0x8028A1B8
        // Local variables
        class hkMonitorStream & mStream; // r0

        {
            // Range: 0x8028A1B8 -> 0x8028A1B8
            // Local variables
            class TimerCommand * h; // r0
        }
    }
    {
        // Range: 0x8028A2BC -> 0x8028A2BC
        // Local variables
        class hkMonitorStream & mStream; // r0

        {
            // Range: 0x8028A2BC -> 0x8028A2BC
            // Local variables
            class TimerCommand * h; // r0
        }
    }

    // References
    // -> static unsigned int PLAYERAI_VAR_CURR_DEST;
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
}
// Range: 0x8028A3F0 -> 0x8028A7E4
enum eTaskState zPlayerAIActionWriteInteractionData::WriteRussellCaneUp(class zPlayerAIActionWriteInteractionData * this /* r31 */) const {
    // Local variables
    class zCommonPlayer * carl; // r0
    class xMat4x3 caneMat; // r1+0x90
    class xVec3 canePos; // r1+0x84
    class xVec3 boneOffset; // r1+0x78
    class zCarlLedgeHoist * hoist; // r0
    class xVec3 jumpPos; // r1+0x6C

    {
        // Range: 0x8028A4F8 -> 0x8028A690
        // Local variables
        bool hit; // r0
        void * owner; // r1+0x10
        float dist; // r1+0x14
        class hkVector4 hitPos; // r1+0x50
        class xVec3 pos; // r1+0x60

        {
            // Range: 0x8028A510 -> 0x8028A510
            // Local variables
            class hkMonitorStream & mStream; // r0

            {
                // Range: 0x8028A510 -> 0x8028A510
                // Local variables
                class TimerCommand * h; // r0
            }
        }
        {
            // Range: 0x8028A614 -> 0x8028A614
            // Local variables
            class hkMonitorStream & mStream; // r0

            {
                // Range: 0x8028A614 -> 0x8028A614
                // Local variables
                class TimerCommand * h; // r0
            }
        }
    }

    // References
    // -> static unsigned int PLAYERAI_VAR_CURR_DEST;
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
}
// signature: zPlayerAIActionWriteInteractionData::Update(float)
// Range: 0x8028A7F0 -> 0x8028AFEC
enum eTaskState zPlayerAIActionWriteInteractionData::Update(class zPlayerAIActionWriteInteractionData * this /* r31 */) {
    // References
    // -> class zGlobals globals;
    // -> static unsigned int PLAYERAI_VAR_FACING;
    // -> static unsigned int PLAYERAI_VAR_CURR_DEST;
    // -> static unsigned int PLAYERAI_VAR_INTERACTION;
}
// signature: zPlayerAIActionFakeFightDog::Update(float)
// Range: 0x8028B000 -> 0x8028B0C4
enum eTaskState zPlayerAIActionFakeFightDog::Update(class zPlayerAIActionFakeFightDog * this /* r31 */) {
}
// Range: 0x8028B0D0 -> 0x8028B0E0
void zPlayerAIActionKevinSpringboard::Begin() {
}
// Range: 0x8028B0F0 -> 0x8028B17C
void zPlayerAIActionKevinSpringboard::Cleanup(class zPlayerAIActionKevinSpringboard * this /* r31 */) {
    {
        // Range: 0x8028B118 -> 0x8028B168
        // Local variables
        class zKevinSpringboard * sb; // r5
    }
}
// Range: 0x8028B180 -> 0x8028B1F0
void zPlayerAIActionDugDig::Begin(class zPlayerAIActionDugDig * this /* r31 */) {
    // Local variables
    class zInteractionUP * interaction; // r3

    // References
    // -> static unsigned int PLAYERAI_VAR_INTERACTION;
}
// signature: zPlayerAIActionDugDig::Update(float)
// Range: 0x8028B1F0 -> 0x8028B40C
enum eTaskState zPlayerAIActionDugDig::Update(class zPlayerAIActionDugDig * this /* r31 */) {
    // Local variables
    class xVec3 pos; // r1+0x30
    class xVec3 dir; // r1+0x24
    class xVec2 stickDir; // r1+0x10
}
// signature: zPlayerAIActionGetOutOfVineSwing::Update(float)
// Range: 0x8028B420 -> 0x8028B5E0
enum eTaskState zPlayerAIActionGetOutOfVineSwing::Update(class zPlayerAIActionGetOutOfVineSwing * this /* r31 */) {
    {
        // Range: 0x8028B478 -> 0x8028B5C4
        // Local variables
        class xVec3 playerToVineCenter; // r1+0x18
        bool shouldJump; // r6
        class xVec2 stickDir; // r1+0x10
        class zSwingVine * nextVine; // r0
    }
}
