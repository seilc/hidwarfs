/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntTeleportBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003129C0 -> 0x00312B48
*/
// Range: 0x3129C0 -> 0x312B48
void zEntTeleportBoxEventCB(class xBase * to /* r2 */, unsigned int toEvent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3129C0 -> 0x312B48
        class _zEntTeleportBox * s; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntTeleportBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00312B50 -> 0x00312B58
*/
// Range: 0x312B50 -> 0x312B58
signed int zEntTeleportBox_playerIn() {
    /* anonymous block */ {
        // Range: 0x312B50 -> 0x312B58
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntTeleportBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00312B60 -> 0x00312BE0
*/
// Range: 0x312B60 -> 0x312BE0
void zEntTeleportBox_Load(class _zEntTeleportBox * ent /* r17 */, class xSerial * s /* r16 */) {
    /* anonymous block */ {
        // Range: 0x312B60 -> 0x312BE0
        signed int open; // r29+0x3C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntTeleportBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00312BE0 -> 0x00312C44
*/
// Range: 0x312BE0 -> 0x312C44
void zEntTeleportBox_Save(class _zEntTeleportBox * ent /* r17 */, class xSerial * s /* r16 */) {
    /* anonymous block */ {
        // Range: 0x312BE0 -> 0x312C44
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntTeleportBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00312C50 -> 0x00313364
*/
// Range: 0x312C50 -> 0x313364
void zEntTeleportBox_Update(class xEnt * rawent /* r2 */, class xScene * sc /* r2 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x312C50 -> 0x313364
        class _zEntTeleportBox * ent; // r18
        float distsqr; // r29+0xB0
        float dx__; // r29+0xB0
        float dy__; // r29+0xB0
        float dz__; // r29+0xB0
        class xVec3 playerMid; // r29+0xA0
        class _zEntTeleportBox * target; // r17
        class xMat4x3 & mat; // r16
        class xVec3 ypr; // r29+0x90
        class xVec3 dir; // r29+0x80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntTeleportBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00313370 -> 0x00313674
*/
// Range: 0x313370 -> 0x313674
void zEntTeleportBox_Setup(class _zEntTeleportBox * ent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x313370 -> 0x313674
        class _zEntTeleportBox * target; // r2
        class xBox wbox; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntTeleportBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00313680 -> 0x00314070
*/
// Range: 0x313680 -> 0x314070
void zEntTeleportBox_Init(class _zEntTeleportBox * ent /* r18 */, class teleport_asset * asset /* r17 */) {
    /* anonymous block */ {
        // Range: 0x313680 -> 0x314070
        class xEntAsset * easset; // r16
        unsigned int size; // r29+0x6C
        class xMarkerAsset * marker; // r2
        class xAnimTable * table; // r17
        class xAnimState * state; // r16
        void * buf; // r2
        class xAnimFile * afile; // r2
        class xAnimFile * afile; // r2
        class xAnimFile * afile; // r2
        class xAnimFile * afile; // r2
        class xAnimFile * afile; // r2
        class xAnimFile * afile; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntTeleportBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00314070 -> 0x00314078
*/
// Range: 0x314070 -> 0x314078
void zEntTeleportBox_Init(class xBase & data /* r2 */, class xDynAsset & asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x314070 -> 0x314078
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntTeleportBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00314080 -> 0x00314090
*/
// Range: 0x314080 -> 0x314090
static unsigned int JumpOutEffectJOAnimCB(void * object /* r2 */) {
    /* anonymous block */ {
        // Range: 0x314080 -> 0x314090
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntTeleportBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00314090 -> 0x00314100
*/
// Range: 0x314090 -> 0x314100
static unsigned int JumpOutEffectPlrEjectCB(void * object /* r2 */) {
    /* anonymous block */ {
        // Range: 0x314090 -> 0x314100
        class _zEntTeleportBox * tbox; // r2
        class xVec3 tmp; // r29+0x10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntTeleportBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00314100 -> 0x00314148
*/
// Range: 0x314100 -> 0x314148
static unsigned int JumpOutEffectPlrVisibleCB() {
    /* anonymous block */ {
        // Range: 0x314100 -> 0x314148
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntTeleportBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00314150 -> 0x00314178
*/
// Range: 0x314150 -> 0x314178
static unsigned int CtoOEffectTboxEnableCB(void * object /* r2 */) {
    /* anonymous block */ {
        // Range: 0x314150 -> 0x314178
        class _zEntTeleportBox * tbox; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntTeleportBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00314180 -> 0x00314190
*/
// Range: 0x314180 -> 0x314190
static unsigned int JumpInEffectJIAnimCB(void * object /* r2 */) {
    /* anonymous block */ {
        // Range: 0x314180 -> 0x314190
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntTeleportBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00314190 -> 0x003141A0
*/
// Range: 0x314190 -> 0x3141A0
static unsigned int JumpInEffectPlrTeleportCB(void * object /* r2 */) {
    /* anonymous block */ {
        // Range: 0x314190 -> 0x3141A0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntTeleportBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003141A0 -> 0x003141E0
*/
// Range: 0x3141A0 -> 0x3141E0
static unsigned int JumpInEffectPlrInvisibleCB() {
    /* anonymous block */ {
        // Range: 0x3141A0 -> 0x3141E0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntTeleportBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003141E0 -> 0x00314270
*/
// Range: 0x3141E0 -> 0x314270
static unsigned int CtoOCB(void * object /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3141E0 -> 0x314270
        class xVec3 tmp; // r29+0x10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntTeleportBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00314270 -> 0x003142D4
*/
// Range: 0x314270 -> 0x3142D4
static unsigned int CtoOCheck(void * object /* r2 */) {
    /* anonymous block */ {
        // Range: 0x314270 -> 0x3142D4
        class zEnt * player; // r2
        float dx__; // r29
        float dy__; // r29
        float dz__; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntTeleportBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003142E0 -> 0x003142EC
*/
// Range: 0x3142E0 -> 0x3142EC
static unsigned int JOtoOCB(void * object /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3142E0 -> 0x3142EC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntTeleportBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003142F0 -> 0x003142FC
*/
// Range: 0x3142F0 -> 0x3142FC
static unsigned int JOtoOCheck(void * object /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3142F0 -> 0x3142FC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntTeleportBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00314300 -> 0x00314310
*/
// Range: 0x314300 -> 0x314310
static unsigned int JItoOCB(void * object /* r2 */) {
    /* anonymous block */ {
        // Range: 0x314300 -> 0x314310
        class _zEntTeleportBox * tbox; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntTeleportBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00314310 -> 0x0031431C
*/
// Range: 0x314310 -> 0x31431C
static unsigned int JItoOCheck(void * object /* r2 */) {
    /* anonymous block */ {
        // Range: 0x314310 -> 0x31431C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntTeleportBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00314320 -> 0x0031432C
*/
// Range: 0x314320 -> 0x31432C
static unsigned int JumpOutCB(void * object /* r2 */) {
    /* anonymous block */ {
        // Range: 0x314320 -> 0x31432C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntTeleportBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00314330 -> 0x0031433C
*/
// Range: 0x314330 -> 0x31433C
static unsigned int JumpOutCheck(void * object /* r2 */) {
    /* anonymous block */ {
        // Range: 0x314330 -> 0x31433C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntTeleportBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00314340 -> 0x0031434C
*/
// Range: 0x314340 -> 0x31434C
static unsigned int JumpInCB(void * object /* r2 */) {
    /* anonymous block */ {
        // Range: 0x314340 -> 0x31434C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntTeleportBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00314350 -> 0x0031435C
*/
// Range: 0x314350 -> 0x31435C
static unsigned int JumpInCheck(void * object /* r2 */) {
    /* anonymous block */ {
        // Range: 0x314350 -> 0x31435C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntTeleportBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00314360 -> 0x00314370
*/
// Range: 0x314360 -> 0x314370
unsigned int OpenCheck(void * object /* r2 */) {
    /* anonymous block */ {
        // Range: 0x314360 -> 0x314370
    }
}


