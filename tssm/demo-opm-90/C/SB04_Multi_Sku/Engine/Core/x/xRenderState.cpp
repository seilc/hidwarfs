/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A0820 -> 0x003A0850
*/
// Range: 0x3A0820 -> 0x3A0850
void xRenderTexCacheRestore() {
    /* anonymous block */ {
        // Range: 0x3A0820 -> 0x3A0850
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A0850 -> 0x003A08BC
*/
// Range: 0x3A0850 -> 0x3A08BC
void xRenderFixIMEnd() {
    /* anonymous block */ {
        // Range: 0x3A0850 -> 0x3A08BC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A08C0 -> 0x003A08F4
*/
// Range: 0x3A08C0 -> 0x3A08F4
void xRenderFixIMBegin() {
    /* anonymous block */ {
        // Range: 0x3A08C0 -> 0x3A08F4
        signed int (* * im_setup_cb)(class RxPS2AllPipeData *, class RwMatrixTag * *); // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A0900 -> 0x003A0914
*/
// Range: 0x3A0900 -> 0x3A0914
void xRenderFixUntexturedEnd() {
    /* anonymous block */ {
        // Range: 0x3A0900 -> 0x3A0914
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A0920 -> 0x003A0A98
*/
// Range: 0x3A0920 -> 0x3A0A98
void xRenderFixUntexturedBegin(class RpAtomic * atomic /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3A0920 -> 0x3A0A98
        enum RpMatFXMaterialFlags matfx; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A0AA0 -> 0x003A0B14
*/
// Range: 0x3A0AA0 -> 0x3A0B14
static signed int yet_another_bullshit_workaround(class RxPS2AllPipeData * ps2AllPipeData /* r16 */, class RwMatrixTag * * transform /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3A0AA0 -> 0x3A0B14
        signed int ret; // r2
        class RpMaterial * material; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A0B20 -> 0x003A0FA4
*/
// Range: 0x3A0B20 -> 0x3A0FA4
signed int HackedRpPDS_G3x_Generic_MeshPS2AllBridgeCallBack(class RxPS2AllPipeData * ps2AllPipeData /* r19 */) {
    /* anonymous block */ {
        // Range: 0x3A0B20 -> 0x3A0FA4
        signed int skyAlphaTex'252; // r2
        __int128 * _rwDMAPktPtr'251; // r2
        signed long old_sky_test; // r2
        class RwTexture * _nwtx; // r2
        class RwRaster * _nwrs; // r18
        unsigned int cFormat; // r2
        unsigned long tmp; // r2
        unsigned long __tmp1; // r2
        unsigned long __tmp1; // r2
        unsigned long __tmp1; // r2
        unsigned int __skySwitchFlag; // r2
        unsigned long __tmp; // r2
        unsigned long __tmp1; // r2
        void * _kohd; // r2
        unsigned long tmp; // r2
        class rwPS2AllResEntryHeader * _p2rh; // r2
        unsigned long __tmp; // r2
        unsigned long __tmp1; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A0FB0 -> 0x003A1078
*/
// Range: 0x3A0FB0 -> 0x3A1078
signed int HackedRpPDS_G3_Matfx_PS2AllMatBridgeCallBack(class RxPS2AllPipeData * ps2AllPipeData /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3A0FB0 -> 0x3A1078
        enum RpMatFXMaterialFlags effectType; // r2
        class rpMatFXMaterialData * materialData; // r2
        void * * oldVU1CodeArray; // r2
        signed int ret; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A1080 -> 0x003A1734
*/
// Range: 0x3A1080 -> 0x3A1734
signed int HackedRpPDS_G3_Gem_PS2AllMatBridgeCallBack(class RxPS2AllPipeData * ps2AllPipeData /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3A1080 -> 0x3A1734
        __int128 * _rwDMAPktPtr'408; // r3
        unsigned int skyUserSwitch1'407; // r4
        class RpMaterial * material; // r2
        class rpMatFXMaterialData * materialData; // r2
        class RwTexture * baseTexture; // r2
        class RwTexture * envMapTexture; // r2
        class RwFrame * envMapFrame; // r2
        class RwMatrixTag envMapMatrix; // r29+0x80
        float envMapCoef; // r29+0xEC
        unsigned long alpha_2; // r2
        unsigned long clamp_2; // r29+0xE0
        unsigned long fogcol_2; // r2
        unsigned long test_2; // r2
        unsigned long tex1_2; // r29+0xD8
        unsigned long zbuf_2; // r2
        unsigned long rastex1; // r29+0xD0
        unsigned long rastex2; // r29+0xC8
        unsigned long tmp; // r2
        unsigned long tmp1; // r2
        unsigned long tmp; // r2
        unsigned long __tmp1; // r2
        unsigned long __tmp1; // r2
        unsigned long __tmp1; // r2
        unsigned int __skySwitchFlag; // r2
        unsigned long __tmp; // r2
        unsigned long __tmp1; // r2
        void * _kohd; // r2
        unsigned long tmp; // r2
        class rwPS2AllResEntryHeader * _p2rh; // r2
        unsigned long __tmp; // r2
        unsigned long __tmp1; // r2
        unsigned long tmp; // r2
        unsigned long tmp1; // r2
        float envParams[4]; // @ 0x006027C0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A1740 -> 0x003A1D5C
*/
// Range: 0x3A1740 -> 0x3A1D5C
signed int HackedRpPDS_G3_Uva_PS2AllMatBridgeCallBack(class RxPS2AllPipeData * ps2AllPipeData /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A1740 -> 0x3A1D5C
        signed int skyAlphaTex'317; // r2
        __int128 * _rwDMAPktPtr'316; // r3
        unsigned int skyUserSwitch1'315; // r4
        class RwMatrixTag * baseTransform; // r20
        class RwMatrixTag identity; // r29+0x60
        unsigned long tmp; // r2
        unsigned long tmp1; // r2
        signed long old_sky_test; // r2
        class RwTexture * _nwtx; // r2
        class RwRaster * _nwrs; // r19
        unsigned int cFormat; // r2
        unsigned long tmp; // r2
        unsigned long __tmp1; // r2
        unsigned long __tmp1; // r2
        unsigned long __tmp1; // r2
        unsigned int __skySwitchFlag; // r2
        unsigned long __tmp; // r2
        unsigned long __tmp1; // r2
        void * _kohd; // r2
        unsigned long tmp; // r2
        class rwPS2AllResEntryHeader * _p2rh; // r2
        unsigned long __tmp; // r2
        unsigned long __tmp1; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A1D60 -> 0x003A2298
*/
// Range: 0x3A1D60 -> 0x3A2298
signed int HackedRpMeshPS2AllBridgeCallBack(class RxPS2AllPipeData * ps2AllPipeData /* r19 */) {
    /* anonymous block */ {
        // Range: 0x3A1D60 -> 0x3A2298
        signed int skyAlphaTex'279; // r2
        __int128 * _rwDMAPktPtr'278; // r3
        unsigned int skyUserSwitch1'277; // r4
        signed long old_sky_test; // r2
        class RwTexture * _nwtx; // r2
        class RwRaster * _nwrs; // r18
        unsigned int cFormat; // r2
        unsigned long tmp; // r2
        unsigned long __tmp1; // r2
        unsigned long __tmp1; // r2
        unsigned long __tmp1; // r2
        unsigned int __skySwitchFlag; // r2
        unsigned long __tmp; // r2
        unsigned long __tmp1; // r2
        void * _kohd; // r2
        unsigned long tmp; // r2
        class rwPS2AllResEntryHeader * _p2rh; // r2
        unsigned long __tmp; // r2
        unsigned long __tmp1; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A22A0 -> 0x003A2530
*/
// Range: 0x3A22A0 -> 0x3A2530
static void Hacked_rpMatFXSkyUploadTextures(class RwTexture * _tex_1 /* r20 */, class RwTexture * _tex_2 /* r19 */, unsigned long & _tex0_1 /* r18 */, unsigned long & _tex0_2 /* r21 */, unsigned long & _tex1_1 /* r22 */, unsigned long & _tex1_2 /* r23 */, unsigned long & _clamp_1 /* r17 */, unsigned long & _clamp_2 /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A22A0 -> 0x3A2530
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A2530 -> 0x003A25F0
*/
// Range: 0x3A2530 -> 0x3A25F0
void LessRetardedRpMeshPS2AllGIFTagUpload(class RxPS2AllPipeData * ps2AllPipeData /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3A2530 -> 0x3A25F0
        unsigned long __tmp1; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A25F0 -> 0x003A2610
*/
// Range: 0x3A25F0 -> 0x3A2610
void xRenderSceneExit() {
    /* anonymous block */ {
        // Range: 0x3A25F0 -> 0x3A2610
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A2610 -> 0x003A263C
*/
// Range: 0x3A2610 -> 0x3A263C
void xRenderSceneEnter() {
    /* anonymous block */ {
        // Range: 0x3A2610 -> 0x3A263C
    }
}


