/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned int StreamIRXVersion; // size: 0x4, address: 0x35810C
signed int IOP_Cnt; // size: 0x4, address: 0x358110
unsigned short senddata[1024]; // size: 0x800, address: 0x36FEC0
unsigned short IOPCommandData[1024]; // size: 0x800, address: 0x3706C0
unsigned int cached_sbuff2[128]; // size: 0x200, address: 0x370EC0
unsigned int * sbuff2; // size: 0x4, address: 0x358114
signed int SOUND_STEREO_READY_FLAG; // size: 0x4, address: 0x358118
signed int SOUND_CD_STATUS; // size: 0x4, address: 0x35811C
signed int SOUND_SPU_ADDR; // size: 0x4, address: 0x358120
signed int SOUND_STREAM_CD_ACCESS; // size: 0x4, address: 0x358124
signed int SOUND_STREAM_CD_ACCESS_CHAN; // size: 0x4, address: 0x358128
signed int SOUND_IOP_REQUEST_LOAD; // size: 0x4, address: 0x3575B0
signed int SOUND_STREAM_STATUS[48]; // size: 0xC0, address: 0x3710C0
signed int SOUND_STREAM_SPU_CHAN[48]; // size: 0xC0, address: 0x371180
signed int SOUND_STREAM_ID[48]; // size: 0xC0, address: 0x371240
signed int SOUND_STREAM_SPU_ADDR[48]; // size: 0xC0, address: 0x371300
signed int SOUND_STREAM_PLAY_HALF[48]; // size: 0xC0, address: 0x3713C0
signed int SOUND_STREAM_ENV[48]; // size: 0xC0, address: 0x371480
signed int SOUND_SFX_TRANSFER_STATUS; // size: 0x4, address: 0x0
signed int SOUND_SFX_TRANSFER_END; // size: 0x4, address: 0x35812C
unsigned int SOUND_IOP_DATA_ADDRESS; // size: 0x4, address: 0x358130
unsigned int SOUND_IOP_DATA_SIZE; // size: 0x4, address: 0x358134
unsigned int SOUND_IOP_DATA_SEEK; // size: 0x4, address: 0x358138
unsigned int SOUND_IOP_DATA_CHECK; // size: 0x4, address: 0x35813C
unsigned int SOUND_IOP_DATA_ID; // size: 0x4, address: 0x358140
class _sif_client_data gCd; // size: 0x28, address: 0x371540
unsigned char SOUND_SPUKeyStatus[48]; // size: 0x30, address: 0x2B33F0
unsigned long SOUND_SPUVol[48]; // size: 0xC0, address: 0x371570
unsigned int iopFrameCount; // size: 0x4, address: 0x358144
signed int jptest; // size: 0x4, address: 0x0
void JP(void *); // size: 0x0, address: 0x19C9F0
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
    Code range: 0x0019BEC0 -> 0x0019BEE0
