/*
    Compile unit: C:\SB\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
static char * gSndWhere_str[23]; // size: 0x5C, address: 0x0
static enum eSndWhereEnum gSndWhere; // size: 0x4, address: 0x50ED60
static class iSndFileInfo eeFiles[512]; // size: 0x3800, address: 0x5389D0
static signed int eeFileCount; // size: 0x4, address: 0x50ED64
static unsigned int currentStatus[2]; // size: 0x8, address: 0x50ED68
static void (* externalCallback)(unsigned int, unsigned char); // size: 0x4, address: 0x50ED70
static unsigned int currentSPUAddress; // size: 0x4, address: 0x50ED74
class xSndGlobals gSnd; // size: 0x13A0, address: 0x5B6D00
// total size: 0x1C
class iSndFileInfo {
    // Members
public:
    unsigned int ID; // offset 0x0, size 0x4
    unsigned int assetID; // offset 0x4, size 0x4
    unsigned short sample_rate; // offset 0x8, size 0x2
    unsigned char is_streamed; // offset 0xA, size 0x1
    union { // inferred
        // total size: 0x8
        class /* @class */ {
            // Members
        public:
            unsigned int address; // offset 0x0, size 0x4
            unsigned int size; // offset 0x4, size 0x4
        } nonstream; // offset 0xC, size 0x8
        // total size: 0x10
        class /* @class */ {
            // Members
        public:
            signed int file_index; // offset 0x0, size 0x4
            unsigned int lsn; // offset 0x4, size 0x4
            unsigned int data_size; // offset 0x8, size 0x4
            unsigned short stream_interleave_size; // offset 0xC, size 0x2
            unsigned short stream_interleave_count; // offset 0xE, size 0x2
        } stream; // offset 0xC, size 0x10
    };
};
// total size: 0x64
class xSndVoiceInfo {
    // Members
public:
    unsigned int assetID; // offset 0x0, size 0x4
    unsigned int sndID; // offset 0x4, size 0x4
    unsigned int parentID; // offset 0x8, size 0x4
    class xVec3 * parentPos; // offset 0xC, size 0x4
    signed int internalID; // offset 0x10, size 0x4
    unsigned int flags; // offset 0x14, size 0x4
    unsigned short pad; // offset 0x18, size 0x2
    unsigned short priority; // offset 0x1A, size 0x2
    float vol; // offset 0x1C, size 0x4
    float pitch; // offset 0x20, size 0x4
    unsigned int sample_rate; // offset 0x24, size 0x4
    unsigned int deadct; // offset 0x28, size 0x4
    enum sound_category category; // offset 0x2C, size 0x4
    class xVec3 actualPos; // offset 0x30, size 0xC
    class xVec3 playPos; // offset 0x3C, size 0xC
    float innerRadius2; // offset 0x48, size 0x4
    float outerRadius2; // offset 0x4C, size 0x4
    unsigned int lock_owner; // offset 0x50, size 0x4
    class iSndInfo ps; // offset 0x54, size 0x10
};
enum sound_category {
    SND_CAT_INVALID = -1,
    SND_CAT_GAME = 0,
    SND_CAT_DIALOG = 1,
    SND_CAT_MUSIC = 2,
    SND_CAT_CUTSCENE = 3,
    SND_CAT_UI = 4,
    SND_CAT_NUM_CATEGORIES = 5,
};
// total size: 0x8
class /* @class */ {
    // Members
public:
    unsigned int address; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};
