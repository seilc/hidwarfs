/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00408480 -> 0x0040855C
*/
// Range: 0x408480 -> 0x40855C
class RpAtomic * xModelFindAtomic(unsigned int id /* r19 */, unsigned int * actual_id /* r18 */) {
    /* anonymous block */ {
        // Range: 0x408480 -> 0x40855C
        class RpAtomic * atomic; // r17
        unsigned int aid; // r16
        class xModelAssetInfo * minf; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00408560 -> 0x0040860C
*/
// Range: 0x408560 -> 0x40860C
static class RpAtomic * find_first_atomic(class xModelAssetInfo * minf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x408560 -> 0x40860C
        class xModelAssetInst * inst; // r16
        class xModelAssetInst * end_inst; // r2
        void * data; // r2
        class RpAtomic * child_atomic; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00408610 -> 0x00408654
*/
// Range: 0x408610 -> 0x408654
unsigned char xModelIsPreinstanced(class xModelInstance * model /* r2 */) {
    /* anonymous block */ {
        // Range: 0x408610 -> 0x408654
        class RpGeometry * geom; // r2
        class RpMorphTarget * mt; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00408660 -> 0x004086A0
*/
// Range: 0x408660 -> 0x4086A0
void xModelSetLightKit(class xModelInstance * minst /* r2 */, class xLightKit * lightKit /* r2 */) {
    /* anonymous block */ {
        // Range: 0x408660 -> 0x4086A0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004086A0 -> 0x00408728
*/
// Range: 0x4086A0 -> 0x408728
signed int xModelCullSingle(class xModelInstance * minst /* r17 */) {
    /* anonymous block */ {
        // Range: 0x4086A0 -> 0x408728
        signed int result; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00408730 -> 0x0040881C
*/
// Range: 0x408730 -> 0x40881C
signed int xModelCullGroupPlusShadow(class xModelInstance * minst /* r7 */, float shadowDepth /* r29+0x30 */, signed int * shadowOutside /* r16 */) {
    /* anonymous block */ {
        // Range: 0x408730 -> 0x40881C
        class xVec3 shadVec; // r29+0x20
        class xBox * bbox; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00408820 -> 0x00408878
*/
// Range: 0x408820 -> 0x408878
signed int xModelCullGroup(class xModelInstance * minst /* r3 */) {
    /* anonymous block */ {
        // Range: 0x408820 -> 0x408878
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00408880 -> 0x00408A50
*/
// Range: 0x408880 -> 0x408A50
signed int xModelBoxCullPlusShadow(class xBox * box /* r2 */, class xVec3 * shadowVec /* r2 */, signed int * shadowOutside /* r2 */) {
    /* anonymous block */ {
        // Range: 0x408880 -> 0x408A50
        class RwFrustumPlane * frustumPlane; // r7
        signed int numPlanes; // r3
        class RwCamera * camera; // r2
        float nearDot; // r29
        float centerX; // r5
        float centerY; // r4
        float centerZ; // r3
        float sizeX; // r2
        float sizeY; // r1
        float sizeZ; // r29
        float centerDot; // r29
        float shadowDot; // r29
        float centerDot; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00408A50 -> 0x00408B54
*/
// Range: 0x408A50 -> 0x408B54
signed int xModelBoxCull(class xBox * box /* r2 */) {
    /* anonymous block */ {
        // Range: 0x408A50 -> 0x408B54
        class RwFrustumPlane * frustumPlane; // r4
        signed int numPlanes; // r6
        enum RwFrustumTestResult result; // r5
        float centerX; // r11
        float centerY; // r10
        float centerZ; // r9
        float sizeX; // r8
        float sizeY; // r7
        float sizeZ; // r6
        float centerDot; // r5
        float nearDot; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00408B60 -> 0x00408C90
*/
// Range: 0x408B60 -> 0x408C90
signed int xModelSphereCullPlusShadow(class xSphere * sphere /* r2 */, class xVec3 * shadowVec /* r2 */, signed int * shadowOutside /* r2 */) {
    /* anonymous block */ {
        // Range: 0x408B60 -> 0x408C90
        class RwSphere * worldsph; // r2
        class RwFrustumPlane * frustumPlane; // r3
        signed int numPlanes; // r7
        float nDot; // r29
        float nDot; // r29
        float sDot; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00408C90 -> 0x00408CBC
*/
// Range: 0x408C90 -> 0x408CBC
signed int xModelSphereCull(class xSphere * sphere /* r2 */) {
    /* anonymous block */ {
        // Range: 0x408C90 -> 0x408CBC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00408CC0 -> 0x00408DF8
*/
// Range: 0x408CC0 -> 0x408DF8
void xModelGetBoneLocationScaled(class xVec3 & loc /* r2 */, class xModelInstance & model /* r2 */, unsigned int index /* r2 */) {
    /* anonymous block */ {
        // Range: 0x408CC0 -> 0x408DF8
        class xMat4x3 temp_mat; // r29
        class xMat4x3 * root_mat; // r7
        class xMat4x3 & anim_mat; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00408E00 -> 0x00408EB8
*/
// Range: 0x408E00 -> 0x408EB8
void xModelGetBoneMat(class xMat4x3 & mat /* r2 */, class xModelInstance & model /* r2 */, unsigned int index /* r2 */) {
    /* anonymous block */ {
        // Range: 0x408E00 -> 0x408EB8
        class xMat4x3 & root_mat; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00408EC0 -> 0x00408F48
*/
// Range: 0x408EC0 -> 0x408F48
void xModelGetBoneLocation(class xVec3 & loc /* r2 */, class xModelInstance & model /* r2 */, unsigned int index /* r2 */) {
    /* anonymous block */ {
        // Range: 0x408EC0 -> 0x408F48
        class xMat4x3 & root_mat; // r2
        class xMat4x3 & anim_mat; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00408F50 -> 0x00409124
*/
// Range: 0x408F50 -> 0x409124
void xModelAnimCollRefresh(class xModelInstance & cm /* r17 */) {
    /* anonymous block */ {
        // Range: 0x408F50 -> 0x409124
        unsigned int size; // r2
        class xMat4x3 & mat; // r2
        class xMat4x3 old_mat; // r29+0x60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00409130 -> 0x004091A4
*/
// Range: 0x409130 -> 0x4091A4
void xModelAnimCollStart(class xModelInstance & m /* r16 */) {
    /* anonymous block */ {
        // Range: 0x409130 -> 0x4091A4
        unsigned int size; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004091B0 -> 0x004091B8
*/
// Range: 0x4091B0 -> 0x4091B8
void xModel_SceneExit(class RpWorld * world /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4091B0 -> 0x4091B8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004091C0 -> 0x004091C8
*/
// Range: 0x4091C0 -> 0x4091C8
void xModel_SceneEnter(class RpWorld * world /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4091C0 -> 0x4091C8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004091D0 -> 0x00409260
*/
// Range: 0x4091D0 -> 0x409260
static void CameraDestroy(class RwCamera * camera /* r17 */) {
    /* anonymous block */ {
        // Range: 0x4091D0 -> 0x409260
        class RwRaster * raster; // r2
        class RwFrame * frame; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00409260 -> 0x004096AC
*/
// Range: 0x409260 -> 0x4096AC
void xModelRender2D(class xModelInstance & model /* r21 */, class basic_rect & r /* r20 */, class xVec3 & from /* r19 */, class xVec3 & to /* r18 */) {
    /* anonymous block */ {
        // Range: 0x409260 -> 0x4096AC
        class RwCamera * camera; // r2
        class RwMatrixTag * cammat; // r17
        class xMat4x3 objmat; // r29+0x170
        class xMat4x3 shearmat; // r29+0x130
        class xMat4x3 temp1; // r29+0xF0
        class xMat4x3 temp2; // r29+0xB0
        class RwV2d * camvw; // r2
        float viewscale; // r29+0x1C0
        float shearX; // r29+0x1C0
        float shearY; // r29+0x1C0
        class xMat4x3 objmat1; // r29+0x70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004096B0 -> 0x00409710
*/
// Range: 0x4096B0 -> 0x409710
void xModelRender(class xModelInstance * modelInst /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4096B0 -> 0x409710
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00409710 -> 0x00409A54
*/
// Range: 0x409710 -> 0x409A54
void xModelRenderSingle(class xModelInstance * modelInst /* r17 */) {
    /* anonymous block */ {
        // Range: 0x409710 -> 0x409A54
        unsigned char reset; // r16
        class xMat3x3 tmpmat; // r29+0x40
        float * mat; // r2
        float * scale; // r2
        unsigned char alpha; // r2
        class xAnimPlay * a; // r2
        unsigned short i; // r8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00409A60 -> 0x00409ABC
*/
// Range: 0x409A60 -> 0x409ABC
void xModelEval(class xModelInstance * modelInst /* r17 */) {
    /* anonymous block */ {
        // Range: 0x409A60 -> 0x409ABC
        class xBox * combinedAnimBound; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00409AC0 -> 0x00409E40
*/
// Range: 0x409AC0 -> 0x409E40
void xModelEvalSingle(class xModelInstance * modelInst /* r18 */, class xBox * combinedAnimBound /* r17 */) {
    /* anonymous block */ {
        // Range: 0x409AC0 -> 0x409E40
        signed int i; // r12
        unsigned short flags; // r2
        class xModelInstance * dad; // r2
        unsigned char * remap; // r2
        class xMat4x3 & mat; // r2
        class xMat3x3 temp_mat; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00409E40 -> 0x00409EC4
*/
// Range: 0x409E40 -> 0x409EC4
void xModelUpdate(class xModelInstance * modelInst /* r16 */, float timeDelta /* r20 */) {
    /* anonymous block */ {
        // Range: 0x409E40 -> 0x409EC4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00409ED0 -> 0x00409F44
*/
// Range: 0x409ED0 -> 0x409F44
void xModelInstanceUpgradeBrotherShared(class xModelInstance * inst /* r17 */, unsigned int flags /* r16 */) {
    /* anonymous block */ {
        // Range: 0x409ED0 -> 0x409F44
        unsigned int boneCount; // r2
        class RwMatrixTag * allocmats; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00409F50 -> 0x00409FAC
*/
// Range: 0x409F50 -> 0x409FAC
void xModelInstanceAttach(class xModelInstance * inst /* r2 */, class xModelInstance * parent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x409F50 -> 0x409FAC
        class xModelInstance * curr; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00409FB0 -> 0x0040A09C
*/
// Range: 0x409FB0 -> 0x40A09C
void xModelInstanceFree(class xModelInstance * modelInst /* r16 */) {
    /* anonymous block */ {
        // Range: 0x409FB0 -> 0x40A09C
        class xModelInstance * curr; // r5
        class xModelInstance * * prev; // r4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040A0A0 -> 0x0040A4B4
*/
// Range: 0x40A0A0 -> 0x40A4B4
class xModelInstance * xModelInstanceAllocReuse(class RpAtomic * data /* r20 */, void * object /* r22 */, unsigned short flags /* r19 */, unsigned char boneIndex /* r23 */, unsigned char * boneRemap /* r30 */, class xModelInstance * reuse_instance /* r18 */) {
    /* anonymous block */ {
        // Range: 0x40A0A0 -> 0x40A4B4
        signed int i; // r5
        unsigned int boneCount; // r2
        unsigned int matCount; // r2
        class xModelPool * curr; // r3
        class xModelPool * found; // r17
        class xModelInstance * dude; // r2
        class RwMatrixTag * allocmats; // r2
        unsigned char nosrcblend; // r2
        unsigned char nodestblend; // r2
        class xModelPipe zeroPipe; // @ 0x006380C8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040A4C0 -> 0x0040A6FC
*/
// Range: 0x40A4C0 -> 0x40A6FC
void xModelPoolInit(unsigned int count /* r18 */, unsigned int numMatrices /* r17 */) {
    /* anonymous block */ {
        // Range: 0x40A4C0 -> 0x40A6FC
        signed int i; // r10
        unsigned char * buffer; // r9
        class RwMatrixTag * mat; // r2
        class xModelPool * pool; // r2
        class xModelPool * curr; // r6
        class xModelPool * * prev; // r4
        class xModelInstance * inst; // r8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040A700 -> 0x0040A7D8
*/
// Range: 0x40A700 -> 0x40A7D8
void xModelInitOnce() {
    /* anonymous block */ {
        // Range: 0x40A700 -> 0x40A7D8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040A7E0 -> 0x0040A804
*/
// Range: 0x40A7E0 -> 0x40A804
void xModelInit() {
    /* anonymous block */ {
        // Range: 0x40A7E0 -> 0x40A804
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040A810 -> 0x0040A880
*/
// Range: 0x40A810 -> 0x40A880
class xModelPipe xModelGetPipe(class RpAtomic * model /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40A810 -> 0x40A880
        signed int i; // r9
    }
}


