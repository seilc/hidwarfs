/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zBlackboard.cpp
*/
// signature: zBlackboard::Find(unsigned int) const
// Range: 0x800ADC20 -> 0x800ADC80
class zVariableBase * zBlackboard::Find() const {
    // Local variables
    int index; // r9
    class zVariableBase * found; // r10
    unsigned int curr; // r11
}
// signature: zBlackboard::FindEmpty(unsigned int) const
// Range: 0x800ADC80 -> 0x800ADCD4
class zVariableBase * * zBlackboard::FindEmpty() const {
    // Local variables
    int index; // r7
    class zVariableBase * * found; // r8
    unsigned int curr; // r9
}
// signature: zBlackboard::GetVariableType(unsigned int) const
// Range: 0x800ADCE0 -> 0x800ADD50
enum eVarType zBlackboard::GetVariableType() const {
}
// signature: zBlackboard::RegisterVariableObserver(unsigned int, zDelegateP0<void> *)
// Range: 0x800ADD50 -> 0x800ADDEC
void zBlackboard::RegisterVariableObserver() {
}
// signature: zBlackboard::UnregisterVariableObserver(unsigned int, zDelegateP0<void> *)
// Range: 0x800ADDF0 -> 0x800ADE90
void zBlackboard::UnregisterVariableObserver() {
}
// Range: 0x800ADE90 -> 0x800AE290
bool zBlackboard::Write(class zBlackboard * this /* r31 */, class BlackboardWritePayload * writeParams /* r28 */) {
    // Local variables
    unsigned int toVar; // r29

    {
        // Range: 0x800ADED8 -> 0x800AE050
        // Local variables
        unsigned int fromVar; // r28

        {
            // Range: 0x800ADF3C -> 0x800ADF70
            // Local variables
            int val; // r1+0x28
        }
        {
            // Range: 0x800ADF70 -> 0x800ADFA4
            // Local variables
            float val; // r1+0x24
        }
        {
            // Range: 0x800ADFA4 -> 0x800ADFD8
            // Local variables
            class zPlayer * val; // r1+0x20
        }
        {
            // Range: 0x800ADFD8 -> 0x800AE00C
            // Local variables
            class xVec3 val; // r1+0x4C
        }
        {
            // Range: 0x800AE00C -> 0x800AE040
            // Local variables
            class uid val; // r1+0x38
        }
    }
    {
        // Range: 0x800AE084 -> 0x800AE100
        // Local variables
        int val; // r1+0x1C

        {
            // Range: 0x800AE0A8 -> 0x800AE0EC
            // Local variables
            int original; // r1+0x18
        }
    }
    {
        // Range: 0x800AE100 -> 0x800AE17C
        // Local variables
        float val; // r1+0x14

        {
            // Range: 0x800AE124 -> 0x800AE168
            // Local variables
            float original; // r1+0x10
        }
    }
    {
        // Range: 0x800AE17C -> 0x800AE1A0
        // Local variables
        int val; // r1+0xC
    }
    {
        // Range: 0x800AE1A0 -> 0x800AE1FC
        // Local variables
        int playerIndex; // r28
        class zPlayer * val; // r1+0x8
    }
    {
        // Range: 0x800AE1FC -> 0x800AE230
        // Local variables
        class xVec3 val; // r1+0x40
    }
    {
        // Range: 0x800AE230 -> 0x800AE25C
        // Local variables
        class uid val; // r1+0x30
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zBlackboard::ResetVariable(unsigned int)
// Range: 0x800AEB10 -> 0x800AEBB0
bool zBlackboard::ResetVariable() {
}
