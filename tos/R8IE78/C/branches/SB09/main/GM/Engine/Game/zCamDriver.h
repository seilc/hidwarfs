/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zCamDriver.h
*/
// Range: 0x8008D8D0 -> 0x8008D8EC
void zCamVelocity::clear() {
}
// signature: zCamDriver::set_start_theta(float)
// Range: 0x80088580 -> 0x80088594
void zCamDriver::set_start_theta() {
}
// signature: zCamDriver::update_occlude(float, const zCamBasis &, zCamRestConfig &, zCamBasis &, xVec3 &)
// Range: 0x8008D8F0 -> 0x8008D918
bool zCamDriver::update_occlude() {
}
// Range: 0x8008CCF0 -> 0x8008CCFC
float zCamDriver::getCurrentDefaultHeight() {
    // References
    // -> static float sCamTweakPivotHeightCur;
}
// Range: 0x80091740 -> 0x80091748
float zCamDriver::getCurrentBasisTheta() const {
}
// Range: 0x800AE3A0 -> 0x800AE3A8
float zCamDriver::getCurrentHeight() const {
}
// Range: 0x80092240 -> 0x80092248
float zCamDriver::getCurrentBasisDist() const {
}
// Range: 0x8008D810 -> 0x8008D8C8
void zCamDriver::cart_to_polar(class zCamBasis & basis /* r31 */) {
}
// Range: 0x8008CD00 -> 0x8008CDCC
void zCamDriver::polar_to_cart(class zCamBasis & basis /* r31 */) {
}
// signature: zCamDriver::pc_interp1d(float &, float, float, float)
// Range: 0x8008DBB0 -> 0x8008DBEC
void zCamDriver::pc_interp1d() {
}
// signature: zCamDriver::pc_interp1d(float &, float, float, float, float)
// Range: 0x8008DA30 -> 0x8008DAA4
void zCamDriver::pc_interp1d(float vmax /* f0 */) {
    // Local variables
    float vel; // f3
}
// signature: zCamDriver::pc_interp3d(xVec3 &, const xVec3 &, float, float)
// Range: 0x80091130 -> 0x800911B8
void zCamDriver::pc_interp3d(class xVec3 & p /* r31 */) {
}
// signature: zCamDriver::pc_interp3d(xVec3 &, const xVec3 &, float, float, float)
// Range: 0x8008DAB0 -> 0x8008DBA8
void zCamDriver::pc_interp3d(class xVec3 & p /* r31 */, float vmax /* f30 */) {
    // Local variables
    class xVec3 vel; // r1+0x2C
    float vmag; // f0
}
// signature: zCamDriver::pc_interpxy(xVec3 &, const xVec3 &, float, float, float)
// Range: 0x8008D920 -> 0x8008DA24
void zCamDriver::pc_interpxy(class xVec3 & p /* r31 */, float vmax /* f30 */) {
    // Local variables
    class xVec3 vel; // r1+0x2C
    float vmag; // f0
}
// signature: zCamDriver::inverse_blend3(float, float, float, float, float &)
// Range: 0x80090920 -> 0x8009099C
void zCamDriver::inverse_blend3() {
}