*/
// Range: 0x19BEC0 -> 0x19BEE0
void SOUND_DelayThread(unsigned long microsec /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19BEC0 -> 0x19BEE0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019BEE0 -> 0x0019BF20
*/
// Range: 0x19BEE0 -> 0x19BF20
void SOUND_LoadBlock(void * cmd /* r2 */, unsigned int size /* r16 */) {
    /* anonymous block */ {
        // Range: 0x19BEE0 -> 0x19BF20
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019BF20 -> 0x0019BF34
*/
// Range: 0x19BF20 -> 0x19BF34
void SOUND_SetDVDMode(signed int mode /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19BF20 -> 0x19BF34
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019BF40 -> 0x0019BF54
*/
// Range: 0x19BF40 -> 0x19BF54
void SOUND_SetCutsceneMode(signed int mode /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19BF40 -> 0x19BF54
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019BF60 -> 0x0019BF98
*/
// Range: 0x19BF60 -> 0x19BF98
void SOUND_SetHIPName(signed int idx /* r2 */, char * HIP /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19BF60 -> 0x19BF98
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019BFA0 -> 0x0019BFD8
*/
// Range: 0x19BFA0 -> 0x19BFD8
void SOUND_SetFileInfo(signed int slot /* r2 */, class iSndFileInfo * info /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19BFA0 -> 0x19BFD8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019BFE0 -> 0x0019BFFC
*/
// Range: 0x19BFE0 -> 0x19BFFC
void SOUND_PauseChannel(signed int channel /* r2 */, signed int pause /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19BFE0 -> 0x19BFFC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C000 -> 0x0019C0AC
*/
// Range: 0x19C000 -> 0x19C0AC
signed int FlushIOPCommand(signed int type /* r16 */) {
    /* anonymous block */ {
        // Range: 0x19C000 -> 0x19C0AC
        signed int a; // r2
        signed int oldcnt; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C0B0 -> 0x0019C10C
*/
// Range: 0x19C0B0 -> 0x19C10C
signed int SOUND_CheckAndStartStereo(unsigned int spuchannel1 /* r2 */, unsigned int spuchannel2 /* r2 */, unsigned int pitch /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19C0B0 -> 0x19C10C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C110 -> 0x0019C450
*/
// Range: 0x19C110 -> 0x19C450
void SOUND_CopyIOPBuffer() {
    /* anonymous block */ {
        // Range: 0x19C110 -> 0x19C450
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
    Code range: 0x0019C450 -> 0x0019C6B4
*/
// Range: 0x19C450 -> 0x19C6B4
void SetIOPCommand(signed short command /* r2 */, signed short length /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19C450 -> 0x19C6B4
        signed int i; // r15
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C6C0 -> 0x0019C704
*/
// Range: 0x19C6C0 -> 0x19C704
void SOUND_AllocateStreamBuffer(signed int strm /* r2 */, unsigned int spuaddr /* r2 */, unsigned int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19C6C0 -> 0x19C704
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C710 -> 0x0019C724
*/
// Range: 0x19C710 -> 0x19C724
void SOUND_SetMaxStreamLimit(signed int limit /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19C710 -> 0x19C724
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C730 -> 0x0019C744
*/
// Range: 0x19C730 -> 0x19C744
void SOUND_CloseStreamBuffer(signed int strm /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19C730 -> 0x19C744
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C750 -> 0x0019C764
*/
// Range: 0x19C750 -> 0x19C764
void SOUND_InitStreamData(signed int loadtype /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19C750 -> 0x19C764
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C770 -> 0x0019C77C
*/
// Range: 0x19C770 -> 0x19C77C
void SOUND_InitSPU() {
    /* anonymous block */ {
        // Range: 0x19C770 -> 0x19C77C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C780 -> 0x0019C79C
*/
// Range: 0x19C780 -> 0x19C79C
void SOUND_GetStatus(signed int AllowLoad /* r2 */, signed int reqcheck /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19C780 -> 0x19C79C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C7A0 -> 0x0019C7E0
*/
// Range: 0x19C7A0 -> 0x19C7E0
signed int SOUND_StopSound(signed int SPUChannel /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19C7A0 -> 0x19C7E0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C7E0 -> 0x0019C818
*/
// Range: 0x19C7E0 -> 0x19C818
signed int SOUND_StopStream(signed int SPUChannel /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19C7E0 -> 0x19C818
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C820 -> 0x0019C868
*/
// Range: 0x19C820 -> 0x19C868
signed int SOUND_SetChannelPitch(signed int Chan /* r2 */, signed int Pch /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19C820 -> 0x19C868
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C870 -> 0x0019C8C0
*/
// Range: 0x19C870 -> 0x19C8C0
signed int SOUND_SetChannelVolume(signed int Chan /* r2 */, signed int VL /* r2 */, signed int VR /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19C870 -> 0x19C8C0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C8C0 -> 0x0019C944
*/
// Range: 0x19C8C0 -> 0x19C944
signed int SOUND_PlaySFX(signed int ID /* r2 */, signed int Chan /* r2 */, signed int VL /* r2 */, signed int VR /* r2 */, signed int Spd /* r2 */, signed int at /* r2 */, signed int rl /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19C8C0 -> 0x19C944
        signed int adsr; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C950 -> 0x0019C9E8
*/
// Range: 0x19C950 -> 0x19C9E8
signed int SOUND_PlayStream(signed int Stream /* r2 */, signed int StrmChan /* r2 */, signed int Channel /* r2 */, signed int VL /* r2 */, signed int VR /* r2 */, signed int Spd /* r2 */, signed int flag /* r2 */, signed int at /* r2 */, signed int rl /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x19C950 -> 0x19C9E8
        signed int adsr; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019C9F0 -> 0x0019C9F8
*/
// Range: 0x19C9F0 -> 0x19C9F8
void JP() {
    /* anonymous block */ {
        // Range: 0x19C9F0 -> 0x19C9F8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ms4sound.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019CA00 -> 0x0019CA88
*/
// Range: 0x19CA00 -> 0x19CA88
signed int SOUND_InitIOP() {
    /* anonymous block */ {
        // Range: 0x19CA00 -> 0x19CA88
        signed int i; // r3
    }
}


