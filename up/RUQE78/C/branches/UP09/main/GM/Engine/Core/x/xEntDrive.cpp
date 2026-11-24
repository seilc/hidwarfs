/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xEntDrive.cpp
*/
// signature: xEntDriveInit(xEntDrive *, xEnt *)
// Range: 0x80054800 -> 0x80054838
void xEntDriveInit() {
}
// signature: xEntDriveMount(xEntDrive *, xEnt *, float)
// Range: 0x80054840 -> 0x80054E38
void xEntDriveMount(class xEntDrive * drv /* r30 */) {
    {
        // Range: 0x80054920 -> 0x80054D40
        // Local variables
        class xMat3x3 a_descaled; // r1+0x18
        class xVec3 euler; // r1+0x8
    }
}
// signature: xEntDriveDismount(xEntDrive *, float)
// Range: 0x80054E50 -> 0x80054F6C
void xEntDriveDismount() {
    // Local variables
    class xEnt * pDriver; // r6
}
// signature: xEntDriveUpdate(xEntDrive *, xScene *, float)
// Range: 0x80054F70 -> 0x80055384
void xEntDriveUpdate(class xEntDrive * drv /* r30 */) {
    // Local variables
    class xVec3 newq; // r1+0xC

    {
        // Range: 0x800550A4 -> 0x80055160
        // Local variables
        float dummy; // r1+0x8
        class xMat3x3 a_descaled; // r1+0x28
        class xMat3x3 rot; // r1+0x58
        class xVec3 euler; // r1+0x18
    }
}
