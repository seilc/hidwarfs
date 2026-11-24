/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zPlayerInputAI.cpp
*/
// Range: 0x80206BF0 -> 0x80206C1C
void zPlayerInputAI::ClearButtons() {
}
// signature: zPlayerInputAI::SetButtons(zPlayerInputNS::Action, bool)
// Range: 0x80206C20 -> 0x80206C4C
void zPlayerInputAI::SetButtons() {
    // References
    // -> class ButtonMap defaultButtonMap[96];
}
// signature: zPlayerInputAI::SetAnalog(int, xVec2)
// Range: 0x80206C50 -> 0x80206C6C
void zPlayerInputAI::SetAnalog() {
}
// signature: zPlayerInputAI::Update(unsigned int)
// Range: 0x80206C70 -> 0x80206C74
void zPlayerInputAI::Update() {
}
// Range: 0x80206C80 -> 0x80206CA8
void zPlayerInputAI::Reset() {
}
// signature: zPlayerInputAI::Pressed(zPlayerInputNS::Action, bool, bool)
// Range: 0x80206CB0 -> 0x80206CF4
int zPlayerInputAI::Pressed() {
    // Local variables
    int checkButtons; // r4

    // References
    // -> class ButtonMap defaultButtonMap[96];
}
// signature: zPlayerInputAI::On(zPlayerInputNS::Action, bool, bool)
// Range: 0x80206D00 -> 0x80206D34
int zPlayerInputAI::On() {
    // References
    // -> class ButtonMap defaultButtonMap[96];
}
// signature: zPlayerInputAI::Analog(zPlayerInputNS::Action)
// Range: 0x80206D50 -> 0x80206D5C
float zPlayerInputAI::Analog() {
}
// signature: zPlayerInputAI::GetStickOffset(unsigned int, zPlayerInputNS::PadType)
// Range: 0x80206D80 -> 0x80206D94
class xVec2 zPlayerInputAI::GetStickOffset() {
}
// signature: zPlayerInputAI::GetStickMag(unsigned int, zPlayerInputNS::PadType)
// Range: 0x80206DB0 -> 0x80206E18
float zPlayerInputAI::GetStickMag() {
}
// signature: zPlayerInputAI::GetStickAng(unsigned int, zPlayerInputNS::PadType)
// Range: 0x80206E30 -> 0x80206E68
float zPlayerInputAI::GetStickAng() {
}
// signature: zPlayerInputAI::GetTiltAxisAccel(Sext::ePad, zPlayerInputNS::PadType)
// Range: 0x80206E80 -> 0x80206EB8
class xVec3 zPlayerInputAI::GetTiltAxisAccel() {
    // Local variables
    class xVec3 tmp; // r1+0x8
}
// signature: zPlayerInputAI::GetTiltAngles(Sext::ePad, zPlayerInputNS::PadType)
// Range: 0x80206ED0 -> 0x80206EF4
class xVec2 zPlayerInputAI::GetTiltAngles() {
    // Local variables
    class xVec2 tmp; // r1+0x8
}
// signature: zPlayerInputAI::GetSwing2D(Sext::ePad, unsigned int &)
// Range: 0x80206F30 -> 0x80206F5C
class xVec2 zPlayerInputAI::GetSwing2D() {
    // Local variables
    class xVec2 tmp; // r1+0x8
}
// signature: zPlayerInputAI::GetSwing3D(Sext::ePad, unsigned int &)
// Range: 0x80206F60 -> 0x80206FA0
class xVec3 zPlayerInputAI::GetSwing3D() {
    // Local variables
    class xVec3 tmp; // r1+0x8
}
// signature: zPlayerInputAI::GetAccRecord(Sext::ePad, unsigned int, xVec3 &)
// Range: 0x80206FE0 -> 0x80206FF8
void zPlayerInputAI::GetAccRecord() {
}
