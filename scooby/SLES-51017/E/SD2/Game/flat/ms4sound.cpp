/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned int StreamIRXVersion; // size: 0x4, address: 0x358A9C
signed int IOP_Cnt; // size: 0x4, address: 0x358AA0
unsigned short senddata[1024]; // size: 0x800, address: 0x36D840
unsigned short IOPCommandData[1024]; // size: 0x800, address: 0x36E040
unsigned int cached_sbuff2[128]; // size: 0x200, address: 0x36E840
unsigned int * sbuff2; // size: 0x4, address: 0x358AA4
signed int SOUND_STEREO_READY_FLAG; // size: 0x4, address: 0x358AA8
signed int SOUND_CD_STATUS; // size: 0x4, address: 0x358AAC
signed int SOUND_SPU_ADDR; // size: 0x4, address: 0x358AB0
signed int SOUND_STREAM_CD_ACCESS; // size: 0x4, address: 0x358AB4
signed int SOUND_STREAM_CD_ACCESS_CHAN; // size: 0x4, address: 0x358AB8
signed int SOUND_IOP_REQUEST_LOAD; // size: 0x4, address: 0x357F30
signed int SOUND_STREAM_STATUS[48]; // size: 0xC0, address: 0x36EA40
signed int SOUND_STREAM_SPU_CHAN[48]; // size: 0xC0, address: 0x36EB00
signed int SOUND_STREAM_ID[48]; // size: 0xC0, address: 0x36EBC0
signed int SOUND_STREAM_SPU_ADDR[48]; // size: 0xC0, address: 0x36EC80
signed int SOUND_STREAM_PLAY_HALF[48]; // size: 0xC0, address: 0x36ED40
signed int SOUND_STREAM_ENV[48]; // size: 0xC0, address: 0x36EE00
signed int SOUND_SFX_TRANSFER_STATUS; // size: 0x4, address: 0x0
signed int SOUND_SFX_TRANSFER_END; // size: 0x4, address: 0x358ABC
unsigned int SOUND_IOP_DATA_ADDRESS; // size: 0x4, address: 0x358AC0
unsigned int SOUND_IOP_DATA_SIZE; // size: 0x4, address: 0x358AC4
unsigned int SOUND_IOP_DATA_SEEK; // size: 0x4, address: 0x358AC8
unsigned int SOUND_IOP_DATA_CHECK; // size: 0x4, address: 0x358ACC
unsigned int SOUND_IOP_DATA_ID; // size: 0x4, address: 0x358AD0
class _sif_client_data gCd; // size: 0x28, address: 0x36EEC0
unsigned char SOUND_SPUKeyStatus[48]; // size: 0x30, address: 0x2B3CF0
unsigned long SOUND_SPUVol[48]; // size: 0xC0, address: 0x36EEF0
unsigned int iopFrameCount; // size: 0x4, address: 0x358AD4
signed int jptest; // size: 0x4, address: 0x0
void JP(void *); // size: 0x0, address: 0x19D180
// total size: 0x44
class _sif_serve_data {
    // Members
public:
    unsigned int command; // offset 0x0, size 0x4
    void * (* func)(unsigned int, void *, signed int); // offset 0x4, size 0x4
    void * buff; // offset 0x8, size 0x4
    signed int size; // offset 0xC, size 0x4
    void * (* cfunc)(unsigned int, void *, signed int); // offset 0x10, size 0x4
    void * cbuff; // offset 0x14, size 0x4
    signed int csize; // offset 0x18, size 0x4
    class _sif_client_data * client; // offset 0x1C, size 0x4
    void * paddr; // offset 0x20, size 0x4
    unsigned int fno; // offset 0x24, size 0x4
    void * receive; // offset 0x28, size 0x4
    signed int rsize; // offset 0x2C, size 0x4
    signed int rmode; // offset 0x30, size 0x4
    unsigned int rid; // offset 0x34, size 0x4
    class _sif_serve_data * link; // offset 0x38, size 0x4
    class _sif_serve_data * next; // offset 0x3C, size 0x4
    class _sif_queue_data * base; // offset 0x40, size 0x4
};
// total size: 0x18
class _sif_queue_data {
    // Members
public:
    signed int key; // offset 0x0, size 0x4
    signed int active; // offset 0x4, size 0x4
    class _sif_serve_data * link; // offset 0x8, size 0x4
    class _sif_serve_data * start; // offset 0xC, size 0x4
    class _sif_serve_data * end; // offset 0x10, size 0x4
    class _sif_queue_data * next; // offset 0x14, size 0x4
};
// total size: 0x18
class iSndFileInfo {
    // Members
public:
    unsigned int assetID; // offset 0x0, size 0x4
    unsigned short flags; // offset 0x4, size 0x2
    unsigned short freq; // offset 0x6, size 0x2
    unsigned int lsn; // offset 0x8, size 0x4
    unsigned short offset; // offset 0xC, size 0x2
    unsigned short ID; // offset 0xE, size 0x2
    unsigned int size; // offset 0x10, size 0x4
    unsigned int hip_idx; // offset 0x14, size 0x4
};
// total size: 0x28
class _sif_client_data {
    // Members
public:
    class _sif_rpc_data rpcd; // offset 0x0, size 0x10
    unsigned int command; // offset 0x10, size 0x4
    void * buff; // offset 0x14, size 0x4
    void * cbuff; // offset 0x18, size 0x4
    void (* func)(void *); // offset 0x1C, size 0x4
    void * para; // offset 0x20, size 0x4
    class _sif_serve_data * serve; // offset 0x24, size 0x4
};
// total size: 0x10
class _sif_rpc_data {
    // Members
public:
    void * paddr; // offset 0x0, size 0x4
    unsigned int pid; // offset 0x4, size 0x4
    signed int tid; // offset 0x8, size 0x4
    unsigned int mode; // offset 0xC, size 0x4
};