// total size: 0xC
class xVec3 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x10
class /* @class */ {
    // Members
public:
    signed int file_index; // offset 0x0, size 0x4
    unsigned int lsn; // offset 0x4, size 0x4
    unsigned int data_size; // offset 0x8, size 0x4
    unsigned short stream_interleave_size; // offset 0xC, size 0x2
    unsigned short stream_interleave_count; // offset 0xE, size 0x2
};
// total size: 0x40
class xMat4x3 : public xMat3x3 {
    // Members
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x18
class st_PKR_ASSET_TOCINFO {
    // Members
public:
    unsigned int aid; // offset 0x0, size 0x4
    class st_PACKER_ASSETTYPE * typeref; // offset 0x4, size 0x4
    unsigned int sector; // offset 0x8, size 0x4
    unsigned int plus_offset; // offset 0xC, size 0x4
    unsigned int size; // offset 0x10, size 0x4
    void * mempos; // offset 0x14, size 0x4
};
// total size: 0x28
class st_PACKER_ASSETTYPE {
    // Members
public:
    unsigned int typetag; // offset 0x0, size 0x4
    unsigned int tflags; // offset 0x4, size 0x4
    signed int typalign; // offset 0x8, size 0x4
    void * (* readXForm)(void *, unsigned int, void *, unsigned int, unsigned int *); // offset 0xC, size 0x4
    void * (* writeXForm)(void *, unsigned int, void *, void *, unsigned int, unsigned int *); // offset 0x10, size 0x4
    signed int (* assetLoaded)(void *, unsigned int, void *, signed int); // offset 0x14, size 0x4
    void * (* makeData)(void *, unsigned int, void *, signed int *, signed int *); // offset 0x18, size 0x4
    void (* cleanup)(void *, unsigned int, void *); // offset 0x1C, size 0x4
    void (* assetUnloaded)(void *, unsigned int); // offset 0x20, size 0x4
    void (* writePeek)(void *, unsigned int, void *, char *); // offset 0x24, size 0x4
};
// total size: 0x38
class SndInfo {
    // Members
public:
    unsigned int num_effects; // offset 0x0, size 0x4
    unsigned int num_streams; // offset 0x4, size 0x4
    class VAGheader vagHeaders[1]; // offset 0x8, size 0x30
};
// total size: 0x10
class iSndInfo {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    class iSndVol vol; // offset 0x4, size 0x4
    unsigned int pitch; // offset 0x8, size 0x4
    signed int lastStreamBuffer; // offset 0xC, size 0x4
};
// total size: 0x30
class VAGheader {
    // Members
public:
    char id[4]; // offset 0x0, size 0x4
    unsigned int version; // offset 0x4, size 0x4
    unsigned int assetID; // offset 0x8, size 0x4
    unsigned int data_size; // offset 0xC, size 0x4
    unsigned int frequency; // offset 0x10, size 0x4
    unsigned int streamInterleaveSize; // offset 0x14, size 0x4
    unsigned int streamInterleaveCount; // offset 0x18, size 0x4
    unsigned int reserved2[1]; // offset 0x1C, size 0x4
    char name[16]; // offset 0x20, size 0x10
};
enum sound_listener_game_mode {
    SND_LISTENER_MODE_PLAYER = 0,
    SND_LISTENER_MODE_CAMERA = 1,
};
// total size: 0x30
class xMat3x3 {
    // Members
public:
    class xVec3 right; // offset 0x0, size 0xC
    signed int flags; // offset 0xC, size 0x4
    class xVec3 up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class xVec3 at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
};
enum eSndWhereEnum {
    eSndWhere_NA = 0,
    eSndWhere_iSndSuspendCD = 1,
    eSndWhere_iSndLoadFasterer = 2,
    eSndWhere_UpdateVoiceStatus = 3,
    eSndWhere_UpdateRecycleVoices = 4,
    eSndWhere_UpdateDebugVoices = 5,
    eSndWhere_Update3DSounds = 6,
    eSndWhere_UpdateFireCallbacks = 7,
    eSndWhere_UpdateFlushAsync = 8,
    eSndWhere_DelayFrame = 9,
    eSndWhere_PlayStart = 10,
    eSndWhere_PlayTrigger = 11,
    eSndWhere_PlaySndAsync = 12,
    eSndWhere_PlaySndDone = 13,
    eSndWhere_PlayExternalAsync = 14,
    eSndWhere_PlayExternalWait = 15,
    eSndWhere_PlayExternalDone = 16,
    eSndWhere_PlayStream = 17,
    eSndWhere_PlayStreamAsync = 18,
    eSndWhere_PlayStreamDone = 19,
    eSndWhere_StartStereo = 20,
    eSndWhere_FindFreeVoice = 21,
    eSndWhere_Pause = 22,
};
// total size: 0x4
class iSndVol {
    // Members
public:
    signed short volL; // offset 0x0, size 0x2
    signed short volR; // offset 0x2, size 0x2
};
// total size: 0x13A0
class xSndGlobals {
    // Members
public:
    unsigned int stereo; // offset 0x0, size 0x4
    unsigned int SndCount; // offset 0x4, size 0x4
    float categoryVolFader[5]; // offset 0x8, size 0x14
    class xSndVoiceInfo voice[48]; // offset 0x1C, size 0x12C0
    class xMat4x3 listenerMat[2]; // offset 0x12E0, size 0x80
    enum sound_listener_game_mode listenerMode; // offset 0x1360, size 0x4
    unsigned int suspendCD; // offset 0x1364, size 0x4
    class xVec3 right; // offset 0x1368, size 0xC
    class xVec3 up; // offset 0x1374, size 0xC
    class xVec3 at; // offset 0x1380, size 0xC
    class xVec3 pos; // offset 0x138C, size 0xC
};

/*
    Compile unit: C:\SB\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B78B0 -> 0x001B78BC
*/
// Range: 0x1B78B0 -> 0x1B78BC
void iSndStereo(unsigned int stereo /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B78B0 -> 0x1B78BC
    }
}


