/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xEntDrive.cpp
*/
// signature: xEntDriveInit(xEntDrive *, xEnt *)
// Range: 0x8002BBC0 -> 0x8002BBF8
void xEntDriveInit() {
}
// Range: 0x8002BC00 -> 0x8002BDA4
void xEntDriveMount(class xEntDrive * drv /* r31 */, class xEnt * driver /* r29 */, float mt /* f31 */) {
    {
        // Range: 0x8002BCF0 -> 0x8002BD54
        // Local variables
        float dummy; // r1+0x8
        class xMat3x3 a_descaled; // r1+0x18
        class xVec3 euler; // r1+0xC
    }
}
// signature: xEntDriveDismount(xEntDrive *, float)
// Range: 0x8002BDC0 -> 0x8002BE64
void xEntDriveDismount(class xEntDrive * drv /* r31 */) {
    // Local variables
    class xEnt * pDriver; // r6
}
// signature: xEntDriveUpdate(xEntDrive *, xScene *, float)
// Range: 0x8002BE70 -> 0x8002C294
void xEntDriveUpdate(class xEntDrive * drv /* r31 */) {
    // Local variables
    class xVec3 newq; // r1+0x24

    {
        // Range: 0x8002BFB4 -> 0x8002C05C
        // Local variables
        float dummy; // r1+0x8
        class xMat3x3 a_descaled; // r1+0x40
        class xMat3x3 rot; // r1+0x70
        class xVec3 euler; // r1+0x30
    }
}
