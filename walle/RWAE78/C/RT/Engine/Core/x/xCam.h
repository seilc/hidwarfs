/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Compile unit: C:\RT\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xCam.h
*/
// Range: 0x80229EA0 -> 0x8022A0F4
void xCam::spring_interp<xQuat, float>(class xQuat * s /* r27 */, float * v /* r28 */, class xQuat * s0 /* r29 */, class xQuat * s1 /* r30 */, float dt /* f29 */, float speed /* f30 */) {
    // Local variables
    float e; // f0
}
// Range: 0x8001E710 -> 0x8001E750
void * xCam::~xCam(class xCam * this /* r31 */) {
}
// Range: 0x80098C20 -> 0x80098C28
float xCam::GetFOV() const {
}
// Range: 0x80108420 -> 0x80108428
int xCam::GetFlags() const {
}
// Range: 0x80090E90 -> 0x80090EA4
bool xCam::blending() const {
}
// Range: 0x80082B70 -> 0x80082B74
class xCam * xCam::get_final_dest() const {
}
// Range: 0x80082B50 -> 0x80082B58
class zCamSplineCommonMix * xCam::get_common_mix() {
}
// Range: 0x80082B60 -> 0x80082B68
class zCamSplineCommonMix * xCam::get_common_mix() const {
}
// Range: 0x80082B40 -> 0x80082B44
void xCam::destroy() {
}
// signature: xCam::pre_update(xScene &)
// Range: 0x8001DB50 -> 0x8001DB54
void xCam::pre_update() {
}
// signature: xCam::post_update(xScene &)
// Range: 0x8001DB60 -> 0x8001DB64
void xCam::post_update() {
}
// Range: 0x8001E6F0 -> 0x8001E704
class xCam * xCam::get_next() {
}
// signature: xCam::find_camera(unsigned long long)
// Range: 0x8001F340 -> 0x8001F360
class xCam * xCam::find_camera() {
}
// Range: 0x80082B30 -> 0x80082B38
class zCam2Player * xCam::get_zCam2Player() const {
}
// Range: 0x80082B20 -> 0x80082B28
int xCam::IsRail() const {
}
// Range: 0x8001E790 -> 0x8001E7D0
void * xCamBias::~xCamBias(class xCamBias * this /* r31 */) {
}
// Range: 0x8001E750 -> 0x8001E790
void * xCamTimeBias::~xCamTimeBias(class xCamTimeBias * this /* r31 */) {
}
// Range: 0x80082C20 -> 0x80082C34
class zCam2Player * xCamBlend::get_zCam2Player() const {
}
// Range: 0x80082C00 -> 0x80082C14
class xCam * xCamBlend::get_final_dest() const {
}
// Range: 0x80082BC0 -> 0x80082C00
void * xCamBlend::~xCamBlend(class xCamBlend * this /* r31 */) {
}
// Range: 0x80082B80 -> 0x80082BC0
void * xCamDebug::~xCamDebug(class xCamDebug * this /* r31 */) {
}
// signature: xCam::coord_to_world(xVec3 &, const xVec3 &)
// Range: 0x800A8C70 -> 0x800A8C8C
void xCam::coord_to_world() {
}
// signature: xCam::blend(float &, float, float, float)
// Range: 0x8001F220 -> 0x8001F23C
void xCam::blend() {
}
// signature: xCam::blend(xVec3 &, const xVec3 &, const xVec3 &, float)
// Range: 0x8001F4D0 -> 0x8001F51C
void xCam::blend() {
}
// signature: xCam::blend(xCamCoordCylinder &, const xCamCoordCylinder &, const xCamCoordCylinder &, float)
// Range: 0x8001F520 -> 0x8001F6D8
void xCam::blend(class xCamCoordCylinder * o /* r30 */, float s /* f30 */) {
}
// signature: xCam::blend(xCamCoordSphere &, const xCamCoordSphere &, const xCamCoordSphere &, float)
// Range: 0x8001FA40 -> 0x8001FAAC
void xCam::blend() {
}
// signature: xCamBlend::convert(const xCam &, xCamCoordCylinder &) const
// Range: 0x8001F6E0 -> 0x8001F890
class xCamCoordCylinder * xCamBlend::convert(class xCamCoordCylinder * c /* r30 */) const {
}
// Range: 0x8001FAB0 -> 0x8001FBA8
class xCamCoordSphere * xCamBlend::convert(class xCam * cam /* r30 */, class xCamCoordSphere * c /* r31 */) const {
}
// signature: xCamBlend::coll_convert(const xCam &, xCamCoordCylinder &) const
// Range: 0x8001F890 -> 0x8001FA40
class xCamCoordCylinder * xCamBlend::coll_convert(class xCamCoordCylinder * c /* r30 */) const {
}
// Range: 0x8001FBB0 -> 0x8001FCA8
class xCamCoordSphere * xCamBlend::coll_convert(class xCam * cam /* r30 */, class xCamCoordSphere * c /* r31 */) const {
}