/*
    Compile unit: C:\SB\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B78C0 -> 0x001B78C8
*/
// Range: 0x1B78C0 -> 0x1B78C8
void iSndSetExternalCallback(void (* callback)(unsigned int, unsigned char) /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B78C0 -> 0x1B78C8
    }
}


/*
    Compile unit: C:\SB\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B78D0 -> 0x001B7988
*/
// Range: 0x1B78D0 -> 0x1B7988
void iSndLoadExternalData(unsigned int snd /* r20 */, void * data /* r19 */, signed int forceBuffer /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1B78D0 -> 0x1B7988
        class xSndVoiceInfo * vp; // r17
        signed int i; // r16
    }
}


/*
    Compile unit: C:\SB\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B7990 -> 0x001B7A74
*/
// Range: 0x1B7990 -> 0x1B7A74
void iSndWaitForDeadSounds() {
    /* anonymous block */ {
        // Range: 0x1B7990 -> 0x1B7A74
        signed int i; // r19
        signed int numdelay; // r18
        unsigned long zombies; // r17
        class xSndVoiceInfo * vp; // r16
    }
}


/*
    Compile unit: C:\SB\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B7A80 -> 0x001B7BCC
*/
// Range: 0x1B7A80 -> 0x1B7BCC
void iSndSetPitch(unsigned int snd /* r2 */, float pitch /* r29+0x30 */) {
    /* anonymous block */ {
        // Range: 0x1B7A80 -> 0x1B7BCC
        signed int i; // r16
    }
}


/*
    Compile unit: C:\SB\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B7BD0 -> 0x001B7C60
*/
// Range: 0x1B7BD0 -> 0x1B7C60
float iSndGetVol(unsigned int snd /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B7BD0 -> 0x1B7C60
        class xSndVoiceInfo * vp; // r5
        signed int i; // r3
    }
}


/*
    Compile unit: C:\SB\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B7C60 -> 0x001B7E4C
*/
// Range: 0x1B7C60 -> 0x1B7E4C
void iSndSetVol(unsigned int snd /* r20 */, float vol /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1B7C60 -> 0x1B7E4C
        class xSndVoiceInfo * vp; // r19
        signed int i; // r18
    }
}


/*
    Compile unit: C:\SB\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B7E50 -> 0x001B7F08
*/
// Range: 0x1B7E50 -> 0x1B7F08
void iSndStop(unsigned int snd /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B7E50 -> 0x1B7F08
        signed int i; // r16
    }
}


/*
    Compile unit: C:\SB\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B7F10 -> 0x001B7F9C
*/
// Range: 0x1B7F10 -> 0x1B7F9C
void iSndPause(unsigned int snd /* r2 */, unsigned int pause /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B7F10 -> 0x1B7F9C
        signed int i; // r7
    }
}


/*
    Compile unit: C:\SB\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B7FA0 -> 0x001B8324
*/
// Range: 0x1B7FA0 -> 0x1B8324
unsigned int iSndFindFreeVoice(unsigned int priority /* r23 */, unsigned int flags /* r2 */, unsigned int owner /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B7FA0 -> 0x1B8324
        unsigned int i; // r20
        unsigned int vlo; // r2
        unsigned int vhi; // r22
        unsigned int best; // r19
        unsigned int bestpri; // r18
        signed int bestvol; // r17
        class xSndVoiceInfo * vp; // r16
        class xSndVoiceInfo * begin; // r21
        class xSndVoiceInfo * end; // r3
        class xSndVoiceInfo * v; // r16
        signed int volR; // r21
        signed int L; // r21
        signed int R; // r2
    }
}


/*
    Compile unit: C:\SB\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B8330 -> 0x001B84F8
*/
// Range: 0x1B8330 -> 0x1B84F8
void iSndStartStereo(unsigned int id1 /* r2 */, unsigned int id2 /* r2 */, float pitch /* r29+0x40 */) {
    /* anonymous block */ {
        // Range: 0x1B8330 -> 0x1B84F8
        signed int v1; // r17
        signed int v2; // r16
    }
}


/*
    Compile unit: C:\SB\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B8500 -> 0x001B8578
*/
// Range: 0x1B8500 -> 0x1B8578
unsigned char iSndIsReady(unsigned int id /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B8500 -> 0x1B8578
        signed int v; // r5
    }
}


/*
    Compile unit: C:\SB\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B8580 -> 0x001B89E0
*/
// Range: 0x1B8580 -> 0x1B89E0
unsigned int iSndPlay(class xSndVoiceInfo * vp /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1B8580 -> 0x1B89E0
        class iSndVol nvol; // r29+0x6C
        unsigned int voice; // r17
        class iSndFileInfo * file; // r2
        class iSndFileInfo * file; // r2
        unsigned char loop; // r4
        unsigned char paused; // r11
        unsigned int offset; // r2
        unsigned int track; // r3
        unsigned int numTracks; // r2
    }
}


