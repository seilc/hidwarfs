/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\world\pipe\p2\gcn\instance\vtxdesc.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8042CD50 -> 0x8042D724
*/
static char __dbFunctionName[24]; // size: 0x18, address: 0x804EBE90
// Range: 0x8042CD50 -> 0x8042CDF8
struct rwVertexDescriptor * _rwVertexDescriptorInit(struct rwVertexDescriptor * vtxDesc /* r31 */) {
    // References
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EBEA8
// Range: 0x8042CDF8 -> 0x8042CE18
void _rwGCNVertexDescSetVAT(struct rwVertexDescriptor * vtxDesc /* r3 */, unsigned int vat /* r4 */) {
    // References
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[31]; // size: 0x1F, address: 0x804EBEBF
enum rwGCNVertexAttribute {
    rwGCNVA_PNMTXIDX = 0,
    rwGCNVA_TEX0MTXIDX = 1,
    rwGCNVA_TEX1MTXIDX = 2,
    rwGCNVA_TEX2MTXIDX = 3,
    rwGCNVA_TEX3MTXIDX = 4,
    rwGCNVA_TEX4MTXIDX = 5,
    rwGCNVA_TEX5MTXIDX = 6,
    rwGCNVA_TEX6MTXIDX = 7,
    rwGCNVA_TEX7MTXIDX = 8,
    rwGCNVA_POS = 9,
    rwGCNVA_NRM = 10,
    rwGCNVA_CLR0 = 11,
    rwGCNVA_CLR1 = 12,
    rwGCNVA_TEX0 = 13,
    rwGCNVA_TEX1 = 14,
    rwGCNVA_TEX2 = 15,
    rwGCNVA_TEX3 = 16,
    rwGCNVA_TEX4 = 17,
    rwGCNVA_TEX5 = 18,
    rwGCNVA_TEX6 = 19,
    rwGCNVA_TEX7 = 20,
    rwGCNVA_NBT = 25,
    rwGCNVA_MAX_ATTR = 26,
    rwGCNVA_NULL = 255,
    rwGCNVA_MAX_ENUM = 2147483647,
};
enum rwGCNCompCnt {
    rwGCNCC_POS_XY = 0,
    rwGCNCC_POS_XYZ = 1,
    rwGCNCC_NRM_XYZ = 0,
    rwGCNCC_NRM_NBT = 1,
    rwGCNCC_NRM_NBT3 = 2,
    rwGCNCC_CLR_RGB = 0,
    rwGCNCC_CLR_RGBA = 1,
    rwGCNCC_TEX_S = 0,
    rwGCNCC_TEX_ST = 1,
    rwGCNCC_MAX_ENUM = 2147483647,
};
enum rwGCNCompType {
    rwGCNCT_U8 = 0,
    rwGCNCT_S8 = 1,
    rwGCNCT_U16 = 2,
    rwGCNCT_S16 = 3,
    rwGCNCT_F32 = 4,
    rwGCNCT_RGB565 = 0,
    rwGCNCT_RGB8 = 1,
    rwGCNCT_RGBX8 = 2,
    rwGCNCT_RGBA4 = 3,
    rwGCNCT_RGBA6 = 4,
    rwGCNCT_RGBA8 = 5,
    rwGCNCT_MAX_ENUM = 2147483647,
};
// Range: 0x8042CE18 -> 0x8042D138
void _rwGCNVertexDescSetElementAttr(struct rwVertexDescriptor * vtxDesc /* r3 */, enum rwGCNVertexAttribute attr /* r4 */, enum rwGCNCompCnt cnt /* r5 */, enum rwGCNCompType fmt /* r6 */, unsigned char frac /* r7 */) {
    // References
    // -> static char __dbFunctionName[31];
}

static char __dbFunctionName[31]; // size: 0x1F, address: 0x804EBEDE
enum rwGCNAttrType {
    rwGCNAT_NONE = 0,
    rwGCNAT_DIRECT = 1,
    rwGCNAT_INDEX8 = 2,
    rwGCNAT_INDEX16 = 3,
    rwGCNAT_MAX_ENUM = 2147483647,
};
// Range: 0x8042D138 -> 0x8042D704
void _rwGCNVertexDescSetElementDesc(struct rwVertexDescriptor * vtxDesc /* r3 */, enum rwGCNVertexAttribute attr /* r4 */, enum rwGCNAttrType type /* r5 */) {
    // Local variables
    unsigned int numTex; // r31
    unsigned int i; // r30
    int numNrm; // r28
    int numNrm; // r27
    unsigned int numcols; // r29

    // References
    // -> static char __dbFunctionName[31];
}

static char __dbFunctionName[34]; // size: 0x22, address: 0x804EBEFD
// Range: 0x8042D704 -> 0x8042D724
void _rwGCNVertexDescSetNumIndexedAttr(struct rwVertexDescriptor * vtxDesc /* r3 */, unsigned char numIndxAttr /* r4 */) {
    // References
    // -> static char __dbFunctionName[34];
}


