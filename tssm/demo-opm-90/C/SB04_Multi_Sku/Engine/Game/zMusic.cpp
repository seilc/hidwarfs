/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zMusic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BF140 -> 0x002BF14C
*/
// Range: 0x2BF140 -> 0x2BF14C
float zMusicGetCurrentVolume() {
    /* anonymous block */ {
        // Range: 0x2BF140 -> 0x2BF14C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zMusic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BF150 -> 0x002BF1A0
*/
// Range: 0x2BF150 -> 0x2BF1A0
void zMusicTempSongStopEvent() {
    /* anonymous block */ {
        // Range: 0x2BF150 -> 0x2BF1A0
        unsigned int i; // r8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zMusic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BF1A0 -> 0x002BF310
*/
// Range: 0x2BF1A0 -> 0x2BF310
void zMusicTempSongEvent(float * toParam /* r17 */, unsigned int toParamWidgetID /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2BF1A0 -> 0x2BF310
        float fFadeVolTime; // r23
        float fNewVolTime; // r22
        float fPlayTime; // r21
        float fNewVolume; // r20
        unsigned int i; // r18
        unsigned int nSlot; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zMusic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BF310 -> 0x002BF4D0
*/
// Range: 0x2BF310 -> 0x2BF4D0
void zMusicNewSongEvent(float * toParam /* r16 */, unsigned int toParamWidgetID /* r18 */) {
    /* anonymous block */ {
        // Range: 0x2BF310 -> 0x2BF4D0
        float fFadeVolTime; // r23
        float fNewVolTime; // r22
        float fFadeVolume; // r21
        float fNewVolume; // r20
        unsigned int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zMusic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BF4D0 -> 0x002BF838
*/
// Range: 0x2BF4D0 -> 0x2BF838
static unsigned int _zMusicCrossFade(float fNewVolume /* r21 */, float fNewVolTime /* r20 */, unsigned int newTrack /* r18 */, enum eTrackReason eReason /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2BF4D0 -> 0x2BF838
        unsigned int i; // r19
        unsigned int nFadeInSlot; // r16
        unsigned int j; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zMusic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BF840 -> 0x002BF880
*/
// Range: 0x2BF840 -> 0x2BF880
void zMusicSetVolume(float vol /* r29+0x10 */, float delay /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x2BF840 -> 0x2BF880
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zMusic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BF880 -> 0x002BF90C
*/
// Range: 0x2BF880 -> 0x2BF90C
void zMusicUnpause() {
    /* anonymous block */ {
        // Range: 0x2BF880 -> 0x2BF90C
        unsigned int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zMusic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BF910 -> 0x002BF99C
*/
// Range: 0x2BF910 -> 0x2BF99C
void zMusicPause() {
    /* anonymous block */ {
        // Range: 0x2BF910 -> 0x2BF99C
        unsigned int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zMusic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BF9A0 -> 0x002BFA14
*/
// Range: 0x2BF9A0 -> 0x2BFA14
void zMusicKill() {
    /* anonymous block */ {
        // Range: 0x2BF9A0 -> 0x2BFA14
        unsigned int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zMusic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BFA20 -> 0x002BFE74
*/
// Range: 0x2BFA20 -> 0x2BFE74
void zMusicUpdate() {
    /* anonymous block */ {
        // Range: 0x2BFA20 -> 0x2BFE74
        float fNowTime; // r20
        unsigned int i; // r17
        float fDeltaTime; // r29+0x50
        float fHowLongPlaying; // r29+0x50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zMusic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BFE80 -> 0x002BFF68
*/
// Range: 0x2BFE80 -> 0x2BFF68
void zMusicInit() {
    /* anonymous block */ {
        // Range: 0x2BFE80 -> 0x2BFF68
        enum iSndGroupHandle hMusicDefGroup; // r2
        unsigned char uSoundCount; // r2
    }
}


