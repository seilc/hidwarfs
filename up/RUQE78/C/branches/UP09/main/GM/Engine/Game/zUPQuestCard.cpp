/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zUPQuestCard.cpp
*/
// Range: 0x802B3EE0 -> 0x802B3F40
void zUpQuestCard::Save(class zUpQuestCard * this /* r29 */, class xSerial * serial /* r30 */) {
    {
        // Range: 0x802B3EF0 -> 0x802B3F18
        // Local variables
        int i; // r31
    }
}
// Range: 0x802B3F40 -> 0x802B3FF0
void zUpQuestCard::Load(class zUpQuestCard * this /* r29 */, class xSerial * serial /* r30 */) {
    {
        // Range: 0x802B3F50 -> 0x802B3F74
        // Local variables
        int i; // r31
    }
    {
        // Range: 0x802B3F94 -> 0x802B3FD4
        // Local variables
        int i; // r0
    }

    // References
    // -> class Module * trcModule;
}
// Range: 0x802B3FF0 -> 0x802B4304
int zUpQuestCard::CheckCardComplete(class zUpQuestCard * this /* r27 */) {
    // Local variables
    int numComplete; // r30
    bool completeAll; // r4

    {
        // Range: 0x802B4010 -> 0x802B41E8
        // Local variables
        unsigned int i; // r29

        {
            // Range: 0x802B4010 -> 0x802B41E8
            // Local variables
            bool isComplete; // r28

            {
                // Range: 0x802B4018 -> 0x802B4018
                // Local variables
                unsigned int j; // r8
            }
            {
                // Range: 0x802B4018 -> 0x802B4018
                // Local variables
                unsigned int j; // r19
            }
            {
                // Range: 0x802B4018 -> 0x802B4024
                // Local variables
                unsigned int j; // r18
            }
        }
    }
    {
        // Range: 0x802B4240 -> 0x802B4260
        // Local variables
        int i; // r5
    }

    // References
    // -> short maxLevel;
    // -> class LevelType levels[30];
    // -> class zPlayerInventory inventory;
    // -> class zGlobals globals;
}
// Range: 0x802B4310 -> 0x802B43B0
int zUpQuestCard::GetCardCompletePercentage() {
    // Local variables
    int completed; // r5

    {
        // Range: 0x802B4318 -> 0x802B4334
        // Local variables
        int i; // r6
    }
}
// Range: 0x802B43B0 -> 0x802B4440
int zUpQuestCard::CheckCardUnlock(class zUpQuestCard * this /* r24 */) {
    // Local variables
    int numUnlock; // r26

    {
        // Range: 0x802B43C8 -> 0x802B4414
        // Local variables
        unsigned int i; // r25
    }

    // References
    // -> class zPlayerInventory inventory;
}
// Range: 0x802B4440 -> 0x802B4468
bool zUpQuestCard::IsFirstCardUnlocked() {
}
// Range: 0x802B4470 -> 0x802B44B8
int zUpQuestCard::GetChangedCardIndex() {
    {
        // Range: 0x802B4470 -> 0x802B4470
        // Local variables
        unsigned int i; // r5
    }
}
// signature: zUpQuestCard::GetConditionTally(unsigned int, unsigned int)
// Range: 0x802B44C0 -> 0x802B4634
unsigned int zUpQuestCard::GetConditionTally() {
    // Local variables
    unsigned int curCondition; // r4

    {
        // Range: 0x802B44CC -> 0x802B4598
        // Local variables
        unsigned int j; // r6
    }
    {
        // Range: 0x802B45A4 -> 0x802B45E4
        // Local variables
        unsigned int j; // r6
    }
    {
        // Range: 0x802B45F0 -> 0x802B4624
        // Local variables
        unsigned int j; // r6
    }

    // References
    // -> class zPlayerInventory inventory;
    // -> class zGlobals globals;
    // -> class LevelType levels[30];
    // -> short maxLevel;
}
// signature: zUpQuestCard::GetConditionTotal(unsigned int, unsigned int)
// Range: 0x802B4640 -> 0x802B46F0
unsigned int zUpQuestCard::GetConditionTotal() {
    // Local variables
    unsigned int curCondition; // r4

    {
        // Range: 0x802B4668 -> 0x802B4684
        // Local variables
        unsigned int j; // r0
    }
    {
        // Range: 0x802B4684 -> 0x802B46B8
        // Local variables
        unsigned int j; // r6
    }
    {
        // Range: 0x802B46D0 -> 0x802B46E8
        // Local variables
        unsigned int j; // r0
    }
}
// signature: zUpQuestCard::GetCollectibleTally(unsigned int)
// Range: 0x802B46F0 -> 0x802B4A98
unsigned int zUpQuestCard::GetCollectibleTally() {
    // References
    // -> class zPlayerInventory inventory;
    // -> class zGlobals globals;
    // -> class LevelType levels[30];
    // -> short maxLevel;
}
// signature: zUpQuestCard::GetCollectibleTotal(unsigned int)
// Range: 0x802B4AA0 -> 0x802B4C0C
unsigned int zUpQuestCard::GetCollectibleTotal() {
    // Local variables
    enum eNPCBugType bugType; // r9
    enum eNPCBugColor bugColor; // r10

    {
        // Range: 0x802B4B74 -> 0x802B4B7C
        // Local variables
        unsigned int i; // r11

        {
            // Range: 0x802B4B7C -> 0x802B4B7C
            // Local variables
            unsigned int j; // r12
        }
    }
}
// signature: zUpQuestCard::GetConditionType(unsigned int, unsigned int)
// Range: 0x802B4C10 -> 0x802B4F38
enum eQuestCardConditionType zUpQuestCard::GetConditionType() {
    // Local variables
    unsigned int curCondition; // r3

    {
        // Range: 0x802B4C38 -> 0x802B4CB0
        // Local variables
        unsigned int j; // r0
    }
    {
        // Range: 0x802B4CB0 -> 0x802B4DDC
        // Local variables
        unsigned int j; // r0
    }
    {
        // Range: 0x802B4DDC -> 0x802B4F24
        // Local variables
        unsigned int j; // r10
    }
}
// signature: zUpQuestCard::IsCardComplete(unsigned int)
// Range: 0x802B4F40 -> 0x802B4F64
bool zUpQuestCard::IsCardComplete() {
}
// signature: zUpQuestCard::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x802B4F70 -> 0x802B500C
void zUpQuestCard::HandleEvent(class zUpQuestCard * this /* r29 */) {
}
// Range: 0x802B5010 -> 0x802B5068
void zUpQuestCard::CheatAllQuestCard() {
    {
        // Range: 0x802B5024 -> 0x802B5064
        // Local variables
        int i; // r0
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x802B5070 -> 0x802B51CC
class Entity * Sext::zUpQuestCardAsset::Create(class EntityHandleBase * handle /* r29 */, class zUpQuestCardAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__12zUpQuestCard;
    // -> struct {} __vt__Q25World9xOGEntity;
}
