/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntDrive.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003EFFD0 -> 0x003F0BA8
*/
// Range: 0x3EFFD0 -> 0x3F0BA8
void xEntDriveUpdate(class xEntDrive * drv /* r17 */, float dt /* r29+0x150 */) {
    /* anonymous block */ {
        // Range: 0x3EFFD0 -> 0x3F0BA8
        class xVec3 euler; // r29+0x140
        class xMat3x3 rot; // r29+0xA0
        class xMat3x3 a_descaled; // r29+0x70
        float dummy; // r29+0x150
        float len2; // r29+0x150
        float len_inv; // r29+0x150
        float len2; // r29+0x150
        float len_inv; // r29+0x150
        float len2; // r29+0x150
        float len_inv; // r29+0x150
        class xVec3 newq; // r29+0x130
        class xModelInstance & m; // r16
        class xVec3 world_loc; // r29+0x120
        class xVec3 new_loc; // r29+0x110
        class xMat4x3 oldmat; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntDrive.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F0BB0 -> 0x003F0C80
*/
// Range: 0x3F0BB0 -> 0x3F0C80
void xEntDriveDismount(class xEntDrive * drv /* r2 */, float dmt /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x3F0BB0 -> 0x3F0C80
        class xEnt * pDriver; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntDrive.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F0C80 -> 0x003F11F0
*/
// Range: 0x3F0C80 -> 0x3F11F0
void xEntDriveMount(class xEntDrive * drv /* r18 */, class xEnt * driver /* r17 */, float mt /* r29+0x90 */, class xCollis * coll /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3F0C80 -> 0x3F11F0
        class xVec3 euler; // r29+0x80
        class xMat3x3 a_descaled; // r29+0x40
        float len2; // r29+0x90
        float len_inv; // r29+0x90
        float len2; // r29+0x90
        float len_inv; // r29+0x90
        float len2; // r29+0x90
        float len_inv; // r29+0x90
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntDrive.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F11F0 -> 0x003F121C
*/
// Range: 0x3F11F0 -> 0x3F121C
void xEntDriveInit(class xEntDrive * drv /* r2 */, class xEnt * driven /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3F11F0 -> 0x3F121C
    }
}


