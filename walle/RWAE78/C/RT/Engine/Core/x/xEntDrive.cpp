/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xEntDrive.cpp
*/
// signature: xEntDriveInit(xEntDrive *, xEnt *)
// Range: 0x80038610 -> 0x80038648
void xEntDriveInit() {
}
// signature: xEntDriveReset(xEntDrive *)
// Range: 0x80038650 -> 0x80038684
void xEntDriveReset() {
}
// signature: xEntDriveMount(xEntDrive *, xEnt *, float)
// Range: 0x80038690 -> 0x80038CE4
void xEntDriveMount(class xEntDrive * drv /* r30 */) {
    {
        // Range: 0x800387A8 -> 0x80038BE0
        // Local variables
        class xMat3x3 a_descaled; // r1+0x18
        class xVec3 euler; // r1+0x8
    }
}
// signature: xEntDriveDismount(xEntDrive *, float)
// Range: 0x80038D00 -> 0x80038E30
void xEntDriveDismount() {
    // Local variables
    class xEnt * pDriver; // r7
}
// signature: xEntDriveUpdate(xEntDrive *, xScene *, float)
// Range: 0x80038E30 -> 0x80039310
void xEntDriveUpdate(class xEntDrive * drv /* r29 */) {
    // Local variables
    class xVec3 newq; // r1+0x24

    {
        // Range: 0x80038F64 -> 0x8003900C
        // Local variables
        float dummy; // r1+0x8
        class xMat3x3 a_descaled; // r1+0x80
        class xMat3x3 rot; // r1+0xB0
        class xVec3 euler; // r1+0x30
    }
    {
        // Range: 0x800390BC -> 0x800391C8
        // Local variables
        class xMat4x3 oldmat; // r1+0x40
        class xVec3 new_loc; // r1+0xC
        class xVec3 world_loc; // r1+0x18
        class xModelInstance * m; // r30
    }
}
