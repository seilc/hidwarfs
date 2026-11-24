/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xCollideSweptSphere.cpp
*/
static class zSweptSphereGlobals sSwsGlobal; // size: 0x8, address: 0x80753AA0
static int sSweptSphereEntFound; // size: 0x4, address: 0x80753AA8
static class xEnt * sSweptSphereMover; // size: 0x4, address: 0x80753AAC
static unsigned char sSweptSphereCollType; // size: 0x1, address: 0x80753AB0
static int sSweptSpherePenby; // size: 0x4, address: 0x80753AB4
static enum eSweptSphereHackIgnore sHackIgnore; // size: 0x4, address: 0x80753AB8
// signature: xSweptSpherePrepare(xSweptSphere &, const xVec3 &, const xVec3 &, float, float, int, unsigned int)
// Range: 0x80024B80 -> 0x80024CA4
void xSweptSpherePrepare(class xSweptSphere * sws /* r30 */, int chkby /* r31 */) {
    // Local variables
    class xCapsule tmpC; // r1+0x8
}
// signature: xSweptSpherePrepare(xSweptSphere *, const xVec3 *, const xVec3 *, float, int, unsigned int)
// Range: 0x80024CB0 -> 0x80024EF0
void xSweptSpherePrepare(class xSweptSphere * sws /* r27 */, class xVec3 * start /* r28 */, class xVec3 * end /* r29 */, float radius /* f31 */, int chkby /* r30 */) {
    // Local variables
    class xCapsule tmpC; // r1+0x8
}
// Range: 0x80024F00 -> 0x80025420
void xSweptSphereGetResults(class xSweptSphere * sws /* r30 */) {
    {
        // Range: 0x80024F5C -> 0x800253F0
        // Local variables
        class xVec3 tanplane; // r1+0x14
        float tandot; // f0

        {
            // Range: 0x800250B8 -> 0x80025218
            // Local variables
            class xVec3 in_plane; // r1+0x8
        }
    }
}
