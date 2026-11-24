/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zBlackboard.cpp
*/
// signature: zVariableBase::RegisterObserver(Util::DelegateP0<void> *)
// Range: 0x80052C10 -> 0x80052C40
void zVariableBase::RegisterObserver() {
    {
        // Range: 0x80052C14 -> 0x80052C3C
        // Local variables
        int i; // r0
    }
}
// signature: zVariableBase::UnregisterObserver(Util::DelegateP0<void> *)
// Range: 0x80052C40 -> 0x80052C74
void zVariableBase::UnregisterObserver() {
    {
        // Range: 0x80052C44 -> 0x80052C70
        // Local variables
        int i; // r0
    }
}
// signature: zBlackboard::Find(unsigned int) const
// Range: 0x80052C80 -> 0x80052CE0
class zVariableBase * zBlackboard::Find() const {
    // Local variables
    int index; // r9
    class zVariableBase * found; // r10
    unsigned int curr; // r11
}
// signature: zBlackboard::FindEmpty(unsigned int) const
// Range: 0x80052CE0 -> 0x80052D34
class zVariableBase * * zBlackboard::FindEmpty() const {
    // Local variables
    int index; // r7
    class zVariableBase * * found; // r8
    unsigned int curr; // r9
}
// signature: zBlackboard::Init(unsigned int)
// Range: 0x80052D40 -> 0x80052D94
void zBlackboard::Init(class zBlackboard * this /* r30 */) {
}
// Range: 0x80052DA0 -> 0x80052E08
void zBlackboard::Reset(class zBlackboard * this /* r29 */) {
    {
        // Range: 0x80052DB4 -> 0x80052DF4
        // Local variables
        unsigned int i; // r30
    }
}
// signature: zBlackboard::GetVariableType(unsigned int) const
// Range: 0x80052E10 -> 0x80052E44
enum eVarType zBlackboard::GetVariableType() const {
    // Local variables
    class zVariableBase * var; // r0
}
// signature: zBlackboard::RegisterVariableObserver(unsigned int, Util::DelegateP0<void> *)
// Range: 0x80052E50 -> 0x80052E8C
void zBlackboard::RegisterVariableObserver(class DelegateP0 * observer /* r31 */) {
    // Local variables
    class zVariableBase * var; // r0
}
// signature: zBlackboard::UnregisterVariableObserver(unsigned int, Util::DelegateP0<void> *)
// Range: 0x80052E90 -> 0x80052ECC
void zBlackboard::UnregisterVariableObserver(class DelegateP0 * observer /* r31 */) {
    // Local variables
    class zVariableBase * var; // r0
}
// signature: zBlackboard::Write(const Sext::BlackboardWritePayload *)
// Range: 0x80052ED0 -> 0x800532DC
bool zBlackboard::Write(class zBlackboard * this /* r30 */) {
    // Local variables
    unsigned int toVar; // r31

    {
        // Range: 0x80052F0C -> 0x80053108
        // Local variables
        unsigned int fromVar; // r28

        {
            // Range: 0x80052FA8 -> 0x80052FDC
            // Local variables
            int val; // r1+0x2C
        }
        {
            // Range: 0x80052FDC -> 0x80053010
            // Local variables
            float val; // r1+0x28
        }
        {
            // Range: 0x80053010 -> 0x80053044
            // Local variables
            class zPlayer * val; // r1+0x24
        }
        {
            // Range: 0x80053044 -> 0x800530C8
            // Local variables
            class xVec3 val; // r1+0x58
        }
        {
            // Range: 0x800530C8 -> 0x800530FC
            // Local variables
            class uid val; // r1+0x38
        }
    }
    {
        // Range: 0x8005313C -> 0x800531A0
        // Local variables
        int val; // r1+0x20

        {
            // Range: 0x80053150 -> 0x80053190
            // Local variables
            int original; // r1+0x1C
        }
    }
    {
        // Range: 0x800531A0 -> 0x80053204
        // Local variables
        float val; // r1+0x18

        {
            // Range: 0x800531B4 -> 0x800531F4
            // Local variables
            float original; // r1+0x14
        }
    }
    {
        // Range: 0x80053204 -> 0x8005321C
        // Local variables
        int val; // r1+0x10
    }
    {
        // Range: 0x8005321C -> 0x80053268
        // Local variables
        int playerIndex; // r4
        class zPlayer * val; // r1+0xC
    }
    {
        // Range: 0x80053268 -> 0x80053290
        // Local variables
        class xVec3 val; // r1+0x4C
    }
    {
        // Range: 0x80053290 -> 0x800532B0
        // Local variables
        class uid val; // r1+0x30
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zBlackboard::ResetVariable(unsigned int)
// Range: 0x80053890 -> 0x800538D4
bool zBlackboard::ResetVariable() {
    // Local variables
    class zVariableBase * var; // r0
}
