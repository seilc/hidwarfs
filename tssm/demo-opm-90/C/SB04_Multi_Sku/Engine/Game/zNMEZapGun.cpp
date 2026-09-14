/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEZapGun.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4450 -> 0x001F4480
*/
// Range: 0x1F4450 -> 0x1F4480
// this: r4
void NMEZapomatic::LaserRender_laser_pulser() {
    /* anonymous block */ {
        // Range: 0x1F4450 -> 0x1F4480
        class xEnt * plyr; // r2
        signed int num_bone; // r2
        signed int idx; // r2
        class xMat4x3 * mat_root; // r2
        signed int i; // r2
        class xVec3 pos_tgt; // r29+0x10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEZapGun.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4480 -> 0x001F4618
*/
// Range: 0x1F4480 -> 0x1F4618
// this: r16
void NMEZapomatic::LaserRender_laser_target() {
    /* anonymous block */ {
        // Range: 0x1F4480 -> 0x1F4618
        class xEnt * plyr; // r2
        signed int num_bone; // r2
        signed int idx; // r2
        class xMat4x3 * mat_root; // r21
        signed int i; // r20
        class xVec3 pos_tgt; // r29+0x90
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEZapGun.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4620 -> 0x001F471C
*/
// Range: 0x1F4620 -> 0x1F471C
void LaserApplyConfig_laser_repel() {
    /* anonymous block */ {
        // Range: 0x1F4620 -> 0x1F471C
        char * str_zapball; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEZapGun.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4720 -> 0x001F4824
*/
// Range: 0x1F4720 -> 0x1F4824
void LaserApplyConfig_laser_pulser() {
    /* anonymous block */ {
        // Range: 0x1F4720 -> 0x1F4824
        char * str_zapball; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEZapGun.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4830 -> 0x001F4934
*/
// Range: 0x1F4830 -> 0x1F4934
void LaserApplyConfig_laser_target() {
    /* anonymous block */ {
        // Range: 0x1F4830 -> 0x1F4934
        char * str_zapball; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEZapGun.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4940 -> 0x001F5384
*/
// Range: 0x1F4940 -> 0x1F5384
// this: r16
void NMEZapomatic::Shoot_Upd(float dt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x1F4940 -> 0x1F5384
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEZapGun.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F5390 -> 0x001F5564
*/
// Range: 0x1F5390 -> 0x1F5564
// this: r17
float NMEZapomatic::DangerZoneRatio() {
    /* anonymous block */ {
        // Range: 0x1F5390 -> 0x1F5564
        class xVec3 pos_tgt; // r29+0x50
        float r2_near; // r6
        float r2_far; // r5
        float rat; // r29+0x60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEZapGun.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F5570 -> 0x001F5778
*/
// Range: 0x1F5570 -> 0x1F5778
// this: r2
void NMEZapomatic::CalcNewGunTip(class xVec3 * pos_tip /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F5570 -> 0x1F5778
        class zNMECommon * npc; // r2
        class xMat4x3 * mat_root; // r3
        signed int idx; // r9
        class xVec3 vec_offset; // r29+0x10
        class xMat4x3 * mat_bone; // r2
        class xVec3 pos_gun; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEZapGun.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F5780 -> 0x001F6698
*/
// Range: 0x1F5780 -> 0x1F6698
// this: r16
void NMEZapomatic::NewTimeUpdate(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1F5780 -> 0x1F6698
    }
}


