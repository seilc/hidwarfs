/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C2370 -> 0x003C26A4
*/
// Range: 0x3C2370 -> 0x3C26A4
void xParCmd_Shaper_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29+0x20 */) {
    /* anonymous block */ {
        // Range: 0x3C2370 -> 0x3C26A4
        class xPar * p; // r5
        class xParCmdShaperData * cmd; // r2
        float damp; // r1
        float grav; // r29+0x20
        signed int doalpha; // r6
        signed int dosize; // r4
        signed int i; // r8
        signed int seg; // r12
        float slope_alfa[3]; // r29+0x10
        float slope_size[3]; // r29
        float frac; // r11
        float alfa; // r3
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C26B0 -> 0x003C28B8
*/
// Range: 0x3C26B0 -> 0x3C28B8
void xParCmd_AlphaInOut_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3C26B0 -> 0x3C28B8
        class xPar * p; // r10
        class xParCmdAlphaInOutData * cmd; // r2
        signed int i; // r9
        signed int seg; // r5
        float slope_alfa[3]; // r29
        float frac; // r8
        float alfa; // r3
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C28C0 -> 0x003C2A40
*/
// Range: 0x3C28C0 -> 0x3C2A40
void xParCmd_SizeInOut_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3C28C0 -> 0x3C2A40
        class xPar * p; // r9
        class xParCmdSizeInOutData * cmd; // r2
        signed int i; // r8
        signed int seg; // r4
        float slope_size[3]; // r29
        float frac; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C2A40 -> 0x003C2AB4
*/
// Range: 0x3C2A40 -> 0x3C2AB4
void xParCmd_DampenSpeed_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x3C2A40 -> 0x3C2AB4
        class xPar * p; // r3
        class xParCmdDampenData * cmd; // r2
        float damp; // r3
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C2AC0 -> 0x003C2B78
*/
// Range: 0x3C2AC0 -> 0x3C2B78
void xParCmdCollideFallSticky_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3C2AC0 -> 0x3C2B78
        class xParCmdCollideFallSticky & cmd; // r2
        float xzdamp; // r4
        class xPar * p; // r5
        float & loc; // r2
        float & vel; // r2
        float dloc; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C2B80 -> 0x003C2C08
*/
// Range: 0x3C2B80 -> 0x3C2C08
void xParCmdCollideFall_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3C2B80 -> 0x3C2C08
        class xParCmdCollideFall & cmd; // r2
        class xPar * p; // r5
        float & loc; // r2
        float & vel; // r2
        float dloc; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C2C10 -> 0x003C32C4
*/
// Range: 0x3C2C10 -> 0x3C32C4
void xParCmdTexAnim_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29+0x50 */) {
    /* anonymous block */ {
        // Range: 0x3C2C10 -> 0x3C32C4
        class xPar * p; // r4
        class xParCmdTexAnim * cmd; // r8
        class xParCmdTex * tex; // r3
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C32D0 -> 0x003C32D8
*/
// Range: 0x3C32D0 -> 0x3C32D8
void xParCmdTex_Update() {
    /* anonymous block */ {
        // Range: 0x3C32D0 -> 0x3C32D8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C32E0 -> 0x003C34A8
*/
// Range: 0x3C32E0 -> 0x3C34A8
void xParCmdRotateAround_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29+0x150 */) {
    /* anonymous block */ {
        // Range: 0x3C32E0 -> 0x3C34A8
        class xPar * p; // r21
        class xParCmdRotateAround * cmd; // r20
        float yaw; // r22
        float radius_growth; // r21
        class xVec3 at; // r29+0x140
        class xMat3x3 lookmat; // r29+0xE0
        float radius; // r29+0x150
        class xVec3 angles; // r29+0x130
        class xMat3x3 rotmat; // r29+0xB0
        class xVec3 offset; // r29+0x120
        class xVec3 out_offset; // r29+0x110
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C34B0 -> 0x003C3558
*/
// Range: 0x3C34B0 -> 0x3C3558
void xParCmdVelocityApply_Update(class xParGroup * ps /* r2 */, float dt /* r29+0x20 */) {
    /* anonymous block */ {
        // Range: 0x3C34B0 -> 0x3C3558
        class xPar * p; // r8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C3560 -> 0x003C3BB8
*/
// Range: 0x3C3560 -> 0x3C3BB8
void xParCmdRotPar_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29+0x40 */) {
    /* anonymous block */ {
        // Range: 0x3C3560 -> 0x3C3BB8
        class xPar * p; // r13
        class xParCmdRotPar * cmd; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C3BC0 -> 0x003C3C10
*/
// Range: 0x3C3BC0 -> 0x3C3C10
void xParCmdApplyWind_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x3C3BC0 -> 0x3C3C10
        class xPar * p; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C3C10 -> 0x003C3FC0
*/
// Range: 0x3C3C10 -> 0x3C3FC0
void xParCmdRandomVelocityPar_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x3C3C10 -> 0x3C3FC0
        class xPar * p; // r7
        class xParCmdRandomVelocityPar * cmd; // r2
        class xVec3 rot; // r29
        class xVec3 * velvec; // r2
        unsigned int uvelx; // r2
        unsigned int uvely; // r2
        unsigned int uvelz; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C3FC0 -> 0x003C3FC8
*/
// Range: 0x3C3FC0 -> 0x3C3FC8
void xParCmdAlpha3rdPolyReg_Update() {
    /* anonymous block */ {
        // Range: 0x3C3FC0 -> 0x3C3FC8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C3FD0 -> 0x003C3FD8
*/
// Range: 0x3C3FD0 -> 0x3C3FD8
void xParCmdScale_Update() {
    /* anonymous block */ {
        // Range: 0x3C3FD0 -> 0x3C3FD8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C3FE0 -> 0x003C3FE8
*/
// Range: 0x3C3FE0 -> 0x3C3FE8
void xParCmdSmokeAlpha_Update() {
    /* anonymous block */ {
        // Range: 0x3C3FE0 -> 0x3C3FE8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C3FF0 -> 0x003C3FF8
*/
// Range: 0x3C3FF0 -> 0x3C3FF8
void xParCmdScale3rdPolyReg_Update() {
    /* anonymous block */ {
        // Range: 0x3C3FF0 -> 0x3C3FF8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C4000 -> 0x003C4370
*/
// Range: 0x3C4000 -> 0x3C4370
void xParCmdMoveRandomPar_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29+0x30 */) {
    /* anonymous block */ {
        // Range: 0x3C4000 -> 0x3C4370
        class xPar * p; // r13
        class xParCmdMoveRandomPar * cmd; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C4370 -> 0x003C4940
*/
// Range: 0x3C4370 -> 0x3C4940
void xParCmdMoveRandom_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x3C4370 -> 0x3C4940
        signed int left'291; // r2
        unsigned int * next'290; // r8
        class xPar * p; // r5
        class xParCmdMove * cmd; // r2
        class xVec3 delta; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C4940 -> 0x003C49B0
*/
// Range: 0x3C4940 -> 0x3C49B0
void xParCmdMove_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x3C4940 -> 0x3C49B0
        class xPar * p; // r4
        class xVec3 delta; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C49B0 -> 0x003C4A38
*/
// Range: 0x3C49B0 -> 0x3C4A38
void xParCmdAccelerate_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x3C49B0 -> 0x3C4A38
        class xPar * p; // r5
        class xVec3 delta; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C4A40 -> 0x003C4B60
*/
// Range: 0x3C4A40 -> 0x3C4B60
void xParCmdOrbitLine_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x3C4A40 -> 0x3C4B60
        class xPar * p; // r4
        class xParCmdOrbitLine * cmd; // r3
        float mdt; // r29
        float force; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C4B60 -> 0x003C4C38
*/
// Range: 0x3C4B60 -> 0x3C4C38
void xParCmdOrbitPoint_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x3C4B60 -> 0x3C4C38
        class xPar * p; // r4
        class xParCmdOrbitPoint * cmd; // r3
        float mdt; // r8
        float force; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C4C40 -> 0x003C4D08
*/
// Range: 0x3C4C40 -> 0x3C4D08
void xParCmdFollow_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x3C4C40 -> 0x3C4D08
        class xPar * p; // r5
        class xParCmdFollow * cmd; // r2
        float mdt; // r8
        float force; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C4D10 -> 0x003C4D48
*/
// Range: 0x3C4D10 -> 0x3C4D48
void xParCmdAge_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x3C4D10 -> 0x3C4D48
        class xPar * p; // r4
        float age_rate; // r1
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C4D50 -> 0x003C4E08
*/
// Range: 0x3C4D50 -> 0x3C4E08
void xParCmdKillSlow_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x3C4D50 -> 0x3C4E08
        class xPar * p; // r4
        class xParCmdKillSlow * cmd; // r2
        float speedLimit; // r3
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C4E10 -> 0x003C4E50
*/
// Range: 0x3C4E10 -> 0x3C4E50
void xParCmdRegister(unsigned int parType /* r2 */, unsigned int size /* r2 */, void (* func)(class xParCmd *, class xParGroup *, float) /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3C4E10 -> 0x3C4E50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C4E50 -> 0x003C5224
*/
// Range: 0x3C4E50 -> 0x3C5224
void xParCmdInit() {
    /* anonymous block */ {
        // Range: 0x3C4E50 -> 0x3C5224
    }
}


