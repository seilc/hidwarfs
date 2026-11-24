/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zPlayerInventory.cpp
*/
unsigned long long SpongeBobModelID; // size: 0x8, address: 0x8075AFC8
unsigned long long PatrickModelID; // size: 0x8, address: 0x8075AFD0
unsigned long long SandyModelID; // size: 0x8, address: 0x8075AFD8
unsigned long long SquidwardModelID; // size: 0x8, address: 0x8075AFE0
unsigned long long MrKrabsModelID; // size: 0x8, address: 0x8075AFE8
unsigned long long GaryModelID; // size: 0x8, address: 0x8075AFF0
bool firstTime; // size: 0x1, address: 0x806C1CE8
// signature: zPlayerInventory::GetSelectedCostume(int)
// Range: 0x80120D40 -> 0x80120D60
int zPlayerInventory::GetSelectedCostume() {
}
// Range: 0x80120D60 -> 0x80120DE8
void zPlayerInventory::SetSelectedCostume(class zPlayerInventory * this /* r29 */, int character /* r30 */, int costume /* r31 */) {
    {
        // Range: 0x80120D68 -> 0x80120DD4
        // Local variables
        class zSBPlayer * sbPlayer; // r0
    }
}
// signature: zPlayerInventory::IsCostumeBought(int, int)
// Range: 0x80120DF0 -> 0x80120E40
bool zPlayerInventory::IsCostumeBought() {
    // References
    // -> class zGameCheats gGameCheatsUnlocked;
}
// Range: 0x80120E40 -> 0x80120EA0
void zPlayerInventory::SetCostumeBought(class zPlayerInventory * this /* r29 */, int character /* r30 */, int costume /* r31 */) {
}
// Range: 0x80120EA0 -> 0x8012169C
void zPlayerInventory::ApplyCostume(class xOGModel & ogModel /* r28 */) {
    // Local variables
    enum eCostumedCharacter character; // r29
    int costumeIndex; // r3
    unsigned long long costumeTextureID; // r27:r30

    // References
    // -> class zGlobals globals;
    // -> class zPlayerInventory inventory;
    // -> unsigned long long GaryModelID;
    // -> unsigned long long MrKrabsModelID;
    // -> unsigned long long SquidwardModelID;
    // -> unsigned long long SandyModelID;
    // -> unsigned long long PatrickModelID;
    // -> unsigned long long SpongeBobModelID;
    // -> bool firstTime;
}
// Range: 0x80121780 -> 0x8012178C
void * zPlayerInventory::zPlayerInventory() {
}
// Range: 0x80121790 -> 0x8012183C
void zPlayerInventory::Init(class zPlayerInventory * this /* r30 */) {
    {
        // Range: 0x801217B4 -> 0x80121808
        // Local variables
        int i; // r9

        {
            // Range: 0x801217BC -> 0x80121808
            // Local variables
            int j; // r10
        }
    }
    {
        // Range: 0x80121808 -> 0x80121828
        // Local variables
        int i; // r31
    }
}
// Range: 0x80121840 -> 0x801218D0
void zPlayerInventory::Save(class zPlayerInventory * this /* r26 */, class xSerial * serial /* r27 */) {
    {
        // Range: 0x80121858 -> 0x80121898
        // Local variables
        int i; // r29

        {
            // Range: 0x80121864 -> 0x80121898
            // Local variables
            int j; // r28
        }
    }
    {
        // Range: 0x80121898 -> 0x801218BC
        // Local variables
        int i; // r28
    }
}
// Range: 0x801218D0 -> 0x80121970
void zPlayerInventory::Load(class zPlayerInventory * this /* r26 */, class xSerial * serial /* r27 */) {
    {
        // Range: 0x801218E8 -> 0x80121924
        // Local variables
        int i; // r29

        {
            // Range: 0x801218F4 -> 0x80121924
            // Local variables
            int j; // r28
        }
    }
    {
        // Range: 0x80121924 -> 0x8012195C
        // Local variables
        int i; // r28
    }
}
