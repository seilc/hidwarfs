/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xCam.h
*/
// Range: 0x8001F0D0 -> 0x8001F0E4
class xCam * xCam::get_next() {
}
// signature: xCam::find_camera(unsigned long long)
// Range: 0x8001FAF0 -> 0x8001FB10
class xCam * xCam::find_camera() {
}
// signature: xCamGroup::SetAnalogData(const xVec2 &)
// Range: 0x80088ED0 -> 0x80088EE4
void xCamGroup::SetAnalogData() {
}
// Range: 0x800578D0 -> 0x800578EC
int xCamGroup::GetPrimaryCameraFlags() const {
}
// signature: xCamGroup::RefreshRawCamera(bool)
// Range: 0x800890C0 -> 0x80089138
void xCamGroup::RefreshRawCamera(class xCamGroup * this /* r31 */) {
}
// Range: 0x800515C0 -> 0x800515D4
class zCam2Player * xCamBlend::get_zCam2Player() const {
}
// Range: 0x800515A0 -> 0x800515B4
class xCam * xCamBlend::get_final_dest() const {
}
// Range: 0x80051540 -> 0x80051594
void * xCamBlend::~xCamBlend(class xCamBlend * this /* r30 */) {
}
// Range: 0x8008E0B0 -> 0x8008E130
void xCam::coord_to_local(class xCamCoordSphere & c /* r30 */, class xVec3 & loc /* r0 */, class xVec3 & origin /* r31 */) {
    // Local variables
    class xVec3 offset; // r1+0x14
    class xMat3x3 dir_mat; // r1+0x20
}
// Range: 0x8001FF80 -> 0x8002001C
class xCamCoordCylinder & xCam::convert(class xCamCoordCylinder & o /* r30 */, class xCamCoordSphere & i /* r31 */) {
    // Local variables
    class xVec3 offset; // r1+0x8
}
// Range: 0x80020150 -> 0x800201F8
class xCamCoordSphere & xCam::convert(class xCamCoordSphere & o /* r30 */, class xCamCoordCylinder & i /* r31 */) {
    // Local variables
    class xMat3x3 mat; // r1+0x18
    class xVec3 offset; // r1+0x8
}
// signature: xCam::convert(xQuat &, const xCamOrientEuler &)
// Range: 0x800203B0 -> 0x800203FC
class xQuat & xCam::convert(class xQuat & o /* r31 */) {
    // Local variables
    class xMat3x3 mat; // r1+0x8
}
// signature: xCam::blend(float &, float, float, float)
// Range: 0x8001F9C0 -> 0x8001F9DC
void xCam::blend() {
}
// signature: xCam::blend_radian(float &, float, float, float)
// Range: 0x8001FE10 -> 0x8001FE90
void xCam::blend_radian(float & o /* r30 */, float a /* f30 */, float s /* f31 */) {
    // Local variables
    float diff; // f0
}
// Range: 0x8001FCF0 -> 0x8001FD74
void xCam::blend(class xVec3 & o /* r29 */, class xVec3 & a /* r30 */, class xVec3 & b /* r31 */, float s /* f31 */) {
}
// Range: 0x8001FD80 -> 0x8001FE0C
void xCam::blend(class xCamCoordCylinder & o /* r29 */, class xCamCoordCylinder & a /* r30 */, class xCamCoordCylinder & b /* r31 */, float s /* f31 */) {
}
// Range: 0x80020090 -> 0x80020108
void xCam::blend(class xCamCoordSphere & o /* r29 */, class xCamCoordSphere & a /* r30 */, class xCamCoordSphere & b /* r31 */, float s /* f31 */) {
}
// Range: 0x80020440 -> 0x800204C4
void xCam::blend(class xCamOrientEuler & o /* r29 */, class xCamOrientEuler & a /* r30 */, class xCamOrientEuler & b /* r31 */, float s /* f31 */) {
}
// signature: xCamBlend::convert(const xCam &, xCamCoordCylinder &) const
// Range: 0x8001FF40 -> 0x8001FF74
class xCamCoordCylinder & xCamBlend::convert() const {
}
// signature: xCamBlend::convert(const xCam &, xCamCoordSphere &) const
// Range: 0x80020110 -> 0x80020144
class xCamCoordSphere & xCamBlend::convert() const {
}
// signature: xCamBlend::convert(const xCam &, xQuat &) const
// Range: 0x80020370 -> 0x800203A4
class xQuat & xCamBlend::convert() const {
}
// signature: xCamBlend::convert(const xCam &, xCamOrientEuler &) const
// Range: 0x800204D0 -> 0x8002053C
class xCamOrientEuler & xCamBlend::convert(class xCamOrientEuler & c /* r31 */) const {
}
// signature: xCamBlend::coll_convert(const xCam &, xCamCoordCylinder &) const
// Range: 0x80020050 -> 0x80020084
class xCamCoordCylinder & xCamBlend::coll_convert() const {
}
// signature: xCamBlend::coll_convert(const xCam &, xCamCoordSphere &) const
// Range: 0x80020200 -> 0x80020234
class xCamCoordSphere & xCamBlend::coll_convert() const {
}
// signature: xCamBlend::coll_convert(const xCam &, xQuat &) const
// Range: 0x80020400 -> 0x80020434
class xQuat & xCamBlend::coll_convert() const {
}
// signature: xCamBlend::coll_convert(const xCam &, xCamOrientEuler &) const
// Range: 0x80020540 -> 0x800205AC
class xCamOrientEuler & xCamBlend::coll_convert(class xCamOrientEuler & c /* r31 */) const {
}
