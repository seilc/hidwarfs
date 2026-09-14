/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\hifastim\VCL_HIFastIM.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
void * rwPDS_VCL_HIFastIM_VU1Transforms[2]; // size: 0x8, address: 0x636FD0
__int128 * _rwDMAPktPtr; // size: 0x4, address: 0x637100
enum RwCullMode gSkyCullState; // size: 0x4, address: 0x6371AC
__int128 skyCClipVect1; // size: 0x10, address: 0x5ECF30
__int128 skyClipVect2; // size: 0x10, address: 0x5ECF20
__int128 skyCClipVect2; // size: 0x10, address: 0x5ECF40
__int128 skyClipVect1; // size: 0x10, address: 0x5ECF10
__int128 gifTag128; // size: 0x10, address: 0x5ECE90
signed long skyPrim_State; // size: 0x4, address: 0x636840
signed int skyAlphaTex; // size: 0x4, address: 0x6371A4
signed int skyVertexAlpha; // size: 0x4, address: 0x6371A8
__int128 vu1DataOffset3D; // size: 0x10, address: 0x5ECFA0
__int128 vu1DataXYZShift; // size: 0x10, address: 0x5ECF90
__int128 vu1DataXYZScale; // size: 0x10, address: 0x5ECF80
__int128 xMaxYMax128; // size: 0x10, address: 0x5ECF70
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x643E38
void * skyUploadedCode; // size: 0x4, address: 0x636894
class RwRaster * skyTextureRaster; // size: 0x4, address: 0x6371A0
void FastIM_DestroyCallBack(class RwResEntry *); // size: 0x0, address: 0x4BB940
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
// total size: 0x8
class RwTexCoords {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0x8
class rwPS2AllClusterQuickInfo {
    // Members
public:
    __int128 * data; // offset 0x0, size 0x4
    unsigned int stride; // offset 0x4, size 0x4
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
// total size: 0x0
class xVec2 {};
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
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\hifastim\VCL_HIFastIM.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004BB170 -> 0x004BB494
*/
// Range: 0x4BB170 -> 0x4BB494
void HIFastIM_Render(class HIFastIMLockStruct * lock /* r20 */, class RwMatrixTag * ltm /* r19 */) {
    /* anonymous block */ {
        // Range: 0x4BB170 -> 0x4BB494
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
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\hifastim\VCL_HIFastIM.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004BB4A0 -> 0x004BB5D4
*/
// Range: 0x4BB4A0 -> 0x4BB5D4
void HIFastIM_Create(class HIFastIMLockStruct * lock /* r18 */, signed int format /* r17 */, signed int vertCount /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4BB4A0 -> 0x4BB5D4
        signed int dmaQW; // r2
        signed int posQW; // r2
        signed int uvQW; // r2
        signed int totalQW; // r2
        __int128 * currDma; // r2
        __int128 * dmaPacket; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\hifastim\VCL_HIFastIM.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004BB5E0 -> 0x004BB868
*/
// Range: 0x4BB5E0 -> 0x4BB868
void HIFastIM_DMAPacketSetup(class HIFastIMLockStruct * lock /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4BB5E0 -> 0x4BB868
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
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\hifastim\VCL_HIFastIM.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004BB870 -> 0x004BB938
*/
// Range: 0x4BB870 -> 0x4BB938
__int128 * HIFastIM_DMAAllocator(unsigned int size /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4BB870 -> 0x4BB938
        class RwResEntry * result; // r2
        class rwPS2AllResEntryHeader * ps2ResHeader; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\hifastim\VCL_HIFastIM.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004BB940 -> 0x004BB97C
*/
// Range: 0x4BB940 -> 0x4BB97C
static void FastIM_DestroyCallBack(class RwResEntry * resEntry /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4BB940 -> 0x4BB97C
    }
}


