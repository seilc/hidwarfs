/*
    Compile unit: E:\SD2\Game\flat\zRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static enum _SDRenderState sRS; // size: 0x4, address: 0x3583B0
static signed int sBlendTable[11]; // size: 0x2C, address: 0x2B5170
enum _SDRenderState {
    SDRS_Unknown = 0,
    SDRS_Default = 1,
    SDRS_OpaqueModels = 2,
    SDRS_AlphaModels = 3,
    SDRS_Bubble = 4,
    SDRS_Projectile = 5,
    SDRS_Font = 6,
    SDRS_HUD = 7,
    SDRS_Particles = 8,
    SDRS_Lightning = 9,
    SDRS_SkidMark = 10,
    SDRS_Tide = 11,
    SDRS_SkyBack = 12,
    SDRS_Total = -1,
};
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
enum RwTextureFilterMode {
    rwFILTERNAFILTERMODE = 0,
    rwFILTERNEAREST = 1,
    rwFILTERLINEAR = 2,
    rwFILTERMIPNEAREST = 3,
    rwFILTERMIPLINEAR = 4,
    rwFILTERLINEARMIPNEAREST = 5,
    rwFILTERLINEARMIPLINEAR = 6,
    rwTEXTUREFILTERMODEFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x8
class RwObject {
    // Members
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0x18
class RwTexDictionary {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0x60
class RwTexture {
    // Members
public:
    class RwRaster * raster; // offset 0x0, size 0x4
    class RwTexDictionary * dict; // offset 0x4, size 0x4
    class RwLLLink lInDictionary; // offset 0x8, size 0x8
    char name[32]; // offset 0x10, size 0x20
    char mask[32]; // offset 0x30, size 0x20
    signed int refCount; // offset 0x50, size 0x4
    enum RwTextureFilterMode filtering; // offset 0x54, size 0x4
    enum RwTextureAddressMode addressingU; // offset 0x58, size 0x4
    enum RwTextureAddressMode addressingV; // offset 0x5C, size 0x4
};
enum RwTextureAddressMode {
    rwTEXTUREADDRESSNATEXTUREADDRESS = 0,
    rwTEXTUREADDRESSWRAP = 1,
    rwTEXTUREADDRESSMIRROR = 2,
    rwTEXTUREADDRESSCLAMP = 3,
    rwTEXTUREADDRESSBORDER = 4,
    rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 2147483647,
};

/*
    Compile unit: E:\SD2\Game\flat\zRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D1DA0 -> 0x001D1DBC
*/
// Range: 0x1D1DA0 -> 0x1D1DBC
void zRenderStateSetDstBlendMode(signed int xmode /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D1DA0 -> 0x1D1DBC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D1DC0 -> 0x001D1DDC
*/
// Range: 0x1D1DC0 -> 0x1D1DDC
void zRenderStateSetSrcBlendMode(signed int xmode /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D1DC0 -> 0x1D1DDC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D1DE0 -> 0x001D1E30
*/
// Range: 0x1D1DE0 -> 0x1D1E30
void zRenderStateSetTexture(unsigned int assetID /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D1DE0 -> 0x1D1E30
        class RwRaster * raster; // r2
        class RwTexture * texture; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D1E30 -> 0x001D22E4
*/
// Range: 0x1D1E30 -> 0x1D22E4
void zRenderState(enum _SDRenderState next /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1D1E30 -> 0x1D22E4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D22F0 -> 0x001D22F8
*/
// Range: 0x1D22F0 -> 0x1D22F8
void zRenderStateInit() {
    /* anonymous block */ {
        // Range: 0x1D22F0 -> 0x1D22F8
    }
}


