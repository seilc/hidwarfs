/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GKernel\GUTF8Util.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x805D4A40 -> 0x805D5584
*/
// Range: 0x805D4A40 -> 0x805D4AD4
long GUTF8Util::GetLength(char * buf /* r29 */, long buflen /* r30 */) {
    // Local variables
    char * p; // r1+0x8
    long length; // r31
}
// Range: 0x805D4AE0 -> 0x805D4BA4
long GUTF8Util::GetByteIndex(long index /* r29 */, char * putf8str /* r30 */, long length /* r31 */) {
    // Local variables
    char * buf; // r1+0x8

    {
        // Range: 0x805D4B14 -> 0x805D4B38
        // Local variables
        unsigned long c; // r0
    }
    {
        // Range: 0x805D4B58 -> 0x805D4B78
        // Local variables
        unsigned long c; // r0
    }
}
// signature: GUTF8Util::GetEncodeCharSize(unsigned long)
// Range: 0x805D4BB0 -> 0x805D4C30
int GUTF8Util::GetEncodeCharSize() {
}
// signature: GUTF8Util::DecodeNextChar(const char **)
// Range: 0x805D4C30 -> 0x805D50F4
unsigned long GUTF8Util::DecodeNextChar() {
    // Local variables
    unsigned long uc; // r6
    char c; // r6
}
// signature: GUTF8Util::EncodeChar(char *, long *, unsigned long)
// Range: 0x805D5100 -> 0x805D5350
void GUTF8Util::EncodeChar() {
}
// signature: GUTF8Util::GetEncodeStringSize(const wchar_t *, long)
// Range: 0x805D5350 -> 0x805D5404
long GUTF8Util::GetEncodeStringSize(long length /* r28 */) {
    // Local variables
    long len; // r30

    {
        // Range: 0x805D5380 -> 0x805D53A8
        // Local variables
        int i; // r29
    }
}
// signature: GUTF8Util::EncodeString(char *, const wchar_t *, long)
// Range: 0x805D5410 -> 0x805D54CC
void GUTF8Util::EncodeString(char * pbuff /* r28 */, long length /* r29 */) {
    // Local variables
    long ofs; // r1+0x8

    {
        // Range: 0x805D5448 -> 0x805D546C
        // Local variables
        int i; // r30
    }
}
// Range: 0x805D54D0 -> 0x805D5584
void GUTF8Util::DecodeString(wchar_t * pbuff /* r29 */, char * putf8str /* r1+0x8 */, long length /* r30 */) {
    {
        // Range: 0x805D54FC -> 0x805D5524
        // Local variables
        unsigned long ch; // r3
    }
    {
        // Range: 0x805D5528 -> 0x805D5558
        // Local variables
        unsigned long ch; // r3
    }
}
