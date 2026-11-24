/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zBlackboard.h
*/
// signature: zVariableEventData::operator=(const zVariableEventData &)
// Range: 0x800786A0 -> 0x80078704
class zVariableEventData & zVariableEventData::operator=(class zVariableEventData * this /* r31 */) {
}
// Range: 0x800AE550 -> 0x800AE570
void zVariable<zVariableEventData>::Reset(class zVariable * this /* r4 */) {
}
// Range: 0x800AE570 -> 0x800AE588
void zVariable<int>::Reset() {
}
// Range: 0x800AE590 -> 0x800AE5A8
void zVariable<float>::Reset() {
}
// Range: 0x800AE5B0 -> 0x800AE5D0
void zVariable<xVec3>::Reset(class zVariable * this /* r4 */) {
}
// Range: 0x800AE5D0 -> 0x800AE5F0
void zVariable<Sext::uid>::Reset() {
}
// signature: zVariableDynamicCast::Cast<Sext::uid>(zVariableBase *, zVariable<Sext::uid> *&)
// Range: 0x80053390 -> 0x800533B0
void zVariableDynamicCast::Cast<Sext::uid>() {
}
// signature: zVariableDynamicCast::Cast<xVec3>(zVariableBase *, zVariable<xVec3> *&)
// Range: 0x800534D0 -> 0x800534F0
void zVariableDynamicCast::Cast<xVec3>() {
}
// signature: zVariableDynamicCast::Cast<zPlayer *>(zVariableBase *, zVariable<zPlayer *> *&)
// Range: 0x80053590 -> 0x800535B0
void zVariableDynamicCast::Cast<zPlayer *>() {
}
// signature: zVariableDynamicCast::Cast<float>(zVariableBase *, zVariable<float> *&)
// Range: 0x800536D0 -> 0x800536F0
void zVariableDynamicCast::Cast<float>() {
}
// signature: zVariableDynamicCast::Cast<int>(zVariableBase *, zVariable<int> *&)
// Range: 0x80053800 -> 0x80053820
void zVariableDynamicCast::Cast<int>() {
}
// signature: zVariableDynamicCast::Cast<xBase *>(zVariableBase *, zVariable<xBase *> *&)
// Range: 0x80078410 -> 0x80078430
void zVariableDynamicCast::Cast<xBase *>() {
}
// signature: zVariableDynamicCast::Cast<xMovePoint *>(zVariableBase *, zVariable<xMovePoint *> *&)
// Range: 0x800DD640 -> 0x800DD660
void zVariableDynamicCast::Cast<xMovePoint *>() {
}
// signature: zBlackboard::Write<Sext::uid>(unsigned int, const Sext::uid &)
// Range: 0x800532E0 -> 0x80053384
bool zBlackboard::Write<Sext::uid>(class uid & newValue /* r28 */) {
    // Local variables
    class zVariableBase * var; // r0
    class zVariable * temp; // r1+0x8
}
// signature: zBlackboard::Read<Sext::uid>(unsigned int, Sext::uid &) const
// Range: 0x800533B0 -> 0x80053424
bool zBlackboard::Read<Sext::uid>(class uid & output /* r31 */) const {
    // Local variables
    class zVariableBase * var; // r0
    class zVariable * temp; // r1+0x8
}
// signature: zBlackboard::Write<xVec3>(unsigned int, const xVec3 &)
// Range: 0x80053430 -> 0x800534D0
bool zBlackboard::Write<xVec3>(class xVec3 & newValue /* r30 */) {
    // Local variables
    class zVariableBase * var; // r0
    class zVariable * temp; // r1+0x8
}
// signature: zBlackboard::Write<zPlayer *>(unsigned int, zPlayer *const &)
// Range: 0x800534F0 -> 0x8005358C
bool zBlackboard::Write<zPlayer *>(class zPlayer * & newValue /* r30 */) {
    // Local variables
    class zVariableBase * var; // r0
    class zVariable * temp; // r1+0x8
}
// signature: zBlackboard::Read<zPlayer *>(unsigned int, zPlayer *&) const
// Range: 0x800535B0 -> 0x80053614
bool zBlackboard::Read<zPlayer *>(class zPlayer * & output /* r31 */) const {
    // Local variables
    class zVariableBase * var; // r0
    class zVariable * temp; // r1+0x8
}
// signature: zBlackboard::Write<float>(unsigned int, const float &)
// Range: 0x80053620 -> 0x800536C4
bool zBlackboard::Write<float>(float & newValue /* r30 */) {
    // Local variables
    class zVariableBase * var; // r0
    class zVariable * temp; // r1+0x8
}
// signature: zBlackboard::Read<float>(unsigned int, float &) const
// Range: 0x800536F0 -> 0x80053754
bool zBlackboard::Read<float>(float & output /* r31 */) const {
    // Local variables
    class zVariableBase * var; // r0
    class zVariable * temp; // r1+0x8
}
// signature: zBlackboard::Write<int>(unsigned int, const int &)
// Range: 0x80053760 -> 0x800537FC
bool zBlackboard::Write<int>(int & newValue /* r30 */) {
    // Local variables
    class zVariableBase * var; // r0
    class zVariable * temp; // r1+0x8
}
// signature: zBlackboard::Read<int>(unsigned int, int &) const
// Range: 0x80053820 -> 0x80053884
bool zBlackboard::Read<int>(int & output /* r31 */) const {
    // Local variables
    class zVariableBase * var; // r0
    class zVariable * temp; // r1+0x8
}
// Range: 0x80085650 -> 0x8008570C
bool zBlackboard::Register<int>(unsigned int varID /* r27 */, int initValue /* r28 */, bool persistent /* r29 */) {
    // Local variables
    class zVariableBase * * var; // r0

    // References
    // -> struct {} __vt__12zVariable<i>;
}
// Range: 0x800DB1E0 -> 0x800DB2A4
bool zBlackboard::Register<float>(unsigned int varID /* r28 */, float initValue /* f31 */, bool persistent /* r29 */) {
    // Local variables
    class zVariableBase * * var; // r0

    // References
    // -> struct {} __vt__12zVariable<f>;
}
// Range: 0x800DB2B0 -> 0x800DB36C
bool zBlackboard::Register<xMovePoint *>(unsigned int varID /* r27 */, class xMovePoint * initValue /* r28 */, bool persistent /* r29 */) {
    // Local variables
    class zVariableBase * * var; // r0

    // References
    // -> struct {} __vt__24zVariable<P10xMovePoint>;
}
// Range: 0x800DB370 -> 0x800DB42C
bool zBlackboard::Register<zPlayer *>(unsigned int varID /* r27 */, class zPlayer * initValue /* r28 */, bool persistent /* r29 */) {
    // Local variables
    class zVariableBase * * var; // r0

    // References
    // -> struct {} __vt__20zVariable<P7zPlayer>;
}
// Range: 0x800DB430 -> 0x800DB514
bool zBlackboard::Register<xVec3>(unsigned int varID /* r27 */, class xVec3 & initValue /* r28 */, bool persistent /* r29 */) {
    // Local variables
    class zVariableBase * * var; // r0

    // References
    // -> struct {} __vt__17zVariable<5xVec3>;
}
// signature: zBlackboard::Read<xVec3>(unsigned int, xVec3 &) const
// Range: 0x800DCA90 -> 0x800DCB10
bool zBlackboard::Read<xVec3>(class xVec3 & output /* r31 */) const {
    // Local variables
    class zVariableBase * var; // r0
    class zVariable * temp; // r1+0x8
}
// signature: zBlackboard::Write<xMovePoint *>(unsigned int, xMovePoint *const &)
// Range: 0x800DD5A0 -> 0x800DD63C
bool zBlackboard::Write<xMovePoint *>(class xMovePoint * & newValue /* r30 */) {
    // Local variables
    class zVariableBase * var; // r0
    class zVariable * temp; // r1+0x8
}
// signature: zBlackboard::Read<xMovePoint *>(unsigned int, xMovePoint *&) const
// Range: 0x800DD660 -> 0x800DD6C4
bool zBlackboard::Read<xMovePoint *>(class xMovePoint * & output /* r31 */) const {
    // Local variables
    class zVariableBase * var; // r0
    class zVariable * temp; // r1+0x8
}
// signature: zBlackboard::Read<zVariableEventData>(unsigned int, zVariableEventData &) const
// Range: 0x800DF220 -> 0x800DF2B8
bool zBlackboard::Read<zVariableEventData>(class zVariableEventData & output /* r31 */) const {
    // Local variables
    class zVariableBase * var; // r3
    class zVariable * temp; // r3
}
