/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00454F60 -> 0x00455040
*/
// Range: 0x454F60 -> 0x455040
void xSndMgrStopChildren(class xEnt * pParentEnt /* r18 */) {
    /* anonymous block */ {
        // Range: 0x454F60 -> 0x455040
        unsigned int i; // r17
        class xSndVoiceInfo * vp; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00455040 -> 0x00455048
*/
// Range: 0x455040 -> 0x455048
void xSndMgrStartStereo(enum iSndHandle hSnd00 /* r2 */, enum iSndHandle hSnd01 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x455040 -> 0x455048
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00455050 -> 0x00455104
*/
// Range: 0x455050 -> 0x455104
void xSndMgrSetPitch(enum iSndHandle hSound /* r18 */, float fPitch /* r20 */) {
    /* anonymous block */ {
        // Range: 0x455050 -> 0x455104
        signed int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00455110 -> 0x004551C4
*/
// Range: 0x455110 -> 0x4551C4
void xSndMgrSetVolume(enum iSndHandle hSound /* r18 */, float fVolume /* r20 */) {
    /* anonymous block */ {
        // Range: 0x455110 -> 0x4551C4
        signed int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004551D0 -> 0x0045530C
*/
// Range: 0x4551D0 -> 0x45530C
void xSndMgrStop(enum iSndHandle & hInHandle /* r17 */) {
    /* anonymous block */ {
        // Range: 0x4551D0 -> 0x45530C
        signed int i; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00455310 -> 0x004553D8
*/
// Range: 0x455310 -> 0x4553D8
void xSndMgrPause(enum iSndHandle hSound /* r20 */, unsigned char bPause /* r19 */) {
    /* anonymous block */ {
        // Range: 0x455310 -> 0x4553D8
        signed int i; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004553E0 -> 0x00455410
*/
// Range: 0x4553E0 -> 0x455410
unsigned int xSndMgrIsReady(enum iSndHandle hSound /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4553E0 -> 0x455410
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00455410 -> 0x00455468
*/
// Range: 0x455410 -> 0x455468
unsigned char xSndMgrIsPlaying(enum iSndHandle hSound /* r2 */) {
    /* anonymous block */ {
        // Range: 0x455410 -> 0x455468
        signed int i; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00455470 -> 0x004554E8
*/
// Range: 0x455470 -> 0x4554E8
unsigned int xSndMgrGetSoundId(enum iSndHandle hSound /* r2 */) {
    /* anonymous block */ {
        // Range: 0x455470 -> 0x4554E8
        signed int i; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004554F0 -> 0x00455D84
*/
// Range: 0x4554F0 -> 0x455D84
enum iSndHandle xSndMgrPlay(enum iSndGroupHandle hSoundToPlay /* r20 */, unsigned int uFlags /* r17 */, class xVec3 * pPos_WS /* r22 */, class xVec3 * pVel /* r23 */, class xEnt * pParentEnt /* r19 */, float * pfOverrideVolume /* r30 */, float * pfOverridePitch /* r29+0xBC */) {
    /* anonymous block */ {
        // Range: 0x4554F0 -> 0x455D84
        unsigned int uInfoIndex; // r2
        class xSndGroupInfo * pSndInfo; // r2
        unsigned int iFlags; // r18
        class iSndFileInfo * ip; // r2
        class xSndVoiceInfo * vp; // r17
        unsigned char bOKtoPlay; // r3
        unsigned char bPlaying; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00455D90 -> 0x00455DBC
*/
// Range: 0x455D90 -> 0x455DBC
unsigned char xSndMgrVoiceAvailable(enum exVoiceType voiceType /* r2 */, unsigned int priority /* r2 */) {
    /* anonymous block */ {
        // Range: 0x455D90 -> 0x455DBC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00455DC0 -> 0x00455E18
*/
// Range: 0x455DC0 -> 0x455E18
unsigned char xSndMgrIsPlaying(enum iSndGroupHandle hSoundGroup /* r2 */) {
    /* anonymous block */ {
        // Range: 0x455DC0 -> 0x455E18
        signed int i; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00455E20 -> 0x00455E9C
*/
// Range: 0x455E20 -> 0x455E9C
enum iSndGroupHandle xSndMgrGetSoundGroup(unsigned int uSoundGroupNameHash /* r17 */) {
    /* anonymous block */ {
        // Range: 0x455E20 -> 0x455E9C
        enum iSndGroupHandle retHandle; // r16
        class xSndGroup * pSndGroup; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00455EA0 -> 0x00455ED0
*/
// Range: 0x455EA0 -> 0x455ED0
unsigned int xSndMgrGetSoundId(enum iSndGroupHandle hSound /* r2 */, unsigned int uIndexOfSound /* r2 */) {
    /* anonymous block */ {
        // Range: 0x455EA0 -> 0x455ED0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00455ED0 -> 0x00455EF0
*/
// Range: 0x455ED0 -> 0x455EF0
unsigned char xSndMgrGetSoundCount(enum iSndGroupHandle hSound /* r2 */) {
    /* anonymous block */ {
        // Range: 0x455ED0 -> 0x455EF0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00455EF0 -> 0x00455F84
*/
// Range: 0x455EF0 -> 0x455F84
float xSndMgrGetDampedVolume(signed short eSoundCategory /* r2 */) {
    /* anonymous block */ {
        // Range: 0x455EF0 -> 0x455F84
        float fRealVolume; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00455F90 -> 0x00455FD4
*/
// Range: 0x455F90 -> 0x455FD4
float xSndMgrGetUserVolume(signed short eSoundCategory /* r2 */) {
    /* anonymous block */ {
        // Range: 0x455F90 -> 0x455FD4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00455FE0 -> 0x00456050
*/
// Range: 0x455FE0 -> 0x456050
void xSndMgrSetUserVolume(signed short eSoundCategory /* r2 */, float fVolume /* r29 */) {
    /* anonymous block */ {
        // Range: 0x455FE0 -> 0x456050
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00456050 -> 0x00456484
*/
// Range: 0x456050 -> 0x456484
void xSndMgrPauseSounds(signed short eSoundCategory /* r2 */, unsigned char bPaused /* r16 */, unsigned char bPauseFutureSoundsOfThisType /* r21 */) {
    /* anonymous block */ {
        // Range: 0x456050 -> 0x456484
        signed int i; // r20
        signed int i; // r20
        signed int i; // r20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00456490 -> 0x00456740
*/
// Range: 0x456490 -> 0x456740
void xSndMgrStopSounds(signed short eSoundCategory /* r2 */, unsigned char bSkipPaused /* r16 */) {
    /* anonymous block */ {
        // Range: 0x456490 -> 0x456740
        signed int i; // r19
        signed int i; // r19
        signed int i; // r20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00456740 -> 0x004567B4
*/
// Range: 0x456740 -> 0x4567B4
void xSndMgrSceneExit() {
    /* anonymous block */ {
        // Range: 0x456740 -> 0x4567B4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004567C0 -> 0x00456888
*/
// Range: 0x4567C0 -> 0x456888
void xSndMgrUpdate() {
    /* anonymous block */ {
        // Range: 0x4567C0 -> 0x456888
        unsigned int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00456890 -> 0x00456A68
*/
// Range: 0x456890 -> 0x456A68
void xSndMgrSceneInit() {
    /* anonymous block */ {
        // Range: 0x456890 -> 0x456A68
        float musicFader; // r29+0x10
        signed int i; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00456A70 -> 0x00456C78
*/
// Range: 0x456A70 -> 0x456C78
unsigned char xSndMgr_SetInaudible(class xSndVoiceInfo * pVoice /* r17 */) {
    /* anonymous block */ {
        // Range: 0x456A70 -> 0x456C78
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00456C80 -> 0x00457414
*/
// Range: 0x456C80 -> 0x457414
unsigned char xSndMgr_UpdateVoicePosition(class xSndVoiceInfo * pVoice /* r17 */) {
    /* anonymous block */ {
        // Range: 0x456C80 -> 0x457414
        class xVec3 vel; // r29+0xA0
        class xVec3 soundDir; // r29+0x90
        float newDoppler; // r29+0xB0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00457420 -> 0x004575F0
*/
// Range: 0x457420 -> 0x4575F0
void xSndMgr_UpdateListenerPosition() {
    /* anonymous block */ {
        // Range: 0x457420 -> 0x4575F0
        class xMat4x3 * pMat; // r2
        class xMat4x3 * pMat; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004575F0 -> 0x004577E4
*/
// Range: 0x4575F0 -> 0x4577E4
void xSndMgrProcessSoundPosition(class xVec3 * pActual /* r2 */, class xVec3 * pProcessed /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4575F0 -> 0x4577E4
        class xVec3 playerDelta; // r29+0x70
        float inwardShift; // r29+0x80
        float factor; // r29+0x80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004577F0 -> 0x004577F8
*/
// Range: 0x4577F0 -> 0x4577F8
enum xSndEffect xSndMgrGetEffect() {
    /* anonymous block */ {
        // Range: 0x4577F0 -> 0x4577F8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00457800 -> 0x00457824
*/
// Range: 0x457800 -> 0x457824
void xSndMgrSetEffect(enum xSndEffect Effect /* r2 */) {
    /* anonymous block */ {
        // Range: 0x457800 -> 0x457824
        float cEffectDelay; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00457830 -> 0x0045783C
*/
// Range: 0x457830 -> 0x45783C
void xSndMgrSelectListenerMode(enum xSndListener Mode /* r2 */) {
    /* anonymous block */ {
        // Range: 0x457830 -> 0x45783C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00457840 -> 0x004579A0
*/
// Range: 0x457840 -> 0x4579A0
void xSndMgrInit() {
    /* anonymous block */ {
        // Range: 0x457840 -> 0x4579A0
        class xSndVoiceInfo * voice; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004579A0 -> 0x00457B14
*/
// Range: 0x4579A0 -> 0x457B14
class xSndGroup * xSndMgr_AllocGroup(unsigned char nSoundAssets /* r17 */) {
    /* anonymous block */ {
        // Range: 0x4579A0 -> 0x457B14
        unsigned int datasize; // r2
        void * pAllocated; // r2
        class xSndGroup * pRetGroup; // r2
        unsigned int i; // r7
    }
}


