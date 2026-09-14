/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AB8F0 -> 0x004ABC60
*/
// Range: 0x4AB8F0 -> 0x4ABC60
void iModelAnimBoundWorld(class xBox * box /* r21 */, class xBox * combinedBox /* r20 */, class RpAtomic * model /* r19 */, class RwMatrixTag * mat /* r18 */, class RwMatrixTag * bonemat /* r22 */) {
    /* anonymous block */ {
        // Range: 0x4AB8F0 -> 0x4ABC60
        signed int i; // r17
        signed int * data; // r2
        signed int count; // r2
        class RpUserDataArray * usrdat; // r2
        signed int numbones; // r2
        signed int * boneidx; // r6
        class xSphere * bonesph; // r5
        float maxscale; // r29+0x80
        float scaleX; // r4
        float scaleY; // r3
        float scaleZ; // r1
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004ABC60 -> 0x004AC410
*/
// Range: 0x4ABC60 -> 0x4AC410
void iModelAnimBoundPrepare(class RpAtomic * model /* r20 */) {
    /* anonymous block */ {
        // Range: 0x4ABC60 -> 0x4AC410
        class RpHAnimHierarchy * pHier; // r2
        signed int numbones; // r19
        signed int i; // r17
        signed int j; // r8
        signed int count; // r2
        class RpUserDataArray * usrdat; // r21
        class RpSkin * skin; // r16
        unsigned int * boneidx; // r22
        class RwMatrixWeights * bonewt; // r2
        class RwV3d * vert; // r7
        signed int numVert; // r2
        signed int * cntarr; // r18
        class xBox * boxarr; // r17
        float * currwt; // r6
        unsigned int curridx; // r5
        unsigned int matidx; // r2
        class xSphere * spharr; // r2
        float * currwt; // r9
        float dist2; // r29+0x90
        unsigned int curridx; // r8
        signed int numused; // r16
        class RwMatrixTag * skinmat; // r2
        unsigned int AnimBoundUsrDatArray[2]; // r29+0x80
        signed int index; // r2
        signed int * idata; // r2
        signed int * idata_boneidx; // r7
        class xSphere * idata_sphere; // r6
        signed int * idata; // r2
        signed int * idata_sphstart; // r5
        signed int * idata_sphactual; // r4
        signed int numel; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AC410 -> 0x004AC418
*/
// Range: 0x4AC410 -> 0x4AC418
void iModelUnlock(class RpAtomic * pModel /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4AC410 -> 0x4AC418
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AC420 -> 0x004AC45C
*/
// Range: 0x4AC420 -> 0x4AC45C
class RwTexCoords * iModelLockAndGetTextureCoords(class RpAtomic * pModel /* r2 */, signed int * numVertices /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4AC420 -> 0x4AC45C
        class RpGeometry * pGeom; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AC460 -> 0x004AC4CC
*/
// Range: 0x4AC460 -> 0x4AC4CC
void iModelMaterialMul(class RpAtomic * model /* r16 */, float rm /* r29+0x30 */, float gm /* r29+0x30 */, float bm /* r29+0x30 */) {
    /* anonymous block */ {
        // Range: 0x4AC460 -> 0x4AC4CC
        class RpGeometry * geom; // r2
        float cols[3]; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AC4D0 -> 0x004AC75C
*/
// Range: 0x4AC4D0 -> 0x4AC75C
static class RpMaterial * iModelMaterialMulCB(class RpMaterial * material /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4AC4D0 -> 0x4AC75C
        class RwRGBA * rw_col; // r2
        class RwRGBA col; // r29+0xC
        float tmp; // r29+0x10
        float * mods; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AC760 -> 0x004AC7B4
*/
// Range: 0x4AC760 -> 0x4AC7B4
void iModelSetMaterialTexture(class RpAtomic * model /* r16 */, void * texture /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4AC760 -> 0x4AC7B4
        class RpGeometry * geom; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AC7C0 -> 0x004AC80C
*/
// Range: 0x4AC7C0 -> 0x4AC80C
static class RpMaterial * iModelSetMaterialTextureCB(class RpMaterial * material /* r16 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4AC7C0 -> 0x4AC80C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AC810 -> 0x004ACA10
*/
// Range: 0x4AC810 -> 0x4ACA10
void iModelResetMaterial(class RpAtomic * model /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4AC810 -> 0x4ACA10
        unsigned int i; // r20
        class RpGeometry * geom; // r2
        class RpMaterial * material; // r2
        class RwRGBA newColor; // r29+0xAC
        class RwRGBA newColor; // r29+0xA8
        class RwRGBA newColor; // r29+0xA4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004ACA10 -> 0x004ACAE0
*/
// Range: 0x4ACA10 -> 0x4ACAE0
void iModelSetMaterialAlpha(class RpAtomic * model /* r2 */, unsigned char alpha /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4ACA10 -> 0x4ACAE0
        unsigned int i; // r6
        class RpGeometry * geom; // r2
        class RpMaterial * material; // r2
        class RwRGBA * col; // r2
        class RwRGBA new_col; // r29+0xC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004ACAE0 -> 0x004AD078
*/
// Range: 0x4ACAE0 -> 0x4AD078
void iModelTagEval(class RpAtomic * model /* r29+0xFC */, class xModelTagWithNormal * tag /* r29+0xF8 */, class RwMatrixTag * mat /* r29+0xF0 */, class xVec3 * dest /* r29+0xE0 */, class xVec3 * normal /* r29+0xDC */) {
    /* anonymous block */ {
        // Range: 0x4ACAE0 -> 0x4AD078
        class RpSkin * skin; // r2
        class RwMatrixTag * skinmat; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AD080 -> 0x004AD390
*/
// Range: 0x4AD080 -> 0x4AD390
void iModelTagEval(class RpAtomic * model /* r2 */, class xModelTag * tag /* r21 */, class RwMatrixTag * mat /* r16 */, class xVec3 * dest /* r29+0xD0 */) {
    /* anonymous block */ {
        // Range: 0x4AD080 -> 0x4AD390
        class RpGeometry * geom; // r2
        class RpSkin * skin; // r2
        class RwMatrixTag * skinmat; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AD390 -> 0x004AD3F8
*/
// Range: 0x4AD390 -> 0x4AD3F8
unsigned int iModelTagSetup(class xModelTagWithNormal * tag /* r16 */, class RpAtomic * model /* r17 */, float x /* r29+0x30 */, float y /* r29+0x30 */, float z /* r29+0x30 */) {
    /* anonymous block */ {
        // Range: 0x4AD390 -> 0x4AD3F8
        unsigned int index; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AD400 -> 0x004AD408
*/
// Range: 0x4AD400 -> 0x4AD408
unsigned int iModelTagSetup(class xModelTag * tag /* r2 */, class RpAtomic * model /* r2 */, float x /* r29 */, float y /* r29 */, float z /* r29 */) {
    /* anonymous block */ {
        // Range: 0x4AD400 -> 0x4AD408
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AD410 -> 0x004AD5A0
*/
// Range: 0x4AD410 -> 0x4AD5A0
static unsigned int iModelTagInternal(class xModelTag * tag /* r17 */, class RpAtomic * model /* r2 */, float x /* r29+0x40 */, float y /* r29+0x40 */, float z /* r29+0x40 */, signed int closeV /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4AD410 -> 0x4AD5A0
        class RpGeometry * geom; // r2
        class RwV3d * vert; // r7
        signed int v; // r4
        signed int numV; // r2
        float distSqr; // r29+0x40
        float closeDistSqr; // r3
        class RpSkin * skin; // r18
        class RwMatrixWeights * wt; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AD5A0 -> 0x004AD7CC
*/
// Range: 0x4AD5A0 -> 0x4AD7CC
static unsigned int iModelTagUserData(class xModelTag * tag /* r21 */, class RpAtomic * model /* r20 */, float x /* r22 */, float y /* r21 */, float z /* r20 */, signed int closeV /* r19 */) {
    /* anonymous block */ {
        // Range: 0x4AD5A0 -> 0x4AD7CC
        signed int i; // r18
        signed int count; // r2
        class RpUserDataArray * array; // r22
        class RpUserDataArray * testarray; // r17
        float distSqr; // r29+0x90
        float closeDistSqr; // r3
        signed int numTags; // r2
        signed int t; // r6
        class xModelTag * tagList; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AD7D0 -> 0x004ADB50
*/
// Range: 0x4AD7D0 -> 0x4ADB50
unsigned int iModelNormalEval(class xVec3 * out /* r21 */, class RpAtomic & m /* r2 */, class RwMatrixTag * mat /* r20 */, unsigned int index /* r16 */, signed int size /* r29+0xEC */, class xVec3 * in /* r19 */) {
    /* anonymous block */ {
        // Range: 0x4AD7D0 -> 0x4ADB50
        class RpGeometry * geom; // r2
        signed int max_size; // r3
        class RpSkin * skin; // r17
        class RwMatrixTag * skin_mats; // r2
        float * bone_weights; // r29+0xD0
        unsigned int * bone_indices; // r2
        class xMat4x3 nmat; // r29+0xF0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004ADB50 -> 0x004ADEF0
*/
// Range: 0x4ADB50 -> 0x4ADEF0
unsigned int iModelVertEval(class RpAtomic * model /* r2 */, unsigned int index /* r18 */, unsigned int count /* r29+0xE0 */, class RwMatrixTag * mat /* r17 */, class xVec3 * vert /* r21 */, class xVec3 * dest /* r29+0xD0 */) {
    /* anonymous block */ {
        // Range: 0x4ADB50 -> 0x4ADEF0
        class RpGeometry * geom; // r2
        unsigned int numV; // r2
        class RpSkin * skin; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004ADEF0 -> 0x004AE064
*/
// Range: 0x4ADEF0 -> 0x4AE064
void iModel_SetLightKit(class xLightKit * lightKit /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4ADEF0 -> 0x4AE064
        class RpLight * amb; // r10
        class RpLight * dir[4]; // r29+0x30
        signed int lightTypes[5]; // r29+0x10
        unsigned int i; // r10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AE070 -> 0x004AE07C
*/
// Range: 0x4AE070 -> 0x4AE07C
unsigned int iModelVertCount(class RpAtomic * model /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4AE070 -> 0x4AE07C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AE080 -> 0x004AE130
*/
// Range: 0x4AE080 -> 0x4AE130
void iModelSetWorldBoundFromBox(class RpAtomic * model /* r2 */, class xBox * box /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4AE080 -> 0x4AE130
        float sizeX; // r29
        float sizeY; // r29
        float sizeZ; // r29
        class RwFrame * frame; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AE130 -> 0x004AE260
*/
// Range: 0x4AE130 -> 0x4AE260
class xSphere * iModelWorldBoundSphere(class RpAtomic * model /* r16 */, class RwMatrixTag * mat /* r19 */, class xSphere * sphere /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4AE130 -> 0x4AE260
        class RwSphere * modelsphere; // r18
        float xScale2; // r4
        float yScale2; // r3
        float zScale2; // r1
        class RwV3d * up; // r2
        class RwV3d * at; // r2
        class RwFrame * frame; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AE260 -> 0x004AE3A4
*/
// Range: 0x4AE260 -> 0x4AE3A4
void iModelRender(class RpAtomic * model /* r20 */, class RwMatrixTag * mat /* r19 */) {
    /* anonymous block */ {
        // Range: 0x4AE260 -> 0x4AE3A4
        class RwMatrixTag * pAnimOldMatrix; // r18
        class RwFrame * frame; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AE3B0 -> 0x004AE5BC
*/
// Range: 0x4AE3B0 -> 0x4AE5BC
void iModelAnimMatrices(class RpAtomic * model /* r2 */, class xQuat * quat /* r18 */, class xVec3 * tran /* r17 */, class RwMatrixTag * mat /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4AE3B0 -> 0x4AE5BC
        class RpHAnimHierarchy * pHierarchy; // r2
        class RwMatrixTag matrixStack[32]; // r29+0x50
        class RwMatrixTag * pMatrixStackTop; // r11
        class RpHAnimNodeInfo * pCurrentFrame; // r7
        signed int currentFrameFlags; // r2
        signed int i; // r6
        signed int numFrames; // r2
        class RwMatrixTag * pMatrixArray; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AE5C0 -> 0x004AE630
*/
// Range: 0x4AE5C0 -> 0x4AE630
void iModelQuatToMat(class xQuat * quat /* r18 */, class xVec3 * tran /* r17 */, class RwMatrixTag * mat /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4AE5C0 -> 0x4AE630
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AE630 -> 0x004AE698
*/
// Range: 0x4AE630 -> 0x4AE698
unsigned int iModelNumBones(class RpAtomic * model /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4AE630 -> 0x4AE698
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AE6A0 -> 0x004AE6E0
*/
// Range: 0x4AE6A0 -> 0x4AE6E0
class RpAtomic * iModelFile_RWMultiAtomic(class RpAtomic * model /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4AE6A0 -> 0x4AE6E0
        class RpClump * clump; // r2
        class RpAtomic * nextModel; // r29+0x1C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AE6E0 -> 0x004AE710
*/
// Range: 0x4AE6E0 -> 0x4AE710
static class RpAtomic * NextAtomicCallback(class RpAtomic * atomic /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4AE6E0 -> 0x4AE710
        class RpAtomic * * nextModel; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AE710 -> 0x004AE778
*/
// Range: 0x4AE710 -> 0x4AE778
void iModelUnload(class RpAtomic * userdata /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4AE710 -> 0x4AE778
        class RpClump * clump; // r17
        class RwFrame * frame; // r16
        class RwFrame * root; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AE780 -> 0x004AE7B4
*/
// Range: 0x4AE780 -> 0x4AE7B4
class RpAtomic * iModelFileNew(void * buffer /* r2 */, unsigned int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4AE780 -> 0x4AE7B4
        class RwMemory rwmem; // r29+0x18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AE7C0 -> 0x004AE9DC
*/
// Range: 0x4AE7C0 -> 0x4AE9DC
static class RpAtomic * iModelStreamRead(class RwStream * stream /* r17 */) {
    /* anonymous block */ {
        // Range: 0x4AE7C0 -> 0x4AE9DC
        class RpClump * clump; // r16
        unsigned int i; // r5
        unsigned int maxIndex; // r2
        float maxRadius; // r7
        float testRadius; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AE9E0 -> 0x004AEB18
*/
// Range: 0x4AE9E0 -> 0x4AEB18
static class RpAtomic * FindAtomicCallback(class RpAtomic * atomic /* r17 */) {
    /* anonymous block */ {
        // Range: 0x4AE9E0 -> 0x4AEB18
        class RpHAnimHierarchy * pHier; // r19
        class RpSkin * pSkin; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AEB20 -> 0x004AEBE4
*/
// Range: 0x4AEB20 -> 0x4AEBE4
void iModelInitOnce() {
    /* anonymous block */ {
        // Range: 0x4AEB20 -> 0x4AEBE4
        class RwFrame * frame; // r2
        class RwRGBAReal black; // r29+0x30
        signed int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AEBF0 -> 0x004AEBF8
*/
// Range: 0x4AEBF0 -> 0x4AEBF8
void iModelInit() {
    /* anonymous block */ {
        // Range: 0x4AEBF0 -> 0x4AEBF8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AEC00 -> 0x004AEC58
*/
// Range: 0x4AEC00 -> 0x4AEC58
class RpHAnimHierarchy * iModelGetHierarchy(class RpAtomic * imodel /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4AEC00 -> 0x4AEC58
        class RpHAnimHierarchy * hierarchy; // r29+0x2C
        class RwFrame * frame; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AEC60 -> 0x004AECB8
*/
// Range: 0x4AEC60 -> 0x4AECB8
static class RwFrame * GetChildFrameHierarchy(class RwFrame * frame /* r17 */, void * data /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4AEC60 -> 0x4AECB8
        class RpHAnimHierarchy * hierarchy; // r2
    }
}


