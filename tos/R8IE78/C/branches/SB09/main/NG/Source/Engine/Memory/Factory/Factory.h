/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Memory\Factory\Factory.h
*/
class Creator _inst; // size: 0x4, address: 0x80753F3C
class Creator _inst; // size: 0x4, address: 0x80753F44
class Creator _inst; // size: 0x4, address: 0x80753F4C
class Creator _inst; // size: 0x4, address: 0x80753F54
class Creator _inst; // size: 0x4, address: 0x80753F5C
class Creator _inst; // size: 0x4, address: 0x80753F64
class Creator _inst; // size: 0x4, address: 0x80753F6C
class Creator _inst; // size: 0x4, address: 0x80753F74
// signature: Memory::Factory::Create<zNPCTemplate>(Memory::eFactoryMemType)
// Range: 0x800F1920 -> 0x800F19B0
class zNPCTemplate * Memory::Factory::Create<zNPCTemplate>() {
    // Local variables
    void * compMem; // r31
}
// Range: 0x800F13C0 -> 0x800F13F4
class Creator * Memory::Creator<7, zNPCSingleSteering, zNPCSteering>::Get() {
    // References
    // -> class Creator _inst;
    // -> struct {} __vt__Q26Memory46Creator<7,18zNPCSingleSteering,12zNPCSteering>;
}
// Range: 0x800F1400 -> 0x800F1434
class Creator * Memory::Creator<1, zNPCBTManager, zNPCLogic>::Get() {
    // References
    // -> class Creator _inst;
    // -> struct {} __vt__Q26Memory37Creator<1,13zNPCBTManager,9zNPCLogic>;
}
// Range: 0x800F1440 -> 0x800F1474
class Creator * Memory::Creator<6, zNPCCombat, zNPCCombat>::Get() {
    // References
    // -> class Creator _inst;
    // -> struct {} __vt__Q26Memory36Creator<6,10zNPCCombat,10zNPCCombat>;
}
// Range: 0x800F1480 -> 0x800F14B4
class Creator * Memory::Creator<16, zNPCQuickTimeCombat, zNPCQuickTimeCombat>::Get() {
    // References
    // -> class Creator _inst;
    // -> struct {} __vt__Q26Memory55Creator<16,19zNPCQuickTimeCombat,19zNPCQuickTimeCombat>;
}
// signature: Memory::Creator<3, zNPCFX, zNPCFX>::CreateV(Memory::Factory *)
// Range: 0x801025B0 -> 0x801025F4
class zNPCFX * Memory::Creator<3, zNPCFX, zNPCFX>::CreateV() {
}
// signature: Memory::Creator<10, zNPCExtraModel, zNPCExtraModel>::CreateV(Memory::Factory *)
// Range: 0x80102600 -> 0x80102660
class zNPCExtraModel * Memory::Creator<10, zNPCExtraModel, zNPCExtraModel>::CreateV() {
    // References
    // -> struct {} __vt__14zNPCExtraModel;
}
// signature: Memory::Creator<16, zNPCQuickTimeCombat, zNPCQuickTimeCombat>::CreateV(Memory::Factory *)
// Range: 0x80102660 -> 0x801026B4
class zNPCQuickTimeCombat * Memory::Creator<16, zNPCQuickTimeCombat, zNPCQuickTimeCombat>::CreateV() {
    // References
    // -> struct {} __vt__19zNPCQuickTimeCombat;
}
// signature: Memory::Creator<5, zNPCPerception, zNPCPerception>::CreateV(Memory::Factory *)
// Range: 0x801026C0 -> 0x80102704
class zNPCPerception * Memory::Creator<5, zNPCPerception, zNPCPerception>::CreateV() {
}
// signature: Memory::Creator<7, zNPCSwarmSteering, zNPCSteering>::CreateV(Memory::Factory *)
// Range: 0x80102710 -> 0x80102754
class zNPCSteering * Memory::Creator<7, zNPCSwarmSteering, zNPCSteering>::CreateV() {
}
// signature: Memory::Creator<7, zNPCSingleSteering, zNPCSteering>::CreateV(Memory::Factory *)
// Range: 0x80102760 -> 0x801027A4
class zNPCSteering * Memory::Creator<7, zNPCSingleSteering, zNPCSteering>::CreateV() {
}
// signature: Memory::Creator<1, zNPCBTManager, zNPCLogic>::CreateV(Memory::Factory *)
// Range: 0x801027B0 -> 0x80102804
class zNPCLogic * Memory::Creator<1, zNPCBTManager, zNPCLogic>::CreateV() {
    // References
    // -> struct {} __vt__13zNPCBTManager;
}
// signature: Memory::Creator<6, zNPCCombat, zNPCCombat>::CreateV(Memory::Factory *)
// Range: 0x80102810 -> 0x801028A8
class zNPCCombat * Memory::Creator<6, zNPCCombat, zNPCCombat>::CreateV() {
    // References
    // -> struct {} __vt__27zNPCCombatCollisionListener;
    // -> struct {} __vt__10zNPCCombat;
}
// signature: Memory::Creator<4, zNPCFXImmediateInstanceLoop, zNPCFXNode>::Create(Memory::Factory *)
// Range: 0x801024A0 -> 0x801024E8
class zNPCFXNode * Memory::Creator<4, zNPCFXImmediateInstanceLoop, zNPCFXNode>::Create() {
    // References
    // -> struct {} __vt__27zNPCFXImmediateInstanceLoop;
}
// signature: Memory::Creator<4, zNPCFXLoopFXScript, zNPCFXNode>::Create(Memory::Factory *)
// Range: 0x801024F0 -> 0x80102548
class zNPCFXNode * Memory::Creator<4, zNPCFXLoopFXScript, zNPCFXNode>::Create() {
    // References
    // -> struct {} __vt__18zNPCFXLoopFXScript;
}
// signature: Memory::Creator<4, zNPCFXOneShotFXScript, zNPCFXNode>::Create(Memory::Factory *)
// Range: 0x80102550 -> 0x801025A4
class zNPCFXNode * Memory::Creator<4, zNPCFXOneShotFXScript, zNPCFXNode>::Create() {
    // References
    // -> struct {} __vt__21zNPCFXOneShotFXScript;
}
