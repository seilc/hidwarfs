/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00310F20 -> 0x003110E4
*/
// Range: 0x310F20 -> 0x3110E4
void xParCmdCustom_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x310F20 -> 0x3110E4
        class xPar * p; // r7
        float mdt; // r13
        float rSqr; // r29+0x10
        float oorSqr; // r12
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003110F0 -> 0x00311248
*/
// Range: 0x3110F0 -> 0x311248
void xParCmdApplyCamMat_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x3110F0 -> 0x311248
        class xPar * p; // r3
        class xParCmdApplyCamMat * cmd; // r2
        class xMat4x3 * mat; // r6
        float mul; // r3
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00311250 -> 0x00311330
*/
// Range: 0x311250 -> 0x311330
void xParCmdCustom_Grass_Update(class xParGroup * ps /* r2 */, float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x311250 -> 0x311330
        class xPar * p; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00311330 -> 0x003114A0
*/
// Range: 0x311330 -> 0x3114A0
void xParCmdJet_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x311330 -> 0x3114A0
        class xPar * p; // r5
        class xParCmdJet * cmd; // r6
        float mdt; // r29+0x10
        class xVec3 center; // r29
        float rSqr; // r29+0x10
        float oorSqr; // r11
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003114A0 -> 0x00311690
*/
// Range: 0x3114A0 -> 0x311690
void xParCmdDamagePlayer_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r18 */) {
    /* anonymous block */ {
        // Range: 0x3114A0 -> 0x311690
        class xPar * p; // r18
        class xParCmdDamagePlayer * cmd; // r2
        class xBound * pbound; // r17
        signed int last_idx; // r3
        signed int i; // r5
        class xCollis collis; // @ 0x00673D00
        class xBound bnd_fake; // @ 0x005FD3E0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00311690 -> 0x0031182C
*/
// Range: 0x311690 -> 0x31182C
void xParCmdAnimalMagentism_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29+0x70 */) {
    /* anonymous block */ {
        // Range: 0x311690 -> 0x31182C
        class xPar * p; // r18
        class xVec3 pos; // r29+0x60
        float mul; // r22
        class xVec3 vec; // r29+0x50
        float dist; // r29+0x70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00311830 -> 0x00311838
*/
// Range: 0x311830 -> 0x311838
void xParCmdPlayerCollision_Update() {
    /* anonymous block */ {
        // Range: 0x311830 -> 0x311838
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00311840 -> 0x00311900
*/
// Range: 0x311840 -> 0x311900
void xParCmdClipVolumes_Update(class xParGroup * ps /* r2 */) {
    /* anonymous block */ {
        // Range: 0x311840 -> 0x311900
        class xPar * p; // r18
        signed int i; // r17
        class xCollis collis; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00311900 -> 0x003119F8
*/
// Range: 0x311900 -> 0x3119F8
void xParCmdKillDistance_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */) {
    /* anonymous block */ {
        // Range: 0x311900 -> 0x3119F8
        class xPar * p; // r5
        class xParCmdKillDistance * cmd; // r2
        class xVec3 * camera_pos; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00311A00 -> 0x00311ABC
*/
// Range: 0x311A00 -> 0x311ABC
void zParCmdInit() {
    /* anonymous block */ {
        // Range: 0x311A00 -> 0x311ABC
    }
}


