/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zAssetTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00397BE0 -> 0x00397BE8
*/
// Range: 0x397BE0 -> 0x397BE8
static void MovePoint_Unload(void * userdata /* r2 */) {
    /* anonymous block */ {
        // Range: 0x397BE0 -> 0x397BE8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zAssetTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00397BF0 -> 0x00397BF8
*/
// Range: 0x397BF0 -> 0x397BF8
static void LightKit_Unload(void * userdata /* r2 */) {
    /* anonymous block */ {
        // Range: 0x397BF0 -> 0x397BF8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zAssetTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00397C00 -> 0x00397C08
*/
// Range: 0x397C00 -> 0x397C08
static void Anim_Unload() {
    /* anonymous block */ {
        // Range: 0x397C00 -> 0x397C08
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zAssetTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00397C10 -> 0x003984A0
*/
// Range: 0x397C10 -> 0x3984A0
static void * ATBL_Read(void * indata /* r20 */, unsigned int * outsize /* r30 */) {
    /* anonymous block */ {
        // Range: 0x397C10 -> 0x3984A0
        unsigned int i; // r18
        unsigned int j; // r7
        unsigned int debugNum; // r21
        unsigned int tmpsize; // r29+0xCC
        class xAnimTable * table; // r22
        class xAnimState * astate; // r17
        unsigned char * zaBytes; // r2
        class xAnimAssetTable * zaTbl; // r2
        void * * zaRaw; // r16
        class xAnimAssetFile * zaFile; // r23
        class xAnimAssetState * zaState; // r19
        signed int k; // r8
        signed int num_raw_data; // r2
        class xAnimFile * * fList; // r2
        char * animation_name; // r22
        class xAnimTable * (* constructor)(); // r6
        signed int i; // r5
        class xAnimTransition * atran; // r2
        char * tmpstr; // r17
        class xAnimFile * foundFile; // r5
        class xAnimState * endState; // r21
        class xAnimFile * endPose; // r2
        unsigned int i; // r18
        class xAnimFile * file; // r2
        unsigned int j; // r9
        class xAnimFile * endPose; // r2
        class xAnimState * state; // r21
        class xAnimAssetEffect * zaEffect; // r17
        class xAnimEffect * effect; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zAssetTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003984A0 -> 0x003984BC
*/
// Range: 0x3984A0 -> 0x3984BC
static void * FindAssetCB(unsigned int ID /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3984A0 -> 0x3984BC
        unsigned int size; // r29+0x1C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zAssetTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003984C0 -> 0x003985C8
*/
// Range: 0x3984C0 -> 0x3985C8
static unsigned int soundEffectCB(unsigned int cbenum /* r19 */, class xAnimActiveEffect * acteffect /* r18 */, void * object /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3984C0 -> 0x3985C8
        unsigned int sndhandle; // r16
        class xEnt * ent_tmp; // r2
        class zAnimFxSoundGroup * snd; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zAssetTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003985D0 -> 0x003985D8
*/
// Range: 0x3985D0 -> 0x3985D8
static unsigned int dummyEffectCB() {
    /* anonymous block */ {
        // Range: 0x3985D0 -> 0x3985D8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zAssetTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003985E0 -> 0x00398604
*/
// Range: 0x3985E0 -> 0x398604
void TextureRW3_Unload(void * userdata /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3985E0 -> 0x398604
        class RwTexture * tex; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zAssetTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00398610 -> 0x00398760
*/
// Range: 0x398610 -> 0x398760
void * RWTX_Read(void * indata /* r2 */, unsigned int insize /* r19 */, unsigned int * outsize /* r16 */) {
    /* anonymous block */ {
        // Range: 0x398610 -> 0x398760
        class RwTexDictionary * txd; // r18
        class RwMemory rwmem; // r29+0x60
        class RwStream * stream; // r17
        class RwTexture * tex; // r29+0x6C
        class RwError error; // r29+0x58
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zAssetTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00398760 -> 0x00398784
*/
// Range: 0x398760 -> 0x398784
static class RwTexture * TexCB(class RwTexture * texture /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x398760 -> 0x398784
        class RwTexture * * texFound; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zAssetTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00398790 -> 0x003987B8
*/
// Range: 0x398790 -> 0x3987B8
static void JSP_Unload(void * userdata /* r2 */) {
    /* anonymous block */ {
        // Range: 0x398790 -> 0x3987B8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zAssetTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003987C0 -> 0x00398834
*/
// Range: 0x3987C0 -> 0x398834
static void * JSP_Read(unsigned int assetid /* r3 */, void * indata /* r2 */, unsigned int insize /* r2 */, unsigned int * outsize /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3987C0 -> 0x398834
        class xJSPHeader * retjsp; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zAssetTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00398840 -> 0x00398850
*/
// Range: 0x398840 -> 0x398850
static void BSP_Unload() {
    /* anonymous block */ {
        // Range: 0x398840 -> 0x398850
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zAssetTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00398850 -> 0x0039894C
*/
// Range: 0x398850 -> 0x39894C
static void * BSP_Read(void * indata /* r2 */, unsigned int insize /* r2 */, unsigned int * outsize /* r18 */) {
    /* anonymous block */ {
        // Range: 0x398850 -> 0x39894C
        class RwStream * stream; // r17
        class RwMemory rwmem; // r29+0x58
        class RwChunkHeaderInfo chunkHeaderInfo; // r29+0x40
        class RpWorld * bsp; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zAssetTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00398950 -> 0x00398970
*/
// Range: 0x398950 -> 0x398970
static void Model_Unload(void * userdata /* r2 */) {
    /* anonymous block */ {
        // Range: 0x398950 -> 0x398970
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zAssetTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00398970 -> 0x00398A90
*/
// Range: 0x398970 -> 0x398A90
void * init(void * indata /* r2 */, unsigned int insize /* r2 */, unsigned int * outsize /* r2 */) {
    /* anonymous block */ {
        // Range: 0x398970 -> 0x398A90
        class spline_path * path; // r17
        unsigned int * forward_ids; // r2
        unsigned int * backward_ids; // r16
        signed int i; // r20
        signed int i; // r19
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zAssetTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00398A90 -> 0x00398AC4
*/
// Range: 0x398A90 -> 0x398AC4
void * Spline_Read(void * indata /* r2 */, unsigned int insize /* r2 */, unsigned int * outsize /* r2 */) {
    /* anonymous block */ {
        // Range: 0x398A90 -> 0x398AC4
        class NURBS * nurbs; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zAssetTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00398AD0 -> 0x00398AE4
*/
// Range: 0x398AD0 -> 0x398AE4
static void * Curve_Read(void * indata /* r2 */, unsigned int insize /* r2 */, unsigned int * outsize /* r2 */) {
    /* anonymous block */ {
        // Range: 0x398AD0 -> 0x398AE4
        class xCurveAsset * curve_asset; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zAssetTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00398AF0 -> 0x00398B4C
*/
// Range: 0x398AF0 -> 0x398B4C
static void * Model_Read(void * indata /* r2 */, unsigned int insize /* r2 */, unsigned int * outsize /* r17 */) {
    /* anonymous block */ {
        // Range: 0x398AF0 -> 0x398B4C
        class RpAtomic * model; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zAssetTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00398B50 -> 0x00398B58
*/
// Range: 0x398B50 -> 0x398B58
void zAssetShutdown() {
    /* anonymous block */ {
        // Range: 0x398B50 -> 0x398B58
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zAssetTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00398B60 -> 0x00398BB8
*/
// Range: 0x398B60 -> 0x398BB8
void zAssetStartup() {
    /* anonymous block */ {
        // Range: 0x398B60 -> 0x398BB8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zAssetTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00398BC0 -> 0x00398BC8
*/
// Range: 0x398BC0 -> 0x398BC8
void * Dash_Track_Read() {
    /* anonymous block */ {
        // Range: 0x398BC0 -> 0x398BC8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zAssetTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00398BD0 -> 0x00398BD8
*/
// Range: 0x398BD0 -> 0x398BD8
static void * Navigation_Mesh_Read() {
    /* anonymous block */ {
        // Range: 0x398BD0 -> 0x398BD8
    }
}


