/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zAnimPackage.cpp
*/
// Range: 0x80195E80 -> 0x80195F10
class Entity * Sext::AnimPackage::Create(class EntityHandleBase * handle /* r29 */, class AnimPackage * asset /* r30 */) {
    // References
    // -> struct {} __vt__12zAnimPackage;
}
// signature: zAnimPackage::Init(Sext::AnimPackage *, unsigned long long)
// Range: 0x80195F10 -> 0x8019639C
void zAnimPackage::Init(class zAnimPackage * this /* r15 */, class AnimPackage * asset /* r16 */) {
    // Local variables
    int count; // r21

    {
        // Range: 0x80195F50 -> 0x80196374
        // Local variables
        int i; // r20

        {
            // Range: 0x80195F50 -> 0x80196374
            {
                // Range: 0x80195F50 -> 0x80195F50
                // Local variables
                unsigned int vfxIdx; // r7

                {
                    // Range: 0x80195F50 -> 0x80195F50
                    // Local variables
                    class xAnimVFX_Effect * effect; // r6
                }
            }
            {
                // Range: 0x80195F50 -> 0x80196374
                // Local variables
                int effectsCount; // r19

                {
                    // Range: 0x80195F50 -> 0x8019635C
                    // Local variables
                    int j; // r18

                    {
                        // Range: 0x80195F50 -> 0x8019635C
                        // Local variables
                        class AnimSoundEntry entry; // r1+0x8
                        class xAnimSoundEffect * effect; // r4
                        class zSoundAssetMultiple * sasset; // r17
                    }
                }
            }
        }
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x801963A0 -> 0x801963D8
void zAnimPackage::Deactivate(class zAnimPackage * this /* r31 */) {
}
// signature: zAnimPackage::GetRawData(ePlayerName, unsigned int, int)
// Range: 0x801963E0 -> 0x80196490
void * zAnimPackage::GetRawData() {
    {
        // Range: 0x801963E4 -> 0x80196488
        // Local variables
        int i; // r0
    }
}
// signature: zAnimPackage::GetSoundData(ePlayerName, unsigned int, xAnimSoundEffect **)
// Range: 0x80196490 -> 0x801964E8
bool zAnimPackage::GetSoundData() {
    {
        // Range: 0x80196490 -> 0x801964E0
        // Local variables
        int i; // r0
    }
}
// signature: zAnimPackage::GetShouldOverwriteSound(ePlayerName, unsigned int)
// Range: 0x801964F0 -> 0x80196540
bool zAnimPackage::GetShouldOverwriteSound() {
    {
        // Range: 0x801964F0 -> 0x80196538
        // Local variables
        int i; // r0
    }
}
// signature: zAnimPackage::GetVFXData(ePlayerName, unsigned int, xAnimVFX_Effect **, int *)
// Range: 0x80196540 -> 0x801965B4
bool zAnimPackage::GetVFXData() {
    {
        // Range: 0x80196540 -> 0x801965A0
        // Local variables
        int i; // r0
    }
}
// signature: zAnimPackage::GetShouldOverwriteVFX(ePlayerName, unsigned int)
// Range: 0x801965C0 -> 0x80196610
bool zAnimPackage::GetShouldOverwriteVFX() {
    {
        // Range: 0x801965C0 -> 0x80196608
        // Local variables
        int i; // r0
    }
}
// signature: zAnimPackage::GetRawDataByIndex(ePlayerName, unsigned int, int)
// Range: 0x80196610 -> 0x801966A4
void * zAnimPackage::GetRawDataByIndex() {
}
// signature: zAnimPackage::GetSoundDataByIndex(ePlayerName, unsigned int, xAnimSoundEffect **)
// Range: 0x801966B0 -> 0x801966F0
bool zAnimPackage::GetSoundDataByIndex() {
}
// signature: zAnimPackage::GetVFXDataByIndex(ePlayerName, unsigned int, xAnimVFX_Effect **, int *)
// Range: 0x801966F0 -> 0x8019674C
bool zAnimPackage::GetVFXDataByIndex() {
}
// signature: zAnimPackage::LoadDefaultAnimSetEffects(xAnimTable *)
// Range: 0x80196750 -> 0x80196818
void zAnimPackage::LoadDefaultAnimSetEffects() {
    {
        // Range: 0x80196750 -> 0x80196814
        // Local variables
        int i; // r11

        {
            // Range: 0x80196758 -> 0x80196814
            // Local variables
            class xAnimState * animState; // r12
        }
    }
}
