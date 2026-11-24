/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zPlayerInventory.cpp
*/
static unsigned int gWorldTags[6]; // size: 0x18, address: 0x806D0040
class ColonyItemRecord colonyRecords[6]; // size: 0x30, address: 0x80798660
// Range: 0x80179AE0 -> 0x80179CBC
void zPlayerInventory::ParseINI(class xIniFile * ini /* r29 */) {
    // Local variables
    char * iniString; // r3
    int idx; // r1+0x8

    {
        // Range: 0x80179B18 -> 0x80179C9C
        // Local variables
        int worldIndex; // r24
        unsigned int sceneTag; // r3
        char * tok; // r0
        char localStr[1024]; // r1+0x10

        {
            // Range: 0x80179B20 -> 0x80179B20
            // Local variables
            int i; // r0
        }
    }

    // References
    // -> static unsigned int gWorldTags[6];
    // -> class __locale _current_locale;
    // -> class ColonyItemRecord colonyRecords[6];
}
// Range: 0x80179CC0 -> 0x80179CD0
void zPlayerInventory::CollectMinigameItem() {
}
// signature: zPlayerInventory::IsMissionUnlocked(unsigned int)
// Range: 0x80179CD0 -> 0x80179D90
bool zPlayerInventory::IsMissionUnlocked() {
    // References
    // -> class ColonyItemRecord colonyRecords[6];
    // -> static unsigned int gWorldTags[6];
}
// Range: 0x80179D90 -> 0x80179DC0
int zPlayerInventory::GetAllCharmsCollected() {
    // Local variables
    int toReturn; // r5
}
// Range: 0x80179DC0 -> 0x80179DF8
int zPlayerInventory::GetAllCharmsTotal() {
    // Local variables
    int toReturn; // r4

    // References
    // -> class ColonyItemRecord colonyRecords[6];
}
// Range: 0x80179E00 -> 0x80179E88
void zPlayerInventory::Save(class zPlayerInventory * this /* r28 */, class xSerial * serial /* r29 */) {
    {
        // Range: 0x80179E14 -> 0x80179E2C
        // Local variables
        int i; // r30
    }
    {
        // Range: 0x80179E48 -> 0x80179E4C
        // Local variables
        int ii; // r30
    }
}
// Range: 0x80179E90 -> 0x80179F18
void zPlayerInventory::Load(class zPlayerInventory * this /* r28 */, class xSerial * serial /* r29 */) {
    {
        // Range: 0x80179EA4 -> 0x80179EBC
        // Local variables
        int i; // r30
    }
    {
        // Range: 0x80179ED8 -> 0x80179EDC
        // Local variables
        int ii; // r30
    }
}