/*
    Compile unit: C:\SB\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B89E0 -> 0x001B8A50
*/
// Range: 0x1B89E0 -> 0x1B8A50
unsigned char iSndIsPlayingByHandle(unsigned int id /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B89E0 -> 0x1B8A50
        signed int i; // r5
    }
}


/*
    Compile unit: C:\SB\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B8A50 -> 0x001B8AC0
*/
// Range: 0x1B8A50 -> 0x1B8AC0
unsigned char iSndIsPlaying(unsigned int assetID /* r2 */, unsigned int parid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B8A50 -> 0x1B8AC0
        signed int i; // r6
    }
}


/*
    Compile unit: C:\SB\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B8AC0 -> 0x001B8B18
*/
// Range: 0x1B8AC0 -> 0x1B8B18
unsigned char iSndIsPlaying(unsigned int assetID /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B8AC0 -> 0x1B8B18
        signed int i; // r5
    }
}


/*
    Compile unit: C:\SB\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B8B20 -> 0x001B8DC8
*/
// Range: 0x1B8B20 -> 0x1B8DC8
void iSndUpdate() {
    /* anonymous block */ {
        // Range: 0x1B8B20 -> 0x1B8DC8
        signed int i; // r7
        class xSndVoiceInfo * vp; // r6
        unsigned char active; // r5
        signed int i; // r20
        class xSndVoiceInfo * vp; // r19
        class iSndVol nvol; // r29+0x6C
        signed int i; // r19
        class xSndVoiceInfo * vp; // r18
        signed int testBuffer; // r17
    }
}


/*
    Compile unit: C:\SB\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B8DD0 -> 0x001B90D8
*/
// Range: 0x1B8DD0 -> 0x1B90D8
class iSndVol iSndCalcVol(class xSndVoiceInfo * vp /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1B8DD0 -> 0x1B90D8
        float volL; // r20
        float volR; // r2
        class xVec3 to; // r29+0x60
        float pan; // r22
        float volscale; // r21
        float fadeRange; // r1
        float tmp; // r29+0x70
    }
}


/*
    Compile unit: C:\SB\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B90E0 -> 0x001B90E8
*/
// Range: 0x1B90E0 -> 0x1B90E8
void iSndSetEnvironmentalEffect() {
    /* anonymous block */ {
        // Range: 0x1B90E0 -> 0x1B90E8
    }
}


/*
    Compile unit: C:\SB\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B90F0 -> 0x001B90F8
*/
// Range: 0x1B90F0 -> 0x1B90F8
void iSndExit() {
    /* anonymous block */ {
        // Range: 0x1B90F0 -> 0x1B90F8
    }
}


/*
    Compile unit: C:\SB\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B9100 -> 0x001B912C
*/
// Range: 0x1B9100 -> 0x1B912C
void iSndInitSceneLoaded() {
    /* anonymous block */ {
        // Range: 0x1B9100 -> 0x1B912C
    }
}


/*
    Compile unit: C:\SB\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B9130 -> 0x001B939C
*/
// Range: 0x1B9130 -> 0x1B939C
void iSndLoadFasterer() {
    /* anonymous block */ {
        // Range: 0x1B9130 -> 0x1B939C
        unsigned int size; // r29+0xDC
        signed int index; // r22
        class SndInfo * sndInfo; // r20
        class VAGheader * vagIterator; // r19
        class st_PKR_ASSET_TOCINFO xinfo; // r29+0xC0
        char * hipname; // r2
        signed int fileIndex; // r18
        unsigned int startSPUAddress; // r23
        unsigned int totalToRead; // r17
        signed int i; // r3
        class iSndFileInfo * file; // r6
        signed int i; // r16
        class st_PKR_ASSET_TOCINFO xinfo; // r29+0xA0
        class iSndFileInfo * file; // r4
    }
}


/*
    Compile unit: C:\SB\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B93A0 -> 0x001B93A8
*/
// Range: 0x1B93A0 -> 0x1B93A8
void iSndInit() {
    /* anonymous block */ {
        // Range: 0x1B93A0 -> 0x1B93A8
    }
}


/*
    Compile unit: C:\SB\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B93B0 -> 0x001B93D4
*/
// Range: 0x1B93B0 -> 0x1B93D4
void iSndSuspendCD() {
    /* anonymous block */ {
        // Range: 0x1B93B0 -> 0x1B93D4
    }
}


/*
    Compile unit: C:\SB\Core\p2\iSnd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B93E0 -> 0x001B9440
*/
// Range: 0x1B93E0 -> 0x1B9440
class iSndFileInfo * iSndLookup(unsigned int id /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B93E0 -> 0x1B9440
        signed int i; // r6
    }
}


