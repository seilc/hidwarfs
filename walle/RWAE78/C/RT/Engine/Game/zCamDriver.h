/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zCamDriver.h
*/
// Range: 0x80098CB0 -> 0x80098CCC
void zCamVelocity::clear() {
}
// signature: zCamRayHelper::castRay(const xVec3 &, const xVec3 &, zCamRayHelper::rayInfo &)
// Range: 0x80098C40 -> 0x80098C9C
void zCamRayHelper::castRay(class rayInfo * result /* r31 */) {
}
// Range: 0x80094620 -> 0x80094660
void * zCamDriver::~zCamDriver(class zCamDriver * this /* r31 */) {
}
// signature: zCamDriver::update_position(float, bool, xVec3 &, xVec3 &, xVec3 &)
// Range: 0x80098C30 -> 0x80098C34
void zCamDriver::update_position() {
}
// signature: zCamDriver::update_collision(float, const zCamBasis &, const zCamRayHelper::rayInfo, zCamRestConfig &, zCamBasis &, zCamVelocity &, bool &)
// Range: 0x80098CA0 -> 0x80098CA8
bool zCamDriver::update_collision() {
}
// signature: zCamDriver::update_occlude(float, const zCamBasis &, zCamRestConfig &, zCamBasis &, xVec3 &)
// Range: 0x80098CD0 -> 0x80098CF0
bool zCamDriver::update_occlude() {
}
// signature: zCamDriver::update_rest(float, const zCamTarget **, int, const xVec3 &, const zCamBasis &, const zCamBasis &, const zCamVelocity &, zCamRestConfig &)
// Range: 0x80098C10 -> 0x80098C14
void zCamDriver::update_rest() {
}
// signature: zCamDriver::post_process(const zCamBasis &, const xVec3 &, const zCamRestConfig &)
// Range: 0x80099110 -> 0x80099114
void zCamDriver::post_process() {
}
// Range: 0x80098400 -> 0x8009840C
float zCamDriver::getCurrentDefaultHeight() {
    // References
    // -> static float sCamTweakPivotHeightCur;
}
// signature: zCamDriver::getCurrentYawOffset(const zCamRestConfig &)
// Range: 0x80097650 -> 0x8009765C
float zCamDriver::getCurrentYawOffset() {
}
// signature: zCamDriver::getCurrentPitchOffset(const zCamRestConfig &)
// Range: 0x800999D0 -> 0x800999DC
float zCamDriver::getCurrentPitchOffset() {
}
// Range: 0x80092A40 -> 0x80092BA4
void zCamDriver::cart_to_polar(class zCamBasis * basis /* r30 */) {
}
// Range: 0x80091CB0 -> 0x80091D7C
void zCamDriver::polar_to_cart(class zCamBasis * basis /* r31 */) {
}
// signature: zCamDriver::pc_interp1d(float &, float, float, float)
// Range: 0x80092EE0 -> 0x80092F1C
void zCamDriver::pc_interp1d() {
}
// signature: zCamDriver::pc_interp1d(float &, float, float, float, float)
// Range: 0x80092E40 -> 0x80092EB4
void zCamDriver::pc_interp1d(float vmax /* f0 */) {
    // Local variables
    float vel; // f3
}
// signature: zCamDriver::pc_interp3d(xVec3 &, const xVec3 &, float, float, float)
// Range: 0x80098CF0 -> 0x80098F00
void zCamDriver::pc_interp3d(class xVec3 * p /* r31 */, float vmax /* f31 */) {
    // Local variables
    class xVec3 vel; // r1+0x44
    float vmag; // f0
}
// signature: zCamDriver::pc_interpxy(xVec3 &, const xVec3 &, float, float, float)
// Range: 0x80098F00 -> 0x80099110
void zCamDriver::pc_interpxy(class xVec3 * p /* r31 */, float vmax /* f31 */) {
    // Local variables
    class xVec3 vel; // r1+0x44
    float vmag; // f0
}
// signature: zCamDriver::blend3(float &, float, float, float, float)
// Range: 0x80094560 -> 0x8009458C
void zCamDriver::blend3() {
}