/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C650 -> 0x0019C670
*/
// Range: 0x19C650 -> 0x19C670
void SOUND_DelayThread(unsigned long microsec /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19C650 -> 0x19C670
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C670 -> 0x0019C6B0
*/
// Range: 0x19C670 -> 0x19C6B0
void SOUND_LoadBlock(void * cmd /* r2 */, unsigned int size /* r16 */) {
    /* anonymous block */ {
        // Range: 0x19C670 -> 0x19C6B0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C6B0 -> 0x0019C6C4
*/
// Range: 0x19C6B0 -> 0x19C6C4
void SOUND_SetDVDMode(signed int mode /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19C6B0 -> 0x19C6C4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C6D0 -> 0x0019C6E4
*/
// Range: 0x19C6D0 -> 0x19C6E4
void SOUND_SetCutsceneMode(signed int mode /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19C6D0 -> 0x19C6E4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C6F0 -> 0x0019C728
*/
// Range: 0x19C6F0 -> 0x19C728
void SOUND_SetHIPName(signed int idx /* r2 */, char * HIP /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19C6F0 -> 0x19C728
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C730 -> 0x0019C768
*/
// Range: 0x19C730 -> 0x19C768
void SOUND_SetFileInfo(signed int slot /* r2 */, class iSndFileInfo * info /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19C730 -> 0x19C768
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C770 -> 0x0019C78C
*/
// Range: 0x19C770 -> 0x19C78C
void SOUND_PauseChannel(signed int channel /* r2 */, signed int pause /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19C770 -> 0x19C78C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C790 -> 0x0019C83C
*/
// Range: 0x19C790 -> 0x19C83C
signed int FlushIOPCommand(signed int type /* r16 */) {
    /* anonymous block */ {
        // Range: 0x19C790 -> 0x19C83C
        signed int a; // r2
        signed int oldcnt; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C840 -> 0x0019C89C
*/
// Range: 0x19C840 -> 0x19C89C
signed int SOUND_CheckAndStartStereo(unsigned int spuchannel1 /* r2 */, unsigned int spuchannel2 /* r2 */, unsigned int pitch /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19C840 -> 0x19C89C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C8A0 -> 0x0019CBE0
*/
// Range: 0x19C8A0 -> 0x19CBE0
void SOUND_CopyIOPBuffer() {
    /* anonymous block */ {
        // Range: 0x19C8A0 -> 0x19CBE0
        signed int count; // r6
        signed int streamnum; // r16
        signed int streams; // r5
        signed int l; // r7
        signed int k; // r8
        signed int j; // r15
        signed int i; // r3
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019CBE0 -> 0x0019CE44
*/
// Range: 0x19CBE0 -> 0x19CE44
void SetIOPCommand(signed short command /* r2 */, signed short length /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19CBE0 -> 0x19CE44
        signed int i; // r15
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019CE50 -> 0x0019CE94
*/
// Range: 0x19CE50 -> 0x19CE94
void SOUND_AllocateStreamBuffer(signed int strm /* r2 */, unsigned int spuaddr /* r2 */, unsigned int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19CE50 -> 0x19CE94
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019CEA0 -> 0x0019CEB4
*/
// Range: 0x19CEA0 -> 0x19CEB4
void SOUND_SetMaxStreamLimit(signed int limit /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19CEA0 -> 0x19CEB4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019CEC0 -> 0x0019CED4
*/
// Range: 0x19CEC0 -> 0x19CED4
void SOUND_CloseStreamBuffer(signed int strm /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19CEC0 -> 0x19CED4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019CEE0 -> 0x0019CEF4
*/
// Range: 0x19CEE0 -> 0x19CEF4
void SOUND_InitStreamData(signed int loadtype /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19CEE0 -> 0x19CEF4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019CF00 -> 0x0019CF0C
*/
// Range: 0x19CF00 -> 0x19CF0C
void SOUND_InitSPU() {
    /* anonymous block */ {
        // Range: 0x19CF00 -> 0x19CF0C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019CF10 -> 0x0019CF2C
*/
// Range: 0x19CF10 -> 0x19CF2C
void SOUND_GetStatus(signed int AllowLoad /* r2 */, signed int reqcheck /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19CF10 -> 0x19CF2C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019CF30 -> 0x0019CF70
*/
// Range: 0x19CF30 -> 0x19CF70
signed int SOUND_StopSound(signed int SPUChannel /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19CF30 -> 0x19CF70
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019CF70 -> 0x0019CFA8
*/
// Range: 0x19CF70 -> 0x19CFA8
signed int SOUND_StopStream(signed int SPUChannel /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19CF70 -> 0x19CFA8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019CFB0 -> 0x0019CFF8
*/
// Range: 0x19CFB0 -> 0x19CFF8
signed int SOUND_SetChannelPitch(signed int Chan /* r2 */, signed int Pch /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19CFB0 -> 0x19CFF8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D000 -> 0x0019D050
*/
// Range: 0x19D000 -> 0x19D050
signed int SOUND_SetChannelVolume(signed int Chan /* r2 */, signed int VL /* r2 */, signed int VR /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19D000 -> 0x19D050
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D050 -> 0x0019D0D4
*/
// Range: 0x19D050 -> 0x19D0D4
signed int SOUND_PlaySFX(signed int ID /* r2 */, signed int Chan /* r2 */, signed int VL /* r2 */, signed int VR /* r2 */, signed int Spd /* r2 */, signed int at /* r2 */, signed int rl /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19D050 -> 0x19D0D4
        signed int adsr; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D0E0 -> 0x0019D178
*/
// Range: 0x19D0E0 -> 0x19D178
signed int SOUND_PlayStream(signed int Stream /* r2 */, signed int StrmChan /* r2 */, signed int Channel /* r2 */, signed int VL /* r2 */, signed int VR /* r2 */, signed int Spd /* r2 */, signed int flag /* r2 */, signed int at /* r2 */, signed int rl /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x19D0E0 -> 0x19D178
        signed int adsr; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D180 -> 0x0019D188
*/
// Range: 0x19D180 -> 0x19D188
void JP() {
    /* anonymous block */ {
        // Range: 0x19D180 -> 0x19D188
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D190 -> 0x0019D218
*/
// Range: 0x19D190 -> 0x19D218
signed int SOUND_InitIOP() {
    /* anonymous block */ {
        // Range: 0x19D190 -> 0x19D218
        signed int i; // r3
    }
}


