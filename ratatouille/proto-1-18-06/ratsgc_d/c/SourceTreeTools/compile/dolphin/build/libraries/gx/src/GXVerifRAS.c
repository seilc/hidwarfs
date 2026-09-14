/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\gx\src\GXVerifRAS.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803C2D2C -> 0x803C6D58
*/
enum /* @enum$5GXVerifRAS_c */ {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
};
// total size: 0x13F8
struct __GXVerifyData {
    // Members
    void (* cb)(enum /* @enum$5GXVerifRAS_c */ {
        GX_WARN_NONE = 0,
        GX_WARN_SEVERE = 1,
        GX_WARN_MEDIUM = 2,
        GX_WARN_ALL = 3,
    }, unsigned long, char *); // offset 0x0, size 0x4
    enum /* @enum$5GXVerifRAS_c */ {
        GX_WARN_NONE = 0,
        GX_WARN_SEVERE = 1,
        GX_WARN_MEDIUM = 2,
        GX_WARN_ALL = 3,
    } verifyLevel; // offset 0x4, size 0x4
    unsigned long xfRegs[80]; // offset 0x8, size 0x140
    unsigned long xfMtx[256]; // offset 0x148, size 0x400
    unsigned long xfNrm[96]; // offset 0x548, size 0x180
    unsigned long xfDMtx[256]; // offset 0x6C8, size 0x400
    unsigned long xfLight[128]; // offset 0xAC8, size 0x200
    unsigned long rasRegs[256]; // offset 0xCC8, size 0x400
    unsigned char xfRegsDirty[80]; // offset 0x10C8, size 0x50
    unsigned char xfMtxDirty[256]; // offset 0x1118, size 0x100
    unsigned char xfNrmDirty[96]; // offset 0x1218, size 0x60
    unsigned char xfDMtxDirty[256]; // offset 0x1278, size 0x100
    unsigned char xfLightDirty[128]; // offset 0x1378, size 0x80
};
struct __GXVerifyData * __gxVerif; // size: 0x4, address: 0x80D680E8
enum /* @enum$5GXVerifRAS_c */ {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
} __gxvWarnLev[]; // size: 0x0, address: 0x8054587C
char __gxvDummyStr[]; // size: 0x0, address: 0x80D59530
char * __gxvWarnings[]; // size: 0x0, address: 0x80545688
// Range: 0x803C2D2C -> 0x803C317C
void __GXVerifySU() {
    // Local variables
    long scis_l; // r29
    long scis_r; // r31
    long scis_t; // r28
    long scis_b; // r30

    // References
    // -> char __gxvDummyStr[];
    // -> enum /* @enum$5GXVerifRAS_c */ {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
} __gxvWarnLev[];
    // -> struct __GXVerifyData * __gxVerif;
    // -> char * __gxvWarnings[];
}

// Range: 0x803C317C -> 0x803C38E0
void __GXVerifyBUMP() {
    // Local variables
    unsigned long i; // r30
    unsigned long nBmp; // r31
    unsigned long nTev; // r27
    unsigned long nTex; // r28
    unsigned long matrix; // r29

    // References
    // -> char * __gxvWarnings[];
    // -> enum /* @enum$5GXVerifRAS_c */ {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
} __gxvWarnLev[];
    // -> struct __GXVerifyData * __gxVerif;
    // -> char __gxvDummyStr[];
}

// Range: 0x803C38E0 -> 0x803C4D30
void __GXVerifyTEX() {
    // Local variables
    unsigned long i; // r30
    unsigned long nBmp; // r23
    unsigned long nTev; // r26
    unsigned long nTex; // r24
    unsigned long enabled; // r27
    unsigned long texId; // r31
    unsigned long direct[8]; // r1+0x28
    unsigned long indirect[8]; // r1+0x8
    unsigned long h2; // r29
    unsigned long w2; // r28
    unsigned long nlevels; // r25

    // References
    // -> char __gxvDummyStr[];
    // -> enum /* @enum$5GXVerifRAS_c */ {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
} __gxvWarnLev[];
    // -> struct __GXVerifyData * __gxVerif;
    // -> char * __gxvWarnings[];
}

static char * TevRegNames[8]; // size: 0x20, address: 0x80546E20
// Range: 0x803C4D30 -> 0x803C6AC8
void __GXVerifyTEV() {
    // Local variables
    unsigned long i; // r31
    unsigned long nTev; // r28
    unsigned long nCol; // r27
    unsigned long enabled; // r29
    unsigned long color; // r26
    unsigned long Clh[4]; // r1+0x38
    unsigned long Alh[4]; // r1+0x28
    unsigned long Cwritten[4]; // r1+0x18
    unsigned long Awritten[4]; // r1+0x8

    // References
    // -> char * __gxvWarnings[];
    // -> enum /* @enum$5GXVerifRAS_c */ {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
} __gxvWarnLev[];
    // -> struct __GXVerifyData * __gxVerif;
    // -> char __gxvDummyStr[];
    // -> static char * TevRegNames[8];
}

// Range: 0x803C6AC8 -> 0x803C6D58
void __GXVerifyPE() {
    // Local variables
    unsigned long i; // r31

    // References
    // -> char __gxvDummyStr[];
    // -> enum /* @enum$5GXVerifRAS_c */ {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
} __gxvWarnLev[];
    // -> struct __GXVerifyData * __gxVerif;
    // -> char * __gxvWarnings[];
}


