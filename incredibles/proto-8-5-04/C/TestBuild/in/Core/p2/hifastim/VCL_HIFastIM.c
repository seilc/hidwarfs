/*
    Compile unit: C:\TestBuild\in\Core\p2\hifastim\VCL_HIFastIM.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
void * rwPDS_VCL_HIFastIM_VU1Transforms[2]; // size: 0x8, address: 0x6084E8
__int128 * _rwDMAPktPtr; // size: 0x4, address: 0x6092A8
enum RwCullMode gSkyCullState; // size: 0x4, address: 0x609354
__int128 skyCClipVect1; // size: 0x10, address: 0x515070
__int128 skyClipVect2; // size: 0x10, address: 0x515060
__int128 skyCClipVect2; // size: 0x10, address: 0x515080
__int128 skyClipVect1; // size: 0x10, address: 0x515050
__int128 gifTag128; // size: 0x10, address: 0x514FD0
signed long skyPrim_State; // size: 0x4, address: 0x607E90
signed int skyAlphaTex; // size: 0x4, address: 0x60934C
signed int skyVertexAlpha; // size: 0x4, address: 0x609350
__int128 vu1DataOffset3D; // size: 0x10, address: 0x5150E0
__int128 vu1DataXYZShift; // size: 0x10, address: 0x5150D0
__int128 vu1DataXYZScale; // size: 0x10, address: 0x5150C0
__int128 xMaxYMax128; // size: 0x10, address: 0x5150B0
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x6B2890
void * skyUploadedCode; // size: 0x4, address: 0x607EE4
class RwRaster * skyTextureRaster; // size: 0x4, address: 0x609348
void FastIM_DestroyCallBack(class RwResEntry *); // size: 0x0, address: 0x484200
// total size: 0x34
class RwRaster {
    // Members
public:
    class RwRaster * parent; // offset 0x0, size 0x4
    unsigned char * cpPixels; // offset 0x4, size 0x4
    unsigned char * palette; // offset 0x8, size 0x4
    signed int width; // offset 0xC, size 0x4
    signed int height; // offset 0x10, size 0x4
    signed int depth; // offset 0x14, size 0x4
    signed int stride; // offset 0x18, size 0x4
    signed short nOffsetX; // offset 0x1C, size 0x2
    signed short nOffsetY; // offset 0x1E, size 0x2
    unsigned char cType; // offset 0x20, size 0x1
    unsigned char cFlags; // offset 0x21, size 0x1
    unsigned char privateFlags; // offset 0x22, size 0x1
    unsigned char cFormat; // offset 0x23, size 0x1
    unsigned char * originalPixels; // offset 0x24, size 0x4
    signed int originalWidth; // offset 0x28, size 0x4
    signed int originalHeight; // offset 0x2C, size 0x4
    signed int originalStride; // offset 0x30, size 0x4
};
enum RwCullMode {
    rwCULLMODENACULLMODE = 0,
    rwCULLMODECULLNONE = 1,
    rwCULLMODECULLBACK = 2,
    rwCULLMODECULLFRONT = 3,
    rwCULLMODEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x1C
class HIFastIMLockStruct {
    // Members
public:
    __int128 * dmaPacket; // offset 0x0, size 0x4
    signed int qwCount; // offset 0x4, size 0x4
    signed int format; // offset 0x8, size 0x4
    class xVec3 * pos; // offset 0xC, size 0x4
    class xVec2 * uv; // offset 0x10, size 0x4
    class xColor_tag * color; // offset 0x14, size 0x4
    signed int vertCount; // offset 0x18, size 0x4
};
// total size: 0x18
class RwResEntry {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
    signed int size; // offset 0x8, size 0x4
    void * owner; // offset 0xC, size 0x4
    class RwResEntry * * ownerRef; // offset 0x10, size 0x4
    void (* destroyNotify)(class RwResEntry *); // offset 0x14, size 0x4
};
// total size: 0x8
class rwPS2AllClusterQuickInfo {
    // Members
public:
    __int128 * data; // offset 0x0, size 0x4
    unsigned int stride; // offset 0x4, size 0x4
};
// total size: 0x4
class xColor_tag {
    // Members
public:
    union { // inferred
        struct { // inferred
            unsigned char r; // offset 0x0, size 0x1
            unsigned char g; // offset 0x1, size 0x1
            unsigned char b; // offset 0x2, size 0x1
            unsigned char a; // offset 0x3, size 0x1
        };
        class RwRGBA rgba; // offset 0x0, size 0x4
    };
};
// total size: 0x4
class RwRGBA {
    // Members
public:
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// total size: 0x1B0
class rwPS2AllResEntryHeader {
    // Members
public:
    signed int refCnt; // offset 0x0, size 0x4
    signed int clrCnt; // offset 0x4, size 0x4
    __int128 * data; // offset 0x8, size 0x4
    unsigned int numVerts; // offset 0xC, size 0x4
    unsigned int objIdentifier; // offset 0x10, size 0x4
    unsigned int meshIdentifier; // offset 0x14, size 0x4
    signed int batchSize; // offset 0x18, size 0x4
    signed int numBatches; // offset 0x1C, size 0x4
    signed int batchesPerTag; // offset 0x20, size 0x4
    signed int morphStart; // offset 0x24, size 0x4
    signed int morphFinish; // offset 0x28, size 0x4
    signed int morphNum; // offset 0x2C, size 0x4
    class rwPS2AllClusterQuickInfo clquickinfo[12]; // offset 0x30, size 0x60
    class rwPS2AllFieldRec fieldRec[12]; // offset 0x90, size 0x120
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x40
class RwMatrixTag {
    // Members
public:
    class RwV3d right; // offset 0x0, size 0xC
    unsigned int flags; // offset 0xC, size 0x4
    class RwV3d up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class RwV3d at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
    class RwV3d pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x8
class RwTexCoords {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0x0
class xVec2 {};
// total size: 0xC
class xVec3 {
    // Members
public:
    union { // inferred
        class RwV3d m_RwV3d; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
        float a[3]; // offset 0x0, size 0xC
    };
};
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x18
class rwPS2AllFieldRec {
    // Members
public:
    signed int numVerts; // offset 0x0, size 0x4
    signed int morphNumVerts; // offset 0x4, size 0x4
    signed int dataoffset; // offset 0x8, size 0x4
    signed int morphDataoffset; // offset 0xC, size 0x4
    signed short skip; // offset 0x10, size 0x2
    signed short morphSkip; // offset 0x12, size 0x2
    signed short reverse; // offset 0x14, size 0x2
    unsigned char vuoffset; // offset 0x16, size 0x1
    unsigned char pad[1]; // offset 0x17, size 0x1
};

/*
    Compile unit: C:\TestBuild\in\Core\p2\hifastim\VCL_HIFastIM.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004839D0 -> 0x00483CF4
*/
// Range: 0x4839D0 -> 0x483CF4
void HIFastIM_Render(class HIFastIMLockStruct * lock /* r20 */, class RwMatrixTag * ltm /* r19 */) {
    /* anonymous block */ {
        // Range: 0x4839D0 -> 0x483CF4
        unsigned long tmp; // r3
        unsigned long tmp1; // r4
        unsigned long clipPrimTmp; // r2
        __int128 ltmp; // r29+0xB0
        unsigned int vifPacketSize; // r2
        class RwMatrixTag * transform; // r2
        class RwMatrixTag tmpTransform; // r29+0x70
        class RwMatrixTag * viewMatrix; // r2
        void * kohd; // r18
        class RwRaster * raster; // r2
        signed int format; // r2
        __int128 * _rwDMA_local_rwDMAPktPtr; // r17
        unsigned int prmTmp; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\hifastim\VCL_HIFastIM.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00483D00 -> 0x00483E34
*/
// Range: 0x483D00 -> 0x483E34
void HIFastIM_Create(class HIFastIMLockStruct * lock /* r18 */, signed int format /* r17 */, signed int vertCount /* r16 */) {
    /* anonymous block */ {
        // Range: 0x483D00 -> 0x483E34
        signed int dmaQW; // r2
        signed int posQW; // r2
        signed int uvQW; // r2
        signed int totalQW; // r2
        __int128 * currDma; // r2
        __int128 * dmaPacket; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\hifastim\VCL_HIFastIM.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00483E40 -> 0x004840C8
*/
// Range: 0x483E40 -> 0x4840C8
void HIFastIM_DMAPacketSetup(class HIFastIMLockStruct * lock /* r2 */) {
    /* anonymous block */ {
        // Range: 0x483E40 -> 0x4840C8
        signed int i; // r16
        signed int vertRemain; // r25
        __int128 * currDma; // r2
        class RwV3d * currPos; // r2
        class RwTexCoords * currUV; // r2
        class RwRGBA * currColor; // r2
        signed int format; // r2
        signed int numBatches; // r2
        unsigned int batchPosQW; // r24
        unsigned int batchUvQW; // r15
        unsigned int batchColorQW; // r14
        unsigned int batchVert; // r13
        unsigned int downloadVert; // r3
        signed int roundupVertRemain; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\hifastim\VCL_HIFastIM.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004840D0 -> 0x00484198
*/
// Range: 0x4840D0 -> 0x484198
__int128 * HIFastIM_DMAAllocator(unsigned int size /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4840D0 -> 0x484198
        class RwResEntry * result; // r2
        class rwPS2AllResEntryHeader * ps2ResHeader; // r6
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\hifastim\VCL_HIFastIM.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004841A0 -> 0x004841FC
*/
// Range: 0x4841A0 -> 0x4841FC
signed int HIFastIM_DMAChainSize(signed int format /* r2 */, signed int vertCount /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4841A0 -> 0x4841FC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\hifastim\VCL_HIFastIM.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00484200 -> 0x0048423C
*/
// Range: 0x484200 -> 0x48423C
static void FastIM_DestroyCallBack(class RwResEntry * resEntry /* r2 */) {
    /* anonymous block */ {
        // Range: 0x484200 -> 0x48423C
    }
}


