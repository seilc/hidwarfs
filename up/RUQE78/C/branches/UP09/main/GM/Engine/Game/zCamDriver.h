/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zCamDriver.h
*/
// Range: 0x80108E40 -> 0x80108E5C
void zCamVelocity::clear() {
}
// signature: zCamRayHelper::castRay(const xVec3 &, const xVec3 &, zCamRayHelper::rayInfo &)
// Range: 0x80108B50 -> 0x80108BAC
void zCamRayHelper::castRay(class rayInfo & result /* r31 */) {
}
// signature: zCamDriver::update_position(float, bool, xVec3 &, xVec3 &, xVec3 &)
// Range: 0x80108B40 -> 0x80108B44
void zCamDriver::update_position() {
}
// signature: zCamDriver::update_occlude(float, const zCamBasis &, zCamRestConfig &, zCamBasis &, xVec3 &)
// Range: 0x80108E60 -> 0x80108E80
bool zCamDriver::update_occlude() {
}
// signature: zCamDriver::update_rest(float, const zCamTarget **, int, const xVec3 &, const zCamBasis &, const zCamBasis &, const zCamVelocity &, zCamRestConfig &)
// Range: 0x80108B20 -> 0x80108B24
void zCamDriver::update_rest() {
}
// signature: zCamDriver::post_process(const zCamBasis &, const xVec3 &, const zCamRestConfig &)
// Range: 0x801092E0 -> 0x801092E4
void zCamDriver::post_process() {
}
// Range: 0x80108230 -> 0x8010823C
float zCamDriver::getCurrentDefaultHeight() {
    // References
    // -> static float sCamTweakPivotHeightCur;
}
// Range: 0x80108D20 -> 0x80108E28
void zCamDriver::cart_to_polar(class zCamBasis & basis /* r31 */) {
}
// Range: 0x80108240 -> 0x8010830C
void zCamDriver::polar_to_cart(class zCamBasis & basis /* r31 */) {
}
// signature: zCamDriver::pc_interp1d(float &, float, float, float)
// Range: 0x80109060 -> 0x8010909C
void zCamDriver::pc_interp1d() {
}
// signature: zCamDriver::pc_interp1d(float &, float, float, float, float)
// Range: 0x801090A0 -> 0x80109114
void zCamDriver::pc_interp1d(float vmax /* f0 */) {
    // Local variables
    float vel; // f3
}
// signature: zCamDriver::pc_interp3d(xVec3 &, const xVec3 &, float, float, float)
// Range: 0x80108E80 -> 0x8010903C
void zCamDriver::pc_interp3d(float vmax /* f5 */) {
    // Local variables
    class xVec3 vel; // r1+0x44
    float vmag; // f0
}
// signature: zCamDriver::pc_interpxy(xVec3 &, const xVec3 &, float, float, float)
// Range: 0x80109120 -> 0x801092DC
void zCamDriver::pc_interpxy(float vmax /* f6 */) {
    // Local variables
    class xVec3 vel; // r1+0x44
    float vmag; // f0
}
