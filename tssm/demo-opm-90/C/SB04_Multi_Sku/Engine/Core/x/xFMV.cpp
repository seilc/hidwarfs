/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
static float sFMVVolumeScale; // size: 0x4, address: 0x636FE8
static void (* sxFMVPauseSoundCB)(unsigned char); // size: 0x4, address: 0x636FEC
void DefaultFMVPauseSoundCB(unsigned char); // size: 0x0, address: 0x4C3FF0

/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004C3F80 -> 0x004C3FB8
*/
// Range: 0x4C3F80 -> 0x4C3FB8
signed int xFMVGetBinkCompliantVolume() {
    /* anonymous block */ {
        // Range: 0x4C3F80 -> 0x4C3FB8
        signed int volume; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004C3FC0 -> 0x004C3FEC
*/
// Range: 0x4C3FC0 -> 0x4C3FEC
void (* xFMVSetPauseSoundCB(void (* pauseSoundCB)(unsigned char) /* r2 */))(unsigned char) {
    /* anonymous block */ {
        // Range: 0x4C3FC0 -> 0x4C3FEC
        void (* curCB)(unsigned char); // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004C3FF0 -> 0x004C4000
*/
// Range: 0x4C3FF0 -> 0x4C4000
static void DefaultFMVPauseSoundCB(unsigned char doPause /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4C3FF0 -> 0x4C4000
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004C4000 -> 0x004C4044
*/
// Range: 0x4C4000 -> 0x4C4044
void xFMVPauseSound(unsigned char doPause /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4C4000 -> 0x4C4044
    }
}


