/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zRewardsMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00303880 -> 0x0030388C
*/
// Range: 0x303880 -> 0x30388C
// this: r2
void zRewardsMgr::SetPlayerDead() {
    /* anonymous block */ {
        // Range: 0x303880 -> 0x30388C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zRewardsMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00303890 -> 0x0030390C
*/
// Range: 0x303890 -> 0x30390C
// this: r16
void zRewardsMgr::GiveAllRewardsNow() {
    /* anonymous block */ {
        // Range: 0x303890 -> 0x30390C
        signed int i; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zRewardsMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00303910 -> 0x00304938
*/
// Range: 0x303910 -> 0x304938
void ParseValuesFromIni(class xIniFile * ini /* r21 */) {
    /* anonymous block */ {
        // Range: 0x303910 -> 0x304938
        signed int i; // r17
        char lower[64]; // r29+0x1A0
        char upper[64]; // r29+0x160
        char normal[64]; // r29+0x120
        char upgradeTok[64]; // r29+0xE0
        char * iniString; // r20
        signed int idx; // r29+0x1EC
        unsigned int count; // r22
        unsigned int values[2]; // r29+0x1E0
        unsigned int i; // r19
        unsigned int sceneID; // r2
        char * start; // r18
        unsigned char foundSpace; // r5
        char strValue[64]; // r29+0xA0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zRewardsMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00304940 -> 0x00304ADC
*/
// Range: 0x304940 -> 0x304ADC
void IncManlinessPoints(unsigned int points /* r2 */, unsigned char set /* r17 */) {
    /* anonymous block */ {
        // Range: 0x304940 -> 0x304ADC
        unsigned int currentRange; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zRewardsMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00304AE0 -> 0x00304B18
*/
// Range: 0x304AE0 -> 0x304B18
unsigned int GetUpgradeRangeUpper() {
    /* anonymous block */ {
        // Range: 0x304AE0 -> 0x304B18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zRewardsMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00304B20 -> 0x00304B50
*/
// Range: 0x304B20 -> 0x304B50
unsigned int GetUpgradeRangeLower() {
    /* anonymous block */ {
        // Range: 0x304B20 -> 0x304B50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zRewardsMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00304B50 -> 0x00304B58
*/
// Range: 0x304B50 -> 0x304B58
// this: r2
void zRewardsMgr::ResetLastComboIndex() {
    /* anonymous block */ {
        // Range: 0x304B50 -> 0x304B58
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zRewardsMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00304B60 -> 0x00304B68
*/
// Range: 0x304B60 -> 0x304B68
// this: r2
unsigned int zRewardsMgr::GetLastComboIndex() {
    /* anonymous block */ {
        // Range: 0x304B60 -> 0x304B68
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zRewardsMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00304B70 -> 0x00304B78
*/
// Range: 0x304B70 -> 0x304B78
// this: r2
void zRewardsMgr::ResetLastComboManlinessPoints() {
    /* anonymous block */ {
        // Range: 0x304B70 -> 0x304B78
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zRewardsMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00304B80 -> 0x00304B88
*/
// Range: 0x304B80 -> 0x304B88
// this: r2
unsigned int zRewardsMgr::GetLastComboManlinessPoints() {
    /* anonymous block */ {
        // Range: 0x304B80 -> 0x304B88
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zRewardsMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00304B90 -> 0x00304DAC
*/
// Range: 0x304B90 -> 0x304DAC
// this: r22
void zRewardsMgr::SpawnRewards(signed int numRewards /* r16 */, class xVec3 & fromPos /* r21 */) {
    /* anonymous block */ {
        // Range: 0x304B90 -> 0x304DAC
        signed int i; // r20
        signed int j; // r19
        signed int numPickupsToSpawn; // r2
        signed int manlinessOfEachType[5]; // r29+0x80
        class zEntPickup * p; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zRewardsMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00304DB0 -> 0x00304F8C
*/
// Range: 0x304DB0 -> 0x304F8C
// this: r18
void zRewardsMgr::Update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x304DB0 -> 0x304F8C
        signed int i; // r17
        signed int j; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zRewardsMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00304F90 -> 0x0030510C
*/
// Range: 0x304F90 -> 0x30510C
// this: r2
unsigned int zRewardsMgr::GetComboManlinessPoints() {
    /* anonymous block */ {
        // Range: 0x304F90 -> 0x30510C
        signed int comboIndex; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zRewardsMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00305110 -> 0x003054A4
*/
// Range: 0x305110 -> 0x3054A4
// this: r2
void zRewardsMgr::GiveReward(enum en_npctyp enemy /* r2 */, class xVec3 & fromPos /* r2 */) {
    /* anonymous block */ {
        // Range: 0x305110 -> 0x3054A4
        signed int i; // r8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zRewardsMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003054B0 -> 0x00305554
*/
// Range: 0x3054B0 -> 0x305554
void zRewardsMgrStartup() {
    /* anonymous block */ {
        // Range: 0x3054B0 -> 0x305554
        signed char @12711; // @ 0x006376D0
        class zRewardsMgr rewardsMgr; // @ 0x00673F70
    }
}


