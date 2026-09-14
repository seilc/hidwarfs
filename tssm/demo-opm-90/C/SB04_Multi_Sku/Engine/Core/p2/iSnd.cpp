/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A0D10 -> 0x004A0D18
*/
// Range: 0x4A0D10 -> 0x4A0D18
void iSndSetMode() {
    /* anonymous block */ {
        // Range: 0x4A0D10 -> 0x4A0D18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A0D20 -> 0x004A0D28
*/
// Range: 0x4A0D20 -> 0x4A0D28
void iSndSetExternalCallback(void (* callback)(enum iSndHandle, unsigned char) /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4A0D20 -> 0x4A0D28
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A0D30 -> 0x004A1024
*/
// Range: 0x4A0D30 -> 0x4A1024
void iSndSetPitch(class xSndVoiceInfo * vp /* r17 */) {
    /* anonymous block */ {
        // Range: 0x4A0D30 -> 0x4A1024
        signed int voiceID; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A1030 -> 0x004A11B8
*/
// Range: 0x4A1030 -> 0x4A11B8
void iSndSetVol(class xSndVoiceInfo * vp /* r16 */, float vol /* r20 */) {
    /* anonymous block */ {
        // Range: 0x4A1030 -> 0x4A11B8
        float fScaledVol; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A11C0 -> 0x004A1264
*/
// Range: 0x4A11C0 -> 0x4A1264
void iSndStop(class xSndVoiceInfo * vp /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4A11C0 -> 0x4A1264
        signed int voiceID; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A1270 -> 0x004A12C8
*/
// Range: 0x4A1270 -> 0x4A12C8
void iSndPause(class xSndVoiceInfo * vp /* r2 */, unsigned int pause /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4A1270 -> 0x4A12C8
        signed int voiceID; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A12D0 -> 0x004A14E0
*/
// Range: 0x4A12D0 -> 0x4A14E0
class xSndVoiceInfo * iSndGetFreeVoiceInfo(unsigned int priority /* r2 */, unsigned int flags /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4A12D0 -> 0x4A14E0
        unsigned int i; // r7
        unsigned int vlo; // r2
        unsigned int vhi; // r5
        unsigned int best; // r6
        unsigned int bestpri; // r3
        signed int bestvol; // r2
        class xSndVoiceInfo * vp; // r13
        signed int volR; // r2
        signed int L; // r2
        signed int R; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A14E0 -> 0x004A15D8
*/
// Range: 0x4A14E0 -> 0x4A15D8
void iSndStartStereo(enum iSndHandle id1 /* r2 */, enum iSndHandle id2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4A14E0 -> 0x4A15D8
        signed int v1; // r17
        signed int v2; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A15E0 -> 0x004A165C
*/
// Range: 0x4A15E0 -> 0x4A165C
unsigned char iSndIsReady(enum iSndHandle id /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4A15E0 -> 0x4A165C
        signed int v; // r7
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A1660 -> 0x004A1A7C
*/
// Range: 0x4A1660 -> 0x4A1A7C
unsigned char iSndPlay(class xSndVoiceInfo * vp /* r19 */) {
    /* anonymous block */ {
        // Range: 0x4A1660 -> 0x4A1A7C
        class iSndVol nvol; // r29+0x7C
        unsigned int voice; // r18
        signed int flags; // r2
        class iSndFileInfo * file; // r2
        class iSndFileInfo * file; // r2
        unsigned int offset; // r2
        unsigned int track; // r8
        unsigned int numTracks; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A1A80 -> 0x004A1E9C
*/
// Range: 0x4A1A80 -> 0x4A1E9C
void iSndUpdate() {
    /* anonymous block */ {
        // Range: 0x4A1A80 -> 0x4A1E9C
        signed int i; // r9
        unsigned char active; // r2
        unsigned char bDialogActive; // r20
        signed int i; // r19
        class iSndVol nvol; // r29+0x7C
        signed int j; // r18
        signed int testBuffer; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A1EA0 -> 0x004A23DC
*/
// Range: 0x4A1EA0 -> 0x4A23DC
class iSndVol iSndCalcVol(class xSndVoiceInfo * vp /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4A1EA0 -> 0x4A23DC
        float volL; // r21
        float volR; // r20
        float xzDeltaSquared; // r3
        float fAudioDistance; // r22
        float fDolbyLt; // r21
        float fDolbyRt; // r8
        float fCosListenerSoundDirAngleXZ; // r29+0x50
        float fListenerSoundDirAngleXZ; // r5
        float fHalfListenerSoundDirAngleMinus45XZ; // r21
        float fHalfListenerSoundDirAngleMinus45XZ; // r29+0x50
        float volscale; // r20
        float fadeRange; // r29+0x50
        float fCategoryFader; // r29+0x50
        class iSndVol ret; // r29+0x4C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A23E0 -> 0x004A2454
*/
// Range: 0x4A23E0 -> 0x4A2454
void iSndSetEnvironmentalEffect(signed int effectType /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4A23E0 -> 0x4A2454
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A2460 -> 0x004A24A0
*/
// Range: 0x4A2460 -> 0x4A24A0
void iSndInitSceneLoaded() {
    /* anonymous block */ {
        // Range: 0x4A2460 -> 0x4A24A0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A24A0 -> 0x004A2780
*/
// Range: 0x4A24A0 -> 0x4A2780
void iSndLoadFasterer() {
    /* anonymous block */ {
        // Range: 0x4A24A0 -> 0x4A2780
        signed int request; // r22
        signed int index; // r23
        unsigned int size; // r29+0xFC
        class SndInfo * sndInfo; // r2
        class VAGheader * vagIterator; // r18
        class PKRAssetTOCInfo xinfo; // r29+0xE0
        char * hipname; // r2
        signed int fileIndex; // r17
        signed int startSPUAddress; // r30
        unsigned int totalToRead; // r16
        signed int i; // r20
        char * pszAssetName; // r2
        unsigned char bLooping; // r2
        class iSndFileInfo * file; // r2
        signed int i; // r20
        class PKRAssetTOCInfo xinfo; // r29+0xC0
        char * pszAssetName; // r2
        unsigned char bLooping; // r2
        class iSndFileInfo * file; // r2
        class PKRAssetTOCInfo xinfo; // r29+0xA0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A2780 -> 0x004A27A8
*/
// Range: 0x4A2780 -> 0x4A27A8
void iSndInit() {
    /* anonymous block */ {
        // Range: 0x4A2780 -> 0x4A27A8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A27B0 -> 0x004A27B8
*/
// Range: 0x4A27B0 -> 0x4A27B8
void iSndSuspendCD() {
    /* anonymous block */ {
        // Range: 0x4A27B0 -> 0x4A27B8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A27C0 -> 0x004A281C
*/
// Range: 0x4A27C0 -> 0x4A281C
class iSndFileInfo * iSndLookup(unsigned int id /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4A27C0 -> 0x4A281C
        signed int i; // r6
    }
}


