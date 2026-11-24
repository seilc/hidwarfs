/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zPlayerInputAI.cpp
*/
// Range: 0x8011B8B0 -> 0x8011B8C0
void * zPlayerInputAI::zPlayerInputAI() {
    // References
    // -> struct {} __vt__14zPlayerInputAI;
}
// Range: 0x8011B8C0 -> 0x8011B8EC
void zPlayerInputAI::ClearButtons() {
}
// Range: 0x8011B8F0 -> 0x8011B924
void zPlayerInputAI::Reset(class zPlayerInputAI * this /* r31 */) {
}
// signature: zPlayerInputAI::Pressed(zPlayerInputNS::Action, bool, bool)
// Range: 0x8011B930 -> 0x8011B974
int zPlayerInputAI::Pressed() {
    // Local variables
    int checkButtons; // r4

    // References
    // -> class ButtonMap defaultButtonMap[103];
}
// signature: zPlayerInputAI::On(zPlayerInputNS::Action, bool, bool)
// Range: 0x8011B980 -> 0x8011B9B0
int zPlayerInputAI::On() {
    // References
    // -> class ButtonMap defaultButtonMap[103];
}
// signature: zPlayerInputAI::Analog(zPlayerInputNS::Action)
// Range: 0x8011B9B0 -> 0x8011B9BC
float zPlayerInputAI::Analog() {
}
// signature: zPlayerInputAI::GetStickOffset(unsigned int, zPlayerInputNS::PadType)
// Range: 0x8011B9C0 -> 0x8011B9D4
class xVec2 zPlayerInputAI::GetStickOffset() {
}
// signature: zPlayerInputAI::GetStickMag(unsigned int, zPlayerInputNS::PadType)
// Range: 0x8011B9E0 -> 0x8011BA10
float zPlayerInputAI::GetStickMag() {
}
// signature: zPlayerInputAI::GetStickAng(unsigned int, zPlayerInputNS::PadType)
// Range: 0x8011BA10 -> 0x8011BA24
float zPlayerInputAI::GetStickAng() {
}
// signature: zPlayerInputAI::GetTiltAxisAccel(Sext::ePad, zPlayerInputNS::PadType)
// Range: 0x8011BA30 -> 0x8011BA80
class xVec3 zPlayerInputAI::GetTiltAxisAccel() {
    // Local variables
    class xVec3 tmp; // r1+0x8
}
// signature: zPlayerInputAI::GetTiltAngles(Sext::ePad, zPlayerInputNS::PadType)
// Range: 0x8011BA80 -> 0x8011BAA4
class xVec2 zPlayerInputAI::GetTiltAngles() {
    // Local variables
    class xVec2 tmp; // r1+0x8
}
// signature: zPlayerInputAI::GetSwing2D(Sext::ePad, unsigned int &)
// Range: 0x8011BAB0 -> 0x8011BADC
class xVec2 zPlayerInputAI::GetSwing2D() {
    // Local variables
    class xVec2 tmp; // r1+0x8
}
// signature: zPlayerInputAI::GetSwing3D(Sext::ePad, unsigned int &)
// Range: 0x8011BAE0 -> 0x8011BB38
class xVec3 zPlayerInputAI::GetSwing3D() {
    // Local variables
    class xVec3 tmp; // r1+0x8
}
// signature: zPlayerInputAI::GetAccRecord(Sext::ePad, unsigned int, xVec3 &)
// Range: 0x8011BB40 -> 0x8011BB58
void zPlayerInputAI::GetAccRecord() {
}
