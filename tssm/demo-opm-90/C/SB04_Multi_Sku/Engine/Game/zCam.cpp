/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00396B90 -> 0x00396B98
*/
// Range: 0x396B90 -> 0x396B98
class zCamSB * zCamGetDefault() {
    /* anonymous block */ {
        // Range: 0x396B90 -> 0x396B98
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00396BA0 -> 0x00396BAC
*/
// Range: 0x396BA0 -> 0x396BAC
class xMat4x3 & zCamGetMatrix() {
    /* anonymous block */ {
        // Range: 0x396BA0 -> 0x396BAC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00396BB0 -> 0x00396BC8
*/
// Range: 0x396BB0 -> 0x396BC8
void zCamRemove(class xCam & cam /* r3 */, unsigned char force_cut /* r2 */) {
    /* anonymous block */ {
        // Range: 0x396BB0 -> 0x396BC8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00396BD0 -> 0x00396BE8
*/
// Range: 0x396BD0 -> 0x396BE8
void zCamAdd(class xCam & cam /* r3 */, unsigned char force_cut /* r2 */) {
    /* anonymous block */ {
        // Range: 0x396BD0 -> 0x396BE8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00396BF0 -> 0x00396BFC
*/
// Range: 0x396BF0 -> 0x396BFC
void zCamEndRender() {
    /* anonymous block */ {
        // Range: 0x396BF0 -> 0x396BFC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00396C00 -> 0x00396C10
*/
// Range: 0x396C00 -> 0x396C10
void zCamBeginRender() {
    /* anonymous block */ {
        // Range: 0x396C00 -> 0x396C10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00396C10 -> 0x00396C1C
*/
// Range: 0x396C10 -> 0x396C1C
void zCamPrepareRender() {
    /* anonymous block */ {
        // Range: 0x396C10 -> 0x396C1C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00396C20 -> 0x00396E70
*/
// Range: 0x396C20 -> 0x396E70
static void zCamNotifyTriggers() {
    /* anonymous block */ {
        // Range: 0x396C20 -> 0x396E70
        class xScene & s; // r2
        class xSphere camSphere; // r29+0x60
        class xVec3 dummyDir; // r29+0x70
        class zEntTrigger * * it; // r20
        class zEntTrigger * * end; // r2
        class zEntTrigger & trig; // r19
        unsigned char want_enter; // r10
        unsigned char want_exit; // r9
        class xLinkAsset * link; // r8
        class xLinkAsset * end_link; // r2
        unsigned char inside; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00396E70 -> 0x00396FA0
*/
// Range: 0x396E70 -> 0x396FA0
void zCamUpdate(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x396E70 -> 0x396FA0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00396FA0 -> 0x003970B8
*/
// Range: 0x396FA0 -> 0x3970B8
void zCamReset(class xMat4x3 & mat /* r16 */) {
    /* anonymous block */ {
        // Range: 0x396FA0 -> 0x3970B8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003970C0 -> 0x003970F4
*/
// Range: 0x3970C0 -> 0x3970F4
void zCamSceneExit() {
    /* anonymous block */ {
        // Range: 0x3970C0 -> 0x3970F4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00397100 -> 0x003972F0
*/
// Range: 0x397100 -> 0x3972F0
void zCamSceneEnter(class zScene & scene /* r17 */, class xMat4x3 & mat /* r16 */) {
    /* anonymous block */ {
        // Range: 0x397100 -> 0x3972F0
    }
}


